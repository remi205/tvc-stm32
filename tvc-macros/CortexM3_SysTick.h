/////////////////////////////////////////////////////////////////////////
// File : c:/Lisp/Production/Stm32/CortexM3_SysTick.h
// 
//
// Generated on the 09/07/2011 12:20 by the 'gen-memory-macros' code generator 
//
// Generator written in Common Lisp, by Rémi PRUD'HOMME
// Register Description : 
//
// Reference document : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht Rémi PRUD'HOMME Grenoble  2011
/////////////////////////////////////////////////////////////////////////

//  
//  The NVIC facilitates low-latency exception and interrupt 
//  handling, controls power management, implements System Control 
//  Registers. The NVIC supports up to 240 dynamically 
//  reprioritizable interrupts each with up to 256 levels of 
//  priority. The NVIC and the processor core interface are closely 
//  coupled, which enables low latency interrupt processing and 
//  efficient processing of late arriving interrupts. The NVIC 
//  maintains knowledge of the stacked (nested) interrupts to enable 
//  tail-chaining of interrupts. 
//  

// This file is generated on.
// Don't modify it 
#pragma once 
 
#ifdef  __cplusplus 
extern "C" { 
#endif 

 
#define CORTEXM3_NVIC_SYSTICK 0xE000E010

//  
//  Use the SysTick Control and Status Register to enable the SysTick 
//  features..
//  Register NVIC_SYSTICK_CONTROL_AND_STATUS at offset 0x10
//   
//  
#define WRITE_REGISTER_NVIC_SYSTICK_CONTROL_AND_STATUS( y) \
     WRITE_REGISTER_ULONG( 0xE000E020 , y)

#define READ_REGISTER_NVIC_SYSTICK_CONTROL_AND_STATUS() \
     READ_REGISTER_ULONG( 0xE000E020)

//  
//  Returns 1 if timer counted to 0 since last time this was read. 
//  Clears on read by application of any part of the SysTick Control 
//  and Status Register. If read by the debugger using the DAP, this 
//  bit is cleared on read-only if the MasterType bit in the AHB-AP 
//  Control Register is set to 0. Otherwise, the COUNTFLAG bit is not 
//  changed by the debugger read..
//  Register NVIC_SYSTICK_CONTROL_AND_STATUS 0x10, Bits 16:16
//   
//  
#define SYSTICK_FLAG_MASK 0x10000
#define SYSTICK_FLAG_OFFSET 16
#define SYSTICK_FLAG_STOP_BIT 16
#define SYSTICK_FLAG_START_BIT 16
#define SYSTICK_FLAG_WIDTH 1

#define SET_SYSTICK_FLAG() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000E020); \
     WRITE_REGISTER_ULONG( 0xE000E020 , val |  SYSTICK_FLAG_MASK ); \
   }

#define READ_SYSTICK_FLAG() \
   ((READ_REGISTER_ULONG( 0xE000E020) & SYSTICK_FLAG_MASK)  >> SYSTICK_FLAG_START_BIT)

#define WRITE_SYSTICK_FLAG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020 , (OldValue & ~ SYSTICK_FLAG_MASK) | ((val << SYSTICK_FLAG_START_BIT) & SYSTICK_FLAG_MASK )); \
   } 

#define RESET_SYSTICK_FLAG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020, val & ~SYSTICK_FLAG_MASK ); \
   } 

#define WHEN_SYSTICK_FLAG_SET(x) \
     if ( READ_SYSTICK_FLAG() );


#define UNLESS_SYSTICK_FLAG_SET() \
     if (! READ_SYSTICK_FLAG() );


#define WAIT_SYSTICK_FLAG_SET() \
    while ( READ_SYSTICK_FLAG() );


#define WAIT_SYSTICK_FLAG_RESET() \
    while (! READ_SYSTICK_FLAG() );


//  
//  0 = external reference clock. 
//  1 = core clock. If no reference clock is provided, it is held at 
//  1 and so gives the same time as the core clock. The core clock 
//  must be at least 2.5 times faster than the reference clock. If it 
//  is not, the count values are Unpredictable..
//  Register NVIC_SYSTICK_CONTROL_AND_STATUS 0x10, Bits 2:2
//   
//  
#define SYSTICK_CLK_SOURCE_MASK 0x4
#define SYSTICK_CLK_SOURCE_OFFSET 2
#define SYSTICK_CLK_SOURCE_STOP_BIT 2
#define SYSTICK_CLK_SOURCE_START_BIT 2
#define SYSTICK_CLK_SOURCE_WIDTH 1

