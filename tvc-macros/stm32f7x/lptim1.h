/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/lptim1.h
// 
//
// Generated on the 29/06/2015 19:00 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by rémi prud'homme
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht remi prudhomme, tvc stm32 2015  2015
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
#define LPTIM1 0x40002400
/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ISR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : CMPM
//
// Return the value of register Isr
//
// Notes : Compare match 
//        (ISR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CMPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CMPM_MASK) | ((val << CMPM_START_BIT) & CMPM_MASK )); \
   } 

#define ENABLE_CMPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CMPM_MASK ); \
   }

#define DISABLE_CMPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CMPM_MASK ); \
   } 

#define READ_CMPM() \
   ((READ_REGISTER_ULONG(0x0) & CMPM_MASK)  >> CMPM_START_BIT)

#define WHEN_CMPM_HIGH() \
     if ( READ_CMPM() )


#define UNLESS_CMPM_HIGH() \
     if (! READ_CMPM() )


#define WAIT_CMPM_LOW() \
    while ( READ_CMPM() );


#define WAIT_CMPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMPM() && (--___t___ > 0)); }


#define WAIT_CMPM_HIGH() \
    while (! READ_CMPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARRM
//
// Return the value of register Isr
//
// Notes : Autoreload match 
//        (ISR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ARRM_MASK) | ((val << ARRM_START_BIT) & ARRM_MASK )); \
   } 

#define ENABLE_ARRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ARRM_MASK ); \
   }

#define DISABLE_ARRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ARRM_MASK ); \
   } 

#define READ_ARRM() \
   ((READ_REGISTER_ULONG(0x0) & ARRM_MASK)  >> ARRM_START_BIT)

#define WHEN_ARRM_HIGH() \
     if ( READ_ARRM() )


#define UNLESS_ARRM_HIGH() \
     if (! READ_ARRM() )


#define WAIT_ARRM_LOW() \
    while ( READ_ARRM() );


#define WAIT_ARRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARRM() && (--___t___ > 0)); }


#define WAIT_ARRM_HIGH() \
    while (! READ_ARRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EXTTRIG
//
// Return the value of register Isr
//
// Notes : External trigger edge event 
//        (ISR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EXTTRIG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EXTTRIG_MASK) | ((val << EXTTRIG_START_BIT) & EXTTRIG_MASK )); \
   } 

#define ENABLE_EXTTRIG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EXTTRIG_MASK ); \
   }

#define DISABLE_EXTTRIG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EXTTRIG_MASK ); \
   } 

#define READ_EXTTRIG() \
   ((READ_REGISTER_ULONG(0x0) & EXTTRIG_MASK)  >> EXTTRIG_START_BIT)

#define WHEN_EXTTRIG_HIGH() \
     if ( READ_EXTTRIG() )


#define UNLESS_EXTTRIG_HIGH() \
     if (! READ_EXTTRIG() )


#define WAIT_EXTTRIG_LOW() \
    while ( READ_EXTTRIG() );


#define WAIT_EXTTRIG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTTRIG() && (--___t___ > 0)); }


#define WAIT_EXTTRIG_HIGH() \
    while (! READ_EXTTRIG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CMPOK
//
// Return the value of register Isr
//
// Notes : Compare register update OK 
//        (ISR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CMPOK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CMPOK_MASK) | ((val << CMPOK_START_BIT) & CMPOK_MASK )); \
   } 

#define ENABLE_CMPOK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CMPOK_MASK ); \
   }

#define DISABLE_CMPOK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CMPOK_MASK ); \
   } 

#define READ_CMPOK() \
   ((READ_REGISTER_ULONG(0x0) & CMPOK_MASK)  >> CMPOK_START_BIT)

#define WHEN_CMPOK_HIGH() \
     if ( READ_CMPOK() )


#define UNLESS_CMPOK_HIGH() \
     if (! READ_CMPOK() )


#define WAIT_CMPOK_LOW() \
    while ( READ_CMPOK() );


#define WAIT_CMPOK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMPOK() && (--___t___ > 0)); }


#define WAIT_CMPOK_HIGH() \
    while (! READ_CMPOK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARROK
//
// Return the value of register Isr
//
// Notes : Autoreload register update OK 
//        (ISR) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARROK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ARROK_MASK) | ((val << ARROK_START_BIT) & ARROK_MASK )); \
   } 

#define ENABLE_ARROK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ARROK_MASK ); \
   }

#define DISABLE_ARROK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ARROK_MASK ); \
   } 

#define READ_ARROK() \
   ((READ_REGISTER_ULONG(0x0) & ARROK_MASK)  >> ARROK_START_BIT)

#define WHEN_ARROK_HIGH() \
     if ( READ_ARROK() )


#define UNLESS_ARROK_HIGH() \
     if (! READ_ARROK() )


#define WAIT_ARROK_LOW() \
    while ( READ_ARROK() );


#define WAIT_ARROK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARROK() && (--___t___ > 0)); }


