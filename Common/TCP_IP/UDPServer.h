#pragma once

#include "UDP.h"

class UDPServer  : public UDP
  {
  protected :

  public :
    UDPServer();
    
    virtual DWORD Open(unsigned int Port);

    DWORD RecvFrom (unsigned char * Buffer, int Len ,sockaddr * addr, int addr_len);
    DWORD SendTo (unsigned char * Buffer, int Len ,sockaddr * addr);

    DWORD RecvFrom(unsigned char * Buffer, int Len );

    int ReadString( char * Buf, DWORD Len );

    DWORD SendString( unsigned char * Buffer, unsigned short Len );
  };
