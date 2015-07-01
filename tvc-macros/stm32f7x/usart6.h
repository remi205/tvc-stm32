/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/usart6.h
// 
//
// Generated on the 26/06/2015 21:10 by the 'super-cool' code generator 
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
 
/////////////////////////////////////////////////////////////////////////
//
// Function : Gtpr
//
// Return the value of register GTPR
//
// Notes : Register Gtpr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GTPR( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_GTPR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_GTPR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_GTPR() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Gtpr
//
// Return the value of register GTPR
//
// Notes : Register Guard time and prescaler register (GTPR) at the offset 0x40011400, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Prescaler value 
    // 
#define PSC_MASK 0xFFU
#define PSC_OFFSET 7
#define PSC_START_BIT 0
#define PSC_WIDTH 8


#define GTPR_REG 0x40011400

typedef enum psc {
    PSC_0,
    PSC_1
} PSC_T ;
#define READ_PSC() \
   ((READ_REGISTER_ULONG(0x40011400) & PSC_MASK)  >> PSC_START_BIT)

#define WRITE_PSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ PSC_MASK) | ((val << PSC_START_BIT) & PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gtpr
//
// Return the value of register GTPR
//
// Notes : Register Guard time and prescaler register (GTPR) at the offset 0x40011400, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Guard time value 
    // 
#define GT_MASK 0xFF00U
#define GT_OFFSET 15
#define GT_START_BIT 8
#define GT_WIDTH 8



typedef enum gt {
    GT_0,
    GT_1
} GT_T ;
#define READ_GT() \
   ((READ_REGISTER_ULONG(0x40011400) & GT_MASK)  >> GT_START_BIT)

#define WRITE_GT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ GT_MASK) | ((val << GT_START_BIT) & GT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity error clear flag 
    // 
#define PECF_MASK 0x1U
#define PECF_OFFSET 0
#define PECF_START_BIT 0
#define PECF_WIDTH 1


#define ICR_REG 0x40011400

typedef enum pecf {
    PECF_0,
    PECF_1
} PECF_T ;
#define WRITE_PECF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ PECF_MASK) | ((val << PECF_START_BIT) & PECF_MASK )); \
   } 

#define ENABLE_PECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  PECF_MASK ); \
   }

#define DISABLE_PECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~PECF_MASK ); \
   } 

#define READ_PECF() \
   ((READ_REGISTER_ULONG(0x40011400) & PECF_MASK)  >> PECF_START_BIT)

#define WHEN_PECF_HIGH() \
     if ( READ_PECF() )


#define UNLESS_PECF_HIGH() \
     if (! READ_PECF() )


#define WAIT_PECF_LOW() \
    while ( READ_PECF() );


#define WAIT_PECF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PECF() && (--___t___ > 0)); }


#define WAIT_PECF_HIGH() \
    while (! READ_PECF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Framing error clear flag 
    // 
#define FECF_MASK 0x2U
#define FECF_OFFSET 1
#define FECF_START_BIT 1
#define FECF_WIDTH 1



typedef enum fecf {
    FECF_0,
    FECF_1
} FECF_T ;
#define WRITE_FECF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ FECF_MASK) | ((val << FECF_START_BIT) & FECF_MASK )); \
   } 

#define ENABLE_FECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  FECF_MASK ); \
   }

#define DISABLE_FECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~FECF_MASK ); \
   } 

#define READ_FECF() \
   ((READ_REGISTER_ULONG(0x40011400) & FECF_MASK)  >> FECF_START_BIT)

#define WHEN_FECF_HIGH() \
     if ( READ_FECF() )


#define UNLESS_FECF_HIGH() \
     if (! READ_FECF() )


#define WAIT_FECF_LOW() \
    while ( READ_FECF() );


#define WAIT_FECF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FECF() && (--___t___ > 0)); }


#define WAIT_FECF_HIGH() \
    while (! READ_FECF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Noise detected clear flag 
    // 
#define NCF_MASK 0x4U
#define NCF_OFFSET 2
#define NCF_START_BIT 2
#define NCF_WIDTH 1



typedef enum ncf {
    NCF_0,
    NCF_1
} NCF_T ;
#define WRITE_NCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ NCF_MASK) | ((val << NCF_START_BIT) & NCF_MASK )); \
   } 

#define ENABLE_NCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  NCF_MASK ); \
   }

#define DISABLE_NCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~NCF_MASK ); \
   } 

#define READ_NCF() \
   ((READ_REGISTER_ULONG(0x40011400) & NCF_MASK)  >> NCF_START_BIT)

#define WHEN_NCF_HIGH() \
     if ( READ_NCF() )


#define UNLESS_NCF_HIGH() \
     if (! READ_NCF() )


#define WAIT_NCF_LOW() \
    while ( READ_NCF() );


#define WAIT_NCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NCF() && (--___t___ > 0)); }


#define WAIT_NCF_HIGH() \
    while (! READ_NCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun error clear flag 
    // 
#define ORECF_MASK 0x8U
#define ORECF_OFFSET 3
#define ORECF_START_BIT 3
#define ORECF_WIDTH 1



typedef enum orecf {
    ORECF_0,
    ORECF_1
} ORECF_T ;
#define WRITE_ORECF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ORECF_MASK) | ((val << ORECF_START_BIT) & ORECF_MASK )); \
   } 

#define ENABLE_ORECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ORECF_MASK ); \
   }

#define DISABLE_ORECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ORECF_MASK ); \
   } 

#define READ_ORECF() \
   ((READ_REGISTER_ULONG(0x40011400) & ORECF_MASK)  >> ORECF_START_BIT)

#define WHEN_ORECF_HIGH() \
     if ( READ_ORECF() )


#define UNLESS_ORECF_HIGH() \
     if (! READ_ORECF() )


#define WAIT_ORECF_LOW() \
    while ( READ_ORECF() );


#define WAIT_ORECF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ORECF() && (--___t___ > 0)); }


#define WAIT_ORECF_HIGH() \
    while (! READ_ORECF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Idle line detected clear flag 
    // 
#define IDLECF_MASK 0x10U
#define IDLECF_OFFSET 4
#define IDLECF_START_BIT 4
#define IDLECF_WIDTH 1



typedef enum idlecf {
    IDLECF_0,
    IDLECF_1
} IDLECF_T ;
#define WRITE_IDLECF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ IDLECF_MASK) | ((val << IDLECF_START_BIT) & IDLECF_MASK )); \
   } 

#define ENABLE_IDLECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  IDLECF_MASK ); \
   }

#define DISABLE_IDLECF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~IDLECF_MASK ); \
   } 

#define READ_IDLECF() \
   ((READ_REGISTER_ULONG(0x40011400) & IDLECF_MASK)  >> IDLECF_START_BIT)

#define WHEN_IDLECF_HIGH() \
     if ( READ_IDLECF() )


#define UNLESS_IDLECF_HIGH() \
     if (! READ_IDLECF() )


#define WAIT_IDLECF_LOW() \
    while ( READ_IDLECF() );


#define WAIT_IDLECF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDLECF() && (--___t___ > 0)); }


#define WAIT_IDLECF_HIGH() \
    while (! READ_IDLECF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmission complete clear flag 
    // 
#define TCCF_MASK 0x40U
#define TCCF_OFFSET 6
#define TCCF_START_BIT 6
#define TCCF_WIDTH 1



typedef enum tccf {
    TCCF_0,
    TCCF_1
} TCCF_T ;
#define WRITE_TCCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TCCF_MASK) | ((val << TCCF_START_BIT) & TCCF_MASK )); \
   } 

#define ENABLE_TCCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TCCF_MASK ); \
   }

#define DISABLE_TCCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TCCF_MASK ); \
   } 

#define READ_TCCF() \
   ((READ_REGISTER_ULONG(0x40011400) & TCCF_MASK)  >> TCCF_START_BIT)

#define WHEN_TCCF_HIGH() \
     if ( READ_TCCF() )


#define UNLESS_TCCF_HIGH() \
     if (! READ_TCCF() )


#define WAIT_TCCF_LOW() \
    while ( READ_TCCF() );


#define WAIT_TCCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCCF() && (--___t___ > 0)); }


#define WAIT_TCCF_HIGH() \
    while (! READ_TCCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN break detection clear flag 
    // 
#define LBDCF_MASK 0x100U
#define LBDCF_OFFSET 8
#define LBDCF_START_BIT 8
#define LBDCF_WIDTH 1



typedef enum lbdcf {
    LBDCF_0,
    LBDCF_1
} LBDCF_T ;
#define WRITE_LBDCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ LBDCF_MASK) | ((val << LBDCF_START_BIT) & LBDCF_MASK )); \
   } 

#define ENABLE_LBDCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  LBDCF_MASK ); \
   }

#define DISABLE_LBDCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~LBDCF_MASK ); \
   } 

#define READ_LBDCF() \
   ((READ_REGISTER_ULONG(0x40011400) & LBDCF_MASK)  >> LBDCF_START_BIT)

#define WHEN_LBDCF_HIGH() \
     if ( READ_LBDCF() )


#define UNLESS_LBDCF_HIGH() \
     if (! READ_LBDCF() )


#define WAIT_LBDCF_LOW() \
    while ( READ_LBDCF() );


#define WAIT_LBDCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBDCF() && (--___t___ > 0)); }


#define WAIT_LBDCF_HIGH() \
    while (! READ_LBDCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS clear flag 
    // 
#define CTSCF_MASK 0x200U
#define CTSCF_OFFSET 9
#define CTSCF_START_BIT 9
#define CTSCF_WIDTH 1



typedef enum ctscf {
    CTSCF_0,
    CTSCF_1
} CTSCF_T ;
#define WRITE_CTSCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CTSCF_MASK) | ((val << CTSCF_START_BIT) & CTSCF_MASK )); \
   } 

#define ENABLE_CTSCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CTSCF_MASK ); \
   }

#define DISABLE_CTSCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CTSCF_MASK ); \
   } 

#define READ_CTSCF() \
   ((READ_REGISTER_ULONG(0x40011400) & CTSCF_MASK)  >> CTSCF_START_BIT)

#define WHEN_CTSCF_HIGH() \
     if ( READ_CTSCF() )


#define UNLESS_CTSCF_HIGH() \
     if (! READ_CTSCF() )


#define WAIT_CTSCF_LOW() \
    while ( READ_CTSCF() );


#define WAIT_CTSCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTSCF() && (--___t___ > 0)); }


#define WAIT_CTSCF_HIGH() \
    while (! READ_CTSCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout clear flag 
    // 
#define RTOCF_MASK 0x800U
#define RTOCF_OFFSET 11
#define RTOCF_START_BIT 11
#define RTOCF_WIDTH 1



typedef enum rtocf {
    RTOCF_0,
    RTOCF_1
} RTOCF_T ;
#define WRITE_RTOCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RTOCF_MASK) | ((val << RTOCF_START_BIT) & RTOCF_MASK )); \
   } 

#define ENABLE_RTOCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RTOCF_MASK ); \
   }

#define DISABLE_RTOCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RTOCF_MASK ); \
   } 

#define READ_RTOCF() \
   ((READ_REGISTER_ULONG(0x40011400) & RTOCF_MASK)  >> RTOCF_START_BIT)

#define WHEN_RTOCF_HIGH() \
     if ( READ_RTOCF() )


#define UNLESS_RTOCF_HIGH() \
     if (! READ_RTOCF() )


#define WAIT_RTOCF_LOW() \
    while ( READ_RTOCF() );


#define WAIT_RTOCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTOCF() && (--___t___ > 0)); }


#define WAIT_RTOCF_HIGH() \
    while (! READ_RTOCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of block clear flag 
    // 
#define EOBCF_MASK 0x1000U
#define EOBCF_OFFSET 12
#define EOBCF_START_BIT 12
#define EOBCF_WIDTH 1



typedef enum eobcf {
    EOBCF_0,
    EOBCF_1
} EOBCF_T ;
#define WRITE_EOBCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ EOBCF_MASK) | ((val << EOBCF_START_BIT) & EOBCF_MASK )); \
   } 

#define ENABLE_EOBCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  EOBCF_MASK ); \
   }

#define DISABLE_EOBCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~EOBCF_MASK ); \
   } 

#define READ_EOBCF() \
   ((READ_REGISTER_ULONG(0x40011400) & EOBCF_MASK)  >> EOBCF_START_BIT)

#define WHEN_EOBCF_HIGH() \
     if ( READ_EOBCF() )


#define UNLESS_EOBCF_HIGH() \
     if (! READ_EOBCF() )


#define WAIT_EOBCF_LOW() \
    while ( READ_EOBCF() );


#define WAIT_EOBCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOBCF() && (--___t___ > 0)); }


#define WAIT_EOBCF_HIGH() \
    while (! READ_EOBCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Character match clear flag 
    // 
#define CMCF_MASK 0x20000U
#define CMCF_OFFSET 17
#define CMCF_START_BIT 17
#define CMCF_WIDTH 1



typedef enum cmcf {
    CMCF_0,
    CMCF_1
} CMCF_T ;
#define WRITE_CMCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CMCF_MASK) | ((val << CMCF_START_BIT) & CMCF_MASK )); \
   } 

#define ENABLE_CMCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CMCF_MASK ); \
   }

#define DISABLE_CMCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CMCF_MASK ); \
   } 

#define READ_CMCF() \
   ((READ_REGISTER_ULONG(0x40011400) & CMCF_MASK)  >> CMCF_START_BIT)

#define WHEN_CMCF_HIGH() \
     if ( READ_CMCF() )


#define UNLESS_CMCF_HIGH() \
     if (! READ_CMCF() )


#define WAIT_CMCF_LOW() \
    while ( READ_CMCF() );


#define WAIT_CMCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMCF() && (--___t___ > 0)); }


#define WAIT_CMCF_HIGH() \
    while (! READ_CMCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x40011400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup from Stop mode clear flag 
    // 
#define WUCF_MASK 0x100000U
#define WUCF_OFFSET 20
#define WUCF_START_BIT 20
#define WUCF_WIDTH 1



typedef enum wucf {
    WUCF_0,
    WUCF_1
} WUCF_T ;
#define WRITE_WUCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ WUCF_MASK) | ((val << WUCF_START_BIT) & WUCF_MASK )); \
   } 

#define ENABLE_WUCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  WUCF_MASK ); \
   }

#define DISABLE_WUCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~WUCF_MASK ); \
   } 

#define READ_WUCF() \
   ((READ_REGISTER_ULONG(0x40011400) & WUCF_MASK)  >> WUCF_START_BIT)

#define WHEN_WUCF_HIGH() \
     if ( READ_WUCF() )


#define UNLESS_WUCF_HIGH() \
     if (! READ_WUCF() )


#define WAIT_WUCF_LOW() \
    while ( READ_WUCF() );


