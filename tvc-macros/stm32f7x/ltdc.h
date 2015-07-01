/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/ltdc.h
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
 
#define LTDC 0x40016800
/////////////////////////////////////////////////////////////////////////
//
// Function : Sscr
//
// Return the value of register SSCR
//
// Notes : Register Sscr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SSCR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_SSCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_SSCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_SSCR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sscr
//
// Return the value of register SSCR
//
// Notes : Register Synchronization Size Configuration Register (SSCR) at the offset 0x8, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Vertical Synchronization Height (in units of horizontal 
    // scan line) 
    // 
#define VSH_MASK 0x7FFU
#define VSH_OFFSET 10
#define VSH_START_BIT 0
#define VSH_WIDTH 11


#define SSCR_REG 0x8

typedef enum vsh {
    VSH_0,
    VSH_1
} VSH_T ;
#define READ_VSH() \
   ((READ_REGISTER_ULONG(0x8) & VSH_MASK)  >> VSH_START_BIT)

#define WRITE_VSH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ VSH_MASK) | ((val << VSH_START_BIT) & VSH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sscr
//
// Return the value of register SSCR
//
// Notes : Register Synchronization Size Configuration Register (SSCR) at the offset 0x8, Bits 16:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Horizontal Synchronization Width (in units of pixel clock 
    // period) 
    // 
#define HSW_MASK 0x3FF0000U
#define HSW_OFFSET 25
#define HSW_START_BIT 16
#define HSW_WIDTH 10



typedef enum hsw {
    HSW_0,
    HSW_1
} HSW_T ;
#define READ_HSW() \
   ((READ_REGISTER_ULONG(0x8) & HSW_MASK)  >> HSW_START_BIT)

#define WRITE_HSW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ HSW_MASK) | ((val << HSW_START_BIT) & HSW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bpcr
//
// Return the value of register BPCR
//
// Notes : Register Bpcr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BPCR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_BPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_BPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_BPCR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bpcr
//
// Return the value of register BPCR
//
// Notes : Register Back Porch Configuration Register (BPCR) at the offset 0xC, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Accumulated Vertical back porch (in units of horizontal 
    // scan line) 
    // 
#define AVBP_MASK 0x7FFU
#define AVBP_OFFSET 10
#define AVBP_START_BIT 0
#define AVBP_WIDTH 11


#define BPCR_REG 0xC

typedef enum avbp {
    AVBP_0,
    AVBP_1
} AVBP_T ;
#define READ_AVBP() \
   ((READ_REGISTER_ULONG(0xC) & AVBP_MASK)  >> AVBP_START_BIT)

#define WRITE_AVBP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ AVBP_MASK) | ((val << AVBP_START_BIT) & AVBP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bpcr
//
// Return the value of register BPCR
//
// Notes : Register Back Porch Configuration Register (BPCR) at the offset 0xC, Bits 16:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Accumulated Horizontal back porch (in units of pixel 
    // clock period) 
    // 
#define AHBP_MASK 0x3FF0000U
#define AHBP_OFFSET 25
#define AHBP_START_BIT 16
#define AHBP_WIDTH 10



typedef enum ahbp {
    AHBP_0,
    AHBP_1
} AHBP_T ;
#define READ_AHBP() \
   ((READ_REGISTER_ULONG(0xC) & AHBP_MASK)  >> AHBP_START_BIT)

#define WRITE_AHBP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ AHBP_MASK) | ((val << AHBP_START_BIT) & AHBP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Awcr
//
// Return the value of register AWCR
//
// Notes : Register Awcr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AWCR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_AWCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_AWCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_AWCR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Awcr
//
// Return the value of register AWCR
//
// Notes : Register Active Width Configuration Register (AWCR) at the offset 0x10, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Accumulated Active Height (in units of horizontal scan 
    // line) 
    // 
#define AAH_MASK 0x7FFU
#define AAH_OFFSET 10
#define AAH_START_BIT 0
#define AAH_WIDTH 11


#define AWCR_REG 0x10

typedef enum aah {
    AAH_0,
    AAH_1
} AAH_T ;
#define READ_AAH() \
   ((READ_REGISTER_ULONG(0x10) & AAH_MASK)  >> AAH_START_BIT)

#define WRITE_AAH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ AAH_MASK) | ((val << AAH_START_BIT) & AAH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Awcr
//
// Return the value of register AWCR
//
// Notes : Register Active Width Configuration Register (AWCR) at the offset 0x10, Bits 16:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AAV 
    // 
#define AAV_MASK 0x3FF0000U
#define AAV_OFFSET 25
#define AAV_START_BIT 16
#define AAV_WIDTH 10



typedef enum aav {
    AAV_0,
    AAV_1
} AAV_T ;
#define READ_AAV() \
   ((READ_REGISTER_ULONG(0x10) & AAV_MASK)  >> AAV_START_BIT)

#define WRITE_AAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ AAV_MASK) | ((val << AAV_START_BIT) & AAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Twcr
//
// Return the value of register TWCR
//
// Notes : Register Twcr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TWCR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_TWCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_TWCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_TWCR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Twcr
//
// Return the value of register TWCR
//
// Notes : Register Total Width Configuration Register (TWCR) at the offset 0x14, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Total Height (in units of horizontal scan line) 
    // 
#define TOTALH_MASK 0x7FFU
#define TOTALH_OFFSET 10
#define TOTALH_START_BIT 0
#define TOTALH_WIDTH 11


#define TWCR_REG 0x14

typedef enum totalh {
    TOTALH_0,
    TOTALH_1
} TOTALH_T ;
#define READ_TOTALH() \
   ((READ_REGISTER_ULONG(0x14) & TOTALH_MASK)  >> TOTALH_START_BIT)

#define WRITE_TOTALH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TOTALH_MASK) | ((val << TOTALH_START_BIT) & TOTALH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Twcr
//
// Return the value of register TWCR
//
// Notes : Register Total Width Configuration Register (TWCR) at the offset 0x14, Bits 16:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Total Width (in units of pixel clock period) 
    // 
#define TOTALW_MASK 0x3FF0000U
#define TOTALW_OFFSET 25
#define TOTALW_START_BIT 16
#define TOTALW_WIDTH 10



typedef enum totalw {
    TOTALW_0,
    TOTALW_1
} TOTALW_T ;
#define READ_TOTALW() \
   ((READ_REGISTER_ULONG(0x14) & TOTALW_MASK)  >> TOTALW_START_BIT)

#define WRITE_TOTALW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TOTALW_MASK) | ((val << TOTALW_START_BIT) & TOTALW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gcr
//
// Return the value of register GCR
//
// Notes : Register Gcr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : LTDCEN
//
// Return the value of register Gcr
//
// Notes : LCD-TFT controller enable bit 
//        (GCR) at the offset 0x18, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LTDCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ LTDCEN_MASK) | ((val << LTDCEN_START_BIT) & LTDCEN_MASK )); \
   } 

#define ENABLE_LTDCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  LTDCEN_MASK ); \
   }

#define DISABLE_LTDCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~LTDCEN_MASK ); \
   } 

#define READ_LTDCEN() \
   ((READ_REGISTER_ULONG(0x18) & LTDCEN_MASK)  >> LTDCEN_START_BIT)

#define WHEN_LTDCEN_HIGH() \
     if ( READ_LTDCEN() )


#define UNLESS_LTDCEN_HIGH() \
     if (! READ_LTDCEN() )


#define WAIT_LTDCEN_LOW() \
    while ( READ_LTDCEN() );


#define WAIT_LTDCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LTDCEN() && (--___t___ > 0)); }


#define WAIT_LTDCEN_HIGH() \
    while (! READ_LTDCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DBW
//
// Return the value of register Gcr
//
// Notes : Dither Blue Width 
//        (GCR) at the offset 0x18, Bits 4:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_DBW() \
   ((READ_REGISTER_ULONG(0x18) & DBW_MASK)  >> DBW_START_BIT)

#define WRITE_DBW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DBW_MASK) | ((val << DBW_START_BIT) & DBW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DGW
//
// Return the value of register Gcr
//
// Notes : Dither Green Width 
//        (GCR) at the offset 0x18, Bits 8:10
//
/////////////////////////////////////////////////////////////////////////
#define READ_DGW() \
   ((READ_REGISTER_ULONG(0x18) & DGW_MASK)  >> DGW_START_BIT)

#define WRITE_DGW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DGW_MASK) | ((val << DGW_START_BIT) & DGW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DRW
//
// Return the value of register Gcr
//
// Notes : Dither Red Width 
//        (GCR) at the offset 0x18, Bits 12:14
//
/////////////////////////////////////////////////////////////////////////
#define READ_DRW() \
   ((READ_REGISTER_ULONG(0x18) & DRW_MASK)  >> DRW_START_BIT)

#define WRITE_DRW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DRW_MASK) | ((val << DRW_START_BIT) & DRW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DEN
//
// Return the value of register Gcr
//
// Notes : Dither Enable 
//        (GCR) at the offset 0x18, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DEN_MASK) | ((val << DEN_START_BIT) & DEN_MASK )); \
   } 

#define ENABLE_DEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  DEN_MASK ); \
   }

#define DISABLE_DEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~DEN_MASK ); \
   } 

#define READ_DEN() \
   ((READ_REGISTER_ULONG(0x18) & DEN_MASK)  >> DEN_START_BIT)

#define WHEN_DEN_HIGH() \
     if ( READ_DEN() )


#define UNLESS_DEN_HIGH() \
     if (! READ_DEN() )


#define WAIT_DEN_LOW() \
    while ( READ_DEN() );


#define WAIT_DEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEN() && (--___t___ > 0)); }


#define WAIT_DEN_HIGH() \
    while (! READ_DEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PCPOL
//
// Return the value of register Gcr
//
// Notes : Pixel Clock Polarity 
//        (GCR) at the offset 0x18, Bits 28:28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PCPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ PCPOL_MASK) | ((val << PCPOL_START_BIT) & PCPOL_MASK )); \
   } 

#define ENABLE_PCPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  PCPOL_MASK ); \
   }

#define DISABLE_PCPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~PCPOL_MASK ); \
   } 

#define READ_PCPOL() \
   ((READ_REGISTER_ULONG(0x18) & PCPOL_MASK)  >> PCPOL_START_BIT)

#define WHEN_PCPOL_HIGH() \
     if ( READ_PCPOL() )


#define UNLESS_PCPOL_HIGH() \
     if (! READ_PCPOL() )


#define WAIT_PCPOL_LOW() \
    while ( READ_PCPOL() );


#define WAIT_PCPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCPOL() && (--___t___ > 0)); }


