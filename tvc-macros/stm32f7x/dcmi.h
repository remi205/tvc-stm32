/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/dcmi.h
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
 
#define DCMI 0x50050000
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
// Function : CAPTURE
//
// Return the value of register Cr
//
// Notes : Capture enable 
//        (CR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CAPTURE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CAPTURE_MASK) | ((val << CAPTURE_START_BIT) & CAPTURE_MASK )); \
   } 

#define ENABLE_CAPTURE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CAPTURE_MASK ); \
   }

#define DISABLE_CAPTURE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CAPTURE_MASK ); \
   } 

#define READ_CAPTURE() \
   ((READ_REGISTER_ULONG(0x0) & CAPTURE_MASK)  >> CAPTURE_START_BIT)

#define WHEN_CAPTURE_HIGH() \
     if ( READ_CAPTURE() )


#define UNLESS_CAPTURE_HIGH() \
     if (! READ_CAPTURE() )


#define WAIT_CAPTURE_LOW() \
    while ( READ_CAPTURE() );


#define WAIT_CAPTURE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAPTURE() && (--___t___ > 0)); }


#define WAIT_CAPTURE_HIGH() \
    while (! READ_CAPTURE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CM
//
// Return the value of register Cr
//
// Notes : Capture mode 
//        (CR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CM_MASK) | ((val << CM_START_BIT) & CM_MASK )); \
   } 

#define ENABLE_CM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CM_MASK ); \
   }

#define DISABLE_CM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CM_MASK ); \
   } 

#define READ_CM() \
   ((READ_REGISTER_ULONG(0x0) & CM_MASK)  >> CM_START_BIT)

#define WHEN_CM_HIGH() \
     if ( READ_CM() )


#define UNLESS_CM_HIGH() \
     if (! READ_CM() )


#define WAIT_CM_LOW() \
    while ( READ_CM() );


#define WAIT_CM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CM() && (--___t___ > 0)); }


#define WAIT_CM_HIGH() \
    while (! READ_CM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CROP
//
// Return the value of register Cr
//
// Notes : Crop feature 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CROP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CROP_MASK) | ((val << CROP_START_BIT) & CROP_MASK )); \
   } 

#define ENABLE_CROP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CROP_MASK ); \
   }

#define DISABLE_CROP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CROP_MASK ); \
   } 

#define READ_CROP() \
   ((READ_REGISTER_ULONG(0x0) & CROP_MASK)  >> CROP_START_BIT)

#define WHEN_CROP_HIGH() \
     if ( READ_CROP() )


#define UNLESS_CROP_HIGH() \
     if (! READ_CROP() )


#define WAIT_CROP_LOW() \
    while ( READ_CROP() );


#define WAIT_CROP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CROP() && (--___t___ > 0)); }


#define WAIT_CROP_HIGH() \
    while (! READ_CROP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JPEG
//
// Return the value of register Cr
//
// Notes : JPEG format 
//        (CR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JPEG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JPEG_MASK) | ((val << JPEG_START_BIT) & JPEG_MASK )); \
   } 

#define ENABLE_JPEG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JPEG_MASK ); \
   }

#define DISABLE_JPEG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JPEG_MASK ); \
   } 

#define READ_JPEG() \
   ((READ_REGISTER_ULONG(0x0) & JPEG_MASK)  >> JPEG_START_BIT)

#define WHEN_JPEG_HIGH() \
     if ( READ_JPEG() )


#define UNLESS_JPEG_HIGH() \
     if (! READ_JPEG() )


#define WAIT_JPEG_LOW() \
    while ( READ_JPEG() );


#define WAIT_JPEG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JPEG() && (--___t___ > 0)); }


#define WAIT_JPEG_HIGH() \
    while (! READ_JPEG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ESS
//
// Return the value of register Cr
//
// Notes : Embedded synchronization select 
//        (CR) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ESS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ESS_MASK) | ((val << ESS_START_BIT) & ESS_MASK )); \
   } 

#define ENABLE_ESS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ESS_MASK ); \
   }

#define DISABLE_ESS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ESS_MASK ); \
   } 

#define READ_ESS() \
   ((READ_REGISTER_ULONG(0x0) & ESS_MASK)  >> ESS_START_BIT)

#define WHEN_ESS_HIGH() \
     if ( READ_ESS() )


#define UNLESS_ESS_HIGH() \
     if (! READ_ESS() )


#define WAIT_ESS_LOW() \
    while ( READ_ESS() );


#define WAIT_ESS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ESS() && (--___t___ > 0)); }


#define WAIT_ESS_HIGH() \
    while (! READ_ESS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PCKPOL
//
// Return the value of register Cr
//
// Notes : Pixel clock polarity 
//        (CR) at the offset 0x0, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PCKPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PCKPOL_MASK) | ((val << PCKPOL_START_BIT) & PCKPOL_MASK )); \
   } 

#define ENABLE_PCKPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PCKPOL_MASK ); \
   }

#define DISABLE_PCKPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PCKPOL_MASK ); \
   } 

#define READ_PCKPOL() \
   ((READ_REGISTER_ULONG(0x0) & PCKPOL_MASK)  >> PCKPOL_START_BIT)

#define WHEN_PCKPOL_HIGH() \
     if ( READ_PCKPOL() )


#define UNLESS_PCKPOL_HIGH() \
     if (! READ_PCKPOL() )


#define WAIT_PCKPOL_LOW() \
    while ( READ_PCKPOL() );


#define WAIT_PCKPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCKPOL() && (--___t___ > 0)); }


#define WAIT_PCKPOL_HIGH() \
    while (! READ_PCKPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HSPOL
//
// Return the value of register Cr
//
// Notes : Horizontal synchronization polarity 
//        (CR) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSPOL_MASK) | ((val << HSPOL_START_BIT) & HSPOL_MASK )); \
   } 

#define ENABLE_HSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSPOL_MASK ); \
   }

