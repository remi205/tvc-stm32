/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/spdif_rx.h
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
 
#define SPDIF_RX 0x40004000
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
// Function : INSEL
//
// Return the value of register Cr
//
// Notes : input selection 
//        (CR) at the offset 0x0, Bits 16:18
//
/////////////////////////////////////////////////////////////////////////
#define READ_INSEL() \
   ((READ_REGISTER_ULONG(0x0) & INSEL_MASK)  >> INSEL_START_BIT)

#define WRITE_INSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ INSEL_MASK) | ((val << INSEL_START_BIT) & INSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : WFA
//
// Return the value of register Cr
//
// Notes : Wait For Activity 
//        (CR) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WFA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WFA_MASK) | ((val << WFA_START_BIT) & WFA_MASK )); \
   } 

#define ENABLE_WFA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WFA_MASK ); \
   }

#define DISABLE_WFA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WFA_MASK ); \
   } 

#define READ_WFA() \
   ((READ_REGISTER_ULONG(0x0) & WFA_MASK)  >> WFA_START_BIT)

#define WHEN_WFA_HIGH() \
     if ( READ_WFA() )


#define UNLESS_WFA_HIGH() \
     if (! READ_WFA() )


#define WAIT_WFA_LOW() \
    while ( READ_WFA() );


#define WAIT_WFA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WFA() && (--___t___ > 0)); }


#define WAIT_WFA_HIGH() \
    while (! READ_WFA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : NBTR
//
// Return the value of register Cr
//
// Notes : Maximum allowed re-tries during synchronization phase 
//        (CR) at the offset 0x0, Bits 12:13
//
/////////////////////////////////////////////////////////////////////////
#define READ_NBTR() \
   ((READ_REGISTER_ULONG(0x0) & NBTR_MASK)  >> NBTR_START_BIT)

#define WRITE_NBTR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ NBTR_MASK) | ((val << NBTR_START_BIT) & NBTR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CHSEL
//
// Return the value of register Cr
//
// Notes : Channel Selection 
//        (CR) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

#define ENABLE_CHSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CHSEL_MASK ); \
   }

#define DISABLE_CHSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CHSEL_MASK ); \
   } 

#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x0) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WHEN_CHSEL_HIGH() \
     if ( READ_CHSEL() )


#define UNLESS_CHSEL_HIGH() \
     if (! READ_CHSEL() )


#define WAIT_CHSEL_LOW() \
    while ( READ_CHSEL() );


#define WAIT_CHSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHSEL() && (--___t___ > 0)); }


#define WAIT_CHSEL_HIGH() \
    while (! READ_CHSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CBDMAEN
//
// Return the value of register Cr
//
// Notes : Control Buffer DMA ENable for control flow 
//        (CR) at the offset 0x0, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CBDMAEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CBDMAEN_MASK) | ((val << CBDMAEN_START_BIT) & CBDMAEN_MASK )); \
   } 

#define ENABLE_CBDMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CBDMAEN_MASK ); \
   }

#define DISABLE_CBDMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CBDMAEN_MASK ); \
   } 

#define READ_CBDMAEN() \
   ((READ_REGISTER_ULONG(0x0) & CBDMAEN_MASK)  >> CBDMAEN_START_BIT)

#define WHEN_CBDMAEN_HIGH() \
     if ( READ_CBDMAEN() )


#define UNLESS_CBDMAEN_HIGH() \
     if (! READ_CBDMAEN() )


#define WAIT_CBDMAEN_LOW() \
    while ( READ_CBDMAEN() );


#define WAIT_CBDMAEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CBDMAEN() && (--___t___ > 0)); }


#define WAIT_CBDMAEN_HIGH() \
    while (! READ_CBDMAEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PTMSK
//
// Return the value of register Cr
//
// Notes : Mask of Preamble Type bits 
//        (CR) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PTMSK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PTMSK_MASK) | ((val << PTMSK_START_BIT) & PTMSK_MASK )); \
   } 

#define ENABLE_PTMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PTMSK_MASK ); \
   }

#define DISABLE_PTMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PTMSK_MASK ); \
   } 

#define READ_PTMSK() \
   ((READ_REGISTER_ULONG(0x0) & PTMSK_MASK)  >> PTMSK_START_BIT)

#define WHEN_PTMSK_HIGH() \
     if ( READ_PTMSK() )


#define UNLESS_PTMSK_HIGH() \
     if (! READ_PTMSK() )


#define WAIT_PTMSK_LOW() \
    while ( READ_PTMSK() );


#define WAIT_PTMSK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PTMSK() && (--___t___ > 0)); }


#define WAIT_PTMSK_HIGH() \
    while (! READ_PTMSK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CUMSK
//
// Return the value of register Cr
//
// Notes : Mask of channel status and user bits 
//        (CR) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CUMSK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CUMSK_MASK) | ((val << CUMSK_START_BIT) & CUMSK_MASK )); \
   } 

#define ENABLE_CUMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CUMSK_MASK ); \
   }

#define DISABLE_CUMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CUMSK_MASK ); \
   } 

#define READ_CUMSK() \
   ((READ_REGISTER_ULONG(0x0) & CUMSK_MASK)  >> CUMSK_START_BIT)

#define WHEN_CUMSK_HIGH() \
     if ( READ_CUMSK() )


#define UNLESS_CUMSK_HIGH() \
     if (! READ_CUMSK() )


