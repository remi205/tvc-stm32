/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_hs_host.h
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
 
#define OTG_HS_HOST 0x40040400
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcfg
//
// Return the value of register OTG_HS_HCFG
//
// Notes : Register OtgHsHcfg at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcfg
//
// Return the value of register OTG_HS_HCFG
//
// Notes : Register OTG_HS host configuration register (OTG_HS_HCFG) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FS- and LS-only support 
    // 
#define FSLSS_MASK 0x4U
#define FSLSS_OFFSET 2
#define FSLSS_START_BIT 2
#define FSLSS_WIDTH 1


#define OTG_HS_HCFG_REG 0x0

typedef enum fslss {
    FSLSS_0,
    FSLSS_1
} FSLSS_T ;
#define WRITE_FSLSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FSLSS_MASK) | ((val << FSLSS_START_BIT) & FSLSS_MASK )); \
   } 

#define ENABLE_FSLSS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FSLSS_MASK ); \
   }

#define DISABLE_FSLSS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FSLSS_MASK ); \
   } 

#define READ_FSLSS() \
   ((READ_REGISTER_ULONG(0x0) & FSLSS_MASK)  >> FSLSS_START_BIT)

#define WHEN_FSLSS_HIGH() \
     if ( READ_FSLSS() )


#define UNLESS_FSLSS_HIGH() \
     if (! READ_FSLSS() )


#define WAIT_FSLSS_LOW() \
    while ( READ_FSLSS() );


#define WAIT_FSLSS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FSLSS() && (--___t___ > 0)); }


#define WAIT_FSLSS_HIGH() \
    while (! READ_FSLSS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcfg
//
// Return the value of register OTG_HS_HCFG
//
// Notes : Register OTG_HS host configuration register (OTG_HS_HCFG) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FS/LS PHY clock select 
    // 
#define FSLSPCS_MASK 0x3U
#define FSLSPCS_OFFSET 1
#define FSLSPCS_START_BIT 0
#define FSLSPCS_WIDTH 2



typedef enum fslspcs {
    FSLSPCS_0,
    FSLSPCS_1
} FSLSPCS_T ;
#define READ_FSLSPCS() \
   ((READ_REGISTER_ULONG(0x0) & FSLSPCS_MASK)  >> FSLSPCS_START_BIT)

#define WRITE_FSLSPCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FSLSPCS_MASK) | ((val << FSLSPCS_START_BIT) & FSLSPCS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHfir
//
// Return the value of register OTG_HS_HFIR
//
// Notes : Register OtgHsHfir at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HFIR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_OTG_HS_HFIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HFIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HFIR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHfir
//
// Return the value of register OTG_HS_HFIR
//
// Notes : Register OTG_HS Host frame interval register (OTG_HS_HFIR) at the offset 0x4, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame interval 
    // 
#define FRIVL_MASK 0xFFFFU
#define FRIVL_OFFSET 15
#define FRIVL_START_BIT 0
#define FRIVL_WIDTH 16


#define OTG_HS_HFIR_REG 0x4

typedef enum frivl {
    FRIVL_0,
    FRIVL_1
} FRIVL_T ;
#define READ_FRIVL() \
   ((READ_REGISTER_ULONG(0x4) & FRIVL_MASK)  >> FRIVL_START_BIT)

#define WRITE_FRIVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ FRIVL_MASK) | ((val << FRIVL_START_BIT) & FRIVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHfnum
//
// Return the value of register OTG_HS_HFNUM
//
// Notes : Register OtgHsHfnum at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_HFNUM() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHfnum
//
// Return the value of register OTG_HS_HFNUM
//
// Notes : Register OTG_HS host frame number/frame time remaining register (OTG_HS_HFNUM) at the offset 0x8, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame time remaining 
    // 
#define FTREM_MASK 0xFFFF0000U
#define FTREM_OFFSET 31
#define FTREM_START_BIT 16
#define FTREM_WIDTH 16


#define OTG_HS_HFNUM_REG 0x8

typedef enum ftrem {
    FTREM_0,
    FTREM_1
} FTREM_T ;
#define READ_FTREM() \
   ((READ_REGISTER_ULONG(0x8) & FTREM_MASK)  >> FTREM_START_BIT)

#define WRITE_FTREM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FTREM_MASK) | ((val << FTREM_START_BIT) & FTREM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHfnum
//
// Return the value of register OTG_HS_HFNUM
//
// Notes : Register OTG_HS host frame number/frame time remaining register (OTG_HS_HFNUM) at the offset 0x8, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number 
    // 
#define FRNUM_MASK 0xFFFFU
#define FRNUM_OFFSET 15
#define FRNUM_START_BIT 0
#define FRNUM_WIDTH 16



typedef enum frnum {
    FRNUM_0,
    FRNUM_1
} FRNUM_T ;
#define READ_FRNUM() \
   ((READ_REGISTER_ULONG(0x8) & FRNUM_MASK)  >> FRNUM_START_BIT)

#define WRITE_FRNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FRNUM_MASK) | ((val << FRNUM_START_BIT) & FRNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxsts
//
// Return the value of register OTG_HS_HPTXSTS
//
// Notes : Register OtgHsHptxsts at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxsts
//
// Return the value of register OTG_HS_HPTXSTS
//
// Notes : Register OTG_HS_Host periodic transmit FIFO/queue status register (OTG_HS_HPTXSTS) at the offset 0x10, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Top of the periodic transmit request queue 
    // 
#define PTXQTOP_MASK 0xFF000000U
#define PTXQTOP_OFFSET 31
#define PTXQTOP_START_BIT 24
#define PTXQTOP_WIDTH 8


#define OTG_HS_HPTXSTS_REG 0x10

typedef enum ptxqtop {
    PTXQTOP_0,
    PTXQTOP_1
} PTXQTOP_T ;
#define READ_PTXQTOP() \
   ((READ_REGISTER_ULONG(0x10) & PTXQTOP_MASK)  >> PTXQTOP_START_BIT)

#define WRITE_PTXQTOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PTXQTOP_MASK) | ((val << PTXQTOP_START_BIT) & PTXQTOP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxsts
//
// Return the value of register OTG_HS_HPTXSTS
//
// Notes : Register OTG_HS_Host periodic transmit FIFO/queue status register (OTG_HS_HPTXSTS) at the offset 0x10, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic transmit request queue space available 
    // 
#define PTXQSAV_MASK 0xFF0000U
#define PTXQSAV_OFFSET 23
#define PTXQSAV_START_BIT 16
#define PTXQSAV_WIDTH 8



typedef enum ptxqsav {
    PTXQSAV_0,
    PTXQSAV_1
} PTXQSAV_T ;
#define READ_PTXQSAV() \
   ((READ_REGISTER_ULONG(0x10) & PTXQSAV_MASK)  >> PTXQSAV_START_BIT)

#define WRITE_PTXQSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PTXQSAV_MASK) | ((val << PTXQSAV_START_BIT) & PTXQSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxsts
//
// Return the value of register OTG_HS_HPTXSTS
//
// Notes : Register OTG_HS_Host periodic transmit FIFO/queue status register (OTG_HS_HPTXSTS) at the offset 0x10, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic transmit data FIFO space available 
    // 
#define PTXFSAVL_MASK 0xFFFFU
#define PTXFSAVL_OFFSET 15
#define PTXFSAVL_START_BIT 0
#define PTXFSAVL_WIDTH 16



typedef enum ptxfsavl {
    PTXFSAVL_0,
    PTXFSAVL_1
} PTXFSAVL_T ;
#define READ_PTXFSAVL() \
   ((READ_REGISTER_ULONG(0x10) & PTXFSAVL_MASK)  >> PTXFSAVL_START_BIT)

#define WRITE_PTXFSAVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PTXFSAVL_MASK) | ((val << PTXFSAVL_START_BIT) & PTXFSAVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHaint
//
// Return the value of register OTG_HS_HAINT
//
// Notes : Register OtgHsHaint at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_HAINT() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHaint
//
// Return the value of register OTG_HS_HAINT
//
// Notes : Register OTG_HS Host all channels interrupt register (OTG_HS_HAINT) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel interrupts 
    // 
#define HAINT_MASK 0xFFFFU
#define HAINT_OFFSET 15
#define HAINT_START_BIT 0
#define HAINT_WIDTH 16


#define OTG_HS_HAINT_REG 0x14

typedef enum haint {
    HAINT_0,
    HAINT_1
} HAINT_T ;
#define READ_HAINT() \
   ((READ_REGISTER_ULONG(0x14) & HAINT_MASK)  >> HAINT_START_BIT)

#define WRITE_HAINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ HAINT_MASK) | ((val << HAINT_START_BIT) & HAINT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHaintmsk
//
// Return the value of register OTG_HS_HAINTMSK
//
// Notes : Register OtgHsHaintmsk at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HAINTMSK( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_OTG_HS_HAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HAINTMSK() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHaintmsk
//
// Return the value of register OTG_HS_HAINTMSK
//
// Notes : Register OTG_HS host all channels interrupt mask register (OTG_HS_HAINTMSK) at the offset 0x18, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel interrupt mask 
    // 
#define HAINTM_MASK 0xFFFFU
#define HAINTM_OFFSET 15
#define HAINTM_START_BIT 0
#define HAINTM_WIDTH 16


#define OTG_HS_HAINTMSK_REG 0x18

typedef enum haintm {
    HAINTM_0,
    HAINTM_1
} HAINTM_T ;
#define READ_HAINTM() \
   ((READ_REGISTER_ULONG(0x18) & HAINTM_MASK)  >> HAINTM_START_BIT)

#define WRITE_HAINTM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ HAINTM_MASK) | ((val << HAINTM_START_BIT) & HAINTM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OtgHsHprt at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 17:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port speed 
    // 
#define PSPD_MASK 0x60000U
#define PSPD_OFFSET 18
#define PSPD_START_BIT 17
#define PSPD_WIDTH 2


#define OTG_HS_HPRT_REG 0x40

typedef enum pspd {
    PSPD_0,
    PSPD_1
} PSPD_T ;
#define READ_PSPD() \
   ((READ_REGISTER_ULONG(0x40) & PSPD_MASK)  >> PSPD_START_BIT)

#define WRITE_PSPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PSPD_MASK) | ((val << PSPD_START_BIT) & PSPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 13:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port test control 
    // 
#define PTCTL_MASK 0x1E000U
#define PTCTL_OFFSET 16
#define PTCTL_START_BIT 13
#define PTCTL_WIDTH 4



typedef enum ptctl {
    PTCTL_0,
    PTCTL_1
} PTCTL_T ;
#define READ_PTCTL() \
   ((READ_REGISTER_ULONG(0x40) & PTCTL_MASK)  >> PTCTL_START_BIT)

#define WRITE_PTCTL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PTCTL_MASK) | ((val << PTCTL_START_BIT) & PTCTL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port power 
    // 
#define PPWR_MASK 0x1000U
#define PPWR_OFFSET 12
#define PPWR_START_BIT 12
#define PPWR_WIDTH 1



typedef enum ppwr {
    PPWR_0,
    PPWR_1
} PPWR_T ;
#define WRITE_PPWR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PPWR_MASK) | ((val << PPWR_START_BIT) & PPWR_MASK )); \
   } 

#define ENABLE_PPWR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PPWR_MASK ); \
   }

#define DISABLE_PPWR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PPWR_MASK ); \
   } 

#define READ_PPWR() \
   ((READ_REGISTER_ULONG(0x40) & PPWR_MASK)  >> PPWR_START_BIT)

#define WHEN_PPWR_HIGH() \
     if ( READ_PPWR() )


#define UNLESS_PPWR_HIGH() \
     if (! READ_PPWR() )


#define WAIT_PPWR_LOW() \
    while ( READ_PPWR() );


#define WAIT_PPWR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PPWR() && (--___t___ > 0)); }


#define WAIT_PPWR_HIGH() \
    while (! READ_PPWR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port line status 
    // 
#define PLSTS_MASK 0xC00U
#define PLSTS_OFFSET 11
#define PLSTS_START_BIT 10
#define PLSTS_WIDTH 2



typedef enum plsts {
    PLSTS_0,
    PLSTS_1
} PLSTS_T ;
#define READ_PLSTS() \
   ((READ_REGISTER_ULONG(0x40) & PLSTS_MASK)  >> PLSTS_START_BIT)

#define WRITE_PLSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PLSTS_MASK) | ((val << PLSTS_START_BIT) & PLSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port reset 
    // 
#define PRST_MASK 0x100U
#define PRST_OFFSET 8
#define PRST_START_BIT 8
#define PRST_WIDTH 1



typedef enum prst {
    PRST_0,
    PRST_1
} PRST_T ;
#define WRITE_PRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PRST_MASK) | ((val << PRST_START_BIT) & PRST_MASK )); \
   } 

#define ENABLE_PRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PRST_MASK ); \
   }

#define DISABLE_PRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PRST_MASK ); \
   } 

#define READ_PRST() \
   ((READ_REGISTER_ULONG(0x40) & PRST_MASK)  >> PRST_START_BIT)

#define WHEN_PRST_HIGH() \
     if ( READ_PRST() )


#define UNLESS_PRST_HIGH() \
     if (! READ_PRST() )


#define WAIT_PRST_LOW() \
    while ( READ_PRST() );


#define WAIT_PRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PRST() && (--___t___ > 0)); }


#define WAIT_PRST_HIGH() \
    while (! READ_PRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port suspend 
    // 
#define PSUSP_MASK 0x80U
#define PSUSP_OFFSET 7
#define PSUSP_START_BIT 7
#define PSUSP_WIDTH 1



typedef enum psusp {
    PSUSP_0,
    PSUSP_1
} PSUSP_T ;
#define WRITE_PSUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PSUSP_MASK) | ((val << PSUSP_START_BIT) & PSUSP_MASK )); \
   } 

#define ENABLE_PSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PSUSP_MASK ); \
   }

#define DISABLE_PSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PSUSP_MASK ); \
   } 

#define READ_PSUSP() \
   ((READ_REGISTER_ULONG(0x40) & PSUSP_MASK)  >> PSUSP_START_BIT)

#define WHEN_PSUSP_HIGH() \
     if ( READ_PSUSP() )


#define UNLESS_PSUSP_HIGH() \
     if (! READ_PSUSP() )


#define WAIT_PSUSP_LOW() \
    while ( READ_PSUSP() );


#define WAIT_PSUSP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PSUSP() && (--___t___ > 0)); }


#define WAIT_PSUSP_HIGH() \
    while (! READ_PSUSP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port resume 
    // 
#define PRES_MASK 0x40U
#define PRES_OFFSET 6
#define PRES_START_BIT 6
#define PRES_WIDTH 1



typedef enum pres {
    PRES_0,
    PRES_1
} PRES_T ;
#define WRITE_PRES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PRES_MASK) | ((val << PRES_START_BIT) & PRES_MASK )); \
   } 

#define ENABLE_PRES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PRES_MASK ); \
   }

#define DISABLE_PRES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PRES_MASK ); \
   } 

#define READ_PRES() \
   ((READ_REGISTER_ULONG(0x40) & PRES_MASK)  >> PRES_START_BIT)

#define WHEN_PRES_HIGH() \
     if ( READ_PRES() )


#define UNLESS_PRES_HIGH() \
     if (! READ_PRES() )


#define WAIT_PRES_LOW() \
    while ( READ_PRES() );


#define WAIT_PRES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PRES() && (--___t___ > 0)); }


#define WAIT_PRES_HIGH() \
    while (! READ_PRES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port overcurrent change 
    // 
#define POCCHNG_MASK 0x20U
#define POCCHNG_OFFSET 5
#define POCCHNG_START_BIT 5
#define POCCHNG_WIDTH 1



typedef enum pocchng {
    POCCHNG_0,
    POCCHNG_1
} POCCHNG_T ;
#define WRITE_POCCHNG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ POCCHNG_MASK) | ((val << POCCHNG_START_BIT) & POCCHNG_MASK )); \
   } 

#define ENABLE_POCCHNG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  POCCHNG_MASK ); \
   }

#define DISABLE_POCCHNG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~POCCHNG_MASK ); \
   } 

#define READ_POCCHNG() \
   ((READ_REGISTER_ULONG(0x40) & POCCHNG_MASK)  >> POCCHNG_START_BIT)

#define WHEN_POCCHNG_HIGH() \
     if ( READ_POCCHNG() )


#define UNLESS_POCCHNG_HIGH() \
     if (! READ_POCCHNG() )


#define WAIT_POCCHNG_LOW() \
    while ( READ_POCCHNG() );


#define WAIT_POCCHNG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_POCCHNG() && (--___t___ > 0)); }


