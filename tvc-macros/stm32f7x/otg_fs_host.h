/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_fs_host.h
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
 
#define OTG_FS_HOST 0x50000400
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcfg
//
// Return the value of register OTG_FS_HCFG
//
// Notes : Register OtgFsHcfg at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcfg
//
// Return the value of register OTG_FS_HCFG
//
// Notes : Register OTG_FS host configuration register (OTG_FS_HCFG) (OTG_FS_HCFG) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FS- and LS-only support 
    // 
#define FSLSS_MASK 0x4U
#define FSLSS_OFFSET 2
#define FSLSS_START_BIT 2
#define FSLSS_WIDTH 1


#define OTG_FS_HCFG_REG 0x0

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
// Function : OtgFsHcfg
//
// Return the value of register OTG_FS_HCFG
//
// Notes : Register OTG_FS host configuration register (OTG_FS_HCFG) (OTG_FS_HCFG) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FS/LS PHY clock select 
    // 
#define FSLSPCS_MASK 0x3U
#define FSLSPCS_OFFSET 1
#define FSLSPCS_START_BIT 0
#define FSLSPCS_WIDTH 2



#define READ_FSLSPCS() \
   ((READ_REGISTER_ULONG(0x0) & FSLSPCS_MASK)  >> FSLSPCS_START_BIT)

#define WRITE_FSLSPCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FSLSPCS_MASK) | ((val << FSLSPCS_START_BIT) & FSLSPCS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHfir
//
// Return the value of register OTG_FS_HFIR
//
// Notes : Register OtgFsHfir at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HFIR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_OTG_FS_HFIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HFIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HFIR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHfir
//
// Return the value of register OTG_FS_HFIR
//
// Notes : Register OTG_FS Host frame interval register (OTG_FS_HFIR) at the offset 0x4, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame interval 
    // 
#define FRIVL_MASK 0xFFFFU
#define FRIVL_OFFSET 15
#define FRIVL_START_BIT 0
#define FRIVL_WIDTH 16


#define OTG_FS_HFIR_REG 0x4

#define READ_FRIVL() \
   ((READ_REGISTER_ULONG(0x4) & FRIVL_MASK)  >> FRIVL_START_BIT)

#define WRITE_FRIVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ FRIVL_MASK) | ((val << FRIVL_START_BIT) & FRIVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHfnum
//
// Return the value of register OTG_FS_HFNUM
//
// Notes : Register OtgFsHfnum at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_HFNUM() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHfnum
//
// Return the value of register OTG_FS_HFNUM
//
// Notes : Register OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM) (OTG_FS_HFNUM) at the offset 0x8, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame time remaining 
    // 
#define FTREM_MASK 0xFFFF0000U
#define FTREM_OFFSET 31
#define FTREM_START_BIT 16
#define FTREM_WIDTH 16


#define OTG_FS_HFNUM_REG 0x8

#define READ_FTREM() \
   ((READ_REGISTER_ULONG(0x8) & FTREM_MASK)  >> FTREM_START_BIT)

#define WRITE_FTREM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FTREM_MASK) | ((val << FTREM_START_BIT) & FTREM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHfnum
//
// Return the value of register OTG_FS_HFNUM
//
// Notes : Register OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM) (OTG_FS_HFNUM) at the offset 0x8, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number 
    // 
#define FRNUM_MASK 0xFFFFU
#define FRNUM_OFFSET 15
#define FRNUM_START_BIT 0
#define FRNUM_WIDTH 16



#define READ_FRNUM() \
   ((READ_REGISTER_ULONG(0x8) & FRNUM_MASK)  >> FRNUM_START_BIT)

#define WRITE_FRNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FRNUM_MASK) | ((val << FRNUM_START_BIT) & FRNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxsts
//
// Return the value of register OTG_FS_HPTXSTS
//
// Notes : Register OtgFsHptxsts at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxsts
//
// Return the value of register OTG_FS_HPTXSTS
//
// Notes : Register OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS) (OTG_FS_HPTXSTS) at the offset 0x10, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Top of the periodic transmit request queue 
    // 
#define PTXQTOP_MASK 0xFF000000U
#define PTXQTOP_OFFSET 31
#define PTXQTOP_START_BIT 24
#define PTXQTOP_WIDTH 8


#define OTG_FS_HPTXSTS_REG 0x10

#define READ_PTXQTOP() \
   ((READ_REGISTER_ULONG(0x10) & PTXQTOP_MASK)  >> PTXQTOP_START_BIT)

#define WRITE_PTXQTOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PTXQTOP_MASK) | ((val << PTXQTOP_START_BIT) & PTXQTOP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxsts
//
// Return the value of register OTG_FS_HPTXSTS
//
// Notes : Register OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS) (OTG_FS_HPTXSTS) at the offset 0x10, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic transmit request queue space available 
    // 
#define PTXQSAV_MASK 0xFF0000U
#define PTXQSAV_OFFSET 23
#define PTXQSAV_START_BIT 16
#define PTXQSAV_WIDTH 8



#define READ_PTXQSAV() \
   ((READ_REGISTER_ULONG(0x10) & PTXQSAV_MASK)  >> PTXQSAV_START_BIT)

#define WRITE_PTXQSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PTXQSAV_MASK) | ((val << PTXQSAV_START_BIT) & PTXQSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxsts
//
// Return the value of register OTG_FS_HPTXSTS
//
// Notes : Register OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS) (OTG_FS_HPTXSTS) at the offset 0x10, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic transmit data FIFO space available 
    // 
#define PTXFSAVL_MASK 0xFFFFU
#define PTXFSAVL_OFFSET 15
#define PTXFSAVL_START_BIT 0
#define PTXFSAVL_WIDTH 16



#define READ_PTXFSAVL() \
   ((READ_REGISTER_ULONG(0x10) & PTXFSAVL_MASK)  >> PTXFSAVL_START_BIT)

#define WRITE_PTXFSAVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PTXFSAVL_MASK) | ((val << PTXFSAVL_START_BIT) & PTXFSAVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHaint
//
// Return the value of register OTG_FS_HAINT
//
// Notes : Register OtgFsHaint at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_HAINT() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHaint
//
// Return the value of register OTG_FS_HAINT
//
// Notes : Register OTG_FS Host all channels interrupt register (OTG_FS_HAINT) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel interrupts 
    // 
#define HAINT_MASK 0xFFFFU
#define HAINT_OFFSET 15
#define HAINT_START_BIT 0
#define HAINT_WIDTH 16


#define OTG_FS_HAINT_REG 0x14

#define READ_HAINT() \
   ((READ_REGISTER_ULONG(0x14) & HAINT_MASK)  >> HAINT_START_BIT)

#define WRITE_HAINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ HAINT_MASK) | ((val << HAINT_START_BIT) & HAINT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHaintmsk
//
// Return the value of register OTG_FS_HAINTMSK
//
// Notes : Register OtgFsHaintmsk at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HAINTMSK( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_OTG_FS_HAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HAINTMSK() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHaintmsk
//
// Return the value of register OTG_FS_HAINTMSK
//
// Notes : Register OTG_FS host all channels interrupt mask register (OTG_FS_HAINTMSK) at the offset 0x18, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel interrupt mask 
    // 
#define HAINTM_MASK 0xFFFFU
#define HAINTM_OFFSET 15
#define HAINTM_START_BIT 0
#define HAINTM_WIDTH 16


#define OTG_FS_HAINTMSK_REG 0x18

#define READ_HAINTM() \
   ((READ_REGISTER_ULONG(0x18) & HAINTM_MASK)  >> HAINTM_START_BIT)

#define WRITE_HAINTM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ HAINTM_MASK) | ((val << HAINTM_START_BIT) & HAINTM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OtgFsHprt at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 17:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port speed 
    // 
