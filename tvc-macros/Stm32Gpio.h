/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Stm32/Stm32Gpio/macro-c/Stm32Gpio.h
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
 
#define GPIO_BASE_D 0x40011400
#define GPIO_BASE_G 0x40012000
#define GPIO_BASE_A 0x40010800
#define GPIO_BASE_F 0x40011C00
#define GPIO_BASE_C 0x40011000
#define GPIO_BASE_B 0x40010C00
#define GPIO_BASE_E 0x40011800
#define NB_DEVICE_GPIO_BASE 7
/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIO_PORT_CONFIGURATION_LOW( y) \
     WRITE_REGISTER_ULONG( 0x40021000 , y)

#define SET_BITS_GPIO_PORT_CONFIGURATION_LOW(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021000); \
     WRITE_REGISTER_ULONG( 0x40021000 , val |  mask ); \
   }

#define CLEAR_BITS_GPIO_PORT_CONFIGURATION_LOW(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021000); \
     WRITE_REGISTER_ULONG( 0x40021000 , val & ~mask ); \
   }

#define READ_REGISTER_GPIO_PORT_CONFIGURATION_LOW() \
     READ_REGISTER_ULONG(0x40021000)

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION0_MASK 0xCU
#define GPIO_CONFIGURATION0_OFFSET 3
#define GPIO_CONFIGURATION0_STOP_BIT 3
#define GPIO_CONFIGURATION0_START_BIT 2
#define GPIO_CONFIGURATION0_WIDTH 2


typedef enum PortConfiguration {
    OUTPUT_PUSH_PULL,
    OUTPUT_OPEN_DRAIN,
    ALTERNATE_PUSH_PULL,
    ALTERNATE_FUNCTION_OUTPUT_OPEN_DRAIN
} PORT_CONFIGURATION_T ;


#define READ_GPIO_GPIO_CONFIGURATION0() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION0_MASK)  >> GPIO_CONFIGURATION0_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION0_MASK) | ((val << GPIO_CONFIGURATION0_START_BIT) & GPIO_CONFIGURATION0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION1_MASK 0xC0U
#define GPIO_CONFIGURATION1_OFFSET 7
#define GPIO_CONFIGURATION1_STOP_BIT 7
#define GPIO_CONFIGURATION1_START_BIT 6
#define GPIO_CONFIGURATION1_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION1() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION1_MASK)  >> GPIO_CONFIGURATION1_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION1_MASK) | ((val << GPIO_CONFIGURATION1_START_BIT) & GPIO_CONFIGURATION1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION2_MASK 0xC00U
#define GPIO_CONFIGURATION2_OFFSET 11
#define GPIO_CONFIGURATION2_STOP_BIT 11
#define GPIO_CONFIGURATION2_START_BIT 10
#define GPIO_CONFIGURATION2_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION2() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION2_MASK)  >> GPIO_CONFIGURATION2_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION2_MASK) | ((val << GPIO_CONFIGURATION2_START_BIT) & GPIO_CONFIGURATION2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION3_MASK 0xC000U
#define GPIO_CONFIGURATION3_OFFSET 15
#define GPIO_CONFIGURATION3_STOP_BIT 15
#define GPIO_CONFIGURATION3_START_BIT 14
#define GPIO_CONFIGURATION3_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION3() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION3_MASK)  >> GPIO_CONFIGURATION3_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION3_MASK) | ((val << GPIO_CONFIGURATION3_START_BIT) & GPIO_CONFIGURATION3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION4_MASK 0xC0000U
#define GPIO_CONFIGURATION4_OFFSET 19
#define GPIO_CONFIGURATION4_STOP_BIT 19
#define GPIO_CONFIGURATION4_START_BIT 18
#define GPIO_CONFIGURATION4_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION4() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION4_MASK)  >> GPIO_CONFIGURATION4_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION4_MASK) | ((val << GPIO_CONFIGURATION4_START_BIT) & GPIO_CONFIGURATION4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION5_MASK 0xC00000U
#define GPIO_CONFIGURATION5_OFFSET 23
#define GPIO_CONFIGURATION5_STOP_BIT 23
#define GPIO_CONFIGURATION5_START_BIT 22
#define GPIO_CONFIGURATION5_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION5() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION5_MASK)  >> GPIO_CONFIGURATION5_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION5_MASK) | ((val << GPIO_CONFIGURATION5_START_BIT) & GPIO_CONFIGURATION5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION6_MASK 0xC000000U
#define GPIO_CONFIGURATION6_OFFSET 27
#define GPIO_CONFIGURATION6_STOP_BIT 27
#define GPIO_CONFIGURATION6_START_BIT 26
#define GPIO_CONFIGURATION6_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION6() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION6_MASK)  >> GPIO_CONFIGURATION6_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION6_MASK) | ((val << GPIO_CONFIGURATION6_START_BIT) & GPIO_CONFIGURATION6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 30:31

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION7_MASK 0xC0000000U
#define GPIO_CONFIGURATION7_OFFSET 31
#define GPIO_CONFIGURATION7_STOP_BIT 31
#define GPIO_CONFIGURATION7_START_BIT 30
#define GPIO_CONFIGURATION7_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION7() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_CONFIGURATION7_MASK)  >> GPIO_CONFIGURATION7_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_CONFIGURATION7_MASK) | ((val << GPIO_CONFIGURATION7_START_BIT) & GPIO_CONFIGURATION7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE0_MASK 0x3U
#define GPIO_MODE0_OFFSET 1
#define GPIO_MODE0_STOP_BIT 1
#define GPIO_MODE0_START_BIT 0
#define GPIO_MODE0_WIDTH 2


