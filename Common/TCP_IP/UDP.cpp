//
//  Rémi Prud'homme - 2000
//

#include "stdafx.h"

#include "UDP.h"
#include "ServiceClient.h"
#include "TraceFunction.h"

DWORD GetLastError(void);

UDP::UDP( )
{
  m_hSocket = INVALID_SOCKET;
}

////////////////////////////////////////////////////////////////////////
//  Function : ReceiveFrom
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Lecture de message par le socket, sauve l'adresse du client
//
/////////////////////////////////////////////////////////////////////////
DWORD UDP::RecvFrom( unsigned char * Buffer, int Len )
{
  DWORD  NumberOfBytesRecvd;
  int FromLen;
  DWORD Flags =  0;

  FromLen =  sizeof( m_addr_reply);

  if ( ::recvfrom( m_hSocket,
                   Buffer,
                   Len,
                   Flags,
                   (sockaddr *)&m_addr_reply,                       
                   (socklen_t *)&FromLen ) == SOCKET_ERROR)
    {
      //
      // Une erreur 
      //
      return GetLastError();
    }

  return NumberOfBytesRecvd;
}


////////////////////////////////////////////////////////////////////////
//  Function : SendTo
//  IN   :  unsigned char * , int Len
//          
//  OUT  :
//  RET  : 
//
//  Notes : envoi d'un buffer sur l'adresse Reply recu lors du RecvFrom
//
/////////////////////////////////////////////////////////////////////////
DWORD UDP::SendTo(unsigned char * Buffer, int Len)
{
  DWORD  NumberOfBytesSent;

  if ( ::sendto(   m_hSocket,
                   Buffer,
                   Len,
                   0,
                   reinterpret_cast<struct sockaddr *> (&m_addr_reply),                       
                   sizeof(m_addr_reply) 
                   ) == SOCKET_ERROR)
    {
      return GetLastError();
    }
  return 0;
}

////////////////////////////////////////////////////////////////////////
//  Function : Close
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
bool UDP::Close()
{
  return !::closesocket( m_hSocket);
}


////////////////////////////////////////////////////////////////////////
//  Function :  Resolve
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : resolve a name and initialize the inter addr for futher trans
//
/////////////////////////////////////////////////////////////////////////
DWORD UDP::Resolve(char * szServerName) 
{
  //
  // Calcul de l'adresse du serveur 
  //
  ServiceClient nsproxy;
  char Hostname[100];
  nsproxy.GetNameServer(Hostname);

  char NsRequest[100];
  char NsResponse[100];

  sprintf(NsRequest, (char*) "get-host-by-name|%s", szServerName);
  nsproxy.Send( (unsigned char*) NsRequest, strlen(NsRequest));
  nsproxy.Recv( (unsigned char*) NsResponse, 100);

  if ( NsResponse[0] == '1')
    {
    strcpy(Hostname, &NsResponse[1]);

    m_addr.sin_addr.s_addr = inet_addr(Hostname);
    m_addr.sin_family = AF_INET;
    m_addr.sin_port = htons(m_Port);
    return 0; // pas d'erreur
    }
  else
    return 1; // erreur
}

 
////////////////////////////////////////////////////////////////////////
//  Function :  ResolveIp
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
DWORD UDP::ResolveIp ( char * szServerNameIP) 
{
  //
  // Calcul de l'adresse du serveur 

  // Pas besoin de résolution de host
  m_addr.sin_addr.s_addr = inet_addr(szServerNameIP);  
  m_addr.sin_port = htons(m_Port);
  m_addr.sin_family = AF_INET;
}

////////////////////////////////////////////////////////////////////////
//  Function : SendBroadcast
//  IN   :   unsigned char * Buffer
//           int Len 
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
DWORD UDP::SendBroadcast( unsigned char * Buffer, int Len)
{
  DWORD  NumberOfBytesSent;

  sockaddr_in addr;

  //
  // Creation d'une adresse de broadcast 
  //
  ZeroMemory(&addr,sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons( m_Port );
  addr.sin_addr.s_addr = htonl ( INADDR_BROADCAST) ;
                      
  if ( ::sendto(m_hSocket,
                Buffer,
                Len,
                0,
                (struct sockaddr *)&addr,                       
                sizeof(addr)                
                ) == SOCKET_ERROR)
    {
      return GetLastError();
    }

  return 0;
}



////////////////////////////////////////////////////////////////////////
//  Function : SetBroadcastOption
//  IN   :    
//  OUT  :
//  RET  : 
//
//  Notes : Configure le socket en mode Broadcast
//
/////////////////////////////////////////////////////////////////////////
bool UDP::SetBroadcastOption( bool EnableBroadcast) 
{
  DWORD bVal;
  //
  // Suppression ou autorisation du mode broadcast
  //
  if ( EnableBroadcast )
    bVal = 1;
  else
    bVal = 0;    

  if ( setsockopt(m_hSocket, SOL_SOCKET, SO_BROADCAST, ( char  *)&bVal, sizeof(int)) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"setsockopt eroor %d.", GetLastError()); 
      return false;
    }

  return true;
}

////////////////////////////////////////////////////////////////////////
//  Function : SetBroadcastOption
//  IN   :    
//  OUT  :
//  RET  : 
//
//  Notes : Change la taille du buffer de reception du socket n
//
/////////////////////////////////////////////////////////////////////////
bool UDP::SetRecvBufferSize( int Size ) 
{
  if ( setsockopt(m_hSocket, SOL_SOCKET, SO_RCVBUF, (char *)&Size, sizeof(int)) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"setsockopt error %d.", GetLastError()); 
      return false;
    }

  return true;
}



