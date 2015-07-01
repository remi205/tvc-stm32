/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/ethernet_dma.h
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
 
#define ETHERNET_DMA 0x40029000
/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Dmabmr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMABMR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_DMABMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_DMABMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_DMABMR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MB_MASK 0x4000000U
#define MB_OFFSET 26
#define MB_START_BIT 26
#define MB_WIDTH 1


#define DMABMR_REG 0x0

#define WRITE_MB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MB_MASK) | ((val << MB_START_BIT) & MB_MASK )); \
   } 

#define ENABLE_MB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MB_MASK ); \
   }

#define DISABLE_MB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MB_MASK ); \
   } 

#define READ_MB() \
   ((READ_REGISTER_ULONG(0x0) & MB_MASK)  >> MB_START_BIT)

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
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define AAB_MASK 0x2000000U
#define AAB_OFFSET 25
#define AAB_START_BIT 25
#define AAB_WIDTH 1



typedef enum aab {
    AAB_0,
    AAB_1
} AAB_T ;
#define WRITE_AAB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ AAB_MASK) | ((val << AAB_START_BIT) & AAB_MASK )); \
   } 

#define ENABLE_AAB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  AAB_MASK ); \
   }

#define DISABLE_AAB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~AAB_MASK ); \
   } 

#define READ_AAB() \
   ((READ_REGISTER_ULONG(0x0) & AAB_MASK)  >> AAB_START_BIT)

#define WHEN_AAB_HIGH() \
     if ( READ_AAB() )


#define UNLESS_AAB_HIGH() \
     if (! READ_AAB() )


#define WAIT_AAB_LOW() \
    while ( READ_AAB() );


#define WAIT_AAB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AAB() && (--___t___ > 0)); }


#define WAIT_AAB_HIGH() \
    while (! READ_AAB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define FPM_MASK 0x1000000U
#define FPM_OFFSET 24
#define FPM_START_BIT 24
#define FPM_WIDTH 1



typedef enum fpm {
    FPM_0,
    FPM_1
} FPM_T ;
#define WRITE_FPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FPM_MASK) | ((val << FPM_START_BIT) & FPM_MASK )); \
   } 

#define ENABLE_FPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FPM_MASK ); \
   }

#define DISABLE_FPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FPM_MASK ); \
   } 

#define READ_FPM() \
   ((READ_REGISTER_ULONG(0x0) & FPM_MASK)  >> FPM_START_BIT)

#define WHEN_FPM_HIGH() \
     if ( READ_FPM() )


#define UNLESS_FPM_HIGH() \
     if (! READ_FPM() )


#define WAIT_FPM_LOW() \
    while ( READ_FPM() );


#define WAIT_FPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FPM() && (--___t___ > 0)); }


#define WAIT_FPM_HIGH() \
    while (! READ_FPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define USP_MASK 0x800000U
#define USP_OFFSET 23
#define USP_START_BIT 23
#define USP_WIDTH 1



typedef enum usp {
    USP_0,
    USP_1
} USP_T ;
#define WRITE_USP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ USP_MASK) | ((val << USP_START_BIT) & USP_MASK )); \
   } 

#define ENABLE_USP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  USP_MASK ); \
   }

#define DISABLE_USP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~USP_MASK ); \
   } 

#define READ_USP() \
   ((READ_REGISTER_ULONG(0x0) & USP_MASK)  >> USP_START_BIT)

#define WHEN_USP_HIGH() \
     if ( READ_USP() )


#define UNLESS_USP_HIGH() \
     if (! READ_USP() )


#define WAIT_USP_LOW() \
    while ( READ_USP() );


#define WAIT_USP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USP() && (--___t___ > 0)); }


#define WAIT_USP_HIGH() \
    while (! READ_USP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 17:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RDP_MASK 0x7E0000U
#define RDP_OFFSET 22
#define RDP_START_BIT 17
#define RDP_WIDTH 6



#define READ_RDP() \
   ((READ_REGISTER_ULONG(0x0) & RDP_MASK)  >> RDP_START_BIT)

#define WRITE_RDP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RDP_MASK) | ((val << RDP_START_BIT) & RDP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define FB_MASK 0x10000U
#define FB_OFFSET 16
#define FB_START_BIT 16
#define FB_WIDTH 1



typedef enum fb {
    FB_0,
    FB_1
} FB_T ;
#define WRITE_FB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FB_MASK) | ((val << FB_START_BIT) & FB_MASK )); \
   } 

#define ENABLE_FB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FB_MASK ); \
   }

#define DISABLE_FB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FB_MASK ); \
   } 

#define READ_FB() \
   ((READ_REGISTER_ULONG(0x0) & FB_MASK)  >> FB_START_BIT)

#define WHEN_FB_HIGH() \
     if ( READ_FB() )


#define UNLESS_FB_HIGH() \
     if (! READ_FB() )


#define WAIT_FB_LOW() \
    while ( READ_FB() );


#define WAIT_FB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FB() && (--___t___ > 0)); }


#define WAIT_FB_HIGH() \
    while (! READ_FB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RTPR_MASK 0xC000U
#define RTPR_OFFSET 15
#define RTPR_START_BIT 14
#define RTPR_WIDTH 2



typedef enum rtpr {
    RTPR_0,
    RTPR_1
} RTPR_T ;
#define READ_RTPR() \
   ((READ_REGISTER_ULONG(0x0) & RTPR_MASK)  >> RTPR_START_BIT)

#define WRITE_RTPR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RTPR_MASK) | ((val << RTPR_START_BIT) & RTPR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 8:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PBL_MASK 0x3F00U
#define PBL_OFFSET 13
#define PBL_START_BIT 8
#define PBL_WIDTH 6



typedef enum pbl {
    PBL_0,
    PBL_1
} PBL_T ;
#define READ_PBL() \
   ((READ_REGISTER_ULONG(0x0) & PBL_MASK)  >> PBL_START_BIT)

#define WRITE_PBL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PBL_MASK) | ((val << PBL_START_BIT) & PBL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define EDFE_MASK 0x80U
#define EDFE_OFFSET 7
#define EDFE_START_BIT 7
#define EDFE_WIDTH 1



typedef enum edfe {
    EDFE_0,
    EDFE_1
} EDFE_T ;
#define WRITE_EDFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EDFE_MASK) | ((val << EDFE_START_BIT) & EDFE_MASK )); \
   } 

#define ENABLE_EDFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EDFE_MASK ); \
   }

#define DISABLE_EDFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EDFE_MASK ); \
   } 

#define READ_EDFE() \
   ((READ_REGISTER_ULONG(0x0) & EDFE_MASK)  >> EDFE_START_BIT)

#define WHEN_EDFE_HIGH() \
     if ( READ_EDFE() )


#define UNLESS_EDFE_HIGH() \
     if (! READ_EDFE() )


#define WAIT_EDFE_LOW() \
    while ( READ_EDFE() );


#define WAIT_EDFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EDFE() && (--___t___ > 0)); }


#define WAIT_EDFE_HIGH() \
    while (! READ_EDFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 2:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define DSL_MASK 0x7CU
#define DSL_OFFSET 6
#define DSL_START_BIT 2
#define DSL_WIDTH 5



typedef enum dsl {
    DSL_0,
    DSL_1
} DSL_T ;
#define READ_DSL() \
   ((READ_REGISTER_ULONG(0x0) & DSL_MASK)  >> DSL_START_BIT)

#define WRITE_DSL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DSL_MASK) | ((val << DSL_START_BIT) & DSL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define DA_MASK 0x2U
#define DA_OFFSET 1
#define DA_START_BIT 1
#define DA_WIDTH 1



typedef enum da {
    DA_0,
    DA_1
} DA_T ;
#define WRITE_DA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DA_MASK) | ((val << DA_START_BIT) & DA_MASK )); \
   } 

#define ENABLE_DA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DA_MASK ); \
   }

#define DISABLE_DA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DA_MASK ); \
   } 

#define READ_DA() \
   ((READ_REGISTER_ULONG(0x0) & DA_MASK)  >> DA_START_BIT)

#define WHEN_DA_HIGH() \
     if ( READ_DA() )


#define UNLESS_DA_HIGH() \
     if (! READ_DA() )


#define WAIT_DA_LOW() \
    while ( READ_DA() );


#define WAIT_DA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DA() && (--___t___ > 0)); }


