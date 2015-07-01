/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/hash.h
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
 
#define HASH 0x50060400
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : ALGO1
//
// Return the value of register Cr
//
// Notes : ALGO 
//        (CR) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALGO1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ALGO1_MASK) | ((val << ALGO1_START_BIT) & ALGO1_MASK )); \
   } 

#define ENABLE_ALGO1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ALGO1_MASK ); \
   }

#define DISABLE_ALGO1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ALGO1_MASK ); \
   } 

#define READ_ALGO1() \
   ((READ_REGISTER_ULONG(0x0) & ALGO1_MASK)  >> ALGO1_START_BIT)

#define WHEN_ALGO1_HIGH() \
     if ( READ_ALGO1() )


#define UNLESS_ALGO1_HIGH() \
     if (! READ_ALGO1() )


#define WAIT_ALGO1_LOW() \
    while ( READ_ALGO1() );


#define WAIT_ALGO1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALGO1() && (--___t___ > 0)); }


#define WAIT_ALGO1_HIGH() \
    while (! READ_ALGO1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LKEY
//
// Return the value of register Cr
//
// Notes : Long key selection 
//        (CR) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LKEY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ LKEY_MASK) | ((val << LKEY_START_BIT) & LKEY_MASK )); \
   } 

#define ENABLE_LKEY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  LKEY_MASK ); \
   }

#define DISABLE_LKEY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~LKEY_MASK ); \
   } 

#define READ_LKEY() \
   ((READ_REGISTER_ULONG(0x0) & LKEY_MASK)  >> LKEY_START_BIT)

#define WHEN_LKEY_HIGH() \
     if ( READ_LKEY() )


#define UNLESS_LKEY_HIGH() \
     if (! READ_LKEY() )


#define WAIT_LKEY_LOW() \
    while ( READ_LKEY() );


#define WAIT_LKEY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LKEY() && (--___t___ > 0)); }


#define WAIT_LKEY_HIGH() \
    while (! READ_LKEY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MDMAT
//
// Return the value of register Cr
//
// Notes : Multiple DMA Transfers 
//        (CR) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MDMAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MDMAT_MASK) | ((val << MDMAT_START_BIT) & MDMAT_MASK )); \
   } 

#define ENABLE_MDMAT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MDMAT_MASK ); \
   }

#define DISABLE_MDMAT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MDMAT_MASK ); \
   } 

#define READ_MDMAT() \
   ((READ_REGISTER_ULONG(0x0) & MDMAT_MASK)  >> MDMAT_START_BIT)

#define WHEN_MDMAT_HIGH() \
     if ( READ_MDMAT() )


#define UNLESS_MDMAT_HIGH() \
     if (! READ_MDMAT() )


#define WAIT_MDMAT_LOW() \
    while ( READ_MDMAT() );


#define WAIT_MDMAT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MDMAT() && (--___t___ > 0)); }


#define WAIT_MDMAT_HIGH() \
    while (! READ_MDMAT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DINNE
//
// Return the value of register Cr
//
// Notes : DIN not empty 
//        (CR) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DINNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DINNE_MASK) | ((val << DINNE_START_BIT) & DINNE_MASK )); \
   } 

#define ENABLE_DINNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DINNE_MASK ); \
   }

#define DISABLE_DINNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DINNE_MASK ); \
   } 

#define READ_DINNE() \
   ((READ_REGISTER_ULONG(0x0) & DINNE_MASK)  >> DINNE_START_BIT)

#define WHEN_DINNE_HIGH() \
     if ( READ_DINNE() )


#define UNLESS_DINNE_HIGH() \
     if (! READ_DINNE() )


#define WAIT_DINNE_LOW() \
    while ( READ_DINNE() );


#define WAIT_DINNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DINNE() && (--___t___ > 0)); }


#define WAIT_DINNE_HIGH() \
    while (! READ_DINNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : NBW
//
// Return the value of register Cr
//
// Notes : Number of words already pushed 
//        (CR) at the offset 0x0, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_NBW() \
   ((READ_REGISTER_ULONG(0x0) & NBW_MASK)  >> NBW_START_BIT)

#define WRITE_NBW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ NBW_MASK) | ((val << NBW_START_BIT) & NBW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ALGO0
//
// Return the value of register Cr
//
// Notes : Algorithm selection 
//        (CR) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALGO0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ALGO0_MASK) | ((val << ALGO0_START_BIT) & ALGO0_MASK )); \
   } 

#define ENABLE_ALGO0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ALGO0_MASK ); \
   }

#define DISABLE_ALGO0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ALGO0_MASK ); \
   } 

#define READ_ALGO0() \
   ((READ_REGISTER_ULONG(0x0) & ALGO0_MASK)  >> ALGO0_START_BIT)

#define WHEN_ALGO0_HIGH() \
     if ( READ_ALGO0() )


#define UNLESS_ALGO0_HIGH() \
     if (! READ_ALGO0() )


#define WAIT_ALGO0_LOW() \
    while ( READ_ALGO0() );


#define WAIT_ALGO0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALGO0() && (--___t___ > 0)); }


#define WAIT_ALGO0_HIGH() \
    while (! READ_ALGO0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MODE
//
// Return the value of register Cr
//
// Notes : Mode selection 
//        (CR) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODE_MASK) | ((val << MODE_START_BIT) & MODE_MASK )); \
   } 

#define ENABLE_MODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MODE_MASK ); \
   }

#define DISABLE_MODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MODE_MASK ); \
   } 

#define READ_MODE() \
   ((READ_REGISTER_ULONG(0x0) & MODE_MASK)  >> MODE_START_BIT)

#define WHEN_MODE_HIGH() \
     if ( READ_MODE() )


#define UNLESS_MODE_HIGH() \
     if (! READ_MODE() )


#define WAIT_MODE_LOW() \
    while ( READ_MODE() );


#define WAIT_MODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MODE() && (--___t___ > 0)); }


#define WAIT_MODE_HIGH() \
    while (! READ_MODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DATATYPE
//
// Return the value of register Cr
//
// Notes : Data type selection 
//        (CR) at the offset 0x0, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_DATATYPE() \
   ((READ_REGISTER_ULONG(0x0) & DATATYPE_MASK)  >> DATATYPE_START_BIT)

#define WRITE_DATATYPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DATATYPE_MASK) | ((val << DATATYPE_START_BIT) & DATATYPE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DMAE
//
// Return the value of register Cr
//
// Notes : DMA enable 
//        (CR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DMAE_MASK) | ((val << DMAE_START_BIT) & DMAE_MASK )); \
   } 

#define ENABLE_DMAE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DMAE_MASK ); \
   }

#define DISABLE_DMAE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DMAE_MASK ); \
   } 

#define READ_DMAE() \
   ((READ_REGISTER_ULONG(0x0) & DMAE_MASK)  >> DMAE_START_BIT)

#define WHEN_DMAE_HIGH() \
     if ( READ_DMAE() )


#define UNLESS_DMAE_HIGH() \
     if (! READ_DMAE() )


#define WAIT_DMAE_LOW() \
    while ( READ_DMAE() );


#define WAIT_DMAE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAE() && (--___t___ > 0)); }


#define WAIT_DMAE_HIGH() \
    while (! READ_DMAE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : INIT
//
// Return the value of register Cr
//
// Notes : Initialize message digest calculation 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_INIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ INIT_MASK) | ((val << INIT_START_BIT) & INIT_MASK )); \
   } 

#define ENABLE_INIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  INIT_MASK ); \
   }

#define DISABLE_INIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~INIT_MASK ); \
   } 

#define READ_INIT() \
   ((READ_REGISTER_ULONG(0x0) & INIT_MASK)  >> INIT_START_BIT)

#define WHEN_INIT_HIGH() \
     if ( READ_INIT() )


#define UNLESS_INIT_HIGH() \
     if (! READ_INIT() )


#define WAIT_INIT_LOW() \
    while ( READ_INIT() );


#define WAIT_INIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INIT() && (--___t___ > 0)); }


#define WAIT_INIT_HIGH() \
    while (! READ_INIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Din
//
// Return the value of register DIN
//
// Notes : Register Din at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DIN( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_DIN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_DIN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_DIN() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : DATAIN
//
// Return the value of register Din
//
// Notes : Data input 
//        (DIN) at the offset 0x4, Bits 0:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_DATAIN() \
   ((READ_REGISTER_ULONG(0x4) & DATAIN_MASK)  >> DATAIN_START_BIT)

#define WRITE_DATAIN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DATAIN_MASK) | ((val << DATAIN_START_BIT) & DATAIN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Str
//
// Return the value of register STR
//
// Notes : Register Str at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Str
//
// Return the value of register STR
//
// Notes : Register start register (STR) at the offset 0x8, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of valid bits in the last word of the message 
    // 
#define NBLW_MASK 0x1FU
#define NBLW_OFFSET 4
#define NBLW_START_BIT 0
#define NBLW_WIDTH 5


#define STR_REG 0x8

typedef enum nblw {
    NBLW_0,
    NBLW_1
} NBLW_T ;
#define READ_NBLW() \
   ((READ_REGISTER_ULONG(0x8) & NBLW_MASK)  >> NBLW_START_BIT)

#define WRITE_NBLW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ NBLW_MASK) | ((val << NBLW_START_BIT) & NBLW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Str
//
// Return the value of register STR
//
// Notes : Register start register (STR) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Digest calculation 
    // 
#define DCAL_MASK 0x100U
#define DCAL_OFFSET 8
#define DCAL_START_BIT 8
#define DCAL_WIDTH 1



typedef enum dcal {
    DCAL_0,
    DCAL_1
} DCAL_T ;
#define WRITE_DCAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DCAL_MASK) | ((val << DCAL_START_BIT) & DCAL_MASK )); \
   } 

#define ENABLE_DCAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DCAL_MASK ); \
   }

#define DISABLE_DCAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DCAL_MASK ); \
   } 

#define READ_DCAL() \
   ((READ_REGISTER_ULONG(0x8) & DCAL_MASK)  >> DCAL_START_BIT)

#define WHEN_DCAL_HIGH() \
     if ( READ_DCAL() )


#define UNLESS_DCAL_HIGH() \
     if (! READ_DCAL() )


#define WAIT_DCAL_LOW() \
    while ( READ_DCAL() );


#define WAIT_DCAL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCAL() && (--___t___ > 0)); }