#define WAIT_PCPOL_HIGH() \
    while (! READ_PCPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DEPOL
//
// Return the value of register Gcr
//
// Notes : Data Enable Polarity 
//        (GCR) at the offset 0x18, Bits 29:29
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DEPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DEPOL_MASK) | ((val << DEPOL_START_BIT) & DEPOL_MASK )); \
   } 

#define ENABLE_DEPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  DEPOL_MASK ); \
   }

#define DISABLE_DEPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~DEPOL_MASK ); \
   } 

#define READ_DEPOL() \
   ((READ_REGISTER_ULONG(0x18) & DEPOL_MASK)  >> DEPOL_START_BIT)

#define WHEN_DEPOL_HIGH() \
     if ( READ_DEPOL() )


#define UNLESS_DEPOL_HIGH() \
     if (! READ_DEPOL() )


#define WAIT_DEPOL_LOW() \
    while ( READ_DEPOL() );


#define WAIT_DEPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEPOL() && (--___t___ > 0)); }


#define WAIT_DEPOL_HIGH() \
    while (! READ_DEPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : VSPOL
//
// Return the value of register Gcr
//
// Notes : Vertical Synchronization Polarity 
//        (GCR) at the offset 0x18, Bits 30:30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VSPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ VSPOL_MASK) | ((val << VSPOL_START_BIT) & VSPOL_MASK )); \
   } 

#define ENABLE_VSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  VSPOL_MASK ); \
   }

#define DISABLE_VSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~VSPOL_MASK ); \
   } 

#define READ_VSPOL() \
   ((READ_REGISTER_ULONG(0x18) & VSPOL_MASK)  >> VSPOL_START_BIT)

#define WHEN_VSPOL_HIGH() \
     if ( READ_VSPOL() )


#define UNLESS_VSPOL_HIGH() \
     if (! READ_VSPOL() )


#define WAIT_VSPOL_LOW() \
    while ( READ_VSPOL() );


#define WAIT_VSPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSPOL() && (--___t___ > 0)); }


#define WAIT_VSPOL_HIGH() \
    while (! READ_VSPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HSPOL
//
// Return the value of register Gcr
//
// Notes : Horizontal Synchronization Polarity 
//        (GCR) at the offset 0x18, Bits 31:31
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ HSPOL_MASK) | ((val << HSPOL_START_BIT) & HSPOL_MASK )); \
   } 

#define ENABLE_HSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  HSPOL_MASK ); \
   }

#define DISABLE_HSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~HSPOL_MASK ); \
   } 

#define READ_HSPOL() \
   ((READ_REGISTER_ULONG(0x18) & HSPOL_MASK)  >> HSPOL_START_BIT)

#define WHEN_HSPOL_HIGH() \
     if ( READ_HSPOL() )


#define UNLESS_HSPOL_HIGH() \
     if (! READ_HSPOL() )


#define WAIT_HSPOL_LOW() \
    while ( READ_HSPOL() );


#define WAIT_HSPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSPOL() && (--___t___ > 0)); }


#define WAIT_HSPOL_HIGH() \
    while (! READ_HSPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Srcr
//
// Return the value of register SRCR
//
// Notes : Register Srcr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SRCR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_SRCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_SRCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_SRCR() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Srcr
//
// Return the value of register SRCR
//
// Notes : Register Shadow Reload Configuration Register (SRCR) at the offset 0x24, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Immediate Reload 
    // 
#define IMR_MASK 0x1U
#define IMR_OFFSET 0
#define IMR_START_BIT 0
#define IMR_WIDTH 1


#define SRCR_REG 0x24

typedef enum imr {
    IMR_0,
    IMR_1
} IMR_T ;
#define WRITE_IMR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ IMR_MASK) | ((val << IMR_START_BIT) & IMR_MASK )); \
   } 

#define ENABLE_IMR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  IMR_MASK ); \
   }

#define DISABLE_IMR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~IMR_MASK ); \
   } 

#define READ_IMR() \
   ((READ_REGISTER_ULONG(0x24) & IMR_MASK)  >> IMR_START_BIT)

#define WHEN_IMR_HIGH() \
     if ( READ_IMR() )


#define UNLESS_IMR_HIGH() \
     if (! READ_IMR() )


#define WAIT_IMR_LOW() \
    while ( READ_IMR() );


#define WAIT_IMR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IMR() && (--___t___ > 0)); }


#define WAIT_IMR_HIGH() \
    while (! READ_IMR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Srcr
//
// Return the value of register SRCR
//
// Notes : Register Shadow Reload Configuration Register (SRCR) at the offset 0x24, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Vertical Blanking Reload 
    // 
#define VBR_MASK 0x2U
#define VBR_OFFSET 1
#define VBR_START_BIT 1
#define VBR_WIDTH 1



typedef enum vbr {
    VBR_0,
    VBR_1
} VBR_T ;
#define WRITE_VBR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ VBR_MASK) | ((val << VBR_START_BIT) & VBR_MASK )); \
   } 

#define ENABLE_VBR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  VBR_MASK ); \
   }

#define DISABLE_VBR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~VBR_MASK ); \
   } 

#define READ_VBR() \
   ((READ_REGISTER_ULONG(0x24) & VBR_MASK)  >> VBR_START_BIT)

#define WHEN_VBR_HIGH() \
     if ( READ_VBR() )


#define UNLESS_VBR_HIGH() \
     if (! READ_VBR() )


#define WAIT_VBR_LOW() \
    while ( READ_VBR() );


#define WAIT_VBR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VBR() && (--___t___ > 0)); }


#define WAIT_VBR_HIGH() \
    while (! READ_VBR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bccr
//
// Return the value of register BCCR
//
// Notes : Register Bccr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCCR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_BCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_BCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_BCCR() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bccr
//
// Return the value of register BCCR
//
// Notes : Register Background Color Configuration Register (BCCR) at the offset 0x2C, Bits 0:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Background Color Red value 
    // 
#define BC_MASK 0xFFFFFFU
#define BC_OFFSET 23
#define BC_START_BIT 0
#define BC_WIDTH 24


#define BCCR_REG 0x2C

typedef enum bc {
    BC_0,
    BC_1
} BC_T ;
#define READ_BC() \
   ((READ_REGISTER_ULONG(0x2C) & BC_MASK)  >> BC_START_BIT)

#define WRITE_BC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ BC_MASK) | ((val << BC_START_BIT) & BC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Ier at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IER( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_IER() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : LIE
//
// Return the value of register Ier
//
// Notes : Line Interrupt Enable 
//        (IER) at the offset 0x34, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ LIE_MASK) | ((val << LIE_START_BIT) & LIE_MASK )); \
   } 

#define ENABLE_LIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  LIE_MASK ); \
   }

#define DISABLE_LIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~LIE_MASK ); \
   } 

#define READ_LIE() \
   ((READ_REGISTER_ULONG(0x34) & LIE_MASK)  >> LIE_START_BIT)

#define WHEN_LIE_HIGH() \
     if ( READ_LIE() )


#define UNLESS_LIE_HIGH() \
     if (! READ_LIE() )


#define WAIT_LIE_LOW() \
    while ( READ_LIE() );


#define WAIT_LIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LIE() && (--___t___ > 0)); }


#define WAIT_LIE_HIGH() \
    while (! READ_LIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FUIE
//
// Return the value of register Ier
//
// Notes : FIFO Underrun Interrupt Enable 
//        (IER) at the offset 0x34, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FUIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ FUIE_MASK) | ((val << FUIE_START_BIT) & FUIE_MASK )); \
   } 

#define ENABLE_FUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  FUIE_MASK ); \
   }

#define DISABLE_FUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~FUIE_MASK ); \
   } 

#define READ_FUIE() \
   ((READ_REGISTER_ULONG(0x34) & FUIE_MASK)  >> FUIE_START_BIT)

#define WHEN_FUIE_HIGH() \
     if ( READ_FUIE() )


#define UNLESS_FUIE_HIGH() \
     if (! READ_FUIE() )


#define WAIT_FUIE_LOW() \
    while ( READ_FUIE() );


#define WAIT_FUIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FUIE() && (--___t___ > 0)); }


#define WAIT_FUIE_HIGH() \
    while (! READ_FUIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TERRIE
//
// Return the value of register Ier
//
// Notes : Transfer Error Interrupt Enable 
//        (IER) at the offset 0x34, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TERRIE_MASK) | ((val << TERRIE_START_BIT) & TERRIE_MASK )); \
   } 

#define ENABLE_TERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TERRIE_MASK ); \
   }

#define DISABLE_TERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TERRIE_MASK ); \
   } 

#define READ_TERRIE() \
   ((READ_REGISTER_ULONG(0x34) & TERRIE_MASK)  >> TERRIE_START_BIT)

#define WHEN_TERRIE_HIGH() \
     if ( READ_TERRIE() )


#define UNLESS_TERRIE_HIGH() \
     if (! READ_TERRIE() )


#define WAIT_TERRIE_LOW() \
    while ( READ_TERRIE() );


#define WAIT_TERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TERRIE() && (--___t___ > 0)); }


#define WAIT_TERRIE_HIGH() \
    while (! READ_TERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RRIE
//
// Return the value of register Ier
//
// Notes : Register Reload interrupt enable 
//        (IER) at the offset 0x34, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RRIE_MASK) | ((val << RRIE_START_BIT) & RRIE_MASK )); \
   } 

#define ENABLE_RRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RRIE_MASK ); \
   }

#define DISABLE_RRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RRIE_MASK ); \
   } 

#define READ_RRIE() \
   ((READ_REGISTER_ULONG(0x34) & RRIE_MASK)  >> RRIE_START_BIT)

#define WHEN_RRIE_HIGH() \
     if ( READ_RRIE() )


#define UNLESS_RRIE_HIGH() \
     if (! READ_RRIE() )


#define WAIT_RRIE_LOW() \
    while ( READ_RRIE() );


#define WAIT_RRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RRIE() && (--___t___ > 0)); }


#define WAIT_RRIE_HIGH() \
    while (! READ_RRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ISR() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : LIF
//
// Return the value of register Isr
//
// Notes : Line Interrupt flag 
//        (ISR) at the offset 0x38, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ LIF_MASK) | ((val << LIF_START_BIT) & LIF_MASK )); \
   } 

#define ENABLE_LIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  LIF_MASK ); \
   }

#define DISABLE_LIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~LIF_MASK ); \
   } 

#define READ_LIF() \
   ((READ_REGISTER_ULONG(0x38) & LIF_MASK)  >> LIF_START_BIT)

#define WHEN_LIF_HIGH() \
     if ( READ_LIF() )


#define UNLESS_LIF_HIGH() \
     if (! READ_LIF() )


