/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Stm32/Stm32Timer/macro-c/Stm32Timer.h
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
 
#define TIM_2 0x40000000
#define TIM_3 0x40000400
#define TIM_1 0x40012C00
#define TIM_6 0x40001000
#define TIM_7 0x40001400
#define TIM_4 0x40000800
#define TIM_5 0x40000C00
#define NB_DEVICE_TIM 7
/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL1
//
// Notes : Register TIM control register 1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CONTROL1( y) \
     WRITE_REGISTER_USHORT( 0x40021000 , y)

#define SET_BITS_TIMER_TIMER_CONTROL1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CONTROL1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CONTROL1() \
     READ_REGISTER_USHORT(0x40021000)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define COUNTER_MASK 0x1U
#define COUNTER_OFFSET 0
#define COUNTER_STOP_BIT 0
#define COUNTER_START_BIT 0
#define COUNTER_WIDTH 1


#define TIMER_TIMER_CONTROL_1_REG 0x0

typedef enum Counter {
    COUNTER_DISABLE,
    COUNTER_ENABLE
} COUNTER_T ;
#define WRITE_TIMER_COUNTER(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ COUNTER_MASK) | ((val << COUNTER_START_BIT) & COUNTER_MASK )); \
   } 

#define  ENABLE_TIMER_COUNTER() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  COUNTER_MASK ); \
   }

#define DISABLE_TIMER_COUNTER() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~COUNTER_MASK ); \
   } 

#define READ_TIMER_COUNTER() \
   ((READ_REGISTER_USHORT(0x40021000) & COUNTER_MASK)  >> COUNTER_START_BIT)

#define WHEN_TIMER_COUNTER_HIGH(x) \
     if ( READ_TIMER_COUNTER() )


#define UNLESS_TIMER_COUNTER_HIGH() \
     if (! READ_TIMER_COUNTER() )


#define WAIT_TIMER_COUNTER_LOW() \
    while ( READ_TIMER_COUNTER() );


#define WAIT_TIMER_COUNTER_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_COUNTER() && (--___t___ > 0)); }


#define WAIT_TIMER_COUNTER_HIGH() \
    while (! READ_TIMER_COUNTER() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define UPDATE_MASK 0x2U
#define UPDATE_OFFSET 1
#define UPDATE_STOP_BIT 1
#define UPDATE_START_BIT 1
#define UPDATE_WIDTH 1



typedef enum Update {
    UPDATE_ENABLE,
    UPDATE_DISABLE
} UPDATE_T ;
#define WRITE_TIMER_UPDATE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ UPDATE_MASK) | ((val << UPDATE_START_BIT) & UPDATE_MASK )); \
   } 

#define  ENABLE_TIMER_UPDATE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  UPDATE_MASK ); \
   }

#define DISABLE_TIMER_UPDATE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~UPDATE_MASK ); \
   } 

#define READ_TIMER_UPDATE() \
   ((READ_REGISTER_USHORT(0x40021000) & UPDATE_MASK)  >> UPDATE_START_BIT)

#define WHEN_TIMER_UPDATE_HIGH(x) \
     if ( READ_TIMER_UPDATE() )


#define UNLESS_TIMER_UPDATE_HIGH() \
     if (! READ_TIMER_UPDATE() )


#define WAIT_TIMER_UPDATE_LOW() \
    while ( READ_TIMER_UPDATE() );


#define WAIT_TIMER_UPDATE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_UPDATE() && (--___t___ > 0)); }


#define WAIT_TIMER_UPDATE_HIGH() \
    while (! READ_TIMER_UPDATE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define UPDATE_REQUEST_SOURCE_MASK 0x4U
#define UPDATE_REQUEST_SOURCE_OFFSET 2
#define UPDATE_REQUEST_SOURCE_STOP_BIT 2
#define UPDATE_REQUEST_SOURCE_START_BIT 2
#define UPDATE_REQUEST_SOURCE_WIDTH 1



typedef enum UpdateRequestSource {
    ANY_SOURCE,
    ONLY_OVERFLOW_OR_UNDERFLOW
} UPDATE_REQUEST_SOURCE_T ;
#define WRITE_TIMER_UPDATE_REQUEST_SOURCE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ UPDATE_REQUEST_SOURCE_MASK) | ((val << UPDATE_REQUEST_SOURCE_START_BIT) & UPDATE_REQUEST_SOURCE_MASK )); \
   } 

#define ENABLE_TIMER_UPDATE_REQUEST_SOURCE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  UPDATE_REQUEST_SOURCE_MASK ); \
   }

#define DISABLE_TIMER_UPDATE_REQUEST_SOURCE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~UPDATE_REQUEST_SOURCE_MASK ); \
   } 

#define READ_TIMER_UPDATE_REQUEST_SOURCE() \
   ((READ_REGISTER_USHORT(0x40021000) & UPDATE_REQUEST_SOURCE_MASK)  >> UPDATE_REQUEST_SOURCE_START_BIT)

#define WHEN_TIMER_UPDATE_REQUEST_SOURCE_HIGH(x) \
     if ( READ_TIMER_UPDATE_REQUEST_SOURCE() )


#define UNLESS_TIMER_UPDATE_REQUEST_SOURCE_HIGH() \
     if (! READ_TIMER_UPDATE_REQUEST_SOURCE() )


#define WAIT_TIMER_UPDATE_REQUEST_SOURCE_LOW() \
    while ( READ_TIMER_UPDATE_REQUEST_SOURCE() );


#define WAIT_TIMER_UPDATE_REQUEST_SOURCE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_UPDATE_REQUEST_SOURCE() && (--___t___ > 0)); }


#define WAIT_TIMER_UPDATE_REQUEST_SOURCE_HIGH() \
    while (! READ_TIMER_UPDATE_REQUEST_SOURCE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define ONE_PULSE_MODE_MASK 0x8U
#define ONE_PULSE_MODE_OFFSET 3
#define ONE_PULSE_MODE_STOP_BIT 3
#define ONE_PULSE_MODE_START_BIT 3
#define ONE_PULSE_MODE_WIDTH 1



typedef enum OnePulseMode {
    COUNTER_IS_NOT_STOPPED,
    COUNTER_STOPS_COUNTING_AT_THE_NEXT_UPDATE
} ONE_PULSE_MODE_T ;
#define WRITE_TIMER_ONE_PULSE_MODE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ ONE_PULSE_MODE_MASK) | ((val << ONE_PULSE_MODE_START_BIT) & ONE_PULSE_MODE_MASK )); \
   } 

#define ENABLE_TIMER_ONE_PULSE_MODE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  ONE_PULSE_MODE_MASK ); \
   }

#define DISABLE_TIMER_ONE_PULSE_MODE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~ONE_PULSE_MODE_MASK ); \
   } 

#define READ_TIMER_ONE_PULSE_MODE() \
   ((READ_REGISTER_USHORT(0x40021000) & ONE_PULSE_MODE_MASK)  >> ONE_PULSE_MODE_START_BIT)

#define WHEN_TIMER_ONE_PULSE_MODE_HIGH(x) \
     if ( READ_TIMER_ONE_PULSE_MODE() )


#define UNLESS_TIMER_ONE_PULSE_MODE_HIGH() \
     if (! READ_TIMER_ONE_PULSE_MODE() )


#define WAIT_TIMER_ONE_PULSE_MODE_LOW() \
    while ( READ_TIMER_ONE_PULSE_MODE() );


#define WAIT_TIMER_ONE_PULSE_MODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_ONE_PULSE_MODE() && (--___t___ > 0)); }


#define WAIT_TIMER_ONE_PULSE_MODE_HIGH() \
    while (! READ_TIMER_ONE_PULSE_MODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////
#define DIRECTION_MASK 0x10U
#define DIRECTION_OFFSET 4
#define DIRECTION_STOP_BIT 4
#define DIRECTION_START_BIT 4
#define DIRECTION_WIDTH 1



typedef enum Direction {
    UPCOUNTER,
    DOWNCOUNTER
} DIRECTION_T ;
#define WRITE_TIMER_DIRECTION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ DIRECTION_MASK) | ((val << DIRECTION_START_BIT) & DIRECTION_MASK )); \
   } 

#define ENABLE_TIMER_DIRECTION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  DIRECTION_MASK ); \
   }

#define DISABLE_TIMER_DIRECTION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~DIRECTION_MASK ); \
   } 

#define READ_TIMER_DIRECTION() \
   ((READ_REGISTER_USHORT(0x40021000) & DIRECTION_MASK)  >> DIRECTION_START_BIT)

#define WHEN_TIMER_DIRECTION_HIGH(x) \
     if ( READ_TIMER_DIRECTION() )


#define UNLESS_TIMER_DIRECTION_HIGH() \
     if (! READ_TIMER_DIRECTION() )


#define WAIT_TIMER_DIRECTION_LOW() \
    while ( READ_TIMER_DIRECTION() );


#define WAIT_TIMER_DIRECTION_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_DIRECTION() && (--___t___ > 0)); }


#define WAIT_TIMER_DIRECTION_HIGH() \
    while (! READ_TIMER_DIRECTION() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 5:6

//
/////////////////////////////////////////////////////////////////////////
#define CENTER_ALIGNED_MODE_MASK 0x60U
#define CENTER_ALIGNED_MODE_OFFSET 6
#define CENTER_ALIGNED_MODE_STOP_BIT 6
#define CENTER_ALIGNED_MODE_START_BIT 5
#define CENTER_ALIGNED_MODE_WIDTH 2


typedef enum CenterAlignedMode {
    EDGE_ALIGNED_MODE,
    CENTER_ALIGNED_MOD_1,
    CENTER_ALIGNED_MOD_2,
    CENTER_ALIGNED_MOD_3
} CENTER_ALIGNED_MODE_T ;


#define READ_TIMER_CENTER_ALIGNED_MODE() \
   ((READ_REGISTER_USHORT(0x40021000) & CENTER_ALIGNED_MODE_MASK)  >> CENTER_ALIGNED_MODE_START_BIT)

#define WRITE_TIMER_CENTER_ALIGNED_MODE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ CENTER_ALIGNED_MODE_MASK) | ((val << CENTER_ALIGNED_MODE_START_BIT) & CENTER_ALIGNED_MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define AUTO_RELOAD_MASK 0x80U
#define AUTO_RELOAD_OFFSET 7
#define AUTO_RELOAD_STOP_BIT 7
#define AUTO_RELOAD_START_BIT 7
#define AUTO_RELOAD_WIDTH 1



typedef enum AutoReload {
    RELOAD_DISABLE,
    RELOAD_ENABLE
} AUTO_RELOAD_T ;
#define WRITE_TIMER_AUTO_RELOAD(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ AUTO_RELOAD_MASK) | ((val << AUTO_RELOAD_START_BIT) & AUTO_RELOAD_MASK )); \
   } 