#define WAIT_CUMSK_LOW() \
    while ( READ_CUMSK() );


#define WAIT_CUMSK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CUMSK() && (--___t___ > 0)); }


#define WAIT_CUMSK_HIGH() \
    while (! READ_CUMSK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : VMSK
//
// Return the value of register Cr
//
// Notes : Mask of Validity bit 
//        (CR) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VMSK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ VMSK_MASK) | ((val << VMSK_START_BIT) & VMSK_MASK )); \
   } 

#define ENABLE_VMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  VMSK_MASK ); \
   }

#define DISABLE_VMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~VMSK_MASK ); \
   } 

#define READ_VMSK() \
   ((READ_REGISTER_ULONG(0x0) & VMSK_MASK)  >> VMSK_START_BIT)

#define WHEN_VMSK_HIGH() \
     if ( READ_VMSK() )


#define UNLESS_VMSK_HIGH() \
     if (! READ_VMSK() )


#define WAIT_VMSK_LOW() \
    while ( READ_VMSK() );


#define WAIT_VMSK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VMSK() && (--___t___ > 0)); }


#define WAIT_VMSK_HIGH() \
    while (! READ_VMSK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PMSK
//
// Return the value of register Cr
//
// Notes : Mask Parity error bit 
//        (CR) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PMSK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PMSK_MASK) | ((val << PMSK_START_BIT) & PMSK_MASK )); \
   } 

#define ENABLE_PMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PMSK_MASK ); \
   }

#define DISABLE_PMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PMSK_MASK ); \
   } 

#define READ_PMSK() \
   ((READ_REGISTER_ULONG(0x0) & PMSK_MASK)  >> PMSK_START_BIT)

#define WHEN_PMSK_HIGH() \
     if ( READ_PMSK() )


#define UNLESS_PMSK_HIGH() \
     if (! READ_PMSK() )


#define WAIT_PMSK_LOW() \
    while ( READ_PMSK() );


#define WAIT_PMSK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PMSK() && (--___t___ > 0)); }


#define WAIT_PMSK_HIGH() \
    while (! READ_PMSK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DRFMT
//
// Return the value of register Cr
//
// Notes : RX Data format 
//        (CR) at the offset 0x0, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_DRFMT() \
   ((READ_REGISTER_ULONG(0x0) & DRFMT_MASK)  >> DRFMT_START_BIT)

#define WRITE_DRFMT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DRFMT_MASK) | ((val << DRFMT_START_BIT) & DRFMT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RXSTEO
//
// Return the value of register Cr
//
// Notes : STerEO Mode 
//        (CR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXSTEO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RXSTEO_MASK) | ((val << RXSTEO_START_BIT) & RXSTEO_MASK )); \
   } 

#define ENABLE_RXSTEO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  RXSTEO_MASK ); \
   }

#define DISABLE_RXSTEO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~RXSTEO_MASK ); \
   } 

#define READ_RXSTEO() \
   ((READ_REGISTER_ULONG(0x0) & RXSTEO_MASK)  >> RXSTEO_START_BIT)

#define WHEN_RXSTEO_HIGH() \
     if ( READ_RXSTEO() )


#define UNLESS_RXSTEO_HIGH() \
     if (! READ_RXSTEO() )


#define WAIT_RXSTEO_LOW() \
    while ( READ_RXSTEO() );


#define WAIT_RXSTEO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXSTEO() && (--___t___ > 0)); }


#define WAIT_RXSTEO_HIGH() \
    while (! READ_RXSTEO() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXDMAEN
//
// Return the value of register Cr
//
// Notes : Receiver DMA ENable for data flow 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXDMAEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ RXDMAEN_MASK) | ((val << RXDMAEN_START_BIT) & RXDMAEN_MASK )); \
   } 

#define ENABLE_RXDMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  RXDMAEN_MASK ); \
   }

#define DISABLE_RXDMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~RXDMAEN_MASK ); \
   } 

#define READ_RXDMAEN() \
   ((READ_REGISTER_ULONG(0x0) & RXDMAEN_MASK)  >> RXDMAEN_START_BIT)

#define WHEN_RXDMAEN_HIGH() \
     if ( READ_RXDMAEN() )


#define UNLESS_RXDMAEN_HIGH() \
     if (! READ_RXDMAEN() )


#define WAIT_RXDMAEN_LOW() \
    while ( READ_RXDMAEN() );


#define WAIT_RXDMAEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXDMAEN() && (--___t___ > 0)); }


#define WAIT_RXDMAEN_HIGH() \
    while (! READ_RXDMAEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SPDIFEN
//
// Return the value of register Cr
//
// Notes : Peripheral Block Enable 
//        (CR) at the offset 0x0, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_SPDIFEN() \
   ((READ_REGISTER_ULONG(0x0) & SPDIFEN_MASK)  >> SPDIFEN_START_BIT)

#define WRITE_SPDIFEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SPDIFEN_MASK) | ((val << SPDIFEN_START_BIT) & SPDIFEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Imr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IMR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_IMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_IMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_IMR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Serial Interface Error Interrupt Enable 
    // 
#define IFEIE_MASK 0x40U
#define IFEIE_OFFSET 6
#define IFEIE_START_BIT 6
#define IFEIE_WIDTH 1


#define IMR_REG 0x4

typedef enum ifeie {
    IFEIE_0,
    IFEIE_1
} IFEIE_T ;
#define WRITE_IFEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ IFEIE_MASK) | ((val << IFEIE_START_BIT) & IFEIE_MASK )); \
   } 