#define WAIT_LIF_LOW() \
    while ( READ_LIF() );


#define WAIT_LIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LIF() && (--___t___ > 0)); }


#define WAIT_LIF_HIGH() \
    while (! READ_LIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FUIF
//
// Return the value of register Isr
//
// Notes : FIFO Underrun Interrupt flag 
//        (ISR) at the offset 0x38, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FUIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ FUIF_MASK) | ((val << FUIF_START_BIT) & FUIF_MASK )); \
   } 

#define ENABLE_FUIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  FUIF_MASK ); \
   }

#define DISABLE_FUIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~FUIF_MASK ); \
   } 

#define READ_FUIF() \
   ((READ_REGISTER_ULONG(0x38) & FUIF_MASK)  >> FUIF_START_BIT)

#define WHEN_FUIF_HIGH() \
     if ( READ_FUIF() )


#define UNLESS_FUIF_HIGH() \
     if (! READ_FUIF() )


#define WAIT_FUIF_LOW() \
    while ( READ_FUIF() );


#define WAIT_FUIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FUIF() && (--___t___ > 0)); }


#define WAIT_FUIF_HIGH() \
    while (! READ_FUIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TERRIF
//
// Return the value of register Isr
//
// Notes : Transfer Error interrupt flag 
//        (ISR) at the offset 0x38, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TERRIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ TERRIF_MASK) | ((val << TERRIF_START_BIT) & TERRIF_MASK )); \
   } 

#define ENABLE_TERRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  TERRIF_MASK ); \
   }

#define DISABLE_TERRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~TERRIF_MASK ); \
   } 

#define READ_TERRIF() \
   ((READ_REGISTER_ULONG(0x38) & TERRIF_MASK)  >> TERRIF_START_BIT)

#define WHEN_TERRIF_HIGH() \
     if ( READ_TERRIF() )


#define UNLESS_TERRIF_HIGH() \
     if (! READ_TERRIF() )


#define WAIT_TERRIF_LOW() \
    while ( READ_TERRIF() );


#define WAIT_TERRIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TERRIF() && (--___t___ > 0)); }


#define WAIT_TERRIF_HIGH() \
    while (! READ_TERRIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RRIF
//
// Return the value of register Isr
//
// Notes : Register Reload Interrupt Flag 
//        (ISR) at the offset 0x38, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RRIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ RRIF_MASK) | ((val << RRIF_START_BIT) & RRIF_MASK )); \
   } 

#define ENABLE_RRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  RRIF_MASK ); \
   }

#define DISABLE_RRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~RRIF_MASK ); \
   } 

#define READ_RRIF() \
   ((READ_REGISTER_ULONG(0x38) & RRIF_MASK)  >> RRIF_START_BIT)

#define WHEN_RRIF_HIGH() \
     if ( READ_RRIF() )


#define UNLESS_RRIF_HIGH() \
     if (! READ_RRIF() )


#define WAIT_RRIF_LOW() \
    while ( READ_RRIF() );


#define WAIT_RRIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RRIF() && (--___t___ > 0)); }


#define WAIT_RRIF_HIGH() \
    while (! READ_RRIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : CLIF
//
// Return the value of register Icr
//
// Notes : Clears the Line Interrupt Flag 
//        (ICR) at the offset 0x3C, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CLIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CLIF_MASK) | ((val << CLIF_START_BIT) & CLIF_MASK )); \
   } 

#define ENABLE_CLIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CLIF_MASK ); \
   }

#define DISABLE_CLIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CLIF_MASK ); \
   } 

#define READ_CLIF() \
   ((READ_REGISTER_ULONG(0x3C) & CLIF_MASK)  >> CLIF_START_BIT)

#define WHEN_CLIF_HIGH() \
     if ( READ_CLIF() )


#define UNLESS_CLIF_HIGH() \
     if (! READ_CLIF() )


#define WAIT_CLIF_LOW() \
    while ( READ_CLIF() );


#define WAIT_CLIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CLIF() && (--___t___ > 0)); }


#define WAIT_CLIF_HIGH() \
    while (! READ_CLIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CFUIF
//
// Return the value of register Icr
//
// Notes : Clears the FIFO Underrun Interrupt flag 
//        (ICR) at the offset 0x3C, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CFUIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CFUIF_MASK) | ((val << CFUIF_START_BIT) & CFUIF_MASK )); \
   } 

#define ENABLE_CFUIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CFUIF_MASK ); \
   }

#define DISABLE_CFUIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CFUIF_MASK ); \
   } 

#define READ_CFUIF() \
   ((READ_REGISTER_ULONG(0x3C) & CFUIF_MASK)  >> CFUIF_START_BIT)

#define WHEN_CFUIF_HIGH() \
     if ( READ_CFUIF() )


#define UNLESS_CFUIF_HIGH() \
     if (! READ_CFUIF() )


#define WAIT_CFUIF_LOW() \
    while ( READ_CFUIF() );


#define WAIT_CFUIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFUIF() && (--___t___ > 0)); }


#define WAIT_CFUIF_HIGH() \
    while (! READ_CFUIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CTERRIF
//
// Return the value of register Icr
//
// Notes : Clears the Transfer Error Interrupt Flag 
//        (ICR) at the offset 0x3C, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTERRIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CTERRIF_MASK) | ((val << CTERRIF_START_BIT) & CTERRIF_MASK )); \
   } 

#define ENABLE_CTERRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CTERRIF_MASK ); \
   }

#define DISABLE_CTERRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CTERRIF_MASK ); \
   } 

#define READ_CTERRIF() \
   ((READ_REGISTER_ULONG(0x3C) & CTERRIF_MASK)  >> CTERRIF_START_BIT)

#define WHEN_CTERRIF_HIGH() \
     if ( READ_CTERRIF() )


#define UNLESS_CTERRIF_HIGH() \
     if (! READ_CTERRIF() )


#define WAIT_CTERRIF_LOW() \
    while ( READ_CTERRIF() );


#define WAIT_CTERRIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTERRIF() && (--___t___ > 0)); }


#define WAIT_CTERRIF_HIGH() \
    while (! READ_CTERRIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CRRIF
//
// Return the value of register Icr
//
// Notes : Clears Register Reload Interrupt Flag 
//        (ICR) at the offset 0x3C, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CRRIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CRRIF_MASK) | ((val << CRRIF_START_BIT) & CRRIF_MASK )); \
   } 

#define ENABLE_CRRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CRRIF_MASK ); \
   }

#define DISABLE_CRRIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CRRIF_MASK ); \
   } 

#define READ_CRRIF() \
   ((READ_REGISTER_ULONG(0x3C) & CRRIF_MASK)  >> CRRIF_START_BIT)

#define WHEN_CRRIF_HIGH() \
     if ( READ_CRRIF() )


#define UNLESS_CRRIF_HIGH() \
     if (! READ_CRRIF() )


#define WAIT_CRRIF_LOW() \
    while ( READ_CRRIF() );


#define WAIT_CRRIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRRIF() && (--___t___ > 0)); }


#define WAIT_CRRIF_HIGH() \
    while (! READ_CRRIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lipcr
//
// Return the value of register LIPCR
//
// Notes : Register Lipcr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LIPCR( y) \
     WRITE_REGISTER_ULONG( 0x40 , y)

#define SET_BITS_LIPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  mask ); \
   }

#define CLEAR_BITS_LIPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val & ~mask ); \
   }

#define READ_REGISTER_LIPCR() \
     READ_REGISTER_ULONG(0x40)

/////////////////////////////////////////////////////////////////////////
//
// Function : Lipcr
//
// Return the value of register LIPCR
//
// Notes : Register Line Interrupt Position Configuration Register (LIPCR) at the offset 0x40, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line Interrupt Position 
    // 
#define LIPOS_MASK 0x7FFU
#define LIPOS_OFFSET 10
#define LIPOS_START_BIT 0
#define LIPOS_WIDTH 11


#define LIPCR_REG 0x40

typedef enum lipos {
    LIPOS_0,
    LIPOS_1
} LIPOS_T ;
#define READ_LIPOS() \
   ((READ_REGISTER_ULONG(0x40) & LIPOS_MASK)  >> LIPOS_START_BIT)

#define WRITE_LIPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ LIPOS_MASK) | ((val << LIPOS_START_BIT) & LIPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cpsr
//
// Return the value of register CPSR
//
// Notes : Register Cpsr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CPSR() \
     READ_REGISTER_ULONG(0x44)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cpsr
//
// Return the value of register CPSR
//
// Notes : Register Current Position Status Register (CPSR) at the offset 0x44, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current Y Position 
    // 
#define CYPOS_MASK 0xFFFFU
#define CYPOS_OFFSET 15
#define CYPOS_START_BIT 0
#define CYPOS_WIDTH 16


#define CPSR_REG 0x44

typedef enum cypos {
    CYPOS_0,
    CYPOS_1
} CYPOS_T ;
#define READ_CYPOS() \
   ((READ_REGISTER_ULONG(0x44) & CYPOS_MASK)  >> CYPOS_START_BIT)

#define WRITE_CYPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ CYPOS_MASK) | ((val << CYPOS_START_BIT) & CYPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cpsr
//
// Return the value of register CPSR
//
// Notes : Register Current Position Status Register (CPSR) at the offset 0x44, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current X Position 
    // 
#define CXPOS_MASK 0xFFFF0000U
#define CXPOS_OFFSET 31
#define CXPOS_START_BIT 16
#define CXPOS_WIDTH 16



typedef enum cxpos {
    CXPOS_0,
    CXPOS_1
} CXPOS_T ;
#define READ_CXPOS() \
   ((READ_REGISTER_ULONG(0x44) & CXPOS_MASK)  >> CXPOS_START_BIT)

#define WRITE_CXPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ CXPOS_MASK) | ((val << CXPOS_START_BIT) & CXPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cdsr
//
// Return the value of register CDSR
//
// Notes : Register Cdsr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CDSR() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cdsr
//
// Return the value of register CDSR
//
// Notes : Register Current Display Status Register (CDSR) at the offset 0x48, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Vertical Data Enable display Status 
    // 
#define VDES_MASK 0x1U
#define VDES_OFFSET 0
#define VDES_START_BIT 0
#define VDES_WIDTH 1


#define CDSR_REG 0x48

typedef enum vdes {
    VDES_0,
    VDES_1
} VDES_T ;
#define WRITE_VDES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ VDES_MASK) | ((val << VDES_START_BIT) & VDES_MASK )); \
   } 

#define ENABLE_VDES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  VDES_MASK ); \
   }

#define DISABLE_VDES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~VDES_MASK ); \
   } 

