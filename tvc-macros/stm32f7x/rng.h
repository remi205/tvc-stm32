/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/rng.h
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
 
#define RNG 0x50060800
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
// Function : RNGEN
//
// Return the value of register Cr
//
// Notes : Random number generator enable 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RNGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RNGEN_MASK) | ((val << RNGEN_START_BIT) & RNGEN_MASK )); \
   } 

#define ENABLE_RNGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  RNGEN_MASK ); \
   }

#define DISABLE_RNGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~RNGEN_MASK ); \
   } 

#define READ_RNGEN() \
   ((READ_REGISTER_ULONG(0x0) & RNGEN_MASK)  >> RNGEN_START_BIT)

#define WHEN_RNGEN_HIGH() \
     if ( READ_RNGEN() )


#define UNLESS_RNGEN_HIGH() \
     if (! READ_RNGEN() )


#define WAIT_RNGEN_LOW() \
    while ( READ_RNGEN() );


#define WAIT_RNGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RNGEN() && (--___t___ > 0)); }


#define WAIT_RNGEN_HIGH() \
    while (! READ_RNGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IE
//
// Return the value of register Cr
//
// Notes : Interrupt enable 
//        (CR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ IE_MASK) | ((val << IE_START_BIT) & IE_MASK )); \
   } 

#define ENABLE_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  IE_MASK ); \
   }

#define DISABLE_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~IE_MASK ); \
   } 

#define READ_IE() \
   ((READ_REGISTER_ULONG(0x0) & IE_MASK)  >> IE_START_BIT)

#define WHEN_IE_HIGH() \
     if ( READ_IE() )


#define UNLESS_IE_HIGH() \
     if (! READ_IE() )


#define WAIT_IE_LOW() \
    while ( READ_IE() );


#define WAIT_IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IE() && (--___t___ > 0)); }


#define WAIT_IE_HIGH() \
    while (! READ_IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : DRDY
//
// Return the value of register Sr
//
// Notes : Data ready 
//        (SR) at the offset 0x4, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DRDY_MASK) | ((val << DRDY_START_BIT) & DRDY_MASK )); \
   } 

#define ENABLE_DRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DRDY_MASK ); \
   }

#define DISABLE_DRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DRDY_MASK ); \
   } 

#define READ_DRDY() \
   ((READ_REGISTER_ULONG(0x4) & DRDY_MASK)  >> DRDY_START_BIT)

#define WHEN_DRDY_HIGH() \
     if ( READ_DRDY() )


#define UNLESS_DRDY_HIGH() \
     if (! READ_DRDY() )


#define WAIT_DRDY_LOW() \
    while ( READ_DRDY() );


#define WAIT_DRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DRDY() && (--___t___ > 0)); }


#define WAIT_DRDY_HIGH() \
    while (! READ_DRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CECS
//
// Return the value of register Sr
//
// Notes : Clock error current status 
//        (SR) at the offset 0x4, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CECS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CECS_MASK) | ((val << CECS_START_BIT) & CECS_MASK )); \
   } 

#define ENABLE_CECS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CECS_MASK ); \
   }

#define DISABLE_CECS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CECS_MASK ); \
   } 

#define READ_CECS() \
   ((READ_REGISTER_ULONG(0x4) & CECS_MASK)  >> CECS_START_BIT)

#define WHEN_CECS_HIGH() \
     if ( READ_CECS() )


#define UNLESS_CECS_HIGH() \
     if (! READ_CECS() )


#define WAIT_CECS_LOW() \
    while ( READ_CECS() );


#define WAIT_CECS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CECS() && (--___t___ > 0)); }


#define WAIT_CECS_HIGH() \
    while (! READ_CECS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SECS
//
// Return the value of register Sr
//
// Notes : Seed error current status 
//        (SR) at the offset 0x4, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SECS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SECS_MASK) | ((val << SECS_START_BIT) & SECS_MASK )); \
   } 

#define ENABLE_SECS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SECS_MASK ); \
   }

#define DISABLE_SECS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SECS_MASK ); \
   } 

#define READ_SECS() \
   ((READ_REGISTER_ULONG(0x4) & SECS_MASK)  >> SECS_START_BIT)

#define WHEN_SECS_HIGH() \
     if ( READ_SECS() )


#define UNLESS_SECS_HIGH() \
     if (! READ_SECS() )


#define WAIT_SECS_LOW() \
    while ( READ_SECS() );


#define WAIT_SECS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SECS() && (--___t___ > 0)); }


#define WAIT_SECS_HIGH() \
    while (! READ_SECS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CEIS
//
// Return the value of register Sr
//
// Notes : Clock error interrupt status 
//        (SR) at the offset 0x4, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CEIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CEIS_MASK) | ((val << CEIS_START_BIT) & CEIS_MASK )); \
   } 

#define ENABLE_CEIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CEIS_MASK ); \
   }

#define DISABLE_CEIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CEIS_MASK ); \
   } 

#define READ_CEIS() \
   ((READ_REGISTER_ULONG(0x4) & CEIS_MASK)  >> CEIS_START_BIT)

#define WHEN_CEIS_HIGH() \
     if ( READ_CEIS() )


#define UNLESS_CEIS_HIGH() \
     if (! READ_CEIS() )


#define WAIT_CEIS_LOW() \
    while ( READ_CEIS() );


#define WAIT_CEIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEIS() && (--___t___ > 0)); }


#define WAIT_CEIS_HIGH() \
    while (! READ_CEIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SEIS
//
// Return the value of register Sr
//
// Notes : Seed error interrupt status 
//        (SR) at the offset 0x4, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SEIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SEIS_MASK) | ((val << SEIS_START_BIT) & SEIS_MASK )); \
   } 

#define ENABLE_SEIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SEIS_MASK ); \
   }

#define DISABLE_SEIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SEIS_MASK ); \
   } 

#define READ_SEIS() \
   ((READ_REGISTER_ULONG(0x4) & SEIS_MASK)  >> SEIS_START_BIT)

#define WHEN_SEIS_HIGH() \
     if ( READ_SEIS() )


#define UNLESS_SEIS_HIGH() \
     if (! READ_SEIS() )


#define WAIT_SEIS_LOW() \
    while ( READ_SEIS() );


#define WAIT_SEIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SEIS() && (--___t___ > 0)); }


#define WAIT_SEIS_HIGH() \
    while (! READ_SEIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : RNDATA
//
// Return the value of register Dr
//
// Notes : Random data 
//        (DR) at the offset 0x8, Bits 0:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_RNDATA() \
   ((READ_REGISTER_ULONG(0x8) & RNDATA_MASK)  >> RNDATA_START_BIT)

#define WRITE_RNDATA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ RNDATA_MASK) | ((val << RNDATA_START_BIT) & RNDATA_MASK )); \
   } 

