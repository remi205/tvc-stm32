/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/cec.h
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
 
#define CEC 0x40006C00
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
// Function : CECEN
//
// Return the value of register Cr
//
// Notes : CEC Enable 
//        (CR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CECEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CECEN_MASK) | ((val << CECEN_START_BIT) & CECEN_MASK )); \
   } 

#define ENABLE_CECEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CECEN_MASK ); \
   }

#define DISABLE_CECEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CECEN_MASK ); \
   } 

#define READ_CECEN() \
   ((READ_REGISTER_ULONG(0x0) & CECEN_MASK)  >> CECEN_START_BIT)

#define WHEN_CECEN_HIGH() \
     if ( READ_CECEN() )


#define UNLESS_CECEN_HIGH() \
     if (! READ_CECEN() )


#define WAIT_CECEN_LOW() \
    while ( READ_CECEN() );


#define WAIT_CECEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CECEN() && (--___t___ > 0)); }


#define WAIT_CECEN_HIGH() \
    while (! READ_CECEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXSOM
//
// Return the value of register Cr
//
// Notes : Tx start of message 
//        (CR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXSOM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TXSOM_MASK) | ((val << TXSOM_START_BIT) & TXSOM_MASK )); \
   } 

#define ENABLE_TXSOM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TXSOM_MASK ); \
   }

#define DISABLE_TXSOM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TXSOM_MASK ); \
   } 

#define READ_TXSOM() \
   ((READ_REGISTER_ULONG(0x0) & TXSOM_MASK)  >> TXSOM_START_BIT)

#define WHEN_TXSOM_HIGH() \
     if ( READ_TXSOM() )


#define UNLESS_TXSOM_HIGH() \
     if (! READ_TXSOM() )


#define WAIT_TXSOM_LOW() \
    while ( READ_TXSOM() );


#define WAIT_TXSOM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXSOM() && (--___t___ > 0)); }


#define WAIT_TXSOM_HIGH() \
    while (! READ_TXSOM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXEOM
//
// Return the value of register Cr
//
// Notes : Tx End Of Message 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXEOM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TXEOM_MASK) | ((val << TXEOM_START_BIT) & TXEOM_MASK )); \
   } 

#define ENABLE_TXEOM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TXEOM_MASK ); \
   }

#define DISABLE_TXEOM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TXEOM_MASK ); \
   } 

#define READ_TXEOM() \
   ((READ_REGISTER_ULONG(0x0) & TXEOM_MASK)  >> TXEOM_START_BIT)

#define WHEN_TXEOM_HIGH() \
     if ( READ_TXEOM() )


#define UNLESS_TXEOM_HIGH() \
     if (! READ_TXEOM() )


#define WAIT_TXEOM_LOW() \
    while ( READ_TXEOM() );


#define WAIT_TXEOM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXEOM() && (--___t___ > 0)); }


#define WAIT_TXEOM_HIGH() \
    while (! READ_TXEOM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Cfgr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CFGR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_CFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_CFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_CFGR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : LSTN
//
// Return the value of register Cfgr
//
// Notes : Listen mode 
//        (CFGR) at the offset 0x4, Bits 31:31
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LSTN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ LSTN_MASK) | ((val << LSTN_START_BIT) & LSTN_MASK )); \
   } 

#define ENABLE_LSTN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  LSTN_MASK ); \
   }

#define DISABLE_LSTN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~LSTN_MASK ); \
   } 

#define READ_LSTN() \
   ((READ_REGISTER_ULONG(0x4) & LSTN_MASK)  >> LSTN_START_BIT)

#define WHEN_LSTN_HIGH() \
     if ( READ_LSTN() )


#define UNLESS_LSTN_HIGH() \
     if (! READ_LSTN() )


#define WAIT_LSTN_LOW() \
    while ( READ_LSTN() );


#define WAIT_LSTN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSTN() && (--___t___ > 0)); }


#define WAIT_LSTN_HIGH() \
    while (! READ_LSTN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OAR
//
// Return the value of register Cfgr
//
// Notes : Own addresses configuration 
//        (CFGR) at the offset 0x4, Bits 16:30
//
/////////////////////////////////////////////////////////////////////////
#define READ_OAR() \
   ((READ_REGISTER_ULONG(0x4) & OAR_MASK)  >> OAR_START_BIT)

#define WRITE_OAR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OAR_MASK) | ((val << OAR_START_BIT) & OAR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : SFTOP
//
// Return the value of register Cfgr
//
// Notes : SFT Option Bit 
//        (CFGR) at the offset 0x4, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SFTOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SFTOP_MASK) | ((val << SFTOP_START_BIT) & SFTOP_MASK )); \
   } 

#define ENABLE_SFTOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SFTOP_MASK ); \
   }

