// from CMSIS
#include "core_cmFunc.h"

typedef uchar KIRQL;

KIRQL GetCurrentIrql()
{
  __get_BASEPRI();
}

VOID LowerIrql( KIRQL NewIrql)
{
  __set_BASEPRI(NewIrql);
}

VOID KeRaiseIrql(KIRQL NewIrql, PKIRQL OldIrql)
{
  OldIrql = __get_BASEPRI();
  _set_BASEPRI(NewIrql);
}


typedef struct _DISPATCHER_HEADER {
    LONG SignalState;          // Object lock
    LIST_ENTRY WaitListHead;   // Object lock
} DISPATCHER_HEADER;

typedef struct _KEVENT {
   DISPATCHER_HEADER header;
} KEVENT, *PEVENT;

typedef struct _MUTEX {
   DISPATCHER_HEADER header;
   LIST_ENTRY MutantListEntry;
 ULONG  count;
} MUTEX, *PMUTEX;

typedef struct SEMAPHORE{
   DISPATCHER_HEADER header;
   LONG Limit;
} SEMAPHORE, *PSEMAPHORE;


VOID KeInitializeEvent(PKEVENT Event, EVENT_TYPE Type, BOOLEAN State)
{
  Event->header.SignalState = State;
  
}
LONG KeReadStateEvent(PKEVENT Event);
VOID KeClearEvent( PKEVENT Event);
LONG KeResetEvent(PKEVENT Event);
LONG KeSetEvent( PKEVENT Event,  KPRIORITY Increment, BOOLEAN Wait);
VOID KeInitializeMutex(PKMUTEX Mutex, ULONG Level);
LONG KeReleaseMutex(PKMUTEX Mutex, BOOLEAN Wait);
LONG KeReadStateMutex(PRKMUTEX Mutex);
VOID KeInitializeSemaphore(PKSEMAPHORE Semaphore, LONG Count,  LONG Limit);
LONG KeReleaseSemaphore( PKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait
);
STATUS KeWaitForSingleObject( PVOID Object, PLARGE_INTEGER Timeout);

PKTHREAD KeGetCurrentThread(void);



KPRIORITY KeSetPriorityThread( PKTHREAD Thread, KPRIORITY Priority);