#define WAIT_POCCHNG_HIGH() \
    while (! READ_POCCHNG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port overcurrent active 
    // 
#define POCA_MASK 0x10U
#define POCA_OFFSET 4
#define POCA_START_BIT 4
#define POCA_WIDTH 1



typedef enum poca {
    POCA_0,
    POCA_1
} POCA_T ;
#define WRITE_POCA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ POCA_MASK) | ((val << POCA_START_BIT) & POCA_MASK )); \
   } 

#define ENABLE_POCA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  POCA_MASK ); \
   }

#define DISABLE_POCA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~POCA_MASK ); \
   } 

#define READ_POCA() \
   ((READ_REGISTER_ULONG(0x40) & POCA_MASK)  >> POCA_START_BIT)

#define WHEN_POCA_HIGH() \
     if ( READ_POCA() )


#define UNLESS_POCA_HIGH() \
     if (! READ_POCA() )


#define WAIT_POCA_LOW() \
    while ( READ_POCA() );


#define WAIT_POCA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_POCA() && (--___t___ > 0)); }


#define WAIT_POCA_HIGH() \
    while (! READ_POCA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port enable/disable change 
    // 
#define PENCHNG_MASK 0x8U
#define PENCHNG_OFFSET 3
#define PENCHNG_START_BIT 3
#define PENCHNG_WIDTH 1



typedef enum penchng {
    PENCHNG_0,
    PENCHNG_1
} PENCHNG_T ;
#define WRITE_PENCHNG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PENCHNG_MASK) | ((val << PENCHNG_START_BIT) & PENCHNG_MASK )); \
   } 

#define ENABLE_PENCHNG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PENCHNG_MASK ); \
   }

#define DISABLE_PENCHNG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PENCHNG_MASK ); \
   } 

#define READ_PENCHNG() \
   ((READ_REGISTER_ULONG(0x40) & PENCHNG_MASK)  >> PENCHNG_START_BIT)

#define WHEN_PENCHNG_HIGH() \
     if ( READ_PENCHNG() )


#define UNLESS_PENCHNG_HIGH() \
     if (! READ_PENCHNG() )


#define WAIT_PENCHNG_LOW() \
    while ( READ_PENCHNG() );


#define WAIT_PENCHNG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PENCHNG() && (--___t___ > 0)); }


#define WAIT_PENCHNG_HIGH() \
    while (! READ_PENCHNG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port enable 
    // 
#define PENA_MASK 0x4U
#define PENA_OFFSET 2
#define PENA_START_BIT 2
#define PENA_WIDTH 1



typedef enum pena {
    PENA_0,
    PENA_1
} PENA_T ;
#define WRITE_PENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PENA_MASK) | ((val << PENA_START_BIT) & PENA_MASK )); \
   } 

#define ENABLE_PENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PENA_MASK ); \
   }

#define DISABLE_PENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PENA_MASK ); \
   } 

#define READ_PENA() \
   ((READ_REGISTER_ULONG(0x40) & PENA_MASK)  >> PENA_START_BIT)

#define WHEN_PENA_HIGH() \
     if ( READ_PENA() )


#define UNLESS_PENA_HIGH() \
     if (! READ_PENA() )


#define WAIT_PENA_LOW() \
    while ( READ_PENA() );


#define WAIT_PENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PENA() && (--___t___ > 0)); }


#define WAIT_PENA_HIGH() \
    while (! READ_PENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port connect detected 
    // 
#define PCDET_MASK 0x2U
#define PCDET_OFFSET 1
#define PCDET_START_BIT 1
#define PCDET_WIDTH 1



typedef enum pcdet {
    PCDET_0,
    PCDET_1
} PCDET_T ;
#define WRITE_PCDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PCDET_MASK) | ((val << PCDET_START_BIT) & PCDET_MASK )); \
   } 

#define ENABLE_PCDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PCDET_MASK ); \
   }

#define DISABLE_PCDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PCDET_MASK ); \
   } 

#define READ_PCDET() \
   ((READ_REGISTER_ULONG(0x40) & PCDET_MASK)  >> PCDET_START_BIT)

#define WHEN_PCDET_HIGH() \
     if ( READ_PCDET() )


#define UNLESS_PCDET_HIGH() \
     if (! READ_PCDET() )


#define WAIT_PCDET_LOW() \
    while ( READ_PCDET() );


#define WAIT_PCDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCDET() && (--___t___ > 0)); }


#define WAIT_PCDET_HIGH() \
    while (! READ_PCDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHprt
//
// Return the value of register OTG_HS_HPRT
//
// Notes : Register OTG_HS host port control and status register (OTG_HS_HPRT) at the offset 0x40, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port connect status 
    // 
#define PCSTS_MASK 0x1U
#define PCSTS_OFFSET 0
#define PCSTS_START_BIT 0
#define PCSTS_WIDTH 1



typedef enum pcsts {
    PCSTS_0,
    PCSTS_1
} PCSTS_T ;
#define WRITE_PCSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PCSTS_MASK) | ((val << PCSTS_START_BIT) & PCSTS_MASK )); \
   } 

#define ENABLE_PCSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PCSTS_MASK ); \
   }

#define DISABLE_PCSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PCSTS_MASK ); \
   } 

#define READ_PCSTS() \
   ((READ_REGISTER_ULONG(0x40) & PCSTS_MASK)  >> PCSTS_START_BIT)

#define WHEN_PCSTS_HIGH() \
     if ( READ_PCSTS() )


#define UNLESS_PCSTS_HIGH() \
     if (! READ_PCSTS() )


#define WAIT_PCSTS_LOW() \
    while ( READ_PCSTS() );


#define WAIT_PCSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCSTS() && (--___t___ > 0)); }


#define WAIT_PCSTS_HIGH() \
    while (! READ_PCSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR0
//
// Notes : Register OtgHsHcchar0 at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_0( y) \
     WRITE_REGISTER_ULONG( 0x100 , y)

#define SET_BITS_OTG_HS_HCCHAR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_0() \
     READ_REGISTER_ULONG(0x100)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_0_REG 0x100

typedef enum chena {
    CHENA_0,
    CHENA_1
} CHENA_T ;
#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x100) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



typedef enum chdis {
    CHDIS_0,
    CHDIS_1
} CHDIS_T ;
#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x100) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



typedef enum oddfrm {
    ODDFRM_0,
    ODDFRM_1
} ODDFRM_T ;
#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x100) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x100) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



typedef enum mc {
    MC_0,
    MC_1
} MC_T ;
#define READ_MC() \
   ((READ_REGISTER_ULONG(0x100) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x100) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



typedef enum lsdev {
    LSDEV_0,
    LSDEV_1
} LSDEV_T ;
#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x100) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



typedef enum epdir {
    EPDIR_0,
    EPDIR_1
} EPDIR_T ;
#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x100) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x100) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar0
//
// Return the value of register OTG_HS_HCCHAR_0
//
// Notes : Register OTG_HS host channel-0 characteristics register (OTG_HS_HCCHAR0) at the offset 0x100, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x100) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt0
//
// Return the value of register OTG_HS_HCSPLT0
//
// Notes : Register OtgHsHcsplt0 at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_0( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_OTG_HS_HCSPLT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_0() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt0
//
// Return the value of register OTG_HS_HCSPLT_0
//
// Notes : Register OTG_HS host channel-0 split control register (OTG_HS_HCSPLT0) at the offset 0x104, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_0_REG 0x104

typedef enum spliten {
    SPLITEN_0,
    SPLITEN_1
} SPLITEN_T ;
#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG(0x104, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x104) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt0
//
// Return the value of register OTG_HS_HCSPLT_0
//
// Notes : Register OTG_HS host channel-0 split control register (OTG_HS_HCSPLT0) at the offset 0x104, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



typedef enum complsplt {
    COMPLSPLT_0,
    COMPLSPLT_1
} COMPLSPLT_T ;
#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG(0x104, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x104) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt0
//
// Return the value of register OTG_HS_HCSPLT_0
//
// Notes : Register OTG_HS host channel-0 split control register (OTG_HS_HCSPLT0) at the offset 0x104, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



typedef enum xactpos {
    XACTPOS_0,
    XACTPOS_1
} XACTPOS_T ;
#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x104) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt0
//
// Return the value of register OTG_HS_HCSPLT_0
//
// Notes : Register OTG_HS host channel-0 split control register (OTG_HS_HCSPLT0) at the offset 0x104, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



typedef enum hubaddr {
    HUBADDR_0,
    HUBADDR_1
} HUBADDR_T ;
#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x104) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt0
//
// Return the value of register OTG_HS_HCSPLT_0
//
// Notes : Register OTG_HS host channel-0 split control register (OTG_HS_HCSPLT0) at the offset 0x104, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



typedef enum prtaddr {
    PRTADDR_0,
    PRTADDR_1
} PRTADDR_T ;
#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x104) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT0
//
// Notes : Register OtgHsHcint0 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_0( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_OTG_HS_HCINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_0() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_0_REG 0x108

typedef enum dterr {
    DTERR_0,
    DTERR_1
} DTERR_T ;
#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x108) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



typedef enum frmor {
    FRMOR_0,
    FRMOR_1
} FRMOR_T ;
#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x108) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



typedef enum bberr {
    BBERR_0,
    BBERR_1
} BBERR_T ;
#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x108) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



typedef enum txerr {
    TXERR_0,
    TXERR_1
} TXERR_T ;
#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x108) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x108) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x108) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x108) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x108) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



typedef enum ahberr {
    AHBERR_0,
    AHBERR_1
} AHBERR_T ;
#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x108) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



typedef enum chh {
    CHH_0,
    CHH_1
} CHH_T ;
#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x108) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint0
//
// Return the value of register OTG_HS_HCINT_0
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT0) at the offset 0x108, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x108) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK0
//
// Notes : Register OtgHsHcintmsk0 at offset 0x10C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_0( y) \
     WRITE_REGISTER_ULONG( 0x10C , y)

#define SET_BITS_OTG_HS_HCINTMSK_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_0() \
     READ_REGISTER_ULONG(0x10C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_0_REG 0x10C

typedef enum dterrm {
    DTERRM_0,
    DTERRM_1
} DTERRM_T ;
#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x10C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



typedef enum frmorm {
    FRMORM_0,
    FRMORM_1
} FRMORM_T ;
#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x10C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



typedef enum bberrm {
    BBERRM_0,
    BBERRM_1
} BBERRM_T ;
#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x10C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



typedef enum txerrm {
    TXERRM_0,
    TXERRM_1
} TXERRM_T ;
#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x10C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x10C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



typedef enum ackm {
    ACKM_0,
    ACKM_1
} ACKM_T ;
#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x10C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



typedef enum nakm {
    NAKM_0,
    NAKM_1
} NAKM_T ;
#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x10C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



typedef enum stallm {
    STALLM_0,
    STALLM_1
} STALLM_T ;
#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x10C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x10C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



typedef enum chhm {
    CHHM_0,
    CHHM_1
} CHHM_T ;
#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x10C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk0
//
// Return the value of register OTG_HS_HCINTMSK_0
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK0) at the offset 0x10C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG(0x10C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x10C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz0
//
// Return the value of register OTG_HS_HCTSIZ0
//
// Notes : Register OtgHsHctsiz0 at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_0( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_OTG_HS_HCTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_0() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz0
//
// Return the value of register OTG_HS_HCTSIZ_0
//
// Notes : Register OTG_HS host channel-11 transfer size register (OTG_HS_HCTSIZ0) at the offset 0x110, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_0_REG 0x110

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x110) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz0
//
// Return the value of register OTG_HS_HCTSIZ_0
//
// Notes : Register OTG_HS host channel-11 transfer size register (OTG_HS_HCTSIZ0) at the offset 0x110, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x110) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz0
//
// Return the value of register OTG_HS_HCTSIZ_0
//
// Notes : Register OTG_HS host channel-11 transfer size register (OTG_HS_HCTSIZ0) at the offset 0x110, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x110) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma0
//
// Return the value of register OTG_HS_HCDMA0
//
// Notes : Register OtgHsHcdma0 at offset 0x114
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_0( y) \
     WRITE_REGISTER_ULONG( 0x114 , y)

#define SET_BITS_OTG_HS_HCDMA_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_0() \
     READ_REGISTER_ULONG(0x114)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma0
//
// Return the value of register OTG_HS_HCDMA_0
//
// Notes : Register OTG_HS host channel-0 DMA address register (OTG_HS_HCDMA0) at the offset 0x114, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_0_REG 0x114

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x114) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR1
//
// Notes : Register OtgHsHcchar1 at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1( y) \
     WRITE_REGISTER_ULONG( 0x120 , y)

#define SET_BITS_OTG_HS_HCCHAR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1() \
     READ_REGISTER_ULONG(0x120)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_1_REG 0x120

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x120) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x120) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x120) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x120) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x120) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x120) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x120) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x120) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x120) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar1
//
// Return the value of register OTG_HS_HCCHAR_1
//
// Notes : Register OTG_HS host channel-1 characteristics register (OTG_HS_HCCHAR1) at the offset 0x120, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x120) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt1
//
// Return the value of register OTG_HS_HCSPLT1
//
// Notes : Register OtgHsHcsplt1 at offset 0x124
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1( y) \
     WRITE_REGISTER_ULONG( 0x124 , y)

#define SET_BITS_OTG_HS_HCSPLT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1() \
     READ_REGISTER_ULONG(0x124)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt1
//
// Return the value of register OTG_HS_HCSPLT_1
//
// Notes : Register OTG_HS host channel-1 split control register (OTG_HS_HCSPLT1) at the offset 0x124, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_1_REG 0x124

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG(0x124, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x124) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt1
//
// Return the value of register OTG_HS_HCSPLT_1
//
// Notes : Register OTG_HS host channel-1 split control register (OTG_HS_HCSPLT1) at the offset 0x124, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG(0x124, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x124) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt1
//
// Return the value of register OTG_HS_HCSPLT_1
//
// Notes : Register OTG_HS host channel-1 split control register (OTG_HS_HCSPLT1) at the offset 0x124, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x124) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt1
//
// Return the value of register OTG_HS_HCSPLT_1
//
// Notes : Register OTG_HS host channel-1 split control register (OTG_HS_HCSPLT1) at the offset 0x124, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x124) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt1
//
// Return the value of register OTG_HS_HCSPLT_1
//
// Notes : Register OTG_HS host channel-1 split control register (OTG_HS_HCSPLT1) at the offset 0x124, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x124) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT1
//
// Notes : Register OtgHsHcint1 at offset 0x128
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1( y) \
     WRITE_REGISTER_ULONG( 0x128 , y)

#define SET_BITS_OTG_HS_HCINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1() \
     READ_REGISTER_ULONG(0x128)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_1_REG 0x128

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x128) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x128) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x128) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x128) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x128) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x128) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x128) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x128) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x128) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x128) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint1
//
// Return the value of register OTG_HS_HCINT_1
//
// Notes : Register OTG_HS host channel-1 interrupt register (OTG_HS_HCINT1) at the offset 0x128, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x128) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK1
//
// Notes : Register OtgHsHcintmsk1 at offset 0x12C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1( y) \
     WRITE_REGISTER_ULONG( 0x12C , y)

#define SET_BITS_OTG_HS_HCINTMSK_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1() \
     READ_REGISTER_ULONG(0x12C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_1_REG 0x12C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x12C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x12C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x12C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x12C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x12C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x12C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x12C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x12C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x12C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x12C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk1
//
// Return the value of register OTG_HS_HCINTMSK_1
//
// Notes : Register OTG_HS host channel-1 interrupt mask register (OTG_HS_HCINTMSK1) at the offset 0x12C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG(0x12C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x12C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz1
//
// Return the value of register OTG_HS_HCTSIZ1
//
// Notes : Register OtgHsHctsiz1 at offset 0x130
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1( y) \
     WRITE_REGISTER_ULONG( 0x130 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1() \
     READ_REGISTER_ULONG(0x130)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz1
//
// Return the value of register OTG_HS_HCTSIZ_1
//
// Notes : Register OTG_HS host channel-1 transfer size register (OTG_HS_HCTSIZ1) at the offset 0x130, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_1_REG 0x130

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x130) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz1
//
// Return the value of register OTG_HS_HCTSIZ_1
//
// Notes : Register OTG_HS host channel-1 transfer size register (OTG_HS_HCTSIZ1) at the offset 0x130, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x130) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz1
//
// Return the value of register OTG_HS_HCTSIZ_1
//
// Notes : Register OTG_HS host channel-1 transfer size register (OTG_HS_HCTSIZ1) at the offset 0x130, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x130) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma1
//
// Return the value of register OTG_HS_HCDMA1
//
// Notes : Register OtgHsHcdma1 at offset 0x134
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1( y) \
     WRITE_REGISTER_ULONG( 0x134 , y)

#define SET_BITS_OTG_HS_HCDMA_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1() \
     READ_REGISTER_ULONG(0x134)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma1
//
// Return the value of register OTG_HS_HCDMA_1
//
// Notes : Register OTG_HS host channel-1 DMA address register (OTG_HS_HCDMA1) at the offset 0x134, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_1_REG 0x134

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x134) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x134); \
     WRITE_REGISTER_ULONG(0x134, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR2
//
// Notes : Register OtgHsHcchar2 at offset 0x140
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_2( y) \
     WRITE_REGISTER_ULONG( 0x140 , y)

#define SET_BITS_OTG_HS_HCCHAR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_2() \
     READ_REGISTER_ULONG(0x140)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_2_REG 0x140

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x140) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x140) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x140) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x140) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x140) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x140) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x140) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x140) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x140) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar2
//
// Return the value of register OTG_HS_HCCHAR_2
//
// Notes : Register OTG_HS host channel-2 characteristics register (OTG_HS_HCCHAR2) at the offset 0x140, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x140) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt2
//
// Return the value of register OTG_HS_HCSPLT2
//
// Notes : Register OtgHsHcsplt2 at offset 0x144
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_2( y) \
     WRITE_REGISTER_ULONG( 0x144 , y)

