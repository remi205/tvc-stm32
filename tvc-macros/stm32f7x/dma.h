/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/dma.h
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
 
#define NB_DEVICE_DMA 2
#define DMA2 0x40026400
#define DMA1 0x40026000
/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register Lisr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_LISR( base ) \
     READ_REGISTER_ULONG( base ) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF0_MASK 0x1U
#define FEIF0_OFFSET 0
#define FEIF0_START_BIT 0
#define FEIF0_WIDTH 1


#define LISR_REG 0x0

typedef enum feif0 {
    FEIF_0_0,
    FEIF_0_1
} FEIF_0_T ;
#define WRITE_FEIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~FEIF0_MASK) | ((val << FEIF0_START_BIT) & FEIF0_MASK )); \
   } 

#define ENABLE_FEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  FEIF0_MASK ); \
   } 

#define DISABLE_FEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~FEIF0_MASK ); \
   } 

#define READ_FEIF0(base) \
    ((READ_REGISTER_ULONG(base ) & FEIF0_MASK) >> FEIF0_START_BIT )

#define WHEN_FEIF0_HIGH(base) \
     if ( READ_FEIF0(base) )


#define UNLESS_FEIF0_HIGH(base) \
     if (! READ_FEIF0(base) )


#define WAIT_FEIF0_LOW(base) \
    while ( READ_FEIF0(base) );


#define WAIT_FEIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF0(base) && (--timeout > 0) );


#define WAIT_FEIF0_HIGH(base) \
    while (! READ_FEIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF0_MASK 0x4U
#define DMEIF0_OFFSET 2
#define DMEIF0_START_BIT 2
#define DMEIF0_WIDTH 1



typedef enum dmeif0 {
    DMEIF_0_0,
    DMEIF_0_1
} DMEIF_0_T ;
#define WRITE_DMEIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DMEIF0_MASK) | ((val << DMEIF0_START_BIT) & DMEIF0_MASK )); \
   } 

#define ENABLE_DMEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DMEIF0_MASK ); \
   } 

#define DISABLE_DMEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DMEIF0_MASK ); \
   } 

#define READ_DMEIF0(base) \
    ((READ_REGISTER_ULONG(base ) & DMEIF0_MASK) >> DMEIF0_START_BIT )

#define WHEN_DMEIF0_HIGH(base) \
     if ( READ_DMEIF0(base) )


#define UNLESS_DMEIF0_HIGH(base) \
     if (! READ_DMEIF0(base) )


#define WAIT_DMEIF0_LOW(base) \
    while ( READ_DMEIF0(base) );


#define WAIT_DMEIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF0(base) && (--timeout > 0) );


#define WAIT_DMEIF0_HIGH(base) \
    while (! READ_DMEIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF0_MASK 0x8U
#define TEIF0_OFFSET 3
#define TEIF0_START_BIT 3
#define TEIF0_WIDTH 1



typedef enum teif0 {
    TEIF_0_0,
    TEIF_0_1
} TEIF_0_T ;
#define WRITE_TEIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TEIF0_MASK) | ((val << TEIF0_START_BIT) & TEIF0_MASK )); \
   } 

#define ENABLE_TEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TEIF0_MASK ); \
   } 

#define DISABLE_TEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TEIF0_MASK ); \
   } 

#define READ_TEIF0(base) \
    ((READ_REGISTER_ULONG(base ) & TEIF0_MASK) >> TEIF0_START_BIT )

#define WHEN_TEIF0_HIGH(base) \
     if ( READ_TEIF0(base) )


#define UNLESS_TEIF0_HIGH(base) \
     if (! READ_TEIF0(base) )


#define WAIT_TEIF0_LOW(base) \
    while ( READ_TEIF0(base) );


#define WAIT_TEIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF0(base) && (--timeout > 0) );


#define WAIT_TEIF0_HIGH(base) \
    while (! READ_TEIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF0_MASK 0x10U
#define HTIF0_OFFSET 4
#define HTIF0_START_BIT 4
#define HTIF0_WIDTH 1



typedef enum htif0 {
    HTIF_0_0,
    HTIF_0_1
} HTIF_0_T ;
#define WRITE_HTIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~HTIF0_MASK) | ((val << HTIF0_START_BIT) & HTIF0_MASK )); \
   } 

#define ENABLE_HTIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  HTIF0_MASK ); \
   } 

#define DISABLE_HTIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~HTIF0_MASK ); \
   } 

#define READ_HTIF0(base) \
    ((READ_REGISTER_ULONG(base ) & HTIF0_MASK) >> HTIF0_START_BIT )

#define WHEN_HTIF0_HIGH(base) \
     if ( READ_HTIF0(base) )


#define UNLESS_HTIF0_HIGH(base) \
     if (! READ_HTIF0(base) )


#define WAIT_HTIF0_LOW(base) \
    while ( READ_HTIF0(base) );


#define WAIT_HTIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF0(base) && (--timeout > 0) );


#define WAIT_HTIF0_HIGH(base) \
    while (! READ_HTIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF0_MASK 0x20U
#define TCIF0_OFFSET 5
#define TCIF0_START_BIT 5
#define TCIF0_WIDTH 1



typedef enum tcif0 {
    TCIF_0_0,
    TCIF_0_1
} TCIF_0_T ;
#define WRITE_TCIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TCIF0_MASK) | ((val << TCIF0_START_BIT) & TCIF0_MASK )); \
   } 

#define ENABLE_TCIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TCIF0_MASK ); \
   } 

#define DISABLE_TCIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TCIF0_MASK ); \
   } 

#define READ_TCIF0(base) \
    ((READ_REGISTER_ULONG(base ) & TCIF0_MASK) >> TCIF0_START_BIT )

#define WHEN_TCIF0_HIGH(base) \
     if ( READ_TCIF0(base) )


#define UNLESS_TCIF0_HIGH(base) \
     if (! READ_TCIF0(base) )


#define WAIT_TCIF0_LOW(base) \
    while ( READ_TCIF0(base) );


#define WAIT_TCIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF0(base) && (--timeout > 0) );


#define WAIT_TCIF0_HIGH(base) \
    while (! READ_TCIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF1_MASK 0x40U
#define FEIF1_OFFSET 6
#define FEIF1_START_BIT 6
#define FEIF1_WIDTH 1



typedef enum feif1 {
    FEIF_1_0,
    FEIF_1_1
} FEIF_1_T ;
#define WRITE_FEIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~FEIF1_MASK) | ((val << FEIF1_START_BIT) & FEIF1_MASK )); \
   } 

#define ENABLE_FEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  FEIF1_MASK ); \
   } 

#define DISABLE_FEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~FEIF1_MASK ); \
   } 

#define READ_FEIF1(base) \
    ((READ_REGISTER_ULONG(base ) & FEIF1_MASK) >> FEIF1_START_BIT )

#define WHEN_FEIF1_HIGH(base) \
     if ( READ_FEIF1(base) )


#define UNLESS_FEIF1_HIGH(base) \
     if (! READ_FEIF1(base) )


#define WAIT_FEIF1_LOW(base) \
    while ( READ_FEIF1(base) );


#define WAIT_FEIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF1(base) && (--timeout > 0) );


#define WAIT_FEIF1_HIGH(base) \
    while (! READ_FEIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF1_MASK 0x100U
#define DMEIF1_OFFSET 8
#define DMEIF1_START_BIT 8
#define DMEIF1_WIDTH 1



typedef enum dmeif1 {
    DMEIF_1_0,
    DMEIF_1_1
} DMEIF_1_T ;
#define WRITE_DMEIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DMEIF1_MASK) | ((val << DMEIF1_START_BIT) & DMEIF1_MASK )); \
   } 

#define ENABLE_DMEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DMEIF1_MASK ); \
   } 

#define DISABLE_DMEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DMEIF1_MASK ); \
   } 

#define READ_DMEIF1(base) \
    ((READ_REGISTER_ULONG(base ) & DMEIF1_MASK) >> DMEIF1_START_BIT )

#define WHEN_DMEIF1_HIGH(base) \
     if ( READ_DMEIF1(base) )


#define UNLESS_DMEIF1_HIGH(base) \
     if (! READ_DMEIF1(base) )


#define WAIT_DMEIF1_LOW(base) \
    while ( READ_DMEIF1(base) );


#define WAIT_DMEIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF1(base) && (--timeout > 0) );


#define WAIT_DMEIF1_HIGH(base) \
    while (! READ_DMEIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF1_MASK 0x200U
#define TEIF1_OFFSET 9
#define TEIF1_START_BIT 9
#define TEIF1_WIDTH 1



typedef enum teif1 {
    TEIF_1_0,
    TEIF_1_1
} TEIF_1_T ;
#define WRITE_TEIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TEIF1_MASK) | ((val << TEIF1_START_BIT) & TEIF1_MASK )); \
   } 

#define ENABLE_TEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TEIF1_MASK ); \
   } 

#define DISABLE_TEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TEIF1_MASK ); \
   } 

#define READ_TEIF1(base) \
    ((READ_REGISTER_ULONG(base ) & TEIF1_MASK) >> TEIF1_START_BIT )

#define WHEN_TEIF1_HIGH(base) \
     if ( READ_TEIF1(base) )


#define UNLESS_TEIF1_HIGH(base) \
     if (! READ_TEIF1(base) )


#define WAIT_TEIF1_LOW(base) \
    while ( READ_TEIF1(base) );


#define WAIT_TEIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF1(base) && (--timeout > 0) );


#define WAIT_TEIF1_HIGH(base) \
    while (! READ_TEIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF1_MASK 0x400U
#define HTIF1_OFFSET 10
#define HTIF1_START_BIT 10
#define HTIF1_WIDTH 1



typedef enum htif1 {
    HTIF_1_0,
    HTIF_1_1
} HTIF_1_T ;
#define WRITE_HTIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~HTIF1_MASK) | ((val << HTIF1_START_BIT) & HTIF1_MASK )); \
   } 

#define ENABLE_HTIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  HTIF1_MASK ); \
   } 

#define DISABLE_HTIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~HTIF1_MASK ); \
   } 

#define READ_HTIF1(base) \
    ((READ_REGISTER_ULONG(base ) & HTIF1_MASK) >> HTIF1_START_BIT )

#define WHEN_HTIF1_HIGH(base) \
     if ( READ_HTIF1(base) )


#define UNLESS_HTIF1_HIGH(base) \
     if (! READ_HTIF1(base) )


#define WAIT_HTIF1_LOW(base) \
    while ( READ_HTIF1(base) );


#define WAIT_HTIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF1(base) && (--timeout > 0) );


#define WAIT_HTIF1_HIGH(base) \
    while (! READ_HTIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF1_MASK 0x800U
#define TCIF1_OFFSET 11
#define TCIF1_START_BIT 11
#define TCIF1_WIDTH 1



typedef enum tcif1 {
    TCIF_1_0,
    TCIF_1_1
} TCIF_1_T ;
#define WRITE_TCIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TCIF1_MASK) | ((val << TCIF1_START_BIT) & TCIF1_MASK )); \
   } 

#define ENABLE_TCIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TCIF1_MASK ); \
   } 

#define DISABLE_TCIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TCIF1_MASK ); \
   } 

#define READ_TCIF1(base) \
    ((READ_REGISTER_ULONG(base ) & TCIF1_MASK) >> TCIF1_START_BIT )

#define WHEN_TCIF1_HIGH(base) \
     if ( READ_TCIF1(base) )


#define UNLESS_TCIF1_HIGH(base) \
     if (! READ_TCIF1(base) )


#define WAIT_TCIF1_LOW(base) \
    while ( READ_TCIF1(base) );


#define WAIT_TCIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF1(base) && (--timeout > 0) );


#define WAIT_TCIF1_HIGH(base) \
    while (! READ_TCIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF2_MASK 0x10000U
#define FEIF2_OFFSET 16
#define FEIF2_START_BIT 16
#define FEIF2_WIDTH 1



typedef enum feif2 {
    FEIF_2_0,
    FEIF_2_1
} FEIF_2_T ;
#define WRITE_FEIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~FEIF2_MASK) | ((val << FEIF2_START_BIT) & FEIF2_MASK )); \
   } 

#define ENABLE_FEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  FEIF2_MASK ); \
   } 

#define DISABLE_FEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~FEIF2_MASK ); \
   } 

#define READ_FEIF2(base) \
    ((READ_REGISTER_ULONG(base ) & FEIF2_MASK) >> FEIF2_START_BIT )

#define WHEN_FEIF2_HIGH(base) \
     if ( READ_FEIF2(base) )


#define UNLESS_FEIF2_HIGH(base) \
     if (! READ_FEIF2(base) )


#define WAIT_FEIF2_LOW(base) \
    while ( READ_FEIF2(base) );


#define WAIT_FEIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF2(base) && (--timeout > 0) );


#define WAIT_FEIF2_HIGH(base) \
    while (! READ_FEIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF2_MASK 0x40000U
#define DMEIF2_OFFSET 18
#define DMEIF2_START_BIT 18
#define DMEIF2_WIDTH 1



typedef enum dmeif2 {
    DMEIF_2_0,
    DMEIF_2_1
} DMEIF_2_T ;
#define WRITE_DMEIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DMEIF2_MASK) | ((val << DMEIF2_START_BIT) & DMEIF2_MASK )); \
   } 

#define ENABLE_DMEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DMEIF2_MASK ); \
   } 

#define DISABLE_DMEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DMEIF2_MASK ); \
   } 

#define READ_DMEIF2(base) \
    ((READ_REGISTER_ULONG(base ) & DMEIF2_MASK) >> DMEIF2_START_BIT )

#define WHEN_DMEIF2_HIGH(base) \
     if ( READ_DMEIF2(base) )


#define UNLESS_DMEIF2_HIGH(base) \
     if (! READ_DMEIF2(base) )


#define WAIT_DMEIF2_LOW(base) \
    while ( READ_DMEIF2(base) );


#define WAIT_DMEIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF2(base) && (--timeout > 0) );


#define WAIT_DMEIF2_HIGH(base) \
    while (! READ_DMEIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF2_MASK 0x80000U
#define TEIF2_OFFSET 19
#define TEIF2_START_BIT 19
#define TEIF2_WIDTH 1



typedef enum teif2 {
    TEIF_2_0,
    TEIF_2_1
} TEIF_2_T ;
#define WRITE_TEIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TEIF2_MASK) | ((val << TEIF2_START_BIT) & TEIF2_MASK )); \
   } 

#define ENABLE_TEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TEIF2_MASK ); \
   } 

#define DISABLE_TEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TEIF2_MASK ); \
   } 

#define READ_TEIF2(base) \
    ((READ_REGISTER_ULONG(base ) & TEIF2_MASK) >> TEIF2_START_BIT )

#define WHEN_TEIF2_HIGH(base) \
     if ( READ_TEIF2(base) )


#define UNLESS_TEIF2_HIGH(base) \
     if (! READ_TEIF2(base) )


#define WAIT_TEIF2_LOW(base) \
    while ( READ_TEIF2(base) );


#define WAIT_TEIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF2(base) && (--timeout > 0) );


#define WAIT_TEIF2_HIGH(base) \
    while (! READ_TEIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF2_MASK 0x100000U
#define HTIF2_OFFSET 20
#define HTIF2_START_BIT 20
#define HTIF2_WIDTH 1



typedef enum htif2 {
    HTIF_2_0,
    HTIF_2_1
} HTIF_2_T ;
#define WRITE_HTIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~HTIF2_MASK) | ((val << HTIF2_START_BIT) & HTIF2_MASK )); \
   } 

#define ENABLE_HTIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  HTIF2_MASK ); \
   } 

#define DISABLE_HTIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~HTIF2_MASK ); \
   } 

#define READ_HTIF2(base) \
    ((READ_REGISTER_ULONG(base ) & HTIF2_MASK) >> HTIF2_START_BIT )

#define WHEN_HTIF2_HIGH(base) \
     if ( READ_HTIF2(base) )


#define UNLESS_HTIF2_HIGH(base) \
     if (! READ_HTIF2(base) )


#define WAIT_HTIF2_LOW(base) \
    while ( READ_HTIF2(base) );


#define WAIT_HTIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF2(base) && (--timeout > 0) );


#define WAIT_HTIF2_HIGH(base) \
    while (! READ_HTIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF2_MASK 0x200000U
#define TCIF2_OFFSET 21
#define TCIF2_START_BIT 21
#define TCIF2_WIDTH 1



typedef enum tcif2 {
    TCIF_2_0,
    TCIF_2_1
} TCIF_2_T ;
#define WRITE_TCIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TCIF2_MASK) | ((val << TCIF2_START_BIT) & TCIF2_MASK )); \
   } 