#define DISABLE_SFTOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SFTOP_MASK ); \
   } 

#define READ_SFTOP() \
   ((READ_REGISTER_ULONG(0x4) & SFTOP_MASK)  >> SFTOP_START_BIT)

#define WHEN_SFTOP_HIGH() \
     if ( READ_SFTOP() )


#define UNLESS_SFTOP_HIGH() \
     if (! READ_SFTOP() )


#define WAIT_SFTOP_LOW() \
    while ( READ_SFTOP() );


#define WAIT_SFTOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SFTOP() && (--___t___ > 0)); }


#define WAIT_SFTOP_HIGH() \
    while (! READ_SFTOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BRDNOGEN
//
// Return the value of register Cfgr
//
// Notes : Avoid Error-Bit Generation in Broadcast 
//        (CFGR) at the offset 0x4, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BRDNOGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BRDNOGEN_MASK) | ((val << BRDNOGEN_START_BIT) & BRDNOGEN_MASK )); \
   } 

#define ENABLE_BRDNOGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BRDNOGEN_MASK ); \
   }

#define DISABLE_BRDNOGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BRDNOGEN_MASK ); \
   } 

#define READ_BRDNOGEN() \
   ((READ_REGISTER_ULONG(0x4) & BRDNOGEN_MASK)  >> BRDNOGEN_START_BIT)

#define WHEN_BRDNOGEN_HIGH() \
     if ( READ_BRDNOGEN() )


#define UNLESS_BRDNOGEN_HIGH() \
     if (! READ_BRDNOGEN() )


#define WAIT_BRDNOGEN_LOW() \
    while ( READ_BRDNOGEN() );


#define WAIT_BRDNOGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BRDNOGEN() && (--___t___ > 0)); }


#define WAIT_BRDNOGEN_HIGH() \
    while (! READ_BRDNOGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LBPEGEN
//
// Return the value of register Cfgr
//
// Notes : Generate Error-Bit on Long Bit Period Error 
//        (CFGR) at the offset 0x4, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LBPEGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ LBPEGEN_MASK) | ((val << LBPEGEN_START_BIT) & LBPEGEN_MASK )); \
   } 

#define ENABLE_LBPEGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  LBPEGEN_MASK ); \
   }

#define DISABLE_LBPEGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~LBPEGEN_MASK ); \
   } 

#define READ_LBPEGEN() \
   ((READ_REGISTER_ULONG(0x4) & LBPEGEN_MASK)  >> LBPEGEN_START_BIT)

#define WHEN_LBPEGEN_HIGH() \
     if ( READ_LBPEGEN() )


#define UNLESS_LBPEGEN_HIGH() \
     if (! READ_LBPEGEN() )


#define WAIT_LBPEGEN_LOW() \
    while ( READ_LBPEGEN() );


#define WAIT_LBPEGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBPEGEN() && (--___t___ > 0)); }


#define WAIT_LBPEGEN_HIGH() \
    while (! READ_LBPEGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BREGEN
//
// Return the value of register Cfgr
//
// Notes : Generate error-bit on bit rising error 
//        (CFGR) at the offset 0x4, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BREGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BREGEN_MASK) | ((val << BREGEN_START_BIT) & BREGEN_MASK )); \
   } 

#define ENABLE_BREGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BREGEN_MASK ); \
   }

#define DISABLE_BREGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BREGEN_MASK ); \
   } 

#define READ_BREGEN() \
   ((READ_REGISTER_ULONG(0x4) & BREGEN_MASK)  >> BREGEN_START_BIT)

#define WHEN_BREGEN_HIGH() \
     if ( READ_BREGEN() )


#define UNLESS_BREGEN_HIGH() \
     if (! READ_BREGEN() )


#define WAIT_BREGEN_LOW() \
    while ( READ_BREGEN() );


#define WAIT_BREGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BREGEN() && (--___t___ > 0)); }


#define WAIT_BREGEN_HIGH() \
    while (! READ_BREGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BRESTP
//
// Return the value of register Cfgr
//
// Notes : Rx-stop on bit rising error 
//        (CFGR) at the offset 0x4, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BRESTP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BRESTP_MASK) | ((val << BRESTP_START_BIT) & BRESTP_MASK )); \
   } 

#define ENABLE_BRESTP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BRESTP_MASK ); \
   }

#define DISABLE_BRESTP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BRESTP_MASK ); \
   } 

#define READ_BRESTP() \
   ((READ_REGISTER_ULONG(0x4) & BRESTP_MASK)  >> BRESTP_START_BIT)

#define WHEN_BRESTP_HIGH() \
     if ( READ_BRESTP() )


#define UNLESS_BRESTP_HIGH() \
     if (! READ_BRESTP() )


