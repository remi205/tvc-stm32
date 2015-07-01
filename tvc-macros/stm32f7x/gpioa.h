/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/gpioa.h
// 
//
// Generated on the 29/06/2015 19:00 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by rémi prud'homme
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht remi prudhomme, tvc stm32 2015  2015
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
#define GPIOA 0x40020000
/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register Moder at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MODER( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_MODER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_MODER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_MODER() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER0_MASK 0x3U
#define MODER0_OFFSET 1
#define MODER0_START_BIT 0
#define MODER0_WIDTH 2


#define MODER_REG 0x0

typedef enum moder0 {
    MODER_0_0,
    MODER_0_1
} MODER_0_T ;
#define READ_MODER0() \
   ((READ_REGISTER_ULONG(0x0) & MODER0_MASK)  >> MODER0_START_BIT)

#define WRITE_MODER0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER0_MASK) | ((val << MODER0_START_BIT) & MODER0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER1_MASK 0xCU
#define MODER1_OFFSET 3
#define MODER1_START_BIT 2
#define MODER1_WIDTH 2



typedef enum moder1 {
    MODER_1_0,
    MODER_1_1
} MODER_1_T ;
#define READ_MODER1() \
   ((READ_REGISTER_ULONG(0x0) & MODER1_MASK)  >> MODER1_START_BIT)

#define WRITE_MODER1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER1_MASK) | ((val << MODER1_START_BIT) & MODER1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER2_MASK 0x30U
#define MODER2_OFFSET 5
#define MODER2_START_BIT 4
#define MODER2_WIDTH 2



typedef enum moder2 {
    MODER_2_0,
    MODER_2_1
} MODER_2_T ;
#define READ_MODER2() \
   ((READ_REGISTER_ULONG(0x0) & MODER2_MASK)  >> MODER2_START_BIT)

#define WRITE_MODER2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER2_MASK) | ((val << MODER2_START_BIT) & MODER2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER3_MASK 0xC0U
#define MODER3_OFFSET 7
#define MODER3_START_BIT 6
#define MODER3_WIDTH 2



typedef enum moder3 {
    MODER_3_0,
    MODER_3_1
} MODER_3_T ;
#define READ_MODER3() \
   ((READ_REGISTER_ULONG(0x0) & MODER3_MASK)  >> MODER3_START_BIT)

#define WRITE_MODER3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER3_MASK) | ((val << MODER3_START_BIT) & MODER3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER4_MASK 0x300U
#define MODER4_OFFSET 9
#define MODER4_START_BIT 8
#define MODER4_WIDTH 2



typedef enum moder4 {
    MODER_4_0,
    MODER_4_1
} MODER_4_T ;
#define READ_MODER4() \
   ((READ_REGISTER_ULONG(0x0) & MODER4_MASK)  >> MODER4_START_BIT)

#define WRITE_MODER4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER4_MASK) | ((val << MODER4_START_BIT) & MODER4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER5_MASK 0xC00U
#define MODER5_OFFSET 11
#define MODER5_START_BIT 10
#define MODER5_WIDTH 2



typedef enum moder5 {
    MODER_5_0,
    MODER_5_1
} MODER_5_T ;
#define READ_MODER5() \
   ((READ_REGISTER_ULONG(0x0) & MODER5_MASK)  >> MODER5_START_BIT)

#define WRITE_MODER5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER5_MASK) | ((val << MODER5_START_BIT) & MODER5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER6_MASK 0x3000U
#define MODER6_OFFSET 13
#define MODER6_START_BIT 12
#define MODER6_WIDTH 2



typedef enum moder6 {
    MODER_6_0,
    MODER_6_1
} MODER_6_T ;
#define READ_MODER6() \
   ((READ_REGISTER_ULONG(0x0) & MODER6_MASK)  >> MODER6_START_BIT)

#define WRITE_MODER6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER6_MASK) | ((val << MODER6_START_BIT) & MODER6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER7_MASK 0xC000U
#define MODER7_OFFSET 15
#define MODER7_START_BIT 14
#define MODER7_WIDTH 2



typedef enum moder7 {
    MODER_7_0,
    MODER_7_1
} MODER_7_T ;
#define READ_MODER7() \
   ((READ_REGISTER_ULONG(0x0) & MODER7_MASK)  >> MODER7_START_BIT)

#define WRITE_MODER7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER7_MASK) | ((val << MODER7_START_BIT) & MODER7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER8_MASK 0x30000U
#define MODER8_OFFSET 17
#define MODER8_START_BIT 16
#define MODER8_WIDTH 2



typedef enum moder8 {
    MODER_8_0,
    MODER_8_1
} MODER_8_T ;
#define READ_MODER8() \
   ((READ_REGISTER_ULONG(0x0) & MODER8_MASK)  >> MODER8_START_BIT)

#define WRITE_MODER8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER8_MASK) | ((val << MODER8_START_BIT) & MODER8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER9_MASK 0xC0000U
#define MODER9_OFFSET 19
#define MODER9_START_BIT 18
#define MODER9_WIDTH 2



typedef enum moder9 {
    MODER_9_0,
    MODER_9_1
} MODER_9_T ;
#define READ_MODER9() \
   ((READ_REGISTER_ULONG(0x0) & MODER9_MASK)  >> MODER9_START_BIT)

#define WRITE_MODER9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER9_MASK) | ((val << MODER9_START_BIT) & MODER9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER10_MASK 0x300000U
#define MODER10_OFFSET 21
#define MODER10_START_BIT 20
#define MODER10_WIDTH 2



typedef enum moder10 {
    MODER_1_0_0,
    MODER_1_0_1
} MODER_10_T ;
#define READ_MODER10() \
   ((READ_REGISTER_ULONG(0x0) & MODER10_MASK)  >> MODER10_START_BIT)

#define WRITE_MODER10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER10_MASK) | ((val << MODER10_START_BIT) & MODER10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER11_MASK 0xC00000U
#define MODER11_OFFSET 23
#define MODER11_START_BIT 22
#define MODER11_WIDTH 2



typedef enum moder11 {
    MODER_1_1_0,
    MODER_1_1_1
} MODER_11_T ;
#define READ_MODER11() \
   ((READ_REGISTER_ULONG(0x0) & MODER11_MASK)  >> MODER11_START_BIT)

#define WRITE_MODER11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER11_MASK) | ((val << MODER11_START_BIT) & MODER11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER12_MASK 0x3000000U
#define MODER12_OFFSET 25
#define MODER12_START_BIT 24
#define MODER12_WIDTH 2



typedef enum moder12 {
    MODER_1_2_0,
    MODER_1_2_1
} MODER_12_T ;
#define READ_MODER12() \
   ((READ_REGISTER_ULONG(0x0) & MODER12_MASK)  >> MODER12_START_BIT)

#define WRITE_MODER12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER12_MASK) | ((val << MODER12_START_BIT) & MODER12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER13_MASK 0xC000000U
#define MODER13_OFFSET 27
#define MODER13_START_BIT 26
#define MODER13_WIDTH 2



typedef enum moder13 {
    MODER_1_3_0,
    MODER_1_3_1
} MODER_13_T ;
#define READ_MODER13() \
   ((READ_REGISTER_ULONG(0x0) & MODER13_MASK)  >> MODER13_START_BIT)

#define WRITE_MODER13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER13_MASK) | ((val << MODER13_START_BIT) & MODER13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER14_MASK 0x30000000U
#define MODER14_OFFSET 29
#define MODER14_START_BIT 28
#define MODER14_WIDTH 2



typedef enum moder14 {
    MODER_1_4_0,
    MODER_1_4_1
} MODER_14_T ;
#define READ_MODER14() \
   ((READ_REGISTER_ULONG(0x0) & MODER14_MASK)  >> MODER14_START_BIT)

#define WRITE_MODER14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER14_MASK) | ((val << MODER14_START_BIT) & MODER14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register GPIO port mode register (MODER) at the offset 0x0, Bits 30:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define MODER15_MASK 0xC0000000U
#define MODER15_OFFSET 31
#define MODER15_START_BIT 30
#define MODER15_WIDTH 2



typedef enum moder15 {
    MODER_1_5_0,
    MODER_1_5_1
} MODER_15_T ;
#define READ_MODER15() \
   ((READ_REGISTER_ULONG(0x0) & MODER15_MASK)  >> MODER15_START_BIT)

#define WRITE_MODER15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODER15_MASK) | ((val << MODER15_START_BIT) & MODER15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register Otyper at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTYPER( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_OTYPER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_OTYPER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_OTYPER() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT0_MASK 0x1U
#define OT0_OFFSET 0
#define OT0_START_BIT 0
#define OT0_WIDTH 1


#define OTYPER_REG 0x4

typedef enum ot0 {
    OT_0_0,
    OT_0_1
} OT_0_T ;
#define WRITE_OT0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT0_MASK) | ((val << OT0_START_BIT) & OT0_MASK )); \
   } 

#define ENABLE_OT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT0_MASK ); \
   }

#define DISABLE_OT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT0_MASK ); \
   } 

#define READ_OT0() \
   ((READ_REGISTER_ULONG(0x4) & OT0_MASK)  >> OT0_START_BIT)

#define WHEN_OT0_HIGH() \
     if ( READ_OT0() )


#define UNLESS_OT0_HIGH() \
     if (! READ_OT0() )


#define WAIT_OT0_LOW() \
    while ( READ_OT0() );


#define WAIT_OT0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT0() && (--___t___ > 0)); }


#define WAIT_OT0_HIGH() \
    while (! READ_OT0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT1_MASK 0x2U
#define OT1_OFFSET 1
#define OT1_START_BIT 1
#define OT1_WIDTH 1



typedef enum ot1 {
    OT_1_0,
    OT_1_1
} OT_1_T ;
#define WRITE_OT1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT1_MASK) | ((val << OT1_START_BIT) & OT1_MASK )); \
   } 

#define ENABLE_OT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT1_MASK ); \
   }

#define DISABLE_OT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT1_MASK ); \
   } 

#define READ_OT1() \
   ((READ_REGISTER_ULONG(0x4) & OT1_MASK)  >> OT1_START_BIT)

#define WHEN_OT1_HIGH() \
     if ( READ_OT1() )


#define UNLESS_OT1_HIGH() \
     if (! READ_OT1() )


#define WAIT_OT1_LOW() \
    while ( READ_OT1() );


#define WAIT_OT1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT1() && (--___t___ > 0)); }


#define WAIT_OT1_HIGH() \
    while (! READ_OT1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT2_MASK 0x4U
#define OT2_OFFSET 2
#define OT2_START_BIT 2
#define OT2_WIDTH 1



typedef enum ot2 {
    OT_2_0,
    OT_2_1
} OT_2_T ;
#define WRITE_OT2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT2_MASK) | ((val << OT2_START_BIT) & OT2_MASK )); \
   } 

#define ENABLE_OT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT2_MASK ); \
   }

#define DISABLE_OT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT2_MASK ); \
   } 

#define READ_OT2() \
   ((READ_REGISTER_ULONG(0x4) & OT2_MASK)  >> OT2_START_BIT)

#define WHEN_OT2_HIGH() \
     if ( READ_OT2() )


#define UNLESS_OT2_HIGH() \
     if (! READ_OT2() )


#define WAIT_OT2_LOW() \
    while ( READ_OT2() );


#define WAIT_OT2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT2() && (--___t___ > 0)); }


#define WAIT_OT2_HIGH() \
    while (! READ_OT2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT3_MASK 0x8U
#define OT3_OFFSET 3
#define OT3_START_BIT 3
#define OT3_WIDTH 1



typedef enum ot3 {
    OT_3_0,
    OT_3_1
} OT_3_T ;
#define WRITE_OT3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT3_MASK) | ((val << OT3_START_BIT) & OT3_MASK )); \
   } 

#define ENABLE_OT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT3_MASK ); \
   }

#define DISABLE_OT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT3_MASK ); \
   } 

#define READ_OT3() \
   ((READ_REGISTER_ULONG(0x4) & OT3_MASK)  >> OT3_START_BIT)

#define WHEN_OT3_HIGH() \
     if ( READ_OT3() )


#define UNLESS_OT3_HIGH() \
     if (! READ_OT3() )


#define WAIT_OT3_LOW() \
    while ( READ_OT3() );


#define WAIT_OT3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT3() && (--___t___ > 0)); }


#define WAIT_OT3_HIGH() \
    while (! READ_OT3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT4_MASK 0x10U
#define OT4_OFFSET 4
#define OT4_START_BIT 4
#define OT4_WIDTH 1



typedef enum ot4 {
    OT_4_0,
    OT_4_1
} OT_4_T ;
#define WRITE_OT4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT4_MASK) | ((val << OT4_START_BIT) & OT4_MASK )); \
   } 

#define ENABLE_OT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT4_MASK ); \
   }

#define DISABLE_OT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT4_MASK ); \
   } 

#define READ_OT4() \
   ((READ_REGISTER_ULONG(0x4) & OT4_MASK)  >> OT4_START_BIT)

#define WHEN_OT4_HIGH() \
     if ( READ_OT4() )


#define UNLESS_OT4_HIGH() \
     if (! READ_OT4() )


#define WAIT_OT4_LOW() \
    while ( READ_OT4() );


#define WAIT_OT4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT4() && (--___t___ > 0)); }


#define WAIT_OT4_HIGH() \
    while (! READ_OT4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT5_MASK 0x20U
#define OT5_OFFSET 5
#define OT5_START_BIT 5
#define OT5_WIDTH 1



typedef enum ot5 {
    OT_5_0,
    OT_5_1
} OT_5_T ;
#define WRITE_OT5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT5_MASK) | ((val << OT5_START_BIT) & OT5_MASK )); \
   } 

#define ENABLE_OT5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT5_MASK ); \
   }

#define DISABLE_OT5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT5_MASK ); \
   } 

#define READ_OT5() \
   ((READ_REGISTER_ULONG(0x4) & OT5_MASK)  >> OT5_START_BIT)

#define WHEN_OT5_HIGH() \
     if ( READ_OT5() )


#define UNLESS_OT5_HIGH() \
     if (! READ_OT5() )


#define WAIT_OT5_LOW() \
    while ( READ_OT5() );


#define WAIT_OT5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT5() && (--___t___ > 0)); }


#define WAIT_OT5_HIGH() \
    while (! READ_OT5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT6_MASK 0x40U
#define OT6_OFFSET 6
#define OT6_START_BIT 6
#define OT6_WIDTH 1



typedef enum ot6 {
    OT_6_0,
    OT_6_1
} OT_6_T ;
#define WRITE_OT6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT6_MASK) | ((val << OT6_START_BIT) & OT6_MASK )); \
   } 

#define ENABLE_OT6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT6_MASK ); \
   }

#define DISABLE_OT6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT6_MASK ); \
   } 

#define READ_OT6() \
   ((READ_REGISTER_ULONG(0x4) & OT6_MASK)  >> OT6_START_BIT)

#define WHEN_OT6_HIGH() \
     if ( READ_OT6() )


#define UNLESS_OT6_HIGH() \
     if (! READ_OT6() )


#define WAIT_OT6_LOW() \
    while ( READ_OT6() );


#define WAIT_OT6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT6() && (--___t___ > 0)); }


#define WAIT_OT6_HIGH() \
    while (! READ_OT6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT7_MASK 0x80U
#define OT7_OFFSET 7
#define OT7_START_BIT 7
#define OT7_WIDTH 1



typedef enum ot7 {
    OT_7_0,
    OT_7_1
} OT_7_T ;
#define WRITE_OT7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT7_MASK) | ((val << OT7_START_BIT) & OT7_MASK )); \
   } 

#define ENABLE_OT7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT7_MASK ); \
   }

#define DISABLE_OT7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT7_MASK ); \
   } 

#define READ_OT7() \
   ((READ_REGISTER_ULONG(0x4) & OT7_MASK)  >> OT7_START_BIT)

#define WHEN_OT7_HIGH() \
     if ( READ_OT7() )


#define UNLESS_OT7_HIGH() \
     if (! READ_OT7() )


#define WAIT_OT7_LOW() \
    while ( READ_OT7() );


#define WAIT_OT7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT7() && (--___t___ > 0)); }


#define WAIT_OT7_HIGH() \
    while (! READ_OT7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT8_MASK 0x100U
#define OT8_OFFSET 8
#define OT8_START_BIT 8
#define OT8_WIDTH 1



typedef enum ot8 {
    OT_8_0,
    OT_8_1
} OT_8_T ;
#define WRITE_OT8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT8_MASK) | ((val << OT8_START_BIT) & OT8_MASK )); \
   } 

#define ENABLE_OT8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT8_MASK ); \
   }

#define DISABLE_OT8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT8_MASK ); \
   } 

#define READ_OT8() \
   ((READ_REGISTER_ULONG(0x4) & OT8_MASK)  >> OT8_START_BIT)

#define WHEN_OT8_HIGH() \
     if ( READ_OT8() )


#define UNLESS_OT8_HIGH() \
     if (! READ_OT8() )


#define WAIT_OT8_LOW() \
    while ( READ_OT8() );


#define WAIT_OT8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT8() && (--___t___ > 0)); }


#define WAIT_OT8_HIGH() \
    while (! READ_OT8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT9_MASK 0x200U
#define OT9_OFFSET 9
#define OT9_START_BIT 9
#define OT9_WIDTH 1



typedef enum ot9 {
    OT_9_0,
    OT_9_1
} OT_9_T ;
#define WRITE_OT9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT9_MASK) | ((val << OT9_START_BIT) & OT9_MASK )); \
   } 