#define WAIT_ARROK_HIGH() \
    while (! READ_ARROK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : UP
//
// Return the value of register Isr
//
// Notes : Counter direction change down to up 
//        (ISR) at the offset 0x0, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_UP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ UP_MASK) | ((val << UP_START_BIT) & UP_MASK )); \
   } 

#define ENABLE_UP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  UP_MASK ); \
   }

#define DISABLE_UP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~UP_MASK ); \
   } 

#define READ_UP() \
   ((READ_REGISTER_ULONG(0x0) & UP_MASK)  >> UP_START_BIT)

#define WHEN_UP_HIGH() \
     if ( READ_UP() )


#define UNLESS_UP_HIGH() \
     if (! READ_UP() )


#define WAIT_UP_LOW() \
    while ( READ_UP() );


#define WAIT_UP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UP() && (--___t___ > 0)); }


#define WAIT_UP_HIGH() \
    while (! READ_UP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DOWN
//
// Return the value of register Isr
//
// Notes : Counter direction change up to down 
//        (ISR) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DOWN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DOWN_MASK) | ((val << DOWN_START_BIT) & DOWN_MASK )); \
   } 

#define ENABLE_DOWN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DOWN_MASK ); \
   }

#define DISABLE_DOWN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DOWN_MASK ); \
   } 

#define READ_DOWN() \
   ((READ_REGISTER_ULONG(0x0) & DOWN_MASK)  >> DOWN_START_BIT)

#define WHEN_DOWN_HIGH() \
     if ( READ_DOWN() )


#define UNLESS_DOWN_HIGH() \
     if (! READ_DOWN() )


#define WAIT_DOWN_LOW() \
    while ( READ_DOWN() );


#define WAIT_DOWN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DOWN() && (--___t___ > 0)); }


#define WAIT_DOWN_HIGH() \
    while (! READ_DOWN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : CMPMCF
//
// Return the value of register Icr
//
// Notes : compare match Clear Flag 
//        (ICR) at the offset 0x4, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CMPMCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CMPMCF_MASK) | ((val << CMPMCF_START_BIT) & CMPMCF_MASK )); \
   } 

#define ENABLE_CMPMCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CMPMCF_MASK ); \
   }

#define DISABLE_CMPMCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CMPMCF_MASK ); \
   } 

#define READ_CMPMCF() \
   ((READ_REGISTER_ULONG(0x4) & CMPMCF_MASK)  >> CMPMCF_START_BIT)

#define WHEN_CMPMCF_HIGH() \
     if ( READ_CMPMCF() )


#define UNLESS_CMPMCF_HIGH() \
     if (! READ_CMPMCF() )


#define WAIT_CMPMCF_LOW() \
    while ( READ_CMPMCF() );


#define WAIT_CMPMCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMPMCF() && (--___t___ > 0)); }


#define WAIT_CMPMCF_HIGH() \
    while (! READ_CMPMCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARRMCF
//
// Return the value of register Icr
//
// Notes : Autoreload match Clear Flag 
//        (ICR) at the offset 0x4, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARRMCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ARRMCF_MASK) | ((val << ARRMCF_START_BIT) & ARRMCF_MASK )); \
   } 

#define ENABLE_ARRMCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ARRMCF_MASK ); \
   }

#define DISABLE_ARRMCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ARRMCF_MASK ); \
   } 

#define READ_ARRMCF() \
   ((READ_REGISTER_ULONG(0x4) & ARRMCF_MASK)  >> ARRMCF_START_BIT)

#define WHEN_ARRMCF_HIGH() \
     if ( READ_ARRMCF() )


#define UNLESS_ARRMCF_HIGH() \
     if (! READ_ARRMCF() )


#define WAIT_ARRMCF_LOW() \
    while ( READ_ARRMCF() );


#define WAIT_ARRMCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARRMCF() && (--___t___ > 0)); }


#define WAIT_ARRMCF_HIGH() \
    while (! READ_ARRMCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EXTTRIGCF
//
// Return the value of register Icr
//
// Notes : External trigger valid edge Clear Flag 
//        (ICR) at the offset 0x4, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EXTTRIGCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ EXTTRIGCF_MASK) | ((val << EXTTRIGCF_START_BIT) & EXTTRIGCF_MASK )); \
   } 

#define ENABLE_EXTTRIGCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  EXTTRIGCF_MASK ); \
   }

#define DISABLE_EXTTRIGCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~EXTTRIGCF_MASK ); \
   } 

#define READ_EXTTRIGCF() \
   ((READ_REGISTER_ULONG(0x4) & EXTTRIGCF_MASK)  >> EXTTRIGCF_START_BIT)

#define WHEN_EXTTRIGCF_HIGH() \
     if ( READ_EXTTRIGCF() )


#define UNLESS_EXTTRIGCF_HIGH() \
     if (! READ_EXTTRIGCF() )


#define WAIT_EXTTRIGCF_LOW() \
    while ( READ_EXTTRIGCF() );


#define WAIT_EXTTRIGCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTTRIGCF() && (--___t___ > 0)); }


