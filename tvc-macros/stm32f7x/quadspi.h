/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/quadspi.h
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
 
#define QUADSPI 0xA0001000
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
// Function : EN
//
// Return the value of register Cr
//
// Notes : Enable 
//        (CR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x0) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ABORT
//
// Return the value of register Cr
//
// Notes : Abort request 
//        (CR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ABORT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ABORT_MASK) | ((val << ABORT_START_BIT) & ABORT_MASK )); \
   } 

#define ENABLE_ABORT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ABORT_MASK ); \
   }

#define DISABLE_ABORT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ABORT_MASK ); \
   } 

#define READ_ABORT() \
   ((READ_REGISTER_ULONG(0x0) & ABORT_MASK)  >> ABORT_START_BIT)

#define WHEN_ABORT_HIGH() \
     if ( READ_ABORT() )


#define UNLESS_ABORT_HIGH() \
     if (! READ_ABORT() )


#define WAIT_ABORT_LOW() \
    while ( READ_ABORT() );


#define WAIT_ABORT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABORT() && (--___t___ > 0)); }


#define WAIT_ABORT_HIGH() \
    while (! READ_ABORT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMAEN
//
// Return the value of register Cr
//
// Notes : DMA enable 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DMAEN_MASK) | ((val << DMAEN_START_BIT) & DMAEN_MASK )); \
   } 

#define ENABLE_DMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DMAEN_MASK ); \
   }

#define DISABLE_DMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DMAEN_MASK ); \
   } 

#define READ_DMAEN() \
   ((READ_REGISTER_ULONG(0x0) & DMAEN_MASK)  >> DMAEN_START_BIT)

#define WHEN_DMAEN_HIGH() \
     if ( READ_DMAEN() )


#define UNLESS_DMAEN_HIGH() \
     if (! READ_DMAEN() )


#define WAIT_DMAEN_LOW() \
    while ( READ_DMAEN() );


#define WAIT_DMAEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAEN() && (--___t___ > 0)); }


#define WAIT_DMAEN_HIGH() \
    while (! READ_DMAEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TCEN
//
// Return the value of register Cr
//
// Notes : Timeout counter enable 
//        (CR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TCEN_MASK) | ((val << TCEN_START_BIT) & TCEN_MASK )); \
   } 

#define ENABLE_TCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TCEN_MASK ); \
   }

#define DISABLE_TCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TCEN_MASK ); \
   } 

#define READ_TCEN() \
   ((READ_REGISTER_ULONG(0x0) & TCEN_MASK)  >> TCEN_START_BIT)

#define WHEN_TCEN_HIGH() \
     if ( READ_TCEN() )


#define UNLESS_TCEN_HIGH() \
     if (! READ_TCEN() )


#define WAIT_TCEN_LOW() \
    while ( READ_TCEN() );


#define WAIT_TCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCEN() && (--___t___ > 0)); }


#define WAIT_TCEN_HIGH() \
    while (! READ_TCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SSHIFT
//
// Return the value of register Cr
//
// Notes : Sample shift 
//        (CR) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SSHIFT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SSHIFT_MASK) | ((val << SSHIFT_START_BIT) & SSHIFT_MASK )); \
   } 

#define ENABLE_SSHIFT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  SSHIFT_MASK ); \
   }

#define DISABLE_SSHIFT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~SSHIFT_MASK ); \
   } 

#define READ_SSHIFT() \
   ((READ_REGISTER_ULONG(0x0) & SSHIFT_MASK)  >> SSHIFT_START_BIT)

#define WHEN_SSHIFT_HIGH() \
     if ( READ_SSHIFT() )


#define UNLESS_SSHIFT_HIGH() \
     if (! READ_SSHIFT() )


#define WAIT_SSHIFT_LOW() \
    while ( READ_SSHIFT() );


#define WAIT_SSHIFT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SSHIFT() && (--___t___ > 0)); }


#define WAIT_SSHIFT_HIGH() \
    while (! READ_SSHIFT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DFM
//
// Return the value of register Cr
//
// Notes : Dual-flash mode 
//        (CR) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DFM_MASK) | ((val << DFM_START_BIT) & DFM_MASK )); \
   } 

#define ENABLE_DFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DFM_MASK ); \
   }

#define DISABLE_DFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DFM_MASK ); \
   } 

#define READ_DFM() \
   ((READ_REGISTER_ULONG(0x0) & DFM_MASK)  >> DFM_START_BIT)

#define WHEN_DFM_HIGH() \
     if ( READ_DFM() )


#define UNLESS_DFM_HIGH() \
     if (! READ_DFM() )


#define WAIT_DFM_LOW() \
    while ( READ_DFM() );


#define WAIT_DFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DFM() && (--___t___ > 0)); }


#define WAIT_DFM_HIGH() \
    while (! READ_DFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FSEL
//
// Return the value of register Cr
//
// Notes : FLASH memory selection 
//        (CR) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FSEL_MASK) | ((val << FSEL_START_BIT) & FSEL_MASK )); \
   } 