#define ENABLE_OT9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT9_MASK ); \
   }

#define DISABLE_OT9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT9_MASK ); \
   } 

#define READ_OT9() \
   ((READ_REGISTER_ULONG(0x4) & OT9_MASK)  >> OT9_START_BIT)

#define WHEN_OT9_HIGH() \
     if ( READ_OT9() )


#define UNLESS_OT9_HIGH() \
     if (! READ_OT9() )


#define WAIT_OT9_LOW() \
    while ( READ_OT9() );


#define WAIT_OT9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT9() && (--___t___ > 0)); }


#define WAIT_OT9_HIGH() \
    while (! READ_OT9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT10_MASK 0x400U
#define OT10_OFFSET 10
#define OT10_START_BIT 10
#define OT10_WIDTH 1



typedef enum ot10 {
    OT_1_0_0,
    OT_1_0_1
} OT_10_T ;
#define WRITE_OT10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT10_MASK) | ((val << OT10_START_BIT) & OT10_MASK )); \
   } 

#define ENABLE_OT10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT10_MASK ); \
   }

#define DISABLE_OT10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT10_MASK ); \
   } 

#define READ_OT10() \
   ((READ_REGISTER_ULONG(0x4) & OT10_MASK)  >> OT10_START_BIT)

#define WHEN_OT10_HIGH() \
     if ( READ_OT10() )


#define UNLESS_OT10_HIGH() \
     if (! READ_OT10() )


#define WAIT_OT10_LOW() \
    while ( READ_OT10() );


#define WAIT_OT10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT10() && (--___t___ > 0)); }


#define WAIT_OT10_HIGH() \
    while (! READ_OT10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT11_MASK 0x800U
#define OT11_OFFSET 11
#define OT11_START_BIT 11
#define OT11_WIDTH 1



typedef enum ot11 {
    OT_1_1_0,
    OT_1_1_1
} OT_11_T ;
#define WRITE_OT11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT11_MASK) | ((val << OT11_START_BIT) & OT11_MASK )); \
   } 

#define ENABLE_OT11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT11_MASK ); \
   }

#define DISABLE_OT11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT11_MASK ); \
   } 

#define READ_OT11() \
   ((READ_REGISTER_ULONG(0x4) & OT11_MASK)  >> OT11_START_BIT)

#define WHEN_OT11_HIGH() \
     if ( READ_OT11() )


#define UNLESS_OT11_HIGH() \
     if (! READ_OT11() )


#define WAIT_OT11_LOW() \
    while ( READ_OT11() );


#define WAIT_OT11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT11() && (--___t___ > 0)); }


#define WAIT_OT11_HIGH() \
    while (! READ_OT11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT12_MASK 0x1000U
#define OT12_OFFSET 12
#define OT12_START_BIT 12
#define OT12_WIDTH 1



typedef enum ot12 {
    OT_1_2_0,
    OT_1_2_1
} OT_12_T ;
#define WRITE_OT12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT12_MASK) | ((val << OT12_START_BIT) & OT12_MASK )); \
   } 

#define ENABLE_OT12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT12_MASK ); \
   }

#define DISABLE_OT12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT12_MASK ); \
   } 

#define READ_OT12() \
   ((READ_REGISTER_ULONG(0x4) & OT12_MASK)  >> OT12_START_BIT)

#define WHEN_OT12_HIGH() \
     if ( READ_OT12() )


#define UNLESS_OT12_HIGH() \
     if (! READ_OT12() )


#define WAIT_OT12_LOW() \
    while ( READ_OT12() );


#define WAIT_OT12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT12() && (--___t___ > 0)); }


#define WAIT_OT12_HIGH() \
    while (! READ_OT12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT13_MASK 0x2000U
#define OT13_OFFSET 13
#define OT13_START_BIT 13
#define OT13_WIDTH 1



typedef enum ot13 {
    OT_1_3_0,
    OT_1_3_1
} OT_13_T ;
#define WRITE_OT13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT13_MASK) | ((val << OT13_START_BIT) & OT13_MASK )); \
   } 

#define ENABLE_OT13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT13_MASK ); \
   }

#define DISABLE_OT13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT13_MASK ); \
   } 

#define READ_OT13() \
   ((READ_REGISTER_ULONG(0x4) & OT13_MASK)  >> OT13_START_BIT)

#define WHEN_OT13_HIGH() \
     if ( READ_OT13() )


#define UNLESS_OT13_HIGH() \
     if (! READ_OT13() )


#define WAIT_OT13_LOW() \
    while ( READ_OT13() );


#define WAIT_OT13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT13() && (--___t___ > 0)); }


#define WAIT_OT13_HIGH() \
    while (! READ_OT13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT14_MASK 0x4000U
#define OT14_OFFSET 14
#define OT14_START_BIT 14
#define OT14_WIDTH 1



typedef enum ot14 {
    OT_1_4_0,
    OT_1_4_1
} OT_14_T ;
#define WRITE_OT14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT14_MASK) | ((val << OT14_START_BIT) & OT14_MASK )); \
   } 

#define ENABLE_OT14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT14_MASK ); \
   }

#define DISABLE_OT14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT14_MASK ); \
   } 

#define READ_OT14() \
   ((READ_REGISTER_ULONG(0x4) & OT14_MASK)  >> OT14_START_BIT)

#define WHEN_OT14_HIGH() \
     if ( READ_OT14() )


#define UNLESS_OT14_HIGH() \
     if (! READ_OT14() )


#define WAIT_OT14_LOW() \
    while ( READ_OT14() );


#define WAIT_OT14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT14() && (--___t___ > 0)); }


#define WAIT_OT14_HIGH() \
    while (! READ_OT14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register GPIO port output type register (OTYPER) at the offset 0x4, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OT15_MASK 0x8000U
#define OT15_OFFSET 15
#define OT15_START_BIT 15
#define OT15_WIDTH 1



typedef enum ot15 {
    OT_1_5_0,
    OT_1_5_1
} OT_15_T ;
#define WRITE_OT15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OT15_MASK) | ((val << OT15_START_BIT) & OT15_MASK )); \
   } 

#define ENABLE_OT15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OT15_MASK ); \
   }

#define DISABLE_OT15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OT15_MASK ); \
   } 

#define READ_OT15() \
   ((READ_REGISTER_ULONG(0x4) & OT15_MASK)  >> OT15_START_BIT)

#define WHEN_OT15_HIGH() \
     if ( READ_OT15() )


#define UNLESS_OT15_HIGH() \
     if (! READ_OT15() )


#define WAIT_OT15_LOW() \
    while ( READ_OT15() );


#define WAIT_OT15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT15() && (--___t___ > 0)); }


#define WAIT_OT15_HIGH() \
    while (! READ_OT15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GpiobOspeedr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIOB_OSPEEDR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_GPIOB_OSPEEDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_GPIOB_OSPEEDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_GPIOB_OSPEEDR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR0_MASK 0x3U
#define OSPEEDR0_OFFSET 1
#define OSPEEDR0_START_BIT 0
#define OSPEEDR0_WIDTH 2


#define GPIOB_OSPEEDR_REG 0x8

typedef enum ospeedr0 {
    OSPEEDR_0_0,
    OSPEEDR_0_1
} OSPEEDR_0_T ;
#define READ_OSPEEDR0() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR0_MASK)  >> OSPEEDR0_START_BIT)

#define WRITE_OSPEEDR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR0_MASK) | ((val << OSPEEDR0_START_BIT) & OSPEEDR0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR1_MASK 0xCU
#define OSPEEDR1_OFFSET 3
#define OSPEEDR1_START_BIT 2
#define OSPEEDR1_WIDTH 2



typedef enum ospeedr1 {
    OSPEEDR_1_0,
    OSPEEDR_1_1
} OSPEEDR_1_T ;
#define READ_OSPEEDR1() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR1_MASK)  >> OSPEEDR1_START_BIT)

#define WRITE_OSPEEDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR1_MASK) | ((val << OSPEEDR1_START_BIT) & OSPEEDR1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR2_MASK 0x30U
#define OSPEEDR2_OFFSET 5
#define OSPEEDR2_START_BIT 4
#define OSPEEDR2_WIDTH 2



typedef enum ospeedr2 {
    OSPEEDR_2_0,
    OSPEEDR_2_1
} OSPEEDR_2_T ;
#define READ_OSPEEDR2() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR2_MASK)  >> OSPEEDR2_START_BIT)

#define WRITE_OSPEEDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR2_MASK) | ((val << OSPEEDR2_START_BIT) & OSPEEDR2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR3_MASK 0xC0U
#define OSPEEDR3_OFFSET 7
#define OSPEEDR3_START_BIT 6
#define OSPEEDR3_WIDTH 2



typedef enum ospeedr3 {
    OSPEEDR_3_0,
    OSPEEDR_3_1
} OSPEEDR_3_T ;
#define READ_OSPEEDR3() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR3_MASK)  >> OSPEEDR3_START_BIT)

#define WRITE_OSPEEDR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR3_MASK) | ((val << OSPEEDR3_START_BIT) & OSPEEDR3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR4_MASK 0x300U
#define OSPEEDR4_OFFSET 9
#define OSPEEDR4_START_BIT 8
#define OSPEEDR4_WIDTH 2



typedef enum ospeedr4 {
    OSPEEDR_4_0,
    OSPEEDR_4_1
} OSPEEDR_4_T ;
#define READ_OSPEEDR4() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR4_MASK)  >> OSPEEDR4_START_BIT)

#define WRITE_OSPEEDR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR4_MASK) | ((val << OSPEEDR4_START_BIT) & OSPEEDR4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR5_MASK 0xC00U
#define OSPEEDR5_OFFSET 11
#define OSPEEDR5_START_BIT 10
#define OSPEEDR5_WIDTH 2



typedef enum ospeedr5 {
    OSPEEDR_5_0,
    OSPEEDR_5_1
} OSPEEDR_5_T ;
#define READ_OSPEEDR5() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR5_MASK)  >> OSPEEDR5_START_BIT)

#define WRITE_OSPEEDR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR5_MASK) | ((val << OSPEEDR5_START_BIT) & OSPEEDR5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR6_MASK 0x3000U
#define OSPEEDR6_OFFSET 13
#define OSPEEDR6_START_BIT 12
#define OSPEEDR6_WIDTH 2



typedef enum ospeedr6 {
    OSPEEDR_6_0,
    OSPEEDR_6_1
} OSPEEDR_6_T ;
#define READ_OSPEEDR6() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR6_MASK)  >> OSPEEDR6_START_BIT)

#define WRITE_OSPEEDR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR6_MASK) | ((val << OSPEEDR6_START_BIT) & OSPEEDR6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR7_MASK 0xC000U
#define OSPEEDR7_OFFSET 15
#define OSPEEDR7_START_BIT 14
#define OSPEEDR7_WIDTH 2



typedef enum ospeedr7 {
    OSPEEDR_7_0,
    OSPEEDR_7_1
} OSPEEDR_7_T ;
#define READ_OSPEEDR7() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR7_MASK)  >> OSPEEDR7_START_BIT)

#define WRITE_OSPEEDR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR7_MASK) | ((val << OSPEEDR7_START_BIT) & OSPEEDR7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR8_MASK 0x30000U
#define OSPEEDR8_OFFSET 17
#define OSPEEDR8_START_BIT 16
#define OSPEEDR8_WIDTH 2



typedef enum ospeedr8 {
    OSPEEDR_8_0,
    OSPEEDR_8_1
} OSPEEDR_8_T ;
#define READ_OSPEEDR8() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR8_MASK)  >> OSPEEDR8_START_BIT)

#define WRITE_OSPEEDR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR8_MASK) | ((val << OSPEEDR8_START_BIT) & OSPEEDR8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR9_MASK 0xC0000U
#define OSPEEDR9_OFFSET 19
#define OSPEEDR9_START_BIT 18
#define OSPEEDR9_WIDTH 2



typedef enum ospeedr9 {
    OSPEEDR_9_0,
    OSPEEDR_9_1
} OSPEEDR_9_T ;
#define READ_OSPEEDR9() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR9_MASK)  >> OSPEEDR9_START_BIT)

#define WRITE_OSPEEDR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR9_MASK) | ((val << OSPEEDR9_START_BIT) & OSPEEDR9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR10_MASK 0x300000U
#define OSPEEDR10_OFFSET 21
#define OSPEEDR10_START_BIT 20
#define OSPEEDR10_WIDTH 2



typedef enum ospeedr10 {
    OSPEEDR_1_0_0,
    OSPEEDR_1_0_1
} OSPEEDR_10_T ;
#define READ_OSPEEDR10() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR10_MASK)  >> OSPEEDR10_START_BIT)

#define WRITE_OSPEEDR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR10_MASK) | ((val << OSPEEDR10_START_BIT) & OSPEEDR10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR11_MASK 0xC00000U
#define OSPEEDR11_OFFSET 23
#define OSPEEDR11_START_BIT 22
#define OSPEEDR11_WIDTH 2



typedef enum ospeedr11 {
    OSPEEDR_1_1_0,
    OSPEEDR_1_1_1
} OSPEEDR_11_T ;
#define READ_OSPEEDR11() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR11_MASK)  >> OSPEEDR11_START_BIT)

#define WRITE_OSPEEDR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR11_MASK) | ((val << OSPEEDR11_START_BIT) & OSPEEDR11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR12_MASK 0x3000000U
#define OSPEEDR12_OFFSET 25
#define OSPEEDR12_START_BIT 24
#define OSPEEDR12_WIDTH 2



typedef enum ospeedr12 {
    OSPEEDR_1_2_0,
    OSPEEDR_1_2_1
} OSPEEDR_12_T ;
#define READ_OSPEEDR12() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR12_MASK)  >> OSPEEDR12_START_BIT)

#define WRITE_OSPEEDR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR12_MASK) | ((val << OSPEEDR12_START_BIT) & OSPEEDR12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR13_MASK 0xC000000U
#define OSPEEDR13_OFFSET 27
#define OSPEEDR13_START_BIT 26
#define OSPEEDR13_WIDTH 2



typedef enum ospeedr13 {
    OSPEEDR_1_3_0,
    OSPEEDR_1_3_1
} OSPEEDR_13_T ;
#define READ_OSPEEDR13() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR13_MASK)  >> OSPEEDR13_START_BIT)

#define WRITE_OSPEEDR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR13_MASK) | ((val << OSPEEDR13_START_BIT) & OSPEEDR13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR14_MASK 0x30000000U
#define OSPEEDR14_OFFSET 29
#define OSPEEDR14_START_BIT 28
#define OSPEEDR14_WIDTH 2



typedef enum ospeedr14 {
    OSPEEDR_1_4_0,
    OSPEEDR_1_4_1
} OSPEEDR_14_T ;
#define READ_OSPEEDR14() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR14_MASK)  >> OSPEEDR14_START_BIT)

#define WRITE_OSPEEDR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR14_MASK) | ((val << OSPEEDR14_START_BIT) & OSPEEDR14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GPIO port output speed register (GPIOB_OSPEEDR) at the offset 0x8, Bits 30:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define OSPEEDR15_MASK 0xC0000000U
#define OSPEEDR15_OFFSET 31
#define OSPEEDR15_START_BIT 30
#define OSPEEDR15_WIDTH 2



typedef enum ospeedr15 {
    OSPEEDR_1_5_0,
    OSPEEDR_1_5_1
} OSPEEDR_15_T ;
#define READ_OSPEEDR15() \
   ((READ_REGISTER_ULONG(0x8) & OSPEEDR15_MASK)  >> OSPEEDR15_START_BIT)

#define WRITE_OSPEEDR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSPEEDR15_MASK) | ((val << OSPEEDR15_START_BIT) & OSPEEDR15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register Pupdr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PUPDR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_PUPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_PUPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_PUPDR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR0_MASK 0x3U
#define PUPDR0_OFFSET 1
#define PUPDR0_START_BIT 0
#define PUPDR0_WIDTH 2


#define PUPDR_REG 0xC

typedef enum pupdr0 {
    PUPDR_0_0,
    PUPDR_0_1
} PUPDR_0_T ;
#define READ_PUPDR0() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR0_MASK)  >> PUPDR0_START_BIT)

#define WRITE_PUPDR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR0_MASK) | ((val << PUPDR0_START_BIT) & PUPDR0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR1_MASK 0xCU
#define PUPDR1_OFFSET 3
#define PUPDR1_START_BIT 2
#define PUPDR1_WIDTH 2



typedef enum pupdr1 {
    PUPDR_1_0,
    PUPDR_1_1
} PUPDR_1_T ;
#define READ_PUPDR1() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR1_MASK)  >> PUPDR1_START_BIT)

#define WRITE_PUPDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR1_MASK) | ((val << PUPDR1_START_BIT) & PUPDR1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR2_MASK 0x30U
#define PUPDR2_OFFSET 5
#define PUPDR2_START_BIT 4
#define PUPDR2_WIDTH 2



typedef enum pupdr2 {
    PUPDR_2_0,
    PUPDR_2_1
} PUPDR_2_T ;
#define READ_PUPDR2() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR2_MASK)  >> PUPDR2_START_BIT)

#define WRITE_PUPDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR2_MASK) | ((val << PUPDR2_START_BIT) & PUPDR2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR3_MASK 0xC0U
#define PUPDR3_OFFSET 7
#define PUPDR3_START_BIT 6
#define PUPDR3_WIDTH 2



typedef enum pupdr3 {
    PUPDR_3_0,
    PUPDR_3_1
} PUPDR_3_T ;
#define READ_PUPDR3() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR3_MASK)  >> PUPDR3_START_BIT)

#define WRITE_PUPDR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR3_MASK) | ((val << PUPDR3_START_BIT) & PUPDR3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR4_MASK 0x300U
#define PUPDR4_OFFSET 9
#define PUPDR4_START_BIT 8
#define PUPDR4_WIDTH 2



typedef enum pupdr4 {
    PUPDR_4_0,
    PUPDR_4_1
} PUPDR_4_T ;
#define READ_PUPDR4() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR4_MASK)  >> PUPDR4_START_BIT)

#define WRITE_PUPDR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR4_MASK) | ((val << PUPDR4_START_BIT) & PUPDR4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR5_MASK 0xC00U
#define PUPDR5_OFFSET 11
#define PUPDR5_START_BIT 10
#define PUPDR5_WIDTH 2



typedef enum pupdr5 {
    PUPDR_5_0,
    PUPDR_5_1
} PUPDR_5_T ;
#define READ_PUPDR5() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR5_MASK)  >> PUPDR5_START_BIT)

#define WRITE_PUPDR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR5_MASK) | ((val << PUPDR5_START_BIT) & PUPDR5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR6_MASK 0x3000U
#define PUPDR6_OFFSET 13
#define PUPDR6_START_BIT 12
#define PUPDR6_WIDTH 2



typedef enum pupdr6 {
    PUPDR_6_0,
    PUPDR_6_1
} PUPDR_6_T ;
#define READ_PUPDR6() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR6_MASK)  >> PUPDR6_START_BIT)

#define WRITE_PUPDR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR6_MASK) | ((val << PUPDR6_START_BIT) & PUPDR6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR7_MASK 0xC000U
#define PUPDR7_OFFSET 15
#define PUPDR7_START_BIT 14
#define PUPDR7_WIDTH 2



typedef enum pupdr7 {
    PUPDR_7_0,
    PUPDR_7_1
} PUPDR_7_T ;
#define READ_PUPDR7() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR7_MASK)  >> PUPDR7_START_BIT)

#define WRITE_PUPDR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR7_MASK) | ((val << PUPDR7_START_BIT) & PUPDR7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR8_MASK 0x30000U
#define PUPDR8_OFFSET 17
#define PUPDR8_START_BIT 16
#define PUPDR8_WIDTH 2



typedef enum pupdr8 {
    PUPDR_8_0,
    PUPDR_8_1
} PUPDR_8_T ;
#define READ_PUPDR8() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR8_MASK)  >> PUPDR8_START_BIT)

#define WRITE_PUPDR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR8_MASK) | ((val << PUPDR8_START_BIT) & PUPDR8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR9_MASK 0xC0000U
#define PUPDR9_OFFSET 19
#define PUPDR9_START_BIT 18
#define PUPDR9_WIDTH 2



typedef enum pupdr9 {
    PUPDR_9_0,
    PUPDR_9_1
} PUPDR_9_T ;
#define READ_PUPDR9() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR9_MASK)  >> PUPDR9_START_BIT)

#define WRITE_PUPDR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR9_MASK) | ((val << PUPDR9_START_BIT) & PUPDR9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR10_MASK 0x300000U
#define PUPDR10_OFFSET 21
#define PUPDR10_START_BIT 20
#define PUPDR10_WIDTH 2



typedef enum pupdr10 {
    PUPDR_1_0_0,
    PUPDR_1_0_1
} PUPDR_10_T ;
#define READ_PUPDR10() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR10_MASK)  >> PUPDR10_START_BIT)

#define WRITE_PUPDR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR10_MASK) | ((val << PUPDR10_START_BIT) & PUPDR10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR11_MASK 0xC00000U
#define PUPDR11_OFFSET 23
#define PUPDR11_START_BIT 22
#define PUPDR11_WIDTH 2



typedef enum pupdr11 {
    PUPDR_1_1_0,
    PUPDR_1_1_1
} PUPDR_11_T ;
#define READ_PUPDR11() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR11_MASK)  >> PUPDR11_START_BIT)

#define WRITE_PUPDR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR11_MASK) | ((val << PUPDR11_START_BIT) & PUPDR11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR12_MASK 0x3000000U
#define PUPDR12_OFFSET 25
#define PUPDR12_START_BIT 24
#define PUPDR12_WIDTH 2



typedef enum pupdr12 {
    PUPDR_1_2_0,
    PUPDR_1_2_1
} PUPDR_12_T ;
#define READ_PUPDR12() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR12_MASK)  >> PUPDR12_START_BIT)

#define WRITE_PUPDR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR12_MASK) | ((val << PUPDR12_START_BIT) & PUPDR12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR13_MASK 0xC000000U
#define PUPDR13_OFFSET 27
#define PUPDR13_START_BIT 26
#define PUPDR13_WIDTH 2



typedef enum pupdr13 {
    PUPDR_1_3_0,
    PUPDR_1_3_1
} PUPDR_13_T ;
#define READ_PUPDR13() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR13_MASK)  >> PUPDR13_START_BIT)

#define WRITE_PUPDR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR13_MASK) | ((val << PUPDR13_START_BIT) & PUPDR13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR14_MASK 0x30000000U
#define PUPDR14_OFFSET 29
#define PUPDR14_START_BIT 28
#define PUPDR14_WIDTH 2



typedef enum pupdr14 {
    PUPDR_1_4_0,
    PUPDR_1_4_1
} PUPDR_14_T ;
#define READ_PUPDR14() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR14_MASK)  >> PUPDR14_START_BIT)

#define WRITE_PUPDR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR14_MASK) | ((val << PUPDR14_START_BIT) & PUPDR14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register GPIO port pull-up/pull-down register (PUPDR) at the offset 0xC, Bits 30:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x configuration bits (y = 0..15) 
    // 
#define PUPDR15_MASK 0xC0000000U
#define PUPDR15_OFFSET 31
#define PUPDR15_START_BIT 30
#define PUPDR15_WIDTH 2



typedef enum pupdr15 {
    PUPDR_1_5_0,
    PUPDR_1_5_1
} PUPDR_15_T ;
#define READ_PUPDR15() \
   ((READ_REGISTER_ULONG(0xC) & PUPDR15_MASK)  >> PUPDR15_START_BIT)

#define WRITE_PUPDR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PUPDR15_MASK) | ((val << PUPDR15_START_BIT) & PUPDR15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Idr
//
// Return the value of register IDR
//
// Notes : Register Idr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_IDR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : IDR0
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR0_MASK) | ((val << IDR0_START_BIT) & IDR0_MASK )); \
   } 

