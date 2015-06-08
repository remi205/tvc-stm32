//////////////////////////////////////////////////////////////////////
//  
// Author:
// Rémi PRUD'HOMME
//
// Date : 02/02/2012
//
//////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#include <linux/i2c-dev.h>
#include <linux/i2c.h>
#include <sys/ioctl.h>

#include "BasicTypes.h"
#include "I2CAccess.h"

//////////////////////////////////////////////////////////////////////
//
// Constructor
//
// Description:
//    Open, Get a handle to the I2C driver and initialize the I2C Interface
//
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
I2CPort::I2CPort()
{
  m_Shutdown = false;
  m_hI2C = -1;
}

//////////////////////////////////////////////////////////////////////
//
// Destructor
//
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
I2CPort::~I2CPort()
{
   if(!m_Shutdown)
     ::close(m_hI2C);
}

//////////////////////////////////////////////////////////////////////
//
// Open
//
// Description:
//    Open the appropiate device handle of the I2C driver
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::Open(char* Name)
{
  strcpy(m_Name, Name);
  m_hI2C = open(m_Name, O_RDWR | O_NOCTTY);
  return  m_hI2C != -1;
}


//////////////////////////////////////////////////////////////////////
//
// Open
//
// Description:
//    predicat on the propertie of 
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::IsOpened()
{
  return m_hI2C != -1;
}

//////////////////////////////////////////////////////////////////////
//
// Close
//
// Description:
//    Close the appropiate device handle of the I2C driver
//
//
//////////////////////////////////////////////////////////////////////
ULONG I2CPort::Close()
{
  if( m_Shutdown == true) 
    return 0;
  else
    return close(m_hI2C);
}

//////////////////////////////////////////////////////////////////////
//
// ChangeDevice
//
// Description:
//    change the device on the bus.
//
//
//////////////////////////////////////////////////////////////////////
bool  I2CPort::ChangeDevice( UCHAR Device)
{
  int error;
 if ( m_hI2C < 0 )
    {
    return false;
    }
  else
    {
      if (( error = ::ioctl(m_hI2C, I2C_SLAVE, Device)) == 0 )
	{
	  m_Device = Device;
	  m_Shutdown = true;
	  return true;
	}
      else
	{
	  printf("erreur sur ioclt I2C_SLAVE : %d\n", error);
	  return false;
	}
    } 
}

#if 1
//////////////////////////////////////////////////////////////////////
//
// Ab85xxRead
//
// Description:
//   
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::RegisterRead(UCHAR Address , UCHAR &DataRead)
{
  char Buf[2];
  struct i2c_msg msg[4];
  struct i2c_ioctl_rdwr_data
  {
    struct i2c_msg *msgs;  /* ptr to array of simple messages */              
    int nmsgs;             /* number of messages to exchange */ 
  } msgst;


  unsigned char Register = Address;
	
  msg[0].addr = m_Device;
  msg[0].flags = 0;
  msg[0].len = 1;
  msg[0].buf = &Register;
	
  Buf[0] = Register;
  msg[1].addr = m_Device;
  msg[1].flags = I2C_M_RD  ;
  msg[1].len = 1;
  msg[1].buf = (unsigned char *) Buf;

  msgst.msgs = msg;	
  msgst.nmsgs = 2;

  int ln;
  if ((ln = ioctl(m_hI2C, I2C_RDWR, &msgst)) < 0) 
    {
      fprintf(stderr, "Error: Read error:%d\n",ln);
      return ln;                     
    }


  DataRead = Buf[0];
  return true;
}

#endif

