
#pragma once

class I2CPort
{
private: 
  unsigned short m_DeviceAddress;
  int m_hI2C;
  bool m_ExtendeAddressMode;
  bool m_Shutdown;
  char m_Name[80];
  char m_Device;
  
public:
  I2CPort();
  virtual ~I2CPort();

  bool Open(char* Name );
  bool IsOpened();
  bool  ChangeDevice( UCHAR Device);

  bool Read(UCHAR RegisterAddress, UCHAR & Data);
  bool Write( UCHAR RegisterAddress, UCHAR Data );



  ULONG Close();

  bool RegisterRead( UCHAR Address , UCHAR & DataRead);

  bool RegisterRead(UCHAR RegisterAddress, USHORT &DataRead);
  bool RegisterWrite(UCHAR RegisterAddress, USHORT Data);

};