#define ENABLE_FSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FSEL_MASK ); \
   }

#define DISABLE_FSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FSEL_MASK ); \
   } 

#define READ_FSEL() \
   ((READ_REGISTER_ULONG(0x0) & FSEL_MASK)  >> FSEL_START_BIT)

#define WHEN_FSEL_HIGH() \
     if ( READ_FSEL() )


#define UNLESS_FSEL_HIGH() \
     if (! READ_FSEL() )


#define WAIT_FSEL_LOW() \
    while ( READ_FSEL() );


#define WAIT_FSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FSEL() && (--___t___ > 0)); }


#define WAIT_FSEL_HIGH() \
    while (! READ_FSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FTHRES
//
// Return the value of register Cr
//
// Notes : IFO threshold level 
//        (CR) at the offset 0x0, Bits 8:12
//
/////////////////////////////////////////////////////////////////////////
#define READ_FTHRES() \
   ((READ_REGISTER_ULONG(0x0) & FTHRES_MASK)  >> FTHRES_START_BIT)

#define WRITE_FTHRES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FTHRES_MASK) | ((val << FTHRES_START_BIT) & FTHRES_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TEIE
//
// Return the value of register Cr
//
// Notes : Transfer error interrupt enable 
//        (CR) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x0) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TCIE
//
// Return the value of register Cr
//
// Notes : Transfer complete interrupt enable 
//        (CR) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x0) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FTIE
//
// Return the value of register Cr
//
// Notes : FIFO threshold interrupt enable 
//        (CR) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FTIE_MASK) | ((val << FTIE_START_BIT) & FTIE_MASK )); \
   } 

#define ENABLE_FTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FTIE_MASK ); \
   }

#define DISABLE_FTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FTIE_MASK ); \
   } 

#define READ_FTIE() \
   ((READ_REGISTER_ULONG(0x0) & FTIE_MASK)  >> FTIE_START_BIT)

#define WHEN_FTIE_HIGH() \
     if ( READ_FTIE() )


#define UNLESS_FTIE_HIGH() \
     if (! READ_FTIE() )


#define WAIT_FTIE_LOW() \
    while ( READ_FTIE() );


#define WAIT_FTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FTIE() && (--___t___ > 0)); }


#define WAIT_FTIE_HIGH() \
    while (! READ_FTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SMIE
//
// Return the value of register Cr
//
// Notes : Status match interrupt enable 
//        (CR) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SMIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SMIE_MASK) | ((val << SMIE_START_BIT) & SMIE_MASK )); \
   } 

#define ENABLE_SMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  SMIE_MASK ); \
   }

#define DISABLE_SMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~SMIE_MASK ); \
   } 

#define READ_SMIE() \
   ((READ_REGISTER_ULONG(0x0) & SMIE_MASK)  >> SMIE_START_BIT)

#define WHEN_SMIE_HIGH() \
     if ( READ_SMIE() )


#define UNLESS_SMIE_HIGH() \
     if (! READ_SMIE() )


#define WAIT_SMIE_LOW() \
    while ( READ_SMIE() );


#define WAIT_SMIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SMIE() && (--___t___ > 0)); }


#define WAIT_SMIE_HIGH() \
    while (! READ_SMIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TOIE
//
// Return the value of register Cr
//
// Notes : TimeOut interrupt enable 
//        (CR) at the offset 0x0, Bits 20:20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TOIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TOIE_MASK) | ((val << TOIE_START_BIT) & TOIE_MASK )); \
   } 

#define ENABLE_TOIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TOIE_MASK ); \
   }

#define DISABLE_TOIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TOIE_MASK ); \
   } 

#define READ_TOIE() \
   ((READ_REGISTER_ULONG(0x0) & TOIE_MASK)  >> TOIE_START_BIT)

#define WHEN_TOIE_HIGH() \
     if ( READ_TOIE() )


#define UNLESS_TOIE_HIGH() \
     if (! READ_TOIE() )


#define WAIT_TOIE_LOW() \
    while ( READ_TOIE() );


#define WAIT_TOIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOIE() && (--___t___ > 0)); }


#define WAIT_TOIE_HIGH() \
    while (! READ_TOIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : APMS
//
// Return the value of register Cr
//
// Notes : Automatic poll mode stop 
//        (CR) at the offset 0x0, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_APMS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ APMS_MASK) | ((val << APMS_START_BIT) & APMS_MASK )); \
   } 

#define ENABLE_APMS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  APMS_MASK ); \
   }

#define DISABLE_APMS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~APMS_MASK ); \
   } 

#define READ_APMS() \
   ((READ_REGISTER_ULONG(0x0) & APMS_MASK)  >> APMS_START_BIT)

#define WHEN_APMS_HIGH() \
     if ( READ_APMS() )