#define WAIT_WUCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUCF() && (--___t___ > 0)); }


#define WAIT_WUCF_HIGH() \
    while (! READ_WUCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rdr
//
// Return the value of register RDR
//
// Notes : Register Rdr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RDR() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Rdr
//
// Return the value of register RDR
//
// Notes : Register Receive data register (RDR) at the offset 0x40011400, Bits 0:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive data value 
    // 
#define RDR_MASK 0x1FFU
#define RDR_OFFSET 8
#define RDR_START_BIT 0
#define RDR_WIDTH 9


#define RDR_REG 0x40011400

typedef enum rdr {
    RDR_0,
    RDR_1
} RDR_T ;
#define READ_RDR() \
   ((READ_REGISTER_ULONG(0x40011400) & RDR_MASK)  >> RDR_START_BIT)

#define WRITE_RDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RDR_MASK) | ((val << RDR_START_BIT) & RDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tdr
//
// Return the value of register TDR
//
// Notes : Register Tdr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TDR( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_TDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_TDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_TDR() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Tdr
//
// Return the value of register TDR
//
// Notes : Register Transmit data register (TDR) at the offset 0x40011400, Bits 0:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit data value 
    // 
#define TDR_MASK 0x1FFU
#define TDR_OFFSET 8
#define TDR_START_BIT 0
#define TDR_WIDTH 9


#define TDR_REG 0x40011400

typedef enum tdr {
    TDR_0,
    TDR_1
} TDR_T ;
#define READ_TDR() \
   ((READ_REGISTER_ULONG(0x40011400) & TDR_MASK)  >> TDR_START_BIT)

#define WRITE_TDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TDR_MASK) | ((val << TDR_START_BIT) & TDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Rqr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RQR( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x40011400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto baud rate request 
    // 
#define ABRRQ_MASK 0x1U
#define ABRRQ_OFFSET 0
#define ABRRQ_START_BIT 0
#define ABRRQ_WIDTH 1


#define RQR_REG 0x40011400

typedef enum abrrq {
    ABRRQ_0,
    ABRRQ_1
} ABRRQ_T ;
#define WRITE_ABRRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ABRRQ_MASK) | ((val << ABRRQ_START_BIT) & ABRRQ_MASK )); \
   } 

#define ENABLE_ABRRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ABRRQ_MASK ); \
   }

#define DISABLE_ABRRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ABRRQ_MASK ); \
   } 

#define READ_ABRRQ() \
   ((READ_REGISTER_ULONG(0x40011400) & ABRRQ_MASK)  >> ABRRQ_START_BIT)

#define WHEN_ABRRQ_HIGH() \
     if ( READ_ABRRQ() )


#define UNLESS_ABRRQ_HIGH() \
     if (! READ_ABRRQ() )


#define WAIT_ABRRQ_LOW() \
    while ( READ_ABRRQ() );


#define WAIT_ABRRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABRRQ() && (--___t___ > 0)); }


#define WAIT_ABRRQ_HIGH() \
    while (! READ_ABRRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x40011400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Send break request 
    // 
#define SBKRQ_MASK 0x2U
#define SBKRQ_OFFSET 1
#define SBKRQ_START_BIT 1
#define SBKRQ_WIDTH 1



typedef enum sbkrq {
    SBKRQ_0,
    SBKRQ_1
} SBKRQ_T ;
#define WRITE_SBKRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ SBKRQ_MASK) | ((val << SBKRQ_START_BIT) & SBKRQ_MASK )); \
   } 

#define ENABLE_SBKRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  SBKRQ_MASK ); \
   }

#define DISABLE_SBKRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~SBKRQ_MASK ); \
   } 

#define READ_SBKRQ() \
   ((READ_REGISTER_ULONG(0x40011400) & SBKRQ_MASK)  >> SBKRQ_START_BIT)

#define WHEN_SBKRQ_HIGH() \
     if ( READ_SBKRQ() )


#define UNLESS_SBKRQ_HIGH() \
     if (! READ_SBKRQ() )


#define WAIT_SBKRQ_LOW() \
    while ( READ_SBKRQ() );


#define WAIT_SBKRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBKRQ() && (--___t___ > 0)); }


#define WAIT_SBKRQ_HIGH() \
    while (! READ_SBKRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x40011400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute mode request 
    // 
#define MMRQ_MASK 0x4U
#define MMRQ_OFFSET 2
#define MMRQ_START_BIT 2
#define MMRQ_WIDTH 1



typedef enum mmrq {
    MMRQ_0,
    MMRQ_1
} MMRQ_T ;
#define WRITE_MMRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ MMRQ_MASK) | ((val << MMRQ_START_BIT) & MMRQ_MASK )); \
   } 

#define ENABLE_MMRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  MMRQ_MASK ); \
   }

#define DISABLE_MMRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~MMRQ_MASK ); \
   } 

#define READ_MMRQ() \
   ((READ_REGISTER_ULONG(0x40011400) & MMRQ_MASK)  >> MMRQ_START_BIT)

#define WHEN_MMRQ_HIGH() \
     if ( READ_MMRQ() )


#define UNLESS_MMRQ_HIGH() \
     if (! READ_MMRQ() )


#define WAIT_MMRQ_LOW() \
    while ( READ_MMRQ() );


#define WAIT_MMRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MMRQ() && (--___t___ > 0)); }


#define WAIT_MMRQ_HIGH() \
    while (! READ_MMRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x40011400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive data flush request 
    // 
#define RXFRQ_MASK 0x8U
#define RXFRQ_OFFSET 3
#define RXFRQ_START_BIT 3
#define RXFRQ_WIDTH 1



typedef enum rxfrq {
    RXFRQ_0,
    RXFRQ_1
} RXFRQ_T ;
#define WRITE_RXFRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RXFRQ_MASK) | ((val << RXFRQ_START_BIT) & RXFRQ_MASK )); \
   } 

#define ENABLE_RXFRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RXFRQ_MASK ); \
   }

#define DISABLE_RXFRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RXFRQ_MASK ); \
   } 

#define READ_RXFRQ() \
   ((READ_REGISTER_ULONG(0x40011400) & RXFRQ_MASK)  >> RXFRQ_START_BIT)

#define WHEN_RXFRQ_HIGH() \
     if ( READ_RXFRQ() )


#define UNLESS_RXFRQ_HIGH() \
     if (! READ_RXFRQ() )


#define WAIT_RXFRQ_LOW() \
    while ( READ_RXFRQ() );


#define WAIT_RXFRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFRQ() && (--___t___ > 0)); }


#define WAIT_RXFRQ_HIGH() \
    while (! READ_RXFRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x40011400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit data flush request 
    // 
#define TXFRQ_MASK 0x10U
#define TXFRQ_OFFSET 4
#define TXFRQ_START_BIT 4
#define TXFRQ_WIDTH 1



typedef enum txfrq {
    TXFRQ_0,
    TXFRQ_1
} TXFRQ_T ;
#define WRITE_TXFRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TXFRQ_MASK) | ((val << TXFRQ_START_BIT) & TXFRQ_MASK )); \
   } 

#define ENABLE_TXFRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TXFRQ_MASK ); \
   }

#define DISABLE_TXFRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TXFRQ_MASK ); \
   } 

#define READ_TXFRQ() \
   ((READ_REGISTER_ULONG(0x40011400) & TXFRQ_MASK)  >> TXFRQ_START_BIT)

#define WHEN_TXFRQ_HIGH() \
     if ( READ_TXFRQ() )


#define UNLESS_TXFRQ_HIGH() \
     if (! READ_TXFRQ() )


#define WAIT_TXFRQ_LOW() \
    while ( READ_TXFRQ() );


#define WAIT_TXFRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFRQ() && (--___t___ > 0)); }


#define WAIT_TXFRQ_HIGH() \
    while (! READ_TXFRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Brr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BRR( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_BRR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_BRR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_BRR() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Baud rate register (BRR) at the offset 0x40011400, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DIV_Fraction 
    // 
#define DIV_FRACTION_MASK 0xFU
#define DIV_FRACTION_OFFSET 3
#define DIV_FRACTION_START_BIT 0
#define DIV_FRACTION_WIDTH 4


#define BRR_REG 0x40011400

typedef enum div_fraction {
    DIV_FRACTION_0,
    DIV_FRACTION_1
} DIV_FRACTION_T ;
#define READ_DIV_FRACTION() \
   ((READ_REGISTER_ULONG(0x40011400) & DIV_FRACTION_MASK)  >> DIV_FRACTION_START_BIT)

#define WRITE_DIV_FRACTION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DIV_FRACTION_MASK) | ((val << DIV_FRACTION_START_BIT) & DIV_FRACTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Baud rate register (BRR) at the offset 0x40011400, Bits 4:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DIV_Mantissa 
    // 
#define DIV_MANTISSA_MASK 0xFFF0U
#define DIV_MANTISSA_OFFSET 15
#define DIV_MANTISSA_START_BIT 4
#define DIV_MANTISSA_WIDTH 12



typedef enum div_mantissa {
    DIV_MANTISSA_0,
    DIV_MANTISSA_1
} DIV_MANTISSA_T ;
#define READ_DIV_MANTISSA() \
   ((READ_REGISTER_ULONG(0x40011400) & DIV_MANTISSA_MASK)  >> DIV_MANTISSA_START_BIT)

#define WRITE_DIV_MANTISSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DIV_MANTISSA_MASK) | ((val << DIV_MANTISSA_START_BIT) & DIV_MANTISSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ISR() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PE 
    // 
#define PE_MASK 0x1U
#define PE_OFFSET 0
#define PE_START_BIT 0
#define PE_WIDTH 1


#define ISR_REG 0x40011400

typedef enum pe {
    PE_0,
    PE_1
} PE_T ;
#define WRITE_PE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ PE_MASK) | ((val << PE_START_BIT) & PE_MASK )); \
   } 

#define ENABLE_PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  PE_MASK ); \
   }

#define DISABLE_PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~PE_MASK ); \
   } 

#define READ_PE() \
   ((READ_REGISTER_ULONG(0x40011400) & PE_MASK)  >> PE_START_BIT)

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FE 
    // 
#define FE_MASK 0x2U
#define FE_OFFSET 1
#define FE_START_BIT 1
#define FE_WIDTH 1



typedef enum fe {
    FE_0,
    FE_1
} FE_T ;
#define WRITE_FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ FE_MASK) | ((val << FE_START_BIT) & FE_MASK )); \
   } 

#define ENABLE_FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  FE_MASK ); \
   }

#define DISABLE_FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~FE_MASK ); \
   } 

#define READ_FE() \
   ((READ_REGISTER_ULONG(0x40011400) & FE_MASK)  >> FE_START_BIT)

#define WHEN_FE_HIGH() \
     if ( READ_FE() )


#define UNLESS_FE_HIGH() \
     if (! READ_FE() )


#define WAIT_FE_LOW() \
    while ( READ_FE() );


#define WAIT_FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FE() && (--___t___ > 0)); }


#define WAIT_FE_HIGH() \
    while (! READ_FE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NF 
    // 
#define NF_MASK 0x4U
#define NF_OFFSET 2
#define NF_START_BIT 2
#define NF_WIDTH 1



typedef enum nf {
    NF_0,
    NF_1
} NF_T ;
#define WRITE_NF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ NF_MASK) | ((val << NF_START_BIT) & NF_MASK )); \
   } 

#define ENABLE_NF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  NF_MASK ); \
   }

#define DISABLE_NF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~NF_MASK ); \
   } 

#define READ_NF() \
   ((READ_REGISTER_ULONG(0x40011400) & NF_MASK)  >> NF_START_BIT)

#define WHEN_NF_HIGH() \
     if ( READ_NF() )


#define UNLESS_NF_HIGH() \
     if (! READ_NF() )


#define WAIT_NF_LOW() \
    while ( READ_NF() );


#define WAIT_NF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NF() && (--___t___ > 0)); }


#define WAIT_NF_HIGH() \
    while (! READ_NF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ORE 
    // 
#define ORE_MASK 0x8U
#define ORE_OFFSET 3
#define ORE_START_BIT 3
#define ORE_WIDTH 1



typedef enum ore {
    ORE_0,
    ORE_1
} ORE_T ;
#define WRITE_ORE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ORE_MASK) | ((val << ORE_START_BIT) & ORE_MASK )); \
   } 

#define ENABLE_ORE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ORE_MASK ); \
   }

#define DISABLE_ORE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ORE_MASK ); \
   } 

#define READ_ORE() \
   ((READ_REGISTER_ULONG(0x40011400) & ORE_MASK)  >> ORE_START_BIT)

#define WHEN_ORE_HIGH() \
     if ( READ_ORE() )


#define UNLESS_ORE_HIGH() \
     if (! READ_ORE() )


#define WAIT_ORE_LOW() \
    while ( READ_ORE() );


#define WAIT_ORE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ORE() && (--___t___ > 0)); }


#define WAIT_ORE_HIGH() \
    while (! READ_ORE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IDLE 
    // 
#define IDLE_MASK 0x10U
#define IDLE_OFFSET 4
#define IDLE_START_BIT 4
#define IDLE_WIDTH 1



typedef enum idle {
    IDLE_0,
    IDLE_1
} IDLE_T ;
#define WRITE_IDLE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ IDLE_MASK) | ((val << IDLE_START_BIT) & IDLE_MASK )); \
   } 

#define ENABLE_IDLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  IDLE_MASK ); \
   }

#define DISABLE_IDLE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~IDLE_MASK ); \
   } 

#define READ_IDLE() \
   ((READ_REGISTER_ULONG(0x40011400) & IDLE_MASK)  >> IDLE_START_BIT)

#define WHEN_IDLE_HIGH() \
     if ( READ_IDLE() )


#define UNLESS_IDLE_HIGH() \
     if (! READ_IDLE() )


#define WAIT_IDLE_LOW() \
    while ( READ_IDLE() );


#define WAIT_IDLE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDLE() && (--___t___ > 0)); }


#define WAIT_IDLE_HIGH() \
    while (! READ_IDLE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RXNE 
    // 
#define RXNE_MASK 0x20U
#define RXNE_OFFSET 5
#define RXNE_START_BIT 5
#define RXNE_WIDTH 1



#define WRITE_RXNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RXNE_MASK) | ((val << RXNE_START_BIT) & RXNE_MASK )); \
   } 

#define ENABLE_RXNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RXNE_MASK ); \
   }

#define DISABLE_RXNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RXNE_MASK ); \
   } 

#define READ_RXNE() \
   ((READ_REGISTER_ULONG(0x40011400) & RXNE_MASK)  >> RXNE_START_BIT)

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TC 
    // 
#define TC_MASK 0x40U
#define TC_OFFSET 6
#define TC_START_BIT 6
#define TC_WIDTH 1



