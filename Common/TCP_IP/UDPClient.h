//
// Rémi Prud'homme - 2000
//
#pragma once

#include "UDP.h"

struct sockaddr;

class UdpClient : public UDP
  {
  protected :
  public :
    UdpClient();
    virtual DWORD Open( unsigned int Port);

    DWORD SendTo( unsigned char * , int Len, sockaddr * addr);

    int ReadString( char * Buf, DWORD Len );
    DWORD SendString( unsigned char * Buffer, unsigned short Len );
  };