#define UNLESS_APMS_HIGH() \
     if (! READ_APMS() )


#define WAIT_APMS_LOW() \
    while ( READ_APMS() );


#define WAIT_APMS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_APMS() && (--___t___ > 0)); }


#define WAIT_APMS_HIGH() \
    while (! READ_APMS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PMM
//
// Return the value of register Cr
//
// Notes : Polling match mode 
//        (CR) at the offset 0x0, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PMM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PMM_MASK) | ((val << PMM_START_BIT) & PMM_MASK )); \
   } 

#define ENABLE_PMM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PMM_MASK ); \
   }

#define DISABLE_PMM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PMM_MASK ); \
   } 

#define READ_PMM() \
   ((READ_REGISTER_ULONG(0x0) & PMM_MASK)  >> PMM_START_BIT)

#define WHEN_PMM_HIGH() \
     if ( READ_PMM() )


#define UNLESS_PMM_HIGH() \
     if (! READ_PMM() )


#define WAIT_PMM_LOW() \
    while ( READ_PMM() );


#define WAIT_PMM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PMM() && (--___t___ > 0)); }


#define WAIT_PMM_HIGH() \
    while (! READ_PMM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PRESCALER
//
// Return the value of register Cr
//
// Notes : Clock prescaler 
//        (CR) at the offset 0x0, Bits 24:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_PRESCALER() \
   ((READ_REGISTER_ULONG(0x0) & PRESCALER_MASK)  >> PRESCALER_START_BIT)

#define WRITE_PRESCALER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PRESCALER_MASK) | ((val << PRESCALER_START_BIT) & PRESCALER_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dcr
//
// Return the value of register DCR
//
// Notes : Register Dcr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DCR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_DCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_DCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_DCR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dcr
//
// Return the value of register DCR
//
// Notes : Register device configuration register (DCR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mode 0 / mode 3 
    // 
#define CKMODE_MASK 0x1U
#define CKMODE_OFFSET 0
#define CKMODE_START_BIT 0
#define CKMODE_WIDTH 1


#define DCR_REG 0x4

typedef enum ckmode {
    CKMODE_0,
    CKMODE_1
} CKMODE_T ;
#define WRITE_CKMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CKMODE_MASK) | ((val << CKMODE_START_BIT) & CKMODE_MASK )); \
   } 

#define ENABLE_CKMODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CKMODE_MASK ); \
   }

#define DISABLE_CKMODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CKMODE_MASK ); \
   } 

#define READ_CKMODE() \
   ((READ_REGISTER_ULONG(0x4) & CKMODE_MASK)  >> CKMODE_START_BIT)

#define WHEN_CKMODE_HIGH() \
     if ( READ_CKMODE() )


#define UNLESS_CKMODE_HIGH() \
     if (! READ_CKMODE() )


#define WAIT_CKMODE_LOW() \
    while ( READ_CKMODE() );


#define WAIT_CKMODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CKMODE() && (--___t___ > 0)); }


#define WAIT_CKMODE_HIGH() \
    while (! READ_CKMODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dcr
//
// Return the value of register DCR
//
// Notes : Register device configuration register (DCR) at the offset 0x4, Bits 8:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Chip select high time 
    // 
#define CSHT_MASK 0x700U
#define CSHT_OFFSET 10
#define CSHT_START_BIT 8
#define CSHT_WIDTH 3



typedef enum csht {
    CSHT_0,
    CSHT_1
} CSHT_T ;
#define READ_CSHT() \
   ((READ_REGISTER_ULONG(0x4) & CSHT_MASK)  >> CSHT_START_BIT)

#define WRITE_CSHT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CSHT_MASK) | ((val << CSHT_START_BIT) & CSHT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dcr
//
// Return the value of register DCR
//
// Notes : Register device configuration register (DCR) at the offset 0x4, Bits 16:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FLASH memory size 
    // 
#define FSIZE_MASK 0x1F0000U
#define FSIZE_OFFSET 20
#define FSIZE_START_BIT 16
#define FSIZE_WIDTH 5



typedef enum fsize {
    FSIZE_0,
    FSIZE_1
} FSIZE_T ;
#define READ_FSIZE() \
   ((READ_REGISTER_ULONG(0x4) & FSIZE_MASK)  >> FSIZE_START_BIT)

#define WRITE_FSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ FSIZE_MASK) | ((val << FSIZE_START_BIT) & FSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_SR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : TEF
//
// Return the value of register Sr
//
// Notes : Transfer error flag 
//        (SR) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TEF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TEF_MASK) | ((val << TEF_START_BIT) & TEF_MASK )); \
   } 

#define ENABLE_TEF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TEF_MASK ); \
   }

#define DISABLE_TEF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TEF_MASK ); \
   } 

#define READ_TEF() \
   ((READ_REGISTER_ULONG(0x8) & TEF_MASK)  >> TEF_START_BIT)