#define ENABLE_TCIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TCIF2_MASK ); \
   } 

#define DISABLE_TCIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TCIF2_MASK ); \
   } 

#define READ_TCIF2(base) \
    ((READ_REGISTER_ULONG(base ) & TCIF2_MASK) >> TCIF2_START_BIT )

#define WHEN_TCIF2_HIGH(base) \
     if ( READ_TCIF2(base) )


#define UNLESS_TCIF2_HIGH(base) \
     if (! READ_TCIF2(base) )


#define WAIT_TCIF2_LOW(base) \
    while ( READ_TCIF2(base) );


#define WAIT_TCIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF2(base) && (--timeout > 0) );


#define WAIT_TCIF2_HIGH(base) \
    while (! READ_TCIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF3_MASK 0x400000U
#define FEIF3_OFFSET 22
#define FEIF3_START_BIT 22
#define FEIF3_WIDTH 1



typedef enum feif3 {
    FEIF_3_0,
    FEIF_3_1
} FEIF_3_T ;
#define WRITE_FEIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~FEIF3_MASK) | ((val << FEIF3_START_BIT) & FEIF3_MASK )); \
   } 

#define ENABLE_FEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  FEIF3_MASK ); \
   } 

#define DISABLE_FEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~FEIF3_MASK ); \
   } 

#define READ_FEIF3(base) \
    ((READ_REGISTER_ULONG(base ) & FEIF3_MASK) >> FEIF3_START_BIT )

#define WHEN_FEIF3_HIGH(base) \
     if ( READ_FEIF3(base) )


#define UNLESS_FEIF3_HIGH(base) \
     if (! READ_FEIF3(base) )


#define WAIT_FEIF3_LOW(base) \
    while ( READ_FEIF3(base) );


#define WAIT_FEIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF3(base) && (--timeout > 0) );


#define WAIT_FEIF3_HIGH(base) \
    while (! READ_FEIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF3_MASK 0x1000000U
#define DMEIF3_OFFSET 24
#define DMEIF3_START_BIT 24
#define DMEIF3_WIDTH 1



typedef enum dmeif3 {
    DMEIF_3_0,
    DMEIF_3_1
} DMEIF_3_T ;
#define WRITE_DMEIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DMEIF3_MASK) | ((val << DMEIF3_START_BIT) & DMEIF3_MASK )); \
   } 

#define ENABLE_DMEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DMEIF3_MASK ); \
   } 

#define DISABLE_DMEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DMEIF3_MASK ); \
   } 

#define READ_DMEIF3(base) \
    ((READ_REGISTER_ULONG(base ) & DMEIF3_MASK) >> DMEIF3_START_BIT )

#define WHEN_DMEIF3_HIGH(base) \
     if ( READ_DMEIF3(base) )


#define UNLESS_DMEIF3_HIGH(base) \
     if (! READ_DMEIF3(base) )


#define WAIT_DMEIF3_LOW(base) \
    while ( READ_DMEIF3(base) );


#define WAIT_DMEIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF3(base) && (--timeout > 0) );


#define WAIT_DMEIF3_HIGH(base) \
    while (! READ_DMEIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF3_MASK 0x2000000U
#define TEIF3_OFFSET 25
#define TEIF3_START_BIT 25
#define TEIF3_WIDTH 1



typedef enum teif3 {
    TEIF_3_0,
    TEIF_3_1
} TEIF_3_T ;
#define WRITE_TEIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TEIF3_MASK) | ((val << TEIF3_START_BIT) & TEIF3_MASK )); \
   } 

#define ENABLE_TEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TEIF3_MASK ); \
   } 

#define DISABLE_TEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TEIF3_MASK ); \
   } 

#define READ_TEIF3(base) \
    ((READ_REGISTER_ULONG(base ) & TEIF3_MASK) >> TEIF3_START_BIT )

#define WHEN_TEIF3_HIGH(base) \
     if ( READ_TEIF3(base) )


#define UNLESS_TEIF3_HIGH(base) \
     if (! READ_TEIF3(base) )


#define WAIT_TEIF3_LOW(base) \
    while ( READ_TEIF3(base) );


#define WAIT_TEIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF3(base) && (--timeout > 0) );


#define WAIT_TEIF3_HIGH(base) \
    while (! READ_TEIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF3_MASK 0x4000000U
#define HTIF3_OFFSET 26
#define HTIF3_START_BIT 26
#define HTIF3_WIDTH 1



typedef enum htif3 {
    HTIF_3_0,
    HTIF_3_1
} HTIF_3_T ;
#define WRITE_HTIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~HTIF3_MASK) | ((val << HTIF3_START_BIT) & HTIF3_MASK )); \
   } 

#define ENABLE_HTIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  HTIF3_MASK ); \
   } 

#define DISABLE_HTIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~HTIF3_MASK ); \
   } 

#define READ_HTIF3(base) \
    ((READ_REGISTER_ULONG(base ) & HTIF3_MASK) >> HTIF3_START_BIT )

#define WHEN_HTIF3_HIGH(base) \
     if ( READ_HTIF3(base) )


#define UNLESS_HTIF3_HIGH(base) \
     if (! READ_HTIF3(base) )


#define WAIT_HTIF3_LOW(base) \
    while ( READ_HTIF3(base) );


#define WAIT_HTIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF3(base) && (--timeout > 0) );


#define WAIT_HTIF3_HIGH(base) \
    while (! READ_HTIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF3_MASK 0x8000000U
#define TCIF3_OFFSET 27
#define TCIF3_START_BIT 27
#define TCIF3_WIDTH 1



typedef enum tcif3 {
    TCIF_3_0,
    TCIF_3_1
} TCIF_3_T ;
#define WRITE_TCIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TCIF3_MASK) | ((val << TCIF3_START_BIT) & TCIF3_MASK )); \
   } 

#define ENABLE_TCIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TCIF3_MASK ); \
   } 

#define DISABLE_TCIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TCIF3_MASK ); \
   } 

#define READ_TCIF3(base) \
    ((READ_REGISTER_ULONG(base ) & TCIF3_MASK) >> TCIF3_START_BIT )

#define WHEN_TCIF3_HIGH(base) \
     if ( READ_TCIF3(base) )


#define UNLESS_TCIF3_HIGH(base) \
     if (! READ_TCIF3(base) )


#define WAIT_TCIF3_LOW(base) \
    while ( READ_TCIF3(base) );


#define WAIT_TCIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF3(base) && (--timeout > 0) );


#define WAIT_TCIF3_HIGH(base) \
    while (! READ_TCIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register Hisr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HISR( base ) \
     READ_REGISTER_ULONG( base + 0x4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF4_MASK 0x1U
#define FEIF4_OFFSET 0
#define FEIF4_START_BIT 0
#define FEIF4_WIDTH 1


#define HISR_REG 0x4

typedef enum feif4 {
    FEIF_4_0,
    FEIF_4_1
} FEIF_4_T ;
#define WRITE_FEIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~FEIF4_MASK) | ((val << FEIF4_START_BIT) & FEIF4_MASK )); \
   } 

#define ENABLE_FEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  FEIF4_MASK ); \
   } 

#define DISABLE_FEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~FEIF4_MASK ); \
   } 

#define READ_FEIF4(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & FEIF4_MASK) >> FEIF4_START_BIT )

#define WHEN_FEIF4_HIGH(base) \
     if ( READ_FEIF4(base) )


#define UNLESS_FEIF4_HIGH(base) \
     if (! READ_FEIF4(base) )


#define WAIT_FEIF4_LOW(base) \
    while ( READ_FEIF4(base) );


#define WAIT_FEIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF4(base) && (--timeout > 0) );


#define WAIT_FEIF4_HIGH(base) \
    while (! READ_FEIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF4_MASK 0x4U
#define DMEIF4_OFFSET 2
#define DMEIF4_START_BIT 2
#define DMEIF4_WIDTH 1



typedef enum dmeif4 {
    DMEIF_4_0,
    DMEIF_4_1
} DMEIF_4_T ;
#define WRITE_DMEIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DMEIF4_MASK) | ((val << DMEIF4_START_BIT) & DMEIF4_MASK )); \
   } 

#define ENABLE_DMEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  DMEIF4_MASK ); \
   } 

#define DISABLE_DMEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~DMEIF4_MASK ); \
   } 

#define READ_DMEIF4(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DMEIF4_MASK) >> DMEIF4_START_BIT )

#define WHEN_DMEIF4_HIGH(base) \
     if ( READ_DMEIF4(base) )


#define UNLESS_DMEIF4_HIGH(base) \
     if (! READ_DMEIF4(base) )


#define WAIT_DMEIF4_LOW(base) \
    while ( READ_DMEIF4(base) );


#define WAIT_DMEIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF4(base) && (--timeout > 0) );


#define WAIT_DMEIF4_HIGH(base) \
    while (! READ_DMEIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF4_MASK 0x8U
#define TEIF4_OFFSET 3
#define TEIF4_START_BIT 3
#define TEIF4_WIDTH 1



typedef enum teif4 {
    TEIF_4_0,
    TEIF_4_1
} TEIF_4_T ;
#define WRITE_TEIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TEIF4_MASK) | ((val << TEIF4_START_BIT) & TEIF4_MASK )); \
   } 

#define ENABLE_TEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TEIF4_MASK ); \
   } 

#define DISABLE_TEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TEIF4_MASK ); \
   } 

#define READ_TEIF4(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TEIF4_MASK) >> TEIF4_START_BIT )

#define WHEN_TEIF4_HIGH(base) \
     if ( READ_TEIF4(base) )


#define UNLESS_TEIF4_HIGH(base) \
     if (! READ_TEIF4(base) )


#define WAIT_TEIF4_LOW(base) \
    while ( READ_TEIF4(base) );


#define WAIT_TEIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF4(base) && (--timeout > 0) );


#define WAIT_TEIF4_HIGH(base) \
    while (! READ_TEIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF4_MASK 0x10U
#define HTIF4_OFFSET 4
#define HTIF4_START_BIT 4
#define HTIF4_WIDTH 1



typedef enum htif4 {
    HTIF_4_0,
    HTIF_4_1
} HTIF_4_T ;
#define WRITE_HTIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~HTIF4_MASK) | ((val << HTIF4_START_BIT) & HTIF4_MASK )); \
   } 

#define ENABLE_HTIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  HTIF4_MASK ); \
   } 

#define DISABLE_HTIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~HTIF4_MASK ); \
   } 

#define READ_HTIF4(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & HTIF4_MASK) >> HTIF4_START_BIT )

#define WHEN_HTIF4_HIGH(base) \
     if ( READ_HTIF4(base) )


#define UNLESS_HTIF4_HIGH(base) \
     if (! READ_HTIF4(base) )


#define WAIT_HTIF4_LOW(base) \
    while ( READ_HTIF4(base) );


#define WAIT_HTIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF4(base) && (--timeout > 0) );


#define WAIT_HTIF4_HIGH(base) \
    while (! READ_HTIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF4_MASK 0x20U
#define TCIF4_OFFSET 5
#define TCIF4_START_BIT 5
#define TCIF4_WIDTH 1



typedef enum tcif4 {
    TCIF_4_0,
    TCIF_4_1
} TCIF_4_T ;
#define WRITE_TCIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TCIF4_MASK) | ((val << TCIF4_START_BIT) & TCIF4_MASK )); \
   } 

#define ENABLE_TCIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TCIF4_MASK ); \
   } 

#define DISABLE_TCIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TCIF4_MASK ); \
   } 

#define READ_TCIF4(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TCIF4_MASK) >> TCIF4_START_BIT )

#define WHEN_TCIF4_HIGH(base) \
     if ( READ_TCIF4(base) )


#define UNLESS_TCIF4_HIGH(base) \
     if (! READ_TCIF4(base) )


#define WAIT_TCIF4_LOW(base) \
    while ( READ_TCIF4(base) );


#define WAIT_TCIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF4(base) && (--timeout > 0) );


#define WAIT_TCIF4_HIGH(base) \
    while (! READ_TCIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF5_MASK 0x40U
#define FEIF5_OFFSET 6
#define FEIF5_START_BIT 6
#define FEIF5_WIDTH 1



typedef enum feif5 {
    FEIF_5_0,
    FEIF_5_1
} FEIF_5_T ;
#define WRITE_FEIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~FEIF5_MASK) | ((val << FEIF5_START_BIT) & FEIF5_MASK )); \
   } 

#define ENABLE_FEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  FEIF5_MASK ); \
   } 

#define DISABLE_FEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~FEIF5_MASK ); \
   } 

#define READ_FEIF5(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & FEIF5_MASK) >> FEIF5_START_BIT )

#define WHEN_FEIF5_HIGH(base) \
     if ( READ_FEIF5(base) )


#define UNLESS_FEIF5_HIGH(base) \
     if (! READ_FEIF5(base) )


#define WAIT_FEIF5_LOW(base) \
    while ( READ_FEIF5(base) );


#define WAIT_FEIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF5(base) && (--timeout > 0) );


#define WAIT_FEIF5_HIGH(base) \
    while (! READ_FEIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF5_MASK 0x100U
#define DMEIF5_OFFSET 8
#define DMEIF5_START_BIT 8
#define DMEIF5_WIDTH 1



typedef enum dmeif5 {
    DMEIF_5_0,
    DMEIF_5_1
} DMEIF_5_T ;
#define WRITE_DMEIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DMEIF5_MASK) | ((val << DMEIF5_START_BIT) & DMEIF5_MASK )); \
   } 

#define ENABLE_DMEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  DMEIF5_MASK ); \
   } 

#define DISABLE_DMEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~DMEIF5_MASK ); \
   } 

#define READ_DMEIF5(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DMEIF5_MASK) >> DMEIF5_START_BIT )

#define WHEN_DMEIF5_HIGH(base) \
     if ( READ_DMEIF5(base) )


#define UNLESS_DMEIF5_HIGH(base) \
     if (! READ_DMEIF5(base) )


#define WAIT_DMEIF5_LOW(base) \
    while ( READ_DMEIF5(base) );


#define WAIT_DMEIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF5(base) && (--timeout > 0) );


#define WAIT_DMEIF5_HIGH(base) \
    while (! READ_DMEIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF5_MASK 0x200U
#define TEIF5_OFFSET 9
#define TEIF5_START_BIT 9
#define TEIF5_WIDTH 1



typedef enum teif5 {
    TEIF_5_0,
    TEIF_5_1
} TEIF_5_T ;
#define WRITE_TEIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TEIF5_MASK) | ((val << TEIF5_START_BIT) & TEIF5_MASK )); \
   } 

#define ENABLE_TEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TEIF5_MASK ); \
   } 

#define DISABLE_TEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TEIF5_MASK ); \
   } 

#define READ_TEIF5(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TEIF5_MASK) >> TEIF5_START_BIT )

#define WHEN_TEIF5_HIGH(base) \
     if ( READ_TEIF5(base) )


#define UNLESS_TEIF5_HIGH(base) \
     if (! READ_TEIF5(base) )


#define WAIT_TEIF5_LOW(base) \
    while ( READ_TEIF5(base) );


#define WAIT_TEIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF5(base) && (--timeout > 0) );


#define WAIT_TEIF5_HIGH(base) \
    while (! READ_TEIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF5_MASK 0x400U
#define HTIF5_OFFSET 10
#define HTIF5_START_BIT 10
#define HTIF5_WIDTH 1



typedef enum htif5 {
    HTIF_5_0,
    HTIF_5_1
} HTIF_5_T ;
#define WRITE_HTIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~HTIF5_MASK) | ((val << HTIF5_START_BIT) & HTIF5_MASK )); \
   } 

#define ENABLE_HTIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  HTIF5_MASK ); \
   } 

#define DISABLE_HTIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~HTIF5_MASK ); \
   } 

#define READ_HTIF5(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & HTIF5_MASK) >> HTIF5_START_BIT )

#define WHEN_HTIF5_HIGH(base) \
     if ( READ_HTIF5(base) )


#define UNLESS_HTIF5_HIGH(base) \
     if (! READ_HTIF5(base) )


#define WAIT_HTIF5_LOW(base) \
    while ( READ_HTIF5(base) );


#define WAIT_HTIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF5(base) && (--timeout > 0) );


#define WAIT_HTIF5_HIGH(base) \
    while (! READ_HTIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF5_MASK 0x800U
#define TCIF5_OFFSET 11
#define TCIF5_START_BIT 11
#define TCIF5_WIDTH 1



typedef enum tcif5 {
    TCIF_5_0,
    TCIF_5_1
} TCIF_5_T ;
#define WRITE_TCIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TCIF5_MASK) | ((val << TCIF5_START_BIT) & TCIF5_MASK )); \
   } 

