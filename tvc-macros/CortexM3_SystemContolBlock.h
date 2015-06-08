/////////////////////////////////////////////////////////////////////////
// File : c:/Lisp/Production/Stm32/CortexM3_SystemContolBlock.h
// 
//
// Generated on the 27/07/2011 11:21 by the 'gen-memory-macros' code generator 
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

 
#define CORTEXM3_NVIC_BASE_SCB 0xE000E000

//  
//  Read the CPU ID Base Register to determine: the ID number of the 
//  processor core, the version number of the processor core , the 
//  implementation details of the processor core..
//  Register NVIC_CPU_ID_BASE at offset 0xD00
//   
//  
#define WRITE_REGISTER_NVIC_CPU_ID_BASE( y) \
     WRITE_REGISTER_ULONG( 0xE000ED00 , y)

#define READ_REGISTER_NVIC_CPU_ID_BASE() \
     READ_REGISTER_ULONG( 0xE000ED00)

//  
//  Implementer code. ARM is 0x41.
//  Register NVIC_CPU_ID_BASE 0xD00, Bits 24:31
//   
//  
#define IMPLEMENTER_MASK 0xFF000000
#define IMPLEMENTER_OFFSET 31
#define IMPLEMENTER_STOP_BIT 31
#define IMPLEMENTER_START_BIT 24
#define IMPLEMENTER_WIDTH 8

#define READ_IMPLEMENTER() \
   ((READ_REGISTER_ULONG( 0xE000ED00) & IMPLEMENTER_MASK)  >> IMPLEMENTER_START_BIT)

#define WRITE_IMPLEMENTER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED00); \
     WRITE_REGISTER_ULONG(0xE000ED00 , (OldValue & ~ IMPLEMENTER_MASK) | ((val << IMPLEMENTER_START_BIT) & IMPLEMENTER_MASK )); \
   } 

//  
//  Implementation defined variant number..
//  Register NVIC_CPU_ID_BASE 0xD00, Bits 20:23
//   
//  
#define VARIANT_MASK 0xF00000
#define VARIANT_OFFSET 23
#define VARIANT_STOP_BIT 23
#define VARIANT_START_BIT 20
#define VARIANT_WIDTH 4

#define READ_VARIANT() \
   ((READ_REGISTER_ULONG( 0xE000ED00) & VARIANT_MASK)  >> VARIANT_START_BIT)

#define WRITE_VARIANT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED00); \
     WRITE_REGISTER_ULONG(0xE000ED00 , (OldValue & ~ VARIANT_MASK) | ((val << VARIANT_START_BIT) & VARIANT_MASK )); \
   } 

//  
//  Number of processor within family: [11:10] b11 = Cortex family, 
//  [9:8] b00 = version, [7:6] b00 = reserved, [5:4] b10 = M (v7-M) 
//  ,[3:0] X = family member. Cortex-M3 family is b0011..
//  Register NVIC_CPU_ID_BASE 0xD00, Bits 4:15
//   
//  
#define PART_NO_MASK 0xFFF0
#define PART_NO_OFFSET 15
#define PART_NO_STOP_BIT 15
#define PART_NO_START_BIT 4
#define PART_NO_WIDTH 12

#define READ_PART_NO() \
   ((READ_REGISTER_ULONG( 0xE000ED00) & PART_NO_MASK)  >> PART_NO_START_BIT)

#define WRITE_PART_NO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED00); \
     WRITE_REGISTER_ULONG(0xE000ED00 , (OldValue & ~ PART_NO_MASK) | ((val << PART_NO_START_BIT) & PART_NO_MASK )); \
   } 

//  
//  Implementation defined revision number..
//  Register NVIC_CPU_ID_BASE 0xD00, Bits 0:3
//   
//  
#define REVISION_MASK 0xF
#define REVISION_OFFSET 3
#define REVISION_STOP_BIT 3
#define REVISION_START_BIT 0
#define REVISION_WIDTH 4

#define READ_REVISION() \
   ((READ_REGISTER_ULONG( 0xE000ED00) & REVISION_MASK)  >> REVISION_START_BIT)

#define WRITE_REVISION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED00); \
     WRITE_REGISTER_ULONG(0xE000ED00 , (OldValue & ~ REVISION_MASK) | ((val << REVISION_START_BIT) & REVISION_MASK )); \
   } 

//  
//  Use the Interrupt Control State Register to: set a pending 
//  Non-Maskable Interrupt (NMI), set or clear a pending SVC, set or 
//  clear a pending SysTick, check for pending exceptions, check the 
//  vector number of the highest priority pended exception, check the 
//  vector number of the active exception..
//  Register NVIC_INTERRUPT_CONTROL_STATE at offset 0xD04
//   
//  
#define WRITE_REGISTER_NVIC_INTERRUPT_CONTROL_STATE( y) \
     WRITE_REGISTER_ULONG( 0xE000ED04 , y)

#define READ_REGISTER_NVIC_INTERRUPT_CONTROL_STATE() \
     READ_REGISTER_ULONG( 0xE000ED04)

//  
//  NMIPENDSET pends and activates an NMI. Because NMI is the 
//  highest-priority interrupt, it takes effect as soon as it 
//  registers..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 31:31
//   
//  
#define NVIC_NMI_PENDING_SET_MASK 0x80000000
#define NVIC_NMI_PENDING_SET_OFFSET 31
#define NVIC_NMI_PENDING_SET_STOP_BIT 31
#define NVIC_NMI_PENDING_SET_START_BIT 31
#define NVIC_NMI_PENDING_SET_WIDTH 1

#define SET_NVIC_NMI_PENDING_SET() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_NMI_PENDING_SET_MASK ); \
   }

#define READ_NVIC_NMI_PENDING_SET() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_NMI_PENDING_SET_MASK)  >> NVIC_NMI_PENDING_SET_START_BIT)

#define WRITE_NVIC_NMI_PENDING_SET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_NMI_PENDING_SET_MASK) | ((val << NVIC_NMI_PENDING_SET_START_BIT) & NVIC_NMI_PENDING_SET_MASK )); \
   } 

#define RESET_NVIC_NMI_PENDING_SET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_NMI_PENDING_SET_MASK ); \
   } 

#define WHEN_NVIC_NMI_PENDING_SET_SET(x) \
     if ( READ_NVIC_NMI_PENDING_SET() );


#define UNLESS_NVIC_NMI_PENDING_SET_SET() \
     if (! READ_NVIC_NMI_PENDING_SET() );


#define WAIT_NVIC_NMI_PENDING_SET_SET() \
    while ( READ_NVIC_NMI_PENDING_SET() );


#define WAIT_NVIC_NMI_PENDING_SET_RESET() \
    while (! READ_NVIC_NMI_PENDING_SET() );


//  
//  Set pending pendSV bit: 1 = set pending pendSVn 0 = do not set 
//  pending pendSV..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 28:28
//   
//  
#define NVIC_PEND_SV_SET_MASK 0x10000000
#define NVIC_PEND_SV_SET_OFFSET 28
#define NVIC_PEND_SV_SET_STOP_BIT 28
#define NVIC_PEND_SV_SET_START_BIT 28
#define NVIC_PEND_SV_SET_WIDTH 1

#define SET_NVIC_PEND_SV_SET() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_PEND_SV_SET_MASK ); \
   }

#define READ_NVIC_PEND_SV_SET() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_PEND_SV_SET_MASK)  >> NVIC_PEND_SV_SET_START_BIT)

#define WRITE_NVIC_PEND_SV_SET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_PEND_SV_SET_MASK) | ((val << NVIC_PEND_SV_SET_START_BIT) & NVIC_PEND_SV_SET_MASK )); \
   } 

#define RESET_NVIC_PEND_SV_SET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_PEND_SV_SET_MASK ); \
   } 

#define WHEN_NVIC_PEND_SV_SET_SET(x) \
     if ( READ_NVIC_PEND_SV_SET() );


#define UNLESS_NVIC_PEND_SV_SET_SET() \
     if (! READ_NVIC_PEND_SV_SET() );


#define WAIT_NVIC_PEND_SV_SET_SET() \
    while ( READ_NVIC_PEND_SV_SET() );


#define WAIT_NVIC_PEND_SV_SET_RESET() \
    while (! READ_NVIC_PEND_SV_SET() );


//  
//  Clear pending pendSV bit..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 27:27
//   
//  
#define NVIC_PEND_SV_CLEAR_MASK 0x8000000
#define NVIC_PEND_SV_CLEAR_OFFSET 27
#define NVIC_PEND_SV_CLEAR_STOP_BIT 27
#define NVIC_PEND_SV_CLEAR_START_BIT 27
#define NVIC_PEND_SV_CLEAR_WIDTH 1

#define SET_NVIC_PEND_SV_CLEAR() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_PEND_SV_CLEAR_MASK ); \
   }

#define READ_NVIC_PEND_SV_CLEAR() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_PEND_SV_CLEAR_MASK)  >> NVIC_PEND_SV_CLEAR_START_BIT)

#define WRITE_NVIC_PEND_SV_CLEAR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_PEND_SV_CLEAR_MASK) | ((val << NVIC_PEND_SV_CLEAR_START_BIT) & NVIC_PEND_SV_CLEAR_MASK )); \
   } 

#define RESET_NVIC_PEND_SV_CLEAR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_PEND_SV_CLEAR_MASK ); \
   } 

#define WHEN_NVIC_PEND_SV_CLEAR_SET(x) \
     if ( READ_NVIC_PEND_SV_CLEAR() );


#define UNLESS_NVIC_PEND_SV_CLEAR_SET() \
     if (! READ_NVIC_PEND_SV_CLEAR() );


#define WAIT_NVIC_PEND_SV_CLEAR_SET() \
    while ( READ_NVIC_PEND_SV_CLEAR() );


#define WAIT_NVIC_PEND_SV_CLEAR_RESET() \
    while (! READ_NVIC_PEND_SV_CLEAR() );


//  
//  Set a pending SysTick bit..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 26:26
//   
//  
#define NVIC_PEND_ST_SET_MASK 0x4000000
#define NVIC_PEND_ST_SET_OFFSET 26
#define NVIC_PEND_ST_SET_STOP_BIT 26
#define NVIC_PEND_ST_SET_START_BIT 26
#define NVIC_PEND_ST_SET_WIDTH 1

#define SET_NVIC_PEND_ST_SET() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_PEND_ST_SET_MASK ); \
   }

#define READ_NVIC_PEND_ST_SET() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_PEND_ST_SET_MASK)  >> NVIC_PEND_ST_SET_START_BIT)

#define WRITE_NVIC_PEND_ST_SET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_PEND_ST_SET_MASK) | ((val << NVIC_PEND_ST_SET_START_BIT) & NVIC_PEND_ST_SET_MASK )); \
   } 

#define RESET_NVIC_PEND_ST_SET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_PEND_ST_SET_MASK ); \
   } 

#define WHEN_NVIC_PEND_ST_SET_SET(x) \
     if ( READ_NVIC_PEND_ST_SET() );


#define UNLESS_NVIC_PEND_ST_SET_SET() \
     if (! READ_NVIC_PEND_ST_SET() );


#define WAIT_NVIC_PEND_ST_SET_SET() \
    while ( READ_NVIC_PEND_ST_SET() );


#define WAIT_NVIC_PEND_ST_SET_RESET() \
    while (! READ_NVIC_PEND_ST_SET() );


//  
//  Clear pending SysTick bit..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 25:25
//   
//  
#define NVIC_PEND_ST_CLEAR_MASK 0x2000000
#define NVIC_PEND_ST_CLEAR_OFFSET 25
#define NVIC_PEND_ST_CLEAR_STOP_BIT 25
#define NVIC_PEND_ST_CLEAR_START_BIT 25
#define NVIC_PEND_ST_CLEAR_WIDTH 1

#define SET_NVIC_PEND_ST_CLEAR() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_PEND_ST_CLEAR_MASK ); \
   }

#define READ_NVIC_PEND_ST_CLEAR() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_PEND_ST_CLEAR_MASK)  >> NVIC_PEND_ST_CLEAR_START_BIT)

#define WRITE_NVIC_PEND_ST_CLEAR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_PEND_ST_CLEAR_MASK) | ((val << NVIC_PEND_ST_CLEAR_START_BIT) & NVIC_PEND_ST_CLEAR_MASK )); \
   } 

#define RESET_NVIC_PEND_ST_CLEAR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_PEND_ST_CLEAR_MASK ); \
   } 

#define WHEN_NVIC_PEND_ST_CLEAR_SET(x) \
     if ( READ_NVIC_PEND_ST_CLEAR() );


#define UNLESS_NVIC_PEND_ST_CLEAR_SET() \
     if (! READ_NVIC_PEND_ST_CLEAR() );


#define WAIT_NVIC_PEND_ST_CLEAR_SET() \
    while ( READ_NVIC_PEND_ST_CLEAR() );


#define WAIT_NVIC_PEND_ST_CLEAR_RESET() \
    while (! READ_NVIC_PEND_ST_CLEAR() );


//  
//  You must only use this at debug time. It indicates that a pending 
//  interrupt becomes active in the next running cycle. If C_MASKINTS 
//  is clear in the Debug Halting Control and Status Register, the 
//  interrupt is serviced..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 23:23
//   
//  
#define NVIC_ISR_PREEMPT_MASK 0x800000
#define NVIC_ISR_PREEMPT_OFFSET 23
#define NVIC_ISR_PREEMPT_STOP_BIT 23
#define NVIC_ISR_PREEMPT_START_BIT 23
#define NVIC_ISR_PREEMPT_WIDTH 1

#define SET_NVIC_ISR_PREEMPT() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_ISR_PREEMPT_MASK ); \
   }

#define READ_NVIC_ISR_PREEMPT() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_ISR_PREEMPT_MASK)  >> NVIC_ISR_PREEMPT_START_BIT)

#define WRITE_NVIC_ISR_PREEMPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_ISR_PREEMPT_MASK) | ((val << NVIC_ISR_PREEMPT_START_BIT) & NVIC_ISR_PREEMPT_MASK )); \
   } 

#define RESET_NVIC_ISR_PREEMPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_ISR_PREEMPT_MASK ); \
   } 

#define WHEN_NVIC_ISR_PREEMPT_SET(x) \
     if ( READ_NVIC_ISR_PREEMPT() );


#define UNLESS_NVIC_ISR_PREEMPT_SET() \
     if (! READ_NVIC_ISR_PREEMPT() );


#define WAIT_NVIC_ISR_PREEMPT_SET() \
    while ( READ_NVIC_ISR_PREEMPT() );


#define WAIT_NVIC_ISR_PREEMPT_RESET() \
    while (! READ_NVIC_ISR_PREEMPT() );


//  
//  Interrupt pending flag. Excludes NMI and Faults..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 22:22
//   
//  
#define NVIC_ISR_PENDING_MASK 0x400000
#define NVIC_ISR_PENDING_OFFSET 22
#define NVIC_ISR_PENDING_STOP_BIT 22
#define NVIC_ISR_PENDING_START_BIT 22
#define NVIC_ISR_PENDING_WIDTH 1

#define SET_NVIC_ISR_PENDING() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_ISR_PENDING_MASK ); \
   }