#define WAIT_DA_HIGH() \
    while (! READ_DA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmabmr
//
// Return the value of register DMABMR
//
// Notes : Register Ethernet DMA bus mode register (DMABMR) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SR_MASK 0x1U
#define SR_OFFSET 0
#define SR_START_BIT 0
#define SR_WIDTH 1



typedef enum sr {
    SR_0,
    SR_1
} SR_T ;
#define WRITE_SR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SR_MASK) | ((val << SR_START_BIT) & SR_MASK )); \
   } 

#define ENABLE_SR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  SR_MASK ); \
   }

#define DISABLE_SR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~SR_MASK ); \
   } 

#define READ_SR() \
   ((READ_REGISTER_ULONG(0x0) & SR_MASK)  >> SR_START_BIT)

#define WHEN_SR_HIGH() \
     if ( READ_SR() )


#define UNLESS_SR_HIGH() \
     if (! READ_SR() )


#define WAIT_SR_LOW() \
    while ( READ_SR() );


#define WAIT_SR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SR() && (--___t___ > 0)); }


#define WAIT_SR_HIGH() \
    while (! READ_SR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmatpdr
//
// Return the value of register DMATPDR
//
// Notes : Register Dmatpdr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMATPDR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_DMATPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_DMATPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_DMATPDR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmatpdr
//
// Return the value of register DMATPDR
//
// Notes : Register Ethernet DMA transmit poll demand register (DMATPDR) at the offset 0x4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TPD_MASK 0xFFFFFFFFU
#define TPD_OFFSET 31
#define TPD_START_BIT 0
#define TPD_WIDTH 32


#define DMATPDR_REG 0x4

typedef enum tpd {
    TPD_0,
    TPD_1
} TPD_T ;
#define READ_TPD() \
   ((READ_REGISTER_ULONG(0x4) & TPD_MASK)  >> TPD_START_BIT)

#define WRITE_TPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TPD_MASK) | ((val << TPD_START_BIT) & TPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmarpdr
//
// Return the value of register DMARPDR
//
// Notes : Register Dmarpdr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMARPDR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_DMARPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_DMARPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_DMARPDR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmarpdr
//
// Return the value of register DMARPDR
//
// Notes : Register EHERNET DMA receive poll demand register (DMARPDR) at the offset 0x8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RPD 
    // 
#define RPD_MASK 0xFFFFFFFFU
#define RPD_OFFSET 31
#define RPD_START_BIT 0
#define RPD_WIDTH 32


#define DMARPDR_REG 0x8

typedef enum rpd {
    RPD_0,
    RPD_1
} RPD_T ;
#define READ_RPD() \
   ((READ_REGISTER_ULONG(0x8) & RPD_MASK)  >> RPD_START_BIT)

#define WRITE_RPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ RPD_MASK) | ((val << RPD_START_BIT) & RPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmardlar
//
// Return the value of register DMARDLAR
//
// Notes : Register Dmardlar at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMARDLAR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_DMARDLAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_DMARDLAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_DMARDLAR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmardlar
//
// Return the value of register DMARDLAR
//
// Notes : Register Ethernet DMA receive descriptor list address register (DMARDLAR) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define SRL_MASK 0xFFFFFFFFU
#define SRL_OFFSET 31
#define SRL_START_BIT 0
#define SRL_WIDTH 32


#define DMARDLAR_REG 0xC

typedef enum srl {
    SRL_0,
    SRL_1
} SRL_T ;
#define READ_SRL() \
   ((READ_REGISTER_ULONG(0xC) & SRL_MASK)  >> SRL_START_BIT)

#define WRITE_SRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ SRL_MASK) | ((val << SRL_START_BIT) & SRL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmatdlar
//
// Return the value of register DMATDLAR
//
// Notes : Register Dmatdlar at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMATDLAR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_DMATDLAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_DMATDLAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_DMATDLAR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmatdlar
//
// Return the value of register DMATDLAR
//
// Notes : Register Ethernet DMA transmit descriptor list address register (DMATDLAR) at the offset 0x10, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define STL_MASK 0xFFFFFFFFU
#define STL_OFFSET 31
#define STL_START_BIT 0
#define STL_WIDTH 32


#define DMATDLAR_REG 0x10

typedef enum stl {
    STL_0,
    STL_1
} STL_T ;
#define READ_STL() \
   ((READ_REGISTER_ULONG(0x10) & STL_MASK)  >> STL_START_BIT)

#define WRITE_STL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ STL_MASK) | ((val << STL_START_BIT) & STL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Dmasr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSTS_MASK 0x20000000U
#define TSTS_OFFSET 29
#define TSTS_START_BIT 29
#define TSTS_WIDTH 1


#define DMASR_REG 0x14

#define WRITE_TSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TSTS_MASK) | ((val << TSTS_START_BIT) & TSTS_MASK )); \
   } 

#define ENABLE_TSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TSTS_MASK ); \
   }

#define DISABLE_TSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TSTS_MASK ); \
   } 

#define READ_TSTS() \
   ((READ_REGISTER_ULONG(0x14) & TSTS_MASK)  >> TSTS_START_BIT)

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
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PMTS_MASK 0x10000000U
#define PMTS_OFFSET 28
#define PMTS_START_BIT 28
#define PMTS_WIDTH 1



#define WRITE_PMTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PMTS_MASK) | ((val << PMTS_START_BIT) & PMTS_MASK )); \
   } 

#define ENABLE_PMTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PMTS_MASK ); \
   }

#define DISABLE_PMTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PMTS_MASK ); \
   } 

#define READ_PMTS() \
   ((READ_REGISTER_ULONG(0x14) & PMTS_MASK)  >> PMTS_START_BIT)

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
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MMCS_MASK 0x8000000U
#define MMCS_OFFSET 27
#define MMCS_START_BIT 27
#define MMCS_WIDTH 1



#define WRITE_MMCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ MMCS_MASK) | ((val << MMCS_START_BIT) & MMCS_MASK )); \
   } 

#define ENABLE_MMCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  MMCS_MASK ); \
   }

#define DISABLE_MMCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~MMCS_MASK ); \
   } 

#define READ_MMCS() \
   ((READ_REGISTER_ULONG(0x14) & MMCS_MASK)  >> MMCS_START_BIT)

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
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 23:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define EBS_MASK 0x3800000U
#define EBS_OFFSET 25
#define EBS_START_BIT 23
#define EBS_WIDTH 3



typedef enum ebs {
    EBS_0,
    EBS_1
} EBS_T ;
#define READ_EBS() \
   ((READ_REGISTER_ULONG(0x14) & EBS_MASK)  >> EBS_START_BIT)

#define WRITE_EBS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EBS_MASK) | ((val << EBS_START_BIT) & EBS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 20:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TPS_MASK 0x700000U
#define TPS_OFFSET 22
#define TPS_START_BIT 20
#define TPS_WIDTH 3



typedef enum tps {
    TPS_0,
    TPS_1
} TPS_T ;
#define READ_TPS() \
   ((READ_REGISTER_ULONG(0x14) & TPS_MASK)  >> TPS_START_BIT)

#define WRITE_TPS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TPS_MASK) | ((val << TPS_START_BIT) & TPS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 17:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RPS_MASK 0xE0000U
#define RPS_OFFSET 19
#define RPS_START_BIT 17
#define RPS_WIDTH 3



typedef enum rps {
    RPS_0,
    RPS_1
} RPS_T ;
#define READ_RPS() \
   ((READ_REGISTER_ULONG(0x14) & RPS_MASK)  >> RPS_START_BIT)

#define WRITE_RPS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RPS_MASK) | ((val << RPS_START_BIT) & RPS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define NIS_MASK 0x10000U
#define NIS_OFFSET 16
#define NIS_START_BIT 16
#define NIS_WIDTH 1



typedef enum nis {
    NIS_0,
    NIS_1
} NIS_T ;
#define WRITE_NIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ NIS_MASK) | ((val << NIS_START_BIT) & NIS_MASK )); \
   } 

#define ENABLE_NIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  NIS_MASK ); \
   }

#define DISABLE_NIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~NIS_MASK ); \
   } 

#define READ_NIS() \
   ((READ_REGISTER_ULONG(0x14) & NIS_MASK)  >> NIS_START_BIT)

#define WHEN_NIS_HIGH() \
     if ( READ_NIS() )


#define UNLESS_NIS_HIGH() \
     if (! READ_NIS() )


#define WAIT_NIS_LOW() \
    while ( READ_NIS() );


#define WAIT_NIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NIS() && (--___t___ > 0)); }