#define WHEN_TEF_HIGH() \
     if ( READ_TEF() )


#define UNLESS_TEF_HIGH() \
     if (! READ_TEF() )


#define WAIT_TEF_LOW() \
    while ( READ_TEF() );


#define WAIT_TEF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEF() && (--___t___ > 0)); }


#define WAIT_TEF_HIGH() \
    while (! READ_TEF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TCF
//
// Return the value of register Sr
//
// Notes : Transfer complete flag 
//        (SR) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TCF_MASK) | ((val << TCF_START_BIT) & TCF_MASK )); \
   } 

#define ENABLE_TCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TCF_MASK ); \
   }

#define DISABLE_TCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TCF_MASK ); \
   } 

#define READ_TCF() \
   ((READ_REGISTER_ULONG(0x8) & TCF_MASK)  >> TCF_START_BIT)

#define WHEN_TCF_HIGH() \
     if ( READ_TCF() )


#define UNLESS_TCF_HIGH() \
     if (! READ_TCF() )


#define WAIT_TCF_LOW() \
    while ( READ_TCF() );


#define WAIT_TCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCF() && (--___t___ > 0)); }


#define WAIT_TCF_HIGH() \
    while (! READ_TCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FTF
//
// Return the value of register Sr
//
// Notes : FIFO threshold flag 
//        (SR) at the offset 0x8, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FTF_MASK) | ((val << FTF_START_BIT) & FTF_MASK )); \
   } 

#define ENABLE_FTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  FTF_MASK ); \
   }

#define DISABLE_FTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~FTF_MASK ); \
   } 

#define READ_FTF() \
   ((READ_REGISTER_ULONG(0x8) & FTF_MASK)  >> FTF_START_BIT)

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
// Function : SMF
//
// Return the value of register Sr
//
// Notes : Status match flag 
//        (SR) at the offset 0x8, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SMF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SMF_MASK) | ((val << SMF_START_BIT) & SMF_MASK )); \
   } 

#define ENABLE_SMF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SMF_MASK ); \
   }

#define DISABLE_SMF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SMF_MASK ); \
   } 

#define READ_SMF() \
   ((READ_REGISTER_ULONG(0x8) & SMF_MASK)  >> SMF_START_BIT)

#define WHEN_SMF_HIGH() \
     if ( READ_SMF() )


#define UNLESS_SMF_HIGH() \
     if (! READ_SMF() )


#define WAIT_SMF_LOW() \
    while ( READ_SMF() );


#define WAIT_SMF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SMF() && (--___t___ > 0)); }


#define WAIT_SMF_HIGH() \
    while (! READ_SMF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TOF
//
// Return the value of register Sr
//
// Notes : Timeout flag 
//        (SR) at the offset 0x8, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TOF_MASK) | ((val << TOF_START_BIT) & TOF_MASK )); \
   } 

#define ENABLE_TOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TOF_MASK ); \
   }

#define DISABLE_TOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TOF_MASK ); \
   } 

#define READ_TOF() \
   ((READ_REGISTER_ULONG(0x8) & TOF_MASK)  >> TOF_START_BIT)

#define WHEN_TOF_HIGH() \
     if ( READ_TOF() )


#define UNLESS_TOF_HIGH() \
     if (! READ_TOF() )


#define WAIT_TOF_LOW() \
    while ( READ_TOF() );


#define WAIT_TOF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOF() && (--___t___ > 0)); }


#define WAIT_TOF_HIGH() \
    while (! READ_TOF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BUSY
//
// Return the value of register Sr
//
// Notes : Busy 
//        (SR) at the offset 0x8, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BUSY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  BUSY_MASK ); \
   }

#define DISABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY() \
   ((READ_REGISTER_ULONG(0x8) & BUSY_MASK)  >> BUSY_START_BIT)

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
// Function : FLEVEL
//
// Return the value of register Sr
//
// Notes : FIFO level 
//        (SR) at the offset 0x8, Bits 8:14
//
/////////////////////////////////////////////////////////////////////////
#define READ_FLEVEL() \
   ((READ_REGISTER_ULONG(0x8) & FLEVEL_MASK)  >> FLEVEL_START_BIT)

#define WRITE_FLEVEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FLEVEL_MASK) | ((val << FLEVEL_START_BIT) & FLEVEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fcr
//
// Return the value of register FCR
//
// Notes : Register Fcr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FCR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_FCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_FCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_FCR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fcr
//
// Return the value of register FCR
//
// Notes : Register flag clear register (FCR) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear transfer error flag 
    // 
#define CTEF_MASK 0x1U
#define CTEF_OFFSET 0
#define CTEF_START_BIT 0
#define CTEF_WIDTH 1


#define FCR_REG 0xC

typedef enum ctef {
    CTEF_0,
    CTEF_1
} CTEF_T ;
#define WRITE_CTEF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CTEF_MASK) | ((val << CTEF_START_BIT) & CTEF_MASK )); \
   } 

