/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_hs_pwrclk.h
// 
//
// Generated on the 29/06/2015 19:00 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by r�mi prud'homme
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht remi prudhomme, tvc stm32 2015  2015
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
#define OTG_HS_PWRCLK 0x40040E00
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsPcgcr
//
// Return the value of register OTG_HS_PCGCR
//
// Notes : Register OtgHsPcgcr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_PCGCR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_OTG_HS_PCGCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_PCGCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_PCGCR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsPcgcr
//
// Return the value of register OTG_HS_PCGCR
//
// Notes : Register Power and clock gating control register (OTG_HS_PCGCR) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PHY suspended 
    // 
#define PHYSUSP_MASK 0x10U
#define PHYSUSP_OFFSET 4
#define PHYSUSP_START_BIT 4
#define PHYSUSP_WIDTH 1


#define OTG_HS_PCGCR_REG 0x0

#define WRITE_PHYSUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PHYSUSP_MASK) | ((val << PHYSUSP_START_BIT) & PHYSUSP_MASK )); \
   } 

#define ENABLE_PHYSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PHYSUSP_MASK ); \
   }

#define DISABLE_PHYSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PHYSUSP_MASK ); \
   } 

#define READ_PHYSUSP() \
   ((READ_REGISTER_ULONG(0x0) & PHYSUSP_MASK)  >> PHYSUSP_START_BIT)

#define WHEN_PHYSUSP_HIGH() \
     if ( READ_PHYSUSP() )


#define UNLESS_PHYSUSP_HIGH() \
     if (! READ_PHYSUSP() )


#define WAIT_PHYSUSP_LOW() \
    while ( READ_PHYSUSP() );


#define WAIT_PHYSUSP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PHYSUSP() && (--___t___ > 0)); }


#define WAIT_PHYSUSP_HIGH() \
    while (! READ_PHYSUSP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsPcgcr
//
// Return the value of register OTG_HS_PCGCR
//
// Notes : Register Power and clock gating control register (OTG_HS_PCGCR) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Gate HCLK 
    // 
#define GATEHCLK_MASK 0x2U
#define GATEHCLK_OFFSET 1
#define GATEHCLK_START_BIT 1
#define GATEHCLK_WIDTH 1



#define WRITE_GATEHCLK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ GATEHCLK_MASK) | ((val << GATEHCLK_START_BIT) & GATEHCLK_MASK )); \
   } 

#define ENABLE_GATEHCLK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  GATEHCLK_MASK ); \
   }

#define DISABLE_GATEHCLK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~GATEHCLK_MASK ); \
   } 

#define READ_GATEHCLK() \
   ((READ_REGISTER_ULONG(0x0) & GATEHCLK_MASK)  >> GATEHCLK_START_BIT)

#define WHEN_GATEHCLK_HIGH() \
     if ( READ_GATEHCLK() )


#define UNLESS_GATEHCLK_HIGH() \
     if (! READ_GATEHCLK() )


#define WAIT_GATEHCLK_LOW() \
    while ( READ_GATEHCLK() );


#define WAIT_GATEHCLK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GATEHCLK() && (--___t___ > 0)); }


#define WAIT_GATEHCLK_HIGH() \
    while (! READ_GATEHCLK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsPcgcr
//
// Return the value of register OTG_HS_PCGCR
//
// Notes : Register Power and clock gating control register (OTG_HS_PCGCR) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stop PHY clock 
    // 
#define STPPCLK_MASK 0x1U
#define STPPCLK_OFFSET 0
#define STPPCLK_START_BIT 0
#define STPPCLK_WIDTH 1



#define WRITE_STPPCLK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ STPPCLK_MASK) | ((val << STPPCLK_START_BIT) & STPPCLK_MASK )); \
   } 

#define ENABLE_STPPCLK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  STPPCLK_MASK ); \
   }

#define DISABLE_STPPCLK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~STPPCLK_MASK ); \
   } 

#define READ_STPPCLK() \
   ((READ_REGISTER_ULONG(0x0) & STPPCLK_MASK)  >> STPPCLK_START_BIT)

#define WHEN_STPPCLK_HIGH() \
     if ( READ_STPPCLK() )


#define UNLESS_STPPCLK_HIGH() \
     if (! READ_STPPCLK() )


#define WAIT_STPPCLK_LOW() \
    while ( READ_STPPCLK() );


#define WAIT_STPPCLK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STPPCLK() && (--___t___ > 0)); }


#define WAIT_STPPCLK_HIGH() \
    while (! READ_STPPCLK() );