#define SET_BITS_OTG_HS_HCSPLT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_2() \
     READ_REGISTER_ULONG(0x144)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt2
//
// Return the value of register OTG_HS_HCSPLT_2
//
// Notes : Register OTG_HS host channel-2 split control register (OTG_HS_HCSPLT2) at the offset 0x144, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_2_REG 0x144

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG(0x144, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x144) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt2
//
// Return the value of register OTG_HS_HCSPLT_2
//
// Notes : Register OTG_HS host channel-2 split control register (OTG_HS_HCSPLT2) at the offset 0x144, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG(0x144, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x144) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt2
//
// Return the value of register OTG_HS_HCSPLT_2
//
// Notes : Register OTG_HS host channel-2 split control register (OTG_HS_HCSPLT2) at the offset 0x144, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x144) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt2
//
// Return the value of register OTG_HS_HCSPLT_2
//
// Notes : Register OTG_HS host channel-2 split control register (OTG_HS_HCSPLT2) at the offset 0x144, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x144) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt2
//
// Return the value of register OTG_HS_HCSPLT_2
//
// Notes : Register OTG_HS host channel-2 split control register (OTG_HS_HCSPLT2) at the offset 0x144, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x144) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT2
//
// Notes : Register OtgHsHcint2 at offset 0x148
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_2( y) \
     WRITE_REGISTER_ULONG( 0x148 , y)

#define SET_BITS_OTG_HS_HCINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_2() \
     READ_REGISTER_ULONG(0x148)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_2_REG 0x148

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x148) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x148) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x148) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x148) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x148) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x148) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x148) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x148) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x148) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x148) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint2
//
// Return the value of register OTG_HS_HCINT_2
//
// Notes : Register OTG_HS host channel-2 interrupt register (OTG_HS_HCINT2) at the offset 0x148, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x148) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK2
//
// Notes : Register OtgHsHcintmsk2 at offset 0x14C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_2( y) \
     WRITE_REGISTER_ULONG( 0x14C , y)

#define SET_BITS_OTG_HS_HCINTMSK_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_2() \
     READ_REGISTER_ULONG(0x14C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_2_REG 0x14C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x14C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x14C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x14C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x14C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x14C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x14C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x14C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x14C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x14C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x14C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk2
//
// Return the value of register OTG_HS_HCINTMSK_2
//
// Notes : Register OTG_HS host channel-2 interrupt mask register (OTG_HS_HCINTMSK2) at the offset 0x14C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG(0x14C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x14C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz2
//
// Return the value of register OTG_HS_HCTSIZ2
//
// Notes : Register OtgHsHctsiz2 at offset 0x150
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_2( y) \
     WRITE_REGISTER_ULONG( 0x150 , y)

#define SET_BITS_OTG_HS_HCTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_2() \
     READ_REGISTER_ULONG(0x150)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz2
//
// Return the value of register OTG_HS_HCTSIZ_2
//
// Notes : Register OTG_HS host channel-2 transfer size register (OTG_HS_HCTSIZ2) at the offset 0x150, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_2_REG 0x150

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x150) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz2
//
// Return the value of register OTG_HS_HCTSIZ_2
//
// Notes : Register OTG_HS host channel-2 transfer size register (OTG_HS_HCTSIZ2) at the offset 0x150, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x150) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz2
//
// Return the value of register OTG_HS_HCTSIZ_2
//
// Notes : Register OTG_HS host channel-2 transfer size register (OTG_HS_HCTSIZ2) at the offset 0x150, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x150) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma2
//
// Return the value of register OTG_HS_HCDMA2
//
// Notes : Register OtgHsHcdma2 at offset 0x154
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_2( y) \
     WRITE_REGISTER_ULONG( 0x154 , y)

#define SET_BITS_OTG_HS_HCDMA_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_2() \
     READ_REGISTER_ULONG(0x154)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma2
//
// Return the value of register OTG_HS_HCDMA_2
//
// Notes : Register OTG_HS host channel-2 DMA address register (OTG_HS_HCDMA2) at the offset 0x154, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_2_REG 0x154

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x154) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x154); \
     WRITE_REGISTER_ULONG(0x154, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR3
//
// Notes : Register OtgHsHcchar3 at offset 0x160
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_3( y) \
     WRITE_REGISTER_ULONG( 0x160 , y)

#define SET_BITS_OTG_HS_HCCHAR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_3() \
     READ_REGISTER_ULONG(0x160)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_3_REG 0x160

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x160) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x160) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x160) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x160) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x160) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x160) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x160) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x160) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x160) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar3
//
// Return the value of register OTG_HS_HCCHAR_3
//
// Notes : Register OTG_HS host channel-3 characteristics register (OTG_HS_HCCHAR3) at the offset 0x160, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x160) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt3
//
// Return the value of register OTG_HS_HCSPLT3
//
// Notes : Register OtgHsHcsplt3 at offset 0x164
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_3( y) \
     WRITE_REGISTER_ULONG( 0x164 , y)

#define SET_BITS_OTG_HS_HCSPLT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG( 0x164 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG( 0x164 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_3() \
     READ_REGISTER_ULONG(0x164)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt3
//
// Return the value of register OTG_HS_HCSPLT_3
//
// Notes : Register OTG_HS host channel-3 split control register (OTG_HS_HCSPLT3) at the offset 0x164, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_3_REG 0x164

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x164); \
     WRITE_REGISTER_ULONG(0x164, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG( 0x164 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG(0x164, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x164) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt3
//
// Return the value of register OTG_HS_HCSPLT_3
//
// Notes : Register OTG_HS host channel-3 split control register (OTG_HS_HCSPLT3) at the offset 0x164, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x164); \
     WRITE_REGISTER_ULONG(0x164, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG( 0x164 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x164); \
     WRITE_REGISTER_ULONG(0x164, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x164) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt3
//
// Return the value of register OTG_HS_HCSPLT_3
//
// Notes : Register OTG_HS host channel-3 split control register (OTG_HS_HCSPLT3) at the offset 0x164, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x164) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x164); \
     WRITE_REGISTER_ULONG(0x164, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt3
//
// Return the value of register OTG_HS_HCSPLT_3
//
// Notes : Register OTG_HS host channel-3 split control register (OTG_HS_HCSPLT3) at the offset 0x164, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x164) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x164); \
     WRITE_REGISTER_ULONG(0x164, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt3
//
// Return the value of register OTG_HS_HCSPLT_3
//
// Notes : Register OTG_HS host channel-3 split control register (OTG_HS_HCSPLT3) at the offset 0x164, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x164) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x164); \
     WRITE_REGISTER_ULONG(0x164, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT3
//
// Notes : Register OtgHsHcint3 at offset 0x168
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_3( y) \
     WRITE_REGISTER_ULONG( 0x168 , y)

#define SET_BITS_OTG_HS_HCINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_3() \
     READ_REGISTER_ULONG(0x168)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_3_REG 0x168

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x168) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x168) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x168) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x168) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x168) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x168) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x168) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x168) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x168) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x168) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint3
//
// Return the value of register OTG_HS_HCINT_3
//
// Notes : Register OTG_HS host channel-3 interrupt register (OTG_HS_HCINT3) at the offset 0x168, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x168) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK3
//
// Notes : Register OtgHsHcintmsk3 at offset 0x16C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_3( y) \
     WRITE_REGISTER_ULONG( 0x16C , y)

#define SET_BITS_OTG_HS_HCINTMSK_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_3() \
     READ_REGISTER_ULONG(0x16C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_3_REG 0x16C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x16C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x16C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x16C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x16C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x16C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x16C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x16C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x16C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x16C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x16C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk3
//
// Return the value of register OTG_HS_HCINTMSK_3
//
// Notes : Register OTG_HS host channel-3 interrupt mask register (OTG_HS_HCINTMSK3) at the offset 0x16C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x16C); \
     WRITE_REGISTER_ULONG(0x16C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG(0x16C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x16C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz3
//
// Return the value of register OTG_HS_HCTSIZ3
//
// Notes : Register OtgHsHctsiz3 at offset 0x170
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_3( y) \
     WRITE_REGISTER_ULONG( 0x170 , y)

#define SET_BITS_OTG_HS_HCTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_3() \
     READ_REGISTER_ULONG(0x170)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz3
//
// Return the value of register OTG_HS_HCTSIZ_3
//
// Notes : Register OTG_HS host channel-3 transfer size register (OTG_HS_HCTSIZ3) at the offset 0x170, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_3_REG 0x170

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x170) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz3
//
// Return the value of register OTG_HS_HCTSIZ_3
//
// Notes : Register OTG_HS host channel-3 transfer size register (OTG_HS_HCTSIZ3) at the offset 0x170, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x170) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz3
//
// Return the value of register OTG_HS_HCTSIZ_3
//
// Notes : Register OTG_HS host channel-3 transfer size register (OTG_HS_HCTSIZ3) at the offset 0x170, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x170) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma3
//
// Return the value of register OTG_HS_HCDMA3
//
// Notes : Register OtgHsHcdma3 at offset 0x174
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_3( y) \
     WRITE_REGISTER_ULONG( 0x174 , y)

#define SET_BITS_OTG_HS_HCDMA_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x174); \
     WRITE_REGISTER_ULONG( 0x174 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x174); \
     WRITE_REGISTER_ULONG( 0x174 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_3() \
     READ_REGISTER_ULONG(0x174)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma3
//
// Return the value of register OTG_HS_HCDMA_3
//
// Notes : Register OTG_HS host channel-3 DMA address register (OTG_HS_HCDMA3) at the offset 0x174, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_3_REG 0x174

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x174) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x174); \
     WRITE_REGISTER_ULONG(0x174, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR4
//
// Notes : Register OtgHsHcchar4 at offset 0x180
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_4( y) \
     WRITE_REGISTER_ULONG( 0x180 , y)

#define SET_BITS_OTG_HS_HCCHAR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_4() \
     READ_REGISTER_ULONG(0x180)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_4_REG 0x180

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x180) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x180) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x180) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x180) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x180) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x180) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x180) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x180) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x180) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar4
//
// Return the value of register OTG_HS_HCCHAR_4
//
// Notes : Register OTG_HS host channel-4 characteristics register (OTG_HS_HCCHAR4) at the offset 0x180, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x180) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt4
//
// Return the value of register OTG_HS_HCSPLT4
//
// Notes : Register OtgHsHcsplt4 at offset 0x184
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_4( y) \
     WRITE_REGISTER_ULONG( 0x184 , y)

#define SET_BITS_OTG_HS_HCSPLT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_4() \
     READ_REGISTER_ULONG(0x184)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt4
//
// Return the value of register OTG_HS_HCSPLT_4
//
// Notes : Register OTG_HS host channel-4 split control register (OTG_HS_HCSPLT4) at the offset 0x184, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_4_REG 0x184

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG(0x184, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x184) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt4
//
// Return the value of register OTG_HS_HCSPLT_4
//
// Notes : Register OTG_HS host channel-4 split control register (OTG_HS_HCSPLT4) at the offset 0x184, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG(0x184, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x184) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt4
//
// Return the value of register OTG_HS_HCSPLT_4
//
// Notes : Register OTG_HS host channel-4 split control register (OTG_HS_HCSPLT4) at the offset 0x184, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x184) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt4
//
// Return the value of register OTG_HS_HCSPLT_4
//
// Notes : Register OTG_HS host channel-4 split control register (OTG_HS_HCSPLT4) at the offset 0x184, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x184) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt4
//
// Return the value of register OTG_HS_HCSPLT_4
//
// Notes : Register OTG_HS host channel-4 split control register (OTG_HS_HCSPLT4) at the offset 0x184, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x184) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT4
//
// Notes : Register OtgHsHcint4 at offset 0x188
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_4( y) \
     WRITE_REGISTER_ULONG( 0x188 , y)

#define SET_BITS_OTG_HS_HCINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_4() \
     READ_REGISTER_ULONG(0x188)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_4_REG 0x188

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x188) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x188) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x188) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x188) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x188) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x188) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x188) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x188) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x188) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x188) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint4
//
// Return the value of register OTG_HS_HCINT_4
//
// Notes : Register OTG_HS host channel-4 interrupt register (OTG_HS_HCINT4) at the offset 0x188, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x188) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK4
//
// Notes : Register OtgHsHcintmsk4 at offset 0x18C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_4( y) \
     WRITE_REGISTER_ULONG( 0x18C , y)

#define SET_BITS_OTG_HS_HCINTMSK_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_4() \
     READ_REGISTER_ULONG(0x18C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_4_REG 0x18C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x18C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x18C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x18C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x18C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x18C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x18C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x18C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x18C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x18C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x18C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk4
//
// Return the value of register OTG_HS_HCINTMSK_4
//
// Notes : Register OTG_HS host channel-4 interrupt mask register (OTG_HS_HCINTMSK4) at the offset 0x18C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18C); \
     WRITE_REGISTER_ULONG(0x18C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG(0x18C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x18C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz4
//
// Return the value of register OTG_HS_HCTSIZ4
//
// Notes : Register OtgHsHctsiz4 at offset 0x190
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_4( y) \
     WRITE_REGISTER_ULONG( 0x190 , y)

#define SET_BITS_OTG_HS_HCTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_4() \
     READ_REGISTER_ULONG(0x190)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz4
//
// Return the value of register OTG_HS_HCTSIZ_4
//
// Notes : Register OTG_HS host channel-4 transfer size register (OTG_HS_HCTSIZ4) at the offset 0x190, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_4_REG 0x190

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x190) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz4
//
// Return the value of register OTG_HS_HCTSIZ_4
//
// Notes : Register OTG_HS host channel-4 transfer size register (OTG_HS_HCTSIZ4) at the offset 0x190, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x190) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz4
//
// Return the value of register OTG_HS_HCTSIZ_4
//
// Notes : Register OTG_HS host channel-4 transfer size register (OTG_HS_HCTSIZ4) at the offset 0x190, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x190) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma4
//
// Return the value of register OTG_HS_HCDMA4
//
// Notes : Register OtgHsHcdma4 at offset 0x194
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_4( y) \
     WRITE_REGISTER_ULONG( 0x194 , y)

#define SET_BITS_OTG_HS_HCDMA_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_4() \
     READ_REGISTER_ULONG(0x194)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma4
//
// Return the value of register OTG_HS_HCDMA_4
//
// Notes : Register OTG_HS host channel-4 DMA address register (OTG_HS_HCDMA4) at the offset 0x194, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_4_REG 0x194

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x194) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x194); \
     WRITE_REGISTER_ULONG(0x194, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR5
//
// Notes : Register OtgHsHcchar5 at offset 0x1A0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_5( y) \
     WRITE_REGISTER_ULONG( 0x1A0 , y)

#define SET_BITS_OTG_HS_HCCHAR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_5() \
     READ_REGISTER_ULONG(0x1A0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_5_REG 0x1A0

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x1A0) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x1A0) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x1A0) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x1A0) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x1A0) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x1A0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x1A0) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x1A0) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x1A0) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar5
//
// Return the value of register OTG_HS_HCCHAR_5
//
// Notes : Register OTG_HS host channel-5 characteristics register (OTG_HS_HCCHAR5) at the offset 0x1A0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1A0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt5
//
// Return the value of register OTG_HS_HCSPLT5
//
// Notes : Register OtgHsHcsplt5 at offset 0x1A4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_5( y) \
     WRITE_REGISTER_ULONG( 0x1A4 , y)