#define ENABLE_CTEF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CTEF_MASK ); \
   }

#define DISABLE_CTEF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CTEF_MASK ); \
   } 

#define READ_CTEF() \
   ((READ_REGISTER_ULONG(0xC) & CTEF_MASK)  >> CTEF_START_BIT)

#define WHEN_CTEF_HIGH() \
     if ( READ_CTEF() )


#define UNLESS_CTEF_HIGH() \
     if (! READ_CTEF() )


#define WAIT_CTEF_LOW() \
    while ( READ_CTEF() );


#define WAIT_CTEF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEF() && (--___t___ > 0)); }


#define WAIT_CTEF_HIGH() \
    while (! READ_CTEF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fcr
//
// Return the value of register FCR
//
// Notes : Register flag clear register (FCR) at the offset 0xC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear transfer complete flag 
    // 
#define CTCF_MASK 0x2U
#define CTCF_OFFSET 1
#define CTCF_START_BIT 1
#define CTCF_WIDTH 1



typedef enum ctcf {
    CTCF_0,
    CTCF_1
} CTCF_T ;
#define WRITE_CTCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CTCF_MASK) | ((val << CTCF_START_BIT) & CTCF_MASK )); \
   } 

#define ENABLE_CTCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CTCF_MASK ); \
   }

#define DISABLE_CTCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CTCF_MASK ); \
   } 

#define READ_CTCF() \
   ((READ_REGISTER_ULONG(0xC) & CTCF_MASK)  >> CTCF_START_BIT)

#define WHEN_CTCF_HIGH() \
     if ( READ_CTCF() )


#define UNLESS_CTCF_HIGH() \
     if (! READ_CTCF() )


#define WAIT_CTCF_LOW() \
    while ( READ_CTCF() );


#define WAIT_CTCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCF() && (--___t___ > 0)); }


#define WAIT_CTCF_HIGH() \
    while (! READ_CTCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fcr
//
// Return the value of register FCR
//
// Notes : Register flag clear register (FCR) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear status match flag 
    // 
#define CSMF_MASK 0x8U
#define CSMF_OFFSET 3
#define CSMF_START_BIT 3
#define CSMF_WIDTH 1



typedef enum csmf {
    CSMF_0,
    CSMF_1
} CSMF_T ;
#define WRITE_CSMF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CSMF_MASK) | ((val << CSMF_START_BIT) & CSMF_MASK )); \
   } 

#define ENABLE_CSMF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CSMF_MASK ); \
   }

#define DISABLE_CSMF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CSMF_MASK ); \
   } 

#define READ_CSMF() \
   ((READ_REGISTER_ULONG(0xC) & CSMF_MASK)  >> CSMF_START_BIT)

#define WHEN_CSMF_HIGH() \
     if ( READ_CSMF() )


#define UNLESS_CSMF_HIGH() \
     if (! READ_CSMF() )


#define WAIT_CSMF_LOW() \
    while ( READ_CSMF() );


#define WAIT_CSMF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSMF() && (--___t___ > 0)); }


#define WAIT_CSMF_HIGH() \
    while (! READ_CSMF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fcr
//
// Return the value of register FCR
//
// Notes : Register flag clear register (FCR) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear timeout flag 
    // 
#define CTOF_MASK 0x10U
#define CTOF_OFFSET 4
#define CTOF_START_BIT 4
#define CTOF_WIDTH 1



typedef enum ctof {
    CTOF_0,
    CTOF_1
} CTOF_T ;
#define WRITE_CTOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CTOF_MASK) | ((val << CTOF_START_BIT) & CTOF_MASK )); \
   } 

#define ENABLE_CTOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CTOF_MASK ); \
   }

#define DISABLE_CTOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CTOF_MASK ); \
   } 

#define READ_CTOF() \
   ((READ_REGISTER_ULONG(0xC) & CTOF_MASK)  >> CTOF_START_BIT)

#define WHEN_CTOF_HIGH() \
     if ( READ_CTOF() )


#define UNLESS_CTOF_HIGH() \
     if (! READ_CTOF() )


#define WAIT_CTOF_LOW() \
    while ( READ_CTOF() );


#define WAIT_CTOF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTOF() && (--___t___ > 0)); }


