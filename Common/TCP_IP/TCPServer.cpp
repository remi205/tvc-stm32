//
// Rémi Prud'homme 2002-2004
//

#include "stdafx.h"


#include "TCPServer.h"
#include "TraceFunction.h"


void TranslateSocketError(DWORD err)
{
 char message[300];

  sprintf(message, (char*) "Net Error");

#if 0
  switch(err)
    {
    case WSAEACCES :        _stprintf(message,"WSAEACCES"); break;
    case WSAEADDRINUSE :    _stprintf(message,"WSAEADDRINUSE"); break;
    case WSAEADDRNOTAVAIL : _stprintf(message,"WSAEADDRNOTAVAIL"); break;
    case WSAEAFNOSUPPORT :  _stprintf(message,_T("WSAEAFNOSUPPORT")); break;
    case WSAEALREADY :      _stprintf(message,_T("WSAEALREADY")); break;
    case WSAECONNABORTED :  _stprintf(message,_T("WSAECONNABORTED")); break;
    case WSAECONNREFUSED :  _stprintf(message,_T("WSAECONNREFUSED")); break;
    case WSAECONNRESET :    _stprintf(message,_T("WSAECONNRESET")); break;
    case WSAEDESTADDRREQ :  _stprintf(message,_T("WSAEDESTADDRREQ")); break;
    case WSAEFAULT :        _stprintf(message,_T("WSAEFAULT")); break;
    case WSAEHOSTDOWN :     _stprintf(message,_T("WSAEHOSTDOWN")); break;
    case WSAEHOSTUNREACH :  _stprintf(message,_T("WSAEHOSTUNREACH")); break;
    case WSAEINPROGRESS :   _stprintf(message,_T("WSAEINPROGRESS")); break;
    case WSAEINTR :         _stprintf(message,_T("WSAEINTR")); break;
    case WSAEINVAL :        _stprintf(message,_T("WSAEINVAL")); break;
    case WSAEISCONN :       _stprintf(message,_T("WSAEISCONN")); break;
    case WSAEMFILE :        _stprintf(message,_T("WSAEMFILE")); break;
    case WSAEMSGSIZE :      _stprintf(message,_T("WSAEMSGSIZE")); break;
    case WSAENETDOWN :      _stprintf(message,_T("WSAENETDOWN")); break;
    case WSAENETRESET :     _stprintf(message,_T("WSAENETRESET")); break;
    case WSAENETUNREACH :   _stprintf(message,_T("WSAENETUNREACH")); break;
    case WSAENOBUFS :       _stprintf(message,_T("WSAENOBUFS")); break;
    case WSAENOPROTOOPT :   _stprintf(message,_T("WSAENOPROTOOPT")); break;
    case WSAENOTCONN :      _stprintf(message,_T("WSAENOTCONN")); break;
    case WSAENOTSOCK :      _stprintf(message,_T("WSAENOTSOCK")); break;
    case WSAEOPNOTSUPP :    _stprintf(message,_T("WSAEOPNOTSUPP")); break;
    case WSAEPFNOSUPPORT :  _stprintf(message,_T("WSAEPFNOSUPPORT")); break;
    case WSAEPROCLIM :      _stprintf(message,_T("WSAEPROCLIM")); break;
    case WSAEPROTONOSUPPORT : _stprintf(message,_T("WSAEPROTONOSUPPORT")); break;
    case WSAEPROTOTYPE :      _stprintf(message,_T("WSAEPROTOTYPE"));  break;
    case WSAESHUTDOWN :       _stprintf(message,_T("WSAESHUTDOWN")); break;
    case WSAESOCKTNOSUPPORT : _stprintf(message,_T("WSAESOCKTNOSUPPORT")); break;
    case WSAETIMEDOUT :       _stprintf(message,_T("WSAETIMEDOUT ")); break;
    case WSATYPE_NOT_FOUND :  _stprintf(message,_T("WSATYPE_NOT_FOUND"));  break;
    case WSAEWOULDBLOCK :     _stprintf(message,_T("WSAEWOULDBLOCK")); break;
    case WSAHOST_NOT_FOUND :  _stprintf(message,_T("WSAHOST_NOT_FOUND")); break;

    case WSANOTINITIALISED :     _stprintf(message,_T("WSANOTINITIALISED")); break;
    case WSANO_DATA :            _stprintf(message,_T("WSANO_DATA")); break;
    case WSANO_RECOVERY :        _stprintf(message,_T("WSANO_RECOVERY")); break;

    case WSASYSCALLFAILURE :     _stprintf(message,_T("WSASYSCALLFAILURE"));  break;
    case WSASYSNOTREADY :        _stprintf(message,_T("WSASYSNOTREADY")); break;
    case WSATRY_AGAIN :          _stprintf(message,_T("WSAVERNOTSUPPORTED")); break;
    case WSAVERNOTSUPPORTED :    _stprintf(message,_T("WSAVERNOTSUPPORTED ")); break;
    case WSAEDISCON :            _stprintf(message,_T("WSAEDISCON")); break;

    default :                    _stprintf(message,_T("Unknown error")); break;
    }
#endif
}


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
TcpServeurSimple::TcpServeurSimple( unsigned short Port, unsigned char CharEnd ) 
{ 
  m_ListenSocket = INVALID_SOCKET;
  m_MsgSocket    = INVALID_SOCKET;
  m_Port = Port;
  m_Flags = 0;

  m_CharEnd = CharEnd;
}