#define WAIT_EXTTRIGCF_HIGH() \
    while (! READ_EXTTRIGCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CMPOKCF
//
// Return the value of register Icr
//
// Notes : Compare register update OK Clear Flag 
//        (ICR) at the offset 0x4, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CMPOKCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CMPOKCF_MASK) | ((val << CMPOKCF_START_BIT) & CMPOKCF_MASK )); \
   } 

#define ENABLE_CMPOKCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CMPOKCF_MASK ); \
   }

#define DISABLE_CMPOKCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CMPOKCF_MASK ); \
   } 

#define READ_CMPOKCF() \
   ((READ_REGISTER_ULONG(0x4) & CMPOKCF_MASK)  >> CMPOKCF_START_BIT)

#define WHEN_CMPOKCF_HIGH() \
     if ( READ_CMPOKCF() )


#define UNLESS_CMPOKCF_HIGH() \
     if (! READ_CMPOKCF() )


#define WAIT_CMPOKCF_LOW() \
    while ( READ_CMPOKCF() );


#define WAIT_CMPOKCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMPOKCF() && (--___t___ > 0)); }


#define WAIT_CMPOKCF_HIGH() \
    while (! READ_CMPOKCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARROKCF
//
// Return the value of register Icr
//
// Notes : Autoreload register update OK Clear Flag 
//        (ICR) at the offset 0x4, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARROKCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ARROKCF_MASK) | ((val << ARROKCF_START_BIT) & ARROKCF_MASK )); \
   } 

#define ENABLE_ARROKCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ARROKCF_MASK ); \
   }

#define DISABLE_ARROKCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ARROKCF_MASK ); \
   } 

#define READ_ARROKCF() \
   ((READ_REGISTER_ULONG(0x4) & ARROKCF_MASK)  >> ARROKCF_START_BIT)

#define WHEN_ARROKCF_HIGH() \
     if ( READ_ARROKCF() )


#define UNLESS_ARROKCF_HIGH() \
     if (! READ_ARROKCF() )


#define WAIT_ARROKCF_LOW() \
    while ( READ_ARROKCF() );


#define WAIT_ARROKCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARROKCF() && (--___t___ > 0)); }


#define WAIT_ARROKCF_HIGH() \
    while (! READ_ARROKCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : UPCF
//
// Return the value of register Icr
//
// Notes : Direction change to UP Clear Flag 
//        (ICR) at the offset 0x4, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_UPCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ UPCF_MASK) | ((val << UPCF_START_BIT) & UPCF_MASK )); \
   } 

#define ENABLE_UPCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  UPCF_MASK ); \
   }

#define DISABLE_UPCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~UPCF_MASK ); \
   } 

#define READ_UPCF() \
   ((READ_REGISTER_ULONG(0x4) & UPCF_MASK)  >> UPCF_START_BIT)

#define WHEN_UPCF_HIGH() \
     if ( READ_UPCF() )


#define UNLESS_UPCF_HIGH() \
     if (! READ_UPCF() )


#define WAIT_UPCF_LOW() \
    while ( READ_UPCF() );


#define WAIT_UPCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UPCF() && (--___t___ > 0)); }


#define WAIT_UPCF_HIGH() \
    while (! READ_UPCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DOWNCF
//
// Return the value of register Icr
//
// Notes : Direction change to down Clear Flag 
//        (ICR) at the offset 0x4, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DOWNCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DOWNCF_MASK) | ((val << DOWNCF_START_BIT) & DOWNCF_MASK )); \
   } 

#define ENABLE_DOWNCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DOWNCF_MASK ); \
   }

#define DISABLE_DOWNCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DOWNCF_MASK ); \
   } 

#define READ_DOWNCF() \
   ((READ_REGISTER_ULONG(0x4) & DOWNCF_MASK)  >> DOWNCF_START_BIT)

#define WHEN_DOWNCF_HIGH() \
     if ( READ_DOWNCF() )


#define UNLESS_DOWNCF_HIGH() \
     if (! READ_DOWNCF() )


#define WAIT_DOWNCF_LOW() \
    while ( READ_DOWNCF() );


#define WAIT_DOWNCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DOWNCF() && (--___t___ > 0)); }


#define WAIT_DOWNCF_HIGH() \
    while (! READ_DOWNCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Ier at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IER( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_IER() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Compare match Interrupt Enable 
    // 
#define CMPMIE_MASK 0x1U
#define CMPMIE_OFFSET 0
#define CMPMIE_START_BIT 0
#define CMPMIE_WIDTH 1


#define IER_REG 0x8

typedef enum cmpmie {
    CMPMIE_0,
    CMPMIE_1
} CMPMIE_T ;
#define WRITE_CMPMIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CMPMIE_MASK) | ((val << CMPMIE_START_BIT) & CMPMIE_MASK )); \
   } 

#define ENABLE_CMPMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CMPMIE_MASK ); \
   }

#define DISABLE_CMPMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CMPMIE_MASK ); \
   } 

#define READ_CMPMIE() \
   ((READ_REGISTER_ULONG(0x8) & CMPMIE_MASK)  >> CMPMIE_START_BIT)

#define WHEN_CMPMIE_HIGH() \
     if ( READ_CMPMIE() )