#define WAIT_DCAL_HIGH() \
    while (! READ_DCAL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hr0
//
// Return the value of register HR0
//
// Notes : Register Hr0 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HR_0() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr0
//
// Return the value of register HR_0
//
// Notes : Register digest registers (HR0) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H0 
    // 
#define H0_MASK 0xFFFFFFFFU
#define H0_OFFSET 31
#define H0_START_BIT 0
#define H0_WIDTH 32


#define HR_0_REG 0xC

typedef enum h0 {
    H_0_0,
    H_0_1
} H0_T ;
#define READ_H0() \
   ((READ_REGISTER_ULONG(0xC) & H0_MASK)  >> H0_START_BIT)

#define WRITE_H0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ H0_MASK) | ((val << H0_START_BIT) & H0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr1
//
// Return the value of register HR1
//
// Notes : Register Hr1 at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HR_1() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr1
//
// Return the value of register HR_1
//
// Notes : Register digest registers (HR1) at the offset 0x10, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H1 
    // 
#define H1_MASK 0xFFFFFFFFU
#define H1_OFFSET 31
#define H1_START_BIT 0
#define H1_WIDTH 32


#define HR_1_REG 0x10

typedef enum h1 {
    H_1_0,
    H_1_1
} H1_T ;
#define READ_H1() \
   ((READ_REGISTER_ULONG(0x10) & H1_MASK)  >> H1_START_BIT)

#define WRITE_H1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ H1_MASK) | ((val << H1_START_BIT) & H1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr2
//
// Return the value of register HR2
//
// Notes : Register Hr2 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HR_2() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr2
//
// Return the value of register HR_2
//
// Notes : Register digest registers (HR2) at the offset 0x14, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H2 
    // 
#define H2_MASK 0xFFFFFFFFU
#define H2_OFFSET 31
#define H2_START_BIT 0
#define H2_WIDTH 32


#define HR_2_REG 0x14

typedef enum h2 {
    H_2_0,
    H_2_1
} H2_T ;
#define READ_H2() \
   ((READ_REGISTER_ULONG(0x14) & H2_MASK)  >> H2_START_BIT)

#define WRITE_H2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ H2_MASK) | ((val << H2_START_BIT) & H2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr3
//
// Return the value of register HR3
//
// Notes : Register Hr3 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HR_3() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr3
//
// Return the value of register HR_3
//
// Notes : Register digest registers (HR3) at the offset 0x18, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H3 
    // 
#define H3_MASK 0xFFFFFFFFU
#define H3_OFFSET 31
#define H3_START_BIT 0
#define H3_WIDTH 32


#define HR_3_REG 0x18

typedef enum h3 {
    H_3_0,
    H_3_1
} H3_T ;
#define READ_H3() \
   ((READ_REGISTER_ULONG(0x18) & H3_MASK)  >> H3_START_BIT)

#define WRITE_H3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ H3_MASK) | ((val << H3_START_BIT) & H3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr4
//
// Return the value of register HR4
//
// Notes : Register Hr4 at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HR_4() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hr4
//
// Return the value of register HR_4
//
// Notes : Register digest registers (HR4) at the offset 0x1C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H4 
    // 
#define H4_MASK 0xFFFFFFFFU
#define H4_OFFSET 31
#define H4_START_BIT 0
#define H4_WIDTH 32


#define HR_4_REG 0x1C

typedef enum h4 {
    H_4_0,
    H_4_1
} H4_T ;
#define READ_H4() \
   ((READ_REGISTER_ULONG(0x1C) & H4_MASK)  >> H4_START_BIT)

#define WRITE_H4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ H4_MASK) | ((val << H4_START_BIT) & H4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Imr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IMR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_IMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_IMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_IMR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : DINIE
//
// Return the value of register Imr
//
// Notes : Data input interrupt enable 
//        (IMR) at the offset 0x20, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DINIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DINIE_MASK) | ((val << DINIE_START_BIT) & DINIE_MASK )); \
   } 

#define ENABLE_DINIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  DINIE_MASK ); \
   }

#define DISABLE_DINIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~DINIE_MASK ); \
   } 

#define READ_DINIE() \
   ((READ_REGISTER_ULONG(0x20) & DINIE_MASK)  >> DINIE_START_BIT)

#define WHEN_DINIE_HIGH() \
     if ( READ_DINIE() )


#define UNLESS_DINIE_HIGH() \
     if (! READ_DINIE() )


#define WAIT_DINIE_LOW() \
    while ( READ_DINIE() );


#define WAIT_DINIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DINIE() && (--___t___ > 0)); }


#define WAIT_DINIE_HIGH() \
    while (! READ_DINIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DCIE
//
// Return the value of register Imr
//
// Notes : Digest calculation completion interrupt enable 
//        (IMR) at the offset 0x20, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DCIE_MASK) | ((val << DCIE_START_BIT) & DCIE_MASK )); \
   } 

#define ENABLE_DCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  DCIE_MASK ); \
   }

#define DISABLE_DCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~DCIE_MASK ); \
   } 

#define READ_DCIE() \
   ((READ_REGISTER_ULONG(0x20) & DCIE_MASK)  >> DCIE_START_BIT)

#define WHEN_DCIE_HIGH() \
     if ( READ_DCIE() )


#define UNLESS_DCIE_HIGH() \
     if (! READ_DCIE() )


#define WAIT_DCIE_LOW() \
    while ( READ_DCIE() );


#define WAIT_DCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCIE() && (--___t___ > 0)); }


#define WAIT_DCIE_HIGH() \
    while (! READ_DCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : DINIS
//
// Return the value of register Sr
//
// Notes : Data input interrupt status 
//        (SR) at the offset 0x24, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DINIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ DINIS_MASK) | ((val << DINIS_START_BIT) & DINIS_MASK )); \
   } 

#define ENABLE_DINIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  DINIS_MASK ); \
   }

#define DISABLE_DINIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~DINIS_MASK ); \
   } 

#define READ_DINIS() \
   ((READ_REGISTER_ULONG(0x24) & DINIS_MASK)  >> DINIS_START_BIT)

#define WHEN_DINIS_HIGH() \
     if ( READ_DINIS() )


#define UNLESS_DINIS_HIGH() \
     if (! READ_DINIS() )


#define WAIT_DINIS_LOW() \
    while ( READ_DINIS() );


#define WAIT_DINIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DINIS() && (--___t___ > 0)); }


#define WAIT_DINIS_HIGH() \
    while (! READ_DINIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DCIS
//
// Return the value of register Sr
//
// Notes : Digest calculation completion interrupt status 
//        (SR) at the offset 0x24, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DCIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ DCIS_MASK) | ((val << DCIS_START_BIT) & DCIS_MASK )); \
   } 

#define ENABLE_DCIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  DCIS_MASK ); \
   }

#define DISABLE_DCIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~DCIS_MASK ); \
   } 

#define READ_DCIS() \
   ((READ_REGISTER_ULONG(0x24) & DCIS_MASK)  >> DCIS_START_BIT)

#define WHEN_DCIS_HIGH() \
     if ( READ_DCIS() )


#define UNLESS_DCIS_HIGH() \
     if (! READ_DCIS() )


#define WAIT_DCIS_LOW() \
    while ( READ_DCIS() );


#define WAIT_DCIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCIS() && (--___t___ > 0)); }


#define WAIT_DCIS_HIGH() \
    while (! READ_DCIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMAS
//
// Return the value of register Sr
//
// Notes : DMA Status 
//        (SR) at the offset 0x24, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ DMAS_MASK) | ((val << DMAS_START_BIT) & DMAS_MASK )); \
   } 

#define ENABLE_DMAS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  DMAS_MASK ); \
   }

#define DISABLE_DMAS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~DMAS_MASK ); \
   } 

#define READ_DMAS() \
   ((READ_REGISTER_ULONG(0x24) & DMAS_MASK)  >> DMAS_START_BIT)

#define WHEN_DMAS_HIGH() \
     if ( READ_DMAS() )


#define UNLESS_DMAS_HIGH() \
     if (! READ_DMAS() )


#define WAIT_DMAS_LOW() \
    while ( READ_DMAS() );


#define WAIT_DMAS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAS() && (--___t___ > 0)); }


#define WAIT_DMAS_HIGH() \
    while (! READ_DMAS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BUSY
//
// Return the value of register Sr
//
// Notes : Busy bit 
//        (SR) at the offset 0x24, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BUSY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  BUSY_MASK ); \
   }

#define DISABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY() \
   ((READ_REGISTER_ULONG(0x24) & BUSY_MASK)  >> BUSY_START_BIT)

#define WHEN_BUSY_HIGH() \
     if ( READ_BUSY() )


#define UNLESS_BUSY_HIGH() \
     if (! READ_BUSY() )


#define WAIT_BUSY_LOW() \
    while ( READ_BUSY() );


#define WAIT_BUSY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BUSY() && (--___t___ > 0)); }