#define ENABLE_TCIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TCIF5_MASK ); \
   } 

#define DISABLE_TCIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TCIF5_MASK ); \
   } 

#define READ_TCIF5(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TCIF5_MASK) >> TCIF5_START_BIT )

#define WHEN_TCIF5_HIGH(base) \
     if ( READ_TCIF5(base) )


#define UNLESS_TCIF5_HIGH(base) \
     if (! READ_TCIF5(base) )


#define WAIT_TCIF5_LOW(base) \
    while ( READ_TCIF5(base) );


#define WAIT_TCIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF5(base) && (--timeout > 0) );


#define WAIT_TCIF5_HIGH(base) \
    while (! READ_TCIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF6_MASK 0x10000U
#define FEIF6_OFFSET 16
#define FEIF6_START_BIT 16
#define FEIF6_WIDTH 1



typedef enum feif6 {
    FEIF_6_0,
    FEIF_6_1
} FEIF_6_T ;
#define WRITE_FEIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~FEIF6_MASK) | ((val << FEIF6_START_BIT) & FEIF6_MASK )); \
   } 

#define ENABLE_FEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  FEIF6_MASK ); \
   } 

#define DISABLE_FEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~FEIF6_MASK ); \
   } 

#define READ_FEIF6(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & FEIF6_MASK) >> FEIF6_START_BIT )

#define WHEN_FEIF6_HIGH(base) \
     if ( READ_FEIF6(base) )


#define UNLESS_FEIF6_HIGH(base) \
     if (! READ_FEIF6(base) )


#define WAIT_FEIF6_LOW(base) \
    while ( READ_FEIF6(base) );


#define WAIT_FEIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF6(base) && (--timeout > 0) );


#define WAIT_FEIF6_HIGH(base) \
    while (! READ_FEIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF6_MASK 0x40000U
#define DMEIF6_OFFSET 18
#define DMEIF6_START_BIT 18
#define DMEIF6_WIDTH 1



typedef enum dmeif6 {
    DMEIF_6_0,
    DMEIF_6_1
} DMEIF_6_T ;
#define WRITE_DMEIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DMEIF6_MASK) | ((val << DMEIF6_START_BIT) & DMEIF6_MASK )); \
   } 

#define ENABLE_DMEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  DMEIF6_MASK ); \
   } 

#define DISABLE_DMEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~DMEIF6_MASK ); \
   } 

#define READ_DMEIF6(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DMEIF6_MASK) >> DMEIF6_START_BIT )

#define WHEN_DMEIF6_HIGH(base) \
     if ( READ_DMEIF6(base) )


#define UNLESS_DMEIF6_HIGH(base) \
     if (! READ_DMEIF6(base) )


#define WAIT_DMEIF6_LOW(base) \
    while ( READ_DMEIF6(base) );


#define WAIT_DMEIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF6(base) && (--timeout > 0) );


#define WAIT_DMEIF6_HIGH(base) \
    while (! READ_DMEIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF6_MASK 0x80000U
#define TEIF6_OFFSET 19
#define TEIF6_START_BIT 19
#define TEIF6_WIDTH 1



typedef enum teif6 {
    TEIF_6_0,
    TEIF_6_1
} TEIF_6_T ;
#define WRITE_TEIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TEIF6_MASK) | ((val << TEIF6_START_BIT) & TEIF6_MASK )); \
   } 

#define ENABLE_TEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TEIF6_MASK ); \
   } 

#define DISABLE_TEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TEIF6_MASK ); \
   } 

#define READ_TEIF6(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TEIF6_MASK) >> TEIF6_START_BIT )

#define WHEN_TEIF6_HIGH(base) \
     if ( READ_TEIF6(base) )


#define UNLESS_TEIF6_HIGH(base) \
     if (! READ_TEIF6(base) )


#define WAIT_TEIF6_LOW(base) \
    while ( READ_TEIF6(base) );


#define WAIT_TEIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF6(base) && (--timeout > 0) );


#define WAIT_TEIF6_HIGH(base) \
    while (! READ_TEIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF6_MASK 0x100000U
#define HTIF6_OFFSET 20
#define HTIF6_START_BIT 20
#define HTIF6_WIDTH 1



typedef enum htif6 {
    HTIF_6_0,
    HTIF_6_1
} HTIF_6_T ;
#define WRITE_HTIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~HTIF6_MASK) | ((val << HTIF6_START_BIT) & HTIF6_MASK )); \
   } 

#define ENABLE_HTIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  HTIF6_MASK ); \
   } 

#define DISABLE_HTIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~HTIF6_MASK ); \
   } 

#define READ_HTIF6(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & HTIF6_MASK) >> HTIF6_START_BIT )

#define WHEN_HTIF6_HIGH(base) \
     if ( READ_HTIF6(base) )


#define UNLESS_HTIF6_HIGH(base) \
     if (! READ_HTIF6(base) )


#define WAIT_HTIF6_LOW(base) \
    while ( READ_HTIF6(base) );


#define WAIT_HTIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF6(base) && (--timeout > 0) );


#define WAIT_HTIF6_HIGH(base) \
    while (! READ_HTIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF6_MASK 0x200000U
#define TCIF6_OFFSET 21
#define TCIF6_START_BIT 21
#define TCIF6_WIDTH 1



typedef enum tcif6 {
    TCIF_6_0,
    TCIF_6_1
} TCIF_6_T ;
#define WRITE_TCIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TCIF6_MASK) | ((val << TCIF6_START_BIT) & TCIF6_MASK )); \
   } 

#define ENABLE_TCIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TCIF6_MASK ); \
   } 

#define DISABLE_TCIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TCIF6_MASK ); \
   } 

#define READ_TCIF6(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TCIF6_MASK) >> TCIF6_START_BIT )

#define WHEN_TCIF6_HIGH(base) \
     if ( READ_TCIF6(base) )


#define UNLESS_TCIF6_HIGH(base) \
     if (! READ_TCIF6(base) )


#define WAIT_TCIF6_LOW(base) \
    while ( READ_TCIF6(base) );


#define WAIT_TCIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF6(base) && (--timeout > 0) );


#define WAIT_TCIF6_HIGH(base) \
    while (! READ_TCIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF7_MASK 0x400000U
#define FEIF7_OFFSET 22
#define FEIF7_START_BIT 22
#define FEIF7_WIDTH 1



typedef enum feif7 {
    FEIF_7_0,
    FEIF_7_1
} FEIF_7_T ;
#define WRITE_FEIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~FEIF7_MASK) | ((val << FEIF7_START_BIT) & FEIF7_MASK )); \
   } 

#define ENABLE_FEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  FEIF7_MASK ); \
   } 

#define DISABLE_FEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~FEIF7_MASK ); \
   } 

#define READ_FEIF7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & FEIF7_MASK) >> FEIF7_START_BIT )

#define WHEN_FEIF7_HIGH(base) \
     if ( READ_FEIF7(base) )


#define UNLESS_FEIF7_HIGH(base) \
     if (! READ_FEIF7(base) )


#define WAIT_FEIF7_LOW(base) \
    while ( READ_FEIF7(base) );


#define WAIT_FEIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIF7(base) && (--timeout > 0) );


#define WAIT_FEIF7_HIGH(base) \
    while (! READ_FEIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF7_MASK 0x1000000U
#define DMEIF7_OFFSET 24
#define DMEIF7_START_BIT 24
#define DMEIF7_WIDTH 1



typedef enum dmeif7 {
    DMEIF_7_0,
    DMEIF_7_1
} DMEIF_7_T ;
#define WRITE_DMEIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DMEIF7_MASK) | ((val << DMEIF7_START_BIT) & DMEIF7_MASK )); \
   } 

#define ENABLE_DMEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  DMEIF7_MASK ); \
   } 

#define DISABLE_DMEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~DMEIF7_MASK ); \
   } 

#define READ_DMEIF7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DMEIF7_MASK) >> DMEIF7_START_BIT )

#define WHEN_DMEIF7_HIGH(base) \
     if ( READ_DMEIF7(base) )


#define UNLESS_DMEIF7_HIGH(base) \
     if (! READ_DMEIF7(base) )


#define WAIT_DMEIF7_LOW(base) \
    while ( READ_DMEIF7(base) );


#define WAIT_DMEIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIF7(base) && (--timeout > 0) );


#define WAIT_DMEIF7_HIGH(base) \
    while (! READ_DMEIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF7_MASK 0x2000000U
#define TEIF7_OFFSET 25
#define TEIF7_START_BIT 25
#define TEIF7_WIDTH 1



typedef enum teif7 {
    TEIF_7_0,
    TEIF_7_1
} TEIF_7_T ;
#define WRITE_TEIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TEIF7_MASK) | ((val << TEIF7_START_BIT) & TEIF7_MASK )); \
   } 

#define ENABLE_TEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TEIF7_MASK ); \
   } 

#define DISABLE_TEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TEIF7_MASK ); \
   } 

#define READ_TEIF7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TEIF7_MASK) >> TEIF7_START_BIT )

#define WHEN_TEIF7_HIGH(base) \
     if ( READ_TEIF7(base) )


#define UNLESS_TEIF7_HIGH(base) \
     if (! READ_TEIF7(base) )


#define WAIT_TEIF7_LOW(base) \
    while ( READ_TEIF7(base) );


#define WAIT_TEIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIF7(base) && (--timeout > 0) );


#define WAIT_TEIF7_HIGH(base) \
    while (! READ_TEIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF7_MASK 0x4000000U
#define HTIF7_OFFSET 26
#define HTIF7_START_BIT 26
#define HTIF7_WIDTH 1



typedef enum htif7 {
    HTIF_7_0,
    HTIF_7_1
} HTIF_7_T ;
#define WRITE_HTIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~HTIF7_MASK) | ((val << HTIF7_START_BIT) & HTIF7_MASK )); \
   } 

#define ENABLE_HTIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  HTIF7_MASK ); \
   } 

#define DISABLE_HTIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~HTIF7_MASK ); \
   } 

#define READ_HTIF7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & HTIF7_MASK) >> HTIF7_START_BIT )

#define WHEN_HTIF7_HIGH(base) \
     if ( READ_HTIF7(base) )


#define UNLESS_HTIF7_HIGH(base) \
     if (! READ_HTIF7(base) )


#define WAIT_HTIF7_LOW(base) \
    while ( READ_HTIF7(base) );


#define WAIT_HTIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIF7(base) && (--timeout > 0) );


#define WAIT_HTIF7_HIGH(base) \
    while (! READ_HTIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x4, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF7_MASK 0x8000000U
#define TCIF7_OFFSET 27
#define TCIF7_START_BIT 27
#define TCIF7_WIDTH 1



typedef enum tcif7 {
    TCIF_7_0,
    TCIF_7_1
} TCIF_7_T ;
#define WRITE_TCIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TCIF7_MASK) | ((val << TCIF7_START_BIT) & TCIF7_MASK )); \
   } 

#define ENABLE_TCIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TCIF7_MASK ); \
   } 

#define DISABLE_TCIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TCIF7_MASK ); \
   } 

#define READ_TCIF7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TCIF7_MASK) >> TCIF7_START_BIT )

#define WHEN_TCIF7_HIGH(base) \
     if ( READ_TCIF7(base) )


#define UNLESS_TCIF7_HIGH(base) \
     if (! READ_TCIF7(base) )


#define WAIT_TCIF7_LOW(base) \
    while ( READ_TCIF7(base) );


#define WAIT_TCIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIF7(base) && (--timeout > 0) );


#define WAIT_TCIF7_HIGH(base) \
    while (! READ_TCIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register Lifcr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LIFCR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8, val)

#define SET_BITS_LIFCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_LIFCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_LIFCR( base ) \
     READ_REGISTER_ULONG( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF0_MASK 0x1U
#define CFEIF0_OFFSET 0
#define CFEIF0_START_BIT 0
#define CFEIF0_WIDTH 1


#define LIFCR_REG 0x8

typedef enum cfeif0 {
    CFEIF_0_0,
    CFEIF_0_1
} CFEIF_0_T ;
#define WRITE_CFEIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CFEIF0_MASK) | ((val << CFEIF0_START_BIT) & CFEIF0_MASK )); \
   } 

#define ENABLE_CFEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CFEIF0_MASK ); \
   } 

#define DISABLE_CFEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CFEIF0_MASK ); \
   } 

#define READ_CFEIF0(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CFEIF0_MASK) >> CFEIF0_START_BIT )

#define WHEN_CFEIF0_HIGH(base) \
     if ( READ_CFEIF0(base) )


#define UNLESS_CFEIF0_HIGH(base) \
     if (! READ_CFEIF0(base) )


#define WAIT_CFEIF0_LOW(base) \
    while ( READ_CFEIF0(base) );


#define WAIT_CFEIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF0(base) && (--timeout > 0) );


#define WAIT_CFEIF0_HIGH(base) \
    while (! READ_CFEIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF0_MASK 0x4U
#define CDMEIF0_OFFSET 2
#define CDMEIF0_START_BIT 2
#define CDMEIF0_WIDTH 1



typedef enum cdmeif0 {
    CDMEIF_0_0,
    CDMEIF_0_1
} CDMEIF_0_T ;
#define WRITE_CDMEIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CDMEIF0_MASK) | ((val << CDMEIF0_START_BIT) & CDMEIF0_MASK )); \
   } 

#define ENABLE_CDMEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CDMEIF0_MASK ); \
   } 

#define DISABLE_CDMEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CDMEIF0_MASK ); \
   } 

#define READ_CDMEIF0(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CDMEIF0_MASK) >> CDMEIF0_START_BIT )

#define WHEN_CDMEIF0_HIGH(base) \
     if ( READ_CDMEIF0(base) )


#define UNLESS_CDMEIF0_HIGH(base) \
     if (! READ_CDMEIF0(base) )


#define WAIT_CDMEIF0_LOW(base) \
    while ( READ_CDMEIF0(base) );


#define WAIT_CDMEIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF0(base) && (--timeout > 0) );


#define WAIT_CDMEIF0_HIGH(base) \
    while (! READ_CDMEIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF0_MASK 0x8U
#define CTEIF0_OFFSET 3
#define CTEIF0_START_BIT 3
#define CTEIF0_WIDTH 1



typedef enum cteif0 {
    CTEIF_0_0,
    CTEIF_0_1
} CTEIF_0_T ;
#define WRITE_CTEIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTEIF0_MASK) | ((val << CTEIF0_START_BIT) & CTEIF0_MASK )); \
   } 

#define ENABLE_CTEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTEIF0_MASK ); \
   } 

#define DISABLE_CTEIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTEIF0_MASK ); \
   } 

#define READ_CTEIF0(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTEIF0_MASK) >> CTEIF0_START_BIT )

#define WHEN_CTEIF0_HIGH(base) \
     if ( READ_CTEIF0(base) )


#define UNLESS_CTEIF0_HIGH(base) \
     if (! READ_CTEIF0(base) )


#define WAIT_CTEIF0_LOW(base) \
    while ( READ_CTEIF0(base) );


#define WAIT_CTEIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF0(base) && (--timeout > 0) );


#define WAIT_CTEIF0_HIGH(base) \
    while (! READ_CTEIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF0_MASK 0x10U
#define CHTIF0_OFFSET 4
#define CHTIF0_START_BIT 4
#define CHTIF0_WIDTH 1



typedef enum chtif0 {
    CHTIF_0_0,
    CHTIF_0_1
} CHTIF_0_T ;
#define WRITE_CHTIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CHTIF0_MASK) | ((val << CHTIF0_START_BIT) & CHTIF0_MASK )); \
   } 

#define ENABLE_CHTIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CHTIF0_MASK ); \
   } 

#define DISABLE_CHTIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CHTIF0_MASK ); \
   } 

#define READ_CHTIF0(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CHTIF0_MASK) >> CHTIF0_START_BIT )

#define WHEN_CHTIF0_HIGH(base) \
     if ( READ_CHTIF0(base) )


#define UNLESS_CHTIF0_HIGH(base) \
     if (! READ_CHTIF0(base) )


#define WAIT_CHTIF0_LOW(base) \
    while ( READ_CHTIF0(base) );


#define WAIT_CHTIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF0(base) && (--timeout > 0) );


#define WAIT_CHTIF0_HIGH(base) \
    while (! READ_CHTIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF0_MASK 0x20U
#define CTCIF0_OFFSET 5
#define CTCIF0_START_BIT 5
#define CTCIF0_WIDTH 1



typedef enum ctcif0 {
    CTCIF_0_0,
    CTCIF_0_1
} CTCIF_0_T ;
#define WRITE_CTCIF0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTCIF0_MASK) | ((val << CTCIF0_START_BIT) & CTCIF0_MASK )); \
   } 

