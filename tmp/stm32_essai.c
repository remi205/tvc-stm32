/////////////////////////////////////////////////////////////////////////
// File : vectors.c
// 
//
// Generated on the 04/07/2011 09:02 by the 'cotex-mX-vectors' code generator 
//
// Generator written in Common Lisp, created by  Rémi PRUD'HOMME - STEricsson 
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyright ST Ericsson 2011
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//  Reference document : 
/////////////////////////////////////////////////////////////////////////
//*****************************************************************************
//
// Reserve space for the system stack.
//
//*****************************************************************************
#include <stdio.h>
#include <stdint.h>

#include "BasicTypes.h"
#include "RegisterMacros.h"

#define true 1


void exit(int code)
{
;
}

void _sbrk(intptr_t increment)
{
 ;
}

int main(void)
{
  char str[] = "abc";
  int count;

#if defined (__GNUC__)
    /* TODO
     * The 'manual' call to __sinit() is necessary with NEWLIB for the following reasons:
     * NEWLIB automatically compiles with option _REENT_SMALL if the compiler uses Thumb-2
     * (true for Cortex-M3). In this case the standard file (stdout etc) pointers in the global
     * impure_data point to shortened fake FILE* in ROM, until they get initialized by __sinit().
     * It is unclear who is responsible for calling __sinit(), but doing it here solves it for now.
     */
//    __sinit(_global_impure_ptr);
#endif


  while ( true)
    {
      count = sprintf(str,"%d", 1);
    }

  return count;
}