#define DISABLE_HSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSPOL_MASK ); \
   } 

#define READ_HSPOL() \
   ((READ_REGISTER_ULONG(0x0) & HSPOL_MASK)  >> HSPOL_START_BIT)

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
// Function : VSPOL
//
// Return the value of register Cr
//
// Notes : Vertical synchronization polarity 
//        (CR) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VSPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ VSPOL_MASK) | ((val << VSPOL_START_BIT) & VSPOL_MASK )); \
   } 

#define ENABLE_VSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  VSPOL_MASK ); \
   }

#define DISABLE_VSPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~VSPOL_MASK ); \
   } 

#define READ_VSPOL() \
   ((READ_REGISTER_ULONG(0x0) & VSPOL_MASK)  >> VSPOL_START_BIT)

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
// Function : FCRC
//
// Return the value of register Cr
//
// Notes : Frame capture rate control 
//        (CR) at the offset 0x0, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_FCRC() \
   ((READ_REGISTER_ULONG(0x0) & FCRC_MASK)  >> FCRC_START_BIT)

#define WRITE_FCRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FCRC_MASK) | ((val << FCRC_START_BIT) & FCRC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : EDM
//
// Return the value of register Cr
//
// Notes : Extended data mode 
//        (CR) at the offset 0x0, Bits 10:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_EDM() \
   ((READ_REGISTER_ULONG(0x0) & EDM_MASK)  >> EDM_START_BIT)

#define WRITE_EDM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EDM_MASK) | ((val << EDM_START_BIT) & EDM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ENABLE
//
// Return the value of register Cr
//
// Notes : DCMI enable 
//        (CR) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ENABLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ENABLE_MASK) | ((val << ENABLE_START_BIT) & ENABLE_MASK )); \
   } 

#define ENABLE_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ENABLE_MASK ); \
   }

#define DISABLE_ENABLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ENABLE_MASK ); \
   } 

#define READ_ENABLE() \
   ((READ_REGISTER_ULONG(0x0) & ENABLE_MASK)  >> ENABLE_START_BIT)

#define WHEN_ENABLE_HIGH() \
     if ( READ_ENABLE() )


#define UNLESS_ENABLE_HIGH() \
     if (! READ_ENABLE() )


#define WAIT_ENABLE_LOW() \
    while ( READ_ENABLE() );


#define WAIT_ENABLE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENABLE() && (--___t___ > 0)); }


#define WAIT_ENABLE_HIGH() \
    while (! READ_ENABLE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_SR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : HSYNC
//
// Return the value of register Sr
//
// Notes : HSYNC 
//        (SR) at the offset 0x4, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSYNC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HSYNC_MASK) | ((val << HSYNC_START_BIT) & HSYNC_MASK )); \
   } 

#define ENABLE_HSYNC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HSYNC_MASK ); \
   }

#define DISABLE_HSYNC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HSYNC_MASK ); \
   } 

#define READ_HSYNC() \
   ((READ_REGISTER_ULONG(0x4) & HSYNC_MASK)  >> HSYNC_START_BIT)

#define WHEN_HSYNC_HIGH() \
     if ( READ_HSYNC() )


#define UNLESS_HSYNC_HIGH() \
     if (! READ_HSYNC() )


#define WAIT_HSYNC_LOW() \
    while ( READ_HSYNC() );


#define WAIT_HSYNC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSYNC() && (--___t___ > 0)); }


#define WAIT_HSYNC_HIGH() \
    while (! READ_HSYNC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : VSYNC
//
// Return the value of register Sr
//
// Notes : VSYNC 
//        (SR) at the offset 0x4, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VSYNC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ VSYNC_MASK) | ((val << VSYNC_START_BIT) & VSYNC_MASK )); \
   } 

#define ENABLE_VSYNC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  VSYNC_MASK ); \
   }

#define DISABLE_VSYNC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~VSYNC_MASK ); \
   } 

#define READ_VSYNC() \
   ((READ_REGISTER_ULONG(0x4) & VSYNC_MASK)  >> VSYNC_START_BIT)

#define WHEN_VSYNC_HIGH() \
     if ( READ_VSYNC() )


#define UNLESS_VSYNC_HIGH() \
     if (! READ_VSYNC() )


#define WAIT_VSYNC_LOW() \
    while ( READ_VSYNC() );


#define WAIT_VSYNC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSYNC() && (--___t___ > 0)); }


#define WAIT_VSYNC_HIGH() \
    while (! READ_VSYNC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FNE
//
// Return the value of register Sr
//
// Notes : FIFO not empty 
//        (SR) at the offset 0x4, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ FNE_MASK) | ((val << FNE_START_BIT) & FNE_MASK )); \
   } 

#define ENABLE_FNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  FNE_MASK ); \
   }

#define DISABLE_FNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~FNE_MASK ); \
   } 

#define READ_FNE() \
   ((READ_REGISTER_ULONG(0x4) & FNE_MASK)  >> FNE_START_BIT)

#define WHEN_FNE_HIGH() \
     if ( READ_FNE() )


#define UNLESS_FNE_HIGH() \
     if (! READ_FNE() )


#define WAIT_FNE_LOW() \
    while ( READ_FNE() );


#define WAIT_FNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FNE() && (--___t___ > 0)); }


#define WAIT_FNE_HIGH() \
    while (! READ_FNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ris
//
// Return the value of register RIS
//
// Notes : Register Ris at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RIS() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ris
//
// Return the value of register RIS
//
// Notes : Register raw interrupt status register (RIS) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture complete raw interrupt status 
    // 
#define FRAME_RIS_MASK 0x1U
#define FRAME_RIS_OFFSET 0
#define FRAME_RIS_START_BIT 0
#define FRAME_RIS_WIDTH 1


#define RIS_REG 0x8

typedef enum frame_ris {
    FRAME_RIS_0,
    FRAME_RIS_1
} FRAME_RIS_T ;
#define WRITE_FRAME_RIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FRAME_RIS_MASK) | ((val << FRAME_RIS_START_BIT) & FRAME_RIS_MASK )); \
   } 

