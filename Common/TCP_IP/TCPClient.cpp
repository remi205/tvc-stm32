//
// R�mi Prud'homme - 2002-2004
//

#include "stdafx.h"
#include "TCPClient.h"
#include "TraceFunction.h"


////////////////////////////////////////////////////////////////////////
//  Function : TcpServeurSimple
//  IN   : 
//         
//  OUT  :
//  RET  : 
//
//  Notes :
//
/////////////////////////////////////////////////////////////////////////
TcpClientSimple::TcpClientSimple( ) 
{ 
  m_hSocket = INVALID_SOCKET;
  m_Flags = 0;

  m_CharEnd = '\n';
}


/////////////////////////////////////////////////////////////////////////
//  Function : Close
//  RET  : ERR_WSA, ERR_INIT, ERR_SUCCESS
//
//  Notes : Fonction export�e. Ferme la communication r�seau avec
//          le serveur Psy. Le Thread de r�ception se termine.
////////////////////////////////////////////////////////////////////////
int TcpClientSimple::Close(void)
{
  TRACE_FUNCTION("TcpClientSimple::Close");
  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"Close socket = %d",m_hSocket);

  if ( m_hSocket != INVALID_SOCKET )
    DoGracefulShutdown();

  return 0;
}


////////////////////////////////////////////////////////////////////////
//  Function : IsDottedAddress
//  IN   :  char * Ip
//          
//  OUT  :
//  RET  :  bool
//
//  Notes : rend true l'adresse ip est sous la forme "xxx.xxxx.xxx.xxx"
//          Impl�mentation simpliste
//
/////////////////////////////////////////////////////////////////////////
bool IsDottedAddress ( char * Ip )
{
  if ( isdigit(Ip[0]) )
    return true;
  else
    return false;
}


/////////////////////////////////////////////////////////////////////////
//  Function : Open
//  RET  : ERR_WSA, ERR_BUSY, ERR_INIT, ERR_SUCCESS
//
//  Notes : Fonction export�e. Initialise la communication r�seau
//          avec le serveur. 
////////////////////////////////////////////////////////////////////////
int TcpClientSimple::Open( char * sHostName , unsigned short Port)
{
  TRACE_FUNCTION("TcpClientSimple::Open");
  sockaddr_in adr;         // destination socket

  ::ZeroMemory(&adr,sizeof(adr));

  if ( IsDottedAddress( sHostName ) )
    {
      // Pas besoin de r�solution de host
      adr.sin_addr.s_addr = inet_addr(sHostName);  
      adr.sin_port = htons(Port);
      adr.sin_family = AF_INET;
    }
  else
    {
      // il faut r�soudre le host pour avoir son adresse IP
      // struct hostent *host;
      //      host = ds_gethostbyname(sHostName);
      //if (host == NULL)
        {
          StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"gethostbyname %s error %d.", sHostName, GetLastError());

          m_iWSAError = GetLastError();        
          return m_iWSAError;
        }


      //      memcpy(&(adr.sin_addr),host->h_addr,host->h_length);
      //      adr.sin_family = host->h_addrtype;
      adr.sin_port = htons(Port);
      adr.sin_family = AF_INET;
    }

  m_hSocket = ::socket(AF_INET, SOCK_STREAM, 0); 
  if (m_hSocket == INVALID_SOCKET)
    {
      m_iWSAError = GetLastError();        
      return m_iWSAError;
    }

  if (::connect(m_hSocket, (sockaddr *) &adr, sizeof(adr)) 
      == SOCKET_ERROR)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"Connect error on %s: port  %d.", sHostName, Port);

      closesocket(m_hSocket); 
      m_iWSAError = GetLastError();        
      return 1;
    }

  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"Connect success on %s: socket = %d.", sHostName, m_hSocket);
  return 0;
}


/////////////////////////////////////////////////////////////////////////
//  Function : Initialize
//  RET  : ERR_WSA, ERR_BUSY, ERR_INIT, ERR_SUCCESS
//
//  Notes : Fonction export�e. Initialise la communication r�seau
//          avec le serveur . 
////////////////////////////////////////////////////////////////////////
int TcpClientSimple::Open( sockaddr_in * AdressIp)
{
  TRACE_FUNCTION("TcpClientSimple::Close");
  m_hSocket = ::socket(AF_INET, SOCK_STREAM, 0); 
  if (m_hSocket == INVALID_SOCKET)
    {
      m_iWSAError = GetLastError();        

      return m_iWSAError;
    }

  if (::connect(m_hSocket, (sockaddr *) AdressIp, sizeof(sockaddr_in)) 
      == SOCKET_ERROR)
    {

      return GetLastError();
    }

  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"connect success : socket =  %d.",m_hSocket);

  return 0;
}