#define WAIT_BRESTP_LOW() \
    while ( READ_BRESTP() );


#define WAIT_BRESTP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BRESTP() && (--___t___ > 0)); }


#define WAIT_BRESTP_HIGH() \
    while (! READ_BRESTP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXTOL
//
// Return the value of register Cfgr
//
// Notes : Rx-Tolerance 
//        (CFGR) at the offset 0x4, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXTOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RXTOL_MASK) | ((val << RXTOL_START_BIT) & RXTOL_MASK )); \
   } 

#define ENABLE_RXTOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RXTOL_MASK ); \
   }

#define DISABLE_RXTOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RXTOL_MASK ); \
   } 

#define READ_RXTOL() \
   ((READ_REGISTER_ULONG(0x4) & RXTOL_MASK)  >> RXTOL_START_BIT)

#define WHEN_RXTOL_HIGH() \
     if ( READ_RXTOL() )


#define UNLESS_RXTOL_HIGH() \
     if (! READ_RXTOL() )


#define WAIT_RXTOL_LOW() \
    while ( READ_RXTOL() );


#define WAIT_RXTOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXTOL() && (--___t___ > 0)); }


#define WAIT_RXTOL_HIGH() \
    while (! READ_RXTOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SFT
//
// Return the value of register Cfgr
//
// Notes : Signal Free Time 
//        (CFGR) at the offset 0x4, Bits 0:2
//
/////////////////////////////////////////////////////////////////////////
#define READ_SFT() \
   ((READ_REGISTER_ULONG(0x4) & SFT_MASK)  >> SFT_START_BIT)

#define WRITE_SFT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SFT_MASK) | ((val << SFT_START_BIT) & SFT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Txdr
//
// Return the value of register TXDR
//
// Notes : Register Txdr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TXDR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : TXD
//
// Return the value of register Txdr
//
// Notes : Tx Data register 
//        (TXDR) at the offset 0x8, Bits 0:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_TXD() \
   ((READ_REGISTER_ULONG(0x8) & TXD_MASK)  >> TXD_START_BIT)

#define WRITE_TXD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TXD_MASK) | ((val << TXD_START_BIT) & TXD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rxdr
//
// Return the value of register RXDR
//
// Notes : Register Rxdr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RXDR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : RXDR
//
// Return the value of register Rxdr
//
// Notes : CEC Rx Data Register 
//        (RXDR) at the offset 0xC, Bits 0:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_RXDR() \
   ((READ_REGISTER_ULONG(0xC) & RXDR_MASK)  >> RXDR_START_BIT)

#define WRITE_RXDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RXDR_MASK) | ((val << RXDR_START_BIT) & RXDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_ISR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_ISR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_ISR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : RXBR
//
// Return the value of register Isr
//
// Notes : Rx-Byte Received 
//        (ISR) at the offset 0x10, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXBR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ RXBR_MASK) | ((val << RXBR_START_BIT) & RXBR_MASK )); \
   } 

#define ENABLE_RXBR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  RXBR_MASK ); \
   }

#define DISABLE_RXBR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~RXBR_MASK ); \
   } 

#define READ_RXBR() \
   ((READ_REGISTER_ULONG(0x10) & RXBR_MASK)  >> RXBR_START_BIT)

#define WHEN_RXBR_HIGH() \
     if ( READ_RXBR() )


#define UNLESS_RXBR_HIGH() \
     if (! READ_RXBR() )


#define WAIT_RXBR_LOW() \
    while ( READ_RXBR() );


#define WAIT_RXBR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXBR() && (--___t___ > 0)); }


#define WAIT_RXBR_HIGH() \
    while (! READ_RXBR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXEND
//
// Return the value of register Isr
//
// Notes : End Of Reception 
//        (ISR) at the offset 0x10, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ RXEND_MASK) | ((val << RXEND_START_BIT) & RXEND_MASK )); \
   } 

#define ENABLE_RXEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  RXEND_MASK ); \
   }

#define DISABLE_RXEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~RXEND_MASK ); \
   } 

#define READ_RXEND() \
   ((READ_REGISTER_ULONG(0x10) & RXEND_MASK)  >> RXEND_START_BIT)

#define WHEN_RXEND_HIGH() \
     if ( READ_RXEND() )


#define UNLESS_RXEND_HIGH() \
     if (! READ_RXEND() )


#define WAIT_RXEND_LOW() \
    while ( READ_RXEND() );


#define WAIT_RXEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXEND() && (--___t___ > 0)); }


#define WAIT_RXEND_HIGH() \
    while (! READ_RXEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXOVR
//
// Return the value of register Isr
//
// Notes : Rx-Overrun 
//        (ISR) at the offset 0x10, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXOVR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ RXOVR_MASK) | ((val << RXOVR_START_BIT) & RXOVR_MASK )); \
   } 