#define ENABLE_CTCIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTCIF0_MASK ); \
   } 

#define DISABLE_CTCIF0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTCIF0_MASK ); \
   } 

#define READ_CTCIF0(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTCIF0_MASK) >> CTCIF0_START_BIT )

#define WHEN_CTCIF0_HIGH(base) \
     if ( READ_CTCIF0(base) )


#define UNLESS_CTCIF0_HIGH(base) \
     if (! READ_CTCIF0(base) )


#define WAIT_CTCIF0_LOW(base) \
    while ( READ_CTCIF0(base) );


#define WAIT_CTCIF0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF0(base) && (--timeout > 0) );


#define WAIT_CTCIF0_HIGH(base) \
    while (! READ_CTCIF0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF1_MASK 0x40U
#define CFEIF1_OFFSET 6
#define CFEIF1_START_BIT 6
#define CFEIF1_WIDTH 1



typedef enum cfeif1 {
    CFEIF_1_0,
    CFEIF_1_1
} CFEIF_1_T ;
#define WRITE_CFEIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CFEIF1_MASK) | ((val << CFEIF1_START_BIT) & CFEIF1_MASK )); \
   } 

#define ENABLE_CFEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CFEIF1_MASK ); \
   } 

#define DISABLE_CFEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CFEIF1_MASK ); \
   } 

#define READ_CFEIF1(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CFEIF1_MASK) >> CFEIF1_START_BIT )

#define WHEN_CFEIF1_HIGH(base) \
     if ( READ_CFEIF1(base) )


#define UNLESS_CFEIF1_HIGH(base) \
     if (! READ_CFEIF1(base) )


#define WAIT_CFEIF1_LOW(base) \
    while ( READ_CFEIF1(base) );


#define WAIT_CFEIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF1(base) && (--timeout > 0) );


#define WAIT_CFEIF1_HIGH(base) \
    while (! READ_CFEIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF1_MASK 0x100U
#define CDMEIF1_OFFSET 8
#define CDMEIF1_START_BIT 8
#define CDMEIF1_WIDTH 1



typedef enum cdmeif1 {
    CDMEIF_1_0,
    CDMEIF_1_1
} CDMEIF_1_T ;
#define WRITE_CDMEIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CDMEIF1_MASK) | ((val << CDMEIF1_START_BIT) & CDMEIF1_MASK )); \
   } 

#define ENABLE_CDMEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CDMEIF1_MASK ); \
   } 

#define DISABLE_CDMEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CDMEIF1_MASK ); \
   } 

#define READ_CDMEIF1(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CDMEIF1_MASK) >> CDMEIF1_START_BIT )

#define WHEN_CDMEIF1_HIGH(base) \
     if ( READ_CDMEIF1(base) )


#define UNLESS_CDMEIF1_HIGH(base) \
     if (! READ_CDMEIF1(base) )


#define WAIT_CDMEIF1_LOW(base) \
    while ( READ_CDMEIF1(base) );


#define WAIT_CDMEIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF1(base) && (--timeout > 0) );


#define WAIT_CDMEIF1_HIGH(base) \
    while (! READ_CDMEIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF1_MASK 0x200U
#define CTEIF1_OFFSET 9
#define CTEIF1_START_BIT 9
#define CTEIF1_WIDTH 1



typedef enum cteif1 {
    CTEIF_1_0,
    CTEIF_1_1
} CTEIF_1_T ;
#define WRITE_CTEIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTEIF1_MASK) | ((val << CTEIF1_START_BIT) & CTEIF1_MASK )); \
   } 

#define ENABLE_CTEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTEIF1_MASK ); \
   } 

#define DISABLE_CTEIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTEIF1_MASK ); \
   } 

#define READ_CTEIF1(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTEIF1_MASK) >> CTEIF1_START_BIT )

#define WHEN_CTEIF1_HIGH(base) \
     if ( READ_CTEIF1(base) )


#define UNLESS_CTEIF1_HIGH(base) \
     if (! READ_CTEIF1(base) )


#define WAIT_CTEIF1_LOW(base) \
    while ( READ_CTEIF1(base) );


#define WAIT_CTEIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF1(base) && (--timeout > 0) );


#define WAIT_CTEIF1_HIGH(base) \
    while (! READ_CTEIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF1_MASK 0x400U
#define CHTIF1_OFFSET 10
#define CHTIF1_START_BIT 10
#define CHTIF1_WIDTH 1



typedef enum chtif1 {
    CHTIF_1_0,
    CHTIF_1_1
} CHTIF_1_T ;
#define WRITE_CHTIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CHTIF1_MASK) | ((val << CHTIF1_START_BIT) & CHTIF1_MASK )); \
   } 

#define ENABLE_CHTIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CHTIF1_MASK ); \
   } 

#define DISABLE_CHTIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CHTIF1_MASK ); \
   } 

#define READ_CHTIF1(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CHTIF1_MASK) >> CHTIF1_START_BIT )

#define WHEN_CHTIF1_HIGH(base) \
     if ( READ_CHTIF1(base) )


#define UNLESS_CHTIF1_HIGH(base) \
     if (! READ_CHTIF1(base) )


#define WAIT_CHTIF1_LOW(base) \
    while ( READ_CHTIF1(base) );


#define WAIT_CHTIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF1(base) && (--timeout > 0) );


#define WAIT_CHTIF1_HIGH(base) \
    while (! READ_CHTIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF1_MASK 0x800U
#define CTCIF1_OFFSET 11
#define CTCIF1_START_BIT 11
#define CTCIF1_WIDTH 1



typedef enum ctcif1 {
    CTCIF_1_0,
    CTCIF_1_1
} CTCIF_1_T ;
#define WRITE_CTCIF1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTCIF1_MASK) | ((val << CTCIF1_START_BIT) & CTCIF1_MASK )); \
   } 

#define ENABLE_CTCIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTCIF1_MASK ); \
   } 

#define DISABLE_CTCIF1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTCIF1_MASK ); \
   } 

#define READ_CTCIF1(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTCIF1_MASK) >> CTCIF1_START_BIT )

#define WHEN_CTCIF1_HIGH(base) \
     if ( READ_CTCIF1(base) )


#define UNLESS_CTCIF1_HIGH(base) \
     if (! READ_CTCIF1(base) )


#define WAIT_CTCIF1_LOW(base) \
    while ( READ_CTCIF1(base) );


#define WAIT_CTCIF1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF1(base) && (--timeout > 0) );


#define WAIT_CTCIF1_HIGH(base) \
    while (! READ_CTCIF1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF2_MASK 0x10000U
#define CFEIF2_OFFSET 16
#define CFEIF2_START_BIT 16
#define CFEIF2_WIDTH 1



typedef enum cfeif2 {
    CFEIF_2_0,
    CFEIF_2_1
} CFEIF_2_T ;
#define WRITE_CFEIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CFEIF2_MASK) | ((val << CFEIF2_START_BIT) & CFEIF2_MASK )); \
   } 

#define ENABLE_CFEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CFEIF2_MASK ); \
   } 

#define DISABLE_CFEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CFEIF2_MASK ); \
   } 

#define READ_CFEIF2(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CFEIF2_MASK) >> CFEIF2_START_BIT )

#define WHEN_CFEIF2_HIGH(base) \
     if ( READ_CFEIF2(base) )


#define UNLESS_CFEIF2_HIGH(base) \
     if (! READ_CFEIF2(base) )


#define WAIT_CFEIF2_LOW(base) \
    while ( READ_CFEIF2(base) );


#define WAIT_CFEIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF2(base) && (--timeout > 0) );


#define WAIT_CFEIF2_HIGH(base) \
    while (! READ_CFEIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF2_MASK 0x40000U
#define CDMEIF2_OFFSET 18
#define CDMEIF2_START_BIT 18
#define CDMEIF2_WIDTH 1



typedef enum cdmeif2 {
    CDMEIF_2_0,
    CDMEIF_2_1
} CDMEIF_2_T ;
#define WRITE_CDMEIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CDMEIF2_MASK) | ((val << CDMEIF2_START_BIT) & CDMEIF2_MASK )); \
   } 

#define ENABLE_CDMEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CDMEIF2_MASK ); \
   } 

#define DISABLE_CDMEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CDMEIF2_MASK ); \
   } 

#define READ_CDMEIF2(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CDMEIF2_MASK) >> CDMEIF2_START_BIT )

#define WHEN_CDMEIF2_HIGH(base) \
     if ( READ_CDMEIF2(base) )


#define UNLESS_CDMEIF2_HIGH(base) \
     if (! READ_CDMEIF2(base) )


#define WAIT_CDMEIF2_LOW(base) \
    while ( READ_CDMEIF2(base) );


#define WAIT_CDMEIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF2(base) && (--timeout > 0) );


#define WAIT_CDMEIF2_HIGH(base) \
    while (! READ_CDMEIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF2_MASK 0x80000U
#define CTEIF2_OFFSET 19
#define CTEIF2_START_BIT 19
#define CTEIF2_WIDTH 1



typedef enum cteif2 {
    CTEIF_2_0,
    CTEIF_2_1
} CTEIF_2_T ;
#define WRITE_CTEIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTEIF2_MASK) | ((val << CTEIF2_START_BIT) & CTEIF2_MASK )); \
   } 

#define ENABLE_CTEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTEIF2_MASK ); \
   } 

#define DISABLE_CTEIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTEIF2_MASK ); \
   } 

#define READ_CTEIF2(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTEIF2_MASK) >> CTEIF2_START_BIT )

#define WHEN_CTEIF2_HIGH(base) \
     if ( READ_CTEIF2(base) )


#define UNLESS_CTEIF2_HIGH(base) \
     if (! READ_CTEIF2(base) )


#define WAIT_CTEIF2_LOW(base) \
    while ( READ_CTEIF2(base) );


#define WAIT_CTEIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF2(base) && (--timeout > 0) );


#define WAIT_CTEIF2_HIGH(base) \
    while (! READ_CTEIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF2_MASK 0x100000U
#define CHTIF2_OFFSET 20
#define CHTIF2_START_BIT 20
#define CHTIF2_WIDTH 1



typedef enum chtif2 {
    CHTIF_2_0,
    CHTIF_2_1
} CHTIF_2_T ;
#define WRITE_CHTIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CHTIF2_MASK) | ((val << CHTIF2_START_BIT) & CHTIF2_MASK )); \
   } 

#define ENABLE_CHTIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CHTIF2_MASK ); \
   } 

#define DISABLE_CHTIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CHTIF2_MASK ); \
   } 

#define READ_CHTIF2(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CHTIF2_MASK) >> CHTIF2_START_BIT )

#define WHEN_CHTIF2_HIGH(base) \
     if ( READ_CHTIF2(base) )


#define UNLESS_CHTIF2_HIGH(base) \
     if (! READ_CHTIF2(base) )


#define WAIT_CHTIF2_LOW(base) \
    while ( READ_CHTIF2(base) );


#define WAIT_CHTIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF2(base) && (--timeout > 0) );


#define WAIT_CHTIF2_HIGH(base) \
    while (! READ_CHTIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF2_MASK 0x200000U
#define CTCIF2_OFFSET 21
#define CTCIF2_START_BIT 21
#define CTCIF2_WIDTH 1



typedef enum ctcif2 {
    CTCIF_2_0,
    CTCIF_2_1
} CTCIF_2_T ;
#define WRITE_CTCIF2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTCIF2_MASK) | ((val << CTCIF2_START_BIT) & CTCIF2_MASK )); \
   } 

#define ENABLE_CTCIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTCIF2_MASK ); \
   } 

#define DISABLE_CTCIF2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTCIF2_MASK ); \
   } 

#define READ_CTCIF2(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTCIF2_MASK) >> CTCIF2_START_BIT )

#define WHEN_CTCIF2_HIGH(base) \
     if ( READ_CTCIF2(base) )


#define UNLESS_CTCIF2_HIGH(base) \
     if (! READ_CTCIF2(base) )


#define WAIT_CTCIF2_LOW(base) \
    while ( READ_CTCIF2(base) );


#define WAIT_CTCIF2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF2(base) && (--timeout > 0) );


#define WAIT_CTCIF2_HIGH(base) \
    while (! READ_CTCIF2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF3_MASK 0x400000U
#define CFEIF3_OFFSET 22
#define CFEIF3_START_BIT 22
#define CFEIF3_WIDTH 1



typedef enum cfeif3 {
    CFEIF_3_0,
    CFEIF_3_1
} CFEIF_3_T ;
#define WRITE_CFEIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CFEIF3_MASK) | ((val << CFEIF3_START_BIT) & CFEIF3_MASK )); \
   } 

#define ENABLE_CFEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CFEIF3_MASK ); \
   } 

#define DISABLE_CFEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CFEIF3_MASK ); \
   } 

#define READ_CFEIF3(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CFEIF3_MASK) >> CFEIF3_START_BIT )

#define WHEN_CFEIF3_HIGH(base) \
     if ( READ_CFEIF3(base) )


#define UNLESS_CFEIF3_HIGH(base) \
     if (! READ_CFEIF3(base) )


#define WAIT_CFEIF3_LOW(base) \
    while ( READ_CFEIF3(base) );


#define WAIT_CFEIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF3(base) && (--timeout > 0) );


#define WAIT_CFEIF3_HIGH(base) \
    while (! READ_CFEIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF3_MASK 0x1000000U
#define CDMEIF3_OFFSET 24
#define CDMEIF3_START_BIT 24
#define CDMEIF3_WIDTH 1



typedef enum cdmeif3 {
    CDMEIF_3_0,
    CDMEIF_3_1
} CDMEIF_3_T ;
#define WRITE_CDMEIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CDMEIF3_MASK) | ((val << CDMEIF3_START_BIT) & CDMEIF3_MASK )); \
   } 

#define ENABLE_CDMEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CDMEIF3_MASK ); \
   } 

#define DISABLE_CDMEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CDMEIF3_MASK ); \
   } 

#define READ_CDMEIF3(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CDMEIF3_MASK) >> CDMEIF3_START_BIT )

#define WHEN_CDMEIF3_HIGH(base) \
     if ( READ_CDMEIF3(base) )


#define UNLESS_CDMEIF3_HIGH(base) \
     if (! READ_CDMEIF3(base) )


#define WAIT_CDMEIF3_LOW(base) \
    while ( READ_CDMEIF3(base) );


#define WAIT_CDMEIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF3(base) && (--timeout > 0) );


#define WAIT_CDMEIF3_HIGH(base) \
    while (! READ_CDMEIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF3_MASK 0x2000000U
#define CTEIF3_OFFSET 25
#define CTEIF3_START_BIT 25
#define CTEIF3_WIDTH 1



typedef enum cteif3 {
    CTEIF_3_0,
    CTEIF_3_1
} CTEIF_3_T ;
#define WRITE_CTEIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTEIF3_MASK) | ((val << CTEIF3_START_BIT) & CTEIF3_MASK )); \
   } 

#define ENABLE_CTEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTEIF3_MASK ); \
   } 

#define DISABLE_CTEIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTEIF3_MASK ); \
   } 

#define READ_CTEIF3(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTEIF3_MASK) >> CTEIF3_START_BIT )

#define WHEN_CTEIF3_HIGH(base) \
     if ( READ_CTEIF3(base) )


#define UNLESS_CTEIF3_HIGH(base) \
     if (! READ_CTEIF3(base) )


#define WAIT_CTEIF3_LOW(base) \
    while ( READ_CTEIF3(base) );


#define WAIT_CTEIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF3(base) && (--timeout > 0) );


#define WAIT_CTEIF3_HIGH(base) \
    while (! READ_CTEIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF3_MASK 0x4000000U
#define CHTIF3_OFFSET 26
#define CHTIF3_START_BIT 26
#define CHTIF3_WIDTH 1



typedef enum chtif3 {
    CHTIF_3_0,
    CHTIF_3_1
} CHTIF_3_T ;
#define WRITE_CHTIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CHTIF3_MASK) | ((val << CHTIF3_START_BIT) & CHTIF3_MASK )); \
   } 

#define ENABLE_CHTIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CHTIF3_MASK ); \
   } 

#define DISABLE_CHTIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CHTIF3_MASK ); \
   } 

#define READ_CHTIF3(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CHTIF3_MASK) >> CHTIF3_START_BIT )

#define WHEN_CHTIF3_HIGH(base) \
     if ( READ_CHTIF3(base) )


#define UNLESS_CHTIF3_HIGH(base) \
     if (! READ_CHTIF3(base) )


#define WAIT_CHTIF3_LOW(base) \
    while ( READ_CHTIF3(base) );


#define WAIT_CHTIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF3(base) && (--timeout > 0) );


