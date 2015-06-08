//
// 
// R�mi Prud'homme 2002-2004
//
#pragma once

//#include <WinSock2.h>


struct sockaddr_in;

class TcpClientSimple 
{
protected :
  int m_iWSAError;
  SOCKET  m_hSocket;
  DWORD  m_Flags;
  char m_CharEnd;

public :
  TcpClientSimple();

  int Close(void);
  int Open(char * sHostName, unsigned short Port);
  int Open(sockaddr_in * AdressIp);
  int GetLastError()
    {
      return m_iWSAError;
    };

  virtual unsigned long Send( unsigned char * Buffer,  unsigned long len );
  virtual unsigned long Recv( unsigned char * Buffer,  unsigned long len );

  //
  // Proc�dure de d�connection propre
  //
  BOOL DoGracefulShutdown();

  // 
  // Pour force la sortie des octets sur le r�seau d�s le premier
  //
  bool DisableNaggle();

  //
  // Pour lire une chaine termin�e par un \n
  //
  int ReadLine( char* Buf, DWORD Len );
};
