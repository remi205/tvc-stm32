/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/crc.h
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
 
#define CRC 0x40023000
/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_DR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_DR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_DR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : DR
//
// Return the value of register Dr
//
// Notes : Data Register 
//        (DR) at the offset 0x0, Bits 0:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_DR() \
   ((READ_REGISTER_ULONG(0x0) & DR_MASK)  >> DR_START_BIT)

#define WRITE_DR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DR_MASK) | ((val << DR_START_BIT) & DR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Idr
//
// Return the value of register IDR
//
// Notes : Register Idr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IDR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_IDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_IDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_IDR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Idr
//
// Return the value of register IDR
//
// Notes : Register Independent Data register (IDR) at the offset 0x4, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Independent Data register 
    // 
#define IDR_MASK 0xFFU
#define IDR_OFFSET 7
#define IDR_START_BIT 0
#define IDR_WIDTH 8


#define IDR_REG 0x4

typedef enum idr {
    IDR_0,
    IDR_1
} IDR_T ;
#define READ_IDR() \
   ((READ_REGISTER_ULONG(0x4) & IDR_MASK)  >> IDR_START_BIT)

#define WRITE_IDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ IDR_MASK) | ((val << IDR_START_BIT) & IDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : CR
//
// Return the value of register Cr
//
// Notes : Control regidter 
//        (CR) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CR_MASK) | ((val << CR_START_BIT) & CR_MASK )); \
   } 

#define ENABLE_CR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CR_MASK ); \
   }

#define DISABLE_CR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CR_MASK ); \
   } 

#define READ_CR() \
   ((READ_REGISTER_ULONG(0x8) & CR_MASK)  >> CR_START_BIT)

#define WHEN_CR_HIGH() \
     if ( READ_CR() )


#define UNLESS_CR_HIGH() \
     if (! READ_CR() )


#define WAIT_CR_LOW() \
    while ( READ_CR() );


#define WAIT_CR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CR() && (--___t___ > 0)); }


#define WAIT_CR_HIGH() \
    while (! READ_CR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Init
//
// Return the value of register INIT
//
// Notes : Register Init at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_INIT( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_INIT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_INIT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_INIT() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Init
//
// Return the value of register INIT
//
// Notes : Register Initial CRC value (INIT) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Programmable initial CRC value 
    // 
#define CRC_INIT_MASK 0xFFFFFFFFU
#define CRC_INIT_OFFSET 31
#define CRC_INIT_START_BIT 0
#define CRC_INIT_WIDTH 32


#define INIT_REG 0xC

typedef enum crc_init {
    CRC_INIT_0,
    CRC_INIT_1
} CRC_INIT_T ;
#define READ_CRC_INIT() \
   ((READ_REGISTER_ULONG(0xC) & CRC_INIT_MASK)  >> CRC_INIT_START_BIT)

#define WRITE_CRC_INIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CRC_INIT_MASK) | ((val << CRC_INIT_START_BIT) & CRC_INIT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pol
//
// Return the value of register POL
//
// Notes : Register Pol at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_POL( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_POL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_POL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_POL() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pol
//
// Return the value of register POL
//
// Notes : Register CRC polynomial (POL) at the offset 0x10, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Programmable polynomial 
    // 
#define POL_MASK 0xFFFFFFFFU
#define POL_OFFSET 31
#define POL_START_BIT 0
#define POL_WIDTH 32


#define POL_REG 0x10

typedef enum pol {
    POL_0,
    POL_1
} POL_T ;
#define READ_POL() \
   ((READ_REGISTER_ULONG(0x10) & POL_MASK)  >> POL_START_BIT)

#define WRITE_POL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ POL_MASK) | ((val << POL_START_BIT) & POL_MASK )); \
   } 