#define ENABLE_IDR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR0_MASK ); \
   }

#define DISABLE_IDR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR0_MASK ); \
   } 

#define READ_IDR0() \
   ((READ_REGISTER_ULONG(0x10) & IDR0_MASK)  >> IDR0_START_BIT)

#define WHEN_IDR0_HIGH() \
     if ( READ_IDR0() )


#define UNLESS_IDR0_HIGH() \
     if (! READ_IDR0() )


#define WAIT_IDR0_LOW() \
    while ( READ_IDR0() );


#define WAIT_IDR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR0() && (--___t___ > 0)); }


#define WAIT_IDR0_HIGH() \
    while (! READ_IDR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR1
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR1_MASK) | ((val << IDR1_START_BIT) & IDR1_MASK )); \
   } 

#define ENABLE_IDR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR1_MASK ); \
   }

#define DISABLE_IDR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR1_MASK ); \
   } 

#define READ_IDR1() \
   ((READ_REGISTER_ULONG(0x10) & IDR1_MASK)  >> IDR1_START_BIT)

#define WHEN_IDR1_HIGH() \
     if ( READ_IDR1() )


#define UNLESS_IDR1_HIGH() \
     if (! READ_IDR1() )


#define WAIT_IDR1_LOW() \
    while ( READ_IDR1() );


#define WAIT_IDR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR1() && (--___t___ > 0)); }


#define WAIT_IDR1_HIGH() \
    while (! READ_IDR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR2
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR2_MASK) | ((val << IDR2_START_BIT) & IDR2_MASK )); \
   } 

#define ENABLE_IDR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR2_MASK ); \
   }

#define DISABLE_IDR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR2_MASK ); \
   } 

#define READ_IDR2() \
   ((READ_REGISTER_ULONG(0x10) & IDR2_MASK)  >> IDR2_START_BIT)

#define WHEN_IDR2_HIGH() \
     if ( READ_IDR2() )


#define UNLESS_IDR2_HIGH() \
     if (! READ_IDR2() )


#define WAIT_IDR2_LOW() \
    while ( READ_IDR2() );


#define WAIT_IDR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR2() && (--___t___ > 0)); }


#define WAIT_IDR2_HIGH() \
    while (! READ_IDR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR3
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR3_MASK) | ((val << IDR3_START_BIT) & IDR3_MASK )); \
   } 

#define ENABLE_IDR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR3_MASK ); \
   }

#define DISABLE_IDR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR3_MASK ); \
   } 

#define READ_IDR3() \
   ((READ_REGISTER_ULONG(0x10) & IDR3_MASK)  >> IDR3_START_BIT)

#define WHEN_IDR3_HIGH() \
     if ( READ_IDR3() )


#define UNLESS_IDR3_HIGH() \
     if (! READ_IDR3() )


#define WAIT_IDR3_LOW() \
    while ( READ_IDR3() );


#define WAIT_IDR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR3() && (--___t___ > 0)); }


#define WAIT_IDR3_HIGH() \
    while (! READ_IDR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR4
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR4_MASK) | ((val << IDR4_START_BIT) & IDR4_MASK )); \
   } 

#define ENABLE_IDR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR4_MASK ); \
   }

#define DISABLE_IDR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR4_MASK ); \
   } 

#define READ_IDR4() \
   ((READ_REGISTER_ULONG(0x10) & IDR4_MASK)  >> IDR4_START_BIT)

#define WHEN_IDR4_HIGH() \
     if ( READ_IDR4() )


#define UNLESS_IDR4_HIGH() \
     if (! READ_IDR4() )


#define WAIT_IDR4_LOW() \
    while ( READ_IDR4() );


#define WAIT_IDR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR4() && (--___t___ > 0)); }


#define WAIT_IDR4_HIGH() \
    while (! READ_IDR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR5
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR5_MASK) | ((val << IDR5_START_BIT) & IDR5_MASK )); \
   } 

#define ENABLE_IDR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR5_MASK ); \
   }

#define DISABLE_IDR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR5_MASK ); \
   } 

#define READ_IDR5() \
   ((READ_REGISTER_ULONG(0x10) & IDR5_MASK)  >> IDR5_START_BIT)

#define WHEN_IDR5_HIGH() \
     if ( READ_IDR5() )


#define UNLESS_IDR5_HIGH() \
     if (! READ_IDR5() )


#define WAIT_IDR5_LOW() \
    while ( READ_IDR5() );


#define WAIT_IDR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR5() && (--___t___ > 0)); }


#define WAIT_IDR5_HIGH() \
    while (! READ_IDR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR6
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR6_MASK) | ((val << IDR6_START_BIT) & IDR6_MASK )); \
   } 

#define ENABLE_IDR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR6_MASK ); \
   }

#define DISABLE_IDR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR6_MASK ); \
   } 

#define READ_IDR6() \
   ((READ_REGISTER_ULONG(0x10) & IDR6_MASK)  >> IDR6_START_BIT)

#define WHEN_IDR6_HIGH() \
     if ( READ_IDR6() )


#define UNLESS_IDR6_HIGH() \
     if (! READ_IDR6() )


#define WAIT_IDR6_LOW() \
    while ( READ_IDR6() );


#define WAIT_IDR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR6() && (--___t___ > 0)); }


#define WAIT_IDR6_HIGH() \
    while (! READ_IDR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR7
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR7_MASK) | ((val << IDR7_START_BIT) & IDR7_MASK )); \
   } 

#define ENABLE_IDR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR7_MASK ); \
   }

#define DISABLE_IDR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR7_MASK ); \
   } 

#define READ_IDR7() \
   ((READ_REGISTER_ULONG(0x10) & IDR7_MASK)  >> IDR7_START_BIT)

#define WHEN_IDR7_HIGH() \
     if ( READ_IDR7() )


#define UNLESS_IDR7_HIGH() \
     if (! READ_IDR7() )


#define WAIT_IDR7_LOW() \
    while ( READ_IDR7() );


#define WAIT_IDR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR7() && (--___t___ > 0)); }


#define WAIT_IDR7_HIGH() \
    while (! READ_IDR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR8
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR8_MASK) | ((val << IDR8_START_BIT) & IDR8_MASK )); \
   } 

#define ENABLE_IDR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR8_MASK ); \
   }

#define DISABLE_IDR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR8_MASK ); \
   } 

#define READ_IDR8() \
   ((READ_REGISTER_ULONG(0x10) & IDR8_MASK)  >> IDR8_START_BIT)

#define WHEN_IDR8_HIGH() \
     if ( READ_IDR8() )


#define UNLESS_IDR8_HIGH() \
     if (! READ_IDR8() )


#define WAIT_IDR8_LOW() \
    while ( READ_IDR8() );


#define WAIT_IDR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR8() && (--___t___ > 0)); }


#define WAIT_IDR8_HIGH() \
    while (! READ_IDR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR9
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR9_MASK) | ((val << IDR9_START_BIT) & IDR9_MASK )); \
   } 

#define ENABLE_IDR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR9_MASK ); \
   }

#define DISABLE_IDR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR9_MASK ); \
   } 

#define READ_IDR9() \
   ((READ_REGISTER_ULONG(0x10) & IDR9_MASK)  >> IDR9_START_BIT)

#define WHEN_IDR9_HIGH() \
     if ( READ_IDR9() )


#define UNLESS_IDR9_HIGH() \
     if (! READ_IDR9() )


#define WAIT_IDR9_LOW() \
    while ( READ_IDR9() );


#define WAIT_IDR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR9() && (--___t___ > 0)); }


#define WAIT_IDR9_HIGH() \
    while (! READ_IDR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR10
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR10_MASK) | ((val << IDR10_START_BIT) & IDR10_MASK )); \
   } 

#define ENABLE_IDR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR10_MASK ); \
   }

#define DISABLE_IDR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR10_MASK ); \
   } 

#define READ_IDR10() \
   ((READ_REGISTER_ULONG(0x10) & IDR10_MASK)  >> IDR10_START_BIT)

#define WHEN_IDR10_HIGH() \
     if ( READ_IDR10() )


#define UNLESS_IDR10_HIGH() \
     if (! READ_IDR10() )


#define WAIT_IDR10_LOW() \
    while ( READ_IDR10() );


#define WAIT_IDR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR10() && (--___t___ > 0)); }


#define WAIT_IDR10_HIGH() \
    while (! READ_IDR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR11
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR11_MASK) | ((val << IDR11_START_BIT) & IDR11_MASK )); \
   } 

#define ENABLE_IDR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR11_MASK ); \
   }

#define DISABLE_IDR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR11_MASK ); \
   } 

#define READ_IDR11() \
   ((READ_REGISTER_ULONG(0x10) & IDR11_MASK)  >> IDR11_START_BIT)

#define WHEN_IDR11_HIGH() \
     if ( READ_IDR11() )


#define UNLESS_IDR11_HIGH() \
     if (! READ_IDR11() )


#define WAIT_IDR11_LOW() \
    while ( READ_IDR11() );


#define WAIT_IDR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR11() && (--___t___ > 0)); }


#define WAIT_IDR11_HIGH() \
    while (! READ_IDR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR12
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR12_MASK) | ((val << IDR12_START_BIT) & IDR12_MASK )); \
   } 

#define ENABLE_IDR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR12_MASK ); \
   }

#define DISABLE_IDR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR12_MASK ); \
   } 

#define READ_IDR12() \
   ((READ_REGISTER_ULONG(0x10) & IDR12_MASK)  >> IDR12_START_BIT)

#define WHEN_IDR12_HIGH() \
     if ( READ_IDR12() )


#define UNLESS_IDR12_HIGH() \
     if (! READ_IDR12() )


#define WAIT_IDR12_LOW() \
    while ( READ_IDR12() );


#define WAIT_IDR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR12() && (--___t___ > 0)); }


#define WAIT_IDR12_HIGH() \
    while (! READ_IDR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR13
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR13_MASK) | ((val << IDR13_START_BIT) & IDR13_MASK )); \
   } 

#define ENABLE_IDR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR13_MASK ); \
   }

#define DISABLE_IDR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR13_MASK ); \
   } 

#define READ_IDR13() \
   ((READ_REGISTER_ULONG(0x10) & IDR13_MASK)  >> IDR13_START_BIT)

#define WHEN_IDR13_HIGH() \
     if ( READ_IDR13() )


#define UNLESS_IDR13_HIGH() \
     if (! READ_IDR13() )


#define WAIT_IDR13_LOW() \
    while ( READ_IDR13() );


#define WAIT_IDR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR13() && (--___t___ > 0)); }


#define WAIT_IDR13_HIGH() \
    while (! READ_IDR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR14
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR14_MASK) | ((val << IDR14_START_BIT) & IDR14_MASK )); \
   } 

#define ENABLE_IDR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR14_MASK ); \
   }

#define DISABLE_IDR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR14_MASK ); \
   } 

#define READ_IDR14() \
   ((READ_REGISTER_ULONG(0x10) & IDR14_MASK)  >> IDR14_START_BIT)

#define WHEN_IDR14_HIGH() \
     if ( READ_IDR14() )