#define UNLESS_CMPMIE_HIGH() \
     if (! READ_CMPMIE() )


#define WAIT_CMPMIE_LOW() \
    while ( READ_CMPMIE() );


#define WAIT_CMPMIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMPMIE() && (--___t___ > 0)); }


#define WAIT_CMPMIE_HIGH() \
    while (! READ_CMPMIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Autoreload match Interrupt Enable 
    // 
#define ARRMIE_MASK 0x2U
#define ARRMIE_OFFSET 1
#define ARRMIE_START_BIT 1
#define ARRMIE_WIDTH 1



typedef enum arrmie {
    ARRMIE_0,
    ARRMIE_1
} ARRMIE_T ;
#define WRITE_ARRMIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ARRMIE_MASK) | ((val << ARRMIE_START_BIT) & ARRMIE_MASK )); \
   } 

#define ENABLE_ARRMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ARRMIE_MASK ); \
   }

#define DISABLE_ARRMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ARRMIE_MASK ); \
   } 

#define READ_ARRMIE() \
   ((READ_REGISTER_ULONG(0x8) & ARRMIE_MASK)  >> ARRMIE_START_BIT)

#define WHEN_ARRMIE_HIGH() \
     if ( READ_ARRMIE() )


#define UNLESS_ARRMIE_HIGH() \
     if (! READ_ARRMIE() )


#define WAIT_ARRMIE_LOW() \
    while ( READ_ARRMIE() );


#define WAIT_ARRMIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARRMIE() && (--___t___ > 0)); }


#define WAIT_ARRMIE_HIGH() \
    while (! READ_ARRMIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External trigger valid edge Interrupt Enable 
    // 
#define EXTTRIGIE_MASK 0x4U
#define EXTTRIGIE_OFFSET 2
#define EXTTRIGIE_START_BIT 2
#define EXTTRIGIE_WIDTH 1



typedef enum exttrigie {
    EXTTRIGIE_0,
    EXTTRIGIE_1
} EXTTRIGIE_T ;
#define WRITE_EXTTRIGIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EXTTRIGIE_MASK) | ((val << EXTTRIGIE_START_BIT) & EXTTRIGIE_MASK )); \
   } 

#define ENABLE_EXTTRIGIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  EXTTRIGIE_MASK ); \
   }

#define DISABLE_EXTTRIGIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~EXTTRIGIE_MASK ); \
   } 

#define READ_EXTTRIGIE() \
   ((READ_REGISTER_ULONG(0x8) & EXTTRIGIE_MASK)  >> EXTTRIGIE_START_BIT)

#define WHEN_EXTTRIGIE_HIGH() \
     if ( READ_EXTTRIGIE() )


#define UNLESS_EXTTRIGIE_HIGH() \
     if (! READ_EXTTRIGIE() )


#define WAIT_EXTTRIGIE_LOW() \
    while ( READ_EXTTRIGIE() );


#define WAIT_EXTTRIGIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTTRIGIE() && (--___t___ > 0)); }


#define WAIT_EXTTRIGIE_HIGH() \
    while (! READ_EXTTRIGIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Compare register update OK Interrupt Enable 
    // 
#define CMPOKIE_MASK 0x8U
#define CMPOKIE_OFFSET 3
#define CMPOKIE_START_BIT 3
#define CMPOKIE_WIDTH 1



typedef enum cmpokie {
    CMPOKIE_0,
    CMPOKIE_1
} CMPOKIE_T ;
#define WRITE_CMPOKIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CMPOKIE_MASK) | ((val << CMPOKIE_START_BIT) & CMPOKIE_MASK )); \
   } 

#define ENABLE_CMPOKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CMPOKIE_MASK ); \
   }

#define DISABLE_CMPOKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CMPOKIE_MASK ); \
   } 

#define READ_CMPOKIE() \
   ((READ_REGISTER_ULONG(0x8) & CMPOKIE_MASK)  >> CMPOKIE_START_BIT)

#define WHEN_CMPOKIE_HIGH() \
     if ( READ_CMPOKIE() )


#define UNLESS_CMPOKIE_HIGH() \
     if (! READ_CMPOKIE() )


#define WAIT_CMPOKIE_LOW() \
    while ( READ_CMPOKIE() );


#define WAIT_CMPOKIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMPOKIE() && (--___t___ > 0)); }


#define WAIT_CMPOKIE_HIGH() \
    while (! READ_CMPOKIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Autoreload register update OK Interrupt Enable 
    // 
#define ARROKIE_MASK 0x10U
#define ARROKIE_OFFSET 4
#define ARROKIE_START_BIT 4
#define ARROKIE_WIDTH 1



typedef enum arrokie {
    ARROKIE_0,
    ARROKIE_1
} ARROKIE_T ;
#define WRITE_ARROKIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ARROKIE_MASK) | ((val << ARROKIE_START_BIT) & ARROKIE_MASK )); \
   } 

#define ENABLE_ARROKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ARROKIE_MASK ); \
   }

#define DISABLE_ARROKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ARROKIE_MASK ); \
   } 