#define READ_VDES() \
   ((READ_REGISTER_ULONG(0x48) & VDES_MASK)  >> VDES_START_BIT)

#define WHEN_VDES_HIGH() \
     if ( READ_VDES() )


#define UNLESS_VDES_HIGH() \
     if (! READ_VDES() )


#define WAIT_VDES_LOW() \
    while ( READ_VDES() );


#define WAIT_VDES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VDES() && (--___t___ > 0)); }


#define WAIT_VDES_HIGH() \
    while (! READ_VDES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cdsr
//
// Return the value of register CDSR
//
// Notes : Register Current Display Status Register (CDSR) at the offset 0x48, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Horizontal Data Enable display Status 
    // 
#define HDES_MASK 0x2U
#define HDES_OFFSET 1
#define HDES_START_BIT 1
#define HDES_WIDTH 1



typedef enum hdes {
    HDES_0,
    HDES_1
} HDES_T ;
#define WRITE_HDES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ HDES_MASK) | ((val << HDES_START_BIT) & HDES_MASK )); \
   } 

#define ENABLE_HDES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  HDES_MASK ); \
   }

#define DISABLE_HDES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~HDES_MASK ); \
   } 

#define READ_HDES() \
   ((READ_REGISTER_ULONG(0x48) & HDES_MASK)  >> HDES_START_BIT)

#define WHEN_HDES_HIGH() \
     if ( READ_HDES() )


#define UNLESS_HDES_HIGH() \
     if (! READ_HDES() )


#define WAIT_HDES_LOW() \
    while ( READ_HDES() );


#define WAIT_HDES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HDES() && (--___t___ > 0)); }


#define WAIT_HDES_HIGH() \
    while (! READ_HDES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cdsr
//
// Return the value of register CDSR
//
// Notes : Register Current Display Status Register (CDSR) at the offset 0x48, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Vertical Synchronization display Status 
    // 
#define VSYNCS_MASK 0x4U
#define VSYNCS_OFFSET 2
#define VSYNCS_START_BIT 2
#define VSYNCS_WIDTH 1



typedef enum vsyncs {
    VSYNCS_0,
    VSYNCS_1
} VSYNCS_T ;
#define WRITE_VSYNCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ VSYNCS_MASK) | ((val << VSYNCS_START_BIT) & VSYNCS_MASK )); \
   } 

#define ENABLE_VSYNCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  VSYNCS_MASK ); \
   }

#define DISABLE_VSYNCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~VSYNCS_MASK ); \
   } 

#define READ_VSYNCS() \
   ((READ_REGISTER_ULONG(0x48) & VSYNCS_MASK)  >> VSYNCS_START_BIT)

#define WHEN_VSYNCS_HIGH() \
     if ( READ_VSYNCS() )


#define UNLESS_VSYNCS_HIGH() \
     if (! READ_VSYNCS() )


#define WAIT_VSYNCS_LOW() \
    while ( READ_VSYNCS() );


#define WAIT_VSYNCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSYNCS() && (--___t___ > 0)); }


#define WAIT_VSYNCS_HIGH() \
    while (! READ_VSYNCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cdsr
//
// Return the value of register CDSR
//
// Notes : Register Current Display Status Register (CDSR) at the offset 0x48, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Horizontal Synchronization display Status 
    // 
#define HSYNCS_MASK 0x8U
#define HSYNCS_OFFSET 3
#define HSYNCS_START_BIT 3
#define HSYNCS_WIDTH 1



typedef enum hsyncs {
    HSYNCS_0,
    HSYNCS_1
} HSYNCS_T ;
#define WRITE_HSYNCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ HSYNCS_MASK) | ((val << HSYNCS_START_BIT) & HSYNCS_MASK )); \
   } 

#define ENABLE_HSYNCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  HSYNCS_MASK ); \
   }

#define DISABLE_HSYNCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~HSYNCS_MASK ); \
   } 

#define READ_HSYNCS() \
   ((READ_REGISTER_ULONG(0x48) & HSYNCS_MASK)  >> HSYNCS_START_BIT)

#define WHEN_HSYNCS_HIGH() \
     if ( READ_HSYNCS() )


#define UNLESS_HSYNCS_HIGH() \
     if (! READ_HSYNCS() )


#define WAIT_HSYNCS_LOW() \
    while ( READ_HSYNCS() );


#define WAIT_HSYNCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSYNCS() && (--___t___ > 0)); }


#define WAIT_HSYNCS_HIGH() \
    while (! READ_HSYNCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L1cr
//
// Return the value of register L1CR
//
// Notes : Register L1cr at offset 0x84
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CR( y) \
     WRITE_REGISTER_ULONG( 0x84 , y)

#define SET_BITS_L_1CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  mask ); \
   }

#define CLEAR_BITS_L_1CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val & ~mask ); \
   }

#define READ_REGISTER_L_1CR() \
     READ_REGISTER_ULONG(0x84)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cr
//
// Return the value of register L_1CR
//
// Notes : Register Layerx Control Register (L1CR) at the offset 0x84, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Layer Enable 
    // 
#define LEN_MASK 0x1U
#define LEN_OFFSET 0
#define LEN_START_BIT 0
#define LEN_WIDTH 1


#define L_1CR_REG 0x84

typedef enum len {
    LEN_0,
    LEN_1
} LEN_T ;
#define WRITE_LEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ LEN_MASK) | ((val << LEN_START_BIT) & LEN_MASK )); \
   } 

#define ENABLE_LEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  LEN_MASK ); \
   }

#define DISABLE_LEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~LEN_MASK ); \
   } 

#define READ_LEN() \
   ((READ_REGISTER_ULONG(0x84) & LEN_MASK)  >> LEN_START_BIT)

#define WHEN_LEN_HIGH() \
     if ( READ_LEN() )


#define UNLESS_LEN_HIGH() \
     if (! READ_LEN() )


#define WAIT_LEN_LOW() \
    while ( READ_LEN() );


#define WAIT_LEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LEN() && (--___t___ > 0)); }


#define WAIT_LEN_HIGH() \
    while (! READ_LEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L1cr
//
// Return the value of register L_1CR
//
// Notes : Register Layerx Control Register (L1CR) at the offset 0x84, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Keying Enable 
    // 
#define COLKEN_MASK 0x2U
#define COLKEN_OFFSET 1
#define COLKEN_START_BIT 1
#define COLKEN_WIDTH 1



typedef enum colken {
    COLKEN_0,
    COLKEN_1
} COLKEN_T ;
#define WRITE_COLKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ COLKEN_MASK) | ((val << COLKEN_START_BIT) & COLKEN_MASK )); \
   } 

#define ENABLE_COLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  COLKEN_MASK ); \
   }

#define DISABLE_COLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~COLKEN_MASK ); \
   } 

#define READ_COLKEN() \
   ((READ_REGISTER_ULONG(0x84) & COLKEN_MASK)  >> COLKEN_START_BIT)

#define WHEN_COLKEN_HIGH() \
     if ( READ_COLKEN() )


#define UNLESS_COLKEN_HIGH() \
     if (! READ_COLKEN() )


#define WAIT_COLKEN_LOW() \
    while ( READ_COLKEN() );


#define WAIT_COLKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COLKEN() && (--___t___ > 0)); }


#define WAIT_COLKEN_HIGH() \
    while (! READ_COLKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L1cr
//
// Return the value of register L_1CR
//
// Notes : Register Layerx Control Register (L1CR) at the offset 0x84, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Look-Up Table Enable 
    // 
#define CLUTEN_MASK 0x10U
#define CLUTEN_OFFSET 4
#define CLUTEN_START_BIT 4
#define CLUTEN_WIDTH 1



typedef enum cluten {
    CLUTEN_0,
    CLUTEN_1
} CLUTEN_T ;
#define WRITE_CLUTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ CLUTEN_MASK) | ((val << CLUTEN_START_BIT) & CLUTEN_MASK )); \
   } 

#define ENABLE_CLUTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  CLUTEN_MASK ); \
   }

#define DISABLE_CLUTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~CLUTEN_MASK ); \
   } 

#define READ_CLUTEN() \
   ((READ_REGISTER_ULONG(0x84) & CLUTEN_MASK)  >> CLUTEN_START_BIT)

#define WHEN_CLUTEN_HIGH() \
     if ( READ_CLUTEN() )


#define UNLESS_CLUTEN_HIGH() \
     if (! READ_CLUTEN() )


#define WAIT_CLUTEN_LOW() \
    while ( READ_CLUTEN() );


#define WAIT_CLUTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CLUTEN() && (--___t___ > 0)); }


#define WAIT_CLUTEN_HIGH() \
    while (! READ_CLUTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L1whpcr
//
// Return the value of register L1WHPCR
//
// Notes : Register L1whpcr at offset 0x88
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1WHPCR( y) \
     WRITE_REGISTER_ULONG( 0x88 , y)

#define SET_BITS_L_1WHPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val |  mask ); \
   }

#define CLEAR_BITS_L_1WHPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val & ~mask ); \
   }

#define READ_REGISTER_L_1WHPCR() \
     READ_REGISTER_ULONG(0x88)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1whpcr
//
// Return the value of register L_1WHPCR
//
// Notes : Register Layerx Window Horizontal Position Configuration Register (L1WHPCR) at the offset 0x88, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Horizontal Start Position 
    // 
#define WHSTPOS_MASK 0xFFFU
#define WHSTPOS_OFFSET 11
#define WHSTPOS_START_BIT 0
#define WHSTPOS_WIDTH 12


#define L_1WHPCR_REG 0x88

typedef enum whstpos {
    WHSTPOS_0,
    WHSTPOS_1
} WHSTPOS_T ;
#define READ_WHSTPOS() \
   ((READ_REGISTER_ULONG(0x88) & WHSTPOS_MASK)  >> WHSTPOS_START_BIT)

#define WRITE_WHSTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ WHSTPOS_MASK) | ((val << WHSTPOS_START_BIT) & WHSTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1whpcr
//
// Return the value of register L_1WHPCR
//
// Notes : Register Layerx Window Horizontal Position Configuration Register (L1WHPCR) at the offset 0x88, Bits 16:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Horizontal Stop Position 
    // 
#define WHSPPOS_MASK 0xFFF0000U
#define WHSPPOS_OFFSET 27
#define WHSPPOS_START_BIT 16
#define WHSPPOS_WIDTH 12



typedef enum whsppos {
    WHSPPOS_0,
    WHSPPOS_1
} WHSPPOS_T ;
#define READ_WHSPPOS() \
   ((READ_REGISTER_ULONG(0x88) & WHSPPOS_MASK)  >> WHSPPOS_START_BIT)