#define ENABLE_IFEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  IFEIE_MASK ); \
   }

#define DISABLE_IFEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~IFEIE_MASK ); \
   } 

#define READ_IFEIE() \
   ((READ_REGISTER_ULONG(0x4) & IFEIE_MASK)  >> IFEIE_START_BIT)

#define WHEN_IFEIE_HIGH() \
     if ( READ_IFEIE() )


#define UNLESS_IFEIE_HIGH() \
     if (! READ_IFEIE() )


#define WAIT_IFEIE_LOW() \
    while ( READ_IFEIE() );


#define WAIT_IFEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IFEIE() && (--___t___ > 0)); }


#define WAIT_IFEIE_HIGH() \
    while (! READ_IFEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization Done 
    // 
#define SYNCDIE_MASK 0x20U
#define SYNCDIE_OFFSET 5
#define SYNCDIE_START_BIT 5
#define SYNCDIE_WIDTH 1



typedef enum syncdie {
    SYNCDIE_0,
    SYNCDIE_1
} SYNCDIE_T ;
#define WRITE_SYNCDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SYNCDIE_MASK) | ((val << SYNCDIE_START_BIT) & SYNCDIE_MASK )); \
   } 

#define ENABLE_SYNCDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SYNCDIE_MASK ); \
   }

#define DISABLE_SYNCDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SYNCDIE_MASK ); \
   } 

#define READ_SYNCDIE() \
   ((READ_REGISTER_ULONG(0x4) & SYNCDIE_MASK)  >> SYNCDIE_START_BIT)

#define WHEN_SYNCDIE_HIGH() \
     if ( READ_SYNCDIE() )


#define UNLESS_SYNCDIE_HIGH() \
     if (! READ_SYNCDIE() )


#define WAIT_SYNCDIE_LOW() \
    while ( READ_SYNCDIE() );


#define WAIT_SYNCDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SYNCDIE() && (--___t___ > 0)); }


#define WAIT_SYNCDIE_HIGH() \
    while (! READ_SYNCDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization Block Detected Interrupt Enable 
    // 
#define SBLKIE_MASK 0x10U
#define SBLKIE_OFFSET 4
#define SBLKIE_START_BIT 4
#define SBLKIE_WIDTH 1



typedef enum sblkie {
    SBLKIE_0,
    SBLKIE_1
} SBLKIE_T ;
#define WRITE_SBLKIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SBLKIE_MASK) | ((val << SBLKIE_START_BIT) & SBLKIE_MASK )); \
   } 

#define ENABLE_SBLKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SBLKIE_MASK ); \
   }

#define DISABLE_SBLKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SBLKIE_MASK ); \
   } 

#define READ_SBLKIE() \
   ((READ_REGISTER_ULONG(0x4) & SBLKIE_MASK)  >> SBLKIE_START_BIT)

#define WHEN_SBLKIE_HIGH() \
     if ( READ_SBLKIE() )


#define UNLESS_SBLKIE_HIGH() \
     if (! READ_SBLKIE() )


#define WAIT_SBLKIE_LOW() \
    while ( READ_SBLKIE() );


#define WAIT_SBLKIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBLKIE() && (--___t___ > 0)); }


#define WAIT_SBLKIE_HIGH() \
    while (! READ_SBLKIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun error Interrupt Enable 
    // 
#define OVRIE_MASK 0x8U
#define OVRIE_OFFSET 3
#define OVRIE_START_BIT 3
#define OVRIE_WIDTH 1



typedef enum ovrie {
    OVRIE_0,
    OVRIE_1
} OVRIE_T ;
#define WRITE_OVRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OVRIE_MASK) | ((val << OVRIE_START_BIT) & OVRIE_MASK )); \
   } 

#define ENABLE_OVRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OVRIE_MASK ); \
   }

#define DISABLE_OVRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OVRIE_MASK ); \
   } 

#define READ_OVRIE() \
   ((READ_REGISTER_ULONG(0x4) & OVRIE_MASK)  >> OVRIE_START_BIT)

#define WHEN_OVRIE_HIGH() \
     if ( READ_OVRIE() )


#define UNLESS_OVRIE_HIGH() \
     if (! READ_OVRIE() )


#define WAIT_OVRIE_LOW() \
    while ( READ_OVRIE() );


#define WAIT_OVRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVRIE() && (--___t___ > 0)); }


#define WAIT_OVRIE_HIGH() \
    while (! READ_OVRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity error interrupt enable 
    // 
#define PERRIE_MASK 0x4U
#define PERRIE_OFFSET 2
#define PERRIE_START_BIT 2
#define PERRIE_WIDTH 1



typedef enum perrie {
    PERRIE_0,
    PERRIE_1
} PERRIE_T ;
#define WRITE_PERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PERRIE_MASK) | ((val << PERRIE_START_BIT) & PERRIE_MASK )); \
   } 

#define ENABLE_PERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PERRIE_MASK ); \
   }

#define DISABLE_PERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PERRIE_MASK ); \
   } 

#define READ_PERRIE() \
   ((READ_REGISTER_ULONG(0x4) & PERRIE_MASK)  >> PERRIE_START_BIT)