#define READ_ARROKIE() \
   ((READ_REGISTER_ULONG(0x8) & ARROKIE_MASK)  >> ARROKIE_START_BIT)

#define WHEN_ARROKIE_HIGH() \
     if ( READ_ARROKIE() )


#define UNLESS_ARROKIE_HIGH() \
     if (! READ_ARROKIE() )


#define WAIT_ARROKIE_LOW() \
    while ( READ_ARROKIE() );


#define WAIT_ARROKIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARROKIE() && (--___t___ > 0)); }


#define WAIT_ARROKIE_HIGH() \
    while (! READ_ARROKIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direction change to UP Interrupt Enable 
    // 
#define UPIE_MASK 0x20U
#define UPIE_OFFSET 5
#define UPIE_START_BIT 5
#define UPIE_WIDTH 1



typedef enum upie {
    UPIE_0,
    UPIE_1
} UPIE_T ;
#define WRITE_UPIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ UPIE_MASK) | ((val << UPIE_START_BIT) & UPIE_MASK )); \
   } 

#define ENABLE_UPIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  UPIE_MASK ); \
   }

#define DISABLE_UPIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~UPIE_MASK ); \
   } 

#define READ_UPIE() \
   ((READ_REGISTER_ULONG(0x8) & UPIE_MASK)  >> UPIE_START_BIT)

#define WHEN_UPIE_HIGH() \
     if ( READ_UPIE() )


#define UNLESS_UPIE_HIGH() \
     if (! READ_UPIE() )


#define WAIT_UPIE_LOW() \
    while ( READ_UPIE() );


#define WAIT_UPIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UPIE() && (--___t___ > 0)); }


#define WAIT_UPIE_HIGH() \
    while (! READ_UPIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Interrupt Enable Register (IER) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direction change to down Interrupt Enable 
    // 
#define DOWNIE_MASK 0x40U
#define DOWNIE_OFFSET 6
#define DOWNIE_START_BIT 6
#define DOWNIE_WIDTH 1



typedef enum downie {
    DOWNIE_0,
    DOWNIE_1
} DOWNIE_T ;
#define WRITE_DOWNIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DOWNIE_MASK) | ((val << DOWNIE_START_BIT) & DOWNIE_MASK )); \
   } 

#define ENABLE_DOWNIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DOWNIE_MASK ); \
   }

#define DISABLE_DOWNIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DOWNIE_MASK ); \
   } 

#define READ_DOWNIE() \
   ((READ_REGISTER_ULONG(0x8) & DOWNIE_MASK)  >> DOWNIE_START_BIT)

#define WHEN_DOWNIE_HIGH() \
     if ( READ_DOWNIE() )


#define UNLESS_DOWNIE_HIGH() \
     if (! READ_DOWNIE() )


#define WAIT_DOWNIE_LOW() \
    while ( READ_DOWNIE() );


#define WAIT_DOWNIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DOWNIE() && (--___t___ > 0)); }


#define WAIT_DOWNIE_HIGH() \
    while (! READ_DOWNIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Cfgr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CFGR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_CFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_CFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_CFGR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock selector 
    // 
#define CKSEL_MASK 0x1U
#define CKSEL_OFFSET 0
#define CKSEL_START_BIT 0
#define CKSEL_WIDTH 1


#define CFGR_REG 0xC

typedef enum cksel {
    CKSEL_0,
    CKSEL_1
} CKSEL_T ;
#define WRITE_CKSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CKSEL_MASK) | ((val << CKSEL_START_BIT) & CKSEL_MASK )); \
   } 

#define ENABLE_CKSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CKSEL_MASK ); \
   }

#define DISABLE_CKSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CKSEL_MASK ); \
   } 

#define READ_CKSEL() \
   ((READ_REGISTER_ULONG(0xC) & CKSEL_MASK)  >> CKSEL_START_BIT)

#define WHEN_CKSEL_HIGH() \
     if ( READ_CKSEL() )


#define UNLESS_CKSEL_HIGH() \
     if (! READ_CKSEL() )


#define WAIT_CKSEL_LOW() \
    while ( READ_CKSEL() );


#define WAIT_CKSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CKSEL() && (--___t___ > 0)); }