typedef enum PortMode {
    INPUT_MODE,
    OUTPUT_MODE_10_MHZ,
    OUTPUT_MODE_2_MHZ,
    OUTPUT_MODE_50_MHZ
} PORT_MODE_T ;


#define READ_GPIO_GPIO_MODE0() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE0_MASK)  >> GPIO_MODE0_START_BIT)

#define WRITE_GPIO_GPIO_MODE0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE0_MASK) | ((val << GPIO_MODE0_START_BIT) & GPIO_MODE0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE1_MASK 0x30U
#define GPIO_MODE1_OFFSET 5
#define GPIO_MODE1_STOP_BIT 5
#define GPIO_MODE1_START_BIT 4
#define GPIO_MODE1_WIDTH 2




#define READ_GPIO_GPIO_MODE1() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE1_MASK)  >> GPIO_MODE1_START_BIT)

#define WRITE_GPIO_GPIO_MODE1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE1_MASK) | ((val << GPIO_MODE1_START_BIT) & GPIO_MODE1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE2_MASK 0x300U
#define GPIO_MODE2_OFFSET 9
#define GPIO_MODE2_STOP_BIT 9
#define GPIO_MODE2_START_BIT 8
#define GPIO_MODE2_WIDTH 2




#define READ_GPIO_GPIO_MODE2() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE2_MASK)  >> GPIO_MODE2_START_BIT)

#define WRITE_GPIO_GPIO_MODE2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE2_MASK) | ((val << GPIO_MODE2_START_BIT) & GPIO_MODE2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE3_MASK 0x3000U
#define GPIO_MODE3_OFFSET 13
#define GPIO_MODE3_STOP_BIT 13
#define GPIO_MODE3_START_BIT 12
#define GPIO_MODE3_WIDTH 2




#define READ_GPIO_GPIO_MODE3() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE3_MASK)  >> GPIO_MODE3_START_BIT)

#define WRITE_GPIO_GPIO_MODE3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE3_MASK) | ((val << GPIO_MODE3_START_BIT) & GPIO_MODE3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE4_MASK 0x30000U
#define GPIO_MODE4_OFFSET 17
#define GPIO_MODE4_STOP_BIT 17
#define GPIO_MODE4_START_BIT 16
#define GPIO_MODE4_WIDTH 2