#define WAIT_BUSY_HIGH() \
    while (! READ_BUSY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr0
//
// Return the value of register CSR0
//
// Notes : Register Csr0 at offset 0xF8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_0( y) \
     WRITE_REGISTER_ULONG( 0xF8 , y)

#define SET_BITS_CSR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xF8); \
     WRITE_REGISTER_ULONG( 0xF8 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xF8); \
     WRITE_REGISTER_ULONG( 0xF8 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_0() \
     READ_REGISTER_ULONG(0xF8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr0
//
// Return the value of register CSR_0
//
// Notes : Register context swap registers (CSR0) at the offset 0xF8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR0 
    // 
#define CSR0_MASK 0xFFFFFFFFU
#define CSR0_OFFSET 31
#define CSR0_START_BIT 0
#define CSR0_WIDTH 32


#define CSR_0_REG 0xF8

typedef enum csr0 {
    CSR_0_0,
    CSR_0_1
} CSR_0_T ;
#define READ_CSR0() \
   ((READ_REGISTER_ULONG(0xF8) & CSR0_MASK)  >> CSR0_START_BIT)

#define WRITE_CSR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xF8); \
     WRITE_REGISTER_ULONG(0xF8, (OldValue & ~ CSR0_MASK) | ((val << CSR0_START_BIT) & CSR0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR1
//
// Notes : Register Csr1 at offset 0xFC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1( y) \
     WRITE_REGISTER_ULONG( 0xFC , y)

#define SET_BITS_CSR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xFC); \
     WRITE_REGISTER_ULONG( 0xFC , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xFC); \
     WRITE_REGISTER_ULONG( 0xFC , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1() \
     READ_REGISTER_ULONG(0xFC)

/////////////////////////////////////////////////////////////////////////
//
// Function : CSR1
//
// Return the value of register Csr1
//
// Notes : CSR1 
//        (CSR1) at the offset 0xFC, Bits 0:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CSR1() \
   ((READ_REGISTER_ULONG(0xFC) & CSR1_MASK)  >> CSR1_START_BIT)

#define WRITE_CSR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xFC); \
     WRITE_REGISTER_ULONG(0xFC, (OldValue & ~ CSR1_MASK) | ((val << CSR1_START_BIT) & CSR1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR2
//
// Notes : Register Csr2 at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2( y) \
     WRITE_REGISTER_ULONG( 0x100 , y)

#define SET_BITS_CSR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2() \
     READ_REGISTER_ULONG(0x100)

/////////////////////////////////////////////////////////////////////////
//
// Function : CSR2
//
// Return the value of register Csr2
//
// Notes : CSR2 
//        (CSR2) at the offset 0x100, Bits 0:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CSR2() \
   ((READ_REGISTER_ULONG(0x100) & CSR2_MASK)  >> CSR2_START_BIT)

#define WRITE_CSR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ CSR2_MASK) | ((val << CSR2_START_BIT) & CSR2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr3
//
// Return the value of register CSR3
//
// Notes : Register Csr3 at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_CSR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr3
//
// Return the value of register CSR_3
//
// Notes : Register context swap registers (CSR3) at the offset 0x104, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR3 
    // 
#define CSR3_MASK 0xFFFFFFFFU
#define CSR3_OFFSET 31
#define CSR3_START_BIT 0
#define CSR3_WIDTH 32


#define CSR_3_REG 0x104

typedef enum csr3 {
    CSR_3_0,
    CSR_3_1
} CSR_3_T ;
#define READ_CSR3() \
   ((READ_REGISTER_ULONG(0x104) & CSR3_MASK)  >> CSR3_START_BIT)

#define WRITE_CSR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ CSR3_MASK) | ((val << CSR3_START_BIT) & CSR3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr4
//
// Return the value of register CSR4
//
// Notes : Register Csr4 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_CSR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr4
//
// Return the value of register CSR_4
//
// Notes : Register context swap registers (CSR4) at the offset 0x108, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR4 
    // 
#define CSR4_MASK 0xFFFFFFFFU
#define CSR4_OFFSET 31
#define CSR4_START_BIT 0
#define CSR4_WIDTH 32


#define CSR_4_REG 0x108

typedef enum csr4 {
    CSR_4_0,
    CSR_4_1
} CSR_4_T ;
#define READ_CSR4() \
   ((READ_REGISTER_ULONG(0x108) & CSR4_MASK)  >> CSR4_START_BIT)

#define WRITE_CSR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ CSR4_MASK) | ((val << CSR4_START_BIT) & CSR4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr5
//
// Return the value of register CSR5
//
// Notes : Register Csr5 at offset 0x10C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_5( y) \
     WRITE_REGISTER_ULONG( 0x10C , y)

#define SET_BITS_CSR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_5() \
     READ_REGISTER_ULONG(0x10C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr5
//
// Return the value of register CSR_5
//
// Notes : Register context swap registers (CSR5) at the offset 0x10C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR5 
    // 
#define CSR5_MASK 0xFFFFFFFFU
#define CSR5_OFFSET 31
#define CSR5_START_BIT 0
#define CSR5_WIDTH 32


#define CSR_5_REG 0x10C

typedef enum csr5 {
    CSR_5_0,
    CSR_5_1
} CSR_5_T ;
#define READ_CSR5() \
   ((READ_REGISTER_ULONG(0x10C) & CSR5_MASK)  >> CSR5_START_BIT)

#define WRITE_CSR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ CSR5_MASK) | ((val << CSR5_START_BIT) & CSR5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr6
//
// Return the value of register CSR6
//
// Notes : Register Csr6 at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_6( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_CSR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_6() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr6
//
// Return the value of register CSR_6
//
// Notes : Register context swap registers (CSR6) at the offset 0x110, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR6 
    // 
#define CSR6_MASK 0xFFFFFFFFU
#define CSR6_OFFSET 31
#define CSR6_START_BIT 0
#define CSR6_WIDTH 32


#define CSR_6_REG 0x110

typedef enum csr6 {
    CSR_6_0,
    CSR_6_1
} CSR_6_T ;
#define READ_CSR6() \
   ((READ_REGISTER_ULONG(0x110) & CSR6_MASK)  >> CSR6_START_BIT)

#define WRITE_CSR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ CSR6_MASK) | ((val << CSR6_START_BIT) & CSR6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr7
//
// Return the value of register CSR7
//
// Notes : Register Csr7 at offset 0x114
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_7( y) \
     WRITE_REGISTER_ULONG( 0x114 , y)

#define SET_BITS_CSR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_7() \
     READ_REGISTER_ULONG(0x114)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr7
//
// Return the value of register CSR_7
//
// Notes : Register context swap registers (CSR7) at the offset 0x114, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR7 
    // 
#define CSR7_MASK 0xFFFFFFFFU
#define CSR7_OFFSET 31
#define CSR7_START_BIT 0
#define CSR7_WIDTH 32


#define CSR_7_REG 0x114

typedef enum csr7 {
    CSR_7_0,
    CSR_7_1
} CSR_7_T ;
#define READ_CSR7() \
   ((READ_REGISTER_ULONG(0x114) & CSR7_MASK)  >> CSR7_START_BIT)

#define WRITE_CSR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ CSR7_MASK) | ((val << CSR7_START_BIT) & CSR7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr8
//
// Return the value of register CSR8
//
// Notes : Register Csr8 at offset 0x118
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_8( y) \
     WRITE_REGISTER_ULONG( 0x118 , y)

#define SET_BITS_CSR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x118); \
     WRITE_REGISTER_ULONG( 0x118 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x118); \
     WRITE_REGISTER_ULONG( 0x118 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_8() \
     READ_REGISTER_ULONG(0x118)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr8
//
// Return the value of register CSR_8
//
// Notes : Register context swap registers (CSR8) at the offset 0x118, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR8 
    // 
#define CSR8_MASK 0xFFFFFFFFU
#define CSR8_OFFSET 31
#define CSR8_START_BIT 0
#define CSR8_WIDTH 32


#define CSR_8_REG 0x118

typedef enum csr8 {
    CSR_8_0,
    CSR_8_1
} CSR_8_T ;
#define READ_CSR8() \
   ((READ_REGISTER_ULONG(0x118) & CSR8_MASK)  >> CSR8_START_BIT)

#define WRITE_CSR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x118); \
     WRITE_REGISTER_ULONG(0x118, (OldValue & ~ CSR8_MASK) | ((val << CSR8_START_BIT) & CSR8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr9
//
// Return the value of register CSR9
//
// Notes : Register Csr9 at offset 0x11C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_9( y) \
     WRITE_REGISTER_ULONG( 0x11C , y)

#define SET_BITS_CSR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_9() \
     READ_REGISTER_ULONG(0x11C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr9
//
// Return the value of register CSR_9
//
// Notes : Register context swap registers (CSR9) at the offset 0x11C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR9 
    // 
#define CSR9_MASK 0xFFFFFFFFU
#define CSR9_OFFSET 31
#define CSR9_START_BIT 0
#define CSR9_WIDTH 32


#define CSR_9_REG 0x11C

typedef enum csr9 {
    CSR_9_0,
    CSR_9_1
} CSR_9_T ;
#define READ_CSR9() \
   ((READ_REGISTER_ULONG(0x11C) & CSR9_MASK)  >> CSR9_START_BIT)

#define WRITE_CSR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ CSR9_MASK) | ((val << CSR9_START_BIT) & CSR9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr10
//
// Return the value of register CSR10
//
// Notes : Register Csr10 at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_0( y) \
     WRITE_REGISTER_ULONG( 0x120 , y)

#define SET_BITS_CSR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_0() \
     READ_REGISTER_ULONG(0x120)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr10
//
// Return the value of register CSR_1_0
//
// Notes : Register context swap registers (CSR10) at the offset 0x120, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR10 
    // 
#define CSR10_MASK 0xFFFFFFFFU
#define CSR10_OFFSET 31
#define CSR10_START_BIT 0
#define CSR10_WIDTH 32


#define CSR_10_REG 0x120

typedef enum csr10 {
    CSR_1_0_0,
    CSR_1_0_1
} CSR_10_T ;
#define READ_CSR10() \
   ((READ_REGISTER_ULONG(0x120) & CSR10_MASK)  >> CSR10_START_BIT)

#define WRITE_CSR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ CSR10_MASK) | ((val << CSR10_START_BIT) & CSR10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr11
//
// Return the value of register CSR11
//
// Notes : Register Csr11 at offset 0x124
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_1( y) \
     WRITE_REGISTER_ULONG( 0x124 , y)

#define SET_BITS_CSR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_1() \
     READ_REGISTER_ULONG(0x124)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr11
//
// Return the value of register CSR_1_1
//
// Notes : Register context swap registers (CSR11) at the offset 0x124, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR11 
    // 
#define CSR11_MASK 0xFFFFFFFFU
#define CSR11_OFFSET 31
#define CSR11_START_BIT 0
#define CSR11_WIDTH 32


#define CSR_11_REG 0x124

typedef enum csr11 {
    CSR_1_1_0,
    CSR_1_1_1
} CSR_11_T ;
#define READ_CSR11() \
   ((READ_REGISTER_ULONG(0x124) & CSR11_MASK)  >> CSR11_START_BIT)

#define WRITE_CSR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ CSR11_MASK) | ((val << CSR11_START_BIT) & CSR11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr12
//
// Return the value of register CSR12
//
// Notes : Register Csr12 at offset 0x128
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_2( y) \
     WRITE_REGISTER_ULONG( 0x128 , y)

#define SET_BITS_CSR_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_2() \
     READ_REGISTER_ULONG(0x128)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr12
//
// Return the value of register CSR_1_2
//
// Notes : Register context swap registers (CSR12) at the offset 0x128, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR12 
    // 
#define CSR12_MASK 0xFFFFFFFFU
#define CSR12_OFFSET 31
#define CSR12_START_BIT 0
#define CSR12_WIDTH 32


#define CSR_12_REG 0x128

typedef enum csr12 {
    CSR_1_2_0,
    CSR_1_2_1
} CSR_12_T ;
#define READ_CSR12() \
   ((READ_REGISTER_ULONG(0x128) & CSR12_MASK)  >> CSR12_START_BIT)

#define WRITE_CSR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ CSR12_MASK) | ((val << CSR12_START_BIT) & CSR12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr13
//
// Return the value of register CSR13
//
// Notes : Register Csr13 at offset 0x12C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_3( y) \
     WRITE_REGISTER_ULONG( 0x12C , y)

#define SET_BITS_CSR_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_3() \
     READ_REGISTER_ULONG(0x12C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr13
//
// Return the value of register CSR_1_3
//
// Notes : Register context swap registers (CSR13) at the offset 0x12C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR13 
    // 
#define CSR13_MASK 0xFFFFFFFFU
#define CSR13_OFFSET 31
#define CSR13_START_BIT 0
#define CSR13_WIDTH 32


#define CSR_13_REG 0x12C

typedef enum csr13 {
    CSR_1_3_0,
    CSR_1_3_1
} CSR_13_T ;
#define READ_CSR13() \
   ((READ_REGISTER_ULONG(0x12C) & CSR13_MASK)  >> CSR13_START_BIT)

#define WRITE_CSR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ CSR13_MASK) | ((val << CSR13_START_BIT) & CSR13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr14
//
// Return the value of register CSR14
//
// Notes : Register Csr14 at offset 0x130
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_4( y) \
     WRITE_REGISTER_ULONG( 0x130 , y)

#define SET_BITS_CSR_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_4() \
     READ_REGISTER_ULONG(0x130)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr14
//
// Return the value of register CSR_1_4
//
// Notes : Register context swap registers (CSR14) at the offset 0x130, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR14 
    // 
#define CSR14_MASK 0xFFFFFFFFU
#define CSR14_OFFSET 31
#define CSR14_START_BIT 0
#define CSR14_WIDTH 32


#define CSR_14_REG 0x130

typedef enum csr14 {
    CSR_1_4_0,
    CSR_1_4_1
} CSR_14_T ;
#define READ_CSR14() \
   ((READ_REGISTER_ULONG(0x130) & CSR14_MASK)  >> CSR14_START_BIT)

#define WRITE_CSR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ CSR14_MASK) | ((val << CSR14_START_BIT) & CSR14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr15
//
// Return the value of register CSR15
//
// Notes : Register Csr15 at offset 0x134
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_5( y) \
     WRITE_REGISTER_ULONG( 0x134 , y)

#define SET_BITS_CSR_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_5() \
     READ_REGISTER_ULONG(0x134)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr15
//
// Return the value of register CSR_1_5
//
// Notes : Register context swap registers (CSR15) at the offset 0x134, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR15 
    // 
#define CSR15_MASK 0xFFFFFFFFU
#define CSR15_OFFSET 31
#define CSR15_START_BIT 0
#define CSR15_WIDTH 32


#define CSR_15_REG 0x134

typedef enum csr15 {
    CSR_1_5_0,
    CSR_1_5_1
} CSR_15_T ;
#define READ_CSR15() \
   ((READ_REGISTER_ULONG(0x134) & CSR15_MASK)  >> CSR15_START_BIT)

#define WRITE_CSR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x134); \
     WRITE_REGISTER_ULONG(0x134, (OldValue & ~ CSR15_MASK) | ((val << CSR15_START_BIT) & CSR15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr16
//
// Return the value of register CSR16
//
// Notes : Register Csr16 at offset 0x138
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_6( y) \
     WRITE_REGISTER_ULONG( 0x138 , y)

#define SET_BITS_CSR_1_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x138); \
     WRITE_REGISTER_ULONG( 0x138 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x138); \
     WRITE_REGISTER_ULONG( 0x138 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_6() \
     READ_REGISTER_ULONG(0x138)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr16
//
// Return the value of register CSR_1_6
//
// Notes : Register context swap registers (CSR16) at the offset 0x138, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR16 
    // 
#define CSR16_MASK 0xFFFFFFFFU
#define CSR16_OFFSET 31
#define CSR16_START_BIT 0
#define CSR16_WIDTH 32


#define CSR_16_REG 0x138

typedef enum csr16 {
    CSR_1_6_0,
    CSR_1_6_1
} CSR_16_T ;
#define READ_CSR16() \
   ((READ_REGISTER_ULONG(0x138) & CSR16_MASK)  >> CSR16_START_BIT)

#define WRITE_CSR16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x138); \
     WRITE_REGISTER_ULONG(0x138, (OldValue & ~ CSR16_MASK) | ((val << CSR16_START_BIT) & CSR16_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr17
//
// Return the value of register CSR17
//
// Notes : Register Csr17 at offset 0x13C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_7( y) \
     WRITE_REGISTER_ULONG( 0x13C , y)

#define SET_BITS_CSR_1_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x13C); \
     WRITE_REGISTER_ULONG( 0x13C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x13C); \
     WRITE_REGISTER_ULONG( 0x13C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_7() \
     READ_REGISTER_ULONG(0x13C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr17
//
// Return the value of register CSR_1_7
//
// Notes : Register context swap registers (CSR17) at the offset 0x13C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR17 
    // 
#define CSR17_MASK 0xFFFFFFFFU
#define CSR17_OFFSET 31
#define CSR17_START_BIT 0
#define CSR17_WIDTH 32


#define CSR_17_REG 0x13C

typedef enum csr17 {
    CSR_1_7_0,
    CSR_1_7_1
} CSR_17_T ;
#define READ_CSR17() \
   ((READ_REGISTER_ULONG(0x13C) & CSR17_MASK)  >> CSR17_START_BIT)

#define WRITE_CSR17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x13C); \
     WRITE_REGISTER_ULONG(0x13C, (OldValue & ~ CSR17_MASK) | ((val << CSR17_START_BIT) & CSR17_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr18
//
// Return the value of register CSR18
//
// Notes : Register Csr18 at offset 0x140
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_8( y) \
     WRITE_REGISTER_ULONG( 0x140 , y)

#define SET_BITS_CSR_1_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_8() \
     READ_REGISTER_ULONG(0x140)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr18
//
// Return the value of register CSR_1_8
//
// Notes : Register context swap registers (CSR18) at the offset 0x140, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR18 
    // 
#define CSR18_MASK 0xFFFFFFFFU
#define CSR18_OFFSET 31
#define CSR18_START_BIT 0
#define CSR18_WIDTH 32


#define CSR_18_REG 0x140

typedef enum csr18 {
    CSR_1_8_0,
    CSR_1_8_1
} CSR_18_T ;
#define READ_CSR18() \
   ((READ_REGISTER_ULONG(0x140) & CSR18_MASK)  >> CSR18_START_BIT)

#define WRITE_CSR18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ CSR18_MASK) | ((val << CSR18_START_BIT) & CSR18_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr19
//
// Return the value of register CSR19
//
// Notes : Register Csr19 at offset 0x144
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_1_9( y) \
     WRITE_REGISTER_ULONG( 0x144 , y)

#define SET_BITS_CSR_1_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_1_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_1_9() \
     READ_REGISTER_ULONG(0x144)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr19
//
// Return the value of register CSR_1_9
//
// Notes : Register context swap registers (CSR19) at the offset 0x144, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR19 
    // 
#define CSR19_MASK 0xFFFFFFFFU
#define CSR19_OFFSET 31
#define CSR19_START_BIT 0
#define CSR19_WIDTH 32


#define CSR_19_REG 0x144

typedef enum csr19 {
    CSR_1_9_0,
    CSR_1_9_1
} CSR_19_T ;
#define READ_CSR19() \
   ((READ_REGISTER_ULONG(0x144) & CSR19_MASK)  >> CSR19_START_BIT)

#define WRITE_CSR19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ CSR19_MASK) | ((val << CSR19_START_BIT) & CSR19_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr20
//
// Return the value of register CSR20
//
// Notes : Register Csr20 at offset 0x148
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_0( y) \
     WRITE_REGISTER_ULONG( 0x148 , y)

#define SET_BITS_CSR_2_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_0() \
     READ_REGISTER_ULONG(0x148)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr20
//
// Return the value of register CSR_2_0
//
// Notes : Register context swap registers (CSR20) at the offset 0x148, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR20 
    // 
#define CSR20_MASK 0xFFFFFFFFU
#define CSR20_OFFSET 31
#define CSR20_START_BIT 0
#define CSR20_WIDTH 32


#define CSR_20_REG 0x148

typedef enum csr20 {
    CSR_2_0_0,
    CSR_2_0_1
} CSR_20_T ;
#define READ_CSR20() \
   ((READ_REGISTER_ULONG(0x148) & CSR20_MASK)  >> CSR20_START_BIT)

#define WRITE_CSR20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ CSR20_MASK) | ((val << CSR20_START_BIT) & CSR20_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr21
//
// Return the value of register CSR21
//
// Notes : Register Csr21 at offset 0x14C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_1( y) \
     WRITE_REGISTER_ULONG( 0x14C , y)

#define SET_BITS_CSR_2_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_1() \
     READ_REGISTER_ULONG(0x14C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr21
//
// Return the value of register CSR_2_1
//
// Notes : Register context swap registers (CSR21) at the offset 0x14C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR21 
    // 
#define CSR21_MASK 0xFFFFFFFFU
#define CSR21_OFFSET 31
#define CSR21_START_BIT 0
#define CSR21_WIDTH 32


#define CSR_21_REG 0x14C

typedef enum csr21 {
    CSR_2_1_0,
    CSR_2_1_1
} CSR_21_T ;
#define READ_CSR21() \
   ((READ_REGISTER_ULONG(0x14C) & CSR21_MASK)  >> CSR21_START_BIT)

#define WRITE_CSR21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ CSR21_MASK) | ((val << CSR21_START_BIT) & CSR21_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr22
//
// Return the value of register CSR22
//
// Notes : Register Csr22 at offset 0x150
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_2( y) \
     WRITE_REGISTER_ULONG( 0x150 , y)

#define SET_BITS_CSR_2_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_2() \
     READ_REGISTER_ULONG(0x150)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr22
//
// Return the value of register CSR_2_2
//
// Notes : Register context swap registers (CSR22) at the offset 0x150, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR22 
    // 
#define CSR22_MASK 0xFFFFFFFFU
#define CSR22_OFFSET 31
#define CSR22_START_BIT 0
#define CSR22_WIDTH 32


#define CSR_22_REG 0x150

typedef enum csr22 {
    CSR_2_2_0,
    CSR_2_2_1
} CSR_22_T ;
#define READ_CSR22() \
   ((READ_REGISTER_ULONG(0x150) & CSR22_MASK)  >> CSR22_START_BIT)

#define WRITE_CSR22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ CSR22_MASK) | ((val << CSR22_START_BIT) & CSR22_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr23
//
// Return the value of register CSR23
//
// Notes : Register Csr23 at offset 0x154
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_3( y) \
     WRITE_REGISTER_ULONG( 0x154 , y)

#define SET_BITS_CSR_2_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_3() \
     READ_REGISTER_ULONG(0x154)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr23
//
// Return the value of register CSR_2_3
//
// Notes : Register context swap registers (CSR23) at the offset 0x154, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR23 
    // 
#define CSR23_MASK 0xFFFFFFFFU
#define CSR23_OFFSET 31
#define CSR23_START_BIT 0
#define CSR23_WIDTH 32


#define CSR_23_REG 0x154

typedef enum csr23 {
    CSR_2_3_0,
    CSR_2_3_1
} CSR_23_T ;
#define READ_CSR23() \
   ((READ_REGISTER_ULONG(0x154) & CSR23_MASK)  >> CSR23_START_BIT)

#define WRITE_CSR23(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x154); \
     WRITE_REGISTER_ULONG(0x154, (OldValue & ~ CSR23_MASK) | ((val << CSR23_START_BIT) & CSR23_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr24
//
// Return the value of register CSR24
//
// Notes : Register Csr24 at offset 0x158
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_4( y) \
     WRITE_REGISTER_ULONG( 0x158 , y)

#define SET_BITS_CSR_2_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x158); \
     WRITE_REGISTER_ULONG( 0x158 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x158); \
     WRITE_REGISTER_ULONG( 0x158 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_4() \
     READ_REGISTER_ULONG(0x158)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr24
//
// Return the value of register CSR_2_4
//
// Notes : Register context swap registers (CSR24) at the offset 0x158, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR24 
    // 
#define CSR24_MASK 0xFFFFFFFFU
#define CSR24_OFFSET 31
#define CSR24_START_BIT 0
#define CSR24_WIDTH 32


#define CSR_24_REG 0x158

typedef enum csr24 {
    CSR_2_4_0,
    CSR_2_4_1
} CSR_24_T ;
#define READ_CSR24() \
   ((READ_REGISTER_ULONG(0x158) & CSR24_MASK)  >> CSR24_START_BIT)

#define WRITE_CSR24(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ CSR24_MASK) | ((val << CSR24_START_BIT) & CSR24_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr25
//
// Return the value of register CSR25
//
// Notes : Register Csr25 at offset 0x15C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_5( y) \
     WRITE_REGISTER_ULONG( 0x15C , y)

#define SET_BITS_CSR_2_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x15C); \
     WRITE_REGISTER_ULONG( 0x15C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x15C); \
     WRITE_REGISTER_ULONG( 0x15C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_5() \
     READ_REGISTER_ULONG(0x15C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr25
//
// Return the value of register CSR_2_5
//
// Notes : Register context swap registers (CSR25) at the offset 0x15C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR25 
    // 
#define CSR25_MASK 0xFFFFFFFFU
#define CSR25_OFFSET 31
#define CSR25_START_BIT 0
#define CSR25_WIDTH 32


#define CSR_25_REG 0x15C

typedef enum csr25 {
    CSR_2_5_0,
    CSR_2_5_1
} CSR_25_T ;
#define READ_CSR25() \
   ((READ_REGISTER_ULONG(0x15C) & CSR25_MASK)  >> CSR25_START_BIT)

#define WRITE_CSR25(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x15C); \
     WRITE_REGISTER_ULONG(0x15C, (OldValue & ~ CSR25_MASK) | ((val << CSR25_START_BIT) & CSR25_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr26
//
// Return the value of register CSR26
//
// Notes : Register Csr26 at offset 0x160
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_6( y) \
     WRITE_REGISTER_ULONG( 0x160 , y)

#define SET_BITS_CSR_2_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_6() \
     READ_REGISTER_ULONG(0x160)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr26
//
// Return the value of register CSR_2_6
//
// Notes : Register context swap registers (CSR26) at the offset 0x160, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR26 
    // 
#define CSR26_MASK 0xFFFFFFFFU
#define CSR26_OFFSET 31
#define CSR26_START_BIT 0
#define CSR26_WIDTH 32


#define CSR_26_REG 0x160

typedef enum csr26 {
    CSR_2_6_0,
    CSR_2_6_1
} CSR_26_T ;
#define READ_CSR26() \
   ((READ_REGISTER_ULONG(0x160) & CSR26_MASK)  >> CSR26_START_BIT)

#define WRITE_CSR26(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ CSR26_MASK) | ((val << CSR26_START_BIT) & CSR26_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr27
//
// Return the value of register CSR27
//
// Notes : Register Csr27 at offset 0x164
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_7( y) \
     WRITE_REGISTER_ULONG( 0x164 , y)

#define SET_BITS_CSR_2_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG( 0x164 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG( 0x164 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_7() \
     READ_REGISTER_ULONG(0x164)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr27
//
// Return the value of register CSR_2_7
//
// Notes : Register context swap registers (CSR27) at the offset 0x164, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR27 
    // 
#define CSR27_MASK 0xFFFFFFFFU
#define CSR27_OFFSET 31
#define CSR27_START_BIT 0
#define CSR27_WIDTH 32


#define CSR_27_REG 0x164

typedef enum csr27 {
    CSR_2_7_0,
    CSR_2_7_1
} CSR_27_T ;
#define READ_CSR27() \
   ((READ_REGISTER_ULONG(0x164) & CSR27_MASK)  >> CSR27_START_BIT)

#define WRITE_CSR27(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x164); \
     WRITE_REGISTER_ULONG(0x164, (OldValue & ~ CSR27_MASK) | ((val << CSR27_START_BIT) & CSR27_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr28
//
// Return the value of register CSR28
//
// Notes : Register Csr28 at offset 0x168
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_8( y) \
     WRITE_REGISTER_ULONG( 0x168 , y)

#define SET_BITS_CSR_2_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_8() \
     READ_REGISTER_ULONG(0x168)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr28
//
// Return the value of register CSR_2_8
//
// Notes : Register context swap registers (CSR28) at the offset 0x168, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR28 
    // 
#define CSR28_MASK 0xFFFFFFFFU
#define CSR28_OFFSET 31
#define CSR28_START_BIT 0
#define CSR28_WIDTH 32


#define CSR_28_REG 0x168

typedef enum csr28 {
    CSR_2_8_0,
    CSR_2_8_1
} CSR_28_T ;
#define READ_CSR28() \
   ((READ_REGISTER_ULONG(0x168) & CSR28_MASK)  >> CSR28_START_BIT)

#define WRITE_CSR28(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ CSR28_MASK) | ((val << CSR28_START_BIT) & CSR28_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr29
//
// Return the value of register CSR29
//
// Notes : Register Csr29 at offset 0x16C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_2_9( y) \
     WRITE_REGISTER_ULONG( 0x16C , y)

#define SET_BITS_CSR_2_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_2_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_2_9() \
     READ_REGISTER_ULONG(0x16C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr29
//
// Return the value of register CSR_2_9
//
// Notes : Register context swap registers (CSR29) at the offset 0x16C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR29 
    // 
#define CSR29_MASK 0xFFFFFFFFU
#define CSR29_OFFSET 31
#define CSR29_START_BIT 0
#define CSR29_WIDTH 32


#define CSR_29_REG 0x16C

typedef enum csr29 {
    CSR_2_9_0,
    CSR_2_9_1
} CSR_29_T ;
#define READ_CSR29() \
   ((READ_REGISTER_ULONG(0x16C) & CSR29_MASK)  >> CSR29_START_BIT)

#define WRITE_CSR29(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ CSR29_MASK) | ((val << CSR29_START_BIT) & CSR29_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr30
//
// Return the value of register CSR30
//
// Notes : Register Csr30 at offset 0x170
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_0( y) \
     WRITE_REGISTER_ULONG( 0x170 , y)

#define SET_BITS_CSR_3_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_0() \
     READ_REGISTER_ULONG(0x170)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr30
//
// Return the value of register CSR_3_0
//
// Notes : Register context swap registers (CSR30) at the offset 0x170, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR30 
    // 
#define CSR30_MASK 0xFFFFFFFFU
#define CSR30_OFFSET 31
#define CSR30_START_BIT 0
#define CSR30_WIDTH 32


#define CSR_30_REG 0x170

typedef enum csr30 {
    CSR_3_0_0,
    CSR_3_0_1
} CSR_30_T ;
#define READ_CSR30() \
   ((READ_REGISTER_ULONG(0x170) & CSR30_MASK)  >> CSR30_START_BIT)

#define WRITE_CSR30(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ CSR30_MASK) | ((val << CSR30_START_BIT) & CSR30_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr31
//
// Return the value of register CSR31
//
// Notes : Register Csr31 at offset 0x174
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_1( y) \
     WRITE_REGISTER_ULONG( 0x174 , y)

#define SET_BITS_CSR_3_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x174); \
     WRITE_REGISTER_ULONG( 0x174 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x174); \
     WRITE_REGISTER_ULONG( 0x174 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_1() \
     READ_REGISTER_ULONG(0x174)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr31
//
// Return the value of register CSR_3_1
//
// Notes : Register context swap registers (CSR31) at the offset 0x174, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR31 
    // 
#define CSR31_MASK 0xFFFFFFFFU
#define CSR31_OFFSET 31
#define CSR31_START_BIT 0
#define CSR31_WIDTH 32


#define CSR_31_REG 0x174

typedef enum csr31 {
    CSR_3_1_0,
    CSR_3_1_1
} CSR_31_T ;
#define READ_CSR31() \
   ((READ_REGISTER_ULONG(0x174) & CSR31_MASK)  >> CSR31_START_BIT)

#define WRITE_CSR31(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x174); \
     WRITE_REGISTER_ULONG(0x174, (OldValue & ~ CSR31_MASK) | ((val << CSR31_START_BIT) & CSR31_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr32
//
// Return the value of register CSR32
//
// Notes : Register Csr32 at offset 0x178
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_2( y) \
     WRITE_REGISTER_ULONG( 0x178 , y)

#define SET_BITS_CSR_3_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x178); \
     WRITE_REGISTER_ULONG( 0x178 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x178); \
     WRITE_REGISTER_ULONG( 0x178 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_2() \
     READ_REGISTER_ULONG(0x178)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr32
//
// Return the value of register CSR_3_2
//
// Notes : Register context swap registers (CSR32) at the offset 0x178, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR32 
    // 
#define CSR32_MASK 0xFFFFFFFFU
#define CSR32_OFFSET 31
#define CSR32_START_BIT 0
#define CSR32_WIDTH 32


#define CSR_32_REG 0x178

typedef enum csr32 {
    CSR_3_2_0,
    CSR_3_2_1
} CSR_32_T ;
#define READ_CSR32() \
   ((READ_REGISTER_ULONG(0x178) & CSR32_MASK)  >> CSR32_START_BIT)

#define WRITE_CSR32(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x178); \
     WRITE_REGISTER_ULONG(0x178, (OldValue & ~ CSR32_MASK) | ((val << CSR32_START_BIT) & CSR32_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr33
//
// Return the value of register CSR33
//
// Notes : Register Csr33 at offset 0x17C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_3( y) \
     WRITE_REGISTER_ULONG( 0x17C , y)

#define SET_BITS_CSR_3_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x17C); \
     WRITE_REGISTER_ULONG( 0x17C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x17C); \
     WRITE_REGISTER_ULONG( 0x17C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_3() \
     READ_REGISTER_ULONG(0x17C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr33
//
// Return the value of register CSR_3_3
//
// Notes : Register context swap registers (CSR33) at the offset 0x17C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR33 
    // 
#define CSR33_MASK 0xFFFFFFFFU
#define CSR33_OFFSET 31
#define CSR33_START_BIT 0
#define CSR33_WIDTH 32


#define CSR_33_REG 0x17C

typedef enum csr33 {
    CSR_3_3_0,
    CSR_3_3_1
} CSR_33_T ;
#define READ_CSR33() \
   ((READ_REGISTER_ULONG(0x17C) & CSR33_MASK)  >> CSR33_START_BIT)

#define WRITE_CSR33(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x17C); \
     WRITE_REGISTER_ULONG(0x17C, (OldValue & ~ CSR33_MASK) | ((val << CSR33_START_BIT) & CSR33_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr34
//
// Return the value of register CSR34
//
// Notes : Register Csr34 at offset 0x180
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_4( y) \
     WRITE_REGISTER_ULONG( 0x180 , y)

#define SET_BITS_CSR_3_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_4() \
     READ_REGISTER_ULONG(0x180)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr34
//
// Return the value of register CSR_3_4
//
// Notes : Register context swap registers (CSR34) at the offset 0x180, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR34 
    // 
#define CSR34_MASK 0xFFFFFFFFU
#define CSR34_OFFSET 31
#define CSR34_START_BIT 0
#define CSR34_WIDTH 32


#define CSR_34_REG 0x180

typedef enum csr34 {
    CSR_3_4_0,
    CSR_3_4_1
} CSR_34_T ;
#define READ_CSR34() \
   ((READ_REGISTER_ULONG(0x180) & CSR34_MASK)  >> CSR34_START_BIT)

#define WRITE_CSR34(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ CSR34_MASK) | ((val << CSR34_START_BIT) & CSR34_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr35
//
// Return the value of register CSR35
//
// Notes : Register Csr35 at offset 0x184
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_5( y) \
     WRITE_REGISTER_ULONG( 0x184 , y)

#define SET_BITS_CSR_3_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_5() \
     READ_REGISTER_ULONG(0x184)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr35
//
// Return the value of register CSR_3_5
//
// Notes : Register context swap registers (CSR35) at the offset 0x184, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR35 
    // 
#define CSR35_MASK 0xFFFFFFFFU
#define CSR35_OFFSET 31
#define CSR35_START_BIT 0
#define CSR35_WIDTH 32


#define CSR_35_REG 0x184

typedef enum csr35 {
    CSR_3_5_0,
    CSR_3_5_1
} CSR_35_T ;
#define READ_CSR35() \
   ((READ_REGISTER_ULONG(0x184) & CSR35_MASK)  >> CSR35_START_BIT)

#define WRITE_CSR35(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ CSR35_MASK) | ((val << CSR35_START_BIT) & CSR35_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr36
//
// Return the value of register CSR36
//
// Notes : Register Csr36 at offset 0x188
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_6( y) \
     WRITE_REGISTER_ULONG( 0x188 , y)

#define SET_BITS_CSR_3_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_6() \
     READ_REGISTER_ULONG(0x188)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr36
//
// Return the value of register CSR_3_6
//
// Notes : Register context swap registers (CSR36) at the offset 0x188, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR36 
    // 
#define CSR36_MASK 0xFFFFFFFFU
#define CSR36_OFFSET 31
#define CSR36_START_BIT 0
#define CSR36_WIDTH 32


#define CSR_36_REG 0x188

typedef enum csr36 {
    CSR_3_6_0,
    CSR_3_6_1
} CSR_36_T ;
#define READ_CSR36() \
   ((READ_REGISTER_ULONG(0x188) & CSR36_MASK)  >> CSR36_START_BIT)

#define WRITE_CSR36(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ CSR36_MASK) | ((val << CSR36_START_BIT) & CSR36_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr37
//
// Return the value of register CSR37
//
// Notes : Register Csr37 at offset 0x18C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_7( y) \
     WRITE_REGISTER_ULONG( 0x18C , y)

#define SET_BITS_CSR_3_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_7() \
     READ_REGISTER_ULONG(0x18C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr37
//
// Return the value of register CSR_3_7
//
// Notes : Register context swap registers (CSR37) at the offset 0x18C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR37 
    // 
#define CSR37_MASK 0xFFFFFFFFU
#define CSR37_OFFSET 31
#define CSR37_START_BIT 0
#define CSR37_WIDTH 32


#define CSR_37_REG 0x18C

typedef enum csr37 {
    CSR_3_7_0,
    CSR_3_7_1
} CSR_37_T ;
#define READ_CSR37() \
   ((READ_REGISTER_ULONG(0x18C) & CSR37_MASK)  >> CSR37_START_BIT)

#define WRITE_CSR37(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ CSR37_MASK) | ((val << CSR37_START_BIT) & CSR37_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr38
//
// Return the value of register CSR38
//
// Notes : Register Csr38 at offset 0x190
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_8( y) \
     WRITE_REGISTER_ULONG( 0x190 , y)

#define SET_BITS_CSR_3_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_8() \
     READ_REGISTER_ULONG(0x190)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr38
//
// Return the value of register CSR_3_8
//
// Notes : Register context swap registers (CSR38) at the offset 0x190, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR38 
    // 
#define CSR38_MASK 0xFFFFFFFFU
#define CSR38_OFFSET 31
#define CSR38_START_BIT 0
#define CSR38_WIDTH 32


#define CSR_38_REG 0x190

typedef enum csr38 {
    CSR_3_8_0,
    CSR_3_8_1
} CSR_38_T ;
#define READ_CSR38() \
   ((READ_REGISTER_ULONG(0x190) & CSR38_MASK)  >> CSR38_START_BIT)

#define WRITE_CSR38(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ CSR38_MASK) | ((val << CSR38_START_BIT) & CSR38_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr39
//
// Return the value of register CSR39
//
// Notes : Register Csr39 at offset 0x194
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_3_9( y) \
     WRITE_REGISTER_ULONG( 0x194 , y)

#define SET_BITS_CSR_3_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_3_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_3_9() \
     READ_REGISTER_ULONG(0x194)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr39
//
// Return the value of register CSR_3_9
//
// Notes : Register context swap registers (CSR39) at the offset 0x194, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR39 
    // 
#define CSR39_MASK 0xFFFFFFFFU
#define CSR39_OFFSET 31
#define CSR39_START_BIT 0
#define CSR39_WIDTH 32


#define CSR_39_REG 0x194

typedef enum csr39 {
    CSR_3_9_0,
    CSR_3_9_1
} CSR_39_T ;
#define READ_CSR39() \
   ((READ_REGISTER_ULONG(0x194) & CSR39_MASK)  >> CSR39_START_BIT)

#define WRITE_CSR39(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x194); \
     WRITE_REGISTER_ULONG(0x194, (OldValue & ~ CSR39_MASK) | ((val << CSR39_START_BIT) & CSR39_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr40
//
// Return the value of register CSR40
//
// Notes : Register Csr40 at offset 0x198
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_0( y) \
     WRITE_REGISTER_ULONG( 0x198 , y)

#define SET_BITS_CSR_4_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x198); \
     WRITE_REGISTER_ULONG( 0x198 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x198); \
     WRITE_REGISTER_ULONG( 0x198 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_0() \
     READ_REGISTER_ULONG(0x198)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr40
//
// Return the value of register CSR_4_0
//
// Notes : Register context swap registers (CSR40) at the offset 0x198, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR40 
    // 
#define CSR40_MASK 0xFFFFFFFFU
#define CSR40_OFFSET 31
#define CSR40_START_BIT 0
#define CSR40_WIDTH 32


#define CSR_40_REG 0x198

typedef enum csr40 {
    CSR_4_0_0,
    CSR_4_0_1
} CSR_40_T ;
#define READ_CSR40() \
   ((READ_REGISTER_ULONG(0x198) & CSR40_MASK)  >> CSR40_START_BIT)

#define WRITE_CSR40(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x198); \
     WRITE_REGISTER_ULONG(0x198, (OldValue & ~ CSR40_MASK) | ((val << CSR40_START_BIT) & CSR40_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr41
//
// Return the value of register CSR41
//
// Notes : Register Csr41 at offset 0x19C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_1( y) \
     WRITE_REGISTER_ULONG( 0x19C , y)

#define SET_BITS_CSR_4_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x19C); \
     WRITE_REGISTER_ULONG( 0x19C , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x19C); \
     WRITE_REGISTER_ULONG( 0x19C , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_1() \
     READ_REGISTER_ULONG(0x19C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr41
//
// Return the value of register CSR_4_1
//
// Notes : Register context swap registers (CSR41) at the offset 0x19C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR41 
    // 
#define CSR41_MASK 0xFFFFFFFFU
#define CSR41_OFFSET 31
#define CSR41_START_BIT 0
#define CSR41_WIDTH 32


#define CSR_41_REG 0x19C

typedef enum csr41 {
    CSR_4_1_0,
    CSR_4_1_1
} CSR_41_T ;
#define READ_CSR41() \
   ((READ_REGISTER_ULONG(0x19C) & CSR41_MASK)  >> CSR41_START_BIT)

#define WRITE_CSR41(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x19C); \
     WRITE_REGISTER_ULONG(0x19C, (OldValue & ~ CSR41_MASK) | ((val << CSR41_START_BIT) & CSR41_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr42
//
// Return the value of register CSR42
//
// Notes : Register Csr42 at offset 0x1A0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_2( y) \
     WRITE_REGISTER_ULONG( 0x1A0 , y)

#define SET_BITS_CSR_4_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_2() \
     READ_REGISTER_ULONG(0x1A0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr42
//
// Return the value of register CSR_4_2
//
// Notes : Register context swap registers (CSR42) at the offset 0x1A0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR42 
    // 
#define CSR42_MASK 0xFFFFFFFFU
#define CSR42_OFFSET 31
#define CSR42_START_BIT 0
#define CSR42_WIDTH 32


#define CSR_42_REG 0x1A0

typedef enum csr42 {
    CSR_4_2_0,
    CSR_4_2_1
} CSR_42_T ;
#define READ_CSR42() \
   ((READ_REGISTER_ULONG(0x1A0) & CSR42_MASK)  >> CSR42_START_BIT)

#define WRITE_CSR42(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ CSR42_MASK) | ((val << CSR42_START_BIT) & CSR42_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr43
//
// Return the value of register CSR43
//
// Notes : Register Csr43 at offset 0x1A4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_3( y) \
     WRITE_REGISTER_ULONG( 0x1A4 , y)

#define SET_BITS_CSR_4_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_3() \
     READ_REGISTER_ULONG(0x1A4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr43
//
// Return the value of register CSR_4_3
//
// Notes : Register context swap registers (CSR43) at the offset 0x1A4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR43 
    // 
#define CSR43_MASK 0xFFFFFFFFU
#define CSR43_OFFSET 31
#define CSR43_START_BIT 0
#define CSR43_WIDTH 32


#define CSR_43_REG 0x1A4

typedef enum csr43 {
    CSR_4_3_0,
    CSR_4_3_1
} CSR_43_T ;
#define READ_CSR43() \
   ((READ_REGISTER_ULONG(0x1A4) & CSR43_MASK)  >> CSR43_START_BIT)

#define WRITE_CSR43(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ CSR43_MASK) | ((val << CSR43_START_BIT) & CSR43_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr44
//
// Return the value of register CSR44
//
// Notes : Register Csr44 at offset 0x1A8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_4( y) \
     WRITE_REGISTER_ULONG( 0x1A8 , y)

#define SET_BITS_CSR_4_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_4() \
     READ_REGISTER_ULONG(0x1A8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr44
//
// Return the value of register CSR_4_4
//
// Notes : Register context swap registers (CSR44) at the offset 0x1A8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR44 
    // 
#define CSR44_MASK 0xFFFFFFFFU
#define CSR44_OFFSET 31
#define CSR44_START_BIT 0
#define CSR44_WIDTH 32


#define CSR_44_REG 0x1A8

typedef enum csr44 {
    CSR_4_4_0,
    CSR_4_4_1
} CSR_44_T ;
#define READ_CSR44() \
   ((READ_REGISTER_ULONG(0x1A8) & CSR44_MASK)  >> CSR44_START_BIT)

#define WRITE_CSR44(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ CSR44_MASK) | ((val << CSR44_START_BIT) & CSR44_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr45
//
// Return the value of register CSR45
//
// Notes : Register Csr45 at offset 0x1AC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_5( y) \
     WRITE_REGISTER_ULONG( 0x1AC , y)

#define SET_BITS_CSR_4_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_5() \
     READ_REGISTER_ULONG(0x1AC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr45
//
// Return the value of register CSR_4_5
//
// Notes : Register context swap registers (CSR45) at the offset 0x1AC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR45 
    // 
#define CSR45_MASK 0xFFFFFFFFU
#define CSR45_OFFSET 31
#define CSR45_START_BIT 0
#define CSR45_WIDTH 32


#define CSR_45_REG 0x1AC

typedef enum csr45 {
    CSR_4_5_0,
    CSR_4_5_1
} CSR_45_T ;
#define READ_CSR45() \
   ((READ_REGISTER_ULONG(0x1AC) & CSR45_MASK)  >> CSR45_START_BIT)

#define WRITE_CSR45(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ CSR45_MASK) | ((val << CSR45_START_BIT) & CSR45_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr46
//
// Return the value of register CSR46
//
// Notes : Register Csr46 at offset 0x1B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_6( y) \
     WRITE_REGISTER_ULONG( 0x1B0 , y)

#define SET_BITS_CSR_4_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_6() \
     READ_REGISTER_ULONG(0x1B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr46
//
// Return the value of register CSR_4_6
//
// Notes : Register context swap registers (CSR46) at the offset 0x1B0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR46 
    // 
#define CSR46_MASK 0xFFFFFFFFU
#define CSR46_OFFSET 31
#define CSR46_START_BIT 0
#define CSR46_WIDTH 32


#define CSR_46_REG 0x1B0

typedef enum csr46 {
    CSR_4_6_0,
    CSR_4_6_1
} CSR_46_T ;
#define READ_CSR46() \
   ((READ_REGISTER_ULONG(0x1B0) & CSR46_MASK)  >> CSR46_START_BIT)

#define WRITE_CSR46(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ CSR46_MASK) | ((val << CSR46_START_BIT) & CSR46_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr47
//
// Return the value of register CSR47
//
// Notes : Register Csr47 at offset 0x1B4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_7( y) \
     WRITE_REGISTER_ULONG( 0x1B4 , y)

#define SET_BITS_CSR_4_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B4); \
     WRITE_REGISTER_ULONG( 0x1B4 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B4); \
     WRITE_REGISTER_ULONG( 0x1B4 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_7() \
     READ_REGISTER_ULONG(0x1B4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr47
//
// Return the value of register CSR_4_7
//
// Notes : Register context swap registers (CSR47) at the offset 0x1B4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR47 
    // 
#define CSR47_MASK 0xFFFFFFFFU
#define CSR47_OFFSET 31
#define CSR47_START_BIT 0
#define CSR47_WIDTH 32


#define CSR_47_REG 0x1B4

typedef enum csr47 {
    CSR_4_7_0,
    CSR_4_7_1
} CSR_47_T ;
#define READ_CSR47() \
   ((READ_REGISTER_ULONG(0x1B4) & CSR47_MASK)  >> CSR47_START_BIT)

#define WRITE_CSR47(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B4); \
     WRITE_REGISTER_ULONG(0x1B4, (OldValue & ~ CSR47_MASK) | ((val << CSR47_START_BIT) & CSR47_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr48
//
// Return the value of register CSR48
//
// Notes : Register Csr48 at offset 0x1B8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_8( y) \
     WRITE_REGISTER_ULONG( 0x1B8 , y)

#define SET_BITS_CSR_4_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B8); \
     WRITE_REGISTER_ULONG( 0x1B8 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B8); \
     WRITE_REGISTER_ULONG( 0x1B8 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_8() \
     READ_REGISTER_ULONG(0x1B8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr48
//
// Return the value of register CSR_4_8
//
// Notes : Register context swap registers (CSR48) at the offset 0x1B8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR48 
    // 
#define CSR48_MASK 0xFFFFFFFFU
#define CSR48_OFFSET 31
#define CSR48_START_BIT 0
#define CSR48_WIDTH 32


#define CSR_48_REG 0x1B8

typedef enum csr48 {
    CSR_4_8_0,
    CSR_4_8_1
} CSR_48_T ;
#define READ_CSR48() \
   ((READ_REGISTER_ULONG(0x1B8) & CSR48_MASK)  >> CSR48_START_BIT)

#define WRITE_CSR48(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B8); \
     WRITE_REGISTER_ULONG(0x1B8, (OldValue & ~ CSR48_MASK) | ((val << CSR48_START_BIT) & CSR48_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr49
//
// Return the value of register CSR49
//
// Notes : Register Csr49 at offset 0x1BC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_4_9( y) \
     WRITE_REGISTER_ULONG( 0x1BC , y)

#define SET_BITS_CSR_4_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1BC); \
     WRITE_REGISTER_ULONG( 0x1BC , val |  mask ); \
   }

#define CLEAR_BITS_CSR_4_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1BC); \
     WRITE_REGISTER_ULONG( 0x1BC , val & ~mask ); \
   }

#define READ_REGISTER_CSR_4_9() \
     READ_REGISTER_ULONG(0x1BC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr49
//
// Return the value of register CSR_4_9
//
// Notes : Register context swap registers (CSR49) at the offset 0x1BC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR49 
    // 
#define CSR49_MASK 0xFFFFFFFFU
#define CSR49_OFFSET 31
#define CSR49_START_BIT 0
#define CSR49_WIDTH 32


#define CSR_49_REG 0x1BC

typedef enum csr49 {
    CSR_4_9_0,
    CSR_4_9_1
} CSR_49_T ;
#define READ_CSR49() \
   ((READ_REGISTER_ULONG(0x1BC) & CSR49_MASK)  >> CSR49_START_BIT)

#define WRITE_CSR49(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1BC); \
     WRITE_REGISTER_ULONG(0x1BC, (OldValue & ~ CSR49_MASK) | ((val << CSR49_START_BIT) & CSR49_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr50
//
// Return the value of register CSR50
//
// Notes : Register Csr50 at offset 0x1C0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_5_0( y) \
     WRITE_REGISTER_ULONG( 0x1C0 , y)

#define SET_BITS_CSR_5_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_5_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_5_0() \
     READ_REGISTER_ULONG(0x1C0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr50
//
// Return the value of register CSR_5_0
//
// Notes : Register context swap registers (CSR50) at the offset 0x1C0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR50 
    // 
#define CSR50_MASK 0xFFFFFFFFU
#define CSR50_OFFSET 31
#define CSR50_START_BIT 0
#define CSR50_WIDTH 32


#define CSR_50_REG 0x1C0

typedef enum csr50 {
    CSR_5_0_0,
    CSR_5_0_1
} CSR_50_T ;
#define READ_CSR50() \
   ((READ_REGISTER_ULONG(0x1C0) & CSR50_MASK)  >> CSR50_START_BIT)

#define WRITE_CSR50(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ CSR50_MASK) | ((val << CSR50_START_BIT) & CSR50_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr51
//
// Return the value of register CSR51
//
// Notes : Register Csr51 at offset 0x1C4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_5_1( y) \
     WRITE_REGISTER_ULONG( 0x1C4 , y)

#define SET_BITS_CSR_5_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG( 0x1C4 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_5_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG( 0x1C4 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_5_1() \
     READ_REGISTER_ULONG(0x1C4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr51
//
// Return the value of register CSR_5_1
//
// Notes : Register context swap registers (CSR51) at the offset 0x1C4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR51 
    // 
#define CSR51_MASK 0xFFFFFFFFU
#define CSR51_OFFSET 31
#define CSR51_START_BIT 0
#define CSR51_WIDTH 32


#define CSR_51_REG 0x1C4

typedef enum csr51 {
    CSR_5_1_0,
    CSR_5_1_1
} CSR_51_T ;
#define READ_CSR51() \
   ((READ_REGISTER_ULONG(0x1C4) & CSR51_MASK)  >> CSR51_START_BIT)

#define WRITE_CSR51(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, (OldValue & ~ CSR51_MASK) | ((val << CSR51_START_BIT) & CSR51_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr52
//
// Return the value of register CSR52
//
// Notes : Register Csr52 at offset 0x1C8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_5_2( y) \
     WRITE_REGISTER_ULONG( 0x1C8 , y)

#define SET_BITS_CSR_5_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  mask ); \
   }

#define CLEAR_BITS_CSR_5_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val & ~mask ); \
   }

#define READ_REGISTER_CSR_5_2() \
     READ_REGISTER_ULONG(0x1C8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr52
//
// Return the value of register CSR_5_2
//
// Notes : Register context swap registers (CSR52) at the offset 0x1C8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR52 
    // 
#define CSR52_MASK 0xFFFFFFFFU
#define CSR52_OFFSET 31
#define CSR52_START_BIT 0
#define CSR52_WIDTH 32


#define CSR_52_REG 0x1C8

typedef enum csr52 {
    CSR_5_2_0,
    CSR_5_2_1
} CSR_52_T ;
#define READ_CSR52() \
   ((READ_REGISTER_ULONG(0x1C8) & CSR52_MASK)  >> CSR52_START_BIT)

#define WRITE_CSR52(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ CSR52_MASK) | ((val << CSR52_START_BIT) & CSR52_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr53
//
// Return the value of register CSR53
//
// Notes : Register Csr53 at offset 0x1CC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSR_5_3( y) \
     WRITE_REGISTER_ULONG( 0x1CC , y)

#define SET_BITS_CSR_5_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  mask ); \
   }

#define CLEAR_BITS_CSR_5_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val & ~mask ); \
   }

#define READ_REGISTER_CSR_5_3() \
     READ_REGISTER_ULONG(0x1CC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr53
//
// Return the value of register CSR_5_3
//
// Notes : Register context swap registers (CSR53) at the offset 0x1CC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR53 
    // 
#define CSR53_MASK 0xFFFFFFFFU
#define CSR53_OFFSET 31
#define CSR53_START_BIT 0
#define CSR53_WIDTH 32


#define CSR_53_REG 0x1CC

typedef enum csr53 {
    CSR_5_3_0,
    CSR_5_3_1
} CSR_53_T ;
#define READ_CSR53() \
   ((READ_REGISTER_ULONG(0x1CC) & CSR53_MASK)  >> CSR53_START_BIT)

#define WRITE_CSR53(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ CSR53_MASK) | ((val << CSR53_START_BIT) & CSR53_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr0
//
// Return the value of register HASH_HR0
//
// Notes : Register HashHr0 at offset 0x310
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_0() \
     READ_REGISTER_ULONG(0x310)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr0
//
// Return the value of register HASH_HR_0
//
// Notes : Register HASH digest register (HASH_HR0) at the offset 0x310, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H0 
    // 
#define H0_MASK 0xFFFFFFFFU
#define H0_OFFSET 31
#define H0_START_BIT 0
#define H0_WIDTH 32


#define HASH_HR_0_REG 0x310

#define READ_H0() \
   ((READ_REGISTER_ULONG(0x310) & H0_MASK)  >> H0_START_BIT)

#define WRITE_H0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x310); \
     WRITE_REGISTER_ULONG(0x310, (OldValue & ~ H0_MASK) | ((val << H0_START_BIT) & H0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr1
//
// Return the value of register HASH_HR1
//
// Notes : Register HashHr1 at offset 0x314
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_1() \
     READ_REGISTER_ULONG(0x314)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr1
//
// Return the value of register HASH_HR_1
//
// Notes : Register read-only (HASH_HR1) at the offset 0x314, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H1 
    // 
#define H1_MASK 0xFFFFFFFFU
#define H1_OFFSET 31
#define H1_START_BIT 0
#define H1_WIDTH 32


#define HASH_HR_1_REG 0x314

#define READ_H1() \
   ((READ_REGISTER_ULONG(0x314) & H1_MASK)  >> H1_START_BIT)

#define WRITE_H1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x314); \
     WRITE_REGISTER_ULONG(0x314, (OldValue & ~ H1_MASK) | ((val << H1_START_BIT) & H1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr2
//
// Return the value of register HASH_HR2
//
// Notes : Register HashHr2 at offset 0x318
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_2() \
     READ_REGISTER_ULONG(0x318)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr2
//
// Return the value of register HASH_HR_2
//
// Notes : Register read-only (HASH_HR2) at the offset 0x318, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H2 
    // 
#define H2_MASK 0xFFFFFFFFU
#define H2_OFFSET 31
#define H2_START_BIT 0
#define H2_WIDTH 32


#define HASH_HR_2_REG 0x318

#define READ_H2() \
   ((READ_REGISTER_ULONG(0x318) & H2_MASK)  >> H2_START_BIT)

#define WRITE_H2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x318); \
     WRITE_REGISTER_ULONG(0x318, (OldValue & ~ H2_MASK) | ((val << H2_START_BIT) & H2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr3
//
// Return the value of register HASH_HR3
//
// Notes : Register HashHr3 at offset 0x31C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_3() \
     READ_REGISTER_ULONG(0x31C)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr3
//
// Return the value of register HASH_HR_3
//
// Notes : Register read-only (HASH_HR3) at the offset 0x31C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H3 
    // 
#define H3_MASK 0xFFFFFFFFU
#define H3_OFFSET 31
#define H3_START_BIT 0
#define H3_WIDTH 32


#define HASH_HR_3_REG 0x31C

#define READ_H3() \
   ((READ_REGISTER_ULONG(0x31C) & H3_MASK)  >> H3_START_BIT)

#define WRITE_H3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x31C); \
     WRITE_REGISTER_ULONG(0x31C, (OldValue & ~ H3_MASK) | ((val << H3_START_BIT) & H3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr4
//
// Return the value of register HASH_HR4
//
// Notes : Register HashHr4 at offset 0x320
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_4() \
     READ_REGISTER_ULONG(0x320)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr4
//
// Return the value of register HASH_HR_4
//
// Notes : Register read-only (HASH_HR4) at the offset 0x320, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H4 
    // 
#define H4_MASK 0xFFFFFFFFU
#define H4_OFFSET 31
#define H4_START_BIT 0
#define H4_WIDTH 32


#define HASH_HR_4_REG 0x320

#define READ_H4() \
   ((READ_REGISTER_ULONG(0x320) & H4_MASK)  >> H4_START_BIT)

#define WRITE_H4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ H4_MASK) | ((val << H4_START_BIT) & H4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr5
//
// Return the value of register HASH_HR5
//
// Notes : Register HashHr5 at offset 0x324
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_5() \
     READ_REGISTER_ULONG(0x324)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr5
//
// Return the value of register HASH_HR_5
//
// Notes : Register read-only (HASH_HR5) at the offset 0x324, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H5 
    // 
#define H5_MASK 0xFFFFFFFFU
#define H5_OFFSET 31
#define H5_START_BIT 0
#define H5_WIDTH 32


#define HASH_HR_5_REG 0x324

typedef enum h5 {
    H_5_0,
    H_5_1
} H5_T ;
#define READ_H5() \
   ((READ_REGISTER_ULONG(0x324) & H5_MASK)  >> H5_START_BIT)

#define WRITE_H5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x324); \
     WRITE_REGISTER_ULONG(0x324, (OldValue & ~ H5_MASK) | ((val << H5_START_BIT) & H5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr6
//
// Return the value of register HASH_HR6
//
// Notes : Register HashHr6 at offset 0x328
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_6() \
     READ_REGISTER_ULONG(0x328)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr6
//
// Return the value of register HASH_HR_6
//
// Notes : Register read-only (HASH_HR6) at the offset 0x328, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H6 
    // 
#define H6_MASK 0xFFFFFFFFU
#define H6_OFFSET 31
#define H6_START_BIT 0
#define H6_WIDTH 32


#define HASH_HR_6_REG 0x328

typedef enum h6 {
    H_6_0,
    H_6_1
} H6_T ;
#define READ_H6() \
   ((READ_REGISTER_ULONG(0x328) & H6_MASK)  >> H6_START_BIT)

#define WRITE_H6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ H6_MASK) | ((val << H6_START_BIT) & H6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr7
//
// Return the value of register HASH_HR7
//
// Notes : Register HashHr7 at offset 0x32C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HASH_HR_7() \
     READ_REGISTER_ULONG(0x32C)

/////////////////////////////////////////////////////////////////////////
//
// Function : HashHr7
//
// Return the value of register HASH_HR_7
//
// Notes : Register read-only (HASH_HR7) at the offset 0x32C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // H7 
    // 
#define H7_MASK 0xFFFFFFFFU
#define H7_OFFSET 31
#define H7_START_BIT 0
#define H7_WIDTH 32


#define HASH_HR_7_REG 0x32C

typedef enum h7 {
    H_7_0,
    H_7_1
} H7_T ;
#define READ_H7() \
   ((READ_REGISTER_ULONG(0x32C) & H7_MASK)  >> H7_START_BIT)

#define WRITE_H7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x32C); \
     WRITE_REGISTER_ULONG(0x32C, (OldValue & ~ H7_MASK) | ((val << H7_START_BIT) & H7_MASK )); \
   } 