#define UNLESS_IDR14_HIGH() \
     if (! READ_IDR14() )


#define WAIT_IDR14_LOW() \
    while ( READ_IDR14() );


#define WAIT_IDR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR14() && (--___t___ > 0)); }


#define WAIT_IDR14_HIGH() \
    while (! READ_IDR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR15
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x10, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ IDR15_MASK) | ((val << IDR15_START_BIT) & IDR15_MASK )); \
   } 

#define ENABLE_IDR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  IDR15_MASK ); \
   }

#define DISABLE_IDR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~IDR15_MASK ); \
   } 

#define READ_IDR15() \
   ((READ_REGISTER_ULONG(0x10) & IDR15_MASK)  >> IDR15_START_BIT)

#define WHEN_IDR15_HIGH() \
     if ( READ_IDR15() )


#define UNLESS_IDR15_HIGH() \
     if (! READ_IDR15() )


#define WAIT_IDR15_LOW() \
    while ( READ_IDR15() );


#define WAIT_IDR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR15() && (--___t___ > 0)); }


#define WAIT_IDR15_HIGH() \
    while (! READ_IDR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register Odr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ODR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_ODR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_ODR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_ODR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR0_MASK 0x1U
#define ODR0_OFFSET 0
#define ODR0_START_BIT 0
#define ODR0_WIDTH 1


#define ODR_REG 0x14

typedef enum odr0 {
    ODR_0_0,
    ODR_0_1
} ODR_0_T ;
#define WRITE_ODR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR0_MASK) | ((val << ODR0_START_BIT) & ODR0_MASK )); \
   } 

#define ENABLE_ODR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR0_MASK ); \
   }

#define DISABLE_ODR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR0_MASK ); \
   } 

#define READ_ODR0() \
   ((READ_REGISTER_ULONG(0x14) & ODR0_MASK)  >> ODR0_START_BIT)

#define WHEN_ODR0_HIGH() \
     if ( READ_ODR0() )


#define UNLESS_ODR0_HIGH() \
     if (! READ_ODR0() )


#define WAIT_ODR0_LOW() \
    while ( READ_ODR0() );


#define WAIT_ODR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR0() && (--___t___ > 0)); }


#define WAIT_ODR0_HIGH() \
    while (! READ_ODR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR1_MASK 0x2U
#define ODR1_OFFSET 1
#define ODR1_START_BIT 1
#define ODR1_WIDTH 1



typedef enum odr1 {
    ODR_1_0,
    ODR_1_1
} ODR_1_T ;
#define WRITE_ODR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR1_MASK) | ((val << ODR1_START_BIT) & ODR1_MASK )); \
   } 

#define ENABLE_ODR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR1_MASK ); \
   }

#define DISABLE_ODR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR1_MASK ); \
   } 

#define READ_ODR1() \
   ((READ_REGISTER_ULONG(0x14) & ODR1_MASK)  >> ODR1_START_BIT)

#define WHEN_ODR1_HIGH() \
     if ( READ_ODR1() )


#define UNLESS_ODR1_HIGH() \
     if (! READ_ODR1() )


#define WAIT_ODR1_LOW() \
    while ( READ_ODR1() );


#define WAIT_ODR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR1() && (--___t___ > 0)); }


#define WAIT_ODR1_HIGH() \
    while (! READ_ODR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR2_MASK 0x4U
#define ODR2_OFFSET 2
#define ODR2_START_BIT 2
#define ODR2_WIDTH 1



typedef enum odr2 {
    ODR_2_0,
    ODR_2_1
} ODR_2_T ;
#define WRITE_ODR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR2_MASK) | ((val << ODR2_START_BIT) & ODR2_MASK )); \
   } 

#define ENABLE_ODR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR2_MASK ); \
   }

#define DISABLE_ODR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR2_MASK ); \
   } 

#define READ_ODR2() \
   ((READ_REGISTER_ULONG(0x14) & ODR2_MASK)  >> ODR2_START_BIT)

#define WHEN_ODR2_HIGH() \
     if ( READ_ODR2() )


#define UNLESS_ODR2_HIGH() \
     if (! READ_ODR2() )


#define WAIT_ODR2_LOW() \
    while ( READ_ODR2() );


#define WAIT_ODR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR2() && (--___t___ > 0)); }


#define WAIT_ODR2_HIGH() \
    while (! READ_ODR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR3_MASK 0x8U
#define ODR3_OFFSET 3
#define ODR3_START_BIT 3
#define ODR3_WIDTH 1



typedef enum odr3 {
    ODR_3_0,
    ODR_3_1
} ODR_3_T ;
#define WRITE_ODR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR3_MASK) | ((val << ODR3_START_BIT) & ODR3_MASK )); \
   } 

#define ENABLE_ODR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR3_MASK ); \
   }

#define DISABLE_ODR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR3_MASK ); \
   } 

#define READ_ODR3() \
   ((READ_REGISTER_ULONG(0x14) & ODR3_MASK)  >> ODR3_START_BIT)

#define WHEN_ODR3_HIGH() \
     if ( READ_ODR3() )


#define UNLESS_ODR3_HIGH() \
     if (! READ_ODR3() )


#define WAIT_ODR3_LOW() \
    while ( READ_ODR3() );


#define WAIT_ODR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR3() && (--___t___ > 0)); }


#define WAIT_ODR3_HIGH() \
    while (! READ_ODR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR4_MASK 0x10U
#define ODR4_OFFSET 4
#define ODR4_START_BIT 4
#define ODR4_WIDTH 1



typedef enum odr4 {
    ODR_4_0,
    ODR_4_1
} ODR_4_T ;
#define WRITE_ODR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR4_MASK) | ((val << ODR4_START_BIT) & ODR4_MASK )); \
   } 

#define ENABLE_ODR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR4_MASK ); \
   }

#define DISABLE_ODR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR4_MASK ); \
   } 

#define READ_ODR4() \
   ((READ_REGISTER_ULONG(0x14) & ODR4_MASK)  >> ODR4_START_BIT)

#define WHEN_ODR4_HIGH() \
     if ( READ_ODR4() )


#define UNLESS_ODR4_HIGH() \
     if (! READ_ODR4() )


#define WAIT_ODR4_LOW() \
    while ( READ_ODR4() );


#define WAIT_ODR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR4() && (--___t___ > 0)); }


#define WAIT_ODR4_HIGH() \
    while (! READ_ODR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR5_MASK 0x20U
#define ODR5_OFFSET 5
#define ODR5_START_BIT 5
#define ODR5_WIDTH 1



typedef enum odr5 {
    ODR_5_0,
    ODR_5_1
} ODR_5_T ;
#define WRITE_ODR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR5_MASK) | ((val << ODR5_START_BIT) & ODR5_MASK )); \
   } 

#define ENABLE_ODR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR5_MASK ); \
   }

#define DISABLE_ODR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR5_MASK ); \
   } 

#define READ_ODR5() \
   ((READ_REGISTER_ULONG(0x14) & ODR5_MASK)  >> ODR5_START_BIT)

#define WHEN_ODR5_HIGH() \
     if ( READ_ODR5() )


#define UNLESS_ODR5_HIGH() \
     if (! READ_ODR5() )


#define WAIT_ODR5_LOW() \
    while ( READ_ODR5() );


#define WAIT_ODR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR5() && (--___t___ > 0)); }


#define WAIT_ODR5_HIGH() \
    while (! READ_ODR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR6_MASK 0x40U
#define ODR6_OFFSET 6
#define ODR6_START_BIT 6
#define ODR6_WIDTH 1



typedef enum odr6 {
    ODR_6_0,
    ODR_6_1
} ODR_6_T ;
#define WRITE_ODR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR6_MASK) | ((val << ODR6_START_BIT) & ODR6_MASK )); \
   } 

#define ENABLE_ODR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR6_MASK ); \
   }

#define DISABLE_ODR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR6_MASK ); \
   } 

#define READ_ODR6() \
   ((READ_REGISTER_ULONG(0x14) & ODR6_MASK)  >> ODR6_START_BIT)

#define WHEN_ODR6_HIGH() \
     if ( READ_ODR6() )


#define UNLESS_ODR6_HIGH() \
     if (! READ_ODR6() )


#define WAIT_ODR6_LOW() \
    while ( READ_ODR6() );


#define WAIT_ODR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR6() && (--___t___ > 0)); }


#define WAIT_ODR6_HIGH() \
    while (! READ_ODR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR7_MASK 0x80U
#define ODR7_OFFSET 7
#define ODR7_START_BIT 7
#define ODR7_WIDTH 1



typedef enum odr7 {
    ODR_7_0,
    ODR_7_1
} ODR_7_T ;
#define WRITE_ODR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR7_MASK) | ((val << ODR7_START_BIT) & ODR7_MASK )); \
   } 

#define ENABLE_ODR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR7_MASK ); \
   }

#define DISABLE_ODR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR7_MASK ); \
   } 

#define READ_ODR7() \
   ((READ_REGISTER_ULONG(0x14) & ODR7_MASK)  >> ODR7_START_BIT)

#define WHEN_ODR7_HIGH() \
     if ( READ_ODR7() )


#define UNLESS_ODR7_HIGH() \
     if (! READ_ODR7() )


#define WAIT_ODR7_LOW() \
    while ( READ_ODR7() );


#define WAIT_ODR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR7() && (--___t___ > 0)); }


#define WAIT_ODR7_HIGH() \
    while (! READ_ODR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR8_MASK 0x100U
#define ODR8_OFFSET 8
#define ODR8_START_BIT 8
#define ODR8_WIDTH 1



typedef enum odr8 {
    ODR_8_0,
    ODR_8_1
} ODR_8_T ;
#define WRITE_ODR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR8_MASK) | ((val << ODR8_START_BIT) & ODR8_MASK )); \
   } 

#define ENABLE_ODR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR8_MASK ); \
   }

#define DISABLE_ODR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR8_MASK ); \
   } 

#define READ_ODR8() \
   ((READ_REGISTER_ULONG(0x14) & ODR8_MASK)  >> ODR8_START_BIT)

#define WHEN_ODR8_HIGH() \
     if ( READ_ODR8() )


#define UNLESS_ODR8_HIGH() \
     if (! READ_ODR8() )


#define WAIT_ODR8_LOW() \
    while ( READ_ODR8() );


#define WAIT_ODR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR8() && (--___t___ > 0)); }


#define WAIT_ODR8_HIGH() \
    while (! READ_ODR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR9_MASK 0x200U
#define ODR9_OFFSET 9
#define ODR9_START_BIT 9
#define ODR9_WIDTH 1



typedef enum odr9 {
    ODR_9_0,
    ODR_9_1
} ODR_9_T ;
#define WRITE_ODR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR9_MASK) | ((val << ODR9_START_BIT) & ODR9_MASK )); \
   } 

#define ENABLE_ODR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR9_MASK ); \
   }

#define DISABLE_ODR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR9_MASK ); \
   } 

#define READ_ODR9() \
   ((READ_REGISTER_ULONG(0x14) & ODR9_MASK)  >> ODR9_START_BIT)

#define WHEN_ODR9_HIGH() \
     if ( READ_ODR9() )


#define UNLESS_ODR9_HIGH() \
     if (! READ_ODR9() )


#define WAIT_ODR9_LOW() \
    while ( READ_ODR9() );


#define WAIT_ODR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR9() && (--___t___ > 0)); }


#define WAIT_ODR9_HIGH() \
    while (! READ_ODR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR10_MASK 0x400U
#define ODR10_OFFSET 10
#define ODR10_START_BIT 10
#define ODR10_WIDTH 1



typedef enum odr10 {
    ODR_1_0_0,
    ODR_1_0_1
} ODR_10_T ;
#define WRITE_ODR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR10_MASK) | ((val << ODR10_START_BIT) & ODR10_MASK )); \
   } 

#define ENABLE_ODR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR10_MASK ); \
   }

#define DISABLE_ODR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR10_MASK ); \
   } 

#define READ_ODR10() \
   ((READ_REGISTER_ULONG(0x14) & ODR10_MASK)  >> ODR10_START_BIT)

#define WHEN_ODR10_HIGH() \
     if ( READ_ODR10() )


#define UNLESS_ODR10_HIGH() \
     if (! READ_ODR10() )


#define WAIT_ODR10_LOW() \
    while ( READ_ODR10() );


#define WAIT_ODR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR10() && (--___t___ > 0)); }


#define WAIT_ODR10_HIGH() \
    while (! READ_ODR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR11_MASK 0x800U
#define ODR11_OFFSET 11
#define ODR11_START_BIT 11
#define ODR11_WIDTH 1



typedef enum odr11 {
    ODR_1_1_0,
    ODR_1_1_1
} ODR_11_T ;
#define WRITE_ODR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR11_MASK) | ((val << ODR11_START_BIT) & ODR11_MASK )); \
   } 

#define ENABLE_ODR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR11_MASK ); \
   }

#define DISABLE_ODR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR11_MASK ); \
   } 

#define READ_ODR11() \
   ((READ_REGISTER_ULONG(0x14) & ODR11_MASK)  >> ODR11_START_BIT)

#define WHEN_ODR11_HIGH() \
     if ( READ_ODR11() )


#define UNLESS_ODR11_HIGH() \
     if (! READ_ODR11() )


#define WAIT_ODR11_LOW() \
    while ( READ_ODR11() );


#define WAIT_ODR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR11() && (--___t___ > 0)); }


#define WAIT_ODR11_HIGH() \
    while (! READ_ODR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR12_MASK 0x1000U
#define ODR12_OFFSET 12
#define ODR12_START_BIT 12
#define ODR12_WIDTH 1



typedef enum odr12 {
    ODR_1_2_0,
    ODR_1_2_1
} ODR_12_T ;
#define WRITE_ODR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR12_MASK) | ((val << ODR12_START_BIT) & ODR12_MASK )); \
   } 

#define ENABLE_ODR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR12_MASK ); \
   }

#define DISABLE_ODR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR12_MASK ); \
   } 

#define READ_ODR12() \
   ((READ_REGISTER_ULONG(0x14) & ODR12_MASK)  >> ODR12_START_BIT)

#define WHEN_ODR12_HIGH() \
     if ( READ_ODR12() )


#define UNLESS_ODR12_HIGH() \
     if (! READ_ODR12() )


#define WAIT_ODR12_LOW() \
    while ( READ_ODR12() );


#define WAIT_ODR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR12() && (--___t___ > 0)); }


#define WAIT_ODR12_HIGH() \
    while (! READ_ODR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR13_MASK 0x2000U
#define ODR13_OFFSET 13
#define ODR13_START_BIT 13
#define ODR13_WIDTH 1



typedef enum odr13 {
    ODR_1_3_0,
    ODR_1_3_1
} ODR_13_T ;
#define WRITE_ODR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR13_MASK) | ((val << ODR13_START_BIT) & ODR13_MASK )); \
   } 

#define ENABLE_ODR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR13_MASK ); \
   }

#define DISABLE_ODR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR13_MASK ); \
   } 

#define READ_ODR13() \
   ((READ_REGISTER_ULONG(0x14) & ODR13_MASK)  >> ODR13_START_BIT)

#define WHEN_ODR13_HIGH() \
     if ( READ_ODR13() )


#define UNLESS_ODR13_HIGH() \
     if (! READ_ODR13() )


#define WAIT_ODR13_LOW() \
    while ( READ_ODR13() );


#define WAIT_ODR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR13() && (--___t___ > 0)); }


#define WAIT_ODR13_HIGH() \
    while (! READ_ODR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR14_MASK 0x4000U
#define ODR14_OFFSET 14
#define ODR14_START_BIT 14
#define ODR14_WIDTH 1



typedef enum odr14 {
    ODR_1_4_0,
    ODR_1_4_1
} ODR_14_T ;
#define WRITE_ODR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR14_MASK) | ((val << ODR14_START_BIT) & ODR14_MASK )); \
   } 

#define ENABLE_ODR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR14_MASK ); \
   }

#define DISABLE_ODR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR14_MASK ); \
   } 

#define READ_ODR14() \
   ((READ_REGISTER_ULONG(0x14) & ODR14_MASK)  >> ODR14_START_BIT)

#define WHEN_ODR14_HIGH() \
     if ( READ_ODR14() )


#define UNLESS_ODR14_HIGH() \
     if (! READ_ODR14() )


#define WAIT_ODR14_LOW() \
    while ( READ_ODR14() );


#define WAIT_ODR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR14() && (--___t___ > 0)); }


#define WAIT_ODR14_HIGH() \
    while (! READ_ODR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register GPIO port output data register (ODR) at the offset 0x14, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port output data (y = 0..15) 
    // 
#define ODR15_MASK 0x8000U
#define ODR15_OFFSET 15
#define ODR15_START_BIT 15
#define ODR15_WIDTH 1



typedef enum odr15 {
    ODR_1_5_0,
    ODR_1_5_1
} ODR_15_T ;
#define WRITE_ODR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ODR15_MASK) | ((val << ODR15_START_BIT) & ODR15_MASK )); \
   } 

#define ENABLE_ODR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ODR15_MASK ); \
   }

#define DISABLE_ODR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ODR15_MASK ); \
   } 

#define READ_ODR15() \
   ((READ_REGISTER_ULONG(0x14) & ODR15_MASK)  >> ODR15_START_BIT)

#define WHEN_ODR15_HIGH() \
     if ( READ_ODR15() )


#define UNLESS_ODR15_HIGH() \
     if (! READ_ODR15() )


#define WAIT_ODR15_LOW() \
    while ( READ_ODR15() );