#define WAIT_CHTIF3_HIGH(base) \
    while (! READ_CHTIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x8, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF3_MASK 0x8000000U
#define CTCIF3_OFFSET 27
#define CTCIF3_START_BIT 27
#define CTCIF3_WIDTH 1



typedef enum ctcif3 {
    CTCIF_3_0,
    CTCIF_3_1
} CTCIF_3_T ;
#define WRITE_CTCIF3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTCIF3_MASK) | ((val << CTCIF3_START_BIT) & CTCIF3_MASK )); \
   } 

#define ENABLE_CTCIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTCIF3_MASK ); \
   } 

#define DISABLE_CTCIF3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTCIF3_MASK ); \
   } 

#define READ_CTCIF3(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTCIF3_MASK) >> CTCIF3_START_BIT )

#define WHEN_CTCIF3_HIGH(base) \
     if ( READ_CTCIF3(base) )


#define UNLESS_CTCIF3_HIGH(base) \
     if (! READ_CTCIF3(base) )


#define WAIT_CTCIF3_LOW(base) \
    while ( READ_CTCIF3(base) );


#define WAIT_CTCIF3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF3(base) && (--timeout > 0) );


#define WAIT_CTCIF3_HIGH(base) \
    while (! READ_CTCIF3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register Hifcr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_HIFCR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_HIFCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_HIFCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_HIFCR( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF4_MASK 0x1U
#define CFEIF4_OFFSET 0
#define CFEIF4_START_BIT 0
#define CFEIF4_WIDTH 1


#define HIFCR_REG 0xC

typedef enum cfeif4 {
    CFEIF_4_0,
    CFEIF_4_1
} CFEIF_4_T ;
#define WRITE_CFEIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CFEIF4_MASK) | ((val << CFEIF4_START_BIT) & CFEIF4_MASK )); \
   } 

#define ENABLE_CFEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CFEIF4_MASK ); \
   } 

#define DISABLE_CFEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CFEIF4_MASK ); \
   } 

#define READ_CFEIF4(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CFEIF4_MASK) >> CFEIF4_START_BIT )

#define WHEN_CFEIF4_HIGH(base) \
     if ( READ_CFEIF4(base) )


#define UNLESS_CFEIF4_HIGH(base) \
     if (! READ_CFEIF4(base) )


#define WAIT_CFEIF4_LOW(base) \
    while ( READ_CFEIF4(base) );


#define WAIT_CFEIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF4(base) && (--timeout > 0) );


#define WAIT_CFEIF4_HIGH(base) \
    while (! READ_CFEIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF4_MASK 0x4U
#define CDMEIF4_OFFSET 2
#define CDMEIF4_START_BIT 2
#define CDMEIF4_WIDTH 1



typedef enum cdmeif4 {
    CDMEIF_4_0,
    CDMEIF_4_1
} CDMEIF_4_T ;
#define WRITE_CDMEIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CDMEIF4_MASK) | ((val << CDMEIF4_START_BIT) & CDMEIF4_MASK )); \
   } 

#define ENABLE_CDMEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CDMEIF4_MASK ); \
   } 

#define DISABLE_CDMEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CDMEIF4_MASK ); \
   } 

#define READ_CDMEIF4(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CDMEIF4_MASK) >> CDMEIF4_START_BIT )

#define WHEN_CDMEIF4_HIGH(base) \
     if ( READ_CDMEIF4(base) )


#define UNLESS_CDMEIF4_HIGH(base) \
     if (! READ_CDMEIF4(base) )


#define WAIT_CDMEIF4_LOW(base) \
    while ( READ_CDMEIF4(base) );


#define WAIT_CDMEIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF4(base) && (--timeout > 0) );


#define WAIT_CDMEIF4_HIGH(base) \
    while (! READ_CDMEIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF4_MASK 0x8U
#define CTEIF4_OFFSET 3
#define CTEIF4_START_BIT 3
#define CTEIF4_WIDTH 1



typedef enum cteif4 {
    CTEIF_4_0,
    CTEIF_4_1
} CTEIF_4_T ;
#define WRITE_CTEIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTEIF4_MASK) | ((val << CTEIF4_START_BIT) & CTEIF4_MASK )); \
   } 

#define ENABLE_CTEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTEIF4_MASK ); \
   } 

#define DISABLE_CTEIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTEIF4_MASK ); \
   } 

#define READ_CTEIF4(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTEIF4_MASK) >> CTEIF4_START_BIT )

#define WHEN_CTEIF4_HIGH(base) \
     if ( READ_CTEIF4(base) )


#define UNLESS_CTEIF4_HIGH(base) \
     if (! READ_CTEIF4(base) )


#define WAIT_CTEIF4_LOW(base) \
    while ( READ_CTEIF4(base) );


#define WAIT_CTEIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF4(base) && (--timeout > 0) );


#define WAIT_CTEIF4_HIGH(base) \
    while (! READ_CTEIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF4_MASK 0x10U
#define CHTIF4_OFFSET 4
#define CHTIF4_START_BIT 4
#define CHTIF4_WIDTH 1



typedef enum chtif4 {
    CHTIF_4_0,
    CHTIF_4_1
} CHTIF_4_T ;
#define WRITE_CHTIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CHTIF4_MASK) | ((val << CHTIF4_START_BIT) & CHTIF4_MASK )); \
   } 

#define ENABLE_CHTIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CHTIF4_MASK ); \
   } 

#define DISABLE_CHTIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CHTIF4_MASK ); \
   } 

#define READ_CHTIF4(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CHTIF4_MASK) >> CHTIF4_START_BIT )

#define WHEN_CHTIF4_HIGH(base) \
     if ( READ_CHTIF4(base) )


#define UNLESS_CHTIF4_HIGH(base) \
     if (! READ_CHTIF4(base) )


#define WAIT_CHTIF4_LOW(base) \
    while ( READ_CHTIF4(base) );


#define WAIT_CHTIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF4(base) && (--timeout > 0) );


#define WAIT_CHTIF4_HIGH(base) \
    while (! READ_CHTIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF4_MASK 0x20U
#define CTCIF4_OFFSET 5
#define CTCIF4_START_BIT 5
#define CTCIF4_WIDTH 1



typedef enum ctcif4 {
    CTCIF_4_0,
    CTCIF_4_1
} CTCIF_4_T ;
#define WRITE_CTCIF4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTCIF4_MASK) | ((val << CTCIF4_START_BIT) & CTCIF4_MASK )); \
   } 

#define ENABLE_CTCIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTCIF4_MASK ); \
   } 

#define DISABLE_CTCIF4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTCIF4_MASK ); \
   } 

#define READ_CTCIF4(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTCIF4_MASK) >> CTCIF4_START_BIT )

#define WHEN_CTCIF4_HIGH(base) \
     if ( READ_CTCIF4(base) )


#define UNLESS_CTCIF4_HIGH(base) \
     if (! READ_CTCIF4(base) )


#define WAIT_CTCIF4_LOW(base) \
    while ( READ_CTCIF4(base) );


#define WAIT_CTCIF4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF4(base) && (--timeout > 0) );


#define WAIT_CTCIF4_HIGH(base) \
    while (! READ_CTCIF4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF5_MASK 0x40U
#define CFEIF5_OFFSET 6
#define CFEIF5_START_BIT 6
#define CFEIF5_WIDTH 1



typedef enum cfeif5 {
    CFEIF_5_0,
    CFEIF_5_1
} CFEIF_5_T ;
#define WRITE_CFEIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CFEIF5_MASK) | ((val << CFEIF5_START_BIT) & CFEIF5_MASK )); \
   } 

#define ENABLE_CFEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CFEIF5_MASK ); \
   } 

#define DISABLE_CFEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CFEIF5_MASK ); \
   } 

#define READ_CFEIF5(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CFEIF5_MASK) >> CFEIF5_START_BIT )

#define WHEN_CFEIF5_HIGH(base) \
     if ( READ_CFEIF5(base) )


#define UNLESS_CFEIF5_HIGH(base) \
     if (! READ_CFEIF5(base) )


#define WAIT_CFEIF5_LOW(base) \
    while ( READ_CFEIF5(base) );


#define WAIT_CFEIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF5(base) && (--timeout > 0) );


#define WAIT_CFEIF5_HIGH(base) \
    while (! READ_CFEIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF5_MASK 0x100U
#define CDMEIF5_OFFSET 8
#define CDMEIF5_START_BIT 8
#define CDMEIF5_WIDTH 1



typedef enum cdmeif5 {
    CDMEIF_5_0,
    CDMEIF_5_1
} CDMEIF_5_T ;
#define WRITE_CDMEIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CDMEIF5_MASK) | ((val << CDMEIF5_START_BIT) & CDMEIF5_MASK )); \
   } 

#define ENABLE_CDMEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CDMEIF5_MASK ); \
   } 

#define DISABLE_CDMEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CDMEIF5_MASK ); \
   } 

#define READ_CDMEIF5(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CDMEIF5_MASK) >> CDMEIF5_START_BIT )

#define WHEN_CDMEIF5_HIGH(base) \
     if ( READ_CDMEIF5(base) )


#define UNLESS_CDMEIF5_HIGH(base) \
     if (! READ_CDMEIF5(base) )


#define WAIT_CDMEIF5_LOW(base) \
    while ( READ_CDMEIF5(base) );


#define WAIT_CDMEIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF5(base) && (--timeout > 0) );


#define WAIT_CDMEIF5_HIGH(base) \
    while (! READ_CDMEIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF5_MASK 0x200U
#define CTEIF5_OFFSET 9
#define CTEIF5_START_BIT 9
#define CTEIF5_WIDTH 1



typedef enum cteif5 {
    CTEIF_5_0,
    CTEIF_5_1
} CTEIF_5_T ;
#define WRITE_CTEIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTEIF5_MASK) | ((val << CTEIF5_START_BIT) & CTEIF5_MASK )); \
   } 

#define ENABLE_CTEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTEIF5_MASK ); \
   } 

#define DISABLE_CTEIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTEIF5_MASK ); \
   } 

#define READ_CTEIF5(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTEIF5_MASK) >> CTEIF5_START_BIT )

#define WHEN_CTEIF5_HIGH(base) \
     if ( READ_CTEIF5(base) )


#define UNLESS_CTEIF5_HIGH(base) \
     if (! READ_CTEIF5(base) )


#define WAIT_CTEIF5_LOW(base) \
    while ( READ_CTEIF5(base) );


#define WAIT_CTEIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF5(base) && (--timeout > 0) );


#define WAIT_CTEIF5_HIGH(base) \
    while (! READ_CTEIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF5_MASK 0x400U
#define CHTIF5_OFFSET 10
#define CHTIF5_START_BIT 10
#define CHTIF5_WIDTH 1



typedef enum chtif5 {
    CHTIF_5_0,
    CHTIF_5_1
} CHTIF_5_T ;
#define WRITE_CHTIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CHTIF5_MASK) | ((val << CHTIF5_START_BIT) & CHTIF5_MASK )); \
   } 

#define ENABLE_CHTIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CHTIF5_MASK ); \
   } 

#define DISABLE_CHTIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CHTIF5_MASK ); \
   } 

#define READ_CHTIF5(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CHTIF5_MASK) >> CHTIF5_START_BIT )

#define WHEN_CHTIF5_HIGH(base) \
     if ( READ_CHTIF5(base) )


#define UNLESS_CHTIF5_HIGH(base) \
     if (! READ_CHTIF5(base) )


#define WAIT_CHTIF5_LOW(base) \
    while ( READ_CHTIF5(base) );


#define WAIT_CHTIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF5(base) && (--timeout > 0) );


#define WAIT_CHTIF5_HIGH(base) \
    while (! READ_CHTIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF5_MASK 0x800U
#define CTCIF5_OFFSET 11
#define CTCIF5_START_BIT 11
#define CTCIF5_WIDTH 1



typedef enum ctcif5 {
    CTCIF_5_0,
    CTCIF_5_1
} CTCIF_5_T ;
#define WRITE_CTCIF5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTCIF5_MASK) | ((val << CTCIF5_START_BIT) & CTCIF5_MASK )); \
   } 

#define ENABLE_CTCIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTCIF5_MASK ); \
   } 

#define DISABLE_CTCIF5(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTCIF5_MASK ); \
   } 

#define READ_CTCIF5(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTCIF5_MASK) >> CTCIF5_START_BIT )

#define WHEN_CTCIF5_HIGH(base) \
     if ( READ_CTCIF5(base) )


#define UNLESS_CTCIF5_HIGH(base) \
     if (! READ_CTCIF5(base) )


#define WAIT_CTCIF5_LOW(base) \
    while ( READ_CTCIF5(base) );


#define WAIT_CTCIF5_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF5(base) && (--timeout > 0) );


#define WAIT_CTCIF5_HIGH(base) \
    while (! READ_CTCIF5(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF6_MASK 0x10000U
#define CFEIF6_OFFSET 16
#define CFEIF6_START_BIT 16
#define CFEIF6_WIDTH 1



typedef enum cfeif6 {
    CFEIF_6_0,
    CFEIF_6_1
} CFEIF_6_T ;
#define WRITE_CFEIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CFEIF6_MASK) | ((val << CFEIF6_START_BIT) & CFEIF6_MASK )); \
   } 

#define ENABLE_CFEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CFEIF6_MASK ); \
   } 

#define DISABLE_CFEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CFEIF6_MASK ); \
   } 

#define READ_CFEIF6(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CFEIF6_MASK) >> CFEIF6_START_BIT )

#define WHEN_CFEIF6_HIGH(base) \
     if ( READ_CFEIF6(base) )


#define UNLESS_CFEIF6_HIGH(base) \
     if (! READ_CFEIF6(base) )


#define WAIT_CFEIF6_LOW(base) \
    while ( READ_CFEIF6(base) );


#define WAIT_CFEIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF6(base) && (--timeout > 0) );


#define WAIT_CFEIF6_HIGH(base) \
    while (! READ_CFEIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF6_MASK 0x40000U
#define CDMEIF6_OFFSET 18
#define CDMEIF6_START_BIT 18
#define CDMEIF6_WIDTH 1



typedef enum cdmeif6 {
    CDMEIF_6_0,
    CDMEIF_6_1
} CDMEIF_6_T ;
#define WRITE_CDMEIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CDMEIF6_MASK) | ((val << CDMEIF6_START_BIT) & CDMEIF6_MASK )); \
   } 

#define ENABLE_CDMEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CDMEIF6_MASK ); \
   } 

#define DISABLE_CDMEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CDMEIF6_MASK ); \
   } 

#define READ_CDMEIF6(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CDMEIF6_MASK) >> CDMEIF6_START_BIT )

#define WHEN_CDMEIF6_HIGH(base) \
     if ( READ_CDMEIF6(base) )


#define UNLESS_CDMEIF6_HIGH(base) \
     if (! READ_CDMEIF6(base) )


#define WAIT_CDMEIF6_LOW(base) \
    while ( READ_CDMEIF6(base) );


#define WAIT_CDMEIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF6(base) && (--timeout > 0) );


#define WAIT_CDMEIF6_HIGH(base) \
    while (! READ_CDMEIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF6_MASK 0x80000U
#define CTEIF6_OFFSET 19
#define CTEIF6_START_BIT 19
#define CTEIF6_WIDTH 1



typedef enum cteif6 {
    CTEIF_6_0,
    CTEIF_6_1
} CTEIF_6_T ;
#define WRITE_CTEIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTEIF6_MASK) | ((val << CTEIF6_START_BIT) & CTEIF6_MASK )); \
   } 

#define ENABLE_CTEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTEIF6_MASK ); \
   } 

#define DISABLE_CTEIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTEIF6_MASK ); \
   } 

#define READ_CTEIF6(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTEIF6_MASK) >> CTEIF6_START_BIT )

#define WHEN_CTEIF6_HIGH(base) \
     if ( READ_CTEIF6(base) )


#define UNLESS_CTEIF6_HIGH(base) \
     if (! READ_CTEIF6(base) )


#define WAIT_CTEIF6_LOW(base) \
    while ( READ_CTEIF6(base) );


#define WAIT_CTEIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF6(base) && (--timeout > 0) );


#define WAIT_CTEIF6_HIGH(base) \
    while (! READ_CTEIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF6_MASK 0x100000U
#define CHTIF6_OFFSET 20
#define CHTIF6_START_BIT 20
#define CHTIF6_WIDTH 1



typedef enum chtif6 {
    CHTIF_6_0,
    CHTIF_6_1
} CHTIF_6_T ;
#define WRITE_CHTIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CHTIF6_MASK) | ((val << CHTIF6_START_BIT) & CHTIF6_MASK )); \
   } 

#define ENABLE_CHTIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CHTIF6_MASK ); \
   } 

