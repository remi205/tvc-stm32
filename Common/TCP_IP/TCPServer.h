//
// Rémi Prud'homme - 2000
//


//////////////////////////////////////////////////////////////////////////////
//  Classe : TcpServeurSimple
//
//
//
//  Notes : Creation le 1/8/97
//////////////////////////////////////////////////////////////////////////////
#pragma once 
#include "stdafx.h"
 
struct sockaddr_in;


class TcpServeurSimple  
{
    unsigned short m_Port;
    unsigned long m_Flags;

    unsigned char m_CharEnd;
    DWORD m_Err;

    DWORD m_BytesReturned;
    //
    // Si on appelle InitServeur, m_addr est l'adresse du site
    //
    sockaddr_in m_from;


    // Methodes privées
  public :

    SOCKET m_ListenSocket, m_MsgSocket;

    TcpServeurSimple( unsigned short Port, unsigned char CharEnd = '\n');
    ~TcpServeurSimple();

    bool IsOpened();
    bool Open(LPVOID Param, unsigned short NumPort);
    bool Open(LPVOID Param);

    unsigned long CloseClient();

    unsigned long Recv( unsigned char * Buffer,  unsigned long len );
    unsigned long Send( unsigned char * Buffer,  unsigned long len );

    unsigned long Close();
    bool Accept();

    int Read( char *Buf, DWORD Len );
    int Write( char * Buf, DWORD Len );

    int ReadLine( char* Buf, DWORD Len );

    inline sockaddr_in * GetClientAddress();

    inline unsigned short GetPort()
      {
        return m_Port;
      };
    inline void SetPort(unsigned short Port)
      {
         m_Port = Port;
      };

    inline SOCKET GetSocket()
      {
        return m_MsgSocket;
      };
    inline SOCKET GetListeningSocket()
    {
        return m_ListenSocket;
      };

    inline DWORD GetLastError() { return m_Err;};

    bool DoGracefulShutdown();

} ;