#define PSPD_MASK 0x60000U
#define PSPD_OFFSET 18
#define PSPD_START_BIT 17
#define PSPD_WIDTH 2


#define OTG_FS_HPRT_REG 0x40

#define READ_PSPD() \
   ((READ_REGISTER_ULONG(0x40) & PSPD_MASK)  >> PSPD_START_BIT)

#define WRITE_PSPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PSPD_MASK) | ((val << PSPD_START_BIT) & PSPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 13:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port test control 
    // 
#define PTCTL_MASK 0x1E000U
#define PTCTL_OFFSET 16
#define PTCTL_START_BIT 13
#define PTCTL_WIDTH 4



#define READ_PTCTL() \
   ((READ_REGISTER_ULONG(0x40) & PTCTL_MASK)  >> PTCTL_START_BIT)

#define WRITE_PTCTL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PTCTL_MASK) | ((val << PTCTL_START_BIT) & PTCTL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port power 
    // 
#define PPWR_MASK 0x1000U
#define PPWR_OFFSET 12
#define PPWR_START_BIT 12
#define PPWR_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port line status 
    // 
#define PLSTS_MASK 0xC00U
#define PLSTS_OFFSET 11
#define PLSTS_START_BIT 10
#define PLSTS_WIDTH 2



#define READ_PLSTS() \
   ((READ_REGISTER_ULONG(0x40) & PLSTS_MASK)  >> PLSTS_START_BIT)

#define WRITE_PLSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PLSTS_MASK) | ((val << PLSTS_START_BIT) & PLSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port reset 
    // 
#define PRST_MASK 0x100U
#define PRST_OFFSET 8
#define PRST_START_BIT 8
#define PRST_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port suspend 
    // 
#define PSUSP_MASK 0x80U
#define PSUSP_OFFSET 7
#define PSUSP_START_BIT 7
#define PSUSP_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port resume 
    // 
#define PRES_MASK 0x40U
#define PRES_OFFSET 6
#define PRES_START_BIT 6
#define PRES_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port overcurrent change 
    // 
#define POCCHNG_MASK 0x20U
#define POCCHNG_OFFSET 5
#define POCCHNG_START_BIT 5
#define POCCHNG_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port overcurrent active 
    // 
#define POCA_MASK 0x10U
#define POCA_OFFSET 4
#define POCA_START_BIT 4
#define POCA_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port enable/disable change 
    // 
#define PENCHNG_MASK 0x8U
#define PENCHNG_OFFSET 3
#define PENCHNG_START_BIT 3
#define PENCHNG_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port enable 
    // 
#define PENA_MASK 0x4U
#define PENA_OFFSET 2
#define PENA_START_BIT 2
#define PENA_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port connect detected 
    // 
#define PCDET_MASK 0x2U
#define PCDET_OFFSET 1
#define PCDET_START_BIT 1
#define PCDET_WIDTH 1



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
// Function : OtgFsHprt
//
// Return the value of register OTG_FS_HPRT
//
// Notes : Register OTG_FS host port control and status register (OTG_FS_HPRT) (OTG_FS_HPRT) at the offset 0x40, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port connect status 
    // 
#define PCSTS_MASK 0x1U
#define PCSTS_OFFSET 0
#define PCSTS_START_BIT 0
#define PCSTS_WIDTH 1



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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR0
//
// Notes : Register OtgFsHcchar0 at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_0( y) \
     WRITE_REGISTER_ULONG( 0x100 , y)

#define SET_BITS_OTG_FS_HCCHAR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_0() \
     READ_REGISTER_ULONG(0x100)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_0_REG 0x100

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 30:30

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 29:29

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 22:28

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x100) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 18:19

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 17:17

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 15:15

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 11:14

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
// Function : OtgFsHcchar0
//
// Return the value of register OTG_FS_HCCHAR_0
//
// Notes : Register OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) (OTG_FS_HCCHAR0) at the offset 0x100, Bits 0:10

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT0
//
// Notes : Register OtgFsHcint0 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_0( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_OTG_FS_HCINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_0() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_0_REG 0x108

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 9:9

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 8:8

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 7:7

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 5:5

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 4:4

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 3:3

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 1:1

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
// Function : OtgFsHcint0
//
// Return the value of register OTG_FS_HCINT_0
//
// Notes : Register OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) (OTG_FS_HCINT0) at the offset 0x108, Bits 0:0

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK0
//
// Notes : Register OtgFsHcintmsk0 at offset 0x10C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_0( y) \
     WRITE_REGISTER_ULONG( 0x10C , y)

#define SET_BITS_OTG_FS_HCINTMSK_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_0() \
     READ_REGISTER_ULONG(0x10C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_0_REG 0x10C

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 9:9

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 8:8

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 7:7

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 6:6

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 5:5

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 4:4

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 3:3

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 1:1

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
// Function : OtgFsHcintmsk0
//
// Return the value of register OTG_FS_HCINTMSK_0
//
// Notes : Register OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) (OTG_FS_HCINTMSK0) at the offset 0x10C, Bits 0:0

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
// Function : OtgFsHctsiz0
//
// Return the value of register OTG_FS_HCTSIZ0
//
// Notes : Register OtgFsHctsiz0 at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_0( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_OTG_FS_HCTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_0() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz0
//
// Return the value of register OTG_FS_HCTSIZ_0
//
// Notes : Register OTG_FS host channel-0 transfer size register (OTG_FS_HCTSIZ0) at the offset 0x110, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_0_REG 0x110

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x110) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz0
//
// Return the value of register OTG_FS_HCTSIZ_0
//
// Notes : Register OTG_FS host channel-0 transfer size register (OTG_FS_HCTSIZ0) at the offset 0x110, Bits 19:28

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
// Function : OtgFsHctsiz0
//
// Return the value of register OTG_FS_HCTSIZ_0
//
// Notes : Register OTG_FS host channel-0 transfer size register (OTG_FS_HCTSIZ0) at the offset 0x110, Bits 0:18

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR1
//
// Notes : Register OtgFsHcchar1 at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_1( y) \
     WRITE_REGISTER_ULONG( 0x120 , y)

#define SET_BITS_OTG_FS_HCCHAR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_1() \
     READ_REGISTER_ULONG(0x120)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_1_REG 0x120

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 30:30

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 29:29

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 22:28

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x120) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 18:19

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 17:17

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 15:15

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 11:14

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
// Function : OtgFsHcchar1
//
// Return the value of register OTG_FS_HCCHAR_1
//
// Notes : Register OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) (OTG_FS_HCCHAR1) at the offset 0x120, Bits 0:10

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT1
//
// Notes : Register OtgFsHcint1 at offset 0x128
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_1( y) \
     WRITE_REGISTER_ULONG( 0x128 , y)

#define SET_BITS_OTG_FS_HCINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_1() \
     READ_REGISTER_ULONG(0x128)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_1_REG 0x128

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 9:9

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 8:8

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 7:7

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 5:5

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 4:4

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 3:3

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 1:1

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
// Function : OtgFsHcint1
//
// Return the value of register OTG_FS_HCINT_1
//
// Notes : Register OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) (OTG_FS_HCINT1) at the offset 0x128, Bits 0:0

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK1
//
// Notes : Register OtgFsHcintmsk1 at offset 0x12C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_1( y) \
     WRITE_REGISTER_ULONG( 0x12C , y)

