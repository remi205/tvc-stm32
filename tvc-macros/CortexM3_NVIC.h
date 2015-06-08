/////////////////////////////////////////////////////////////////////////
// File : c:/Lisp/Production/Stm32/CortexM3_NVIC.h
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

 
#define CORTEXM3_NVIC_BASE 0xE000E100

//  
//  Use the Interrupt Set-Enable Registers to: enable interrupts , 
//  determine which interrupts are currently enabled. Each bit in the 
//  register corresponds to one of 32 interrupts. Setting a bit in 
//  the Interrupt Set-Enable Register enables the corresponding 
//  interrupt. When the enable bit of a pending interrupt is set, the 
//  processor activates the interrupt based on its priority. When the 
//  enable bit is clear, asserting its interrupt signal pends the 
//  interrupt, but it is not possible to activate the interrupt, 
//  regardless of its priority. Therefore, a disabled interrupt can 
//  serve as a latched general-purpose I/O bit. You can read it and 
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_SET_ENABLE(  i, val) \
     WRITE_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) , val)

#define READ_REGISTER_NVIC_INTERRUPT_SET_ENABLE( i ) \
     READ_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) ) 

//  
//  Use the Interrupt Clear-Enable Registers to disable interrupts 
//  determine which interrupts are currently disabled. Each bit in 
//  the register corresponds to one of the 32 interrupts. Setting an 
//  Interrupt Clear-Enable Register bit disables the corresponding 
//  interrupt..
//  Register NVIC_INTERRUPT_CLEAR_ENABLE at offset 0x80
//   
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_CLEAR_ENABLE(  i, val) \
     WRITE_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 128, val)

#define READ_REGISTER_NVIC_INTERRUPT_CLEAR_ENABLE( i ) \
     READ_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 128) 

//  
//  Use the Interrupt Set-Pending Register to: force interrupts into 
//  the pending state, determine which interrupts are currently 
//  pending. Each bit in the register corresponds to one of the 32 
//  interrupts. Setting an Interrupt Set-Pending Register bit pends 
//  the corresponding interrupt. Clear an Interrupt Set-Pending 
//  Register bit by writing a 1 to the corresponding bit in the 
//  Interrupt Clear-Pending Register (see Interrupt Clear-Pending 
//  Register). Clearing the Interrupt Set-Pending Register bit puts 
//  the interrupt into the non-pended state..
//  Register NVIC_INTERRUPT_SET_PENDING at offset 0x100
//   
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_SET_PENDING(  i, val) \
     WRITE_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 256, val)

#define READ_REGISTER_NVIC_INTERRUPT_SET_PENDING( i ) \
     READ_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 256) 

//  
//  Use the Interrupt Clear-Pending Register to: clear pending 
//  interrupts , determine which interrupts are currently pending. 
//  Each bit in the register corresponds to one of the 32 interrupts. 
//  Setting an Interrupt Clear-Pending Register bit puts the 
//  corresponding pending interrupt in the inactive state..
//  Register NVIC_INTERRUPT_CLEAR_PENDING at offset 0x180
//   
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_CLEAR_PENDING(  i, val) \
     WRITE_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 384, val)

#define READ_REGISTER_NVIC_INTERRUPT_CLEAR_PENDING( i ) \
     READ_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 384) 

//  
//  Read the Active Bit Register to determine which interrupts are 
//  active. Each flag in the register corresponds to one of the 32 
//  interrupts..
//  Register NVIC_ACTIVE_BIT at offset 0x200
//   
//  
#define WRITE_REGISTER_NVIC_ACTIVE_BIT(  i, val) \
     WRITE_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 512, val)

#define READ_REGISTER_NVIC_ACTIVE_BIT( i ) \
     READ_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 512) 

//  
//  Use the Interrupt Priority Registers to assign a priority from 0 
//  to 255 to each of the available interrupts. 0 is the highest 
//  priority, and 255 is the lowest. The priority registers are 
//  stored with the implemented values first. This means that if 
//  there are four bits of priority, the priority value is stored in 
//  bits [7:4] of the byte. However, if there are three bits of 
//  priority, the priority value is stored in bits [7:5] of the byte. 
//  This means that an application can work even if it does not know 
//  how many priorities are possible..
//  Register NVIC_INTERRUPT_PRIORITY at offset 
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_PRIORITY(  i, val) \
     WRITE_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 768, val)

#define READ_REGISTER_NVIC_INTERRUPT_PRIORITY( i ) \
     READ_REGISTER_ULONG( CORTEXM3_NVIC_BASE + (i * 4) + 768) 