#define ENABLE_TIMER_AUTO_RELOAD() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  AUTO_RELOAD_MASK ); \
   }

#define DISABLE_TIMER_AUTO_RELOAD() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~AUTO_RELOAD_MASK ); \
   } 

#define READ_TIMER_AUTO_RELOAD() \
   ((READ_REGISTER_USHORT(0x40021000) & AUTO_RELOAD_MASK)  >> AUTO_RELOAD_START_BIT)

#define WHEN_TIMER_AUTO_RELOAD_HIGH(x) \
     if ( READ_TIMER_AUTO_RELOAD() )


#define UNLESS_TIMER_AUTO_RELOAD_HIGH() \
     if (! READ_TIMER_AUTO_RELOAD() )


#define WAIT_TIMER_AUTO_RELOAD_LOW() \
    while ( READ_TIMER_AUTO_RELOAD() );


#define WAIT_TIMER_AUTO_RELOAD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_AUTO_RELOAD() && (--___t___ > 0)); }


#define WAIT_TIMER_AUTO_RELOAD_HIGH() \
    while (! READ_TIMER_AUTO_RELOAD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl1
//
// Return the value of register TIMER_CONTROL_1
//
// Notes : Register TIM control register 1 (TIMx_CR1) at the offset 0x0, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////
#define CLOCK_DIVISION_MASK 0x300U
#define CLOCK_DIVISION_OFFSET 9
#define CLOCK_DIVISION_STOP_BIT 9
#define CLOCK_DIVISION_START_BIT 8
#define CLOCK_DIVISION_WIDTH 2


typedef enum ClockDivision {
    TCK_INT,
    TCK_INT_BY_2,
    TCK_INT_BY_4
} CLOCK_DIVISION_T ;


#define READ_TIMER_CLOCK_DIVISION() \
   ((READ_REGISTER_USHORT(0x40021000) & CLOCK_DIVISION_MASK)  >> CLOCK_DIVISION_START_BIT)

#define WRITE_TIMER_CLOCK_DIVISION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ CLOCK_DIVISION_MASK) | ((val << CLOCK_DIVISION_START_BIT) & CLOCK_DIVISION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl2
//
// Return the value of register TIMER_CONTROL2
//
// Notes : Register TIM control register 2 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CONTROL2( y) \
     WRITE_REGISTER_USHORT( 0x40021004 , y)

#define SET_BITS_TIMER_TIMER_CONTROL2(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CONTROL2(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CONTROL2() \
     READ_REGISTER_USHORT(0x40021004)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl2
//
// Return the value of register TIMER_CONTROL_2
//
// Notes : Register TIM control register 2 (TIMx_CR2) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE_DMA_SELECTION_MASK 0x8U
#define CAPTURE_COMPARE_DMA_SELECTION_OFFSET 3
#define CAPTURE_COMPARE_DMA_SELECTION_STOP_BIT 3
#define CAPTURE_COMPARE_DMA_SELECTION_START_BIT 3
#define CAPTURE_COMPARE_DMA_SELECTION_WIDTH 1


#define TIMER_TIMER_CONTROL_2_REG 0x4

typedef enum CaptureCompareDmaSelection {
    DMA_REQUEST_SENT_WHEN_CC_EVENT,
    DMA_REQUEST_SENT_WHEN_CC_UPDATE
} CAPTURE_COMPARE_DMA_SELECTION_T ;
#define WRITE_TIMER_CAPTURE_COMPARE_DMA_SELECTION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ CAPTURE_COMPARE_DMA_SELECTION_MASK) | ((val << CAPTURE_COMPARE_DMA_SELECTION_START_BIT) & CAPTURE_COMPARE_DMA_SELECTION_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE_DMA_SELECTION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  CAPTURE_COMPARE_DMA_SELECTION_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE_DMA_SELECTION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~CAPTURE_COMPARE_DMA_SELECTION_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE_DMA_SELECTION() \
   ((READ_REGISTER_USHORT(0x40021004) & CAPTURE_COMPARE_DMA_SELECTION_MASK)  >> CAPTURE_COMPARE_DMA_SELECTION_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE_DMA_SELECTION_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE_DMA_SELECTION() )


#define UNLESS_TIMER_CAPTURE_COMPARE_DMA_SELECTION_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE_DMA_SELECTION() )


#define WAIT_TIMER_CAPTURE_COMPARE_DMA_SELECTION_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE_DMA_SELECTION() );


#define WAIT_TIMER_CAPTURE_COMPARE_DMA_SELECTION_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE_DMA_SELECTION() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE_DMA_SELECTION_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE_DMA_SELECTION() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl2
//
// Return the value of register TIMER_CONTROL_2
//
// Notes : Register TIM control register 2 (TIMx_CR2) at the offset 0x4, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////
#define MASTER_MODE_SELECTION_MASK 0x70U
#define MASTER_MODE_SELECTION_OFFSET 6
#define MASTER_MODE_SELECTION_STOP_BIT 6
#define MASTER_MODE_SELECTION_START_BIT 4
#define MASTER_MODE_SELECTION_WIDTH 3


typedef enum MasterMode {
    RESET,
    ENABLE,
    UPDATE
} MASTER_MODE_T ;


#define READ_TIMER_MASTER_MODE_SELECTION() \
   ((READ_REGISTER_USHORT(0x40021004) & MASTER_MODE_SELECTION_MASK)  >> MASTER_MODE_SELECTION_START_BIT)

#define WRITE_TIMER_MASTER_MODE_SELECTION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ MASTER_MODE_SELECTION_MASK) | ((val << MASTER_MODE_SELECTION_START_BIT) & MASTER_MODE_SELECTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerControl2
//
// Return the value of register TIMER_CONTROL_2
//
// Notes : Register TIM control register 2 (TIMx_CR2) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define T1S_SELECTION_MASK 0x80U
#define T1S_SELECTION_OFFSET 7
#define T1S_SELECTION_STOP_BIT 7
#define T1S_SELECTION_START_BIT 7
#define T1S_SELECTION_WIDTH 1



typedef enum T1sSelection {
    TIMx_CH1_CONNECTED_TI1_INPUT,
    TIMx_CH1_CH2_CH3_CONNECTED_TI1_INPUT
} T_1S_SELECTION_T ;
#define WRITE_TIMER_T1S_SELECTION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ T1S_SELECTION_MASK) | ((val << T1S_SELECTION_START_BIT) & T1S_SELECTION_MASK )); \
   } 

#define ENABLE_TIMER_T1S_SELECTION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  T1S_SELECTION_MASK ); \
   }

#define DISABLE_TIMER_T1S_SELECTION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~T1S_SELECTION_MASK ); \
   } 

#define READ_TIMER_T1S_SELECTION() \
   ((READ_REGISTER_USHORT(0x40021004) & T1S_SELECTION_MASK)  >> T1S_SELECTION_START_BIT)

#define WHEN_TIMER_T1S_SELECTION_HIGH(x) \
     if ( READ_TIMER_T1S_SELECTION() )


#define UNLESS_TIMER_T1S_SELECTION_HIGH() \
     if (! READ_TIMER_T1S_SELECTION() )


#define WAIT_TIMER_T1S_SELECTION_LOW() \
    while ( READ_TIMER_T1S_SELECTION() );


#define WAIT_TIMER_T1S_SELECTION_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_T1S_SELECTION() && (--___t___ > 0)); }


#define WAIT_TIMER_T1S_SELECTION_HIGH() \
    while (! READ_TIMER_T1S_SELECTION() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_SLAVE_MODE_CONTROL( y) \
     WRITE_REGISTER_USHORT( 0x40021008 , y)

#define SET_BITS_TIMER_TIMER_SLAVE_MODE_CONTROL(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_SLAVE_MODE_CONTROL(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_SLAVE_MODE_CONTROL() \
     READ_REGISTER_USHORT(0x40021008)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////
#define SLAVE_MODE_SELECTION_MASK 0x7U
#define SLAVE_MODE_SELECTION_OFFSET 2
#define SLAVE_MODE_SELECTION_STOP_BIT 2
#define SLAVE_MODE_SELECTION_START_BIT 0
#define SLAVE_MODE_SELECTION_WIDTH 3


typedef enum SlaveModeSelection {
    SLAVE_MODE_DISABLED,
    ENCODER_MODE_1,
    ENCODER_MODE_2,
    ENCODER_MODE_3,
    RESET_MODE,
    GATED_MODE,
    TRIGGER_MODE,
    EXTERNAL_CLOCK_MODE_1
} SLAVE_MODE_SELECTION_T ;


#define READ_TIMER_SLAVE_MODE_SELECTION() \
   ((READ_REGISTER_USHORT(0x40021008) & SLAVE_MODE_SELECTION_MASK)  >> SLAVE_MODE_SELECTION_START_BIT)

#define WRITE_TIMER_SLAVE_MODE_SELECTION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ SLAVE_MODE_SELECTION_MASK) | ((val << SLAVE_MODE_SELECTION_START_BIT) & SLAVE_MODE_SELECTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define CLEAR_SOURCE_MASK 0x8U
#define CLEAR_SOURCE_OFFSET 3
#define CLEAR_SOURCE_STOP_BIT 3
#define CLEAR_SOURCE_START_BIT 3
#define CLEAR_SOURCE_WIDTH 1


#define TIMER_TIMER_SLAVE_MODE_CONTROL_REG 0x8

typedef enum ClearSource {
    OCREF_CLR_INT_CONNECTED_TO_OCREF_CLR,
    OCREF_CLR_INT_CONNECTED_TO_ETRF
} CLEAR_SOURCE_T ;
#define WRITE_TIMER_CLEAR_SOURCE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ CLEAR_SOURCE_MASK) | ((val << CLEAR_SOURCE_START_BIT) & CLEAR_SOURCE_MASK )); \
   } 