#define WAIT_CKSEL_HIGH() \
    while (! READ_CKSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 1:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock Polarity 
    // 
#define CKPOL_MASK 0x6U
#define CKPOL_OFFSET 2
#define CKPOL_START_BIT 1
#define CKPOL_WIDTH 2



#define READ_CKPOL() \
   ((READ_REGISTER_ULONG(0xC) & CKPOL_MASK)  >> CKPOL_START_BIT)

#define WRITE_CKPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CKPOL_MASK) | ((val << CKPOL_START_BIT) & CKPOL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 3:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Configurable digital filter for external clock 
    // 
#define CKFLT_MASK 0x18U
#define CKFLT_OFFSET 4
#define CKFLT_START_BIT 3
#define CKFLT_WIDTH 2



typedef enum ckflt {
    CKFLT_0,
    CKFLT_1
} CKFLT_T ;
#define READ_CKFLT() \
   ((READ_REGISTER_ULONG(0xC) & CKFLT_MASK)  >> CKFLT_START_BIT)

#define WRITE_CKFLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CKFLT_MASK) | ((val << CKFLT_START_BIT) & CKFLT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Configurable digital filter for trigger 
    // 
#define TRGFLT_MASK 0xC0U
#define TRGFLT_OFFSET 7
#define TRGFLT_START_BIT 6
#define TRGFLT_WIDTH 2



typedef enum trgflt {
    TRGFLT_0,
    TRGFLT_1
} TRGFLT_T ;
#define READ_TRGFLT() \
   ((READ_REGISTER_ULONG(0xC) & TRGFLT_MASK)  >> TRGFLT_START_BIT)

#define WRITE_TRGFLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TRGFLT_MASK) | ((val << TRGFLT_START_BIT) & TRGFLT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 9:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock prescaler 
    // 
#define PRESC_MASK 0xE00U
#define PRESC_OFFSET 11
#define PRESC_START_BIT 9
#define PRESC_WIDTH 3



#define READ_PRESC() \
   ((READ_REGISTER_ULONG(0xC) & PRESC_MASK)  >> PRESC_START_BIT)

#define WRITE_PRESC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PRESC_MASK) | ((val << PRESC_START_BIT) & PRESC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 13:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Trigger selector 
    // 
#define TRIGSEL_MASK 0xE000U
#define TRIGSEL_OFFSET 15
#define TRIGSEL_START_BIT 13
#define TRIGSEL_WIDTH 3



typedef enum trigsel {
    TRIGSEL_0,
    TRIGSEL_1
} TRIGSEL_T ;
#define READ_TRIGSEL() \
   ((READ_REGISTER_ULONG(0xC) & TRIGSEL_MASK)  >> TRIGSEL_START_BIT)

#define WRITE_TRIGSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TRIGSEL_MASK) | ((val << TRIGSEL_START_BIT) & TRIGSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 17:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Trigger enable and polarity 
    // 
#define TRIGEN_MASK 0x60000U
#define TRIGEN_OFFSET 18
#define TRIGEN_START_BIT 17
#define TRIGEN_WIDTH 2



typedef enum trigen {
    TRIGEN_0,
    TRIGEN_1
} TRIGEN_T ;
#define READ_TRIGEN() \
   ((READ_REGISTER_ULONG(0xC) & TRIGEN_MASK)  >> TRIGEN_START_BIT)

#define WRITE_TRIGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TRIGEN_MASK) | ((val << TRIGEN_START_BIT) & TRIGEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout enable 
    // 
#define TIMOUT_MASK 0x80000U
#define TIMOUT_OFFSET 19
#define TIMOUT_START_BIT 19
#define TIMOUT_WIDTH 1



typedef enum timout {
    TIMOUT_0,
    TIMOUT_1
} TIMOUT_T ;
#define WRITE_TIMOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TIMOUT_MASK) | ((val << TIMOUT_START_BIT) & TIMOUT_MASK )); \
   } 

#define ENABLE_TIMOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TIMOUT_MASK ); \
   }

#define DISABLE_TIMOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TIMOUT_MASK ); \
   } 

#define READ_TIMOUT() \
   ((READ_REGISTER_ULONG(0xC) & TIMOUT_MASK)  >> TIMOUT_START_BIT)

#define WHEN_TIMOUT_HIGH() \
     if ( READ_TIMOUT() )


#define UNLESS_TIMOUT_HIGH() \
     if (! READ_TIMOUT() )


#define WAIT_TIMOUT_LOW() \
    while ( READ_TIMOUT() );


#define WAIT_TIMOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMOUT() && (--___t___ > 0)); }


#define WAIT_TIMOUT_HIGH() \
    while (! READ_TIMOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Waveform shape 
    // 
#define WAVE_MASK 0x100000U
#define WAVE_OFFSET 20
#define WAVE_START_BIT 20
#define WAVE_WIDTH 1



typedef enum wave {
    WAVE_0,
    WAVE_1
} WAVE_T ;
#define WRITE_WAVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WAVE_MASK) | ((val << WAVE_START_BIT) & WAVE_MASK )); \
   } 

#define ENABLE_WAVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WAVE_MASK ); \
   }

#define DISABLE_WAVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WAVE_MASK ); \
   } 

#define READ_WAVE() \
   ((READ_REGISTER_ULONG(0xC) & WAVE_MASK)  >> WAVE_START_BIT)

#define WHEN_WAVE_HIGH() \
     if ( READ_WAVE() )


#define UNLESS_WAVE_HIGH() \
     if (! READ_WAVE() )


#define WAIT_WAVE_LOW() \
    while ( READ_WAVE() );


#define WAIT_WAVE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAVE() && (--___t___ > 0)); }


#define WAIT_WAVE_HIGH() \
    while (! READ_WAVE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Waveform shape polarity 
    // 
#define WAVPOL_MASK 0x200000U
#define WAVPOL_OFFSET 21
#define WAVPOL_START_BIT 21
#define WAVPOL_WIDTH 1



typedef enum wavpol {
    WAVPOL_0,
    WAVPOL_1
} WAVPOL_T ;
#define WRITE_WAVPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WAVPOL_MASK) | ((val << WAVPOL_START_BIT) & WAVPOL_MASK )); \
   } 

