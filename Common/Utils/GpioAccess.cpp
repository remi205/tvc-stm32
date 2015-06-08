#include <fcntl.h>
#include <stdio.h>
#include <syslog.h>
#include <unistd.h>
#include <string.h>

#include "GpioAccess.h"

#define MAX_BUF 64
#define SYSFS_GPIO_DIR "/sys/class/gpio"



Gpio::Gpio(uint pinNumber, bool isOut)
{
  // Make it out of range to force write if out pin
  _currentValue = 2;	
  _ioFd = -1;				

  // Make it invalid to force initial open
  _pinNumber = pinNumber;
  
  exportPin();
  setDirection(isOut);
}

Gpio::~Gpio()
{
  if( 0 <= _ioFd )
    close(_ioFd);
}

int Gpio::getValue(uint* value)
{
  if( !_isOut )
    {
      if( 0 > _ioFd )
        openFd();
      if( 0 > _ioFd ) 
        return _ioFd;
      
      char ch;
      
      read(_ioFd, &ch, 1);
      
      if( ch != '0' )
        *value = 1;
      else
        *value = 0;
      
      _currentValue = *value;
    }
  
  return 0;
}

int Gpio::exportPin()
{
  int fd, len;
  char buf[MAX_BUF];
  
  fd = open(SYSFS_GPIO_DIR "/export", O_WRONLY);
  if( fd < 0 )
    {
     return fd;
    }
  
  len = snprintf(buf, sizeof(buf), "%d", _pinNumber);
  write(fd, buf, len);
  close(fd);
  return 0;
}

void Gpio::openFd()
{
  int len;
  char buf[MAX_BUF];
  
  len = snprintf(buf, sizeof(buf), SYSFS_GPIO_DIR "/gpio%d/value", _pinNumber);
  
  if( 0 <= _ioFd ) close(_ioFd );
  
  if( _isOut )
    _ioFd = open(buf, O_RDWR);
  else
    _ioFd = open(buf, O_RDONLY);
}

int Gpio::setDirection(bool out)
{
  int fd, len;
  char buf[MAX_BUF];
  
  len = snprintf(buf, sizeof(buf), SYSFS_GPIO_DIR  "/gpio%d/direction", _pinNumber);
  
  fd = open(buf, O_WRONLY);
  if( fd < 0 )
    {
      return fd;
    }
  
  if( out )
    write(fd, "out", 4);
  else
    write(fd, "in", 3);
  
  close(fd);
  _isOut = out;
  
  return 0;
}

int Gpio::setEdge(char *edge)
{
  int fd, len;
  char buf[MAX_BUF];
  
  len = snprintf(buf, sizeof(buf), SYSFS_GPIO_DIR "/gpio%d/edge", _pinNumber);
  
  fd = open(buf, O_WRONLY);
  if( fd < 0 )
    {

      return fd;
    }
  
  write(fd, edge, strlen(edge) + 1);
  close(fd);
  return 0;
}

int Gpio::setValue(uint value)
{
   if( _isOut && _currentValue != value )
    {
      if( 0 > _ioFd ) 
        openFd();
      if( 0 > _ioFd ) 
        return _ioFd;
      
      if( value )
        write(_ioFd, "1", 2);
      else
        write(_ioFd, "0", 2);
      
        _currentValue = value;
    }
  return 0;
}