#define ENABLE_RXOVR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  RXOVR_MASK ); \
   }

#define DISABLE_RXOVR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~RXOVR_MASK ); \
   } 

#define READ_RXOVR() \
   ((READ_REGISTER_ULONG(0x10) & RXOVR_MASK)  >> RXOVR_START_BIT)

#define WHEN_RXOVR_HIGH() \
     if ( READ_RXOVR() )


#define UNLESS_RXOVR_HIGH() \
     if (! READ_RXOVR() )


#define WAIT_RXOVR_LOW() \
    while ( READ_RXOVR() );


#define WAIT_RXOVR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXOVR() && (--___t___ > 0)); }


#define WAIT_RXOVR_HIGH() \
    while (! READ_RXOVR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BRE
//
// Return the value of register Isr
//
// Notes : Rx-Bit rising error 
//        (ISR) at the offset 0x10, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ BRE_MASK) | ((val << BRE_START_BIT) & BRE_MASK )); \
   } 

#define ENABLE_BRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  BRE_MASK ); \
   }

#define DISABLE_BRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~BRE_MASK ); \
   } 

#define READ_BRE() \
   ((READ_REGISTER_ULONG(0x10) & BRE_MASK)  >> BRE_START_BIT)

#define WHEN_BRE_HIGH() \
     if ( READ_BRE() )


#define UNLESS_BRE_HIGH() \
     if (! READ_BRE() )


#define WAIT_BRE_LOW() \
    while ( READ_BRE() );


#define WAIT_BRE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BRE() && (--___t___ > 0)); }


#define WAIT_BRE_HIGH() \
    while (! READ_BRE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SBPE
//
// Return the value of register Isr
//
// Notes : Rx-Short Bit period error 
//        (ISR) at the offset 0x10, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SBPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SBPE_MASK) | ((val << SBPE_START_BIT) & SBPE_MASK )); \
   } 

#define ENABLE_SBPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SBPE_MASK ); \
   }

#define DISABLE_SBPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SBPE_MASK ); \
   } 

#define READ_SBPE() \
   ((READ_REGISTER_ULONG(0x10) & SBPE_MASK)  >> SBPE_START_BIT)

#define WHEN_SBPE_HIGH() \
     if ( READ_SBPE() )


#define UNLESS_SBPE_HIGH() \
     if (! READ_SBPE() )


#define WAIT_SBPE_LOW() \
    while ( READ_SBPE() );


#define WAIT_SBPE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBPE() && (--___t___ > 0)); }


#define WAIT_SBPE_HIGH() \
    while (! READ_SBPE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LBPE
//
// Return the value of register Isr
//
// Notes : Rx-Long Bit Period Error 
//        (ISR) at the offset 0x10, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LBPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ LBPE_MASK) | ((val << LBPE_START_BIT) & LBPE_MASK )); \
   } 

#define ENABLE_LBPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  LBPE_MASK ); \
   }

#define DISABLE_LBPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~LBPE_MASK ); \
   } 

#define READ_LBPE() \
   ((READ_REGISTER_ULONG(0x10) & LBPE_MASK)  >> LBPE_START_BIT)

#define WHEN_LBPE_HIGH() \
     if ( READ_LBPE() )


#define UNLESS_LBPE_HIGH() \
     if (! READ_LBPE() )


#define WAIT_LBPE_LOW() \
    while ( READ_LBPE() );


#define WAIT_LBPE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBPE() && (--___t___ > 0)); }


#define WAIT_LBPE_HIGH() \
    while (! READ_LBPE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXACKE
//
// Return the value of register Isr
//
// Notes : Rx-Missing Acknowledge 
//        (ISR) at the offset 0x10, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXACKE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ RXACKE_MASK) | ((val << RXACKE_START_BIT) & RXACKE_MASK )); \
   } 

#define ENABLE_RXACKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  RXACKE_MASK ); \
   }

#define DISABLE_RXACKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~RXACKE_MASK ); \
   } 

#define READ_RXACKE() \
   ((READ_REGISTER_ULONG(0x10) & RXACKE_MASK)  >> RXACKE_START_BIT)

#define WHEN_RXACKE_HIGH() \
     if ( READ_RXACKE() )


#define UNLESS_RXACKE_HIGH() \
     if (! READ_RXACKE() )


#define WAIT_RXACKE_LOW() \
    while ( READ_RXACKE() );


#define WAIT_RXACKE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXACKE() && (--___t___ > 0)); }


#define WAIT_RXACKE_HIGH() \
    while (! READ_RXACKE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARBLST
//
// Return the value of register Isr
//
// Notes : Arbitration Lost 
//        (ISR) at the offset 0x10, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARBLST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ARBLST_MASK) | ((val << ARBLST_START_BIT) & ARBLST_MASK )); \
   } 