#define READ_NVIC_ISR_PENDING() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_ISR_PENDING_MASK)  >> NVIC_ISR_PENDING_START_BIT)

#define WRITE_NVIC_ISR_PENDING(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_ISR_PENDING_MASK) | ((val << NVIC_ISR_PENDING_START_BIT) & NVIC_ISR_PENDING_MASK )); \
   } 

#define RESET_NVIC_ISR_PENDING() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_ISR_PENDING_MASK ); \
   } 

#define WHEN_NVIC_ISR_PENDING_SET(x) \
     if ( READ_NVIC_ISR_PENDING() );


#define UNLESS_NVIC_ISR_PENDING_SET() \
     if (! READ_NVIC_ISR_PENDING() );


#define WAIT_NVIC_ISR_PENDING_SET() \
    while ( READ_NVIC_ISR_PENDING() );


#define WAIT_NVIC_ISR_PENDING_RESET() \
    while (! READ_NVIC_ISR_PENDING() );


//  
//  Pending ISR number field. VECTPENDING contains the interrupt 
//  number of the highest priority pending ISR..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 12:21
//   
//  
#define VECTOR_PENDING_MASK 0x3FF000
#define VECTOR_PENDING_OFFSET 21
#define VECTOR_PENDING_STOP_BIT 21
#define VECTOR_PENDING_START_BIT 12
#define VECTOR_PENDING_WIDTH 10

#define READ_VECTOR_PENDING() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & VECTOR_PENDING_MASK)  >> VECTOR_PENDING_START_BIT)

#define WRITE_VECTOR_PENDING(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ VECTOR_PENDING_MASK) | ((val << VECTOR_PENDING_START_BIT) & VECTOR_PENDING_MASK )); \
   } 

//  
//  Pending ISR number field. VECTPENDING contains the interrupt 
//  number of the highest priority pending ISR. This bit is 1 when 
//  the set of all active exceptions minus the IPSR_current_exception 
//  yields the empty set..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 11:11
//   
//  
#define NVIC_RETURN_TO_BASE_MASK 0x800
#define NVIC_RETURN_TO_BASE_OFFSET 11
#define NVIC_RETURN_TO_BASE_STOP_BIT 11
#define NVIC_RETURN_TO_BASE_START_BIT 11
#define NVIC_RETURN_TO_BASE_WIDTH 1

#define SET_NVIC_RETURN_TO_BASE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED04); \
     WRITE_REGISTER_ULONG( 0xE000ED04 , val |  NVIC_RETURN_TO_BASE_MASK ); \
   }

#define READ_NVIC_RETURN_TO_BASE() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_RETURN_TO_BASE_MASK)  >> NVIC_RETURN_TO_BASE_START_BIT)

#define WRITE_NVIC_RETURN_TO_BASE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_RETURN_TO_BASE_MASK) | ((val << NVIC_RETURN_TO_BASE_START_BIT) & NVIC_RETURN_TO_BASE_MASK )); \
   } 

#define RESET_NVIC_RETURN_TO_BASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04, val & ~NVIC_RETURN_TO_BASE_MASK ); \
   } 

#define WHEN_NVIC_RETURN_TO_BASE_SET(x) \
     if ( READ_NVIC_RETURN_TO_BASE() );


#define UNLESS_NVIC_RETURN_TO_BASE_SET() \
     if (! READ_NVIC_RETURN_TO_BASE() );


#define WAIT_NVIC_RETURN_TO_BASE_SET() \
    while ( READ_NVIC_RETURN_TO_BASE() );


#define WAIT_NVIC_RETURN_TO_BASE_RESET() \
    while (! READ_NVIC_RETURN_TO_BASE() );


//  
//  Active ISR number field. VECTACTIVE contains the interrupt number 
//  of the currently running ISR, including NMI and Hard Fault. A 
//  shared handler can use VECTACTIVE to determine which interrupt 
//  invoked it. You can subtract 16 from the VECTACTIVE field to 
//  index into the Interrupt Clear/Set Enable, Interrupt Clear 
//  Pending/SetPending and Interrupt Priority Registers. INTISR[0] 
//  has vector number 16. Reset clears the VECTACTIVE 
//  field..
//  Register NVIC_INTERRUPT_CONTROL_STATE 0xD04, Bits 0:8
//   
//  
#define NVIC_VECTOR_ACTIVE_MASK 0x1FF
#define NVIC_VECTOR_ACTIVE_OFFSET 8
#define NVIC_VECTOR_ACTIVE_STOP_BIT 8
#define NVIC_VECTOR_ACTIVE_START_BIT 0
#define NVIC_VECTOR_ACTIVE_WIDTH 9

#define READ_NVIC_VECTOR_ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED04) & NVIC_VECTOR_ACTIVE_MASK)  >> NVIC_VECTOR_ACTIVE_START_BIT)

#define WRITE_NVIC_VECTOR_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED04); \
     WRITE_REGISTER_ULONG(0xE000ED04 , (OldValue & ~ NVIC_VECTOR_ACTIVE_MASK) | ((val << NVIC_VECTOR_ACTIVE_START_BIT) & NVIC_VECTOR_ACTIVE_MASK )); \
   } 

//  
//  Use the Vector Table Offset Register to determine: if the vector 
//  table is in RAM or code memory the vector table offset..
//  Register NVIC_VECTOR_TABLE_OFFSET at offset 0xD08
//   
//  
#define WRITE_REGISTER_NVIC_VECTOR_TABLE_OFFSET( y) \
     WRITE_REGISTER_ULONG( 0xE000ED08 , y)

#define READ_REGISTER_NVIC_VECTOR_TABLE_OFFSET() \
     READ_REGISTER_ULONG( 0xE000ED08)

//  
//  Table base is in Code (0) or RAM (1).
//  Register NVIC_VECTOR_TABLE_OFFSET 0xD08, Bits 29:29
//   
//  
#define NVIC_TABLE_BASE_IN_RAM_MASK 0x20000000
#define NVIC_TABLE_BASE_IN_RAM_OFFSET 29
#define NVIC_TABLE_BASE_IN_RAM_STOP_BIT 29
#define NVIC_TABLE_BASE_IN_RAM_START_BIT 29
#define NVIC_TABLE_BASE_IN_RAM_WIDTH 1

#define SET_NVIC_TABLE_BASE_IN_RAM() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED08); \
     WRITE_REGISTER_ULONG( 0xE000ED08 , val |  NVIC_TABLE_BASE_IN_RAM_MASK ); \
   }

#define READ_NVIC_TABLE_BASE_IN_RAM() \
   ((READ_REGISTER_ULONG( 0xE000ED08) & NVIC_TABLE_BASE_IN_RAM_MASK)  >> NVIC_TABLE_BASE_IN_RAM_START_BIT)

#define WRITE_NVIC_TABLE_BASE_IN_RAM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED08); \
     WRITE_REGISTER_ULONG(0xE000ED08 , (OldValue & ~ NVIC_TABLE_BASE_IN_RAM_MASK) | ((val << NVIC_TABLE_BASE_IN_RAM_START_BIT) & NVIC_TABLE_BASE_IN_RAM_MASK )); \
   } 

#define RESET_NVIC_TABLE_BASE_IN_RAM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED08); \
     WRITE_REGISTER_ULONG(0xE000ED08, val & ~NVIC_TABLE_BASE_IN_RAM_MASK ); \
   } 

#define WHEN_NVIC_TABLE_BASE_IN_RAM_SET(x) \
     if ( READ_NVIC_TABLE_BASE_IN_RAM() );


#define UNLESS_NVIC_TABLE_BASE_IN_RAM_SET() \
     if (! READ_NVIC_TABLE_BASE_IN_RAM() );


#define WAIT_NVIC_TABLE_BASE_IN_RAM_SET() \
    while ( READ_NVIC_TABLE_BASE_IN_RAM() );


#define WAIT_NVIC_TABLE_BASE_IN_RAM_RESET() \
    while (! READ_NVIC_TABLE_BASE_IN_RAM() );


//  
//  TVector table base offset field. Contains the offset of the table 
//  base from the bottom of the SRAM or CODE space..
//  Register NVIC_VECTOR_TABLE_OFFSET 0xD08, Bits 7:28
//   
//  
#define NVIC_TABLE_OFFSET_MASK 0x1FFFFF80
#define NVIC_TABLE_OFFSET_OFFSET 28
#define NVIC_TABLE_OFFSET_STOP_BIT 28
#define NVIC_TABLE_OFFSET_START_BIT 7
#define NVIC_TABLE_OFFSET_WIDTH 22

#define READ_NVIC_TABLE_OFFSET() \
   ((READ_REGISTER_ULONG( 0xE000ED08) & NVIC_TABLE_OFFSET_MASK)  >> NVIC_TABLE_OFFSET_START_BIT)

#define WRITE_NVIC_TABLE_OFFSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED08); \
     WRITE_REGISTER_ULONG(0xE000ED08 , (OldValue & ~ NVIC_TABLE_OFFSET_MASK) | ((val << NVIC_TABLE_OFFSET_START_BIT) & NVIC_TABLE_OFFSET_MASK )); \
   } 

//  
//  Use the Application Interrupt and Reset Control Register to: 
//  determine data endianness, clear all active state information for 
//  debug or to recover from a hard failure, execute a system reset, 
//  alter the priority grouping position (binary point)..
//  Register NVIC_APPLICATION_INTERRUPT at offset 0xD0C
//   
//  
#define WRITE_REGISTER_NVIC_APPLICATION_INTERRUPT( y) \
     WRITE_REGISTER_ULONG( 0xE000ED0C , y)

#define READ_REGISTER_NVIC_APPLICATION_INTERRUPT() \
     READ_REGISTER_ULONG( 0xE000ED0C)

//  
//  Register key. Writing to this register requires 0x5FA in the 
//  VECTKEY field. Otherwise the write value is ignored..
//  Register NVIC_APPLICATION_INTERRUPT 0xD0C, Bits 16:31
//   
//  
#define NVIC_VECTKEY_MASK 0xFFFF0000
#define NVIC_VECTKEY_OFFSET 31
#define NVIC_VECTKEY_STOP_BIT 31
#define NVIC_VECTKEY_START_BIT 16
#define NVIC_VECTKEY_WIDTH 16

#define READ_NVIC_VECTKEY() \
   ((READ_REGISTER_ULONG( 0xE000ED0C) & NVIC_VECTKEY_MASK)  >> NVIC_VECTKEY_START_BIT)

#define WRITE_NVIC_VECTKEY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C , (OldValue & ~ NVIC_VECTKEY_MASK) | ((val << NVIC_VECTKEY_START_BIT) & NVIC_VECTKEY_MASK )); \
   } 

//  
//  Reads as 0xFA05..
//  Register NVIC_APPLICATION_INTERRUPT 0xD0C, Bits 16:31
//   
//  
#define NVIC_VECTKEYSTAT_MASK 0xFFFF0000
#define NVIC_VECTKEYSTAT_OFFSET 31
#define NVIC_VECTKEYSTAT_STOP_BIT 31
#define NVIC_VECTKEYSTAT_START_BIT 16
#define NVIC_VECTKEYSTAT_WIDTH 16

#define READ_NVIC_VECTKEYSTAT() \
   ((READ_REGISTER_ULONG( 0xE000ED0C) & NVIC_VECTKEYSTAT_MASK)  >> NVIC_VECTKEYSTAT_START_BIT)

#define WRITE_NVIC_VECTKEYSTAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C , (OldValue & ~ NVIC_VECTKEYSTAT_MASK) | ((val << NVIC_VECTKEYSTAT_START_BIT) & NVIC_VECTKEYSTAT_MASK )); \
   } 

//  
//  Interrupt priority grouping field. PRIGROUP field is a binary 
//  point position indicator for creating subpriorities for 
//  exceptions that share the same pre-emption level. It divides the 
//  PRI_n field in the Interrupt Priority Register into a pre-emption 
//  level and a subpriority level. The binary point is a left-of 
//  value. This means that the PRIGROUP value represents a point 
//  starting at the left of the Least Significant Bit (LSB). This is 
//  bit [0] of 7:0. The lowest value might not be 0 depending on the 
//  number of bits allocated for priorities, and implementation 
//  choices..
//  Register NVIC_APPLICATION_INTERRUPT 0xD0C, Bits 8:10
//   
//  
#define NVIC_PRIORITY_GROUP_MASK 0x700
#define NVIC_PRIORITY_GROUP_OFFSET 10
#define NVIC_PRIORITY_GROUP_STOP_BIT 10
#define NVIC_PRIORITY_GROUP_START_BIT 8
#define NVIC_PRIORITY_GROUP_WIDTH 3

#define READ_NVIC_PRIORITY_GROUP() \
   ((READ_REGISTER_ULONG( 0xE000ED0C) & NVIC_PRIORITY_GROUP_MASK)  >> NVIC_PRIORITY_GROUP_START_BIT)

#define WRITE_NVIC_PRIORITY_GROUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C , (OldValue & ~ NVIC_PRIORITY_GROUP_MASK) | ((val << NVIC_PRIORITY_GROUP_START_BIT) & NVIC_PRIORITY_GROUP_MASK )); \
   } 

//  
//  Causes a signal to be asserted to the outer system that indicates 
//  a reset is requested. Intended to force a large system reset of 
//  all major components except for debug. Setting this bit does not 
//  prevent Halting Debug from running..
//  Register NVIC_APPLICATION_INTERRUPT 0xD0C, Bits 2:2
//   
//  
#define NVIC_SYS_RESET_REQUEST_MASK 0x4
#define NVIC_SYS_RESET_REQUEST_OFFSET 2
#define NVIC_SYS_RESET_REQUEST_STOP_BIT 2
#define NVIC_SYS_RESET_REQUEST_START_BIT 2
#define NVIC_SYS_RESET_REQUEST_WIDTH 1

#define SET_NVIC_SYS_RESET_REQUEST() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED0C); \
     WRITE_REGISTER_ULONG( 0xE000ED0C , val |  NVIC_SYS_RESET_REQUEST_MASK ); \
   }

#define READ_NVIC_SYS_RESET_REQUEST() \
   ((READ_REGISTER_ULONG( 0xE000ED0C) & NVIC_SYS_RESET_REQUEST_MASK)  >> NVIC_SYS_RESET_REQUEST_START_BIT)

#define WRITE_NVIC_SYS_RESET_REQUEST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C , (OldValue & ~ NVIC_SYS_RESET_REQUEST_MASK) | ((val << NVIC_SYS_RESET_REQUEST_START_BIT) & NVIC_SYS_RESET_REQUEST_MASK )); \
   } 

#define RESET_NVIC_SYS_RESET_REQUEST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C, val & ~NVIC_SYS_RESET_REQUEST_MASK ); \
   } 

#define WHEN_NVIC_SYS_RESET_REQUEST_SET(x) \
     if ( READ_NVIC_SYS_RESET_REQUEST() );


#define UNLESS_NVIC_SYS_RESET_REQUEST_SET() \
     if (! READ_NVIC_SYS_RESET_REQUEST() );


#define WAIT_NVIC_SYS_RESET_REQUEST_SET() \
    while ( READ_NVIC_SYS_RESET_REQUEST() );


#define WAIT_NVIC_SYS_RESET_REQUEST_RESET() \
    while (! READ_NVIC_SYS_RESET_REQUEST() );