#define READ_GPIO_GPIO_MODE4() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE4_MASK)  >> GPIO_MODE4_START_BIT)

#define WRITE_GPIO_GPIO_MODE4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE4_MASK) | ((val << GPIO_MODE4_START_BIT) & GPIO_MODE4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE5_MASK 0x300000U
#define GPIO_MODE5_OFFSET 21
#define GPIO_MODE5_STOP_BIT 21
#define GPIO_MODE5_START_BIT 20
#define GPIO_MODE5_WIDTH 2




#define READ_GPIO_GPIO_MODE5() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE5_MASK)  >> GPIO_MODE5_START_BIT)

#define WRITE_GPIO_GPIO_MODE5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE5_MASK) | ((val << GPIO_MODE5_START_BIT) & GPIO_MODE5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE6_MASK 0x3000000U
#define GPIO_MODE6_OFFSET 25
#define GPIO_MODE6_STOP_BIT 25
#define GPIO_MODE6_START_BIT 24
#define GPIO_MODE6_WIDTH 2




#define READ_GPIO_GPIO_MODE6() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE6_MASK)  >> GPIO_MODE6_START_BIT)

#define WRITE_GPIO_GPIO_MODE6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE6_MASK) | ((val << GPIO_MODE6_START_BIT) & GPIO_MODE6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationLow
//
// Return the value of register PORT_CONFIGURATION_LOW
//
// Notes : Register Port Configuration Register Low (GPIOX_CRL) (X=A..G) (GPIOX_CRL) at the offset 0x0, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE7_MASK 0x30000000U
#define GPIO_MODE7_OFFSET 29
#define GPIO_MODE7_STOP_BIT 29
#define GPIO_MODE7_START_BIT 28
#define GPIO_MODE7_WIDTH 2




#define READ_GPIO_GPIO_MODE7() \
   ((READ_REGISTER_ULONG(0x40021000) & GPIO_MODE7_MASK)  >> GPIO_MODE7_START_BIT)

#define WRITE_GPIO_GPIO_MODE7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021000); \
     WRITE_REGISTER_ULONG(0x40021000, (OldValue & ~ GPIO_MODE7_MASK) | ((val << GPIO_MODE7_START_BIT) & GPIO_MODE7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIO_PORT_CONFIGURATION_HIGH( y) \
     WRITE_REGISTER_ULONG( 0x40021004 , y)

#define SET_BITS_GPIO_PORT_CONFIGURATION_HIGH(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021004); \
     WRITE_REGISTER_ULONG( 0x40021004 , val |  mask ); \
   }

#define CLEAR_BITS_GPIO_PORT_CONFIGURATION_HIGH(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021004); \
     WRITE_REGISTER_ULONG( 0x40021004 , val & ~mask ); \
   }

