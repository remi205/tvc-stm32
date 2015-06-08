/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Stm32/Stm32Afio/macro-c/Stm32Afio.h
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
// Function : EventControl
//
// Return the value of register EVENT_CONTROL
//
// Notes : Register Event control register at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFIO_EVENT_CONTROL( y) \
     WRITE_REGISTER_ULONG( 0x40010000 , y)

#define SET_BITS_AFIO_EVENT_CONTROL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010000); \
     WRITE_REGISTER_ULONG( 0x40010000 , val |  mask ); \
   }

#define CLEAR_BITS_AFIO_EVENT_CONTROL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010000); \
     WRITE_REGISTER_ULONG( 0x40010000 , val & ~mask ); \
   }

#define READ_REGISTER_AFIO_EVENT_CONTROL() \
     READ_REGISTER_ULONG(0x40010000)

/////////////////////////////////////////////////////////////////////////
//
// Function : EventControl
//
// Return the value of register EVENT_CONTROL
//
// Notes : Register Event control register (AFIO_EVCR) at the offset 0x0, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////
#define PIN_SELECTION_MASK 0xFU
#define PIN_SELECTION_OFFSET 3
#define PIN_SELECTION_STOP_BIT 3
#define PIN_SELECTION_START_BIT 0
#define PIN_SELECTION_WIDTH 4


typedef enum PinSelection {
    PIN0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN7,
    PIN8,
    PIN9,
    PIN10,
    PIN11,
    PIN12,
    PIN13,
    PIN14,
    PIN15
} PIN_SELECTION_T ;


#define READ_AFIO_PIN_SELECTION() \
   ((READ_REGISTER_ULONG(0x40010000) & PIN_SELECTION_MASK)  >> PIN_SELECTION_START_BIT)

#define WRITE_AFIO_PIN_SELECTION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010000); \
     WRITE_REGISTER_ULONG(0x40010000, (OldValue & ~ PIN_SELECTION_MASK) | ((val << PIN_SELECTION_START_BIT) & PIN_SELECTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : EventControl
//
// Return the value of register EVENT_CONTROL
//
// Notes : Register Event control register (AFIO_EVCR) at the offset 0x0, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////
#define PORT_SELECTION_MASK 0x70U
#define PORT_SELECTION_OFFSET 6
#define PORT_SELECTION_STOP_BIT 6
#define PORT_SELECTION_START_BIT 4
#define PORT_SELECTION_WIDTH 3


typedef enum PortSelection {
    PORT_A,
    PORT_B,
    PORT_C,
    PORT_D,
    PORT_E,
    PORT_F,
    PORT_G
} PORT_SELECTION_T ;


#define READ_AFIO_PORT_SELECTION() \
   ((READ_REGISTER_ULONG(0x40010000) & PORT_SELECTION_MASK)  >> PORT_SELECTION_START_BIT)

#define WRITE_AFIO_PORT_SELECTION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010000); \
     WRITE_REGISTER_ULONG(0x40010000, (OldValue & ~ PORT_SELECTION_MASK) | ((val << PORT_SELECTION_START_BIT) & PORT_SELECTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : EventControl
//
// Return the value of register EVENT_CONTROL
//
// Notes : Register Event control register (AFIO_EVCR) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define EVENT_OUTPUT_MASK 0x80U
#define EVENT_OUTPUT_OFFSET 7
#define EVENT_OUTPUT_STOP_BIT 7
#define EVENT_OUTPUT_START_BIT 7
#define EVENT_OUTPUT_WIDTH 1


#define AFIO_EVENT_CONTROL_REG 0x0

typedef enum EventOutput {
    EVENT_OUTPUT_DISABLE,
    EVENT_OUTPUT_ENABLE
} EVENT_OUTPUT_T ;
#define WRITE_AFIO_EVENT_OUTPUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010000); \
     WRITE_REGISTER_ULONG(0x40010000, (OldValue & ~ EVENT_OUTPUT_MASK) | ((val << EVENT_OUTPUT_START_BIT) & EVENT_OUTPUT_MASK )); \
   } 

#define  ENABLE_AFIO_EVENT_OUTPUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010000); \
     WRITE_REGISTER_ULONG( 0x40010000 , val |  EVENT_OUTPUT_MASK ); \
   }

#define DISABLE_AFIO_EVENT_OUTPUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010000); \
     WRITE_REGISTER_ULONG(0x40010000, val & ~EVENT_OUTPUT_MASK ); \
   } 

#define READ_AFIO_EVENT_OUTPUT() \
   ((READ_REGISTER_ULONG(0x40010000) & EVENT_OUTPUT_MASK)  >> EVENT_OUTPUT_START_BIT)

#define WHEN_AFIO_EVENT_OUTPUT_HIGH(x) \
     if ( READ_AFIO_EVENT_OUTPUT() )


#define UNLESS_AFIO_EVENT_OUTPUT_HIGH() \
     if (! READ_AFIO_EVENT_OUTPUT() )


#define WAIT_AFIO_EVENT_OUTPUT_LOW() \
    while ( READ_AFIO_EVENT_OUTPUT() );


#define WAIT_AFIO_EVENT_OUTPUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_EVENT_OUTPUT() && (--___t___ > 0)); }


#define WAIT_AFIO_EVENT_OUTPUT_HIGH() \
    while (! READ_AFIO_EVENT_OUTPUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFIO_REMAP_CONFIGURATION( y) \
     WRITE_REGISTER_ULONG( 0x40010004 , y)

#define SET_BITS_AFIO_REMAP_CONFIGURATION(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  mask ); \
   }

#define CLEAR_BITS_AFIO_REMAP_CONFIGURATION(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val & ~mask ); \
   }