#define SET_BITS_OTG_FS_HCINTMSK_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_1() \
     READ_REGISTER_ULONG(0x12C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_1_REG 0x12C

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 9:9

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 8:8

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 7:7

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 6:6

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 5:5

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 4:4

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 3:3

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 1:1

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
// Function : OtgFsHcintmsk1
//
// Return the value of register OTG_FS_HCINTMSK_1
//
// Notes : Register OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) (OTG_FS_HCINTMSK1) at the offset 0x12C, Bits 0:0

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
// Function : OtgFsHctsiz1
//
// Return the value of register OTG_FS_HCTSIZ1
//
// Notes : Register OtgFsHctsiz1 at offset 0x130
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_1( y) \
     WRITE_REGISTER_ULONG( 0x130 , y)

#define SET_BITS_OTG_FS_HCTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_1() \
     READ_REGISTER_ULONG(0x130)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz1
//
// Return the value of register OTG_FS_HCTSIZ_1
//
// Notes : Register OTG_FS host channel-1 transfer size register (OTG_FS_HCTSIZ1) at the offset 0x130, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_1_REG 0x130

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x130) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz1
//
// Return the value of register OTG_FS_HCTSIZ_1
//
// Notes : Register OTG_FS host channel-1 transfer size register (OTG_FS_HCTSIZ1) at the offset 0x130, Bits 19:28

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
// Function : OtgFsHctsiz1
//
// Return the value of register OTG_FS_HCTSIZ_1
//
// Notes : Register OTG_FS host channel-1 transfer size register (OTG_FS_HCTSIZ1) at the offset 0x130, Bits 0:18

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR2
//
// Notes : Register OtgFsHcchar2 at offset 0x140
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_2( y) \
     WRITE_REGISTER_ULONG( 0x140 , y)

#define SET_BITS_OTG_FS_HCCHAR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_2() \
     READ_REGISTER_ULONG(0x140)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_2_REG 0x140

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 30:30

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 29:29

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 22:28

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x140) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 18:19

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 17:17

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 15:15

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 11:14

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
// Function : OtgFsHcchar2
//
// Return the value of register OTG_FS_HCCHAR_2
//
// Notes : Register OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) (OTG_FS_HCCHAR2) at the offset 0x140, Bits 0:10

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT2
//
// Notes : Register OtgFsHcint2 at offset 0x148
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_2( y) \
     WRITE_REGISTER_ULONG( 0x148 , y)

#define SET_BITS_OTG_FS_HCINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_2() \
     READ_REGISTER_ULONG(0x148)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_2_REG 0x148

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 9:9

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 8:8

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 7:7

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 5:5

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 4:4

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 3:3

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 1:1

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
// Function : OtgFsHcint2
//
// Return the value of register OTG_FS_HCINT_2
//
// Notes : Register OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) (OTG_FS_HCINT2) at the offset 0x148, Bits 0:0

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK2
//
// Notes : Register OtgFsHcintmsk2 at offset 0x14C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_2( y) \
     WRITE_REGISTER_ULONG( 0x14C , y)

#define SET_BITS_OTG_FS_HCINTMSK_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_2() \
     READ_REGISTER_ULONG(0x14C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_2_REG 0x14C

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 9:9

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 8:8

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 7:7

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 6:6

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 5:5

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 4:4

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 3:3

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 1:1

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
// Function : OtgFsHcintmsk2
//
// Return the value of register OTG_FS_HCINTMSK_2
//
// Notes : Register OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) (OTG_FS_HCINTMSK2) at the offset 0x14C, Bits 0:0

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
// Function : OtgFsHctsiz2
//
// Return the value of register OTG_FS_HCTSIZ2
//
// Notes : Register OtgFsHctsiz2 at offset 0x150
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_2( y) \
     WRITE_REGISTER_ULONG( 0x150 , y)

#define SET_BITS_OTG_FS_HCTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_2() \
     READ_REGISTER_ULONG(0x150)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz2
//
// Return the value of register OTG_FS_HCTSIZ_2
//
// Notes : Register OTG_FS host channel-2 transfer size register (OTG_FS_HCTSIZ2) at the offset 0x150, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_2_REG 0x150

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x150) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz2
//
// Return the value of register OTG_FS_HCTSIZ_2
//
// Notes : Register OTG_FS host channel-2 transfer size register (OTG_FS_HCTSIZ2) at the offset 0x150, Bits 19:28

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
// Function : OtgFsHctsiz2
//
// Return the value of register OTG_FS_HCTSIZ_2
//
// Notes : Register OTG_FS host channel-2 transfer size register (OTG_FS_HCTSIZ2) at the offset 0x150, Bits 0:18

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR3
//
// Notes : Register OtgFsHcchar3 at offset 0x160
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_3( y) \
     WRITE_REGISTER_ULONG( 0x160 , y)

#define SET_BITS_OTG_FS_HCCHAR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_3() \
     READ_REGISTER_ULONG(0x160)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_3_REG 0x160

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 30:30

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 29:29

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 22:28

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x160) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 18:19

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 17:17

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 15:15

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 11:14

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
// Function : OtgFsHcchar3
//
// Return the value of register OTG_FS_HCCHAR_3
//
// Notes : Register OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) (OTG_FS_HCCHAR3) at the offset 0x160, Bits 0:10

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT3
//
// Notes : Register OtgFsHcint3 at offset 0x168
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_3( y) \
     WRITE_REGISTER_ULONG( 0x168 , y)

#define SET_BITS_OTG_FS_HCINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_3() \
     READ_REGISTER_ULONG(0x168)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_3_REG 0x168

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 9:9

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 8:8

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 7:7

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 5:5

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 4:4

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 3:3

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 1:1

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
// Function : OtgFsHcint3
//
// Return the value of register OTG_FS_HCINT_3
//
// Notes : Register OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) (OTG_FS_HCINT3) at the offset 0x168, Bits 0:0

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK3
//
// Notes : Register OtgFsHcintmsk3 at offset 0x16C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_3( y) \
     WRITE_REGISTER_ULONG( 0x16C , y)

#define SET_BITS_OTG_FS_HCINTMSK_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x16C); \
     WRITE_REGISTER_ULONG( 0x16C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_3() \
     READ_REGISTER_ULONG(0x16C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_3_REG 0x16C

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 9:9

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 8:8

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 7:7

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 6:6

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 5:5

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 4:4

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 3:3

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 1:1

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
// Function : OtgFsHcintmsk3
//
// Return the value of register OTG_FS_HCINTMSK_3
//
// Notes : Register OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) (OTG_FS_HCINTMSK3) at the offset 0x16C, Bits 0:0

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
// Function : OtgFsHctsiz3
//
// Return the value of register OTG_FS_HCTSIZ3
//
// Notes : Register OtgFsHctsiz3 at offset 0x170
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_3( y) \
     WRITE_REGISTER_ULONG( 0x170 , y)

#define SET_BITS_OTG_FS_HCTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_3() \
     READ_REGISTER_ULONG(0x170)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz3
//
// Return the value of register OTG_FS_HCTSIZ_3
//
// Notes : Register OTG_FS host channel-3 transfer size register (OTG_FS_HCTSIZ3) at the offset 0x170, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_3_REG 0x170

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x170) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz3
//
// Return the value of register OTG_FS_HCTSIZ_3
//
// Notes : Register OTG_FS host channel-3 transfer size register (OTG_FS_HCTSIZ3) at the offset 0x170, Bits 19:28

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
// Function : OtgFsHctsiz3
//
// Return the value of register OTG_FS_HCTSIZ_3
//
// Notes : Register OTG_FS host channel-3 transfer size register (OTG_FS_HCTSIZ3) at the offset 0x170, Bits 0:18

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR4
//
// Notes : Register OtgFsHcchar4 at offset 0x180
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_4( y) \
     WRITE_REGISTER_ULONG( 0x180 , y)

#define SET_BITS_OTG_FS_HCCHAR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_4() \
     READ_REGISTER_ULONG(0x180)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_4_REG 0x180

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 30:30

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 29:29

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 22:28

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x180) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 18:19

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 17:17

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 15:15

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 11:14

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
// Function : OtgFsHcchar4
//
// Return the value of register OTG_FS_HCCHAR_4
//
// Notes : Register OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) (OTG_FS_HCCHAR4) at the offset 0x180, Bits 0:10

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT4
//
// Notes : Register OtgFsHcint4 at offset 0x188
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_4( y) \
     WRITE_REGISTER_ULONG( 0x188 , y)

