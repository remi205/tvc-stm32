/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/ethernet_mac.h
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
 
#define ETHERNET_MAC 0x40028000
/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Maccr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACCR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_MACCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_MACCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_MACCR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSTF 
    // 
#define CSTF_MASK 0x2000000U
#define CSTF_OFFSET 25
#define CSTF_START_BIT 25
#define CSTF_WIDTH 1


#define MACCR_REG 0x0

typedef enum cstf {
    CSTF_0,
    CSTF_1
} CSTF_T ;
#define WRITE_CSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CSTF_MASK) | ((val << CSTF_START_BIT) & CSTF_MASK )); \
   } 

#define ENABLE_CSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CSTF_MASK ); \
   }

#define DISABLE_CSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CSTF_MASK ); \
   } 

#define READ_CSTF() \
   ((READ_REGISTER_ULONG(0x0) & CSTF_MASK)  >> CSTF_START_BIT)

#define WHEN_CSTF_HIGH() \
     if ( READ_CSTF() )


#define UNLESS_CSTF_HIGH() \
     if (! READ_CSTF() )


#define WAIT_CSTF_LOW() \
    while ( READ_CSTF() );


#define WAIT_CSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSTF() && (--___t___ > 0)); }


#define WAIT_CSTF_HIGH() \
    while (! READ_CSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WD 
    // 
#define WD_MASK 0x800000U
#define WD_OFFSET 23
#define WD_START_BIT 23
#define WD_WIDTH 1



typedef enum wd {
    WD_0,
    WD_1
} WD_T ;
#define WRITE_WD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WD_MASK) | ((val << WD_START_BIT) & WD_MASK )); \
   } 

#define ENABLE_WD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WD_MASK ); \
   }

#define DISABLE_WD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WD_MASK ); \
   } 

#define READ_WD() \
   ((READ_REGISTER_ULONG(0x0) & WD_MASK)  >> WD_START_BIT)

#define WHEN_WD_HIGH() \
     if ( READ_WD() )


#define UNLESS_WD_HIGH() \
     if (! READ_WD() )


#define WAIT_WD_LOW() \
    while ( READ_WD() );


#define WAIT_WD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WD() && (--___t___ > 0)); }


#define WAIT_WD_HIGH() \
    while (! READ_WD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // JD 
    // 
#define JD_MASK 0x400000U
#define JD_OFFSET 22
#define JD_START_BIT 22
#define JD_WIDTH 1



typedef enum jd {
    JD_0,
    JD_1
} JD_T ;
#define WRITE_JD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JD_MASK) | ((val << JD_START_BIT) & JD_MASK )); \
   } 

#define ENABLE_JD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JD_MASK ); \
   }

#define DISABLE_JD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JD_MASK ); \
   } 

#define READ_JD() \
   ((READ_REGISTER_ULONG(0x0) & JD_MASK)  >> JD_START_BIT)

#define WHEN_JD_HIGH() \
     if ( READ_JD() )


#define UNLESS_JD_HIGH() \
     if (! READ_JD() )


#define WAIT_JD_LOW() \
    while ( READ_JD() );


#define WAIT_JD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JD() && (--___t___ > 0)); }


#define WAIT_JD_HIGH() \
    while (! READ_JD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 17:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IFG 
    // 
#define IFG_MASK 0xE0000U
#define IFG_OFFSET 19
#define IFG_START_BIT 17
#define IFG_WIDTH 3



typedef enum ifg {
    IFG_0,
    IFG_1
} IFG_T ;
#define READ_IFG() \
   ((READ_REGISTER_ULONG(0x0) & IFG_MASK)  >> IFG_START_BIT)

#define WRITE_IFG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ IFG_MASK) | ((val << IFG_START_BIT) & IFG_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSD 
    // 
#define CSD_MASK 0x10000U
#define CSD_OFFSET 16
#define CSD_START_BIT 16
#define CSD_WIDTH 1



typedef enum csd {
    CSD_0,
    CSD_1
} CSD_T ;
#define WRITE_CSD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CSD_MASK) | ((val << CSD_START_BIT) & CSD_MASK )); \
   } 

#define ENABLE_CSD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CSD_MASK ); \
   }

#define DISABLE_CSD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CSD_MASK ); \
   } 

#define READ_CSD() \
   ((READ_REGISTER_ULONG(0x0) & CSD_MASK)  >> CSD_START_BIT)

#define WHEN_CSD_HIGH() \
     if ( READ_CSD() )


#define UNLESS_CSD_HIGH() \
     if (! READ_CSD() )


#define WAIT_CSD_LOW() \
    while ( READ_CSD() );


#define WAIT_CSD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSD() && (--___t___ > 0)); }


#define WAIT_CSD_HIGH() \
    while (! READ_CSD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FES 
    // 
#define FES_MASK 0x4000U
#define FES_OFFSET 14
#define FES_START_BIT 14
#define FES_WIDTH 1



typedef enum fes {
    FES_0,
    FES_1
} FES_T ;
#define WRITE_FES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FES_MASK) | ((val << FES_START_BIT) & FES_MASK )); \
   } 

#define ENABLE_FES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FES_MASK ); \
   }

#define DISABLE_FES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FES_MASK ); \
   } 

#define READ_FES() \
   ((READ_REGISTER_ULONG(0x0) & FES_MASK)  >> FES_START_BIT)

#define WHEN_FES_HIGH() \
     if ( READ_FES() )


#define UNLESS_FES_HIGH() \
     if (! READ_FES() )


#define WAIT_FES_LOW() \
    while ( READ_FES() );


#define WAIT_FES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FES() && (--___t___ > 0)); }


#define WAIT_FES_HIGH() \
    while (! READ_FES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ROD 
    // 
#define ROD_MASK 0x2000U
#define ROD_OFFSET 13
#define ROD_START_BIT 13
#define ROD_WIDTH 1



typedef enum rod {
    ROD_0,
    ROD_1
} ROD_T ;
#define WRITE_ROD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ROD_MASK) | ((val << ROD_START_BIT) & ROD_MASK )); \
   } 

#define ENABLE_ROD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ROD_MASK ); \
   }

#define DISABLE_ROD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ROD_MASK ); \
   } 

#define READ_ROD() \
   ((READ_REGISTER_ULONG(0x0) & ROD_MASK)  >> ROD_START_BIT)

#define WHEN_ROD_HIGH() \
     if ( READ_ROD() )


#define UNLESS_ROD_HIGH() \
     if (! READ_ROD() )


#define WAIT_ROD_LOW() \
    while ( READ_ROD() );


#define WAIT_ROD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ROD() && (--___t___ > 0)); }


#define WAIT_ROD_HIGH() \
    while (! READ_ROD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LM 
    // 
#define LM_MASK 0x1000U
#define LM_OFFSET 12
#define LM_START_BIT 12
#define LM_WIDTH 1



typedef enum lm {
    LM_0,
    LM_1
} LM_T ;
#define WRITE_LM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ LM_MASK) | ((val << LM_START_BIT) & LM_MASK )); \
   } 

#define ENABLE_LM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  LM_MASK ); \
   }

#define DISABLE_LM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~LM_MASK ); \
   } 

#define READ_LM() \
   ((READ_REGISTER_ULONG(0x0) & LM_MASK)  >> LM_START_BIT)

#define WHEN_LM_HIGH() \
     if ( READ_LM() )


#define UNLESS_LM_HIGH() \
     if (! READ_LM() )


#define WAIT_LM_LOW() \
    while ( READ_LM() );


#define WAIT_LM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LM() && (--___t___ > 0)); }


#define WAIT_LM_HIGH() \
    while (! READ_LM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DM 
    // 
#define DM_MASK 0x800U
#define DM_OFFSET 11
#define DM_START_BIT 11
#define DM_WIDTH 1



typedef enum dm {
    DM_0,
    DM_1
} DM_T ;
#define WRITE_DM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DM_MASK) | ((val << DM_START_BIT) & DM_MASK )); \
   } 

#define ENABLE_DM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DM_MASK ); \
   }

#define DISABLE_DM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DM_MASK ); \
   } 

#define READ_DM() \
   ((READ_REGISTER_ULONG(0x0) & DM_MASK)  >> DM_START_BIT)

#define WHEN_DM_HIGH() \
     if ( READ_DM() )


#define UNLESS_DM_HIGH() \
     if (! READ_DM() )


#define WAIT_DM_LOW() \
    while ( READ_DM() );


#define WAIT_DM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DM() && (--___t___ > 0)); }


#define WAIT_DM_HIGH() \
    while (! READ_DM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPCO 
    // 
#define IPCO_MASK 0x400U
#define IPCO_OFFSET 10
#define IPCO_START_BIT 10
#define IPCO_WIDTH 1



typedef enum ipco {
    IPCO_0,
    IPCO_1
} IPCO_T ;
#define WRITE_IPCO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ IPCO_MASK) | ((val << IPCO_START_BIT) & IPCO_MASK )); \
   } 

#define ENABLE_IPCO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  IPCO_MASK ); \
   }

#define DISABLE_IPCO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~IPCO_MASK ); \
   } 

#define READ_IPCO() \
   ((READ_REGISTER_ULONG(0x0) & IPCO_MASK)  >> IPCO_START_BIT)

#define WHEN_IPCO_HIGH() \
     if ( READ_IPCO() )


#define UNLESS_IPCO_HIGH() \
     if (! READ_IPCO() )


#define WAIT_IPCO_LOW() \
    while ( READ_IPCO() );


#define WAIT_IPCO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IPCO() && (--___t___ > 0)); }


#define WAIT_IPCO_HIGH() \
    while (! READ_IPCO() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RD 
    // 
#define RD_MASK 0x200U
#define RD_OFFSET 9
#define RD_START_BIT 9
#define RD_WIDTH 1



typedef enum rd {
    RD_0,
    RD_1
} RD_T ;
#define WRITE_RD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RD_MASK) | ((val << RD_START_BIT) & RD_MASK )); \
   } 

#define ENABLE_RD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  RD_MASK ); \
   }

#define DISABLE_RD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~RD_MASK ); \
   } 

#define READ_RD() \
   ((READ_REGISTER_ULONG(0x0) & RD_MASK)  >> RD_START_BIT)

#define WHEN_RD_HIGH() \
     if ( READ_RD() )


#define UNLESS_RD_HIGH() \
     if (! READ_RD() )


#define WAIT_RD_LOW() \
    while ( READ_RD() );