#define READ_REGISTER_AFIO_REMAP_CONFIGURATION() \
     READ_REGISTER_ULONG(0x40010004)

/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define UART1_REMAP_MASK 0x1U
#define UART1_REMAP_OFFSET 0
#define UART1_REMAP_STOP_BIT 0
#define UART1_REMAP_START_BIT 0
#define UART1_REMAP_WIDTH 1


#define AFIO_REMAP_CONFIGURATION_REG 0x4

typedef enum Uart1Remap {
    NO_REMAP,
    FULL_REMAP
} UART_1_REMAP_T ;
#define WRITE_AFIO_UART1_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ UART1_REMAP_MASK) | ((val << UART1_REMAP_START_BIT) & UART1_REMAP_MASK )); \
   } 

#define ENABLE_AFIO_UART1_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  UART1_REMAP_MASK ); \
   }

#define DISABLE_AFIO_UART1_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, val & ~UART1_REMAP_MASK ); \
   } 

#define READ_AFIO_UART1_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & UART1_REMAP_MASK)  >> UART1_REMAP_START_BIT)

#define WHEN_AFIO_UART1_REMAP_HIGH(x) \
     if ( READ_AFIO_UART1_REMAP() )


#define UNLESS_AFIO_UART1_REMAP_HIGH() \
     if (! READ_AFIO_UART1_REMAP() )


#define WAIT_AFIO_UART1_REMAP_LOW() \
    while ( READ_AFIO_UART1_REMAP() );


#define WAIT_AFIO_UART1_REMAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_UART1_REMAP() && (--___t___ > 0)); }


#define WAIT_AFIO_UART1_REMAP_HIGH() \
    while (! READ_AFIO_UART1_REMAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define UART1_REMAP_MASK 0x2U
#define UART1_REMAP_OFFSET 1
#define UART1_REMAP_STOP_BIT 1
#define UART1_REMAP_START_BIT 1
#define UART1_REMAP_WIDTH 1



#define WRITE_AFIO_UART1_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ UART1_REMAP_MASK) | ((val << UART1_REMAP_START_BIT) & UART1_REMAP_MASK )); \
   } 

#define ENABLE_AFIO_UART1_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  UART1_REMAP_MASK ); \
   }

#define DISABLE_AFIO_UART1_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, val & ~UART1_REMAP_MASK ); \
   } 

#define READ_AFIO_UART1_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & UART1_REMAP_MASK)  >> UART1_REMAP_START_BIT)

#define WHEN_AFIO_UART1_REMAP_HIGH(x) \
     if ( READ_AFIO_UART1_REMAP() )


#define UNLESS_AFIO_UART1_REMAP_HIGH() \
     if (! READ_AFIO_UART1_REMAP() )


#define WAIT_AFIO_UART1_REMAP_LOW() \
    while ( READ_AFIO_UART1_REMAP() );


#define WAIT_AFIO_UART1_REMAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_UART1_REMAP() && (--___t___ > 0)); }


#define WAIT_AFIO_UART1_REMAP_HIGH() \
    while (! READ_AFIO_UART1_REMAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define UART1_REMAP_MASK 0x4U
#define UART1_REMAP_OFFSET 2
#define UART1_REMAP_STOP_BIT 2
#define UART1_REMAP_START_BIT 2
#define UART1_REMAP_WIDTH 1



#define WRITE_AFIO_UART1_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ UART1_REMAP_MASK) | ((val << UART1_REMAP_START_BIT) & UART1_REMAP_MASK )); \
   } 

#define ENABLE_AFIO_UART1_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  UART1_REMAP_MASK ); \
   }

#define DISABLE_AFIO_UART1_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, val & ~UART1_REMAP_MASK ); \
   } 