#define WAIT_ODR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR15() && (--___t___ > 0)); }


#define WAIT_ODR15_HIGH() \
    while (! READ_ODR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register Bsrr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BSRR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS0_MASK 0x1U
#define BS0_OFFSET 0
#define BS0_START_BIT 0
#define BS0_WIDTH 1


#define BSRR_REG 0x18

typedef enum bs0 {
    BS_0_0,
    BS_0_1
} BS_0_T ;
#define WRITE_BS0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS0_MASK) | ((val << BS0_START_BIT) & BS0_MASK )); \
   } 

#define ENABLE_BS0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS0_MASK ); \
   }

#define DISABLE_BS0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS0_MASK ); \
   } 

#define READ_BS0() \
   ((READ_REGISTER_ULONG(0x18) & BS0_MASK)  >> BS0_START_BIT)

#define WHEN_BS0_HIGH() \
     if ( READ_BS0() )


#define UNLESS_BS0_HIGH() \
     if (! READ_BS0() )


#define WAIT_BS0_LOW() \
    while ( READ_BS0() );


#define WAIT_BS0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS0() && (--___t___ > 0)); }


#define WAIT_BS0_HIGH() \
    while (! READ_BS0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS1_MASK 0x2U
#define BS1_OFFSET 1
#define BS1_START_BIT 1
#define BS1_WIDTH 1



typedef enum bs1 {
    BS_1_0,
    BS_1_1
} BS_1_T ;
#define WRITE_BS1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS1_MASK) | ((val << BS1_START_BIT) & BS1_MASK )); \
   } 

#define ENABLE_BS1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS1_MASK ); \
   }

#define DISABLE_BS1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS1_MASK ); \
   } 

#define READ_BS1() \
   ((READ_REGISTER_ULONG(0x18) & BS1_MASK)  >> BS1_START_BIT)

#define WHEN_BS1_HIGH() \
     if ( READ_BS1() )


#define UNLESS_BS1_HIGH() \
     if (! READ_BS1() )


#define WAIT_BS1_LOW() \
    while ( READ_BS1() );


#define WAIT_BS1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS1() && (--___t___ > 0)); }


#define WAIT_BS1_HIGH() \
    while (! READ_BS1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS2_MASK 0x4U
#define BS2_OFFSET 2
#define BS2_START_BIT 2
#define BS2_WIDTH 1



typedef enum bs2 {
    BS_2_0,
    BS_2_1
} BS_2_T ;
#define WRITE_BS2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS2_MASK) | ((val << BS2_START_BIT) & BS2_MASK )); \
   } 

#define ENABLE_BS2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS2_MASK ); \
   }

#define DISABLE_BS2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS2_MASK ); \
   } 

#define READ_BS2() \
   ((READ_REGISTER_ULONG(0x18) & BS2_MASK)  >> BS2_START_BIT)

#define WHEN_BS2_HIGH() \
     if ( READ_BS2() )


#define UNLESS_BS2_HIGH() \
     if (! READ_BS2() )


#define WAIT_BS2_LOW() \
    while ( READ_BS2() );


#define WAIT_BS2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS2() && (--___t___ > 0)); }


#define WAIT_BS2_HIGH() \
    while (! READ_BS2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS3_MASK 0x8U
#define BS3_OFFSET 3
#define BS3_START_BIT 3
#define BS3_WIDTH 1



typedef enum bs3 {
    BS_3_0,
    BS_3_1
} BS_3_T ;
#define WRITE_BS3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS3_MASK) | ((val << BS3_START_BIT) & BS3_MASK )); \
   } 

#define ENABLE_BS3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS3_MASK ); \
   }

#define DISABLE_BS3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS3_MASK ); \
   } 

#define READ_BS3() \
   ((READ_REGISTER_ULONG(0x18) & BS3_MASK)  >> BS3_START_BIT)

#define WHEN_BS3_HIGH() \
     if ( READ_BS3() )


#define UNLESS_BS3_HIGH() \
     if (! READ_BS3() )


#define WAIT_BS3_LOW() \
    while ( READ_BS3() );


#define WAIT_BS3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS3() && (--___t___ > 0)); }


#define WAIT_BS3_HIGH() \
    while (! READ_BS3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS4_MASK 0x10U
#define BS4_OFFSET 4
#define BS4_START_BIT 4
#define BS4_WIDTH 1



typedef enum bs4 {
    BS_4_0,
    BS_4_1
} BS_4_T ;
#define WRITE_BS4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS4_MASK) | ((val << BS4_START_BIT) & BS4_MASK )); \
   } 

#define ENABLE_BS4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS4_MASK ); \
   }

#define DISABLE_BS4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS4_MASK ); \
   } 

#define READ_BS4() \
   ((READ_REGISTER_ULONG(0x18) & BS4_MASK)  >> BS4_START_BIT)

#define WHEN_BS4_HIGH() \
     if ( READ_BS4() )


#define UNLESS_BS4_HIGH() \
     if (! READ_BS4() )


#define WAIT_BS4_LOW() \
    while ( READ_BS4() );


#define WAIT_BS4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS4() && (--___t___ > 0)); }


#define WAIT_BS4_HIGH() \
    while (! READ_BS4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS5_MASK 0x20U
#define BS5_OFFSET 5
#define BS5_START_BIT 5
#define BS5_WIDTH 1



typedef enum bs5 {
    BS_5_0,
    BS_5_1
} BS_5_T ;
#define WRITE_BS5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS5_MASK) | ((val << BS5_START_BIT) & BS5_MASK )); \
   } 

#define ENABLE_BS5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS5_MASK ); \
   }

#define DISABLE_BS5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS5_MASK ); \
   } 

#define READ_BS5() \
   ((READ_REGISTER_ULONG(0x18) & BS5_MASK)  >> BS5_START_BIT)

#define WHEN_BS5_HIGH() \
     if ( READ_BS5() )


#define UNLESS_BS5_HIGH() \
     if (! READ_BS5() )


#define WAIT_BS5_LOW() \
    while ( READ_BS5() );


#define WAIT_BS5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS5() && (--___t___ > 0)); }


#define WAIT_BS5_HIGH() \
    while (! READ_BS5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS6_MASK 0x40U
#define BS6_OFFSET 6
#define BS6_START_BIT 6
#define BS6_WIDTH 1



typedef enum bs6 {
    BS_6_0,
    BS_6_1
} BS_6_T ;
#define WRITE_BS6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS6_MASK) | ((val << BS6_START_BIT) & BS6_MASK )); \
   } 

#define ENABLE_BS6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS6_MASK ); \
   }

#define DISABLE_BS6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS6_MASK ); \
   } 

#define READ_BS6() \
   ((READ_REGISTER_ULONG(0x18) & BS6_MASK)  >> BS6_START_BIT)

#define WHEN_BS6_HIGH() \
     if ( READ_BS6() )


#define UNLESS_BS6_HIGH() \
     if (! READ_BS6() )


#define WAIT_BS6_LOW() \
    while ( READ_BS6() );


#define WAIT_BS6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS6() && (--___t___ > 0)); }


#define WAIT_BS6_HIGH() \
    while (! READ_BS6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS7_MASK 0x80U
#define BS7_OFFSET 7
#define BS7_START_BIT 7
#define BS7_WIDTH 1



typedef enum bs7 {
    BS_7_0,
    BS_7_1
} BS_7_T ;
#define WRITE_BS7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS7_MASK) | ((val << BS7_START_BIT) & BS7_MASK )); \
   } 

#define ENABLE_BS7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS7_MASK ); \
   }

#define DISABLE_BS7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS7_MASK ); \
   } 

#define READ_BS7() \
   ((READ_REGISTER_ULONG(0x18) & BS7_MASK)  >> BS7_START_BIT)

#define WHEN_BS7_HIGH() \
     if ( READ_BS7() )


#define UNLESS_BS7_HIGH() \
     if (! READ_BS7() )


#define WAIT_BS7_LOW() \
    while ( READ_BS7() );


#define WAIT_BS7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS7() && (--___t___ > 0)); }


#define WAIT_BS7_HIGH() \
    while (! READ_BS7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS8_MASK 0x100U
#define BS8_OFFSET 8
#define BS8_START_BIT 8
#define BS8_WIDTH 1



typedef enum bs8 {
    BS_8_0,
    BS_8_1
} BS_8_T ;
#define WRITE_BS8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS8_MASK) | ((val << BS8_START_BIT) & BS8_MASK )); \
   } 

#define ENABLE_BS8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS8_MASK ); \
   }

#define DISABLE_BS8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS8_MASK ); \
   } 

#define READ_BS8() \
   ((READ_REGISTER_ULONG(0x18) & BS8_MASK)  >> BS8_START_BIT)

#define WHEN_BS8_HIGH() \
     if ( READ_BS8() )


#define UNLESS_BS8_HIGH() \
     if (! READ_BS8() )


#define WAIT_BS8_LOW() \
    while ( READ_BS8() );


#define WAIT_BS8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS8() && (--___t___ > 0)); }


#define WAIT_BS8_HIGH() \
    while (! READ_BS8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS9_MASK 0x200U
#define BS9_OFFSET 9
#define BS9_START_BIT 9
#define BS9_WIDTH 1



typedef enum bs9 {
    BS_9_0,
    BS_9_1
} BS_9_T ;
#define WRITE_BS9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS9_MASK) | ((val << BS9_START_BIT) & BS9_MASK )); \
   } 

#define ENABLE_BS9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS9_MASK ); \
   }

#define DISABLE_BS9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS9_MASK ); \
   } 

#define READ_BS9() \
   ((READ_REGISTER_ULONG(0x18) & BS9_MASK)  >> BS9_START_BIT)

#define WHEN_BS9_HIGH() \
     if ( READ_BS9() )


#define UNLESS_BS9_HIGH() \
     if (! READ_BS9() )


#define WAIT_BS9_LOW() \
    while ( READ_BS9() );


#define WAIT_BS9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS9() && (--___t___ > 0)); }


#define WAIT_BS9_HIGH() \
    while (! READ_BS9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS10_MASK 0x400U
#define BS10_OFFSET 10
#define BS10_START_BIT 10
#define BS10_WIDTH 1



typedef enum bs10 {
    BS_1_0_0,
    BS_1_0_1
} BS_10_T ;
#define WRITE_BS10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS10_MASK) | ((val << BS10_START_BIT) & BS10_MASK )); \
   } 

#define ENABLE_BS10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS10_MASK ); \
   }

#define DISABLE_BS10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS10_MASK ); \
   } 

#define READ_BS10() \
   ((READ_REGISTER_ULONG(0x18) & BS10_MASK)  >> BS10_START_BIT)

#define WHEN_BS10_HIGH() \
     if ( READ_BS10() )


#define UNLESS_BS10_HIGH() \
     if (! READ_BS10() )


#define WAIT_BS10_LOW() \
    while ( READ_BS10() );


#define WAIT_BS10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS10() && (--___t___ > 0)); }


#define WAIT_BS10_HIGH() \
    while (! READ_BS10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS11_MASK 0x800U
#define BS11_OFFSET 11
#define BS11_START_BIT 11
#define BS11_WIDTH 1



typedef enum bs11 {
    BS_1_1_0,
    BS_1_1_1
} BS_11_T ;
#define WRITE_BS11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS11_MASK) | ((val << BS11_START_BIT) & BS11_MASK )); \
   } 

#define ENABLE_BS11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS11_MASK ); \
   }

#define DISABLE_BS11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS11_MASK ); \
   } 

#define READ_BS11() \
   ((READ_REGISTER_ULONG(0x18) & BS11_MASK)  >> BS11_START_BIT)

#define WHEN_BS11_HIGH() \
     if ( READ_BS11() )


#define UNLESS_BS11_HIGH() \
     if (! READ_BS11() )


#define WAIT_BS11_LOW() \
    while ( READ_BS11() );


#define WAIT_BS11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS11() && (--___t___ > 0)); }


#define WAIT_BS11_HIGH() \
    while (! READ_BS11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS12_MASK 0x1000U
#define BS12_OFFSET 12
#define BS12_START_BIT 12
#define BS12_WIDTH 1



typedef enum bs12 {
    BS_1_2_0,
    BS_1_2_1
} BS_12_T ;
#define WRITE_BS12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS12_MASK) | ((val << BS12_START_BIT) & BS12_MASK )); \
   } 

#define ENABLE_BS12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS12_MASK ); \
   }

#define DISABLE_BS12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS12_MASK ); \
   } 

#define READ_BS12() \
   ((READ_REGISTER_ULONG(0x18) & BS12_MASK)  >> BS12_START_BIT)

#define WHEN_BS12_HIGH() \
     if ( READ_BS12() )


#define UNLESS_BS12_HIGH() \
     if (! READ_BS12() )


#define WAIT_BS12_LOW() \
    while ( READ_BS12() );


#define WAIT_BS12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS12() && (--___t___ > 0)); }


#define WAIT_BS12_HIGH() \
    while (! READ_BS12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS13_MASK 0x2000U
#define BS13_OFFSET 13
#define BS13_START_BIT 13
#define BS13_WIDTH 1



typedef enum bs13 {
    BS_1_3_0,
    BS_1_3_1
} BS_13_T ;
#define WRITE_BS13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS13_MASK) | ((val << BS13_START_BIT) & BS13_MASK )); \
   } 

#define ENABLE_BS13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS13_MASK ); \
   }

#define DISABLE_BS13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS13_MASK ); \
   } 

#define READ_BS13() \
   ((READ_REGISTER_ULONG(0x18) & BS13_MASK)  >> BS13_START_BIT)

#define WHEN_BS13_HIGH() \
     if ( READ_BS13() )


#define UNLESS_BS13_HIGH() \
     if (! READ_BS13() )


#define WAIT_BS13_LOW() \
    while ( READ_BS13() );


#define WAIT_BS13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS13() && (--___t___ > 0)); }


#define WAIT_BS13_HIGH() \
    while (! READ_BS13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS14_MASK 0x4000U
#define BS14_OFFSET 14
#define BS14_START_BIT 14
#define BS14_WIDTH 1



typedef enum bs14 {
    BS_1_4_0,
    BS_1_4_1
} BS_14_T ;
#define WRITE_BS14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS14_MASK) | ((val << BS14_START_BIT) & BS14_MASK )); \
   } 

#define ENABLE_BS14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS14_MASK ); \
   }

#define DISABLE_BS14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS14_MASK ); \
   } 

#define READ_BS14() \
   ((READ_REGISTER_ULONG(0x18) & BS14_MASK)  >> BS14_START_BIT)

#define WHEN_BS14_HIGH() \
     if ( READ_BS14() )


#define UNLESS_BS14_HIGH() \
     if (! READ_BS14() )


#define WAIT_BS14_LOW() \
    while ( READ_BS14() );


#define WAIT_BS14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS14() && (--___t___ > 0)); }


#define WAIT_BS14_HIGH() \
    while (! READ_BS14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BS15_MASK 0x8000U
#define BS15_OFFSET 15
#define BS15_START_BIT 15
#define BS15_WIDTH 1



typedef enum bs15 {
    BS_1_5_0,
    BS_1_5_1
} BS_15_T ;
#define WRITE_BS15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BS15_MASK) | ((val << BS15_START_BIT) & BS15_MASK )); \
   } 

#define ENABLE_BS15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BS15_MASK ); \
   }

#define DISABLE_BS15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BS15_MASK ); \
   } 

#define READ_BS15() \
   ((READ_REGISTER_ULONG(0x18) & BS15_MASK)  >> BS15_START_BIT)

#define WHEN_BS15_HIGH() \
     if ( READ_BS15() )


#define UNLESS_BS15_HIGH() \
     if (! READ_BS15() )


#define WAIT_BS15_LOW() \
    while ( READ_BS15() );


#define WAIT_BS15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS15() && (--___t___ > 0)); }


#define WAIT_BS15_HIGH() \
    while (! READ_BS15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x set bit y (y= 0..15) 
    // 
#define BR0_MASK 0x10000U
#define BR0_OFFSET 16
#define BR0_START_BIT 16
#define BR0_WIDTH 1



typedef enum br0 {
    BR_0_0,
    BR_0_1
} BR_0_T ;
#define WRITE_BR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR0_MASK) | ((val << BR0_START_BIT) & BR0_MASK )); \
   } 

#define ENABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR0_MASK ); \
   }

#define DISABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR0_MASK ); \
   } 

#define READ_BR0() \
   ((READ_REGISTER_ULONG(0x18) & BR0_MASK)  >> BR0_START_BIT)

#define WHEN_BR0_HIGH() \
     if ( READ_BR0() )


#define UNLESS_BR0_HIGH() \
     if (! READ_BR0() )


#define WAIT_BR0_LOW() \
    while ( READ_BR0() );


#define WAIT_BR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR0() && (--___t___ > 0)); }


#define WAIT_BR0_HIGH() \
    while (! READ_BR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR1_MASK 0x20000U
#define BR1_OFFSET 17
#define BR1_START_BIT 17
#define BR1_WIDTH 1



typedef enum br1 {
    BR_1_0,
    BR_1_1
} BR_1_T ;
#define WRITE_BR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR1_MASK) | ((val << BR1_START_BIT) & BR1_MASK )); \
   } 

#define ENABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR1_MASK ); \
   }

#define DISABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR1_MASK ); \
   } 

#define READ_BR1() \
   ((READ_REGISTER_ULONG(0x18) & BR1_MASK)  >> BR1_START_BIT)

#define WHEN_BR1_HIGH() \
     if ( READ_BR1() )