#define ENABLE_TIMER_CLEAR_SOURCE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  CLEAR_SOURCE_MASK ); \
   }

#define DISABLE_TIMER_CLEAR_SOURCE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~CLEAR_SOURCE_MASK ); \
   } 

#define READ_TIMER_CLEAR_SOURCE() \
   ((READ_REGISTER_USHORT(0x40021008) & CLEAR_SOURCE_MASK)  >> CLEAR_SOURCE_START_BIT)

#define WHEN_TIMER_CLEAR_SOURCE_HIGH(x) \
     if ( READ_TIMER_CLEAR_SOURCE() )


#define UNLESS_TIMER_CLEAR_SOURCE_HIGH() \
     if (! READ_TIMER_CLEAR_SOURCE() )


#define WAIT_TIMER_CLEAR_SOURCE_LOW() \
    while ( READ_TIMER_CLEAR_SOURCE() );


#define WAIT_TIMER_CLEAR_SOURCE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CLEAR_SOURCE() && (--___t___ > 0)); }


#define WAIT_TIMER_CLEAR_SOURCE_HIGH() \
    while (! READ_TIMER_CLEAR_SOURCE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_SELECTION_MASK 0x70U
#define TRIGGER_SELECTION_OFFSET 6
#define TRIGGER_SELECTION_STOP_BIT 6
#define TRIGGER_SELECTION_START_BIT 4
#define TRIGGER_SELECTION_WIDTH 3


typedef enum TriggerSelection {
    INTERNAL_TRIGGER_0,
    INTERNAL_TRIGGER_1,
    INTERNAL_TRIGGER_2,
    INTERNAL_TRIGGER_3,
    TI1_EDGE_DETECTOR,
    FILTERED_TIMER_INPUT_1,
    FILTERED_TIMER_INPUT_2,
    EXTERNAL_TRIGGER_INPUT
} TRIGGER_SELECTION_T ;


#define READ_TIMER_TRIGGER_SELECTION() \
   ((READ_REGISTER_USHORT(0x40021008) & TRIGGER_SELECTION_MASK)  >> TRIGGER_SELECTION_START_BIT)

#define WRITE_TIMER_TRIGGER_SELECTION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ TRIGGER_SELECTION_MASK) | ((val << TRIGGER_SELECTION_START_BIT) & TRIGGER_SELECTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define MASTER_SLAVE_MODE_MASK 0x80U
#define MASTER_SLAVE_MODE_OFFSET 7
#define MASTER_SLAVE_MODE_STOP_BIT 7
#define MASTER_SLAVE_MODE_START_BIT 7
#define MASTER_SLAVE_MODE_WIDTH 1



typedef enum MasterSlaveMode {
    NO_ACTION,
    SYNCHRONISE_MASTER_AND_SLAVE
} MASTER_SLAVE_MODE_T ;
#define WRITE_TIMER_MASTER_SLAVE_MODE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ MASTER_SLAVE_MODE_MASK) | ((val << MASTER_SLAVE_MODE_START_BIT) & MASTER_SLAVE_MODE_MASK )); \
   } 

#define ENABLE_TIMER_MASTER_SLAVE_MODE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  MASTER_SLAVE_MODE_MASK ); \
   }

#define DISABLE_TIMER_MASTER_SLAVE_MODE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~MASTER_SLAVE_MODE_MASK ); \
   } 

#define READ_TIMER_MASTER_SLAVE_MODE() \
   ((READ_REGISTER_USHORT(0x40021008) & MASTER_SLAVE_MODE_MASK)  >> MASTER_SLAVE_MODE_START_BIT)

#define WHEN_TIMER_MASTER_SLAVE_MODE_HIGH(x) \
     if ( READ_TIMER_MASTER_SLAVE_MODE() )


#define UNLESS_TIMER_MASTER_SLAVE_MODE_HIGH() \
     if (! READ_TIMER_MASTER_SLAVE_MODE() )


#define WAIT_TIMER_MASTER_SLAVE_MODE_LOW() \
    while ( READ_TIMER_MASTER_SLAVE_MODE() );


#define WAIT_TIMER_MASTER_SLAVE_MODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_MASTER_SLAVE_MODE() && (--___t___ > 0)); }


#define WAIT_TIMER_MASTER_SLAVE_MODE_HIGH() \
    while (! READ_TIMER_MASTER_SLAVE_MODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_FILTER_MASK 0xF00U
#define TRIGGER_FILTER_OFFSET 11
#define TRIGGER_FILTER_STOP_BIT 11
#define TRIGGER_FILTER_START_BIT 8
#define TRIGGER_FILTER_WIDTH 4


#define READ_TIMER_TRIGGER_FILTER() \
   ((READ_REGISTER_USHORT(0x40021008) & TRIGGER_FILTER_MASK)  >> TRIGGER_FILTER_START_BIT)

#define WRITE_TIMER_TRIGGER_FILTER(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ TRIGGER_FILTER_MASK) | ((val << TRIGGER_FILTER_START_BIT) & TRIGGER_FILTER_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_PRESCALER_MASK 0x3000U
#define TRIGGER_PRESCALER_OFFSET 13
#define TRIGGER_PRESCALER_STOP_BIT 13
#define TRIGGER_PRESCALER_START_BIT 12
#define TRIGGER_PRESCALER_WIDTH 2


typedef enum TriggerPrescaler {
    PRESCALER_OFF,
    FREQUENCY_DIVIDED_BY_2,
    FREQUENCY_DIVIDED_BY_4,
    FREQUENCY_DIVIDED_BY_8
} TRIGGER_PRESCALER_T ;


#define READ_TIMER_TRIGGER_PRESCALER() \
   ((READ_REGISTER_USHORT(0x40021008) & TRIGGER_PRESCALER_MASK)  >> TRIGGER_PRESCALER_START_BIT)

#define WRITE_TIMER_TRIGGER_PRESCALER(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ TRIGGER_PRESCALER_MASK) | ((val << TRIGGER_PRESCALER_START_BIT) & TRIGGER_PRESCALER_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////
#define EXTERNAL CLOCK_MASK 0x4000U
#define EXTERNAL CLOCK_OFFSET 14
#define EXTERNAL CLOCK_STOP_BIT 14
#define EXTERNAL CLOCK_START_BIT 14
#define EXTERNAL CLOCK_WIDTH 1



typedef enum External clock {
    EXTERNAL_CLOCK_DISABLE,
    EXTERNAL_CLOCK_ENABLE
} EXTERNAL CLOCK_T ;
#define WRITE_TIMER_EXTERNAL CLOCK(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ EXTERNAL CLOCK_MASK) | ((val << EXTERNAL CLOCK_START_BIT) & EXTERNAL CLOCK_MASK )); \
   } 

#define ENABLE_TIMER_EXTERNAL CLOCK() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  EXTERNAL CLOCK_MASK ); \
   }

#define DISABLE_TIMER_EXTERNAL CLOCK() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~EXTERNAL CLOCK_MASK ); \
   } 

#define READ_TIMER_EXTERNAL CLOCK() \
   ((READ_REGISTER_USHORT(0x40021008) & EXTERNAL CLOCK_MASK)  >> EXTERNAL CLOCK_START_BIT)

#define WHEN_TIMER_EXTERNAL CLOCK_HIGH(x) \
     if ( READ_TIMER_EXTERNAL CLOCK() )


#define UNLESS_TIMER_EXTERNAL CLOCK_HIGH() \
     if (! READ_TIMER_EXTERNAL CLOCK() )


#define WAIT_TIMER_EXTERNAL CLOCK_LOW() \
    while ( READ_TIMER_EXTERNAL CLOCK() );


#define WAIT_TIMER_EXTERNAL CLOCK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_EXTERNAL CLOCK() && (--___t___ > 0)); }


#define WAIT_TIMER_EXTERNAL CLOCK_HIGH() \
    while (! READ_TIMER_EXTERNAL CLOCK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerSlaveModeControl
//
// Return the value of register TIMER_SLAVE_MODE_CONTROL
//
// Notes : Register TIM slave mode control register (TIMx_CR2) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_POLARITY_MASK 0x8000U
#define TRIGGER_POLARITY_OFFSET 15
#define TRIGGER_POLARITY_STOP_BIT 15
#define TRIGGER_POLARITY_START_BIT 15
#define TRIGGER_POLARITY_WIDTH 1



typedef enum TriggerPolarity {
    ETR_NON_INVERTED,
    ETR_INVERTED
} TRIGGER_POLARITY_T ;
#define WRITE_TIMER_TRIGGER_POLARITY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ TRIGGER_POLARITY_MASK) | ((val << TRIGGER_POLARITY_START_BIT) & TRIGGER_POLARITY_MASK )); \
   } 

#define ENABLE_TIMER_TRIGGER_POLARITY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  TRIGGER_POLARITY_MASK ); \
   }

#define DISABLE_TIMER_TRIGGER_POLARITY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~TRIGGER_POLARITY_MASK ); \
   } 

#define READ_TIMER_TRIGGER_POLARITY() \
   ((READ_REGISTER_USHORT(0x40021008) & TRIGGER_POLARITY_MASK)  >> TRIGGER_POLARITY_START_BIT)

#define WHEN_TIMER_TRIGGER_POLARITY_HIGH(x) \
     if ( READ_TIMER_TRIGGER_POLARITY() )


#define UNLESS_TIMER_TRIGGER_POLARITY_HIGH() \
     if (! READ_TIMER_TRIGGER_POLARITY() )


#define WAIT_TIMER_TRIGGER_POLARITY_LOW() \
    while ( READ_TIMER_TRIGGER_POLARITY() );


#define WAIT_TIMER_TRIGGER_POLARITY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_TRIGGER_POLARITY() && (--___t___ > 0)); }


