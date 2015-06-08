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

#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h> 

#include <stdlib.h>		/* malloc(), free() */	
#include <fcntl.h>			/* O_RDWR */
#include <sys/ioctl.h>

#ifdef UNIX
#include "../kernel/arch/arm/mach-stn8500/include/mach/stw4500-dev.h"
#endif

#include "SPIAccess.h"
#include "BasicTypes.h"

#define VIDSERV_4500_DEVICE_NAME "/dev/stw4500"

#define BLOCK_OFFSET  8
#define BLOCK_MASK  0xFF00
#define REG_MASK  0x00FF

int vl_PwmFile;

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
#ifdef UNIX
  struct stw4500dev_data reg_4500;


  printf("SPIRead ( 0x%x ) => ", RegisterAddress);
  
  reg_4500.block = (RegisterAddress & BLOCK_MASK) >> BLOCK_OFFSET;
  reg_4500.addr =  (RegisterAddress & REG_MASK);
  reg_4500.data =  0;
  
  ioctl(vl_PwmFile,STW4500_GET_REGISTER,&reg_4500); 
  
  printf("0x%x\n",  reg_4500.data);

  return reg_4500.data;
#endif
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
UCHAR SPIWrite( USHORT RegisterAddress, UCHAR Data )
{
  int Ret;
  UCHAR Buffer[3];

#ifdef UNIX
  struct stw4500dev_data reg_4500;

  printf("SPIWrite( 0x%x, 0x%x )\n", RegisterAddress, Data);
  
  reg_4500.block =  (RegisterAddress & BLOCK_MASK) >> BLOCK_OFFSET;
  reg_4500.addr =  (RegisterAddress & REG_MASK);
  reg_4500.data =  Data;
 
  ioctl(vl_PwmFile,STW4500_SET_REGISTER,&reg_4500);
#endif  
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
UCHAR SPIInit(char* Name)
{
  vl_PwmFile = open(VIDSERV_4500_DEVICE_NAME,O_RDWR);
  if(vl_PwmFile < 0) 
    return 0;  

  return 1;
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
  
  close(vl_PwmFile);
}

