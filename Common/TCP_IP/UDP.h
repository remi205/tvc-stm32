//
//  R�mi Prud'homme - 2000
//

#pragma once

#include "../../LwIP/src/include/lwip/sockets.h"

typedef int SOCKET;

class UDP
  {
  protected :
    //
    // Socket pour communiquer entre les deux
    //
    SOCKET  m_hSocket;

    //
    // Port du socket
    //
    int m_Port;

  public :
    //
    // m_addr est l'adresse du maitre r�solue
    //
    struct sockaddr_in m_addr;

    struct sockaddr_in m_addr_reply;

    UDP();

    //
    // 
    //
    virtual DWORD Open( unsigned int Port ) = 0;

    //
    // cette m�thode n'est thread safe � cause de l'adresse
    // de reply
    //
    DWORD RecvFrom( unsigned char * Buffer, int Len );
    DWORD SendTo( unsigned char * Buffer, int Len );

    //
    // Initialise m_addr par un gethostbyname
    //
    DWORD Resolve( char * szServerName);

    DWORD ResolveIp ( char * szServerNameIP) ;

    //
    // Au minimun : closesocket
    //
    bool Close();

    bool SetBroadcastOption( bool EnableBroadcast);
    DWORD SendBroadcast( unsigned char * Buffer, int Len);
    int ReadString( char * Buf, DWORD Len );

    DWORD SendString( unsigned char * Buffer, unsigned short Len );
    bool SetRecvBufferSize( int Size );

  };