#define WAIT_TIMER_TRIGGER_POLARITY_HIGH() \
    while (! READ_TIMER_TRIGGER_POLARITY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_DMA_INTERRUPT( y) \
     WRITE_REGISTER_USHORT( 0x4002100C , y)

#define SET_BITS_TIMER_TIMER_DMA_INTERRUPT(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_DMA_INTERRUPT(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_DMA_INTERRUPT() \
     READ_REGISTER_USHORT(0x4002100C)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define UPDATE_INTERRUPT_MASK 0x1U
#define UPDATE_INTERRUPT_OFFSET 0
#define UPDATE_INTERRUPT_STOP_BIT 0
#define UPDATE_INTERRUPT_START_BIT 0
#define UPDATE_INTERRUPT_WIDTH 1


#define TIMER_TIMER_DMA_INTERRUPT_REG 0xC

typedef enum UpdateInterrupt {
    UPDATE_INTERRUPT_DISABLE,
    UPDATE_INTERRUPT_ENABLE
} UPDATE_INTERRUPT_T ;
#define WRITE_TIMER_UPDATE_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ UPDATE_INTERRUPT_MASK) | ((val << UPDATE_INTERRUPT_START_BIT) & UPDATE_INTERRUPT_MASK )); \
   } 

#define ENABLE_TIMER_UPDATE_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  UPDATE_INTERRUPT_MASK ); \
   }

#define DISABLE_TIMER_UPDATE_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~UPDATE_INTERRUPT_MASK ); \
   } 

#define READ_TIMER_UPDATE_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x4002100C) & UPDATE_INTERRUPT_MASK)  >> UPDATE_INTERRUPT_START_BIT)

#define WHEN_TIMER_UPDATE_INTERRUPT_HIGH(x) \
     if ( READ_TIMER_UPDATE_INTERRUPT() )


#define UNLESS_TIMER_UPDATE_INTERRUPT_HIGH() \
     if (! READ_TIMER_UPDATE_INTERRUPT() )


#define WAIT_TIMER_UPDATE_INTERRUPT_LOW() \
    while ( READ_TIMER_UPDATE_INTERRUPT() );


#define WAIT_TIMER_UPDATE_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_UPDATE_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_TIMER_UPDATE_INTERRUPT_HIGH() \
    while (! READ_TIMER_UPDATE_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE1_INTERRUPT_MASK 0x2U
#define CAPTURE_COMPARE1_INTERRUPT_OFFSET 1
#define CAPTURE_COMPARE1_INTERRUPT_STOP_BIT 1
#define CAPTURE_COMPARE1_INTERRUPT_START_BIT 1
#define CAPTURE_COMPARE1_INTERRUPT_WIDTH 1



typedef enum CaptureCompare1Interrupt {
    CAPTURE_COMPARE_1_INTERRUPT_DISABLE,
    CAPTURE_COMPARE_1_INTERRUPT_ENABLE
} CAPTURE_COMPARE_1_INTERRUPT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE1_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE1_INTERRUPT_MASK) | ((val << CAPTURE_COMPARE1_INTERRUPT_START_BIT) & CAPTURE_COMPARE1_INTERRUPT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE1_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE1_INTERRUPT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE1_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE1_INTERRUPT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE1_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE1_INTERRUPT_MASK)  >> CAPTURE_COMPARE1_INTERRUPT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE1_INTERRUPT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT() )


#define UNLESS_TIMER_CAPTURE_COMPARE1_INTERRUPT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE1_INTERRUPT() )


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT() );


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE1_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE2_INTERRUPT_MASK 0x4U
#define CAPTURE_COMPARE2_INTERRUPT_OFFSET 2
#define CAPTURE_COMPARE2_INTERRUPT_STOP_BIT 2
#define CAPTURE_COMPARE2_INTERRUPT_START_BIT 2
#define CAPTURE_COMPARE2_INTERRUPT_WIDTH 1



typedef enum CaptureCompare2Interrupt {
    CAPTURE_COMPARE_2_INTERRUPT_DISABLE,
    CAPTURE_COMPARE_2_INTERRUPT_ENABLE
} CAPTURE_COMPARE_2_INTERRUPT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE2_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE2_INTERRUPT_MASK) | ((val << CAPTURE_COMPARE2_INTERRUPT_START_BIT) & CAPTURE_COMPARE2_INTERRUPT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE2_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE2_INTERRUPT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE2_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE2_INTERRUPT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE2_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE2_INTERRUPT_MASK)  >> CAPTURE_COMPARE2_INTERRUPT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE2_INTERRUPT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT() )


#define UNLESS_TIMER_CAPTURE_COMPARE2_INTERRUPT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE2_INTERRUPT() )


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT() );


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE2_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE3_INTERRUPT_MASK 0x8U
#define CAPTURE_COMPARE3_INTERRUPT_OFFSET 3
#define CAPTURE_COMPARE3_INTERRUPT_STOP_BIT 3
#define CAPTURE_COMPARE3_INTERRUPT_START_BIT 3
#define CAPTURE_COMPARE3_INTERRUPT_WIDTH 1



typedef enum CaptureCompare3Interrupt {
    CAPTURE_COMPARE_3_INTERRUPT_DISABLE,
    CAPTURE_COMPARE_3_INTERRUPT_ENABLE
} CAPTURE_COMPARE_3_INTERRUPT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE3_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE3_INTERRUPT_MASK) | ((val << CAPTURE_COMPARE3_INTERRUPT_START_BIT) & CAPTURE_COMPARE3_INTERRUPT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE3_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE3_INTERRUPT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE3_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE3_INTERRUPT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE3_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE3_INTERRUPT_MASK)  >> CAPTURE_COMPARE3_INTERRUPT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE3_INTERRUPT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT() )


#define UNLESS_TIMER_CAPTURE_COMPARE3_INTERRUPT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE3_INTERRUPT() )


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT() );


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE3_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE4_INTERRUPT_MASK 0x10U
#define CAPTURE_COMPARE4_INTERRUPT_OFFSET 4
#define CAPTURE_COMPARE4_INTERRUPT_STOP_BIT 4
#define CAPTURE_COMPARE4_INTERRUPT_START_BIT 4
#define CAPTURE_COMPARE4_INTERRUPT_WIDTH 1



typedef enum CaptureCompare4Interrupt {
    CAPTURE_COMPARE_4_INTERRUPT_DISABLE,
    CAPTURE_COMPARE_4_INTERRUPT_ENABLE
} CAPTURE_COMPARE_4_INTERRUPT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE4_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE4_INTERRUPT_MASK) | ((val << CAPTURE_COMPARE4_INTERRUPT_START_BIT) & CAPTURE_COMPARE4_INTERRUPT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE4_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE4_INTERRUPT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE4_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE4_INTERRUPT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE4_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE4_INTERRUPT_MASK)  >> CAPTURE_COMPARE4_INTERRUPT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE4_INTERRUPT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT() )


#define UNLESS_TIMER_CAPTURE_COMPARE4_INTERRUPT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE4_INTERRUPT() )


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT() );


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE4_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_INTERRUPT_MASK 0x40U
#define TRIGGER_INTERRUPT_OFFSET 6
#define TRIGGER_INTERRUPT_STOP_BIT 6
#define TRIGGER_INTERRUPT_START_BIT 6
#define TRIGGER_INTERRUPT_WIDTH 1



typedef enum TriggerInterrupt {
    TRIGGER_INTERRUPT_DISABLE,
    TRIGGER_INTERRUPT_ENABLE
} TRIGGER_INTERRUPT_T ;
#define WRITE_TIMER_TRIGGER_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ TRIGGER_INTERRUPT_MASK) | ((val << TRIGGER_INTERRUPT_START_BIT) & TRIGGER_INTERRUPT_MASK )); \
   } 

#define ENABLE_TIMER_TRIGGER_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  TRIGGER_INTERRUPT_MASK ); \
   }

#define DISABLE_TIMER_TRIGGER_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~TRIGGER_INTERRUPT_MASK ); \
   } 

#define READ_TIMER_TRIGGER_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x4002100C) & TRIGGER_INTERRUPT_MASK)  >> TRIGGER_INTERRUPT_START_BIT)

#define WHEN_TIMER_TRIGGER_INTERRUPT_HIGH(x) \
     if ( READ_TIMER_TRIGGER_INTERRUPT() )


#define UNLESS_TIMER_TRIGGER_INTERRUPT_HIGH() \
     if (! READ_TIMER_TRIGGER_INTERRUPT() )


#define WAIT_TIMER_TRIGGER_INTERRUPT_LOW() \
    while ( READ_TIMER_TRIGGER_INTERRUPT() );


#define WAIT_TIMER_TRIGGER_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_TRIGGER_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_TIMER_TRIGGER_INTERRUPT_HIGH() \
    while (! READ_TIMER_TRIGGER_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////
#define UPDATE_DMA_REQUEST_MASK 0x100U
#define UPDATE_DMA_REQUEST_OFFSET 8
#define UPDATE_DMA_REQUEST_STOP_BIT 8
#define UPDATE_DMA_REQUEST_START_BIT 8
#define UPDATE_DMA_REQUEST_WIDTH 1



typedef enum UpdateDmaRequest {
    UPDATE_DMA_REQUEST_DISABLE,
    UPDATE_DMA_REQUEST_ENABLE
} UPDATE_DMA_REQUEST_T ;
#define WRITE_TIMER_UPDATE_DMA_REQUEST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ UPDATE_DMA_REQUEST_MASK) | ((val << UPDATE_DMA_REQUEST_START_BIT) & UPDATE_DMA_REQUEST_MASK )); \
   } 

#define ENABLE_TIMER_UPDATE_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  UPDATE_DMA_REQUEST_MASK ); \
   }

#define DISABLE_TIMER_UPDATE_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~UPDATE_DMA_REQUEST_MASK ); \
   } 

#define READ_TIMER_UPDATE_DMA_REQUEST() \
   ((READ_REGISTER_USHORT(0x4002100C) & UPDATE_DMA_REQUEST_MASK)  >> UPDATE_DMA_REQUEST_START_BIT)

#define WHEN_TIMER_UPDATE_DMA_REQUEST_HIGH(x) \
     if ( READ_TIMER_UPDATE_DMA_REQUEST() )


