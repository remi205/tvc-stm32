/////////////////////////////////////////////////////////////////////////
// File : c:/Lisp/Production/Stm32/stm32_Uart_sci3.h
// 
//
// Generated on the 22/12/2014 13:51 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by Remi PRUD'HOMME
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht STMicroelectronics  2014
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
#define UART_0 0x0
#define UART_3 0x40004800
#define UART_2 0x40004400
#define UART_1 0x40013800
#define NB_DEVICE_UART 12
/////////////////////////////////////////////////////////////////////////
//
// Function : UartBaudRate
//
// Return the value of register UART_BAUD_RATE
//
// Notes : Register UartBaudRate at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_BAUD_RATE( base,  val) \
     WRITE_REGISTER_USHORT( base + 0xC, val)

#define SET_BITS_UART_BAUD_RATE(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0xC); \
     WRITE_REGISTER_USHORT( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_UART_BAUD_RATE(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0xC); \
     WRITE_REGISTER_USHORT( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_BAUD_RATE( base ) \
     READ_REGISTER_USHORT( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartIcr
//
// Return the value of register UART_ICR
//
// Notes : Register UartIcr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_ICR( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x20, val)

#define SET_BITS_UART_ICR(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x20); \
     WRITE_REGISTER_USHORT( base + 0x20, val |  mask ); \
   } 

#define CLEAR_BITS_UART_ICR(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x20); \
     WRITE_REGISTER_USHORT( base + 0x20,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_ICR( base ) \
     READ_REGISTER_USHORT( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartIcr
//
// Return the value of register UART_ICR
//
// Notes : Register Interrupt Flag Clear Register (Usart_Icr) at the offset 0x20, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Character match flag. This bit is set by hardware, when a 
    // the character defined by ADD[7:0] is received. It is 
    // cleared by software, writing 1 to the CMCF in the 
    // USART_ICR register. An interrupt is generated if CMIE=1in 
    // the USART_CR1 register. 
    // 
#define CHARACTER_MATCH_CLEAR_MASK 0x20000U
#define CHARACTER_MATCH_CLEAR_OFFSET 17
#define CHARACTER_MATCH_CLEAR_START_BIT 17
#define CHARACTER_MATCH_CLEAR_WIDTH 1



#define WRITE_CHARACTER_MATCH_CLEAR(base, val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( base  + 0x20); \
     WRITE_REGISTER_USHORT( base + 0x20, (OldValue & ~CHARACTER_MATCH_CLEAR_MASK) | ((val << CHARACTER_MATCH_CLEAR_START_BIT) & CHARACTER_MATCH_CLEAR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartControl1
//
// Return the value of register UART_CONTROL1
//
// Notes : Register UartControl1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_CONTROL_1( base,  val) \
     WRITE_REGISTER_USHORT( base , val)

#define SET_BITS_UART_CONTROL_1(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base ); \
     WRITE_REGISTER_USHORT( base , val |  mask ); \
   } 

#define CLEAR_BITS_UART_CONTROL_1(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base ); \
     WRITE_REGISTER_USHORT( base ,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_CONTROL_1( base ) \
     READ_REGISTER_USHORT( base ) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartControl1
//
// Return the value of register UART_CONTROL_1
//
// Notes : Register Control register 1 (USART_CR1) at the offset 0x0, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // This bit is set and cleared by software. 
    // 0: Interrupt is inhibited 
    // 1: A USART interrupt is generated when the CMF bit is set 
    // in the USART_ISR register. 
    // 
#define CHARACTER_MATCH_INTERRUPT_MASK 0x4000U
#define CHARACTER_MATCH_INTERRUPT_OFFSET 14
#define CHARACTER_MATCH_INTERRUPT_START_BIT 14
#define CHARACTER_MATCH_INTERRUPT_WIDTH 1



#define WRITE_CHARACTER_MATCH_INTERRUPT(base, val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( base  ); \
     WRITE_REGISTER_USHORT( base , (OldValue & ~CHARACTER_MATCH_INTERRUPT_MASK) | ((val << CHARACTER_MATCH_INTERRUPT_START_BIT) & CHARACTER_MATCH_INTERRUPT_MASK )); \
   } 

#define  ENABLE_CHARACTER_MATCH_INTERRUPT(base) \
   {\
     USHORT val = READ_REGISTER_USHORT( base ); \
     WRITE_REGISTER_USHORT( base , val |  CHARACTER_MATCH_INTERRUPT_MASK ); \
   } 

#define DISABLE_CHARACTER_MATCH_INTERRUPT(base) \
   {\
     USHORT val = READ_REGISTER_USHORT(base  ); \
     WRITE_REGISTER_USHORT( base , val & ~CHARACTER_MATCH_INTERRUPT_MASK ); \
   } 

#define READ_CHARACTER_MATCH_INTERRUPT(base) \
    ((READ_REGISTER_USHORT(base ) & CHARACTER_MATCH_INTERRUPT_MASK) >> CHARACTER_MATCH_INTERRUPT_START_BIT )

#define WHEN_CHARACTER_MATCH_INTERRUPT_HIGH(base) \
     if ( READ_CHARACTER_MATCH_INTERRUPT(base) )


#define UNLESS_CHARACTER_MATCH_INTERRUPT_HIGH(base) \
     if (! READ_CHARACTER_MATCH_INTERRUPT(base) )


#define WAIT_CHARACTER_MATCH_INTERRUPT_LOW(base) \
    while ( READ_CHARACTER_MATCH_INTERRUPT(base) );


#define WAIT_CHARACTER_MATCH_INTERRUPT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHARACTER_MATCH_INTERRUPT(base) && (--timeout > 0) );


#define WAIT_CHARACTER_MATCH_INTERRUPT_HIGH(base) \
    while (! READ_CHARACTER_MATCH_INTERRUPT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : UartTimeout
//
// Return the value of register UART_TIMEOUT
//
// Notes : Register UartTimeout at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_TIMEOUT( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x14, val)

#define SET_BITS_UART_TIMEOUT(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x14); \
     WRITE_REGISTER_USHORT( base + 0x14, val |  mask ); \
   } 

#define CLEAR_BITS_UART_TIMEOUT(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x14); \
     WRITE_REGISTER_USHORT( base + 0x14,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_TIMEOUT( base ) \
     READ_REGISTER_USHORT( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartTransmitData
//
// Return the value of register UART_TRANSMIT_DATA
//
// Notes : Register UartTransmitData at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_TRANSMIT_DATA( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x28, val)

#define SET_BITS_UART_TRANSMIT_DATA(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x28); \
     WRITE_REGISTER_USHORT( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_UART_TRANSMIT_DATA(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x28); \
     WRITE_REGISTER_USHORT( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_TRANSMIT_DATA( base ) \
     READ_REGISTER_USHORT( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartPrescaler
//
// Return the value of register UART_PRESCALER
//
// Notes : Register UartPrescaler at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_PRESCALER( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x18, val)

#define SET_BITS_UART_PRESCALER(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x18); \
     WRITE_REGISTER_USHORT( base + 0x18, val |  mask ); \
   } 

#define CLEAR_BITS_UART_PRESCALER(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x18); \
     WRITE_REGISTER_USHORT( base + 0x18,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_PRESCALER( base ) \
     READ_REGISTER_USHORT( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartReceiveData
//
// Return the value of register UART_RECEIVE_DATA
//
// Notes : Register UartReceiveData at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_RECEIVE_DATA( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x24, val)

#define SET_BITS_UART_RECEIVE_DATA(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x24); \
     WRITE_REGISTER_USHORT( base + 0x24, val |  mask ); \
   } 

#define CLEAR_BITS_UART_RECEIVE_DATA(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x24); \
     WRITE_REGISTER_USHORT( base + 0x24,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_RECEIVE_DATA( base ) \
     READ_REGISTER_USHORT( base + 0x24) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartControl3
//
// Return the value of register UART_CONTROL3
//
// Notes : Register UartControl3 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_CONTROL_3( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x8, val)

#define SET_BITS_UART_CONTROL_3(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x8); \
     WRITE_REGISTER_USHORT( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_UART_CONTROL_3(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x8); \
     WRITE_REGISTER_USHORT( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_CONTROL_3( base ) \
     READ_REGISTER_USHORT( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartIsr
//
// Return the value of register UART_ISR
//
// Notes : Register UartIsr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_ISR( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x1C, val)

#define SET_BITS_UART_ISR(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x1C); \
     WRITE_REGISTER_USHORT( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_UART_ISR(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x1C); \
     WRITE_REGISTER_USHORT( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_ISR( base ) \
     READ_REGISTER_USHORT( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartIsr
//
// Return the value of register UART_ISR
//
// Notes : Register Interrupt & Status Register (Usart_Isr) at the offset 0x1C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Character match flag. This bit is set by hardware, when a 
    // the character defined by ADD[7:0] is received. It is 
    // cleared by software, writing 1 to the CMCF in the 
    // USART_ICR register. An interrupt is generated if CMIE=1in 
    // the USART_CR1 register. 
    // 
#define CHARACTER_MATCH_DETECTED_MASK 0x20000U
#define CHARACTER_MATCH_DETECTED_OFFSET 17
#define CHARACTER_MATCH_DETECTED_START_BIT 17
#define CHARACTER_MATCH_DETECTED_WIDTH 1



#define WRITE_CHARACTER_MATCH_DETECTED(base, val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( base  + 0x1C); \
     WRITE_REGISTER_USHORT( base + 0x1C, (OldValue & ~CHARACTER_MATCH_DETECTED_MASK) | ((val << CHARACTER_MATCH_DETECTED_START_BIT) & CHARACTER_MATCH_DETECTED_MASK )); \
   } 

#define ENABLE_CHARACTER_MATCH_DETECTED(base) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x1C); \
     WRITE_REGISTER_USHORT( base + 0x1C, val |  CHARACTER_MATCH_DETECTED_MASK ); \
   } 

#define DISABLE_CHARACTER_MATCH_DETECTED(base) \
   {\
     USHORT val = READ_REGISTER_USHORT(base + 0x1C ); \
     WRITE_REGISTER_USHORT( base + 0x1C, val & ~CHARACTER_MATCH_DETECTED_MASK ); \
   } 

#define READ_CHARACTER_MATCH_DETECTED(base) \
    ((READ_REGISTER_USHORT(base + 0x1C) & CHARACTER_MATCH_DETECTED_MASK) >> CHARACTER_MATCH_DETECTED_START_BIT )

#define WHEN_CHARACTER_MATCH_DETECTED_HIGH(base) \
     if ( READ_CHARACTER_MATCH_DETECTED(base) )


#define UNLESS_CHARACTER_MATCH_DETECTED_HIGH(base) \
     if (! READ_CHARACTER_MATCH_DETECTED(base) )


#define WAIT_CHARACTER_MATCH_DETECTED_LOW(base) \
    while ( READ_CHARACTER_MATCH_DETECTED(base) );


#define WAIT_CHARACTER_MATCH_DETECTED_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHARACTER_MATCH_DETECTED(base) && (--timeout > 0) );


#define WAIT_CHARACTER_MATCH_DETECTED_HIGH(base) \
    while (! READ_CHARACTER_MATCH_DETECTED(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : UartControl2
//
// Return the value of register UART_CONTROL2
//
// Notes : Register UartControl2 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_UART_CONTROL_2( base,  val) \
     WRITE_REGISTER_USHORT( base + 0x4, val)

#define SET_BITS_UART_CONTROL_2(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x4); \
     WRITE_REGISTER_USHORT( base + 0x4, val |  mask ); \
   } 

#define CLEAR_BITS_UART_CONTROL_2(base, mask) \
   {\
     USHORT val = READ_REGISTER_USHORT( base + 0x4); \
     WRITE_REGISTER_USHORT( base + 0x4,  val & ~mask ); \
   } 

#define READ_REGISTER_UART_CONTROL_2( base ) \
     READ_REGISTER_USHORT( base + 0x4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UartControl2
//
// Return the value of register UART_CONTROL_2
//
// Notes : Register Control register 2 (USART_CR2) at the offset 0x4, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // The whole received character (8-bit) is compared 
    // 
#define CHARACTER_MATCH_MASK 0xFF000000U
#define CHARACTER_MATCH_OFFSET 31
#define CHARACTER_MATCH_START_BIT 24
#define CHARACTER_MATCH_WIDTH 8



#define READ_CHARACTER_MATCH(base) \
    ((READ_REGISTER_USHORT(base + 0x4) & CHARACTER_MATCH_MASK) >> CHARACTER_MATCH_START_BIT )

#define WRITE_CHARACTER_MATCH(base, val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( base  + 0x4); \
     WRITE_REGISTER_USHORT( base + 0x4, (OldValue & ~CHARACTER_MATCH_MASK) | ((val << CHARACTER_MATCH_START_BIT) & CHARACTER_MATCH_MASK )); \
   } 

