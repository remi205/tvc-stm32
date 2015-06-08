



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "FileSys.h"

////////////////////////////////////////////////////////////////////
//
// read a string from file system and convert it to value
//
/////////////////////////////////////////////////////////////////////
bool read_sys_class2( char * Periph, char * Propertie , char * value)
{
  char buf[200];
  char V[100];
  long v;

  FILE *fd;

  strcpy(buf, SYSFS_DIR);
  strcat(buf , Periph);
  strcat(buf , Propertie);

  fd = fopen(buf , "r");
  if ( fd == NULL)
    return false;

  fgets( V, 100, fd);

  fclose(fd);

  V[strlen(V)-1] = 0;
  strcpy(value, V);
  
  return true;
}


////////////////////////////////////////////////////////////////////
//
// write a string to file system  
//
/////////////////////////////////////////////////////////////////////
bool write_sys_class( char * Periph, char * Propertie , char * value)
{
  char buf[200];

  FILE *fd;

  strcpy(buf, SYSFS_DIR);
  strcat(buf , Periph);
  strcat(buf , Propertie);

  fd = fopen(buf , "w");
  if ( fd == NULL)
    return false;

  fwrite( &value, 1, 4, fd);

  fclose(fd);
  
  return true;

}