typedef enum tc {
    TC_0,
    TC_1
} TC_T ;
#define WRITE_TC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TC_MASK) | ((val << TC_START_BIT) & TC_MASK )); \
   } 

#define ENABLE_TC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TC_MASK ); \
   }

#define DISABLE_TC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TC_MASK ); \
   } 

#define READ_TC() \
   ((READ_REGISTER_ULONG(0x40011400) & TC_MASK)  >> TC_START_BIT)

#define WHEN_TC_HIGH() \
     if ( READ_TC() )


#define UNLESS_TC_HIGH() \
     if (! READ_TC() )


#define WAIT_TC_LOW() \
    while ( READ_TC() );


#define WAIT_TC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TC() && (--___t___ > 0)); }


#define WAIT_TC_HIGH() \
    while (! READ_TC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXE 
    // 
#define TXE_MASK 0x80U
#define TXE_OFFSET 7
#define TXE_START_BIT 7
#define TXE_WIDTH 1



typedef enum txe {
    TXE_0,
    TXE_1
} TXE_T ;
#define WRITE_TXE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TXE_MASK) | ((val << TXE_START_BIT) & TXE_MASK )); \
   } 

#define ENABLE_TXE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TXE_MASK ); \
   }

#define DISABLE_TXE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TXE_MASK ); \
   } 

#define READ_TXE() \
   ((READ_REGISTER_ULONG(0x40011400) & TXE_MASK)  >> TXE_START_BIT)

#define WHEN_TXE_HIGH() \
     if ( READ_TXE() )


#define UNLESS_TXE_HIGH() \
     if (! READ_TXE() )


#define WAIT_TXE_LOW() \
    while ( READ_TXE() );


#define WAIT_TXE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXE() && (--___t___ > 0)); }


#define WAIT_TXE_HIGH() \
    while (! READ_TXE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LBDF 
    // 
#define LBDF_MASK 0x100U
#define LBDF_OFFSET 8
#define LBDF_START_BIT 8
#define LBDF_WIDTH 1



typedef enum lbdf {
    LBDF_0,
    LBDF_1
} LBDF_T ;
#define WRITE_LBDF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ LBDF_MASK) | ((val << LBDF_START_BIT) & LBDF_MASK )); \
   } 

#define ENABLE_LBDF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  LBDF_MASK ); \
   }

#define DISABLE_LBDF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~LBDF_MASK ); \
   } 

#define READ_LBDF() \
   ((READ_REGISTER_ULONG(0x40011400) & LBDF_MASK)  >> LBDF_START_BIT)

#define WHEN_LBDF_HIGH() \
     if ( READ_LBDF() )


#define UNLESS_LBDF_HIGH() \
     if (! READ_LBDF() )


#define WAIT_LBDF_LOW() \
    while ( READ_LBDF() );


#define WAIT_LBDF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBDF() && (--___t___ > 0)); }


#define WAIT_LBDF_HIGH() \
    while (! READ_LBDF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTSIF 
    // 
#define CTSIF_MASK 0x200U
#define CTSIF_OFFSET 9
#define CTSIF_START_BIT 9
#define CTSIF_WIDTH 1



typedef enum ctsif {
    CTSIF_0,
    CTSIF_1
} CTSIF_T ;
#define WRITE_CTSIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CTSIF_MASK) | ((val << CTSIF_START_BIT) & CTSIF_MASK )); \
   } 

#define ENABLE_CTSIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CTSIF_MASK ); \
   }

#define DISABLE_CTSIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CTSIF_MASK ); \
   } 

#define READ_CTSIF() \
   ((READ_REGISTER_ULONG(0x40011400) & CTSIF_MASK)  >> CTSIF_START_BIT)

#define WHEN_CTSIF_HIGH() \
     if ( READ_CTSIF() )


#define UNLESS_CTSIF_HIGH() \
     if (! READ_CTSIF() )


#define WAIT_CTSIF_LOW() \
    while ( READ_CTSIF() );


#define WAIT_CTSIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTSIF() && (--___t___ > 0)); }


#define WAIT_CTSIF_HIGH() \
    while (! READ_CTSIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS 
    // 
#define CTS_MASK 0x400U
#define CTS_OFFSET 10
#define CTS_START_BIT 10
#define CTS_WIDTH 1



typedef enum cts {
    CTS_0,
    CTS_1
} CTS_T ;
#define WRITE_CTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CTS_MASK) | ((val << CTS_START_BIT) & CTS_MASK )); \
   } 

#define ENABLE_CTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CTS_MASK ); \
   }

#define DISABLE_CTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CTS_MASK ); \
   } 

#define READ_CTS() \
   ((READ_REGISTER_ULONG(0x40011400) & CTS_MASK)  >> CTS_START_BIT)

#define WHEN_CTS_HIGH() \
     if ( READ_CTS() )


#define UNLESS_CTS_HIGH() \
     if (! READ_CTS() )


#define WAIT_CTS_LOW() \
    while ( READ_CTS() );


#define WAIT_CTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTS() && (--___t___ > 0)); }


#define WAIT_CTS_HIGH() \
    while (! READ_CTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTOF 
    // 
#define RTOF_MASK 0x800U
#define RTOF_OFFSET 11
#define RTOF_START_BIT 11
#define RTOF_WIDTH 1



typedef enum rtof {
    RTOF_0,
    RTOF_1
} RTOF_T ;
#define WRITE_RTOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RTOF_MASK) | ((val << RTOF_START_BIT) & RTOF_MASK )); \
   } 

#define ENABLE_RTOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RTOF_MASK ); \
   }

#define DISABLE_RTOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RTOF_MASK ); \
   } 

#define READ_RTOF() \
   ((READ_REGISTER_ULONG(0x40011400) & RTOF_MASK)  >> RTOF_START_BIT)

#define WHEN_RTOF_HIGH() \
     if ( READ_RTOF() )


#define UNLESS_RTOF_HIGH() \
     if (! READ_RTOF() )


#define WAIT_RTOF_LOW() \
    while ( READ_RTOF() );


#define WAIT_RTOF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTOF() && (--___t___ > 0)); }


#define WAIT_RTOF_HIGH() \
    while (! READ_RTOF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EOBF 
    // 
#define EOBF_MASK 0x1000U
#define EOBF_OFFSET 12
#define EOBF_START_BIT 12
#define EOBF_WIDTH 1



typedef enum eobf {
    EOBF_0,
    EOBF_1
} EOBF_T ;
#define WRITE_EOBF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ EOBF_MASK) | ((val << EOBF_START_BIT) & EOBF_MASK )); \
   } 

#define ENABLE_EOBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  EOBF_MASK ); \
   }

#define DISABLE_EOBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~EOBF_MASK ); \
   } 

#define READ_EOBF() \
   ((READ_REGISTER_ULONG(0x40011400) & EOBF_MASK)  >> EOBF_START_BIT)

#define WHEN_EOBF_HIGH() \
     if ( READ_EOBF() )


#define UNLESS_EOBF_HIGH() \
     if (! READ_EOBF() )


#define WAIT_EOBF_LOW() \
    while ( READ_EOBF() );


#define WAIT_EOBF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOBF() && (--___t___ > 0)); }


#define WAIT_EOBF_HIGH() \
    while (! READ_EOBF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ABRE 
    // 
#define ABRE_MASK 0x4000U
#define ABRE_OFFSET 14
#define ABRE_START_BIT 14
#define ABRE_WIDTH 1



typedef enum abre {
    ABRE_0,
    ABRE_1
} ABRE_T ;
#define WRITE_ABRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ABRE_MASK) | ((val << ABRE_START_BIT) & ABRE_MASK )); \
   } 

#define ENABLE_ABRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ABRE_MASK ); \
   }

#define DISABLE_ABRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ABRE_MASK ); \
   } 

#define READ_ABRE() \
   ((READ_REGISTER_ULONG(0x40011400) & ABRE_MASK)  >> ABRE_START_BIT)

#define WHEN_ABRE_HIGH() \
     if ( READ_ABRE() )


#define UNLESS_ABRE_HIGH() \
     if (! READ_ABRE() )


#define WAIT_ABRE_LOW() \
    while ( READ_ABRE() );


#define WAIT_ABRE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABRE() && (--___t___ > 0)); }


#define WAIT_ABRE_HIGH() \
    while (! READ_ABRE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ABRF 
    // 
#define ABRF_MASK 0x8000U
#define ABRF_OFFSET 15
#define ABRF_START_BIT 15
#define ABRF_WIDTH 1



typedef enum abrf {
    ABRF_0,
    ABRF_1
} ABRF_T ;
#define WRITE_ABRF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ABRF_MASK) | ((val << ABRF_START_BIT) & ABRF_MASK )); \
   } 

#define ENABLE_ABRF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ABRF_MASK ); \
   }

#define DISABLE_ABRF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ABRF_MASK ); \
   } 

#define READ_ABRF() \
   ((READ_REGISTER_ULONG(0x40011400) & ABRF_MASK)  >> ABRF_START_BIT)

#define WHEN_ABRF_HIGH() \
     if ( READ_ABRF() )


#define UNLESS_ABRF_HIGH() \
     if (! READ_ABRF() )


#define WAIT_ABRF_LOW() \
    while ( READ_ABRF() );


#define WAIT_ABRF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABRF() && (--___t___ > 0)); }


#define WAIT_ABRF_HIGH() \
    while (! READ_ABRF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BUSY 
    // 
#define BUSY_MASK 0x10000U
#define BUSY_OFFSET 16
#define BUSY_START_BIT 16
#define BUSY_WIDTH 1



#define WRITE_BUSY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  BUSY_MASK ); \
   }

#define DISABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY() \
   ((READ_REGISTER_ULONG(0x40011400) & BUSY_MASK)  >> BUSY_START_BIT)

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CMF 
    // 
#define CMF_MASK 0x20000U
#define CMF_OFFSET 17
#define CMF_START_BIT 17
#define CMF_WIDTH 1



typedef enum cmf {
    CMF_0,
    CMF_1
} CMF_T ;
#define WRITE_CMF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CMF_MASK) | ((val << CMF_START_BIT) & CMF_MASK )); \
   } 

#define ENABLE_CMF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CMF_MASK ); \
   }

#define DISABLE_CMF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CMF_MASK ); \
   } 

#define READ_CMF() \
   ((READ_REGISTER_ULONG(0x40011400) & CMF_MASK)  >> CMF_START_BIT)

#define WHEN_CMF_HIGH() \
     if ( READ_CMF() )


#define UNLESS_CMF_HIGH() \
     if (! READ_CMF() )


#define WAIT_CMF_LOW() \
    while ( READ_CMF() );


#define WAIT_CMF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMF() && (--___t___ > 0)); }


#define WAIT_CMF_HIGH() \
    while (! READ_CMF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SBKF 
    // 
#define SBKF_MASK 0x40000U
#define SBKF_OFFSET 18
#define SBKF_START_BIT 18
#define SBKF_WIDTH 1



typedef enum sbkf {
    SBKF_0,
    SBKF_1
} SBKF_T ;
#define WRITE_SBKF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ SBKF_MASK) | ((val << SBKF_START_BIT) & SBKF_MASK )); \
   } 

#define ENABLE_SBKF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  SBKF_MASK ); \
   }

#define DISABLE_SBKF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~SBKF_MASK ); \
   } 

#define READ_SBKF() \
   ((READ_REGISTER_ULONG(0x40011400) & SBKF_MASK)  >> SBKF_START_BIT)

#define WHEN_SBKF_HIGH() \
     if ( READ_SBKF() )


#define UNLESS_SBKF_HIGH() \
     if (! READ_SBKF() )


#define WAIT_SBKF_LOW() \
    while ( READ_SBKF() );


#define WAIT_SBKF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBKF() && (--___t___ > 0)); }


#define WAIT_SBKF_HIGH() \
    while (! READ_SBKF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RWU 
    // 
#define RWU_MASK 0x80000U
#define RWU_OFFSET 19
#define RWU_START_BIT 19
#define RWU_WIDTH 1



typedef enum rwu {
    RWU_0,
    RWU_1
} RWU_T ;
#define WRITE_RWU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RWU_MASK) | ((val << RWU_START_BIT) & RWU_MASK )); \
   } 

#define ENABLE_RWU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RWU_MASK ); \
   }

#define DISABLE_RWU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RWU_MASK ); \
   } 

#define READ_RWU() \
   ((READ_REGISTER_ULONG(0x40011400) & RWU_MASK)  >> RWU_START_BIT)

#define WHEN_RWU_HIGH() \
     if ( READ_RWU() )


#define UNLESS_RWU_HIGH() \
     if (! READ_RWU() )


#define WAIT_RWU_LOW() \
    while ( READ_RWU() );


#define WAIT_RWU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RWU() && (--___t___ > 0)); }


#define WAIT_RWU_HIGH() \
    while (! READ_RWU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WUF 
    // 
#define WUF_MASK 0x100000U
#define WUF_OFFSET 20
#define WUF_START_BIT 20
#define WUF_WIDTH 1



typedef enum wuf {
    WUF_0,
    WUF_1
} WUF_T ;
#define WRITE_WUF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ WUF_MASK) | ((val << WUF_START_BIT) & WUF_MASK )); \
   } 

#define ENABLE_WUF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  WUF_MASK ); \
   }

#define DISABLE_WUF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~WUF_MASK ); \
   } 

#define READ_WUF() \
   ((READ_REGISTER_ULONG(0x40011400) & WUF_MASK)  >> WUF_START_BIT)

#define WHEN_WUF_HIGH() \
     if ( READ_WUF() )


#define UNLESS_WUF_HIGH() \
     if (! READ_WUF() )


#define WAIT_WUF_LOW() \
    while ( READ_WUF() );


#define WAIT_WUF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUF() && (--___t___ > 0)); }


#define WAIT_WUF_HIGH() \
    while (! READ_WUF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TEACK 
    // 
#define TEACK_MASK 0x200000U
#define TEACK_OFFSET 21
#define TEACK_START_BIT 21
#define TEACK_WIDTH 1



typedef enum teack {
    TEACK_0,
    TEACK_1
} TEACK_T ;
#define WRITE_TEACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TEACK_MASK) | ((val << TEACK_START_BIT) & TEACK_MASK )); \
   } 

#define ENABLE_TEACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TEACK_MASK ); \
   }

#define DISABLE_TEACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TEACK_MASK ); \
   } 

#define READ_TEACK() \
   ((READ_REGISTER_ULONG(0x40011400) & TEACK_MASK)  >> TEACK_START_BIT)

#define WHEN_TEACK_HIGH() \
     if ( READ_TEACK() )


#define UNLESS_TEACK_HIGH() \
     if (! READ_TEACK() )


