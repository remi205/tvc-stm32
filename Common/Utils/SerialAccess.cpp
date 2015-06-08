//////////////////////////////////////////////////////////////////////
//  
// Author:
// Rémi PRUD'HOMME
//
// Date : 30/01/2012
//
//////////////////////////////////////////////////////////////////////
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <termios.h>
#include <string.h>

#include "SerialAccess.h"

/* baudrate settings are defined in <asm/termbits.h>, which is
   included by <termios.h> */
#define BAUDRATE B115200            
/* change this definition for the correct port */
#define MODEMDEVICE "/dev/ttyAMA2"
#define _POSIX_SOURCE 1 /* POSIX compliant source */

//////////////////////////////////////////////////////////////////////
//
// Constructor
//
// Description:
//    Open, Get a handle to the Serial driver and initialize the Serial Interface
//
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
SerialPort::SerialPort(char* Name)
{
  m_Shutdown = false;
  m_hSerial = ::open(Name, O_RDWR | O_NOCTTY  ); 
}

//////////////////////////////////////////////////////////////////////
//
// Destructor
//
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
SerialPort::~SerialPort()
{
   if(!m_Shutdown)
     ::close(m_hSerial);
}

//////////////////////////////////////////////////////////////////////
//
// Open
//
// Description:
//    Open the appropiate device handle of the Serial driver
//
//
//////////////////////////////////////////////////////////////////////
bool SerialPort::Open()
{
  ULONG LenRead;
  UCHAR Param;
  struct termios newtio;
  int fd;

  if ( m_hSerial == -1 )
    return false;
  else
    {
      m_Shutdown = true;

      bzero(&newtio, sizeof(newtio)); /* clear struct for new port settings */
      
      /* 
         BAUDRATE: Set bps rate. You could also use cfsetispeed and cfsetospeed.
         CRTSCTS : output hardware flow control (only used if the cable has
         all necessary lines. See sect. 7 of Serial-HOWTO)
         CS8     : 8n1 (8bit,no parity,1 stopbit)
         CLOCAL  : local connection, no modem contol
         CREAD   : enable receiving characters
      */
      newtio.c_cflag = BAUDRATE | CS8 | CLOCAL | CREAD;
      
      /*
        IGNPAR  : ignore bytes with parity errors
        ICRNL   : map CR to NL (otherwise a CR input on the other computer
        will not terminate input)
        otherwise make device raw (no other input processing)
      */
      newtio.c_iflag = IGNPAR | ICRNL;
      
      /*
        Raw output.
      */
      newtio.c_oflag = 0;
      
      /*
        ICANON  : enable canonical input
        disable all echo functionality, and don't send signals to calling program
      */
      newtio.c_lflag = ICANON;
      
      /* 
         initialize all control characters 
         default values can be found in /usr/include/termios.h, and are given
         in the comments, but we don't need them here
      */
      newtio.c_cc[VINTR]    = 0;     /* Ctrl-c */ 
      newtio.c_cc[VQUIT]    = 0;     /* Ctrl-\ */
      newtio.c_cc[VERASE]   = 0;     /* del */
      newtio.c_cc[VKILL]    = 0;     /* @ */
      newtio.c_cc[VEOF]     = 4;     /* Ctrl-d */
      newtio.c_cc[VTIME]    = 0;     /* inter-character timer unused */
      newtio.c_cc[VMIN]     = 1;     /* blocking read until 1 character arrives */
      newtio.c_cc[VSWTC]    = 0;     /* '\0' */
      newtio.c_cc[VSTART]   = 0;     /* Ctrl-q */ 
      newtio.c_cc[VSTOP]    = 0;     /* Ctrl-s */
      newtio.c_cc[VSUSP]    = 0;     /* Ctrl-z */
      newtio.c_cc[VEOL]     = 0;     /* '\0' */
      newtio.c_cc[VREPRINT] = 0;     /* Ctrl-r */
      newtio.c_cc[VDISCARD] = 0;     /* Ctrl-u */
      newtio.c_cc[VWERASE]  = 0;     /* Ctrl-w */
      newtio.c_cc[VLNEXT]   = 0;     /* Ctrl-v */
      newtio.c_cc[VEOL2]    = 0;     /* '\0' */
      
      /* 
         now clean the modem line and activate the settings for the port
      */
      tcflush(fd, TCIFLUSH);
      tcsetattr(fd,TCSANOW,&newtio);
      
      return true;
    }
}

//////////////////////////////////////////////////////////////////////
//
// Close
//
// Description:
//    Close the appropiate device handle of the Serial driver
//
//
//////////////////////////////////////////////////////////////////////
ULONG SerialPort::SerialClose()
{
  if( m_Shutdown == true) 
    return 0;
  else
    return close(m_hSerial);
}


//////////////////////////////////////////////////////////////////////
//
// SerialRead
//
// Description:
//   Synchronous I/o read from the Serial driver with specific format
//   ---
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
UCHAR SerialPort::SerialRead(PUCHAR Data,  ULONG Len)
{
  ULONG LenRead;

  LenRead = read(m_hSerial, Data, Len);

  return LenRead;
}


//////////////////////////////////////////////////////////////////////
//
// SerialWrite
//
// Description:
//   Synchronous I/o write to the Serial driver with specific format
//   ---       
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
ULONG  SerialPort::SerialWrite( PUCHAR Data,  ULONG Len)
{
  ULONG LenWritten;

  LenWritten = write(m_hSerial, Data, sizeof(Data) * Len);
  return LenWritten;
}