#define READ_AFIO_UART1_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & UART1_REMAP_MASK)  >> UART1_REMAP_START_BIT)

#define WHEN_AFIO_UART1_REMAP_HIGH(x) \
     if ( READ_AFIO_UART1_REMAP() )


#define UNLESS_AFIO_UART1_REMAP_HIGH() \
     if (! READ_AFIO_UART1_REMAP() )


#define WAIT_AFIO_UART1_REMAP_LOW() \
    while ( READ_AFIO_UART1_REMAP() );


#define WAIT_AFIO_UART1_REMAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_UART1_REMAP() && (--___t___ > 0)); }


#define WAIT_AFIO_UART1_REMAP_HIGH() \
    while (! READ_AFIO_UART1_REMAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define UART2_REMAP_MASK 0x8U
#define UART2_REMAP_OFFSET 3
#define UART2_REMAP_STOP_BIT 3
#define UART2_REMAP_START_BIT 3
#define UART2_REMAP_WIDTH 1



typedef enum Uart2Remap {
    NO_REMAP,
    FULL_REMAP
} UART_2_REMAP_T ;
#define WRITE_AFIO_UART2_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ UART2_REMAP_MASK) | ((val << UART2_REMAP_START_BIT) & UART2_REMAP_MASK )); \
   } 

#define ENABLE_AFIO_UART2_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  UART2_REMAP_MASK ); \
   }

#define DISABLE_AFIO_UART2_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, val & ~UART2_REMAP_MASK ); \
   } 

#define READ_AFIO_UART2_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & UART2_REMAP_MASK)  >> UART2_REMAP_START_BIT)

#define WHEN_AFIO_UART2_REMAP_HIGH(x) \
     if ( READ_AFIO_UART2_REMAP() )


#define UNLESS_AFIO_UART2_REMAP_HIGH() \
     if (! READ_AFIO_UART2_REMAP() )


#define WAIT_AFIO_UART2_REMAP_LOW() \
    while ( READ_AFIO_UART2_REMAP() );


#define WAIT_AFIO_UART2_REMAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_UART2_REMAP() && (--___t___ > 0)); }


#define WAIT_AFIO_UART2_REMAP_HIGH() \
    while (! READ_AFIO_UART2_REMAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////
#define UART3_REMAP_MASK 0x30U
#define UART3_REMAP_OFFSET 5
#define UART3_REMAP_STOP_BIT 5
#define UART3_REMAP_START_BIT 4
#define UART3_REMAP_WIDTH 2


typedef enum FullRemap {
    NO_REMAP,
    PARTIAL_REMAP1,
    PARTIAL_REMAP2,
    FULL_REMAP
} FULL_REMAP_T ;


#define READ_AFIO_UART3_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & UART3_REMAP_MASK)  >> UART3_REMAP_START_BIT)

#define WRITE_AFIO_UART3_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ UART3_REMAP_MASK) | ((val << UART3_REMAP_START_BIT) & UART3_REMAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////
#define TIMER1_REMAP_MASK 0xC0U
#define TIMER1_REMAP_OFFSET 7
#define TIMER1_REMAP_STOP_BIT 7
#define TIMER1_REMAP_START_BIT 6
#define TIMER1_REMAP_WIDTH 2




#define READ_AFIO_TIMER1_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & TIMER1_REMAP_MASK)  >> TIMER1_REMAP_START_BIT)

#define WRITE_AFIO_TIMER1_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ TIMER1_REMAP_MASK) | ((val << TIMER1_REMAP_START_BIT) & TIMER1_REMAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////
#define TIMER2_REMAP_MASK 0x300U
#define TIMER2_REMAP_OFFSET 9
#define TIMER2_REMAP_STOP_BIT 9
#define TIMER2_REMAP_START_BIT 8
#define TIMER2_REMAP_WIDTH 2




#define READ_AFIO_TIMER2_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & TIMER2_REMAP_MASK)  >> TIMER2_REMAP_START_BIT)

#define WRITE_AFIO_TIMER2_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ TIMER2_REMAP_MASK) | ((val << TIMER2_REMAP_START_BIT) & TIMER2_REMAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////
#define TIMER3_REMAP_MASK 0xC00U
#define TIMER3_REMAP_OFFSET 11
#define TIMER3_REMAP_STOP_BIT 11
#define TIMER3_REMAP_START_BIT 10
#define TIMER3_REMAP_WIDTH 2




#define READ_AFIO_TIMER3_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & TIMER3_REMAP_MASK)  >> TIMER3_REMAP_START_BIT)

#define WRITE_AFIO_TIMER3_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ TIMER3_REMAP_MASK) | ((val << TIMER3_REMAP_START_BIT) & TIMER3_REMAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////
#define TIMER4_REMAP_MASK 0x1000U
#define TIMER4_REMAP_OFFSET 12
#define TIMER4_REMAP_STOP_BIT 12
#define TIMER4_REMAP_START_BIT 12
#define TIMER4_REMAP_WIDTH 1



typedef enum Timer4Remap {
    NO_REMAP,
    FULL_REMAP
} TIMER_4_REMAP_T ;
#define WRITE_AFIO_TIMER4_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ TIMER4_REMAP_MASK) | ((val << TIMER4_REMAP_START_BIT) & TIMER4_REMAP_MASK )); \
   } 

