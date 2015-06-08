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

#include "../../mcmtII/stdafx.h"

#include "TraceFunction.h"
#include "SerialCommNO.h"





/* baudrate settings are defined in <asm/termbits.h>, which is
      
/* change this definition for the correct port */
#define MODEMDEVICE "/dev/ttyAMA2"
#define _POSIX_SOURCE 1 /* POSIX compliant source */

#define INVALID_HANDLE_VALUE -1

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
CSerialCommNO::CSerialCommNO(char* DeviceName, char CharEnd)
{

  m_CharEnd = CharEnd;
  m_hPortComm = INVALID_HANDLE_VALUE;

  m_LineState = false;

  strcpy(m_DeviceName, DeviceName);

}

//////////////////////////////////////////////////////////////////////
//
// Destructor
//
// Notes:
//
//
//////////////////////////////////////////////////////////////////////
CSerialCommNO::~CSerialCommNO()
{
  if(IsOpened())
    {
      Close();
    }
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
bool CSerialCommNO::Open()
{
  ULONG LenRead;
  UCHAR Param;
  struct termios newtio;
  int fd;

  if ( m_hPortComm != INVALID_HANDLE_VALUE)
    {
      // le port est déja ouvert.  
      // On le ferme puis on recommence
      Close();
      StandartDebugOutput.OutputDebug(LEVEL_FUNCTION_INNER,(char*) "Tententative de réouverture du port de com.");
    }

  m_hPortComm = ::open(m_DeviceName, O_RDWR | O_NOCTTY  ); 
  
  if ( m_hPortComm == INVALID_HANDLE_VALUE)
    {
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, (char *)"Cannont open the port comm : %s", m_DeviceName);
      
      m_CommError = errno;
      return false;
    }
  
  m_CommError = 0;
  return true;
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
ULONG CSerialCommNO::Close()
{
  return close(m_hPortComm);
}

/////////////////////////////////////////////////////////////////////////
//  Function : IsOpened
//  IN   :
//  OUT  :
//  RET  :
//
//  Notes : Le port de communication est il ouvert ?. 
//
/////////////////////////////////////////////////////////////////////////
bool CSerialCommNO::IsOpened()
{
  return m_hPortComm != INVALID_HANDLE_VALUE;
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
int CSerialCommNO::Read(char* Data,  ULONG Len)
{
  ULONG LenRead;

  LenRead = read(m_hPortComm, Data, Len);

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
int  CSerialCommNO::Write( char* Data,  ULONG Len)
{
  ULONG LenWritten;

  LenWritten = write(m_hPortComm, Data, sizeof(Data) * Len);
  return LenWritten;
}



/////////////////////////////////////////////////////////////////////////
//  Function : ConfigPort
//  IN   :
//  OUT  :
//  RET  :
//
//  Notes :  
//
/////////////////////////////////////////////////////////////////////////
bool CSerialCommNO::ConfigPort( DWORD BaudRate, // CBR_9600, CBR_14400 etc...
                                BYTE DataBits,  // number of bits/byte, 4-8 
                                BYTE StopBits,  // 0,1,2 = 1, 1.5, 2  
                                BYTE Parity )   // 0-4=no,odd,even,mark,space
{
  termios newtio;
  bzero(&newtio, sizeof(newtio)); /* clear struct for new port settings */
  
  /* 
     BAUDRATE: Set bps rate. You could also use cfsetispeed and cfsetospeed.
     CRTSCTS : output hardware flow control (only used if the cable has
     all necessary lines. See sect. 7 of Serial-HOWTO)
     CS8     : 8n1 (8bit,no parity,1 stopbit)
     CLOCAL  : local connection, no modem contol
     CREAD   : enable receiving characters
  */
  newtio.c_cflag = BaudRate | CS8 | CLOCAL | CREAD;
  
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
  tcflush(m_hPortComm, TCIFLUSH);
  tcsetattr(m_hPortComm,TCSANOW,&newtio);
}

/////////////////////////////////////////////////////////////////////////
//  Function : Purge
//  IN   :
//  OUT  :
//  RET  :
//
//  Notes :  
/////////////////////////////////////////////////////////////////////////
void CSerialCommNO::Purge()
  {
  tcflush(m_hPortComm, TCIFLUSH);
  }
 
  
/////////////////////////////////////////////////////////////////////////
//  Function : SetTimeoutRx
//  IN   :
//  OUT  :
//  RET  :
//
//  Notes :   
//
/////////////////////////////////////////////////////////////////////////
bool CSerialCommNO::SetTimeoutRx( DWORD ReadTimeout)
{
  termios newtio;
  
  tcgetattr(m_hPortComm, &newtio);
  /* 
     initialize all control characters 
     default values can be found in /usr/include/termios.h, and are given
     in the comments, but we don't need them here
  */
  newtio.c_cc[VTIME]    = ReadTimeout;     /* inter-character timer unused */
  newtio.c_cc[VMIN]     = 0;     /* blocking read until 1 character arrives */
  
  /* 
     now clean the modem line and activate the settings for the port
  */
  tcflush(m_hPortComm, TCIFLUSH);
  tcsetattr(m_hPortComm,TCSANOW,&newtio);
  return true;
}


/////////////////////////////////////////////////////////////////////////
//  Function : GetLastCommError
//  IN   :
//  OUT  :
//  RET  :
//
//  Notes :  Ecrit un tampon sur le port de communication. 
//
/////////////////////////////////////////////////////////////////////////
DWORD CSerialCommNO::GetLastCommError()
{
  return (unsigned char) m_CommError ;
}

/////////////////////////////////////////////////////////////////////////
//  Function : GetCommStatus
//  IN   :
//  OUT  :
//  RET  :
//
//  Notes :  Ecrit un tampon sur le port de communication. 
//
/////////////////////////////////////////////////////////////////////////
unsigned char CSerialCommNO::GetCommStatus()
{
  return (unsigned char) m_CommStatus ;
}

/////////////////////////////////////////////////////////////////////////
//  Function : GetLineState
//  IN   :
//  OUT  :
//  RET  :
//
/////////////////////////////////////////////////////////////////////////
bool CSerialCommNO::GetLineState()
{
  return m_LineState;
}