#define SET_BITS_OTG_FS_HCINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_4() \
     READ_REGISTER_ULONG(0x188)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_4_REG 0x188

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 9:9

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 8:8

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 7:7

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 5:5

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 4:4

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 3:3

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 1:1

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
// Function : OtgFsHcint4
//
// Return the value of register OTG_FS_HCINT_4
//
// Notes : Register OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) (OTG_FS_HCINT4) at the offset 0x188, Bits 0:0

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK4
//
// Notes : Register OtgFsHcintmsk4 at offset 0x18C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_4( y) \
     WRITE_REGISTER_ULONG( 0x18C , y)

#define SET_BITS_OTG_FS_HCINTMSK_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18C); \
     WRITE_REGISTER_ULONG( 0x18C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_4() \
     READ_REGISTER_ULONG(0x18C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_4_REG 0x18C

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 9:9

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 8:8

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 7:7

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 6:6

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 5:5

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 4:4

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 3:3

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 1:1

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
// Function : OtgFsHcintmsk4
//
// Return the value of register OTG_FS_HCINTMSK_4
//
// Notes : Register OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) (OTG_FS_HCINTMSK4) at the offset 0x18C, Bits 0:0

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
// Function : OtgFsHctsiz4
//
// Return the value of register OTG_FS_HCTSIZ4
//
// Notes : Register OtgFsHctsiz4 at offset 0x190
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_4( y) \
     WRITE_REGISTER_ULONG( 0x190 , y)

#define SET_BITS_OTG_FS_HCTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_4() \
     READ_REGISTER_ULONG(0x190)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz4
//
// Return the value of register OTG_FS_HCTSIZ_4
//
// Notes : Register OTG_FS host channel-x transfer size register (OTG_FS_HCTSIZ4) at the offset 0x190, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_4_REG 0x190

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x190) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz4
//
// Return the value of register OTG_FS_HCTSIZ_4
//
// Notes : Register OTG_FS host channel-x transfer size register (OTG_FS_HCTSIZ4) at the offset 0x190, Bits 19:28

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
// Function : OtgFsHctsiz4
//
// Return the value of register OTG_FS_HCTSIZ_4
//
// Notes : Register OTG_FS host channel-x transfer size register (OTG_FS_HCTSIZ4) at the offset 0x190, Bits 0:18

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR5
//
// Notes : Register OtgFsHcchar5 at offset 0x1A0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_5( y) \
     WRITE_REGISTER_ULONG( 0x1A0 , y)

#define SET_BITS_OTG_FS_HCCHAR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_5() \
     READ_REGISTER_ULONG(0x1A0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_5_REG 0x1A0

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 30:30

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 29:29

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 22:28

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1A0) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 18:19

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 17:17

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 15:15

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 11:14

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
// Function : OtgFsHcchar5
//
// Return the value of register OTG_FS_HCCHAR_5
//
// Notes : Register OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) (OTG_FS_HCCHAR5) at the offset 0x1A0, Bits 0:10

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT5
//
// Notes : Register OtgFsHcint5 at offset 0x1A8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_5( y) \
     WRITE_REGISTER_ULONG( 0x1A8 , y)

#define SET_BITS_OTG_FS_HCINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_5() \
     READ_REGISTER_ULONG(0x1A8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_5_REG 0x1A8

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 9:9

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 8:8

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 7:7

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 5:5

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 4:4

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 3:3

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 1:1

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
// Function : OtgFsHcint5
//
// Return the value of register OTG_FS_HCINT_5
//
// Notes : Register OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) (OTG_FS_HCINT5) at the offset 0x1A8, Bits 0:0

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK5
//
// Notes : Register OtgFsHcintmsk5 at offset 0x1AC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_5( y) \
     WRITE_REGISTER_ULONG( 0x1AC , y)

#define SET_BITS_OTG_FS_HCINTMSK_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_5() \
     READ_REGISTER_ULONG(0x1AC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_5_REG 0x1AC

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 9:9

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 8:8

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 7:7

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 6:6

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 5:5

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 4:4

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 3:3

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 1:1

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
// Function : OtgFsHcintmsk5
//
// Return the value of register OTG_FS_HCINTMSK_5
//
// Notes : Register OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) (OTG_FS_HCINTMSK5) at the offset 0x1AC, Bits 0:0

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
// Function : OtgFsHctsiz5
//
// Return the value of register OTG_FS_HCTSIZ5
//
// Notes : Register OtgFsHctsiz5 at offset 0x1B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_5( y) \
     WRITE_REGISTER_ULONG( 0x1B0 , y)

#define SET_BITS_OTG_FS_HCTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_5() \
     READ_REGISTER_ULONG(0x1B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz5
//
// Return the value of register OTG_FS_HCTSIZ_5
//
// Notes : Register OTG_FS host channel-5 transfer size register (OTG_FS_HCTSIZ5) at the offset 0x1B0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_5_REG 0x1B0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1B0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz5
//
// Return the value of register OTG_FS_HCTSIZ_5
//
// Notes : Register OTG_FS host channel-5 transfer size register (OTG_FS_HCTSIZ5) at the offset 0x1B0, Bits 19:28

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
// Function : OtgFsHctsiz5
//
// Return the value of register OTG_FS_HCTSIZ_5
//
// Notes : Register OTG_FS host channel-5 transfer size register (OTG_FS_HCTSIZ5) at the offset 0x1B0, Bits 0:18

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR6
//
// Notes : Register OtgFsHcchar6 at offset 0x1C0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_6( y) \
     WRITE_REGISTER_ULONG( 0x1C0 , y)

#define SET_BITS_OTG_FS_HCCHAR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_6() \
     READ_REGISTER_ULONG(0x1C0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_6_REG 0x1C0

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 30:30

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 29:29

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 22:28

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1C0) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 18:19

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 17:17

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 15:15

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 11:14

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
// Function : OtgFsHcchar6
//
// Return the value of register OTG_FS_HCCHAR_6
//
// Notes : Register OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) (OTG_FS_HCCHAR6) at the offset 0x1C0, Bits 0:10

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT6
//
// Notes : Register OtgFsHcint6 at offset 0x1C8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_6( y) \
     WRITE_REGISTER_ULONG( 0x1C8 , y)

#define SET_BITS_OTG_FS_HCINT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_6() \
     READ_REGISTER_ULONG(0x1C8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_6_REG 0x1C8

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 9:9

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 8:8

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 7:7

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 5:5

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 4:4

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 3:3

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 1:1

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
// Function : OtgFsHcint6
//
// Return the value of register OTG_FS_HCINT_6
//
// Notes : Register OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) (OTG_FS_HCINT6) at the offset 0x1C8, Bits 0:0

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK6
//
// Notes : Register OtgFsHcintmsk6 at offset 0x1CC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_6( y) \
     WRITE_REGISTER_ULONG( 0x1CC , y)

#define SET_BITS_OTG_FS_HCINTMSK_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1CC); \
     WRITE_REGISTER_ULONG( 0x1CC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_6() \
     READ_REGISTER_ULONG(0x1CC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_6_REG 0x1CC

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 9:9

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 8:8

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 7:7

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 6:6

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 5:5

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 4:4

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 3:3

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 1:1

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
// Function : OtgFsHcintmsk6
//
// Return the value of register OTG_FS_HCINTMSK_6
//
// Notes : Register OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) (OTG_FS_HCINTMSK6) at the offset 0x1CC, Bits 0:0

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
// Function : OtgFsHctsiz6
//
// Return the value of register OTG_FS_HCTSIZ6
//
// Notes : Register OtgFsHctsiz6 at offset 0x1D0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_6( y) \
     WRITE_REGISTER_ULONG( 0x1D0 , y)

#define SET_BITS_OTG_FS_HCTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1D0); \
     WRITE_REGISTER_ULONG( 0x1D0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1D0); \
     WRITE_REGISTER_ULONG( 0x1D0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_6() \
     READ_REGISTER_ULONG(0x1D0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz6
//
// Return the value of register OTG_FS_HCTSIZ_6
//
// Notes : Register OTG_FS host channel-6 transfer size register (OTG_FS_HCTSIZ6) at the offset 0x1D0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_6_REG 0x1D0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1D0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1D0); \
     WRITE_REGISTER_ULONG(0x1D0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz6
//
// Return the value of register OTG_FS_HCTSIZ_6
//
// Notes : Register OTG_FS host channel-6 transfer size register (OTG_FS_HCTSIZ6) at the offset 0x1D0, Bits 19:28

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
// Function : OtgFsHctsiz6
//
// Return the value of register OTG_FS_HCTSIZ_6
//
// Notes : Register OTG_FS host channel-6 transfer size register (OTG_FS_HCTSIZ6) at the offset 0x1D0, Bits 0:18

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR7
//
// Notes : Register OtgFsHcchar7 at offset 0x1E0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_7( y) \
     WRITE_REGISTER_ULONG( 0x1E0 , y)

#define SET_BITS_OTG_FS_HCCHAR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_7() \
     READ_REGISTER_ULONG(0x1E0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_7_REG 0x1E0

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 30:30

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 29:29

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 22:28

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1E0) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 18:19

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 17:17

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 15:15

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 11:14

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
// Function : OtgFsHcchar7
//
// Return the value of register OTG_FS_HCCHAR_7
//
// Notes : Register OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) (OTG_FS_HCCHAR7) at the offset 0x1E0, Bits 0:10

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT7
//
// Notes : Register OtgFsHcint7 at offset 0x1E8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_7( y) \
     WRITE_REGISTER_ULONG( 0x1E8 , y)

#define SET_BITS_OTG_FS_HCINT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_7() \
     READ_REGISTER_ULONG(0x1E8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_7_REG 0x1E8

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 9:9

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 8:8

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 7:7

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 5:5

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 4:4

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 3:3

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 1:1

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
// Function : OtgFsHcint7
//
// Return the value of register OTG_FS_HCINT_7
//
// Notes : Register OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) (OTG_FS_HCINT7) at the offset 0x1E8, Bits 0:0

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK7
//
// Notes : Register OtgFsHcintmsk7 at offset 0x1EC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_7( y) \
     WRITE_REGISTER_ULONG( 0x1EC , y)

#define SET_BITS_OTG_FS_HCINTMSK_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1EC); \
     WRITE_REGISTER_ULONG( 0x1EC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_7() \
     READ_REGISTER_ULONG(0x1EC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_7_REG 0x1EC

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 9:9

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 8:8

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 7:7

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 6:6

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 5:5

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 4:4

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 3:3

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 1:1

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
// Function : OtgFsHcintmsk7
//
// Return the value of register OTG_FS_HCINTMSK_7
//
// Notes : Register OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) (OTG_FS_HCINTMSK7) at the offset 0x1EC, Bits 0:0

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
// Function : OtgFsHctsiz7
//
// Return the value of register OTG_FS_HCTSIZ7
//
// Notes : Register OtgFsHctsiz7 at offset 0x1F0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_7( y) \
     WRITE_REGISTER_ULONG( 0x1F0 , y)

#define SET_BITS_OTG_FS_HCTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F0); \
     WRITE_REGISTER_ULONG( 0x1F0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F0); \
     WRITE_REGISTER_ULONG( 0x1F0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_7() \
     READ_REGISTER_ULONG(0x1F0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz7
//
// Return the value of register OTG_FS_HCTSIZ_7
//
// Notes : Register OTG_FS host channel-7 transfer size register (OTG_FS_HCTSIZ7) at the offset 0x1F0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_7_REG 0x1F0

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1F0) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F0); \
     WRITE_REGISTER_ULONG(0x1F0, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz7
//
// Return the value of register OTG_FS_HCTSIZ_7
//
// Notes : Register OTG_FS host channel-7 transfer size register (OTG_FS_HCTSIZ7) at the offset 0x1F0, Bits 19:28

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
// Function : OtgFsHctsiz7
//
// Return the value of register OTG_FS_HCTSIZ_7
//
// Notes : Register OTG_FS host channel-7 transfer size register (OTG_FS_HCTSIZ7) at the offset 0x1F0, Bits 0:18

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
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR8
//
// Notes : Register OtgFsHcchar8 at offset 0x1F4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_8( y) \
     WRITE_REGISTER_ULONG( 0x1F4 , y)

#define SET_BITS_OTG_FS_HCCHAR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_8() \
     READ_REGISTER_ULONG(0x1F4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_8_REG 0x1F4

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x1F4) & CHENA_MASK)  >> CHENA_START_BIT)

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
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 30:30

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x1F4) & CHDIS_MASK)  >> CHDIS_START_BIT)

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
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 29:29

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x1F4) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

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
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 22:28

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
   ((READ_REGISTER_ULONG(0x1F4) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1F4) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 18:19

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
   ((READ_REGISTER_ULONG(0x1F4) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 17:17

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x1F4) & LSDEV_MASK)  >> LSDEV_START_BIT)

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
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 15:15

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG( 0x1F4 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x1F4) & EPDIR_MASK)  >> EPDIR_START_BIT)

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
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 11:14

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
   ((READ_REGISTER_ULONG(0x1F4) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar8
//
// Return the value of register OTG_FS_HCCHAR_8
//
// Notes : Register OTG_FS host channel-8 characteristics register (OTG_FS_HCCHAR8) at the offset 0x1F4, Bits 0:10

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
   ((READ_REGISTER_ULONG(0x1F4) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F4); \
     WRITE_REGISTER_ULONG(0x1F4, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT8
//
// Notes : Register OtgFsHcint8 at offset 0x1F8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_8( y) \
     WRITE_REGISTER_ULONG( 0x1F8 , y)

#define SET_BITS_OTG_FS_HCINT_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_8() \
     READ_REGISTER_ULONG(0x1F8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_8_REG 0x1F8

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x1F8) & DTERR_MASK)  >> DTERR_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 9:9

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x1F8) & FRMOR_MASK)  >> FRMOR_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 8:8

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x1F8) & BBERR_MASK)  >> BBERR_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 7:7

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x1F8) & TXERR_MASK)  >> TXERR_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 5:5

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x1F8) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 4:4

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1F8) & NAK_MASK)  >> NAK_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 3:3

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1F8) & STALL_MASK)  >> STALL_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 1:1

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x1F8) & CHH_MASK)  >> CHH_START_BIT)

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
// Function : OtgFsHcint8
//
// Return the value of register OTG_FS_HCINT_8
//
// Notes : Register OTG_FS host channel-8 interrupt register (OTG_FS_HCINT8) at the offset 0x1F8, Bits 0:0

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG( 0x1F8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1F8); \
     WRITE_REGISTER_ULONG(0x1F8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1F8) & XFRC_MASK)  >> XFRC_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK8
