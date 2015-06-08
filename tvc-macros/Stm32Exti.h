/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Stm32/Stm32Exti/macro-c/Stm32Exti.h
// 
//
// Generated on the 06/09/2012 18:22 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by Remi PRUD'HOMME
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht ST Ericsson  2012
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptMask
//
// Return the value of register INTERRUPT_MASK
//
// Notes : Register Interrupt Mask on line (0-17) at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTI_INTERRUPT_MASK( y) \
     WRITE_REGISTER_ULONG( 0x40010400 , y)

#define SET_BITS_EXTI_INTERRUPT_MASK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010400); \
     WRITE_REGISTER_ULONG( 0x40010400 , val |  mask ); \
   }

#define CLEAR_BITS_EXTI_INTERRUPT_MASK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010400); \
     WRITE_REGISTER_ULONG( 0x40010400 , val & ~mask ); \
   }

#define READ_REGISTER_EXTI_INTERRUPT_MASK() \
     READ_REGISTER_ULONG(0x40010400)

/////////////////////////////////////////////////////////////////////////
//
// Function : EventMask
//
// Return the value of register EVENT_MASK
//
// Notes : Register Event mask on line (0-17) at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTI_EVENT_MASK( y) \
     WRITE_REGISTER_ULONG( 0x40010404 , y)

#define SET_BITS_EXTI_EVENT_MASK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010404); \
     WRITE_REGISTER_ULONG( 0x40010404 , val |  mask ); \
   }

#define CLEAR_BITS_EXTI_EVENT_MASK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010404); \
     WRITE_REGISTER_ULONG( 0x40010404 , val & ~mask ); \
   }

#define READ_REGISTER_EXTI_EVENT_MASK() \
     READ_REGISTER_ULONG(0x40010404)

/////////////////////////////////////////////////////////////////////////
//
// Function : RisingTrigger
//
// Return the value of register RISING_TRIGGER
//
// Notes : Register Rising trigger selection register (0-17) at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTI_RISING_TRIGGER( y) \
     WRITE_REGISTER_ULONG( 0x40010408 , y)

#define SET_BITS_EXTI_RISING_TRIGGER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010408); \
     WRITE_REGISTER_ULONG( 0x40010408 , val |  mask ); \
   }

#define CLEAR_BITS_EXTI_RISING_TRIGGER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010408); \
     WRITE_REGISTER_ULONG( 0x40010408 , val & ~mask ); \
   }

#define READ_REGISTER_EXTI_RISING_TRIGGER() \
     READ_REGISTER_ULONG(0x40010408)

/////////////////////////////////////////////////////////////////////////
//
// Function : FallingTrigger
//
// Return the value of register FALLING_TRIGGER
//
// Notes : Register Falling trigger selection register (0-17) at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTI_FALLING_TRIGGER( y) \
     WRITE_REGISTER_ULONG( 0x4001040C , y)

#define SET_BITS_EXTI_FALLING_TRIGGER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4001040C); \
     WRITE_REGISTER_ULONG( 0x4001040C , val |  mask ); \
   }

#define CLEAR_BITS_EXTI_FALLING_TRIGGER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4001040C); \
     WRITE_REGISTER_ULONG( 0x4001040C , val & ~mask ); \
   }

#define READ_REGISTER_EXTI_FALLING_TRIGGER() \
     READ_REGISTER_ULONG(0x4001040C)

/////////////////////////////////////////////////////////////////////////
//
// Function : SoftwareEvent
//
// Return the value of register SOFTWARE_EVENT
//
// Notes : Register Software interrupt event register ( (0-17) at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTI_SOFTWARE_EVENT( y) \
     WRITE_REGISTER_ULONG( 0x40010410 , y)

#define SET_BITS_EXTI_SOFTWARE_EVENT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010410); \
     WRITE_REGISTER_ULONG( 0x40010410 , val |  mask ); \
   }

#define CLEAR_BITS_EXTI_SOFTWARE_EVENT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010410); \
     WRITE_REGISTER_ULONG( 0x40010410 , val & ~mask ); \
   }

#define READ_REGISTER_EXTI_SOFTWARE_EVENT() \
     READ_REGISTER_ULONG(0x40010410)

/////////////////////////////////////////////////////////////////////////
//
// Function : PendingInterrupt
//
// Return the value of register PENDING_INTERRUPT
//
// Notes : Register Software interrupt event register ( (0-17) at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTI_PENDING_INTERRUPT( y) \
     WRITE_REGISTER_ULONG( 0x40010414 , y)

#define SET_BITS_EXTI_PENDING_INTERRUPT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010414); \
     WRITE_REGISTER_ULONG( 0x40010414 , val |  mask ); \
   }

#define CLEAR_BITS_EXTI_PENDING_INTERRUPT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010414); \
     WRITE_REGISTER_ULONG( 0x40010414 , val & ~mask ); \
   }

#define READ_REGISTER_EXTI_PENDING_INTERRUPT() \
     READ_REGISTER_ULONG(0x40010414)