#define WAIT_NIS_HIGH() \
    while (! READ_NIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define AIS_MASK 0x8000U
#define AIS_OFFSET 15
#define AIS_START_BIT 15
#define AIS_WIDTH 1



typedef enum ais {
    AIS_0,
    AIS_1
} AIS_T ;
#define WRITE_AIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ AIS_MASK) | ((val << AIS_START_BIT) & AIS_MASK )); \
   } 

#define ENABLE_AIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  AIS_MASK ); \
   }

#define DISABLE_AIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~AIS_MASK ); \
   } 

#define READ_AIS() \
   ((READ_REGISTER_ULONG(0x14) & AIS_MASK)  >> AIS_START_BIT)

#define WHEN_AIS_HIGH() \
     if ( READ_AIS() )


#define UNLESS_AIS_HIGH() \
     if (! READ_AIS() )


#define WAIT_AIS_LOW() \
    while ( READ_AIS() );


#define WAIT_AIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AIS() && (--___t___ > 0)); }


#define WAIT_AIS_HIGH() \
    while (! READ_AIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ERS_MASK 0x4000U
#define ERS_OFFSET 14
#define ERS_START_BIT 14
#define ERS_WIDTH 1



typedef enum ers {
    ERS_0,
    ERS_1
} ERS_T ;
#define WRITE_ERS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ERS_MASK) | ((val << ERS_START_BIT) & ERS_MASK )); \
   } 

#define ENABLE_ERS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ERS_MASK ); \
   }

#define DISABLE_ERS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ERS_MASK ); \
   } 

#define READ_ERS() \
   ((READ_REGISTER_ULONG(0x14) & ERS_MASK)  >> ERS_START_BIT)

#define WHEN_ERS_HIGH() \
     if ( READ_ERS() )


#define UNLESS_ERS_HIGH() \
     if (! READ_ERS() )


#define WAIT_ERS_LOW() \
    while ( READ_ERS() );


#define WAIT_ERS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERS() && (--___t___ > 0)); }


#define WAIT_ERS_HIGH() \
    while (! READ_ERS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define FBES_MASK 0x2000U
#define FBES_OFFSET 13
#define FBES_START_BIT 13
#define FBES_WIDTH 1



typedef enum fbes {
    FBES_0,
    FBES_1
} FBES_T ;
#define WRITE_FBES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ FBES_MASK) | ((val << FBES_START_BIT) & FBES_MASK )); \
   } 

#define ENABLE_FBES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  FBES_MASK ); \
   }

#define DISABLE_FBES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~FBES_MASK ); \
   } 

#define READ_FBES() \
   ((READ_REGISTER_ULONG(0x14) & FBES_MASK)  >> FBES_START_BIT)

#define WHEN_FBES_HIGH() \
     if ( READ_FBES() )


#define UNLESS_FBES_HIGH() \
     if (! READ_FBES() )


#define WAIT_FBES_LOW() \
    while ( READ_FBES() );


#define WAIT_FBES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FBES() && (--___t___ > 0)); }


#define WAIT_FBES_HIGH() \
    while (! READ_FBES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ETS_MASK 0x400U
#define ETS_OFFSET 10
#define ETS_START_BIT 10
#define ETS_WIDTH 1



typedef enum ets {
    ETS_0,
    ETS_1
} ETS_T ;
#define WRITE_ETS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ETS_MASK) | ((val << ETS_START_BIT) & ETS_MASK )); \
   } 

#define ENABLE_ETS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ETS_MASK ); \
   }

#define DISABLE_ETS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ETS_MASK ); \
   } 

#define READ_ETS() \
   ((READ_REGISTER_ULONG(0x14) & ETS_MASK)  >> ETS_START_BIT)

#define WHEN_ETS_HIGH() \
     if ( READ_ETS() )


#define UNLESS_ETS_HIGH() \
     if (! READ_ETS() )


#define WAIT_ETS_LOW() \
    while ( READ_ETS() );


#define WAIT_ETS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETS() && (--___t___ > 0)); }


#define WAIT_ETS_HIGH() \
    while (! READ_ETS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define PWTS_MASK 0x200U
#define PWTS_OFFSET 9
#define PWTS_START_BIT 9
#define PWTS_WIDTH 1



typedef enum pwts {
    PWTS_0,
    PWTS_1
} PWTS_T ;
#define WRITE_PWTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PWTS_MASK) | ((val << PWTS_START_BIT) & PWTS_MASK )); \
   } 

#define ENABLE_PWTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PWTS_MASK ); \
   }

#define DISABLE_PWTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PWTS_MASK ); \
   } 

#define READ_PWTS() \
   ((READ_REGISTER_ULONG(0x14) & PWTS_MASK)  >> PWTS_START_BIT)

#define WHEN_PWTS_HIGH() \
     if ( READ_PWTS() )


#define UNLESS_PWTS_HIGH() \
     if (! READ_PWTS() )


#define WAIT_PWTS_LOW() \
    while ( READ_PWTS() );


#define WAIT_PWTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWTS() && (--___t___ > 0)); }


#define WAIT_PWTS_HIGH() \
    while (! READ_PWTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RPSS_MASK 0x100U
#define RPSS_OFFSET 8
#define RPSS_START_BIT 8
#define RPSS_WIDTH 1



typedef enum rpss {
    RPSS_0,
    RPSS_1
} RPSS_T ;
#define WRITE_RPSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RPSS_MASK) | ((val << RPSS_START_BIT) & RPSS_MASK )); \
   } 

#define ENABLE_RPSS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RPSS_MASK ); \
   }

#define DISABLE_RPSS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RPSS_MASK ); \
   } 

#define READ_RPSS() \
   ((READ_REGISTER_ULONG(0x14) & RPSS_MASK)  >> RPSS_START_BIT)

#define WHEN_RPSS_HIGH() \
     if ( READ_RPSS() )


#define UNLESS_RPSS_HIGH() \
     if (! READ_RPSS() )


#define WAIT_RPSS_LOW() \
    while ( READ_RPSS() );


#define WAIT_RPSS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RPSS() && (--___t___ > 0)); }


#define WAIT_RPSS_HIGH() \
    while (! READ_RPSS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RBUS_MASK 0x80U
#define RBUS_OFFSET 7
#define RBUS_START_BIT 7
#define RBUS_WIDTH 1



typedef enum rbus {
    RBUS_0,
    RBUS_1
} RBUS_T ;
#define WRITE_RBUS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RBUS_MASK) | ((val << RBUS_START_BIT) & RBUS_MASK )); \
   } 

#define ENABLE_RBUS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RBUS_MASK ); \
   }

#define DISABLE_RBUS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RBUS_MASK ); \
   } 

#define READ_RBUS() \
   ((READ_REGISTER_ULONG(0x14) & RBUS_MASK)  >> RBUS_START_BIT)

#define WHEN_RBUS_HIGH() \
     if ( READ_RBUS() )


#define UNLESS_RBUS_HIGH() \
     if (! READ_RBUS() )


#define WAIT_RBUS_LOW() \
    while ( READ_RBUS() );


#define WAIT_RBUS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RBUS() && (--___t___ > 0)); }


#define WAIT_RBUS_HIGH() \
    while (! READ_RBUS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RS_MASK 0x40U
#define RS_OFFSET 6
#define RS_START_BIT 6
#define RS_WIDTH 1



typedef enum rs {
    RS_0,
    RS_1
} RS_T ;
#define WRITE_RS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RS_MASK) | ((val << RS_START_BIT) & RS_MASK )); \
   } 

#define ENABLE_RS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RS_MASK ); \
   }

#define DISABLE_RS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RS_MASK ); \
   } 

#define READ_RS() \
   ((READ_REGISTER_ULONG(0x14) & RS_MASK)  >> RS_START_BIT)

#define WHEN_RS_HIGH() \
     if ( READ_RS() )


#define UNLESS_RS_HIGH() \
     if (! READ_RS() )


#define WAIT_RS_LOW() \
    while ( READ_RS() );


#define WAIT_RS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RS() && (--___t___ > 0)); }


#define WAIT_RS_HIGH() \
    while (! READ_RS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TUS_MASK 0x20U
#define TUS_OFFSET 5
#define TUS_START_BIT 5
#define TUS_WIDTH 1



typedef enum tus {
    TUS_0,
    TUS_1
} TUS_T ;
#define WRITE_TUS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TUS_MASK) | ((val << TUS_START_BIT) & TUS_MASK )); \
   } 