#define ENABLE_FRAME_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  FRAME_RIS_MASK ); \
   }

#define DISABLE_FRAME_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~FRAME_RIS_MASK ); \
   } 

#define READ_FRAME_RIS() \
   ((READ_REGISTER_ULONG(0x8) & FRAME_RIS_MASK)  >> FRAME_RIS_START_BIT)

#define WHEN_FRAME_RIS_HIGH() \
     if ( READ_FRAME_RIS() )


#define UNLESS_FRAME_RIS_HIGH() \
     if (! READ_FRAME_RIS() )


#define WAIT_FRAME_RIS_LOW() \
    while ( READ_FRAME_RIS() );


#define WAIT_FRAME_RIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRAME_RIS() && (--___t___ > 0)); }


#define WAIT_FRAME_RIS_HIGH() \
    while (! READ_FRAME_RIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ris
//
// Return the value of register RIS
//
// Notes : Register raw interrupt status register (RIS) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun raw interrupt status 
    // 
#define OVR_RIS_MASK 0x2U
#define OVR_RIS_OFFSET 1
#define OVR_RIS_START_BIT 1
#define OVR_RIS_WIDTH 1



typedef enum ovr_ris {
    OVR_RIS_0,
    OVR_RIS_1
} OVR_RIS_T ;
#define WRITE_OVR_RIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OVR_RIS_MASK) | ((val << OVR_RIS_START_BIT) & OVR_RIS_MASK )); \
   } 

#define ENABLE_OVR_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  OVR_RIS_MASK ); \
   }

#define DISABLE_OVR_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~OVR_RIS_MASK ); \
   } 

#define READ_OVR_RIS() \
   ((READ_REGISTER_ULONG(0x8) & OVR_RIS_MASK)  >> OVR_RIS_START_BIT)

#define WHEN_OVR_RIS_HIGH() \
     if ( READ_OVR_RIS() )


#define UNLESS_OVR_RIS_HIGH() \
     if (! READ_OVR_RIS() )


#define WAIT_OVR_RIS_LOW() \
    while ( READ_OVR_RIS() );


#define WAIT_OVR_RIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR_RIS() && (--___t___ > 0)); }


#define WAIT_OVR_RIS_HIGH() \
    while (! READ_OVR_RIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ris
//
// Return the value of register RIS
//
// Notes : Register raw interrupt status register (RIS) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization error raw interrupt status 
    // 
#define ERR_RIS_MASK 0x4U
#define ERR_RIS_OFFSET 2
#define ERR_RIS_START_BIT 2
#define ERR_RIS_WIDTH 1



typedef enum err_ris {
    ERR_RIS_0,
    ERR_RIS_1
} ERR_RIS_T ;
#define WRITE_ERR_RIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ERR_RIS_MASK) | ((val << ERR_RIS_START_BIT) & ERR_RIS_MASK )); \
   } 

#define ENABLE_ERR_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ERR_RIS_MASK ); \
   }

#define DISABLE_ERR_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ERR_RIS_MASK ); \
   } 

#define READ_ERR_RIS() \
   ((READ_REGISTER_ULONG(0x8) & ERR_RIS_MASK)  >> ERR_RIS_START_BIT)

#define WHEN_ERR_RIS_HIGH() \
     if ( READ_ERR_RIS() )


#define UNLESS_ERR_RIS_HIGH() \
     if (! READ_ERR_RIS() )


#define WAIT_ERR_RIS_LOW() \
    while ( READ_ERR_RIS() );


#define WAIT_ERR_RIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERR_RIS() && (--___t___ > 0)); }


#define WAIT_ERR_RIS_HIGH() \
    while (! READ_ERR_RIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ris
//
// Return the value of register RIS
//
// Notes : Register raw interrupt status register (RIS) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // VSYNC raw interrupt status 
    // 
#define VSYNC_RIS_MASK 0x8U
#define VSYNC_RIS_OFFSET 3
#define VSYNC_RIS_START_BIT 3
#define VSYNC_RIS_WIDTH 1



typedef enum vsync_ris {
    VSYNC_RIS_0,
    VSYNC_RIS_1
} VSYNC_RIS_T ;
#define WRITE_VSYNC_RIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ VSYNC_RIS_MASK) | ((val << VSYNC_RIS_START_BIT) & VSYNC_RIS_MASK )); \
   } 

#define ENABLE_VSYNC_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  VSYNC_RIS_MASK ); \
   }

#define DISABLE_VSYNC_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~VSYNC_RIS_MASK ); \
   } 

#define READ_VSYNC_RIS() \
   ((READ_REGISTER_ULONG(0x8) & VSYNC_RIS_MASK)  >> VSYNC_RIS_START_BIT)

#define WHEN_VSYNC_RIS_HIGH() \
     if ( READ_VSYNC_RIS() )


#define UNLESS_VSYNC_RIS_HIGH() \
     if (! READ_VSYNC_RIS() )


#define WAIT_VSYNC_RIS_LOW() \
    while ( READ_VSYNC_RIS() );


#define WAIT_VSYNC_RIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSYNC_RIS() && (--___t___ > 0)); }


#define WAIT_VSYNC_RIS_HIGH() \
    while (! READ_VSYNC_RIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ris
//
// Return the value of register RIS
//
// Notes : Register raw interrupt status register (RIS) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line raw interrupt status 
    // 
#define LINE_RIS_MASK 0x10U
#define LINE_RIS_OFFSET 4
#define LINE_RIS_START_BIT 4
#define LINE_RIS_WIDTH 1



typedef enum line_ris {
    LINE_RIS_0,
    LINE_RIS_1
} LINE_RIS_T ;
#define WRITE_LINE_RIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ LINE_RIS_MASK) | ((val << LINE_RIS_START_BIT) & LINE_RIS_MASK )); \
   } 