//
// Notes : Register OtgFsHcintmsk8 at offset 0x1FC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_8( y) \
     WRITE_REGISTER_ULONG( 0x1FC , y)

#define SET_BITS_OTG_FS_HCINTMSK_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_8() \
     READ_REGISTER_ULONG(0x1FC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_8_REG 0x1FC

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x1FC) & DTERRM_MASK)  >> DTERRM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 9:9

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x1FC) & FRMORM_MASK)  >> FRMORM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 8:8

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x1FC) & BBERRM_MASK)  >> BBERRM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 7:7

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x1FC) & TXERRM_MASK)  >> TXERRM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 6:6

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x1FC) & NYET_MASK)  >> NYET_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 5:5

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x1FC) & ACKM_MASK)  >> ACKM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 4:4

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x1FC) & NAKM_MASK)  >> NAKM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 3:3

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x1FC) & STALLM_MASK)  >> STALLM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 1:1

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x1FC) & CHHM_MASK)  >> CHHM_START_BIT)

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
// Function : OtgFsHcintmsk8
//
// Return the value of register OTG_FS_HCINTMSK_8
//
// Notes : Register OTG_FS host channel-8 mask register (OTG_FS_HCINTMSK8) at the offset 0x1FC, Bits 0:0

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG( 0x1FC , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1FC); \
     WRITE_REGISTER_ULONG(0x1FC, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x1FC) & XFRCM_MASK)  >> XFRCM_START_BIT)

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
// Function : OtgFsHctsiz8
//
// Return the value of register OTG_FS_HCTSIZ8
//
// Notes : Register OtgFsHctsiz8 at offset 0x200
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_8( y) \
     WRITE_REGISTER_ULONG( 0x200 , y)