#define ENABLE_TUS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TUS_MASK ); \
   }

#define DISABLE_TUS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TUS_MASK ); \
   } 

#define READ_TUS() \
   ((READ_REGISTER_ULONG(0x14) & TUS_MASK)  >> TUS_START_BIT)

#define WHEN_TUS_HIGH() \
     if ( READ_TUS() )


#define UNLESS_TUS_HIGH() \
     if (! READ_TUS() )


#define WAIT_TUS_LOW() \
    while ( READ_TUS() );


#define WAIT_TUS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TUS() && (--___t___ > 0)); }


#define WAIT_TUS_HIGH() \
    while (! READ_TUS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ROS_MASK 0x10U
#define ROS_OFFSET 4
#define ROS_START_BIT 4
#define ROS_WIDTH 1



typedef enum ros {
    ROS_0,
    ROS_1
} ROS_T ;
#define WRITE_ROS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ROS_MASK) | ((val << ROS_START_BIT) & ROS_MASK )); \
   } 

#define ENABLE_ROS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ROS_MASK ); \
   }

#define DISABLE_ROS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ROS_MASK ); \
   } 

#define READ_ROS() \
   ((READ_REGISTER_ULONG(0x14) & ROS_MASK)  >> ROS_START_BIT)

#define WHEN_ROS_HIGH() \
     if ( READ_ROS() )


#define UNLESS_ROS_HIGH() \
     if (! READ_ROS() )


#define WAIT_ROS_LOW() \
    while ( READ_ROS() );


#define WAIT_ROS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ROS() && (--___t___ > 0)); }


#define WAIT_ROS_HIGH() \
    while (! READ_ROS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TJTS_MASK 0x8U
#define TJTS_OFFSET 3
#define TJTS_START_BIT 3
#define TJTS_WIDTH 1



typedef enum tjts {
    TJTS_0,
    TJTS_1
} TJTS_T ;
#define WRITE_TJTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TJTS_MASK) | ((val << TJTS_START_BIT) & TJTS_MASK )); \
   } 

#define ENABLE_TJTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TJTS_MASK ); \
   }

#define DISABLE_TJTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TJTS_MASK ); \
   } 

#define READ_TJTS() \
   ((READ_REGISTER_ULONG(0x14) & TJTS_MASK)  >> TJTS_START_BIT)

#define WHEN_TJTS_HIGH() \
     if ( READ_TJTS() )


#define UNLESS_TJTS_HIGH() \
     if (! READ_TJTS() )


#define WAIT_TJTS_LOW() \
    while ( READ_TJTS() );


#define WAIT_TJTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TJTS() && (--___t___ > 0)); }


#define WAIT_TJTS_HIGH() \
    while (! READ_TJTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TBUS_MASK 0x4U
#define TBUS_OFFSET 2
#define TBUS_START_BIT 2
#define TBUS_WIDTH 1



typedef enum tbus {
    TBUS_0,
    TBUS_1
} TBUS_T ;
#define WRITE_TBUS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TBUS_MASK) | ((val << TBUS_START_BIT) & TBUS_MASK )); \
   } 

#define ENABLE_TBUS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TBUS_MASK ); \
   }

#define DISABLE_TBUS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TBUS_MASK ); \
   } 

#define READ_TBUS() \
   ((READ_REGISTER_ULONG(0x14) & TBUS_MASK)  >> TBUS_START_BIT)

#define WHEN_TBUS_HIGH() \
     if ( READ_TBUS() )


#define UNLESS_TBUS_HIGH() \
     if (! READ_TBUS() )


#define WAIT_TBUS_LOW() \
    while ( READ_TBUS() );


#define WAIT_TBUS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TBUS() && (--___t___ > 0)); }


#define WAIT_TBUS_HIGH() \
    while (! READ_TBUS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TPSS_MASK 0x2U
#define TPSS_OFFSET 1
#define TPSS_START_BIT 1
#define TPSS_WIDTH 1



typedef enum tpss {
    TPSS_0,
    TPSS_1
} TPSS_T ;
#define WRITE_TPSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TPSS_MASK) | ((val << TPSS_START_BIT) & TPSS_MASK )); \
   } 

#define ENABLE_TPSS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TPSS_MASK ); \
   }

#define DISABLE_TPSS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TPSS_MASK ); \
   } 

#define READ_TPSS() \
   ((READ_REGISTER_ULONG(0x14) & TPSS_MASK)  >> TPSS_START_BIT)

#define WHEN_TPSS_HIGH() \
     if ( READ_TPSS() )


#define UNLESS_TPSS_HIGH() \
     if (! READ_TPSS() )


#define WAIT_TPSS_LOW() \
    while ( READ_TPSS() );


#define WAIT_TPSS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TPSS() && (--___t___ > 0)); }


#define WAIT_TPSS_HIGH() \
    while (! READ_TPSS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmasr
//
// Return the value of register DMASR
//
// Notes : Register Ethernet DMA status register (DMASR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TS_MASK 0x1U
#define TS_OFFSET 0
#define TS_START_BIT 0
#define TS_WIDTH 1



#define WRITE_TS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TS_MASK) | ((val << TS_START_BIT) & TS_MASK )); \
   } 

#define ENABLE_TS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TS_MASK ); \
   }

#define DISABLE_TS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TS_MASK ); \
   } 

#define READ_TS() \
   ((READ_REGISTER_ULONG(0x14) & TS_MASK)  >> TS_START_BIT)

#define WHEN_TS_HIGH() \
     if ( READ_TS() )


#define UNLESS_TS_HIGH() \
     if (! READ_TS() )


#define WAIT_TS_LOW() \
    while ( READ_TS() );


#define WAIT_TS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TS() && (--___t___ > 0)); }


#define WAIT_TS_HIGH() \
    while (! READ_TS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Dmaomr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMAOMR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_DMAOMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_DMAOMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_DMAOMR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DTCEFD 
    // 
#define DTCEFD_MASK 0x4000000U
#define DTCEFD_OFFSET 26
#define DTCEFD_START_BIT 26
#define DTCEFD_WIDTH 1


#define DMAOMR_REG 0x18

typedef enum dtcefd {
    DTCEFD_0,
    DTCEFD_1
} DTCEFD_T ;
#define WRITE_DTCEFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DTCEFD_MASK) | ((val << DTCEFD_START_BIT) & DTCEFD_MASK )); \
   } 

#define ENABLE_DTCEFD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  DTCEFD_MASK ); \
   }

#define DISABLE_DTCEFD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~DTCEFD_MASK ); \
   } 

#define READ_DTCEFD() \
   ((READ_REGISTER_ULONG(0x18) & DTCEFD_MASK)  >> DTCEFD_START_BIT)

#define WHEN_DTCEFD_HIGH() \
     if ( READ_DTCEFD() )


#define UNLESS_DTCEFD_HIGH() \
     if (! READ_DTCEFD() )


#define WAIT_DTCEFD_LOW() \
    while ( READ_DTCEFD() );


#define WAIT_DTCEFD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTCEFD() && (--___t___ > 0)); }


#define WAIT_DTCEFD_HIGH() \
    while (! READ_DTCEFD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RSF 
    // 
#define RSF_MASK 0x2000000U
#define RSF_OFFSET 25
#define RSF_START_BIT 25
#define RSF_WIDTH 1



typedef enum rsf {
    RSF_0,
    RSF_1
} RSF_T ;
#define WRITE_RSF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ RSF_MASK) | ((val << RSF_START_BIT) & RSF_MASK )); \
   } 

#define ENABLE_RSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  RSF_MASK ); \
   }

#define DISABLE_RSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~RSF_MASK ); \
   } 

#define READ_RSF() \
   ((READ_REGISTER_ULONG(0x18) & RSF_MASK)  >> RSF_START_BIT)

#define WHEN_RSF_HIGH() \
     if ( READ_RSF() )


#define UNLESS_RSF_HIGH() \
     if (! READ_RSF() )


#define WAIT_RSF_LOW() \
    while ( READ_RSF() );


#define WAIT_RSF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RSF() && (--___t___ > 0)); }


#define WAIT_RSF_HIGH() \
    while (! READ_RSF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DFRF 
    // 
#define DFRF_MASK 0x1000000U
#define DFRF_OFFSET 24
#define DFRF_START_BIT 24
#define DFRF_WIDTH 1



typedef enum dfrf {
    DFRF_0,
    DFRF_1
} DFRF_T ;
#define WRITE_DFRF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DFRF_MASK) | ((val << DFRF_START_BIT) & DFRF_MASK )); \
   } 