#define ENABLE_ARBLST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ARBLST_MASK ); \
   }

#define DISABLE_ARBLST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ARBLST_MASK ); \
   } 

#define READ_ARBLST() \
   ((READ_REGISTER_ULONG(0x10) & ARBLST_MASK)  >> ARBLST_START_BIT)

#define WHEN_ARBLST_HIGH() \
     if ( READ_ARBLST() )


#define UNLESS_ARBLST_HIGH() \
     if (! READ_ARBLST() )


#define WAIT_ARBLST_LOW() \
    while ( READ_ARBLST() );


#define WAIT_ARBLST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARBLST() && (--___t___ > 0)); }


#define WAIT_ARBLST_HIGH() \
    while (! READ_ARBLST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXBR
//
// Return the value of register Isr
//
// Notes : Tx-Byte Request 
//        (ISR) at the offset 0x10, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXBR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXBR_MASK) | ((val << TXBR_START_BIT) & TXBR_MASK )); \
   } 

#define ENABLE_TXBR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXBR_MASK ); \
   }

#define DISABLE_TXBR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXBR_MASK ); \
   } 

#define READ_TXBR() \
   ((READ_REGISTER_ULONG(0x10) & TXBR_MASK)  >> TXBR_START_BIT)

#define WHEN_TXBR_HIGH() \
     if ( READ_TXBR() )


#define UNLESS_TXBR_HIGH() \
     if (! READ_TXBR() )


#define WAIT_TXBR_LOW() \
    while ( READ_TXBR() );


#define WAIT_TXBR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXBR() && (--___t___ > 0)); }


#define WAIT_TXBR_HIGH() \
    while (! READ_TXBR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXEND
//
// Return the value of register Isr
//
// Notes : End of Transmission 
//        (ISR) at the offset 0x10, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXEND_MASK) | ((val << TXEND_START_BIT) & TXEND_MASK )); \
   } 

#define ENABLE_TXEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXEND_MASK ); \
   }

#define DISABLE_TXEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXEND_MASK ); \
   } 

#define READ_TXEND() \
   ((READ_REGISTER_ULONG(0x10) & TXEND_MASK)  >> TXEND_START_BIT)

#define WHEN_TXEND_HIGH() \
     if ( READ_TXEND() )


#define UNLESS_TXEND_HIGH() \
     if (! READ_TXEND() )


#define WAIT_TXEND_LOW() \
    while ( READ_TXEND() );


#define WAIT_TXEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXEND() && (--___t___ > 0)); }


#define WAIT_TXEND_HIGH() \
    while (! READ_TXEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXUDR
//
// Return the value of register Isr
//
// Notes : Tx-Buffer Underrun 
//        (ISR) at the offset 0x10, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXUDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXUDR_MASK) | ((val << TXUDR_START_BIT) & TXUDR_MASK )); \
   } 

#define ENABLE_TXUDR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXUDR_MASK ); \
   }

#define DISABLE_TXUDR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXUDR_MASK ); \
   } 

#define READ_TXUDR() \
   ((READ_REGISTER_ULONG(0x10) & TXUDR_MASK)  >> TXUDR_START_BIT)

#define WHEN_TXUDR_HIGH() \
     if ( READ_TXUDR() )


#define UNLESS_TXUDR_HIGH() \
     if (! READ_TXUDR() )


#define WAIT_TXUDR_LOW() \
    while ( READ_TXUDR() );


#define WAIT_TXUDR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXUDR() && (--___t___ > 0)); }


#define WAIT_TXUDR_HIGH() \
    while (! READ_TXUDR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXERR
//
// Return the value of register Isr
//
// Notes : Tx-Error 
//        (ISR) at the offset 0x10, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXERR_MASK) | ((val << TXERR_START_BIT) & TXERR_MASK )); \
   } 

#define ENABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXERR_MASK ); \
   }

#define DISABLE_TXERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXERR_MASK ); \
   } 

#define READ_TXERR() \
   ((READ_REGISTER_ULONG(0x10) & TXERR_MASK)  >> TXERR_START_BIT)

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
// Function : TXACKE
//
// Return the value of register Isr
//
// Notes : Tx-Missing acknowledge error 
//        (ISR) at the offset 0x10, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXACKE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXACKE_MASK) | ((val << TXACKE_START_BIT) & TXACKE_MASK )); \
   } 

#define ENABLE_TXACKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXACKE_MASK ); \
   }

#define DISABLE_TXACKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXACKE_MASK ); \
   } 

#define READ_TXACKE() \
   ((READ_REGISTER_ULONG(0x10) & TXACKE_MASK)  >> TXACKE_START_BIT)

