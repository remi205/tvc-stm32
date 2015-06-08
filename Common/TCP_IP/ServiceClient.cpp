//
// Rémi Prud'homme, 2005
//

#include "stdafx.h"

#include "ServiceClient.h"
#include "TraceFunction.h"
#include "ParameterParser.h"
#include "UDPClient.h"

char ServiceClient::m_NameServer[50] = "";

/////////////////////////////////////////////////////////////////////////
//  Function : ServiceClient
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Constructeur
//
/////////////////////////////////////////////////////////////////////////
ServiceClient::ServiceClient()
{
  m_NameServer[0] = 0;
}


/////////////////////////////////////////////////////////////////////////
//  Function : GetNameServer
//
//  IN   : 
//          
//  OUT  : NameServer, la chaine qui contient le host du serveur de noms.
//  RET  : 
//
//  Notes : Recherche par un daatagram UDP le serveur de noms.
//
/////////////////////////////////////////////////////////////////////////
bool ServiceClient::GetNameServer( char * NameServer)
{
  UdpClient uns;
  char Response[50];
  bool ret = false;

  //
  // On ne fait qu'une seule fois la recheche par Service.
  //
  if ( strlen(m_NameServer) > 0 )
  {
    // deja initialisé
    strcpy(NameServer,  m_NameServer);
    return true;
  }

  uns.Open(NS_PORT);

  //
  // Tentative de localisation du serveur de noms par une requete broadcast UDP
  //
  uns.SetBroadcastOption(true);

  unsigned short len = ( unsigned short ) strlen ((char*) "name-server-ip?");
  uns.UDP::SendBroadcast((unsigned char *)&len, 2);
  uns.UDP::SendBroadcast((unsigned char *)"name-server-ip?", len);

  // on attend la réponse
  uns.ReadString(( char *)Response, 50);
  uns.Close();  

  if ( Response[0] == '1')
    {
      // analyse de la reponse
      ParameterParser param;
      param.ParseString( Response);

      strcpy(m_NameServer, param.GetString(1));
      ret = true;
    }
  else
    {
      // analyse de la reponse
      printf((char*)  "Name Server not found : \n");
    }
  return ret;
}



/////////////////////////////////////////////////////////////////////////
//  Function : Connect
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Etablit une connection vers le service "ServiceName"
//
/////////////////////////////////////////////////////////////////////////
bool ServiceClient::Connect( char * ServiceName )
{
  unsigned short Port;
  char Hostname[100];
  char Hostname1[12];

  // obention du hostname pour le service demandé
  GetHost(ServiceName, Hostname, &Port);
  if ( Hostname == 0)
    return false;

  // Avant de liberere Hostname, on copie la chaine
  strcpy(Hostname1, Hostname);

  // On free le resultat donnée par GetHost
  free(Hostname);

  //
  // on se connecte le ClientTCP sur le service demandé
  //
  return m_Conn.Open( Hostname1, Port) == 0;
}


/////////////////////////////////////////////////////////////////////////
//  Function : GetHost
//
//  IN   : ServiceName , le nom du service
//          
//  OUT  : 
//  RET  : NULL si le service n'exite pas
//        dans les autres cas, la chaine devra être libere par l'appellant
//  Notes : retourn le hostname du service donné en parametre
//
/////////////////////////////////////////////////////////////////////////
bool ServiceClient::GetHost(char * ServiceName , 
                            char * ServiceHost, 
                            unsigned short * ServicePort)
{
  if ( ! GetNameServer( m_NameServer ) )
    // on a pas trouvé de server alors 
    return false;
  
  // on se connecte au serveur de noms
  UdpClient ns;

  ns.Open(NS_PORT);
  ns.SetBroadcastOption(true);

  //
  // on demande le port et l'adresse du service
  //
  char NsRequest[100];
  char NsResponse[100];

  sprintf(NsRequest, (char*) "get-host|%s", ServiceName);

  unsigned short len = ( unsigned short ) strlen ( NsRequest);
  ns.UDP::SendBroadcast((unsigned char *)&len, 2);
  ns.UDP::SendBroadcast((unsigned char *)NsRequest, len);

#if 0
  ns.ResolveIp(m_NameServer);
  ns.SendString( (unsigned char *)&NsRequest, (unsigned long) strlen(NsRequest));
#endif

  ns.ReadString( NsResponse, 100);
  ns.Close();

  ParameterParser Parser;   
  Parser.ParseString(NsResponse);
  
  if (  strcmp( Parser.GetString(0), "1") == 0)
    {
      strcpy( ServiceHost , Parser.GetString(1));
      * ServicePort = Parser.GetInteger(2);
    }
  else
      return false;

  return true;
}