#define WAIT_RD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RD() && (--___t___ > 0)); }


#define WAIT_RD_HIGH() \
    while (! READ_RD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // APCS 
    // 
#define APCS_MASK 0x80U
#define APCS_OFFSET 7
#define APCS_START_BIT 7
#define APCS_WIDTH 1



typedef enum apcs {
    APCS_0,
    APCS_1
} APCS_T ;
#define WRITE_APCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ APCS_MASK) | ((val << APCS_START_BIT) & APCS_MASK )); \
   } 

#define ENABLE_APCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  APCS_MASK ); \
   }

#define DISABLE_APCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~APCS_MASK ); \
   } 

#define READ_APCS() \
   ((READ_REGISTER_ULONG(0x0) & APCS_MASK)  >> APCS_START_BIT)

#define WHEN_APCS_HIGH() \
     if ( READ_APCS() )


#define UNLESS_APCS_HIGH() \
     if (! READ_APCS() )


#define WAIT_APCS_LOW() \
    while ( READ_APCS() );


#define WAIT_APCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_APCS() && (--___t___ > 0)); }


#define WAIT_APCS_HIGH() \
    while (! READ_APCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 5:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BL 
    // 
#define BL_MASK 0x60U
#define BL_OFFSET 6
#define BL_START_BIT 5
#define BL_WIDTH 2



typedef enum bl {
    BL_0,
    BL_1
} BL_T ;
#define READ_BL() \
   ((READ_REGISTER_ULONG(0x0) & BL_MASK)  >> BL_START_BIT)

#define WRITE_BL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BL_MASK) | ((val << BL_START_BIT) & BL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DC 
    // 
#define DC_MASK 0x10U
#define DC_OFFSET 4
#define DC_START_BIT 4
#define DC_WIDTH 1



typedef enum dc {
    DC_0,
    DC_1
} DC_T ;
#define WRITE_DC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DC_MASK) | ((val << DC_START_BIT) & DC_MASK )); \
   } 

#define ENABLE_DC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DC_MASK ); \
   }

#define DISABLE_DC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DC_MASK ); \
   } 

#define READ_DC() \
   ((READ_REGISTER_ULONG(0x0) & DC_MASK)  >> DC_START_BIT)

#define WHEN_DC_HIGH() \
     if ( READ_DC() )


#define UNLESS_DC_HIGH() \
     if (! READ_DC() )


#define WAIT_DC_LOW() \
    while ( READ_DC() );


#define WAIT_DC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DC() && (--___t___ > 0)); }


#define WAIT_DC_HIGH() \
    while (! READ_DC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TE 
    // 
#define TE_MASK 0x8U
#define TE_OFFSET 3
#define TE_START_BIT 3
#define TE_WIDTH 1



typedef enum te {
    TE_0,
    TE_1
} TE_T ;
#define WRITE_TE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TE_MASK) | ((val << TE_START_BIT) & TE_MASK )); \
   } 

#define ENABLE_TE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TE_MASK ); \
   }

#define DISABLE_TE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TE_MASK ); \
   } 

#define READ_TE() \
   ((READ_REGISTER_ULONG(0x0) & TE_MASK)  >> TE_START_BIT)

#define WHEN_TE_HIGH() \
     if ( READ_TE() )


#define UNLESS_TE_HIGH() \
     if (! READ_TE() )


#define WAIT_TE_LOW() \
    while ( READ_TE() );


#define WAIT_TE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TE() && (--___t___ > 0)); }


#define WAIT_TE_HIGH() \
    while (! READ_TE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maccr
//
// Return the value of register MACCR
//
// Notes : Register Ethernet MAC configuration register (MACCR) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RE 
    // 
#define RE_MASK 0x4U
#define RE_OFFSET 2
#define RE_START_BIT 2
#define RE_WIDTH 1



typedef enum re {
    RE_0,
    RE_1
} RE_T ;
#define WRITE_RE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RE_MASK) | ((val << RE_START_BIT) & RE_MASK )); \
   } 

#define ENABLE_RE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  RE_MASK ); \
   }

#define DISABLE_RE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~RE_MASK ); \
   } 

#define READ_RE() \
   ((READ_REGISTER_ULONG(0x0) & RE_MASK)  >> RE_START_BIT)

#define WHEN_RE_HIGH() \
     if ( READ_RE() )


#define UNLESS_RE_HIGH() \
     if (! READ_RE() )


#define WAIT_RE_LOW() \
    while ( READ_RE() );


#define WAIT_RE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RE() && (--___t___ > 0)); }


#define WAIT_RE_HIGH() \
    while (! READ_RE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Macffr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACFFR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_MACFFR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_MACFFR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_MACFFR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RA_MASK 0x80000000U
#define RA_OFFSET 31
#define RA_START_BIT 31
#define RA_WIDTH 1


#define MACFFR_REG 0x4

typedef enum ra {
    RA_0,
    RA_1
} RA_T ;
#define WRITE_RA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RA_MASK) | ((val << RA_START_BIT) & RA_MASK )); \
   } 

#define ENABLE_RA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RA_MASK ); \
   }

#define DISABLE_RA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RA_MASK ); \
   } 

#define READ_RA() \
   ((READ_REGISTER_ULONG(0x4) & RA_MASK)  >> RA_START_BIT)

#define WHEN_RA_HIGH() \
     if ( READ_RA() )


#define UNLESS_RA_HIGH() \
     if (! READ_RA() )


#define WAIT_RA_LOW() \
    while ( READ_RA() );


#define WAIT_RA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RA() && (--___t___ > 0)); }


#define WAIT_RA_HIGH() \
    while (! READ_RA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HPF_MASK 0x200U
#define HPF_OFFSET 9
#define HPF_START_BIT 9
#define HPF_WIDTH 1



typedef enum hpf {
    HPF_0,
    HPF_1
} HPF_T ;
#define WRITE_HPF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HPF_MASK) | ((val << HPF_START_BIT) & HPF_MASK )); \
   } 

#define ENABLE_HPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HPF_MASK ); \
   }

#define DISABLE_HPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HPF_MASK ); \
   } 

#define READ_HPF() \
   ((READ_REGISTER_ULONG(0x4) & HPF_MASK)  >> HPF_START_BIT)

#define WHEN_HPF_HIGH() \
     if ( READ_HPF() )


#define UNLESS_HPF_HIGH() \
     if (! READ_HPF() )


#define WAIT_HPF_LOW() \
    while ( READ_HPF() );


#define WAIT_HPF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HPF() && (--___t___ > 0)); }


#define WAIT_HPF_HIGH() \
    while (! READ_HPF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SAF_MASK 0x100U
#define SAF_OFFSET 8
#define SAF_START_BIT 8
#define SAF_WIDTH 1



typedef enum saf {
    SAF_0,
    SAF_1
} SAF_T ;
#define WRITE_SAF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SAF_MASK) | ((val << SAF_START_BIT) & SAF_MASK )); \
   } 

#define ENABLE_SAF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SAF_MASK ); \
   }

#define DISABLE_SAF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SAF_MASK ); \
   } 

#define READ_SAF() \
   ((READ_REGISTER_ULONG(0x4) & SAF_MASK)  >> SAF_START_BIT)

#define WHEN_SAF_HIGH() \
     if ( READ_SAF() )


#define UNLESS_SAF_HIGH() \
     if (! READ_SAF() )


#define WAIT_SAF_LOW() \
    while ( READ_SAF() );


#define WAIT_SAF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAF() && (--___t___ > 0)); }


#define WAIT_SAF_HIGH() \
    while (! READ_SAF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SAIF_MASK 0x80U
#define SAIF_OFFSET 7
#define SAIF_START_BIT 7
#define SAIF_WIDTH 1



typedef enum saif {
    SAIF_0,
    SAIF_1
} SAIF_T ;
#define WRITE_SAIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SAIF_MASK) | ((val << SAIF_START_BIT) & SAIF_MASK )); \
   } 

#define ENABLE_SAIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SAIF_MASK ); \
   }

#define DISABLE_SAIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SAIF_MASK ); \
   } 

#define READ_SAIF() \
   ((READ_REGISTER_ULONG(0x4) & SAIF_MASK)  >> SAIF_START_BIT)

#define WHEN_SAIF_HIGH() \
     if ( READ_SAIF() )


#define UNLESS_SAIF_HIGH() \
     if (! READ_SAIF() )


#define WAIT_SAIF_LOW() \
    while ( READ_SAIF() );


#define WAIT_SAIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAIF() && (--___t___ > 0)); }


#define WAIT_SAIF_HIGH() \
    while (! READ_SAIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PCF_MASK 0x40U
#define PCF_OFFSET 6
#define PCF_START_BIT 6
#define PCF_WIDTH 1



typedef enum pcf {
    PCF_0,
    PCF_1
} PCF_T ;
#define WRITE_PCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PCF_MASK) | ((val << PCF_START_BIT) & PCF_MASK )); \
   } 

#define ENABLE_PCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PCF_MASK ); \
   }

#define DISABLE_PCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PCF_MASK ); \
   } 

#define READ_PCF() \
   ((READ_REGISTER_ULONG(0x4) & PCF_MASK)  >> PCF_START_BIT)

#define WHEN_PCF_HIGH() \
     if ( READ_PCF() )


#define UNLESS_PCF_HIGH() \
     if (! READ_PCF() )


#define WAIT_PCF_LOW() \
    while ( READ_PCF() );


#define WAIT_PCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCF() && (--___t___ > 0)); }


#define WAIT_PCF_HIGH() \
    while (! READ_PCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define BFD_MASK 0x20U
#define BFD_OFFSET 5
#define BFD_START_BIT 5
#define BFD_WIDTH 1



typedef enum bfd {
    BFD_0,
    BFD_1
} BFD_T ;
#define WRITE_BFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BFD_MASK) | ((val << BFD_START_BIT) & BFD_MASK )); \
   } 

#define ENABLE_BFD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BFD_MASK ); \
   }

#define DISABLE_BFD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BFD_MASK ); \
   } 

#define READ_BFD() \
   ((READ_REGISTER_ULONG(0x4) & BFD_MASK)  >> BFD_START_BIT)

#define WHEN_BFD_HIGH() \
     if ( READ_BFD() )


#define UNLESS_BFD_HIGH() \
     if (! READ_BFD() )


#define WAIT_BFD_LOW() \
    while ( READ_BFD() );