#define WAIT_CTOF_HIGH() \
    while (! READ_CTOF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dlr
//
// Return the value of register DLR
//
// Notes : Register Dlr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DLR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_DLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_DLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_DLR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dlr
//
// Return the value of register DLR
//
// Notes : Register data length register (DLR) at the offset 0x10, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data length 
    // 
#define DL_MASK 0xFFFFFFFFU
#define DL_OFFSET 31
#define DL_START_BIT 0
#define DL_WIDTH 32


#define DLR_REG 0x10

typedef enum dl {
    DL_0,
    DL_1
} DL_T ;
#define READ_DL() \
   ((READ_REGISTER_ULONG(0x10) & DL_MASK)  >> DL_START_BIT)

#define WRITE_DL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DL_MASK) | ((val << DL_START_BIT) & DL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register Ccr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_CCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_CCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_CCR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Instruction 
    // 
#define INSTRUCTION_MASK 0xFFU
#define INSTRUCTION_OFFSET 7
#define INSTRUCTION_START_BIT 0
#define INSTRUCTION_WIDTH 8


#define CCR_REG 0x14

typedef enum instruction {
    INSTRUCTION_0,
    INSTRUCTION_1
} INSTRUCTION_T ;
#define READ_INSTRUCTION() \
   ((READ_REGISTER_ULONG(0x14) & INSTRUCTION_MASK)  >> INSTRUCTION_START_BIT)

#define WRITE_INSTRUCTION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ INSTRUCTION_MASK) | ((val << INSTRUCTION_START_BIT) & INSTRUCTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Instruction mode 
    // 
#define IMODE_MASK 0x300U
#define IMODE_OFFSET 9
#define IMODE_START_BIT 8
#define IMODE_WIDTH 2



typedef enum imode {
    IMODE_0,
    IMODE_1
} IMODE_T ;
#define READ_IMODE() \
   ((READ_REGISTER_ULONG(0x14) & IMODE_MASK)  >> IMODE_START_BIT)

#define WRITE_IMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ IMODE_MASK) | ((val << IMODE_START_BIT) & IMODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address mode 
    // 
#define ADMODE_MASK 0xC00U
#define ADMODE_OFFSET 11
#define ADMODE_START_BIT 10
#define ADMODE_WIDTH 2



typedef enum admode {
    ADMODE_0,
    ADMODE_1
} ADMODE_T ;
#define READ_ADMODE() \
   ((READ_REGISTER_ULONG(0x14) & ADMODE_MASK)  >> ADMODE_START_BIT)

#define WRITE_ADMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ADMODE_MASK) | ((val << ADMODE_START_BIT) & ADMODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address size 
    // 
#define ADSIZE_MASK 0x3000U
#define ADSIZE_OFFSET 13
#define ADSIZE_START_BIT 12
#define ADSIZE_WIDTH 2



typedef enum adsize {
    ADSIZE_0,
    ADSIZE_1
} ADSIZE_T ;
#define READ_ADSIZE() \
   ((READ_REGISTER_ULONG(0x14) & ADSIZE_MASK)  >> ADSIZE_START_BIT)

#define WRITE_ADSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ADSIZE_MASK) | ((val << ADSIZE_START_BIT) & ADSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate bytes mode 
    // 
#define ABMODE_MASK 0xC000U
#define ABMODE_OFFSET 15
#define ABMODE_START_BIT 14
#define ABMODE_WIDTH 2



typedef enum abmode {
    ABMODE_0,
    ABMODE_1
} ABMODE_T ;
#define READ_ABMODE() \
   ((READ_REGISTER_ULONG(0x14) & ABMODE_MASK)  >> ABMODE_START_BIT)

#define WRITE_ABMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ABMODE_MASK) | ((val << ABMODE_START_BIT) & ABMODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alternate bytes size 
    // 
#define ABSIZE_MASK 0x30000U
#define ABSIZE_OFFSET 17
#define ABSIZE_START_BIT 16
#define ABSIZE_WIDTH 2



typedef enum absize {
    ABSIZE_0,
    ABSIZE_1
} ABSIZE_T ;
#define READ_ABSIZE() \
   ((READ_REGISTER_ULONG(0x14) & ABSIZE_MASK)  >> ABSIZE_START_BIT)

#define WRITE_ABSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ABSIZE_MASK) | ((val << ABSIZE_START_BIT) & ABSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 18:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of dummy cycles 
    // 
#define DCYC_MASK 0x7C0000U
#define DCYC_OFFSET 22
#define DCYC_START_BIT 18
#define DCYC_WIDTH 5



typedef enum dcyc {
    DCYC_0,
    DCYC_1
} DCYC_T ;
#define READ_DCYC() \
   ((READ_REGISTER_ULONG(0x14) & DCYC_MASK)  >> DCYC_START_BIT)

#define WRITE_DCYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DCYC_MASK) | ((val << DCYC_START_BIT) & DCYC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data mode 
    // 
#define DMODE_MASK 0x3000000U
#define DMODE_OFFSET 25
#define DMODE_START_BIT 24
#define DMODE_WIDTH 2



typedef enum dmode {
    DMODE_0,
    DMODE_1
} DMODE_T ;
#define READ_DMODE() \
   ((READ_REGISTER_ULONG(0x14) & DMODE_MASK)  >> DMODE_START_BIT)

#define WRITE_DMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DMODE_MASK) | ((val << DMODE_START_BIT) & DMODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Functional mode 
    // 
#define FMODE_MASK 0xC000000U
#define FMODE_OFFSET 27
#define FMODE_START_BIT 26
#define FMODE_WIDTH 2



typedef enum fmode {
    FMODE_0,
    FMODE_1
} FMODE_T ;
#define READ_FMODE() \
   ((READ_REGISTER_ULONG(0x14) & FMODE_MASK)  >> FMODE_START_BIT)

#define WRITE_FMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ FMODE_MASK) | ((val << FMODE_START_BIT) & FMODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Send instruction only once mode 
    // 
#define SIOO_MASK 0x10000000U
#define SIOO_OFFSET 28
#define SIOO_START_BIT 28
#define SIOO_WIDTH 1



typedef enum sioo {
    SIOO_0,
    SIOO_1
} SIOO_T ;
#define WRITE_SIOO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ SIOO_MASK) | ((val << SIOO_START_BIT) & SIOO_MASK )); \
   } 