#define ENABLE_LINE_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  LINE_RIS_MASK ); \
   }

#define DISABLE_LINE_RIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~LINE_RIS_MASK ); \
   } 

#define READ_LINE_RIS() \
   ((READ_REGISTER_ULONG(0x8) & LINE_RIS_MASK)  >> LINE_RIS_START_BIT)

#define WHEN_LINE_RIS_HIGH() \
     if ( READ_LINE_RIS() )


#define UNLESS_LINE_RIS_HIGH() \
     if (! READ_LINE_RIS() )


#define WAIT_LINE_RIS_LOW() \
    while ( READ_LINE_RIS() );


#define WAIT_LINE_RIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LINE_RIS() && (--___t___ > 0)); }


#define WAIT_LINE_RIS_HIGH() \
    while (! READ_LINE_RIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Ier at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IER( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_IER() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : FRAME_IE
//
// Return the value of register Ier
//
// Notes : Capture complete interrupt enable 
//        (IER) at the offset 0xC, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FRAME_IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ FRAME_IE_MASK) | ((val << FRAME_IE_START_BIT) & FRAME_IE_MASK )); \
   } 

#define ENABLE_FRAME_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  FRAME_IE_MASK ); \
   }

#define DISABLE_FRAME_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~FRAME_IE_MASK ); \
   } 

#define READ_FRAME_IE() \
   ((READ_REGISTER_ULONG(0xC) & FRAME_IE_MASK)  >> FRAME_IE_START_BIT)

#define WHEN_FRAME_IE_HIGH() \
     if ( READ_FRAME_IE() )


#define UNLESS_FRAME_IE_HIGH() \
     if (! READ_FRAME_IE() )


#define WAIT_FRAME_IE_LOW() \
    while ( READ_FRAME_IE() );


#define WAIT_FRAME_IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRAME_IE() && (--___t___ > 0)); }


#define WAIT_FRAME_IE_HIGH() \
    while (! READ_FRAME_IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR_IE
//
// Return the value of register Ier
//
// Notes : Overrun interrupt enable 
//        (IER) at the offset 0xC, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR_IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ OVR_IE_MASK) | ((val << OVR_IE_START_BIT) & OVR_IE_MASK )); \
   } 

#define ENABLE_OVR_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  OVR_IE_MASK ); \
   }

#define DISABLE_OVR_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~OVR_IE_MASK ); \
   } 

#define READ_OVR_IE() \
   ((READ_REGISTER_ULONG(0xC) & OVR_IE_MASK)  >> OVR_IE_START_BIT)

#define WHEN_OVR_IE_HIGH() \
     if ( READ_OVR_IE() )


#define UNLESS_OVR_IE_HIGH() \
     if (! READ_OVR_IE() )


#define WAIT_OVR_IE_LOW() \
    while ( READ_OVR_IE() );


#define WAIT_OVR_IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR_IE() && (--___t___ > 0)); }


#define WAIT_OVR_IE_HIGH() \
    while (! READ_OVR_IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ERR_IE
//
// Return the value of register Ier
//
// Notes : Synchronization error interrupt enable 
//        (IER) at the offset 0xC, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ERR_IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ERR_IE_MASK) | ((val << ERR_IE_START_BIT) & ERR_IE_MASK )); \
   } 

#define ENABLE_ERR_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ERR_IE_MASK ); \
   }

#define DISABLE_ERR_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ERR_IE_MASK ); \
   } 

#define READ_ERR_IE() \
   ((READ_REGISTER_ULONG(0xC) & ERR_IE_MASK)  >> ERR_IE_START_BIT)

#define WHEN_ERR_IE_HIGH() \
     if ( READ_ERR_IE() )


#define UNLESS_ERR_IE_HIGH() \
     if (! READ_ERR_IE() )


#define WAIT_ERR_IE_LOW() \
    while ( READ_ERR_IE() );


#define WAIT_ERR_IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERR_IE() && (--___t___ > 0)); }


#define WAIT_ERR_IE_HIGH() \
    while (! READ_ERR_IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : VSYNC_IE
//
// Return the value of register Ier
//
// Notes : VSYNC interrupt enable 
//        (IER) at the offset 0xC, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VSYNC_IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ VSYNC_IE_MASK) | ((val << VSYNC_IE_START_BIT) & VSYNC_IE_MASK )); \
   } 

#define ENABLE_VSYNC_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  VSYNC_IE_MASK ); \
   }

#define DISABLE_VSYNC_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~VSYNC_IE_MASK ); \
   } 

#define READ_VSYNC_IE() \
   ((READ_REGISTER_ULONG(0xC) & VSYNC_IE_MASK)  >> VSYNC_IE_START_BIT)

#define WHEN_VSYNC_IE_HIGH() \
     if ( READ_VSYNC_IE() )


#define UNLESS_VSYNC_IE_HIGH() \
     if (! READ_VSYNC_IE() )


#define WAIT_VSYNC_IE_LOW() \
    while ( READ_VSYNC_IE() );


#define WAIT_VSYNC_IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSYNC_IE() && (--___t___ > 0)); }


#define WAIT_VSYNC_IE_HIGH() \
    while (! READ_VSYNC_IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LINE_IE
//
// Return the value of register Ier
//
// Notes : Line interrupt enable 
//        (IER) at the offset 0xC, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LINE_IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LINE_IE_MASK) | ((val << LINE_IE_START_BIT) & LINE_IE_MASK )); \
   } 

#define ENABLE_LINE_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LINE_IE_MASK ); \
   }

#define DISABLE_LINE_IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LINE_IE_MASK ); \
   } 

#define READ_LINE_IE() \
   ((READ_REGISTER_ULONG(0xC) & LINE_IE_MASK)  >> LINE_IE_START_BIT)

#define WHEN_LINE_IE_HIGH() \
     if ( READ_LINE_IE() )


#define UNLESS_LINE_IE_HIGH() \
     if (! READ_LINE_IE() )