#define SET_BITS_OTG_HS_HCSPLT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_5() \
     READ_REGISTER_ULONG(0x1A4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt5
//
// Return the value of register OTG_HS_HCSPLT_5
//
// Notes : Register OTG_HS host channel-5 split control register (OTG_HS_HCSPLT5) at the offset 0x1A4, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_5_REG 0x1A4

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x1A4) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt5
//
// Return the value of register OTG_HS_HCSPLT_5
//
// Notes : Register OTG_HS host channel-5 split control register (OTG_HS_HCSPLT5) at the offset 0x1A4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x1A4) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt5
//
// Return the value of register OTG_HS_HCSPLT_5
//
// Notes : Register OTG_HS host channel-5 split control register (OTG_HS_HCSPLT5) at the offset 0x1A4, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x1A4) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt5
//
// Return the value of register OTG_HS_HCSPLT_5
//
// Notes : Register OTG_HS host channel-5 split control register (OTG_HS_HCSPLT5) at the offset 0x1A4, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x1A4) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt5
//
// Return the value of register OTG_HS_HCSPLT_5
//
// Notes : Register OTG_HS host channel-5 split control register (OTG_HS_HCSPLT5) at the offset 0x1A4, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x1A4) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT5
//
// Notes : Register OtgHsHcint5 at offset 0x1A8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_5( y) \
     WRITE_REGISTER_ULONG( 0x1A8 , y)

#define SET_BITS_OTG_HS_HCINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_5() \
     READ_REGISTER_ULONG(0x1A8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_5_REG 0x1A8

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x1A8) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x1A8) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x1A8) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x1A8) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1A8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x1A8) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1A8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1A8) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x1A8) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x1A8) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint5
//
// Return the value of register OTG_HS_HCINT_5
//
// Notes : Register OTG_HS host channel-5 interrupt register (OTG_HS_HCINT5) at the offset 0x1A8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1A8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK5
//
// Notes : Register OtgHsHcintmsk5 at offset 0x1AC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_5( y) \
     WRITE_REGISTER_ULONG( 0x1AC , y)

#define SET_BITS_OTG_HS_HCINTMSK_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_5() \
     READ_REGISTER_ULONG(0x1AC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_5_REG 0x1AC

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x1AC) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x1AC) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x1AC) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x1AC) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1AC) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x1AC) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x1AC) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x1AC) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x1AC) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x1AC) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk5
//
// Return the value of register OTG_HS_HCINTMSK_5
//
// Notes : Register OTG_HS host channel-5 interrupt mask register (OTG_HS_HCINTMSK5) at the offset 0x1AC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x1AC) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz5
//
// Return the value of register OTG_HS_HCTSIZ5
//
// Notes : Register OtgHsHctsiz5 at offset 0x1B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_5( y) \
     WRITE_REGISTER_ULONG( 0x1B0 , y)

#define SET_BITS_OTG_HS_HCTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_5() \
     READ_REGISTER_ULONG(0x1B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz5
//
// Return the value of register OTG_HS_HCTSIZ_5
//
// Notes : Register OTG_HS host channel-5 transfer size register (OTG_HS_HCTSIZ5) at the offset 0x1B0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_5_REG 0x1B0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1B0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz5
//
// Return the value of register OTG_HS_HCTSIZ_5
//
// Notes : Register OTG_HS host channel-5 transfer size register (OTG_HS_HCTSIZ5) at the offset 0x1B0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x1B0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz5
//
// Return the value of register OTG_HS_HCTSIZ_5
//
// Notes : Register OTG_HS host channel-5 transfer size register (OTG_HS_HCTSIZ5) at the offset 0x1B0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1B0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma5
//
// Return the value of register OTG_HS_HCDMA5
//
// Notes : Register OtgHsHcdma5 at offset 0x1B4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_5( y) \
     WRITE_REGISTER_ULONG( 0x1B4 , y)

#define SET_BITS_OTG_HS_HCDMA_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B4); \
     WRITE_REGISTER_ULONG( 0x1B4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B4); \
     WRITE_REGISTER_ULONG( 0x1B4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_5() \
     READ_REGISTER_ULONG(0x1B4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma5
//
// Return the value of register OTG_HS_HCDMA_5
//
// Notes : Register OTG_HS host channel-5 DMA address register (OTG_HS_HCDMA5) at the offset 0x1B4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_5_REG 0x1B4

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x1B4) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B4); \
     WRITE_REGISTER_ULONG(0x1B4, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR6
//
// Notes : Register OtgHsHcchar6 at offset 0x1C0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_6( y) \
     WRITE_REGISTER_ULONG( 0x1C0 , y)

#define SET_BITS_OTG_HS_HCCHAR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_6() \
     READ_REGISTER_ULONG(0x1C0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_6_REG 0x1C0

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x1C0) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x1C0) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x1C0) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x1C0) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x1C0) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x1C0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x1C0) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x1C0) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x1C0) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar6
//
// Return the value of register OTG_HS_HCCHAR_6
//
// Notes : Register OTG_HS host channel-6 characteristics register (OTG_HS_HCCHAR6) at the offset 0x1C0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1C0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt6
//
// Return the value of register OTG_HS_HCSPLT6
//
// Notes : Register OtgHsHcsplt6 at offset 0x1C4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_6( y) \
     WRITE_REGISTER_ULONG( 0x1C4 , y)

#define SET_BITS_OTG_HS_HCSPLT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG( 0x1C4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG( 0x1C4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_6() \
     READ_REGISTER_ULONG(0x1C4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt6
//
// Return the value of register OTG_HS_HCSPLT_6
//
// Notes : Register OTG_HS host channel-6 split control register (OTG_HS_HCSPLT6) at the offset 0x1C4, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_6_REG 0x1C4

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG( 0x1C4 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x1C4) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt6
//
// Return the value of register OTG_HS_HCSPLT_6
//
// Notes : Register OTG_HS host channel-6 split control register (OTG_HS_HCSPLT6) at the offset 0x1C4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG( 0x1C4 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x1C4) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt6
//
// Return the value of register OTG_HS_HCSPLT_6
//
// Notes : Register OTG_HS host channel-6 split control register (OTG_HS_HCSPLT6) at the offset 0x1C4, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x1C4) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt6
//
// Return the value of register OTG_HS_HCSPLT_6
//
// Notes : Register OTG_HS host channel-6 split control register (OTG_HS_HCSPLT6) at the offset 0x1C4, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x1C4) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt6
//
// Return the value of register OTG_HS_HCSPLT_6
//
// Notes : Register OTG_HS host channel-6 split control register (OTG_HS_HCSPLT6) at the offset 0x1C4, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x1C4) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C4); \
     WRITE_REGISTER_ULONG(0x1C4, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT6
//
// Notes : Register OtgHsHcint6 at offset 0x1C8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_6( y) \
     WRITE_REGISTER_ULONG( 0x1C8 , y)

#define SET_BITS_OTG_HS_HCINT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_6() \
     READ_REGISTER_ULONG(0x1C8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_6_REG 0x1C8

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x1C8) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x1C8) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x1C8) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x1C8) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1C8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x1C8) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1C8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1C8) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x1C8) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x1C8) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint6
//
// Return the value of register OTG_HS_HCINT_6
//
// Notes : Register OTG_HS host channel-6 interrupt register (OTG_HS_HCINT6) at the offset 0x1C8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1C8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK6
//
// Notes : Register OtgHsHcintmsk6 at offset 0x1CC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_6( y) \
     WRITE_REGISTER_ULONG( 0x1CC , y)

#define SET_BITS_OTG_HS_HCINTMSK_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_6() \
     READ_REGISTER_ULONG(0x1CC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_6_REG 0x1CC

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x1CC) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x1CC) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x1CC) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x1CC) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1CC) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x1CC) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x1CC) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x1CC) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x1CC) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x1CC) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk6
//
// Return the value of register OTG_HS_HCINTMSK_6
//
// Notes : Register OTG_HS host channel-6 interrupt mask register (OTG_HS_HCINTMSK6) at the offset 0x1CC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG(0x1CC, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x1CC) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz6
//
// Return the value of register OTG_HS_HCTSIZ6
//
// Notes : Register OtgHsHctsiz6 at offset 0x1D0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_6( y) \
     WRITE_REGISTER_ULONG( 0x1D0 , y)

#define SET_BITS_OTG_HS_HCTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1D0); \
     WRITE_REGISTER_ULONG( 0x1D0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1D0); \
     WRITE_REGISTER_ULONG( 0x1D0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_6() \
     READ_REGISTER_ULONG(0x1D0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz6
//
// Return the value of register OTG_HS_HCTSIZ_6
//
// Notes : Register OTG_HS host channel-6 transfer size register (OTG_HS_HCTSIZ6) at the offset 0x1D0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_6_REG 0x1D0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1D0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1D0); \
     WRITE_REGISTER_ULONG(0x1D0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz6
//
// Return the value of register OTG_HS_HCTSIZ_6
//
// Notes : Register OTG_HS host channel-6 transfer size register (OTG_HS_HCTSIZ6) at the offset 0x1D0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x1D0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1D0); \
     WRITE_REGISTER_ULONG(0x1D0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz6
//
// Return the value of register OTG_HS_HCTSIZ_6
//
// Notes : Register OTG_HS host channel-6 transfer size register (OTG_HS_HCTSIZ6) at the offset 0x1D0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1D0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1D0); \
     WRITE_REGISTER_ULONG(0x1D0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma6
//
// Return the value of register OTG_HS_HCDMA6
//
// Notes : Register OtgHsHcdma6 at offset 0x1D4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_6( y) \
     WRITE_REGISTER_ULONG( 0x1D4 , y)

#define SET_BITS_OTG_HS_HCDMA_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1D4); \
     WRITE_REGISTER_ULONG( 0x1D4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1D4); \
     WRITE_REGISTER_ULONG( 0x1D4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_6() \
     READ_REGISTER_ULONG(0x1D4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma6
//
// Return the value of register OTG_HS_HCDMA_6
//
// Notes : Register OTG_HS host channel-6 DMA address register (OTG_HS_HCDMA6) at the offset 0x1D4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_6_REG 0x1D4

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x1D4) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1D4); \
     WRITE_REGISTER_ULONG(0x1D4, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR7
//
// Notes : Register OtgHsHcchar7 at offset 0x1E0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_7( y) \
     WRITE_REGISTER_ULONG( 0x1E0 , y)

#define SET_BITS_OTG_HS_HCCHAR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_7() \
     READ_REGISTER_ULONG(0x1E0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_7_REG 0x1E0

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x1E0) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x1E0) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x1E0) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x1E0) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x1E0) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x1E0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x1E0) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x1E0) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x1E0) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar7
//
// Return the value of register OTG_HS_HCCHAR_7
//
// Notes : Register OTG_HS host channel-7 characteristics register (OTG_HS_HCCHAR7) at the offset 0x1E0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1E0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt7
//
// Return the value of register OTG_HS_HCSPLT7
//
// Notes : Register OtgHsHcsplt7 at offset 0x1E4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_7( y) \
     WRITE_REGISTER_ULONG( 0x1E4 , y)

#define SET_BITS_OTG_HS_HCSPLT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E4); \
     WRITE_REGISTER_ULONG( 0x1E4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E4); \
     WRITE_REGISTER_ULONG( 0x1E4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_7() \
     READ_REGISTER_ULONG(0x1E4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt7
//
// Return the value of register OTG_HS_HCSPLT_7
//
// Notes : Register OTG_HS host channel-7 split control register (OTG_HS_HCSPLT7) at the offset 0x1E4, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_7_REG 0x1E4

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E4); \
     WRITE_REGISTER_ULONG( 0x1E4 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x1E4) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt7
//
// Return the value of register OTG_HS_HCSPLT_7
//
// Notes : Register OTG_HS host channel-7 split control register (OTG_HS_HCSPLT7) at the offset 0x1E4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E4); \
     WRITE_REGISTER_ULONG( 0x1E4 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x1E4) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt7
//
// Return the value of register OTG_HS_HCSPLT_7
//
// Notes : Register OTG_HS host channel-7 split control register (OTG_HS_HCSPLT7) at the offset 0x1E4, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x1E4) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt7
//
// Return the value of register OTG_HS_HCSPLT_7
//
// Notes : Register OTG_HS host channel-7 split control register (OTG_HS_HCSPLT7) at the offset 0x1E4, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x1E4) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt7
//
// Return the value of register OTG_HS_HCSPLT_7
//
// Notes : Register OTG_HS host channel-7 split control register (OTG_HS_HCSPLT7) at the offset 0x1E4, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x1E4) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E4); \
     WRITE_REGISTER_ULONG(0x1E4, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT7
//
// Notes : Register OtgHsHcint7 at offset 0x1E8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_7( y) \
     WRITE_REGISTER_ULONG( 0x1E8 , y)

#define SET_BITS_OTG_HS_HCINT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_7() \
     READ_REGISTER_ULONG(0x1E8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_7_REG 0x1E8

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x1E8) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x1E8) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x1E8) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x1E8) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1E8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x1E8) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1E8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1E8) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x1E8) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x1E8) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint7
//
// Return the value of register OTG_HS_HCINT_7
//
// Notes : Register OTG_HS host channel-7 interrupt register (OTG_HS_HCINT7) at the offset 0x1E8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1E8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK7
//
// Notes : Register OtgHsHcintmsk7 at offset 0x1EC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_7( y) \
     WRITE_REGISTER_ULONG( 0x1EC , y)

#define SET_BITS_OTG_HS_HCINTMSK_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_7() \
     READ_REGISTER_ULONG(0x1EC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_7_REG 0x1EC

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x1EC) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x1EC) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x1EC) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x1EC) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1EC) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x1EC) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x1EC) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x1EC) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x1EC) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x1EC) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk7
//
// Return the value of register OTG_HS_HCINTMSK_7
//
// Notes : Register OTG_HS host channel-7 interrupt mask register (OTG_HS_HCINTMSK7) at the offset 0x1EC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG(0x1EC, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x1EC) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz7
//
// Return the value of register OTG_HS_HCTSIZ7
//
// Notes : Register OtgHsHctsiz7 at offset 0x1F0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_7( y) \
     WRITE_REGISTER_ULONG( 0x1F0 , y)

#define SET_BITS_OTG_HS_HCTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F0); \
     WRITE_REGISTER_ULONG( 0x1F0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F0); \
     WRITE_REGISTER_ULONG( 0x1F0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_7() \
     READ_REGISTER_ULONG(0x1F0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz7
//
// Return the value of register OTG_HS_HCTSIZ_7
//
// Notes : Register OTG_HS host channel-7 transfer size register (OTG_HS_HCTSIZ7) at the offset 0x1F0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_7_REG 0x1F0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1F0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F0); \
     WRITE_REGISTER_ULONG(0x1F0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz7
//
// Return the value of register OTG_HS_HCTSIZ_7
//
// Notes : Register OTG_HS host channel-7 transfer size register (OTG_HS_HCTSIZ7) at the offset 0x1F0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x1F0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F0); \
     WRITE_REGISTER_ULONG(0x1F0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz7
//
// Return the value of register OTG_HS_HCTSIZ_7
//
// Notes : Register OTG_HS host channel-7 transfer size register (OTG_HS_HCTSIZ7) at the offset 0x1F0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1F0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F0); \
     WRITE_REGISTER_ULONG(0x1F0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma7
//
// Return the value of register OTG_HS_HCDMA7
//
// Notes : Register OtgHsHcdma7 at offset 0x1F4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_7( y) \
     WRITE_REGISTER_ULONG( 0x1F4 , y)

#define SET_BITS_OTG_HS_HCDMA_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_7() \
     READ_REGISTER_ULONG(0x1F4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma7
//
// Return the value of register OTG_HS_HCDMA_7
//
// Notes : Register OTG_HS host channel-7 DMA address register (OTG_HS_HCDMA7) at the offset 0x1F4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_7_REG 0x1F4

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x1F4) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR8
//
// Notes : Register OtgHsHcchar8 at offset 0x200
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_8( y) \
     WRITE_REGISTER_ULONG( 0x200 , y)

#define SET_BITS_OTG_HS_HCCHAR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_8() \
     READ_REGISTER_ULONG(0x200)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_8_REG 0x200

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG(0x200, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x200) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG(0x200, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x200) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG(0x200, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x200) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x200) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x200) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x200) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG(0x200, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x200) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG(0x200, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x200) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x200) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar8
//
// Return the value of register OTG_HS_HCCHAR_8
//
// Notes : Register OTG_HS host channel-8 characteristics register (OTG_HS_HCCHAR8) at the offset 0x200, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x200) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt8
//
// Return the value of register OTG_HS_HCSPLT8
//
// Notes : Register OtgHsHcsplt8 at offset 0x204
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_8( y) \
     WRITE_REGISTER_ULONG( 0x204 , y)

#define SET_BITS_OTG_HS_HCSPLT_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_8() \
     READ_REGISTER_ULONG(0x204)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt8
//
// Return the value of register OTG_HS_HCSPLT_8
//
// Notes : Register OTG_HS host channel-8 split control register (OTG_HS_HCSPLT8) at the offset 0x204, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_8_REG 0x204

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x204) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt8
//
// Return the value of register OTG_HS_HCSPLT_8
//
// Notes : Register OTG_HS host channel-8 split control register (OTG_HS_HCSPLT8) at the offset 0x204, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x204) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt8
//
// Return the value of register OTG_HS_HCSPLT_8
//
// Notes : Register OTG_HS host channel-8 split control register (OTG_HS_HCSPLT8) at the offset 0x204, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x204) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt8
//
// Return the value of register OTG_HS_HCSPLT_8
//
// Notes : Register OTG_HS host channel-8 split control register (OTG_HS_HCSPLT8) at the offset 0x204, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x204) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt8
//
// Return the value of register OTG_HS_HCSPLT_8
//
// Notes : Register OTG_HS host channel-8 split control register (OTG_HS_HCSPLT8) at the offset 0x204, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x204) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT8
//
// Notes : Register OtgHsHcint8 at offset 0x208
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_8( y) \
     WRITE_REGISTER_ULONG( 0x208 , y)