////////////////////////////////////////////////////////////////////////
//  Function : ~TcpServeurSimple
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Si les sockets ne sont pas fermés, on le fait
//
/////////////////////////////////////////////////////////////////////////
TcpServeurSimple::~TcpServeurSimple()
{
  //
  // on ferme les deux sockets : le serveur et le client 
  //
  if(m_ListenSocket != INVALID_SOCKET)
    ::closesocket(m_ListenSocket);
  
  if(m_MsgSocket != INVALID_SOCKET)
    ::closesocket(m_MsgSocket);
}

////////////////////////////////////////////////////////////////////////
//  Function :  Open
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Création du socket du serveur et passage à l'écoute
//
/////////////////////////////////////////////////////////////////////////
bool TcpServeurSimple::Open(LPVOID Param, unsigned short NumPort)
{
  m_ListenSocket = ::socket(AF_INET, SOCK_STREAM, 0);

  if( m_ListenSocket == INVALID_SOCKET)
    {
      m_Err = GetLastError();
       
      TranslateSocketError(m_Err);
       
      return false;
    }

  struct sockaddr_in local;
  local.sin_family = AF_INET;
  local.sin_addr.s_addr = INADDR_ANY;
  local.sin_port = htons(NumPort);

  if( ::bind( m_ListenSocket, (struct sockaddr *) &local, sizeof(local)) == SOCKET_ERROR )
    {
      m_Err = GetLastError();
      TranslateSocketError(m_Err);
      return false;
    }

  //
  // Jusqu'a 10 client en attente
  //
  if( ::listen( m_ListenSocket, 10) == SOCKET_ERROR )
    {
      m_Err = GetLastError();
      TranslateSocketError(m_Err);
      return false;
    }
    

  return true;
}

////////////////////////////////////////////////////////////////////////
//  Function :  Open
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Création du socket du serveur et passage à l'écoute
//
/////////////////////////////////////////////////////////////////////////
bool TcpServeurSimple::Open(LPVOID Param)
{
  m_ListenSocket = ::socket(AF_INET, SOCK_STREAM, 0);

  if( m_ListenSocket == INVALID_SOCKET)
    {
      m_Err = GetLastError();
       
      TranslateSocketError(m_Err);
       
      return false;
    }
  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,  (char*) "TcpServeurSimple::Open socket : %d\n",  m_ListenSocket);

  struct sockaddr_in local;
  local.sin_family = AF_INET;
  local.sin_addr.s_addr = INADDR_ANY;
  local.sin_port = htons(m_Port);

  if( ::bind( m_ListenSocket, (struct sockaddr *) &local, sizeof(local)) == SOCKET_ERROR )
    {
      m_Err = GetLastError();
      TranslateSocketError(m_Err);
      return false;
    }

  //
  // Jusqu'a 10 client en attente
  //
  if( ::listen( m_ListenSocket, 10) == SOCKET_ERROR )
    {
      m_Err = GetLastError();
      TranslateSocketError(m_Err);
      return false;
    }
  else
    StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,  (char*) "TcpServeurSimple::listen socket : %d\n",  m_ListenSocket);

    

  return true;
}