#define ENABLE_DFRF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  DFRF_MASK ); \
   }

#define DISABLE_DFRF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~DFRF_MASK ); \
   } 

#define READ_DFRF() \
   ((READ_REGISTER_ULONG(0x18) & DFRF_MASK)  >> DFRF_START_BIT)

#define WHEN_DFRF_HIGH() \
     if ( READ_DFRF() )


#define UNLESS_DFRF_HIGH() \
     if (! READ_DFRF() )


#define WAIT_DFRF_LOW() \
    while ( READ_DFRF() );


#define WAIT_DFRF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DFRF() && (--___t___ > 0)); }


#define WAIT_DFRF_HIGH() \
    while (! READ_DFRF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TSF 
    // 
#define TSF_MASK 0x200000U
#define TSF_OFFSET 21
#define TSF_START_BIT 21
#define TSF_WIDTH 1



typedef enum tsf {
    TSF_0,
    TSF_1
} TSF_T ;
#define WRITE_TSF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ TSF_MASK) | ((val << TSF_START_BIT) & TSF_MASK )); \
   } 

#define ENABLE_TSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  TSF_MASK ); \
   }

#define DISABLE_TSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~TSF_MASK ); \
   } 

#define READ_TSF() \
   ((READ_REGISTER_ULONG(0x18) & TSF_MASK)  >> TSF_START_BIT)

#define WHEN_TSF_HIGH() \
     if ( READ_TSF() )


#define UNLESS_TSF_HIGH() \
     if (! READ_TSF() )


#define WAIT_TSF_LOW() \
    while ( READ_TSF() );


#define WAIT_TSF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSF() && (--___t___ > 0)); }


#define WAIT_TSF_HIGH() \
    while (! READ_TSF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FTF 
    // 
#define FTF_MASK 0x100000U
#define FTF_OFFSET 20
#define FTF_START_BIT 20
#define FTF_WIDTH 1



typedef enum ftf {
    FTF_0,
    FTF_1
} FTF_T ;
#define WRITE_FTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FTF_MASK) | ((val << FTF_START_BIT) & FTF_MASK )); \
   } 

#define ENABLE_FTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FTF_MASK ); \
   }

#define DISABLE_FTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FTF_MASK ); \
   } 

#define READ_FTF() \
   ((READ_REGISTER_ULONG(0x18) & FTF_MASK)  >> FTF_START_BIT)

#define WHEN_FTF_HIGH() \
     if ( READ_FTF() )


#define UNLESS_FTF_HIGH() \
     if (! READ_FTF() )


#define WAIT_FTF_LOW() \
    while ( READ_FTF() );


#define WAIT_FTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FTF() && (--___t___ > 0)); }


#define WAIT_FTF_HIGH() \
    while (! READ_FTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 14:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TTC 
    // 
#define TTC_MASK 0x1C000U
#define TTC_OFFSET 16
#define TTC_START_BIT 14
#define TTC_WIDTH 3



typedef enum ttc {
    TTC_0,
    TTC_1
} TTC_T ;
#define READ_TTC() \
   ((READ_REGISTER_ULONG(0x18) & TTC_MASK)  >> TTC_START_BIT)

#define WRITE_TTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ TTC_MASK) | ((val << TTC_START_BIT) & TTC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ST 
    // 
#define ST_MASK 0x2000U
#define ST_OFFSET 13
#define ST_START_BIT 13
#define ST_WIDTH 1



#define WRITE_ST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ST_MASK) | ((val << ST_START_BIT) & ST_MASK )); \
   } 

#define ENABLE_ST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  ST_MASK ); \
   }

#define DISABLE_ST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~ST_MASK ); \
   } 

#define READ_ST() \
   ((READ_REGISTER_ULONG(0x18) & ST_MASK)  >> ST_START_BIT)

#define WHEN_ST_HIGH() \
     if ( READ_ST() )


#define UNLESS_ST_HIGH() \
     if (! READ_ST() )


#define WAIT_ST_LOW() \
    while ( READ_ST() );


#define WAIT_ST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ST() && (--___t___ > 0)); }


#define WAIT_ST_HIGH() \
    while (! READ_ST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FEF 
    // 
#define FEF_MASK 0x80U
#define FEF_OFFSET 7
#define FEF_START_BIT 7
#define FEF_WIDTH 1



typedef enum fef {
    FEF_0,
    FEF_1
} FEF_T ;
#define WRITE_FEF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FEF_MASK) | ((val << FEF_START_BIT) & FEF_MASK )); \
   } 

#define ENABLE_FEF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FEF_MASK ); \
   }

#define DISABLE_FEF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FEF_MASK ); \
   } 

#define READ_FEF() \
   ((READ_REGISTER_ULONG(0x18) & FEF_MASK)  >> FEF_START_BIT)

#define WHEN_FEF_HIGH() \
     if ( READ_FEF() )


#define UNLESS_FEF_HIGH() \
     if (! READ_FEF() )


#define WAIT_FEF_LOW() \
    while ( READ_FEF() );


#define WAIT_FEF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEF() && (--___t___ > 0)); }


#define WAIT_FEF_HIGH() \
    while (! READ_FEF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FUGF 
    // 
#define FUGF_MASK 0x40U
#define FUGF_OFFSET 6
#define FUGF_START_BIT 6
#define FUGF_WIDTH 1



typedef enum fugf {
    FUGF_0,
    FUGF_1
} FUGF_T ;
#define WRITE_FUGF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FUGF_MASK) | ((val << FUGF_START_BIT) & FUGF_MASK )); \
   } 

#define ENABLE_FUGF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FUGF_MASK ); \
   }

#define DISABLE_FUGF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FUGF_MASK ); \
   } 

#define READ_FUGF() \
   ((READ_REGISTER_ULONG(0x18) & FUGF_MASK)  >> FUGF_START_BIT)

#define WHEN_FUGF_HIGH() \
     if ( READ_FUGF() )


#define UNLESS_FUGF_HIGH() \
     if (! READ_FUGF() )


#define WAIT_FUGF_LOW() \
    while ( READ_FUGF() );


#define WAIT_FUGF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FUGF() && (--___t___ > 0)); }


#define WAIT_FUGF_HIGH() \
    while (! READ_FUGF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 3:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTC 
    // 
#define RTC_MASK 0x18U
#define RTC_OFFSET 4
#define RTC_START_BIT 3
#define RTC_WIDTH 2



typedef enum rtc {
    RTC_0,
    RTC_1
} RTC_T ;
#define READ_RTC() \
   ((READ_REGISTER_ULONG(0x18) & RTC_MASK)  >> RTC_START_BIT)

#define WRITE_RTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ RTC_MASK) | ((val << RTC_START_BIT) & RTC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OSF 
    // 
#define OSF_MASK 0x4U
#define OSF_OFFSET 2
#define OSF_START_BIT 2
#define OSF_WIDTH 1



typedef enum osf {
    OSF_0,
    OSF_1
} OSF_T ;
#define WRITE_OSF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OSF_MASK) | ((val << OSF_START_BIT) & OSF_MASK )); \
   } 

#define ENABLE_OSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OSF_MASK ); \
   }

#define DISABLE_OSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OSF_MASK ); \
   } 

#define READ_OSF() \
   ((READ_REGISTER_ULONG(0x18) & OSF_MASK)  >> OSF_START_BIT)

#define WHEN_OSF_HIGH() \
     if ( READ_OSF() )


#define UNLESS_OSF_HIGH() \
     if (! READ_OSF() )


#define WAIT_OSF_LOW() \
    while ( READ_OSF() );


#define WAIT_OSF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OSF() && (--___t___ > 0)); }


#define WAIT_OSF_HIGH() \
    while (! READ_OSF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaomr
//
// Return the value of register DMAOMR
//
// Notes : Register Ethernet DMA operation mode register (DMAOMR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SR 
    // 
#define SR_MASK 0x2U
#define SR_OFFSET 1
#define SR_START_BIT 1
#define SR_WIDTH 1



#define WRITE_SR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ SR_MASK) | ((val << SR_START_BIT) & SR_MASK )); \
   } 

#define ENABLE_SR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  SR_MASK ); \
   }

#define DISABLE_SR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~SR_MASK ); \
   } 

#define READ_SR() \
   ((READ_REGISTER_ULONG(0x18) & SR_MASK)  >> SR_START_BIT)

