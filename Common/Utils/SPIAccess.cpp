//////////////////////////////////////////////////////////////////////
//  
// Author:
//  A. BOVIER - Teamlog
//
// Date : 17/09/2007
//
//////////////////////////////////////////////////////////////////////
#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "BasicTypes.h"
#include "SPIAccess.h"


#define W_ACCESS (1 << 7)
#define R_ACCESS (1 << 15)

//
//Globals variables
//
///Handle for the SPI Driver
int hSPI;

//////////////////////////////////////////////////////////////////////
//
// SPIRead
//
// Description:
//   Synchronous I/o read from the SPI driver with specific format
//   ---
//   SPI format :   R/W  | Register bloc Adress | Selected register Address    | Register Data
//                 1 bit | left aligned 5 bit   | Left aligned 8 bit  | 2 bits |    8 bit
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
UCHAR SPIRead(USHORT RegisterAddress)
{
  int Ret;
  UCHAR BufferIn[5];

  RegisterAddress = RegisterAddress << 2;

  BufferIn[0]= R_ACCESS | RegisterAddress;
  BufferIn[1] = (UCHAR)(RegisterAddress & 0xFF);

  Ret = read(hSPI, &BufferIn, 3 );

  return BufferIn[0];
}

//////////////////////////////////////////////////////////////////////
//
// SPIWrite
//
// Description:
//   Synchronous I/o write to the SPI driver with specific format
//   ---
//   SPI format :   R/W  | Register bloc Adress | Selected register Adress    | Register Data
//                 1 bit | left aligned 5 bit   | Left aligned 8 bit | 2 bits |    8 bit
//   ---
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
ULONG  SPIWrite( USHORT RegisterAddress, UCHAR Data )
{
  int Ret;
  UCHAR Buffer[3];

  RegisterAddress = RegisterAddress << 2;

  // Address, as 4500 asks
  Buffer[0] = (UCHAR)((RegisterAddress >> 8)  & ~W_ACCESS);
  Buffer[1] = (UCHAR)(RegisterAddress & 0xFF);
  Buffer[2] = Data;

  Ret = write(hSPI,Buffer,sizeof(Buffer));
  
  return Ret;
}


//////////////////////////////////////////////////////////////////////
//
// SPIWrite
//
// SPIIoctl:
//   ---
//   ---
// Notes: IOCTL_MSP_TMD  nbslot tx rx 
//
//
//////////////////////////////////////////////////////////////////////
ULONG SPIIoctl( int Function, int ParamSize, unsigned long * Param)
{
  int Ret;
  
  Ret = ioctl(hSPI, Function, ParamSize, Param);

  return Ret;
}


//////////////////////////////////////////////////////////////////////
//
// SPIInit
//
// Description:
//    Open, Get a handle to the SPI driver and initialize the SPI Interface
//   ---
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
bool SPIInit(char* Name)
{
  char LinuxName[50];

  ULONG Bits = 0;
  ULONG LenRead;
  UCHAR mode, lsb, bits;
  ULONG speed;


  //Open a handle on the instance called 'NAME' of driver SPI
  if ( ! strcmp(Name , "ssp0"))
    strcpy(LinuxName, "/dev/spi0");
  else if (!strcmp( Name, "ssp1"))
    strcpy(LinuxName, "/dev/spi1");
  else
    return false;


  hSPI = open(Name, O_RDWR);


  //error
  if ( hSPI == -1 )
    {
      printf(" open failed!\n");
      return false;
    }
  else 
    {
      printf("Success !\n");      
      SPIClose();
    }
    return true;

}



//////////////////////////////////////////////////////////////////////
//
// SPIClose
//
// Description:
//    Close the appropiate device handle of the SPI driver
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
ULONG SPIClose()
{
  return close(hSPI);
}