#define WAIT_BFD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BFD() && (--___t___ > 0)); }


#define WAIT_BFD_HIGH() \
    while (! READ_BFD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RAM_MASK 0x10U
#define RAM_OFFSET 4
#define RAM_START_BIT 4
#define RAM_WIDTH 1



typedef enum ram {
    RAM_0,
    RAM_1
} RAM_T ;
#define WRITE_RAM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RAM_MASK) | ((val << RAM_START_BIT) & RAM_MASK )); \
   } 

#define ENABLE_RAM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RAM_MASK ); \
   }

#define DISABLE_RAM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RAM_MASK ); \
   } 

#define READ_RAM() \
   ((READ_REGISTER_ULONG(0x4) & RAM_MASK)  >> RAM_START_BIT)

#define WHEN_RAM_HIGH() \
     if ( READ_RAM() )


#define UNLESS_RAM_HIGH() \
     if (! READ_RAM() )


#define WAIT_RAM_LOW() \
    while ( READ_RAM() );


#define WAIT_RAM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RAM() && (--___t___ > 0)); }


#define WAIT_RAM_HIGH() \
    while (! READ_RAM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define DAIF_MASK 0x8U
#define DAIF_OFFSET 3
#define DAIF_START_BIT 3
#define DAIF_WIDTH 1



typedef enum daif {
    DAIF_0,
    DAIF_1
} DAIF_T ;
#define WRITE_DAIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DAIF_MASK) | ((val << DAIF_START_BIT) & DAIF_MASK )); \
   } 

#define ENABLE_DAIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DAIF_MASK ); \
   }

#define DISABLE_DAIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DAIF_MASK ); \
   } 

#define READ_DAIF() \
   ((READ_REGISTER_ULONG(0x4) & DAIF_MASK)  >> DAIF_START_BIT)

#define WHEN_DAIF_HIGH() \
     if ( READ_DAIF() )


#define UNLESS_DAIF_HIGH() \
     if (! READ_DAIF() )


#define WAIT_DAIF_LOW() \
    while ( READ_DAIF() );


#define WAIT_DAIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DAIF() && (--___t___ > 0)); }


#define WAIT_DAIF_HIGH() \
    while (! READ_DAIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HM_MASK 0x4U
#define HM_OFFSET 2
#define HM_START_BIT 2
#define HM_WIDTH 1



typedef enum hm {
    HM_0,
    HM_1
} HM_T ;
#define WRITE_HM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HM_MASK) | ((val << HM_START_BIT) & HM_MASK )); \
   } 

#define ENABLE_HM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HM_MASK ); \
   }

#define DISABLE_HM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HM_MASK ); \
   } 

#define READ_HM() \
   ((READ_REGISTER_ULONG(0x4) & HM_MASK)  >> HM_START_BIT)

#define WHEN_HM_HIGH() \
     if ( READ_HM() )


#define UNLESS_HM_HIGH() \
     if (! READ_HM() )


#define WAIT_HM_LOW() \
    while ( READ_HM() );


#define WAIT_HM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HM() && (--___t___ > 0)); }


#define WAIT_HM_HIGH() \
    while (! READ_HM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HU_MASK 0x2U
#define HU_OFFSET 1
#define HU_START_BIT 1
#define HU_WIDTH 1



typedef enum hu {
    HU_0,
    HU_1
} HU_T ;
#define WRITE_HU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HU_MASK) | ((val << HU_START_BIT) & HU_MASK )); \
   } 

#define ENABLE_HU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HU_MASK ); \
   }

#define DISABLE_HU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HU_MASK ); \
   } 

#define READ_HU() \
   ((READ_REGISTER_ULONG(0x4) & HU_MASK)  >> HU_START_BIT)

#define WHEN_HU_HIGH() \
     if ( READ_HU() )


#define UNLESS_HU_HIGH() \
     if (! READ_HU() )


#define WAIT_HU_LOW() \
    while ( READ_HU() );


#define WAIT_HU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HU() && (--___t___ > 0)); }


#define WAIT_HU_HIGH() \
    while (! READ_HU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macffr
//
// Return the value of register MACFFR
//
// Notes : Register Ethernet MAC frame filter register (MACFFR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PM_MASK 0x1U
#define PM_OFFSET 0
#define PM_START_BIT 0
#define PM_WIDTH 1



typedef enum pm {
    PM_0,
    PM_1
} PM_T ;
#define WRITE_PM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PM_MASK) | ((val << PM_START_BIT) & PM_MASK )); \
   } 

#define ENABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PM_MASK ); \
   }

#define DISABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PM_MASK ); \
   } 

#define READ_PM() \
   ((READ_REGISTER_ULONG(0x4) & PM_MASK)  >> PM_START_BIT)

#define WHEN_PM_HIGH() \
     if ( READ_PM() )


#define UNLESS_PM_HIGH() \
     if (! READ_PM() )


#define WAIT_PM_LOW() \
    while ( READ_PM() );


#define WAIT_PM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PM() && (--___t___ > 0)); }


#define WAIT_PM_HIGH() \
    while (! READ_PM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Machthr
//
// Return the value of register MACHTHR
//
// Notes : Register Machthr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACHTHR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_MACHTHR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_MACHTHR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_MACHTHR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Machthr
//
// Return the value of register MACHTHR
//
// Notes : Register Ethernet MAC hash table high register (MACHTHR) at the offset 0x8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HTH_MASK 0xFFFFFFFFU
#define HTH_OFFSET 31
#define HTH_START_BIT 0
#define HTH_WIDTH 32


#define MACHTHR_REG 0x8

typedef enum hth {
    HTH_0,
    HTH_1
} HTH_T ;
#define READ_HTH() \
   ((READ_REGISTER_ULONG(0x8) & HTH_MASK)  >> HTH_START_BIT)

#define WRITE_HTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ HTH_MASK) | ((val << HTH_START_BIT) & HTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Machtlr
//
// Return the value of register MACHTLR
//
// Notes : Register Machtlr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACHTLR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_MACHTLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_MACHTLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_MACHTLR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Machtlr
//
// Return the value of register MACHTLR
//
// Notes : Register Ethernet MAC hash table low register (MACHTLR) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HTL_MASK 0xFFFFFFFFU
#define HTL_OFFSET 31
#define HTL_START_BIT 0
#define HTL_WIDTH 32


#define MACHTLR_REG 0xC

typedef enum htl {
    HTL_0,
    HTL_1
} HTL_T ;
#define READ_HTL() \
   ((READ_REGISTER_ULONG(0xC) & HTL_MASK)  >> HTL_START_BIT)

#define WRITE_HTL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HTL_MASK) | ((val << HTL_START_BIT) & HTL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiiar
//
// Return the value of register MACMIIAR
//
// Notes : Register Macmiiar at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACMIIAR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_MACMIIAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_MACMIIAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_MACMIIAR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiiar
//
// Return the value of register MACMIIAR
//
// Notes : Register Ethernet MAC MII address register (MACMIIAR) at the offset 0x10, Bits 11:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PA_MASK 0xF800U
#define PA_OFFSET 15
#define PA_START_BIT 11
#define PA_WIDTH 5


#define MACMIIAR_REG 0x10

typedef enum pa {
    PA_0,
    PA_1
} PA_T ;
#define READ_PA() \
   ((READ_REGISTER_ULONG(0x10) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiiar
//
// Return the value of register MACMIIAR
//
// Notes : Register Ethernet MAC MII address register (MACMIIAR) at the offset 0x10, Bits 6:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MR_MASK 0x7C0U
#define MR_OFFSET 10
#define MR_START_BIT 6
#define MR_WIDTH 5



typedef enum mr {
    MR_0,
    MR_1
} MR_T ;
#define READ_MR() \
   ((READ_REGISTER_ULONG(0x10) & MR_MASK)  >> MR_START_BIT)

#define WRITE_MR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MR_MASK) | ((val << MR_START_BIT) & MR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiiar
//
// Return the value of register MACMIIAR
//
// Notes : Register Ethernet MAC MII address register (MACMIIAR) at the offset 0x10, Bits 2:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define CR_MASK 0x1CU
#define CR_OFFSET 4
#define CR_START_BIT 2
#define CR_WIDTH 3



typedef enum cr {
    CR_0,
    CR_1
} CR_T ;
#define READ_CR() \
   ((READ_REGISTER_ULONG(0x10) & CR_MASK)  >> CR_START_BIT)

#define WRITE_CR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CR_MASK) | ((val << CR_START_BIT) & CR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiiar
//
// Return the value of register MACMIIAR
//
// Notes : Register Ethernet MAC MII address register (MACMIIAR) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MW_MASK 0x2U
#define MW_OFFSET 1
#define MW_START_BIT 1
#define MW_WIDTH 1



typedef enum mw {
    MW_0,
    MW_1
} MW_T ;
#define WRITE_MW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MW_MASK) | ((val << MW_START_BIT) & MW_MASK )); \
   } 

#define ENABLE_MW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  MW_MASK ); \
   }

#define DISABLE_MW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~MW_MASK ); \
   } 

#define READ_MW() \
   ((READ_REGISTER_ULONG(0x10) & MW_MASK)  >> MW_START_BIT)

#define WHEN_MW_HIGH() \
     if ( READ_MW() )


#define UNLESS_MW_HIGH() \
     if (! READ_MW() )


#define WAIT_MW_LOW() \
    while ( READ_MW() );


#define WAIT_MW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MW() && (--___t___ > 0)); }


#define WAIT_MW_HIGH() \
    while (! READ_MW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiiar
//
// Return the value of register MACMIIAR
//
// Notes : Register Ethernet MAC MII address register (MACMIIAR) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MB_MASK 0x1U
#define MB_OFFSET 0
#define MB_START_BIT 0
#define MB_WIDTH 1



typedef enum mb {
    MB_0,
    MB_1
} MB_T ;
#define WRITE_MB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MB_MASK) | ((val << MB_START_BIT) & MB_MASK )); \
   } 

#define ENABLE_MB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  MB_MASK ); \
   }

#define DISABLE_MB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~MB_MASK ); \
   } 

#define READ_MB() \
   ((READ_REGISTER_ULONG(0x10) & MB_MASK)  >> MB_START_BIT)

#define WHEN_MB_HIGH() \
     if ( READ_MB() )


#define UNLESS_MB_HIGH() \
     if (! READ_MB() )


