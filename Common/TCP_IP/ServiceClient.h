//
// Rémi Prud'homme, 2005
//
//
// Class d'initialisation d'un client pour service. Il engloble la gestion
// du serveur de noms pour obtenir l'adresse du host et son port pour le service
// client
//
//
#pragma once

#include "TCPClient.h"

#define NS_PORT 3435

class ServiceClient
{

  TcpClientSimple m_Conn;

  

public:
  static char m_NameServer[50];

  ServiceClient();

  bool GetNameServer( char * NameServer);

  bool Connect( char * ServiceName );

  bool GetHost(char * ServiceName , char * ServiceHost, unsigned short * ServicePort);
  unsigned int GetPort(char * ServiceName );

  char * GetVersion( char * ServiceName , char * Version);

  unsigned long Send( unsigned char * Buffer,  unsigned long len );
  unsigned long Recv( unsigned char * Buffer,  unsigned long len );
  bool Close();
};