#define SET_BITS_OTG_FS_HCTSIZ_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_8() \
     READ_REGISTER_ULONG(0x200)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz8
//
// Return the value of register OTG_FS_HCTSIZ_8
//
// Notes : Register OTG_FS host channel-8 transfer size register (OTG_FS_HCTSIZ8) at the offset 0x200, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_8_REG 0x200

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x200) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz8
//
// Return the value of register OTG_FS_HCTSIZ_8
//
// Notes : Register OTG_FS host channel-8 transfer size register (OTG_FS_HCTSIZ8) at the offset 0x200, Bits 19:28

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
   ((READ_REGISTER_ULONG(0x200) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz8
//
// Return the value of register OTG_FS_HCTSIZ_8
//
// Notes : Register OTG_FS host channel-8 transfer size register (OTG_FS_HCTSIZ8) at the offset 0x200, Bits 0:18

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
   ((READ_REGISTER_ULONG(0x200) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR9
//
// Notes : Register OtgFsHcchar9 at offset 0x204
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_9( y) \
     WRITE_REGISTER_ULONG( 0x204 , y)

#define SET_BITS_OTG_FS_HCCHAR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_9() \
     READ_REGISTER_ULONG(0x204)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_9_REG 0x204

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x204) & CHENA_MASK)  >> CHENA_START_BIT)

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
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 30:30

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x204) & CHDIS_MASK)  >> CHDIS_START_BIT)

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
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 29:29

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x204) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

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
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 22:28

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
   ((READ_REGISTER_ULONG(0x204) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x204) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 18:19

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
   ((READ_REGISTER_ULONG(0x204) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 17:17

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x204) & LSDEV_MASK)  >> LSDEV_START_BIT)

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
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 15:15

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG(0x204, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x204) & EPDIR_MASK)  >> EPDIR_START_BIT)

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
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 11:14

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
   ((READ_REGISTER_ULONG(0x204) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar9
//
// Return the value of register OTG_FS_HCCHAR_9
//
// Notes : Register OTG_FS host channel-9 characteristics register (OTG_FS_HCCHAR9) at the offset 0x204, Bits 0:10

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
   ((READ_REGISTER_ULONG(0x204) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT9
//
// Notes : Register OtgFsHcint9 at offset 0x208
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_9( y) \
     WRITE_REGISTER_ULONG( 0x208 , y)

#define SET_BITS_OTG_FS_HCINT_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_9() \
     READ_REGISTER_ULONG(0x208)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_9_REG 0x208

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 9:9

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 8:8

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 7:7

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 5:5

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 4:4

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 3:3

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 1:1

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
// Function : OtgFsHcint9
//
// Return the value of register OTG_FS_HCINT_9
//
// Notes : Register OTG_FS host channel-9 interrupt register (OTG_FS_HCINT9) at the offset 0x208, Bits 0:0

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK9
//
// Notes : Register OtgFsHcintmsk9 at offset 0x20C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_9( y) \
     WRITE_REGISTER_ULONG( 0x20C , y)

#define SET_BITS_OTG_FS_HCINTMSK_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20C); \
     WRITE_REGISTER_ULONG( 0x20C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_9() \
     READ_REGISTER_ULONG(0x20C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_9_REG 0x20C

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 9:9

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 8:8

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 7:7

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 6:6

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 5:5

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 4:4

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 3:3

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 1:1

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
// Function : OtgFsHcintmsk9
//
// Return the value of register OTG_FS_HCINTMSK_9
//
// Notes : Register OTG_FS host channel-9 mask register (OTG_FS_HCINTMSK9) at the offset 0x20C, Bits 0:0

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
// Function : OtgFsHctsiz9
//
// Return the value of register OTG_FS_HCTSIZ9
//
// Notes : Register OtgFsHctsiz9 at offset 0x210
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_9( y) \
     WRITE_REGISTER_ULONG( 0x210 , y)

#define SET_BITS_OTG_FS_HCTSIZ_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x210); \
     WRITE_REGISTER_ULONG( 0x210 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x210); \
     WRITE_REGISTER_ULONG( 0x210 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_9() \
     READ_REGISTER_ULONG(0x210)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz9
//
// Return the value of register OTG_FS_HCTSIZ_9
//
// Notes : Register OTG_FS host channel-9 transfer size register (OTG_FS_HCTSIZ9) at the offset 0x210, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_9_REG 0x210

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x210) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x210); \
     WRITE_REGISTER_ULONG(0x210, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz9
//
// Return the value of register OTG_FS_HCTSIZ_9
//
// Notes : Register OTG_FS host channel-9 transfer size register (OTG_FS_HCTSIZ9) at the offset 0x210, Bits 19:28

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
// Function : OtgFsHctsiz9
//
// Return the value of register OTG_FS_HCTSIZ_9
//
// Notes : Register OTG_FS host channel-9 transfer size register (OTG_FS_HCTSIZ9) at the offset 0x210, Bits 0:18

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
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR10
//
// Notes : Register OtgFsHcchar10 at offset 0x214
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_1_0( y) \
     WRITE_REGISTER_ULONG( 0x214 , y)

#define SET_BITS_OTG_FS_HCCHAR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_1_0() \
     READ_REGISTER_ULONG(0x214)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_10_REG 0x214

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG(0x214, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x214) & CHENA_MASK)  >> CHENA_START_BIT)

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
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 30:30

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG(0x214, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x214) & CHDIS_MASK)  >> CHDIS_START_BIT)

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
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 29:29

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG(0x214, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x214) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

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
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 22:28

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
   ((READ_REGISTER_ULONG(0x214) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x214) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 18:19

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
   ((READ_REGISTER_ULONG(0x214) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 17:17

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG(0x214, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x214) & LSDEV_MASK)  >> LSDEV_START_BIT)

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
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 15:15

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG( 0x214 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x214); \
     WRITE_REGISTER_ULONG(0x214, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x214) & EPDIR_MASK)  >> EPDIR_START_BIT)

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
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 11:14

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
   ((READ_REGISTER_ULONG(0x214) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar10
//
// Return the value of register OTG_FS_HCCHAR_1_0
//
// Notes : Register OTG_FS host channel-10 characteristics register (OTG_FS_HCCHAR10) at the offset 0x214, Bits 0:10

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
   ((READ_REGISTER_ULONG(0x214) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x214); \
     WRITE_REGISTER_ULONG(0x214, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT10
//
// Notes : Register OtgFsHcint10 at offset 0x218
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_1_0( y) \
     WRITE_REGISTER_ULONG( 0x218 , y)

#define SET_BITS_OTG_FS_HCINT_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_1_0() \
     READ_REGISTER_ULONG(0x218)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_10_REG 0x218

#define WRITE_DTERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ DTERR_MASK) | ((val << DTERR_START_BIT) & DTERR_MASK )); \
   } 

#define ENABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  DTERR_MASK ); \
   }

#define DISABLE_DTERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~DTERR_MASK ); \
   } 

#define READ_DTERR() \
   ((READ_REGISTER_ULONG(0x218) & DTERR_MASK)  >> DTERR_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 9:9

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ FRMOR_MASK) | ((val << FRMOR_START_BIT) & FRMOR_MASK )); \
   } 