#define SET_SYSTICK_CLK_SOURCE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000E020); \
     WRITE_REGISTER_ULONG( 0xE000E020 , val |  SYSTICK_CLK_SOURCE_MASK ); \
   }

#define READ_SYSTICK_CLK_SOURCE() \
   ((READ_REGISTER_ULONG( 0xE000E020) & SYSTICK_CLK_SOURCE_MASK)  >> SYSTICK_CLK_SOURCE_START_BIT)

#define WRITE_SYSTICK_CLK_SOURCE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020 , (OldValue & ~ SYSTICK_CLK_SOURCE_MASK) | ((val << SYSTICK_CLK_SOURCE_START_BIT) & SYSTICK_CLK_SOURCE_MASK )); \
   } 

#define RESET_SYSTICK_CLK_SOURCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020, val & ~SYSTICK_CLK_SOURCE_MASK ); \
   } 

#define WHEN_SYSTICK_CLK_SOURCE_SET(x) \
     if ( READ_SYSTICK_CLK_SOURCE() );


#define UNLESS_SYSTICK_CLK_SOURCE_SET() \
     if (! READ_SYSTICK_CLK_SOURCE() );


#define WAIT_SYSTICK_CLK_SOURCE_SET() \
    while ( READ_SYSTICK_CLK_SOURCE() );


#define WAIT_SYSTICK_CLK_SOURCE_RESET() \
    while (! READ_SYSTICK_CLK_SOURCE() );


//  
//  1 = counting down to 0 pends the SysTick handler. 0 = counting 
//  down to 0 does not pend the SysTick handler. Software can use the 
//  COUNTFLAG to determine if ever counted to 0..
//  Register NVIC_SYSTICK_CONTROL_AND_STATUS 0x10, Bits 1:1
//   
//  
#define SYSTICK_TICK_INTERRUPT_MASK 0x2
#define SYSTICK_TICK_INTERRUPT_OFFSET 1
#define SYSTICK_TICK_INTERRUPT_STOP_BIT 1
#define SYSTICK_TICK_INTERRUPT_START_BIT 1
#define SYSTICK_TICK_INTERRUPT_WIDTH 1

#define SET_SYSTICK_TICK_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000E020); \
     WRITE_REGISTER_ULONG( 0xE000E020 , val |  SYSTICK_TICK_INTERRUPT_MASK ); \
   }

#define READ_SYSTICK_TICK_INTERRUPT() \
   ((READ_REGISTER_ULONG( 0xE000E020) & SYSTICK_TICK_INTERRUPT_MASK)  >> SYSTICK_TICK_INTERRUPT_START_BIT)

#define WRITE_SYSTICK_TICK_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020 , (OldValue & ~ SYSTICK_TICK_INTERRUPT_MASK) | ((val << SYSTICK_TICK_INTERRUPT_START_BIT) & SYSTICK_TICK_INTERRUPT_MASK )); \
   } 

#define RESET_SYSTICK_TICK_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020, val & ~SYSTICK_TICK_INTERRUPT_MASK ); \
   } 

#define WHEN_SYSTICK_TICK_INTERRUPT_SET(x) \
     if ( READ_SYSTICK_TICK_INTERRUPT() );


#define UNLESS_SYSTICK_TICK_INTERRUPT_SET() \
     if (! READ_SYSTICK_TICK_INTERRUPT() );


#define WAIT_SYSTICK_TICK_INTERRUPT_SET() \
    while ( READ_SYSTICK_TICK_INTERRUPT() );


#define WAIT_SYSTICK_TICK_INTERRUPT_RESET() \
    while (! READ_SYSTICK_TICK_INTERRUPT() );


//  
//  1 = counter operates in a multi-shot way. That is, counter loads 
//  with the Reload value and then begins counting down. On reaching 
//  0, it sets the COUNTFLAG to 1 and optionally pends the SysTick 
//  handler, based on TICKINT. It then loads the Reload value again, 
//  and begins counting. 0 = counter disabled..
//  Register NVIC_SYSTICK_CONTROL_AND_STATUS 0x10, Bits 0:0
//   
//  
#define SYSTICK_ENABLE_MASK 0x1
#define SYSTICK_ENABLE_OFFSET 0
#define SYSTICK_ENABLE_STOP_BIT 0
#define SYSTICK_ENABLE_START_BIT 0
#define SYSTICK_ENABLE_WIDTH 1