#define WHEN_PERRIE_HIGH() \
     if ( READ_PERRIE() )


#define UNLESS_PERRIE_HIGH() \
     if (! READ_PERRIE() )


#define WAIT_PERRIE_LOW() \
    while ( READ_PERRIE() );


#define WAIT_PERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PERRIE() && (--___t___ > 0)); }


#define WAIT_PERRIE_HIGH() \
    while (! READ_PERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Control Buffer Ready Interrupt Enable 
    // 
#define CSRNEIE_MASK 0x2U
#define CSRNEIE_OFFSET 1
#define CSRNEIE_START_BIT 1
#define CSRNEIE_WIDTH 1



typedef enum csrneie {
    CSRNEIE_0,
    CSRNEIE_1
} CSRNEIE_T ;
#define WRITE_CSRNEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CSRNEIE_MASK) | ((val << CSRNEIE_START_BIT) & CSRNEIE_MASK )); \
   } 

#define ENABLE_CSRNEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CSRNEIE_MASK ); \
   }

#define DISABLE_CSRNEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CSRNEIE_MASK ); \
   } 

#define READ_CSRNEIE() \
   ((READ_REGISTER_ULONG(0x4) & CSRNEIE_MASK)  >> CSRNEIE_START_BIT)

#define WHEN_CSRNEIE_HIGH() \
     if ( READ_CSRNEIE() )


#define UNLESS_CSRNEIE_HIGH() \
     if (! READ_CSRNEIE() )


#define WAIT_CSRNEIE_LOW() \
    while ( READ_CSRNEIE() );


#define WAIT_CSRNEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSRNEIE() && (--___t___ > 0)); }


#define WAIT_CSRNEIE_HIGH() \
    while (! READ_CSRNEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Interrupt mask register (IMR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RXNE interrupt enable 
    // 
#define RXNEIE_MASK 0x1U
#define RXNEIE_OFFSET 0
#define RXNEIE_START_BIT 0
#define RXNEIE_WIDTH 1



typedef enum rxneie {
    RXNEIE_0,
    RXNEIE_1
} RXNEIE_T ;
#define WRITE_RXNEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RXNEIE_MASK) | ((val << RXNEIE_START_BIT) & RXNEIE_MASK )); \
   } 

#define ENABLE_RXNEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RXNEIE_MASK ); \
   }

#define DISABLE_RXNEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RXNEIE_MASK ); \
   } 

#define READ_RXNEIE() \
   ((READ_REGISTER_ULONG(0x4) & RXNEIE_MASK)  >> RXNEIE_START_BIT)

#define WHEN_RXNEIE_HIGH() \
     if ( READ_RXNEIE() )


#define UNLESS_RXNEIE_HIGH() \
     if (! READ_RXNEIE() )


#define WAIT_RXNEIE_LOW() \
    while ( READ_RXNEIE() );


#define WAIT_RXNEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXNEIE() && (--___t___ > 0)); }


#define WAIT_RXNEIE_HIGH() \
    while (! READ_RXNEIE() );


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
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 16:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Duration of 5 symbols counted with SPDIF_CLK 
    // 
#define WIDTH5_MASK 0x7FFF0000U
#define WIDTH5_OFFSET 30
#define WIDTH5_START_BIT 16
#define WIDTH5_WIDTH 15


#define SR_REG 0x8

typedef enum width5 {
    WIDTH_5_0,
    WIDTH_5_1
} WIDTH_5_T ;
#define READ_WIDTH5() \
   ((READ_REGISTER_ULONG(0x8) & WIDTH5_MASK)  >> WIDTH5_START_BIT)

#define WRITE_WIDTH5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WIDTH5_MASK) | ((val << WIDTH5_START_BIT) & WIDTH5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Time-out error 
    // 
#define TERR_MASK 0x100U
#define TERR_OFFSET 8
#define TERR_START_BIT 8
#define TERR_WIDTH 1



typedef enum terr {
    TERR_0,
    TERR_1
} TERR_T ;
#define WRITE_TERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TERR_MASK) | ((val << TERR_START_BIT) & TERR_MASK )); \
   } 

#define ENABLE_TERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TERR_MASK ); \
   }

#define DISABLE_TERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TERR_MASK ); \
   } 

#define READ_TERR() \
   ((READ_REGISTER_ULONG(0x8) & TERR_MASK)  >> TERR_START_BIT)

#define WHEN_TERR_HIGH() \
     if ( READ_TERR() )


#define UNLESS_TERR_HIGH() \
     if (! READ_TERR() )


#define WAIT_TERR_LOW() \
    while ( READ_TERR() );


#define WAIT_TERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TERR() && (--___t___ > 0)); }


#define WAIT_TERR_HIGH() \
    while (! READ_TERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization error 
    // 
#define SERR_MASK 0x80U
#define SERR_OFFSET 7
#define SERR_START_BIT 7
#define SERR_WIDTH 1



typedef enum serr {
    SERR_0,
    SERR_1
} SERR_T ;
#define WRITE_SERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SERR_MASK) | ((val << SERR_START_BIT) & SERR_MASK )); \
   } 

#define ENABLE_SERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SERR_MASK ); \
   }

#define DISABLE_SERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SERR_MASK ); \
   } 

#define READ_SERR() \
   ((READ_REGISTER_ULONG(0x8) & SERR_MASK)  >> SERR_START_BIT)