#define WAIT_TEACK_LOW() \
    while ( READ_TEACK() );


#define WAIT_TEACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEACK() && (--___t___ > 0)); }


#define WAIT_TEACK_HIGH() \
    while (! READ_TEACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x40011400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // REACK 
    // 
#define REACK_MASK 0x400000U
#define REACK_OFFSET 22
#define REACK_START_BIT 22
#define REACK_WIDTH 1



typedef enum reack {
    REACK_0,
    REACK_1
} REACK_T ;
#define WRITE_REACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ REACK_MASK) | ((val << REACK_START_BIT) & REACK_MASK )); \
   } 

#define ENABLE_REACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  REACK_MASK ); \
   }

#define DISABLE_REACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~REACK_MASK ); \
   } 

#define READ_REACK() \
   ((READ_REGISTER_ULONG(0x40011400) & REACK_MASK)  >> REACK_START_BIT)

#define WHEN_REACK_HIGH() \
     if ( READ_REACK() )


#define UNLESS_REACK_HIGH() \
     if (! READ_REACK() )


#define WAIT_REACK_LOW() \
    while ( READ_REACK() );


#define WAIT_REACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_REACK() && (--___t___ > 0)); }


#define WAIT_REACK_HIGH() \
    while (! READ_REACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR3
//
// Notes : Register Cr3 at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_3( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_CR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_CR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_CR_3() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Error interrupt enable 
    // 
#define EIE_MASK 0x1U
#define EIE_OFFSET 0
#define EIE_START_BIT 0
#define EIE_WIDTH 1


#define CR_3_REG 0x40011400

typedef enum eie {
    EIE_0,
    EIE_1
} EIE_T ;
#define WRITE_EIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ EIE_MASK) | ((val << EIE_START_BIT) & EIE_MASK )); \
   } 

#define ENABLE_EIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  EIE_MASK ); \
   }

#define DISABLE_EIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~EIE_MASK ); \
   } 

#define READ_EIE() \
   ((READ_REGISTER_ULONG(0x40011400) & EIE_MASK)  >> EIE_START_BIT)

#define WHEN_EIE_HIGH() \
     if ( READ_EIE() )


#define UNLESS_EIE_HIGH() \
     if (! READ_EIE() )


#define WAIT_EIE_LOW() \
    while ( READ_EIE() );


#define WAIT_EIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EIE() && (--___t___ > 0)); }


#define WAIT_EIE_HIGH() \
    while (! READ_EIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ir mode enable 
    // 
#define IREN_MASK 0x2U
#define IREN_OFFSET 1
#define IREN_START_BIT 1
#define IREN_WIDTH 1



typedef enum iren {
    IREN_0,
    IREN_1
} IREN_T ;
#define WRITE_IREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ IREN_MASK) | ((val << IREN_START_BIT) & IREN_MASK )); \
   } 

#define ENABLE_IREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  IREN_MASK ); \
   }

#define DISABLE_IREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~IREN_MASK ); \
   } 

#define READ_IREN() \
   ((READ_REGISTER_ULONG(0x40011400) & IREN_MASK)  >> IREN_START_BIT)

#define WHEN_IREN_HIGH() \
     if ( READ_IREN() )


#define UNLESS_IREN_HIGH() \
     if (! READ_IREN() )


#define WAIT_IREN_LOW() \
    while ( READ_IREN() );


#define WAIT_IREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IREN() && (--___t___ > 0)); }


#define WAIT_IREN_HIGH() \
    while (! READ_IREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ir low-power 
    // 
#define IRLP_MASK 0x4U
#define IRLP_OFFSET 2
#define IRLP_START_BIT 2
#define IRLP_WIDTH 1



typedef enum irlp {
    IRLP_0,
    IRLP_1
} IRLP_T ;
#define WRITE_IRLP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ IRLP_MASK) | ((val << IRLP_START_BIT) & IRLP_MASK )); \
   } 

#define ENABLE_IRLP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  IRLP_MASK ); \
   }

#define DISABLE_IRLP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~IRLP_MASK ); \
   } 

#define READ_IRLP() \
   ((READ_REGISTER_ULONG(0x40011400) & IRLP_MASK)  >> IRLP_START_BIT)

#define WHEN_IRLP_HIGH() \
     if ( READ_IRLP() )


#define UNLESS_IRLP_HIGH() \
     if (! READ_IRLP() )


#define WAIT_IRLP_LOW() \
    while ( READ_IRLP() );


#define WAIT_IRLP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IRLP() && (--___t___ > 0)); }


#define WAIT_IRLP_HIGH() \
    while (! READ_IRLP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half-duplex selection 
    // 
#define HDSEL_MASK 0x8U
#define HDSEL_OFFSET 3
#define HDSEL_START_BIT 3
#define HDSEL_WIDTH 1



typedef enum hdsel {
    HDSEL_0,
    HDSEL_1
} HDSEL_T ;
#define WRITE_HDSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ HDSEL_MASK) | ((val << HDSEL_START_BIT) & HDSEL_MASK )); \
   } 

#define ENABLE_HDSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  HDSEL_MASK ); \
   }

#define DISABLE_HDSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~HDSEL_MASK ); \
   } 

#define READ_HDSEL() \
   ((READ_REGISTER_ULONG(0x40011400) & HDSEL_MASK)  >> HDSEL_START_BIT)

#define WHEN_HDSEL_HIGH() \
     if ( READ_HDSEL() )


#define UNLESS_HDSEL_HIGH() \
     if (! READ_HDSEL() )


#define WAIT_HDSEL_LOW() \
    while ( READ_HDSEL() );


#define WAIT_HDSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HDSEL() && (--___t___ > 0)); }


#define WAIT_HDSEL_HIGH() \
    while (! READ_HDSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Smartcard NACK enable 
    // 
#define NACK_MASK 0x10U
#define NACK_OFFSET 4
#define NACK_START_BIT 4
#define NACK_WIDTH 1



typedef enum nack {
    NACK_0,
    NACK_1
} NACK_T ;
#define WRITE_NACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ NACK_MASK) | ((val << NACK_START_BIT) & NACK_MASK )); \
   } 

#define ENABLE_NACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  NACK_MASK ); \
   }

#define DISABLE_NACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~NACK_MASK ); \
   } 

#define READ_NACK() \
   ((READ_REGISTER_ULONG(0x40011400) & NACK_MASK)  >> NACK_START_BIT)

#define WHEN_NACK_HIGH() \
     if ( READ_NACK() )


#define UNLESS_NACK_HIGH() \
     if (! READ_NACK() )


#define WAIT_NACK_LOW() \
    while ( READ_NACK() );


#define WAIT_NACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NACK() && (--___t___ > 0)); }


#define WAIT_NACK_HIGH() \
    while (! READ_NACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Smartcard mode enable 
    // 
#define SCEN_MASK 0x20U
#define SCEN_OFFSET 5
#define SCEN_START_BIT 5
#define SCEN_WIDTH 1



typedef enum scen {
    SCEN_0,
    SCEN_1
} SCEN_T ;
#define WRITE_SCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ SCEN_MASK) | ((val << SCEN_START_BIT) & SCEN_MASK )); \
   } 

#define ENABLE_SCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  SCEN_MASK ); \
   }

#define DISABLE_SCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~SCEN_MASK ); \
   } 

#define READ_SCEN() \
   ((READ_REGISTER_ULONG(0x40011400) & SCEN_MASK)  >> SCEN_START_BIT)

#define WHEN_SCEN_HIGH() \
     if ( READ_SCEN() )


#define UNLESS_SCEN_HIGH() \
     if (! READ_SCEN() )


#define WAIT_SCEN_LOW() \
    while ( READ_SCEN() );


#define WAIT_SCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SCEN() && (--___t___ > 0)); }


#define WAIT_SCEN_HIGH() \
    while (! READ_SCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable receiver 
    // 
#define DMAR_MASK 0x40U
#define DMAR_OFFSET 6
#define DMAR_START_BIT 6
#define DMAR_WIDTH 1



typedef enum dmar {
    DMAR_0,
    DMAR_1
} DMAR_T ;
#define WRITE_DMAR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DMAR_MASK) | ((val << DMAR_START_BIT) & DMAR_MASK )); \
   } 

#define ENABLE_DMAR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DMAR_MASK ); \
   }

#define DISABLE_DMAR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DMAR_MASK ); \
   } 

#define READ_DMAR() \
   ((READ_REGISTER_ULONG(0x40011400) & DMAR_MASK)  >> DMAR_START_BIT)

#define WHEN_DMAR_HIGH() \
     if ( READ_DMAR() )


#define UNLESS_DMAR_HIGH() \
     if (! READ_DMAR() )


#define WAIT_DMAR_LOW() \
    while ( READ_DMAR() );


#define WAIT_DMAR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAR() && (--___t___ > 0)); }


#define WAIT_DMAR_HIGH() \
    while (! READ_DMAR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable transmitter 
    // 
#define DMAT_MASK 0x80U
#define DMAT_OFFSET 7
#define DMAT_START_BIT 7
#define DMAT_WIDTH 1



typedef enum dmat {
    DMAT_0,
    DMAT_1
} DMAT_T ;
#define WRITE_DMAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DMAT_MASK) | ((val << DMAT_START_BIT) & DMAT_MASK )); \
   } 

#define ENABLE_DMAT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DMAT_MASK ); \
   }

#define DISABLE_DMAT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DMAT_MASK ); \
   } 

#define READ_DMAT() \
   ((READ_REGISTER_ULONG(0x40011400) & DMAT_MASK)  >> DMAT_START_BIT)

#define WHEN_DMAT_HIGH() \
     if ( READ_DMAT() )


#define UNLESS_DMAT_HIGH() \
     if (! READ_DMAT() )


#define WAIT_DMAT_LOW() \
    while ( READ_DMAT() );


#define WAIT_DMAT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAT() && (--___t___ > 0)); }


#define WAIT_DMAT_HIGH() \
    while (! READ_DMAT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTS enable 
    // 
#define RTSE_MASK 0x100U
#define RTSE_OFFSET 8
#define RTSE_START_BIT 8
#define RTSE_WIDTH 1



typedef enum rtse {
    RTSE_0,
    RTSE_1
} RTSE_T ;
#define WRITE_RTSE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RTSE_MASK) | ((val << RTSE_START_BIT) & RTSE_MASK )); \
   } 

#define ENABLE_RTSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RTSE_MASK ); \
   }

#define DISABLE_RTSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RTSE_MASK ); \
   } 

#define READ_RTSE() \
   ((READ_REGISTER_ULONG(0x40011400) & RTSE_MASK)  >> RTSE_START_BIT)

#define WHEN_RTSE_HIGH() \
     if ( READ_RTSE() )


#define UNLESS_RTSE_HIGH() \
     if (! READ_RTSE() )


#define WAIT_RTSE_LOW() \
    while ( READ_RTSE() );


#define WAIT_RTSE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTSE() && (--___t___ > 0)); }


#define WAIT_RTSE_HIGH() \
    while (! READ_RTSE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS enable 
    // 
#define CTSE_MASK 0x200U
#define CTSE_OFFSET 9
#define CTSE_START_BIT 9
#define CTSE_WIDTH 1



typedef enum ctse {
    CTSE_0,
    CTSE_1
} CTSE_T ;
#define WRITE_CTSE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CTSE_MASK) | ((val << CTSE_START_BIT) & CTSE_MASK )); \
   } 

#define ENABLE_CTSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CTSE_MASK ); \
   }

#define DISABLE_CTSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CTSE_MASK ); \
   } 

#define READ_CTSE() \
   ((READ_REGISTER_ULONG(0x40011400) & CTSE_MASK)  >> CTSE_START_BIT)

#define WHEN_CTSE_HIGH() \
     if ( READ_CTSE() )


#define UNLESS_CTSE_HIGH() \
     if (! READ_CTSE() )


#define WAIT_CTSE_LOW() \
    while ( READ_CTSE() );


#define WAIT_CTSE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTSE() && (--___t___ > 0)); }


#define WAIT_CTSE_HIGH() \
    while (! READ_CTSE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS interrupt enable 
    // 
#define CTSIE_MASK 0x400U
#define CTSIE_OFFSET 10
#define CTSIE_START_BIT 10
#define CTSIE_WIDTH 1



typedef enum ctsie {
    CTSIE_0,
    CTSIE_1
} CTSIE_T ;
#define WRITE_CTSIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CTSIE_MASK) | ((val << CTSIE_START_BIT) & CTSIE_MASK )); \
   } 

#define ENABLE_CTSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CTSIE_MASK ); \
   }

#define DISABLE_CTSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CTSIE_MASK ); \
   } 

#define READ_CTSIE() \
   ((READ_REGISTER_ULONG(0x40011400) & CTSIE_MASK)  >> CTSIE_START_BIT)

#define WHEN_CTSIE_HIGH() \
     if ( READ_CTSIE() )


#define UNLESS_CTSIE_HIGH() \
     if (! READ_CTSIE() )


#define WAIT_CTSIE_LOW() \
    while ( READ_CTSIE() );


#define WAIT_CTSIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTSIE() && (--___t___ > 0)); }


#define WAIT_CTSIE_HIGH() \
    while (! READ_CTSIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // One sample bit method enable 
    // 
#define ONEBIT_MASK 0x800U
#define ONEBIT_OFFSET 11
#define ONEBIT_START_BIT 11
#define ONEBIT_WIDTH 1



typedef enum onebit {
    ONEBIT_0,
    ONEBIT_1
} ONEBIT_T ;
#define WRITE_ONEBIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ONEBIT_MASK) | ((val << ONEBIT_START_BIT) & ONEBIT_MASK )); \
   } 

#define ENABLE_ONEBIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ONEBIT_MASK ); \
   }

#define DISABLE_ONEBIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ONEBIT_MASK ); \
   } 

#define READ_ONEBIT() \
   ((READ_REGISTER_ULONG(0x40011400) & ONEBIT_MASK)  >> ONEBIT_START_BIT)

#define WHEN_ONEBIT_HIGH() \
     if ( READ_ONEBIT() )


#define UNLESS_ONEBIT_HIGH() \
     if (! READ_ONEBIT() )


#define WAIT_ONEBIT_LOW() \
    while ( READ_ONEBIT() );


#define WAIT_ONEBIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ONEBIT() && (--___t___ > 0)); }


#define WAIT_ONEBIT_HIGH() \
    while (! READ_ONEBIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun Disable 
    // 
#define OVRDIS_MASK 0x1000U
#define OVRDIS_OFFSET 12
#define OVRDIS_START_BIT 12
#define OVRDIS_WIDTH 1



typedef enum ovrdis {
    OVRDIS_0,
    OVRDIS_1
} OVRDIS_T ;
#define WRITE_OVRDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ OVRDIS_MASK) | ((val << OVRDIS_START_BIT) & OVRDIS_MASK )); \
   } 