#define WAIT_LINE_IE_LOW() \
    while ( READ_LINE_IE() );


#define WAIT_LINE_IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LINE_IE() && (--___t___ > 0)); }


#define WAIT_LINE_IE_HIGH() \
    while (! READ_LINE_IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mis
//
// Return the value of register MIS
//
// Notes : Register Mis at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MIS() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mis
//
// Return the value of register MIS
//
// Notes : Register masked interrupt status register (MIS) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture complete masked interrupt status 
    // 
#define FRAME_MIS_MASK 0x1U
#define FRAME_MIS_OFFSET 0
#define FRAME_MIS_START_BIT 0
#define FRAME_MIS_WIDTH 1


#define MIS_REG 0x10

typedef enum frame_mis {
    FRAME_MIS_0,
    FRAME_MIS_1
} FRAME_MIS_T ;
#define WRITE_FRAME_MIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ FRAME_MIS_MASK) | ((val << FRAME_MIS_START_BIT) & FRAME_MIS_MASK )); \
   } 

#define ENABLE_FRAME_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  FRAME_MIS_MASK ); \
   }

#define DISABLE_FRAME_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~FRAME_MIS_MASK ); \
   } 

#define READ_FRAME_MIS() \
   ((READ_REGISTER_ULONG(0x10) & FRAME_MIS_MASK)  >> FRAME_MIS_START_BIT)

#define WHEN_FRAME_MIS_HIGH() \
     if ( READ_FRAME_MIS() )


#define UNLESS_FRAME_MIS_HIGH() \
     if (! READ_FRAME_MIS() )


#define WAIT_FRAME_MIS_LOW() \
    while ( READ_FRAME_MIS() );


#define WAIT_FRAME_MIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRAME_MIS() && (--___t___ > 0)); }


#define WAIT_FRAME_MIS_HIGH() \
    while (! READ_FRAME_MIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mis
//
// Return the value of register MIS
//
// Notes : Register masked interrupt status register (MIS) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun masked interrupt status 
    // 
#define OVR_MIS_MASK 0x2U
#define OVR_MIS_OFFSET 1
#define OVR_MIS_START_BIT 1
#define OVR_MIS_WIDTH 1



typedef enum ovr_mis {
    OVR_MIS_0,
    OVR_MIS_1
} OVR_MIS_T ;
#define WRITE_OVR_MIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ OVR_MIS_MASK) | ((val << OVR_MIS_START_BIT) & OVR_MIS_MASK )); \
   } 

#define ENABLE_OVR_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  OVR_MIS_MASK ); \
   }

#define DISABLE_OVR_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~OVR_MIS_MASK ); \
   } 

#define READ_OVR_MIS() \
   ((READ_REGISTER_ULONG(0x10) & OVR_MIS_MASK)  >> OVR_MIS_START_BIT)

#define WHEN_OVR_MIS_HIGH() \
     if ( READ_OVR_MIS() )


#define UNLESS_OVR_MIS_HIGH() \
     if (! READ_OVR_MIS() )


#define WAIT_OVR_MIS_LOW() \
    while ( READ_OVR_MIS() );


#define WAIT_OVR_MIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR_MIS() && (--___t___ > 0)); }


#define WAIT_OVR_MIS_HIGH() \
    while (! READ_OVR_MIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mis
//
// Return the value of register MIS
//
// Notes : Register masked interrupt status register (MIS) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization error masked interrupt status 
    // 
#define ERR_MIS_MASK 0x4U
#define ERR_MIS_OFFSET 2
#define ERR_MIS_START_BIT 2
#define ERR_MIS_WIDTH 1



typedef enum err_mis {
    ERR_MIS_0,
    ERR_MIS_1
} ERR_MIS_T ;
#define WRITE_ERR_MIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ERR_MIS_MASK) | ((val << ERR_MIS_START_BIT) & ERR_MIS_MASK )); \
   } 

#define ENABLE_ERR_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ERR_MIS_MASK ); \
   }

#define DISABLE_ERR_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ERR_MIS_MASK ); \
   } 

#define READ_ERR_MIS() \
   ((READ_REGISTER_ULONG(0x10) & ERR_MIS_MASK)  >> ERR_MIS_START_BIT)

#define WHEN_ERR_MIS_HIGH() \
     if ( READ_ERR_MIS() )


#define UNLESS_ERR_MIS_HIGH() \
     if (! READ_ERR_MIS() )


#define WAIT_ERR_MIS_LOW() \
    while ( READ_ERR_MIS() );


#define WAIT_ERR_MIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERR_MIS() && (--___t___ > 0)); }


#define WAIT_ERR_MIS_HIGH() \
    while (! READ_ERR_MIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mis
//
// Return the value of register MIS
//
// Notes : Register masked interrupt status register (MIS) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // VSYNC masked interrupt status 
    // 
#define VSYNC_MIS_MASK 0x8U
#define VSYNC_MIS_OFFSET 3
#define VSYNC_MIS_START_BIT 3
#define VSYNC_MIS_WIDTH 1



typedef enum vsync_mis {
    VSYNC_MIS_0,
    VSYNC_MIS_1
} VSYNC_MIS_T ;
#define WRITE_VSYNC_MIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ VSYNC_MIS_MASK) | ((val << VSYNC_MIS_START_BIT) & VSYNC_MIS_MASK )); \
   } 

#define ENABLE_VSYNC_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  VSYNC_MIS_MASK ); \
   }

#define DISABLE_VSYNC_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~VSYNC_MIS_MASK ); \
   } 

#define READ_VSYNC_MIS() \
   ((READ_REGISTER_ULONG(0x10) & VSYNC_MIS_MASK)  >> VSYNC_MIS_START_BIT)

#define WHEN_VSYNC_MIS_HIGH() \
     if ( READ_VSYNC_MIS() )


#define UNLESS_VSYNC_MIS_HIGH() \
     if (! READ_VSYNC_MIS() )