#define WHEN_SERR_HIGH() \
     if ( READ_SERR() )


#define UNLESS_SERR_HIGH() \
     if (! READ_SERR() )


#define WAIT_SERR_LOW() \
    while ( READ_SERR() );


#define WAIT_SERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SERR() && (--___t___ > 0)); }


#define WAIT_SERR_HIGH() \
    while (! READ_SERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Framing error 
    // 
#define FERR_MASK 0x40U
#define FERR_OFFSET 6
#define FERR_START_BIT 6
#define FERR_WIDTH 1



typedef enum ferr {
    FERR_0,
    FERR_1
} FERR_T ;
#define WRITE_FERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FERR_MASK) | ((val << FERR_START_BIT) & FERR_MASK )); \
   } 

#define ENABLE_FERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  FERR_MASK ); \
   }

#define DISABLE_FERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~FERR_MASK ); \
   } 

#define READ_FERR() \
   ((READ_REGISTER_ULONG(0x8) & FERR_MASK)  >> FERR_START_BIT)

#define WHEN_FERR_HIGH() \
     if ( READ_FERR() )


#define UNLESS_FERR_HIGH() \
     if (! READ_FERR() )


#define WAIT_FERR_LOW() \
    while ( READ_FERR() );


#define WAIT_FERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FERR() && (--___t___ > 0)); }


#define WAIT_FERR_HIGH() \
    while (! READ_FERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization Done 
    // 
#define SYNCD_MASK 0x20U
#define SYNCD_OFFSET 5
#define SYNCD_START_BIT 5
#define SYNCD_WIDTH 1



typedef enum syncd {
    SYNCD_0,
    SYNCD_1
} SYNCD_T ;
#define WRITE_SYNCD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SYNCD_MASK) | ((val << SYNCD_START_BIT) & SYNCD_MASK )); \
   } 

#define ENABLE_SYNCD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SYNCD_MASK ); \
   }

#define DISABLE_SYNCD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SYNCD_MASK ); \
   } 

#define READ_SYNCD() \
   ((READ_REGISTER_ULONG(0x8) & SYNCD_MASK)  >> SYNCD_START_BIT)

#define WHEN_SYNCD_HIGH() \
     if ( READ_SYNCD() )


#define UNLESS_SYNCD_HIGH() \
     if (! READ_SYNCD() )


#define WAIT_SYNCD_LOW() \
    while ( READ_SYNCD() );


#define WAIT_SYNCD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SYNCD() && (--___t___ > 0)); }


#define WAIT_SYNCD_HIGH() \
    while (! READ_SYNCD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization Block Detected 
    // 
#define SBD_MASK 0x10U
#define SBD_OFFSET 4
#define SBD_START_BIT 4
#define SBD_WIDTH 1



typedef enum sbd {
    SBD_0,
    SBD_1
} SBD_T ;
#define WRITE_SBD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SBD_MASK) | ((val << SBD_START_BIT) & SBD_MASK )); \
   } 

#define ENABLE_SBD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SBD_MASK ); \
   }

#define DISABLE_SBD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SBD_MASK ); \
   } 

#define READ_SBD() \
   ((READ_REGISTER_ULONG(0x8) & SBD_MASK)  >> SBD_START_BIT)

#define WHEN_SBD_HIGH() \
     if ( READ_SBD() )


#define UNLESS_SBD_HIGH() \
     if (! READ_SBD() )


#define WAIT_SBD_LOW() \
    while ( READ_SBD() );


#define WAIT_SBD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBD() && (--___t___ > 0)); }


#define WAIT_SBD_HIGH() \
    while (! READ_SBD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun error 
    // 
#define OVR_MASK 0x8U
#define OVR_OFFSET 3
#define OVR_START_BIT 3
#define OVR_WIDTH 1



typedef enum ovr {
    OVR_0,
    OVR_1
} OVR_T ;
#define WRITE_OVR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OVR_MASK) | ((val << OVR_START_BIT) & OVR_MASK )); \
   } 

#define ENABLE_OVR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  OVR_MASK ); \
   }

#define DISABLE_OVR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~OVR_MASK ); \
   } 

#define READ_OVR() \
   ((READ_REGISTER_ULONG(0x8) & OVR_MASK)  >> OVR_START_BIT)

#define WHEN_OVR_HIGH() \
     if ( READ_OVR() )


#define UNLESS_OVR_HIGH() \
     if (! READ_OVR() )


#define WAIT_OVR_LOW() \
    while ( READ_OVR() );


#define WAIT_OVR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR() && (--___t___ > 0)); }


#define WAIT_OVR_HIGH() \
    while (! READ_OVR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity error 
    // 
#define PERR_MASK 0x4U
#define PERR_OFFSET 2
#define PERR_START_BIT 2
#define PERR_WIDTH 1



typedef enum perr {
    PERR_0,
    PERR_1
} PERR_T ;
#define WRITE_PERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ PERR_MASK) | ((val << PERR_START_BIT) & PERR_MASK )); \
   } 

#define ENABLE_PERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  PERR_MASK ); \
   }

#define DISABLE_PERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~PERR_MASK ); \
   } 

#define READ_PERR() \
   ((READ_REGISTER_ULONG(0x8) & PERR_MASK)  >> PERR_START_BIT)