//  
//  Clear active vector bit: 1 = clear all state information for 
//  active NMI, fault, and interrupts 0 = do not clear. It is the 
//  responsibility of the application to reinitialize the stack. The 
//  VECTCLRACTIVE bit is for returning to a known state during debug. 
//  The VECTCLRACTIVE bit self-clears. IPSR is not cleared by this 
//  operation. So, if used by an application, it must only be used at 
//  the base level of activation, or within a system handler whose 
//  active bit can be set..
//  Register NVIC_APPLICATION_INTERRUPT 0xD0C, Bits 1:1
//   
//  
#define NVIC_VECTOR_CLEAR_ACTIVE_MASK 0x2
#define NVIC_VECTOR_CLEAR_ACTIVE_OFFSET 1
#define NVIC_VECTOR_CLEAR_ACTIVE_STOP_BIT 1
#define NVIC_VECTOR_CLEAR_ACTIVE_START_BIT 1
#define NVIC_VECTOR_CLEAR_ACTIVE_WIDTH 1

#define SET_NVIC_VECTOR_CLEAR_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED0C); \
     WRITE_REGISTER_ULONG( 0xE000ED0C , val |  NVIC_VECTOR_CLEAR_ACTIVE_MASK ); \
   }

#define READ_NVIC_VECTOR_CLEAR_ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED0C) & NVIC_VECTOR_CLEAR_ACTIVE_MASK)  >> NVIC_VECTOR_CLEAR_ACTIVE_START_BIT)

#define WRITE_NVIC_VECTOR_CLEAR_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C , (OldValue & ~ NVIC_VECTOR_CLEAR_ACTIVE_MASK) | ((val << NVIC_VECTOR_CLEAR_ACTIVE_START_BIT) & NVIC_VECTOR_CLEAR_ACTIVE_MASK )); \
   } 

#define RESET_NVIC_VECTOR_CLEAR_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C, val & ~NVIC_VECTOR_CLEAR_ACTIVE_MASK ); \
   } 

#define WHEN_NVIC_VECTOR_CLEAR_ACTIVE_SET(x) \
     if ( READ_NVIC_VECTOR_CLEAR_ACTIVE() );


#define UNLESS_NVIC_VECTOR_CLEAR_ACTIVE_SET() \
     if (! READ_NVIC_VECTOR_CLEAR_ACTIVE() );


#define WAIT_NVIC_VECTOR_CLEAR_ACTIVE_SET() \
    while ( READ_NVIC_VECTOR_CLEAR_ACTIVE() );


#define WAIT_NVIC_VECTOR_CLEAR_ACTIVE_RESET() \
    while (! READ_NVIC_VECTOR_CLEAR_ACTIVE() );


//  
//  System Reset bit. Resets the system, with the exception of debug 
//  components: 1 = reset system, 0 = do not reset system. The 
//  VECTRESET bit self-clears. Reset clears the VECTRESET 
//  bit..
//  Register NVIC_APPLICATION_INTERRUPT 0xD0C, Bits 0:0
//   
//  
#define NVIC_VECTOR_RESET_MASK 0x1
#define NVIC_VECTOR_RESET_OFFSET 0
#define NVIC_VECTOR_RESET_STOP_BIT 0
#define NVIC_VECTOR_RESET_START_BIT 0
#define NVIC_VECTOR_RESET_WIDTH 1

#define SET_NVIC_VECTOR_RESET() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED0C); \
     WRITE_REGISTER_ULONG( 0xE000ED0C , val |  NVIC_VECTOR_RESET_MASK ); \
   }

#define READ_NVIC_VECTOR_RESET() \
   ((READ_REGISTER_ULONG( 0xE000ED0C) & NVIC_VECTOR_RESET_MASK)  >> NVIC_VECTOR_RESET_START_BIT)

#define WRITE_NVIC_VECTOR_RESET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C , (OldValue & ~ NVIC_VECTOR_RESET_MASK) | ((val << NVIC_VECTOR_RESET_START_BIT) & NVIC_VECTOR_RESET_MASK )); \
   } 

#define RESET_NVIC_VECTOR_RESET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED0C); \
     WRITE_REGISTER_ULONG(0xE000ED0C, val & ~NVIC_VECTOR_RESET_MASK ); \
   } 

#define WHEN_NVIC_VECTOR_RESET_SET(x) \
     if ( READ_NVIC_VECTOR_RESET() );


#define UNLESS_NVIC_VECTOR_RESET_SET() \
     if (! READ_NVIC_VECTOR_RESET() );


#define WAIT_NVIC_VECTOR_RESET_SET() \
    while ( READ_NVIC_VECTOR_RESET() );


#define WAIT_NVIC_VECTOR_RESET_RESET() \
    while (! READ_NVIC_VECTOR_RESET() );


//  
//  Use the System Control Register for power-management 
//  functions:signal to the system when the processor can enter a low 
//  power state, control how the processor enters and exits low power 
//  states..
//  Register NVIC_SYSTEM_CONTROL at offset 0xD10
//   
//  
#define WRITE_REGISTER_NVIC_SYSTEM_CONTROL( y) \
     WRITE_REGISTER_ULONG( 0xE000ED10 , y)

#define READ_REGISTER_NVIC_SYSTEM_CONTROL() \
     READ_REGISTER_ULONG( 0xE000ED10)

//  
//  When enabled, this causes WFE to wake up when an interrupt moves 
//  from inactive to pended. Otherwise, WFE only wakes up from an 
//  event signal, external and SEV instruction generated. The event 
//  input, RXEV, is registered even when not waiting for an event, 
//  and so effects the next WFE..
//  Register NVIC_SYSTEM_CONTROL 0xD10, Bits 4:4
//   
//  
#define NVIC_SEVONPEND_MASK 0x10
#define NVIC_SEVONPEND_OFFSET 4
#define NVIC_SEVONPEND_STOP_BIT 4
#define NVIC_SEVONPEND_START_BIT 4
#define NVIC_SEVONPEND_WIDTH 1

#define SET_NVIC_SEVONPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED10); \
     WRITE_REGISTER_ULONG( 0xE000ED10 , val |  NVIC_SEVONPEND_MASK ); \
   }

#define READ_NVIC_SEVONPEND() \
   ((READ_REGISTER_ULONG( 0xE000ED10) & NVIC_SEVONPEND_MASK)  >> NVIC_SEVONPEND_START_BIT)

#define WRITE_NVIC_SEVONPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED10); \
     WRITE_REGISTER_ULONG(0xE000ED10 , (OldValue & ~ NVIC_SEVONPEND_MASK) | ((val << NVIC_SEVONPEND_START_BIT) & NVIC_SEVONPEND_MASK )); \
   } 

#define RESET_NVIC_SEVONPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED10); \
     WRITE_REGISTER_ULONG(0xE000ED10, val & ~NVIC_SEVONPEND_MASK ); \
   } 

#define WHEN_NVIC_SEVONPEND_SET(x) \
     if ( READ_NVIC_SEVONPEND() );


#define UNLESS_NVIC_SEVONPEND_SET() \
     if (! READ_NVIC_SEVONPEND() );


#define WAIT_NVIC_SEVONPEND_SET() \
    while ( READ_NVIC_SEVONPEND() );


#define WAIT_NVIC_SEVONPEND_RESET() \
    while (! READ_NVIC_SEVONPEND() );


//  
//  Sleep deep bit: 1 = indicates to the system that Cortex-M3 clock 
//  can be stopped. Setting this bit causes the SLEEPDEEP port to be 
//  asserted when the processor can be stopped. 0 = not OK to turn 
//  off system clock..
//  Register NVIC_SYSTEM_CONTROL 0xD10, Bits 2:2
//   
//  
#define NVIC_SLEEP_DEEP_MASK 0x4
#define NVIC_SLEEP_DEEP_OFFSET 2
#define NVIC_SLEEP_DEEP_STOP_BIT 2
#define NVIC_SLEEP_DEEP_START_BIT 2
#define NVIC_SLEEP_DEEP_WIDTH 1

#define SET_NVIC_SLEEP_DEEP() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED10); \
     WRITE_REGISTER_ULONG( 0xE000ED10 , val |  NVIC_SLEEP_DEEP_MASK ); \
   }

#define READ_NVIC_SLEEP_DEEP() \
   ((READ_REGISTER_ULONG( 0xE000ED10) & NVIC_SLEEP_DEEP_MASK)  >> NVIC_SLEEP_DEEP_START_BIT)

#define WRITE_NVIC_SLEEP_DEEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED10); \
     WRITE_REGISTER_ULONG(0xE000ED10 , (OldValue & ~ NVIC_SLEEP_DEEP_MASK) | ((val << NVIC_SLEEP_DEEP_START_BIT) & NVIC_SLEEP_DEEP_MASK )); \
   } 

#define RESET_NVIC_SLEEP_DEEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED10); \
     WRITE_REGISTER_ULONG(0xE000ED10, val & ~NVIC_SLEEP_DEEP_MASK ); \
   } 

#define WHEN_NVIC_SLEEP_DEEP_SET(x) \
     if ( READ_NVIC_SLEEP_DEEP() );


#define UNLESS_NVIC_SLEEP_DEEP_SET() \
     if (! READ_NVIC_SLEEP_DEEP() );


#define WAIT_NVIC_SLEEP_DEEP_SET() \
    while ( READ_NVIC_SLEEP_DEEP() );


#define WAIT_NVIC_SLEEP_DEEP_RESET() \
    while (! READ_NVIC_SLEEP_DEEP() );


//  
//  Sleep on exit when returning from Handler mode to Thread mode: 1 
//  = sleep on ISR exit. 0 = do not sleep when returning to Thread 
//  mode. Enables interrupt driven applications to avoid returning to 
//  empty main application..
//  Register NVIC_SYSTEM_CONTROL 0xD10, Bits 1:1
//   
//  
#define NVIC_SLEEP_ON_EXIT_MASK 0x2
#define NVIC_SLEEP_ON_EXIT_OFFSET 1
#define NVIC_SLEEP_ON_EXIT_STOP_BIT 1
#define NVIC_SLEEP_ON_EXIT_START_BIT 1
#define NVIC_SLEEP_ON_EXIT_WIDTH 1

#define SET_NVIC_SLEEP_ON_EXIT() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED10); \
     WRITE_REGISTER_ULONG( 0xE000ED10 , val |  NVIC_SLEEP_ON_EXIT_MASK ); \
   }

#define READ_NVIC_SLEEP_ON_EXIT() \
   ((READ_REGISTER_ULONG( 0xE000ED10) & NVIC_SLEEP_ON_EXIT_MASK)  >> NVIC_SLEEP_ON_EXIT_START_BIT)

#define WRITE_NVIC_SLEEP_ON_EXIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED10); \
     WRITE_REGISTER_ULONG(0xE000ED10 , (OldValue & ~ NVIC_SLEEP_ON_EXIT_MASK) | ((val << NVIC_SLEEP_ON_EXIT_START_BIT) & NVIC_SLEEP_ON_EXIT_MASK )); \
   } 

#define RESET_NVIC_SLEEP_ON_EXIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED10); \
     WRITE_REGISTER_ULONG(0xE000ED10, val & ~NVIC_SLEEP_ON_EXIT_MASK ); \
   } 

#define WHEN_NVIC_SLEEP_ON_EXIT_SET(x) \
     if ( READ_NVIC_SLEEP_ON_EXIT() );


#define UNLESS_NVIC_SLEEP_ON_EXIT_SET() \
     if (! READ_NVIC_SLEEP_ON_EXIT() );


#define WAIT_NVIC_SLEEP_ON_EXIT_SET() \
    while ( READ_NVIC_SLEEP_ON_EXIT() );


#define WAIT_NVIC_SLEEP_ON_EXIT_RESET() \
    while (! READ_NVIC_SLEEP_ON_EXIT() );


//  
//  Use the Configuration Control Register to: enable NMI, Hard Fault 
//  and FAULTMASK to ignore bus fault, trap divide by zero, and 
//  unaligned accesses, enable user access to the Software Trigger 
//  Exception Register, control entry to Thread Mode.
//  Register NVIC_CONFIGURATION_CONTROL at offset 0xD14
//   
//  
#define WRITE_REGISTER_NVIC_CONFIGURATION_CONTROL( y) \
     WRITE_REGISTER_ULONG( 0xE000ED14 , y)

#define READ_REGISTER_NVIC_CONFIGURATION_CONTROL() \
     READ_REGISTER_ULONG( 0xE000ED14)

//  
//  1 = on exception entry, the SP used prior to the exception is 
//  adjusted to be 8-byte aligned and the context to restore it is 
//  saved. The SP is restored on the associated exception return. 0 = 
//  only 4-byte alignment is guaranteed for the SP used prior to the 
//  exception on exception entry.
//  Register NVIC_CONFIGURATION_CONTROL 0xD14, Bits 9:9
//   
//  
#define NVIC_STKALIGN_MASK 0x200
#define NVIC_STKALIGN_OFFSET 9
#define NVIC_STKALIGN_STOP_BIT 9
#define NVIC_STKALIGN_START_BIT 9
#define NVIC_STKALIGN_WIDTH 1

#define SET_NVIC_STKALIGN() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED14); \
     WRITE_REGISTER_ULONG( 0xE000ED14 , val |  NVIC_STKALIGN_MASK ); \
   }

#define READ_NVIC_STKALIGN() \
   ((READ_REGISTER_ULONG( 0xE000ED14) & NVIC_STKALIGN_MASK)  >> NVIC_STKALIGN_START_BIT)

#define WRITE_NVIC_STKALIGN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14 , (OldValue & ~ NVIC_STKALIGN_MASK) | ((val << NVIC_STKALIGN_START_BIT) & NVIC_STKALIGN_MASK )); \
   } 

#define RESET_NVIC_STKALIGN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14, val & ~NVIC_STKALIGN_MASK ); \
   } 

#define WHEN_NVIC_STKALIGN_SET(x) \
     if ( READ_NVIC_STKALIGN() );


#define UNLESS_NVIC_STKALIGN_SET() \
     if (! READ_NVIC_STKALIGN() );


#define WAIT_NVIC_STKALIGN_SET() \
    while ( READ_NVIC_STKALIGN() );


#define WAIT_NVIC_STKALIGN_RESET() \
    while (! READ_NVIC_STKALIGN() );


//  
//  When enabled, this causes handlers running at priority -1 and -2 
//  (Hard Fault, NMI, and FAULTMASK escalated handlers) to ignore 
//  Data Bus faults caused by load and store instructions. When 
//  disabled, these bus faults cause a lock-up. You must only use 
//  this enable with extreme caution. All data bus faults are ignored 
//  - you must only use it when the handler and its data are in 
//  absolutely safe memory. Its normal use is to probe system devices 
//  and bridges to detect control path problems and fix 
//  them.
//  Register NVIC_CONFIGURATION_CONTROL 0xD14, Bits 8:8
//   
//  
#define NVIC_BFHFNMIGN_MASK 0x100
#define NVIC_BFHFNMIGN_OFFSET 8
#define NVIC_BFHFNMIGN_STOP_BIT 8
#define NVIC_BFHFNMIGN_START_BIT 8
#define NVIC_BFHFNMIGN_WIDTH 1