#define UNLESS_BR1_HIGH() \
     if (! READ_BR1() )


#define WAIT_BR1_LOW() \
    while ( READ_BR1() );


#define WAIT_BR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR1() && (--___t___ > 0)); }


#define WAIT_BR1_HIGH() \
    while (! READ_BR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR2_MASK 0x40000U
#define BR2_OFFSET 18
#define BR2_START_BIT 18
#define BR2_WIDTH 1



typedef enum br2 {
    BR_2_0,
    BR_2_1
} BR_2_T ;
#define WRITE_BR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR2_MASK) | ((val << BR2_START_BIT) & BR2_MASK )); \
   } 

#define ENABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR2_MASK ); \
   }

#define DISABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR2_MASK ); \
   } 

#define READ_BR2() \
   ((READ_REGISTER_ULONG(0x18) & BR2_MASK)  >> BR2_START_BIT)

#define WHEN_BR2_HIGH() \
     if ( READ_BR2() )


#define UNLESS_BR2_HIGH() \
     if (! READ_BR2() )


#define WAIT_BR2_LOW() \
    while ( READ_BR2() );


#define WAIT_BR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR2() && (--___t___ > 0)); }


#define WAIT_BR2_HIGH() \
    while (! READ_BR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR3_MASK 0x80000U
#define BR3_OFFSET 19
#define BR3_START_BIT 19
#define BR3_WIDTH 1



typedef enum br3 {
    BR_3_0,
    BR_3_1
} BR_3_T ;
#define WRITE_BR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR3_MASK) | ((val << BR3_START_BIT) & BR3_MASK )); \
   } 

#define ENABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR3_MASK ); \
   }

#define DISABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR3_MASK ); \
   } 

#define READ_BR3() \
   ((READ_REGISTER_ULONG(0x18) & BR3_MASK)  >> BR3_START_BIT)

#define WHEN_BR3_HIGH() \
     if ( READ_BR3() )


#define UNLESS_BR3_HIGH() \
     if (! READ_BR3() )


#define WAIT_BR3_LOW() \
    while ( READ_BR3() );


#define WAIT_BR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR3() && (--___t___ > 0)); }


#define WAIT_BR3_HIGH() \
    while (! READ_BR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR4_MASK 0x100000U
#define BR4_OFFSET 20
#define BR4_START_BIT 20
#define BR4_WIDTH 1



typedef enum br4 {
    BR_4_0,
    BR_4_1
} BR_4_T ;
#define WRITE_BR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR4_MASK) | ((val << BR4_START_BIT) & BR4_MASK )); \
   } 

#define ENABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR4_MASK ); \
   }

#define DISABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR4_MASK ); \
   } 

#define READ_BR4() \
   ((READ_REGISTER_ULONG(0x18) & BR4_MASK)  >> BR4_START_BIT)

#define WHEN_BR4_HIGH() \
     if ( READ_BR4() )


#define UNLESS_BR4_HIGH() \
     if (! READ_BR4() )


#define WAIT_BR4_LOW() \
    while ( READ_BR4() );


#define WAIT_BR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR4() && (--___t___ > 0)); }


#define WAIT_BR4_HIGH() \
    while (! READ_BR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR5_MASK 0x200000U
#define BR5_OFFSET 21
#define BR5_START_BIT 21
#define BR5_WIDTH 1



typedef enum br5 {
    BR_5_0,
    BR_5_1
} BR_5_T ;
#define WRITE_BR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR5_MASK) | ((val << BR5_START_BIT) & BR5_MASK )); \
   } 

#define ENABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR5_MASK ); \
   }

#define DISABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR5_MASK ); \
   } 

#define READ_BR5() \
   ((READ_REGISTER_ULONG(0x18) & BR5_MASK)  >> BR5_START_BIT)

#define WHEN_BR5_HIGH() \
     if ( READ_BR5() )


#define UNLESS_BR5_HIGH() \
     if (! READ_BR5() )


#define WAIT_BR5_LOW() \
    while ( READ_BR5() );


#define WAIT_BR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR5() && (--___t___ > 0)); }


#define WAIT_BR5_HIGH() \
    while (! READ_BR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR6_MASK 0x400000U
#define BR6_OFFSET 22
#define BR6_START_BIT 22
#define BR6_WIDTH 1



typedef enum br6 {
    BR_6_0,
    BR_6_1
} BR_6_T ;
#define WRITE_BR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR6_MASK) | ((val << BR6_START_BIT) & BR6_MASK )); \
   } 

#define ENABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR6_MASK ); \
   }

#define DISABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR6_MASK ); \
   } 

#define READ_BR6() \
   ((READ_REGISTER_ULONG(0x18) & BR6_MASK)  >> BR6_START_BIT)

#define WHEN_BR6_HIGH() \
     if ( READ_BR6() )


#define UNLESS_BR6_HIGH() \
     if (! READ_BR6() )


#define WAIT_BR6_LOW() \
    while ( READ_BR6() );


#define WAIT_BR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR6() && (--___t___ > 0)); }


#define WAIT_BR6_HIGH() \
    while (! READ_BR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR7_MASK 0x800000U
#define BR7_OFFSET 23
#define BR7_START_BIT 23
#define BR7_WIDTH 1



typedef enum br7 {
    BR_7_0,
    BR_7_1
} BR_7_T ;
#define WRITE_BR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR7_MASK) | ((val << BR7_START_BIT) & BR7_MASK )); \
   } 

#define ENABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR7_MASK ); \
   }

#define DISABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR7_MASK ); \
   } 

#define READ_BR7() \
   ((READ_REGISTER_ULONG(0x18) & BR7_MASK)  >> BR7_START_BIT)

#define WHEN_BR7_HIGH() \
     if ( READ_BR7() )


#define UNLESS_BR7_HIGH() \
     if (! READ_BR7() )


#define WAIT_BR7_LOW() \
    while ( READ_BR7() );


#define WAIT_BR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR7() && (--___t___ > 0)); }


#define WAIT_BR7_HIGH() \
    while (! READ_BR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR8_MASK 0x1000000U
#define BR8_OFFSET 24
#define BR8_START_BIT 24
#define BR8_WIDTH 1



typedef enum br8 {
    BR_8_0,
    BR_8_1
} BR_8_T ;
#define WRITE_BR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR8_MASK) | ((val << BR8_START_BIT) & BR8_MASK )); \
   } 

#define ENABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR8_MASK ); \
   }

#define DISABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR8_MASK ); \
   } 

#define READ_BR8() \
   ((READ_REGISTER_ULONG(0x18) & BR8_MASK)  >> BR8_START_BIT)

#define WHEN_BR8_HIGH() \
     if ( READ_BR8() )


#define UNLESS_BR8_HIGH() \
     if (! READ_BR8() )


#define WAIT_BR8_LOW() \
    while ( READ_BR8() );


#define WAIT_BR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR8() && (--___t___ > 0)); }


#define WAIT_BR8_HIGH() \
    while (! READ_BR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR9_MASK 0x2000000U
#define BR9_OFFSET 25
#define BR9_START_BIT 25
#define BR9_WIDTH 1



typedef enum br9 {
    BR_9_0,
    BR_9_1
} BR_9_T ;
#define WRITE_BR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR9_MASK) | ((val << BR9_START_BIT) & BR9_MASK )); \
   } 

#define ENABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR9_MASK ); \
   }

#define DISABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR9_MASK ); \
   } 

#define READ_BR9() \
   ((READ_REGISTER_ULONG(0x18) & BR9_MASK)  >> BR9_START_BIT)

#define WHEN_BR9_HIGH() \
     if ( READ_BR9() )


#define UNLESS_BR9_HIGH() \
     if (! READ_BR9() )


#define WAIT_BR9_LOW() \
    while ( READ_BR9() );


#define WAIT_BR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR9() && (--___t___ > 0)); }


#define WAIT_BR9_HIGH() \
    while (! READ_BR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR10_MASK 0x4000000U
#define BR10_OFFSET 26
#define BR10_START_BIT 26
#define BR10_WIDTH 1



typedef enum br10 {
    BR_1_0_0,
    BR_1_0_1
} BR_10_T ;
#define WRITE_BR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR10_MASK) | ((val << BR10_START_BIT) & BR10_MASK )); \
   } 

#define ENABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR10_MASK ); \
   }

#define DISABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR10_MASK ); \
   } 

#define READ_BR10() \
   ((READ_REGISTER_ULONG(0x18) & BR10_MASK)  >> BR10_START_BIT)

#define WHEN_BR10_HIGH() \
     if ( READ_BR10() )


#define UNLESS_BR10_HIGH() \
     if (! READ_BR10() )


#define WAIT_BR10_LOW() \
    while ( READ_BR10() );


#define WAIT_BR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR10() && (--___t___ > 0)); }


#define WAIT_BR10_HIGH() \
    while (! READ_BR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR11_MASK 0x8000000U
#define BR11_OFFSET 27
#define BR11_START_BIT 27
#define BR11_WIDTH 1



typedef enum br11 {
    BR_1_1_0,
    BR_1_1_1
} BR_11_T ;
#define WRITE_BR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR11_MASK) | ((val << BR11_START_BIT) & BR11_MASK )); \
   } 

#define ENABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR11_MASK ); \
   }

#define DISABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR11_MASK ); \
   } 

#define READ_BR11() \
   ((READ_REGISTER_ULONG(0x18) & BR11_MASK)  >> BR11_START_BIT)

#define WHEN_BR11_HIGH() \
     if ( READ_BR11() )


#define UNLESS_BR11_HIGH() \
     if (! READ_BR11() )


#define WAIT_BR11_LOW() \
    while ( READ_BR11() );


#define WAIT_BR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR11() && (--___t___ > 0)); }


#define WAIT_BR11_HIGH() \
    while (! READ_BR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR12_MASK 0x10000000U
#define BR12_OFFSET 28
#define BR12_START_BIT 28
#define BR12_WIDTH 1



typedef enum br12 {
    BR_1_2_0,
    BR_1_2_1
} BR_12_T ;
#define WRITE_BR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR12_MASK) | ((val << BR12_START_BIT) & BR12_MASK )); \
   } 

#define ENABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR12_MASK ); \
   }

#define DISABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR12_MASK ); \
   } 

#define READ_BR12() \
   ((READ_REGISTER_ULONG(0x18) & BR12_MASK)  >> BR12_START_BIT)

#define WHEN_BR12_HIGH() \
     if ( READ_BR12() )


#define UNLESS_BR12_HIGH() \
     if (! READ_BR12() )


#define WAIT_BR12_LOW() \
    while ( READ_BR12() );


#define WAIT_BR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR12() && (--___t___ > 0)); }


#define WAIT_BR12_HIGH() \
    while (! READ_BR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR13_MASK 0x20000000U
#define BR13_OFFSET 29
#define BR13_START_BIT 29
#define BR13_WIDTH 1



typedef enum br13 {
    BR_1_3_0,
    BR_1_3_1
} BR_13_T ;
#define WRITE_BR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR13_MASK) | ((val << BR13_START_BIT) & BR13_MASK )); \
   } 

#define ENABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR13_MASK ); \
   }

#define DISABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR13_MASK ); \
   } 

#define READ_BR13() \
   ((READ_REGISTER_ULONG(0x18) & BR13_MASK)  >> BR13_START_BIT)

#define WHEN_BR13_HIGH() \
     if ( READ_BR13() )


#define UNLESS_BR13_HIGH() \
     if (! READ_BR13() )


#define WAIT_BR13_LOW() \
    while ( READ_BR13() );


#define WAIT_BR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR13() && (--___t___ > 0)); }


#define WAIT_BR13_HIGH() \
    while (! READ_BR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR14_MASK 0x40000000U
#define BR14_OFFSET 30
#define BR14_START_BIT 30
#define BR14_WIDTH 1



typedef enum br14 {
    BR_1_4_0,
    BR_1_4_1
} BR_14_T ;
#define WRITE_BR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR14_MASK) | ((val << BR14_START_BIT) & BR14_MASK )); \
   } 

#define ENABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR14_MASK ); \
   }

#define DISABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR14_MASK ); \
   } 

#define READ_BR14() \
   ((READ_REGISTER_ULONG(0x18) & BR14_MASK)  >> BR14_START_BIT)

#define WHEN_BR14_HIGH() \
     if ( READ_BR14() )


#define UNLESS_BR14_HIGH() \
     if (! READ_BR14() )


#define WAIT_BR14_LOW() \
    while ( READ_BR14() );


#define WAIT_BR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR14() && (--___t___ > 0)); }


#define WAIT_BR14_HIGH() \
    while (! READ_BR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register GPIO port bit set/reset register (BSRR) at the offset 0x18, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x reset bit y (y = 0..15) 
    // 
#define BR15_MASK 0x80000000U
#define BR15_OFFSET 31
#define BR15_START_BIT 31
#define BR15_WIDTH 1



typedef enum br15 {
    BR_1_5_0,
    BR_1_5_1
} BR_15_T ;
#define WRITE_BR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BR15_MASK) | ((val << BR15_START_BIT) & BR15_MASK )); \
   } 

#define ENABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BR15_MASK ); \
   }

#define DISABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BR15_MASK ); \
   } 

#define READ_BR15() \
   ((READ_REGISTER_ULONG(0x18) & BR15_MASK)  >> BR15_START_BIT)

#define WHEN_BR15_HIGH() \
     if ( READ_BR15() )


#define UNLESS_BR15_HIGH() \
     if (! READ_BR15() )


#define WAIT_BR15_LOW() \
    while ( READ_BR15() );


#define WAIT_BR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR15() && (--___t___ > 0)); }


#define WAIT_BR15_HIGH() \
    while (! READ_BR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register Lckr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LCKR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_LCKR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_LCKR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_LCKR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK0_MASK 0x1U
#define LCK0_OFFSET 0
#define LCK0_START_BIT 0
#define LCK0_WIDTH 1


#define LCKR_REG 0x1C

typedef enum lck0 {
    LCK_0_0,
    LCK_0_1
} LCK_0_T ;
#define WRITE_LCK0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK0_MASK) | ((val << LCK0_START_BIT) & LCK0_MASK )); \
   } 

#define ENABLE_LCK0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK0_MASK ); \
   }

#define DISABLE_LCK0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK0_MASK ); \
   } 

#define READ_LCK0() \
   ((READ_REGISTER_ULONG(0x1C) & LCK0_MASK)  >> LCK0_START_BIT)

#define WHEN_LCK0_HIGH() \
     if ( READ_LCK0() )


#define UNLESS_LCK0_HIGH() \
     if (! READ_LCK0() )


#define WAIT_LCK0_LOW() \
    while ( READ_LCK0() );


#define WAIT_LCK0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK0() && (--___t___ > 0)); }


#define WAIT_LCK0_HIGH() \
    while (! READ_LCK0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK1_MASK 0x2U
#define LCK1_OFFSET 1
#define LCK1_START_BIT 1
#define LCK1_WIDTH 1



typedef enum lck1 {
    LCK_1_0,
    LCK_1_1
} LCK_1_T ;
#define WRITE_LCK1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK1_MASK) | ((val << LCK1_START_BIT) & LCK1_MASK )); \
   } 

#define ENABLE_LCK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK1_MASK ); \
   }

#define DISABLE_LCK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK1_MASK ); \
   } 

#define READ_LCK1() \
   ((READ_REGISTER_ULONG(0x1C) & LCK1_MASK)  >> LCK1_START_BIT)

#define WHEN_LCK1_HIGH() \
     if ( READ_LCK1() )


#define UNLESS_LCK1_HIGH() \
     if (! READ_LCK1() )


#define WAIT_LCK1_LOW() \
    while ( READ_LCK1() );


#define WAIT_LCK1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK1() && (--___t___ > 0)); }


#define WAIT_LCK1_HIGH() \
    while (! READ_LCK1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK2_MASK 0x4U
#define LCK2_OFFSET 2
#define LCK2_START_BIT 2
#define LCK2_WIDTH 1



typedef enum lck2 {
    LCK_2_0,
    LCK_2_1
} LCK_2_T ;
#define WRITE_LCK2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK2_MASK) | ((val << LCK2_START_BIT) & LCK2_MASK )); \
   } 

#define ENABLE_LCK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK2_MASK ); \
   }

#define DISABLE_LCK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK2_MASK ); \
   } 

#define READ_LCK2() \
   ((READ_REGISTER_ULONG(0x1C) & LCK2_MASK)  >> LCK2_START_BIT)

#define WHEN_LCK2_HIGH() \
     if ( READ_LCK2() )


#define UNLESS_LCK2_HIGH() \
     if (! READ_LCK2() )


#define WAIT_LCK2_LOW() \
    while ( READ_LCK2() );


#define WAIT_LCK2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK2() && (--___t___ > 0)); }


#define WAIT_LCK2_HIGH() \
    while (! READ_LCK2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK3_MASK 0x8U
#define LCK3_OFFSET 3
#define LCK3_START_BIT 3
#define LCK3_WIDTH 1



typedef enum lck3 {
    LCK_3_0,
    LCK_3_1
} LCK_3_T ;
#define WRITE_LCK3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK3_MASK) | ((val << LCK3_START_BIT) & LCK3_MASK )); \
   } 

#define ENABLE_LCK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK3_MASK ); \
   }

#define DISABLE_LCK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK3_MASK ); \
   } 

#define READ_LCK3() \
   ((READ_REGISTER_ULONG(0x1C) & LCK3_MASK)  >> LCK3_START_BIT)