#define WAIT_MB_LOW() \
    while ( READ_MB() );


#define WAIT_MB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MB() && (--___t___ > 0)); }


#define WAIT_MB_HIGH() \
    while (! READ_MB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiidr
//
// Return the value of register MACMIIDR
//
// Notes : Register Macmiidr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACMIIDR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_MACMIIDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_MACMIIDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_MACMIIDR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macmiidr
//
// Return the value of register MACMIIDR
//
// Notes : Register Ethernet MAC MII data register (MACMIIDR) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TD_MASK 0xFFFFU
#define TD_OFFSET 15
#define TD_START_BIT 0
#define TD_WIDTH 16


#define MACMIIDR_REG 0x14

typedef enum td {
    TD_0,
    TD_1
} TD_T ;
#define READ_TD() \
   ((READ_REGISTER_ULONG(0x14) & TD_MASK)  >> TD_START_BIT)

#define WRITE_TD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TD_MASK) | ((val << TD_START_BIT) & TD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Macfcr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACFCR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_MACFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_MACFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_MACFCR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PT_MASK 0xFFFF0000U
#define PT_OFFSET 31
#define PT_START_BIT 16
#define PT_WIDTH 16


#define MACFCR_REG 0x18

typedef enum pt {
    PT_0,
    PT_1
} PT_T ;
#define READ_PT() \
   ((READ_REGISTER_ULONG(0x18) & PT_MASK)  >> PT_START_BIT)

#define WRITE_PT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ PT_MASK) | ((val << PT_START_BIT) & PT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ZQPD_MASK 0x80U
#define ZQPD_OFFSET 7
#define ZQPD_START_BIT 7
#define ZQPD_WIDTH 1



typedef enum zqpd {
    ZQPD_0,
    ZQPD_1
} ZQPD_T ;
#define WRITE_ZQPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ZQPD_MASK) | ((val << ZQPD_START_BIT) & ZQPD_MASK )); \
   } 

#define ENABLE_ZQPD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  ZQPD_MASK ); \
   }

#define DISABLE_ZQPD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~ZQPD_MASK ); \
   } 

#define READ_ZQPD() \
   ((READ_REGISTER_ULONG(0x18) & ZQPD_MASK)  >> ZQPD_START_BIT)

#define WHEN_ZQPD_HIGH() \
     if ( READ_ZQPD() )


#define UNLESS_ZQPD_HIGH() \
     if (! READ_ZQPD() )


#define WAIT_ZQPD_LOW() \
    while ( READ_ZQPD() );


#define WAIT_ZQPD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ZQPD() && (--___t___ > 0)); }


#define WAIT_ZQPD_HIGH() \
    while (! READ_ZQPD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PLT_MASK 0x30U
#define PLT_OFFSET 5
#define PLT_START_BIT 4
#define PLT_WIDTH 2



typedef enum plt {
    PLT_0,
    PLT_1
} PLT_T ;
#define READ_PLT() \
   ((READ_REGISTER_ULONG(0x18) & PLT_MASK)  >> PLT_START_BIT)

#define WRITE_PLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ PLT_MASK) | ((val << PLT_START_BIT) & PLT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define UPFD_MASK 0x8U
#define UPFD_OFFSET 3
#define UPFD_START_BIT 3
#define UPFD_WIDTH 1



typedef enum upfd {
    UPFD_0,
    UPFD_1
} UPFD_T ;
#define WRITE_UPFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ UPFD_MASK) | ((val << UPFD_START_BIT) & UPFD_MASK )); \
   } 

#define ENABLE_UPFD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  UPFD_MASK ); \
   }

#define DISABLE_UPFD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~UPFD_MASK ); \
   } 

#define READ_UPFD() \
   ((READ_REGISTER_ULONG(0x18) & UPFD_MASK)  >> UPFD_START_BIT)

#define WHEN_UPFD_HIGH() \
     if ( READ_UPFD() )


#define UNLESS_UPFD_HIGH() \
     if (! READ_UPFD() )


#define WAIT_UPFD_LOW() \
    while ( READ_UPFD() );


#define WAIT_UPFD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UPFD() && (--___t___ > 0)); }


#define WAIT_UPFD_HIGH() \
    while (! READ_UPFD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFCE_MASK 0x4U
#define RFCE_OFFSET 2
#define RFCE_START_BIT 2
#define RFCE_WIDTH 1



typedef enum rfce {
    RFCE_0,
    RFCE_1
} RFCE_T ;
#define WRITE_RFCE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ RFCE_MASK) | ((val << RFCE_START_BIT) & RFCE_MASK )); \
   } 

#define ENABLE_RFCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  RFCE_MASK ); \
   }

#define DISABLE_RFCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~RFCE_MASK ); \
   } 

#define READ_RFCE() \
   ((READ_REGISTER_ULONG(0x18) & RFCE_MASK)  >> RFCE_START_BIT)

#define WHEN_RFCE_HIGH() \
     if ( READ_RFCE() )


#define UNLESS_RFCE_HIGH() \
     if (! READ_RFCE() )


#define WAIT_RFCE_LOW() \
    while ( READ_RFCE() );


#define WAIT_RFCE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RFCE() && (--___t___ > 0)); }


#define WAIT_RFCE_HIGH() \
    while (! READ_RFCE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TFCE_MASK 0x2U
#define TFCE_OFFSET 1
#define TFCE_START_BIT 1
#define TFCE_WIDTH 1



typedef enum tfce {
    TFCE_0,
    TFCE_1
} TFCE_T ;
#define WRITE_TFCE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ TFCE_MASK) | ((val << TFCE_START_BIT) & TFCE_MASK )); \
   } 

#define ENABLE_TFCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  TFCE_MASK ); \
   }

#define DISABLE_TFCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~TFCE_MASK ); \
   } 

#define READ_TFCE() \
   ((READ_REGISTER_ULONG(0x18) & TFCE_MASK)  >> TFCE_START_BIT)

#define WHEN_TFCE_HIGH() \
     if ( READ_TFCE() )


#define UNLESS_TFCE_HIGH() \
     if (! READ_TFCE() )


#define WAIT_TFCE_LOW() \
    while ( READ_TFCE() );


#define WAIT_TFCE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TFCE() && (--___t___ > 0)); }


#define WAIT_TFCE_HIGH() \
    while (! READ_TFCE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macfcr
//
// Return the value of register MACFCR
//
// Notes : Register Ethernet MAC flow control register (MACFCR) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define FCB_MASK 0x1U
#define FCB_OFFSET 0
#define FCB_START_BIT 0
#define FCB_WIDTH 1



typedef enum fcb {
    FCB_0,
    FCB_1
} FCB_T ;
#define WRITE_FCB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FCB_MASK) | ((val << FCB_START_BIT) & FCB_MASK )); \
   } 

#define ENABLE_FCB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FCB_MASK ); \
   }

#define DISABLE_FCB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FCB_MASK ); \
   } 

#define READ_FCB() \
   ((READ_REGISTER_ULONG(0x18) & FCB_MASK)  >> FCB_START_BIT)

#define WHEN_FCB_HIGH() \
     if ( READ_FCB() )


#define UNLESS_FCB_HIGH() \
     if (! READ_FCB() )


#define WAIT_FCB_LOW() \
    while ( READ_FCB() );


#define WAIT_FCB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FCB() && (--___t___ > 0)); }


#define WAIT_FCB_HIGH() \
    while (! READ_FCB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macvlantr
//
// Return the value of register MACVLANTR
//
// Notes : Register Macvlantr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACVLANTR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_MACVLANTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_MACVLANTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_MACVLANTR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macvlantr
//
// Return the value of register MACVLANTR
//
// Notes : Register Ethernet MAC VLAN tag register (MACVLANTR) at the offset 0x1C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define VLANTC_MASK 0x10000U
#define VLANTC_OFFSET 16
#define VLANTC_START_BIT 16
#define VLANTC_WIDTH 1


#define MACVLANTR_REG 0x1C

typedef enum vlantc {
    VLANTC_0,
    VLANTC_1
} VLANTC_T ;
#define WRITE_VLANTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ VLANTC_MASK) | ((val << VLANTC_START_BIT) & VLANTC_MASK )); \
   } 

#define ENABLE_VLANTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  VLANTC_MASK ); \
   }

#define DISABLE_VLANTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~VLANTC_MASK ); \
   } 

#define READ_VLANTC() \
   ((READ_REGISTER_ULONG(0x1C) & VLANTC_MASK)  >> VLANTC_START_BIT)

#define WHEN_VLANTC_HIGH() \
     if ( READ_VLANTC() )


#define UNLESS_VLANTC_HIGH() \
     if (! READ_VLANTC() )


#define WAIT_VLANTC_LOW() \
    while ( READ_VLANTC() );


#define WAIT_VLANTC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VLANTC() && (--___t___ > 0)); }


#define WAIT_VLANTC_HIGH() \
    while (! READ_VLANTC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macvlantr
//
// Return the value of register MACVLANTR
//
// Notes : Register Ethernet MAC VLAN tag register (MACVLANTR) at the offset 0x1C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define VLANTI_MASK 0xFFFFU
#define VLANTI_OFFSET 15
#define VLANTI_START_BIT 0
#define VLANTI_WIDTH 16



typedef enum vlanti {
    VLANTI_0,
    VLANTI_1
} VLANTI_T ;
#define READ_VLANTI() \
   ((READ_REGISTER_ULONG(0x1C) & VLANTI_MASK)  >> VLANTI_START_BIT)

#define WRITE_VLANTI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ VLANTI_MASK) | ((val << VLANTI_START_BIT) & VLANTI_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Macpmtcsr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACPMTCSR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_MACPMTCSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_MACPMTCSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_MACPMTCSR() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define WFFRPR_MASK 0x80000000U
#define WFFRPR_OFFSET 31
#define WFFRPR_START_BIT 31
#define WFFRPR_WIDTH 1


#define MACPMTCSR_REG 0x2C

typedef enum wffrpr {
    WFFRPR_0,
    WFFRPR_1
} WFFRPR_T ;
#define WRITE_WFFRPR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ WFFRPR_MASK) | ((val << WFFRPR_START_BIT) & WFFRPR_MASK )); \
   } 

#define ENABLE_WFFRPR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  WFFRPR_MASK ); \
   }

#define DISABLE_WFFRPR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~WFFRPR_MASK ); \
   } 