#define WRITE_WHSPPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ WHSPPOS_MASK) | ((val << WHSPPOS_START_BIT) & WHSPPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1wvpcr
//
// Return the value of register L1WVPCR
//
// Notes : Register L1wvpcr at offset 0x8C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1WVPCR( y) \
     WRITE_REGISTER_ULONG( 0x8C , y)

#define SET_BITS_L_1WVPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val |  mask ); \
   }

#define CLEAR_BITS_L_1WVPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val & ~mask ); \
   }

#define READ_REGISTER_L_1WVPCR() \
     READ_REGISTER_ULONG(0x8C)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1wvpcr
//
// Return the value of register L_1WVPCR
//
// Notes : Register Layerx Window Vertical Position Configuration Register (L1WVPCR) at the offset 0x8C, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Vertical Start Position 
    // 
#define WVSTPOS_MASK 0x7FFU
#define WVSTPOS_OFFSET 10
#define WVSTPOS_START_BIT 0
#define WVSTPOS_WIDTH 11


#define L_1WVPCR_REG 0x8C

typedef enum wvstpos {
    WVSTPOS_0,
    WVSTPOS_1
} WVSTPOS_T ;
#define READ_WVSTPOS() \
   ((READ_REGISTER_ULONG(0x8C) & WVSTPOS_MASK)  >> WVSTPOS_START_BIT)

#define WRITE_WVSTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ WVSTPOS_MASK) | ((val << WVSTPOS_START_BIT) & WVSTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1wvpcr
//
// Return the value of register L_1WVPCR
//
// Notes : Register Layerx Window Vertical Position Configuration Register (L1WVPCR) at the offset 0x8C, Bits 16:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Vertical Stop Position 
    // 
#define WVSPPOS_MASK 0x7FF0000U
#define WVSPPOS_OFFSET 26
#define WVSPPOS_START_BIT 16
#define WVSPPOS_WIDTH 11



typedef enum wvsppos {
    WVSPPOS_0,
    WVSPPOS_1
} WVSPPOS_T ;
#define READ_WVSPPOS() \
   ((READ_REGISTER_ULONG(0x8C) & WVSPPOS_MASK)  >> WVSPPOS_START_BIT)

#define WRITE_WVSPPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ WVSPPOS_MASK) | ((val << WVSPPOS_START_BIT) & WVSPPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1ckcr
//
// Return the value of register L1CKCR
//
// Notes : Register L1ckcr at offset 0x90
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CKCR( y) \
     WRITE_REGISTER_ULONG( 0x90 , y)

#define SET_BITS_L_1CKCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val |  mask ); \
   }

#define CLEAR_BITS_L_1CKCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val & ~mask ); \
   }

#define READ_REGISTER_L_1CKCR() \
     READ_REGISTER_ULONG(0x90)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1ckcr
//
// Return the value of register L_1CKCR
//
// Notes : Register Layerx Color Keying Configuration Register (L1CKCR) at the offset 0x90, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Key Blue value 
    // 
#define CKBLUE_MASK 0xFFU
#define CKBLUE_OFFSET 7
#define CKBLUE_START_BIT 0
#define CKBLUE_WIDTH 8


#define L_1CKCR_REG 0x90

typedef enum ckblue {
    CKBLUE_0,
    CKBLUE_1
} CKBLUE_T ;
#define READ_CKBLUE() \
   ((READ_REGISTER_ULONG(0x90) & CKBLUE_MASK)  >> CKBLUE_START_BIT)

#define WRITE_CKBLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ CKBLUE_MASK) | ((val << CKBLUE_START_BIT) & CKBLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1ckcr
//
// Return the value of register L_1CKCR
//
// Notes : Register Layerx Color Keying Configuration Register (L1CKCR) at the offset 0x90, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Key Green value 
    // 
#define CKGREEN_MASK 0xFF00U
#define CKGREEN_OFFSET 15
#define CKGREEN_START_BIT 8
#define CKGREEN_WIDTH 8



typedef enum ckgreen {
    CKGREEN_0,
    CKGREEN_1
} CKGREEN_T ;
#define READ_CKGREEN() \
   ((READ_REGISTER_ULONG(0x90) & CKGREEN_MASK)  >> CKGREEN_START_BIT)

#define WRITE_CKGREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ CKGREEN_MASK) | ((val << CKGREEN_START_BIT) & CKGREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1ckcr
//
// Return the value of register L_1CKCR
//
// Notes : Register Layerx Color Keying Configuration Register (L1CKCR) at the offset 0x90, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Key Red value 
    // 
#define CKRED_MASK 0xFF0000U
#define CKRED_OFFSET 23
#define CKRED_START_BIT 16
#define CKRED_WIDTH 8



typedef enum ckred {
    CKRED_0,
    CKRED_1
} CKRED_T ;
#define READ_CKRED() \
   ((READ_REGISTER_ULONG(0x90) & CKRED_MASK)  >> CKRED_START_BIT)

#define WRITE_CKRED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ CKRED_MASK) | ((val << CKRED_START_BIT) & CKRED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1pfcr
//
// Return the value of register L1PFCR
//
// Notes : Register L1pfcr at offset 0x94
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1PFCR( y) \
     WRITE_REGISTER_ULONG( 0x94 , y)

#define SET_BITS_L_1PFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x94); \
     WRITE_REGISTER_ULONG( 0x94 , val |  mask ); \
   }

#define CLEAR_BITS_L_1PFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x94); \
     WRITE_REGISTER_ULONG( 0x94 , val & ~mask ); \
   }

#define READ_REGISTER_L_1PFCR() \
     READ_REGISTER_ULONG(0x94)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1pfcr
//
// Return the value of register L_1PFCR
//
// Notes : Register Layerx Pixel Format Configuration Register (L1PFCR) at the offset 0x94, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pixel Format 
    // 
#define PF_MASK 0x7U
#define PF_OFFSET 2
#define PF_START_BIT 0
#define PF_WIDTH 3


#define L_1PFCR_REG 0x94

typedef enum pf {
    PF_0,
    PF_1
} PF_T ;
#define READ_PF() \
   ((READ_REGISTER_ULONG(0x94) & PF_MASK)  >> PF_START_BIT)

#define WRITE_PF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x94); \
     WRITE_REGISTER_ULONG(0x94, (OldValue & ~ PF_MASK) | ((val << PF_START_BIT) & PF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cacr
//
// Return the value of register L1CACR
//
// Notes : Register L1cacr at offset 0x98
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CACR( y) \
     WRITE_REGISTER_ULONG( 0x98 , y)

#define SET_BITS_L_1CACR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x98); \
     WRITE_REGISTER_ULONG( 0x98 , val |  mask ); \
   }

#define CLEAR_BITS_L_1CACR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x98); \
     WRITE_REGISTER_ULONG( 0x98 , val & ~mask ); \
   }

#define READ_REGISTER_L_1CACR() \
     READ_REGISTER_ULONG(0x98)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cacr
//
// Return the value of register L_1CACR
//
// Notes : Register Layerx Constant Alpha Configuration Register (L1CACR) at the offset 0x98, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Constant Alpha 
    // 
#define CONSTA_MASK 0xFFU
#define CONSTA_OFFSET 7
#define CONSTA_START_BIT 0
#define CONSTA_WIDTH 8


#define L_1CACR_REG 0x98

typedef enum consta {
    CONSTA_0,
    CONSTA_1
} CONSTA_T ;
#define READ_CONSTA() \
   ((READ_REGISTER_ULONG(0x98) & CONSTA_MASK)  >> CONSTA_START_BIT)

#define WRITE_CONSTA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x98); \
     WRITE_REGISTER_ULONG(0x98, (OldValue & ~ CONSTA_MASK) | ((val << CONSTA_START_BIT) & CONSTA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1dccr
//
// Return the value of register L1DCCR
//
// Notes : Register L1dccr at offset 0x9C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1DCCR( y) \
     WRITE_REGISTER_ULONG( 0x9C , y)

#define SET_BITS_L_1DCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x9C); \
     WRITE_REGISTER_ULONG( 0x9C , val |  mask ); \
   }

#define CLEAR_BITS_L_1DCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x9C); \
     WRITE_REGISTER_ULONG( 0x9C , val & ~mask ); \
   }

#define READ_REGISTER_L_1DCCR() \
     READ_REGISTER_ULONG(0x9C)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1dccr
//
// Return the value of register L_1DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L1DCCR) at the offset 0x9C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Blue 
    // 
#define DCBLUE_MASK 0xFFU
#define DCBLUE_OFFSET 7
#define DCBLUE_START_BIT 0
#define DCBLUE_WIDTH 8


#define L_1DCCR_REG 0x9C

typedef enum dcblue {
    DCBLUE_0,
    DCBLUE_1
} DCBLUE_T ;
#define READ_DCBLUE() \
   ((READ_REGISTER_ULONG(0x9C) & DCBLUE_MASK)  >> DCBLUE_START_BIT)

