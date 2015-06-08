#pragma once

#define US_LINUX_CONDITION 

#define INFINITE -1

#ifdef VALSYS_USE_ECOS
#include "cyg/kernel/kapi.h"

#define TIMEOUT_INFINITE       0

#define IoEvent cyg_flag_t
#define DECLARE_EVENT(IoEvent) cyg_flag_t IoEvent;
#define INIT_EVENT( IoEvent ) cyg_flag_init( IoEvent )
#define DESTROY_EVENT( IoEvent ) cyg_flag_destroy( IoEvent )
#define SEND_EVENT(IoEvent)  cyg_flag_setbits( IoEvent, 1)

#define WAIT_EVENT(IoEvent) cyg_flag_wait( IoEvent, 1, CYG_FLAG_WAITMODE_OR | CYG_FLAG_WAITMODE_CLR )

#define DESTROY_EVENT_TIMEOUT(IoEvent, Timeout ) cyg_flag_timed_wait( IoEvent, 1, CYG_FLAG_WAITMODE_OR | CYG_FLAG_WAITMODE_CLR, Timeout)
#endif


#ifdef US_LINUX_CONDITION

#define DECLARE_EVENT(IoEvent, Mutex) pthread_cond_t IoEvent;
#define INIT_EVENT( IoEvent ) pthread_cond_init( IoEvent, 0 ); 
#define DESTROY_EVENT( IoEvent ) pthread_destroy( IoEvent ); 

#define SEND_EVENT(IoEvent) pthread_cond_signal( IoEvent)

#define WAIT_EVENT(IoEvent,Mutex) pthread_cond_wait(IoEvent,Mutex)

#define WAIT_EVENT_TIMEOUT(IoEvent, Mutex, Timeout ) pthread_cond_timedwait( IoEvent,Mutex,Timeout)


#endif 


