////////////////////////////////////////////////////////////////////////
//  Function : IsOpened
//  IN   : 
//          
//  OUT  :
//  RET  : 
//
//  Notes : Prédicat qui donne true si le socket est d'écoute est initialisé 
/////////////////////////////////////////////////////////////////////////
bool TcpServeurSimple::IsOpened()
{
  return m_ListenSocket != INVALID_SOCKET;
}



////////////////////////////////////////////////////////////////////////
//  Function : Recv
//  IN   : unsigned char * Buffer
//         unsigned long len 
//  OUT  :
//  RET  : 
//
//  Notes : Reception d'un buffer
//
/////////////////////////////////////////////////////////////////////////
unsigned long TcpServeurSimple::Recv( unsigned char * Buffer,  unsigned long len )
{
  return ::recv(m_MsgSocket, (char * )Buffer, len, m_Flags);
}



////////////////////////////////////////////////////////////////////////
//  Function : Send
//  IN   : unsigned char * Buffer
//         unsigned long len 
//  OUT  :
//  RET  : 
//
//  Notes : Envoi d'un buffer
//
/////////////////////////////////////////////////////////////////////////
 unsigned long TcpServeurSimple::Send( unsigned char * Buffer,  unsigned long len )
{
  return ::send(m_MsgSocket , ( char * )Buffer, len, m_Flags);
}


////////////////////////////////////////////////////////////////////////
//  Function : Close
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : Ferme le socket Listen
//
/////////////////////////////////////////////////////////////////////////
unsigned long TcpServeurSimple::Close()
{
  DWORD renvoi;
  
  if(m_ListenSocket != INVALID_SOCKET)
    {
      renvoi = ::closesocket(m_ListenSocket);
      m_ListenSocket = INVALID_SOCKET;

      return renvoi;
    }
  else
    return 0;
}

////////////////////////////////////////////////////////////////////////
//  Function : CloseClient
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : ferme le socket client
//
/////////////////////////////////////////////////////////////////////////
unsigned long TcpServeurSimple::CloseClient()
{
  if(m_MsgSocket != INVALID_SOCKET)
    return DoGracefulShutdown();
  else
    return 0;
}

////////////////////////////////////////////////////////////////////////
//  Function : Accept
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : Attente d'un client
//
/////////////////////////////////////////////////////////////////////////
bool TcpServeurSimple::Accept()
{
  DWORD Err;
  int SizeOfAddr;
  int le_timeout = 5000;// 5 secondes 

  SizeOfAddr = sizeof(m_from); 

  m_MsgSocket = ::accept( m_ListenSocket,( sockaddr *)&m_from, (socklen_t*)&SizeOfAddr );
 
  if (  m_MsgSocket == INVALID_SOCKET)
    {
      // c'est assez normale d'avoir ne erreure ici quand on ferme le service.
      Err = GetLastError();
      return false;
    }
    
#if 0
  Err = setsockopt(m_MsgSocket,SOL_SOCKET,SO_SNDTIMEO,(char*)(&le_timeout),sizeof(le_timeout));

  if( Err == SOCKET_ERROR) 
    { 
      Err = WSAGetLastError();
      TranslateSocketError(Err);
       
      ::WSACleanup();
    }

  Err = setsockopt(m_MsgSocket,SOL_SOCKET,SO_RCVTIMEO,(char*)(&le_timeout),sizeof(le_timeout));

  if( Err == SOCKET_ERROR) 
    {
      Err = WSAGetLastError();
      TranslateSocketError(Err);
       
      ::WSACleanup();
    }
#endif

#if 0
  // Disable naggle algo
  char val = 1;
  setsockopt( m_MsgSocket, IPPROTO_TCP ,  TCP_NODELAY, &val, sizeof(char));
#endif
  return true;
}