#define READ_WFFRPR() \
   ((READ_REGISTER_ULONG(0x2C) & WFFRPR_MASK)  >> WFFRPR_START_BIT)

#define WHEN_WFFRPR_HIGH() \
     if ( READ_WFFRPR() )


#define UNLESS_WFFRPR_HIGH() \
     if (! READ_WFFRPR() )


#define WAIT_WFFRPR_LOW() \
    while ( READ_WFFRPR() );


#define WAIT_WFFRPR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WFFRPR() && (--___t___ > 0)); }


#define WAIT_WFFRPR_HIGH() \
    while (! READ_WFFRPR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define GU_MASK 0x200U
#define GU_OFFSET 9
#define GU_START_BIT 9
#define GU_WIDTH 1



typedef enum gu {
    GU_0,
    GU_1
} GU_T ;
#define WRITE_GU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ GU_MASK) | ((val << GU_START_BIT) & GU_MASK )); \
   } 

#define ENABLE_GU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  GU_MASK ); \
   }

#define DISABLE_GU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~GU_MASK ); \
   } 

#define READ_GU() \
   ((READ_REGISTER_ULONG(0x2C) & GU_MASK)  >> GU_START_BIT)

#define WHEN_GU_HIGH() \
     if ( READ_GU() )


#define UNLESS_GU_HIGH() \
     if (! READ_GU() )


#define WAIT_GU_LOW() \
    while ( READ_GU() );


#define WAIT_GU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GU() && (--___t___ > 0)); }


#define WAIT_GU_HIGH() \
    while (! READ_GU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define WFR_MASK 0x40U
#define WFR_OFFSET 6
#define WFR_START_BIT 6
#define WFR_WIDTH 1



typedef enum wfr {
    WFR_0,
    WFR_1
} WFR_T ;
#define WRITE_WFR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ WFR_MASK) | ((val << WFR_START_BIT) & WFR_MASK )); \
   } 

#define ENABLE_WFR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  WFR_MASK ); \
   }

#define DISABLE_WFR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~WFR_MASK ); \
   } 

#define READ_WFR() \
   ((READ_REGISTER_ULONG(0x2C) & WFR_MASK)  >> WFR_START_BIT)

#define WHEN_WFR_HIGH() \
     if ( READ_WFR() )


#define UNLESS_WFR_HIGH() \
     if (! READ_WFR() )


#define WAIT_WFR_LOW() \
    while ( READ_WFR() );


#define WAIT_WFR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WFR() && (--___t___ > 0)); }


#define WAIT_WFR_HIGH() \
    while (! READ_WFR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MPR_MASK 0x20U
#define MPR_OFFSET 5
#define MPR_START_BIT 5
#define MPR_WIDTH 1



typedef enum mpr {
    MPR_0,
    MPR_1
} MPR_T ;
#define WRITE_MPR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ MPR_MASK) | ((val << MPR_START_BIT) & MPR_MASK )); \
   } 

#define ENABLE_MPR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  MPR_MASK ); \
   }

#define DISABLE_MPR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~MPR_MASK ); \
   } 

#define READ_MPR() \
   ((READ_REGISTER_ULONG(0x2C) & MPR_MASK)  >> MPR_START_BIT)

#define WHEN_MPR_HIGH() \
     if ( READ_MPR() )


#define UNLESS_MPR_HIGH() \
     if (! READ_MPR() )


#define WAIT_MPR_LOW() \
    while ( READ_MPR() );


#define WAIT_MPR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MPR() && (--___t___ > 0)); }


#define WAIT_MPR_HIGH() \
    while (! READ_MPR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define WFE_MASK 0x4U
#define WFE_OFFSET 2
#define WFE_START_BIT 2
#define WFE_WIDTH 1



typedef enum wfe {
    WFE_0,
    WFE_1
} WFE_T ;
#define WRITE_WFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ WFE_MASK) | ((val << WFE_START_BIT) & WFE_MASK )); \
   } 

#define ENABLE_WFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  WFE_MASK ); \
   }

#define DISABLE_WFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~WFE_MASK ); \
   } 

#define READ_WFE() \
   ((READ_REGISTER_ULONG(0x2C) & WFE_MASK)  >> WFE_START_BIT)

#define WHEN_WFE_HIGH() \
     if ( READ_WFE() )


#define UNLESS_WFE_HIGH() \
     if (! READ_WFE() )


#define WAIT_WFE_LOW() \
    while ( READ_WFE() );


#define WAIT_WFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WFE() && (--___t___ > 0)); }


#define WAIT_WFE_HIGH() \
    while (! READ_WFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MPE_MASK 0x2U
#define MPE_OFFSET 1
#define MPE_START_BIT 1
#define MPE_WIDTH 1



typedef enum mpe {
    MPE_0,
    MPE_1
} MPE_T ;
#define WRITE_MPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ MPE_MASK) | ((val << MPE_START_BIT) & MPE_MASK )); \
   } 

#define ENABLE_MPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  MPE_MASK ); \
   }

#define DISABLE_MPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~MPE_MASK ); \
   } 

#define READ_MPE() \
   ((READ_REGISTER_ULONG(0x2C) & MPE_MASK)  >> MPE_START_BIT)

#define WHEN_MPE_HIGH() \
     if ( READ_MPE() )


#define UNLESS_MPE_HIGH() \
     if (! READ_MPE() )


#define WAIT_MPE_LOW() \
    while ( READ_MPE() );


#define WAIT_MPE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MPE() && (--___t___ > 0)); }


#define WAIT_MPE_HIGH() \
    while (! READ_MPE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macpmtcsr
//
// Return the value of register MACPMTCSR
//
// Notes : Register Ethernet MAC PMT control and status register (MACPMTCSR) at the offset 0x2C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PD_MASK 0x1U
#define PD_OFFSET 0
#define PD_START_BIT 0
#define PD_WIDTH 1



typedef enum pd {
    PD_0,
    PD_1
} PD_T ;
#define WRITE_PD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ PD_MASK) | ((val << PD_START_BIT) & PD_MASK )); \
   } 

#define ENABLE_PD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  PD_MASK ); \
   }

#define DISABLE_PD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~PD_MASK ); \
   } 

#define READ_PD() \
   ((READ_REGISTER_ULONG(0x2C) & PD_MASK)  >> PD_START_BIT)

#define WHEN_PD_HIGH() \
     if ( READ_PD() )


#define UNLESS_PD_HIGH() \
     if (! READ_PD() )


#define WAIT_PD_LOW() \
    while ( READ_PD() );


#define WAIT_PD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PD() && (--___t___ > 0)); }


#define WAIT_PD_HIGH() \
    while (! READ_PD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Macdbgr at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MACDBGR() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Ethernet MAC debug register (MACDBGR) at the offset 0x34, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MCFHP 
    // 
#define MCFHP_MASK 0x20U
#define MCFHP_OFFSET 5
#define MCFHP_START_BIT 5
#define MCFHP_WIDTH 1


#define MACDBGR_REG 0x34

typedef enum mcfhp {
    MCFHP_0,
    MCFHP_1
} MCFHP_T ;
#define WRITE_MCFHP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ MCFHP_MASK) | ((val << MCFHP_START_BIT) & MCFHP_MASK )); \
   } 

#define ENABLE_MCFHP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  MCFHP_MASK ); \
   }

#define DISABLE_MCFHP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~MCFHP_MASK ); \
   } 

#define READ_MCFHP() \
   ((READ_REGISTER_ULONG(0x34) & MCFHP_MASK)  >> MCFHP_START_BIT)

#define WHEN_MCFHP_HIGH() \
     if ( READ_MCFHP() )


#define UNLESS_MCFHP_HIGH() \
     if (! READ_MCFHP() )


#define WAIT_MCFHP_LOW() \
    while ( READ_MCFHP() );


#define WAIT_MCFHP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MCFHP() && (--___t___ > 0)); }


#define WAIT_MCFHP_HIGH() \
    while (! READ_MCFHP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Ethernet MAC debug register (MACDBGR) at the offset 0x34, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MCP 
    // 
#define MCP_MASK 0x10U
#define MCP_OFFSET 4
#define MCP_START_BIT 4
#define MCP_WIDTH 1



typedef enum mcp {
    MCP_0,
    MCP_1
} MCP_T ;
#define WRITE_MCP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ MCP_MASK) | ((val << MCP_START_BIT) & MCP_MASK )); \
   } 

#define ENABLE_MCP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  MCP_MASK ); \
   }

#define DISABLE_MCP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~MCP_MASK ); \
   } 

#define READ_MCP() \
   ((READ_REGISTER_ULONG(0x34) & MCP_MASK)  >> MCP_START_BIT)

#define WHEN_MCP_HIGH() \
     if ( READ_MCP() )


#define UNLESS_MCP_HIGH() \
     if (! READ_MCP() )


#define WAIT_MCP_LOW() \
    while ( READ_MCP() );


#define WAIT_MCP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MCP() && (--___t___ > 0)); }


#define WAIT_MCP_HIGH() \
    while (! READ_MCP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Ethernet MAC debug register (MACDBGR) at the offset 0x34, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MCF 
    // 
#define MCF_MASK 0x8U
#define MCF_OFFSET 3
#define MCF_START_BIT 3
#define MCF_WIDTH 1



typedef enum mcf {
    MCF_0,
    MCF_1
} MCF_T ;
#define WRITE_MCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ MCF_MASK) | ((val << MCF_START_BIT) & MCF_MASK )); \
   } 

#define ENABLE_MCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  MCF_MASK ); \
   }

#define DISABLE_MCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~MCF_MASK ); \
   } 

#define READ_MCF() \
   ((READ_REGISTER_ULONG(0x34) & MCF_MASK)  >> MCF_START_BIT)

#define WHEN_MCF_HIGH() \
     if ( READ_MCF() )


#define UNLESS_MCF_HIGH() \
     if (! READ_MCF() )


#define WAIT_MCF_LOW() \
    while ( READ_MCF() );


#define WAIT_MCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MCF() && (--___t___ > 0)); }


#define WAIT_MCF_HIGH() \
    while (! READ_MCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Ethernet MAC debug register (MACDBGR) at the offset 0x34, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ROR 
    // 
#define ROR_MASK 0x4U
#define ROR_OFFSET 2
#define ROR_START_BIT 2
#define ROR_WIDTH 1



typedef enum ror {
    ROR_0,
    ROR_1
} ROR_T ;
#define WRITE_ROR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ ROR_MASK) | ((val << ROR_START_BIT) & ROR_MASK )); \
   } 

