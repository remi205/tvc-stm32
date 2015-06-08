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