#define READ_REGISTER_GPIO_PORT_CONFIGURATION_HIGH() \
     READ_REGISTER_ULONG(0x40021004)

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION8_MASK 0xCU
#define GPIO_CONFIGURATION8_OFFSET 3
#define GPIO_CONFIGURATION8_STOP_BIT 3
#define GPIO_CONFIGURATION8_START_BIT 2
#define GPIO_CONFIGURATION8_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION8() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION8_MASK)  >> GPIO_CONFIGURATION8_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION8_MASK) | ((val << GPIO_CONFIGURATION8_START_BIT) & GPIO_CONFIGURATION8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION9_MASK 0xC0U
#define GPIO_CONFIGURATION9_OFFSET 7
#define GPIO_CONFIGURATION9_STOP_BIT 7
#define GPIO_CONFIGURATION9_START_BIT 6
#define GPIO_CONFIGURATION9_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION9() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION9_MASK)  >> GPIO_CONFIGURATION9_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION9_MASK) | ((val << GPIO_CONFIGURATION9_START_BIT) & GPIO_CONFIGURATION9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION10_MASK 0xC00U
#define GPIO_CONFIGURATION10_OFFSET 11
#define GPIO_CONFIGURATION10_STOP_BIT 11
#define GPIO_CONFIGURATION10_START_BIT 10
#define GPIO_CONFIGURATION10_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION10() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION10_MASK)  >> GPIO_CONFIGURATION10_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION10_MASK) | ((val << GPIO_CONFIGURATION10_START_BIT) & GPIO_CONFIGURATION10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION11_MASK 0xC000U
#define GPIO_CONFIGURATION11_OFFSET 15
#define GPIO_CONFIGURATION11_STOP_BIT 15
#define GPIO_CONFIGURATION11_START_BIT 14
#define GPIO_CONFIGURATION11_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION11() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION11_MASK)  >> GPIO_CONFIGURATION11_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION11_MASK) | ((val << GPIO_CONFIGURATION11_START_BIT) & GPIO_CONFIGURATION11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION12_MASK 0xC0000U
#define GPIO_CONFIGURATION12_OFFSET 19
#define GPIO_CONFIGURATION12_STOP_BIT 19
#define GPIO_CONFIGURATION12_START_BIT 18
#define GPIO_CONFIGURATION12_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION12() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION12_MASK)  >> GPIO_CONFIGURATION12_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION12_MASK) | ((val << GPIO_CONFIGURATION12_START_BIT) & GPIO_CONFIGURATION12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION13_MASK 0xC00000U
#define GPIO_CONFIGURATION13_OFFSET 23
#define GPIO_CONFIGURATION13_STOP_BIT 23
#define GPIO_CONFIGURATION13_START_BIT 22
#define GPIO_CONFIGURATION13_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION13() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION13_MASK)  >> GPIO_CONFIGURATION13_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION13_MASK) | ((val << GPIO_CONFIGURATION13_START_BIT) & GPIO_CONFIGURATION13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION14_MASK 0xC000000U
#define GPIO_CONFIGURATION14_OFFSET 27
#define GPIO_CONFIGURATION14_STOP_BIT 27
#define GPIO_CONFIGURATION14_START_BIT 26
#define GPIO_CONFIGURATION14_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION14() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION14_MASK)  >> GPIO_CONFIGURATION14_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION14_MASK) | ((val << GPIO_CONFIGURATION14_START_BIT) & GPIO_CONFIGURATION14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 30:31

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_CONFIGURATION15_MASK 0xC0000000U
#define GPIO_CONFIGURATION15_OFFSET 31
#define GPIO_CONFIGURATION15_STOP_BIT 31
#define GPIO_CONFIGURATION15_START_BIT 30
#define GPIO_CONFIGURATION15_WIDTH 2




#define READ_GPIO_GPIO_CONFIGURATION15() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_CONFIGURATION15_MASK)  >> GPIO_CONFIGURATION15_START_BIT)

#define WRITE_GPIO_GPIO_CONFIGURATION15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_CONFIGURATION15_MASK) | ((val << GPIO_CONFIGURATION15_START_BIT) & GPIO_CONFIGURATION15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE8_MASK 0x3U
#define GPIO_MODE8_OFFSET 1
#define GPIO_MODE8_STOP_BIT 1
#define GPIO_MODE8_START_BIT 0
#define GPIO_MODE8_WIDTH 2




#define READ_GPIO_GPIO_MODE8() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE8_MASK)  >> GPIO_MODE8_START_BIT)

#define WRITE_GPIO_GPIO_MODE8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE8_MASK) | ((val << GPIO_MODE8_START_BIT) & GPIO_MODE8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE9_MASK 0x30U
#define GPIO_MODE9_OFFSET 5
#define GPIO_MODE9_STOP_BIT 5
#define GPIO_MODE9_START_BIT 4
#define GPIO_MODE9_WIDTH 2




#define READ_GPIO_GPIO_MODE9() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE9_MASK)  >> GPIO_MODE9_START_BIT)