#define WAIT_VSYNC_MIS_LOW() \
    while ( READ_VSYNC_MIS() );


#define WAIT_VSYNC_MIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSYNC_MIS() && (--___t___ > 0)); }


#define WAIT_VSYNC_MIS_HIGH() \
    while (! READ_VSYNC_MIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mis
//
// Return the value of register MIS
//
// Notes : Register masked interrupt status register (MIS) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line masked interrupt status 
    // 
#define LINE_MIS_MASK 0x10U
#define LINE_MIS_OFFSET 4
#define LINE_MIS_START_BIT 4
#define LINE_MIS_WIDTH 1



typedef enum line_mis {
    LINE_MIS_0,
    LINE_MIS_1
} LINE_MIS_T ;
#define WRITE_LINE_MIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ LINE_MIS_MASK) | ((val << LINE_MIS_START_BIT) & LINE_MIS_MASK )); \
   } 

#define ENABLE_LINE_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  LINE_MIS_MASK ); \
   }

#define DISABLE_LINE_MIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~LINE_MIS_MASK ); \
   } 

#define READ_LINE_MIS() \
   ((READ_REGISTER_ULONG(0x10) & LINE_MIS_MASK)  >> LINE_MIS_START_BIT)

#define WHEN_LINE_MIS_HIGH() \
     if ( READ_LINE_MIS() )


#define UNLESS_LINE_MIS_HIGH() \
     if (! READ_LINE_MIS() )


#define WAIT_LINE_MIS_LOW() \
    while ( READ_LINE_MIS() );


#define WAIT_LINE_MIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LINE_MIS() && (--___t___ > 0)); }


#define WAIT_LINE_MIS_HIGH() \
    while (! READ_LINE_MIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : FRAME_ISC
//
// Return the value of register Icr
//
// Notes : Capture complete interrupt status clear 
//        (ICR) at the offset 0x14, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FRAME_ISC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ FRAME_ISC_MASK) | ((val << FRAME_ISC_START_BIT) & FRAME_ISC_MASK )); \
   } 

#define ENABLE_FRAME_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  FRAME_ISC_MASK ); \
   }

#define DISABLE_FRAME_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~FRAME_ISC_MASK ); \
   } 

#define READ_FRAME_ISC() \
   ((READ_REGISTER_ULONG(0x14) & FRAME_ISC_MASK)  >> FRAME_ISC_START_BIT)

#define WHEN_FRAME_ISC_HIGH() \
     if ( READ_FRAME_ISC() )


#define UNLESS_FRAME_ISC_HIGH() \
     if (! READ_FRAME_ISC() )


#define WAIT_FRAME_ISC_LOW() \
    while ( READ_FRAME_ISC() );


#define WAIT_FRAME_ISC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FRAME_ISC() && (--___t___ > 0)); }


#define WAIT_FRAME_ISC_HIGH() \
    while (! READ_FRAME_ISC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR_ISC
//
// Return the value of register Icr
//
// Notes : Overrun interrupt status clear 
//        (ICR) at the offset 0x14, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR_ISC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OVR_ISC_MASK) | ((val << OVR_ISC_START_BIT) & OVR_ISC_MASK )); \
   } 

#define ENABLE_OVR_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OVR_ISC_MASK ); \
   }

#define DISABLE_OVR_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OVR_ISC_MASK ); \
   } 

#define READ_OVR_ISC() \
   ((READ_REGISTER_ULONG(0x14) & OVR_ISC_MASK)  >> OVR_ISC_START_BIT)

#define WHEN_OVR_ISC_HIGH() \
     if ( READ_OVR_ISC() )


#define UNLESS_OVR_ISC_HIGH() \
     if (! READ_OVR_ISC() )


#define WAIT_OVR_ISC_LOW() \
    while ( READ_OVR_ISC() );


#define WAIT_OVR_ISC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR_ISC() && (--___t___ > 0)); }


#define WAIT_OVR_ISC_HIGH() \
    while (! READ_OVR_ISC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ERR_ISC
//
// Return the value of register Icr
//
// Notes : Synchronization error interrupt status clear 
//        (ICR) at the offset 0x14, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ERR_ISC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ERR_ISC_MASK) | ((val << ERR_ISC_START_BIT) & ERR_ISC_MASK )); \
   } 

#define ENABLE_ERR_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ERR_ISC_MASK ); \
   }

#define DISABLE_ERR_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ERR_ISC_MASK ); \
   } 

#define READ_ERR_ISC() \
   ((READ_REGISTER_ULONG(0x14) & ERR_ISC_MASK)  >> ERR_ISC_START_BIT)

#define WHEN_ERR_ISC_HIGH() \
     if ( READ_ERR_ISC() )


#define UNLESS_ERR_ISC_HIGH() \
     if (! READ_ERR_ISC() )


#define WAIT_ERR_ISC_LOW() \
    while ( READ_ERR_ISC() );


#define WAIT_ERR_ISC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERR_ISC() && (--___t___ > 0)); }


#define WAIT_ERR_ISC_HIGH() \
    while (! READ_ERR_ISC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : VSYNC_ISC
//
// Return the value of register Icr
//
// Notes : Vertical synch interrupt status clear 
//        (ICR) at the offset 0x14, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VSYNC_ISC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ VSYNC_ISC_MASK) | ((val << VSYNC_ISC_START_BIT) & VSYNC_ISC_MASK )); \
   } 

#define ENABLE_VSYNC_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  VSYNC_ISC_MASK ); \
   }

#define DISABLE_VSYNC_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~VSYNC_ISC_MASK ); \
   } 

#define READ_VSYNC_ISC() \
   ((READ_REGISTER_ULONG(0x14) & VSYNC_ISC_MASK)  >> VSYNC_ISC_START_BIT)

#define WHEN_VSYNC_ISC_HIGH() \
     if ( READ_VSYNC_ISC() )