#define ENABLE_WAVPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WAVPOL_MASK ); \
   }

#define DISABLE_WAVPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WAVPOL_MASK ); \
   } 

#define READ_WAVPOL() \
   ((READ_REGISTER_ULONG(0xC) & WAVPOL_MASK)  >> WAVPOL_START_BIT)

#define WHEN_WAVPOL_HIGH() \
     if ( READ_WAVPOL() )


#define UNLESS_WAVPOL_HIGH() \
     if (! READ_WAVPOL() )


#define WAIT_WAVPOL_LOW() \
    while ( READ_WAVPOL() );


#define WAIT_WAVPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAVPOL() && (--___t___ > 0)); }


#define WAIT_WAVPOL_HIGH() \
    while (! READ_WAVPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Registers update mode 
    // 
#define PRELOAD_MASK 0x400000U
#define PRELOAD_OFFSET 22
#define PRELOAD_START_BIT 22
#define PRELOAD_WIDTH 1



typedef enum preload {
    PRELOAD_0,
    PRELOAD_1
} PRELOAD_T ;
#define WRITE_PRELOAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PRELOAD_MASK) | ((val << PRELOAD_START_BIT) & PRELOAD_MASK )); \
   } 

#define ENABLE_PRELOAD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PRELOAD_MASK ); \
   }

#define DISABLE_PRELOAD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PRELOAD_MASK ); \
   } 

#define READ_PRELOAD() \
   ((READ_REGISTER_ULONG(0xC) & PRELOAD_MASK)  >> PRELOAD_START_BIT)

#define WHEN_PRELOAD_HIGH() \
     if ( READ_PRELOAD() )


#define UNLESS_PRELOAD_HIGH() \
     if (! READ_PRELOAD() )


#define WAIT_PRELOAD_LOW() \
    while ( READ_PRELOAD() );


#define WAIT_PRELOAD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PRELOAD() && (--___t___ > 0)); }


#define WAIT_PRELOAD_HIGH() \
    while (! READ_PRELOAD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // counter mode enabled 
    // 
#define COUNTMODE_MASK 0x800000U
#define COUNTMODE_OFFSET 23
#define COUNTMODE_START_BIT 23
#define COUNTMODE_WIDTH 1



typedef enum countmode {
    COUNTMODE_0,
    COUNTMODE_1
} COUNTMODE_T ;
#define WRITE_COUNTMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ COUNTMODE_MASK) | ((val << COUNTMODE_START_BIT) & COUNTMODE_MASK )); \
   } 

#define ENABLE_COUNTMODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  COUNTMODE_MASK ); \
   }

#define DISABLE_COUNTMODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~COUNTMODE_MASK ); \
   } 

#define READ_COUNTMODE() \
   ((READ_REGISTER_ULONG(0xC) & COUNTMODE_MASK)  >> COUNTMODE_START_BIT)

#define WHEN_COUNTMODE_HIGH() \
     if ( READ_COUNTMODE() )


#define UNLESS_COUNTMODE_HIGH() \
     if (! READ_COUNTMODE() )


#define WAIT_COUNTMODE_LOW() \
    while ( READ_COUNTMODE() );


#define WAIT_COUNTMODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COUNTMODE() && (--___t___ > 0)); }


#define WAIT_COUNTMODE_HIGH() \
    while (! READ_COUNTMODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Configuration Register (CFGR) at the offset 0xC, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Encoder mode enable 
    // 
#define ENC_MASK 0x1000000U
#define ENC_OFFSET 24
#define ENC_START_BIT 24
#define ENC_WIDTH 1



typedef enum enc {
    ENC_0,
    ENC_1
} ENC_T ;
#define WRITE_ENC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ENC_MASK) | ((val << ENC_START_BIT) & ENC_MASK )); \
   } 

#define ENABLE_ENC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ENC_MASK ); \
   }

#define DISABLE_ENC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ENC_MASK ); \
   } 

#define READ_ENC() \
   ((READ_REGISTER_ULONG(0xC) & ENC_MASK)  >> ENC_START_BIT)

#define WHEN_ENC_HIGH() \
     if ( READ_ENC() )


#define UNLESS_ENC_HIGH() \
     if (! READ_ENC() )


#define WAIT_ENC_LOW() \
    while ( READ_ENC() );


#define WAIT_ENC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENC() && (--___t___ > 0)); }


#define WAIT_ENC_HIGH() \
    while (! READ_ENC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_CR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : ENABLE
//
// Return the value of register Cr
//
// Notes : LPTIM Enable 
//        (CR) at the offset 0x10, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ENABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ENABLE_MASK) | ((val << ENABLE_START_BIT) & ENABLE_MASK )); \
   } 

#define ENABLE_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ENABLE_MASK ); \
   }

#define DISABLE_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ENABLE_MASK ); \
   } 