#define ENABLE_SIOO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  SIOO_MASK ); \
   }

#define DISABLE_SIOO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~SIOO_MASK ); \
   } 

#define READ_SIOO() \
   ((READ_REGISTER_ULONG(0x14) & SIOO_MASK)  >> SIOO_START_BIT)

#define WHEN_SIOO_HIGH() \
     if ( READ_SIOO() )


#define UNLESS_SIOO_HIGH() \
     if (! READ_SIOO() )


#define WAIT_SIOO_LOW() \
    while ( READ_SIOO() );


#define WAIT_SIOO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SIOO() && (--___t___ > 0)); }


#define WAIT_SIOO_HIGH() \
    while (! READ_SIOO() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DDR hold half cycle 
    // 
#define DHHC_MASK 0x40000000U
#define DHHC_OFFSET 30
#define DHHC_START_BIT 30
#define DHHC_WIDTH 1



typedef enum dhhc {
    DHHC_0,
    DHHC_1
} DHHC_T ;
#define WRITE_DHHC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DHHC_MASK) | ((val << DHHC_START_BIT) & DHHC_MASK )); \
   } 

#define ENABLE_DHHC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  DHHC_MASK ); \
   }

#define DISABLE_DHHC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~DHHC_MASK ); \
   } 

#define READ_DHHC() \
   ((READ_REGISTER_ULONG(0x14) & DHHC_MASK)  >> DHHC_START_BIT)

#define WHEN_DHHC_HIGH() \
     if ( READ_DHHC() )


#define UNLESS_DHHC_HIGH() \
     if (! READ_DHHC() )


#define WAIT_DHHC_LOW() \
    while ( READ_DHHC() );


#define WAIT_DHHC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DHHC() && (--___t___ > 0)); }


#define WAIT_DHHC_HIGH() \
    while (! READ_DHHC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register communication configuration register (CCR) at the offset 0x14, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double data rate mode 
    // 
#define DDRM_MASK 0x80000000U
#define DDRM_OFFSET 31
#define DDRM_START_BIT 31
#define DDRM_WIDTH 1



typedef enum ddrm {
    DDRM_0,
    DDRM_1
} DDRM_T ;
#define WRITE_DDRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DDRM_MASK) | ((val << DDRM_START_BIT) & DDRM_MASK )); \
   } 

#define ENABLE_DDRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  DDRM_MASK ); \
   }

#define DISABLE_DDRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~DDRM_MASK ); \
   } 

#define READ_DDRM() \
   ((READ_REGISTER_ULONG(0x14) & DDRM_MASK)  >> DDRM_START_BIT)

#define WHEN_DDRM_HIGH() \
     if ( READ_DDRM() )


#define UNLESS_DDRM_HIGH() \
     if (! READ_DDRM() )


#define WAIT_DDRM_LOW() \
    while ( READ_DDRM() );


#define WAIT_DDRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DDRM() && (--___t___ > 0)); }