///////////////////////////////////////////////////////
//
// I2CRead
//
// Description:
//   Synchronous combined I/o read from the I2C driver with specific format
//   ---
//   
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::RegisterRead(UCHAR RegisterAddress, USHORT &DataRead)
{
  char Buf[2];
  struct i2c_msg msg[4];
  struct i2c_ioctl_rdwr_data
  {
    struct i2c_msg *msgs;  /* ptr to array of simple messages */              
    int nmsgs;             /* number of messages to exchange */ 
  } msgst;


  unsigned char Register = RegisterAddress;


  msg[0].addr = m_Device;
  msg[0].flags = 0;
  msg[0].len = 1;
  msg[0].buf = (unsigned char *) &Register;
	
  Buf[0] = Register;
  msg[1].addr = m_Device;
  msg[1].flags = I2C_M_RD  ;
  msg[1].len = 2;
  msg[1].buf = (unsigned char *) Buf;

  msgst.msgs = msg;	
  msgst.nmsgs = 2;

  int ln;
  if ((ln = ioctl(m_hI2C, I2C_RDWR, &msgst)) < 0) 
    {
      fprintf(stderr, "Error: Read error:%d\n",ln);
      return ln;                     
    }
  DataRead = (Buf[0]<< 8) + Buf[1];
  return true;
}



///////////////////////////////////////////////////////
//
// I2CRead
//
// Description:
//   Synchronous combined I/o write to the I2C driver with specific format
//   ---
//   
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::RegisterWrite(UCHAR RegisterAddress, USHORT Data)
{
  char Buf[2];
  struct i2c_msg msg[4];
  struct i2c_ioctl_rdwr_data
  {
    struct i2c_msg *msgs;  /* ptr to array of simple messages */              
    int nmsgs;             /* number of messages to exchange */ 
  } msgst;

  unsigned char Register = RegisterAddress;
	
  msg[0].addr = m_Device;
  msg[0].flags = 0;
  msg[0].len = 1;
  msg[0].buf = (unsigned char *) &Register;

	
  Buf[0] = Register;
  msg[1].addr = m_Device;
  msg[1].flags = 0;
  msg[1].len = 2;
  msg[1].buf = (unsigned char *) Buf;

  msgst.msgs = msg;	
  msgst.nmsgs = 2;

  int ln;
  if ((ln = ioctl(m_hI2C, I2C_RDWR, &msgst)) < 0) 
    {
      fprintf(stderr, "Error: Read error:%d\n",ln);
      return ln;                     
    }
 
  return true;
}


#if 0
//////////////////////////////////////////////////////////////////////
//
// I2CRead
//
// Description:
//   Synchronous I/o read from the I2C driver with specific format
//   ---
//   
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::Read(UCHAR RegisterAddress, ULONG &Data)
{
  int Ret;

  UCHAR BufferIn[3];
  
  BufferIn[0]= RegisterAddress;

  Ret = ::read(m_hI2C, &BufferIn,  4);

  Data = BufferIn[0];
  return ret == 0;
}
#endif

//////////////////////////////////////////////////////////////////////
//
// I2CWrite
//
// Description:
//   Synchronous I/o write to the I2C driver with specific format
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
bool I2CPort::Write( UCHAR RegisterAddress, UCHAR Data )
{
  int Ret;

  UCHAR BufferIn[3];

  BufferIn[0]= RegisterAddress;
  BufferIn[1]= Data;

  Ret = ::write(m_hI2C, &BufferIn, 2);
  return  Ret == 2;
}


#if 0
//////////////////////////////////////////////////////////////////////
//
// I2CWrite
//
// Description:
//   Synchronous I/o write to the I2C driver with specific format
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
ULONG I2CPort::Write( UCHAR RegisterAddress, USHORT Data )
{
  int Ret;

  USHORT BufferIn[3];

  BufferIn[0]= RegisterAddress;
  memcpy(&BufferIn[1], Data, 2);

  return ::write(m_hI2C, &BufferIn, 3)== 0;
}


//////////////////////////////////////////////////////////////////////
//
// I2CWrite
//
// Description:
//   Synchronous I/o write to the I2C driver with specific format
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
ULONG I2CPort::Write( UCHAR RegisterAddress, ULONG Data )
{
  int Ret;

  ULONG BufferIn[3];

  BufferIn[0]= RegisterAddress;
  memcpy(&BufferIn[1], Data, 4);

  return ::write(m_hI2C, &BufferIn, 5)== 0;
}
#endif
