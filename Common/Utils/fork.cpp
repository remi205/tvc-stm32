
#include <unistd.h>
#include <stdio.h>

int CreateProcess( char * pathname, char * wave, int Slot, bool longplay)
{
  int Pid = fork();
  switch ( Pid )
    {
    case -1:
      // erreur
      return -1 ;
    case 0 :
      // fils
      {
      char Param1[10];
      
      sprintf(Param1,"%d", Slot);
      
      if (longplay)
	execl( pathname, pathname  , wave, Param1, "longplay", "local", NULL);
      else
        execl( pathname, pathname  , wave, Param1, "local",  NULL);

      }
    default:
      // pere
      ;
    }

  // signicatif pour le pere.
  return Pid;
}













   