#define WAIT_DDRM_HIGH() \
    while (! READ_DDRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ar
//
// Return the value of register AR
//
// Notes : Register Ar at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_AR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ar
//
// Return the value of register AR
//
// Notes : Register address register (AR) at the offset 0x18, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address 
    // 
#define ADDRESS_MASK 0xFFFFFFFFU
#define ADDRESS_OFFSET 31
#define ADDRESS_START_BIT 0
#define ADDRESS_WIDTH 32


#define AR_REG 0x18

typedef enum address {
    ADDRESS_0,
    ADDRESS_1
} ADDRESS_T ;
#define READ_ADDRESS() \
   ((READ_REGISTER_ULONG(0x18) & ADDRESS_MASK)  >> ADDRESS_START_BIT)

#define WRITE_ADDRESS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ADDRESS_MASK) | ((val << ADDRESS_START_BIT) & ADDRESS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Abr
//
// Return the value of register ABR
//
// Notes : Register Abr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ABR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_ABR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_ABR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_ABR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Abr
//
// Return the value of register ABR
//
// Notes : Register ABR (ABR) at the offset 0x1C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ALTERNATE 
    // 
#define ALTERNATE_MASK 0xFFFFFFFFU
#define ALTERNATE_OFFSET 31
#define ALTERNATE_START_BIT 0
#define ALTERNATE_WIDTH 32


#define ABR_REG 0x1C

typedef enum alternate {
    ALTERNATE_0,
    ALTERNATE_1
} ALTERNATE_T ;
#define READ_ALTERNATE() \
   ((READ_REGISTER_ULONG(0x1C) & ALTERNATE_MASK)  >> ALTERNATE_START_BIT)

#define WRITE_ALTERNATE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ALTERNATE_MASK) | ((val << ALTERNATE_START_BIT) & ALTERNATE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_DR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_DR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_DR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : DATA
//
// Return the value of register Dr
//
// Notes : Data 
//        (DR) at the offset 0x20, Bits 0:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_DATA() \
   ((READ_REGISTER_ULONG(0x20) & DATA_MASK)  >> DATA_START_BIT)

#define WRITE_DATA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DATA_MASK) | ((val << DATA_START_BIT) & DATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Psmkr
//
// Return the value of register PSMKR
//
// Notes : Register Psmkr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PSMKR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_PSMKR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_PSMKR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_PSMKR() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Psmkr
//
// Return the value of register PSMKR
//
// Notes : Register polling status mask register (PSMKR) at the offset 0x24, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Status mask 
    // 
#define MASK_MASK 0xFFFFFFFFU
#define MASK_OFFSET 31
#define MASK_START_BIT 0
#define MASK_WIDTH 32


#define PSMKR_REG 0x24

typedef enum mask {
    MASK_0,
    MASK_1
} MASK_T ;
#define READ_MASK() \
   ((READ_REGISTER_ULONG(0x24) & MASK_MASK)  >> MASK_START_BIT)

#define WRITE_MASK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ MASK_MASK) | ((val << MASK_START_BIT) & MASK_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Psmar
//
// Return the value of register PSMAR
//
// Notes : Register Psmar at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PSMAR( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_PSMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_PSMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_PSMAR() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : Psmar
//
// Return the value of register PSMAR
//
// Notes : Register polling status match register (PSMAR) at the offset 0x28, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Status match 
    // 
#define MATCH_MASK 0xFFFFFFFFU
#define MATCH_OFFSET 31
#define MATCH_START_BIT 0
#define MATCH_WIDTH 32


#define PSMAR_REG 0x28

typedef enum match {
    MATCH_0,
    MATCH_1
} MATCH_T ;
#define READ_MATCH() \
   ((READ_REGISTER_ULONG(0x28) & MATCH_MASK)  >> MATCH_START_BIT)

#define WRITE_MATCH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ MATCH_MASK) | ((val << MATCH_START_BIT) & MATCH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pir
//
// Return the value of register PIR
//
// Notes : Register Pir at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PIR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_PIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_PIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_PIR() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pir
//
// Return the value of register PIR
//
// Notes : Register polling interval register (PIR) at the offset 0x2C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Polling interval 
    // 
#define INTERVAL_MASK 0xFFFFU
#define INTERVAL_OFFSET 15
#define INTERVAL_START_BIT 0
#define INTERVAL_WIDTH 16


#define PIR_REG 0x2C

typedef enum interval {
    INTERVAL_0,
    INTERVAL_1
} INTERVAL_T ;
#define READ_INTERVAL() \
   ((READ_REGISTER_ULONG(0x2C) & INTERVAL_MASK)  >> INTERVAL_START_BIT)

#define WRITE_INTERVAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ INTERVAL_MASK) | ((val << INTERVAL_START_BIT) & INTERVAL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Lptr
//
// Return the value of register LPTR
//
// Notes : Register Lptr at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LPTR( y) \
     WRITE_REGISTER_ULONG( 0x30 , y)

#define SET_BITS_LPTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  mask ); \
   }

#define CLEAR_BITS_LPTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val & ~mask ); \
   }

#define READ_REGISTER_LPTR() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : Lptr
//
// Return the value of register LPTR
//
// Notes : Register low-power timeout register (LPTR) at the offset 0x30, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout period 
    // 
#define TIMEOUT_MASK 0xFFFFU
#define TIMEOUT_OFFSET 15
#define TIMEOUT_START_BIT 0
#define TIMEOUT_WIDTH 16


#define LPTR_REG 0x30

typedef enum timeout {
    TIMEOUT_0,
    TIMEOUT_1
} TIMEOUT_T ;
#define READ_TIMEOUT() \
   ((READ_REGISTER_ULONG(0x30) & TIMEOUT_MASK)  >> TIMEOUT_START_BIT)

#define WRITE_TIMEOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ TIMEOUT_MASK) | ((val << TIMEOUT_START_BIT) & TIMEOUT_MASK )); \
   } 