#define WHEN_LCK3_HIGH() \
     if ( READ_LCK3() )


#define UNLESS_LCK3_HIGH() \
     if (! READ_LCK3() )


#define WAIT_LCK3_LOW() \
    while ( READ_LCK3() );


#define WAIT_LCK3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK3() && (--___t___ > 0)); }


#define WAIT_LCK3_HIGH() \
    while (! READ_LCK3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK4_MASK 0x10U
#define LCK4_OFFSET 4
#define LCK4_START_BIT 4
#define LCK4_WIDTH 1



typedef enum lck4 {
    LCK_4_0,
    LCK_4_1
} LCK_4_T ;
#define WRITE_LCK4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK4_MASK) | ((val << LCK4_START_BIT) & LCK4_MASK )); \
   } 

#define ENABLE_LCK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK4_MASK ); \
   }

#define DISABLE_LCK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK4_MASK ); \
   } 

#define READ_LCK4() \
   ((READ_REGISTER_ULONG(0x1C) & LCK4_MASK)  >> LCK4_START_BIT)

#define WHEN_LCK4_HIGH() \
     if ( READ_LCK4() )


#define UNLESS_LCK4_HIGH() \
     if (! READ_LCK4() )


#define WAIT_LCK4_LOW() \
    while ( READ_LCK4() );


#define WAIT_LCK4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK4() && (--___t___ > 0)); }


#define WAIT_LCK4_HIGH() \
    while (! READ_LCK4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK5_MASK 0x20U
#define LCK5_OFFSET 5
#define LCK5_START_BIT 5
#define LCK5_WIDTH 1



typedef enum lck5 {
    LCK_5_0,
    LCK_5_1
} LCK_5_T ;
#define WRITE_LCK5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK5_MASK) | ((val << LCK5_START_BIT) & LCK5_MASK )); \
   } 

#define ENABLE_LCK5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK5_MASK ); \
   }

#define DISABLE_LCK5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK5_MASK ); \
   } 

#define READ_LCK5() \
   ((READ_REGISTER_ULONG(0x1C) & LCK5_MASK)  >> LCK5_START_BIT)

#define WHEN_LCK5_HIGH() \
     if ( READ_LCK5() )


#define UNLESS_LCK5_HIGH() \
     if (! READ_LCK5() )


#define WAIT_LCK5_LOW() \
    while ( READ_LCK5() );


#define WAIT_LCK5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK5() && (--___t___ > 0)); }


#define WAIT_LCK5_HIGH() \
    while (! READ_LCK5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK6_MASK 0x40U
#define LCK6_OFFSET 6
#define LCK6_START_BIT 6
#define LCK6_WIDTH 1



typedef enum lck6 {
    LCK_6_0,
    LCK_6_1
} LCK_6_T ;
#define WRITE_LCK6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK6_MASK) | ((val << LCK6_START_BIT) & LCK6_MASK )); \
   } 

#define ENABLE_LCK6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK6_MASK ); \
   }

#define DISABLE_LCK6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK6_MASK ); \
   } 

#define READ_LCK6() \
   ((READ_REGISTER_ULONG(0x1C) & LCK6_MASK)  >> LCK6_START_BIT)

#define WHEN_LCK6_HIGH() \
     if ( READ_LCK6() )


#define UNLESS_LCK6_HIGH() \
     if (! READ_LCK6() )


#define WAIT_LCK6_LOW() \
    while ( READ_LCK6() );


#define WAIT_LCK6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK6() && (--___t___ > 0)); }


#define WAIT_LCK6_HIGH() \
    while (! READ_LCK6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK7_MASK 0x80U
#define LCK7_OFFSET 7
#define LCK7_START_BIT 7
#define LCK7_WIDTH 1



typedef enum lck7 {
    LCK_7_0,
    LCK_7_1
} LCK_7_T ;
#define WRITE_LCK7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK7_MASK) | ((val << LCK7_START_BIT) & LCK7_MASK )); \
   } 

#define ENABLE_LCK7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK7_MASK ); \
   }

#define DISABLE_LCK7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK7_MASK ); \
   } 

#define READ_LCK7() \
   ((READ_REGISTER_ULONG(0x1C) & LCK7_MASK)  >> LCK7_START_BIT)

#define WHEN_LCK7_HIGH() \
     if ( READ_LCK7() )


#define UNLESS_LCK7_HIGH() \
     if (! READ_LCK7() )


#define WAIT_LCK7_LOW() \
    while ( READ_LCK7() );


#define WAIT_LCK7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK7() && (--___t___ > 0)); }


#define WAIT_LCK7_HIGH() \
    while (! READ_LCK7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK8_MASK 0x100U
#define LCK8_OFFSET 8
#define LCK8_START_BIT 8
#define LCK8_WIDTH 1



typedef enum lck8 {
    LCK_8_0,
    LCK_8_1
} LCK_8_T ;
#define WRITE_LCK8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK8_MASK) | ((val << LCK8_START_BIT) & LCK8_MASK )); \
   } 

#define ENABLE_LCK8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK8_MASK ); \
   }

#define DISABLE_LCK8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK8_MASK ); \
   } 

#define READ_LCK8() \
   ((READ_REGISTER_ULONG(0x1C) & LCK8_MASK)  >> LCK8_START_BIT)

#define WHEN_LCK8_HIGH() \
     if ( READ_LCK8() )


#define UNLESS_LCK8_HIGH() \
     if (! READ_LCK8() )


#define WAIT_LCK8_LOW() \
    while ( READ_LCK8() );


#define WAIT_LCK8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK8() && (--___t___ > 0)); }


#define WAIT_LCK8_HIGH() \
    while (! READ_LCK8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK9_MASK 0x200U
#define LCK9_OFFSET 9
#define LCK9_START_BIT 9
#define LCK9_WIDTH 1



typedef enum lck9 {
    LCK_9_0,
    LCK_9_1
} LCK_9_T ;
#define WRITE_LCK9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK9_MASK) | ((val << LCK9_START_BIT) & LCK9_MASK )); \
   } 

#define ENABLE_LCK9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK9_MASK ); \
   }

#define DISABLE_LCK9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK9_MASK ); \
   } 

#define READ_LCK9() \
   ((READ_REGISTER_ULONG(0x1C) & LCK9_MASK)  >> LCK9_START_BIT)

#define WHEN_LCK9_HIGH() \
     if ( READ_LCK9() )


#define UNLESS_LCK9_HIGH() \
     if (! READ_LCK9() )


#define WAIT_LCK9_LOW() \
    while ( READ_LCK9() );


#define WAIT_LCK9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK9() && (--___t___ > 0)); }


#define WAIT_LCK9_HIGH() \
    while (! READ_LCK9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK10_MASK 0x400U
#define LCK10_OFFSET 10
#define LCK10_START_BIT 10
#define LCK10_WIDTH 1



typedef enum lck10 {
    LCK_1_0_0,
    LCK_1_0_1
} LCK_10_T ;
#define WRITE_LCK10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK10_MASK) | ((val << LCK10_START_BIT) & LCK10_MASK )); \
   } 

#define ENABLE_LCK10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK10_MASK ); \
   }

#define DISABLE_LCK10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK10_MASK ); \
   } 

#define READ_LCK10() \
   ((READ_REGISTER_ULONG(0x1C) & LCK10_MASK)  >> LCK10_START_BIT)

#define WHEN_LCK10_HIGH() \
     if ( READ_LCK10() )


#define UNLESS_LCK10_HIGH() \
     if (! READ_LCK10() )


#define WAIT_LCK10_LOW() \
    while ( READ_LCK10() );


#define WAIT_LCK10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK10() && (--___t___ > 0)); }


#define WAIT_LCK10_HIGH() \
    while (! READ_LCK10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK11_MASK 0x800U
#define LCK11_OFFSET 11
#define LCK11_START_BIT 11
#define LCK11_WIDTH 1



typedef enum lck11 {
    LCK_1_1_0,
    LCK_1_1_1
} LCK_11_T ;
#define WRITE_LCK11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK11_MASK) | ((val << LCK11_START_BIT) & LCK11_MASK )); \
   } 

#define ENABLE_LCK11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK11_MASK ); \
   }

#define DISABLE_LCK11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK11_MASK ); \
   } 

#define READ_LCK11() \
   ((READ_REGISTER_ULONG(0x1C) & LCK11_MASK)  >> LCK11_START_BIT)

#define WHEN_LCK11_HIGH() \
     if ( READ_LCK11() )


#define UNLESS_LCK11_HIGH() \
     if (! READ_LCK11() )


#define WAIT_LCK11_LOW() \
    while ( READ_LCK11() );


#define WAIT_LCK11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK11() && (--___t___ > 0)); }


#define WAIT_LCK11_HIGH() \
    while (! READ_LCK11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK12_MASK 0x1000U
#define LCK12_OFFSET 12
#define LCK12_START_BIT 12
#define LCK12_WIDTH 1



typedef enum lck12 {
    LCK_1_2_0,
    LCK_1_2_1
} LCK_12_T ;
#define WRITE_LCK12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK12_MASK) | ((val << LCK12_START_BIT) & LCK12_MASK )); \
   } 

#define ENABLE_LCK12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK12_MASK ); \
   }

#define DISABLE_LCK12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK12_MASK ); \
   } 

#define READ_LCK12() \
   ((READ_REGISTER_ULONG(0x1C) & LCK12_MASK)  >> LCK12_START_BIT)

#define WHEN_LCK12_HIGH() \
     if ( READ_LCK12() )


#define UNLESS_LCK12_HIGH() \
     if (! READ_LCK12() )


#define WAIT_LCK12_LOW() \
    while ( READ_LCK12() );


#define WAIT_LCK12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK12() && (--___t___ > 0)); }


#define WAIT_LCK12_HIGH() \
    while (! READ_LCK12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK13_MASK 0x2000U
#define LCK13_OFFSET 13
#define LCK13_START_BIT 13
#define LCK13_WIDTH 1



typedef enum lck13 {
    LCK_1_3_0,
    LCK_1_3_1
} LCK_13_T ;
#define WRITE_LCK13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK13_MASK) | ((val << LCK13_START_BIT) & LCK13_MASK )); \
   } 

#define ENABLE_LCK13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK13_MASK ); \
   }

#define DISABLE_LCK13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK13_MASK ); \
   } 

#define READ_LCK13() \
   ((READ_REGISTER_ULONG(0x1C) & LCK13_MASK)  >> LCK13_START_BIT)

#define WHEN_LCK13_HIGH() \
     if ( READ_LCK13() )


#define UNLESS_LCK13_HIGH() \
     if (! READ_LCK13() )


#define WAIT_LCK13_LOW() \
    while ( READ_LCK13() );


#define WAIT_LCK13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK13() && (--___t___ > 0)); }


#define WAIT_LCK13_HIGH() \
    while (! READ_LCK13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK14_MASK 0x4000U
#define LCK14_OFFSET 14
#define LCK14_START_BIT 14
#define LCK14_WIDTH 1



typedef enum lck14 {
    LCK_1_4_0,
    LCK_1_4_1
} LCK_14_T ;
#define WRITE_LCK14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK14_MASK) | ((val << LCK14_START_BIT) & LCK14_MASK )); \
   } 

#define ENABLE_LCK14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK14_MASK ); \
   }

#define DISABLE_LCK14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK14_MASK ); \
   } 

#define READ_LCK14() \
   ((READ_REGISTER_ULONG(0x1C) & LCK14_MASK)  >> LCK14_START_BIT)

#define WHEN_LCK14_HIGH() \
     if ( READ_LCK14() )


#define UNLESS_LCK14_HIGH() \
     if (! READ_LCK14() )


#define WAIT_LCK14_LOW() \
    while ( READ_LCK14() );


#define WAIT_LCK14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK14() && (--___t___ > 0)); }


#define WAIT_LCK14_HIGH() \
    while (! READ_LCK14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCK15_MASK 0x8000U
#define LCK15_OFFSET 15
#define LCK15_START_BIT 15
#define LCK15_WIDTH 1



typedef enum lck15 {
    LCK_1_5_0,
    LCK_1_5_1
} LCK_15_T ;
#define WRITE_LCK15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCK15_MASK) | ((val << LCK15_START_BIT) & LCK15_MASK )); \
   } 

#define ENABLE_LCK15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCK15_MASK ); \
   }

#define DISABLE_LCK15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCK15_MASK ); \
   } 

#define READ_LCK15() \
   ((READ_REGISTER_ULONG(0x1C) & LCK15_MASK)  >> LCK15_START_BIT)

#define WHEN_LCK15_HIGH() \
     if ( READ_LCK15() )


#define UNLESS_LCK15_HIGH() \
     if (! READ_LCK15() )


#define WAIT_LCK15_LOW() \
    while ( READ_LCK15() );


#define WAIT_LCK15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK15() && (--___t___ > 0)); }


#define WAIT_LCK15_HIGH() \
    while (! READ_LCK15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register GPIO port configuration lock register (LCKR) at the offset 0x1C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port x lock bit y (y= 0..15) 
    // 
#define LCKK_MASK 0x10000U
#define LCKK_OFFSET 16
#define LCKK_START_BIT 16
#define LCKK_WIDTH 1



typedef enum lckk {
    LCKK_0,
    LCKK_1
} LCKK_T ;
#define WRITE_LCKK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LCKK_MASK) | ((val << LCKK_START_BIT) & LCKK_MASK )); \
   } 

#define ENABLE_LCKK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  LCKK_MASK ); \
   }

#define DISABLE_LCKK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~LCKK_MASK ); \
   } 

#define READ_LCKK() \
   ((READ_REGISTER_ULONG(0x1C) & LCKK_MASK)  >> LCKK_START_BIT)

#define WHEN_LCKK_HIGH() \
     if ( READ_LCKK() )


#define UNLESS_LCKK_HIGH() \
     if (! READ_LCKK() )


#define WAIT_LCKK_LOW() \
    while ( READ_LCKK() );


#define WAIT_LCKK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCKK() && (--___t___ > 0)); }