#define WRITE_DCBLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x9C); \
     WRITE_REGISTER_ULONG(0x9C, (OldValue & ~ DCBLUE_MASK) | ((val << DCBLUE_START_BIT) & DCBLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1dccr
//
// Return the value of register L_1DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L1DCCR) at the offset 0x9C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Green 
    // 
#define DCGREEN_MASK 0xFF00U
#define DCGREEN_OFFSET 15
#define DCGREEN_START_BIT 8
#define DCGREEN_WIDTH 8



typedef enum dcgreen {
    DCGREEN_0,
    DCGREEN_1
} DCGREEN_T ;
#define READ_DCGREEN() \
   ((READ_REGISTER_ULONG(0x9C) & DCGREEN_MASK)  >> DCGREEN_START_BIT)

#define WRITE_DCGREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x9C); \
     WRITE_REGISTER_ULONG(0x9C, (OldValue & ~ DCGREEN_MASK) | ((val << DCGREEN_START_BIT) & DCGREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1dccr
//
// Return the value of register L_1DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L1DCCR) at the offset 0x9C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Red 
    // 
#define DCRED_MASK 0xFF0000U
#define DCRED_OFFSET 23
#define DCRED_START_BIT 16
#define DCRED_WIDTH 8



typedef enum dcred {
    DCRED_0,
    DCRED_1
} DCRED_T ;
#define READ_DCRED() \
   ((READ_REGISTER_ULONG(0x9C) & DCRED_MASK)  >> DCRED_START_BIT)

#define WRITE_DCRED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x9C); \
     WRITE_REGISTER_ULONG(0x9C, (OldValue & ~ DCRED_MASK) | ((val << DCRED_START_BIT) & DCRED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1dccr
//
// Return the value of register L_1DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L1DCCR) at the offset 0x9C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Alpha 
    // 
#define DCALPHA_MASK 0xFF000000U
#define DCALPHA_OFFSET 31
#define DCALPHA_START_BIT 24
#define DCALPHA_WIDTH 8



typedef enum dcalpha {
    DCALPHA_0,
    DCALPHA_1
} DCALPHA_T ;
#define READ_DCALPHA() \
   ((READ_REGISTER_ULONG(0x9C) & DCALPHA_MASK)  >> DCALPHA_START_BIT)

#define WRITE_DCALPHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x9C); \
     WRITE_REGISTER_ULONG(0x9C, (OldValue & ~ DCALPHA_MASK) | ((val << DCALPHA_START_BIT) & DCALPHA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1bfcr
//
// Return the value of register L1BFCR
//
// Notes : Register L1bfcr at offset 0xA0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1BFCR( y) \
     WRITE_REGISTER_ULONG( 0xA0 , y)

#define SET_BITS_L_1BFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA0); \
     WRITE_REGISTER_ULONG( 0xA0 , val |  mask ); \
   }

#define CLEAR_BITS_L_1BFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA0); \
     WRITE_REGISTER_ULONG( 0xA0 , val & ~mask ); \
   }

#define READ_REGISTER_L_1BFCR() \
     READ_REGISTER_ULONG(0xA0)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1bfcr
//
// Return the value of register L_1BFCR
//
// Notes : Register Layerx Blending Factors Configuration Register (L1BFCR) at the offset 0xA0, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blending Factor 2 
    // 
#define BF2_MASK 0x7U
#define BF2_OFFSET 2
#define BF2_START_BIT 0
#define BF2_WIDTH 3


#define L_1BFCR_REG 0xA0

typedef enum bf2 {
    BF_2_0,
    BF_2_1
} BF_2_T ;
#define READ_BF2() \
   ((READ_REGISTER_ULONG(0xA0) & BF2_MASK)  >> BF2_START_BIT)

#define WRITE_BF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xA0); \
     WRITE_REGISTER_ULONG(0xA0, (OldValue & ~ BF2_MASK) | ((val << BF2_START_BIT) & BF2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1bfcr
//
// Return the value of register L_1BFCR
//
// Notes : Register Layerx Blending Factors Configuration Register (L1BFCR) at the offset 0xA0, Bits 8:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blending Factor 1 
    // 
#define BF1_MASK 0x700U
#define BF1_OFFSET 10
#define BF1_START_BIT 8
#define BF1_WIDTH 3



typedef enum bf1 {
    BF_1_0,
    BF_1_1
} BF_1_T ;
#define READ_BF1() \
   ((READ_REGISTER_ULONG(0xA0) & BF1_MASK)  >> BF1_START_BIT)

#define WRITE_BF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xA0); \
     WRITE_REGISTER_ULONG(0xA0, (OldValue & ~ BF1_MASK) | ((val << BF1_START_BIT) & BF1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfbar
//
// Return the value of register L1CFBAR
//
// Notes : Register L1cfbar at offset 0xAC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CFBAR( y) \
     WRITE_REGISTER_ULONG( 0xAC , y)

#define SET_BITS_L_1CFBAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xAC); \
     WRITE_REGISTER_ULONG( 0xAC , val |  mask ); \
   }

#define CLEAR_BITS_L_1CFBAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xAC); \
     WRITE_REGISTER_ULONG( 0xAC , val & ~mask ); \
   }

#define READ_REGISTER_L_1CFBAR() \
     READ_REGISTER_ULONG(0xAC)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfbar
//
// Return the value of register L_1CFBAR
//
// Notes : Register Layerx Color Frame Buffer Address Register (L1CFBAR) at the offset 0xAC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Frame Buffer Start Address 
    // 
#define CFBADD_MASK 0xFFFFFFFFU
#define CFBADD_OFFSET 31
#define CFBADD_START_BIT 0
#define CFBADD_WIDTH 32


#define L_1CFBAR_REG 0xAC

typedef enum cfbadd {
    CFBADD_0,
    CFBADD_1
} CFBADD_T ;
#define READ_CFBADD() \
   ((READ_REGISTER_ULONG(0xAC) & CFBADD_MASK)  >> CFBADD_START_BIT)

#define WRITE_CFBADD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xAC); \
     WRITE_REGISTER_ULONG(0xAC, (OldValue & ~ CFBADD_MASK) | ((val << CFBADD_START_BIT) & CFBADD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfblr
//
// Return the value of register L1CFBLR
//
// Notes : Register L1cfblr at offset 0xB0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CFBLR( y) \
     WRITE_REGISTER_ULONG( 0xB0 , y)

#define SET_BITS_L_1CFBLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB0); \
     WRITE_REGISTER_ULONG( 0xB0 , val |  mask ); \
   }

#define CLEAR_BITS_L_1CFBLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB0); \
     WRITE_REGISTER_ULONG( 0xB0 , val & ~mask ); \
   }

#define READ_REGISTER_L_1CFBLR() \
     READ_REGISTER_ULONG(0xB0)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfblr
//
// Return the value of register L_1CFBLR
//
// Notes : Register Layerx Color Frame Buffer Length Register (L1CFBLR) at the offset 0xB0, Bits 0:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Frame Buffer Line Length 
    // 
#define CFBLL_MASK 0x1FFFU
#define CFBLL_OFFSET 12
#define CFBLL_START_BIT 0
#define CFBLL_WIDTH 13


#define L_1CFBLR_REG 0xB0

typedef enum cfbll {
    CFBLL_0,
    CFBLL_1
} CFBLL_T ;
#define READ_CFBLL() \
   ((READ_REGISTER_ULONG(0xB0) & CFBLL_MASK)  >> CFBLL_START_BIT)

#define WRITE_CFBLL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xB0); \
     WRITE_REGISTER_ULONG(0xB0, (OldValue & ~ CFBLL_MASK) | ((val << CFBLL_START_BIT) & CFBLL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfblr
//
// Return the value of register L_1CFBLR
//
// Notes : Register Layerx Color Frame Buffer Length Register (L1CFBLR) at the offset 0xB0, Bits 16:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Frame Buffer Pitch in bytes 
    // 
#define CFBP_MASK 0x1FFF0000U
#define CFBP_OFFSET 28
#define CFBP_START_BIT 16
#define CFBP_WIDTH 13



typedef enum cfbp {
    CFBP_0,
    CFBP_1
} CFBP_T ;
#define READ_CFBP() \
   ((READ_REGISTER_ULONG(0xB0) & CFBP_MASK)  >> CFBP_START_BIT)

#define WRITE_CFBP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xB0); \
     WRITE_REGISTER_ULONG(0xB0, (OldValue & ~ CFBP_MASK) | ((val << CFBP_START_BIT) & CFBP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfblnr
//
// Return the value of register L1CFBLNR
//
// Notes : Register L1cfblnr at offset 0xB4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CFBLNR( y) \
     WRITE_REGISTER_ULONG( 0xB4 , y)

#define SET_BITS_L_1CFBLNR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB4); \
     WRITE_REGISTER_ULONG( 0xB4 , val |  mask ); \
   }

#define CLEAR_BITS_L_1CFBLNR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB4); \
     WRITE_REGISTER_ULONG( 0xB4 , val & ~mask ); \
   }

#define READ_REGISTER_L_1CFBLNR() \
     READ_REGISTER_ULONG(0xB4)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1cfblnr
//
// Return the value of register L_1CFBLNR
//
// Notes : Register Layerx ColorFrame Buffer Line Number Register (L1CFBLNR) at the offset 0xB4, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame Buffer Line Number 
    // 
#define CFBLNBR_MASK 0x7FFU
#define CFBLNBR_OFFSET 10
#define CFBLNBR_START_BIT 0
#define CFBLNBR_WIDTH 11


#define L_1CFBLNR_REG 0xB4

typedef enum cfblnbr {
    CFBLNBR_0,
    CFBLNBR_1
} CFBLNBR_T ;
#define READ_CFBLNBR() \
   ((READ_REGISTER_ULONG(0xB4) & CFBLNBR_MASK)  >> CFBLNBR_START_BIT)

#define WRITE_CFBLNBR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xB4); \
     WRITE_REGISTER_ULONG(0xB4, (OldValue & ~ CFBLNBR_MASK) | ((val << CFBLNBR_START_BIT) & CFBLNBR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1clutwr
//
// Return the value of register L1CLUTWR
//
// Notes : Register L1clutwr at offset 0xC4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_1CLUTWR( y) \
     WRITE_REGISTER_ULONG( 0xC4 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : L1clutwr
//
// Return the value of register L_1CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L1CLUTWR) at the offset 0xC4, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blue value 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define L_1CLUTWR_REG 0xC4

#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0xC4) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC4); \
     WRITE_REGISTER_ULONG(0xC4, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1clutwr
//
// Return the value of register L_1CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L1CLUTWR) at the offset 0xC4, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Green value 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0xC4) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC4); \
     WRITE_REGISTER_ULONG(0xC4, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1clutwr
//
// Return the value of register L_1CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L1CLUTWR) at the offset 0xC4, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Red value 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



#define READ_RED() \
   ((READ_REGISTER_ULONG(0xC4) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC4); \
     WRITE_REGISTER_ULONG(0xC4, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L1clutwr
//
// Return the value of register L_1CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L1CLUTWR) at the offset 0xC4, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLUT Address 
    // 
#define CLUTADD_MASK 0xFF000000U
#define CLUTADD_OFFSET 31
#define CLUTADD_START_BIT 24
#define CLUTADD_WIDTH 8



typedef enum clutadd {
    CLUTADD_0,
    CLUTADD_1
} CLUTADD_T ;
#define READ_CLUTADD() \
   ((READ_REGISTER_ULONG(0xC4) & CLUTADD_MASK)  >> CLUTADD_START_BIT)

#define WRITE_CLUTADD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC4); \
     WRITE_REGISTER_ULONG(0xC4, (OldValue & ~ CLUTADD_MASK) | ((val << CLUTADD_START_BIT) & CLUTADD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cr
//
// Return the value of register L2CR
//
// Notes : Register L2cr at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CR( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_L_2CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_L_2CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_L_2CR() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cr
//
// Return the value of register L_2CR
//
// Notes : Register Layerx Control Register (L2CR) at the offset 0x104, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Layer Enable 
    // 
#define LEN_MASK 0x1U
#define LEN_OFFSET 0
#define LEN_START_BIT 0
#define LEN_WIDTH 1


#define L_2CR_REG 0x104

#define WRITE_LEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ LEN_MASK) | ((val << LEN_START_BIT) & LEN_MASK )); \
   } 

#define ENABLE_LEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  LEN_MASK ); \
   }

#define DISABLE_LEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG(0x104, val & ~LEN_MASK ); \
   } 

#define READ_LEN() \
   ((READ_REGISTER_ULONG(0x104) & LEN_MASK)  >> LEN_START_BIT)

#define WHEN_LEN_HIGH() \
     if ( READ_LEN() )


#define UNLESS_LEN_HIGH() \
     if (! READ_LEN() )


#define WAIT_LEN_LOW() \
    while ( READ_LEN() );


#define WAIT_LEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LEN() && (--___t___ > 0)); }


#define WAIT_LEN_HIGH() \
    while (! READ_LEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L2cr
//
// Return the value of register L_2CR
//
// Notes : Register Layerx Control Register (L2CR) at the offset 0x104, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Keying Enable 
    // 
#define COLKEN_MASK 0x2U
#define COLKEN_OFFSET 1
#define COLKEN_START_BIT 1
#define COLKEN_WIDTH 1



#define WRITE_COLKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ COLKEN_MASK) | ((val << COLKEN_START_BIT) & COLKEN_MASK )); \
   } 

#define ENABLE_COLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  COLKEN_MASK ); \
   }

#define DISABLE_COLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG(0x104, val & ~COLKEN_MASK ); \
   } 

#define READ_COLKEN() \
   ((READ_REGISTER_ULONG(0x104) & COLKEN_MASK)  >> COLKEN_START_BIT)

#define WHEN_COLKEN_HIGH() \
     if ( READ_COLKEN() )


#define UNLESS_COLKEN_HIGH() \
     if (! READ_COLKEN() )


#define WAIT_COLKEN_LOW() \
    while ( READ_COLKEN() );


#define WAIT_COLKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COLKEN() && (--___t___ > 0)); }


#define WAIT_COLKEN_HIGH() \
    while (! READ_COLKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L2cr
//
// Return the value of register L_2CR
//
// Notes : Register Layerx Control Register (L2CR) at the offset 0x104, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Look-Up Table Enable 
    // 
#define CLUTEN_MASK 0x10U
#define CLUTEN_OFFSET 4
#define CLUTEN_START_BIT 4
#define CLUTEN_WIDTH 1



#define WRITE_CLUTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ CLUTEN_MASK) | ((val << CLUTEN_START_BIT) & CLUTEN_MASK )); \
   } 

#define ENABLE_CLUTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  CLUTEN_MASK ); \
   }

#define DISABLE_CLUTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG(0x104, val & ~CLUTEN_MASK ); \
   } 

#define READ_CLUTEN() \
   ((READ_REGISTER_ULONG(0x104) & CLUTEN_MASK)  >> CLUTEN_START_BIT)

#define WHEN_CLUTEN_HIGH() \
     if ( READ_CLUTEN() )


#define UNLESS_CLUTEN_HIGH() \
     if (! READ_CLUTEN() )


#define WAIT_CLUTEN_LOW() \
    while ( READ_CLUTEN() );


#define WAIT_CLUTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CLUTEN() && (--___t___ > 0)); }


#define WAIT_CLUTEN_HIGH() \
    while (! READ_CLUTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : L2whpcr
//
// Return the value of register L2WHPCR
//
// Notes : Register L2whpcr at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2WHPCR( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_L_2WHPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_L_2WHPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_L_2WHPCR() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2whpcr
//
// Return the value of register L_2WHPCR
//
// Notes : Register Layerx Window Horizontal Position Configuration Register (L2WHPCR) at the offset 0x108, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Horizontal Start Position 
    // 
#define WHSTPOS_MASK 0xFFFU
#define WHSTPOS_OFFSET 11
#define WHSTPOS_START_BIT 0
#define WHSTPOS_WIDTH 12


#define L_2WHPCR_REG 0x108

#define READ_WHSTPOS() \
   ((READ_REGISTER_ULONG(0x108) & WHSTPOS_MASK)  >> WHSTPOS_START_BIT)

#define WRITE_WHSTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ WHSTPOS_MASK) | ((val << WHSTPOS_START_BIT) & WHSTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2whpcr
//
// Return the value of register L_2WHPCR
//
// Notes : Register Layerx Window Horizontal Position Configuration Register (L2WHPCR) at the offset 0x108, Bits 16:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Horizontal Stop Position 
    // 
#define WHSPPOS_MASK 0xFFF0000U
#define WHSPPOS_OFFSET 27
#define WHSPPOS_START_BIT 16
#define WHSPPOS_WIDTH 12



#define READ_WHSPPOS() \
   ((READ_REGISTER_ULONG(0x108) & WHSPPOS_MASK)  >> WHSPPOS_START_BIT)

#define WRITE_WHSPPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ WHSPPOS_MASK) | ((val << WHSPPOS_START_BIT) & WHSPPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2wvpcr
//
// Return the value of register L2WVPCR
//
// Notes : Register L2wvpcr at offset 0x10C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2WVPCR( y) \
     WRITE_REGISTER_ULONG( 0x10C , y)

#define SET_BITS_L_2WVPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  mask ); \
   }

#define CLEAR_BITS_L_2WVPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val & ~mask ); \
   }

#define READ_REGISTER_L_2WVPCR() \
     READ_REGISTER_ULONG(0x10C)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2wvpcr
//
// Return the value of register L_2WVPCR
//
// Notes : Register Layerx Window Vertical Position Configuration Register (L2WVPCR) at the offset 0x10C, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Vertical Start Position 
    // 
#define WVSTPOS_MASK 0x7FFU
#define WVSTPOS_OFFSET 10
#define WVSTPOS_START_BIT 0
#define WVSTPOS_WIDTH 11


#define L_2WVPCR_REG 0x10C

#define READ_WVSTPOS() \
   ((READ_REGISTER_ULONG(0x10C) & WVSTPOS_MASK)  >> WVSTPOS_START_BIT)

#define WRITE_WVSTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ WVSTPOS_MASK) | ((val << WVSTPOS_START_BIT) & WVSTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2wvpcr
//
// Return the value of register L_2WVPCR
//
// Notes : Register Layerx Window Vertical Position Configuration Register (L2WVPCR) at the offset 0x10C, Bits 16:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window Vertical Stop Position 
    // 
#define WVSPPOS_MASK 0x7FF0000U
#define WVSPPOS_OFFSET 26
#define WVSPPOS_START_BIT 16
#define WVSPPOS_WIDTH 11



#define READ_WVSPPOS() \
   ((READ_REGISTER_ULONG(0x10C) & WVSPPOS_MASK)  >> WVSPPOS_START_BIT)

#define WRITE_WVSPPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ WVSPPOS_MASK) | ((val << WVSPPOS_START_BIT) & WVSPPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2ckcr
//
// Return the value of register L2CKCR
//
// Notes : Register L2ckcr at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CKCR( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_L_2CKCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_L_2CKCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_L_2CKCR() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2ckcr
//
// Return the value of register L_2CKCR
//
// Notes : Register Layerx Color Keying Configuration Register (L2CKCR) at the offset 0x110, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Key Blue value 
    // 
#define CKBLUE_MASK 0xFFU
#define CKBLUE_OFFSET 7
#define CKBLUE_START_BIT 0
#define CKBLUE_WIDTH 8


#define L_2CKCR_REG 0x110

#define READ_CKBLUE() \
   ((READ_REGISTER_ULONG(0x110) & CKBLUE_MASK)  >> CKBLUE_START_BIT)

#define WRITE_CKBLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ CKBLUE_MASK) | ((val << CKBLUE_START_BIT) & CKBLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2ckcr
//
// Return the value of register L_2CKCR
//
// Notes : Register Layerx Color Keying Configuration Register (L2CKCR) at the offset 0x110, Bits 8:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Key Green value 
    // 
#define CKGREEN_MASK 0x7F00U
#define CKGREEN_OFFSET 14
#define CKGREEN_START_BIT 8
#define CKGREEN_WIDTH 7



#define READ_CKGREEN() \
   ((READ_REGISTER_ULONG(0x110) & CKGREEN_MASK)  >> CKGREEN_START_BIT)

#define WRITE_CKGREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ CKGREEN_MASK) | ((val << CKGREEN_START_BIT) & CKGREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2ckcr
//
// Return the value of register L_2CKCR
//
// Notes : Register Layerx Color Keying Configuration Register (L2CKCR) at the offset 0x110, Bits 15:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Key Red value 
    // 
#define CKRED_MASK 0xFF8000U
#define CKRED_OFFSET 23
#define CKRED_START_BIT 15
#define CKRED_WIDTH 9



#define READ_CKRED() \
   ((READ_REGISTER_ULONG(0x110) & CKRED_MASK)  >> CKRED_START_BIT)

#define WRITE_CKRED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ CKRED_MASK) | ((val << CKRED_START_BIT) & CKRED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2pfcr
//
// Return the value of register L2PFCR
//
// Notes : Register L2pfcr at offset 0x114
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2PFCR( y) \
     WRITE_REGISTER_ULONG( 0x114 , y)

#define SET_BITS_L_2PFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val |  mask ); \
   }

#define CLEAR_BITS_L_2PFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val & ~mask ); \
   }

#define READ_REGISTER_L_2PFCR() \
     READ_REGISTER_ULONG(0x114)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2pfcr
//
// Return the value of register L_2PFCR
//
// Notes : Register Layerx Pixel Format Configuration Register (L2PFCR) at the offset 0x114, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pixel Format 
    // 
#define PF_MASK 0x7U
#define PF_OFFSET 2
#define PF_START_BIT 0
#define PF_WIDTH 3


#define L_2PFCR_REG 0x114

#define READ_PF() \
   ((READ_REGISTER_ULONG(0x114) & PF_MASK)  >> PF_START_BIT)

#define WRITE_PF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ PF_MASK) | ((val << PF_START_BIT) & PF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cacr
//
// Return the value of register L2CACR
//
// Notes : Register L2cacr at offset 0x118
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CACR( y) \
     WRITE_REGISTER_ULONG( 0x118 , y)

#define SET_BITS_L_2CACR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x118); \
     WRITE_REGISTER_ULONG( 0x118 , val |  mask ); \
   }

#define CLEAR_BITS_L_2CACR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x118); \
     WRITE_REGISTER_ULONG( 0x118 , val & ~mask ); \
   }

#define READ_REGISTER_L_2CACR() \
     READ_REGISTER_ULONG(0x118)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cacr
//
// Return the value of register L_2CACR
//
// Notes : Register Layerx Constant Alpha Configuration Register (L2CACR) at the offset 0x118, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Constant Alpha 
    // 
#define CONSTA_MASK 0xFFU
#define CONSTA_OFFSET 7
#define CONSTA_START_BIT 0
#define CONSTA_WIDTH 8


#define L_2CACR_REG 0x118

#define READ_CONSTA() \
   ((READ_REGISTER_ULONG(0x118) & CONSTA_MASK)  >> CONSTA_START_BIT)

#define WRITE_CONSTA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x118); \
     WRITE_REGISTER_ULONG(0x118, (OldValue & ~ CONSTA_MASK) | ((val << CONSTA_START_BIT) & CONSTA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2dccr
//
// Return the value of register L2DCCR
//
// Notes : Register L2dccr at offset 0x11C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2DCCR( y) \
     WRITE_REGISTER_ULONG( 0x11C , y)

#define SET_BITS_L_2DCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val |  mask ); \
   }

#define CLEAR_BITS_L_2DCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val & ~mask ); \
   }

#define READ_REGISTER_L_2DCCR() \
     READ_REGISTER_ULONG(0x11C)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2dccr
//
// Return the value of register L_2DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L2DCCR) at the offset 0x11C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Blue 
    // 
#define DCBLUE_MASK 0xFFU
#define DCBLUE_OFFSET 7
#define DCBLUE_START_BIT 0
#define DCBLUE_WIDTH 8


#define L_2DCCR_REG 0x11C

#define READ_DCBLUE() \
   ((READ_REGISTER_ULONG(0x11C) & DCBLUE_MASK)  >> DCBLUE_START_BIT)

#define WRITE_DCBLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ DCBLUE_MASK) | ((val << DCBLUE_START_BIT) & DCBLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2dccr
//
// Return the value of register L_2DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L2DCCR) at the offset 0x11C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Green 
    // 
#define DCGREEN_MASK 0xFF00U
#define DCGREEN_OFFSET 15
#define DCGREEN_START_BIT 8
#define DCGREEN_WIDTH 8



#define READ_DCGREEN() \
   ((READ_REGISTER_ULONG(0x11C) & DCGREEN_MASK)  >> DCGREEN_START_BIT)

#define WRITE_DCGREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ DCGREEN_MASK) | ((val << DCGREEN_START_BIT) & DCGREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2dccr
//
// Return the value of register L_2DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L2DCCR) at the offset 0x11C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Red 
    // 
#define DCRED_MASK 0xFF0000U
#define DCRED_OFFSET 23
#define DCRED_START_BIT 16
#define DCRED_WIDTH 8



#define READ_DCRED() \
   ((READ_REGISTER_ULONG(0x11C) & DCRED_MASK)  >> DCRED_START_BIT)

#define WRITE_DCRED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ DCRED_MASK) | ((val << DCRED_START_BIT) & DCRED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2dccr
//
// Return the value of register L_2DCCR
//
// Notes : Register Layerx Default Color Configuration Register (L2DCCR) at the offset 0x11C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Default Color Alpha 
    // 
#define DCALPHA_MASK 0xFF000000U
#define DCALPHA_OFFSET 31
#define DCALPHA_START_BIT 24
#define DCALPHA_WIDTH 8



#define READ_DCALPHA() \
   ((READ_REGISTER_ULONG(0x11C) & DCALPHA_MASK)  >> DCALPHA_START_BIT)

#define WRITE_DCALPHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ DCALPHA_MASK) | ((val << DCALPHA_START_BIT) & DCALPHA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2bfcr
//
// Return the value of register L2BFCR
//
// Notes : Register L2bfcr at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2BFCR( y) \
     WRITE_REGISTER_ULONG( 0x120 , y)

#define SET_BITS_L_2BFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  mask ); \
   }

#define CLEAR_BITS_L_2BFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val & ~mask ); \
   }

#define READ_REGISTER_L_2BFCR() \
     READ_REGISTER_ULONG(0x120)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2bfcr
//
// Return the value of register L_2BFCR
//
// Notes : Register Layerx Blending Factors Configuration Register (L2BFCR) at the offset 0x120, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blending Factor 2 
    // 
#define BF2_MASK 0x7U
#define BF2_OFFSET 2
#define BF2_START_BIT 0
#define BF2_WIDTH 3


#define L_2BFCR_REG 0x120

#define READ_BF2() \
   ((READ_REGISTER_ULONG(0x120) & BF2_MASK)  >> BF2_START_BIT)

#define WRITE_BF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ BF2_MASK) | ((val << BF2_START_BIT) & BF2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2bfcr
//
// Return the value of register L_2BFCR
//
// Notes : Register Layerx Blending Factors Configuration Register (L2BFCR) at the offset 0x120, Bits 8:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blending Factor 1 
    // 
#define BF1_MASK 0x700U
#define BF1_OFFSET 10
#define BF1_START_BIT 8
#define BF1_WIDTH 3



#define READ_BF1() \
   ((READ_REGISTER_ULONG(0x120) & BF1_MASK)  >> BF1_START_BIT)

#define WRITE_BF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ BF1_MASK) | ((val << BF1_START_BIT) & BF1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfbar
//
// Return the value of register L2CFBAR
//
// Notes : Register L2cfbar at offset 0x12C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CFBAR( y) \
     WRITE_REGISTER_ULONG( 0x12C , y)

#define SET_BITS_L_2CFBAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  mask ); \
   }

#define CLEAR_BITS_L_2CFBAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val & ~mask ); \
   }

#define READ_REGISTER_L_2CFBAR() \
     READ_REGISTER_ULONG(0x12C)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfbar
//
// Return the value of register L_2CFBAR
//
// Notes : Register Layerx Color Frame Buffer Address Register (L2CFBAR) at the offset 0x12C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Frame Buffer Start Address 
    // 
#define CFBADD_MASK 0xFFFFFFFFU
#define CFBADD_OFFSET 31
#define CFBADD_START_BIT 0
#define CFBADD_WIDTH 32


#define L_2CFBAR_REG 0x12C

#define READ_CFBADD() \
   ((READ_REGISTER_ULONG(0x12C) & CFBADD_MASK)  >> CFBADD_START_BIT)

#define WRITE_CFBADD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ CFBADD_MASK) | ((val << CFBADD_START_BIT) & CFBADD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfblr
//
// Return the value of register L2CFBLR
//
// Notes : Register L2cfblr at offset 0x130
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CFBLR( y) \
     WRITE_REGISTER_ULONG( 0x130 , y)

#define SET_BITS_L_2CFBLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val |  mask ); \
   }

#define CLEAR_BITS_L_2CFBLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val & ~mask ); \
   }

#define READ_REGISTER_L_2CFBLR() \
     READ_REGISTER_ULONG(0x130)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfblr
//
// Return the value of register L_2CFBLR
//
// Notes : Register Layerx Color Frame Buffer Length Register (L2CFBLR) at the offset 0x130, Bits 0:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Frame Buffer Line Length 
    // 
#define CFBLL_MASK 0x1FFFU
#define CFBLL_OFFSET 12
#define CFBLL_START_BIT 0
#define CFBLL_WIDTH 13


#define L_2CFBLR_REG 0x130

#define READ_CFBLL() \
   ((READ_REGISTER_ULONG(0x130) & CFBLL_MASK)  >> CFBLL_START_BIT)

#define WRITE_CFBLL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ CFBLL_MASK) | ((val << CFBLL_START_BIT) & CFBLL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfblr
//
// Return the value of register L_2CFBLR
//
// Notes : Register Layerx Color Frame Buffer Length Register (L2CFBLR) at the offset 0x130, Bits 16:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color Frame Buffer Pitch in bytes 
    // 
#define CFBP_MASK 0x1FFF0000U
#define CFBP_OFFSET 28
#define CFBP_START_BIT 16
#define CFBP_WIDTH 13



#define READ_CFBP() \
   ((READ_REGISTER_ULONG(0x130) & CFBP_MASK)  >> CFBP_START_BIT)

#define WRITE_CFBP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ CFBP_MASK) | ((val << CFBP_START_BIT) & CFBP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfblnr
//
// Return the value of register L2CFBLNR
//
// Notes : Register L2cfblnr at offset 0x134
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CFBLNR( y) \
     WRITE_REGISTER_ULONG( 0x134 , y)

#define SET_BITS_L_2CFBLNR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val |  mask ); \
   }