#define ENABLE_ROR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  ROR_MASK ); \
   }

#define DISABLE_ROR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~ROR_MASK ); \
   } 

#define READ_ROR() \
   ((READ_REGISTER_ULONG(0x34) & ROR_MASK)  >> ROR_START_BIT)

#define WHEN_ROR_HIGH() \
     if ( READ_ROR() )


#define UNLESS_ROR_HIGH() \
     if (! READ_ROR() )


#define WAIT_ROR_LOW() \
    while ( READ_ROR() );


#define WAIT_ROR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ROR() && (--___t___ > 0)); }


#define WAIT_ROR_HIGH() \
    while (! READ_ROR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Ethernet MAC debug register (MACDBGR) at the offset 0x34, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSR 
    // 
#define CSR_MASK 0x2U
#define CSR_OFFSET 1
#define CSR_START_BIT 1
#define CSR_WIDTH 1



typedef enum csr {
    CSR_0,
    CSR_1
} CSR_T ;
#define WRITE_CSR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CSR_MASK) | ((val << CSR_START_BIT) & CSR_MASK )); \
   } 

#define ENABLE_CSR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CSR_MASK ); \
   }

#define DISABLE_CSR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CSR_MASK ); \
   } 

#define READ_CSR() \
   ((READ_REGISTER_ULONG(0x34) & CSR_MASK)  >> CSR_START_BIT)

#define WHEN_CSR_HIGH() \
     if ( READ_CSR() )


#define UNLESS_CSR_HIGH() \
     if (! READ_CSR() )


#define WAIT_CSR_LOW() \
    while ( READ_CSR() );


#define WAIT_CSR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSR() && (--___t___ > 0)); }


#define WAIT_CSR_HIGH() \
    while (! READ_CSR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macdbgr
//
// Return the value of register MACDBGR
//
// Notes : Register Ethernet MAC debug register (MACDBGR) at the offset 0x34, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CR 
    // 
#define CR_MASK 0x1U
#define CR_OFFSET 0
#define CR_START_BIT 0
#define CR_WIDTH 1



#define WRITE_CR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CR_MASK) | ((val << CR_START_BIT) & CR_MASK )); \
   } 

#define ENABLE_CR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CR_MASK ); \
   }

#define DISABLE_CR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CR_MASK ); \
   } 

#define READ_CR() \
   ((READ_REGISTER_ULONG(0x34) & CR_MASK)  >> CR_START_BIT)

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
// Function : Macsr
//
// Return the value of register MACSR
//
// Notes : Register Macsr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Macsr
//
// Return the value of register MACSR
//
// Notes : Register Ethernet MAC interrupt status register (MACSR) at the offset 0x38, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSTS_MASK 0x200U
#define TSTS_OFFSET 9
#define TSTS_START_BIT 9
#define TSTS_WIDTH 1


#define MACSR_REG 0x38

typedef enum tsts {
    TSTS_0,
    TSTS_1
} TSTS_T ;
#define WRITE_TSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ TSTS_MASK) | ((val << TSTS_START_BIT) & TSTS_MASK )); \
   } 

#define ENABLE_TSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  TSTS_MASK ); \
   }

#define DISABLE_TSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~TSTS_MASK ); \
   } 

#define READ_TSTS() \
   ((READ_REGISTER_ULONG(0x38) & TSTS_MASK)  >> TSTS_START_BIT)

#define WHEN_TSTS_HIGH() \
     if ( READ_TSTS() )


#define UNLESS_TSTS_HIGH() \
     if (! READ_TSTS() )


#define WAIT_TSTS_LOW() \
    while ( READ_TSTS() );


#define WAIT_TSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSTS() && (--___t___ > 0)); }


#define WAIT_TSTS_HIGH() \
    while (! READ_TSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macsr
//
// Return the value of register MACSR
//
// Notes : Register Ethernet MAC interrupt status register (MACSR) at the offset 0x38, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MMCTS_MASK 0x40U
#define MMCTS_OFFSET 6
#define MMCTS_START_BIT 6
#define MMCTS_WIDTH 1



typedef enum mmcts {
    MMCTS_0,
    MMCTS_1
} MMCTS_T ;
#define WRITE_MMCTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ MMCTS_MASK) | ((val << MMCTS_START_BIT) & MMCTS_MASK )); \
   } 

#define ENABLE_MMCTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  MMCTS_MASK ); \
   }

#define DISABLE_MMCTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~MMCTS_MASK ); \
   } 

#define READ_MMCTS() \
   ((READ_REGISTER_ULONG(0x38) & MMCTS_MASK)  >> MMCTS_START_BIT)

#define WHEN_MMCTS_HIGH() \
     if ( READ_MMCTS() )


#define UNLESS_MMCTS_HIGH() \
     if (! READ_MMCTS() )


#define WAIT_MMCTS_LOW() \
    while ( READ_MMCTS() );


#define WAIT_MMCTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MMCTS() && (--___t___ > 0)); }


#define WAIT_MMCTS_HIGH() \
    while (! READ_MMCTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macsr
//
// Return the value of register MACSR
//
// Notes : Register Ethernet MAC interrupt status register (MACSR) at the offset 0x38, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MMCRS_MASK 0x20U
#define MMCRS_OFFSET 5
#define MMCRS_START_BIT 5
#define MMCRS_WIDTH 1



typedef enum mmcrs {
    MMCRS_0,
    MMCRS_1
} MMCRS_T ;
#define WRITE_MMCRS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ MMCRS_MASK) | ((val << MMCRS_START_BIT) & MMCRS_MASK )); \
   } 

#define ENABLE_MMCRS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  MMCRS_MASK ); \
   }

#define DISABLE_MMCRS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~MMCRS_MASK ); \
   } 

#define READ_MMCRS() \
   ((READ_REGISTER_ULONG(0x38) & MMCRS_MASK)  >> MMCRS_START_BIT)

#define WHEN_MMCRS_HIGH() \
     if ( READ_MMCRS() )


#define UNLESS_MMCRS_HIGH() \
     if (! READ_MMCRS() )


#define WAIT_MMCRS_LOW() \
    while ( READ_MMCRS() );


#define WAIT_MMCRS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MMCRS() && (--___t___ > 0)); }


#define WAIT_MMCRS_HIGH() \
    while (! READ_MMCRS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macsr
//
// Return the value of register MACSR
//
// Notes : Register Ethernet MAC interrupt status register (MACSR) at the offset 0x38, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MMCS_MASK 0x10U
#define MMCS_OFFSET 4
#define MMCS_START_BIT 4
#define MMCS_WIDTH 1



typedef enum mmcs {
    MMCS_0,
    MMCS_1
} MMCS_T ;
#define WRITE_MMCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ MMCS_MASK) | ((val << MMCS_START_BIT) & MMCS_MASK )); \
   } 

#define ENABLE_MMCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  MMCS_MASK ); \
   }

#define DISABLE_MMCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~MMCS_MASK ); \
   } 

#define READ_MMCS() \
   ((READ_REGISTER_ULONG(0x38) & MMCS_MASK)  >> MMCS_START_BIT)

#define WHEN_MMCS_HIGH() \
     if ( READ_MMCS() )


#define UNLESS_MMCS_HIGH() \
     if (! READ_MMCS() )


#define WAIT_MMCS_LOW() \
    while ( READ_MMCS() );


#define WAIT_MMCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MMCS() && (--___t___ > 0)); }


#define WAIT_MMCS_HIGH() \
    while (! READ_MMCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macsr
//
// Return the value of register MACSR
//
// Notes : Register Ethernet MAC interrupt status register (MACSR) at the offset 0x38, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PMTS_MASK 0x8U
#define PMTS_OFFSET 3
#define PMTS_START_BIT 3
#define PMTS_WIDTH 1



typedef enum pmts {
    PMTS_0,
    PMTS_1
} PMTS_T ;
#define WRITE_PMTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ PMTS_MASK) | ((val << PMTS_START_BIT) & PMTS_MASK )); \
   } 

#define ENABLE_PMTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  PMTS_MASK ); \
   }

#define DISABLE_PMTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~PMTS_MASK ); \
   } 

#define READ_PMTS() \
   ((READ_REGISTER_ULONG(0x38) & PMTS_MASK)  >> PMTS_START_BIT)

#define WHEN_PMTS_HIGH() \
     if ( READ_PMTS() )


#define UNLESS_PMTS_HIGH() \
     if (! READ_PMTS() )


#define WAIT_PMTS_LOW() \
    while ( READ_PMTS() );


#define WAIT_PMTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PMTS() && (--___t___ > 0)); }


#define WAIT_PMTS_HIGH() \
    while (! READ_PMTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macimr
//
// Return the value of register MACIMR
//
// Notes : Register Macimr at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACIMR( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_MACIMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_MACIMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_MACIMR() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macimr
//
// Return the value of register MACIMR
//
// Notes : Register Ethernet MAC interrupt mask register (MACIMR) at the offset 0x3C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSTIM_MASK 0x200U
#define TSTIM_OFFSET 9
#define TSTIM_START_BIT 9
#define TSTIM_WIDTH 1


#define MACIMR_REG 0x3C

typedef enum tstim {
    TSTIM_0,
    TSTIM_1
} TSTIM_T ;
#define WRITE_TSTIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TSTIM_MASK) | ((val << TSTIM_START_BIT) & TSTIM_MASK )); \
   } 

#define ENABLE_TSTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TSTIM_MASK ); \
   }

#define DISABLE_TSTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TSTIM_MASK ); \
   } 

#define READ_TSTIM() \
   ((READ_REGISTER_ULONG(0x3C) & TSTIM_MASK)  >> TSTIM_START_BIT)

#define WHEN_TSTIM_HIGH() \
     if ( READ_TSTIM() )


#define UNLESS_TSTIM_HIGH() \
     if (! READ_TSTIM() )


#define WAIT_TSTIM_LOW() \
    while ( READ_TSTIM() );


#define WAIT_TSTIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSTIM() && (--___t___ > 0)); }


#define WAIT_TSTIM_HIGH() \
    while (! READ_TSTIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Macimr
//
// Return the value of register MACIMR
//
// Notes : Register Ethernet MAC interrupt mask register (MACIMR) at the offset 0x3C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PMTIM_MASK 0x8U
#define PMTIM_OFFSET 3
#define PMTIM_START_BIT 3
#define PMTIM_WIDTH 1



typedef enum pmtim {
    PMTIM_0,
    PMTIM_1
} PMTIM_T ;
#define WRITE_PMTIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ PMTIM_MASK) | ((val << PMTIM_START_BIT) & PMTIM_MASK )); \
   } 