#define ENABLE_OVRDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  OVRDIS_MASK ); \
   }

#define DISABLE_OVRDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~OVRDIS_MASK ); \
   } 

#define READ_OVRDIS() \
   ((READ_REGISTER_ULONG(0x40011400) & OVRDIS_MASK)  >> OVRDIS_START_BIT)

#define WHEN_OVRDIS_HIGH() \
     if ( READ_OVRDIS() )


#define UNLESS_OVRDIS_HIGH() \
     if (! READ_OVRDIS() )


#define WAIT_OVRDIS_LOW() \
    while ( READ_OVRDIS() );


#define WAIT_OVRDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVRDIS() && (--___t___ > 0)); }


#define WAIT_OVRDIS_HIGH() \
    while (! READ_OVRDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA Disable on Reception Error 
    // 
#define DDRE_MASK 0x2000U
#define DDRE_OFFSET 13
#define DDRE_START_BIT 13
#define DDRE_WIDTH 1



typedef enum ddre {
    DDRE_0,
    DDRE_1
} DDRE_T ;
#define WRITE_DDRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DDRE_MASK) | ((val << DDRE_START_BIT) & DDRE_MASK )); \
   } 

#define ENABLE_DDRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DDRE_MASK ); \
   }

#define DISABLE_DDRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DDRE_MASK ); \
   } 

#define READ_DDRE() \
   ((READ_REGISTER_ULONG(0x40011400) & DDRE_MASK)  >> DDRE_START_BIT)

#define WHEN_DDRE_HIGH() \
     if ( READ_DDRE() )


#define UNLESS_DDRE_HIGH() \
     if (! READ_DDRE() )


#define WAIT_DDRE_LOW() \
    while ( READ_DDRE() );


#define WAIT_DDRE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DDRE() && (--___t___ > 0)); }


#define WAIT_DDRE_HIGH() \
    while (! READ_DDRE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver enable mode 
    // 
#define DEM_MASK 0x4000U
#define DEM_OFFSET 14
#define DEM_START_BIT 14
#define DEM_WIDTH 1



typedef enum dem {
    DEM_0,
    DEM_1
} DEM_T ;
#define WRITE_DEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEM_MASK) | ((val << DEM_START_BIT) & DEM_MASK )); \
   } 

#define ENABLE_DEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEM_MASK ); \
   }

#define DISABLE_DEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEM_MASK ); \
   } 

#define READ_DEM() \
   ((READ_REGISTER_ULONG(0x40011400) & DEM_MASK)  >> DEM_START_BIT)

#define WHEN_DEM_HIGH() \
     if ( READ_DEM() )


#define UNLESS_DEM_HIGH() \
     if (! READ_DEM() )


#define WAIT_DEM_LOW() \
    while ( READ_DEM() );


#define WAIT_DEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEM() && (--___t___ > 0)); }


#define WAIT_DEM_HIGH() \
    while (! READ_DEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver enable polarity selection 
    // 
#define DEP_MASK 0x8000U
#define DEP_OFFSET 15
#define DEP_START_BIT 15
#define DEP_WIDTH 1



typedef enum dep {
    DEP_0,
    DEP_1
} DEP_T ;
#define WRITE_DEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEP_MASK) | ((val << DEP_START_BIT) & DEP_MASK )); \
   } 

#define ENABLE_DEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEP_MASK ); \
   }

#define DISABLE_DEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEP_MASK ); \
   } 

#define READ_DEP() \
   ((READ_REGISTER_ULONG(0x40011400) & DEP_MASK)  >> DEP_START_BIT)

#define WHEN_DEP_HIGH() \
     if ( READ_DEP() )


#define UNLESS_DEP_HIGH() \
     if (! READ_DEP() )


#define WAIT_DEP_LOW() \
    while ( READ_DEP() );


#define WAIT_DEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEP() && (--___t___ > 0)); }


#define WAIT_DEP_HIGH() \
    while (! READ_DEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 17:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Smartcard auto-retry count 
    // 
#define SCARCNT_MASK 0xE0000U
#define SCARCNT_OFFSET 19
#define SCARCNT_START_BIT 17
#define SCARCNT_WIDTH 3



typedef enum scarcnt {
    SCARCNT_0,
    SCARCNT_1
} SCARCNT_T ;
#define READ_SCARCNT() \
   ((READ_REGISTER_ULONG(0x40011400) & SCARCNT_MASK)  >> SCARCNT_START_BIT)

#define WRITE_SCARCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ SCARCNT_MASK) | ((val << SCARCNT_START_BIT) & SCARCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup from Stop mode interrupt flag selection 
    // 
#define WUS_MASK 0x300000U
#define WUS_OFFSET 21
#define WUS_START_BIT 20
#define WUS_WIDTH 2



typedef enum wus {
    WUS_0,
    WUS_1
} WUS_T ;
#define READ_WUS() \
   ((READ_REGISTER_ULONG(0x40011400) & WUS_MASK)  >> WUS_START_BIT)

#define WRITE_WUS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ WUS_MASK) | ((val << WUS_START_BIT) & WUS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x40011400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup from Stop mode interrupt enable 
    // 
#define WUFIE_MASK 0x400000U
#define WUFIE_OFFSET 22
#define WUFIE_START_BIT 22
#define WUFIE_WIDTH 1



typedef enum wufie {
    WUFIE_0,
    WUFIE_1
} WUFIE_T ;
#define WRITE_WUFIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ WUFIE_MASK) | ((val << WUFIE_START_BIT) & WUFIE_MASK )); \
   } 

#define ENABLE_WUFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  WUFIE_MASK ); \
   }

#define DISABLE_WUFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~WUFIE_MASK ); \
   } 

#define READ_WUFIE() \
   ((READ_REGISTER_ULONG(0x40011400) & WUFIE_MASK)  >> WUFIE_START_BIT)

#define WHEN_WUFIE_HIGH() \
     if ( READ_WUFIE() )


#define UNLESS_WUFIE_HIGH() \
     if (! READ_WUFIE() )


#define WAIT_WUFIE_LOW() \
    while ( READ_WUFIE() );


#define WAIT_WUFIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUFIE() && (--___t___ > 0)); }


#define WAIT_WUFIE_HIGH() \
    while (! READ_WUFIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR2
//
// Notes : Register Cr2 at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_2( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_CR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_CR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_CR_2() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bit Address Detection/4-bit Address Detection 
    // 
#define ADDM7_MASK 0x10U
#define ADDM7_OFFSET 4
#define ADDM7_START_BIT 4
#define ADDM7_WIDTH 1


#define CR_2_REG 0x40011400

typedef enum addm7 {
    ADDM_7_0,
    ADDM_7_1
} ADDM_7_T ;
#define WRITE_ADDM7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ADDM7_MASK) | ((val << ADDM7_START_BIT) & ADDM7_MASK )); \
   } 

#define ENABLE_ADDM7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ADDM7_MASK ); \
   }

#define DISABLE_ADDM7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ADDM7_MASK ); \
   } 

#define READ_ADDM7() \
   ((READ_REGISTER_ULONG(0x40011400) & ADDM7_MASK)  >> ADDM7_START_BIT)

#define WHEN_ADDM7_HIGH() \
     if ( READ_ADDM7() )


#define UNLESS_ADDM7_HIGH() \
     if (! READ_ADDM7() )


#define WAIT_ADDM7_LOW() \
    while ( READ_ADDM7() );


#define WAIT_ADDM7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADDM7() && (--___t___ > 0)); }


#define WAIT_ADDM7_HIGH() \
    while (! READ_ADDM7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN break detection length 
    // 
#define LBDL_MASK 0x20U
#define LBDL_OFFSET 5
#define LBDL_START_BIT 5
#define LBDL_WIDTH 1



typedef enum lbdl {
    LBDL_0,
    LBDL_1
} LBDL_T ;
#define WRITE_LBDL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ LBDL_MASK) | ((val << LBDL_START_BIT) & LBDL_MASK )); \
   } 

#define ENABLE_LBDL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  LBDL_MASK ); \
   }

#define DISABLE_LBDL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~LBDL_MASK ); \
   } 

#define READ_LBDL() \
   ((READ_REGISTER_ULONG(0x40011400) & LBDL_MASK)  >> LBDL_START_BIT)

#define WHEN_LBDL_HIGH() \
     if ( READ_LBDL() )


#define UNLESS_LBDL_HIGH() \
     if (! READ_LBDL() )


#define WAIT_LBDL_LOW() \
    while ( READ_LBDL() );


#define WAIT_LBDL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBDL() && (--___t___ > 0)); }


#define WAIT_LBDL_HIGH() \
    while (! READ_LBDL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN break detection interrupt enable 
    // 
#define LBDIE_MASK 0x40U
#define LBDIE_OFFSET 6
#define LBDIE_START_BIT 6
#define LBDIE_WIDTH 1



typedef enum lbdie {
    LBDIE_0,
    LBDIE_1
} LBDIE_T ;
#define WRITE_LBDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ LBDIE_MASK) | ((val << LBDIE_START_BIT) & LBDIE_MASK )); \
   } 

#define ENABLE_LBDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  LBDIE_MASK ); \
   }

#define DISABLE_LBDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~LBDIE_MASK ); \
   } 

#define READ_LBDIE() \
   ((READ_REGISTER_ULONG(0x40011400) & LBDIE_MASK)  >> LBDIE_START_BIT)

#define WHEN_LBDIE_HIGH() \
     if ( READ_LBDIE() )


#define UNLESS_LBDIE_HIGH() \
     if (! READ_LBDIE() )


#define WAIT_LBDIE_LOW() \
    while ( READ_LBDIE() );


#define WAIT_LBDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBDIE() && (--___t___ > 0)); }


#define WAIT_LBDIE_HIGH() \
    while (! READ_LBDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Last bit clock pulse 
    // 
#define LBCL_MASK 0x100U
#define LBCL_OFFSET 8
#define LBCL_START_BIT 8
#define LBCL_WIDTH 1



typedef enum lbcl {
    LBCL_0,
    LBCL_1
} LBCL_T ;
#define WRITE_LBCL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ LBCL_MASK) | ((val << LBCL_START_BIT) & LBCL_MASK )); \
   } 

#define ENABLE_LBCL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  LBCL_MASK ); \
   }

#define DISABLE_LBCL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~LBCL_MASK ); \
   } 

#define READ_LBCL() \
   ((READ_REGISTER_ULONG(0x40011400) & LBCL_MASK)  >> LBCL_START_BIT)

#define WHEN_LBCL_HIGH() \
     if ( READ_LBCL() )


#define UNLESS_LBCL_HIGH() \
     if (! READ_LBCL() )


#define WAIT_LBCL_LOW() \
    while ( READ_LBCL() );


#define WAIT_LBCL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LBCL() && (--___t___ > 0)); }


#define WAIT_LBCL_HIGH() \
    while (! READ_LBCL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock phase 
    // 
#define CPHA_MASK 0x200U
#define CPHA_OFFSET 9
#define CPHA_START_BIT 9
#define CPHA_WIDTH 1



typedef enum cpha {
    CPHA_0,
    CPHA_1
} CPHA_T ;
#define WRITE_CPHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CPHA_MASK) | ((val << CPHA_START_BIT) & CPHA_MASK )); \
   } 

#define ENABLE_CPHA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CPHA_MASK ); \
   }

#define DISABLE_CPHA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CPHA_MASK ); \
   } 

#define READ_CPHA() \
   ((READ_REGISTER_ULONG(0x40011400) & CPHA_MASK)  >> CPHA_START_BIT)

#define WHEN_CPHA_HIGH() \
     if ( READ_CPHA() )


#define UNLESS_CPHA_HIGH() \
     if (! READ_CPHA() )


#define WAIT_CPHA_LOW() \
    while ( READ_CPHA() );


#define WAIT_CPHA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CPHA() && (--___t___ > 0)); }


#define WAIT_CPHA_HIGH() \
    while (! READ_CPHA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock polarity 
    // 
#define CPOL_MASK 0x400U
#define CPOL_OFFSET 10
#define CPOL_START_BIT 10
#define CPOL_WIDTH 1



typedef enum cpol {
    CPOL_0,
    CPOL_1
} CPOL_T ;
#define WRITE_CPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CPOL_MASK) | ((val << CPOL_START_BIT) & CPOL_MASK )); \
   } 

#define ENABLE_CPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CPOL_MASK ); \
   }

#define DISABLE_CPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CPOL_MASK ); \
   } 

#define READ_CPOL() \
   ((READ_REGISTER_ULONG(0x40011400) & CPOL_MASK)  >> CPOL_START_BIT)

#define WHEN_CPOL_HIGH() \
     if ( READ_CPOL() )


#define UNLESS_CPOL_HIGH() \
     if (! READ_CPOL() )


#define WAIT_CPOL_LOW() \
    while ( READ_CPOL() );


#define WAIT_CPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CPOL() && (--___t___ > 0)); }


#define WAIT_CPOL_HIGH() \
    while (! READ_CPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock enable 
    // 
#define CLKEN_MASK 0x800U
#define CLKEN_OFFSET 11
#define CLKEN_START_BIT 11
#define CLKEN_WIDTH 1



typedef enum clken {
    CLKEN_0,
    CLKEN_1
} CLKEN_T ;
#define WRITE_CLKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CLKEN_MASK) | ((val << CLKEN_START_BIT) & CLKEN_MASK )); \
   } 

#define ENABLE_CLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CLKEN_MASK ); \
   }

#define DISABLE_CLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CLKEN_MASK ); \
   } 

#define READ_CLKEN() \
   ((READ_REGISTER_ULONG(0x40011400) & CLKEN_MASK)  >> CLKEN_START_BIT)

#define WHEN_CLKEN_HIGH() \
     if ( READ_CLKEN() )


#define UNLESS_CLKEN_HIGH() \
     if (! READ_CLKEN() )


#define WAIT_CLKEN_LOW() \
    while ( READ_CLKEN() );


#define WAIT_CLKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CLKEN() && (--___t___ > 0)); }


#define WAIT_CLKEN_HIGH() \
    while (! READ_CLKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STOP bits 
    // 
#define STOP_MASK 0x3000U
#define STOP_OFFSET 13
#define STOP_START_BIT 12
#define STOP_WIDTH 2



typedef enum stop {
    STOP_0,
    STOP_1
} STOP_T ;
#define READ_STOP() \
   ((READ_REGISTER_ULONG(0x40011400) & STOP_MASK)  >> STOP_START_BIT)

#define WRITE_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ STOP_MASK) | ((val << STOP_START_BIT) & STOP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN mode enable 
    // 
#define LINEN_MASK 0x4000U
#define LINEN_OFFSET 14
#define LINEN_START_BIT 14
#define LINEN_WIDTH 1



typedef enum linen {
    LINEN_0,
    LINEN_1
} LINEN_T ;
#define WRITE_LINEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ LINEN_MASK) | ((val << LINEN_START_BIT) & LINEN_MASK )); \
   } 

