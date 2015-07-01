/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/wwdg.h
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
 
#define WWDG 0x40002C00
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_CR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : T
//
// Return the value of register Cr
//
// Notes : bit counter (MSB to LSB) 
//        (CR) at the offset 0x0, Bits 0:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_T() \
   ((READ_REGISTER_ULONG(0x0) & T_MASK)  >> T_START_BIT)

#define WRITE_T(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ T_MASK) | ((val << T_START_BIT) & T_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : WDGA
//
// Return the value of register Cr
//
// Notes : Activation bit 
//        (CR) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WDGA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WDGA_MASK) | ((val << WDGA_START_BIT) & WDGA_MASK )); \
   } 

#define ENABLE_WDGA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WDGA_MASK ); \
   }

#define DISABLE_WDGA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WDGA_MASK ); \
   } 

#define READ_WDGA() \
   ((READ_REGISTER_ULONG(0x0) & WDGA_MASK)  >> WDGA_START_BIT)

#define WHEN_WDGA_HIGH() \
     if ( READ_WDGA() )


#define UNLESS_WDGA_HIGH() \
     if (! READ_WDGA() )


#define WAIT_WDGA_LOW() \
    while ( READ_WDGA() );


#define WAIT_WDGA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDGA() && (--___t___ > 0)); }


#define WAIT_WDGA_HIGH() \
    while (! READ_WDGA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfr
//
// Return the value of register CFR
//
// Notes : Register Cfr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CFR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_CFR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_CFR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_CFR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfr
//
// Return the value of register CFR
//
// Notes : Register Configuration register (CFR) at the offset 0x4, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bit window value 
    // 
#define W_MASK 0x7FU
#define W_OFFSET 6
#define W_START_BIT 0
#define W_WIDTH 7


#define CFR_REG 0x4

typedef enum w {
    W_0,
    W_1
} W_T ;
#define READ_W() \
   ((READ_REGISTER_ULONG(0x4) & W_MASK)  >> W_START_BIT)

#define WRITE_W(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ W_MASK) | ((val << W_START_BIT) & W_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cfr
//
// Return the value of register CFR
//
// Notes : Register Configuration register (CFR) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timer base 
    // 
#define WDGTB0_MASK 0x80U
#define WDGTB0_OFFSET 7
#define WDGTB0_START_BIT 7
#define WDGTB0_WIDTH 1



typedef enum wdgtb0 {
    WDGTB_0_0,
    WDGTB_0_1
} WDGTB_0_T ;
#define WRITE_WDGTB0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ WDGTB0_MASK) | ((val << WDGTB0_START_BIT) & WDGTB0_MASK )); \
   } 

#define ENABLE_WDGTB0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  WDGTB0_MASK ); \
   }

#define DISABLE_WDGTB0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~WDGTB0_MASK ); \
   } 

#define READ_WDGTB0() \
   ((READ_REGISTER_ULONG(0x4) & WDGTB0_MASK)  >> WDGTB0_START_BIT)

#define WHEN_WDGTB0_HIGH() \
     if ( READ_WDGTB0() )


#define UNLESS_WDGTB0_HIGH() \
     if (! READ_WDGTB0() )


#define WAIT_WDGTB0_LOW() \
    while ( READ_WDGTB0() );


#define WAIT_WDGTB0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDGTB0() && (--___t___ > 0)); }


#define WAIT_WDGTB0_HIGH() \
    while (! READ_WDGTB0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfr
//
// Return the value of register CFR
//
// Notes : Register Configuration register (CFR) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timer base 
    // 
#define WDGTB1_MASK 0x100U
#define WDGTB1_OFFSET 8
#define WDGTB1_START_BIT 8
#define WDGTB1_WIDTH 1



typedef enum wdgtb1 {
    WDGTB_1_0,
    WDGTB_1_1
} WDGTB_1_T ;
#define WRITE_WDGTB1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ WDGTB1_MASK) | ((val << WDGTB1_START_BIT) & WDGTB1_MASK )); \
   } 

#define ENABLE_WDGTB1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  WDGTB1_MASK ); \
   }

#define DISABLE_WDGTB1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~WDGTB1_MASK ); \
   } 

#define READ_WDGTB1() \
   ((READ_REGISTER_ULONG(0x4) & WDGTB1_MASK)  >> WDGTB1_START_BIT)

#define WHEN_WDGTB1_HIGH() \
     if ( READ_WDGTB1() )


#define UNLESS_WDGTB1_HIGH() \
     if (! READ_WDGTB1() )


#define WAIT_WDGTB1_LOW() \
    while ( READ_WDGTB1() );


#define WAIT_WDGTB1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDGTB1() && (--___t___ > 0)); }


#define WAIT_WDGTB1_HIGH() \
    while (! READ_WDGTB1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfr
//
// Return the value of register CFR
//
// Notes : Register Configuration register (CFR) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Early wakeup interrupt 
    // 
#define EWI_MASK 0x200U
#define EWI_OFFSET 9
#define EWI_START_BIT 9
#define EWI_WIDTH 1



typedef enum ewi {
    EWI_0,
    EWI_1
} EWI_T ;
#define WRITE_EWI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ EWI_MASK) | ((val << EWI_START_BIT) & EWI_MASK )); \
   } 

#define ENABLE_EWI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  EWI_MASK ); \
   }

#define DISABLE_EWI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~EWI_MASK ); \
   } 

#define READ_EWI() \
   ((READ_REGISTER_ULONG(0x4) & EWI_MASK)  >> EWI_START_BIT)

#define WHEN_EWI_HIGH() \
     if ( READ_EWI() )


#define UNLESS_EWI_HIGH() \
     if (! READ_EWI() )


#define WAIT_EWI_LOW() \
    while ( READ_EWI() );


#define WAIT_EWI_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWI() && (--___t___ > 0)); }


#define WAIT_EWI_HIGH() \
    while (! READ_EWI() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_SR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_SR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_SR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : EWIF
//
// Return the value of register Sr
//
// Notes : Early wakeup interrupt flag 
//        (SR) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EWIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EWIF_MASK) | ((val << EWIF_START_BIT) & EWIF_MASK )); \
   } 

#define ENABLE_EWIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  EWIF_MASK ); \
   }

#define DISABLE_EWIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~EWIF_MASK ); \
   } 

#define READ_EWIF() \
   ((READ_REGISTER_ULONG(0x8) & EWIF_MASK)  >> EWIF_START_BIT)

#define WHEN_EWIF_HIGH() \
     if ( READ_EWIF() )


#define UNLESS_EWIF_HIGH() \
     if (! READ_EWIF() )


#define WAIT_EWIF_LOW() \
    while ( READ_EWIF() );


#define WAIT_EWIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWIF() && (--___t___ > 0)); }


#define WAIT_EWIF_HIGH() \
    while (! READ_EWIF() );