#define SET_BITS_OTG_HS_HCINT_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_8() \
     READ_REGISTER_ULONG(0x208)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_8_REG 0x208

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x208) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x208) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x208) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x208) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x208) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x208) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x208) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x208) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x208) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x208) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint8
//
// Return the value of register OTG_HS_HCINT_8
//
// Notes : Register OTG_HS host channel-8 interrupt register (OTG_HS_HCINT8) at the offset 0x208, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG(0x208, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x208) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK8
//
// Notes : Register OtgHsHcintmsk8 at offset 0x20C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_8( y) \
     WRITE_REGISTER_ULONG( 0x20C , y)

#define SET_BITS_OTG_HS_HCINTMSK_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_8() \
     READ_REGISTER_ULONG(0x20C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_8_REG 0x20C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x20C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x20C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x20C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x20C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x20C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x20C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x20C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x20C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x20C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x20C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk8
//
// Return the value of register OTG_HS_HCINTMSK_8
//
// Notes : Register OTG_HS host channel-8 interrupt mask register (OTG_HS_HCINTMSK8) at the offset 0x20C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20C); \
     WRITE_REGISTER_ULONG(0x20C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG(0x20C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x20C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz8
//
// Return the value of register OTG_HS_HCTSIZ8
//
// Notes : Register OtgHsHctsiz8 at offset 0x210
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_8( y) \
     WRITE_REGISTER_ULONG( 0x210 , y)

#define SET_BITS_OTG_HS_HCTSIZ_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x210); \
     WRITE_REGISTER_ULONG( 0x210 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x210); \
     WRITE_REGISTER_ULONG( 0x210 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_8() \
     READ_REGISTER_ULONG(0x210)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz8
//
// Return the value of register OTG_HS_HCTSIZ_8
//
// Notes : Register OTG_HS host channel-8 transfer size register (OTG_HS_HCTSIZ8) at the offset 0x210, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_8_REG 0x210

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x210) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x210); \
     WRITE_REGISTER_ULONG(0x210, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz8
//
// Return the value of register OTG_HS_HCTSIZ_8
//
// Notes : Register OTG_HS host channel-8 transfer size register (OTG_HS_HCTSIZ8) at the offset 0x210, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x210) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x210); \
     WRITE_REGISTER_ULONG(0x210, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz8
//
// Return the value of register OTG_HS_HCTSIZ_8
//
// Notes : Register OTG_HS host channel-8 transfer size register (OTG_HS_HCTSIZ8) at the offset 0x210, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x210) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x210); \
     WRITE_REGISTER_ULONG(0x210, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma8
//
// Return the value of register OTG_HS_HCDMA8
//
// Notes : Register OtgHsHcdma8 at offset 0x214
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_8( y) \
     WRITE_REGISTER_ULONG( 0x214 , y)

#define SET_BITS_OTG_HS_HCDMA_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_8() \
     READ_REGISTER_ULONG(0x214)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma8
//
// Return the value of register OTG_HS_HCDMA_8
//
// Notes : Register OTG_HS host channel-8 DMA address register (OTG_HS_HCDMA8) at the offset 0x214, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_8_REG 0x214

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x214) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR9
//
// Notes : Register OtgHsHcchar9 at offset 0x220
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_9( y) \
     WRITE_REGISTER_ULONG( 0x220 , y)

#define SET_BITS_OTG_HS_HCCHAR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_9() \
     READ_REGISTER_ULONG(0x220)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_9_REG 0x220

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG(0x220, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x220) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG(0x220, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x220) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG(0x220, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x220) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x220) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x220) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x220) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG(0x220, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x220) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG(0x220, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x220) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x220) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar9
//
// Return the value of register OTG_HS_HCCHAR_9
//
// Notes : Register OTG_HS host channel-9 characteristics register (OTG_HS_HCCHAR9) at the offset 0x220, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x220) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt9
//
// Return the value of register OTG_HS_HCSPLT9
//
// Notes : Register OtgHsHcsplt9 at offset 0x224
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_9( y) \
     WRITE_REGISTER_ULONG( 0x224 , y)

#define SET_BITS_OTG_HS_HCSPLT_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_9() \
     READ_REGISTER_ULONG(0x224)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt9
//
// Return the value of register OTG_HS_HCSPLT_9
//
// Notes : Register OTG_HS host channel-9 split control register (OTG_HS_HCSPLT9) at the offset 0x224, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_9_REG 0x224

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x224) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt9
//
// Return the value of register OTG_HS_HCSPLT_9
//
// Notes : Register OTG_HS host channel-9 split control register (OTG_HS_HCSPLT9) at the offset 0x224, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x224) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt9
//
// Return the value of register OTG_HS_HCSPLT_9
//
// Notes : Register OTG_HS host channel-9 split control register (OTG_HS_HCSPLT9) at the offset 0x224, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x224) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt9
//
// Return the value of register OTG_HS_HCSPLT_9
//
// Notes : Register OTG_HS host channel-9 split control register (OTG_HS_HCSPLT9) at the offset 0x224, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x224) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt9
//
// Return the value of register OTG_HS_HCSPLT_9
//
// Notes : Register OTG_HS host channel-9 split control register (OTG_HS_HCSPLT9) at the offset 0x224, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x224) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT9
//
// Notes : Register OtgHsHcint9 at offset 0x228
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_9( y) \
     WRITE_REGISTER_ULONG( 0x228 , y)

