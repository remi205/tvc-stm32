unsigned long RecoderPid[4];
unsigned long PlayerPid[4];

// le K2010 dispatcher 
/* The child process executes this function.  */
void 
pause_function (unsigned char Slot, unsigned int Pid)
{
  /* Let parent know you're done.  */
  kill (Pid, SIGUSR1);
}

void 
stop_function (unsigned char Slot)
{
  /* Let parent know you're done.  */
  kill (Pid, SIGUSR2);
}

void 
play_function (unsigned char Slot)
{
  /* Let parent know you're done.  */
  kill (Pid, SIGUSR3);
}

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
bool Pause( bool player, unsigned char Slot)
{
  if ( player )
    pause_function( Slot, PlayerPid[Slot]);
  else
    pause_function( Slot, RecoderPid[Slot]);
}


bool Play( bool player, unsigned char Slot)
{
  if ( player )
    play_function( Slot, PlayerPid[Slot]);
  else
    play_function( Slot, RecoderPid[Slot]);
}


bool Stop( bool player, unsigned char Slot)
{
  if ( player )
    stop_function( Slot, PlayerPid[Slot]);
  else
    stop_function( Slot, RecoderPid[Slot]);
}

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
bool LaunchPlayer(  char pathname, char * wave, int Slot)
{
  PlayerPid[Slot] = CreateProcess( "/root/player", wave, Slot);
  return true;
}

bool LaunchRecoder(  char pathname, char * wave, int Slot)
{
  RecoderPid[Slot] = CreateProcess( "/root/recoder", wave, Slot);
  return true;
}

int CreateProcess( char pathname, char * wave, int Slot, char * local)
{
  int Pid = fork();
  switch ( Pid < 0)
    {
    case -1 :
      // erreur
      return ;
    case 0 :
      // fils
      char Param1[10];
      sprintf(Param1,"%d", Slot);
      execl( pathmane, argv , wave, Param1, NULL);

    default:
      // pere
    }

  // signicatif pour le pere.
  return Pid;
}

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

// en fait si je met en place 3 sigactions, PLAY , PAUSE, STOP
// dans le player et le recoder.

#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* When a SIGUSR1 signal arrives, set this variable.   */
volatile sig_atomic_t usr_pause = 0;
volatile sig_atomic_t usr_stop = 0;
volatile sig_atomic_t usr_play = 0;

void 
synch_signal_pause (int sig)
{
  usr_pause = 1;
}

void 
synch_signal_stop (int sig)
{
  usr_stop = 1;
}

void 
synch_signal_play (int sig)
{
  usr_play = 1;
}



struct sigaction usr_action_pause;
struct sigaction usr_action_stop;
struct sigaction usr_action_play;

int setup_signals (void)
{
  sigset_t block_mask;
  pid_t child_id;

  /* Establish the signal handler.  */
  sigfillset (&block_mask);
  usr_action.sa_handler = synch_signal_pause;
  usr_action.sa_mask = block_mask;
  usr_action.sa_flags = 0;
  sigaction (SIGUSR1, &usr_action_pause, NULL);

  sigfillset (&block_mask);
  usr_action.sa_handler = synch_signal;
  usr_action.sa_mask = block_mask;
  usr_action.sa_flags = 0;
  sigaction (SIGUSR2, &usr_action_stop, NULL);

  sigfillset (&block_mask);
  usr_action.sa_handler = synch_signal;
  usr_action.sa_mask = block_mask;
  usr_action.sa_flags = 0;
  sigaction (SIGUSR3, &usr_action_play, NULL);

  return 0;
}