////////////////////////////////////////////////////////////////////////
//  Function : Recv
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Lecture d'un message du socket client
//
/////////////////////////////////////////////////////////////////////////
unsigned long TcpClientSimple::Recv(unsigned char * Buffer,  unsigned long len )
{
  TRACE_FUNCTION("TcpClientSimple::Recv");
  

  int ByteReturned = ::recv(m_hSocket , ( char *) Buffer, len, m_Flags);
  if (   ByteReturned == 0 )
    {
      m_iWSAError = GetLastError();
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"TcpClientSimple::Recv : error %d", m_iWSAError);
      return false;
    }
  return true;
}


////////////////////////////////////////////////////////////////////////
//  Function : Send
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Envoi d'un message vers le client
//
/////////////////////////////////////////////////////////////////////////
unsigned long TcpClientSimple::Send( unsigned char * Buffer,  unsigned long len )
{
  TRACE_FUNCTION("TcpClientSimple::Send");

  int ByteSended =  ::send(m_hSocket , ( char *)Buffer, len, m_Flags);
  if (   ByteSended == 0 )
    {
      m_iWSAError = GetLastError();
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"TcpClientSimple::Send : error %d", m_iWSAError);
      return false;
    }

  return true;
}

////////////////////////////////////////////////////////////////////////
//  Function : DoGracefulShutdown
//  IN   : 
//        
//  OUT  :
//  RET  :  
//
//  Notes :  Do a graceful shutdown of a the given socket sock.
//           as per the documentation of the shutdown API.
//
/////////////////////////////////////////////////////////////////////////
BOOL TcpClientSimple::DoGracefulShutdown()
{
  TRACE_FUNCTION("TcpClientSimple::DoGracefulShutdown");
  BOOL bRetVal = FALSE;

#if 0
  WSAEVENT hEvent = WSA_INVALID_EVENT;
  long lNetworkEvents = 0;
  int status = 0;
    

  hEvent = ::WSACreateEvent();
  if (hEvent == WSA_INVALID_EVENT)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"DoGracefulShutdown: WSACreateEvent failed: %d\n",  GetLastError());
      goto CLEANUP;
    }

  lNetworkEvents = FD_CLOSE;
  if ( ::WSAEventSelect(m_hSocket, hEvent, lNetworkEvents) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"DoGracefulShutdown: WSAEventSelect failed: %d",   GetLastError());
      goto CLEANUP;
    }

    if ( ::shutdown(m_hSocket, SD_SEND) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: shutdown failed: %d",   GetLastError());
      goto CLEANUP;
    }

    if ( ::WaitForSingleObject(hEvent, INFINITE) != WAIT_OBJECT_0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: WaitForSingleObject failed: %d", GetLastError());
      goto CLEANUP;
    }

  if (closesocket(m_hSocket) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: closesocket failed: %d", GetLastError());
      goto CLEANUP;
    }

  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"Socket %d has been closed gracefully", m_hSocket);
  m_hSocket = INVALID_SOCKET;
  bRetVal = TRUE;
    
 CLEANUP:

  if (hEvent != WSA_INVALID_EVENT)
    {
      // WSACloseEvent(hEvent);
      hEvent = WSA_INVALID_EVENT;
    }

  if (m_hSocket != INVALID_SOCKET)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"DoGracefulShutdown: Can't close socket gracefully. So, closing it anyway ... ");
      closesocket(m_hSocket);
      m_hSocket = INVALID_SOCKET;
    }
#endif
    
  return bRetVal;
}


////////////////////////////////////////////////////////////////////////
//  Function : DisableNaggle
//  IN   : 
//        
//  OUT  :
//  RET  :  
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
bool TcpClientSimple::DisableNaggle()
{
  TRACE_FUNCTION("TcpClientSimple::DisableNaggle");
#if 0
  char val = 1;
  if ( setsockopt( m_hSocket, IPPROTO_TCP ,  TCP_NODELAY, &val, sizeof(char) ))
    return true;
  else
#endif
    return false;
}

////////////////////////////////////////////////////////////////////////
//  Function : ReadLine
//  IN   : 
//        
//  OUT  :
//  RET  :  Le nombre de caract�re lus
//
//  Notes : Lit une ligne termin�r par le charactere CharEnd non compris
//
/////////////////////////////////////////////////////////////////////////
int TcpClientSimple::ReadLine( char * Buf, DWORD Len )
{
  TRACE_FUNCTION("TcpClientSimple::ReadLine");

  DWORD CarReaded = 0;
  char Char;
  do
    {
      if ( ::recv(m_hSocket, (char * )&Char, 1, m_Flags) == 1 )
        Buf[CarReaded] = Char;
      else
        return 0;

      CarReaded++;
    }
  while ( Char != m_CharEnd && CarReaded < Len);

  Buf[CarReaded-1] = 0;
  return CarReaded-1;
}
