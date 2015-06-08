//
//  Rémi Prud'homme - 2000
//

#pragma once

typedef int SOCKET;
struct sockaddr_in;

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
    // m_addr est l'adresse du maitre résolue
    //
    sockaddr_in m_addr;

    sockaddr_in m_addr_reply;

    UDP();

    //
    // 
    //
    virtual DWORD Open( unsigned int Port ) = 0;

    //
    // cette méthode n'est thread safe à cause de l'adresse
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