#define SET_NVIC_BFHFNMIGN() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED14); \
     WRITE_REGISTER_ULONG( 0xE000ED14 , val |  NVIC_BFHFNMIGN_MASK ); \
   }

#define READ_NVIC_BFHFNMIGN() \
   ((READ_REGISTER_ULONG( 0xE000ED14) & NVIC_BFHFNMIGN_MASK)  >> NVIC_BFHFNMIGN_START_BIT)

#define WRITE_NVIC_BFHFNMIGN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14 , (OldValue & ~ NVIC_BFHFNMIGN_MASK) | ((val << NVIC_BFHFNMIGN_START_BIT) & NVIC_BFHFNMIGN_MASK )); \
   } 

#define RESET_NVIC_BFHFNMIGN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14, val & ~NVIC_BFHFNMIGN_MASK ); \
   } 

#define WHEN_NVIC_BFHFNMIGN_SET(x) \
     if ( READ_NVIC_BFHFNMIGN() );


#define UNLESS_NVIC_BFHFNMIGN_SET() \
     if (! READ_NVIC_BFHFNMIGN() );


#define WAIT_NVIC_BFHFNMIGN_SET() \
    while ( READ_NVIC_BFHFNMIGN() );


#define WAIT_NVIC_BFHFNMIGN_RESET() \
    while (! READ_NVIC_BFHFNMIGN() );


//  
//  Trap on Divide by 0. This enables faulting/halting when an 
//  attempt is made to divide by 0..
//  Register NVIC_CONFIGURATION_CONTROL 0xD14, Bits 4:4
//   
//  
#define NVIC_DIV_0_TRP_MASK 0x10
#define NVIC_DIV_0_TRP_OFFSET 4
#define NVIC_DIV_0_TRP_STOP_BIT 4
#define NVIC_DIV_0_TRP_START_BIT 4
#define NVIC_DIV_0_TRP_WIDTH 1

#define SET_NVIC_DIV_0_TRP() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED14); \
     WRITE_REGISTER_ULONG( 0xE000ED14 , val |  NVIC_DIV_0_TRP_MASK ); \
   }

#define READ_NVIC_DIV_0_TRP() \
   ((READ_REGISTER_ULONG( 0xE000ED14) & NVIC_DIV_0_TRP_MASK)  >> NVIC_DIV_0_TRP_START_BIT)

#define WRITE_NVIC_DIV_0_TRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14 , (OldValue & ~ NVIC_DIV_0_TRP_MASK) | ((val << NVIC_DIV_0_TRP_START_BIT) & NVIC_DIV_0_TRP_MASK )); \
   } 

#define RESET_NVIC_DIV_0_TRP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14, val & ~NVIC_DIV_0_TRP_MASK ); \
   } 

#define WHEN_NVIC_DIV_0_TRP_SET(x) \
     if ( READ_NVIC_DIV_0_TRP() );


#define UNLESS_NVIC_DIV_0_TRP_SET() \
     if (! READ_NVIC_DIV_0_TRP() );


#define WAIT_NVIC_DIV_0_TRP_SET() \
    while ( READ_NVIC_DIV_0_TRP() );


#define WAIT_NVIC_DIV_0_TRP_RESET() \
    while (! READ_NVIC_DIV_0_TRP() );


//  
//  Trap for unaligned access. This enables faulting/halting on any 
//  unaligned half or full word access. Unaligned load-store 
//  multiples always fault..
//  Register NVIC_CONFIGURATION_CONTROL 0xD14, Bits 3:3
//   
//  
#define NVIC_UNALIGN_TRP_MASK 0x8
#define NVIC_UNALIGN_TRP_OFFSET 3
#define NVIC_UNALIGN_TRP_STOP_BIT 3
#define NVIC_UNALIGN_TRP_START_BIT 3
#define NVIC_UNALIGN_TRP_WIDTH 1

#define SET_NVIC_UNALIGN_TRP() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED14); \
     WRITE_REGISTER_ULONG( 0xE000ED14 , val |  NVIC_UNALIGN_TRP_MASK ); \
   }

#define READ_NVIC_UNALIGN_TRP() \
   ((READ_REGISTER_ULONG( 0xE000ED14) & NVIC_UNALIGN_TRP_MASK)  >> NVIC_UNALIGN_TRP_START_BIT)

#define WRITE_NVIC_UNALIGN_TRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14 , (OldValue & ~ NVIC_UNALIGN_TRP_MASK) | ((val << NVIC_UNALIGN_TRP_START_BIT) & NVIC_UNALIGN_TRP_MASK )); \
   } 

#define RESET_NVIC_UNALIGN_TRP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14, val & ~NVIC_UNALIGN_TRP_MASK ); \
   } 

#define WHEN_NVIC_UNALIGN_TRP_SET(x) \
     if ( READ_NVIC_UNALIGN_TRP() );


#define UNLESS_NVIC_UNALIGN_TRP_SET() \
     if (! READ_NVIC_UNALIGN_TRP() );


#define WAIT_NVIC_UNALIGN_TRP_SET() \
    while ( READ_NVIC_UNALIGN_TRP() );


#define WAIT_NVIC_UNALIGN_TRP_RESET() \
    while (! READ_NVIC_UNALIGN_TRP() );


//  
//  If written as 1, enables user code to write the Software Trigger 
//  Interrupt register to trigger (pend) a Main exception, which is 
//  one associated with the Main stack pointer..
//  Register NVIC_CONFIGURATION_CONTROL 0xD14, Bits 1:1
//   
//  
#define NVIC_USERSETMPEND_MASK 0x2
#define NVIC_USERSETMPEND_OFFSET 1
#define NVIC_USERSETMPEND_STOP_BIT 1
#define NVIC_USERSETMPEND_START_BIT 1
#define NVIC_USERSETMPEND_WIDTH 1

#define SET_NVIC_USERSETMPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED14); \
     WRITE_REGISTER_ULONG( 0xE000ED14 , val |  NVIC_USERSETMPEND_MASK ); \
   }

#define READ_NVIC_USERSETMPEND() \
   ((READ_REGISTER_ULONG( 0xE000ED14) & NVIC_USERSETMPEND_MASK)  >> NVIC_USERSETMPEND_START_BIT)

#define WRITE_NVIC_USERSETMPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14 , (OldValue & ~ NVIC_USERSETMPEND_MASK) | ((val << NVIC_USERSETMPEND_START_BIT) & NVIC_USERSETMPEND_MASK )); \
   } 

#define RESET_NVIC_USERSETMPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14, val & ~NVIC_USERSETMPEND_MASK ); \
   } 

#define WHEN_NVIC_USERSETMPEND_SET(x) \
     if ( READ_NVIC_USERSETMPEND() );


#define UNLESS_NVIC_USERSETMPEND_SET() \
     if (! READ_NVIC_USERSETMPEND() );


#define WAIT_NVIC_USERSETMPEND_SET() \
    while ( READ_NVIC_USERSETMPEND() );


#define WAIT_NVIC_USERSETMPEND_RESET() \
    while (! READ_NVIC_USERSETMPEND() );


//  
//  When 0, default, It is only possible to enter Thread mode when 
//  returning from the last exception. When set to 1, Thread mode can 
//  be entered from any level in Handler mode by controlled return 
//  value..
//  Register NVIC_CONFIGURATION_CONTROL 0xD14, Bits 0:0
//   
//  
#define NVIC_NONEBASETHRDENA_MASK 0x1
#define NVIC_NONEBASETHRDENA_OFFSET 0
#define NVIC_NONEBASETHRDENA_STOP_BIT 0
#define NVIC_NONEBASETHRDENA_START_BIT 0
#define NVIC_NONEBASETHRDENA_WIDTH 1

#define SET_NVIC_NONEBASETHRDENA() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED14); \
     WRITE_REGISTER_ULONG( 0xE000ED14 , val |  NVIC_NONEBASETHRDENA_MASK ); \
   }

#define READ_NVIC_NONEBASETHRDENA() \
   ((READ_REGISTER_ULONG( 0xE000ED14) & NVIC_NONEBASETHRDENA_MASK)  >> NVIC_NONEBASETHRDENA_START_BIT)

#define WRITE_NVIC_NONEBASETHRDENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14 , (OldValue & ~ NVIC_NONEBASETHRDENA_MASK) | ((val << NVIC_NONEBASETHRDENA_START_BIT) & NVIC_NONEBASETHRDENA_MASK )); \
   } 

#define RESET_NVIC_NONEBASETHRDENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED14); \
     WRITE_REGISTER_ULONG(0xE000ED14, val & ~NVIC_NONEBASETHRDENA_MASK ); \
   } 

#define WHEN_NVIC_NONEBASETHRDENA_SET(x) \
     if ( READ_NVIC_NONEBASETHRDENA() );


#define UNLESS_NVIC_NONEBASETHRDENA_SET() \
     if (! READ_NVIC_NONEBASETHRDENA() );


#define WAIT_NVIC_NONEBASETHRDENA_SET() \
    while ( READ_NVIC_NONEBASETHRDENA() );


#define WAIT_NVIC_NONEBASETHRDENA_RESET() \
    while (! READ_NVIC_NONEBASETHRDENA() );


//  
//  Use the three System Handler Priority Registers to prioritize the 
//  following system handlers: memory manage, bus fault, usage fault, 
//  debug monitor, SVC, SysTick, PendSV. System handlers are a 
//  special class of exception handler that can have their priority 
//  set to any of the priority levels. Most can be masked on 
//  (enabled) or off (disabled). When disabled, the fault is always 
//  treated as a Hard Fault..
//  Register NVIC_SYSTEM_HANDLER_PRIORITY at offset 0xD18
//   
//  
#define WRITE_REGISTER_NVIC_SYSTEM_HANDLER_PRIORITY( y) \
     WRITE_REGISTER_ULONG( 0xE000ED18 , y)

#define READ_REGISTER_NVIC_SYSTEM_HANDLER_PRIORITY() \
     READ_REGISTER_ULONG( 0xE000ED18)

//  
//  Use the three System Handler Priority Registers to prioritize the 
//  following system handlers: memory manage, bus fault, usage fault, 
//  debug monitor, SVC, SysTick, PendSV. System handlers are a 
//  special class of exception handler that can have their priority 
//  set to any of the priority levels. Most can be masked on 
//  (enabled) or off (disabled). When disabled, the fault is always 
//  treated as a Hard Fault..
//  Register NVIC_SYSTEM_HANDLER_PRIORITY2 at offset 0xD1C
//   
//  
#define WRITE_REGISTER_NVIC_SYSTEM_HANDLER_PRIORITY2( y) \
     WRITE_REGISTER_ULONG( 0xE000ED1C , y)

#define READ_REGISTER_NVIC_SYSTEM_HANDLER_PRIORITY2() \
     READ_REGISTER_ULONG( 0xE000ED1C)

//  
//  Use the three System Handler Priority Registers to prioritize the 
//  following system handlers: memory manage, bus fault, usage fault, 
//  debug monitor, SVC, SysTick, PendSV. System handlers are a 
//  special class of exception handler that can have their priority 
//  set to any of the priority levels. Most can be masked on 
//  (enabled) or off (disabled). When disabled, the fault is always 
//  treated as a Hard Fault..
//  Register NVIC_SYSTEM_HANDLER_PRIORITY3 at offset 0xD20
//   
//  
#define WRITE_REGISTER_NVIC_SYSTEM_HANDLER_PRIORITY3( y) \
     WRITE_REGISTER_ULONG( 0xE000ED20 , y)

#define READ_REGISTER_NVIC_SYSTEM_HANDLER_PRIORITY3() \
     READ_REGISTER_ULONG( 0xE000ED20)

//  
//  Use the System Handler Control and State Register to: enable or 
//  disable the system handlers ,determine the pending status of bus 
//  fault, mem manage fault, and SVC , determine the active status of 
//  the system handlers. If a fault condition occurs while its fault 
//  handler is disabled, the fault escalates to a Hard 
//  Fault..
//  Register NVIC_SYSTEM_HANDLER_CONTROL at offset 0xD24
//   
//  
#define WRITE_REGISTER_NVIC_SYSTEM_HANDLER_CONTROL( y) \
     WRITE_REGISTER_ULONG( 0xE000ED24 , y)

#define READ_REGISTER_NVIC_SYSTEM_HANDLER_CONTROL() \
     READ_REGISTER_ULONG( 0xE000ED24)

//  
//  Set to 0 to disable, else 1 for enabled.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 18:18
//   
//  
#define USAGE_FAULT_ENABLE_MASK 0x40000
#define USAGE_FAULT_ENABLE_OFFSET 18
#define USAGE_FAULT_ENABLE_STOP_BIT 18
#define USAGE_FAULT_ENABLE_START_BIT 18
#define USAGE_FAULT_ENABLE_WIDTH 1

#define SET_USAGE_FAULT_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  USAGE_FAULT_ENABLE_MASK ); \
   }

#define READ_USAGE_FAULT_ENABLE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & USAGE_FAULT_ENABLE_MASK)  >> USAGE_FAULT_ENABLE_START_BIT)

#define WRITE_USAGE_FAULT_ENABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ USAGE_FAULT_ENABLE_MASK) | ((val << USAGE_FAULT_ENABLE_START_BIT) & USAGE_FAULT_ENABLE_MASK )); \
   } 

#define RESET_USAGE_FAULT_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~USAGE_FAULT_ENABLE_MASK ); \
   } 

#define WHEN_USAGE_FAULT_ENABLE_SET(x) \
     if ( READ_USAGE_FAULT_ENABLE() );


#define UNLESS_USAGE_FAULT_ENABLE_SET() \
     if (! READ_USAGE_FAULT_ENABLE() );


#define WAIT_USAGE_FAULT_ENABLE_SET() \
    while ( READ_USAGE_FAULT_ENABLE() );


#define WAIT_USAGE_FAULT_ENABLE_RESET() \
    while (! READ_USAGE_FAULT_ENABLE() );


//  
//  Set to 0 to disable, else 1 for enabled.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 17:17
//   
//  
#define BUS_FAULT_ENABLE_MASK 0x20000
#define BUS_FAULT_ENABLE_OFFSET 17
#define BUS_FAULT_ENABLE_STOP_BIT 17
#define BUS_FAULT_ENABLE_START_BIT 17
#define BUS_FAULT_ENABLE_WIDTH 1

#define SET_BUS_FAULT_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  BUS_FAULT_ENABLE_MASK ); \
   }

#define READ_BUS_FAULT_ENABLE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & BUS_FAULT_ENABLE_MASK)  >> BUS_FAULT_ENABLE_START_BIT)

#define WRITE_BUS_FAULT_ENABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ BUS_FAULT_ENABLE_MASK) | ((val << BUS_FAULT_ENABLE_START_BIT) & BUS_FAULT_ENABLE_MASK )); \
   } 

#define RESET_BUS_FAULT_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~BUS_FAULT_ENABLE_MASK ); \
   } 

#define WHEN_BUS_FAULT_ENABLE_SET(x) \
     if ( READ_BUS_FAULT_ENABLE() );


#define UNLESS_BUS_FAULT_ENABLE_SET() \
     if (! READ_BUS_FAULT_ENABLE() );


