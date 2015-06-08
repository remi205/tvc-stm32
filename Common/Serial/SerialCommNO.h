//
// FractalConcept - 2002-2004
// Rémi Prud'homme
//

#pragma once

#include "SerialDef.h"

class CSerialCommNO
{
protected :
  //
  // Handle de communication
  //
  HANDLE m_hPortComm;
  
  // Win32 error : mémoire de ::GetLastError();
  DWORD  m_CommError;
  
  // Communication error : la dispositon des bit est celle
  // du status SONY
  DWORD  m_CommStatus;
  
  bool m_LineState;
  
  char m_DeviceName[30];
  
  DWORD m_BytesReturned;

  unsigned char m_CharEnd;
  
public :
  CSerialCommNO( char * PortDeComm, char EndChar );
  ~CSerialCommNO();
  
  bool Open();
  ULONG Close();
  
  bool IsOpened();
  
  bool ConfigPort(DWORD BaudRate, BYTE DataBits, BYTE StopBit, BYTE Parity);
  bool ReadBytes(unsigned char * Packet, unsigned int Size);
  
  int ReadLine( char * Buf, ULONG Len );
  int Read( char *Buf, ULONG Len );
  int Write( char * Buf, ULONG Len );
 
  bool SetDtrControlFlow( bool DtrEnable); 
  DWORD GetLastCommError();
  unsigned char GetCommStatus();
  bool GetLineState();
  
  void Purge();
  
  bool SetTimeoutRx( DWORD ReadTimeout);
  bool DumpState();
  
};