#define WHEN_TXACKE_HIGH() \
     if ( READ_TXACKE() )


#define UNLESS_TXACKE_HIGH() \
     if (! READ_TXACKE() )


#define WAIT_TXACKE_LOW() \
    while ( READ_TXACKE() );


#define WAIT_TXACKE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXACKE() && (--___t___ > 0)); }


#define WAIT_TXACKE_HIGH() \
    while (! READ_TXACKE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ier
//
// Return the value of register IER
//
// Notes : Register Ier at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IER( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_IER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_IER() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : RXBRIE
//
// Return the value of register Ier
//
// Notes : Rx-Byte Received Interrupt Enable 
//        (IER) at the offset 0x14, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXBRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RXBRIE_MASK) | ((val << RXBRIE_START_BIT) & RXBRIE_MASK )); \
   } 

#define ENABLE_RXBRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RXBRIE_MASK ); \
   }

#define DISABLE_RXBRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RXBRIE_MASK ); \
   } 

#define READ_RXBRIE() \
   ((READ_REGISTER_ULONG(0x14) & RXBRIE_MASK)  >> RXBRIE_START_BIT)

#define WHEN_RXBRIE_HIGH() \
     if ( READ_RXBRIE() )


#define UNLESS_RXBRIE_HIGH() \
     if (! READ_RXBRIE() )


#define WAIT_RXBRIE_LOW() \
    while ( READ_RXBRIE() );


#define WAIT_RXBRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXBRIE() && (--___t___ > 0)); }


#define WAIT_RXBRIE_HIGH() \
    while (! READ_RXBRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXENDIE
//
// Return the value of register Ier
//
// Notes : End Of Reception Interrupt Enable 
//        (IER) at the offset 0x14, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXENDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RXENDIE_MASK) | ((val << RXENDIE_START_BIT) & RXENDIE_MASK )); \
   } 

#define ENABLE_RXENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RXENDIE_MASK ); \
   }

#define DISABLE_RXENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RXENDIE_MASK ); \
   } 

#define READ_RXENDIE() \
   ((READ_REGISTER_ULONG(0x14) & RXENDIE_MASK)  >> RXENDIE_START_BIT)

#define WHEN_RXENDIE_HIGH() \
     if ( READ_RXENDIE() )


#define UNLESS_RXENDIE_HIGH() \
     if (! READ_RXENDIE() )


#define WAIT_RXENDIE_LOW() \
    while ( READ_RXENDIE() );


#define WAIT_RXENDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXENDIE() && (--___t___ > 0)); }


#define WAIT_RXENDIE_HIGH() \
    while (! READ_RXENDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXOVRIE
//
// Return the value of register Ier
//
// Notes : Rx-Buffer Overrun Interrupt Enable 
//        (IER) at the offset 0x14, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXOVRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RXOVRIE_MASK) | ((val << RXOVRIE_START_BIT) & RXOVRIE_MASK )); \
   } 

#define ENABLE_RXOVRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RXOVRIE_MASK ); \
   }

#define DISABLE_RXOVRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RXOVRIE_MASK ); \
   } 

#define READ_RXOVRIE() \
   ((READ_REGISTER_ULONG(0x14) & RXOVRIE_MASK)  >> RXOVRIE_START_BIT)

#define WHEN_RXOVRIE_HIGH() \
     if ( READ_RXOVRIE() )


#define UNLESS_RXOVRIE_HIGH() \
     if (! READ_RXOVRIE() )


#define WAIT_RXOVRIE_LOW() \
    while ( READ_RXOVRIE() );


#define WAIT_RXOVRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXOVRIE() && (--___t___ > 0)); }


#define WAIT_RXOVRIE_HIGH() \
    while (! READ_RXOVRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BREIE
//
// Return the value of register Ier
//
// Notes : Bit Rising Error Interrupt Enable 
//        (IER) at the offset 0x14, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BREIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ BREIE_MASK) | ((val << BREIE_START_BIT) & BREIE_MASK )); \
   } 

#define ENABLE_BREIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  BREIE_MASK ); \
   }

#define DISABLE_BREIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~BREIE_MASK ); \
   } 

#define READ_BREIE() \
   ((READ_REGISTER_ULONG(0x14) & BREIE_MASK)  >> BREIE_START_BIT)

#define WHEN_BREIE_HIGH() \
     if ( READ_BREIE() )


#define UNLESS_BREIE_HIGH() \
     if (! READ_BREIE() )


#define WAIT_BREIE_LOW() \
    while ( READ_BREIE() );


#define WAIT_BREIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BREIE() && (--___t___ > 0)); }