#define SET_SYSTICK_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000E020); \
     WRITE_REGISTER_ULONG( 0xE000E020 , val |  SYSTICK_ENABLE_MASK ); \
   }

#define READ_SYSTICK_ENABLE() \
   ((READ_REGISTER_ULONG( 0xE000E020) & SYSTICK_ENABLE_MASK)  >> SYSTICK_ENABLE_START_BIT)

#define WRITE_SYSTICK_ENABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020 , (OldValue & ~ SYSTICK_ENABLE_MASK) | ((val << SYSTICK_ENABLE_START_BIT) & SYSTICK_ENABLE_MASK )); \
   } 

#define RESET_SYSTICK_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E020); \
     WRITE_REGISTER_ULONG(0xE000E020, val & ~SYSTICK_ENABLE_MASK ); \
   } 

#define WHEN_SYSTICK_ENABLE_SET(x) \
     if ( READ_SYSTICK_ENABLE() );


#define UNLESS_SYSTICK_ENABLE_SET() \
     if (! READ_SYSTICK_ENABLE() );


#define WAIT_SYSTICK_ENABLE_SET() \
    while ( READ_SYSTICK_ENABLE() );


#define WAIT_SYSTICK_ENABLE_RESET() \
    while (! READ_SYSTICK_ENABLE() );


//  
//  Use the SysTick Reload Value Register to specify the start value 
//  to load into the current value register when the counter reaches 
//  0. It can be any value between 1 and 0x00FFFFFF. A start value of 
//  0 is possible, but has no effect because the SysTick interrupt 
//  and COUNTFLAG are activated when counting from 1 to 0. Therefore, 
//  as a multi-shot timer, repeated over and over, it fires every N+1 
//  clock pulse, where N is any value from 1 to 0x00FFFFFF. So, if 
//  the tick interrupt is required every 100 clock pulses, 99 must be 
//  written into the RELOAD. If 
//  
#define WRITE_REGISTER_NVIC_SYSTICK_RELOAD_VALUE( y) \
     WRITE_REGISTER_ULONG( 0xE000E024 , y)

#define READ_REGISTER_NVIC_SYSTICK_RELOAD_VALUE() \
     READ_REGISTER_ULONG( 0xE000E024)

//  
//  Use the SysTick Current Value Register to find the current value 
//  in the register..
//  Register NVIC_SYSTICK_CURRENT_VALUE at offset 0x18
//   
//  
#define WRITE_REGISTER_NVIC_SYSTICK_CURRENT_VALUE( y) \
     WRITE_REGISTER_ULONG( 0xE000E028 , y)

#define READ_REGISTER_NVIC_SYSTICK_CURRENT_VALUE() \
     READ_REGISTER_ULONG( 0xE000E028)

//  
//  Use the SysTick Calibration Value Register to enable software to 
//  scale to any required peed using divide and multiply..
//  Register NVIC_SYSTICK_CALIBRATION_VALUE at offset 0x1C
//   
//  
#define WRITE_REGISTER_NVIC_SYSTICK_CALIBRATION_VALUE( y) \
     WRITE_REGISTER_ULONG( 0xE000E02C , y)

#define READ_REGISTER_NVIC_SYSTICK_CALIBRATION_VALUE() \
     READ_REGISTER_ULONG( 0xE000E02C)

//  
//  1 = the reference clock is not provided..
//  Register NVIC_SYSTICK_CALIBRATION_VALUE 0x1C, Bits 31:31
//   
//  
#define SYSTICK_NOREF_MASK 0x80000000
#define SYSTICK_NOREF_OFFSET 31
#define SYSTICK_NOREF_STOP_BIT 31
#define SYSTICK_NOREF_START_BIT 31
#define SYSTICK_NOREF_WIDTH 1

#define SET_SYSTICK_NOREF() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000E02C); \
     WRITE_REGISTER_ULONG( 0xE000E02C , val |  SYSTICK_NOREF_MASK ); \
   }