#define SET_BITS_OTG_HS_HCINT_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_9() \
     READ_REGISTER_ULONG(0x228)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_9_REG 0x228

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x228) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x228) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x228) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x228) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x228) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x228) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x228) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x228) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x228) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x228) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint9
//
// Return the value of register OTG_HS_HCINT_9
//
// Notes : Register OTG_HS host channel-9 interrupt register (OTG_HS_HCINT9) at the offset 0x228, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x228); \
     WRITE_REGISTER_ULONG(0x228, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG(0x228, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x228) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK9
//
// Notes : Register OtgHsHcintmsk9 at offset 0x22C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_9( y) \
     WRITE_REGISTER_ULONG( 0x22C , y)

#define SET_BITS_OTG_HS_HCINTMSK_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_9() \
     READ_REGISTER_ULONG(0x22C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_9_REG 0x22C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x22C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x22C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x22C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x22C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x22C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x22C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x22C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x22C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x22C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x22C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk9
//
// Return the value of register OTG_HS_HCINTMSK_9
//
// Notes : Register OTG_HS host channel-9 interrupt mask register (OTG_HS_HCINTMSK9) at the offset 0x22C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x22C); \
     WRITE_REGISTER_ULONG(0x22C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG(0x22C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x22C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz9
//
// Return the value of register OTG_HS_HCTSIZ9
//
// Notes : Register OtgHsHctsiz9 at offset 0x230
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_9( y) \
     WRITE_REGISTER_ULONG( 0x230 , y)

#define SET_BITS_OTG_HS_HCTSIZ_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x230); \
     WRITE_REGISTER_ULONG( 0x230 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x230); \
     WRITE_REGISTER_ULONG( 0x230 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_9() \
     READ_REGISTER_ULONG(0x230)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz9
//
// Return the value of register OTG_HS_HCTSIZ_9
//
// Notes : Register OTG_HS host channel-9 transfer size register (OTG_HS_HCTSIZ9) at the offset 0x230, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_9_REG 0x230

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x230) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x230); \
     WRITE_REGISTER_ULONG(0x230, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz9
//
// Return the value of register OTG_HS_HCTSIZ_9
//
// Notes : Register OTG_HS host channel-9 transfer size register (OTG_HS_HCTSIZ9) at the offset 0x230, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x230) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x230); \
     WRITE_REGISTER_ULONG(0x230, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz9
//
// Return the value of register OTG_HS_HCTSIZ_9
//
// Notes : Register OTG_HS host channel-9 transfer size register (OTG_HS_HCTSIZ9) at the offset 0x230, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x230) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x230); \
     WRITE_REGISTER_ULONG(0x230, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma9
//
// Return the value of register OTG_HS_HCDMA9
//
// Notes : Register OtgHsHcdma9 at offset 0x234
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_9( y) \
     WRITE_REGISTER_ULONG( 0x234 , y)

#define SET_BITS_OTG_HS_HCDMA_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x234); \
     WRITE_REGISTER_ULONG( 0x234 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x234); \
     WRITE_REGISTER_ULONG( 0x234 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_9() \
     READ_REGISTER_ULONG(0x234)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma9
//
// Return the value of register OTG_HS_HCDMA_9
//
// Notes : Register OTG_HS host channel-9 DMA address register (OTG_HS_HCDMA9) at the offset 0x234, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_9_REG 0x234

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x234) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x234); \
     WRITE_REGISTER_ULONG(0x234, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR10
//
// Notes : Register OtgHsHcchar10 at offset 0x240
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1_0( y) \
     WRITE_REGISTER_ULONG( 0x240 , y)

#define SET_BITS_OTG_HS_HCCHAR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1_0() \
     READ_REGISTER_ULONG(0x240)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_10_REG 0x240

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG(0x240, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x240) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG(0x240, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x240) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG(0x240, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x240) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x240) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x240) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x240) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG(0x240, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x240) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG( 0x240 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x240); \
     WRITE_REGISTER_ULONG(0x240, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x240) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x240) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar10
//
// Return the value of register OTG_HS_HCCHAR_1_0
//
// Notes : Register OTG_HS host channel-10 characteristics register (OTG_HS_HCCHAR10) at the offset 0x240, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x240) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x240); \
     WRITE_REGISTER_ULONG(0x240, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt10
//
// Return the value of register OTG_HS_HCSPLT10
//
// Notes : Register OtgHsHcsplt10 at offset 0x244
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1_0( y) \
     WRITE_REGISTER_ULONG( 0x244 , y)

#define SET_BITS_OTG_HS_HCSPLT_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x244); \
     WRITE_REGISTER_ULONG( 0x244 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x244); \
     WRITE_REGISTER_ULONG( 0x244 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1_0() \
     READ_REGISTER_ULONG(0x244)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt10
//
// Return the value of register OTG_HS_HCSPLT_1_0
//
// Notes : Register OTG_HS host channel-10 split control register (OTG_HS_HCSPLT10) at the offset 0x244, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_10_REG 0x244

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x244); \
     WRITE_REGISTER_ULONG(0x244, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x244); \
     WRITE_REGISTER_ULONG( 0x244 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x244); \
     WRITE_REGISTER_ULONG(0x244, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x244) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt10
//
// Return the value of register OTG_HS_HCSPLT_1_0
//
// Notes : Register OTG_HS host channel-10 split control register (OTG_HS_HCSPLT10) at the offset 0x244, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x244); \
     WRITE_REGISTER_ULONG(0x244, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x244); \
     WRITE_REGISTER_ULONG( 0x244 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x244); \
     WRITE_REGISTER_ULONG(0x244, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x244) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt10
//
// Return the value of register OTG_HS_HCSPLT_1_0
//
// Notes : Register OTG_HS host channel-10 split control register (OTG_HS_HCSPLT10) at the offset 0x244, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x244) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x244); \
     WRITE_REGISTER_ULONG(0x244, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt10
//
// Return the value of register OTG_HS_HCSPLT_1_0
//
// Notes : Register OTG_HS host channel-10 split control register (OTG_HS_HCSPLT10) at the offset 0x244, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x244) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x244); \
     WRITE_REGISTER_ULONG(0x244, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt10
//
// Return the value of register OTG_HS_HCSPLT_1_0
//
// Notes : Register OTG_HS host channel-10 split control register (OTG_HS_HCSPLT10) at the offset 0x244, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x244) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x244); \
     WRITE_REGISTER_ULONG(0x244, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT10
//
// Notes : Register OtgHsHcint10 at offset 0x248
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1_0( y) \
     WRITE_REGISTER_ULONG( 0x248 , y)

#define SET_BITS_OTG_HS_HCINT_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1_0() \
     READ_REGISTER_ULONG(0x248)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_10_REG 0x248

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x248) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x248) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x248) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x248) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x248) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x248) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x248) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x248) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x248) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x248) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint10
//
// Return the value of register OTG_HS_HCINT_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt register (OTG_HS_HCINT10) at the offset 0x248, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x248); \
     WRITE_REGISTER_ULONG(0x248, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG( 0x248 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x248); \
     WRITE_REGISTER_ULONG(0x248, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x248) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK10
//
// Notes : Register OtgHsHcintmsk10 at offset 0x24C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1_0( y) \
     WRITE_REGISTER_ULONG( 0x24C , y)

#define SET_BITS_OTG_HS_HCINTMSK_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1_0() \
     READ_REGISTER_ULONG(0x24C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_10_REG 0x24C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x24C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x24C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x24C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x24C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x24C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x24C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x24C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x24C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x24C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x24C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk10
//
// Return the value of register OTG_HS_HCINTMSK_1_0
//
// Notes : Register OTG_HS host channel-10 interrupt mask register (OTG_HS_HCINTMSK10) at the offset 0x24C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24C); \
     WRITE_REGISTER_ULONG(0x24C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG( 0x24C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24C); \
     WRITE_REGISTER_ULONG(0x24C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x24C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz10
//
// Return the value of register OTG_HS_HCTSIZ10
//
// Notes : Register OtgHsHctsiz10 at offset 0x250
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1_0( y) \
     WRITE_REGISTER_ULONG( 0x250 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x250); \
     WRITE_REGISTER_ULONG( 0x250 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x250); \
     WRITE_REGISTER_ULONG( 0x250 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1_0() \
     READ_REGISTER_ULONG(0x250)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz10
//
// Return the value of register OTG_HS_HCTSIZ_1_0
//
// Notes : Register OTG_HS host channel-10 transfer size register (OTG_HS_HCTSIZ10) at the offset 0x250, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_10_REG 0x250

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x250) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x250); \
     WRITE_REGISTER_ULONG(0x250, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz10
//
// Return the value of register OTG_HS_HCTSIZ_1_0
//
// Notes : Register OTG_HS host channel-10 transfer size register (OTG_HS_HCTSIZ10) at the offset 0x250, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x250) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x250); \
     WRITE_REGISTER_ULONG(0x250, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz10
//
// Return the value of register OTG_HS_HCTSIZ_1_0
//
// Notes : Register OTG_HS host channel-10 transfer size register (OTG_HS_HCTSIZ10) at the offset 0x250, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x250) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x250); \
     WRITE_REGISTER_ULONG(0x250, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma10
//
// Return the value of register OTG_HS_HCDMA10
//
// Notes : Register OtgHsHcdma10 at offset 0x254
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1_0( y) \
     WRITE_REGISTER_ULONG( 0x254 , y)

#define SET_BITS_OTG_HS_HCDMA_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x254); \
     WRITE_REGISTER_ULONG( 0x254 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x254); \
     WRITE_REGISTER_ULONG( 0x254 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1_0() \
     READ_REGISTER_ULONG(0x254)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma10
//
// Return the value of register OTG_HS_HCDMA_1_0
//
// Notes : Register OTG_HS host channel-10 DMA address register (OTG_HS_HCDMA10) at the offset 0x254, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_10_REG 0x254

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x254) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x254); \
     WRITE_REGISTER_ULONG(0x254, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR11
//
// Notes : Register OtgHsHcchar11 at offset 0x260
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1_1( y) \
     WRITE_REGISTER_ULONG( 0x260 , y)

#define SET_BITS_OTG_HS_HCCHAR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1_1() \
     READ_REGISTER_ULONG(0x260)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_11_REG 0x260

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG(0x260, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x260) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG(0x260, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x260) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG(0x260, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x260) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x260) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x260) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x260) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG(0x260, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x260) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG( 0x260 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x260); \
     WRITE_REGISTER_ULONG(0x260, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x260) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x260) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar11
//
// Return the value of register OTG_HS_HCCHAR_1_1
//
// Notes : Register OTG_HS host channel-11 characteristics register (OTG_HS_HCCHAR11) at the offset 0x260, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x260) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x260); \
     WRITE_REGISTER_ULONG(0x260, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt11
//
// Return the value of register OTG_HS_HCSPLT11
//
// Notes : Register OtgHsHcsplt11 at offset 0x264
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1_1( y) \
     WRITE_REGISTER_ULONG( 0x264 , y)

#define SET_BITS_OTG_HS_HCSPLT_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x264); \
     WRITE_REGISTER_ULONG( 0x264 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x264); \
     WRITE_REGISTER_ULONG( 0x264 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1_1() \
     READ_REGISTER_ULONG(0x264)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt11
//
// Return the value of register OTG_HS_HCSPLT_1_1
//
// Notes : Register OTG_HS host channel-11 split control register (OTG_HS_HCSPLT11) at the offset 0x264, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_11_REG 0x264

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x264); \
     WRITE_REGISTER_ULONG(0x264, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x264); \
     WRITE_REGISTER_ULONG( 0x264 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x264); \
     WRITE_REGISTER_ULONG(0x264, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x264) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt11
//
// Return the value of register OTG_HS_HCSPLT_1_1
//
// Notes : Register OTG_HS host channel-11 split control register (OTG_HS_HCSPLT11) at the offset 0x264, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x264); \
     WRITE_REGISTER_ULONG(0x264, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x264); \
     WRITE_REGISTER_ULONG( 0x264 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x264); \
     WRITE_REGISTER_ULONG(0x264, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x264) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt11
//
// Return the value of register OTG_HS_HCSPLT_1_1
//
// Notes : Register OTG_HS host channel-11 split control register (OTG_HS_HCSPLT11) at the offset 0x264, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x264) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x264); \
     WRITE_REGISTER_ULONG(0x264, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt11
//
// Return the value of register OTG_HS_HCSPLT_1_1
//
// Notes : Register OTG_HS host channel-11 split control register (OTG_HS_HCSPLT11) at the offset 0x264, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x264) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x264); \
     WRITE_REGISTER_ULONG(0x264, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt11
//
// Return the value of register OTG_HS_HCSPLT_1_1
//
// Notes : Register OTG_HS host channel-11 split control register (OTG_HS_HCSPLT11) at the offset 0x264, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x264) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x264); \
     WRITE_REGISTER_ULONG(0x264, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT11
//
// Notes : Register OtgHsHcint11 at offset 0x268
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1_1( y) \
     WRITE_REGISTER_ULONG( 0x268 , y)

#define SET_BITS_OTG_HS_HCINT_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1_1() \
     READ_REGISTER_ULONG(0x268)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_11_REG 0x268

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x268) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x268) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x268) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x268) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x268) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x268) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x268) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x268) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x268) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x268) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint11
//
// Return the value of register OTG_HS_HCINT_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt register (OTG_HS_HCINT11) at the offset 0x268, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x268); \
     WRITE_REGISTER_ULONG(0x268, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG( 0x268 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x268); \
     WRITE_REGISTER_ULONG(0x268, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x268) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK11
//
// Notes : Register OtgHsHcintmsk11 at offset 0x26C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1_1( y) \
     WRITE_REGISTER_ULONG( 0x26C , y)

#define SET_BITS_OTG_HS_HCINTMSK_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1_1() \
     READ_REGISTER_ULONG(0x26C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_11_REG 0x26C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x26C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x26C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error mask 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x26C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error mask 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x26C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // response received interrupt mask 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x26C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x26C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x26C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x26C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x26C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x26C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk11
//
// Return the value of register OTG_HS_HCINTMSK_1_1
//
// Notes : Register OTG_HS host channel-11 interrupt mask register (OTG_HS_HCINTMSK11) at the offset 0x26C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x26C); \
     WRITE_REGISTER_ULONG(0x26C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG( 0x26C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x26C); \
     WRITE_REGISTER_ULONG(0x26C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x26C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz11
//
// Return the value of register OTG_HS_HCTSIZ11
//
// Notes : Register OtgHsHctsiz11 at offset 0x270
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1_1( y) \
     WRITE_REGISTER_ULONG( 0x270 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x270); \
     WRITE_REGISTER_ULONG( 0x270 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x270); \
     WRITE_REGISTER_ULONG( 0x270 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1_1() \
     READ_REGISTER_ULONG(0x270)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz11
//
// Return the value of register OTG_HS_HCTSIZ_1_1
//
// Notes : Register OTG_HS host channel-11 transfer size register (OTG_HS_HCTSIZ11) at the offset 0x270, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_11_REG 0x270

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x270) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x270); \
     WRITE_REGISTER_ULONG(0x270, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz11
//
// Return the value of register OTG_HS_HCTSIZ_1_1
//
// Notes : Register OTG_HS host channel-11 transfer size register (OTG_HS_HCTSIZ11) at the offset 0x270, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x270) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x270); \
     WRITE_REGISTER_ULONG(0x270, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz11
//
// Return the value of register OTG_HS_HCTSIZ_1_1
//
// Notes : Register OTG_HS host channel-11 transfer size register (OTG_HS_HCTSIZ11) at the offset 0x270, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x270) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x270); \
     WRITE_REGISTER_ULONG(0x270, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma11
//
// Return the value of register OTG_HS_HCDMA11
//
// Notes : Register OtgHsHcdma11 at offset 0x274
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1_1( y) \
     WRITE_REGISTER_ULONG( 0x274 , y)

#define SET_BITS_OTG_HS_HCDMA_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x274); \
     WRITE_REGISTER_ULONG( 0x274 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x274); \
     WRITE_REGISTER_ULONG( 0x274 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1_1() \
     READ_REGISTER_ULONG(0x274)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma11
//
// Return the value of register OTG_HS_HCDMA_1_1
//
// Notes : Register OTG_HS host channel-11 DMA address register (OTG_HS_HCDMA11) at the offset 0x274, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_11_REG 0x274

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x274) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x274); \
     WRITE_REGISTER_ULONG(0x274, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR12
//
// Notes : Register OtgHsHcchar12 at offset 0x278
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1_2( y) \
     WRITE_REGISTER_ULONG( 0x278 , y)

#define SET_BITS_OTG_HS_HCCHAR_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1_2() \
     READ_REGISTER_ULONG(0x278)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_12_REG 0x278

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG(0x278, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x278) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG(0x278, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x278) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG(0x278, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x278) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x278) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x278) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x278) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG(0x278, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x278) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG( 0x278 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x278); \
     WRITE_REGISTER_ULONG(0x278, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x278) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x278) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar12
//
// Return the value of register OTG_HS_HCCHAR_1_2
//
// Notes : Register OTG_HS host channel-12 characteristics register (OTG_HS_HCCHAR12) at the offset 0x278, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x278) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x278); \
     WRITE_REGISTER_ULONG(0x278, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt12
//
// Return the value of register OTG_HS_HCSPLT12
//
// Notes : Register OtgHsHcsplt12 at offset 0x27C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1_2( y) \
     WRITE_REGISTER_ULONG( 0x27C , y)

#define SET_BITS_OTG_HS_HCSPLT_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x27C); \
     WRITE_REGISTER_ULONG( 0x27C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x27C); \
     WRITE_REGISTER_ULONG( 0x27C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1_2() \
     READ_REGISTER_ULONG(0x27C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt12
//
// Return the value of register OTG_HS_HCSPLT_1_2
//
// Notes : Register OTG_HS host channel-12 split control register (OTG_HS_HCSPLT12) at the offset 0x27C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_12_REG 0x27C

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x27C); \
     WRITE_REGISTER_ULONG(0x27C, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x27C); \
     WRITE_REGISTER_ULONG( 0x27C , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x27C); \
     WRITE_REGISTER_ULONG(0x27C, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x27C) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt12
//
// Return the value of register OTG_HS_HCSPLT_1_2
//
// Notes : Register OTG_HS host channel-12 split control register (OTG_HS_HCSPLT12) at the offset 0x27C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x27C); \
     WRITE_REGISTER_ULONG(0x27C, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x27C); \
     WRITE_REGISTER_ULONG( 0x27C , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x27C); \
     WRITE_REGISTER_ULONG(0x27C, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x27C) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt12
//
// Return the value of register OTG_HS_HCSPLT_1_2
//
// Notes : Register OTG_HS host channel-12 split control register (OTG_HS_HCSPLT12) at the offset 0x27C, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x27C) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x27C); \
     WRITE_REGISTER_ULONG(0x27C, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt12
//
// Return the value of register OTG_HS_HCSPLT_1_2
//
// Notes : Register OTG_HS host channel-12 split control register (OTG_HS_HCSPLT12) at the offset 0x27C, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x27C) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x27C); \
     WRITE_REGISTER_ULONG(0x27C, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt12
//
// Return the value of register OTG_HS_HCSPLT_1_2
//
// Notes : Register OTG_HS host channel-12 split control register (OTG_HS_HCSPLT12) at the offset 0x27C, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x27C) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x27C); \
     WRITE_REGISTER_ULONG(0x27C, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT12
//
// Notes : Register OtgHsHcint12 at offset 0x280
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1_2( y) \
     WRITE_REGISTER_ULONG( 0x280 , y)

#define SET_BITS_OTG_HS_HCINT_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1_2() \
     READ_REGISTER_ULONG(0x280)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_12_REG 0x280

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x280) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x280) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x280) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x280) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x280) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x280) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x280) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x280) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x280) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x280) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint12
//
// Return the value of register OTG_HS_HCINT_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt register (OTG_HS_HCINT12) at the offset 0x280, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG(0x280, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x280) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK12
//
// Notes : Register OtgHsHcintmsk12 at offset 0x284
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1_2( y) \
     WRITE_REGISTER_ULONG( 0x284 , y)

#define SET_BITS_OTG_HS_HCINTMSK_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1_2() \
     READ_REGISTER_ULONG(0x284)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_12_REG 0x284

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x284) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x284) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x284) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x284) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x284) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x284) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x284) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x284) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x284) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x284) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk12
//
// Return the value of register OTG_HS_HCINTMSK_1_2
//
// Notes : Register OTG_HS host channel-12 interrupt mask register (OTG_HS_HCINTMSK12) at the offset 0x284, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG(0x284, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x284) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz12
//
// Return the value of register OTG_HS_HCTSIZ12
//
// Notes : Register OtgHsHctsiz12 at offset 0x288
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1_2( y) \
     WRITE_REGISTER_ULONG( 0x288 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x288); \
     WRITE_REGISTER_ULONG( 0x288 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x288); \
     WRITE_REGISTER_ULONG( 0x288 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1_2() \
     READ_REGISTER_ULONG(0x288)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz12
//
// Return the value of register OTG_HS_HCTSIZ_1_2
//
// Notes : Register OTG_HS host channel-12 transfer size register (OTG_HS_HCTSIZ12) at the offset 0x288, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_12_REG 0x288

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x288) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x288); \
     WRITE_REGISTER_ULONG(0x288, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz12
//
// Return the value of register OTG_HS_HCTSIZ_1_2
//
// Notes : Register OTG_HS host channel-12 transfer size register (OTG_HS_HCTSIZ12) at the offset 0x288, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x288) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x288); \
     WRITE_REGISTER_ULONG(0x288, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz12
//
// Return the value of register OTG_HS_HCTSIZ_1_2
//
// Notes : Register OTG_HS host channel-12 transfer size register (OTG_HS_HCTSIZ12) at the offset 0x288, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x288) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x288); \
     WRITE_REGISTER_ULONG(0x288, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma12
//
// Return the value of register OTG_HS_HCDMA12
//
// Notes : Register OtgHsHcdma12 at offset 0x28C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1_2( y) \
     WRITE_REGISTER_ULONG( 0x28C , y)

#define SET_BITS_OTG_HS_HCDMA_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28C); \
     WRITE_REGISTER_ULONG( 0x28C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28C); \
     WRITE_REGISTER_ULONG( 0x28C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1_2() \
     READ_REGISTER_ULONG(0x28C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma12
//
// Return the value of register OTG_HS_HCDMA_1_2
//
// Notes : Register OTG_HS host channel-12 DMA address register (OTG_HS_HCDMA12) at the offset 0x28C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_12_REG 0x28C

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x28C) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28C); \
     WRITE_REGISTER_ULONG(0x28C, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR13
//
// Notes : Register OtgHsHcchar13 at offset 0x290
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1_3( y) \
     WRITE_REGISTER_ULONG( 0x290 , y)

#define SET_BITS_OTG_HS_HCCHAR_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1_3() \
     READ_REGISTER_ULONG(0x290)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_13_REG 0x290

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG(0x290, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x290) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG(0x290, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x290) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG(0x290, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x290) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x290) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x290) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x290) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG(0x290, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x290) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG( 0x290 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x290); \
     WRITE_REGISTER_ULONG(0x290, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x290) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x290) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar13
//
// Return the value of register OTG_HS_HCCHAR_1_3
//
// Notes : Register OTG_HS host channel-13 characteristics register (OTG_HS_HCCHAR13) at the offset 0x290, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x290) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x290); \
     WRITE_REGISTER_ULONG(0x290, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt13
//
// Return the value of register OTG_HS_HCSPLT13
//
// Notes : Register OtgHsHcsplt13 at offset 0x294
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1_3( y) \
     WRITE_REGISTER_ULONG( 0x294 , y)

#define SET_BITS_OTG_HS_HCSPLT_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x294); \
     WRITE_REGISTER_ULONG( 0x294 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x294); \
     WRITE_REGISTER_ULONG( 0x294 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1_3() \
     READ_REGISTER_ULONG(0x294)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt13
//
// Return the value of register OTG_HS_HCSPLT_1_3
//
// Notes : Register OTG_HS host channel-13 split control register (OTG_HS_HCSPLT13) at the offset 0x294, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_13_REG 0x294

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x294); \
     WRITE_REGISTER_ULONG(0x294, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x294); \
     WRITE_REGISTER_ULONG( 0x294 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x294); \
     WRITE_REGISTER_ULONG(0x294, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x294) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt13
//
// Return the value of register OTG_HS_HCSPLT_1_3
//
// Notes : Register OTG_HS host channel-13 split control register (OTG_HS_HCSPLT13) at the offset 0x294, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x294); \
     WRITE_REGISTER_ULONG(0x294, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x294); \
     WRITE_REGISTER_ULONG( 0x294 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x294); \
     WRITE_REGISTER_ULONG(0x294, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x294) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt13
//
// Return the value of register OTG_HS_HCSPLT_1_3
//
// Notes : Register OTG_HS host channel-13 split control register (OTG_HS_HCSPLT13) at the offset 0x294, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x294) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x294); \
     WRITE_REGISTER_ULONG(0x294, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt13
//
// Return the value of register OTG_HS_HCSPLT_1_3
//
// Notes : Register OTG_HS host channel-13 split control register (OTG_HS_HCSPLT13) at the offset 0x294, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x294) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x294); \
     WRITE_REGISTER_ULONG(0x294, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt13
//
// Return the value of register OTG_HS_HCSPLT_1_3
//
// Notes : Register OTG_HS host channel-13 split control register (OTG_HS_HCSPLT13) at the offset 0x294, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x294) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x294); \
     WRITE_REGISTER_ULONG(0x294, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT13
//
// Notes : Register OtgHsHcint13 at offset 0x298
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1_3( y) \
     WRITE_REGISTER_ULONG( 0x298 , y)

#define SET_BITS_OTG_HS_HCINT_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1_3() \
     READ_REGISTER_ULONG(0x298)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_13_REG 0x298

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x298) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x298) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x298) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x298) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x298) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x298) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x298) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x298) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x298) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x298) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint13
//
// Return the value of register OTG_HS_HCINT_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt register (OTG_HS_HCINT13) at the offset 0x298, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x298); \
     WRITE_REGISTER_ULONG(0x298, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG( 0x298 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x298); \
     WRITE_REGISTER_ULONG(0x298, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x298) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK13
//
// Notes : Register OtgHsHcintmsk13 at offset 0x29C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1_3( y) \
     WRITE_REGISTER_ULONG( 0x29C , y)

#define SET_BITS_OTG_HS_HCINTMSK_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1_3() \
     READ_REGISTER_ULONG(0x29C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_13_REG 0x29C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x29C) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x29C) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x29C) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x29C) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x29C) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x29C) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x29C) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALLM response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x29C) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x29C) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x29C) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk13
