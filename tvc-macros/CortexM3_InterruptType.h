/////////////////////////////////////////////////////////////////////////
// File : c:/Lisp/Production/Stm32/CortexM3_InterruptType.h
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

 
#define CORTEXM3_NVIC_INTERRUPT_TYPE 0xE000E000

//  
//  Read the Interrupt Controller Type Register to see the number of 
//  interrupt lines that the NVIC supports. Read-only.
//  Register NVIC_INTERRUPT_CONTROL_TYPE at offset 0x4
//   
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_CONTROL_TYPE( y) \
     WRITE_REGISTER_ULONG( 0xE000E004 , y)

#define READ_REGISTER_NVIC_INTERRUPT_CONTROL_TYPE() \
     READ_REGISTER_ULONG( 0xE000E004)

//  
//  Total number of interrupt lines in groups of 32.
//  Register NVIC_INTERRUPT_CONTROL_TYPE 0x4, Bits 0:4
//   
//  
#define INT_LINES_NUM_MASK 0x1F
#define INT_LINES_NUM_OFFSET 4
#define INT_LINES_NUM_STOP_BIT 4
#define INT_LINES_NUM_START_BIT 0
#define INT_LINES_NUM_WIDTH 5

#define READ_INT_LINES_NUM() \
   ((READ_REGISTER_ULONG( 0xE000E004) & INT_LINES_NUM_MASK)  >> INT_LINES_NUM_START_BIT)

#define WRITE_INT_LINES_NUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E004); \
     WRITE_REGISTER_ULONG(0xE000E004 , (OldValue & ~ INT_LINES_NUM_MASK) | ((val << INT_LINES_NUM_START_BIT) & INT_LINES_NUM_MASK )); \
   } 

//  
//  Read the Interrupt Controller Type Register to see the number of 
//  interrupt lines that the NVIC supports..
//  Register NVIC_AUXILIARY_CONTROL at offset 0x8
//   
//  
#define WRITE_REGISTER_NVIC_AUXILIARY_CONTROL( y) \
     WRITE_REGISTER_ULONG( 0xE000E008 , y)

#define READ_REGISTER_NVIC_AUXILIARY_CONTROL() \
     READ_REGISTER_ULONG( 0xE000E008)

//  
//  Disables IT folding..
//  Register NVIC_AUXILIARY_CONTROL 0x8, Bits 2:2
//   
//  
#define DISFOLD_MASK 0x4
#define DISFOLD_OFFSET 2
#define DISFOLD_STOP_BIT 2
#define DISFOLD_START_BIT 2
#define DISFOLD_WIDTH 1

#define SET_DISFOLD() \
   {\
     ULONG val = READ_REGISTER_ULONG( NIL); \
     WRITE_REGISTER_ULONG( 0xE000E008 , val |  DISFOLD_MASK ); \
   }

#define READ_DISFOLD() \
   ((READ_REGISTER_ULONG( 0xE000E008) & DISFOLD_MASK)  >> DISFOLD_START_BIT)

#define WRITE_DISFOLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E008); \
     WRITE_REGISTER_ULONG(0xE000E008 , (OldValue & ~ DISFOLD_MASK) | ((val << DISFOLD_START_BIT) & DISFOLD_MASK )); \
   } 

#define RESET_DISFOLD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E008); \
     WRITE_REGISTER_ULONG(0xE000E008, val & ~DISFOLD_MASK ); \
   } 

#define WHEN_DISFOLD_SET(x) \
     if ( READ_DISFOLD() );


#define UNLESS_DISFOLD_SET() \
     if (! READ_DISFOLD() );


#define WAIT_DISFOLD_SET() \
    while ( READ_DISFOLD() );


#define WAIT_DISFOLD_RESET() \
    while (! READ_DISFOLD() );


//  
//  Disables write buffer use during default memory map accesses. 
//  This causes all bus faults to be precise bus faults but decreases 
//  the performance of the processor because the stores to memory 
//  have to complete before the next instruction can be 
//  executed..
//  Register NVIC_AUXILIARY_CONTROL 0x8, Bits 1:1
//   
//  
#define DISDEFWBUF_MASK 0x2
#define DISDEFWBUF_OFFSET 1
#define DISDEFWBUF_STOP_BIT 1
#define DISDEFWBUF_START_BIT 1
#define DISDEFWBUF_WIDTH 1

#define SET_DISDEFWBUF() \
   {\
     ULONG val = READ_REGISTER_ULONG( NIL); \
     WRITE_REGISTER_ULONG( 0xE000E008 , val |  DISDEFWBUF_MASK ); \
   }

#define READ_DISDEFWBUF() \
   ((READ_REGISTER_ULONG( 0xE000E008) & DISDEFWBUF_MASK)  >> DISDEFWBUF_START_BIT)

#define WRITE_DISDEFWBUF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E008); \
     WRITE_REGISTER_ULONG(0xE000E008 , (OldValue & ~ DISDEFWBUF_MASK) | ((val << DISDEFWBUF_START_BIT) & DISDEFWBUF_MASK )); \
   } 

#define RESET_DISDEFWBUF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E008); \
     WRITE_REGISTER_ULONG(0xE000E008, val & ~DISDEFWBUF_MASK ); \
   } 

#define WHEN_DISDEFWBUF_SET(x) \
     if ( READ_DISDEFWBUF() );


#define UNLESS_DISDEFWBUF_SET() \
     if (! READ_DISDEFWBUF() );


#define WAIT_DISDEFWBUF_SET() \
    while ( READ_DISDEFWBUF() );


#define WAIT_DISDEFWBUF_RESET() \
    while (! READ_DISDEFWBUF() );


//  
//  Disables interruption of multi-cycle instructions. This increases 
//  the interrupt latency of the processor because LDM/STM completes 
//  before interrupt stacking occurs..
//  Register NVIC_AUXILIARY_CONTROL 0x8, Bits 0:0
//   
//  
#define DISMCYCINT_MASK 0x1
#define DISMCYCINT_OFFSET 0
#define DISMCYCINT_STOP_BIT 0
#define DISMCYCINT_START_BIT 0
#define DISMCYCINT_WIDTH 1

#define SET_DISMCYCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG( NIL); \
     WRITE_REGISTER_ULONG( 0xE000E008 , val |  DISMCYCINT_MASK ); \
   }

#define READ_DISMCYCINT() \
   ((READ_REGISTER_ULONG( 0xE000E008) & DISMCYCINT_MASK)  >> DISMCYCINT_START_BIT)

#define WRITE_DISMCYCINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000E008); \
     WRITE_REGISTER_ULONG(0xE000E008 , (OldValue & ~ DISMCYCINT_MASK) | ((val << DISMCYCINT_START_BIT) & DISMCYCINT_MASK )); \
   } 

#define RESET_DISMCYCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000E008); \
     WRITE_REGISTER_ULONG(0xE000E008, val & ~DISMCYCINT_MASK ); \
   } 

#define WHEN_DISMCYCINT_SET(x) \
     if ( READ_DISMCYCINT() );


#define UNLESS_DISMCYCINT_SET() \
     if (! READ_DISMCYCINT() );


#define WAIT_DISMCYCINT_SET() \
    while ( READ_DISMCYCINT() );


#define WAIT_DISMCYCINT_RESET() \
    while (! READ_DISMCYCINT() );