#define READ_SYSTICK_NOREF() \
   ((READ_REGISTER_ULONG( 0xE000E02C) & SYSTICK_NOREF_MASK)  >> SYSTICK_NOREF_START_BIT)

#define WRITE_SYSTICK_NOREF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E02C); \
     WRITE_REGISTER_ULONG(0xE000E02C , (OldValue & ~ SYSTICK_NOREF_MASK) | ((val << SYSTICK_NOREF_START_BIT) & SYSTICK_NOREF_MASK )); \
   } 

#define RESET_SYSTICK_NOREF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E02C); \
     WRITE_REGISTER_ULONG(0xE000E02C, val & ~SYSTICK_NOREF_MASK ); \
   } 

#define WHEN_SYSTICK_NOREF_SET(x) \
     if ( READ_SYSTICK_NOREF() );


#define UNLESS_SYSTICK_NOREF_SET() \
     if (! READ_SYSTICK_NOREF() );


#define WAIT_SYSTICK_NOREF_SET() \
    while ( READ_SYSTICK_NOREF() );


#define WAIT_SYSTICK_NOREF_RESET() \
    while (! READ_SYSTICK_NOREF() );


//  
//  1 = the calibration value is not exactly 10ms because of clock 
//  frequency. This could affect its suitability as a software real 
//  time clock..
//  Register NVIC_SYSTICK_CALIBRATION_VALUE 0x1C, Bits 30:30
//   
//  
#define SYSTICK_SKEW_MASK 0x40000000
#define SYSTICK_SKEW_OFFSET 30
#define SYSTICK_SKEW_STOP_BIT 30
#define SYSTICK_SKEW_START_BIT 30
#define SYSTICK_SKEW_WIDTH 1

#define SET_SYSTICK_SKEW() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000E02C); \
     WRITE_REGISTER_ULONG( 0xE000E02C , val |  SYSTICK_SKEW_MASK ); \
   }

#define READ_SYSTICK_SKEW() \
   ((READ_REGISTER_ULONG( 0xE000E02C) & SYSTICK_SKEW_MASK)  >> SYSTICK_SKEW_START_BIT)

#define WRITE_SYSTICK_SKEW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E02C); \
     WRITE_REGISTER_ULONG(0xE000E02C , (OldValue & ~ SYSTICK_SKEW_MASK) | ((val << SYSTICK_SKEW_START_BIT) & SYSTICK_SKEW_MASK )); \
   } 

#define RESET_SYSTICK_SKEW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E02C); \
     WRITE_REGISTER_ULONG(0xE000E02C, val & ~SYSTICK_SKEW_MASK ); \
   } 

#define WHEN_SYSTICK_SKEW_SET(x) \
     if ( READ_SYSTICK_SKEW() );


#define UNLESS_SYSTICK_SKEW_SET() \
     if (! READ_SYSTICK_SKEW() );


#define WAIT_SYSTICK_SKEW_SET() \
    while ( READ_SYSTICK_SKEW() );


#define WAIT_SYSTICK_SKEW_RESET() \
    while (! READ_SYSTICK_SKEW() );


//  
//  This value is the Reload value to use for 10ms timing. Depending 
//  on the value of SKEW, this might be exactly 10ms or might be the 
//  closest value. If this reads as 0, then the calibration value is 
//  not known. This is probably because the reference clock is an 
//  unknown input from the system or scalable dynamically..
//  Register NVIC_SYSTICK_CALIBRATION_VALUE 0x1C, Bits 0:23
//   
//  
#define SYSTICK_TENMS_MASK 0xFFFFFF
#define SYSTICK_TENMS_OFFSET 23
#define SYSTICK_TENMS_STOP_BIT 23
#define SYSTICK_TENMS_START_BIT 0
#define SYSTICK_TENMS_WIDTH 24

#define READ_SYSTICK_TENMS() \
   ((READ_REGISTER_ULONG( 0xE000E02C) & SYSTICK_TENMS_MASK)  >> SYSTICK_TENMS_START_BIT)

#define WRITE_SYSTICK_TENMS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E02C); \
     WRITE_REGISTER_ULONG(0xE000E02C , (OldValue & ~ SYSTICK_TENMS_MASK) | ((val << SYSTICK_TENMS_START_BIT) & SYSTICK_TENMS_MASK )); \
   } 