#define WAIT_BUS_FAULT_ENABLE_SET() \
    while ( READ_BUS_FAULT_ENABLE() );


#define WAIT_BUS_FAULT_ENABLE_RESET() \
    while (! READ_BUS_FAULT_ENABLE() );


//  
//  Set to 0 to disable, else 1 for enabled.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 16:16
//   
//  
#define MEM_FAULT_ENABLE_MASK 0x10000
#define MEM_FAULT_ENABLE_OFFSET 16
#define MEM_FAULT_ENABLE_STOP_BIT 16
#define MEM_FAULT_ENABLE_START_BIT 16
#define MEM_FAULT_ENABLE_WIDTH 1

#define SET_MEM_FAULT_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  MEM_FAULT_ENABLE_MASK ); \
   }

#define READ_MEM_FAULT_ENABLE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & MEM_FAULT_ENABLE_MASK)  >> MEM_FAULT_ENABLE_START_BIT)

#define WRITE_MEM_FAULT_ENABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ MEM_FAULT_ENABLE_MASK) | ((val << MEM_FAULT_ENABLE_START_BIT) & MEM_FAULT_ENABLE_MASK )); \
   } 

#define RESET_MEM_FAULT_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~MEM_FAULT_ENABLE_MASK ); \
   } 

#define WHEN_MEM_FAULT_ENABLE_SET(x) \
     if ( READ_MEM_FAULT_ENABLE() );


#define UNLESS_MEM_FAULT_ENABLE_SET() \
     if (! READ_MEM_FAULT_ENABLE() );


#define WAIT_MEM_FAULT_ENABLE_SET() \
    while ( READ_MEM_FAULT_ENABLE() );


#define WAIT_MEM_FAULT_ENABLE_RESET() \
    while (! READ_MEM_FAULT_ENABLE() );


//  
//  Reads as 1 if SVCall is pended.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 15:15
//   
//  
#define SV_CALL_PENDED_MASK 0x8000
#define SV_CALL_PENDED_OFFSET 15
#define SV_CALL_PENDED_STOP_BIT 15
#define SV_CALL_PENDED_START_BIT 15
#define SV_CALL_PENDED_WIDTH 1

#define SET_SV_CALL_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  SV_CALL_PENDED_MASK ); \
   }

#define READ_SV_CALL_PENDED() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & SV_CALL_PENDED_MASK)  >> SV_CALL_PENDED_START_BIT)

#define WRITE_SV_CALL_PENDED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ SV_CALL_PENDED_MASK) | ((val << SV_CALL_PENDED_START_BIT) & SV_CALL_PENDED_MASK )); \
   } 

#define RESET_SV_CALL_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~SV_CALL_PENDED_MASK ); \
   } 

#define WHEN_SV_CALL_PENDED_SET(x) \
     if ( READ_SV_CALL_PENDED() );


#define UNLESS_SV_CALL_PENDED_SET() \
     if (! READ_SV_CALL_PENDED() );


#define WAIT_SV_CALL_PENDED_SET() \
    while ( READ_SV_CALL_PENDED() );


#define WAIT_SV_CALL_PENDED_RESET() \
    while (! READ_SV_CALL_PENDED() );


//  
//  Reads as 1 if BusFault is pended.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 14:14
//   
//  
#define BUS_FAULT_PENDED_MASK 0x4000
#define BUS_FAULT_PENDED_OFFSET 14
#define BUS_FAULT_PENDED_STOP_BIT 14
#define BUS_FAULT_PENDED_START_BIT 14
#define BUS_FAULT_PENDED_WIDTH 1

#define SET_BUS_FAULT_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  BUS_FAULT_PENDED_MASK ); \
   }

#define READ_BUS_FAULT_PENDED() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & BUS_FAULT_PENDED_MASK)  >> BUS_FAULT_PENDED_START_BIT)

#define WRITE_BUS_FAULT_PENDED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ BUS_FAULT_PENDED_MASK) | ((val << BUS_FAULT_PENDED_START_BIT) & BUS_FAULT_PENDED_MASK )); \
   } 

#define RESET_BUS_FAULT_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~BUS_FAULT_PENDED_MASK ); \
   } 

#define WHEN_BUS_FAULT_PENDED_SET(x) \
     if ( READ_BUS_FAULT_PENDED() );


#define UNLESS_BUS_FAULT_PENDED_SET() \
     if (! READ_BUS_FAULT_PENDED() );


#define WAIT_BUS_FAULT_PENDED_SET() \
    while ( READ_BUS_FAULT_PENDED() );


#define WAIT_BUS_FAULT_PENDED_RESET() \
    while (! READ_BUS_FAULT_PENDED() );


//  
//  Reads as 1 if MemFault is pended.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 13:13
//   
//  
#define MEM_FAULT_PENDED_MASK 0x2000
#define MEM_FAULT_PENDED_OFFSET 13
#define MEM_FAULT_PENDED_STOP_BIT 13
#define MEM_FAULT_PENDED_START_BIT 13
#define MEM_FAULT_PENDED_WIDTH 1

#define SET_MEM_FAULT_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  MEM_FAULT_PENDED_MASK ); \
   }

#define READ_MEM_FAULT_PENDED() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & MEM_FAULT_PENDED_MASK)  >> MEM_FAULT_PENDED_START_BIT)

#define WRITE_MEM_FAULT_PENDED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ MEM_FAULT_PENDED_MASK) | ((val << MEM_FAULT_PENDED_START_BIT) & MEM_FAULT_PENDED_MASK )); \
   } 

#define RESET_MEM_FAULT_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~MEM_FAULT_PENDED_MASK ); \
   } 

#define WHEN_MEM_FAULT_PENDED_SET(x) \
     if ( READ_MEM_FAULT_PENDED() );


#define UNLESS_MEM_FAULT_PENDED_SET() \
     if (! READ_MEM_FAULT_PENDED() );


#define WAIT_MEM_FAULT_PENDED_SET() \
    while ( READ_MEM_FAULT_PENDED() );


#define WAIT_MEM_FAULT_PENDED_RESET() \
    while (! READ_MEM_FAULT_PENDED() );


//  
//  Reads as 1 if usage fault is pended.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 12:12
//   
//  
#define USAGE_FAULT_PENDED_MASK 0x1000
#define USAGE_FAULT_PENDED_OFFSET 12
#define USAGE_FAULT_PENDED_STOP_BIT 12
#define USAGE_FAULT_PENDED_START_BIT 12
#define USAGE_FAULT_PENDED_WIDTH 1

#define SET_USAGE_FAULT_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  USAGE_FAULT_PENDED_MASK ); \
   }

#define READ_USAGE_FAULT_PENDED() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & USAGE_FAULT_PENDED_MASK)  >> USAGE_FAULT_PENDED_START_BIT)

#define WRITE_USAGE_FAULT_PENDED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ USAGE_FAULT_PENDED_MASK) | ((val << USAGE_FAULT_PENDED_START_BIT) & USAGE_FAULT_PENDED_MASK )); \
   } 

#define RESET_USAGE_FAULT_PENDED() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~USAGE_FAULT_PENDED_MASK ); \
   } 

#define WHEN_USAGE_FAULT_PENDED_SET(x) \
     if ( READ_USAGE_FAULT_PENDED() );


#define UNLESS_USAGE_FAULT_PENDED_SET() \
     if (! READ_USAGE_FAULT_PENDED() );


#define WAIT_USAGE_FAULT_PENDED_SET() \
    while ( READ_USAGE_FAULT_PENDED() );


#define WAIT_USAGE_FAULT_PENDED_RESET() \
    while (! READ_USAGE_FAULT_PENDED() );


//  
//  Reads as 1 if SysTick is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 11:11
//   
//  
#define SYSTICKACT_MASK 0x800
#define SYSTICKACT_OFFSET 11
#define SYSTICKACT_STOP_BIT 11
#define SYSTICKACT_START_BIT 11
#define SYSTICKACT_WIDTH 1

#define SET_SYSTICKACT() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  SYSTICKACT_MASK ); \
   }

#define READ_SYSTICKACT() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & SYSTICKACT_MASK)  >> SYSTICKACT_START_BIT)

#define WRITE_SYSTICKACT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ SYSTICKACT_MASK) | ((val << SYSTICKACT_START_BIT) & SYSTICKACT_MASK )); \
   } 

#define RESET_SYSTICKACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~SYSTICKACT_MASK ); \
   } 

#define WHEN_SYSTICKACT_SET(x) \
     if ( READ_SYSTICKACT() );


#define UNLESS_SYSTICKACT_SET() \
     if (! READ_SYSTICKACT() );


#define WAIT_SYSTICKACT_SET() \
    while ( READ_SYSTICKACT() );


#define WAIT_SYSTICKACT_RESET() \
    while (! READ_SYSTICKACT() );


//  
//  Reads as 1 if PendSV is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 10:10
//   
//  
#define PENDSV_ACTiVE_MASK 0x400
#define PENDSV_ACTiVE_OFFSET 10
#define PENDSV_ACTiVE_STOP_BIT 10
#define PENDSV_ACTiVE_START_BIT 10
#define PENDSV_ACTiVE_WIDTH 1

#define SET_PENDSV_ACTiVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  PENDSV_ACTiVE_MASK ); \
   }

#define READ_PENDSV_ACTiVE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & PENDSV_ACTiVE_MASK)  >> PENDSV_ACTiVE_START_BIT)

#define WRITE_PENDSV_ACTiVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ PENDSV_ACTiVE_MASK) | ((val << PENDSV_ACTiVE_START_BIT) & PENDSV_ACTiVE_MASK )); \
   } 

#define RESET_PENDSV_ACTiVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~PENDSV_ACTiVE_MASK ); \
   } 

#define WHEN_PENDSV_ACTiVE_SET(x) \
     if ( READ_PENDSV_ACTiVE() );


#define UNLESS_PENDSV_ACTiVE_SET() \
     if (! READ_PENDSV_ACTiVE() );


#define WAIT_PENDSV_ACTiVE_SET() \
    while ( READ_PENDSV_ACTiVE() );


#define WAIT_PENDSV_ACTiVE_RESET() \
    while (! READ_PENDSV_ACTiVE() );


//  
//  Reads as 1 if the Monitor is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 8:8
//   
//  
#define MONITOR_ACTIVE_MASK 0x100
#define MONITOR_ACTIVE_OFFSET 8
#define MONITOR_ACTIVE_STOP_BIT 8
#define MONITOR_ACTIVE_START_BIT 8
#define MONITOR_ACTIVE_WIDTH 1

#define SET_MONITOR_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  MONITOR_ACTIVE_MASK ); \
   }

#define READ_MONITOR_ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & MONITOR_ACTIVE_MASK)  >> MONITOR_ACTIVE_START_BIT)

#define WRITE_MONITOR_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ MONITOR_ACTIVE_MASK) | ((val << MONITOR_ACTIVE_START_BIT) & MONITOR_ACTIVE_MASK )); \
   } 

#define RESET_MONITOR_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~MONITOR_ACTIVE_MASK ); \
   } 

#define WHEN_MONITOR_ACTIVE_SET(x) \
     if ( READ_MONITOR_ACTIVE() );


#define UNLESS_MONITOR_ACTIVE_SET() \
     if (! READ_MONITOR_ACTIVE() );


#define WAIT_MONITOR_ACTIVE_SET() \
    while ( READ_MONITOR_ACTIVE() );


#define WAIT_MONITOR_ACTIVE_RESET() \
    while (! READ_MONITOR_ACTIVE() );


//  
//  Reads as 1 if the SVCall is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 7:7
//   
//  
#define SV_CALL__ACTIVE_MASK 0x80
#define SV_CALL__ACTIVE_OFFSET 7
#define SV_CALL__ACTIVE_STOP_BIT 7
#define SV_CALL__ACTIVE_START_BIT 7
#define SV_CALL__ACTIVE_WIDTH 1

#define SET_SV_CALL__ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  SV_CALL__ACTIVE_MASK ); \
   }

#define READ_SV_CALL__ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & SV_CALL__ACTIVE_MASK)  >> SV_CALL__ACTIVE_START_BIT)

#define WRITE_SV_CALL__ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ SV_CALL__ACTIVE_MASK) | ((val << SV_CALL__ACTIVE_START_BIT) & SV_CALL__ACTIVE_MASK )); \
   } 

#define RESET_SV_CALL__ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~SV_CALL__ACTIVE_MASK ); \
   } 

#define WHEN_SV_CALL__ACTIVE_SET(x) \
     if ( READ_SV_CALL__ACTIVE() );


#define UNLESS_SV_CALL__ACTIVE_SET() \
     if (! READ_SV_CALL__ACTIVE() );


#define WAIT_SV_CALL__ACTIVE_SET() \
    while ( READ_SV_CALL__ACTIVE() );


#define WAIT_SV_CALL__ACTIVE_RESET() \
    while (! READ_SV_CALL__ACTIVE() );


//  
//  Reads as 1 if UsageFault is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 3:3
//   
//  
#define USAGE_FAULT_ACTIVE_MASK 0x8
#define USAGE_FAULT_ACTIVE_OFFSET 3
#define USAGE_FAULT_ACTIVE_STOP_BIT 3
#define USAGE_FAULT_ACTIVE_START_BIT 3
#define USAGE_FAULT_ACTIVE_WIDTH 1

#define SET_USAGE_FAULT_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  USAGE_FAULT_ACTIVE_MASK ); \
   }

#define READ_USAGE_FAULT_ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & USAGE_FAULT_ACTIVE_MASK)  >> USAGE_FAULT_ACTIVE_START_BIT)

#define WRITE_USAGE_FAULT_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ USAGE_FAULT_ACTIVE_MASK) | ((val << USAGE_FAULT_ACTIVE_START_BIT) & USAGE_FAULT_ACTIVE_MASK )); \
   } 

#define RESET_USAGE_FAULT_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~USAGE_FAULT_ACTIVE_MASK ); \
   } 

#define WHEN_USAGE_FAULT_ACTIVE_SET(x) \
     if ( READ_USAGE_FAULT_ACTIVE() );


#define UNLESS_USAGE_FAULT_ACTIVE_SET() \
     if (! READ_USAGE_FAULT_ACTIVE() );


#define WAIT_USAGE_FAULT_ACTIVE_SET() \
    while ( READ_USAGE_FAULT_ACTIVE() );


#define WAIT_USAGE_FAULT_ACTIVE_RESET() \
    while (! READ_USAGE_FAULT_ACTIVE() );


//  
//  Reads as 1 if BUSFault is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 1:1
//   
//  
#define BUS_FAULT_ACTIVE_MASK 0x2
#define BUS_FAULT_ACTIVE_OFFSET 1
#define BUS_FAULT_ACTIVE_STOP_BIT 1
#define BUS_FAULT_ACTIVE_START_BIT 1
#define BUS_FAULT_ACTIVE_WIDTH 1

#define SET_BUS_FAULT_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  BUS_FAULT_ACTIVE_MASK ); \
   }

#define READ_BUS_FAULT_ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & BUS_FAULT_ACTIVE_MASK)  >> BUS_FAULT_ACTIVE_START_BIT)

#define WRITE_BUS_FAULT_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ BUS_FAULT_ACTIVE_MASK) | ((val << BUS_FAULT_ACTIVE_START_BIT) & BUS_FAULT_ACTIVE_MASK )); \
   } 