#define ENABLE_AFIO_TIMER4_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  TIMER4_REMAP_MASK ); \
   }

#define DISABLE_AFIO_TIMER4_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, val & ~TIMER4_REMAP_MASK ); \
   } 

#define READ_AFIO_TIMER4_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & TIMER4_REMAP_MASK)  >> TIMER4_REMAP_START_BIT)

#define WHEN_AFIO_TIMER4_REMAP_HIGH(x) \
     if ( READ_AFIO_TIMER4_REMAP() )


#define UNLESS_AFIO_TIMER4_REMAP_HIGH() \
     if (! READ_AFIO_TIMER4_REMAP() )


#define WAIT_AFIO_TIMER4_REMAP_LOW() \
    while ( READ_AFIO_TIMER4_REMAP() );


#define WAIT_AFIO_TIMER4_REMAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_TIMER4_REMAP() && (--___t___ > 0)); }


#define WAIT_AFIO_TIMER4_REMAP_HIGH() \
    while (! READ_AFIO_TIMER4_REMAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////
#define PD01_REMAP_MASK 0x8000U
#define PD01_REMAP_OFFSET 15
#define PD01_REMAP_STOP_BIT 15
#define PD01_REMAP_START_BIT 15
#define PD01_REMAP_WIDTH 1



typedef enum Pd01Remap {
    NO_REMAP,
    FULL_REMAP
} PD_01_REMAP_T ;
#define WRITE_AFIO_PD01_REMAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ PD01_REMAP_MASK) | ((val << PD01_REMAP_START_BIT) & PD01_REMAP_MASK )); \
   } 

#define ENABLE_AFIO_PD01_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG( 0x40010004 , val |  PD01_REMAP_MASK ); \
   }

#define DISABLE_AFIO_PD01_REMAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, val & ~PD01_REMAP_MASK ); \
   } 

#define READ_AFIO_PD01_REMAP() \
   ((READ_REGISTER_ULONG(0x40010004) & PD01_REMAP_MASK)  >> PD01_REMAP_START_BIT)

#define WHEN_AFIO_PD01_REMAP_HIGH(x) \
     if ( READ_AFIO_PD01_REMAP() )


#define UNLESS_AFIO_PD01_REMAP_HIGH() \
     if (! READ_AFIO_PD01_REMAP() )


#define WAIT_AFIO_PD01_REMAP_LOW() \
    while ( READ_AFIO_PD01_REMAP() );


#define WAIT_AFIO_PD01_REMAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AFIO_PD01_REMAP() && (--___t___ > 0)); }


