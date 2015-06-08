//
// Rémi Prud'homme - 2002-2004
//
#include "stdafx.h"

#include "UDPClient.h"

DWORD GetLastError(void);

 
////////////////////////////////////////////////////////////////////////
//  Function :  UdpClient
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
UdpClient::UdpClient( )
  : UDP()
{
}

////////////////////////////////////////////////////////////////////////
//  Function : Initialize
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Cree le socket UDP ( DGRAM)
//
/////////////////////////////////////////////////////////////////////////
DWORD UdpClient::Open( unsigned int Port)
{
  m_Port = Port;
  if ( ( m_hSocket = ::socket(AF_INET,SOCK_DGRAM, IPPROTO_UDP)) == INVALID_SOCKET)
    {
      return GetLastError();
    }
  return 0;
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
DWORD UdpClient::SendTo( unsigned char * Buffer, int Len, sockaddr * addr)
{
  DWORD  NumberOfBytesSent;

  if ( ::sendto( m_hSocket,
                 Buffer,
                 Len,
                 0,
                 addr,                       
                 sizeof(sockaddr_in)) == SOCKET_ERROR)
    {
      return GetLastError();
    }
  return 0;
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
int UdpClient::ReadString( char * Buf, DWORD Len )
{
  DWORD CarReaded = 0;
  DWORD dwErr;
  int sizeReply = sizeof( m_addr_reply);
 
  int len;
  unsigned short Len2 = 0;

  // Les string sont envoyées dans le format Len, String en une trame.
  if ( ::recvfrom(m_hSocket,
                  (char * )&Len2,
                  2,
                  0,
                  ( sockaddr *)&m_addr_reply,
                  (socklen_t *)&sizeReply
                  ) == 2 )
    {
      // 10 ms delay
      //      ::Sleep(10);

      // Lecture de la string.
      if ( (len = ::recvfrom(m_hSocket,
                             (char * ) Buf,
                             Len2,
                             0,
                             (sockaddr *)&m_addr_reply,
                             (socklen_t *)&sizeReply
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
DWORD UdpClient::SendString( unsigned char * Buffer, unsigned short Len)
{
  char Cmd [256];
  unsigned short * p;

  SendTo( (unsigned char *)&Len,  2, reinterpret_cast<sockaddr *>(&m_addr));
  return  SendTo( (unsigned char *)Buffer, Len, reinterpret_cast<sockaddr *>(&m_addr));
}