#define WHEN_PERR_HIGH() \
     if ( READ_PERR() )


#define UNLESS_PERR_HIGH() \
     if (! READ_PERR() )


#define WAIT_PERR_LOW() \
    while ( READ_PERR() );


#define WAIT_PERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PERR() && (--___t___ > 0)); }


#define WAIT_PERR_HIGH() \
    while (! READ_PERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Control Buffer register is not empty 
    // 
#define CSRNE_MASK 0x2U
#define CSRNE_OFFSET 1
#define CSRNE_START_BIT 1
#define CSRNE_WIDTH 1



typedef enum csrne {
    CSRNE_0,
    CSRNE_1
} CSRNE_T ;
#define WRITE_CSRNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CSRNE_MASK) | ((val << CSRNE_START_BIT) & CSRNE_MASK )); \
   } 

#define ENABLE_CSRNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CSRNE_MASK ); \
   }

#define DISABLE_CSRNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CSRNE_MASK ); \
   } 

#define READ_CSRNE() \
   ((READ_REGISTER_ULONG(0x8) & CSRNE_MASK)  >> CSRNE_START_BIT)

#define WHEN_CSRNE_HIGH() \
     if ( READ_CSRNE() )


#define UNLESS_CSRNE_HIGH() \
     if (! READ_CSRNE() )


#define WAIT_CSRNE_LOW() \
    while ( READ_CSRNE() );


#define WAIT_CSRNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSRNE() && (--___t___ > 0)); }


#define WAIT_CSRNE_HIGH() \
    while (! READ_CSRNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Status register (SR) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read data register not empty 
    // 
#define RXNE_MASK 0x1U
#define RXNE_OFFSET 0
#define RXNE_START_BIT 0
#define RXNE_WIDTH 1



typedef enum rxne {
    RXNE_0,
    RXNE_1
} RXNE_T ;
#define WRITE_RXNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ RXNE_MASK) | ((val << RXNE_START_BIT) & RXNE_MASK )); \
   } 

#define ENABLE_RXNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  RXNE_MASK ); \
   }

#define DISABLE_RXNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~RXNE_MASK ); \
   } 

#define READ_RXNE() \
   ((READ_REGISTER_ULONG(0x8) & RXNE_MASK)  >> RXNE_START_BIT)

#define WHEN_RXNE_HIGH() \
     if ( READ_RXNE() )


#define UNLESS_RXNE_HIGH() \
     if (! READ_RXNE() )


#define WAIT_RXNE_LOW() \
    while ( READ_RXNE() );


#define WAIT_RXNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXNE() && (--___t___ > 0)); }


#define WAIT_RXNE_HIGH() \
    while (! READ_RXNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ifcr
//
// Return the value of register IFCR
//
// Notes : Register Ifcr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IFCR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ifcr
//
// Return the value of register IFCR
//
// Notes : Register Interrupt Flag Clear register (IFCR) at the offset 0xC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clears the Synchronization Done flag 
    // 
#define SYNCDCF_MASK 0x20U
#define SYNCDCF_OFFSET 5
#define SYNCDCF_START_BIT 5
#define SYNCDCF_WIDTH 1


#define IFCR_REG 0xC

typedef enum syncdcf {
    SYNCDCF_0,
    SYNCDCF_1
} SYNCDCF_T ;
#define WRITE_SYNCDCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ SYNCDCF_MASK) | ((val << SYNCDCF_START_BIT) & SYNCDCF_MASK )); \
   } 

#define ENABLE_SYNCDCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  SYNCDCF_MASK ); \
   }

#define DISABLE_SYNCDCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~SYNCDCF_MASK ); \
   } 

#define READ_SYNCDCF() \
   ((READ_REGISTER_ULONG(0xC) & SYNCDCF_MASK)  >> SYNCDCF_START_BIT)

#define WHEN_SYNCDCF_HIGH() \
     if ( READ_SYNCDCF() )


#define UNLESS_SYNCDCF_HIGH() \
     if (! READ_SYNCDCF() )


#define WAIT_SYNCDCF_LOW() \
    while ( READ_SYNCDCF() );


#define WAIT_SYNCDCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SYNCDCF() && (--___t___ > 0)); }


#define WAIT_SYNCDCF_HIGH() \
    while (! READ_SYNCDCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ifcr
//
// Return the value of register IFCR
//
// Notes : Register Interrupt Flag Clear register (IFCR) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clears the Synchronization Block Detected flag 
    // 
#define SBDCF_MASK 0x10U
#define SBDCF_OFFSET 4
#define SBDCF_START_BIT 4
#define SBDCF_WIDTH 1



typedef enum sbdcf {
    SBDCF_0,
    SBDCF_1
} SBDCF_T ;
#define WRITE_SBDCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ SBDCF_MASK) | ((val << SBDCF_START_BIT) & SBDCF_MASK )); \
   } 

#define ENABLE_SBDCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  SBDCF_MASK ); \
   }

#define DISABLE_SBDCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~SBDCF_MASK ); \
   } 

#define READ_SBDCF() \
   ((READ_REGISTER_ULONG(0xC) & SBDCF_MASK)  >> SBDCF_START_BIT)

#define WHEN_SBDCF_HIGH() \
     if ( READ_SBDCF() )


#define UNLESS_SBDCF_HIGH() \
     if (! READ_SBDCF() )