#define RESET_BUS_FAULT_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~BUS_FAULT_ACTIVE_MASK ); \
   } 

#define WHEN_BUS_FAULT_ACTIVE_SET(x) \
     if ( READ_BUS_FAULT_ACTIVE() );


#define UNLESS_BUS_FAULT_ACTIVE_SET() \
     if (! READ_BUS_FAULT_ACTIVE() );


#define WAIT_BUS_FAULT_ACTIVE_SET() \
    while ( READ_BUS_FAULT_ACTIVE() );


#define WAIT_BUS_FAULT_ACTIVE_RESET() \
    while (! READ_BUS_FAULT_ACTIVE() );


//  
//  Reads as 1 if MemFault is active.
//  Register NVIC_SYSTEM_HANDLER_CONTROL 0xD24, Bits 0:0
//   
//  
#define MEM_FAULT_ACTIVE_MASK 0x1
#define MEM_FAULT_ACTIVE_OFFSET 0
#define MEM_FAULT_ACTIVE_STOP_BIT 0
#define MEM_FAULT_ACTIVE_START_BIT 0
#define MEM_FAULT_ACTIVE_WIDTH 1

#define SET_MEM_FAULT_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED24); \
     WRITE_REGISTER_ULONG( 0xE000ED24 , val |  MEM_FAULT_ACTIVE_MASK ); \
   }

#define READ_MEM_FAULT_ACTIVE() \
   ((READ_REGISTER_ULONG( 0xE000ED24) & MEM_FAULT_ACTIVE_MASK)  >> MEM_FAULT_ACTIVE_START_BIT)

#define WRITE_MEM_FAULT_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24 , (OldValue & ~ MEM_FAULT_ACTIVE_MASK) | ((val << MEM_FAULT_ACTIVE_START_BIT) & MEM_FAULT_ACTIVE_MASK )); \
   } 

#define RESET_MEM_FAULT_ACTIVE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED24); \
     WRITE_REGISTER_ULONG(0xE000ED24, val & ~MEM_FAULT_ACTIVE_MASK ); \
   } 

#define WHEN_MEM_FAULT_ACTIVE_SET(x) \
     if ( READ_MEM_FAULT_ACTIVE() );


#define UNLESS_MEM_FAULT_ACTIVE_SET() \
     if (! READ_MEM_FAULT_ACTIVE() );


#define WAIT_MEM_FAULT_ACTIVE_SET() \
    while ( READ_MEM_FAULT_ACTIVE() );


#define WAIT_MEM_FAULT_ACTIVE_RESET() \
    while (! READ_MEM_FAULT_ACTIVE() );


//  
//  Memory Manage Fault Status Register. The flags in the Memory 
//  Manage Fault Status Register indicate the cause of memory access 
//  faults..
//  Register NVIC_CONFIGURABLE_MEM_FAULT_STATUS at offset 0xD28
//   
//  
#define WRITE_REGISTER_NVIC_CONFIGURABLE_MEM_FAULT_STATUS( y) \
     WRITE_REGISTER_UCHAR( 0xE000ED28 , y)

#define READ_REGISTER_NVIC_CONFIGURABLE_MEM_FAULT_STATUS() \
     READ_REGISTER_UCHAR( 0xE000ED28)

//  
//  Memory Manage Address Register (MMAR) address valid 
//  flag.
//  Register NVIC_CONFIGURABLE_MEM_FAULT_STATUS 0xD28, Bits 7:7
//   
//  
#define MMAR_VALID_MASK 0x80
#define MMAR_VALID_OFFSET 7
#define MMAR_VALID_STOP_BIT 7
#define MMAR_VALID_START_BIT 7
#define MMAR_VALID_WIDTH 1

#define SET_MMAR_VALID() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED28); \
     WRITE_REGISTER_UCHAR( 0xE000ED28 , val |  MMAR_VALID_MASK ); \
   }

#define READ_MMAR_VALID() \
   ((READ_REGISTER_UCHAR( 0xE000ED28) & MMAR_VALID_MASK)  >> MMAR_VALID_START_BIT)

#define WRITE_MMAR_VALID(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28 , (OldValue & ~ MMAR_VALID_MASK) | ((val << MMAR_VALID_START_BIT) & MMAR_VALID_MASK )); \
   } 

#define RESET_MMAR_VALID() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28, val & ~MMAR_VALID_MASK ); \
   } 

#define WHEN_MMAR_VALID_SET(x) \
     if ( READ_MMAR_VALID() );


#define UNLESS_MMAR_VALID_SET() \
     if (! READ_MMAR_VALID() );


#define WAIT_MMAR_VALID_SET() \
    while ( READ_MMAR_VALID() );


#define WAIT_MMAR_VALID_RESET() \
    while (! READ_MMAR_VALID() );


//  
//  Stacking from exception has caused one or more access violations. 
//  The SP is still adjusted and the values in the context area on 
//  the stack might be incorrect. The MMAR is not written..
//  Register NVIC_CONFIGURABLE_MEM_FAULT_STATUS 0xD28, Bits 4:4
//   
//  
#define MSTKERR_MASK 0x10
#define MSTKERR_OFFSET 4
#define MSTKERR_STOP_BIT 4
#define MSTKERR_START_BIT 4
#define MSTKERR_WIDTH 1

#define SET_MSTKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED28); \
     WRITE_REGISTER_UCHAR( 0xE000ED28 , val |  MSTKERR_MASK ); \
   }

#define READ_MSTKERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED28) & MSTKERR_MASK)  >> MSTKERR_START_BIT)

#define WRITE_MSTKERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28 , (OldValue & ~ MSTKERR_MASK) | ((val << MSTKERR_START_BIT) & MSTKERR_MASK )); \
   } 

#define RESET_MSTKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28, val & ~MSTKERR_MASK ); \
   } 

#define WHEN_MSTKERR_SET(x) \
     if ( READ_MSTKERR() );


#define UNLESS_MSTKERR_SET() \
     if (! READ_MSTKERR() );


#define WAIT_MSTKERR_SET() \
    while ( READ_MSTKERR() );


#define WAIT_MSTKERR_RESET() \
    while (! READ_MSTKERR() );


//  
//  Unstack from exception return has caused one or more access 
//  violations. This is chained to the handler, so that the original 
//  return stack is still present. SP is not adjusted from failing 
//  return and new save is not performed. The MMAR is not 
//  written..
//  Register NVIC_CONFIGURABLE_MEM_FAULT_STATUS 0xD28, Bits 3:3
//   
//  
#define MUNSTKERR_MASK 0x8
#define MUNSTKERR_OFFSET 3
#define MUNSTKERR_STOP_BIT 3
#define MUNSTKERR_START_BIT 3
#define MUNSTKERR_WIDTH 1

#define SET_MUNSTKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED28); \
     WRITE_REGISTER_UCHAR( 0xE000ED28 , val |  MUNSTKERR_MASK ); \
   }

#define READ_MUNSTKERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED28) & MUNSTKERR_MASK)  >> MUNSTKERR_START_BIT)

#define WRITE_MUNSTKERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28 , (OldValue & ~ MUNSTKERR_MASK) | ((val << MUNSTKERR_START_BIT) & MUNSTKERR_MASK )); \
   } 

#define RESET_MUNSTKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28, val & ~MUNSTKERR_MASK ); \
   } 

#define WHEN_MUNSTKERR_SET(x) \
     if ( READ_MUNSTKERR() );


#define UNLESS_MUNSTKERR_SET() \
     if (! READ_MUNSTKERR() );


#define WAIT_MUNSTKERR_SET() \
    while ( READ_MUNSTKERR() );


#define WAIT_MUNSTKERR_RESET() \
    while (! READ_MUNSTKERR() );


//  
//  Data access violation flag. Attempting to load or store at a 
//  location that does not permit the operation sets the DACCVIOL 
//  flag. The return PC points to the faulting instruction. This 
//  error loads MMAR with the address of the attempted 
//  access..
//  Register NVIC_CONFIGURABLE_MEM_FAULT_STATUS 0xD28, Bits 1:1
//   
//  
#define DACCVIOL_MASK 0x2
#define DACCVIOL_OFFSET 1
#define DACCVIOL_STOP_BIT 1
#define DACCVIOL_START_BIT 1
#define DACCVIOL_WIDTH 1

#define SET_DACCVIOL() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED28); \
     WRITE_REGISTER_UCHAR( 0xE000ED28 , val |  DACCVIOL_MASK ); \
   }

#define READ_DACCVIOL() \
   ((READ_REGISTER_UCHAR( 0xE000ED28) & DACCVIOL_MASK)  >> DACCVIOL_START_BIT)

#define WRITE_DACCVIOL(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28 , (OldValue & ~ DACCVIOL_MASK) | ((val << DACCVIOL_START_BIT) & DACCVIOL_MASK )); \
   } 

#define RESET_DACCVIOL() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28, val & ~DACCVIOL_MASK ); \
   } 

#define WHEN_DACCVIOL_SET(x) \
     if ( READ_DACCVIOL() );


#define UNLESS_DACCVIOL_SET() \
     if (! READ_DACCVIOL() );


#define WAIT_DACCVIOL_SET() \
    while ( READ_DACCVIOL() );


#define WAIT_DACCVIOL_RESET() \
    while (! READ_DACCVIOL() );


//  
//  Instruction access violation flag. Attempting to fetch an 
//  instruction from a location that does not permit execution sets 
//  the IACCVIOL flag. This occurs on any access to an XN region, 
//  even when the MPU is disabled or not present. The return PC 
//  points to the faulting instruction. The MMAR is not 
//  written..
//  Register NVIC_CONFIGURABLE_MEM_FAULT_STATUS 0xD28, Bits 0:0
//   
//  
#define IACCVIOL_MASK 0x1
#define IACCVIOL_OFFSET 0
#define IACCVIOL_STOP_BIT 0
#define IACCVIOL_START_BIT 0
#define IACCVIOL_WIDTH 1

#define SET_IACCVIOL() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED28); \
     WRITE_REGISTER_UCHAR( 0xE000ED28 , val |  IACCVIOL_MASK ); \
   }

#define READ_IACCVIOL() \
   ((READ_REGISTER_UCHAR( 0xE000ED28) & IACCVIOL_MASK)  >> IACCVIOL_START_BIT)

#define WRITE_IACCVIOL(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28 , (OldValue & ~ IACCVIOL_MASK) | ((val << IACCVIOL_START_BIT) & IACCVIOL_MASK )); \
   } 

#define RESET_IACCVIOL() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED28); \
     WRITE_REGISTER_UCHAR(0xE000ED28, val & ~IACCVIOL_MASK ); \
   } 

#define WHEN_IACCVIOL_SET(x) \
     if ( READ_IACCVIOL() );


#define UNLESS_IACCVIOL_SET() \
     if (! READ_IACCVIOL() );


#define WAIT_IACCVIOL_SET() \
    while ( READ_IACCVIOL() );


#define WAIT_IACCVIOL_RESET() \
    while (! READ_IACCVIOL() );


//  
//  Bus Fault Status Register.
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS at offset 0xD29
//   
//  
#define WRITE_REGISTER_NVIC_CONFIGURABLE_BUS_FAULT_STATUS( y) \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , y)

#define READ_REGISTER_NVIC_CONFIGURABLE_BUS_FAULT_STATUS() \
     READ_REGISTER_UCHAR( 0xE000ED29)

//  
//  This bit is set if the Bus Fault Address Register (BFAR) contains 
//  a valid address. This is true after a bus fault where the address 
//  is known. Other faults can clear this bit, such as a Mem Manage 
//  fault occurring later. If a Bus fault occurs that is escalated to 
//  a Hard Fault because of priority, the Hard Fault handler must 
//  clear this bit. This prevents problems if returning to a stacked 
//  active Bus fault handler whose BFAR value has been 
//  overwritten..
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS 0xD29, Bits 7:7
//   
//  
#define BFARVALID_MASK 0x80
#define BFARVALID_OFFSET 7
#define BFARVALID_STOP_BIT 7
#define BFARVALID_START_BIT 7
#define BFARVALID_WIDTH 1

#define SET_BFARVALID() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED29); \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , val |  BFARVALID_MASK ); \
   }

#define READ_BFARVALID() \
   ((READ_REGISTER_UCHAR( 0xE000ED29) & BFARVALID_MASK)  >> BFARVALID_START_BIT)

#define WRITE_BFARVALID(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29 , (OldValue & ~ BFARVALID_MASK) | ((val << BFARVALID_START_BIT) & BFARVALID_MASK )); \
   } 

#define RESET_BFARVALID() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29, val & ~BFARVALID_MASK ); \
   } 

#define WHEN_BFARVALID_SET(x) \
     if ( READ_BFARVALID() );


#define UNLESS_BFARVALID_SET() \
     if (! READ_BFARVALID() );


#define WAIT_BFARVALID_SET() \
    while ( READ_BFARVALID() );


#define WAIT_BFARVALID_RESET() \
    while (! READ_BFARVALID() );


//  
//  Stacking from exception has caused one or more bus faults. The SP 
//  is still adjusted and the values in the context area on the stack 
//  might be incorrect. The BFAR is not written..
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS 0xD29, Bits 4:4
//   
//  
#define STKERR_MASK 0x10
#define STKERR_OFFSET 4
#define STKERR_STOP_BIT 4
#define STKERR_START_BIT 4
#define STKERR_WIDTH 1

#define SET_STKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED29); \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , val |  STKERR_MASK ); \
   }

#define READ_STKERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED29) & STKERR_MASK)  >> STKERR_START_BIT)

#define WRITE_STKERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29 , (OldValue & ~ STKERR_MASK) | ((val << STKERR_START_BIT) & STKERR_MASK )); \
   } 

#define RESET_STKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29, val & ~STKERR_MASK ); \
   } 

#define WHEN_STKERR_SET(x) \
     if ( READ_STKERR() );


#define UNLESS_STKERR_SET() \
     if (! READ_STKERR() );


#define WAIT_STKERR_SET() \
    while ( READ_STKERR() );


#define WAIT_STKERR_RESET() \
    while (! READ_STKERR() );


//  
//  Unstack from exception return has caused one or more bus faults. 
//  This is chained to the handler, so that the original return stack 
//  is still present. SP is not adjusted from failing return and new 
//  save is not performed. The BFAR is not written..
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS 0xD29, Bits 3:3
//   
//  
#define UNSTKERR_MASK 0x8
#define UNSTKERR_OFFSET 3
#define UNSTKERR_STOP_BIT 3
#define UNSTKERR_START_BIT 3
#define UNSTKERR_WIDTH 1

#define SET_UNSTKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED29); \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , val |  UNSTKERR_MASK ); \
   }

#define READ_UNSTKERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED29) & UNSTKERR_MASK)  >> UNSTKERR_START_BIT)

#define WRITE_UNSTKERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29 , (OldValue & ~ UNSTKERR_MASK) | ((val << UNSTKERR_START_BIT) & UNSTKERR_MASK )); \
   } 

#define RESET_UNSTKERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29, val & ~UNSTKERR_MASK ); \
   } 

#define WHEN_UNSTKERR_SET(x) \
     if ( READ_UNSTKERR() );