#define UNLESS_TIMER_UPDATE_DMA_REQUEST_HIGH() \
     if (! READ_TIMER_UPDATE_DMA_REQUEST() )


#define WAIT_TIMER_UPDATE_DMA_REQUEST_LOW() \
    while ( READ_TIMER_UPDATE_DMA_REQUEST() );


#define WAIT_TIMER_UPDATE_DMA_REQUEST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_UPDATE_DMA_REQUEST() && (--___t___ > 0)); }


#define WAIT_TIMER_UPDATE_DMA_REQUEST_HIGH() \
    while (! READ_TIMER_UPDATE_DMA_REQUEST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE1_DMA_REQUEST_MASK 0x200U
#define CAPTURE_COMPARE1_DMA_REQUEST_OFFSET 9
#define CAPTURE_COMPARE1_DMA_REQUEST_STOP_BIT 9
#define CAPTURE_COMPARE1_DMA_REQUEST_START_BIT 9
#define CAPTURE_COMPARE1_DMA_REQUEST_WIDTH 1



typedef enum CaptureCompare1DmaRequest {
    CAPTURE_COMPARE_1_DMA_REQUEST_DISABLE,
    CAPTURE_COMPARE_1_DMA_REQUEST_ENABLE
} CAPTURE_COMPARE_1_DMA_REQUEST_T ;
#define WRITE_TIMER_CAPTURE_COMPARE1_DMA_REQUEST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE1_DMA_REQUEST_MASK) | ((val << CAPTURE_COMPARE1_DMA_REQUEST_START_BIT) & CAPTURE_COMPARE1_DMA_REQUEST_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE1_DMA_REQUEST_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE1_DMA_REQUEST_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE1_DMA_REQUEST_MASK)  >> CAPTURE_COMPARE1_DMA_REQUEST_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE1_DMA_REQUEST_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() )


#define UNLESS_TIMER_CAPTURE_COMPARE1_DMA_REQUEST_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() )


#define WAIT_TIMER_CAPTURE_COMPARE1_DMA_REQUEST_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() );


#define WAIT_TIMER_CAPTURE_COMPARE1_DMA_REQUEST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE1_DMA_REQUEST_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE1_DMA_REQUEST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE2_DMA_REQUEST_MASK 0x400U
#define CAPTURE_COMPARE2_DMA_REQUEST_OFFSET 10
#define CAPTURE_COMPARE2_DMA_REQUEST_STOP_BIT 10
#define CAPTURE_COMPARE2_DMA_REQUEST_START_BIT 10
#define CAPTURE_COMPARE2_DMA_REQUEST_WIDTH 1



typedef enum CaptureCompare2DmaRequest {
    CAPTURE_COMPARE_2_DMA_REQUEST_DISABLE,
    CAPTURE_COMPARE_2_DMA_REQUEST_ENABLE
} CAPTURE_COMPARE_2_DMA_REQUEST_T ;
#define WRITE_TIMER_CAPTURE_COMPARE2_DMA_REQUEST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE2_DMA_REQUEST_MASK) | ((val << CAPTURE_COMPARE2_DMA_REQUEST_START_BIT) & CAPTURE_COMPARE2_DMA_REQUEST_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE2_DMA_REQUEST_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE2_DMA_REQUEST_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE2_DMA_REQUEST_MASK)  >> CAPTURE_COMPARE2_DMA_REQUEST_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE2_DMA_REQUEST_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() )


#define UNLESS_TIMER_CAPTURE_COMPARE2_DMA_REQUEST_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() )


#define WAIT_TIMER_CAPTURE_COMPARE2_DMA_REQUEST_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() );


#define WAIT_TIMER_CAPTURE_COMPARE2_DMA_REQUEST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE2_DMA_REQUEST_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE2_DMA_REQUEST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE3_DMA_REQUEST_MASK 0x800U
#define CAPTURE_COMPARE3_DMA_REQUEST_OFFSET 11
#define CAPTURE_COMPARE3_DMA_REQUEST_STOP_BIT 11
#define CAPTURE_COMPARE3_DMA_REQUEST_START_BIT 11
#define CAPTURE_COMPARE3_DMA_REQUEST_WIDTH 1



typedef enum CaptureCompare3DmaRequest {
    CAPTURE_COMPARE_3_DMA_REQUEST_DISABLE,
    CAPTURE_COMPARE_3_DMA_REQUEST_ENABLE
} CAPTURE_COMPARE_3_DMA_REQUEST_T ;
#define WRITE_TIMER_CAPTURE_COMPARE3_DMA_REQUEST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE3_DMA_REQUEST_MASK) | ((val << CAPTURE_COMPARE3_DMA_REQUEST_START_BIT) & CAPTURE_COMPARE3_DMA_REQUEST_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE3_DMA_REQUEST_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE3_DMA_REQUEST_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE3_DMA_REQUEST_MASK)  >> CAPTURE_COMPARE3_DMA_REQUEST_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE3_DMA_REQUEST_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() )


#define UNLESS_TIMER_CAPTURE_COMPARE3_DMA_REQUEST_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() )


#define WAIT_TIMER_CAPTURE_COMPARE3_DMA_REQUEST_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() );


#define WAIT_TIMER_CAPTURE_COMPARE3_DMA_REQUEST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE3_DMA_REQUEST_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE3_DMA_REQUEST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE4_DMA_REQUEST_MASK 0x1000U
#define CAPTURE_COMPARE4_DMA_REQUEST_OFFSET 12
#define CAPTURE_COMPARE4_DMA_REQUEST_STOP_BIT 12
#define CAPTURE_COMPARE4_DMA_REQUEST_START_BIT 12
#define CAPTURE_COMPARE4_DMA_REQUEST_WIDTH 1



typedef enum CaptureCompare4DmaRequest {
    CAPTURE_COMPARE_4_DMA_REQUEST_DISABLE,
    CAPTURE_COMPARE_4_DMA_REQUEST_ENABLE
} CAPTURE_COMPARE_4_DMA_REQUEST_T ;
#define WRITE_TIMER_CAPTURE_COMPARE4_DMA_REQUEST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ CAPTURE_COMPARE4_DMA_REQUEST_MASK) | ((val << CAPTURE_COMPARE4_DMA_REQUEST_START_BIT) & CAPTURE_COMPARE4_DMA_REQUEST_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  CAPTURE_COMPARE4_DMA_REQUEST_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~CAPTURE_COMPARE4_DMA_REQUEST_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() \
   ((READ_REGISTER_USHORT(0x4002100C) & CAPTURE_COMPARE4_DMA_REQUEST_MASK)  >> CAPTURE_COMPARE4_DMA_REQUEST_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE4_DMA_REQUEST_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() )


#define UNLESS_TIMER_CAPTURE_COMPARE4_DMA_REQUEST_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() )


#define WAIT_TIMER_CAPTURE_COMPARE4_DMA_REQUEST_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() );


#define WAIT_TIMER_CAPTURE_COMPARE4_DMA_REQUEST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE4_DMA_REQUEST_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE4_DMA_REQUEST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaInterrupt
//
// Return the value of register TIMER_DMA_INTERRUPT
//
// Notes : Register TIM DMA/interrupt enable register (TIMx_DIER) at the offset 0xC, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_DMA_REQUEST_MASK 0x4000U
#define TRIGGER_DMA_REQUEST_OFFSET 14
#define TRIGGER_DMA_REQUEST_STOP_BIT 14
#define TRIGGER_DMA_REQUEST_START_BIT 14
#define TRIGGER_DMA_REQUEST_WIDTH 1



typedef enum TriggerDmaRequest {
    TRIGGER_DMA_REQUEST_DISABLE,
    TRIGGER_DMA_REQUEST_ENABLE
} TRIGGER_DMA_REQUEST_T ;
#define WRITE_TIMER_TRIGGER_DMA_REQUEST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, (OldValue & ~ TRIGGER_DMA_REQUEST_MASK) | ((val << TRIGGER_DMA_REQUEST_START_BIT) & TRIGGER_DMA_REQUEST_MASK )); \
   } 

#define ENABLE_TIMER_TRIGGER_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  TRIGGER_DMA_REQUEST_MASK ); \
   }

#define DISABLE_TIMER_TRIGGER_DMA_REQUEST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT(0x4002100C, val & ~TRIGGER_DMA_REQUEST_MASK ); \
   } 

#define READ_TIMER_TRIGGER_DMA_REQUEST() \
   ((READ_REGISTER_USHORT(0x4002100C) & TRIGGER_DMA_REQUEST_MASK)  >> TRIGGER_DMA_REQUEST_START_BIT)

#define WHEN_TIMER_TRIGGER_DMA_REQUEST_HIGH(x) \
     if ( READ_TIMER_TRIGGER_DMA_REQUEST() )


#define UNLESS_TIMER_TRIGGER_DMA_REQUEST_HIGH() \
     if (! READ_TIMER_TRIGGER_DMA_REQUEST() )


#define WAIT_TIMER_TRIGGER_DMA_REQUEST_LOW() \
    while ( READ_TIMER_TRIGGER_DMA_REQUEST() );


#define WAIT_TIMER_TRIGGER_DMA_REQUEST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_TRIGGER_DMA_REQUEST() && (--___t___ > 0)); }


#define WAIT_TIMER_TRIGGER_DMA_REQUEST_HIGH() \
    while (! READ_TIMER_TRIGGER_DMA_REQUEST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_STATUS( y) \
     WRITE_REGISTER_USHORT( 0x40021010 , y)

#define SET_BITS_TIMER_TIMER_STATUS(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_STATUS(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_STATUS() \
     READ_REGISTER_USHORT(0x40021010)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define UPDATE_INTERRUPT_FLAG_MASK 0x1U
#define UPDATE_INTERRUPT_FLAG_OFFSET 0
#define UPDATE_INTERRUPT_FLAG_STOP_BIT 0
#define UPDATE_INTERRUPT_FLAG_START_BIT 0
#define UPDATE_INTERRUPT_FLAG_WIDTH 1


#define TIMER_TIMER_STATUS_REG 0x10

typedef enum UpdateInterruptFlag {
    NO_EVENT_OCCURRED,
    INTERRUPT_PENDING
} UPDATE_INTERRUPT_FLAG_T ;
#define WRITE_TIMER_UPDATE_INTERRUPT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ UPDATE_INTERRUPT_FLAG_MASK) | ((val << UPDATE_INTERRUPT_FLAG_START_BIT) & UPDATE_INTERRUPT_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_UPDATE_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  UPDATE_INTERRUPT_FLAG_MASK ); \
   }