#define WAIT_BREIE_HIGH() \
    while (! READ_BREIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SBPEIE
//
// Return the value of register Ier
//
// Notes : Short Bit Period Error Interrupt Enable 
//        (IER) at the offset 0x14, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SBPEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ SBPEIE_MASK) | ((val << SBPEIE_START_BIT) & SBPEIE_MASK )); \
   } 

#define ENABLE_SBPEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  SBPEIE_MASK ); \
   }

#define DISABLE_SBPEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~SBPEIE_MASK ); \
   } 

#define READ_SBPEIE() \
   ((READ_REGISTER_ULONG(0x14) & SBPEIE_MASK)  >> SBPEIE_START_BIT)

#define WHEN_SBPEIE_HIGH() \
     if ( READ_SBPEIE() )


#define UNLESS_SBPEIE_HIGH() \
     if (! READ_SBPEIE() )


#define WAIT_SBPEIE_LOW() \
    while ( READ_SBPEIE() );


#define WAIT_SBPEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBPEIE() && (--___t___ > 0)); }


#define WAIT_SBPEIE_HIGH() \
    while (! READ_SBPEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LBPEIE
//
// Return the value of register Ier
//
// Notes : Long Bit Period Error Interrupt Enable 
//        (IER) at the offset 0x14, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LBPEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ LBPEIE_MASK) | ((val << LBPEIE_START_BIT) & LBPEIE_MASK )); \
   } 

#define ENABLE_LBPEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  LBPEIE_MASK ); \
   }

#define DISABLE_LBPEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~LBPEIE_MASK ); \
   } 

#define READ_LBPEIE() \
   ((READ_REGISTER_ULONG(0x14) & LBPEIE_MASK)  >> LBPEIE_START_BIT)

#define WHEN_LBPEIE_HIGH() \
     if ( READ_LBPEIE() )


#define UNLESS_LBPEIE_HIGH() \
     if (! READ_LBPEIE() )


#define WAIT_LBPEIE_LOW() \
    while ( READ_LBPEIE() );


#define WAIT_LBPEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBPEIE() && (--___t___ > 0)); }


#define WAIT_LBPEIE_HIGH() \
    while (! READ_LBPEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXACKIE
//
// Return the value of register Ier
//
// Notes : Rx-Missing Acknowledge Error Interrupt Enable 
//        (IER) at the offset 0x14, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXACKIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RXACKIE_MASK) | ((val << RXACKIE_START_BIT) & RXACKIE_MASK )); \
   } 

#define ENABLE_RXACKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RXACKIE_MASK ); \
   }

#define DISABLE_RXACKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RXACKIE_MASK ); \
   } 

#define READ_RXACKIE() \
   ((READ_REGISTER_ULONG(0x14) & RXACKIE_MASK)  >> RXACKIE_START_BIT)

#define WHEN_RXACKIE_HIGH() \
     if ( READ_RXACKIE() )


#define UNLESS_RXACKIE_HIGH() \
     if (! READ_RXACKIE() )


#define WAIT_RXACKIE_LOW() \
    while ( READ_RXACKIE() );


#define WAIT_RXACKIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXACKIE() && (--___t___ > 0)); }


#define WAIT_RXACKIE_HIGH() \
    while (! READ_RXACKIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARBLSTIE
//
// Return the value of register Ier
//
// Notes : Arbitration Lost Interrupt Enable 
//        (IER) at the offset 0x14, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARBLSTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ARBLSTIE_MASK) | ((val << ARBLSTIE_START_BIT) & ARBLSTIE_MASK )); \
   } 

#define ENABLE_ARBLSTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ARBLSTIE_MASK ); \
   }

#define DISABLE_ARBLSTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ARBLSTIE_MASK ); \
   } 

#define READ_ARBLSTIE() \
   ((READ_REGISTER_ULONG(0x14) & ARBLSTIE_MASK)  >> ARBLSTIE_START_BIT)

#define WHEN_ARBLSTIE_HIGH() \
     if ( READ_ARBLSTIE() )


#define UNLESS_ARBLSTIE_HIGH() \
     if (! READ_ARBLSTIE() )


#define WAIT_ARBLSTIE_LOW() \
    while ( READ_ARBLSTIE() );


#define WAIT_ARBLSTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARBLSTIE() && (--___t___ > 0)); }


#define WAIT_ARBLSTIE_HIGH() \
    while (! READ_ARBLSTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXBRIE
//
// Return the value of register Ier
//
// Notes : Tx-Byte Request Interrupt Enable 
//        (IER) at the offset 0x14, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXBRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TXBRIE_MASK) | ((val << TXBRIE_START_BIT) & TXBRIE_MASK )); \
   } 

#define ENABLE_TXBRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TXBRIE_MASK ); \
   }

#define DISABLE_TXBRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TXBRIE_MASK ); \
   } 

