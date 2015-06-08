#pragma once

#include "IoTypes.h"
//
// Functions
// Description: Link with low level drivers
//
class SerialPort
{
  int m_hSerial;
  bool m_Shutdown;

 public :
  //
  //SerialInit
  //
  SerialPort(char* Name);
  ~SerialPort();

  //
  //SerialRead
  //
  UCHAR SerialRead(  PUCHAR Data,  ULONG Len);

  //
  //SerialWrite
  //
  ULONG SerialWrite(  PUCHAR Data , ULONG Len);

  bool Open();

  //
  //SerialClose
  //
  ULONG SerialClose();
};