#define WAIT_LCKK_HIGH() \
    while (! READ_LCKK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register Afrl at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFRL( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_AFRL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_AFRL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_AFRL() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL0_MASK 0xFU
#define AFRL0_OFFSET 3
#define AFRL0_START_BIT 0
#define AFRL0_WIDTH 4


#define AFRL_REG 0x20

typedef enum afrl0 {
    AFRL_0_0,
    AFRL_0_1
} AFRL_0_T ;
#define READ_AFRL0() \
   ((READ_REGISTER_ULONG(0x20) & AFRL0_MASK)  >> AFRL0_START_BIT)

#define WRITE_AFRL0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL0_MASK) | ((val << AFRL0_START_BIT) & AFRL0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL1_MASK 0xF0U
#define AFRL1_OFFSET 7
#define AFRL1_START_BIT 4
#define AFRL1_WIDTH 4



typedef enum afrl1 {
    AFRL_1_0,
    AFRL_1_1
} AFRL_1_T ;
#define READ_AFRL1() \
   ((READ_REGISTER_ULONG(0x20) & AFRL1_MASK)  >> AFRL1_START_BIT)

#define WRITE_AFRL1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL1_MASK) | ((val << AFRL1_START_BIT) & AFRL1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL2_MASK 0xF00U
#define AFRL2_OFFSET 11
#define AFRL2_START_BIT 8
#define AFRL2_WIDTH 4



typedef enum afrl2 {
    AFRL_2_0,
    AFRL_2_1
} AFRL_2_T ;
#define READ_AFRL2() \
   ((READ_REGISTER_ULONG(0x20) & AFRL2_MASK)  >> AFRL2_START_BIT)

#define WRITE_AFRL2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL2_MASK) | ((val << AFRL2_START_BIT) & AFRL2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL3_MASK 0xF000U
#define AFRL3_OFFSET 15
#define AFRL3_START_BIT 12
#define AFRL3_WIDTH 4



typedef enum afrl3 {
    AFRL_3_0,
    AFRL_3_1
} AFRL_3_T ;
#define READ_AFRL3() \
   ((READ_REGISTER_ULONG(0x20) & AFRL3_MASK)  >> AFRL3_START_BIT)

#define WRITE_AFRL3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL3_MASK) | ((val << AFRL3_START_BIT) & AFRL3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL4_MASK 0xF0000U
#define AFRL4_OFFSET 19
#define AFRL4_START_BIT 16
#define AFRL4_WIDTH 4



typedef enum afrl4 {
    AFRL_4_0,
    AFRL_4_1
} AFRL_4_T ;
#define READ_AFRL4() \
   ((READ_REGISTER_ULONG(0x20) & AFRL4_MASK)  >> AFRL4_START_BIT)

#define WRITE_AFRL4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL4_MASK) | ((val << AFRL4_START_BIT) & AFRL4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL5_MASK 0xF00000U
#define AFRL5_OFFSET 23
#define AFRL5_START_BIT 20
#define AFRL5_WIDTH 4



typedef enum afrl5 {
    AFRL_5_0,
    AFRL_5_1
} AFRL_5_T ;
#define READ_AFRL5() \
   ((READ_REGISTER_ULONG(0x20) & AFRL5_MASK)  >> AFRL5_START_BIT)

#define WRITE_AFRL5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL5_MASK) | ((val << AFRL5_START_BIT) & AFRL5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL6_MASK 0xF000000U
#define AFRL6_OFFSET 27
#define AFRL6_START_BIT 24
#define AFRL6_WIDTH 4



typedef enum afrl6 {
    AFRL_6_0,
    AFRL_6_1
} AFRL_6_T ;
#define READ_AFRL6() \
   ((READ_REGISTER_ULONG(0x20) & AFRL6_MASK)  >> AFRL6_START_BIT)

#define WRITE_AFRL6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL6_MASK) | ((val << AFRL6_START_BIT) & AFRL6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register GPIO alternate function low register (AFRL) at the offset 0x20, Bits 28:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 0..7) 
    // 
#define AFRL7_MASK 0xF0000000U
#define AFRL7_OFFSET 31
#define AFRL7_START_BIT 28
#define AFRL7_WIDTH 4



typedef enum afrl7 {
    AFRL_7_0,
    AFRL_7_1
} AFRL_7_T ;
#define READ_AFRL7() \
   ((READ_REGISTER_ULONG(0x20) & AFRL7_MASK)  >> AFRL7_START_BIT)

#define WRITE_AFRL7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ AFRL7_MASK) | ((val << AFRL7_START_BIT) & AFRL7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register Afrh at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFRH( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_AFRH(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_AFRH(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_AFRH() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH8_MASK 0xFU
#define AFRH8_OFFSET 3
#define AFRH8_START_BIT 0
#define AFRH8_WIDTH 4


#define AFRH_REG 0x24

typedef enum afrh8 {
    AFRH_8_0,
    AFRH_8_1
} AFRH_8_T ;
#define READ_AFRH8() \
   ((READ_REGISTER_ULONG(0x24) & AFRH8_MASK)  >> AFRH8_START_BIT)

#define WRITE_AFRH8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH8_MASK) | ((val << AFRH8_START_BIT) & AFRH8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH9_MASK 0xF0U
#define AFRH9_OFFSET 7
#define AFRH9_START_BIT 4
#define AFRH9_WIDTH 4



typedef enum afrh9 {
    AFRH_9_0,
    AFRH_9_1
} AFRH_9_T ;
#define READ_AFRH9() \
   ((READ_REGISTER_ULONG(0x24) & AFRH9_MASK)  >> AFRH9_START_BIT)

#define WRITE_AFRH9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH9_MASK) | ((val << AFRH9_START_BIT) & AFRH9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH10_MASK 0xF00U
#define AFRH10_OFFSET 11
#define AFRH10_START_BIT 8
#define AFRH10_WIDTH 4



typedef enum afrh10 {
    AFRH_1_0_0,
    AFRH_1_0_1
} AFRH_10_T ;
#define READ_AFRH10() \
   ((READ_REGISTER_ULONG(0x24) & AFRH10_MASK)  >> AFRH10_START_BIT)

#define WRITE_AFRH10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH10_MASK) | ((val << AFRH10_START_BIT) & AFRH10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH11_MASK 0xF000U
#define AFRH11_OFFSET 15
#define AFRH11_START_BIT 12
#define AFRH11_WIDTH 4



typedef enum afrh11 {
    AFRH_1_1_0,
    AFRH_1_1_1
} AFRH_11_T ;
#define READ_AFRH11() \
   ((READ_REGISTER_ULONG(0x24) & AFRH11_MASK)  >> AFRH11_START_BIT)

#define WRITE_AFRH11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH11_MASK) | ((val << AFRH11_START_BIT) & AFRH11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH12_MASK 0xF0000U
#define AFRH12_OFFSET 19
#define AFRH12_START_BIT 16
#define AFRH12_WIDTH 4



typedef enum afrh12 {
    AFRH_1_2_0,
    AFRH_1_2_1
} AFRH_12_T ;
#define READ_AFRH12() \
   ((READ_REGISTER_ULONG(0x24) & AFRH12_MASK)  >> AFRH12_START_BIT)

#define WRITE_AFRH12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH12_MASK) | ((val << AFRH12_START_BIT) & AFRH12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH13_MASK 0xF00000U
#define AFRH13_OFFSET 23
#define AFRH13_START_BIT 20
#define AFRH13_WIDTH 4



typedef enum afrh13 {
    AFRH_1_3_0,
    AFRH_1_3_1
} AFRH_13_T ;
#define READ_AFRH13() \
   ((READ_REGISTER_ULONG(0x24) & AFRH13_MASK)  >> AFRH13_START_BIT)

#define WRITE_AFRH13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH13_MASK) | ((val << AFRH13_START_BIT) & AFRH13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH14_MASK 0xF000000U
#define AFRH14_OFFSET 27
#define AFRH14_START_BIT 24
#define AFRH14_WIDTH 4



typedef enum afrh14 {
    AFRH_1_4_0,
    AFRH_1_4_1
} AFRH_14_T ;
#define READ_AFRH14() \
   ((READ_REGISTER_ULONG(0x24) & AFRH14_MASK)  >> AFRH14_START_BIT)

#define WRITE_AFRH14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH14_MASK) | ((val << AFRH14_START_BIT) & AFRH14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register GPIO alternate function high register (AFRH) at the offset 0x24, Bits 28:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate function selection for port x bit y (y = 8..15) 
    // 
#define AFRH15_MASK 0xF0000000U
#define AFRH15_OFFSET 31
#define AFRH15_START_BIT 28
#define AFRH15_WIDTH 4



typedef enum afrh15 {
    AFRH_1_5_0,
    AFRH_1_5_1
} AFRH_15_T ;
#define READ_AFRH15() \
   ((READ_REGISTER_ULONG(0x24) & AFRH15_MASK)  >> AFRH15_START_BIT)

#define WRITE_AFRH15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AFRH15_MASK) | ((val << AFRH15_START_BIT) & AFRH15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Brr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : BR15
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 15 
//        (BRR) at the offset 0x28, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR15_MASK) | ((val << BR15_START_BIT) & BR15_MASK )); \
   } 

#define ENABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR15_MASK ); \
   }

#define DISABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR15_MASK ); \
   } 

#define READ_BR15() \
   ((READ_REGISTER_ULONG(0x28) & BR15_MASK)  >> BR15_START_BIT)

#define WHEN_BR15_HIGH() \
     if ( READ_BR15() )


#define UNLESS_BR15_HIGH() \
     if (! READ_BR15() )


#define WAIT_BR15_LOW() \
    while ( READ_BR15() );


#define WAIT_BR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR15() && (--___t___ > 0)); }


#define WAIT_BR15_HIGH() \
    while (! READ_BR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR14
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 14 
//        (BRR) at the offset 0x28, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR14_MASK) | ((val << BR14_START_BIT) & BR14_MASK )); \
   } 

#define ENABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR14_MASK ); \
   }

#define DISABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR14_MASK ); \
   } 

#define READ_BR14() \
   ((READ_REGISTER_ULONG(0x28) & BR14_MASK)  >> BR14_START_BIT)

#define WHEN_BR14_HIGH() \
     if ( READ_BR14() )


#define UNLESS_BR14_HIGH() \
     if (! READ_BR14() )


#define WAIT_BR14_LOW() \
    while ( READ_BR14() );


#define WAIT_BR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR14() && (--___t___ > 0)); }


#define WAIT_BR14_HIGH() \
    while (! READ_BR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR13
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 13 
//        (BRR) at the offset 0x28, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR13_MASK) | ((val << BR13_START_BIT) & BR13_MASK )); \
   } 

#define ENABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR13_MASK ); \
   }

#define DISABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR13_MASK ); \
   } 

#define READ_BR13() \
   ((READ_REGISTER_ULONG(0x28) & BR13_MASK)  >> BR13_START_BIT)

#define WHEN_BR13_HIGH() \
     if ( READ_BR13() )


#define UNLESS_BR13_HIGH() \
     if (! READ_BR13() )


#define WAIT_BR13_LOW() \
    while ( READ_BR13() );


#define WAIT_BR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR13() && (--___t___ > 0)); }


#define WAIT_BR13_HIGH() \
    while (! READ_BR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR12
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 12 
//        (BRR) at the offset 0x28, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR12_MASK) | ((val << BR12_START_BIT) & BR12_MASK )); \
   } 

#define ENABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR12_MASK ); \
   }

#define DISABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR12_MASK ); \
   } 

#define READ_BR12() \
   ((READ_REGISTER_ULONG(0x28) & BR12_MASK)  >> BR12_START_BIT)

#define WHEN_BR12_HIGH() \
     if ( READ_BR12() )


#define UNLESS_BR12_HIGH() \
     if (! READ_BR12() )


#define WAIT_BR12_LOW() \
    while ( READ_BR12() );


#define WAIT_BR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR12() && (--___t___ > 0)); }


#define WAIT_BR12_HIGH() \
    while (! READ_BR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR11
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 11 
//        (BRR) at the offset 0x28, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR11_MASK) | ((val << BR11_START_BIT) & BR11_MASK )); \
   } 

#define ENABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR11_MASK ); \
   }

#define DISABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR11_MASK ); \
   } 

#define READ_BR11() \
   ((READ_REGISTER_ULONG(0x28) & BR11_MASK)  >> BR11_START_BIT)

#define WHEN_BR11_HIGH() \
     if ( READ_BR11() )


#define UNLESS_BR11_HIGH() \
     if (! READ_BR11() )


#define WAIT_BR11_LOW() \
    while ( READ_BR11() );


#define WAIT_BR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR11() && (--___t___ > 0)); }


#define WAIT_BR11_HIGH() \
    while (! READ_BR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR10
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 10 
//        (BRR) at the offset 0x28, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR10_MASK) | ((val << BR10_START_BIT) & BR10_MASK )); \
   } 

#define ENABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR10_MASK ); \
   }

#define DISABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR10_MASK ); \
   } 

#define READ_BR10() \
   ((READ_REGISTER_ULONG(0x28) & BR10_MASK)  >> BR10_START_BIT)

#define WHEN_BR10_HIGH() \
     if ( READ_BR10() )


#define UNLESS_BR10_HIGH() \
     if (! READ_BR10() )


#define WAIT_BR10_LOW() \
    while ( READ_BR10() );


#define WAIT_BR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR10() && (--___t___ > 0)); }


#define WAIT_BR10_HIGH() \
    while (! READ_BR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR9
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 9 
//        (BRR) at the offset 0x28, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR9_MASK) | ((val << BR9_START_BIT) & BR9_MASK )); \
   } 

#define ENABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR9_MASK ); \
   }

#define DISABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR9_MASK ); \
   } 

#define READ_BR9() \
   ((READ_REGISTER_ULONG(0x28) & BR9_MASK)  >> BR9_START_BIT)

#define WHEN_BR9_HIGH() \
     if ( READ_BR9() )


#define UNLESS_BR9_HIGH() \
     if (! READ_BR9() )


#define WAIT_BR9_LOW() \
    while ( READ_BR9() );


#define WAIT_BR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR9() && (--___t___ > 0)); }


#define WAIT_BR9_HIGH() \
    while (! READ_BR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR8
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 8 
//        (BRR) at the offset 0x28, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR8_MASK) | ((val << BR8_START_BIT) & BR8_MASK )); \
   } 

#define ENABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR8_MASK ); \
   }

#define DISABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR8_MASK ); \
   } 

#define READ_BR8() \
   ((READ_REGISTER_ULONG(0x28) & BR8_MASK)  >> BR8_START_BIT)

#define WHEN_BR8_HIGH() \
     if ( READ_BR8() )


#define UNLESS_BR8_HIGH() \
     if (! READ_BR8() )


#define WAIT_BR8_LOW() \
    while ( READ_BR8() );


#define WAIT_BR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR8() && (--___t___ > 0)); }


#define WAIT_BR8_HIGH() \
    while (! READ_BR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR7
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 7 
//        (BRR) at the offset 0x28, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR7_MASK) | ((val << BR7_START_BIT) & BR7_MASK )); \
   } 

#define ENABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR7_MASK ); \
   }

#define DISABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR7_MASK ); \
   } 

#define READ_BR7() \
   ((READ_REGISTER_ULONG(0x28) & BR7_MASK)  >> BR7_START_BIT)

#define WHEN_BR7_HIGH() \
     if ( READ_BR7() )


#define UNLESS_BR7_HIGH() \
     if (! READ_BR7() )


#define WAIT_BR7_LOW() \
    while ( READ_BR7() );


#define WAIT_BR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR7() && (--___t___ > 0)); }


#define WAIT_BR7_HIGH() \
    while (! READ_BR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR6
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 6 
//        (BRR) at the offset 0x28, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR6_MASK) | ((val << BR6_START_BIT) & BR6_MASK )); \
   } 

#define ENABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR6_MASK ); \
   }

#define DISABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR6_MASK ); \
   } 

#define READ_BR6() \
   ((READ_REGISTER_ULONG(0x28) & BR6_MASK)  >> BR6_START_BIT)

#define WHEN_BR6_HIGH() \
     if ( READ_BR6() )


#define UNLESS_BR6_HIGH() \
     if (! READ_BR6() )


#define WAIT_BR6_LOW() \
    while ( READ_BR6() );


#define WAIT_BR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR6() && (--___t___ > 0)); }


#define WAIT_BR6_HIGH() \
    while (! READ_BR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR5
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 5 
//        (BRR) at the offset 0x28, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR5_MASK) | ((val << BR5_START_BIT) & BR5_MASK )); \
   } 

#define ENABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR5_MASK ); \
   }

#define DISABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR5_MASK ); \
   } 

#define READ_BR5() \
   ((READ_REGISTER_ULONG(0x28) & BR5_MASK)  >> BR5_START_BIT)

#define WHEN_BR5_HIGH() \
     if ( READ_BR5() )


#define UNLESS_BR5_HIGH() \
     if (! READ_BR5() )


#define WAIT_BR5_LOW() \
    while ( READ_BR5() );


#define WAIT_BR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR5() && (--___t___ > 0)); }


#define WAIT_BR5_HIGH() \
    while (! READ_BR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR4
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 4 
//        (BRR) at the offset 0x28, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR4_MASK) | ((val << BR4_START_BIT) & BR4_MASK )); \
   } 

#define ENABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR4_MASK ); \
   }

#define DISABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR4_MASK ); \
   } 

#define READ_BR4() \
   ((READ_REGISTER_ULONG(0x28) & BR4_MASK)  >> BR4_START_BIT)

#define WHEN_BR4_HIGH() \
     if ( READ_BR4() )


#define UNLESS_BR4_HIGH() \
     if (! READ_BR4() )


#define WAIT_BR4_LOW() \
    while ( READ_BR4() );


#define WAIT_BR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR4() && (--___t___ > 0)); }


#define WAIT_BR4_HIGH() \
    while (! READ_BR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR3
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 3 
//        (BRR) at the offset 0x28, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR3_MASK) | ((val << BR3_START_BIT) & BR3_MASK )); \
   } 

#define ENABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR3_MASK ); \
   }

#define DISABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR3_MASK ); \
   } 

#define READ_BR3() \
   ((READ_REGISTER_ULONG(0x28) & BR3_MASK)  >> BR3_START_BIT)

#define WHEN_BR3_HIGH() \
     if ( READ_BR3() )


#define UNLESS_BR3_HIGH() \
     if (! READ_BR3() )


#define WAIT_BR3_LOW() \
    while ( READ_BR3() );


#define WAIT_BR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR3() && (--___t___ > 0)); }


#define WAIT_BR3_HIGH() \
    while (! READ_BR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR2
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 2 
//        (BRR) at the offset 0x28, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR2_MASK) | ((val << BR2_START_BIT) & BR2_MASK )); \
   } 

#define ENABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR2_MASK ); \
   }

#define DISABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR2_MASK ); \
   } 

#define READ_BR2() \
   ((READ_REGISTER_ULONG(0x28) & BR2_MASK)  >> BR2_START_BIT)

#define WHEN_BR2_HIGH() \
     if ( READ_BR2() )


#define UNLESS_BR2_HIGH() \
     if (! READ_BR2() )


#define WAIT_BR2_LOW() \
    while ( READ_BR2() );


#define WAIT_BR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR2() && (--___t___ > 0)); }


#define WAIT_BR2_HIGH() \
    while (! READ_BR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR1
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 1 
//        (BRR) at the offset 0x28, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR1_MASK) | ((val << BR1_START_BIT) & BR1_MASK )); \
   } 

#define ENABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR1_MASK ); \
   }

#define DISABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR1_MASK ); \
   } 

#define READ_BR1() \
   ((READ_REGISTER_ULONG(0x28) & BR1_MASK)  >> BR1_START_BIT)

#define WHEN_BR1_HIGH() \
     if ( READ_BR1() )


#define UNLESS_BR1_HIGH() \
     if (! READ_BR1() )


#define WAIT_BR1_LOW() \
    while ( READ_BR1() );


#define WAIT_BR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR1() && (--___t___ > 0)); }


#define WAIT_BR1_HIGH() \
    while (! READ_BR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR0
//
// Return the value of register Brr
//
// Notes : Port A Reset bit 0 
//        (BRR) at the offset 0x28, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BR0_MASK) | ((val << BR0_START_BIT) & BR0_MASK )); \
   } 

#define ENABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  BR0_MASK ); \
   }

#define DISABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~BR0_MASK ); \
   } 

#define READ_BR0() \
   ((READ_REGISTER_ULONG(0x28) & BR0_MASK)  >> BR0_START_BIT)

#define WHEN_BR0_HIGH() \
     if ( READ_BR0() )


#define UNLESS_BR0_HIGH() \
     if (! READ_BR0() )


#define WAIT_BR0_LOW() \
    while ( READ_BR0() );


#define WAIT_BR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR0() && (--___t___ > 0)); }


#define WAIT_BR0_HIGH() \
    while (! READ_BR0() );