#define ENABLE_LINEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  LINEN_MASK ); \
   }

#define DISABLE_LINEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~LINEN_MASK ); \
   } 

#define READ_LINEN() \
   ((READ_REGISTER_ULONG(0x40011400) & LINEN_MASK)  >> LINEN_START_BIT)

#define WHEN_LINEN_HIGH() \
     if ( READ_LINEN() )


#define UNLESS_LINEN_HIGH() \
     if (! READ_LINEN() )


#define WAIT_LINEN_LOW() \
    while ( READ_LINEN() );


#define WAIT_LINEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LINEN() && (--___t___ > 0)); }


#define WAIT_LINEN_HIGH() \
    while (! READ_LINEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Swap TX/RX pins 
    // 
#define SWAP_MASK 0x8000U
#define SWAP_OFFSET 15
#define SWAP_START_BIT 15
#define SWAP_WIDTH 1



typedef enum swap {
    SWAP_0,
    SWAP_1
} SWAP_T ;
#define WRITE_SWAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ SWAP_MASK) | ((val << SWAP_START_BIT) & SWAP_MASK )); \
   } 

#define ENABLE_SWAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  SWAP_MASK ); \
   }

#define DISABLE_SWAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~SWAP_MASK ); \
   } 

#define READ_SWAP() \
   ((READ_REGISTER_ULONG(0x40011400) & SWAP_MASK)  >> SWAP_START_BIT)

#define WHEN_SWAP_HIGH() \
     if ( READ_SWAP() )


#define UNLESS_SWAP_HIGH() \
     if (! READ_SWAP() )


#define WAIT_SWAP_LOW() \
    while ( READ_SWAP() );


#define WAIT_SWAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWAP() && (--___t___ > 0)); }


#define WAIT_SWAP_HIGH() \
    while (! READ_SWAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RX pin active level inversion 
    // 
#define RXINV_MASK 0x10000U
#define RXINV_OFFSET 16
#define RXINV_START_BIT 16
#define RXINV_WIDTH 1



typedef enum rxinv {
    RXINV_0,
    RXINV_1
} RXINV_T ;
#define WRITE_RXINV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RXINV_MASK) | ((val << RXINV_START_BIT) & RXINV_MASK )); \
   } 

#define ENABLE_RXINV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RXINV_MASK ); \
   }

#define DISABLE_RXINV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RXINV_MASK ); \
   } 

#define READ_RXINV() \
   ((READ_REGISTER_ULONG(0x40011400) & RXINV_MASK)  >> RXINV_START_BIT)

#define WHEN_RXINV_HIGH() \
     if ( READ_RXINV() )


#define UNLESS_RXINV_HIGH() \
     if (! READ_RXINV() )


#define WAIT_RXINV_LOW() \
    while ( READ_RXINV() );


#define WAIT_RXINV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXINV() && (--___t___ > 0)); }


#define WAIT_RXINV_HIGH() \
    while (! READ_RXINV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TX pin active level inversion 
    // 
#define TXINV_MASK 0x20000U
#define TXINV_OFFSET 17
#define TXINV_START_BIT 17
#define TXINV_WIDTH 1



typedef enum txinv {
    TXINV_0,
    TXINV_1
} TXINV_T ;
#define WRITE_TXINV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TXINV_MASK) | ((val << TXINV_START_BIT) & TXINV_MASK )); \
   } 

#define ENABLE_TXINV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TXINV_MASK ); \
   }

#define DISABLE_TXINV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TXINV_MASK ); \
   } 

#define READ_TXINV() \
   ((READ_REGISTER_ULONG(0x40011400) & TXINV_MASK)  >> TXINV_START_BIT)

#define WHEN_TXINV_HIGH() \
     if ( READ_TXINV() )


#define UNLESS_TXINV_HIGH() \
     if (! READ_TXINV() )


#define WAIT_TXINV_LOW() \
    while ( READ_TXINV() );


#define WAIT_TXINV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXINV() && (--___t___ > 0)); }


#define WAIT_TXINV_HIGH() \
    while (! READ_TXINV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Binary data inversion 
    // 
#define TAINV_MASK 0x40000U
#define TAINV_OFFSET 18
#define TAINV_START_BIT 18
#define TAINV_WIDTH 1



typedef enum tainv {
    TAINV_0,
    TAINV_1
} TAINV_T ;
#define WRITE_TAINV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TAINV_MASK) | ((val << TAINV_START_BIT) & TAINV_MASK )); \
   } 

#define ENABLE_TAINV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TAINV_MASK ); \
   }

#define DISABLE_TAINV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TAINV_MASK ); \
   } 

#define READ_TAINV() \
   ((READ_REGISTER_ULONG(0x40011400) & TAINV_MASK)  >> TAINV_START_BIT)

#define WHEN_TAINV_HIGH() \
     if ( READ_TAINV() )


#define UNLESS_TAINV_HIGH() \
     if (! READ_TAINV() )


#define WAIT_TAINV_LOW() \
    while ( READ_TAINV() );


#define WAIT_TAINV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAINV() && (--___t___ > 0)); }


#define WAIT_TAINV_HIGH() \
    while (! READ_TAINV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Most significant bit first 
    // 
#define MSBFIRST_MASK 0x80000U
#define MSBFIRST_OFFSET 19
#define MSBFIRST_START_BIT 19
#define MSBFIRST_WIDTH 1



typedef enum msbfirst {
    MSBFIRST_0,
    MSBFIRST_1
} MSBFIRST_T ;
#define WRITE_MSBFIRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ MSBFIRST_MASK) | ((val << MSBFIRST_START_BIT) & MSBFIRST_MASK )); \
   } 

#define ENABLE_MSBFIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  MSBFIRST_MASK ); \
   }

#define DISABLE_MSBFIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~MSBFIRST_MASK ); \
   } 

#define READ_MSBFIRST() \
   ((READ_REGISTER_ULONG(0x40011400) & MSBFIRST_MASK)  >> MSBFIRST_START_BIT)

#define WHEN_MSBFIRST_HIGH() \
     if ( READ_MSBFIRST() )


#define UNLESS_MSBFIRST_HIGH() \
     if (! READ_MSBFIRST() )


#define WAIT_MSBFIRST_LOW() \
    while ( READ_MSBFIRST() );


#define WAIT_MSBFIRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSBFIRST() && (--___t___ > 0)); }


#define WAIT_MSBFIRST_HIGH() \
    while (! READ_MSBFIRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto baud rate enable 
    // 
#define ABREN_MASK 0x100000U
#define ABREN_OFFSET 20
#define ABREN_START_BIT 20
#define ABREN_WIDTH 1



typedef enum abren {
    ABREN_0,
    ABREN_1
} ABREN_T ;
#define WRITE_ABREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ABREN_MASK) | ((val << ABREN_START_BIT) & ABREN_MASK )); \
   } 

#define ENABLE_ABREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ABREN_MASK ); \
   }

#define DISABLE_ABREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ABREN_MASK ); \
   } 

#define READ_ABREN() \
   ((READ_REGISTER_ULONG(0x40011400) & ABREN_MASK)  >> ABREN_START_BIT)

#define WHEN_ABREN_HIGH() \
     if ( READ_ABREN() )


#define UNLESS_ABREN_HIGH() \
     if (! READ_ABREN() )


#define WAIT_ABREN_LOW() \
    while ( READ_ABREN() );


#define WAIT_ABREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABREN() && (--___t___ > 0)); }


#define WAIT_ABREN_HIGH() \
    while (! READ_ABREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ABRMOD0 
    // 
#define ABRMOD0_MASK 0x200000U
#define ABRMOD0_OFFSET 21
#define ABRMOD0_START_BIT 21
#define ABRMOD0_WIDTH 1



typedef enum abrmod0 {
    ABRMOD_0_0,
    ABRMOD_0_1
} ABRMOD_0_T ;
#define WRITE_ABRMOD0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ABRMOD0_MASK) | ((val << ABRMOD0_START_BIT) & ABRMOD0_MASK )); \
   } 

#define ENABLE_ABRMOD0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ABRMOD0_MASK ); \
   }

#define DISABLE_ABRMOD0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ABRMOD0_MASK ); \
   } 

#define READ_ABRMOD0() \
   ((READ_REGISTER_ULONG(0x40011400) & ABRMOD0_MASK)  >> ABRMOD0_START_BIT)

#define WHEN_ABRMOD0_HIGH() \
     if ( READ_ABRMOD0() )


#define UNLESS_ABRMOD0_HIGH() \
     if (! READ_ABRMOD0() )


#define WAIT_ABRMOD0_LOW() \
    while ( READ_ABRMOD0() );


#define WAIT_ABRMOD0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABRMOD0() && (--___t___ > 0)); }


#define WAIT_ABRMOD0_HIGH() \
    while (! READ_ABRMOD0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto baud rate mode 
    // 
#define ABRMOD1_MASK 0x400000U
#define ABRMOD1_OFFSET 22
#define ABRMOD1_START_BIT 22
#define ABRMOD1_WIDTH 1



typedef enum abrmod1 {
    ABRMOD_1_0,
    ABRMOD_1_1
} ABRMOD_1_T ;
#define WRITE_ABRMOD1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ABRMOD1_MASK) | ((val << ABRMOD1_START_BIT) & ABRMOD1_MASK )); \
   } 

#define ENABLE_ABRMOD1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  ABRMOD1_MASK ); \
   }

#define DISABLE_ABRMOD1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~ABRMOD1_MASK ); \
   } 

#define READ_ABRMOD1() \
   ((READ_REGISTER_ULONG(0x40011400) & ABRMOD1_MASK)  >> ABRMOD1_START_BIT)

#define WHEN_ABRMOD1_HIGH() \
     if ( READ_ABRMOD1() )


#define UNLESS_ABRMOD1_HIGH() \
     if (! READ_ABRMOD1() )


#define WAIT_ABRMOD1_LOW() \
    while ( READ_ABRMOD1() );


#define WAIT_ABRMOD1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABRMOD1() && (--___t___ > 0)); }


#define WAIT_ABRMOD1_HIGH() \
    while (! READ_ABRMOD1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout enable 
    // 
#define RTOEN_MASK 0x800000U
#define RTOEN_OFFSET 23
#define RTOEN_START_BIT 23
#define RTOEN_WIDTH 1



typedef enum rtoen {
    RTOEN_0,
    RTOEN_1
} RTOEN_T ;
#define WRITE_RTOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RTOEN_MASK) | ((val << RTOEN_START_BIT) & RTOEN_MASK )); \
   } 

#define ENABLE_RTOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RTOEN_MASK ); \
   }

#define DISABLE_RTOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RTOEN_MASK ); \
   } 

#define READ_RTOEN() \
   ((READ_REGISTER_ULONG(0x40011400) & RTOEN_MASK)  >> RTOEN_START_BIT)

#define WHEN_RTOEN_HIGH() \
     if ( READ_RTOEN() )


#define UNLESS_RTOEN_HIGH() \
     if (! READ_RTOEN() )


#define WAIT_RTOEN_LOW() \
    while ( READ_RTOEN() );


#define WAIT_RTOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTOEN() && (--___t___ > 0)); }


#define WAIT_RTOEN_HIGH() \
    while (! READ_RTOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address of the USART node 
    // 
#define ADD0_3_MASK 0xF000000U
#define ADD0_3_OFFSET 27
#define ADD0_3_START_BIT 24
#define ADD0_3_WIDTH 4



typedef enum add0_3 {
    ADD_0__3_0,
    ADD_0__3_1
} ADD_03_T ;
#define READ_ADD0_3() \
   ((READ_REGISTER_ULONG(0x40011400) & ADD0_3_MASK)  >> ADD0_3_START_BIT)

#define WRITE_ADD0_3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ADD0_3_MASK) | ((val << ADD0_3_START_BIT) & ADD0_3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x40011400, Bits 28:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address of the USART node 
    // 
#define ADD4_7_MASK 0xF0000000U
#define ADD4_7_OFFSET 31
#define ADD4_7_START_BIT 28
#define ADD4_7_WIDTH 4



typedef enum add4_7 {
    ADD_4__7_0,
    ADD_4__7_1
} ADD_47_T ;
#define READ_ADD4_7() \
   ((READ_REGISTER_ULONG(0x40011400) & ADD4_7_MASK)  >> ADD4_7_START_BIT)

#define WRITE_ADD4_7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ ADD4_7_MASK) | ((val << ADD4_7_START_BIT) & ADD4_7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR1
//
// Notes : Register Cr1 at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_1( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_CR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_CR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_CR_1() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART enable 
    // 
#define UE_MASK 0x1U
#define UE_OFFSET 0
#define UE_START_BIT 0
#define UE_WIDTH 1


#define CR_1_REG 0x40011400

typedef enum ue {
    UE_0,
    UE_1
} UE_T ;
#define WRITE_UE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ UE_MASK) | ((val << UE_START_BIT) & UE_MASK )); \
   } 

#define ENABLE_UE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  UE_MASK ); \
   }

#define DISABLE_UE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~UE_MASK ); \
   } 

#define READ_UE() \
   ((READ_REGISTER_ULONG(0x40011400) & UE_MASK)  >> UE_START_BIT)

#define WHEN_UE_HIGH() \
     if ( READ_UE() )


#define UNLESS_UE_HIGH() \
     if (! READ_UE() )


#define WAIT_UE_LOW() \
    while ( READ_UE() );


#define WAIT_UE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UE() && (--___t___ > 0)); }


#define WAIT_UE_HIGH() \
    while (! READ_UE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART enable in Stop mode 
    // 
#define UESM_MASK 0x2U
#define UESM_OFFSET 1
#define UESM_START_BIT 1
#define UESM_WIDTH 1



typedef enum uesm {
    UESM_0,
    UESM_1
} UESM_T ;
#define WRITE_UESM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ UESM_MASK) | ((val << UESM_START_BIT) & UESM_MASK )); \
   } 

#define ENABLE_UESM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  UESM_MASK ); \
   }

#define DISABLE_UESM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~UESM_MASK ); \
   } 

#define READ_UESM() \
   ((READ_REGISTER_ULONG(0x40011400) & UESM_MASK)  >> UESM_START_BIT)

#define WHEN_UESM_HIGH() \
     if ( READ_UESM() )


#define UNLESS_UESM_HIGH() \
     if (! READ_UESM() )


#define WAIT_UESM_LOW() \
    while ( READ_UESM() );


#define WAIT_UESM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UESM() && (--___t___ > 0)); }