////////////////////////////////////////////////////////////////////////
//  Function : GetClientAddress
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : Rend l'adresse du client
//
/////////////////////////////////////////////////////////////////////////
inline sockaddr_in * TcpServeurSimple::GetClientAddress()
{
  return &m_from;
}


////////////////////////////////////////////////////////////////////////
//  Function : Read
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : Lecture streal du socket client
//
/////////////////////////////////////////////////////////////////////////
int TcpServeurSimple::Read( char *Buf, DWORD Len )
{
  return  ::read( m_MsgSocket, Buf,Len); 
}

////////////////////////////////////////////////////////////////////////
//  Function : Write
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : Ecriture stream sur le socket client
//
/////////////////////////////////////////////////////////////////////////
int TcpServeurSimple::Write( char * Buf, DWORD Len )
{
  return ::read( m_MsgSocket, Buf,Len); 
}


////////////////////////////////////////////////////////////////////////
//  Function : ReadLine
//  IN   : 
//        
//  OUT  :
//  RET  : 
//
//  Notes : Lecture d'une ligne terminé par CharEnd ( par défaut '\n' )
//
/////////////////////////////////////////////////////////////////////////
int TcpServeurSimple::ReadLine( char * Buf, DWORD Len )
{
  DWORD CarReaded = 0;
  char Char;
  do
    {
      if ( ::recv(m_MsgSocket, (char * )&Char, 1, m_Flags) == 1 )
        Buf[CarReaded] = Char;
      else
        return 0;

      CarReaded++;
    }
  while ( Char != m_CharEnd && CarReaded < Len);

  Buf[CarReaded-1] = 0;
  return CarReaded-1;
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
bool TcpServeurSimple::DoGracefulShutdown()
{
  TRACE_FUNCTION(_T("TcpServeurSimple::DoGracefulShutdown"));
  bool   bRetVal = FALSE;
  //  WSAEVENT hEvent = WSA_INVALID_EVENT;
  long lNetworkEvents = 0;
  int status = 0;

#if 0
    
  hEvent = ::WSACreateEvent();
  if (hEvent == WSA_INVALID_EVENT)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"DoGracefulShutdown: WSACreateEvent failed: %d\n",  WSAGetLastError());
      goto CLEANUP;
    }

  lNetworkEvents = FD_CLOSE;
  if ( ::WSAEventSelect(m_MsgSocket, hEvent, lNetworkEvents) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"DoGracefulShutdown: WSAEventSelect failed: %d",   WSAGetLastError());
      goto CLEANUP;
    }

    if ( ::shutdown(m_MsgSocket, SD_SEND) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: shutdown failed: %d",    WSAGetLastError());
      goto CLEANUP;
    }

    if ( ::WaitForSingleObject(hEvent, INFINITE) != WAIT_OBJECT_0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: WaitForSingleObject failed: %d", WSAGetLastError());
      goto CLEANUP;
    }

  if (closesocket(m_MsgSocket) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: closesocket failed: %d", WSAGetLastError());
      goto CLEANUP;
    }

  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,(char*)"Socket %d has been closed gracefully", m_MsgSocket);
  m_MsgSocket = INVALID_SOCKET;
  bRetVal = TRUE;
    
 CLEANUP:

  if (hEvent != WSA_INVALID_EVENT)
    {
      WSACloseEvent(hEvent);
      hEvent = WSA_INVALID_EVENT;
    }
#endif

  if ( ::shutdown(m_MsgSocket, 2) != 0)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char*)"DoGracefulShutdown: shutdown failed: %d", errno);
      
    }
  
  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , (char*)"close socket %d.", m_MsgSocket);
  closesocket(m_MsgSocket);
  m_MsgSocket = INVALID_SOCKET;
 return bRetVal;
}