/////////////////////////////////////////////////////////////////////////
//  Function : GetPort
//
//  IN   : ServiceName , le nom du service
//          
//  OUT  : 
//  RET  :  0 si le service n'existe pas. 
//
//  Notes : retourn le port TCP  du service donné en parametre
//
/////////////////////////////////////////////////////////////////////////
unsigned int ServiceClient::GetPort(char * ServiceName )
{

  if ( ! GetNameServer( m_NameServer ) )
    // on a pas trouvé de server alors 
    return 0;
  
  // on se connecte au serveur de noms
  UdpClient ns;

  ns.Open(NS_PORT);
  ns.ResolveIp(m_NameServer);

  //
  // on demande le port et l'adresse du service
  //
  char NsRequest[100];
  char NsResponse[100];
  unsigned int Port;

  sprintf(NsRequest,(char*) "get-port|%s", ServiceName);

  unsigned short len = ( unsigned short ) strlen ( NsRequest);
  ns.UDP::SendBroadcast((unsigned char *)&len, 2);
  ns.UDP::SendBroadcast((unsigned char *)NsRequest, len);

#if 0
  ns.SendString( (unsigned char *)&NsRequest, ( unsigned long )strlen(NsRequest));
#endif

  ns.ReadString( NsResponse, 100);
  ns.Close();

  ParameterParser Parser;   
  Parser.ParseString(NsResponse);
  
  if (  strcmp( Parser.GetString(0),(char*) "1") == 0)
    Port = Parser.GetInteger(1);
  else
    {
      return 0;
    }
  return Port;
}

/////////////////////////////////////////////////////////////////////////
//  Function : Send
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : On envoi un buffer dans le stream
//
/////////////////////////////////////////////////////////////////////////
unsigned long ServiceClient::Send( unsigned char * Buffer,  unsigned long len )
{
  return m_Conn.Send( Buffer, len);
}

/////////////////////////////////////////////////////////////////////////
//  Function : Recv
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : On lit du stream en provenance du service un buffer
//
/////////////////////////////////////////////////////////////////////////
unsigned long ServiceClient::Recv( unsigned char * Buffer,  unsigned long len )
{
  return m_Conn.Recv( Buffer, len);
}

/////////////////////////////////////////////////////////////////////////
//  Function : Close
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes :  On ferme la connection vers le service
//
/////////////////////////////////////////////////////////////////////////
bool ServiceClient::Close()
{
  // On ferme la connection
  return m_Conn.Close() == 0;
}

/////////////////////////////////////////////////////////////////////////
//  Function : GetVersion
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes :  Demande la version du service
//
/////////////////////////////////////////////////////////////////////////
char * ServiceClient::GetVersion( char * ServiceName, char * Version )
{

  if ( ! Connect( ServiceName) )
  {
    Version[0] = 0;
    return (char *)"";
  }

 //
  // on demande le port et l'adresse du service
  //
  char Request[100];
  char Response[100];

  sprintf(Request, (char*)"get-version\n");
  Send( (unsigned char *)&Request, (unsigned long) strlen(Request));
  m_Conn.ReadLine( Response, 100);

  ParameterParser Parser;   
  Parser.ParseString(Response);
  
  if (  strcmp( Parser.GetString(0),(char*) "1") == 0)
      strcpy( Version , Parser.GetString(1));
  else
    {
      Close();
      Version[0] = 0;
      return (char *)"";
    }

    Close();
    return Version;
}