#define ENABLE_PMTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  PMTIM_MASK ); \
   }

#define DISABLE_PMTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~PMTIM_MASK ); \
   } 

#define READ_PMTIM() \
   ((READ_REGISTER_ULONG(0x3C) & PMTIM_MASK)  >> PMTIM_START_BIT)

#define WHEN_PMTIM_HIGH() \
     if ( READ_PMTIM() )


#define UNLESS_PMTIM_HIGH() \
     if (! READ_PMTIM() )


#define WAIT_PMTIM_LOW() \
    while ( READ_PMTIM() );


#define WAIT_PMTIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PMTIM() && (--___t___ > 0)); }


#define WAIT_PMTIM_HIGH() \
    while (! READ_PMTIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca0hr
//
// Return the value of register MACA0HR
//
// Notes : Register Maca0hr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Maca0hr
//
// Return the value of register MACA_0HR
//
// Notes : Register Ethernet MAC address 0 high register (MACA0HR) at the offset 0x40, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Always 1 
    // 
#define MO_MASK 0x80000000U
#define MO_OFFSET 31
#define MO_START_BIT 31
#define MO_WIDTH 1


#define MACA_0HR_REG 0x40

typedef enum mo {
    MO_0,
    MO_1
} MO_T ;
#define WRITE_MO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ MO_MASK) | ((val << MO_START_BIT) & MO_MASK )); \
   } 

#define ENABLE_MO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  MO_MASK ); \
   }

#define DISABLE_MO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~MO_MASK ); \
   } 

#define READ_MO() \
   ((READ_REGISTER_ULONG(0x40) & MO_MASK)  >> MO_START_BIT)

#define WHEN_MO_HIGH() \
     if ( READ_MO() )


#define UNLESS_MO_HIGH() \
     if (! READ_MO() )


#define WAIT_MO_LOW() \
    while ( READ_MO() );


#define WAIT_MO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MO() && (--___t___ > 0)); }


#define WAIT_MO_HIGH() \
    while (! READ_MO() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca0hr
//
// Return the value of register MACA_0HR
//
// Notes : Register Ethernet MAC address 0 high register (MACA0HR) at the offset 0x40, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MAC address0 high 
    // 
#define MACA0H_MASK 0xFFFFU
#define MACA0H_OFFSET 15
#define MACA0H_START_BIT 0
#define MACA0H_WIDTH 16



typedef enum maca0h {
    MACA_0H_0,
    MACA_0H_1
} MACA_0H_T ;
#define READ_MACA0H() \
   ((READ_REGISTER_ULONG(0x40) & MACA0H_MASK)  >> MACA0H_START_BIT)

#define WRITE_MACA0H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ MACA0H_MASK) | ((val << MACA0H_START_BIT) & MACA0H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca0lr
//
// Return the value of register MACA0LR
//
// Notes : Register Maca0lr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_0LR( y) \
     WRITE_REGISTER_ULONG( 0x44 , y)

#define SET_BITS_MACA_0LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  mask ); \
   }

#define CLEAR_BITS_MACA_0LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val & ~mask ); \
   }

#define READ_REGISTER_MACA_0LR() \
     READ_REGISTER_ULONG(0x44)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca0lr
//
// Return the value of register MACA_0LR
//
// Notes : Register Ethernet MAC address 0 low register (MACA0LR) at the offset 0x44, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////
#define MACA0L_MASK 0xFFFFFFFFU
#define MACA0L_OFFSET 31
#define MACA0L_START_BIT 0
#define MACA0L_WIDTH 32


#define MACA_0LR_REG 0x44

typedef enum maca0l {
    MACA_0L_0,
    MACA_0L_1
} MACA_0L_T ;
#define READ_MACA0L() \
   ((READ_REGISTER_ULONG(0x44) & MACA0L_MASK)  >> MACA0L_START_BIT)

#define WRITE_MACA0L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ MACA0L_MASK) | ((val << MACA0L_START_BIT) & MACA0L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1hr
//
// Return the value of register MACA1HR
//
// Notes : Register Maca1hr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_1HR( y) \
     WRITE_REGISTER_ULONG( 0x48 , y)

#define SET_BITS_MACA_1HR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  mask ); \
   }

#define CLEAR_BITS_MACA_1HR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val & ~mask ); \
   }

#define READ_REGISTER_MACA_1HR() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1hr
//
// Return the value of register MACA_1HR
//
// Notes : Register Ethernet MAC address 1 high register (MACA1HR) at the offset 0x48, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define AE_MASK 0x80000000U
#define AE_OFFSET 31
#define AE_START_BIT 31
#define AE_WIDTH 1


#define MACA_1HR_REG 0x48

typedef enum ae {
    AE_0,
    AE_1
} AE_T ;
#define WRITE_AE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ AE_MASK) | ((val << AE_START_BIT) & AE_MASK )); \
   } 

#define ENABLE_AE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  AE_MASK ); \
   }

#define DISABLE_AE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~AE_MASK ); \
   } 

#define READ_AE() \
   ((READ_REGISTER_ULONG(0x48) & AE_MASK)  >> AE_START_BIT)

#define WHEN_AE_HIGH() \
     if ( READ_AE() )


#define UNLESS_AE_HIGH() \
     if (! READ_AE() )


#define WAIT_AE_LOW() \
    while ( READ_AE() );


#define WAIT_AE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AE() && (--___t___ > 0)); }


#define WAIT_AE_HIGH() \
    while (! READ_AE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1hr
//
// Return the value of register MACA_1HR
//
// Notes : Register Ethernet MAC address 1 high register (MACA1HR) at the offset 0x48, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SA_MASK 0x40000000U
#define SA_OFFSET 30
#define SA_START_BIT 30
#define SA_WIDTH 1



typedef enum sa {
    SA_0,
    SA_1
} SA_T ;
#define WRITE_SA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ SA_MASK) | ((val << SA_START_BIT) & SA_MASK )); \
   } 

#define ENABLE_SA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  SA_MASK ); \
   }

#define DISABLE_SA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~SA_MASK ); \
   } 

#define READ_SA() \
   ((READ_REGISTER_ULONG(0x48) & SA_MASK)  >> SA_START_BIT)

#define WHEN_SA_HIGH() \
     if ( READ_SA() )


#define UNLESS_SA_HIGH() \
     if (! READ_SA() )


#define WAIT_SA_LOW() \
    while ( READ_SA() );


#define WAIT_SA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SA() && (--___t___ > 0)); }


#define WAIT_SA_HIGH() \
    while (! READ_SA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1hr
//
// Return the value of register MACA_1HR
//
// Notes : Register Ethernet MAC address 1 high register (MACA1HR) at the offset 0x48, Bits 24:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MBC_MASK 0x3F000000U
#define MBC_OFFSET 29
#define MBC_START_BIT 24
#define MBC_WIDTH 6



typedef enum mbc {
    MBC_0,
    MBC_1
} MBC_T ;
#define READ_MBC() \
   ((READ_REGISTER_ULONG(0x48) & MBC_MASK)  >> MBC_START_BIT)

#define WRITE_MBC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ MBC_MASK) | ((val << MBC_START_BIT) & MBC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1hr
//
// Return the value of register MACA_1HR
//
// Notes : Register Ethernet MAC address 1 high register (MACA1HR) at the offset 0x48, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MACA1H_MASK 0xFFFFU
#define MACA1H_OFFSET 15
#define MACA1H_START_BIT 0
#define MACA1H_WIDTH 16



typedef enum maca1h {
    MACA_1H_0,
    MACA_1H_1
} MACA_1H_T ;
#define READ_MACA1H() \
   ((READ_REGISTER_ULONG(0x48) & MACA1H_MASK)  >> MACA1H_START_BIT)

#define WRITE_MACA1H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ MACA1H_MASK) | ((val << MACA1H_START_BIT) & MACA1H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1lr
//
// Return the value of register MACA1LR
//
// Notes : Register Maca1lr at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_1LR( y) \
     WRITE_REGISTER_ULONG( 0x4C , y)

#define SET_BITS_MACA_1LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  mask ); \
   }

#define CLEAR_BITS_MACA_1LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val & ~mask ); \
   }

#define READ_REGISTER_MACA_1LR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca1lr
//
// Return the value of register MACA_1LR
//
// Notes : Register Ethernet MAC address1 low register (MACA1LR) at the offset 0x4C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MACA1LR_MASK 0xFFFFFFFFU
#define MACA1LR_OFFSET 31
#define MACA1LR_START_BIT 0
#define MACA1LR_WIDTH 32


#define MACA_1LR_REG 0x4C

typedef enum maca1lr {
    MACA_1LR_0,
    MACA_1LR_1
} MACA_1LR_T ;
#define READ_MACA1LR() \
   ((READ_REGISTER_ULONG(0x4C) & MACA1LR_MASK)  >> MACA1LR_START_BIT)

#define WRITE_MACA1LR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ MACA1LR_MASK) | ((val << MACA1LR_START_BIT) & MACA1LR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2hr
//
// Return the value of register MACA2HR
//
// Notes : Register Maca2hr at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_2HR( y) \
     WRITE_REGISTER_ULONG( 0x50 , y)

#define SET_BITS_MACA_2HR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  mask ); \
   }

#define CLEAR_BITS_MACA_2HR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val & ~mask ); \
   }

#define READ_REGISTER_MACA_2HR() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2hr
//
// Return the value of register MACA_2HR
//
// Notes : Register Ethernet MAC address 2 high register (MACA2HR) at the offset 0x50, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define AE_MASK 0x80000000U
#define AE_OFFSET 31
#define AE_START_BIT 31
#define AE_WIDTH 1


#define MACA_2HR_REG 0x50

#define WRITE_AE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ AE_MASK) | ((val << AE_START_BIT) & AE_MASK )); \
   } 

#define ENABLE_AE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  AE_MASK ); \
   }

#define DISABLE_AE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~AE_MASK ); \
   } 

#define READ_AE() \
   ((READ_REGISTER_ULONG(0x50) & AE_MASK)  >> AE_START_BIT)

#define WHEN_AE_HIGH() \
     if ( READ_AE() )