#define WAIT_UESM_HIGH() \
    while (! READ_UESM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver enable 
    // 
#define RE_MASK 0x4U
#define RE_OFFSET 2
#define RE_START_BIT 2
#define RE_WIDTH 1



#define WRITE_RE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RE_MASK) | ((val << RE_START_BIT) & RE_MASK )); \
   } 

#define ENABLE_RE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RE_MASK ); \
   }

#define DISABLE_RE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RE_MASK ); \
   } 

#define READ_RE() \
   ((READ_REGISTER_ULONG(0x40011400) & RE_MASK)  >> RE_START_BIT)

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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmitter enable 
    // 
#define TE_MASK 0x8U
#define TE_OFFSET 3
#define TE_START_BIT 3
#define TE_WIDTH 1



#define WRITE_TE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TE_MASK) | ((val << TE_START_BIT) & TE_MASK )); \
   } 

#define ENABLE_TE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TE_MASK ); \
   }

#define DISABLE_TE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TE_MASK ); \
   } 

#define READ_TE() \
   ((READ_REGISTER_ULONG(0x40011400) & TE_MASK)  >> TE_START_BIT)

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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IDLE interrupt enable 
    // 
#define IDLEIE_MASK 0x10U
#define IDLEIE_OFFSET 4
#define IDLEIE_START_BIT 4
#define IDLEIE_WIDTH 1



typedef enum idleie {
    IDLEIE_0,
    IDLEIE_1
} IDLEIE_T ;
#define WRITE_IDLEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ IDLEIE_MASK) | ((val << IDLEIE_START_BIT) & IDLEIE_MASK )); \
   } 

#define ENABLE_IDLEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  IDLEIE_MASK ); \
   }

#define DISABLE_IDLEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~IDLEIE_MASK ); \
   } 

#define READ_IDLEIE() \
   ((READ_REGISTER_ULONG(0x40011400) & IDLEIE_MASK)  >> IDLEIE_START_BIT)

#define WHEN_IDLEIE_HIGH() \
     if ( READ_IDLEIE() )


#define UNLESS_IDLEIE_HIGH() \
     if (! READ_IDLEIE() )


#define WAIT_IDLEIE_LOW() \
    while ( READ_IDLEIE() );


#define WAIT_IDLEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDLEIE() && (--___t___ > 0)); }


#define WAIT_IDLEIE_HIGH() \
    while (! READ_IDLEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RXNE interrupt enable 
    // 
#define RXNEIE_MASK 0x20U
#define RXNEIE_OFFSET 5
#define RXNEIE_START_BIT 5
#define RXNEIE_WIDTH 1



#define WRITE_RXNEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RXNEIE_MASK) | ((val << RXNEIE_START_BIT) & RXNEIE_MASK )); \
   } 

#define ENABLE_RXNEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RXNEIE_MASK ); \
   }

#define DISABLE_RXNEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RXNEIE_MASK ); \
   } 

#define READ_RXNEIE() \
   ((READ_REGISTER_ULONG(0x40011400) & RXNEIE_MASK)  >> RXNEIE_START_BIT)

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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmission complete interrupt enable 
    // 
#define TCIE_MASK 0x40U
#define TCIE_OFFSET 6
#define TCIE_START_BIT 6
#define TCIE_WIDTH 1



typedef enum tcie {
    TCIE_0,
    TCIE_1
} TCIE_T ;
#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40011400) & TCIE_MASK)  >> TCIE_START_BIT)

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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // interrupt enable 
    // 
#define TXEIE_MASK 0x80U
#define TXEIE_OFFSET 7
#define TXEIE_START_BIT 7
#define TXEIE_WIDTH 1



typedef enum txeie {
    TXEIE_0,
    TXEIE_1
} TXEIE_T ;
#define WRITE_TXEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ TXEIE_MASK) | ((val << TXEIE_START_BIT) & TXEIE_MASK )); \
   } 

#define ENABLE_TXEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  TXEIE_MASK ); \
   }

#define DISABLE_TXEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~TXEIE_MASK ); \
   } 

#define READ_TXEIE() \
   ((READ_REGISTER_ULONG(0x40011400) & TXEIE_MASK)  >> TXEIE_START_BIT)

#define WHEN_TXEIE_HIGH() \
     if ( READ_TXEIE() )


#define UNLESS_TXEIE_HIGH() \
     if (! READ_TXEIE() )


#define WAIT_TXEIE_LOW() \
    while ( READ_TXEIE() );


#define WAIT_TXEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXEIE() && (--___t___ > 0)); }


#define WAIT_TXEIE_HIGH() \
    while (! READ_TXEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PE interrupt enable 
    // 
#define PEIE_MASK 0x100U
#define PEIE_OFFSET 8
#define PEIE_START_BIT 8
#define PEIE_WIDTH 1



typedef enum peie {
    PEIE_0,
    PEIE_1
} PEIE_T ;
#define WRITE_PEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ PEIE_MASK) | ((val << PEIE_START_BIT) & PEIE_MASK )); \
   } 

#define ENABLE_PEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  PEIE_MASK ); \
   }

#define DISABLE_PEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~PEIE_MASK ); \
   } 

#define READ_PEIE() \
   ((READ_REGISTER_ULONG(0x40011400) & PEIE_MASK)  >> PEIE_START_BIT)

#define WHEN_PEIE_HIGH() \
     if ( READ_PEIE() )


#define UNLESS_PEIE_HIGH() \
     if (! READ_PEIE() )


#define WAIT_PEIE_LOW() \
    while ( READ_PEIE() );


#define WAIT_PEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PEIE() && (--___t___ > 0)); }


#define WAIT_PEIE_HIGH() \
    while (! READ_PEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity selection 
    // 
#define PS_MASK 0x200U
#define PS_OFFSET 9
#define PS_START_BIT 9
#define PS_WIDTH 1



typedef enum ps {
    PS_0,
    PS_1
} PS_T ;
#define WRITE_PS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ PS_MASK) | ((val << PS_START_BIT) & PS_MASK )); \
   } 

#define ENABLE_PS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  PS_MASK ); \
   }

#define DISABLE_PS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~PS_MASK ); \
   } 

#define READ_PS() \
   ((READ_REGISTER_ULONG(0x40011400) & PS_MASK)  >> PS_START_BIT)

#define WHEN_PS_HIGH() \
     if ( READ_PS() )


#define UNLESS_PS_HIGH() \
     if (! READ_PS() )


#define WAIT_PS_LOW() \
    while ( READ_PS() );


#define WAIT_PS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PS() && (--___t___ > 0)); }


#define WAIT_PS_HIGH() \
    while (! READ_PS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity control enable 
    // 
#define PCE_MASK 0x400U
#define PCE_OFFSET 10
#define PCE_START_BIT 10
#define PCE_WIDTH 1



typedef enum pce {
    PCE_0,
    PCE_1
} PCE_T ;
#define WRITE_PCE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ PCE_MASK) | ((val << PCE_START_BIT) & PCE_MASK )); \
   } 

#define ENABLE_PCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  PCE_MASK ); \
   }

#define DISABLE_PCE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~PCE_MASK ); \
   } 

#define READ_PCE() \
   ((READ_REGISTER_ULONG(0x40011400) & PCE_MASK)  >> PCE_START_BIT)

#define WHEN_PCE_HIGH() \
     if ( READ_PCE() )


#define UNLESS_PCE_HIGH() \
     if (! READ_PCE() )


#define WAIT_PCE_LOW() \
    while ( READ_PCE() );


#define WAIT_PCE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCE() && (--___t___ > 0)); }


#define WAIT_PCE_HIGH() \
    while (! READ_PCE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver wakeup method 
    // 
#define WAKE_MASK 0x800U
#define WAKE_OFFSET 11
#define WAKE_START_BIT 11
#define WAKE_WIDTH 1



typedef enum wake {
    WAKE_0,
    WAKE_1
} WAKE_T ;
#define WRITE_WAKE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ WAKE_MASK) | ((val << WAKE_START_BIT) & WAKE_MASK )); \
   } 

#define ENABLE_WAKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  WAKE_MASK ); \
   }

#define DISABLE_WAKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~WAKE_MASK ); \
   } 

#define READ_WAKE() \
   ((READ_REGISTER_ULONG(0x40011400) & WAKE_MASK)  >> WAKE_START_BIT)

#define WHEN_WAKE_HIGH() \
     if ( READ_WAKE() )


#define UNLESS_WAKE_HIGH() \
     if (! READ_WAKE() )


#define WAIT_WAKE_LOW() \
    while ( READ_WAKE() );


#define WAIT_WAKE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAKE() && (--___t___ > 0)); }


#define WAIT_WAKE_HIGH() \
    while (! READ_WAKE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Word length 
    // 
#define M0_MASK 0x1000U
#define M0_OFFSET 12
#define M0_START_BIT 12
#define M0_WIDTH 1



typedef enum m0 {
    M_0_0,
    M_0_1
} M0_T ;
#define WRITE_M0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ M0_MASK) | ((val << M0_START_BIT) & M0_MASK )); \
   } 

#define ENABLE_M0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  M0_MASK ); \
   }

#define DISABLE_M0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~M0_MASK ); \
   } 

#define READ_M0() \
   ((READ_REGISTER_ULONG(0x40011400) & M0_MASK)  >> M0_START_BIT)

#define WHEN_M0_HIGH() \
     if ( READ_M0() )


#define UNLESS_M0_HIGH() \
     if (! READ_M0() )


#define WAIT_M0_LOW() \
    while ( READ_M0() );


#define WAIT_M0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_M0() && (--___t___ > 0)); }


#define WAIT_M0_HIGH() \
    while (! READ_M0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute mode enable 
    // 
#define MME_MASK 0x2000U
#define MME_OFFSET 13
#define MME_START_BIT 13
#define MME_WIDTH 1



typedef enum mme {
    MME_0,
    MME_1
} MME_T ;
#define WRITE_MME(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ MME_MASK) | ((val << MME_START_BIT) & MME_MASK )); \
   } 

#define ENABLE_MME() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  MME_MASK ); \
   }

#define DISABLE_MME() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~MME_MASK ); \
   } 

#define READ_MME() \
   ((READ_REGISTER_ULONG(0x40011400) & MME_MASK)  >> MME_START_BIT)

#define WHEN_MME_HIGH() \
     if ( READ_MME() )


#define UNLESS_MME_HIGH() \
     if (! READ_MME() )


#define WAIT_MME_LOW() \
    while ( READ_MME() );


#define WAIT_MME_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MME() && (--___t___ > 0)); }


#define WAIT_MME_HIGH() \
    while (! READ_MME() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Character match interrupt enable 
    // 
#define CMIE_MASK 0x4000U
#define CMIE_OFFSET 14
#define CMIE_START_BIT 14
#define CMIE_WIDTH 1



typedef enum cmie {
    CMIE_0,
    CMIE_1
} CMIE_T ;
#define WRITE_CMIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ CMIE_MASK) | ((val << CMIE_START_BIT) & CMIE_MASK )); \
   } 

#define ENABLE_CMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  CMIE_MASK ); \
   }

#define DISABLE_CMIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~CMIE_MASK ); \
   } 

#define READ_CMIE() \
   ((READ_REGISTER_ULONG(0x40011400) & CMIE_MASK)  >> CMIE_START_BIT)

#define WHEN_CMIE_HIGH() \
     if ( READ_CMIE() )


#define UNLESS_CMIE_HIGH() \
     if (! READ_CMIE() )


#define WAIT_CMIE_LOW() \
    while ( READ_CMIE() );


#define WAIT_CMIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMIE() && (--___t___ > 0)); }


#define WAIT_CMIE_HIGH() \
    while (! READ_CMIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Oversampling mode 
    // 
#define OVER8_MASK 0x8000U
#define OVER8_OFFSET 15
#define OVER8_START_BIT 15
#define OVER8_WIDTH 1



typedef enum over8 {
    OVER_8_0,
    OVER_8_1
} OVER_8_T ;
#define WRITE_OVER8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ OVER8_MASK) | ((val << OVER8_START_BIT) & OVER8_MASK )); \
   } 

#define ENABLE_OVER8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  OVER8_MASK ); \
   }

#define DISABLE_OVER8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~OVER8_MASK ); \
   } 

#define READ_OVER8() \
   ((READ_REGISTER_ULONG(0x40011400) & OVER8_MASK)  >> OVER8_START_BIT)

#define WHEN_OVER8_HIGH() \
     if ( READ_OVER8() )


#define UNLESS_OVER8_HIGH() \
     if (! READ_OVER8() )


#define WAIT_OVER8_LOW() \
    while ( READ_OVER8() );


#define WAIT_OVER8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVER8() && (--___t___ > 0)); }


#define WAIT_OVER8_HIGH() \
    while (! READ_OVER8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT0 
    // 
#define DEDT0_MASK 0x10000U
#define DEDT0_OFFSET 16
#define DEDT0_START_BIT 16
#define DEDT0_WIDTH 1



typedef enum dedt0 {
    DEDT_0_0,
    DEDT_0_1
} DEDT_0_T ;
#define WRITE_DEDT0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEDT0_MASK) | ((val << DEDT0_START_BIT) & DEDT0_MASK )); \
   } 

#define ENABLE_DEDT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEDT0_MASK ); \
   }

#define DISABLE_DEDT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEDT0_MASK ); \
   } 

#define READ_DEDT0() \
   ((READ_REGISTER_ULONG(0x40011400) & DEDT0_MASK)  >> DEDT0_START_BIT)

#define WHEN_DEDT0_HIGH() \
     if ( READ_DEDT0() )


#define UNLESS_DEDT0_HIGH() \
     if (! READ_DEDT0() )


#define WAIT_DEDT0_LOW() \
    while ( READ_DEDT0() );


#define WAIT_DEDT0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEDT0() && (--___t___ > 0)); }


#define WAIT_DEDT0_HIGH() \
    while (! READ_DEDT0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT1 
    // 
#define DEDT1_MASK 0x20000U
#define DEDT1_OFFSET 17
#define DEDT1_START_BIT 17
#define DEDT1_WIDTH 1



typedef enum dedt1 {
    DEDT_1_0,
    DEDT_1_1
} DEDT_1_T ;
#define WRITE_DEDT1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEDT1_MASK) | ((val << DEDT1_START_BIT) & DEDT1_MASK )); \
   } 

#define ENABLE_DEDT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEDT1_MASK ); \
   }

#define DISABLE_DEDT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEDT1_MASK ); \
   } 

#define READ_DEDT1() \
   ((READ_REGISTER_ULONG(0x40011400) & DEDT1_MASK)  >> DEDT1_START_BIT)

#define WHEN_DEDT1_HIGH() \
     if ( READ_DEDT1() )