#define WAIT_SBDCF_LOW() \
    while ( READ_SBDCF() );


#define WAIT_SBDCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBDCF() && (--___t___ > 0)); }


#define WAIT_SBDCF_HIGH() \
    while (! READ_SBDCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ifcr
//
// Return the value of register IFCR
//
// Notes : Register Interrupt Flag Clear register (IFCR) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clears the Overrun error flag 
    // 
#define OVRCF_MASK 0x8U
#define OVRCF_OFFSET 3
#define OVRCF_START_BIT 3
#define OVRCF_WIDTH 1



typedef enum ovrcf {
    OVRCF_0,
    OVRCF_1
} OVRCF_T ;
#define WRITE_OVRCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ OVRCF_MASK) | ((val << OVRCF_START_BIT) & OVRCF_MASK )); \
   } 

#define ENABLE_OVRCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  OVRCF_MASK ); \
   }

#define DISABLE_OVRCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~OVRCF_MASK ); \
   } 

#define READ_OVRCF() \
   ((READ_REGISTER_ULONG(0xC) & OVRCF_MASK)  >> OVRCF_START_BIT)

#define WHEN_OVRCF_HIGH() \
     if ( READ_OVRCF() )


#define UNLESS_OVRCF_HIGH() \
     if (! READ_OVRCF() )


#define WAIT_OVRCF_LOW() \
    while ( READ_OVRCF() );


#define WAIT_OVRCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVRCF() && (--___t___ > 0)); }


#define WAIT_OVRCF_HIGH() \
    while (! READ_OVRCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ifcr
//
// Return the value of register IFCR
//
// Notes : Register Interrupt Flag Clear register (IFCR) at the offset 0xC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clears the Parity error flag 
    // 
#define PERRCF_MASK 0x4U
#define PERRCF_OFFSET 2
#define PERRCF_START_BIT 2
#define PERRCF_WIDTH 1



typedef enum perrcf {
    PERRCF_0,
    PERRCF_1
} PERRCF_T ;
#define WRITE_PERRCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PERRCF_MASK) | ((val << PERRCF_START_BIT) & PERRCF_MASK )); \
   } 

#define ENABLE_PERRCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PERRCF_MASK ); \
   }

#define DISABLE_PERRCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PERRCF_MASK ); \
   } 

#define READ_PERRCF() \
   ((READ_REGISTER_ULONG(0xC) & PERRCF_MASK)  >> PERRCF_START_BIT)

#define WHEN_PERRCF_HIGH() \
     if ( READ_PERRCF() )


#define UNLESS_PERRCF_HIGH() \
     if (! READ_PERRCF() )


#define WAIT_PERRCF_LOW() \
    while ( READ_PERRCF() );


#define WAIT_PERRCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PERRCF() && (--___t___ > 0)); }


#define WAIT_PERRCF_HIGH() \
    while (! READ_PERRCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : PT
//
// Return the value of register Dr
//
// Notes : Preamble Type 
//        (DR) at the offset 0x10, Bits 28:29
//
/////////////////////////////////////////////////////////////////////////
#define READ_PT() \
   ((READ_REGISTER_ULONG(0x10) & PT_MASK)  >> PT_START_BIT)

#define WRITE_PT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PT_MASK) | ((val << PT_START_BIT) & PT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : C
//
// Return the value of register Dr
//
// Notes : Channel Status bit 
//        (DR) at the offset 0x10, Bits 27:27
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_C(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ C_MASK) | ((val << C_START_BIT) & C_MASK )); \
   } 

#define ENABLE_C() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  C_MASK ); \
   }

#define DISABLE_C() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~C_MASK ); \
   } 

#define READ_C() \
   ((READ_REGISTER_ULONG(0x10) & C_MASK)  >> C_START_BIT)

#define WHEN_C_HIGH() \
     if ( READ_C() )


#define UNLESS_C_HIGH() \
     if (! READ_C() )


#define WAIT_C_LOW() \
    while ( READ_C() );


#define WAIT_C_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_C() && (--___t___ > 0)); }


#define WAIT_C_HIGH() \
    while (! READ_C() );


/////////////////////////////////////////////////////////////////////////
//
// Function : U
//
// Return the value of register Dr
//
// Notes : User bit 
//        (DR) at the offset 0x10, Bits 26:26
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_U(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ U_MASK) | ((val << U_START_BIT) & U_MASK )); \
   } 

#define ENABLE_U() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  U_MASK ); \
   }

#define DISABLE_U() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~U_MASK ); \
   } 

#define READ_U() \
   ((READ_REGISTER_ULONG(0x10) & U_MASK)  >> U_START_BIT)

#define WHEN_U_HIGH() \
     if ( READ_U() )


#define UNLESS_U_HIGH() \
     if (! READ_U() )


#define WAIT_U_LOW() \
    while ( READ_U() );


#define WAIT_U_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_U() && (--___t___ > 0)); }


#define WAIT_U_HIGH() \
    while (! READ_U() );


/////////////////////////////////////////////////////////////////////////
//
// Function : V
//
// Return the value of register Dr
//
// Notes : Validity bit 
//        (DR) at the offset 0x10, Bits 25:25
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_V(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ V_MASK) | ((val << V_START_BIT) & V_MASK )); \
   } 

#define ENABLE_V() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  V_MASK ); \
   }

#define DISABLE_V() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~V_MASK ); \
   } 