#define ENABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  FRMOR_MASK ); \
   }

#define DISABLE_FRMOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~FRMOR_MASK ); \
   } 

#define READ_FRMOR() \
   ((READ_REGISTER_ULONG(0x218) & FRMOR_MASK)  >> FRMOR_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 8:8

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ BBERR_MASK) | ((val << BBERR_START_BIT) & BBERR_MASK )); \
   } 

#define ENABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  BBERR_MASK ); \
   }

#define DISABLE_BBERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~BBERR_MASK ); \
   } 

#define READ_BBERR() \
   ((READ_REGISTER_ULONG(0x218) & BBERR_MASK)  >> BBERR_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 7:7

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x218) & TXERR_MASK)  >> TXERR_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 5:5

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x218) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 4:4

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x218) & NAK_MASK)  >> NAK_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 3:3

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x218) & STALL_MASK)  >> STALL_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 1:1

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ CHH_MASK) | ((val << CHH_START_BIT) & CHH_MASK )); \
   } 

#define ENABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  CHH_MASK ); \
   }

#define DISABLE_CHH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~CHH_MASK ); \
   } 

#define READ_CHH() \
   ((READ_REGISTER_ULONG(0x218) & CHH_MASK)  >> CHH_START_BIT)

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
// Function : OtgFsHcint10
//
// Return the value of register OTG_FS_HCINT_1_0
//
// Notes : Register OTG_FS host channel-10 interrupt register (OTG_FS_HCINT10) at the offset 0x218, Bits 0:0

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x218); \
     WRITE_REGISTER_ULONG(0x218, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG( 0x218 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x218); \
     WRITE_REGISTER_ULONG(0x218, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x218) & XFRC_MASK)  >> XFRC_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK10
//
// Notes : Register OtgFsHcintmsk10 at offset 0x21C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_1_0( y) \
     WRITE_REGISTER_ULONG( 0x21C , y)

#define SET_BITS_OTG_FS_HCINTMSK_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_1_0() \
     READ_REGISTER_ULONG(0x21C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_10_REG 0x21C

#define WRITE_DTERRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ DTERRM_MASK) | ((val << DTERRM_START_BIT) & DTERRM_MASK )); \
   } 

#define ENABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  DTERRM_MASK ); \
   }

#define DISABLE_DTERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~DTERRM_MASK ); \
   } 

#define READ_DTERRM() \
   ((READ_REGISTER_ULONG(0x21C) & DTERRM_MASK)  >> DTERRM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 9:9

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ FRMORM_MASK) | ((val << FRMORM_START_BIT) & FRMORM_MASK )); \
   } 

#define ENABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  FRMORM_MASK ); \
   }

#define DISABLE_FRMORM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~FRMORM_MASK ); \
   } 

#define READ_FRMORM() \
   ((READ_REGISTER_ULONG(0x21C) & FRMORM_MASK)  >> FRMORM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 8:8

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ BBERRM_MASK) | ((val << BBERRM_START_BIT) & BBERRM_MASK )); \
   } 

#define ENABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  BBERRM_MASK ); \
   }

#define DISABLE_BBERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~BBERRM_MASK ); \
   } 

#define READ_BBERRM() \
   ((READ_REGISTER_ULONG(0x21C) & BBERRM_MASK)  >> BBERRM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 7:7

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ TXERRM_MASK) | ((val << TXERRM_START_BIT) & TXERRM_MASK )); \
   } 

#define ENABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  TXERRM_MASK ); \
   }

#define DISABLE_TXERRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~TXERRM_MASK ); \
   } 

#define READ_TXERRM() \
   ((READ_REGISTER_ULONG(0x21C) & TXERRM_MASK)  >> TXERRM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 6:6

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x21C) & NYET_MASK)  >> NYET_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 5:5

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ ACKM_MASK) | ((val << ACKM_START_BIT) & ACKM_MASK )); \
   } 

#define ENABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  ACKM_MASK ); \
   }

#define DISABLE_ACKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~ACKM_MASK ); \
   } 

#define READ_ACKM() \
   ((READ_REGISTER_ULONG(0x21C) & ACKM_MASK)  >> ACKM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 4:4

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ NAKM_MASK) | ((val << NAKM_START_BIT) & NAKM_MASK )); \
   } 

#define ENABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  NAKM_MASK ); \
   }

#define DISABLE_NAKM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~NAKM_MASK ); \
   } 

#define READ_NAKM() \
   ((READ_REGISTER_ULONG(0x21C) & NAKM_MASK)  >> NAKM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 3:3

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ STALLM_MASK) | ((val << STALLM_START_BIT) & STALLM_MASK )); \
   } 

#define ENABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  STALLM_MASK ); \
   }

#define DISABLE_STALLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~STALLM_MASK ); \
   } 

#define READ_STALLM() \
   ((READ_REGISTER_ULONG(0x21C) & STALLM_MASK)  >> STALLM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 1:1

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ CHHM_MASK) | ((val << CHHM_START_BIT) & CHHM_MASK )); \
   } 

#define ENABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  CHHM_MASK ); \
   }

#define DISABLE_CHHM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~CHHM_MASK ); \
   } 

#define READ_CHHM() \
   ((READ_REGISTER_ULONG(0x21C) & CHHM_MASK)  >> CHHM_START_BIT)

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
// Function : OtgFsHcintmsk10
//
// Return the value of register OTG_FS_HCINTMSK_1_0
//
// Notes : Register OTG_FS host channel-10 mask register (OTG_FS_HCINTMSK10) at the offset 0x21C, Bits 0:0

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x21C); \
     WRITE_REGISTER_ULONG(0x21C, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG( 0x21C , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x21C); \
     WRITE_REGISTER_ULONG(0x21C, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x21C) & XFRCM_MASK)  >> XFRCM_START_BIT)

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
// Function : OtgFsHctsiz10
//
// Return the value of register OTG_FS_HCTSIZ10
//
// Notes : Register OtgFsHctsiz10 at offset 0x220
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_1_0( y) \
     WRITE_REGISTER_ULONG( 0x220 , y)

