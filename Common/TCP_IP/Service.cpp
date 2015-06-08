//
//  Rémi Prud'homme - 2000
//

// ----------------------------------------------------------------------------- //
//                          
//          Module d'implementation de la classe CService
//          Avril 2000
//          
//
// ----------------------------------------------------------------------------- //

#include "stdafx.h"

#include "Service.h"
#include "TraceFunction.h"
#include <signal.h>

DWORD GetLastError(void);


void ThreadListen(LPVOID parametre);

////////////////////////////////////////////////////////////////////////
//  Function :  CService
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes :  Constructeur 
//
/////////////////////////////////////////////////////////////////////////
CService::CService( unsigned short NumPort, bool KeepAlive, char * sep, unsigned char EndChar ) 
  : m_Connexion(NumPort, EndChar) , m_Parser (sep)  

{
  m_Shutdown = false;

  m_KeepAlive = KeepAlive;

  // autorun
  m_ProcessCommand = true;


  // on lit la version du service ( en ressourse)
  GetVersion();
}

////////////////////////////////////////////////////////////////////////
//  Function : ~CService
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Destructeur, Destruit le service
//
/////////////////////////////////////////////////////////////////////////
CService::~CService()
{
  if( ! m_Shutdown)
    DestroyService();
}


////////////////////////////////////////////////////////////////////////
//  Function : OpenService
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Ouverture du service. Preparation du serveur TCP et lancement 
//          du thread de runtime
//
/////////////////////////////////////////////////////////////////////////
bool CService::OpenService()
{
  DWORD ThreadID = 0 ;

  //
  // Preparartion du serveur tcp : bind de la socket de base du serveur
  //
  if( ! m_Connexion.Open(0)) 
    {
      //
      // L'ouverture s'est mal passée
      //
      m_Err = m_Connexion.GetLastError();
      m_Shutdown = true;
      return false;
    }

  //
  // Lancement du thread de runtime
  //
  m_hThreadListen = sys_thread_new("Service",
                                   (void (*)(void *))ThreadListen, 
                                   this, 
                                   0, 
                                   configMINIMAL_STACK_SIZE *2);
  sys_sem_new(&m_hEventClose, 1);
  return true;
}

////////////////////////////////////////////////////////////////////////
//  Function : Shutdown
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes :  Mise en place du drapeau demandant l'arret du thread de runtime
//
/////////////////////////////////////////////////////////////////////////
inline void CService::Shutdown()
{
  m_Shutdown = true;
}


////////////////////////////////////////////////////////////////////////
//  Function :  DestroyService
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes :  Arret du service : arret du tread de runtime
//
/////////////////////////////////////////////////////////////////////////
bool CService::DestroyService()
{
  if( m_Shutdown == true) 
    return false;// pour ne pas fermer deux fois

  //
  // Signale au thread de s'arreter en placant le drapeau m_Shutdown a true 
  //
  Shutdown();  

  //
  // Attente de l'arret du thread
  // 

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

  return true;
}

////////////////////////////////////////////////////////////////////////
//  Function :  ThreadListen
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes :  Le Thread de RunTime   C'est lui qui fait tout le boulot du service
//
/////////////////////////////////////////////////////////////////////////
void ThreadListen(LPVOID parametre)
{
  CService* Service = (CService*) (parametre);
  int len = MAX_SIZE_COMMAND_IN;
  char ParamBuffer[MAX_SIZE_COMMAND_IN];
  int NbSizeZero = 0;

  //  assert(Service->m_Connexion.IsOpened());

  while( 1 )
    {
      if( Service->m_Shutdown)  
        break;
  
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"Attente de connection sur %d.", Service->m_Connexion.GetSocket());
      // connexion d'un clien
      Service->m_Connexion.Accept(); 
    
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"Service TCP %d accepté.", Service->m_Connexion.GetPort());

    receive :

      //
      // Deuxieme fois 
      //
      if(Service->m_Shutdown)
        break;

      // reception de la commande      
      if( Service->m_Connexion.ReadLine(ParamBuffer,len) == 0)
        {
          DWORD Err = GetLastError();
          switch(Err)
            {
#if 0
            case ENETDOWN : 
            case ENOTCONN :
            case ENETRESET : 
            case ESHUTDOWN : 
            case ECONNABORTED : 
            case ETIMEDOUT : 
            case ECONNRESET :  
              NbSizeZero = 0;
              continue;
              break;
#endif
            default : 
              // Si le client n'envois plus de commande pendant un certain temps. On attend une 
              // connection de la part d'un autre client.
              if( ++NbSizeZero < 3 && Service->m_KeepAlive == true)
                goto receive;
              else
                continue;
            }
        }    

      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,(char*) "Service request %s.", ParamBuffer);
   
      //
      // Decoupage en blocs logiques et stockage de le commande
      //
      Service->m_Parser.ParseString(ParamBuffer);

      
      //
      // Traitement de la commande, attention a l'ordre des  
      //
      if(  Service->PreAnalyse() && 
           Service->Analyse() && 
           Service->m_KeepAlive) 
        goto receive;
      else
        {
          StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,(char*)"Service closed on end of processing.");
          Service->m_Connexion.CloseClient();
        }
    }
}