#define WHEN_SR_HIGH() \
     if ( READ_SR() )


#define UNLESS_SR_HIGH() \
     if (! READ_SR() )


#define WAIT_SR_LOW() \
    while ( READ_SR() );


#define WAIT_SR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SR() && (--___t___ > 0)); }


#define WAIT_SR_HIGH() \
    while (! READ_SR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Dmaier at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMAIER( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_DMAIER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_DMAIER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_DMAIER() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define NISE_MASK 0x10000U
#define NISE_OFFSET 16
#define NISE_START_BIT 16
#define NISE_WIDTH 1


#define DMAIER_REG 0x1C

typedef enum nise {
    NISE_0,
    NISE_1
} NISE_T ;
#define WRITE_NISE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ NISE_MASK) | ((val << NISE_START_BIT) & NISE_MASK )); \
   } 

#define ENABLE_NISE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  NISE_MASK ); \
   }

#define DISABLE_NISE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~NISE_MASK ); \
   } 

#define READ_NISE() \
   ((READ_REGISTER_ULONG(0x1C) & NISE_MASK)  >> NISE_START_BIT)

#define WHEN_NISE_HIGH() \
     if ( READ_NISE() )


#define UNLESS_NISE_HIGH() \
     if (! READ_NISE() )


#define WAIT_NISE_LOW() \
    while ( READ_NISE() );


#define WAIT_NISE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NISE() && (--___t___ > 0)); }


#define WAIT_NISE_HIGH() \
    while (! READ_NISE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define AISE_MASK 0x8000U
#define AISE_OFFSET 15
#define AISE_START_BIT 15
#define AISE_WIDTH 1



typedef enum aise {
    AISE_0,
    AISE_1
} AISE_T ;
#define WRITE_AISE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ AISE_MASK) | ((val << AISE_START_BIT) & AISE_MASK )); \
   } 

#define ENABLE_AISE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  AISE_MASK ); \
   }

#define DISABLE_AISE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~AISE_MASK ); \
   } 

#define READ_AISE() \
   ((READ_REGISTER_ULONG(0x1C) & AISE_MASK)  >> AISE_START_BIT)

#define WHEN_AISE_HIGH() \
     if ( READ_AISE() )


#define UNLESS_AISE_HIGH() \
     if (! READ_AISE() )


#define WAIT_AISE_LOW() \
    while ( READ_AISE() );


#define WAIT_AISE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AISE() && (--___t___ > 0)); }


#define WAIT_AISE_HIGH() \
    while (! READ_AISE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ERIE_MASK 0x4000U
#define ERIE_OFFSET 14
#define ERIE_START_BIT 14
#define ERIE_WIDTH 1



typedef enum erie {
    ERIE_0,
    ERIE_1
} ERIE_T ;
#define WRITE_ERIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ERIE_MASK) | ((val << ERIE_START_BIT) & ERIE_MASK )); \
   } 

#define ENABLE_ERIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  ERIE_MASK ); \
   }

#define DISABLE_ERIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~ERIE_MASK ); \
   } 

#define READ_ERIE() \
   ((READ_REGISTER_ULONG(0x1C) & ERIE_MASK)  >> ERIE_START_BIT)

#define WHEN_ERIE_HIGH() \
     if ( READ_ERIE() )


#define UNLESS_ERIE_HIGH() \
     if (! READ_ERIE() )


#define WAIT_ERIE_LOW() \
    while ( READ_ERIE() );


#define WAIT_ERIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERIE() && (--___t___ > 0)); }


#define WAIT_ERIE_HIGH() \
    while (! READ_ERIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define FBEIE_MASK 0x2000U
#define FBEIE_OFFSET 13
#define FBEIE_START_BIT 13
#define FBEIE_WIDTH 1



typedef enum fbeie {
    FBEIE_0,
    FBEIE_1
} FBEIE_T ;
#define WRITE_FBEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ FBEIE_MASK) | ((val << FBEIE_START_BIT) & FBEIE_MASK )); \
   } 

#define ENABLE_FBEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  FBEIE_MASK ); \
   }

#define DISABLE_FBEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~FBEIE_MASK ); \
   } 

#define READ_FBEIE() \
   ((READ_REGISTER_ULONG(0x1C) & FBEIE_MASK)  >> FBEIE_START_BIT)

#define WHEN_FBEIE_HIGH() \
     if ( READ_FBEIE() )


#define UNLESS_FBEIE_HIGH() \
     if (! READ_FBEIE() )


#define WAIT_FBEIE_LOW() \
    while ( READ_FBEIE() );


#define WAIT_FBEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FBEIE() && (--___t___ > 0)); }


#define WAIT_FBEIE_HIGH() \
    while (! READ_FBEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ETIE_MASK 0x400U
#define ETIE_OFFSET 10
#define ETIE_START_BIT 10
#define ETIE_WIDTH 1



typedef enum etie {
    ETIE_0,
    ETIE_1
} ETIE_T ;
#define WRITE_ETIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ETIE_MASK) | ((val << ETIE_START_BIT) & ETIE_MASK )); \
   } 

#define ENABLE_ETIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  ETIE_MASK ); \
   }

#define DISABLE_ETIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~ETIE_MASK ); \
   } 

#define READ_ETIE() \
   ((READ_REGISTER_ULONG(0x1C) & ETIE_MASK)  >> ETIE_START_BIT)

#define WHEN_ETIE_HIGH() \
     if ( READ_ETIE() )


#define UNLESS_ETIE_HIGH() \
     if (! READ_ETIE() )


#define WAIT_ETIE_LOW() \
    while ( READ_ETIE() );


#define WAIT_ETIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETIE() && (--___t___ > 0)); }


#define WAIT_ETIE_HIGH() \
    while (! READ_ETIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RWTIE_MASK 0x200U
#define RWTIE_OFFSET 9
#define RWTIE_START_BIT 9
#define RWTIE_WIDTH 1



typedef enum rwtie {
    RWTIE_0,
    RWTIE_1
} RWTIE_T ;
#define WRITE_RWTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ RWTIE_MASK) | ((val << RWTIE_START_BIT) & RWTIE_MASK )); \
   } 

#define ENABLE_RWTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  RWTIE_MASK ); \
   }

#define DISABLE_RWTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~RWTIE_MASK ); \
   } 

#define READ_RWTIE() \
   ((READ_REGISTER_ULONG(0x1C) & RWTIE_MASK)  >> RWTIE_START_BIT)

#define WHEN_RWTIE_HIGH() \
     if ( READ_RWTIE() )


#define UNLESS_RWTIE_HIGH() \
     if (! READ_RWTIE() )


#define WAIT_RWTIE_LOW() \
    while ( READ_RWTIE() );


#define WAIT_RWTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RWTIE() && (--___t___ > 0)); }


#define WAIT_RWTIE_HIGH() \
    while (! READ_RWTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RPSIE_MASK 0x100U
#define RPSIE_OFFSET 8
#define RPSIE_START_BIT 8
#define RPSIE_WIDTH 1



typedef enum rpsie {
    RPSIE_0,
    RPSIE_1
} RPSIE_T ;
#define WRITE_RPSIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ RPSIE_MASK) | ((val << RPSIE_START_BIT) & RPSIE_MASK )); \
   } 

#define ENABLE_RPSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  RPSIE_MASK ); \
   }

#define DISABLE_RPSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~RPSIE_MASK ); \
   } 

#define READ_RPSIE() \
   ((READ_REGISTER_ULONG(0x1C) & RPSIE_MASK)  >> RPSIE_START_BIT)

#define WHEN_RPSIE_HIGH() \
     if ( READ_RPSIE() )


#define UNLESS_RPSIE_HIGH() \
     if (! READ_RPSIE() )


#define WAIT_RPSIE_LOW() \
    while ( READ_RPSIE() );


#define WAIT_RPSIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RPSIE() && (--___t___ > 0)); }


#define WAIT_RPSIE_HIGH() \
    while (! READ_RPSIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RBUIE_MASK 0x80U
#define RBUIE_OFFSET 7
#define RBUIE_START_BIT 7
#define RBUIE_WIDTH 1



typedef enum rbuie {
    RBUIE_0,
    RBUIE_1
} RBUIE_T ;
#define WRITE_RBUIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ RBUIE_MASK) | ((val << RBUIE_START_BIT) & RBUIE_MASK )); \
   } 

#define ENABLE_RBUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  RBUIE_MASK ); \
   }

#define DISABLE_RBUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~RBUIE_MASK ); \
   } 