#define READ_ENABLE() \
   ((READ_REGISTER_ULONG(0x10) & ENABLE_MASK)  >> ENABLE_START_BIT)

#define WHEN_ENABLE_HIGH() \
     if ( READ_ENABLE() )


#define UNLESS_ENABLE_HIGH() \
     if (! READ_ENABLE() )


#define WAIT_ENABLE_LOW() \
    while ( READ_ENABLE() );


#define WAIT_ENABLE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENABLE() && (--___t___ > 0)); }


#define WAIT_ENABLE_HIGH() \
    while (! READ_ENABLE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SNGSTRT
//
// Return the value of register Cr
//
// Notes : LPTIM start in single mode 
//        (CR) at the offset 0x10, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SNGSTRT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SNGSTRT_MASK) | ((val << SNGSTRT_START_BIT) & SNGSTRT_MASK )); \
   } 

#define ENABLE_SNGSTRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SNGSTRT_MASK ); \
   }

#define DISABLE_SNGSTRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SNGSTRT_MASK ); \
   } 

#define READ_SNGSTRT() \
   ((READ_REGISTER_ULONG(0x10) & SNGSTRT_MASK)  >> SNGSTRT_START_BIT)

#define WHEN_SNGSTRT_HIGH() \
     if ( READ_SNGSTRT() )


#define UNLESS_SNGSTRT_HIGH() \
     if (! READ_SNGSTRT() )


#define WAIT_SNGSTRT_LOW() \
    while ( READ_SNGSTRT() );


#define WAIT_SNGSTRT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNGSTRT() && (--___t___ > 0)); }


#define WAIT_SNGSTRT_HIGH() \
    while (! READ_SNGSTRT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CNTSTRT
//
// Return the value of register Cr
//
// Notes : Timer start in continuous mode 
//        (CR) at the offset 0x10, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CNTSTRT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CNTSTRT_MASK) | ((val << CNTSTRT_START_BIT) & CNTSTRT_MASK )); \
   } 

#define ENABLE_CNTSTRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CNTSTRT_MASK ); \
   }

#define DISABLE_CNTSTRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CNTSTRT_MASK ); \
   } 

#define READ_CNTSTRT() \
   ((READ_REGISTER_ULONG(0x10) & CNTSTRT_MASK)  >> CNTSTRT_START_BIT)

#define WHEN_CNTSTRT_HIGH() \
     if ( READ_CNTSTRT() )


#define UNLESS_CNTSTRT_HIGH() \
     if (! READ_CNTSTRT() )


#define WAIT_CNTSTRT_LOW() \
    while ( READ_CNTSTRT() );


#define WAIT_CNTSTRT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNTSTRT() && (--___t___ > 0)); }


#define WAIT_CNTSTRT_HIGH() \
    while (! READ_CNTSTRT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmp
//
// Return the value of register CMP
//
// Notes : Register Cmp at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CMP( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_CMP(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_CMP(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_CMP() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmp
//
// Return the value of register CMP
//
// Notes : Register Compare Register (CMP) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Compare value 
    // 
#define CMP_MASK 0xFFFFU
#define CMP_OFFSET 15
#define CMP_START_BIT 0
#define CMP_WIDTH 16


#define CMP_REG 0x14

typedef enum cmp {
    CMP_0,
    CMP_1
} CMP_T ;
#define READ_CMP() \
   ((READ_REGISTER_ULONG(0x14) & CMP_MASK)  >> CMP_START_BIT)

#define WRITE_CMP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CMP_MASK) | ((val << CMP_START_BIT) & CMP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Arr
//
// Return the value of register ARR
//
// Notes : Register Arr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ARR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_ARR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_ARR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_ARR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Arr
//
// Return the value of register ARR
//
// Notes : Register Autoreload Register (ARR) at the offset 0x18, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto reload value 
    // 
#define ARR_MASK 0xFFFFU
#define ARR_OFFSET 15
#define ARR_START_BIT 0
#define ARR_WIDTH 16


#define ARR_REG 0x18

typedef enum arr {
    ARR_0,
    ARR_1
} ARR_T ;
#define READ_ARR() \
   ((READ_REGISTER_ULONG(0x18) & ARR_MASK)  >> ARR_START_BIT)

#define WRITE_ARR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ARR_MASK) | ((val << ARR_START_BIT) & ARR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cnt
//
// Return the value of register CNT
//
// Notes : Register Cnt at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CNT() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cnt
//
// Return the value of register CNT
//
// Notes : Register Counter Register (CNT) at the offset 0x1C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Counter value 
    // 
#define CNT_MASK 0xFFFFU
#define CNT_OFFSET 15
#define CNT_START_BIT 0
#define CNT_WIDTH 16


#define CNT_REG 0x1C

typedef enum cnt {
    CNT_0,
    CNT_1
} CNT_T ;
#define READ_CNT() \
   ((READ_REGISTER_ULONG(0x1C) & CNT_MASK)  >> CNT_START_BIT)

#define WRITE_CNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CNT_MASK) | ((val << CNT_START_BIT) & CNT_MASK )); \
   } 