#define DISABLE_TIMER_UPDATE_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~UPDATE_INTERRUPT_FLAG_MASK ); \
   } 

#define READ_TIMER_UPDATE_INTERRUPT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & UPDATE_INTERRUPT_FLAG_MASK)  >> UPDATE_INTERRUPT_FLAG_START_BIT)

#define WHEN_TIMER_UPDATE_INTERRUPT_FLAG_HIGH(x) \
     if ( READ_TIMER_UPDATE_INTERRUPT_FLAG() )


#define UNLESS_TIMER_UPDATE_INTERRUPT_FLAG_HIGH() \
     if (! READ_TIMER_UPDATE_INTERRUPT_FLAG() )


#define WAIT_TIMER_UPDATE_INTERRUPT_FLAG_LOW() \
    while ( READ_TIMER_UPDATE_INTERRUPT_FLAG() );


#define WAIT_TIMER_UPDATE_INTERRUPT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_UPDATE_INTERRUPT_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_UPDATE_INTERRUPT_FLAG_HIGH() \
    while (! READ_TIMER_UPDATE_INTERRUPT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE1_INTERRUPT_FLAG_MASK 0x2U
#define CAPTURE_COMPARE1_INTERRUPT_FLAG_OFFSET 1
#define CAPTURE_COMPARE1_INTERRUPT_FLAG_STOP_BIT 1
#define CAPTURE_COMPARE1_INTERRUPT_FLAG_START_BIT 1
#define CAPTURE_COMPARE1_INTERRUPT_FLAG_WIDTH 1



typedef enum CaptureCompare1InterruptFlag {
    NO_EVENT_OCCURRED,
    INTERRUPT_PENDING
} CAPTURE_COMPARE_1_INTERRUPT_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE1_INTERRUPT_FLAG_MASK) | ((val << CAPTURE_COMPARE1_INTERRUPT_FLAG_START_BIT) & CAPTURE_COMPARE1_INTERRUPT_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE1_INTERRUPT_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE1_INTERRUPT_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE1_INTERRUPT_FLAG_MASK)  >> CAPTURE_COMPARE1_INTERRUPT_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE2_INTERRUPT_FLAG_MASK 0x4U
#define CAPTURE_COMPARE2_INTERRUPT_FLAG_OFFSET 2
#define CAPTURE_COMPARE2_INTERRUPT_FLAG_STOP_BIT 2
#define CAPTURE_COMPARE2_INTERRUPT_FLAG_START_BIT 2
#define CAPTURE_COMPARE2_INTERRUPT_FLAG_WIDTH 1



typedef enum CaptureCompare2InterruptFlag {
    NO_EVENT_OCCURRED,
    INTERRUPT_PENDING
} CAPTURE_COMPARE_2_INTERRUPT_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE2_INTERRUPT_FLAG_MASK) | ((val << CAPTURE_COMPARE2_INTERRUPT_FLAG_START_BIT) & CAPTURE_COMPARE2_INTERRUPT_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE2_INTERRUPT_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE2_INTERRUPT_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE2_INTERRUPT_FLAG_MASK)  >> CAPTURE_COMPARE2_INTERRUPT_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE3_INTERRUPT_FLAG_MASK 0x8U
#define CAPTURE_COMPARE3_INTERRUPT_FLAG_OFFSET 3
#define CAPTURE_COMPARE3_INTERRUPT_FLAG_STOP_BIT 3
#define CAPTURE_COMPARE3_INTERRUPT_FLAG_START_BIT 3
#define CAPTURE_COMPARE3_INTERRUPT_FLAG_WIDTH 1



typedef enum CaptureCompare3InterruptFlag {
    NO_EVENT_OCCURRED,
    INTERRUPT_PENDING
} CAPTURE_COMPARE_3_INTERRUPT_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE3_INTERRUPT_FLAG_MASK) | ((val << CAPTURE_COMPARE3_INTERRUPT_FLAG_START_BIT) & CAPTURE_COMPARE3_INTERRUPT_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE3_INTERRUPT_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE3_INTERRUPT_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE3_INTERRUPT_FLAG_MASK)  >> CAPTURE_COMPARE3_INTERRUPT_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE4_INTERRUPT_FLAG_MASK 0x10U
#define CAPTURE_COMPARE4_INTERRUPT_FLAG_OFFSET 4
#define CAPTURE_COMPARE4_INTERRUPT_FLAG_STOP_BIT 4
#define CAPTURE_COMPARE4_INTERRUPT_FLAG_START_BIT 4
#define CAPTURE_COMPARE4_INTERRUPT_FLAG_WIDTH 1



typedef enum CaptureCompare4InterruptFlag {
    NO_EVENT_OCCURRED,
    INTERRUPT_PENDING
} CAPTURE_COMPARE_4_INTERRUPT_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE4_INTERRUPT_FLAG_MASK) | ((val << CAPTURE_COMPARE4_INTERRUPT_FLAG_START_BIT) & CAPTURE_COMPARE4_INTERRUPT_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE4_INTERRUPT_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE4_INTERRUPT_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE4_INTERRUPT_FLAG_MASK)  >> CAPTURE_COMPARE4_INTERRUPT_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_INTERRUPT_FLAG_MASK 0x40U
#define TRIGGER_INTERRUPT_FLAG_OFFSET 6
#define TRIGGER_INTERRUPT_FLAG_STOP_BIT 6
#define TRIGGER_INTERRUPT_FLAG_START_BIT 6
#define TRIGGER_INTERRUPT_FLAG_WIDTH 1



typedef enum TriggerInterruptFlag {
    NO_EVENT_OCCURRED,
    INTERRUPT_PENDING
} TRIGGER_INTERRUPT_FLAG_T ;
#define WRITE_TIMER_TRIGGER_INTERRUPT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ TRIGGER_INTERRUPT_FLAG_MASK) | ((val << TRIGGER_INTERRUPT_FLAG_START_BIT) & TRIGGER_INTERRUPT_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_TRIGGER_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  TRIGGER_INTERRUPT_FLAG_MASK ); \
   }

#define DISABLE_TIMER_TRIGGER_INTERRUPT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~TRIGGER_INTERRUPT_FLAG_MASK ); \
   } 

#define READ_TIMER_TRIGGER_INTERRUPT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & TRIGGER_INTERRUPT_FLAG_MASK)  >> TRIGGER_INTERRUPT_FLAG_START_BIT)

#define WHEN_TIMER_TRIGGER_INTERRUPT_FLAG_HIGH(x) \
     if ( READ_TIMER_TRIGGER_INTERRUPT_FLAG() )


#define UNLESS_TIMER_TRIGGER_INTERRUPT_FLAG_HIGH() \
     if (! READ_TIMER_TRIGGER_INTERRUPT_FLAG() )


#define WAIT_TIMER_TRIGGER_INTERRUPT_FLAG_LOW() \
    while ( READ_TIMER_TRIGGER_INTERRUPT_FLAG() );


#define WAIT_TIMER_TRIGGER_INTERRUPT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_TRIGGER_INTERRUPT_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_TRIGGER_INTERRUPT_FLAG_HIGH() \
    while (! READ_TIMER_TRIGGER_INTERRUPT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE1_OVER_FLAG_MASK 0x200U
#define CAPTURE_COMPARE1_OVER_FLAG_OFFSET 9
#define CAPTURE_COMPARE1_OVER_FLAG_STOP_BIT 9
#define CAPTURE_COMPARE1_OVER_FLAG_START_BIT 9
#define CAPTURE_COMPARE1_OVER_FLAG_WIDTH 1



typedef enum CaptureCompare1OverFlag {
    NOTHING,
    OVERCAPTURE
} CAPTURE_COMPARE_1_OVER_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE1_OVER_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE1_OVER_FLAG_MASK) | ((val << CAPTURE_COMPARE1_OVER_FLAG_START_BIT) & CAPTURE_COMPARE1_OVER_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE1_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE1_OVER_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE1_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE1_OVER_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE1_OVER_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE1_OVER_FLAG_MASK)  >> CAPTURE_COMPARE1_OVER_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE1_OVER_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE1_OVER_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE1_OVER_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE1_OVER_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE1_OVER_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE1_OVER_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE1_OVER_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE1_OVER_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE1_OVER_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE1_OVER_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE2_OVER_FLAG_MASK 0x400U
#define CAPTURE_COMPARE2_OVER_FLAG_OFFSET 10
#define CAPTURE_COMPARE2_OVER_FLAG_STOP_BIT 10
#define CAPTURE_COMPARE2_OVER_FLAG_START_BIT 10
#define CAPTURE_COMPARE2_OVER_FLAG_WIDTH 1



typedef enum CaptureCompare2OverFlag {
    NOTHING,
    OVERCAPTURE
} CAPTURE_COMPARE_2_OVER_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE2_OVER_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE2_OVER_FLAG_MASK) | ((val << CAPTURE_COMPARE2_OVER_FLAG_START_BIT) & CAPTURE_COMPARE2_OVER_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE2_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE2_OVER_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE2_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE2_OVER_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE2_OVER_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE2_OVER_FLAG_MASK)  >> CAPTURE_COMPARE2_OVER_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE2_OVER_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE2_OVER_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE2_OVER_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE2_OVER_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE2_OVER_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE2_OVER_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE2_OVER_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE2_OVER_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE2_OVER_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE2_OVER_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE3_OVER_FLAG_MASK 0x800U
#define CAPTURE_COMPARE3_OVER_FLAG_OFFSET 11
#define CAPTURE_COMPARE3_OVER_FLAG_STOP_BIT 11
#define CAPTURE_COMPARE3_OVER_FLAG_START_BIT 11
#define CAPTURE_COMPARE3_OVER_FLAG_WIDTH 1