#define DISABLE_CHTIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CHTIF6_MASK ); \
   } 

#define READ_CHTIF6(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CHTIF6_MASK) >> CHTIF6_START_BIT )

#define WHEN_CHTIF6_HIGH(base) \
     if ( READ_CHTIF6(base) )


#define UNLESS_CHTIF6_HIGH(base) \
     if (! READ_CHTIF6(base) )


#define WAIT_CHTIF6_LOW(base) \
    while ( READ_CHTIF6(base) );


#define WAIT_CHTIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF6(base) && (--timeout > 0) );


#define WAIT_CHTIF6_HIGH(base) \
    while (! READ_CHTIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF6_MASK 0x200000U
#define CTCIF6_OFFSET 21
#define CTCIF6_START_BIT 21
#define CTCIF6_WIDTH 1



typedef enum ctcif6 {
    CTCIF_6_0,
    CTCIF_6_1
} CTCIF_6_T ;
#define WRITE_CTCIF6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTCIF6_MASK) | ((val << CTCIF6_START_BIT) & CTCIF6_MASK )); \
   } 

#define ENABLE_CTCIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTCIF6_MASK ); \
   } 

#define DISABLE_CTCIF6(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTCIF6_MASK ); \
   } 

#define READ_CTCIF6(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTCIF6_MASK) >> CTCIF6_START_BIT )

#define WHEN_CTCIF6_HIGH(base) \
     if ( READ_CTCIF6(base) )


#define UNLESS_CTCIF6_HIGH(base) \
     if (! READ_CTCIF6(base) )


#define WAIT_CTCIF6_LOW(base) \
    while ( READ_CTCIF6(base) );


#define WAIT_CTCIF6_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF6(base) && (--timeout > 0) );


#define WAIT_CTCIF6_HIGH(base) \
    while (! READ_CTCIF6(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF7_MASK 0x400000U
#define CFEIF7_OFFSET 22
#define CFEIF7_START_BIT 22
#define CFEIF7_WIDTH 1



typedef enum cfeif7 {
    CFEIF_7_0,
    CFEIF_7_1
} CFEIF_7_T ;
#define WRITE_CFEIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CFEIF7_MASK) | ((val << CFEIF7_START_BIT) & CFEIF7_MASK )); \
   } 

#define ENABLE_CFEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CFEIF7_MASK ); \
   } 

#define DISABLE_CFEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CFEIF7_MASK ); \
   } 

#define READ_CFEIF7(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CFEIF7_MASK) >> CFEIF7_START_BIT )

#define WHEN_CFEIF7_HIGH(base) \
     if ( READ_CFEIF7(base) )


#define UNLESS_CFEIF7_HIGH(base) \
     if (! READ_CFEIF7(base) )


#define WAIT_CFEIF7_LOW(base) \
    while ( READ_CFEIF7(base) );


#define WAIT_CFEIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CFEIF7(base) && (--timeout > 0) );


#define WAIT_CFEIF7_HIGH(base) \
    while (! READ_CFEIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF7_MASK 0x1000000U
#define CDMEIF7_OFFSET 24
#define CDMEIF7_START_BIT 24
#define CDMEIF7_WIDTH 1



typedef enum cdmeif7 {
    CDMEIF_7_0,
    CDMEIF_7_1
} CDMEIF_7_T ;
#define WRITE_CDMEIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CDMEIF7_MASK) | ((val << CDMEIF7_START_BIT) & CDMEIF7_MASK )); \
   } 

#define ENABLE_CDMEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CDMEIF7_MASK ); \
   } 

#define DISABLE_CDMEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CDMEIF7_MASK ); \
   } 

#define READ_CDMEIF7(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CDMEIF7_MASK) >> CDMEIF7_START_BIT )

#define WHEN_CDMEIF7_HIGH(base) \
     if ( READ_CDMEIF7(base) )


#define UNLESS_CDMEIF7_HIGH(base) \
     if (! READ_CDMEIF7(base) )


#define WAIT_CDMEIF7_LOW(base) \
    while ( READ_CDMEIF7(base) );


#define WAIT_CDMEIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CDMEIF7(base) && (--timeout > 0) );


#define WAIT_CDMEIF7_HIGH(base) \
    while (! READ_CDMEIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF7_MASK 0x2000000U
#define CTEIF7_OFFSET 25
#define CTEIF7_START_BIT 25
#define CTEIF7_WIDTH 1



typedef enum cteif7 {
    CTEIF_7_0,
    CTEIF_7_1
} CTEIF_7_T ;
#define WRITE_CTEIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTEIF7_MASK) | ((val << CTEIF7_START_BIT) & CTEIF7_MASK )); \
   } 

#define ENABLE_CTEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTEIF7_MASK ); \
   } 

#define DISABLE_CTEIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTEIF7_MASK ); \
   } 

#define READ_CTEIF7(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTEIF7_MASK) >> CTEIF7_START_BIT )

#define WHEN_CTEIF7_HIGH(base) \
     if ( READ_CTEIF7(base) )


#define UNLESS_CTEIF7_HIGH(base) \
     if (! READ_CTEIF7(base) )


#define WAIT_CTEIF7_LOW(base) \
    while ( READ_CTEIF7(base) );


#define WAIT_CTEIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTEIF7(base) && (--timeout > 0) );


#define WAIT_CTEIF7_HIGH(base) \
    while (! READ_CTEIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF7_MASK 0x4000000U
#define CHTIF7_OFFSET 26
#define CHTIF7_START_BIT 26
#define CHTIF7_WIDTH 1



typedef enum chtif7 {
    CHTIF_7_0,
    CHTIF_7_1
} CHTIF_7_T ;
#define WRITE_CHTIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CHTIF7_MASK) | ((val << CHTIF7_START_BIT) & CHTIF7_MASK )); \
   } 

#define ENABLE_CHTIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CHTIF7_MASK ); \
   } 

#define DISABLE_CHTIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CHTIF7_MASK ); \
   } 

#define READ_CHTIF7(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CHTIF7_MASK) >> CHTIF7_START_BIT )

#define WHEN_CHTIF7_HIGH(base) \
     if ( READ_CHTIF7(base) )


#define UNLESS_CHTIF7_HIGH(base) \
     if (! READ_CHTIF7(base) )


#define WAIT_CHTIF7_LOW(base) \
    while ( READ_CHTIF7(base) );


#define WAIT_CHTIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHTIF7(base) && (--timeout > 0) );


#define WAIT_CHTIF7_HIGH(base) \
    while (! READ_CHTIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0xC, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF7_MASK 0x8000000U
#define CTCIF7_OFFSET 27
#define CTCIF7_START_BIT 27
#define CTCIF7_WIDTH 1



typedef enum ctcif7 {
    CTCIF_7_0,
    CTCIF_7_1
} CTCIF_7_T ;
#define WRITE_CTCIF7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CTCIF7_MASK) | ((val << CTCIF7_START_BIT) & CTCIF7_MASK )); \
   } 

#define ENABLE_CTCIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CTCIF7_MASK ); \
   } 

#define DISABLE_CTCIF7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CTCIF7_MASK ); \
   } 

#define READ_CTCIF7(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CTCIF7_MASK) >> CTCIF7_START_BIT )

#define WHEN_CTCIF7_HIGH(base) \
     if ( READ_CTCIF7(base) )


#define UNLESS_CTCIF7_HIGH(base) \
     if (! READ_CTCIF7(base) )


#define WAIT_CTCIF7_LOW(base) \
    while ( READ_CTCIF7(base) );


#define WAIT_CTCIF7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTCIF7(base) && (--timeout > 0) );


#define WAIT_CTCIF7_HIGH(base) \
    while (! READ_CTCIF7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S0CR
//
// Notes : Register S0cr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_S_0CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_S_0CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_S_0CR( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_0CR_REG 0x10

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



typedef enum dmeie {
    DMEIE_0,
    DMEIE_1
} DMEIE_T ;
#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



typedef enum teie {
    TEIE_0,
    TEIE_1
} TEIE_T ;
#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



typedef enum htie {
    HTIE_0,
    HTIE_1
} HTIE_T ;
#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



typedef enum pfctrl {
    PFCTRL_0,
    PFCTRL_1
} PFCTRL_T ;
#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



typedef enum dir {
    DIR_0,
    DIR_1
} DIR_T ;
#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



typedef enum circ {
    CIRC_0,
    CIRC_1
} CIRC_T ;
#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



typedef enum pinc {
    PINC_0,
    PINC_1
} PINC_T ;
#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



typedef enum minc {
    MINC_0,
    MINC_1
} MINC_T ;
#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



typedef enum psize {
    PSIZE_0,
    PSIZE_1
} PSIZE_T ;
#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



typedef enum msize {
    MSIZE_0,
    MSIZE_1
} MSIZE_T ;
#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



typedef enum pincos {
    PINCOS_0,
    PINCOS_1
} PINCOS_T ;
#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



typedef enum dbm {
    DBM_0,
    DBM_1
} DBM_T ;
#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



typedef enum ct {
    CT_0,
    CT_1
} CT_T ;
#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



typedef enum pburst {
    PBURST_0,
    PBURST_1
} PBURST_T ;
#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



typedef enum mburst {
    MBURST_0,
    MBURST_1
} MBURST_T ;
#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x10, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



typedef enum chsel {
    CHSEL_0,
    CHSEL_1
} CHSEL_T ;
#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0ndtr
//
// Return the value of register S0NDTR
//
// Notes : Register S0ndtr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x14, val)

#define SET_BITS_S_0NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  mask ); \
   } 

#define CLEAR_BITS_S_0NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14,  val & ~mask ); \
   } 

#define READ_REGISTER_S_0NDTR( base ) \
     READ_REGISTER_ULONG( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0ndtr
//
// Return the value of register S_0NDTR
//
// Notes : Register stream x number of data register (S0NDTR) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_0NDTR_REG 0x14

typedef enum ndt {
    NDT_0,
    NDT_1
} NDT_T ;
#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0par
//
// Return the value of register S0PAR
//
// Notes : Register S0par at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x18, val)

#define SET_BITS_S_0PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  mask ); \
   } 

#define CLEAR_BITS_S_0PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18,  val & ~mask ); \
   } 

#define READ_REGISTER_S_0PAR( base ) \
     READ_REGISTER_ULONG( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0par
//
// Return the value of register S_0PAR
//
// Notes : Register stream x peripheral address register (S0PAR) at the offset 0x18, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_0PAR_REG 0x18

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m0ar
//
// Return the value of register S0M0AR
//
// Notes : Register S0m0ar at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

#define SET_BITS_S_0M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_S_0M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_S_0M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m0ar
//
// Return the value of register S_0M_0AR
//
// Notes : Register stream x memory 0 address register (S0M0AR) at the offset 0x1C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_0M_0AR_REG 0x1C

typedef enum m0a {
    M_0A_0,
    M_0A_1
} M_0A_T ;
#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m1ar
//
// Return the value of register S0M1AR
//
// Notes : Register S0m1ar at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x20, val)

#define SET_BITS_S_0M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  mask ); \
   } 

#define CLEAR_BITS_S_0M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20,  val & ~mask ); \
   } 

#define READ_REGISTER_S_0M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m1ar
//
// Return the value of register S_0M_1AR
//
// Notes : Register stream x memory 1 address register (S0M1AR) at the offset 0x20, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_0M_1AR_REG 0x20

typedef enum m1a {
    M_1A_0,
    M_1A_1
} M_1A_T ;
#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S0FCR
//
// Notes : Register S0fcr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x24, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_0FCR_REG 0x24

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x24, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



typedef enum dmdis {
    DMDIS_0,
    DMDIS_1
} DMDIS_T ;
#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x24, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



typedef enum fs {
    FS_0,
    FS_1
} FS_T ;
#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x24, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



typedef enum feie {
    FEIE_0,
    FEIE_1
} FEIE_T ;
#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S1CR
//
// Notes : Register S1cr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x28, val)

#define SET_BITS_S_1CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_S_1CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_S_1CR( base ) \
     READ_REGISTER_ULONG( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_1CR_REG 0x28

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x28, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1ndtr
//
// Return the value of register S1NDTR
//
// Notes : Register S1ndtr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x2C, val)

#define SET_BITS_S_1NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  mask ); \
   } 

#define CLEAR_BITS_S_1NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C,  val & ~mask ); \
   } 

#define READ_REGISTER_S_1NDTR( base ) \
     READ_REGISTER_ULONG( base + 0x2C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1ndtr
//
// Return the value of register S_1NDTR
//
// Notes : Register stream x number of data register (S1NDTR) at the offset 0x2C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_1NDTR_REG 0x2C

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1par
//
// Return the value of register S1PAR
//
// Notes : Register S1par at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x30, val)

#define SET_BITS_S_1PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, val |  mask ); \
   } 

#define CLEAR_BITS_S_1PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30,  val & ~mask ); \
   } 

#define READ_REGISTER_S_1PAR( base ) \
     READ_REGISTER_ULONG( base + 0x30) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1par
//
// Return the value of register S_1PAR
//
// Notes : Register stream x peripheral address register (S1PAR) at the offset 0x30, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_1PAR_REG 0x30

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m0ar
//
// Return the value of register S1M0AR
//
// Notes : Register S1m0ar at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x34, val)

#define SET_BITS_S_1M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  mask ); \
   } 

#define CLEAR_BITS_S_1M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34,  val & ~mask ); \
   } 

#define READ_REGISTER_S_1M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0x34) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m0ar
//
// Return the value of register S_1M_0AR
//
// Notes : Register stream x memory 0 address register (S1M0AR) at the offset 0x34, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_1M_0AR_REG 0x34

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m1ar
//
// Return the value of register S1M1AR
//
// Notes : Register S1m1ar at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x38, val)

#define SET_BITS_S_1M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  mask ); \
   } 

#define CLEAR_BITS_S_1M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38,  val & ~mask ); \
   } 

#define READ_REGISTER_S_1M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0x38) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m1ar
//
// Return the value of register S_1M_1AR
//
// Notes : Register stream x memory 1 address register (S1M1AR) at the offset 0x38, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_1M_1AR_REG 0x38

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S1FCR
//
// Notes : Register S1fcr at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x3C, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_1FCR_REG 0x3C

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x3C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x3C, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x3C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S2CR
//
// Notes : Register S2cr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x40, val)

#define SET_BITS_S_2CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  mask ); \
   } 

#define CLEAR_BITS_S_2CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40,  val & ~mask ); \
   } 

#define READ_REGISTER_S_2CR( base ) \
     READ_REGISTER_ULONG( base + 0x40) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_2CR_REG 0x40

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x40 ); \
     WRITE_REGISTER_ULONG( base + 0x40, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2ndtr
//
// Return the value of register S2NDTR
//
// Notes : Register S2ndtr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x44, val)

#define SET_BITS_S_2NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x44); \
     WRITE_REGISTER_ULONG( base + 0x44, val |  mask ); \
   } 

#define CLEAR_BITS_S_2NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x44); \
     WRITE_REGISTER_ULONG( base + 0x44,  val & ~mask ); \
   } 

#define READ_REGISTER_S_2NDTR( base ) \
     READ_REGISTER_ULONG( base + 0x44) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2ndtr
//
// Return the value of register S_2NDTR
//
// Notes : Register stream x number of data register (S2NDTR) at the offset 0x44, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_2NDTR_REG 0x44

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0x44) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x44); \
     WRITE_REGISTER_ULONG( base + 0x44, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2par
//
// Return the value of register S2PAR
//
// Notes : Register S2par at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x48, val)

#define SET_BITS_S_2PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48, val |  mask ); \
   } 

#define CLEAR_BITS_S_2PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48,  val & ~mask ); \
   } 

#define READ_REGISTER_S_2PAR( base ) \
     READ_REGISTER_ULONG( base + 0x48) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2par
//
// Return the value of register S_2PAR
//
// Notes : Register stream x peripheral address register (S2PAR) at the offset 0x48, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_2PAR_REG 0x48

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0x48) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m0ar
//
// Return the value of register S2M0AR
//
// Notes : Register S2m0ar at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x4C, val)

#define SET_BITS_S_2M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C, val |  mask ); \
   } 

#define CLEAR_BITS_S_2M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C,  val & ~mask ); \
   } 

#define READ_REGISTER_S_2M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0x4C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m0ar
//
// Return the value of register S_2M_0AR
//
// Notes : Register stream x memory 0 address register (S2M0AR) at the offset 0x4C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_2M_0AR_REG 0x4C

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0x4C) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m1ar
//
// Return the value of register S2M1AR
//
// Notes : Register S2m1ar at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x50, val)

#define SET_BITS_S_2M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x50); \
     WRITE_REGISTER_ULONG( base + 0x50, val |  mask ); \
   } 