#define SET_BITS_OTG_FS_HCTSIZ_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x220); \
     WRITE_REGISTER_ULONG( 0x220 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_1_0() \
     READ_REGISTER_ULONG(0x220)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz10
//
// Return the value of register OTG_FS_HCTSIZ_1_0
//
// Notes : Register OTG_FS host channel-10 transfer size register (OTG_FS_HCTSIZ10) at the offset 0x220, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_10_REG 0x220

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x220) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz10
//
// Return the value of register OTG_FS_HCTSIZ_1_0
//
// Notes : Register OTG_FS host channel-10 transfer size register (OTG_FS_HCTSIZ10) at the offset 0x220, Bits 19:28

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
   ((READ_REGISTER_ULONG(0x220) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz10
//
// Return the value of register OTG_FS_HCTSIZ_1_0
//
// Notes : Register OTG_FS host channel-10 transfer size register (OTG_FS_HCTSIZ10) at the offset 0x220, Bits 0:18

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
   ((READ_REGISTER_ULONG(0x220) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x220); \
     WRITE_REGISTER_ULONG(0x220, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR11
//
// Notes : Register OtgFsHcchar11 at offset 0x224
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCCHAR_1_1( y) \
     WRITE_REGISTER_ULONG( 0x224 , y)

#define SET_BITS_OTG_FS_HCCHAR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCCHAR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCCHAR_1_1() \
     READ_REGISTER_ULONG(0x224)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel enable 
    // 
#define CHENA_MASK 0x80000000U
#define CHENA_OFFSET 31
#define CHENA_START_BIT 31
#define CHENA_WIDTH 1


#define OTG_FS_HCCHAR_11_REG 0x224

#define WRITE_CHENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ CHENA_MASK) | ((val << CHENA_START_BIT) & CHENA_MASK )); \
   } 

#define ENABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  CHENA_MASK ); \
   }

#define DISABLE_CHENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~CHENA_MASK ); \
   } 

#define READ_CHENA() \
   ((READ_REGISTER_ULONG(0x224) & CHENA_MASK)  >> CHENA_START_BIT)

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
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 30:30

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ CHDIS_MASK) | ((val << CHDIS_START_BIT) & CHDIS_MASK )); \
   } 

#define ENABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  CHDIS_MASK ); \
   }

#define DISABLE_CHDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~CHDIS_MASK ); \
   } 

#define READ_CHDIS() \
   ((READ_REGISTER_ULONG(0x224) & CHDIS_MASK)  >> CHDIS_START_BIT)

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
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 29:29

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ ODDFRM_MASK) | ((val << ODDFRM_START_BIT) & ODDFRM_MASK )); \
   } 

#define ENABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  ODDFRM_MASK ); \
   }

#define DISABLE_ODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~ODDFRM_MASK ); \
   } 

#define READ_ODDFRM() \
   ((READ_REGISTER_ULONG(0x224) & ODDFRM_MASK)  >> ODDFRM_START_BIT)

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
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 22:28

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
   ((READ_REGISTER_ULONG(0x224) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multicount 
    // 
#define MCNT_MASK 0x300000U
#define MCNT_OFFSET 21
#define MCNT_START_BIT 20
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x224) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 18:19

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
   ((READ_REGISTER_ULONG(0x224) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 17:17

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ LSDEV_MASK) | ((val << LSDEV_START_BIT) & LSDEV_MASK )); \
   } 

#define ENABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  LSDEV_MASK ); \
   }

#define DISABLE_LSDEV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~LSDEV_MASK ); \
   } 

#define READ_LSDEV() \
   ((READ_REGISTER_ULONG(0x224) & LSDEV_MASK)  >> LSDEV_START_BIT)

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
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 15:15

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
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ EPDIR_MASK) | ((val << EPDIR_START_BIT) & EPDIR_MASK )); \
   } 

#define ENABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG( 0x224 , val |  EPDIR_MASK ); \
   }

#define DISABLE_EPDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x224); \
     WRITE_REGISTER_ULONG(0x224, val & ~EPDIR_MASK ); \
   } 

#define READ_EPDIR() \
   ((READ_REGISTER_ULONG(0x224) & EPDIR_MASK)  >> EPDIR_START_BIT)

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
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 11:14

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
   ((READ_REGISTER_ULONG(0x224) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcchar11
//
// Return the value of register OTG_FS_HCCHAR_1_1
//
// Notes : Register OTG_FS host channel-11 characteristics register (OTG_FS_HCCHAR11) at the offset 0x224, Bits 0:10

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
   ((READ_REGISTER_ULONG(0x224) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x224); \
     WRITE_REGISTER_ULONG(0x224, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT11
//
// Notes : Register OtgFsHcint11 at offset 0x228
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINT_1_1( y) \
     WRITE_REGISTER_ULONG( 0x228 , y)

#define SET_BITS_OTG_FS_HCINT_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINT_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x228); \
     WRITE_REGISTER_ULONG( 0x228 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINT_1_1() \
     READ_REGISTER_ULONG(0x228)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error 
    // 
#define DTERR_MASK 0x400U
#define DTERR_OFFSET 10
#define DTERR_START_BIT 10
#define DTERR_WIDTH 1


#define OTG_FS_HCINT_11_REG 0x228

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 9:9

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 8:8

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 7:7

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 5:5

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 4:4

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 3:3

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 1:1

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
// Function : OtgFsHcint11
//
// Return the value of register OTG_FS_HCINT_1_1
//
// Notes : Register OTG_FS host channel-11 interrupt register (OTG_FS_HCINT11) at the offset 0x228, Bits 0:0

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK11
//
// Notes : Register OtgFsHcintmsk11 at offset 0x22C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCINTMSK_1_1( y) \
     WRITE_REGISTER_ULONG( 0x22C , y)

#define SET_BITS_OTG_FS_HCINTMSK_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCINTMSK_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x22C); \
     WRITE_REGISTER_ULONG( 0x22C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCINTMSK_1_1() \
     READ_REGISTER_ULONG(0x22C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data toggle error mask 
    // 
#define DTERRM_MASK 0x400U
#define DTERRM_OFFSET 10
#define DTERRM_START_BIT 10
#define DTERRM_WIDTH 1


#define OTG_FS_HCINTMSK_11_REG 0x22C

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 9:9

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 8:8

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 7:7

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 6:6

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 5:5

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 4:4

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 3:3

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 1:1

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
// Function : OtgFsHcintmsk11
//
// Return the value of register OTG_FS_HCINTMSK_1_1
//
// Notes : Register OTG_FS host channel-11 mask register (OTG_FS_HCINTMSK11) at the offset 0x22C, Bits 0:0

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
// Function : OtgFsHctsiz11
//
// Return the value of register OTG_FS_HCTSIZ11
//
// Notes : Register OtgFsHctsiz11 at offset 0x230
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HCTSIZ_1_1( y) \
     WRITE_REGISTER_ULONG( 0x230 , y)

#define SET_BITS_OTG_FS_HCTSIZ_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x230); \
     WRITE_REGISTER_ULONG( 0x230 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HCTSIZ_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x230); \
     WRITE_REGISTER_ULONG( 0x230 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HCTSIZ_1_1() \
     READ_REGISTER_ULONG(0x230)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz11
//
// Return the value of register OTG_FS_HCTSIZ_1_1
//
// Notes : Register OTG_FS host channel-11 transfer size register (OTG_FS_HCTSIZ11) at the offset 0x230, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x60000000U
#define DPID_OFFSET 30
#define DPID_START_BIT 29
#define DPID_WIDTH 2


#define OTG_FS_HCTSIZ_11_REG 0x230

#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x230) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x230); \
     WRITE_REGISTER_ULONG(0x230, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHctsiz11
//
// Return the value of register OTG_FS_HCTSIZ_1_1
//
// Notes : Register OTG_FS host channel-11 transfer size register (OTG_FS_HCTSIZ11) at the offset 0x230, Bits 19:28

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
// Function : OtgFsHctsiz11
//
// Return the value of register OTG_FS_HCTSIZ_1_1
//
// Notes : Register OTG_FS host channel-11 transfer size register (OTG_FS_HCTSIZ11) at the offset 0x230, Bits 0:18

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