#define WAIT_AFIO_PD01_REMAP_HIGH() \
    while (! READ_AFIO_PD01_REMAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RemapConfiguration
//
// Return the value of register REMAP_CONFIGURATION
//
// Notes : Register AF remap and debug I/O configuration register (AFIO_MAPR) at the offset 0x4, Bits 24:26

//
/////////////////////////////////////////////////////////////////////////
#define JTAG_CONFIGURATION_MASK 0x7000000U
#define JTAG_CONFIGURATION_OFFSET 26
#define JTAG_CONFIGURATION_STOP_BIT 26
#define JTAG_CONFIGURATION_START_BIT 24
#define JTAG_CONFIGURATION_WIDTH 3


typedef enum JtagConfiguration {
    FULL_SWJ_WITH_RESET,
    FULL_SWJ_WITHOUT_RESET,
    JTAG_DP_DISABLED_AND_SW_DP_ENABLED,
    JTAG_DP_DISABLED_AND_SW_DP_DISABLED
} JTAG_CONFIGURATION_T ;


#define READ_AFIO_JTAG_CONFIGURATION() \
   ((READ_REGISTER_ULONG(0x40010004) & JTAG_CONFIGURATION_MASK)  >> JTAG_CONFIGURATION_START_BIT)

#define WRITE_AFIO_JTAG_CONFIGURATION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010004); \
     WRITE_REGISTER_ULONG(0x40010004, (OldValue & ~ JTAG_CONFIGURATION_MASK) | ((val << JTAG_CONFIGURATION_START_BIT) & JTAG_CONFIGURATION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration1
//
// Return the value of register EXTERNAL_CONFIGURATION1
//
// Notes : Register External interrupt configuration register 1 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFIO_EXTERNAL_CONFIGURATION1( y) \
     WRITE_REGISTER_ULONG( 0x40010008 , y)

#define SET_BITS_AFIO_EXTERNAL_CONFIGURATION1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010008); \
     WRITE_REGISTER_ULONG( 0x40010008 , val |  mask ); \
   }

#define CLEAR_BITS_AFIO_EXTERNAL_CONFIGURATION1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010008); \
     WRITE_REGISTER_ULONG( 0x40010008 , val & ~mask ); \
   }

#define READ_REGISTER_AFIO_EXTERNAL_CONFIGURATION1() \
     READ_REGISTER_ULONG(0x40010008)

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration1
//
// Return the value of register EXTERNAL_CONFIGURATION_1
//
// Notes : Register External interrupt configuration register 1 (AFIO_EXTICR1) at the offset 0x8, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI0_MASK 0xFU
#define SELECT_PORT_FOR_EXTI0_OFFSET 3
#define SELECT_PORT_FOR_EXTI0_STOP_BIT 3
#define SELECT_PORT_FOR_EXTI0_START_BIT 0
#define SELECT_PORT_FOR_EXTI0_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI0() \
   ((READ_REGISTER_ULONG(0x40010008) & SELECT_PORT_FOR_EXTI0_MASK)  >> SELECT_PORT_FOR_EXTI0_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010008); \
     WRITE_REGISTER_ULONG(0x40010008, (OldValue & ~ SELECT_PORT_FOR_EXTI0_MASK) | ((val << SELECT_PORT_FOR_EXTI0_START_BIT) & SELECT_PORT_FOR_EXTI0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration1
//
// Return the value of register EXTERNAL_CONFIGURATION_1
//
// Notes : Register External interrupt configuration register 1 (AFIO_EXTICR1) at the offset 0x8, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI1_MASK 0xF0U
#define SELECT_PORT_FOR_EXTI1_OFFSET 7
#define SELECT_PORT_FOR_EXTI1_STOP_BIT 7
#define SELECT_PORT_FOR_EXTI1_START_BIT 4
#define SELECT_PORT_FOR_EXTI1_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI1() \
   ((READ_REGISTER_ULONG(0x40010008) & SELECT_PORT_FOR_EXTI1_MASK)  >> SELECT_PORT_FOR_EXTI1_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010008); \
     WRITE_REGISTER_ULONG(0x40010008, (OldValue & ~ SELECT_PORT_FOR_EXTI1_MASK) | ((val << SELECT_PORT_FOR_EXTI1_START_BIT) & SELECT_PORT_FOR_EXTI1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration1
//
// Return the value of register EXTERNAL_CONFIGURATION_1
//
// Notes : Register External interrupt configuration register 1 (AFIO_EXTICR1) at the offset 0x8, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI2_MASK 0xF00U
#define SELECT_PORT_FOR_EXTI2_OFFSET 11
#define SELECT_PORT_FOR_EXTI2_STOP_BIT 11
#define SELECT_PORT_FOR_EXTI2_START_BIT 8
#define SELECT_PORT_FOR_EXTI2_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI2() \
   ((READ_REGISTER_ULONG(0x40010008) & SELECT_PORT_FOR_EXTI2_MASK)  >> SELECT_PORT_FOR_EXTI2_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010008); \
     WRITE_REGISTER_ULONG(0x40010008, (OldValue & ~ SELECT_PORT_FOR_EXTI2_MASK) | ((val << SELECT_PORT_FOR_EXTI2_START_BIT) & SELECT_PORT_FOR_EXTI2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration1
//
// Return the value of register EXTERNAL_CONFIGURATION_1
//
// Notes : Register External interrupt configuration register 1 (AFIO_EXTICR1) at the offset 0x8, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI3_MASK 0xF000U
#define SELECT_PORT_FOR_EXTI3_OFFSET 15
#define SELECT_PORT_FOR_EXTI3_STOP_BIT 15
#define SELECT_PORT_FOR_EXTI3_START_BIT 12
#define SELECT_PORT_FOR_EXTI3_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI3() \
   ((READ_REGISTER_ULONG(0x40010008) & SELECT_PORT_FOR_EXTI3_MASK)  >> SELECT_PORT_FOR_EXTI3_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010008); \
     WRITE_REGISTER_ULONG(0x40010008, (OldValue & ~ SELECT_PORT_FOR_EXTI3_MASK) | ((val << SELECT_PORT_FOR_EXTI3_START_BIT) & SELECT_PORT_FOR_EXTI3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration2
//
// Return the value of register EXTERNAL_CONFIGURATION2
//
// Notes : Register External interrupt configuration register 2 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFIO_EXTERNAL_CONFIGURATION2( y) \
     WRITE_REGISTER_ULONG( 0x4001000C , y)

#define SET_BITS_AFIO_EXTERNAL_CONFIGURATION2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4001000C); \
     WRITE_REGISTER_ULONG( 0x4001000C , val |  mask ); \
   }

#define CLEAR_BITS_AFIO_EXTERNAL_CONFIGURATION2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4001000C); \
     WRITE_REGISTER_ULONG( 0x4001000C , val & ~mask ); \
   }

#define READ_REGISTER_AFIO_EXTERNAL_CONFIGURATION2() \
     READ_REGISTER_ULONG(0x4001000C)

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration2
//
// Return the value of register EXTERNAL_CONFIGURATION_2
//
// Notes : Register External interrupt configuration register 2 (AFIO_EXTICR2) at the offset 0xC, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI4_MASK 0xFU
#define SELECT_PORT_FOR_EXTI4_OFFSET 3
#define SELECT_PORT_FOR_EXTI4_STOP_BIT 3
#define SELECT_PORT_FOR_EXTI4_START_BIT 0
#define SELECT_PORT_FOR_EXTI4_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI4() \
   ((READ_REGISTER_ULONG(0x4001000C) & SELECT_PORT_FOR_EXTI4_MASK)  >> SELECT_PORT_FOR_EXTI4_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4001000C); \
     WRITE_REGISTER_ULONG(0x4001000C, (OldValue & ~ SELECT_PORT_FOR_EXTI4_MASK) | ((val << SELECT_PORT_FOR_EXTI4_START_BIT) & SELECT_PORT_FOR_EXTI4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration2
//
// Return the value of register EXTERNAL_CONFIGURATION_2
//
// Notes : Register External interrupt configuration register 2 (AFIO_EXTICR2) at the offset 0xC, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI5_MASK 0xF0U
#define SELECT_PORT_FOR_EXTI5_OFFSET 7
#define SELECT_PORT_FOR_EXTI5_STOP_BIT 7
#define SELECT_PORT_FOR_EXTI5_START_BIT 4
#define SELECT_PORT_FOR_EXTI5_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI5() \
   ((READ_REGISTER_ULONG(0x4001000C) & SELECT_PORT_FOR_EXTI5_MASK)  >> SELECT_PORT_FOR_EXTI5_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4001000C); \
     WRITE_REGISTER_ULONG(0x4001000C, (OldValue & ~ SELECT_PORT_FOR_EXTI5_MASK) | ((val << SELECT_PORT_FOR_EXTI5_START_BIT) & SELECT_PORT_FOR_EXTI5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration2
//
// Return the value of register EXTERNAL_CONFIGURATION_2
//
// Notes : Register External interrupt configuration register 2 (AFIO_EXTICR2) at the offset 0xC, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI6_MASK 0xF00U
#define SELECT_PORT_FOR_EXTI6_OFFSET 11
#define SELECT_PORT_FOR_EXTI6_STOP_BIT 11
#define SELECT_PORT_FOR_EXTI6_START_BIT 8
#define SELECT_PORT_FOR_EXTI6_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI6() \
   ((READ_REGISTER_ULONG(0x4001000C) & SELECT_PORT_FOR_EXTI6_MASK)  >> SELECT_PORT_FOR_EXTI6_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4001000C); \
     WRITE_REGISTER_ULONG(0x4001000C, (OldValue & ~ SELECT_PORT_FOR_EXTI6_MASK) | ((val << SELECT_PORT_FOR_EXTI6_START_BIT) & SELECT_PORT_FOR_EXTI6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration2
//
// Return the value of register EXTERNAL_CONFIGURATION_2
//
// Notes : Register External interrupt configuration register 2 (AFIO_EXTICR2) at the offset 0xC, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI7_MASK 0xF000U
#define SELECT_PORT_FOR_EXTI7_OFFSET 15
#define SELECT_PORT_FOR_EXTI7_STOP_BIT 15
#define SELECT_PORT_FOR_EXTI7_START_BIT 12
#define SELECT_PORT_FOR_EXTI7_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI7() \
   ((READ_REGISTER_ULONG(0x4001000C) & SELECT_PORT_FOR_EXTI7_MASK)  >> SELECT_PORT_FOR_EXTI7_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4001000C); \
     WRITE_REGISTER_ULONG(0x4001000C, (OldValue & ~ SELECT_PORT_FOR_EXTI7_MASK) | ((val << SELECT_PORT_FOR_EXTI7_START_BIT) & SELECT_PORT_FOR_EXTI7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration3
//
// Return the value of register EXTERNAL_CONFIGURATION3
//
// Notes : Register External interrupt configuration register 3 at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFIO_EXTERNAL_CONFIGURATION3( y) \
     WRITE_REGISTER_ULONG( 0x40010010 , y)

#define SET_BITS_AFIO_EXTERNAL_CONFIGURATION3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010010); \
     WRITE_REGISTER_ULONG( 0x40010010 , val |  mask ); \
   }

#define CLEAR_BITS_AFIO_EXTERNAL_CONFIGURATION3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010010); \
     WRITE_REGISTER_ULONG( 0x40010010 , val & ~mask ); \
   }

#define READ_REGISTER_AFIO_EXTERNAL_CONFIGURATION3() \
     READ_REGISTER_ULONG(0x40010010)

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration3
//
// Return the value of register EXTERNAL_CONFIGURATION_3
//
// Notes : Register External interrupt configuration register 3 (AFIO_EXTICR3) at the offset 0x10, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI8_MASK 0xFU
#define SELECT_PORT_FOR_EXTI8_OFFSET 3
#define SELECT_PORT_FOR_EXTI8_STOP_BIT 3
#define SELECT_PORT_FOR_EXTI8_START_BIT 0
#define SELECT_PORT_FOR_EXTI8_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI8() \
   ((READ_REGISTER_ULONG(0x40010010) & SELECT_PORT_FOR_EXTI8_MASK)  >> SELECT_PORT_FOR_EXTI8_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010010); \
     WRITE_REGISTER_ULONG(0x40010010, (OldValue & ~ SELECT_PORT_FOR_EXTI8_MASK) | ((val << SELECT_PORT_FOR_EXTI8_START_BIT) & SELECT_PORT_FOR_EXTI8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration3
//
// Return the value of register EXTERNAL_CONFIGURATION_3
//
// Notes : Register External interrupt configuration register 3 (AFIO_EXTICR3) at the offset 0x10, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI9_MASK 0xF0U
#define SELECT_PORT_FOR_EXTI9_OFFSET 7
#define SELECT_PORT_FOR_EXTI9_STOP_BIT 7
#define SELECT_PORT_FOR_EXTI9_START_BIT 4
#define SELECT_PORT_FOR_EXTI9_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI9() \
   ((READ_REGISTER_ULONG(0x40010010) & SELECT_PORT_FOR_EXTI9_MASK)  >> SELECT_PORT_FOR_EXTI9_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010010); \
     WRITE_REGISTER_ULONG(0x40010010, (OldValue & ~ SELECT_PORT_FOR_EXTI9_MASK) | ((val << SELECT_PORT_FOR_EXTI9_START_BIT) & SELECT_PORT_FOR_EXTI9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration3
//
// Return the value of register EXTERNAL_CONFIGURATION_3
//
// Notes : Register External interrupt configuration register 3 (AFIO_EXTICR3) at the offset 0x10, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI10_MASK 0xF00U
#define SELECT_PORT_FOR_EXTI10_OFFSET 11
#define SELECT_PORT_FOR_EXTI10_STOP_BIT 11
#define SELECT_PORT_FOR_EXTI10_START_BIT 8
#define SELECT_PORT_FOR_EXTI10_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI10() \
   ((READ_REGISTER_ULONG(0x40010010) & SELECT_PORT_FOR_EXTI10_MASK)  >> SELECT_PORT_FOR_EXTI10_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010010); \
     WRITE_REGISTER_ULONG(0x40010010, (OldValue & ~ SELECT_PORT_FOR_EXTI10_MASK) | ((val << SELECT_PORT_FOR_EXTI10_START_BIT) & SELECT_PORT_FOR_EXTI10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration3
//
// Return the value of register EXTERNAL_CONFIGURATION_3
//
// Notes : Register External interrupt configuration register 3 (AFIO_EXTICR3) at the offset 0x10, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI11_MASK 0xF000U
#define SELECT_PORT_FOR_EXTI11_OFFSET 15
#define SELECT_PORT_FOR_EXTI11_STOP_BIT 15
#define SELECT_PORT_FOR_EXTI11_START_BIT 12
#define SELECT_PORT_FOR_EXTI11_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI11() \
   ((READ_REGISTER_ULONG(0x40010010) & SELECT_PORT_FOR_EXTI11_MASK)  >> SELECT_PORT_FOR_EXTI11_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010010); \
     WRITE_REGISTER_ULONG(0x40010010, (OldValue & ~ SELECT_PORT_FOR_EXTI11_MASK) | ((val << SELECT_PORT_FOR_EXTI11_START_BIT) & SELECT_PORT_FOR_EXTI11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration4
//
// Return the value of register EXTERNAL_CONFIGURATION4
//
// Notes : Register External interrupt configuration register 4 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFIO_EXTERNAL_CONFIGURATION4( y) \
     WRITE_REGISTER_ULONG( 0x40010014 , y)

#define SET_BITS_AFIO_EXTERNAL_CONFIGURATION4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010014); \
     WRITE_REGISTER_ULONG( 0x40010014 , val |  mask ); \
   }

#define CLEAR_BITS_AFIO_EXTERNAL_CONFIGURATION4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40010014); \
     WRITE_REGISTER_ULONG( 0x40010014 , val & ~mask ); \
   }

#define READ_REGISTER_AFIO_EXTERNAL_CONFIGURATION4() \
     READ_REGISTER_ULONG(0x40010014)

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration4
//
// Return the value of register EXTERNAL_CONFIGURATION_4
//
// Notes : Register External interrupt configuration register 4 (AFIO_EXTICR4) at the offset 0x14, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI12_MASK 0xFU
#define SELECT_PORT_FOR_EXTI12_OFFSET 3
#define SELECT_PORT_FOR_EXTI12_STOP_BIT 3
#define SELECT_PORT_FOR_EXTI12_START_BIT 0
#define SELECT_PORT_FOR_EXTI12_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI12() \
   ((READ_REGISTER_ULONG(0x40010014) & SELECT_PORT_FOR_EXTI12_MASK)  >> SELECT_PORT_FOR_EXTI12_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010014); \
     WRITE_REGISTER_ULONG(0x40010014, (OldValue & ~ SELECT_PORT_FOR_EXTI12_MASK) | ((val << SELECT_PORT_FOR_EXTI12_START_BIT) & SELECT_PORT_FOR_EXTI12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration4
//
// Return the value of register EXTERNAL_CONFIGURATION_4
//
// Notes : Register External interrupt configuration register 4 (AFIO_EXTICR4) at the offset 0x14, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI13_MASK 0xF0U
#define SELECT_PORT_FOR_EXTI13_OFFSET 7
#define SELECT_PORT_FOR_EXTI13_STOP_BIT 7
#define SELECT_PORT_FOR_EXTI13_START_BIT 4
#define SELECT_PORT_FOR_EXTI13_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI13() \
   ((READ_REGISTER_ULONG(0x40010014) & SELECT_PORT_FOR_EXTI13_MASK)  >> SELECT_PORT_FOR_EXTI13_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010014); \
     WRITE_REGISTER_ULONG(0x40010014, (OldValue & ~ SELECT_PORT_FOR_EXTI13_MASK) | ((val << SELECT_PORT_FOR_EXTI13_START_BIT) & SELECT_PORT_FOR_EXTI13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration4
//
// Return the value of register EXTERNAL_CONFIGURATION_4
//
// Notes : Register External interrupt configuration register 4 (AFIO_EXTICR4) at the offset 0x14, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI14_MASK 0xF00U
#define SELECT_PORT_FOR_EXTI14_OFFSET 11
#define SELECT_PORT_FOR_EXTI14_STOP_BIT 11
#define SELECT_PORT_FOR_EXTI14_START_BIT 8
#define SELECT_PORT_FOR_EXTI14_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI14() \
   ((READ_REGISTER_ULONG(0x40010014) & SELECT_PORT_FOR_EXTI14_MASK)  >> SELECT_PORT_FOR_EXTI14_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010014); \
     WRITE_REGISTER_ULONG(0x40010014, (OldValue & ~ SELECT_PORT_FOR_EXTI14_MASK) | ((val << SELECT_PORT_FOR_EXTI14_START_BIT) & SELECT_PORT_FOR_EXTI14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ExternalConfiguration4
//
// Return the value of register EXTERNAL_CONFIGURATION_4
//
// Notes : Register External interrupt configuration register 4 (AFIO_EXTICR4) at the offset 0x14, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////
#define SELECT_PORT_FOR_EXTI15_MASK 0xF000U
#define SELECT_PORT_FOR_EXTI15_OFFSET 15
#define SELECT_PORT_FOR_EXTI15_STOP_BIT 15
#define SELECT_PORT_FOR_EXTI15_START_BIT 12
#define SELECT_PORT_FOR_EXTI15_WIDTH 4




#define READ_AFIO_SELECT_PORT_FOR_EXTI15() \
   ((READ_REGISTER_ULONG(0x40010014) & SELECT_PORT_FOR_EXTI15_MASK)  >> SELECT_PORT_FOR_EXTI15_START_BIT)

#define WRITE_AFIO_SELECT_PORT_FOR_EXTI15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40010014); \
     WRITE_REGISTER_ULONG(0x40010014, (OldValue & ~ SELECT_PORT_FOR_EXTI15_MASK) | ((val << SELECT_PORT_FOR_EXTI15_START_BIT) & SELECT_PORT_FOR_EXTI15_MASK )); \
   } 