#define READ_RBUIE() \
   ((READ_REGISTER_ULONG(0x1C) & RBUIE_MASK)  >> RBUIE_START_BIT)

#define WHEN_RBUIE_HIGH() \
     if ( READ_RBUIE() )


#define UNLESS_RBUIE_HIGH() \
     if (! READ_RBUIE() )


#define WAIT_RBUIE_LOW() \
    while ( READ_RBUIE() );


#define WAIT_RBUIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RBUIE() && (--___t___ > 0)); }


#define WAIT_RBUIE_HIGH() \
    while (! READ_RBUIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RIE_MASK 0x40U
#define RIE_OFFSET 6
#define RIE_START_BIT 6
#define RIE_WIDTH 1



typedef enum rie {
    RIE_0,
    RIE_1
} RIE_T ;
#define WRITE_RIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ RIE_MASK) | ((val << RIE_START_BIT) & RIE_MASK )); \
   } 

#define ENABLE_RIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  RIE_MASK ); \
   }

#define DISABLE_RIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~RIE_MASK ); \
   } 

#define READ_RIE() \
   ((READ_REGISTER_ULONG(0x1C) & RIE_MASK)  >> RIE_START_BIT)

#define WHEN_RIE_HIGH() \
     if ( READ_RIE() )


#define UNLESS_RIE_HIGH() \
     if (! READ_RIE() )


#define WAIT_RIE_LOW() \
    while ( READ_RIE() );


#define WAIT_RIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RIE() && (--___t___ > 0)); }


#define WAIT_RIE_HIGH() \
    while (! READ_RIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TUIE_MASK 0x20U
#define TUIE_OFFSET 5
#define TUIE_START_BIT 5
#define TUIE_WIDTH 1



typedef enum tuie {
    TUIE_0,
    TUIE_1
} TUIE_T ;
#define WRITE_TUIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ TUIE_MASK) | ((val << TUIE_START_BIT) & TUIE_MASK )); \
   } 

#define ENABLE_TUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  TUIE_MASK ); \
   }

#define DISABLE_TUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~TUIE_MASK ); \
   } 

#define READ_TUIE() \
   ((READ_REGISTER_ULONG(0x1C) & TUIE_MASK)  >> TUIE_START_BIT)

#define WHEN_TUIE_HIGH() \
     if ( READ_TUIE() )


#define UNLESS_TUIE_HIGH() \
     if (! READ_TUIE() )


#define WAIT_TUIE_LOW() \
    while ( READ_TUIE() );


#define WAIT_TUIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TUIE() && (--___t___ > 0)); }


#define WAIT_TUIE_HIGH() \
    while (! READ_TUIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ROIE_MASK 0x10U
#define ROIE_OFFSET 4
#define ROIE_START_BIT 4
#define ROIE_WIDTH 1



typedef enum roie {
    ROIE_0,
    ROIE_1
} ROIE_T ;
#define WRITE_ROIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ROIE_MASK) | ((val << ROIE_START_BIT) & ROIE_MASK )); \
   } 

#define ENABLE_ROIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  ROIE_MASK ); \
   }

#define DISABLE_ROIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~ROIE_MASK ); \
   } 

#define READ_ROIE() \
   ((READ_REGISTER_ULONG(0x1C) & ROIE_MASK)  >> ROIE_START_BIT)

#define WHEN_ROIE_HIGH() \
     if ( READ_ROIE() )


#define UNLESS_ROIE_HIGH() \
     if (! READ_ROIE() )


#define WAIT_ROIE_LOW() \
    while ( READ_ROIE() );


#define WAIT_ROIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ROIE() && (--___t___ > 0)); }


#define WAIT_ROIE_HIGH() \
    while (! READ_ROIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TJTIE_MASK 0x8U
#define TJTIE_OFFSET 3
#define TJTIE_START_BIT 3
#define TJTIE_WIDTH 1



typedef enum tjtie {
    TJTIE_0,
    TJTIE_1
} TJTIE_T ;
#define WRITE_TJTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ TJTIE_MASK) | ((val << TJTIE_START_BIT) & TJTIE_MASK )); \
   } 

#define ENABLE_TJTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  TJTIE_MASK ); \
   }

#define DISABLE_TJTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~TJTIE_MASK ); \
   } 

#define READ_TJTIE() \
   ((READ_REGISTER_ULONG(0x1C) & TJTIE_MASK)  >> TJTIE_START_BIT)

#define WHEN_TJTIE_HIGH() \
     if ( READ_TJTIE() )


#define UNLESS_TJTIE_HIGH() \
     if (! READ_TJTIE() )


#define WAIT_TJTIE_LOW() \
    while ( READ_TJTIE() );


#define WAIT_TJTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TJTIE() && (--___t___ > 0)); }


#define WAIT_TJTIE_HIGH() \
    while (! READ_TJTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TBUIE_MASK 0x4U
#define TBUIE_OFFSET 2
#define TBUIE_START_BIT 2
#define TBUIE_WIDTH 1



typedef enum tbuie {
    TBUIE_0,
    TBUIE_1
} TBUIE_T ;
#define WRITE_TBUIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ TBUIE_MASK) | ((val << TBUIE_START_BIT) & TBUIE_MASK )); \
   } 

#define ENABLE_TBUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  TBUIE_MASK ); \
   }

#define DISABLE_TBUIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~TBUIE_MASK ); \
   } 

#define READ_TBUIE() \
   ((READ_REGISTER_ULONG(0x1C) & TBUIE_MASK)  >> TBUIE_START_BIT)

#define WHEN_TBUIE_HIGH() \
     if ( READ_TBUIE() )


#define UNLESS_TBUIE_HIGH() \
     if (! READ_TBUIE() )


#define WAIT_TBUIE_LOW() \
    while ( READ_TBUIE() );


#define WAIT_TBUIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TBUIE() && (--___t___ > 0)); }


#define WAIT_TBUIE_HIGH() \
    while (! READ_TBUIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TPSIE_MASK 0x2U
#define TPSIE_OFFSET 1
#define TPSIE_START_BIT 1
#define TPSIE_WIDTH 1



typedef enum tpsie {
    TPSIE_0,
    TPSIE_1
} TPSIE_T ;
#define WRITE_TPSIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ TPSIE_MASK) | ((val << TPSIE_START_BIT) & TPSIE_MASK )); \
   } 

#define ENABLE_TPSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  TPSIE_MASK ); \
   }

#define DISABLE_TPSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~TPSIE_MASK ); \
   } 

#define READ_TPSIE() \
   ((READ_REGISTER_ULONG(0x1C) & TPSIE_MASK)  >> TPSIE_START_BIT)

#define WHEN_TPSIE_HIGH() \
     if ( READ_TPSIE() )


#define UNLESS_TPSIE_HIGH() \
     if (! READ_TPSIE() )


#define WAIT_TPSIE_LOW() \
    while ( READ_TPSIE() );


#define WAIT_TPSIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TPSIE() && (--___t___ > 0)); }


#define WAIT_TPSIE_HIGH() \
    while (! READ_TPSIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmaier
//
// Return the value of register DMAIER
//
// Notes : Register Ethernet DMA interrupt enable register (DMAIER) at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TIE_MASK 0x1U
#define TIE_OFFSET 0
#define TIE_START_BIT 0
#define TIE_WIDTH 1



typedef enum tie {
    TIE_0,
    TIE_1
} TIE_T ;
#define WRITE_TIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ TIE_MASK) | ((val << TIE_START_BIT) & TIE_MASK )); \
   } 

#define ENABLE_TIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  TIE_MASK ); \
   }

#define DISABLE_TIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~TIE_MASK ); \
   } 

#define READ_TIE() \
   ((READ_REGISTER_ULONG(0x1C) & TIE_MASK)  >> TIE_START_BIT)

#define WHEN_TIE_HIGH() \
     if ( READ_TIE() )


#define UNLESS_TIE_HIGH() \
     if (! READ_TIE() )


#define WAIT_TIE_LOW() \
    while ( READ_TIE() );


#define WAIT_TIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIE() && (--___t___ > 0)); }


