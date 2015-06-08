#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>
#include <ctype.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/mman.h>

int map_fd;

void * map_ip(unsigned long physcal_address_ip, unsigned long map_size)
{
  bool Verbose;
  void * base;

  if (getenv("VERBOSE")) 
    Verbose = 1;
  
  // First, access current information
  if((map_fd = open("/dev/mem", O_RDWR | O_SYNC)) < 0)
    {
      printf("/dev/mem not opened.\n");
      return 0L;
    }
  if (Verbose) 
    {
      printf("/dev/mem opened.\n");
      fflush(stdout);
    }

  base = mmap(0, map_size, PROT_READ | PROT_WRITE, MAP_SHARED, map_fd, physcal_address_ip);

  if( base == (void *) -1) 
    {
      printf("map /dev/mem error.\n");
      return 0L;
    }
  
  if (Verbose) 
    {
      printf("Memory mapped at address %p.\n", base);
      fflush(stdout);
    }
  return base;
}

void unmap_ip( void * virtual_address, unsigned long map_size)
{
  munmap(virtual_address, map_size);
}