#define UNLESS_VSYNC_ISC_HIGH() \
     if (! READ_VSYNC_ISC() )


#define WAIT_VSYNC_ISC_LOW() \
    while ( READ_VSYNC_ISC() );


#define WAIT_VSYNC_ISC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VSYNC_ISC() && (--___t___ > 0)); }


#define WAIT_VSYNC_ISC_HIGH() \
    while (! READ_VSYNC_ISC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LINE_ISC
//
// Return the value of register Icr
//
// Notes : line interrupt status clear 
//        (ICR) at the offset 0x14, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LINE_ISC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ LINE_ISC_MASK) | ((val << LINE_ISC_START_BIT) & LINE_ISC_MASK )); \
   } 

#define ENABLE_LINE_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  LINE_ISC_MASK ); \
   }

#define DISABLE_LINE_ISC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~LINE_ISC_MASK ); \
   } 

#define READ_LINE_ISC() \
   ((READ_REGISTER_ULONG(0x14) & LINE_ISC_MASK)  >> LINE_ISC_START_BIT)

#define WHEN_LINE_ISC_HIGH() \
     if ( READ_LINE_ISC() )


#define UNLESS_LINE_ISC_HIGH() \
     if (! READ_LINE_ISC() )


#define WAIT_LINE_ISC_LOW() \
    while ( READ_LINE_ISC() );


#define WAIT_LINE_ISC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LINE_ISC() && (--___t___ > 0)); }