#define WAIT_TIE_HIGH() \
    while (! READ_TIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmamfbocr
//
// Return the value of register DMAMFBOCR
//
// Notes : Register Dmamfbocr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMAMFBOCR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_DMAMFBOCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_DMAMFBOCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_DMAMFBOCR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmamfbocr
//
// Return the value of register DMAMFBOCR
//
// Notes : Register Ethernet DMA missed frame and buffer overflow counter register (DMAMFBOCR) at the offset 0x20, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define OFOC_MASK 0x10000000U
#define OFOC_OFFSET 28
#define OFOC_START_BIT 28
#define OFOC_WIDTH 1


#define DMAMFBOCR_REG 0x20

typedef enum ofoc {
    OFOC_0,
    OFOC_1
} OFOC_T ;
#define WRITE_OFOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ OFOC_MASK) | ((val << OFOC_START_BIT) & OFOC_MASK )); \
   } 

#define ENABLE_OFOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  OFOC_MASK ); \
   }

#define DISABLE_OFOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~OFOC_MASK ); \
   } 

#define READ_OFOC() \
   ((READ_REGISTER_ULONG(0x20) & OFOC_MASK)  >> OFOC_START_BIT)

#define WHEN_OFOC_HIGH() \
     if ( READ_OFOC() )


#define UNLESS_OFOC_HIGH() \
     if (! READ_OFOC() )


#define WAIT_OFOC_LOW() \
    while ( READ_OFOC() );


#define WAIT_OFOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OFOC() && (--___t___ > 0)); }


#define WAIT_OFOC_HIGH() \
    while (! READ_OFOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmamfbocr
//
// Return the value of register DMAMFBOCR
//
// Notes : Register Ethernet DMA missed frame and buffer overflow counter register (DMAMFBOCR) at the offset 0x20, Bits 17:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MFA_MASK 0xFFE0000U
#define MFA_OFFSET 27
#define MFA_START_BIT 17
#define MFA_WIDTH 11



typedef enum mfa {
    MFA_0,
    MFA_1
} MFA_T ;
#define READ_MFA() \
   ((READ_REGISTER_ULONG(0x20) & MFA_MASK)  >> MFA_START_BIT)

#define WRITE_MFA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MFA_MASK) | ((val << MFA_START_BIT) & MFA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmamfbocr
//
// Return the value of register DMAMFBOCR
//
// Notes : Register Ethernet DMA missed frame and buffer overflow counter register (DMAMFBOCR) at the offset 0x20, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define OMFC_MASK 0x10000U
#define OMFC_OFFSET 16
#define OMFC_START_BIT 16
#define OMFC_WIDTH 1



typedef enum omfc {
    OMFC_0,
    OMFC_1
} OMFC_T ;
#define WRITE_OMFC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ OMFC_MASK) | ((val << OMFC_START_BIT) & OMFC_MASK )); \
   } 

#define ENABLE_OMFC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  OMFC_MASK ); \
   }

#define DISABLE_OMFC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~OMFC_MASK ); \
   } 

#define READ_OMFC() \
   ((READ_REGISTER_ULONG(0x20) & OMFC_MASK)  >> OMFC_START_BIT)

#define WHEN_OMFC_HIGH() \
     if ( READ_OMFC() )


#define UNLESS_OMFC_HIGH() \
     if (! READ_OMFC() )


#define WAIT_OMFC_LOW() \
    while ( READ_OMFC() );


#define WAIT_OMFC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OMFC() && (--___t___ > 0)); }


#define WAIT_OMFC_HIGH() \
    while (! READ_OMFC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmamfbocr
//
// Return the value of register DMAMFBOCR
//
// Notes : Register Ethernet DMA missed frame and buffer overflow counter register (DMAMFBOCR) at the offset 0x20, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MFC_MASK 0xFFFFU
#define MFC_OFFSET 15
#define MFC_START_BIT 0
#define MFC_WIDTH 16



typedef enum mfc {
    MFC_0,
    MFC_1
} MFC_T ;
#define READ_MFC() \
   ((READ_REGISTER_ULONG(0x20) & MFC_MASK)  >> MFC_START_BIT)

#define WRITE_MFC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MFC_MASK) | ((val << MFC_START_BIT) & MFC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmarswtr
//
// Return the value of register DMARSWTR
//
// Notes : Register Dmarswtr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMARSWTR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_DMARSWTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_DMARSWTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_DMARSWTR() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmarswtr
//
// Return the value of register DMARSWTR
//
// Notes : Register Ethernet DMA receive status watchdog timer register (DMARSWTR) at the offset 0x24, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RSWTC 
    // 
#define RSWTC_MASK 0xFFU
#define RSWTC_OFFSET 7
#define RSWTC_START_BIT 0
#define RSWTC_WIDTH 8


#define DMARSWTR_REG 0x24

typedef enum rswtc {
    RSWTC_0,
    RSWTC_1
} RSWTC_T ;
#define READ_RSWTC() \
   ((READ_REGISTER_ULONG(0x24) & RSWTC_MASK)  >> RSWTC_START_BIT)

#define WRITE_RSWTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ RSWTC_MASK) | ((val << RSWTC_START_BIT) & RSWTC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachtdr
//
// Return the value of register DMACHTDR
//
// Notes : Register Dmachtdr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DMACHTDR() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachtdr
//
// Return the value of register DMACHTDR
//
// Notes : Register Ethernet DMA current host transmit descriptor register (DMACHTDR) at the offset 0x48, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HTDAP 
    // 
#define HTDAP_MASK 0xFFFFFFFFU
#define HTDAP_OFFSET 31
#define HTDAP_START_BIT 0
#define HTDAP_WIDTH 32


#define DMACHTDR_REG 0x48

typedef enum htdap {
    HTDAP_0,
    HTDAP_1
} HTDAP_T ;
#define READ_HTDAP() \
   ((READ_REGISTER_ULONG(0x48) & HTDAP_MASK)  >> HTDAP_START_BIT)

#define WRITE_HTDAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ HTDAP_MASK) | ((val << HTDAP_START_BIT) & HTDAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachrdr
//
// Return the value of register DMACHRDR
//
// Notes : Register Dmachrdr at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DMACHRDR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachrdr
//
// Return the value of register DMACHRDR
//
// Notes : Register Ethernet DMA current host receive descriptor register (DMACHRDR) at the offset 0x4C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HRDAP 
    // 
#define HRDAP_MASK 0xFFFFFFFFU
#define HRDAP_OFFSET 31
#define HRDAP_START_BIT 0
#define HRDAP_WIDTH 32


#define DMACHRDR_REG 0x4C

typedef enum hrdap {
    HRDAP_0,
    HRDAP_1
} HRDAP_T ;
#define READ_HRDAP() \
   ((READ_REGISTER_ULONG(0x4C) & HRDAP_MASK)  >> HRDAP_START_BIT)

#define WRITE_HRDAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ HRDAP_MASK) | ((val << HRDAP_START_BIT) & HRDAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachtbar
//
// Return the value of register DMACHTBAR
//
// Notes : Register Dmachtbar at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DMACHTBAR() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachtbar
//
// Return the value of register DMACHTBAR
//
// Notes : Register Ethernet DMA current host transmit buffer address register (DMACHTBAR) at the offset 0x50, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HTBAP_MASK 0xFFFFFFFFU
#define HTBAP_OFFSET 31
#define HTBAP_START_BIT 0
#define HTBAP_WIDTH 32


#define DMACHTBAR_REG 0x50

typedef enum htbap {
    HTBAP_0,
    HTBAP_1
} HTBAP_T ;
#define READ_HTBAP() \
   ((READ_REGISTER_ULONG(0x50) & HTBAP_MASK)  >> HTBAP_START_BIT)

#define WRITE_HTBAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ HTBAP_MASK) | ((val << HTBAP_START_BIT) & HTBAP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachrbar
//
// Return the value of register DMACHRBAR
//
// Notes : Register Dmachrbar at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DMACHRBAR() \
     READ_REGISTER_ULONG(0x54)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmachrbar
//
// Return the value of register DMACHRBAR
//
// Notes : Register Ethernet DMA current host receive buffer address register (DMACHRBAR) at the offset 0x54, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define HRBAP_MASK 0xFFFFFFFFU
#define HRBAP_OFFSET 31
#define HRBAP_START_BIT 0
#define HRBAP_WIDTH 32


#define DMACHRBAR_REG 0x54

typedef enum hrbap {
    HRBAP_0,
    HRBAP_1
} HRBAP_T ;
#define READ_HRBAP() \
   ((READ_REGISTER_ULONG(0x54) & HRBAP_MASK)  >> HRBAP_START_BIT)

#define WRITE_HRBAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ HRBAP_MASK) | ((val << HRBAP_START_BIT) & HRBAP_MASK )); \
   } 