#define UNLESS_UNSTKERR_SET() \
     if (! READ_UNSTKERR() );


#define WAIT_UNSTKERR_SET() \
    while ( READ_UNSTKERR() );


#define WAIT_UNSTKERR_RESET() \
    while (! READ_UNSTKERR() );


//  
//  Imprecise data bus error. It is a BusFault, but the Return PC is 
//  not related to the causing instruction. This is not a synchronous 
//  fault. So, if detected when the priority of the current 
//  activation is higher than the Bus Fault, it only pends. Bus fault 
//  activates when returning to a lower priority activation. If a 
//  precise fault occurs before returning to a lower priority 
//  exception, the handler detects both IMPRECISERR set and one of 
//  the precise fault status bits set at the same time. The BFAR is 
//  not written..
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS 0xD29, Bits 2:2
//   
//  
#define IMPRECISERR_MASK 0x4
#define IMPRECISERR_OFFSET 2
#define IMPRECISERR_STOP_BIT 2
#define IMPRECISERR_START_BIT 2
#define IMPRECISERR_WIDTH 1

#define SET_IMPRECISERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED29); \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , val |  IMPRECISERR_MASK ); \
   }

#define READ_IMPRECISERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED29) & IMPRECISERR_MASK)  >> IMPRECISERR_START_BIT)

#define WRITE_IMPRECISERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29 , (OldValue & ~ IMPRECISERR_MASK) | ((val << IMPRECISERR_START_BIT) & IMPRECISERR_MASK )); \
   } 

#define RESET_IMPRECISERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29, val & ~IMPRECISERR_MASK ); \
   } 

#define WHEN_IMPRECISERR_SET(x) \
     if ( READ_IMPRECISERR() );


#define UNLESS_IMPRECISERR_SET() \
     if (! READ_IMPRECISERR() );


#define WAIT_IMPRECISERR_SET() \
    while ( READ_IMPRECISERR() );


#define WAIT_IMPRECISERR_RESET() \
    while (! READ_IMPRECISERR() );


//  
//  Precise data bus error return..
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS 0xD29, Bits 1:1
//   
//  
#define PRECISERR_MASK 0x2
#define PRECISERR_OFFSET 1
#define PRECISERR_STOP_BIT 1
#define PRECISERR_START_BIT 1
#define PRECISERR_WIDTH 1

#define SET_PRECISERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED29); \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , val |  PRECISERR_MASK ); \
   }

#define READ_PRECISERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED29) & PRECISERR_MASK)  >> PRECISERR_START_BIT)

#define WRITE_PRECISERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29 , (OldValue & ~ PRECISERR_MASK) | ((val << PRECISERR_START_BIT) & PRECISERR_MASK )); \
   } 

#define RESET_PRECISERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29, val & ~PRECISERR_MASK ); \
   } 

#define WHEN_PRECISERR_SET(x) \
     if ( READ_PRECISERR() );


#define UNLESS_PRECISERR_SET() \
     if (! READ_PRECISERR() );


#define WAIT_PRECISERR_SET() \
    while ( READ_PRECISERR() );


#define WAIT_PRECISERR_RESET() \
    while (! READ_PRECISERR() );


//  
//  Instruction bus error flag: 1 = instruction bus error 0 = no 
//  instruction bus error. The IBUSERR flag is set by a prefetch 
//  error. The fault stops on the instruction, so if the error occurs 
//  under a branch shadow, no fault occurs. The BFAR is not 
//  written..
//  Register NVIC_CONFIGURABLE_BUS_FAULT_STATUS 0xD29, Bits 0:0
//   
//  
#define IBUSERR_MASK 0x1
#define IBUSERR_OFFSET 0
#define IBUSERR_STOP_BIT 0
#define IBUSERR_START_BIT 0
#define IBUSERR_WIDTH 1

#define SET_IBUSERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED29); \
     WRITE_REGISTER_UCHAR( 0xE000ED29 , val |  IBUSERR_MASK ); \
   }

#define READ_IBUSERR() \
   ((READ_REGISTER_UCHAR( 0xE000ED29) & IBUSERR_MASK)  >> IBUSERR_START_BIT)

#define WRITE_IBUSERR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29 , (OldValue & ~ IBUSERR_MASK) | ((val << IBUSERR_START_BIT) & IBUSERR_MASK )); \
   } 

#define RESET_IBUSERR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED29); \
     WRITE_REGISTER_UCHAR(0xE000ED29, val & ~IBUSERR_MASK ); \
   } 

#define WHEN_IBUSERR_SET(x) \
     if ( READ_IBUSERR() );


#define UNLESS_IBUSERR_SET() \
     if (! READ_IBUSERR() );


#define WAIT_IBUSERR_SET() \
    while ( READ_IBUSERR() );


#define WAIT_IBUSERR_RESET() \
    while (! READ_IBUSERR() );


//  
//  Usage Fault Status Register.
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS at offset 0xD2A
//   
//  
#define WRITE_REGISTER_NVIC_CONFIGURABLE_USAGE_FAULT_STATUS( y) \
     WRITE_REGISTER_USHORT( 0xE000ED2A , y)

#define READ_REGISTER_NVIC_CONFIGURABLE_USAGE_FAULT_STATUS() \
     READ_REGISTER_USHORT( 0xE000ED2A)

//  
//  When DIV_0_TRP (see Configuration Control Register on page 8-26) 
//  is enabled and an SDIV or UDIV instruction is used with a divisor 
//  of 0, this fault occurs The instruction is executed and the 
//  return PC points to it. If DIV_0_TRP is not set, then the divide 
//  returns a quotient of 0..
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS 0xD2A, Bits 9:9
//   
//  
#define DIVBYZERO_MASK 0x200
#define DIVBYZERO_OFFSET 9
#define DIVBYZERO_STOP_BIT 9
#define DIVBYZERO_START_BIT 9
#define DIVBYZERO_WIDTH 1

#define SET_DIVBYZERO() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED2A); \
     WRITE_REGISTER_UCHAR( 0xE000ED2A , val |  DIVBYZERO_MASK ); \
   }

#define READ_DIVBYZERO() \
   ((READ_REGISTER_UCHAR( 0xE000ED2A) & DIVBYZERO_MASK)  >> DIVBYZERO_START_BIT)

#define WRITE_DIVBYZERO(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A , (OldValue & ~ DIVBYZERO_MASK) | ((val << DIVBYZERO_START_BIT) & DIVBYZERO_MASK )); \
   } 

#define RESET_DIVBYZERO() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A, val & ~DIVBYZERO_MASK ); \
   } 

#define WHEN_DIVBYZERO_SET(x) \
     if ( READ_DIVBYZERO() );


#define UNLESS_DIVBYZERO_SET() \
     if (! READ_DIVBYZERO() );


#define WAIT_DIVBYZERO_SET() \
    while ( READ_DIVBYZERO() );


#define WAIT_DIVBYZERO_RESET() \
    while (! READ_DIVBYZERO() );


//  
//  When UNALIGN_TRP is enabled (see Configuration Control Register 
//  on page 8-26), and there is an attempt to make an unaligned 
//  memory access, then this fault occurs. Unaligned 
//  LDM/STM/LDRD/STRD instructions always fault irrespective of the 
//  setting of UNALIGN_TRP.
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS 0xD2A, Bits 8:8
//   
//  
#define UNALIGNED_MASK 0x100
#define UNALIGNED_OFFSET 8
#define UNALIGNED_STOP_BIT 8
#define UNALIGNED_START_BIT 8
#define UNALIGNED_WIDTH 1

#define SET_UNALIGNED() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED2A); \
     WRITE_REGISTER_UCHAR( 0xE000ED2A , val |  UNALIGNED_MASK ); \
   }

#define READ_UNALIGNED() \
   ((READ_REGISTER_UCHAR( 0xE000ED2A) & UNALIGNED_MASK)  >> UNALIGNED_START_BIT)

#define WRITE_UNALIGNED(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A , (OldValue & ~ UNALIGNED_MASK) | ((val << UNALIGNED_START_BIT) & UNALIGNED_MASK )); \
   } 

#define RESET_UNALIGNED() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A, val & ~UNALIGNED_MASK ); \
   } 

#define WHEN_UNALIGNED_SET(x) \
     if ( READ_UNALIGNED() );


#define UNLESS_UNALIGNED_SET() \
     if (! READ_UNALIGNED() );


#define WAIT_UNALIGNED_SET() \
    while ( READ_UNALIGNED() );


#define WAIT_UNALIGNED_RESET() \
    while (! READ_UNALIGNED() );


//  
//  Attempt to use a coprocessor instruction. The processor does not 
//  support coprocessor instructions..
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS 0xD2A, Bits 3:3
//   
//  
#define NOCP_MASK 0x8
#define NOCP_OFFSET 3
#define NOCP_STOP_BIT 3
#define NOCP_START_BIT 3
#define NOCP_WIDTH 1

#define SET_NOCP() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED2A); \
     WRITE_REGISTER_UCHAR( 0xE000ED2A , val |  NOCP_MASK ); \
   }

#define READ_NOCP() \
   ((READ_REGISTER_UCHAR( 0xE000ED2A) & NOCP_MASK)  >> NOCP_START_BIT)

#define WRITE_NOCP(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A , (OldValue & ~ NOCP_MASK) | ((val << NOCP_START_BIT) & NOCP_MASK )); \
   } 

#define RESET_NOCP() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A, val & ~NOCP_MASK ); \
   } 

#define WHEN_NOCP_SET(x) \
     if ( READ_NOCP() );


#define UNLESS_NOCP_SET() \
     if (! READ_NOCP() );


#define WAIT_NOCP_SET() \
    while ( READ_NOCP() );


#define WAIT_NOCP_RESET() \
    while (! READ_NOCP() );


//  
//  Attempt to load EXC_RETURN into PC illegally. Invalid 
//  instruction, invalid context, invalid value. The return PC points 
//  to the instruction that tried to set the PC..
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS 0xD2A, Bits 2:2
//   
//  
#define INVPC_MASK 0x4
#define INVPC_OFFSET 2
#define INVPC_STOP_BIT 2
#define INVPC_START_BIT 2
#define INVPC_WIDTH 1

#define SET_INVPC() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED2A); \
     WRITE_REGISTER_UCHAR( 0xE000ED2A , val |  INVPC_MASK ); \
   }

#define READ_INVPC() \
   ((READ_REGISTER_UCHAR( 0xE000ED2A) & INVPC_MASK)  >> INVPC_START_BIT)

#define WRITE_INVPC(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A , (OldValue & ~ INVPC_MASK) | ((val << INVPC_START_BIT) & INVPC_MASK )); \
   } 

#define RESET_INVPC() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A, val & ~INVPC_MASK ); \
   } 

#define WHEN_INVPC_SET(x) \
     if ( READ_INVPC() );


#define UNLESS_INVPC_SET() \
     if (! READ_INVPC() );


#define WAIT_INVPC_SET() \
    while ( READ_INVPC() );


#define WAIT_INVPC_RESET() \
    while (! READ_INVPC() );


//  
//  Invalid combination of EPSR and instruction, for reasons other 
//  than UNDEFINED instruction. Return PC points to faulting 
//  instruction, with the invalid state..
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS 0xD2A, Bits 1:1
//   
//  
#define INVSTATE_MASK 0x2
#define INVSTATE_OFFSET 1
#define INVSTATE_STOP_BIT 1
#define INVSTATE_START_BIT 1
#define INVSTATE_WIDTH 1

#define SET_INVSTATE() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED2A); \
     WRITE_REGISTER_UCHAR( 0xE000ED2A , val |  INVSTATE_MASK ); \
   }

#define READ_INVSTATE() \
   ((READ_REGISTER_UCHAR( 0xE000ED2A) & INVSTATE_MASK)  >> INVSTATE_START_BIT)

#define WRITE_INVSTATE(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A , (OldValue & ~ INVSTATE_MASK) | ((val << INVSTATE_START_BIT) & INVSTATE_MASK )); \
   } 

#define RESET_INVSTATE() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A, val & ~INVSTATE_MASK ); \
   } 

#define WHEN_INVSTATE_SET(x) \
     if ( READ_INVSTATE() );


#define UNLESS_INVSTATE_SET() \
     if (! READ_INVSTATE() );


#define WAIT_INVSTATE_SET() \
    while ( READ_INVSTATE() );


#define WAIT_INVSTATE_RESET() \
    while (! READ_INVSTATE() );


//  
//  The UNDEFINSTR flag is set when the processor attempts to execute 
//  an undefined instruction. This is an instruction that the 
//  processor cannot decode. The return PC points to the undefined 
//  instruction..
//  Register NVIC_CONFIGURABLE_USAGE_FAULT_STATUS 0xD2A, Bits 0:0
//   
//  
#define UNDEFINSTR_MASK 0x1
#define UNDEFINSTR_OFFSET 0
#define UNDEFINSTR_STOP_BIT 0
#define UNDEFINSTR_START_BIT 0
#define UNDEFINSTR_WIDTH 1

#define SET_UNDEFINSTR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR( 0xE000ED2A); \
     WRITE_REGISTER_UCHAR( 0xE000ED2A , val |  UNDEFINSTR_MASK ); \
   }

#define READ_UNDEFINSTR() \
   ((READ_REGISTER_UCHAR( 0xE000ED2A) & UNDEFINSTR_MASK)  >> UNDEFINSTR_START_BIT)

#define WRITE_UNDEFINSTR(val) \
   {\
     UCHAR OldValue = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A , (OldValue & ~ UNDEFINSTR_MASK) | ((val << UNDEFINSTR_START_BIT) & UNDEFINSTR_MASK )); \
   } 

#define RESET_UNDEFINSTR() \
   {\
     UCHAR val = READ_REGISTER_UCHAR(0xE000ED2A); \
     WRITE_REGISTER_UCHAR(0xE000ED2A, val & ~UNDEFINSTR_MASK ); \
   } 

#define WHEN_UNDEFINSTR_SET(x) \
     if ( READ_UNDEFINSTR() );


#define UNLESS_UNDEFINSTR_SET() \
     if (! READ_UNDEFINSTR() );


#define WAIT_UNDEFINSTR_SET() \
    while ( READ_UNDEFINSTR() );


#define WAIT_UNDEFINSTR_RESET() \
    while (! READ_UNDEFINSTR() );


//  
//  Use the Hard Fault Status Register (HFSR) to obtain information 
//  about events that activate the Hard Fault handler..
//  Register NVIC_HARD_FAULT_STATUS at offset 0xD2C
//   
//  
#define WRITE_REGISTER_NVIC_HARD_FAULT_STATUS( y) \
     WRITE_REGISTER_ULONG( 0xE000ED2C , y)

#define READ_REGISTER_NVIC_HARD_FAULT_STATUS() \
     READ_REGISTER_ULONG( 0xE000ED2C)