#define WRITE_GPIO_GPIO_MODE9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE9_MASK) | ((val << GPIO_MODE9_START_BIT) & GPIO_MODE9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE10_MASK 0x300U
#define GPIO_MODE10_OFFSET 9
#define GPIO_MODE10_STOP_BIT 9
#define GPIO_MODE10_START_BIT 8
#define GPIO_MODE10_WIDTH 2




#define READ_GPIO_GPIO_MODE10() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE10_MASK)  >> GPIO_MODE10_START_BIT)

#define WRITE_GPIO_GPIO_MODE10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE10_MASK) | ((val << GPIO_MODE10_START_BIT) & GPIO_MODE10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE11_MASK 0x3000U
#define GPIO_MODE11_OFFSET 13
#define GPIO_MODE11_STOP_BIT 13
#define GPIO_MODE11_START_BIT 12
#define GPIO_MODE11_WIDTH 2




#define READ_GPIO_GPIO_MODE11() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE11_MASK)  >> GPIO_MODE11_START_BIT)

#define WRITE_GPIO_GPIO_MODE11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE11_MASK) | ((val << GPIO_MODE11_START_BIT) & GPIO_MODE11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE12_MASK 0x30000U
#define GPIO_MODE12_OFFSET 17
#define GPIO_MODE12_STOP_BIT 17
#define GPIO_MODE12_START_BIT 16
#define GPIO_MODE12_WIDTH 2




#define READ_GPIO_GPIO_MODE12() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE12_MASK)  >> GPIO_MODE12_START_BIT)

#define WRITE_GPIO_GPIO_MODE12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE12_MASK) | ((val << GPIO_MODE12_START_BIT) & GPIO_MODE12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE13_MASK 0x300000U
#define GPIO_MODE13_OFFSET 21
#define GPIO_MODE13_STOP_BIT 21
#define GPIO_MODE13_START_BIT 20
#define GPIO_MODE13_WIDTH 2




#define READ_GPIO_GPIO_MODE13() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE13_MASK)  >> GPIO_MODE13_START_BIT)

#define WRITE_GPIO_GPIO_MODE13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE13_MASK) | ((val << GPIO_MODE13_START_BIT) & GPIO_MODE13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE14_MASK 0x3000000U
#define GPIO_MODE14_OFFSET 25
#define GPIO_MODE14_STOP_BIT 25
#define GPIO_MODE14_START_BIT 24
#define GPIO_MODE14_WIDTH 2




#define READ_GPIO_GPIO_MODE14() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE14_MASK)  >> GPIO_MODE14_START_BIT)

#define WRITE_GPIO_GPIO_MODE14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE14_MASK) | ((val << GPIO_MODE14_START_BIT) & GPIO_MODE14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortConfigurationHigh
//
// Return the value of register PORT_CONFIGURATION_HIGH
//
// Notes : Register Port configuration register high (GPIOx_CRH) (x=A..G) (GPIOx_CRH) at the offset 0x4, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////
#define GPIO_MODE15_MASK 0x30000000U
#define GPIO_MODE15_OFFSET 29
#define GPIO_MODE15_STOP_BIT 29
#define GPIO_MODE15_START_BIT 28
#define GPIO_MODE15_WIDTH 2




#define READ_GPIO_GPIO_MODE15() \
   ((READ_REGISTER_ULONG(0x40021004) & GPIO_MODE15_MASK)  >> GPIO_MODE15_START_BIT)

#define WRITE_GPIO_GPIO_MODE15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40021004); \
     WRITE_REGISTER_ULONG(0x40021004, (OldValue & ~ GPIO_MODE15_MASK) | ((val << GPIO_MODE15_START_BIT) & GPIO_MODE15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortInputData
//
// Return the value of register PORT_INPUT_DATA
//
// Notes : Register Port input data register (GPIOx_IDR) (x=A..G ) at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIO_PORT_INPUT_DATA( y) \
     WRITE_REGISTER_ULONG( 0x40021008 , y)

#define SET_BITS_GPIO_PORT_INPUT_DATA(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021008); \
     WRITE_REGISTER_ULONG( 0x40021008 , val |  mask ); \
   }

#define CLEAR_BITS_GPIO_PORT_INPUT_DATA(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021008); \
     WRITE_REGISTER_ULONG( 0x40021008 , val & ~mask ); \
   }