#define CLEAR_BITS_S_2M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x50); \
     WRITE_REGISTER_ULONG( base + 0x50,  val & ~mask ); \
   } 

#define READ_REGISTER_S_2M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0x50) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m1ar
//
// Return the value of register S_2M_1AR
//
// Notes : Register stream x memory 1 address register (S2M1AR) at the offset 0x50, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_2M_1AR_REG 0x50

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0x50) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x50); \
     WRITE_REGISTER_ULONG( base + 0x50, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S2FCR
//
// Notes : Register S2fcr at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x54, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_2FCR_REG 0x54

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x54) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x54); \
     WRITE_REGISTER_ULONG( base + 0x54, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x54, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x54); \
     WRITE_REGISTER_ULONG( base + 0x54, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x54); \
     WRITE_REGISTER_ULONG( base + 0x54, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x54 ); \
     WRITE_REGISTER_ULONG( base + 0x54, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x54) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x54, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0x54) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x54); \
     WRITE_REGISTER_ULONG( base + 0x54, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x54, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x54); \
     WRITE_REGISTER_ULONG( base + 0x54, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x54); \
     WRITE_REGISTER_ULONG( base + 0x54, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x54 ); \
     WRITE_REGISTER_ULONG( base + 0x54, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x54) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S3CR
//
// Notes : Register S3cr at offset 0x58
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x58, val)

#define SET_BITS_S_3CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  mask ); \
   } 

#define CLEAR_BITS_S_3CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58,  val & ~mask ); \
   } 

#define READ_REGISTER_S_3CR( base ) \
     READ_REGISTER_ULONG( base + 0x58) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_3CR_REG 0x58

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x58 ); \
     WRITE_REGISTER_ULONG( base + 0x58, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x58, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x58) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x58); \
     WRITE_REGISTER_ULONG( base + 0x58, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3ndtr
//
// Return the value of register S3NDTR
//
// Notes : Register S3ndtr at offset 0x5C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x5C, val)

#define SET_BITS_S_3NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x5C); \
     WRITE_REGISTER_ULONG( base + 0x5C, val |  mask ); \
   } 

#define CLEAR_BITS_S_3NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x5C); \
     WRITE_REGISTER_ULONG( base + 0x5C,  val & ~mask ); \
   } 

#define READ_REGISTER_S_3NDTR( base ) \
     READ_REGISTER_ULONG( base + 0x5C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3ndtr
//
// Return the value of register S_3NDTR
//
// Notes : Register stream x number of data register (S3NDTR) at the offset 0x5C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_3NDTR_REG 0x5C

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0x5C) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x5C); \
     WRITE_REGISTER_ULONG( base + 0x5C, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3par
//
// Return the value of register S3PAR
//
// Notes : Register S3par at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x60, val)

#define SET_BITS_S_3PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x60); \
     WRITE_REGISTER_ULONG( base + 0x60, val |  mask ); \
   } 

#define CLEAR_BITS_S_3PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x60); \
     WRITE_REGISTER_ULONG( base + 0x60,  val & ~mask ); \
   } 

#define READ_REGISTER_S_3PAR( base ) \
     READ_REGISTER_ULONG( base + 0x60) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3par
//
// Return the value of register S_3PAR
//
// Notes : Register stream x peripheral address register (S3PAR) at the offset 0x60, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_3PAR_REG 0x60

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0x60) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x60); \
     WRITE_REGISTER_ULONG( base + 0x60, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m0ar
//
// Return the value of register S3M0AR
//
// Notes : Register S3m0ar at offset 0x64
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x64, val)

#define SET_BITS_S_3M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x64); \
     WRITE_REGISTER_ULONG( base + 0x64, val |  mask ); \
   } 

#define CLEAR_BITS_S_3M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x64); \
     WRITE_REGISTER_ULONG( base + 0x64,  val & ~mask ); \
   } 

#define READ_REGISTER_S_3M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0x64) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m0ar
//
// Return the value of register S_3M_0AR
//
// Notes : Register stream x memory 0 address register (S3M0AR) at the offset 0x64, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_3M_0AR_REG 0x64

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0x64) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x64); \
     WRITE_REGISTER_ULONG( base + 0x64, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m1ar
//
// Return the value of register S3M1AR
//
// Notes : Register S3m1ar at offset 0x68
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x68, val)

#define SET_BITS_S_3M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x68); \
     WRITE_REGISTER_ULONG( base + 0x68, val |  mask ); \
   } 

#define CLEAR_BITS_S_3M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x68); \
     WRITE_REGISTER_ULONG( base + 0x68,  val & ~mask ); \
   } 

#define READ_REGISTER_S_3M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0x68) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m1ar
//
// Return the value of register S_3M_1AR
//
// Notes : Register stream x memory 1 address register (S3M1AR) at the offset 0x68, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_3M_1AR_REG 0x68

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0x68) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x68); \
     WRITE_REGISTER_ULONG( base + 0x68, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S3FCR
//
// Notes : Register S3fcr at offset 0x6C
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x6C, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_3FCR_REG 0x6C

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x6C) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x6C); \
     WRITE_REGISTER_ULONG( base + 0x6C, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x6C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x6C); \
     WRITE_REGISTER_ULONG( base + 0x6C, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x6C); \
     WRITE_REGISTER_ULONG( base + 0x6C, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x6C ); \
     WRITE_REGISTER_ULONG( base + 0x6C, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x6C) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x6C, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0x6C) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x6C); \
     WRITE_REGISTER_ULONG( base + 0x6C, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x6C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x6C); \
     WRITE_REGISTER_ULONG( base + 0x6C, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x6C); \
     WRITE_REGISTER_ULONG( base + 0x6C, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x6C ); \
     WRITE_REGISTER_ULONG( base + 0x6C, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x6C) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S4CR
//
// Notes : Register S4cr at offset 0x70
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x70, val)

#define SET_BITS_S_4CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  mask ); \
   } 

#define CLEAR_BITS_S_4CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70,  val & ~mask ); \
   } 

#define READ_REGISTER_S_4CR( base ) \
     READ_REGISTER_ULONG( base + 0x70) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_4CR_REG 0x70

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x70 ); \
     WRITE_REGISTER_ULONG( base + 0x70, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x70, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x70) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x70); \
     WRITE_REGISTER_ULONG( base + 0x70, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4ndtr
//
// Return the value of register S4NDTR
//
// Notes : Register S4ndtr at offset 0x74
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x74, val)

#define SET_BITS_S_4NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x74); \
     WRITE_REGISTER_ULONG( base + 0x74, val |  mask ); \
   } 

#define CLEAR_BITS_S_4NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x74); \
     WRITE_REGISTER_ULONG( base + 0x74,  val & ~mask ); \
   } 

#define READ_REGISTER_S_4NDTR( base ) \
     READ_REGISTER_ULONG( base + 0x74) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4ndtr
//
// Return the value of register S_4NDTR
//
// Notes : Register stream x number of data register (S4NDTR) at the offset 0x74, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_4NDTR_REG 0x74

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0x74) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x74); \
     WRITE_REGISTER_ULONG( base + 0x74, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4par
//
// Return the value of register S4PAR
//
// Notes : Register S4par at offset 0x78
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x78, val)

#define SET_BITS_S_4PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x78); \
     WRITE_REGISTER_ULONG( base + 0x78, val |  mask ); \
   } 

#define CLEAR_BITS_S_4PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x78); \
     WRITE_REGISTER_ULONG( base + 0x78,  val & ~mask ); \
   } 

#define READ_REGISTER_S_4PAR( base ) \
     READ_REGISTER_ULONG( base + 0x78) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4par
//
// Return the value of register S_4PAR
//
// Notes : Register stream x peripheral address register (S4PAR) at the offset 0x78, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_4PAR_REG 0x78

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0x78) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x78); \
     WRITE_REGISTER_ULONG( base + 0x78, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4m0ar
//
// Return the value of register S4M0AR
//
// Notes : Register S4m0ar at offset 0x7C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x7C, val)

#define SET_BITS_S_4M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x7C); \
     WRITE_REGISTER_ULONG( base + 0x7C, val |  mask ); \
   } 

#define CLEAR_BITS_S_4M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x7C); \
     WRITE_REGISTER_ULONG( base + 0x7C,  val & ~mask ); \
   } 

#define READ_REGISTER_S_4M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0x7C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4m0ar
//
// Return the value of register S_4M_0AR
//
// Notes : Register stream x memory 0 address register (S4M0AR) at the offset 0x7C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_4M_0AR_REG 0x7C

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0x7C) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x7C); \
     WRITE_REGISTER_ULONG( base + 0x7C, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4m1ar
//
// Return the value of register S4M1AR
//
// Notes : Register S4m1ar at offset 0x80
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x80, val)

#define SET_BITS_S_4M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x80); \
     WRITE_REGISTER_ULONG( base + 0x80, val |  mask ); \
   } 

#define CLEAR_BITS_S_4M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x80); \
     WRITE_REGISTER_ULONG( base + 0x80,  val & ~mask ); \
   } 

#define READ_REGISTER_S_4M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0x80) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4m1ar
//
// Return the value of register S_4M_1AR
//
// Notes : Register stream x memory 1 address register (S4M1AR) at the offset 0x80, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_4M_1AR_REG 0x80

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0x80) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x80); \
     WRITE_REGISTER_ULONG( base + 0x80, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S4FCR
//
// Notes : Register S4fcr at offset 0x84
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x84, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_4FCR_REG 0x84

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x84) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x84); \
     WRITE_REGISTER_ULONG( base + 0x84, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x84, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x84); \
     WRITE_REGISTER_ULONG( base + 0x84, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x84); \
     WRITE_REGISTER_ULONG( base + 0x84, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x84 ); \
     WRITE_REGISTER_ULONG( base + 0x84, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x84) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x84, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0x84) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x84); \
     WRITE_REGISTER_ULONG( base + 0x84, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x84, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x84); \
     WRITE_REGISTER_ULONG( base + 0x84, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x84); \
     WRITE_REGISTER_ULONG( base + 0x84, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x84 ); \
     WRITE_REGISTER_ULONG( base + 0x84, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x84) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S5CR
//
// Notes : Register S5cr at offset 0x88
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x88, val)

#define SET_BITS_S_5CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  mask ); \
   } 

#define CLEAR_BITS_S_5CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88,  val & ~mask ); \
   } 

#define READ_REGISTER_S_5CR( base ) \
     READ_REGISTER_ULONG( base + 0x88) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_5CR_REG 0x88

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x88 ); \
     WRITE_REGISTER_ULONG( base + 0x88, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x88, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x88) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x88); \
     WRITE_REGISTER_ULONG( base + 0x88, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5ndtr
//
// Return the value of register S5NDTR
//
// Notes : Register S5ndtr at offset 0x8C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8C, val)

#define SET_BITS_S_5NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8C); \
     WRITE_REGISTER_ULONG( base + 0x8C, val |  mask ); \
   } 

#define CLEAR_BITS_S_5NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8C); \
     WRITE_REGISTER_ULONG( base + 0x8C,  val & ~mask ); \
   } 

#define READ_REGISTER_S_5NDTR( base ) \
     READ_REGISTER_ULONG( base + 0x8C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5ndtr
//
// Return the value of register S_5NDTR
//
// Notes : Register stream x number of data register (S5NDTR) at the offset 0x8C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_5NDTR_REG 0x8C

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0x8C) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8C); \
     WRITE_REGISTER_ULONG( base + 0x8C, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5par
//
// Return the value of register S5PAR
//
// Notes : Register S5par at offset 0x90
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x90, val)

#define SET_BITS_S_5PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x90); \
     WRITE_REGISTER_ULONG( base + 0x90, val |  mask ); \
   } 

#define CLEAR_BITS_S_5PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x90); \
     WRITE_REGISTER_ULONG( base + 0x90,  val & ~mask ); \
   } 

#define READ_REGISTER_S_5PAR( base ) \
     READ_REGISTER_ULONG( base + 0x90) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5par
//
// Return the value of register S_5PAR
//
// Notes : Register stream x peripheral address register (S5PAR) at the offset 0x90, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_5PAR_REG 0x90

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0x90) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x90); \
     WRITE_REGISTER_ULONG( base + 0x90, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m0ar
//
// Return the value of register S5M0AR
//
// Notes : Register S5m0ar at offset 0x94
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x94, val)

#define SET_BITS_S_5M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x94); \
     WRITE_REGISTER_ULONG( base + 0x94, val |  mask ); \
   } 

#define CLEAR_BITS_S_5M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x94); \
     WRITE_REGISTER_ULONG( base + 0x94,  val & ~mask ); \
   } 

#define READ_REGISTER_S_5M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0x94) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m0ar
//
// Return the value of register S_5M_0AR
//
// Notes : Register stream x memory 0 address register (S5M0AR) at the offset 0x94, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_5M_0AR_REG 0x94

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0x94) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x94); \
     WRITE_REGISTER_ULONG( base + 0x94, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m1ar
//
// Return the value of register S5M1AR
//
// Notes : Register S5m1ar at offset 0x98
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x98, val)

#define SET_BITS_S_5M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x98); \
     WRITE_REGISTER_ULONG( base + 0x98, val |  mask ); \
   } 

#define CLEAR_BITS_S_5M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x98); \
     WRITE_REGISTER_ULONG( base + 0x98,  val & ~mask ); \
   } 

#define READ_REGISTER_S_5M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0x98) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m1ar
//
// Return the value of register S_5M_1AR
//
// Notes : Register stream x memory 1 address register (S5M1AR) at the offset 0x98, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_5M_1AR_REG 0x98

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0x98) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x98); \
     WRITE_REGISTER_ULONG( base + 0x98, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S5FCR
//
// Notes : Register S5fcr at offset 0x9C
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x9C, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_5FCR_REG 0x9C

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x9C) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x9C); \
     WRITE_REGISTER_ULONG( base + 0x9C, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x9C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x9C); \
     WRITE_REGISTER_ULONG( base + 0x9C, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x9C); \
     WRITE_REGISTER_ULONG( base + 0x9C, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x9C ); \
     WRITE_REGISTER_ULONG( base + 0x9C, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x9C) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x9C, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0x9C) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x9C); \
     WRITE_REGISTER_ULONG( base + 0x9C, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x9C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x9C); \
     WRITE_REGISTER_ULONG( base + 0x9C, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x9C); \
     WRITE_REGISTER_ULONG( base + 0x9C, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x9C ); \
     WRITE_REGISTER_ULONG( base + 0x9C, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x9C) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S6CR
//
// Notes : Register S6cr at offset 0xA0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xA0, val)

#define SET_BITS_S_6CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  mask ); \
   } 

#define CLEAR_BITS_S_6CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0,  val & ~mask ); \
   } 

#define READ_REGISTER_S_6CR( base ) \
     READ_REGISTER_ULONG( base + 0xA0) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_6CR_REG 0xA0

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xA0 ); \
     WRITE_REGISTER_ULONG( base + 0xA0, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0xA0, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0xA0) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA0); \
     WRITE_REGISTER_ULONG( base + 0xA0, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6ndtr
//
// Return the value of register S6NDTR
//
// Notes : Register S6ndtr at offset 0xA4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xA4, val)

#define SET_BITS_S_6NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA4); \
     WRITE_REGISTER_ULONG( base + 0xA4, val |  mask ); \
   } 

#define CLEAR_BITS_S_6NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA4); \
     WRITE_REGISTER_ULONG( base + 0xA4,  val & ~mask ); \
   } 

#define READ_REGISTER_S_6NDTR( base ) \
     READ_REGISTER_ULONG( base + 0xA4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6ndtr
//
// Return the value of register S_6NDTR
//
// Notes : Register stream x number of data register (S6NDTR) at the offset 0xA4, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_6NDTR_REG 0xA4

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0xA4) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA4); \
     WRITE_REGISTER_ULONG( base + 0xA4, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6par
//
// Return the value of register S6PAR
//
// Notes : Register S6par at offset 0xA8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xA8, val)

#define SET_BITS_S_6PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA8); \
     WRITE_REGISTER_ULONG( base + 0xA8, val |  mask ); \
   } 

#define CLEAR_BITS_S_6PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xA8); \
     WRITE_REGISTER_ULONG( base + 0xA8,  val & ~mask ); \
   } 

#define READ_REGISTER_S_6PAR( base ) \
     READ_REGISTER_ULONG( base + 0xA8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6par
//
// Return the value of register S_6PAR
//
// Notes : Register stream x peripheral address register (S6PAR) at the offset 0xA8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_6PAR_REG 0xA8

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0xA8) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xA8); \
     WRITE_REGISTER_ULONG( base + 0xA8, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m0ar
//
// Return the value of register S6M0AR
//
// Notes : Register S6m0ar at offset 0xAC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xAC, val)

#define SET_BITS_S_6M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xAC); \
     WRITE_REGISTER_ULONG( base + 0xAC, val |  mask ); \
   } 