#define READ_TXBRIE() \
   ((READ_REGISTER_ULONG(0x14) & TXBRIE_MASK)  >> TXBRIE_START_BIT)

#define WHEN_TXBRIE_HIGH() \
     if ( READ_TXBRIE() )


#define UNLESS_TXBRIE_HIGH() \
     if (! READ_TXBRIE() )


#define WAIT_TXBRIE_LOW() \
    while ( READ_TXBRIE() );


#define WAIT_TXBRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXBRIE() && (--___t___ > 0)); }


#define WAIT_TXBRIE_HIGH() \
    while (! READ_TXBRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXENDIE
//
// Return the value of register Ier
//
// Notes : Tx-End of message interrupt enable 
//        (IER) at the offset 0x14, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXENDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TXENDIE_MASK) | ((val << TXENDIE_START_BIT) & TXENDIE_MASK )); \
   } 

#define ENABLE_TXENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TXENDIE_MASK ); \
   }

#define DISABLE_TXENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TXENDIE_MASK ); \
   } 

#define READ_TXENDIE() \
   ((READ_REGISTER_ULONG(0x14) & TXENDIE_MASK)  >> TXENDIE_START_BIT)

#define WHEN_TXENDIE_HIGH() \
     if ( READ_TXENDIE() )


#define UNLESS_TXENDIE_HIGH() \
     if (! READ_TXENDIE() )


#define WAIT_TXENDIE_LOW() \
    while ( READ_TXENDIE() );


#define WAIT_TXENDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXENDIE() && (--___t___ > 0)); }


#define WAIT_TXENDIE_HIGH() \
    while (! READ_TXENDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXUDRIE
//
// Return the value of register Ier
//
// Notes : Tx-Underrun interrupt enable 
//        (IER) at the offset 0x14, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXUDRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TXUDRIE_MASK) | ((val << TXUDRIE_START_BIT) & TXUDRIE_MASK )); \
   } 

#define ENABLE_TXUDRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TXUDRIE_MASK ); \
   }

#define DISABLE_TXUDRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TXUDRIE_MASK ); \
   } 

#define READ_TXUDRIE() \
   ((READ_REGISTER_ULONG(0x14) & TXUDRIE_MASK)  >> TXUDRIE_START_BIT)

#define WHEN_TXUDRIE_HIGH() \
     if ( READ_TXUDRIE() )


#define UNLESS_TXUDRIE_HIGH() \
     if (! READ_TXUDRIE() )


#define WAIT_TXUDRIE_LOW() \
    while ( READ_TXUDRIE() );


#define WAIT_TXUDRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXUDRIE() && (--___t___ > 0)); }


#define WAIT_TXUDRIE_HIGH() \
    while (! READ_TXUDRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXERRIE
//
// Return the value of register Ier
//
// Notes : Tx-Error Interrupt Enable 
//        (IER) at the offset 0x14, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TXERRIE_MASK) | ((val << TXERRIE_START_BIT) & TXERRIE_MASK )); \
   } 

#define ENABLE_TXERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TXERRIE_MASK ); \
   }

#define DISABLE_TXERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TXERRIE_MASK ); \
   } 

#define READ_TXERRIE() \
   ((READ_REGISTER_ULONG(0x14) & TXERRIE_MASK)  >> TXERRIE_START_BIT)

#define WHEN_TXERRIE_HIGH() \
     if ( READ_TXERRIE() )


#define UNLESS_TXERRIE_HIGH() \
     if (! READ_TXERRIE() )


#define WAIT_TXERRIE_LOW() \
    while ( READ_TXERRIE() );


#define WAIT_TXERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXERRIE() && (--___t___ > 0)); }


#define WAIT_TXERRIE_HIGH() \
    while (! READ_TXERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXACKIE
//
// Return the value of register Ier
//
// Notes : Tx-Missing Acknowledge Error Interrupt Enable 
//        (IER) at the offset 0x14, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXACKIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TXACKIE_MASK) | ((val << TXACKIE_START_BIT) & TXACKIE_MASK )); \
   } 

#define ENABLE_TXACKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TXACKIE_MASK ); \
   }

#define DISABLE_TXACKIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TXACKIE_MASK ); \
   } 

#define READ_TXACKIE() \
   ((READ_REGISTER_ULONG(0x14) & TXACKIE_MASK)  >> TXACKIE_START_BIT)

#define WHEN_TXACKIE_HIGH() \
     if ( READ_TXACKIE() )


#define UNLESS_TXACKIE_HIGH() \
     if (! READ_TXACKIE() )


#define WAIT_TXACKIE_LOW() \
    while ( READ_TXACKIE() );


#define WAIT_TXACKIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXACKIE() && (--___t___ > 0)); }


#define WAIT_TXACKIE_HIGH() \
    while (! READ_TXACKIE() );


