/////////////////////////////////////////////////////////////////////////
// File : c:/Lisp/Production/Stm32/CortexM3_SoftwareTrigger.h
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

 
#define CORTEXM3_NVIC_BASE_SOFTWARE_TRIGGER 0xE000EF00

//  
//  Use the Software Trigger Interrupt Register to pend an interrupt 
//  to trigger..
//  Register NVIC_SOFTWARE_TRIGGER at offset 0x0
//   
//  
#define WRITE_REGISTER_NVIC_SOFTWARE_TRIGGER( y) \
     WRITE_REGISTER_ULONG( 0xE000EF00 , y)

#define READ_REGISTER_NVIC_SOFTWARE_TRIGGER() \
     READ_REGISTER_ULONG( 0xE000EF00)

//  
//  Interrupt ID field. Writing a value to the INTID field is the 
//  same as manually pending an interrupt by setting the 
//  corresponding interrupt bit in an Interrupt Set Pending 
//  Register..
//  Register NVIC_SOFTWARE_TRIGGER 0x0, Bits 0:8
//   
//  
#define INTERRUPT_ID_FIELD_MASK 0x1FF
#define INTERRUPT_ID_FIELD_OFFSET 8
#define INTERRUPT_ID_FIELD_STOP_BIT 8
#define INTERRUPT_ID_FIELD_START_BIT 0
#define INTERRUPT_ID_FIELD_WIDTH 9

#define READ_INTERRUPT_ID_FIELD() \
   ((READ_REGISTER_ULONG( 0xE000EF00) & INTERRUPT_ID_FIELD_MASK)  >> INTERRUPT_ID_FIELD_START_BIT)

#define WRITE_INTERRUPT_ID_FIELD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000EF00); \
     WRITE_REGISTER_ULONG(0xE000EF00 , (OldValue & ~ INTERRUPT_ID_FIELD_MASK) | ((val << INTERRUPT_ID_FIELD_START_BIT) & INTERRUPT_ID_FIELD_MASK )); \
   } 