#define UNLESS_DEDT1_HIGH() \
     if (! READ_DEDT1() )


#define WAIT_DEDT1_LOW() \
    while ( READ_DEDT1() );


#define WAIT_DEDT1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEDT1() && (--___t___ > 0)); }


#define WAIT_DEDT1_HIGH() \
    while (! READ_DEDT1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT2 
    // 
#define DEDT2_MASK 0x40000U
#define DEDT2_OFFSET 18
#define DEDT2_START_BIT 18
#define DEDT2_WIDTH 1



typedef enum dedt2 {
    DEDT_2_0,
    DEDT_2_1
} DEDT_2_T ;
#define WRITE_DEDT2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEDT2_MASK) | ((val << DEDT2_START_BIT) & DEDT2_MASK )); \
   } 

#define ENABLE_DEDT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEDT2_MASK ); \
   }

#define DISABLE_DEDT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEDT2_MASK ); \
   } 

#define READ_DEDT2() \
   ((READ_REGISTER_ULONG(0x40011400) & DEDT2_MASK)  >> DEDT2_START_BIT)

#define WHEN_DEDT2_HIGH() \
     if ( READ_DEDT2() )


#define UNLESS_DEDT2_HIGH() \
     if (! READ_DEDT2() )


#define WAIT_DEDT2_LOW() \
    while ( READ_DEDT2() );


#define WAIT_DEDT2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEDT2() && (--___t___ > 0)); }


#define WAIT_DEDT2_HIGH() \
    while (! READ_DEDT2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT3 
    // 
#define DEDT3_MASK 0x80000U
#define DEDT3_OFFSET 19
#define DEDT3_START_BIT 19
#define DEDT3_WIDTH 1



typedef enum dedt3 {
    DEDT_3_0,
    DEDT_3_1
} DEDT_3_T ;
#define WRITE_DEDT3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEDT3_MASK) | ((val << DEDT3_START_BIT) & DEDT3_MASK )); \
   } 

#define ENABLE_DEDT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEDT3_MASK ); \
   }

#define DISABLE_DEDT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEDT3_MASK ); \
   } 

#define READ_DEDT3() \
   ((READ_REGISTER_ULONG(0x40011400) & DEDT3_MASK)  >> DEDT3_START_BIT)

#define WHEN_DEDT3_HIGH() \
     if ( READ_DEDT3() )


#define UNLESS_DEDT3_HIGH() \
     if (! READ_DEDT3() )


#define WAIT_DEDT3_LOW() \
    while ( READ_DEDT3() );


#define WAIT_DEDT3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEDT3() && (--___t___ > 0)); }


#define WAIT_DEDT3_HIGH() \
    while (! READ_DEDT3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver Enable de-assertion time 
    // 
#define DEDT4_MASK 0x100000U
#define DEDT4_OFFSET 20
#define DEDT4_START_BIT 20
#define DEDT4_WIDTH 1



typedef enum dedt4 {
    DEDT_4_0,
    DEDT_4_1
} DEDT_4_T ;
#define WRITE_DEDT4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEDT4_MASK) | ((val << DEDT4_START_BIT) & DEDT4_MASK )); \
   } 

#define ENABLE_DEDT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEDT4_MASK ); \
   }

#define DISABLE_DEDT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEDT4_MASK ); \
   } 

#define READ_DEDT4() \
   ((READ_REGISTER_ULONG(0x40011400) & DEDT4_MASK)  >> DEDT4_START_BIT)

#define WHEN_DEDT4_HIGH() \
     if ( READ_DEDT4() )


#define UNLESS_DEDT4_HIGH() \
     if (! READ_DEDT4() )


#define WAIT_DEDT4_LOW() \
    while ( READ_DEDT4() );


#define WAIT_DEDT4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEDT4() && (--___t___ > 0)); }


#define WAIT_DEDT4_HIGH() \
    while (! READ_DEDT4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT0 
    // 
#define DEAT0_MASK 0x200000U
#define DEAT0_OFFSET 21
#define DEAT0_START_BIT 21
#define DEAT0_WIDTH 1



typedef enum deat0 {
    DEAT_0_0,
    DEAT_0_1
} DEAT_0_T ;
#define WRITE_DEAT0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEAT0_MASK) | ((val << DEAT0_START_BIT) & DEAT0_MASK )); \
   } 

#define ENABLE_DEAT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEAT0_MASK ); \
   }

#define DISABLE_DEAT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEAT0_MASK ); \
   } 

#define READ_DEAT0() \
   ((READ_REGISTER_ULONG(0x40011400) & DEAT0_MASK)  >> DEAT0_START_BIT)

#define WHEN_DEAT0_HIGH() \
     if ( READ_DEAT0() )


#define UNLESS_DEAT0_HIGH() \
     if (! READ_DEAT0() )


#define WAIT_DEAT0_LOW() \
    while ( READ_DEAT0() );


#define WAIT_DEAT0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEAT0() && (--___t___ > 0)); }


#define WAIT_DEAT0_HIGH() \
    while (! READ_DEAT0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT1 
    // 
#define DEAT1_MASK 0x400000U
#define DEAT1_OFFSET 22
#define DEAT1_START_BIT 22
#define DEAT1_WIDTH 1



typedef enum deat1 {
    DEAT_1_0,
    DEAT_1_1
} DEAT_1_T ;
#define WRITE_DEAT1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEAT1_MASK) | ((val << DEAT1_START_BIT) & DEAT1_MASK )); \
   } 

#define ENABLE_DEAT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEAT1_MASK ); \
   }

#define DISABLE_DEAT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEAT1_MASK ); \
   } 

#define READ_DEAT1() \
   ((READ_REGISTER_ULONG(0x40011400) & DEAT1_MASK)  >> DEAT1_START_BIT)

#define WHEN_DEAT1_HIGH() \
     if ( READ_DEAT1() )


#define UNLESS_DEAT1_HIGH() \
     if (! READ_DEAT1() )


#define WAIT_DEAT1_LOW() \
    while ( READ_DEAT1() );


#define WAIT_DEAT1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEAT1() && (--___t___ > 0)); }


#define WAIT_DEAT1_HIGH() \
    while (! READ_DEAT1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT2 
    // 
#define DEAT2_MASK 0x800000U
#define DEAT2_OFFSET 23
#define DEAT2_START_BIT 23
#define DEAT2_WIDTH 1



typedef enum deat2 {
    DEAT_2_0,
    DEAT_2_1
} DEAT_2_T ;
#define WRITE_DEAT2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEAT2_MASK) | ((val << DEAT2_START_BIT) & DEAT2_MASK )); \
   } 

#define ENABLE_DEAT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEAT2_MASK ); \
   }

#define DISABLE_DEAT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEAT2_MASK ); \
   } 

#define READ_DEAT2() \
   ((READ_REGISTER_ULONG(0x40011400) & DEAT2_MASK)  >> DEAT2_START_BIT)

#define WHEN_DEAT2_HIGH() \
     if ( READ_DEAT2() )


#define UNLESS_DEAT2_HIGH() \
     if (! READ_DEAT2() )


#define WAIT_DEAT2_LOW() \
    while ( READ_DEAT2() );


#define WAIT_DEAT2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEAT2() && (--___t___ > 0)); }


#define WAIT_DEAT2_HIGH() \
    while (! READ_DEAT2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT3 
    // 
#define DEAT3_MASK 0x1000000U
#define DEAT3_OFFSET 24
#define DEAT3_START_BIT 24
#define DEAT3_WIDTH 1



typedef enum deat3 {
    DEAT_3_0,
    DEAT_3_1
} DEAT_3_T ;
#define WRITE_DEAT3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEAT3_MASK) | ((val << DEAT3_START_BIT) & DEAT3_MASK )); \
   } 

#define ENABLE_DEAT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEAT3_MASK ); \
   }

#define DISABLE_DEAT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEAT3_MASK ); \
   } 

#define READ_DEAT3() \
   ((READ_REGISTER_ULONG(0x40011400) & DEAT3_MASK)  >> DEAT3_START_BIT)

#define WHEN_DEAT3_HIGH() \
     if ( READ_DEAT3() )


#define UNLESS_DEAT3_HIGH() \
     if (! READ_DEAT3() )


#define WAIT_DEAT3_LOW() \
    while ( READ_DEAT3() );


#define WAIT_DEAT3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEAT3() && (--___t___ > 0)); }


#define WAIT_DEAT3_HIGH() \
    while (! READ_DEAT3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver Enable assertion time 
    // 
#define DEAT4_MASK 0x2000000U
#define DEAT4_OFFSET 25
#define DEAT4_START_BIT 25
#define DEAT4_WIDTH 1



typedef enum deat4 {
    DEAT_4_0,
    DEAT_4_1
} DEAT_4_T ;
#define WRITE_DEAT4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ DEAT4_MASK) | ((val << DEAT4_START_BIT) & DEAT4_MASK )); \
   } 

#define ENABLE_DEAT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  DEAT4_MASK ); \
   }

#define DISABLE_DEAT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~DEAT4_MASK ); \
   } 

#define READ_DEAT4() \
   ((READ_REGISTER_ULONG(0x40011400) & DEAT4_MASK)  >> DEAT4_START_BIT)

#define WHEN_DEAT4_HIGH() \
     if ( READ_DEAT4() )


#define UNLESS_DEAT4_HIGH() \
     if (! READ_DEAT4() )


#define WAIT_DEAT4_LOW() \
    while ( READ_DEAT4() );


#define WAIT_DEAT4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DEAT4() && (--___t___ > 0)); }


#define WAIT_DEAT4_HIGH() \
    while (! READ_DEAT4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout interrupt enable 
    // 
#define RTOIE_MASK 0x4000000U
#define RTOIE_OFFSET 26
#define RTOIE_START_BIT 26
#define RTOIE_WIDTH 1



typedef enum rtoie {
    RTOIE_0,
    RTOIE_1
} RTOIE_T ;
#define WRITE_RTOIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RTOIE_MASK) | ((val << RTOIE_START_BIT) & RTOIE_MASK )); \
   } 

#define ENABLE_RTOIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  RTOIE_MASK ); \
   }

#define DISABLE_RTOIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~RTOIE_MASK ); \
   } 

#define READ_RTOIE() \
   ((READ_REGISTER_ULONG(0x40011400) & RTOIE_MASK)  >> RTOIE_START_BIT)

#define WHEN_RTOIE_HIGH() \
     if ( READ_RTOIE() )


#define UNLESS_RTOIE_HIGH() \
     if (! READ_RTOIE() )


#define WAIT_RTOIE_LOW() \
    while ( READ_RTOIE() );


#define WAIT_RTOIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTOIE() && (--___t___ > 0)); }


#define WAIT_RTOIE_HIGH() \
    while (! READ_RTOIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of Block interrupt enable 
    // 
#define EOBIE_MASK 0x8000000U
#define EOBIE_OFFSET 27
#define EOBIE_START_BIT 27
#define EOBIE_WIDTH 1



typedef enum eobie {
    EOBIE_0,
    EOBIE_1
} EOBIE_T ;
#define WRITE_EOBIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ EOBIE_MASK) | ((val << EOBIE_START_BIT) & EOBIE_MASK )); \
   } 

#define ENABLE_EOBIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  EOBIE_MASK ); \
   }

#define DISABLE_EOBIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~EOBIE_MASK ); \
   } 

#define READ_EOBIE() \
   ((READ_REGISTER_ULONG(0x40011400) & EOBIE_MASK)  >> EOBIE_START_BIT)

#define WHEN_EOBIE_HIGH() \
     if ( READ_EOBIE() )


#define UNLESS_EOBIE_HIGH() \
     if (! READ_EOBIE() )


#define WAIT_EOBIE_LOW() \
    while ( READ_EOBIE() );


#define WAIT_EOBIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOBIE() && (--___t___ > 0)); }


#define WAIT_EOBIE_HIGH() \
    while (! READ_EOBIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x40011400, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Word length 
    // 
#define M1_MASK 0x10000000U
#define M1_OFFSET 28
#define M1_START_BIT 28
#define M1_WIDTH 1



typedef enum m1 {
    M_1_0,
    M_1_1
} M1_T ;
#define WRITE_M1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ M1_MASK) | ((val << M1_START_BIT) & M1_MASK )); \
   } 

#define ENABLE_M1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  M1_MASK ); \
   }

#define DISABLE_M1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, val & ~M1_MASK ); \
   } 

#define READ_M1() \
   ((READ_REGISTER_ULONG(0x40011400) & M1_MASK)  >> M1_START_BIT)

#define WHEN_M1_HIGH() \
     if ( READ_M1() )


#define UNLESS_M1_HIGH() \
     if (! READ_M1() )


#define WAIT_M1_LOW() \
    while ( READ_M1() );


#define WAIT_M1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_M1() && (--___t___ > 0)); }


#define WAIT_M1_HIGH() \
    while (! READ_M1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtor
//
// Return the value of register RTOR
//
// Notes : Register Rtor at offset 0x40011400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RTOR( y) \
     WRITE_REGISTER_ULONG( 0x40011400 , y)

#define SET_BITS_RTOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val |  mask ); \
   }

#define CLEAR_BITS_RTOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40011400); \
     WRITE_REGISTER_ULONG( 0x40011400 , val & ~mask ); \
   }

#define READ_REGISTER_RTOR() \
     READ_REGISTER_ULONG(0x40011400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Rtor
//
// Return the value of register RTOR
//
// Notes : Register Receiver timeout register (RTOR) at the offset 0x40011400, Bits 0:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout value 
    // 
#define RTO_MASK 0xFFFFFFU
#define RTO_OFFSET 23
#define RTO_START_BIT 0
#define RTO_WIDTH 24


#define RTOR_REG 0x40011400

typedef enum rto {
    RTO_0,
    RTO_1
} RTO_T ;
#define READ_RTO() \
   ((READ_REGISTER_ULONG(0x40011400) & RTO_MASK)  >> RTO_START_BIT)

#define WRITE_RTO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ RTO_MASK) | ((val << RTO_START_BIT) & RTO_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rtor
//
// Return the value of register RTOR
//
// Notes : Register Receiver timeout register (RTOR) at the offset 0x40011400, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Block Length 
    // 
#define BLEN_MASK 0xFF000000U
#define BLEN_OFFSET 31
#define BLEN_START_BIT 24
#define BLEN_WIDTH 8



typedef enum blen {
    BLEN_0,
    BLEN_1
} BLEN_T ;
#define READ_BLEN() \
   ((READ_REGISTER_ULONG(0x40011400) & BLEN_MASK)  >> BLEN_START_BIT)

#define WRITE_BLEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40011400); \
     WRITE_REGISTER_ULONG(0x40011400, (OldValue & ~ BLEN_MASK) | ((val << BLEN_START_BIT) & BLEN_MASK )); \
   } 

