//
// Rémi Prud'homme - 2005
//

#include "stdafx.h"

#include "ServiceDispo.h"
#include "TraceFunction.h"



////////////////////////////////////////////////////////////////////////
//  Function : Analyse
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : analyse des commandes et traiement
//
/////////////////////////////////////////////////////////////////////////
bool ServiceDispo::Analyse()
{
  TRACE_FUNCTION("ServiceDispo::Analyse");

  bool ret = false;
  bool Ack = false;
  bool SendReponse = true;
  // m_Parser contient les parametres de la fonction à appliquer
  char * Command =  m_Parser.GetString(0);

  if( ! strcmp(Command,"ping"))
    {
      StandartDebugOutput.OutputDebug(LEVEL_FUNCTION_INNER, "ping command received.");

      m_Connexion.SendString((unsigned char *)"1|echo", ( int)strlen("1|echo"));
      SendReponse = false;
    }

  if ( SendReponse && Ack )
    m_Connexion.SendString((unsigned char *)"1", ( int)strlen("1"));

  if ( SendReponse && !Ack )
    m_Connexion.SendString((unsigned char *)"0", ( int)strlen("0"));
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
bool ServiceDispo::OpenService( unsigned short Port)
{
  TRACE_FUNCTION("ServiceUdp::OpenService");

  bool ret = ServiceUdp::OpenService(Port);
 

  return ret ;
}