#define READ_V() \
   ((READ_REGISTER_ULONG(0x10) & V_MASK)  >> V_START_BIT)

#define WHEN_V_HIGH() \
     if ( READ_V() )


#define UNLESS_V_HIGH() \
     if (! READ_V() )


#define WAIT_V_LOW() \
    while ( READ_V() );


#define WAIT_V_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_V() && (--___t___ > 0)); }


#define WAIT_V_HIGH() \
    while (! READ_V() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PE
//
// Return the value of register Dr
//
// Notes : Parity Error bit 
//        (DR) at the offset 0x10, Bits 24:24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PE_MASK) | ((val << PE_START_BIT) & PE_MASK )); \
   } 

#define ENABLE_PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  PE_MASK ); \
   }

#define DISABLE_PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~PE_MASK ); \
   } 

#define READ_PE() \
   ((READ_REGISTER_ULONG(0x10) & PE_MASK)  >> PE_START_BIT)

#define WHEN_PE_HIGH() \
     if ( READ_PE() )


#define UNLESS_PE_HIGH() \
     if (! READ_PE() )


#define WAIT_PE_LOW() \
    while ( READ_PE() );


#define WAIT_PE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PE() && (--___t___ > 0)); }


#define WAIT_PE_HIGH() \
    while (! READ_PE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DR
//
// Return the value of register Dr
//
// Notes : Parity Error bit 
//        (DR) at the offset 0x10, Bits 0:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_DR() \
   ((READ_REGISTER_ULONG(0x10) & DR_MASK)  >> DR_START_BIT)

#define WRITE_DR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DR_MASK) | ((val << DR_START_BIT) & DR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr
//
// Return the value of register CSR
//
// Notes : Register Csr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CSR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr
//
// Return the value of register CSR
//
// Notes : Register Channel Status register (CSR) at the offset 0x14, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start Of Block 
    // 
#define SOB_MASK 0x1000000U
#define SOB_OFFSET 24
#define SOB_START_BIT 24
#define SOB_WIDTH 1


#define CSR_REG 0x14

typedef enum sob {
    SOB_0,
    SOB_1
} SOB_T ;
#define WRITE_SOB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ SOB_MASK) | ((val << SOB_START_BIT) & SOB_MASK )); \
   } 

#define ENABLE_SOB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  SOB_MASK ); \
   }

#define DISABLE_SOB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~SOB_MASK ); \
   } 

#define READ_SOB() \
   ((READ_REGISTER_ULONG(0x14) & SOB_MASK)  >> SOB_START_BIT)

#define WHEN_SOB_HIGH() \
     if ( READ_SOB() )


#define UNLESS_SOB_HIGH() \
     if (! READ_SOB() )


#define WAIT_SOB_LOW() \
    while ( READ_SOB() );


#define WAIT_SOB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SOB() && (--___t___ > 0)); }


#define WAIT_SOB_HIGH() \
    while (! READ_SOB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr
//
// Return the value of register CSR
//
// Notes : Register Channel Status register (CSR) at the offset 0x14, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel A status information 
    // 
#define CS_MASK 0xFF0000U
#define CS_OFFSET 23
#define CS_START_BIT 16
#define CS_WIDTH 8



#define READ_CS() \
   ((READ_REGISTER_ULONG(0x14) & CS_MASK)  >> CS_START_BIT)

#define WRITE_CS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CS_MASK) | ((val << CS_START_BIT) & CS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr
//
// Return the value of register CSR
//
// Notes : Register Channel Status register (CSR) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // User data information 
    // 
#define USR_MASK 0xFFFFU
#define USR_OFFSET 15
#define USR_START_BIT 0
#define USR_WIDTH 16



typedef enum usr {
    USR_0,
    USR_1
} USR_T ;
#define READ_USR() \
   ((READ_REGISTER_ULONG(0x14) & USR_MASK)  >> USR_START_BIT)

#define WRITE_USR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ USR_MASK) | ((val << USR_START_BIT) & USR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dir
//
// Return the value of register DIR
//
// Notes : Register Dir at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DIR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dir
//
// Return the value of register DIR
//
// Notes : Register Debug Information register (DIR) at the offset 0x18, Bits 16:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Threshold LOW 
    // 
#define TLO_MASK 0x1FFF0000U
#define TLO_OFFSET 28
#define TLO_START_BIT 16
#define TLO_WIDTH 13


#define DIR_REG 0x18

typedef enum tlo {
    TLO_0,
    TLO_1
} TLO_T ;
#define READ_TLO() \
   ((READ_REGISTER_ULONG(0x18) & TLO_MASK)  >> TLO_START_BIT)

#define WRITE_TLO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ TLO_MASK) | ((val << TLO_START_BIT) & TLO_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dir
//
// Return the value of register DIR
//
// Notes : Register Debug Information register (DIR) at the offset 0x18, Bits 0:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Threshold HIGH 
    // 
#define THI_MASK 0x1FFFU
#define THI_OFFSET 12
#define THI_START_BIT 0
#define THI_WIDTH 13



typedef enum thi {
    THI_0,
    THI_1
} THI_T ;
#define READ_THI() \
   ((READ_REGISTER_ULONG(0x18) & THI_MASK)  >> THI_START_BIT)

#define WRITE_THI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ THI_MASK) | ((val << THI_START_BIT) & THI_MASK )); \
   } 