#define CLEAR_BITS_S_6M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xAC); \
     WRITE_REGISTER_ULONG( base + 0xAC,  val & ~mask ); \
   } 

#define READ_REGISTER_S_6M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0xAC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m0ar
//
// Return the value of register S_6M_0AR
//
// Notes : Register stream x memory 0 address register (S6M0AR) at the offset 0xAC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_6M_0AR_REG 0xAC

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0xAC) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xAC); \
     WRITE_REGISTER_ULONG( base + 0xAC, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m1ar
//
// Return the value of register S6M1AR
//
// Notes : Register S6m1ar at offset 0xB0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xB0, val)

#define SET_BITS_S_6M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB0); \
     WRITE_REGISTER_ULONG( base + 0xB0, val |  mask ); \
   } 

#define CLEAR_BITS_S_6M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB0); \
     WRITE_REGISTER_ULONG( base + 0xB0,  val & ~mask ); \
   } 

#define READ_REGISTER_S_6M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0xB0) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m1ar
//
// Return the value of register S_6M_1AR
//
// Notes : Register stream x memory 1 address register (S6M1AR) at the offset 0xB0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_6M_1AR_REG 0xB0

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0xB0) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB0); \
     WRITE_REGISTER_ULONG( base + 0xB0, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S6FCR
//
// Notes : Register S6fcr at offset 0xB4
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0xB4, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_6FCR_REG 0xB4

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0xB4) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB4); \
     WRITE_REGISTER_ULONG( base + 0xB4, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0xB4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB4); \
     WRITE_REGISTER_ULONG( base + 0xB4, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB4); \
     WRITE_REGISTER_ULONG( base + 0xB4, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB4 ); \
     WRITE_REGISTER_ULONG( base + 0xB4, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0xB4) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0xB4, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0xB4) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB4); \
     WRITE_REGISTER_ULONG( base + 0xB4, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0xB4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB4); \
     WRITE_REGISTER_ULONG( base + 0xB4, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB4); \
     WRITE_REGISTER_ULONG( base + 0xB4, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB4 ); \
     WRITE_REGISTER_ULONG( base + 0xB4, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0xB4) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S7CR
//
// Notes : Register S7cr at offset 0xB8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7CR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xB8, val)

#define SET_BITS_S_7CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  mask ); \
   } 

#define CLEAR_BITS_S_7CR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8,  val & ~mask ); \
   } 

#define READ_REGISTER_S_7CR( base ) \
     READ_REGISTER_ULONG( base + 0xB8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_7CR_REG 0xB8

#define WRITE_EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  EN_MASK ); \
   } 

#define DISABLE_EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~EN_MASK ); \
   } 

#define READ_EN(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & EN_MASK) >> EN_START_BIT )

#define WHEN_EN_HIGH(base) \
     if ( READ_EN(base) )


#define UNLESS_EN_HIGH(base) \
     if (! READ_EN(base) )


#define WAIT_EN_LOW(base) \
    while ( READ_EN(base) );


#define WAIT_EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EN(base) && (--timeout > 0) );


#define WAIT_EN_HIGH(base) \
    while (! READ_EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  DMEIE_MASK ); \
   } 

#define DISABLE_DMEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & DMEIE_MASK) >> DMEIE_START_BIT )

#define WHEN_DMEIE_HIGH(base) \
     if ( READ_DMEIE(base) )


#define UNLESS_DMEIE_HIGH(base) \
     if (! READ_DMEIE(base) )


#define WAIT_DMEIE_LOW(base) \
    while ( READ_DMEIE(base) );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMEIE(base) && (--timeout > 0) );


#define WAIT_DMEIE_HIGH(base) \
    while (! READ_DMEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  TEIE_MASK ); \
   } 

#define DISABLE_TEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & TEIE_MASK) >> TEIE_START_BIT )

#define WHEN_TEIE_HIGH(base) \
     if ( READ_TEIE(base) )


#define UNLESS_TEIE_HIGH(base) \
     if (! READ_TEIE(base) )


#define WAIT_TEIE_LOW(base) \
    while ( READ_TEIE(base) );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEIE(base) && (--timeout > 0) );


#define WAIT_TEIE_HIGH(base) \
    while (! READ_TEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  HTIE_MASK ); \
   } 

#define DISABLE_HTIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & HTIE_MASK) >> HTIE_START_BIT )

#define WHEN_HTIE_HIGH(base) \
     if ( READ_HTIE(base) )


#define UNLESS_HTIE_HIGH(base) \
     if (! READ_HTIE(base) )


#define WAIT_HTIE_LOW(base) \
    while ( READ_HTIE(base) );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HTIE(base) && (--timeout > 0) );


#define WAIT_HTIE_HIGH(base) \
    while (! READ_HTIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  PFCTRL_MASK ); \
   } 

#define DISABLE_PFCTRL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & PFCTRL_MASK) >> PFCTRL_START_BIT )

#define WHEN_PFCTRL_HIGH(base) \
     if ( READ_PFCTRL(base) )


#define UNLESS_PFCTRL_HIGH(base) \
     if (! READ_PFCTRL(base) )


#define WAIT_PFCTRL_LOW(base) \
    while ( READ_PFCTRL(base) );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PFCTRL(base) && (--timeout > 0) );


#define WAIT_PFCTRL_HIGH(base) \
    while (! READ_PFCTRL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & DIR_MASK) >> DIR_START_BIT )

#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  CIRC_MASK ); \
   } 

#define DISABLE_CIRC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & CIRC_MASK) >> CIRC_START_BIT )

#define WHEN_CIRC_HIGH(base) \
     if ( READ_CIRC(base) )


#define UNLESS_CIRC_HIGH(base) \
     if (! READ_CIRC(base) )


#define WAIT_CIRC_LOW(base) \
    while ( READ_CIRC(base) );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CIRC(base) && (--timeout > 0) );


#define WAIT_CIRC_HIGH(base) \
    while (! READ_CIRC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  PINC_MASK ); \
   } 

#define DISABLE_PINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~PINC_MASK ); \
   } 

#define READ_PINC(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & PINC_MASK) >> PINC_START_BIT )

#define WHEN_PINC_HIGH(base) \
     if ( READ_PINC(base) )


#define UNLESS_PINC_HIGH(base) \
     if (! READ_PINC(base) )


#define WAIT_PINC_LOW(base) \
    while ( READ_PINC(base) );


#define WAIT_PINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINC(base) && (--timeout > 0) );


#define WAIT_PINC_HIGH(base) \
    while (! READ_PINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  MINC_MASK ); \
   } 

#define DISABLE_MINC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~MINC_MASK ); \
   } 

#define READ_MINC(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & MINC_MASK) >> MINC_START_BIT )

#define WHEN_MINC_HIGH(base) \
     if ( READ_MINC(base) )


#define UNLESS_MINC_HIGH(base) \
     if (! READ_MINC(base) )


#define WAIT_MINC_LOW(base) \
    while ( READ_MINC(base) );


#define WAIT_MINC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MINC(base) && (--timeout > 0) );


#define WAIT_MINC_HIGH(base) \
    while (! READ_MINC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & PSIZE_MASK) >> PSIZE_START_BIT )

#define WRITE_PSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & MSIZE_MASK) >> MSIZE_START_BIT )

#define WRITE_MSIZE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  PINCOS_MASK ); \
   } 

#define DISABLE_PINCOS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & PINCOS_MASK) >> PINCOS_START_BIT )

#define WHEN_PINCOS_HIGH(base) \
     if ( READ_PINCOS(base) )


#define UNLESS_PINCOS_HIGH(base) \
     if (! READ_PINCOS(base) )


#define WAIT_PINCOS_LOW(base) \
    while ( READ_PINCOS(base) );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PINCOS(base) && (--timeout > 0) );


#define WAIT_PINCOS_HIGH(base) \
    while (! READ_PINCOS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & PL_MASK) >> PL_START_BIT )

#define WRITE_PL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  DBM_MASK ); \
   } 

#define DISABLE_DBM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~DBM_MASK ); \
   } 

#define READ_DBM(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & DBM_MASK) >> DBM_START_BIT )

#define WHEN_DBM_HIGH(base) \
     if ( READ_DBM(base) )


#define UNLESS_DBM_HIGH(base) \
     if (! READ_DBM(base) )


#define WAIT_DBM_LOW(base) \
    while ( READ_DBM(base) );


#define WAIT_DBM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DBM(base) && (--timeout > 0) );


#define WAIT_DBM_HIGH(base) \
    while (! READ_DBM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  CT_MASK ); \
   } 

#define DISABLE_CT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~CT_MASK ); \
   } 

#define READ_CT(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & CT_MASK) >> CT_START_BIT )

#define WHEN_CT_HIGH(base) \
     if ( READ_CT(base) )


#define UNLESS_CT_HIGH(base) \
     if (! READ_CT(base) )


#define WAIT_CT_LOW(base) \
    while ( READ_CT(base) );


#define WAIT_CT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CT(base) && (--timeout > 0) );


#define WAIT_CT_HIGH(base) \
    while (! READ_CT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, val |  ACK_MASK ); \
   } 

#define DISABLE_ACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xB8 ); \
     WRITE_REGISTER_ULONG( base + 0xB8, val & ~ACK_MASK ); \
   } 

#define READ_ACK(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & ACK_MASK) >> ACK_START_BIT )

#define WHEN_ACK_HIGH(base) \
     if ( READ_ACK(base) )


#define UNLESS_ACK_HIGH(base) \
     if (! READ_ACK(base) )


#define WAIT_ACK_LOW(base) \
    while ( READ_ACK(base) );


#define WAIT_ACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ACK(base) && (--timeout > 0) );


#define WAIT_ACK_HIGH(base) \
    while (! READ_ACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & PBURST_MASK) >> PBURST_START_BIT )

#define WRITE_PBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & MBURST_MASK) >> MBURST_START_BIT )

#define WRITE_MBURST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0xB8, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL(base) \
    ((READ_REGISTER_ULONG(base + 0xB8) & CHSEL_MASK) >> CHSEL_START_BIT )

#define WRITE_CHSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xB8); \
     WRITE_REGISTER_ULONG( base + 0xB8, (OldValue & ~CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7ndtr
//
// Return the value of register S7NDTR
//
// Notes : Register S7ndtr at offset 0xBC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7NDTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xBC, val)

#define SET_BITS_S_7NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xBC); \
     WRITE_REGISTER_ULONG( base + 0xBC, val |  mask ); \
   } 

#define CLEAR_BITS_S_7NDTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xBC); \
     WRITE_REGISTER_ULONG( base + 0xBC,  val & ~mask ); \
   } 

#define READ_REGISTER_S_7NDTR( base ) \
     READ_REGISTER_ULONG( base + 0xBC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7ndtr
//
// Return the value of register S_7NDTR
//
// Notes : Register stream x number of data register (S7NDTR) at the offset 0xBC, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_7NDTR_REG 0xBC

#define READ_NDT(base) \
    ((READ_REGISTER_ULONG(base + 0xBC) & NDT_MASK) >> NDT_START_BIT )

#define WRITE_NDT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xBC); \
     WRITE_REGISTER_ULONG( base + 0xBC, (OldValue & ~NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7par
//
// Return the value of register S7PAR
//
// Notes : Register S7par at offset 0xC0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7PAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC0, val)

#define SET_BITS_S_7PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC0); \
     WRITE_REGISTER_ULONG( base + 0xC0, val |  mask ); \
   } 

#define CLEAR_BITS_S_7PAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC0); \
     WRITE_REGISTER_ULONG( base + 0xC0,  val & ~mask ); \
   } 

#define READ_REGISTER_S_7PAR( base ) \
     READ_REGISTER_ULONG( base + 0xC0) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7par
//
// Return the value of register S_7PAR
//
// Notes : Register stream x peripheral address register (S7PAR) at the offset 0xC0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_7PAR_REG 0xC0

#define READ_PA(base) \
    ((READ_REGISTER_ULONG(base + 0xC0) & PA_MASK) >> PA_START_BIT )

#define WRITE_PA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC0); \
     WRITE_REGISTER_ULONG( base + 0xC0, (OldValue & ~PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m0ar
//
// Return the value of register S7M0AR
//
// Notes : Register S7m0ar at offset 0xC4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7M_0AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC4, val)

#define SET_BITS_S_7M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC4); \
     WRITE_REGISTER_ULONG( base + 0xC4, val |  mask ); \
   } 

#define CLEAR_BITS_S_7M_0AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC4); \
     WRITE_REGISTER_ULONG( base + 0xC4,  val & ~mask ); \
   } 

#define READ_REGISTER_S_7M_0AR( base ) \
     READ_REGISTER_ULONG( base + 0xC4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m0ar
//
// Return the value of register S_7M_0AR
//
// Notes : Register stream x memory 0 address register (S7M0AR) at the offset 0xC4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_7M_0AR_REG 0xC4

#define READ_M0A(base) \
    ((READ_REGISTER_ULONG(base + 0xC4) & M0A_MASK) >> M0A_START_BIT )

#define WRITE_M0A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC4); \
     WRITE_REGISTER_ULONG( base + 0xC4, (OldValue & ~M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m1ar
//
// Return the value of register S7M1AR
//
// Notes : Register S7m1ar at offset 0xC8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7M_1AR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC8, val)

#define SET_BITS_S_7M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC8); \
     WRITE_REGISTER_ULONG( base + 0xC8, val |  mask ); \
   } 

#define CLEAR_BITS_S_7M_1AR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC8); \
     WRITE_REGISTER_ULONG( base + 0xC8,  val & ~mask ); \
   } 

#define READ_REGISTER_S_7M_1AR( base ) \
     READ_REGISTER_ULONG( base + 0xC8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m1ar
//
// Return the value of register S_7M_1AR
//
// Notes : Register stream x memory 1 address register (S7M1AR) at the offset 0xC8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_7M_1AR_REG 0xC8

#define READ_M1A(base) \
    ((READ_REGISTER_ULONG(base + 0xC8) & M1A_MASK) >> M1A_START_BIT )

#define WRITE_M1A(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC8); \
     WRITE_REGISTER_ULONG( base + 0xC8, (OldValue & ~M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S7FCR
//
// Notes : Register S7fcr at offset 0xCC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0xCC, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_7FCR_REG 0xCC

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0xCC) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xCC); \
     WRITE_REGISTER_ULONG( base + 0xCC, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0xCC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xCC); \
     WRITE_REGISTER_ULONG( base + 0xCC, (OldValue & ~DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xCC); \
     WRITE_REGISTER_ULONG( base + 0xCC, val |  DMDIS_MASK ); \
   } 

#define DISABLE_DMDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xCC ); \
     WRITE_REGISTER_ULONG( base + 0xCC, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS(base) \
    ((READ_REGISTER_ULONG(base + 0xCC) & DMDIS_MASK) >> DMDIS_START_BIT )

#define WHEN_DMDIS_HIGH(base) \
     if ( READ_DMDIS(base) )


#define UNLESS_DMDIS_HIGH(base) \
     if (! READ_DMDIS(base) )


#define WAIT_DMDIS_LOW(base) \
    while ( READ_DMDIS(base) );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMDIS(base) && (--timeout > 0) );


#define WAIT_DMDIS_HIGH(base) \
    while (! READ_DMDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0xCC, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS(base) \
    ((READ_REGISTER_ULONG(base + 0xCC) & FS_MASK) >> FS_START_BIT )

#define WRITE_FS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xCC); \
     WRITE_REGISTER_ULONG( base + 0xCC, (OldValue & ~FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0xCC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xCC); \
     WRITE_REGISTER_ULONG( base + 0xCC, (OldValue & ~FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xCC); \
     WRITE_REGISTER_ULONG( base + 0xCC, val |  FEIE_MASK ); \
   } 

#define DISABLE_FEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xCC ); \
     WRITE_REGISTER_ULONG( base + 0xCC, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE(base) \
    ((READ_REGISTER_ULONG(base + 0xCC) & FEIE_MASK) >> FEIE_START_BIT )

#define WHEN_FEIE_HIGH(base) \
     if ( READ_FEIE(base) )


#define UNLESS_FEIE_HIGH(base) \
     if (! READ_FEIE(base) )


#define WAIT_FEIE_LOW(base) \
    while ( READ_FEIE(base) );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FEIE(base) && (--timeout > 0) );


#define WAIT_FEIE_HIGH(base) \
    while (! READ_FEIE(base) );