//
// Return the value of register OTG_HS_HCINTMSK_1_3
//
// Notes : Register OTG_HS host channel-13 interrupt mask register (OTG_HS_HCINTMSK13) at the offset 0x29C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x29C); \
     WRITE_REGISTER_ULONG(0x29C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG( 0x29C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x29C); \
     WRITE_REGISTER_ULONG(0x29C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x29C) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz13
//
// Return the value of register OTG_HS_HCTSIZ13
//
// Notes : Register OtgHsHctsiz13 at offset 0x2A0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1_3( y) \
     WRITE_REGISTER_ULONG( 0x2A0 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A0); \
     WRITE_REGISTER_ULONG( 0x2A0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A0); \
     WRITE_REGISTER_ULONG( 0x2A0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1_3() \
     READ_REGISTER_ULONG(0x2A0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz13
//
// Return the value of register OTG_HS_HCTSIZ_1_3
//
// Notes : Register OTG_HS host channel-13 transfer size register (OTG_HS_HCTSIZ13) at the offset 0x2A0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_13_REG 0x2A0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x2A0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A0); \
     WRITE_REGISTER_ULONG(0x2A0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz13
//
// Return the value of register OTG_HS_HCTSIZ_1_3
//
// Notes : Register OTG_HS host channel-13 transfer size register (OTG_HS_HCTSIZ13) at the offset 0x2A0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x2A0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A0); \
     WRITE_REGISTER_ULONG(0x2A0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz13
//
// Return the value of register OTG_HS_HCTSIZ_1_3
//
// Notes : Register OTG_HS host channel-13 transfer size register (OTG_HS_HCTSIZ13) at the offset 0x2A0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x2A0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A0); \
     WRITE_REGISTER_ULONG(0x2A0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma13
//
// Return the value of register OTG_HS_HCDMA13
//
// Notes : Register OtgHsHcdma13 at offset 0x2A4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1_3( y) \
     WRITE_REGISTER_ULONG( 0x2A4 , y)

#define SET_BITS_OTG_HS_HCDMA_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A4); \
     WRITE_REGISTER_ULONG( 0x2A4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A4); \
     WRITE_REGISTER_ULONG( 0x2A4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1_3() \
     READ_REGISTER_ULONG(0x2A4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma13
//
// Return the value of register OTG_HS_HCDMA_1_3
//
// Notes : Register OTG_HS host channel-13 DMA address register (OTG_HS_HCDMA13) at the offset 0x2A4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_13_REG 0x2A4

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x2A4) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A4); \
     WRITE_REGISTER_ULONG(0x2A4, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR14
//
// Notes : Register OtgHsHcchar14 at offset 0x2A8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1_4( y) \
     WRITE_REGISTER_ULONG( 0x2A8 , y)

#define SET_BITS_OTG_HS_HCCHAR_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1_4() \
     READ_REGISTER_ULONG(0x2A8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_14_REG 0x2A8

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x2A8) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x2A8) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x2A8) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x2A8) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x2A8) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x2A8) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x2A8) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG( 0x2A8 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x2A8) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x2A8) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar14
//
// Return the value of register OTG_HS_HCCHAR_1_4
//
// Notes : Register OTG_HS host channel-14 characteristics register (OTG_HS_HCCHAR14) at the offset 0x2A8, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x2A8) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2A8); \
     WRITE_REGISTER_ULONG(0x2A8, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt14
//
// Return the value of register OTG_HS_HCSPLT14
//
// Notes : Register OtgHsHcsplt14 at offset 0x2AC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1_4( y) \
     WRITE_REGISTER_ULONG( 0x2AC , y)

#define SET_BITS_OTG_HS_HCSPLT_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2AC); \
     WRITE_REGISTER_ULONG( 0x2AC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2AC); \
     WRITE_REGISTER_ULONG( 0x2AC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1_4() \
     READ_REGISTER_ULONG(0x2AC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt14
//
// Return the value of register OTG_HS_HCSPLT_1_4
//
// Notes : Register OTG_HS host channel-14 split control register (OTG_HS_HCSPLT14) at the offset 0x2AC, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_14_REG 0x2AC

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2AC); \
     WRITE_REGISTER_ULONG( 0x2AC , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x2AC) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt14
//
// Return the value of register OTG_HS_HCSPLT_1_4
//
// Notes : Register OTG_HS host channel-14 split control register (OTG_HS_HCSPLT14) at the offset 0x2AC, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2AC); \
     WRITE_REGISTER_ULONG( 0x2AC , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x2AC) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt14
//
// Return the value of register OTG_HS_HCSPLT_1_4
//
// Notes : Register OTG_HS host channel-14 split control register (OTG_HS_HCSPLT14) at the offset 0x2AC, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x2AC) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt14
//
// Return the value of register OTG_HS_HCSPLT_1_4
//
// Notes : Register OTG_HS host channel-14 split control register (OTG_HS_HCSPLT14) at the offset 0x2AC, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x2AC) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt14
//
// Return the value of register OTG_HS_HCSPLT_1_4
//
// Notes : Register OTG_HS host channel-14 split control register (OTG_HS_HCSPLT14) at the offset 0x2AC, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x2AC) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2AC); \
     WRITE_REGISTER_ULONG(0x2AC, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT14
//
// Notes : Register OtgHsHcint14 at offset 0x2B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1_4( y) \
     WRITE_REGISTER_ULONG( 0x2B0 , y)

#define SET_BITS_OTG_HS_HCINT_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1_4() \
     READ_REGISTER_ULONG(0x2B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_14_REG 0x2B0

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x2B0) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x2B0) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x2B0) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x2B0) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x2B0) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x2B0) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x2B0) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x2B0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x2B0) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x2B0) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint14
//
// Return the value of register OTG_HS_HCINT_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt register (OTG_HS_HCINT14) at the offset 0x2B0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG( 0x2B0 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B0); \
     WRITE_REGISTER_ULONG(0x2B0, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x2B0) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK14
//
// Notes : Register OtgHsHcintmsk14 at offset 0x2B4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1_4( y) \
     WRITE_REGISTER_ULONG( 0x2B4 , y)

#define SET_BITS_OTG_HS_HCINTMSK_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1_4() \
     READ_REGISTER_ULONG(0x2B4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_14_REG 0x2B4

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x2B4) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x2B4) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x2B4) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x2B4) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x2B4) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACKM response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x2B4) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKM response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x2B4) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALLM_MASK 0x8U
#define STALLM_OFFSET 3
#define STALLM_START_BIT 3
#define STALLM_WIDTH 1



#define WRITE_STALLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x2B4) & STALLM_MASK)  >> STALLM_START_BIT)

#define WHEN_STALLM_HIGH() \
     if ( READ_STALLM() )


#define UNLESS_STALLM_HIGH() \
     if (! READ_STALLM() )


#define WAIT_STALLM_LOW() \
    while ( READ_STALLM() );


#define WAIT_STALLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALLM() && (--___t___ > 0)); }


#define WAIT_STALLM_HIGH() \
    while (! READ_STALLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x2B4) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x2B4) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk14
//
// Return the value of register OTG_HS_HCINTMSK_1_4
//
// Notes : Register OTG_HS host channel-14 interrupt mask register (OTG_HS_HCINTMSK14) at the offset 0x2B4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG( 0x2B4 , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B4); \
     WRITE_REGISTER_ULONG(0x2B4, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x2B4) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz14