#define UNLESS_AE_HIGH() \
     if (! READ_AE() )


#define WAIT_AE_LOW() \
    while ( READ_AE() );


#define WAIT_AE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AE() && (--___t___ > 0)); }


#define WAIT_AE_HIGH() \
    while (! READ_AE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2hr
//
// Return the value of register MACA_2HR
//
// Notes : Register Ethernet MAC address 2 high register (MACA2HR) at the offset 0x50, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SA_MASK 0x40000000U
#define SA_OFFSET 30
#define SA_START_BIT 30
#define SA_WIDTH 1



#define WRITE_SA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ SA_MASK) | ((val << SA_START_BIT) & SA_MASK )); \
   } 

#define ENABLE_SA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  SA_MASK ); \
   }

#define DISABLE_SA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~SA_MASK ); \
   } 

#define READ_SA() \
   ((READ_REGISTER_ULONG(0x50) & SA_MASK)  >> SA_START_BIT)

#define WHEN_SA_HIGH() \
     if ( READ_SA() )


#define UNLESS_SA_HIGH() \
     if (! READ_SA() )


#define WAIT_SA_LOW() \
    while ( READ_SA() );


#define WAIT_SA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SA() && (--___t___ > 0)); }


#define WAIT_SA_HIGH() \
    while (! READ_SA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2hr
//
// Return the value of register MACA_2HR
//
// Notes : Register Ethernet MAC address 2 high register (MACA2HR) at the offset 0x50, Bits 24:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MBC_MASK 0x3F000000U
#define MBC_OFFSET 29
#define MBC_START_BIT 24
#define MBC_WIDTH 6



#define READ_MBC() \
   ((READ_REGISTER_ULONG(0x50) & MBC_MASK)  >> MBC_START_BIT)

#define WRITE_MBC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ MBC_MASK) | ((val << MBC_START_BIT) & MBC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2hr
//
// Return the value of register MACA_2HR
//
// Notes : Register Ethernet MAC address 2 high register (MACA2HR) at the offset 0x50, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MAC2AH_MASK 0xFFFFU
#define MAC2AH_OFFSET 15
#define MAC2AH_START_BIT 0
#define MAC2AH_WIDTH 16



typedef enum mac2ah {
    MAC_2AH_0,
    MAC_2AH_1
} MAC_2AH_T ;
#define READ_MAC2AH() \
   ((READ_REGISTER_ULONG(0x50) & MAC2AH_MASK)  >> MAC2AH_START_BIT)

#define WRITE_MAC2AH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ MAC2AH_MASK) | ((val << MAC2AH_START_BIT) & MAC2AH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2lr
//
// Return the value of register MACA2LR
//
// Notes : Register Maca2lr at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_2LR( y) \
     WRITE_REGISTER_ULONG( 0x54 , y)

#define SET_BITS_MACA_2LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  mask ); \
   }

#define CLEAR_BITS_MACA_2LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val & ~mask ); \
   }

#define READ_REGISTER_MACA_2LR() \
     READ_REGISTER_ULONG(0x54)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca2lr
//
// Return the value of register MACA_2LR
//
// Notes : Register Ethernet MAC address 2 low register (MACA2LR) at the offset 0x54, Bits 0:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MACA2L_MASK 0x7FFFFFFFU
#define MACA2L_OFFSET 30
#define MACA2L_START_BIT 0
#define MACA2L_WIDTH 31


#define MACA_2LR_REG 0x54

typedef enum maca2l {
    MACA_2L_0,
    MACA_2L_1
} MACA_2L_T ;
#define READ_MACA2L() \
   ((READ_REGISTER_ULONG(0x54) & MACA2L_MASK)  >> MACA2L_START_BIT)

#define WRITE_MACA2L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ MACA2L_MASK) | ((val << MACA2L_START_BIT) & MACA2L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3hr
//
// Return the value of register MACA3HR
//
// Notes : Register Maca3hr at offset 0x58
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_3HR( y) \
     WRITE_REGISTER_ULONG( 0x58 , y)

#define SET_BITS_MACA_3HR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  mask ); \
   }

#define CLEAR_BITS_MACA_3HR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val & ~mask ); \
   }

#define READ_REGISTER_MACA_3HR() \
     READ_REGISTER_ULONG(0x58)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3hr
//
// Return the value of register MACA_3HR
//
// Notes : Register Ethernet MAC address 3 high register (MACA3HR) at the offset 0x58, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define AE_MASK 0x80000000U
#define AE_OFFSET 31
#define AE_START_BIT 31
#define AE_WIDTH 1


#define MACA_3HR_REG 0x58

#define WRITE_AE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ AE_MASK) | ((val << AE_START_BIT) & AE_MASK )); \
   } 

#define ENABLE_AE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  AE_MASK ); \
   }

#define DISABLE_AE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG(0x58, val & ~AE_MASK ); \
   } 

#define READ_AE() \
   ((READ_REGISTER_ULONG(0x58) & AE_MASK)  >> AE_START_BIT)

#define WHEN_AE_HIGH() \
     if ( READ_AE() )


#define UNLESS_AE_HIGH() \
     if (! READ_AE() )


#define WAIT_AE_LOW() \
    while ( READ_AE() );


#define WAIT_AE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AE() && (--___t___ > 0)); }


#define WAIT_AE_HIGH() \
    while (! READ_AE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3hr
//
// Return the value of register MACA_3HR
//
// Notes : Register Ethernet MAC address 3 high register (MACA3HR) at the offset 0x58, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SA_MASK 0x40000000U
#define SA_OFFSET 30
#define SA_START_BIT 30
#define SA_WIDTH 1



#define WRITE_SA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ SA_MASK) | ((val << SA_START_BIT) & SA_MASK )); \
   } 

#define ENABLE_SA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  SA_MASK ); \
   }

#define DISABLE_SA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG(0x58, val & ~SA_MASK ); \
   } 

#define READ_SA() \
   ((READ_REGISTER_ULONG(0x58) & SA_MASK)  >> SA_START_BIT)

#define WHEN_SA_HIGH() \
     if ( READ_SA() )


#define UNLESS_SA_HIGH() \
     if (! READ_SA() )


#define WAIT_SA_LOW() \
    while ( READ_SA() );


#define WAIT_SA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SA() && (--___t___ > 0)); }


#define WAIT_SA_HIGH() \
    while (! READ_SA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3hr
//
// Return the value of register MACA_3HR
//
// Notes : Register Ethernet MAC address 3 high register (MACA3HR) at the offset 0x58, Bits 24:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MBC_MASK 0x3F000000U
#define MBC_OFFSET 29
#define MBC_START_BIT 24
#define MBC_WIDTH 6



#define READ_MBC() \
   ((READ_REGISTER_ULONG(0x58) & MBC_MASK)  >> MBC_START_BIT)

#define WRITE_MBC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ MBC_MASK) | ((val << MBC_START_BIT) & MBC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3hr
//
// Return the value of register MACA_3HR
//
// Notes : Register Ethernet MAC address 3 high register (MACA3HR) at the offset 0x58, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MACA3H_MASK 0xFFFFU
#define MACA3H_OFFSET 15
#define MACA3H_START_BIT 0
#define MACA3H_WIDTH 16



typedef enum maca3h {
    MACA_3H_0,
    MACA_3H_1
} MACA_3H_T ;
#define READ_MACA3H() \
   ((READ_REGISTER_ULONG(0x58) & MACA3H_MASK)  >> MACA3H_START_BIT)

#define WRITE_MACA3H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ MACA3H_MASK) | ((val << MACA3H_START_BIT) & MACA3H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3lr
//
// Return the value of register MACA3LR
//
// Notes : Register Maca3lr at offset 0x5C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACA_3LR( y) \
     WRITE_REGISTER_ULONG( 0x5C , y)

#define SET_BITS_MACA_3LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x5C); \
     WRITE_REGISTER_ULONG( 0x5C , val |  mask ); \
   }

#define CLEAR_BITS_MACA_3LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x5C); \
     WRITE_REGISTER_ULONG( 0x5C , val & ~mask ); \
   }

#define READ_REGISTER_MACA_3LR() \
     READ_REGISTER_ULONG(0x5C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Maca3lr
//
// Return the value of register MACA_3LR
//
// Notes : Register Ethernet MAC address 3 low register (MACA3LR) at the offset 0x5C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MBCA3L_MASK 0xFFFFFFFFU
#define MBCA3L_OFFSET 31
#define MBCA3L_START_BIT 0
#define MBCA3L_WIDTH 32


#define MACA_3LR_REG 0x5C

typedef enum mbca3l {
    MBCA_3L_0,
    MBCA_3L_1
} MBCA_3L_T ;
#define READ_MBCA3L() \
   ((READ_REGISTER_ULONG(0x5C) & MBCA3L_MASK)  >> MBCA3L_START_BIT)

#define WRITE_MBCA3L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x5C); \
     WRITE_REGISTER_ULONG(0x5C, (OldValue & ~ MBCA3L_MASK) | ((val << MBCA3L_START_BIT) & MBCA3L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Macrwuffer
//
// Return the value of register MACRWUFFER
//
// Notes : Register Macrwuffer at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MACRWUFFER( y) \
     WRITE_REGISTER_ULONG( 0x60 , y)

#define SET_BITS_MACRWUFFER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  mask ); \
   }

#define CLEAR_BITS_MACRWUFFER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val & ~mask ); \
   }

#define READ_REGISTER_MACRWUFFER() \
     READ_REGISTER_ULONG(0x60)

/////////////////////////////////////////////////////////////////////////
//
// Function : Macrwuffer
//
// Return the value of register MACRWUFFER
//
// Notes : Register Ethernet MAC remote wakeup frame filter register (MACRWUFFER) at the offset 0x60, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet MAC remote wakeup frame filter register 
    // 
#define MACRWUFFER_MASK 0xFFU
#define MACRWUFFER_OFFSET 7
#define MACRWUFFER_START_BIT 0
#define MACRWUFFER_WIDTH 8


#define MACRWUFFER_REG 0x60
#define READ_MACRWUFFER() \
   ((READ_REGISTER_ULONG(0x60) & MACRWUFFER_MASK)  >> MACRWUFFER_START_BIT)

#define WRITE_MACRWUFFER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ MACRWUFFER_MASK) | ((val << MACRWUFFER_START_BIT) & MACRWUFFER_MASK )); \
   } 