////////////////////////////////////////////////////////////////////////
//  Function :  PreAnalyse
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes :  Analyse des commandes standards d'un service. Rend true
//           si il faut poursuivre l'analyse. On false si la commande 
//           a été traitée
//
/////////////////////////////////////////////////////////////////////////
bool CService::PreAnalyse()
{
  TRACE_FUNCTION((char*) "CService::PreAnalyse");

  bool ret = false;
  bool Ack = false;
  bool SendReponse  = true;

  // m_Parser contient les parametres du profile à appliquer

  // On va construire les différentes stuctures pour permettre au thread
  // de détection d'envoyer 
  char * Command =  m_Parser.GetString(0);  

  if ( ! strcmp( Command, "stop-service"))
    {
      // on ne prend plus aucune commande
      m_ProcessCommand = false;
      Ack = true;
    }
  else if (! strcmp( Command, "start-service"))
    {
      // on reprend les commandes
      m_ProcessCommand = true;
      Ack = true;
    }
  else if (! strcmp( Command, "kill-service"))
    {
      // On envoi l'ACK et ensuite seulement on détruit le service
      m_Connexion.Send( (unsigned char *) "1\n", ( unsigned long )strlen("1\n") );    
      SendReponse = false;

      StandartDebugOutput.TraceEventSignal((char*)"m_hEventClose", (char*)"sur la commande kill-service");
    }
  else if (! strcmp( Command, "set-log-level"))
    {
      DWORD Old = StandartDebugOutput.SetLevelTrace( m_Parser.GetInteger(1));

      char Mes[15];
      DWORD len =  sprintf( Mes, "1|%d\n", Old);

      m_Connexion.Send( (unsigned char *) Mes  , len  );    
      SendReponse = false;
    }
  else if (! strcmp( Command, "get-version"))
    {
      char Mes[30];
      DWORD len =  sprintf( Mes, "1|%s\n", GetVersion());

      m_Connexion.Send( (unsigned char *) Mes  , len  );    
      SendReponse = false;
    }

  else
    // la commande n'a pas été traitée
    {
      ret = m_ProcessCommand;
    }

  if ( SendReponse && Ack )
    m_Connexion.Send( (unsigned char *) "1\n", ( unsigned long )strlen("1\n") );    

  if ( SendReponse && ! m_ProcessCommand )
     m_Connexion.Send( (unsigned char *) "0\n", ( unsigned long )strlen("0\n") ); 

  // 
  // La commande a été traitée.
  //
  return ret;
}



////////////////////////////////////////////////////////////////////////
//  Function : WaitForClose
//
//  IN   :   
//          		  
//  OUT  : 
//  RET  : 
//
//  Notes : Synchonise le thread appellant sur la commmande 
//
////////////////////////////////////////////////////////////////////////
bool CService::WaitForClose()
{
  TRACE_FUNCTION((char*)"CService::WaitForClose");

  sys_arch_sem_wait(&m_hEventClose, 0);

  return true;
}



////////////////////////////////////////////////////////////////////////
//  Function : GetVersion
//
//  IN   :   
//          		  
//  OUT  : 
//  RET  : 
//
//  Notes : rend la version du service. 
//
////////////////////////////////////////////////////////////////////////
char *  CService::GetVersion()
{
  if ( strlen(m_Version) == 0 )
    {
      //      StringModuleVersion(m_Version);
    }

  return m_Version;
}
