//
// Rémi Prud'homme - 2005
//
#include "stdafx.h"
#include <pthread.h>
#include "Service.h"
#include "TraceFunction.h"
#include "ServiceUdp.h"

#define STATUS_SUCCESS 0
#define THREAD_PRIORITY_TIME_CRITICAL 7

void ThreadListenUdp(LPVOID Parameter);


DWORD GetLastError(void);


////////////////////////////////////////////////////////////////////////
//  Function : ServiceUdp
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
ServiceUdp::ServiceUdp()
{
  m_Shutdown = false;
  m_Err = STATUS_SUCCESS;
}

////////////////////////////////////////////////////////////////////////
//  Function : ~ServiceUdp(
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
ServiceUdp::~ServiceUdp()
{
  if( ! m_Shutdown)
    DestroyService();
}

////////////////////////////////////////////////////////////////////////
//  Function : Shutdown
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Procedures intervenant dans l'arret du service
//
/////////////////////////////////////////////////////////////////////////
void ServiceUdp::Shutdown()
{
  m_Shutdown = true;
}

#define EXITED 16

////////////////////////////////////////////////////////////////////////
//  Function : DestroyService
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Detruit le service
//
/////////////////////////////////////////////////////////////////////////
bool ServiceUdp::DestroyService()
{
  USHORT id;
  TRACE_FUNCTION("ServiceUdp::DestroyService");

  //
  // pour ne pas fermer deux fois
  //
  if( m_Shutdown == true) 
    return false;

  //
  // Signale au thread de s'arreter en placant le drapeau m_Shutdown a true 
  //
  Shutdown();  

  //
  // Attente de l'arret du thread
  // on attent deux secondes que le traitement en cours s'acheve
  // 
  //  pthread_kill(m_hThreadListen, 9);
  
  //
  //fermeture du serveur TCP 
  //
  int ferm;
  DWORD err;

  ferm = m_Connexion.Close();

  if( ferm != 0) 
    {
      err = GetLastError();
    }

  sys_sem_signal(&m_hEventClose);

  if( ferm != 0)
    return false;


  //
  //fermeture du serveur UDP 
  //
  return m_Connexion.Close();
}


////////////////////////////////////////////////////////////////////////
//  Function : OpenService
//  IN   : Port, le port UDP pour lequel le service réponds
//          
//  OUT  :
//  RET  :  true is tout est bien, false dans le cas contraire
//
//  Notes : Créer le service avec le thread avec le port en parametre.
//          
//
/////////////////////////////////////////////////////////////////////////
bool ServiceUdp::OpenService( unsigned short Port)
{
  TRACE_FUNCTION("ServiceUdp::OpenService");

  //
  // Creation du serveur UDP
  // 
  if ( m_Connexion.Open( Port) !=  0)
  {
      return false;
  }


  //
  // Lancement du thread de runtime, et de son semaphore
  //
  m_hThreadListen = sys_thread_new("ServiceUdp",
                                   (void (*)(void *))ThreadListenUdp, 
                                   this, 
                                   0, 
                                   configMINIMAL_STACK_SIZE *2);
  sys_sem_new(&m_hEventClose, 1);
  return true;
}


////////////////////////////////////////////////////////////////////////
//  Function : ThreadListenUdp
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Le coeur du service
//
/////////////////////////////////////////////////////////////////////////
void ThreadListenUdp(LPVOID Parameter)
{
  ServiceUdp* Service = (ServiceUdp*) (Parameter);
  int len = MAX_SIZE_COMMAND_IN;
  char ParamBuffer[MAX_SIZE_COMMAND_IN];
  bool CommandDone = false;

  while( 1 )
    {
      if( Service->m_Shutdown)  
        break;
      
      if ( Service->m_Connexion.ReadString( ParamBuffer, len) )
        {
          Service->m_Parser.ParseString(ParamBuffer);

          //
          // Decoupage en blocs logiques et stockage de le commande
          //
          StandartDebugOutput.OutputDebug(LEVEL_FUNCTION_INNER , (char*)"Service request UDP  %s.", ParamBuffer);
          
          Service->Analyse();
        } 
    }
}



