//
// Rémi Prud'homme, 2000
//

#include <stdafx.h>



#include "UDPServer.h"
#include "TraceFunction.h"


DWORD GetLastError(void);


////////////////////////////////////////////////////////////////////////
//  Function : UDPServer
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
UDPServer::UDPServer()
  : UDP ()
{
}


////////////////////////////////////////////////////////////////////////
//  Function : InitServer
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
DWORD UDPServer::Open(unsigned int Port)
{
  if ( ( m_hSocket = ::socket(AF_INET,SOCK_DGRAM, 0)) == INVALID_SOCKET)
    {
      perror("socket");
      return GetLastError();
    }
    
  ZeroMemory(&m_addr,sizeof(m_addr));
  m_addr.sin_family = AF_INET;
  m_addr.sin_port = htons(Port );
  m_addr.sin_addr.s_addr = htonl(INADDR_ANY) ;


  if ( ::bind( m_hSocket, (const struct sockaddr *)&(m_addr), sizeof(struct sockaddr_in)) == SOCKET_ERROR)
    {
      perror("bind");
      return ::GetLastError();
    }

  return 0;
}



////////////////////////////////////////////////////////////////////////
//  Function : RecvFrom
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
DWORD UDPServer::RecvFrom (unsigned char * Buffer, int Len , sockaddr * addr_reply, int Fromlen)
{
  DWORD  NumberOfBytesRecvd;
  socklen_t  FromLen = Fromlen;

  DWORD Flags =  0;

  FromLen =  sizeof( m_addr_reply);

  if ( ::recvfrom( m_hSocket,
                   Buffer,
                   Len,
                   Flags,
                   addr_reply,                       
                   &FromLen 
                   ) == SOCKET_ERROR)
    {
      //
      // Une erreur 
      //
      DWORD err = GetLastError();
      return 0;
    }

  return NumberOfBytesRecvd;
}


////////////////////////////////////////////////////////////////////////
//  Function : SendTo
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
DWORD UDPServer::SendTo( unsigned char * Buffer, int Len, sockaddr * to)
{
  DWORD  NumberOfBytesSent;
  socklen_t  FromLen = sizeof(to);

  if ( ::sendto(  
                m_hSocket,
                Buffer,
                Len,
                0,
                to,                       
                FromLen
                ) == SOCKET_ERROR)
    {
      DWORD err = GetLastError();
      return err;
    }
  return 0;
}


////////////////////////////////////////////////////////////////////////
//  Function : RecvFromAny
//  IN   :    
//            
//  OUT  :    unsigned char * Buffer
//           int Len
//  RET  :   
//
//  Notes : m_addr est normalement une adresse ANY bindé sur le socket
//
/////////////////////////////////////////////////////////////////////////
DWORD UDPServer::RecvFrom (unsigned char * Buffer, int Len )
{  
  return RecvFrom( Buffer, Len,(struct sockaddr *) &m_addr_reply, sizeof(m_addr_reply));
}



////////////////////////////////////////////////////////////////////////
//  Function : ReadString
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
int UDPServer::ReadString( char * Buf, DWORD Len )
{
  DWORD CarReaded = 0;
  DWORD dwErr;
  socklen_t sizeReply = sizeof( m_addr_reply);
 
  int len;
  unsigned short Len2 = 0;

  // Les string sont envoyées dans le format Len, String en une trame.
  if ( ::recvfrom(m_hSocket,
                  (char * )&Len2,
                  2,
                  0,
                  ( sockaddr *)&m_addr_reply,
                  &sizeReply
                  ) == 2 )
    {
      // Lecture de la string.
      if ( (len = ::recvfrom(m_hSocket,
                             (char * ) Buf,
                             Len2,
                             0,
                             ( sockaddr *)&m_addr_reply,
                             &sizeReply
                             )) == Len2 )
        {

          Buf[Len2] = 0;
          return Len2;
        }
    }
  else
    {
      dwErr = GetLastError();
      return 0;
    }

  return 0;
}


////////////////////////////////////////////////////////////////////////
//  Function : SendString
//  IN   :   unsigned char * Buffer
//           int Len 
//  OUT  :
//  RET  : 
//
//  Notes : Envoie un chaine dans le format longeur, data
//
/////////////////////////////////////////////////////////////////////////
DWORD UDPServer::SendString( unsigned char * Buffer, unsigned short Len)
{
  DWORD CarReaded = 0;
  DWORD dwErr;
  int sizeReply = sizeof( m_addr_reply);
 
  int len;
  unsigned short Len2 = Len;

  // Les string sont envoyées dans le format Len, String en une trame.
  if ( ::sendto(m_hSocket,
                  (char * )&Len2,
                  2,
                  0,
                  ( sockaddr *)&m_addr_reply,
                  sizeReply
                  ) == 2 )
    {
      // Lecture de la string.
      if ( (len = ::sendto(m_hSocket,
                          (char * ) Buffer,
                           Len2,
                           0,
                           ( sockaddr *)&m_addr_reply,
                           sizeReply
                           )) == Len2 )
        {
       ;
        }
    }
  else
    {
      dwErr = GetLastError();
      return 0;
    }

  return 0;
}