#define READ_REGISTER_GPIO_PORT_INPUT_DATA() \
     READ_REGISTER_ULONG(0x40021008)

/////////////////////////////////////////////////////////////////////////
//
// Function : PortOutputData
//
// Return the value of register PORT_OUTPUT_DATA
//
// Notes : Register Port output data register (GPIOx_ODR) (x=A..G) at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIO_PORT_OUTPUT_DATA( y) \
     WRITE_REGISTER_ULONG( 0x4002100C , y)

#define SET_BITS_GPIO_PORT_OUTPUT_DATA(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4002100C); \
     WRITE_REGISTER_ULONG( 0x4002100C , val |  mask ); \
   }

#define CLEAR_BITS_GPIO_PORT_OUTPUT_DATA(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4002100C); \
     WRITE_REGISTER_ULONG( 0x4002100C , val & ~mask ); \
   }

#define READ_REGISTER_GPIO_PORT_OUTPUT_DATA() \
     READ_REGISTER_ULONG(0x4002100C)

/////////////////////////////////////////////////////////////////////////
//
// Function : PortSetReset
//
// Return the value of register PORT_SET_RESET
//
// Notes : Register Port bit set/reset register (GPIOx_BSRR) (x=A..G) at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIO_PORT_SET_RESET( y) \
     WRITE_REGISTER_USHORT( 0x40021010 , y)

#define SET_BITS_GPIO_PORT_SET_RESET(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  mask ); \
   }

#define CLEAR_BITS_GPIO_PORT_SET_RESET(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val & ~mask ); \
   }

#define READ_REGISTER_GPIO_PORT_SET_RESET() \
     READ_REGISTER_USHORT(0x40021010)

/////////////////////////////////////////////////////////////////////////
//
// Function : PortSetReset
//
// Return the value of register PORT_SET_RESET
//
// Notes : Register Port bit set/reset register (GPIOx_BSRR) (x=A..G) (GPIOx_BSRR) at the offset 0x10, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////
#define BIT_SET_MASK 0xFFFFU
#define BIT_SET_OFFSET 15
#define BIT_SET_STOP_BIT 15
#define BIT_SET_START_BIT 0
#define BIT_SET_WIDTH 16


#define GPIO_PORT_SET_RESET_REG 0x10
#define WRITE_GPIO_BIT_SET(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ BIT_SET_MASK) | ((val << BIT_SET_START_BIT) & BIT_SET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortSetReset
//
// Return the value of register PORT_SET_RESET
//
// Notes : Register Port bit set/reset register (GPIOx_BSRR) (x=A..G) (GPIOx_BSRR) at the offset 0x10, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////
#define BIT_RESET_MASK 0xFFFFU
#define BIT_RESET_OFFSET 15
#define BIT_RESET_STOP_BIT 15
#define BIT_RESET_START_BIT 0
#define BIT_RESET_WIDTH 16


#define WRITE_GPIO_BIT_RESET(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021010); \
     WRITE_REGISTER_USHORT(0x40021010, (OldValue & ~ BIT_RESET_MASK) | ((val << BIT_RESET_START_BIT) & BIT_RESET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PortLock
//
// Return the value of register PORT_LOCK
//
// Notes : Register Each lock bit freezes the corresponding 4 bits of the control register at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIO_PORT_LOCK( y) \
     WRITE_REGISTER_ULONG( 0x40021014 , y)

#define SET_BITS_GPIO_PORT_LOCK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021014); \
     WRITE_REGISTER_ULONG( 0x40021014 , val |  mask ); \
   }

#define CLEAR_BITS_GPIO_PORT_LOCK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40021014); \
     WRITE_REGISTER_ULONG( 0x40021014 , val & ~mask ); \
   }

#define READ_REGISTER_GPIO_PORT_LOCK() \
     READ_REGISTER_ULONG(0x40021014)