//  
//  This bit is set if there is a fault related to debug. This is 
//  only possible when halting debug is not enabled. For monitor 
//  enabled debug, it only happens for BKPT when the current priority 
//  is higher than the monitor. When both halting and monitor debug 
//  are disabled, it only happens for debug events that are not 
//  ignored (minimally, BKPT). The Debug Fault Status Register is 
//  updated.
//  Register NVIC_HARD_FAULT_STATUS 0xD2C, Bits 31:31
//   
//  
#define DEBUG_EVENT_MASK 0x80000000
#define DEBUG_EVENT_OFFSET 31
#define DEBUG_EVENT_STOP_BIT 31
#define DEBUG_EVENT_START_BIT 31
#define DEBUG_EVENT_WIDTH 1

#define SET_DEBUG_EVENT() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED2C); \
     WRITE_REGISTER_ULONG( 0xE000ED2C , val |  DEBUG_EVENT_MASK ); \
   }

#define READ_DEBUG_EVENT() \
   ((READ_REGISTER_ULONG( 0xE000ED2C) & DEBUG_EVENT_MASK)  >> DEBUG_EVENT_START_BIT)

#define WRITE_DEBUG_EVENT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED2C); \
     WRITE_REGISTER_ULONG(0xE000ED2C , (OldValue & ~ DEBUG_EVENT_MASK) | ((val << DEBUG_EVENT_START_BIT) & DEBUG_EVENT_MASK )); \
   } 

#define RESET_DEBUG_EVENT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED2C); \
     WRITE_REGISTER_ULONG(0xE000ED2C, val & ~DEBUG_EVENT_MASK ); \
   } 

#define WHEN_DEBUG_EVENT_SET(x) \
     if ( READ_DEBUG_EVENT() );


#define UNLESS_DEBUG_EVENT_SET() \
     if (! READ_DEBUG_EVENT() );


#define WAIT_DEBUG_EVENT_SET() \
    while ( READ_DEBUG_EVENT() );


#define WAIT_DEBUG_EVENT_RESET() \
    while (! READ_DEBUG_EVENT() );


//  
//  Hard Fault activated because a Configurable Fault was received 
//  and cannot activate because of priority or because the 
//  Configurable Fault is disabled. The Hard Fault handler then has 
//  to read the other fault status registers to determine 
//  cause..
//  Register NVIC_HARD_FAULT_STATUS 0xD2C, Bits 30:30
//   
//  
#define FORCED_MASK 0x40000000
#define FORCED_OFFSET 30
#define FORCED_STOP_BIT 30
#define FORCED_START_BIT 30
#define FORCED_WIDTH 1

#define SET_FORCED() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED2C); \
     WRITE_REGISTER_ULONG( 0xE000ED2C , val |  FORCED_MASK ); \
   }

#define READ_FORCED() \
   ((READ_REGISTER_ULONG( 0xE000ED2C) & FORCED_MASK)  >> FORCED_START_BIT)

#define WRITE_FORCED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED2C); \
     WRITE_REGISTER_ULONG(0xE000ED2C , (OldValue & ~ FORCED_MASK) | ((val << FORCED_START_BIT) & FORCED_MASK )); \
   } 

#define RESET_FORCED() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED2C); \
     WRITE_REGISTER_ULONG(0xE000ED2C, val & ~FORCED_MASK ); \
   } 

#define WHEN_FORCED_SET(x) \
     if ( READ_FORCED() );


#define UNLESS_FORCED_SET() \
     if (! READ_FORCED() );


#define WAIT_FORCED_SET() \
    while ( READ_FORCED() );


#define WAIT_FORCED_RESET() \
    while (! READ_FORCED() );


//  
//  This bit is set if there is a fault because of vector table read 
//  on exception processing (Bus Fault). This case is always a Hard 
//  Fault. The return PC points to the pre-empted 
//  instruction..
//  Register NVIC_HARD_FAULT_STATUS 0xD2C, Bits 1:1
//   
//  
#define VECTOR_TABLE_MASK 0x2
#define VECTOR_TABLE_OFFSET 1
#define VECTOR_TABLE_STOP_BIT 1
#define VECTOR_TABLE_START_BIT 1
#define VECTOR_TABLE_WIDTH 1

#define SET_VECTOR_TABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED2C); \
     WRITE_REGISTER_ULONG( 0xE000ED2C , val |  VECTOR_TABLE_MASK ); \
   }

#define READ_VECTOR_TABLE() \
   ((READ_REGISTER_ULONG( 0xE000ED2C) & VECTOR_TABLE_MASK)  >> VECTOR_TABLE_START_BIT)

#define WRITE_VECTOR_TABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED2C); \
     WRITE_REGISTER_ULONG(0xE000ED2C , (OldValue & ~ VECTOR_TABLE_MASK) | ((val << VECTOR_TABLE_START_BIT) & VECTOR_TABLE_MASK )); \
   } 

#define RESET_VECTOR_TABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED2C); \
     WRITE_REGISTER_ULONG(0xE000ED2C, val & ~VECTOR_TABLE_MASK ); \
   } 

#define WHEN_VECTOR_TABLE_SET(x) \
     if ( READ_VECTOR_TABLE() );


#define UNLESS_VECTOR_TABLE_SET() \
     if (! READ_VECTOR_TABLE() );


#define WAIT_VECTOR_TABLE_SET() \
    while ( READ_VECTOR_TABLE() );


#define WAIT_VECTOR_TABLE_RESET() \
    while (! READ_VECTOR_TABLE() );


//  
//  Multiple flags in the Debug Fault Status Register can be set when 
//  multiple fault.
//  Register NVIC_DEBUG_FAULT_STATUS at offset 0xD30
//   
//  
#define WRITE_REGISTER_NVIC_DEBUG_FAULT_STATUS( y) \
     WRITE_REGISTER_ULONG( 0xE000ED30 , y)

#define READ_REGISTER_NVIC_DEBUG_FAULT_STATUS() \
     READ_REGISTER_ULONG( 0xE000ED30)

//  
//  External debug request flag: 1 = EDBGRQ signal asserted, 0 = 
//  EDBGRQ signal not asserted. The processor stops on next 
//  instruction boundary.
//  Register NVIC_DEBUG_FAULT_STATUS 0xD30, Bits 4:4
//   
//  
#define EXTERNAL_MASK 0x10
#define EXTERNAL_OFFSET 4
#define EXTERNAL_STOP_BIT 4
#define EXTERNAL_START_BIT 4
#define EXTERNAL_WIDTH 1

#define SET_EXTERNAL() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED30); \
     WRITE_REGISTER_ULONG( 0xE000ED30 , val |  EXTERNAL_MASK ); \
   }

#define READ_EXTERNAL() \
   ((READ_REGISTER_ULONG( 0xE000ED30) & EXTERNAL_MASK)  >> EXTERNAL_START_BIT)

#define WRITE_EXTERNAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30 , (OldValue & ~ EXTERNAL_MASK) | ((val << EXTERNAL_START_BIT) & EXTERNAL_MASK )); \
   } 

#define RESET_EXTERNAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30, val & ~EXTERNAL_MASK ); \
   } 

#define WHEN_EXTERNAL_SET(x) \
     if ( READ_EXTERNAL() );


#define UNLESS_EXTERNAL_SET() \
     if (! READ_EXTERNAL() );


#define WAIT_EXTERNAL_SET() \
    while ( READ_EXTERNAL() );


#define WAIT_EXTERNAL_RESET() \
    while (! READ_EXTERNAL() );


//  
//  Vector catch flag: 1 = vector catch occurred, 0 = no vector catch 
//  occurred. When the VCATCH flag is set, a flag in one of the local 
//  fault status registers is also set to indicate the type of 
//  fault..
//  Register NVIC_DEBUG_FAULT_STATUS 0xD30, Bits 3:3
//   
//  
#define VECTOR_CATCH_MASK 0x8
#define VECTOR_CATCH_OFFSET 3
#define VECTOR_CATCH_STOP_BIT 3
#define VECTOR_CATCH_START_BIT 3
#define VECTOR_CATCH_WIDTH 1

#define SET_VECTOR_CATCH() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED30); \
     WRITE_REGISTER_ULONG( 0xE000ED30 , val |  VECTOR_CATCH_MASK ); \
   }

#define READ_VECTOR_CATCH() \
   ((READ_REGISTER_ULONG( 0xE000ED30) & VECTOR_CATCH_MASK)  >> VECTOR_CATCH_START_BIT)

#define WRITE_VECTOR_CATCH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30 , (OldValue & ~ VECTOR_CATCH_MASK) | ((val << VECTOR_CATCH_START_BIT) & VECTOR_CATCH_MASK )); \
   } 

#define RESET_VECTOR_CATCH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30, val & ~VECTOR_CATCH_MASK ); \
   } 

#define WHEN_VECTOR_CATCH_SET(x) \
     if ( READ_VECTOR_CATCH() );


#define UNLESS_VECTOR_CATCH_SET() \
     if (! READ_VECTOR_CATCH() );


#define WAIT_VECTOR_CATCH_SET() \
    while ( READ_VECTOR_CATCH() );


#define WAIT_VECTOR_CATCH_RESET() \
    while (! READ_VECTOR_CATCH() );


//  
//  Data Watchpoint and Trace (DWT). The processor stops at the 
//  current instruction or at the next instruction..
//  Register NVIC_DEBUG_FAULT_STATUS 0xD30, Bits 2:2
//   
//  
#define DWTTRAP_MASK 0x4
#define DWTTRAP_OFFSET 2
#define DWTTRAP_STOP_BIT 2
#define DWTTRAP_START_BIT 2
#define DWTTRAP_WIDTH 1

#define SET_DWTTRAP() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED30); \
     WRITE_REGISTER_ULONG( 0xE000ED30 , val |  DWTTRAP_MASK ); \
   }

#define READ_DWTTRAP() \
   ((READ_REGISTER_ULONG( 0xE000ED30) & DWTTRAP_MASK)  >> DWTTRAP_START_BIT)

#define WRITE_DWTTRAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30 , (OldValue & ~ DWTTRAP_MASK) | ((val << DWTTRAP_START_BIT) & DWTTRAP_MASK )); \
   } 

#define RESET_DWTTRAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30, val & ~DWTTRAP_MASK ); \
   } 

#define WHEN_DWTTRAP_SET(x) \
     if ( READ_DWTTRAP() );


#define UNLESS_DWTTRAP_SET() \
     if (! READ_DWTTRAP() );


#define WAIT_DWTTRAP_SET() \
    while ( READ_DWTTRAP() );


#define WAIT_DWTTRAP_RESET() \
    while (! READ_DWTTRAP() );


//  
//  The BKPT flag is set by a BKPT instruction in flash patch code, 
//  and also by normal code. Return PC points to breakpoint 
//  containing instruction..
//  Register NVIC_DEBUG_FAULT_STATUS 0xD30, Bits 1:1
//   
//  
#define BREAKPOINT_MASK 0x2
#define BREAKPOINT_OFFSET 1
#define BREAKPOINT_STOP_BIT 1
#define BREAKPOINT_START_BIT 1
#define BREAKPOINT_WIDTH 1

#define SET_BREAKPOINT() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED30); \
     WRITE_REGISTER_ULONG( 0xE000ED30 , val |  BREAKPOINT_MASK ); \
   }

#define READ_BREAKPOINT() \
   ((READ_REGISTER_ULONG( 0xE000ED30) & BREAKPOINT_MASK)  >> BREAKPOINT_START_BIT)

#define WRITE_BREAKPOINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30 , (OldValue & ~ BREAKPOINT_MASK) | ((val << BREAKPOINT_START_BIT) & BREAKPOINT_MASK )); \
   } 

#define RESET_BREAKPOINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30, val & ~BREAKPOINT_MASK ); \
   } 

#define WHEN_BREAKPOINT_SET(x) \
     if ( READ_BREAKPOINT() );


#define UNLESS_BREAKPOINT_SET() \
     if (! READ_BREAKPOINT() );


#define WAIT_BREAKPOINT_SET() \
    while ( READ_BREAKPOINT() );


#define WAIT_BREAKPOINT_RESET() \
    while (! READ_BREAKPOINT() );


//  
//  Halt request flag: 1 = halt requested by NVIC, including step. 
//  The processor is halted on the next instruction.
//  Register NVIC_DEBUG_FAULT_STATUS 0xD30, Bits 0:0
//   
//  
#define HALTED_MASK 0x1
#define HALTED_OFFSET 0
#define HALTED_STOP_BIT 0
#define HALTED_START_BIT 0
#define HALTED_WIDTH 1

#define SET_HALTED() \
   {\
     ULONG val = READ_REGISTER_ULONG( 0xE000ED30); \
     WRITE_REGISTER_ULONG( 0xE000ED30 , val |  HALTED_MASK ); \
   }

#define READ_HALTED() \
   ((READ_REGISTER_ULONG( 0xE000ED30) & HALTED_MASK)  >> HALTED_START_BIT)

#define WRITE_HALTED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30 , (OldValue & ~ HALTED_MASK) | ((val << HALTED_START_BIT) & HALTED_MASK )); \
   } 

#define RESET_HALTED() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xE000ED30); \
     WRITE_REGISTER_ULONG(0xE000ED30, val & ~HALTED_MASK ); \
   } 

#define WHEN_HALTED_SET(x) \
     if ( READ_HALTED() );


#define UNLESS_HALTED_SET() \
     if (! READ_HALTED() );


#define WAIT_HALTED_SET() \
    while ( READ_HALTED() );


#define WAIT_HALTED_RESET() \
    while (! READ_HALTED() );


//  
//  Mem Manage fault address field. ADDRESS is the data address of a 
//  faulted load or store attempt. When an unaligned access faults, 
//  the address is the actual address that faulted. Because an access 
//  can be split into multiple parts, each aligned, this address can 
//  be any offset in the range of the requested size..
//  Register NVIC_MEMORY_MANAGE_FAULT_ADDRESS at offset 0xD34
//   
//  
#define WRITE_REGISTER_NVIC_MEMORY_MANAGE_FAULT_ADDRESS( y) \
     WRITE_REGISTER_ULONG( 0xE000ED34 , y)

#define READ_REGISTER_NVIC_MEMORY_MANAGE_FAULT_ADDRESS() \
     READ_REGISTER_ULONG( 0xE000ED34)

//  
//  Bus fault address field. ADDRESS is the data address of a faulted 
//  load or store attempt. When an unaligned access faults, the 
//  address is the address requested by the instruction, even if that 
//  is not the address that faulted.
//  Register NVIC_BUS_MANAGE_FAULT_ADDRESS at offset 0xD38
//   
//  
#define WRITE_REGISTER_NVIC_BUS_MANAGE_FAULT_ADDRESS( y) \
     WRITE_REGISTER_ULONG( 0xE000ED38 , y)

#define READ_REGISTER_NVIC_BUS_MANAGE_FAULT_ADDRESS() \
     READ_REGISTER_ULONG( 0xE000ED38)

//  
//  Use the Auxiliary Fault Status Register (AFSR) to determine 
//  additional system fault information to software..
//  Register NVIC_AUXILIARY_FAULT_STATUS at offset 0xD3C
//   
//  
#define WRITE_REGISTER_NVIC_AUXILIARY_FAULT_STATUS( y) \
     WRITE_REGISTER_ULONG( 0xE000ED3C , y)

#define READ_REGISTER_NVIC_AUXILIARY_FAULT_STATUS() \
     READ_REGISTER_ULONG( 0xE000ED3C)

#ifdef  __cplusplus 
}
#endif 