typedef enum CaptureCompare3OverFlag {
    NOTHING,
    OVERCAPTURE
} CAPTURE_COMPARE_3_OVER_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE3_OVER_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE3_OVER_FLAG_MASK) | ((val << CAPTURE_COMPARE3_OVER_FLAG_START_BIT) & CAPTURE_COMPARE3_OVER_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE3_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE3_OVER_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE3_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE3_OVER_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE3_OVER_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE3_OVER_FLAG_MASK)  >> CAPTURE_COMPARE3_OVER_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE3_OVER_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE3_OVER_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE3_OVER_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE3_OVER_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE3_OVER_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE3_OVER_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE3_OVER_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE3_OVER_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE3_OVER_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE3_OVER_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerStatus
//
// Return the value of register TIMER_STATUS
//
// Notes : Register TIM status register (TIMx_SR) at the offset 0x10, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE4_OVER_FLAG_MASK 0x1000U
#define CAPTURE_COMPARE4_OVER_FLAG_OFFSET 12
#define CAPTURE_COMPARE4_OVER_FLAG_STOP_BIT 12
#define CAPTURE_COMPARE4_OVER_FLAG_START_BIT 12
#define CAPTURE_COMPARE4_OVER_FLAG_WIDTH 1



typedef enum CaptureCompare4OverFlag {
    NOTHING,
    OVERCAPTURE
} CAPTURE_COMPARE_4_OVER_FLAG_T ;
#define WRITE_TIMER_CAPTURE_COMPARE4_OVER_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ CAPTURE_COMPARE4_OVER_FLAG_MASK) | ((val << CAPTURE_COMPARE4_OVER_FLAG_START_BIT) & CAPTURE_COMPARE4_OVER_FLAG_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE4_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  CAPTURE_COMPARE4_OVER_FLAG_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE4_OVER_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, val & ~CAPTURE_COMPARE4_OVER_FLAG_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE4_OVER_FLAG() \
   ((READ_REGISTER_USHORT(0x40021010) & CAPTURE_COMPARE4_OVER_FLAG_MASK)  >> CAPTURE_COMPARE4_OVER_FLAG_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE4_OVER_FLAG_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE4_OVER_FLAG() )


#define UNLESS_TIMER_CAPTURE_COMPARE4_OVER_FLAG_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE4_OVER_FLAG() )


#define WAIT_TIMER_CAPTURE_COMPARE4_OVER_FLAG_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE4_OVER_FLAG() );


#define WAIT_TIMER_CAPTURE_COMPARE4_OVER_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE4_OVER_FLAG() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE4_OVER_FLAG_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE4_OVER_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_EVENT( y) \
     WRITE_REGISTER_USHORT( 0x40021014 , y)

#define SET_BITS_TIMER_TIMER_EVENT(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_EVENT(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_EVENT() \
     READ_REGISTER_USHORT(0x40021014)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register (TIMx_EGSR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define UPDATE_INTERRUPT_EVENT_MASK 0x1U
#define UPDATE_INTERRUPT_EVENT_OFFSET 0
#define UPDATE_INTERRUPT_EVENT_STOP_BIT 0
#define UPDATE_INTERRUPT_EVENT_START_BIT 0
#define UPDATE_INTERRUPT_EVENT_WIDTH 1


#define TIMER_TIMER_EVENT_REG 0x14

typedef enum UpdateInterruptEvent {
    NO_EVENT_OCCURRED,
    EVENT_GENERATION
} UPDATE_INTERRUPT_EVENT_T ;
#define WRITE_TIMER_UPDATE_INTERRUPT_EVENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, (OldValue & ~ UPDATE_INTERRUPT_EVENT_MASK) | ((val << UPDATE_INTERRUPT_EVENT_START_BIT) & UPDATE_INTERRUPT_EVENT_MASK )); \
   } 

#define ENABLE_TIMER_UPDATE_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  UPDATE_INTERRUPT_EVENT_MASK ); \
   }

#define DISABLE_TIMER_UPDATE_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, val & ~UPDATE_INTERRUPT_EVENT_MASK ); \
   } 

#define READ_TIMER_UPDATE_INTERRUPT_EVENT() \
   ((READ_REGISTER_USHORT(0x40021014) & UPDATE_INTERRUPT_EVENT_MASK)  >> UPDATE_INTERRUPT_EVENT_START_BIT)

#define WHEN_TIMER_UPDATE_INTERRUPT_EVENT_HIGH(x) \
     if ( READ_TIMER_UPDATE_INTERRUPT_EVENT() )


#define UNLESS_TIMER_UPDATE_INTERRUPT_EVENT_HIGH() \
     if (! READ_TIMER_UPDATE_INTERRUPT_EVENT() )


#define WAIT_TIMER_UPDATE_INTERRUPT_EVENT_LOW() \
    while ( READ_TIMER_UPDATE_INTERRUPT_EVENT() );


#define WAIT_TIMER_UPDATE_INTERRUPT_EVENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_UPDATE_INTERRUPT_EVENT() && (--___t___ > 0)); }


#define WAIT_TIMER_UPDATE_INTERRUPT_EVENT_HIGH() \
    while (! READ_TIMER_UPDATE_INTERRUPT_EVENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register (TIMx_EGSR) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE1_INTERRUPT_EVENT_MASK 0x2U
#define CAPTURE_COMPARE1_INTERRUPT_EVENT_OFFSET 1
#define CAPTURE_COMPARE1_INTERRUPT_EVENT_STOP_BIT 1
#define CAPTURE_COMPARE1_INTERRUPT_EVENT_START_BIT 1
#define CAPTURE_COMPARE1_INTERRUPT_EVENT_WIDTH 1



typedef enum CaptureCompare1InterruptEvent {
    NO_EVENT_OCCURRED,
    EVENT_GENERATION
} CAPTURE_COMPARE_1_INTERRUPT_EVENT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, (OldValue & ~ CAPTURE_COMPARE1_INTERRUPT_EVENT_MASK) | ((val << CAPTURE_COMPARE1_INTERRUPT_EVENT_START_BIT) & CAPTURE_COMPARE1_INTERRUPT_EVENT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  CAPTURE_COMPARE1_INTERRUPT_EVENT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, val & ~CAPTURE_COMPARE1_INTERRUPT_EVENT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() \
   ((READ_REGISTER_USHORT(0x40021014) & CAPTURE_COMPARE1_INTERRUPT_EVENT_MASK)  >> CAPTURE_COMPARE1_INTERRUPT_EVENT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() )


#define UNLESS_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() )


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() );


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE1_INTERRUPT_EVENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register (TIMx_EGSR) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE2_INTERRUPT_EVENT_MASK 0x4U
#define CAPTURE_COMPARE2_INTERRUPT_EVENT_OFFSET 2
#define CAPTURE_COMPARE2_INTERRUPT_EVENT_STOP_BIT 2
#define CAPTURE_COMPARE2_INTERRUPT_EVENT_START_BIT 2
#define CAPTURE_COMPARE2_INTERRUPT_EVENT_WIDTH 1



typedef enum CaptureCompare2InterruptEvent {
    NO_EVENT_OCCURRED,
    EVENT_GENERATION
} CAPTURE_COMPARE_2_INTERRUPT_EVENT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, (OldValue & ~ CAPTURE_COMPARE2_INTERRUPT_EVENT_MASK) | ((val << CAPTURE_COMPARE2_INTERRUPT_EVENT_START_BIT) & CAPTURE_COMPARE2_INTERRUPT_EVENT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  CAPTURE_COMPARE2_INTERRUPT_EVENT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, val & ~CAPTURE_COMPARE2_INTERRUPT_EVENT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() \
   ((READ_REGISTER_USHORT(0x40021014) & CAPTURE_COMPARE2_INTERRUPT_EVENT_MASK)  >> CAPTURE_COMPARE2_INTERRUPT_EVENT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() )


#define UNLESS_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() )


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() );


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE2_INTERRUPT_EVENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register (TIMx_EGSR) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE3_INTERRUPT_EVENT_MASK 0x8U
#define CAPTURE_COMPARE3_INTERRUPT_EVENT_OFFSET 3
#define CAPTURE_COMPARE3_INTERRUPT_EVENT_STOP_BIT 3
#define CAPTURE_COMPARE3_INTERRUPT_EVENT_START_BIT 3
#define CAPTURE_COMPARE3_INTERRUPT_EVENT_WIDTH 1



typedef enum CaptureCompare3InterruptEvent {
    NO_EVENT_OCCURRED,
    EVENT_GENERATION
} CAPTURE_COMPARE_3_INTERRUPT_EVENT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, (OldValue & ~ CAPTURE_COMPARE3_INTERRUPT_EVENT_MASK) | ((val << CAPTURE_COMPARE3_INTERRUPT_EVENT_START_BIT) & CAPTURE_COMPARE3_INTERRUPT_EVENT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  CAPTURE_COMPARE3_INTERRUPT_EVENT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, val & ~CAPTURE_COMPARE3_INTERRUPT_EVENT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() \
   ((READ_REGISTER_USHORT(0x40021014) & CAPTURE_COMPARE3_INTERRUPT_EVENT_MASK)  >> CAPTURE_COMPARE3_INTERRUPT_EVENT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() )


#define UNLESS_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() )


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() );


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE3_INTERRUPT_EVENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register (TIMx_EGSR) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////
#define CAPTURE_COMPARE4_INTERRUPT_EVENT_MASK 0x10U
#define CAPTURE_COMPARE4_INTERRUPT_EVENT_OFFSET 4
#define CAPTURE_COMPARE4_INTERRUPT_EVENT_STOP_BIT 4
#define CAPTURE_COMPARE4_INTERRUPT_EVENT_START_BIT 4
#define CAPTURE_COMPARE4_INTERRUPT_EVENT_WIDTH 1



typedef enum CaptureCompare4InterruptEvent {
    NO_EVENT_OCCURRED,
    EVENT_GENERATION
} CAPTURE_COMPARE_4_INTERRUPT_EVENT_T ;
#define WRITE_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, (OldValue & ~ CAPTURE_COMPARE4_INTERRUPT_EVENT_MASK) | ((val << CAPTURE_COMPARE4_INTERRUPT_EVENT_START_BIT) & CAPTURE_COMPARE4_INTERRUPT_EVENT_MASK )); \
   } 