//
// Return the value of register OTG_HS_HCTSIZ14
//
// Notes : Register OtgHsHctsiz14 at offset 0x2B8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1_4( y) \
     WRITE_REGISTER_ULONG( 0x2B8 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B8); \
     WRITE_REGISTER_ULONG( 0x2B8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2B8); \
     WRITE_REGISTER_ULONG( 0x2B8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1_4() \
     READ_REGISTER_ULONG(0x2B8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz14
//
// Return the value of register OTG_HS_HCTSIZ_1_4
//
// Notes : Register OTG_HS host channel-14 transfer size register (OTG_HS_HCTSIZ14) at the offset 0x2B8, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_14_REG 0x2B8

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x2B8) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B8); \
     WRITE_REGISTER_ULONG(0x2B8, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz14
//
// Return the value of register OTG_HS_HCTSIZ_1_4
//
// Notes : Register OTG_HS host channel-14 transfer size register (OTG_HS_HCTSIZ14) at the offset 0x2B8, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x2B8) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B8); \
     WRITE_REGISTER_ULONG(0x2B8, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz14
//
// Return the value of register OTG_HS_HCTSIZ_1_4
//
// Notes : Register OTG_HS host channel-14 transfer size register (OTG_HS_HCTSIZ14) at the offset 0x2B8, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x2B8) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2B8); \
     WRITE_REGISTER_ULONG(0x2B8, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma14
//
// Return the value of register OTG_HS_HCDMA14
//
// Notes : Register OtgHsHcdma14 at offset 0x2BC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1_4( y) \
     WRITE_REGISTER_ULONG( 0x2BC , y)

#define SET_BITS_OTG_HS_HCDMA_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2BC); \
     WRITE_REGISTER_ULONG( 0x2BC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2BC); \
     WRITE_REGISTER_ULONG( 0x2BC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1_4() \
     READ_REGISTER_ULONG(0x2BC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma14
//
// Return the value of register OTG_HS_HCDMA_1_4
//
// Notes : Register OTG_HS host channel-14 DMA address register (OTG_HS_HCDMA14) at the offset 0x2BC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_14_REG 0x2BC

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x2BC) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2BC); \
     WRITE_REGISTER_ULONG(0x2BC, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR15
//
// Notes : Register OtgHsHcchar15 at offset 0x2C0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCCHAR_1_5( y) \
     WRITE_REGISTER_ULONG( 0x2C0 , y)

#define SET_BITS_OTG_HS_HCCHAR_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCCHAR_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCCHAR_1_5() \
     READ_REGISTER_ULONG(0x2C0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_HS_HCCHAR_15_REG 0x2C0

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x2C0) & CHENA_MASK)  >> CHENA_START_BIT)

#define WHEN_CHENA_HIGH() \
     if ( READ_CHENA() )


#define UNLESS_CHENA_HIGH() \
     if (! READ_CHENA() )


#define WAIT_CHENA_LOW() \
    while ( READ_CHENA() );


#define WAIT_CHENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHENA() && (--___t___ > 0)); }


#define WAIT_CHENA_HIGH() \
    while (! READ_CHENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel disable 
    // 
#define CHDIS_MASK 0x40000000U
#define CHDIS_OFFSET 30
#define CHDIS_START_BIT 30
#define CHDIS_WIDTH 1



#define WRITE_CHDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x2C0) & CHDIS_MASK)  >> CHDIS_START_BIT)

#define WHEN_CHDIS_HIGH() \
     if ( READ_CHDIS() )


#define UNLESS_CHDIS_HIGH() \
     if (! READ_CHDIS() )


#define WAIT_CHDIS_LOW() \
    while ( READ_CHDIS() );


#define WAIT_CHDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHDIS() && (--___t___ > 0)); }


#define WAIT_CHDIS_HIGH() \
    while (! READ_CHDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd frame 
    // 
#define ODDFRM_MASK 0x20000000U
#define ODDFRM_OFFSET 29
#define ODDFRM_START_BIT 29
#define ODDFRM_WIDTH 1



#define WRITE_ODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x2C0) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

#define WHEN_ODDFRM_HIGH() \
     if ( READ_ODDFRM() )


#define UNLESS_ODDFRM_HIGH() \
     if (! READ_ODDFRM() )


#define WAIT_ODDFRM_LOW() \
    while ( READ_ODDFRM() );


#define WAIT_ODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODDFRM() && (--___t___ > 0)); }


#define WAIT_ODDFRM_HIGH() \
    while (! READ_ODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 22:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x1FC00000U
#define DAD_OFFSET 28
#define DAD_START_BIT 22
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x2C0) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi Count (MC) / Error Count (EC) 
    // 
#define MC_MASK 0x300000U
#define MC_OFFSET 21
#define MC_START_BIT 20
#define MC_WIDTH 2



#define READ_MC() \
   ((READ_REGISTER_ULONG(0x2C0) & MC_MASK)  >> MC_START_BIT)

#define WRITE_MC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ MC_MASK) | ((val << MC_START_BIT) & MC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x2C0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low-speed device 
    // 
#define LSDEV_MASK 0x20000U
#define LSDEV_OFFSET 17
#define LSDEV_START_BIT 17
#define LSDEV_WIDTH 1



#define WRITE_LSDEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x2C0) & LSDEV_MASK)  >> LSDEV_START_BIT)

#define WHEN_LSDEV_HIGH() \
     if ( READ_LSDEV() )


#define UNLESS_LSDEV_HIGH() \
     if (! READ_LSDEV() )


#define WAIT_LSDEV_LOW() \
    while ( READ_LSDEV() );


#define WAIT_LSDEV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSDEV() && (--___t___ > 0)); }


#define WAIT_LSDEV_HIGH() \
    while (! READ_LSDEV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint direction 
    // 
#define EPDIR_MASK 0x8000U
#define EPDIR_OFFSET 15
#define EPDIR_START_BIT 15
#define EPDIR_WIDTH 1



#define WRITE_EPDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG( 0x2C0 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x2C0) & EPDIR_MASK)  >> EPDIR_START_BIT)

#define WHEN_EPDIR_HIGH() \
     if ( READ_EPDIR() )


#define UNLESS_EPDIR_HIGH() \
     if (! READ_EPDIR() )


#define WAIT_EPDIR_LOW() \
    while ( READ_EPDIR() );


#define WAIT_EPDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIR() && (--___t___ > 0)); }


#define WAIT_EPDIR_HIGH() \
    while (! READ_EPDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 11:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0x7800U
#define EPNUM_OFFSET 14
#define EPNUM_START_BIT 11
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x2C0) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcchar15
//
// Return the value of register OTG_HS_HCCHAR_1_5
//
// Notes : Register OTG_HS host channel-15 characteristics register (OTG_HS_HCCHAR15) at the offset 0x2C0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x2C0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C0); \
     WRITE_REGISTER_ULONG(0x2C0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt15
//
// Return the value of register OTG_HS_HCSPLT15
//
// Notes : Register OtgHsHcsplt15 at offset 0x2C4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCSPLT_1_5( y) \
     WRITE_REGISTER_ULONG( 0x2C4 , y)

#define SET_BITS_OTG_HS_HCSPLT_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C4); \
     WRITE_REGISTER_ULONG( 0x2C4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCSPLT_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C4); \
     WRITE_REGISTER_ULONG( 0x2C4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCSPLT_1_5() \
     READ_REGISTER_ULONG(0x2C4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt15
//
// Return the value of register OTG_HS_HCSPLT_1_5
//
// Notes : Register OTG_HS host channel-15 split control register (OTG_HS_HCSPLT15) at the offset 0x2C4, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Split enable 
    // 
#define SPLITEN_MASK 0x80000000U
#define SPLITEN_OFFSET 31
#define SPLITEN_START_BIT 31
#define SPLITEN_WIDTH 1


#define OTG_HS_HCSPLT_15_REG 0x2C4

#define WRITE_SPLITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, (OldValue & ~ SPLITEN_MASK) | ((val << SPLITEN_START_BIT) & SPLITEN_MASK )); \
   } 

#define ENABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C4); \
     WRITE_REGISTER_ULONG( 0x2C4 , val |  SPLITEN_MASK ); \
   }

#define DISABLE_SPLITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, val & ~SPLITEN_MASK ); \
   } 

#define READ_SPLITEN() \
   ((READ_REGISTER_ULONG(0x2C4) & SPLITEN_MASK)  >> SPLITEN_START_BIT)

#define WHEN_SPLITEN_HIGH() \
     if ( READ_SPLITEN() )


#define UNLESS_SPLITEN_HIGH() \
     if (! READ_SPLITEN() )


#define WAIT_SPLITEN_LOW() \
    while ( READ_SPLITEN() );


#define WAIT_SPLITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPLITEN() && (--___t___ > 0)); }


#define WAIT_SPLITEN_HIGH() \
    while (! READ_SPLITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt15
//
// Return the value of register OTG_HS_HCSPLT_1_5
//
// Notes : Register OTG_HS host channel-15 split control register (OTG_HS_HCSPLT15) at the offset 0x2C4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Do complete split 
    // 
#define COMPLSPLT_MASK 0x10000U
#define COMPLSPLT_OFFSET 16
#define COMPLSPLT_START_BIT 16
#define COMPLSPLT_WIDTH 1



#define WRITE_COMPLSPLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, (OldValue & ~ COMPLSPLT_MASK) | ((val << COMPLSPLT_START_BIT) & COMPLSPLT_MASK )); \
   } 

#define ENABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C4); \
     WRITE_REGISTER_ULONG( 0x2C4 , val |  COMPLSPLT_MASK ); \
   }

#define DISABLE_COMPLSPLT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, val & ~COMPLSPLT_MASK ); \
   } 

#define READ_COMPLSPLT() \
   ((READ_REGISTER_ULONG(0x2C4) & COMPLSPLT_MASK)  >> COMPLSPLT_START_BIT)

#define WHEN_COMPLSPLT_HIGH() \
     if ( READ_COMPLSPLT() )


#define UNLESS_COMPLSPLT_HIGH() \
     if (! READ_COMPLSPLT() )


#define WAIT_COMPLSPLT_LOW() \
    while ( READ_COMPLSPLT() );


#define WAIT_COMPLSPLT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COMPLSPLT() && (--___t___ > 0)); }


#define WAIT_COMPLSPLT_HIGH() \
    while (! READ_COMPLSPLT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt15
//
// Return the value of register OTG_HS_HCSPLT_1_5
//
// Notes : Register OTG_HS host channel-15 split control register (OTG_HS_HCSPLT15) at the offset 0x2C4, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XACTPOS 
    // 
#define XACTPOS_MASK 0xC000U
#define XACTPOS_OFFSET 15
#define XACTPOS_START_BIT 14
#define XACTPOS_WIDTH 2



#define READ_XACTPOS() \
   ((READ_REGISTER_ULONG(0x2C4) & XACTPOS_MASK)  >> XACTPOS_START_BIT)

#define WRITE_XACTPOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, (OldValue & ~ XACTPOS_MASK) | ((val << XACTPOS_START_BIT) & XACTPOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt15
//
// Return the value of register OTG_HS_HCSPLT_1_5
//
// Notes : Register OTG_HS host channel-15 split control register (OTG_HS_HCSPLT15) at the offset 0x2C4, Bits 7:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hub address 
    // 
#define HUBADDR_MASK 0x3F80U
#define HUBADDR_OFFSET 13
#define HUBADDR_START_BIT 7
#define HUBADDR_WIDTH 7



#define READ_HUBADDR() \
   ((READ_REGISTER_ULONG(0x2C4) & HUBADDR_MASK)  >> HUBADDR_START_BIT)

#define WRITE_HUBADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, (OldValue & ~ HUBADDR_MASK) | ((val << HUBADDR_START_BIT) & HUBADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcsplt15
//
// Return the value of register OTG_HS_HCSPLT_1_5
//
// Notes : Register OTG_HS host channel-15 split control register (OTG_HS_HCSPLT15) at the offset 0x2C4, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port address 
    // 
#define PRTADDR_MASK 0x7FU
#define PRTADDR_OFFSET 6
#define PRTADDR_START_BIT 0
#define PRTADDR_WIDTH 7



#define READ_PRTADDR() \
   ((READ_REGISTER_ULONG(0x2C4) & PRTADDR_MASK)  >> PRTADDR_START_BIT)

#define WRITE_PRTADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C4); \
     WRITE_REGISTER_ULONG(0x2C4, (OldValue & ~ PRTADDR_MASK) | ((val << PRTADDR_START_BIT) & PRTADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT15
//
// Notes : Register OtgHsHcint15 at offset 0x2C8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINT_1_5( y) \
     WRITE_REGISTER_ULONG( 0x2C8 , y)

#define SET_BITS_OTG_HS_HCINT_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINT_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINT_1_5() \
     READ_REGISTER_ULONG(0x2C8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_HS_HCINT_15_REG 0x2C8

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x2C8) & DTERR_MASK)  >> DTERR_START_BIT)

#define WHEN_DTERR_HIGH() \
     if ( READ_DTERR() )


#define UNLESS_DTERR_HIGH() \
     if (! READ_DTERR() )


#define WAIT_DTERR_LOW() \
    while ( READ_DTERR() );


#define WAIT_DTERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERR() && (--___t___ > 0)); }


#define WAIT_DTERR_HIGH() \
    while (! READ_DTERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun 
    // 
#define FRMOR_MASK 0x200U
#define FRMOR_OFFSET 9
#define FRMOR_START_BIT 9
#define FRMOR_WIDTH 1



#define WRITE_FRMOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x2C8) & FRMOR_MASK)  >> FRMOR_START_BIT)

#define WHEN_FRMOR_HIGH() \
     if ( READ_FRMOR() )


#define UNLESS_FRMOR_HIGH() \
     if (! READ_FRMOR() )


#define WAIT_FRMOR_LOW() \
    while ( READ_FRMOR() );


#define WAIT_FRMOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMOR() && (--___t___ > 0)); }


#define WAIT_FRMOR_HIGH() \
    while (! READ_FRMOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERR_MASK 0x100U
#define BBERR_OFFSET 8
#define BBERR_START_BIT 8
#define BBERR_WIDTH 1



#define WRITE_BBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x2C8) & BBERR_MASK)  >> BBERR_START_BIT)

#define WHEN_BBERR_HIGH() \
     if ( READ_BBERR() )


#define UNLESS_BBERR_HIGH() \
     if (! READ_BBERR() )


#define WAIT_BBERR_LOW() \
    while ( READ_BBERR() );


#define WAIT_BBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERR() && (--___t___ > 0)); }


#define WAIT_BBERR_HIGH() \
    while (! READ_BBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERR_MASK 0x80U
#define TXERR_OFFSET 7
#define TXERR_START_BIT 7
#define TXERR_WIDTH 1



#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x2C8) & TXERR_MASK)  >> TXERR_START_BIT)

#define WHEN_TXERR_HIGH() \
     if ( READ_TXERR() )


#define UNLESS_TXERR_HIGH() \
     if (! READ_TXERR() )


#define WAIT_TXERR_LOW() \
    while ( READ_TXERR() );


#define WAIT_TXERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERR() && (--___t___ > 0)); }


#define WAIT_TXERR_HIGH() \
    while (! READ_TXERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x2C8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt 
    // 
#define ACK_MASK 0x20U
#define ACK_OFFSET 5
#define ACK_START_BIT 5
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x2C8) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt 
    // 
#define NAK_MASK 0x10U
#define NAK_OFFSET 4
#define NAK_START_BIT 4
#define NAK_WIDTH 1



#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x2C8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x2C8) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x2C8) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted 
    // 
#define CHH_MASK 0x2U
#define CHH_OFFSET 1
#define CHH_START_BIT 1
#define CHH_WIDTH 1



#define WRITE_CHH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x2C8) & CHH_MASK)  >> CHH_START_BIT)

#define WHEN_CHH_HIGH() \
     if ( READ_CHH() )


#define UNLESS_CHH_HIGH() \
     if (! READ_CHH() )


#define WAIT_CHH_LOW() \
    while ( READ_CHH() );


#define WAIT_CHH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHH() && (--___t___ > 0)); }


#define WAIT_CHH_HIGH() \
    while (! READ_CHH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcint15
//
// Return the value of register OTG_HS_HCINT_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt register (OTG_HS_HCINT15) at the offset 0x2C8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG( 0x2C8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C8); \
     WRITE_REGISTER_ULONG(0x2C8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x2C8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK15
//
// Notes : Register OtgHsHcintmsk15 at offset 0x2CC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCINTMSK_1_5( y) \
     WRITE_REGISTER_ULONG( 0x2CC , y)

#define SET_BITS_OTG_HS_HCINTMSK_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCINTMSK_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCINTMSK_1_5() \
     READ_REGISTER_ULONG(0x2CC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_HS_HCINTMSK_15_REG 0x2CC

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x2CC) & DTERRM_MASK)  >> DTERRM_START_BIT)

#define WHEN_DTERRM_HIGH() \
     if ( READ_DTERRM() )


#define UNLESS_DTERRM_HIGH() \
     if (! READ_DTERRM() )


#define WAIT_DTERRM_LOW() \
    while ( READ_DTERRM() );


#define WAIT_DTERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTERRM() && (--___t___ > 0)); }


#define WAIT_DTERRM_HIGH() \
    while (! READ_DTERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame overrun mask 
    // 
#define FRMORM_MASK 0x200U
#define FRMORM_OFFSET 9
#define FRMORM_START_BIT 9
#define FRMORM_WIDTH 1



#define WRITE_FRMORM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x2CC) & FRMORM_MASK)  >> FRMORM_START_BIT)

#define WHEN_FRMORM_HIGH() \
     if ( READ_FRMORM() )


#define UNLESS_FRMORM_HIGH() \
     if (! READ_FRMORM() )


#define WAIT_FRMORM_LOW() \
    while ( READ_FRMORM() );


#define WAIT_FRMORM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRMORM() && (--___t___ > 0)); }


#define WAIT_FRMORM_HIGH() \
    while (! READ_FRMORM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error 
    // 
#define BBERRM_MASK 0x100U
#define BBERRM_OFFSET 8
#define BBERRM_START_BIT 8
#define BBERRM_WIDTH 1



#define WRITE_BBERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x2CC) & BBERRM_MASK)  >> BBERRM_START_BIT)

#define WHEN_BBERRM_HIGH() \
     if ( READ_BBERRM() )


#define UNLESS_BBERRM_HIGH() \
     if (! READ_BBERRM() )


#define WAIT_BBERRM_LOW() \
    while ( READ_BBERRM() );


#define WAIT_BBERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BBERRM() && (--___t___ > 0)); }


#define WAIT_BBERRM_HIGH() \
    while (! READ_BBERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transaction error 
    // 
#define TXERRM_MASK 0x80U
#define TXERRM_OFFSET 7
#define TXERRM_START_BIT 7
#define TXERRM_WIDTH 1



#define WRITE_TXERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x2CC) & TXERRM_MASK)  >> TXERRM_START_BIT)

#define WHEN_TXERRM_HIGH() \
     if ( READ_TXERRM() )


#define UNLESS_TXERRM_HIGH() \
     if (! READ_TXERRM() )


#define WAIT_TXERRM_LOW() \
    while ( READ_TXERRM() );


#define WAIT_TXERRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRM() && (--___t___ > 0)); }


#define WAIT_TXERRM_HIGH() \
    while (! READ_TXERRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response received interrupt 
    // 
#define NYET_MASK 0x40U
#define NYET_OFFSET 6
#define NYET_START_BIT 6
#define NYET_WIDTH 1



#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x2CC) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK response received/transmitted interrupt mask 
    // 
#define ACKM_MASK 0x20U
#define ACKM_OFFSET 5
#define ACKM_START_BIT 5
#define ACKM_WIDTH 1



#define WRITE_ACKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x2CC) & ACKM_MASK)  >> ACKM_START_BIT)

#define WHEN_ACKM_HIGH() \
     if ( READ_ACKM() )


#define UNLESS_ACKM_HIGH() \
     if (! READ_ACKM() )


#define WAIT_ACKM_LOW() \
    while ( READ_ACKM() );


#define WAIT_ACKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACKM() && (--___t___ > 0)); }


#define WAIT_ACKM_HIGH() \
    while (! READ_ACKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK response received interrupt mask 
    // 
#define NAKM_MASK 0x10U
#define NAKM_OFFSET 4
#define NAKM_START_BIT 4
#define NAKM_WIDTH 1



#define WRITE_NAKM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x2CC) & NAKM_MASK)  >> NAKM_START_BIT)

#define WHEN_NAKM_HIGH() \
     if ( READ_NAKM() )


#define UNLESS_NAKM_HIGH() \
     if (! READ_NAKM() )


#define WAIT_NAKM_LOW() \
    while ( READ_NAKM() );


#define WAIT_NAKM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKM() && (--___t___ > 0)); }


#define WAIT_NAKM_HIGH() \
    while (! READ_NAKM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL response received interrupt mask 
    // 
#define STALL_MASK 0x8U
#define STALL_OFFSET 3
#define STALL_START_BIT 3
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x2CC) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB error 
    // 
#define AHBERR_MASK 0x4U
#define AHBERR_OFFSET 2
#define AHBERR_START_BIT 2
#define AHBERR_WIDTH 1



#define WRITE_AHBERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ AHBERR_MASK) | ((val << AHBERR_START_BIT) & AHBERR_MASK )); \
   } 

#define ENABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  AHBERR_MASK ); \
   }

#define DISABLE_AHBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~AHBERR_MASK ); \
   } 

#define READ_AHBERR() \
   ((READ_REGISTER_ULONG(0x2CC) & AHBERR_MASK)  >> AHBERR_START_BIT)

#define WHEN_AHBERR_HIGH() \
     if ( READ_AHBERR() )


#define UNLESS_AHBERR_HIGH() \
     if (! READ_AHBERR() )


#define WAIT_AHBERR_LOW() \
    while ( READ_AHBERR() );


#define WAIT_AHBERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBERR() && (--___t___ > 0)); }


#define WAIT_AHBERR_HIGH() \
    while (! READ_AHBERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel halted mask 
    // 
#define CHHM_MASK 0x2U
#define CHHM_OFFSET 1
#define CHHM_START_BIT 1
#define CHHM_WIDTH 1



#define WRITE_CHHM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x2CC) & CHHM_MASK)  >> CHHM_START_BIT)

#define WHEN_CHHM_HIGH() \
     if ( READ_CHHM() )


#define UNLESS_CHHM_HIGH() \
     if (! READ_CHHM() )


#define WAIT_CHHM_LOW() \
    while ( READ_CHHM() );


#define WAIT_CHHM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHHM() && (--___t___ > 0)); }


#define WAIT_CHHM_HIGH() \
    while (! READ_CHHM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcintmsk15
//
// Return the value of register OTG_HS_HCINTMSK_1_5
//
// Notes : Register OTG_HS host channel-15 interrupt mask register (OTG_HS_HCINTMSK15) at the offset 0x2CC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG( 0x2CC , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2CC); \
     WRITE_REGISTER_ULONG(0x2CC, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x2CC) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz15
//
// Return the value of register OTG_HS_HCTSIZ15
//
// Notes : Register OtgHsHctsiz15 at offset 0x2D0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCTSIZ_1_5( y) \
     WRITE_REGISTER_ULONG( 0x2D0 , y)

#define SET_BITS_OTG_HS_HCTSIZ_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2D0); \
     WRITE_REGISTER_ULONG( 0x2D0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCTSIZ_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2D0); \
     WRITE_REGISTER_ULONG( 0x2D0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCTSIZ_1_5() \
     READ_REGISTER_ULONG(0x2D0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz15
//
// Return the value of register OTG_HS_HCTSIZ_1_5
//
// Notes : Register OTG_HS host channel-15 transfer size register (OTG_HS_HCTSIZ15) at the offset 0x2D0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_HS_HCTSIZ_15_REG 0x2D0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x2D0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2D0); \
     WRITE_REGISTER_ULONG(0x2D0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz15
//
// Return the value of register OTG_HS_HCTSIZ_1_5
//
// Notes : Register OTG_HS host channel-15 transfer size register (OTG_HS_HCTSIZ15) at the offset 0x2D0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x2D0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2D0); \
     WRITE_REGISTER_ULONG(0x2D0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHctsiz15
//
// Return the value of register OTG_HS_HCTSIZ_1_5
//
// Notes : Register OTG_HS host channel-15 transfer size register (OTG_HS_HCTSIZ15) at the offset 0x2D0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x2D0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2D0); \
     WRITE_REGISTER_ULONG(0x2D0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma15
//
// Return the value of register OTG_HS_HCDMA15
//
// Notes : Register OtgHsHcdma15 at offset 0x2D4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HCDMA_1_5( y) \
     WRITE_REGISTER_ULONG( 0x2D4 , y)

#define SET_BITS_OTG_HS_HCDMA_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2D4); \
     WRITE_REGISTER_ULONG( 0x2D4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HCDMA_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2D4); \
     WRITE_REGISTER_ULONG( 0x2D4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HCDMA_1_5() \
     READ_REGISTER_ULONG(0x2D4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHcdma15
//
// Return the value of register OTG_HS_HCDMA_1_5
//
// Notes : Register OTG_HS host channel-15 DMA address register (OTG_HS_HCDMA15) at the offset 0x2D4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_HCDMA_15_REG 0x2D4

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x2D4) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2D4); \
     WRITE_REGISTER_ULONG(0x2D4, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