#define WAIT_LINE_ISC_HIGH() \
    while (! READ_LINE_ISC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Escr
//
// Return the value of register ESCR
//
// Notes : Register Escr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ESCR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_ESCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_ESCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_ESCR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Escr
//
// Return the value of register ESCR
//
// Notes : Register embedded synchronization code register (ESCR) at the offset 0x18, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame start delimiter code 
    // 
#define FSC_MASK 0xFFU
#define FSC_OFFSET 7
#define FSC_START_BIT 0
#define FSC_WIDTH 8


#define ESCR_REG 0x18

typedef enum fsc {
    FSC_0,
    FSC_1
} FSC_T ;
#define READ_FSC() \
   ((READ_REGISTER_ULONG(0x18) & FSC_MASK)  >> FSC_START_BIT)

#define WRITE_FSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FSC_MASK) | ((val << FSC_START_BIT) & FSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Escr
//
// Return the value of register ESCR
//
// Notes : Register embedded synchronization code register (ESCR) at the offset 0x18, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line start delimiter code 
    // 
#define LSC_MASK 0xFF00U
#define LSC_OFFSET 15
#define LSC_START_BIT 8
#define LSC_WIDTH 8



typedef enum lsc {
    LSC_0,
    LSC_1
} LSC_T ;
#define READ_LSC() \
   ((READ_REGISTER_ULONG(0x18) & LSC_MASK)  >> LSC_START_BIT)

#define WRITE_LSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ LSC_MASK) | ((val << LSC_START_BIT) & LSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Escr
//
// Return the value of register ESCR
//
// Notes : Register embedded synchronization code register (ESCR) at the offset 0x18, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line end delimiter code 
    // 
#define LEC_MASK 0xFF0000U
#define LEC_OFFSET 23
#define LEC_START_BIT 16
#define LEC_WIDTH 8



typedef enum lec {
    LEC_0,
    LEC_1
} LEC_T ;
#define READ_LEC() \
   ((READ_REGISTER_ULONG(0x18) & LEC_MASK)  >> LEC_START_BIT)

#define WRITE_LEC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ LEC_MASK) | ((val << LEC_START_BIT) & LEC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Escr
//
// Return the value of register ESCR
//
// Notes : Register embedded synchronization code register (ESCR) at the offset 0x18, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame end delimiter code 
    // 
#define FEC_MASK 0xFF000000U
#define FEC_OFFSET 31
#define FEC_START_BIT 24
#define FEC_WIDTH 8



typedef enum fec {
    FEC_0,
    FEC_1
} FEC_T ;
#define READ_FEC() \
   ((READ_REGISTER_ULONG(0x18) & FEC_MASK)  >> FEC_START_BIT)

#define WRITE_FEC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FEC_MASK) | ((val << FEC_START_BIT) & FEC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Esur
//
// Return the value of register ESUR
//
// Notes : Register Esur at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ESUR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_ESUR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_ESUR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_ESUR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Esur
//
// Return the value of register ESUR
//
// Notes : Register embedded synchronization unmask register (ESUR) at the offset 0x1C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame start delimiter unmask 
    // 
#define FSU_MASK 0xFFU
#define FSU_OFFSET 7
#define FSU_START_BIT 0
#define FSU_WIDTH 8


#define ESUR_REG 0x1C

typedef enum fsu {
    FSU_0,
    FSU_1
} FSU_T ;
#define READ_FSU() \
   ((READ_REGISTER_ULONG(0x1C) & FSU_MASK)  >> FSU_START_BIT)

#define WRITE_FSU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ FSU_MASK) | ((val << FSU_START_BIT) & FSU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Esur
//
// Return the value of register ESUR
//
// Notes : Register embedded synchronization unmask register (ESUR) at the offset 0x1C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line start delimiter unmask 
    // 
#define LSU_MASK 0xFF00U
#define LSU_OFFSET 15
#define LSU_START_BIT 8
#define LSU_WIDTH 8



typedef enum lsu {
    LSU_0,
    LSU_1
} LSU_T ;
#define READ_LSU() \
   ((READ_REGISTER_ULONG(0x1C) & LSU_MASK)  >> LSU_START_BIT)

#define WRITE_LSU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LSU_MASK) | ((val << LSU_START_BIT) & LSU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Esur
//
// Return the value of register ESUR
//
// Notes : Register embedded synchronization unmask register (ESUR) at the offset 0x1C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line end delimiter unmask 
    // 
#define LEU_MASK 0xFF0000U
#define LEU_OFFSET 23
#define LEU_START_BIT 16
#define LEU_WIDTH 8



typedef enum leu {
    LEU_0,
    LEU_1
} LEU_T ;
#define READ_LEU() \
   ((READ_REGISTER_ULONG(0x1C) & LEU_MASK)  >> LEU_START_BIT)

#define WRITE_LEU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ LEU_MASK) | ((val << LEU_START_BIT) & LEU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Esur
//
// Return the value of register ESUR
//
// Notes : Register embedded synchronization unmask register (ESUR) at the offset 0x1C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame end delimiter unmask 
    // 
#define FEU_MASK 0xFF000000U
#define FEU_OFFSET 31
#define FEU_START_BIT 24
#define FEU_WIDTH 8



typedef enum feu {
    FEU_0,
    FEU_1
} FEU_T ;
#define READ_FEU() \
   ((READ_REGISTER_ULONG(0x1C) & FEU_MASK)  >> FEU_START_BIT)

#define WRITE_FEU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ FEU_MASK) | ((val << FEU_START_BIT) & FEU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cwstrt
//
// Return the value of register CWSTRT
//
// Notes : Register Cwstrt at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CWSTRT( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_CWSTRT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_CWSTRT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_CWSTRT() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cwstrt
//
// Return the value of register CWSTRT
//
// Notes : Register crop window start (CWSTRT) at the offset 0x20, Bits 0:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Horizontal offset count 
    // 
#define HOFFCNT_MASK 0x3FFFU
#define HOFFCNT_OFFSET 13
#define HOFFCNT_START_BIT 0
#define HOFFCNT_WIDTH 14


#define CWSTRT_REG 0x20

typedef enum hoffcnt {
    HOFFCNT_0,
    HOFFCNT_1
} HOFFCNT_T ;
#define READ_HOFFCNT() \
   ((READ_REGISTER_ULONG(0x20) & HOFFCNT_MASK)  >> HOFFCNT_START_BIT)

#define WRITE_HOFFCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ HOFFCNT_MASK) | ((val << HOFFCNT_START_BIT) & HOFFCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cwstrt
//
// Return the value of register CWSTRT
//
// Notes : Register crop window start (CWSTRT) at the offset 0x20, Bits 16:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Vertical start line count 
    // 
#define VST_MASK 0x1FFF0000U
#define VST_OFFSET 28
#define VST_START_BIT 16
#define VST_WIDTH 13



typedef enum vst {
    VST_0,
    VST_1
} VST_T ;
#define READ_VST() \
   ((READ_REGISTER_ULONG(0x20) & VST_MASK)  >> VST_START_BIT)

#define WRITE_VST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ VST_MASK) | ((val << VST_START_BIT) & VST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cwsize
//
// Return the value of register CWSIZE
//
// Notes : Register Cwsize at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CWSIZE( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_CWSIZE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_CWSIZE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_CWSIZE() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cwsize
//
// Return the value of register CWSIZE
//
// Notes : Register crop window size (CWSIZE) at the offset 0x24, Bits 0:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture count 
    // 
#define CAPCNT_MASK 0x3FFFU
#define CAPCNT_OFFSET 13
#define CAPCNT_START_BIT 0
#define CAPCNT_WIDTH 14


#define CWSIZE_REG 0x24

typedef enum capcnt {
    CAPCNT_0,
    CAPCNT_1
} CAPCNT_T ;
#define READ_CAPCNT() \
   ((READ_REGISTER_ULONG(0x24) & CAPCNT_MASK)  >> CAPCNT_START_BIT)

#define WRITE_CAPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ CAPCNT_MASK) | ((val << CAPCNT_START_BIT) & CAPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cwsize
//
// Return the value of register CWSIZE
//
// Notes : Register crop window size (CWSIZE) at the offset 0x24, Bits 16:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Vertical line count 
    // 
#define VLINE_MASK 0x3FFF0000U
#define VLINE_OFFSET 29
#define VLINE_START_BIT 16
#define VLINE_WIDTH 14



typedef enum vline {
    VLINE_0,
    VLINE_1
} VLINE_T ;
#define READ_VLINE() \
   ((READ_REGISTER_ULONG(0x24) & VLINE_MASK)  >> VLINE_START_BIT)

#define WRITE_VLINE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ VLINE_MASK) | ((val << VLINE_START_BIT) & VLINE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DR() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : BYTE0
//
// Return the value of register Dr
//
// Notes : Data byte 0 
//        (DR) at the offset 0x28, Bits 0:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_BYTE0() \
   ((READ_REGISTER_ULONG(0x28) & BYTE0_MASK)  >> BYTE0_START_BIT)

#define WRITE_BYTE0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BYTE0_MASK) | ((val << BYTE0_START_BIT) & BYTE0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : BYTE1
//
// Return the value of register Dr
//
// Notes : Data byte 1 
//        (DR) at the offset 0x28, Bits 8:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_BYTE1() \
   ((READ_REGISTER_ULONG(0x28) & BYTE1_MASK)  >> BYTE1_START_BIT)

#define WRITE_BYTE1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BYTE1_MASK) | ((val << BYTE1_START_BIT) & BYTE1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : BYTE2
//
// Return the value of register Dr
//
// Notes : Data byte 2 
//        (DR) at the offset 0x28, Bits 16:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_BYTE2() \
   ((READ_REGISTER_ULONG(0x28) & BYTE2_MASK)  >> BYTE2_START_BIT)

#define WRITE_BYTE2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BYTE2_MASK) | ((val << BYTE2_START_BIT) & BYTE2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : BYTE3
//
// Return the value of register Dr
//
// Notes : Data byte 3 
//        (DR) at the offset 0x28, Bits 24:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_BYTE3() \
   ((READ_REGISTER_ULONG(0x28) & BYTE3_MASK)  >> BYTE3_START_BIT)

#define WRITE_BYTE3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BYTE3_MASK) | ((val << BYTE3_START_BIT) & BYTE3_MASK )); \
   } 