#define CLEAR_BITS_L_2CFBLNR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val & ~mask ); \
   }

#define READ_REGISTER_L_2CFBLNR() \
     READ_REGISTER_ULONG(0x134)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2cfblnr
//
// Return the value of register L_2CFBLNR
//
// Notes : Register Layerx ColorFrame Buffer Line Number Register (L2CFBLNR) at the offset 0x134, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame Buffer Line Number 
    // 
#define CFBLNBR_MASK 0x7FFU
#define CFBLNBR_OFFSET 10
#define CFBLNBR_START_BIT 0
#define CFBLNBR_WIDTH 11


#define L_2CFBLNR_REG 0x134

#define READ_CFBLNBR() \
   ((READ_REGISTER_ULONG(0x134) & CFBLNBR_MASK)  >> CFBLNBR_START_BIT)

#define WRITE_CFBLNBR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x134); \
     WRITE_REGISTER_ULONG(0x134, (OldValue & ~ CFBLNBR_MASK) | ((val << CFBLNBR_START_BIT) & CFBLNBR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2clutwr
//
// Return the value of register L2CLUTWR
//
// Notes : Register L2clutwr at offset 0x144
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_L_2CLUTWR( y) \
     WRITE_REGISTER_ULONG( 0x144 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : L2clutwr
//
// Return the value of register L_2CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L2CLUTWR) at the offset 0x144, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blue value 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define L_2CLUTWR_REG 0x144

#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0x144) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2clutwr
//
// Return the value of register L_2CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L2CLUTWR) at the offset 0x144, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Green value 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0x144) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2clutwr
//
// Return the value of register L_2CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L2CLUTWR) at the offset 0x144, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Red value 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



#define READ_RED() \
   ((READ_REGISTER_ULONG(0x144) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : L2clutwr
//
// Return the value of register L_2CLUTWR
//
// Notes : Register Layerx CLUT Write Register (L2CLUTWR) at the offset 0x144, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLUT Address 
    // 
#define CLUTADD_MASK 0xFF000000U
#define CLUTADD_OFFSET 31
#define CLUTADD_START_BIT 24
#define CLUTADD_WIDTH 8



#define READ_CLUTADD() \
   ((READ_REGISTER_ULONG(0x144) & CLUTADD_MASK)  >> CLUTADD_START_BIT)

#define WRITE_CLUTADD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ CLUTADD_MASK) | ((val << CLUTADD_START_BIT) & CLUTADD_MASK )); \
   } 