#define ENABLE_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  CAPTURE_COMPARE4_INTERRUPT_EVENT_MASK ); \
   }

#define DISABLE_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, val & ~CAPTURE_COMPARE4_INTERRUPT_EVENT_MASK ); \
   } 

#define READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() \
   ((READ_REGISTER_USHORT(0x40021014) & CAPTURE_COMPARE4_INTERRUPT_EVENT_MASK)  >> CAPTURE_COMPARE4_INTERRUPT_EVENT_START_BIT)

#define WHEN_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT_HIGH(x) \
     if ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() )


#define UNLESS_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT_HIGH() \
     if (! READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() )


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT_LOW() \
    while ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() );


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() && (--___t___ > 0)); }


#define WAIT_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT_HIGH() \
    while (! READ_TIMER_CAPTURE_COMPARE4_INTERRUPT_EVENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerEvent
//
// Return the value of register TIMER_EVENT
//
// Notes : Register TIM event generation register (TIMx_EGSR) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define TRIGGER_INTERRUPT_EVENT_MASK 0x40U
#define TRIGGER_INTERRUPT_EVENT_OFFSET 6
#define TRIGGER_INTERRUPT_EVENT_STOP_BIT 6
#define TRIGGER_INTERRUPT_EVENT_START_BIT 6
#define TRIGGER_INTERRUPT_EVENT_WIDTH 1



typedef enum TriggerInterruptEvent {
    NO_EVENT_OCCURRED,
    EVENT_GENERATION
} TRIGGER_INTERRUPT_EVENT_T ;
#define WRITE_TIMER_TRIGGER_INTERRUPT_EVENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, (OldValue & ~ TRIGGER_INTERRUPT_EVENT_MASK) | ((val << TRIGGER_INTERRUPT_EVENT_START_BIT) & TRIGGER_INTERRUPT_EVENT_MASK )); \
   } 

#define ENABLE_TIMER_TRIGGER_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  TRIGGER_INTERRUPT_EVENT_MASK ); \
   }

#define DISABLE_TIMER_TRIGGER_INTERRUPT_EVENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT(0x40021014, val & ~TRIGGER_INTERRUPT_EVENT_MASK ); \
   } 

#define READ_TIMER_TRIGGER_INTERRUPT_EVENT() \
   ((READ_REGISTER_USHORT(0x40021014) & TRIGGER_INTERRUPT_EVENT_MASK)  >> TRIGGER_INTERRUPT_EVENT_START_BIT)

#define WHEN_TIMER_TRIGGER_INTERRUPT_EVENT_HIGH(x) \
     if ( READ_TIMER_TRIGGER_INTERRUPT_EVENT() )


#define UNLESS_TIMER_TRIGGER_INTERRUPT_EVENT_HIGH() \
     if (! READ_TIMER_TRIGGER_INTERRUPT_EVENT() )


#define WAIT_TIMER_TRIGGER_INTERRUPT_EVENT_LOW() \
    while ( READ_TIMER_TRIGGER_INTERRUPT_EVENT() );


#define WAIT_TIMER_TRIGGER_INTERRUPT_EVENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMER_TRIGGER_INTERRUPT_EVENT() && (--___t___ > 0)); }


#define WAIT_TIMER_TRIGGER_INTERRUPT_EVENT_HIGH() \
    while (! READ_TIMER_TRIGGER_INTERRUPT_EVENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompareMode1
//
// Return the value of register TIMER_CAPTURE_COMPARE_MODE1
//
// Notes : Register TIM capture/compare mode register1 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE_MODE1( y) \
     WRITE_REGISTER_USHORT( 0x40021018 , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE_MODE1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021018); \
     WRITE_REGISTER_USHORT( 0x40021018 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE_MODE1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021018); \
     WRITE_REGISTER_USHORT( 0x40021018 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE_MODE1() \
     READ_REGISTER_USHORT(0x40021018)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompareMode2
//
// Return the value of register TIMER_CAPTURE_COMPARE_MODE2
//
// Notes : Register TIM capture/compare mode registe2 at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE_MODE2( y) \
     WRITE_REGISTER_USHORT( 0x4002101C , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE_MODE2(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE_MODE2(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE_MODE2() \
     READ_REGISTER_USHORT(0x4002101C)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompareEnable
//
// Return the value of register TIMER_CAPTURE_COMPARE_ENABLE
//
// Notes : Register TIM capture/compare enable register at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE_ENABLE( y) \
     WRITE_REGISTER_USHORT( 0x40021020 , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE_ENABLE(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT( 0x40021020 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE_ENABLE(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT( 0x40021020 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE_ENABLE() \
     READ_REGISTER_USHORT(0x40021020)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCounter
//
// Return the value of register TIMER_COUNTER
//
// Notes : Register TIM counter at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_COUNTER( y) \
     WRITE_REGISTER_USHORT( 0x40021024 , y)

#define SET_BITS_TIMER_TIMER_COUNTER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021024); \
     WRITE_REGISTER_USHORT( 0x40021024 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_COUNTER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021024); \
     WRITE_REGISTER_USHORT( 0x40021024 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_COUNTER() \
     READ_REGISTER_USHORT(0x40021024)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerPrescaler
//
// Return the value of register TIMER_PRESCALER
//
// Notes : Register TIM prescaler at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_PRESCALER( y) \
     WRITE_REGISTER_USHORT( 0x40021028 , y)

#define SET_BITS_TIMER_TIMER_PRESCALER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021028); \
     WRITE_REGISTER_USHORT( 0x40021028 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_PRESCALER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021028); \
     WRITE_REGISTER_USHORT( 0x40021028 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_PRESCALER() \
     READ_REGISTER_USHORT(0x40021028)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerReload
//
// Return the value of register TIMER_RELOAD
//
// Notes : Register TIM auto-reload register at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_RELOAD( y) \
     WRITE_REGISTER_USHORT( 0x4002102C , y)

#define SET_BITS_TIMER_TIMER_RELOAD(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002102C); \
     WRITE_REGISTER_USHORT( 0x4002102C , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_RELOAD(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002102C); \
     WRITE_REGISTER_USHORT( 0x4002102C , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_RELOAD() \
     READ_REGISTER_USHORT(0x4002102C)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerRepetitionCounter
//
// Return the value of register TIMER_REPETITION_COUNTER
//
// Notes : Register TIM repetition counter register at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_REPETITION_COUNTER( y) \
     WRITE_REGISTER_USHORT( 0x40021030 , y)

#define SET_BITS_TIMER_TIMER_REPETITION_COUNTER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021030); \
     WRITE_REGISTER_USHORT( 0x40021030 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_REPETITION_COUNTER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021030); \
     WRITE_REGISTER_USHORT( 0x40021030 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_REPETITION_COUNTER() \
     READ_REGISTER_USHORT(0x40021030)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompare1
//
// Return the value of register TIMER_CAPTURE_COMPARE1
//
// Notes : Register TIM capture/compare register 1 at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE1( y) \
     WRITE_REGISTER_USHORT( 0x40021034 , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021034); \
     WRITE_REGISTER_USHORT( 0x40021034 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021034); \
     WRITE_REGISTER_USHORT( 0x40021034 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE1() \
     READ_REGISTER_USHORT(0x40021034)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompare2
//
// Return the value of register TIMER_CAPTURE_COMPARE2
//
// Notes : Register TIM capture/compare register 2 at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE2( y) \
     WRITE_REGISTER_USHORT( 0x40021038 , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE2(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021038); \
     WRITE_REGISTER_USHORT( 0x40021038 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE2(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021038); \
     WRITE_REGISTER_USHORT( 0x40021038 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE2() \
     READ_REGISTER_USHORT(0x40021038)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompare3
//
// Return the value of register TIMER_CAPTURE_COMPARE3
//
// Notes : Register TIM capture/compare register 3 at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE3( y) \
     WRITE_REGISTER_USHORT( 0x4002103C , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE3(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002103C); \
     WRITE_REGISTER_USHORT( 0x4002103C , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE3(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002103C); \
     WRITE_REGISTER_USHORT( 0x4002103C , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE3() \
     READ_REGISTER_USHORT(0x4002103C)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerCaptureCompare4
//
// Return the value of register TIMER_CAPTURE_COMPARE4
//
// Notes : Register TIM capture/compare register 4 at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_CAPTURE_COMPARE4( y) \
     WRITE_REGISTER_USHORT( 0x40021040 , y)

#define SET_BITS_TIMER_TIMER_CAPTURE_COMPARE4(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021040); \
     WRITE_REGISTER_USHORT( 0x40021040 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_CAPTURE_COMPARE4(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021040); \
     WRITE_REGISTER_USHORT( 0x40021040 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_CAPTURE_COMPARE4() \
     READ_REGISTER_USHORT(0x40021040)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerBreak
//
// Return the value of register TIMER_BREAK
//
// Notes : Register TIM DMA control register at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_BREAK( y) \
     WRITE_REGISTER_USHORT( 0x40021044 , y)

#define SET_BITS_TIMER_TIMER_BREAK(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021044); \
     WRITE_REGISTER_USHORT( 0x40021044 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_BREAK(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021044); \
     WRITE_REGISTER_USHORT( 0x40021044 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_BREAK() \
     READ_REGISTER_USHORT(0x40021044)

/////////////////////////////////////////////////////////////////////////
//
// Function : TimerDmaAddress
//
// Return the value of register TIMER_DMA_ADDRESS
//
// Notes : Register TIM DMA address at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMER_TIMER_DMA_ADDRESS( y) \
     WRITE_REGISTER_USHORT( 0x40021048 , y)

#define SET_BITS_TIMER_TIMER_DMA_ADDRESS(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021048); \
     WRITE_REGISTER_USHORT( 0x40021048 , val |  mask ); \
   }

#define CLEAR_BITS_TIMER_TIMER_DMA_ADDRESS(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021048); \
     WRITE_REGISTER_USHORT( 0x40021048 , val & ~mask ); \
   }

#define READ_REGISTER_TIMER_TIMER_DMA_ADDRESS() \
     READ_REGISTER_USHORT(0x40021048)

