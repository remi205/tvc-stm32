/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/flash.h
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
 
#define FLASH 0x40023C00
/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Acr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Flash access control register (ACR) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data cache reset 
    // 
#define DCRST_MASK 0x1000U
#define DCRST_OFFSET 12
#define DCRST_START_BIT 12
#define DCRST_WIDTH 1


#define ACR_REG 0x0

typedef enum dcrst {
    DCRST_0,
    DCRST_1
} DCRST_T ;
#define WRITE_DCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DCRST_MASK) | ((val << DCRST_START_BIT) & DCRST_MASK )); \
   } 

#define ENABLE_DCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DCRST_MASK ); \
   }

#define DISABLE_DCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DCRST_MASK ); \
   } 

#define READ_DCRST() \
   ((READ_REGISTER_ULONG(0x0) & DCRST_MASK)  >> DCRST_START_BIT)

#define WHEN_DCRST_HIGH() \
     if ( READ_DCRST() )


#define UNLESS_DCRST_HIGH() \
     if (! READ_DCRST() )


#define WAIT_DCRST_LOW() \
    while ( READ_DCRST() );


#define WAIT_DCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCRST() && (--___t___ > 0)); }


#define WAIT_DCRST_HIGH() \
    while (! READ_DCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Flash access control register (ACR) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Instruction cache reset 
    // 
#define ICRST_MASK 0x800U
#define ICRST_OFFSET 11
#define ICRST_START_BIT 11
#define ICRST_WIDTH 1



typedef enum icrst {
    ICRST_0,
    ICRST_1
} ICRST_T ;
#define WRITE_ICRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ICRST_MASK) | ((val << ICRST_START_BIT) & ICRST_MASK )); \
   } 

#define ENABLE_ICRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ICRST_MASK ); \
   }

#define DISABLE_ICRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ICRST_MASK ); \
   } 

#define READ_ICRST() \
   ((READ_REGISTER_ULONG(0x0) & ICRST_MASK)  >> ICRST_START_BIT)

#define WHEN_ICRST_HIGH() \
     if ( READ_ICRST() )


#define UNLESS_ICRST_HIGH() \
     if (! READ_ICRST() )


#define WAIT_ICRST_LOW() \
    while ( READ_ICRST() );


#define WAIT_ICRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ICRST() && (--___t___ > 0)); }


#define WAIT_ICRST_HIGH() \
    while (! READ_ICRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Flash access control register (ACR) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data cache enable 
    // 
#define DCEN_MASK 0x400U
#define DCEN_OFFSET 10
#define DCEN_START_BIT 10
#define DCEN_WIDTH 1



typedef enum dcen {
    DCEN_0,
    DCEN_1
} DCEN_T ;
#define WRITE_DCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DCEN_MASK) | ((val << DCEN_START_BIT) & DCEN_MASK )); \
   } 

#define ENABLE_DCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DCEN_MASK ); \
   }

#define DISABLE_DCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DCEN_MASK ); \
   } 

#define READ_DCEN() \
   ((READ_REGISTER_ULONG(0x0) & DCEN_MASK)  >> DCEN_START_BIT)

#define WHEN_DCEN_HIGH() \
     if ( READ_DCEN() )


#define UNLESS_DCEN_HIGH() \
     if (! READ_DCEN() )


#define WAIT_DCEN_LOW() \
    while ( READ_DCEN() );


#define WAIT_DCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCEN() && (--___t___ > 0)); }


#define WAIT_DCEN_HIGH() \
    while (! READ_DCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Flash access control register (ACR) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Instruction cache enable 
    // 
#define ICEN_MASK 0x200U
#define ICEN_OFFSET 9
#define ICEN_START_BIT 9
#define ICEN_WIDTH 1



typedef enum icen {
    ICEN_0,
    ICEN_1
} ICEN_T ;
#define WRITE_ICEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ICEN_MASK) | ((val << ICEN_START_BIT) & ICEN_MASK )); \
   } 

#define ENABLE_ICEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ICEN_MASK ); \
   }

#define DISABLE_ICEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ICEN_MASK ); \
   } 

#define READ_ICEN() \
   ((READ_REGISTER_ULONG(0x0) & ICEN_MASK)  >> ICEN_START_BIT)

#define WHEN_ICEN_HIGH() \
     if ( READ_ICEN() )


#define UNLESS_ICEN_HIGH() \
     if (! READ_ICEN() )


#define WAIT_ICEN_LOW() \
    while ( READ_ICEN() );


#define WAIT_ICEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ICEN() && (--___t___ > 0)); }


#define WAIT_ICEN_HIGH() \
    while (! READ_ICEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Flash access control register (ACR) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Prefetch enable 
    // 
#define PRFTEN_MASK 0x100U
#define PRFTEN_OFFSET 8
#define PRFTEN_START_BIT 8
#define PRFTEN_WIDTH 1



typedef enum prften {
    PRFTEN_0,
    PRFTEN_1
} PRFTEN_T ;
#define WRITE_PRFTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PRFTEN_MASK) | ((val << PRFTEN_START_BIT) & PRFTEN_MASK )); \
   } 

#define ENABLE_PRFTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PRFTEN_MASK ); \
   }

#define DISABLE_PRFTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PRFTEN_MASK ); \
   } 

#define READ_PRFTEN() \
   ((READ_REGISTER_ULONG(0x0) & PRFTEN_MASK)  >> PRFTEN_START_BIT)

#define WHEN_PRFTEN_HIGH() \
     if ( READ_PRFTEN() )


#define UNLESS_PRFTEN_HIGH() \
     if (! READ_PRFTEN() )


#define WAIT_PRFTEN_LOW() \
    while ( READ_PRFTEN() );


#define WAIT_PRFTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PRFTEN() && (--___t___ > 0)); }


#define WAIT_PRFTEN_HIGH() \
    while (! READ_PRFTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr
//
// Return the value of register ACR
//
// Notes : Register Flash access control register (ACR) at the offset 0x0, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Latency 
    // 
#define LATENCY_MASK 0x7U
#define LATENCY_OFFSET 2
#define LATENCY_START_BIT 0
#define LATENCY_WIDTH 3



typedef enum latency {
    LATENCY_0,
    LATENCY_1
} LATENCY_T ;
#define READ_LATENCY() \
   ((READ_REGISTER_ULONG(0x0) & LATENCY_MASK)  >> LATENCY_START_BIT)

#define WRITE_LATENCY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ LATENCY_MASK) | ((val << LATENCY_START_BIT) & LATENCY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Keyr
//
// Return the value of register KEYR
//
// Notes : Register Keyr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_KEYR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Keyr
//
// Return the value of register KEYR
//
// Notes : Register Flash key register (KEYR) at the offset 0x4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FPEC key 
    // 
#define KEY_MASK 0xFFFFFFFFU
#define KEY_OFFSET 31
#define KEY_START_BIT 0
#define KEY_WIDTH 32


#define KEYR_REG 0x4

#define READ_KEY() \
   ((READ_REGISTER_ULONG(0x4) & KEY_MASK)  >> KEY_START_BIT)

#define WRITE_KEY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ KEY_MASK) | ((val << KEY_START_BIT) & KEY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Optkeyr
//
// Return the value of register OPTKEYR
//
// Notes : Register Optkeyr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OPTKEYR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Optkeyr
//
// Return the value of register OPTKEYR
//
// Notes : Register Flash option key register (OPTKEYR) at the offset 0x8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Option byte key 
    // 
#define OPTKEY_MASK 0xFFFFFFFFU
#define OPTKEY_OFFSET 31
#define OPTKEY_START_BIT 0
#define OPTKEY_WIDTH 32


#define OPTKEYR_REG 0x8

typedef enum optkey {
    OPTKEY_0,
    OPTKEY_1
} OPTKEY_T ;
#define READ_OPTKEY() \
   ((READ_REGISTER_ULONG(0x8) & OPTKEY_MASK)  >> OPTKEY_START_BIT)

#define WRITE_OPTKEY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OPTKEY_MASK) | ((val << OPTKEY_START_BIT) & OPTKEY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : BSY
//
// Return the value of register Sr
//
// Notes : Busy 
//        (SR) at the offset 0xC, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BSY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ BSY_MASK) | ((val << BSY_START_BIT) & BSY_MASK )); \
   } 

#define ENABLE_BSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  BSY_MASK ); \
   }

#define DISABLE_BSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~BSY_MASK ); \
   } 

#define READ_BSY() \
   ((READ_REGISTER_ULONG(0xC) & BSY_MASK)  >> BSY_START_BIT)

#define WHEN_BSY_HIGH() \
     if ( READ_BSY() )


#define UNLESS_BSY_HIGH() \
     if (! READ_BSY() )


#define WAIT_BSY_LOW() \
    while ( READ_BSY() );


#define WAIT_BSY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BSY() && (--___t___ > 0)); }


#define WAIT_BSY_HIGH() \
    while (! READ_BSY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PGSERR
//
// Return the value of register Sr
//
// Notes : Programming sequence error 
//        (SR) at the offset 0xC, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PGSERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PGSERR_MASK) | ((val << PGSERR_START_BIT) & PGSERR_MASK )); \
   } 

#define ENABLE_PGSERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PGSERR_MASK ); \
   }

#define DISABLE_PGSERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PGSERR_MASK ); \
   } 

#define READ_PGSERR() \
   ((READ_REGISTER_ULONG(0xC) & PGSERR_MASK)  >> PGSERR_START_BIT)

#define WHEN_PGSERR_HIGH() \
     if ( READ_PGSERR() )


#define UNLESS_PGSERR_HIGH() \
     if (! READ_PGSERR() )


#define WAIT_PGSERR_LOW() \
    while ( READ_PGSERR() );


#define WAIT_PGSERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PGSERR() && (--___t___ > 0)); }


#define WAIT_PGSERR_HIGH() \
    while (! READ_PGSERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PGPERR
//
// Return the value of register Sr
//
// Notes : Programming parallelism error 
//        (SR) at the offset 0xC, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PGPERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PGPERR_MASK) | ((val << PGPERR_START_BIT) & PGPERR_MASK )); \
   } 

#define ENABLE_PGPERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PGPERR_MASK ); \
   }

#define DISABLE_PGPERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PGPERR_MASK ); \
   } 

#define READ_PGPERR() \
   ((READ_REGISTER_ULONG(0xC) & PGPERR_MASK)  >> PGPERR_START_BIT)

#define WHEN_PGPERR_HIGH() \
     if ( READ_PGPERR() )


#define UNLESS_PGPERR_HIGH() \
     if (! READ_PGPERR() )


#define WAIT_PGPERR_LOW() \
    while ( READ_PGPERR() );


#define WAIT_PGPERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PGPERR() && (--___t___ > 0)); }


#define WAIT_PGPERR_HIGH() \
    while (! READ_PGPERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PGAERR
//
// Return the value of register Sr
//
// Notes : Programming alignment error 
//        (SR) at the offset 0xC, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PGAERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PGAERR_MASK) | ((val << PGAERR_START_BIT) & PGAERR_MASK )); \
   } 

#define ENABLE_PGAERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PGAERR_MASK ); \
   }

#define DISABLE_PGAERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PGAERR_MASK ); \
   } 

#define READ_PGAERR() \
   ((READ_REGISTER_ULONG(0xC) & PGAERR_MASK)  >> PGAERR_START_BIT)

#define WHEN_PGAERR_HIGH() \
     if ( READ_PGAERR() )


#define UNLESS_PGAERR_HIGH() \
     if (! READ_PGAERR() )


#define WAIT_PGAERR_LOW() \
    while ( READ_PGAERR() );


#define WAIT_PGAERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PGAERR() && (--___t___ > 0)); }


#define WAIT_PGAERR_HIGH() \
    while (! READ_PGAERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WRPERR
//
// Return the value of register Sr
//
// Notes : Write protection error 
//        (SR) at the offset 0xC, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WRPERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WRPERR_MASK) | ((val << WRPERR_START_BIT) & WRPERR_MASK )); \
   } 

#define ENABLE_WRPERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WRPERR_MASK ); \
   }

#define DISABLE_WRPERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WRPERR_MASK ); \
   } 

#define READ_WRPERR() \
   ((READ_REGISTER_ULONG(0xC) & WRPERR_MASK)  >> WRPERR_START_BIT)

#define WHEN_WRPERR_HIGH() \
     if ( READ_WRPERR() )


#define UNLESS_WRPERR_HIGH() \
     if (! READ_WRPERR() )


#define WAIT_WRPERR_LOW() \
    while ( READ_WRPERR() );


#define WAIT_WRPERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WRPERR() && (--___t___ > 0)); }


#define WAIT_WRPERR_HIGH() \
    while (! READ_WRPERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OPERR
//
// Return the value of register Sr
//
// Notes : Operation error 
//        (SR) at the offset 0xC, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OPERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ OPERR_MASK) | ((val << OPERR_START_BIT) & OPERR_MASK )); \
   } 

#define ENABLE_OPERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  OPERR_MASK ); \
   }

#define DISABLE_OPERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~OPERR_MASK ); \
   } 

#define READ_OPERR() \
   ((READ_REGISTER_ULONG(0xC) & OPERR_MASK)  >> OPERR_START_BIT)

#define WHEN_OPERR_HIGH() \
     if ( READ_OPERR() )


#define UNLESS_OPERR_HIGH() \
     if (! READ_OPERR() )


#define WAIT_OPERR_LOW() \
    while ( READ_OPERR() );


#define WAIT_OPERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OPERR() && (--___t___ > 0)); }


#define WAIT_OPERR_HIGH() \
    while (! READ_OPERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOP
//
// Return the value of register Sr
//
// Notes : End of operation 
//        (SR) at the offset 0xC, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EOP_MASK) | ((val << EOP_START_BIT) & EOP_MASK )); \
   } 

#define ENABLE_EOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EOP_MASK ); \
   }

#define DISABLE_EOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EOP_MASK ); \
   } 

#define READ_EOP() \
   ((READ_REGISTER_ULONG(0xC) & EOP_MASK)  >> EOP_START_BIT)

#define WHEN_EOP_HIGH() \
     if ( READ_EOP() )


#define UNLESS_EOP_HIGH() \
     if (! READ_EOP() )


#define WAIT_EOP_LOW() \
    while ( READ_EOP() );


#define WAIT_EOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOP() && (--___t___ > 0)); }


#define WAIT_EOP_HIGH() \
    while (! READ_EOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_CR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : LOCK
//
// Return the value of register Cr
//
// Notes : Lock 
//        (CR) at the offset 0x10, Bits 31:31
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LOCK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ LOCK_MASK) | ((val << LOCK_START_BIT) & LOCK_MASK )); \
   } 

#define ENABLE_LOCK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  LOCK_MASK ); \
   }

#define DISABLE_LOCK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~LOCK_MASK ); \
   } 

#define READ_LOCK() \
   ((READ_REGISTER_ULONG(0x10) & LOCK_MASK)  >> LOCK_START_BIT)

#define WHEN_LOCK_HIGH() \
     if ( READ_LOCK() )


#define UNLESS_LOCK_HIGH() \
     if (! READ_LOCK() )


#define WAIT_LOCK_LOW() \
    while ( READ_LOCK() );


#define WAIT_LOCK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LOCK() && (--___t___ > 0)); }


#define WAIT_LOCK_HIGH() \
    while (! READ_LOCK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ERRIE
//
// Return the value of register Cr
//
// Notes : Error interrupt enable 
//        (CR) at the offset 0x10, Bits 25:25
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ERRIE_MASK) | ((val << ERRIE_START_BIT) & ERRIE_MASK )); \
   } 

#define ENABLE_ERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ERRIE_MASK ); \
   }

#define DISABLE_ERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ERRIE_MASK ); \
   } 

#define READ_ERRIE() \
   ((READ_REGISTER_ULONG(0x10) & ERRIE_MASK)  >> ERRIE_START_BIT)

#define WHEN_ERRIE_HIGH() \
     if ( READ_ERRIE() )


#define UNLESS_ERRIE_HIGH() \
     if (! READ_ERRIE() )


#define WAIT_ERRIE_LOW() \
    while ( READ_ERRIE() );


#define WAIT_ERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ERRIE() && (--___t___ > 0)); }


#define WAIT_ERRIE_HIGH() \
    while (! READ_ERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOPIE
//
// Return the value of register Cr
//
// Notes : End of operation interrupt enable 
//        (CR) at the offset 0x10, Bits 24:24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOPIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EOPIE_MASK) | ((val << EOPIE_START_BIT) & EOPIE_MASK )); \
   } 

#define ENABLE_EOPIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  EOPIE_MASK ); \
   }

#define DISABLE_EOPIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~EOPIE_MASK ); \
   } 

#define READ_EOPIE() \
   ((READ_REGISTER_ULONG(0x10) & EOPIE_MASK)  >> EOPIE_START_BIT)

#define WHEN_EOPIE_HIGH() \
     if ( READ_EOPIE() )


#define UNLESS_EOPIE_HIGH() \
     if (! READ_EOPIE() )


#define WAIT_EOPIE_LOW() \
    while ( READ_EOPIE() );


#define WAIT_EOPIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOPIE() && (--___t___ > 0)); }


#define WAIT_EOPIE_HIGH() \
    while (! READ_EOPIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : STRT
//
// Return the value of register Cr
//
// Notes : Start 
//        (CR) at the offset 0x10, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STRT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ STRT_MASK) | ((val << STRT_START_BIT) & STRT_MASK )); \
   } 

#define ENABLE_STRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  STRT_MASK ); \
   }

#define DISABLE_STRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~STRT_MASK ); \
   } 

#define READ_STRT() \
   ((READ_REGISTER_ULONG(0x10) & STRT_MASK)  >> STRT_START_BIT)

#define WHEN_STRT_HIGH() \
     if ( READ_STRT() )


#define UNLESS_STRT_HIGH() \
     if (! READ_STRT() )


#define WAIT_STRT_LOW() \
    while ( READ_STRT() );


#define WAIT_STRT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STRT() && (--___t___ > 0)); }


#define WAIT_STRT_HIGH() \
    while (! READ_STRT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MER1
//
// Return the value of register Cr
//
// Notes : Mass Erase of sectors 12 to 23 
//        (CR) at the offset 0x10, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MER1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MER1_MASK) | ((val << MER1_START_BIT) & MER1_MASK )); \
   } 

#define ENABLE_MER1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  MER1_MASK ); \
   }

#define DISABLE_MER1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~MER1_MASK ); \
   } 

#define READ_MER1() \
   ((READ_REGISTER_ULONG(0x10) & MER1_MASK)  >> MER1_START_BIT)

#define WHEN_MER1_HIGH() \
     if ( READ_MER1() )


#define UNLESS_MER1_HIGH() \
     if (! READ_MER1() )


#define WAIT_MER1_LOW() \
    while ( READ_MER1() );


#define WAIT_MER1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MER1() && (--___t___ > 0)); }


#define WAIT_MER1_HIGH() \
    while (! READ_MER1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PSIZE
//
// Return the value of register Cr
//
// Notes : Program size 
//        (CR) at the offset 0x10, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x10) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : SNB
//
// Return the value of register Cr
//
// Notes : Sector number 
//        (CR) at the offset 0x10, Bits 3:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_SNB() \
   ((READ_REGISTER_ULONG(0x10) & SNB_MASK)  >> SNB_START_BIT)

#define WRITE_SNB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SNB_MASK) | ((val << SNB_START_BIT) & SNB_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MER
//
// Return the value of register Cr
//
// Notes : Mass Erase of sectors 0 to 11 
//        (CR) at the offset 0x10, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MER_MASK) | ((val << MER_START_BIT) & MER_MASK )); \
   } 

#define ENABLE_MER() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  MER_MASK ); \
   }

#define DISABLE_MER() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~MER_MASK ); \
   } 

#define READ_MER() \
   ((READ_REGISTER_ULONG(0x10) & MER_MASK)  >> MER_START_BIT)

#define WHEN_MER_HIGH() \
     if ( READ_MER() )


#define UNLESS_MER_HIGH() \
     if (! READ_MER() )


#define WAIT_MER_LOW() \
    while ( READ_MER() );


#define WAIT_MER_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MER() && (--___t___ > 0)); }


#define WAIT_MER_HIGH() \
    while (! READ_MER() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SER
//
// Return the value of register Cr
//
// Notes : Sector Erase 
//        (CR) at the offset 0x10, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SER_MASK) | ((val << SER_START_BIT) & SER_MASK )); \
   } 

#define ENABLE_SER() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SER_MASK ); \
   }

#define DISABLE_SER() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SER_MASK ); \
   } 

#define READ_SER() \
   ((READ_REGISTER_ULONG(0x10) & SER_MASK)  >> SER_START_BIT)

#define WHEN_SER_HIGH() \
     if ( READ_SER() )


#define UNLESS_SER_HIGH() \
     if (! READ_SER() )


#define WAIT_SER_LOW() \
    while ( READ_SER() );


#define WAIT_SER_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SER() && (--___t___ > 0)); }


#define WAIT_SER_HIGH() \
    while (! READ_SER() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PG
//
// Return the value of register Cr
//
// Notes : Programming 
//        (CR) at the offset 0x10, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PG_MASK) | ((val << PG_START_BIT) & PG_MASK )); \
   } 

#define ENABLE_PG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  PG_MASK ); \
   }

#define DISABLE_PG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~PG_MASK ); \
   } 

#define READ_PG() \
   ((READ_REGISTER_ULONG(0x10) & PG_MASK)  >> PG_START_BIT)

#define WHEN_PG_HIGH() \
     if ( READ_PG() )


#define UNLESS_PG_HIGH() \
     if (! READ_PG() )


#define WAIT_PG_LOW() \
    while ( READ_PG() );


#define WAIT_PG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PG() && (--___t___ > 0)); }


#define WAIT_PG_HIGH() \
    while (! READ_PG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Optcr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OPTCR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_OPTCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_OPTCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_OPTCR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 16:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Not write protect 
    // 
#define NWRP_MASK 0xFFF0000U
#define NWRP_OFFSET 27
#define NWRP_START_BIT 16
#define NWRP_WIDTH 12


#define OPTCR_REG 0x14

typedef enum nwrp {
    NWRP_0,
    NWRP_1
} NWRP_T ;
#define READ_NWRP() \
   ((READ_REGISTER_ULONG(0x14) & NWRP_MASK)  >> NWRP_START_BIT)

#define WRITE_NWRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ NWRP_MASK) | ((val << NWRP_START_BIT) & NWRP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read protect 
    // 
#define RDP_MASK 0xFF00U
#define RDP_OFFSET 15
#define RDP_START_BIT 8
#define RDP_WIDTH 8



typedef enum rdp {
    RDP_0,
    RDP_1
} RDP_T ;
#define READ_RDP() \
   ((READ_REGISTER_ULONG(0x14) & RDP_MASK)  >> RDP_START_BIT)

#define WRITE_RDP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RDP_MASK) | ((val << RDP_START_BIT) & RDP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // nRST_STDBY User option bytes 
    // 
#define NRST_STDBY_MASK 0x80U
#define NRST_STDBY_OFFSET 7
#define NRST_STDBY_START_BIT 7
#define NRST_STDBY_WIDTH 1



typedef enum nrst_stdby {
    NRST_STDBY_0,
    NRST_STDBY_1
} NRST_STDBY_T ;
#define WRITE_NRST_STDBY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ NRST_STDBY_MASK) | ((val << NRST_STDBY_START_BIT) & NRST_STDBY_MASK )); \
   } 

#define ENABLE_NRST_STDBY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  NRST_STDBY_MASK ); \
   }

#define DISABLE_NRST_STDBY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~NRST_STDBY_MASK ); \
   } 

#define READ_NRST_STDBY() \
   ((READ_REGISTER_ULONG(0x14) & NRST_STDBY_MASK)  >> NRST_STDBY_START_BIT)

#define WHEN_NRST_STDBY_HIGH() \
     if ( READ_NRST_STDBY() )


#define UNLESS_NRST_STDBY_HIGH() \
     if (! READ_NRST_STDBY() )


#define WAIT_NRST_STDBY_LOW() \
    while ( READ_NRST_STDBY() );


#define WAIT_NRST_STDBY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NRST_STDBY() && (--___t___ > 0)); }


#define WAIT_NRST_STDBY_HIGH() \
    while (! READ_NRST_STDBY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // nRST_STOP User option bytes 
    // 
#define NRST_STOP_MASK 0x40U
#define NRST_STOP_OFFSET 6
#define NRST_STOP_START_BIT 6
#define NRST_STOP_WIDTH 1



typedef enum nrst_stop {
    NRST_STOP_0,
    NRST_STOP_1
} NRST_STOP_T ;
#define WRITE_NRST_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ NRST_STOP_MASK) | ((val << NRST_STOP_START_BIT) & NRST_STOP_MASK )); \
   } 

#define ENABLE_NRST_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  NRST_STOP_MASK ); \
   }

#define DISABLE_NRST_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~NRST_STOP_MASK ); \
   } 

#define READ_NRST_STOP() \
   ((READ_REGISTER_ULONG(0x14) & NRST_STOP_MASK)  >> NRST_STOP_START_BIT)

#define WHEN_NRST_STOP_HIGH() \
     if ( READ_NRST_STOP() )


#define UNLESS_NRST_STOP_HIGH() \
     if (! READ_NRST_STOP() )


#define WAIT_NRST_STOP_LOW() \
    while ( READ_NRST_STOP() );


#define WAIT_NRST_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NRST_STOP() && (--___t___ > 0)); }


#define WAIT_NRST_STOP_HIGH() \
    while (! READ_NRST_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WDG_SW User option bytes 
    // 
#define WDG_SW_MASK 0x20U
#define WDG_SW_OFFSET 5
#define WDG_SW_START_BIT 5
#define WDG_SW_WIDTH 1



typedef enum wdg_sw {
    WDG_SW_0,
    WDG_SW_1
} WDG_SW_T ;
#define WRITE_WDG_SW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ WDG_SW_MASK) | ((val << WDG_SW_START_BIT) & WDG_SW_MASK )); \
   } 

#define ENABLE_WDG_SW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  WDG_SW_MASK ); \
   }

#define DISABLE_WDG_SW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~WDG_SW_MASK ); \
   } 

#define READ_WDG_SW() \
   ((READ_REGISTER_ULONG(0x14) & WDG_SW_MASK)  >> WDG_SW_START_BIT)

#define WHEN_WDG_SW_HIGH() \
     if ( READ_WDG_SW() )


#define UNLESS_WDG_SW_HIGH() \
     if (! READ_WDG_SW() )


#define WAIT_WDG_SW_LOW() \
    while ( READ_WDG_SW() );


#define WAIT_WDG_SW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDG_SW() && (--___t___ > 0)); }


#define WAIT_WDG_SW_HIGH() \
    while (! READ_WDG_SW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BOR reset Level 
    // 
#define BOR_LEV_MASK 0xCU
#define BOR_LEV_OFFSET 3
#define BOR_LEV_START_BIT 2
#define BOR_LEV_WIDTH 2



typedef enum bor_lev {
    BOR_LEV_0,
    BOR_LEV_1
} BOR_LEV_T ;
#define READ_BOR_LEV() \
   ((READ_REGISTER_ULONG(0x14) & BOR_LEV_MASK)  >> BOR_LEV_START_BIT)

#define WRITE_BOR_LEV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ BOR_LEV_MASK) | ((val << BOR_LEV_START_BIT) & BOR_LEV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Option start 
    // 
#define OPTSTRT_MASK 0x2U
#define OPTSTRT_OFFSET 1
#define OPTSTRT_START_BIT 1
#define OPTSTRT_WIDTH 1



typedef enum optstrt {
    OPTSTRT_0,
    OPTSTRT_1
} OPTSTRT_T ;
#define WRITE_OPTSTRT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OPTSTRT_MASK) | ((val << OPTSTRT_START_BIT) & OPTSTRT_MASK )); \
   } 

#define ENABLE_OPTSTRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OPTSTRT_MASK ); \
   }

#define DISABLE_OPTSTRT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OPTSTRT_MASK ); \
   } 

#define READ_OPTSTRT() \
   ((READ_REGISTER_ULONG(0x14) & OPTSTRT_MASK)  >> OPTSTRT_START_BIT)

#define WHEN_OPTSTRT_HIGH() \
     if ( READ_OPTSTRT() )


#define UNLESS_OPTSTRT_HIGH() \
     if (! READ_OPTSTRT() )


#define WAIT_OPTSTRT_LOW() \
    while ( READ_OPTSTRT() );


#define WAIT_OPTSTRT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OPTSTRT() && (--___t___ > 0)); }


#define WAIT_OPTSTRT_HIGH() \
    while (! READ_OPTSTRT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr
//
// Return the value of register OPTCR
//
// Notes : Register Flash option control register (OPTCR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Option lock 
    // 
#define OPTLOCK_MASK 0x1U
#define OPTLOCK_OFFSET 0
#define OPTLOCK_START_BIT 0
#define OPTLOCK_WIDTH 1



typedef enum optlock {
    OPTLOCK_0,
    OPTLOCK_1
} OPTLOCK_T ;
#define WRITE_OPTLOCK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OPTLOCK_MASK) | ((val << OPTLOCK_START_BIT) & OPTLOCK_MASK )); \
   } 

#define ENABLE_OPTLOCK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OPTLOCK_MASK ); \
   }

#define DISABLE_OPTLOCK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OPTLOCK_MASK ); \
   } 

#define READ_OPTLOCK() \
   ((READ_REGISTER_ULONG(0x14) & OPTLOCK_MASK)  >> OPTLOCK_START_BIT)

#define WHEN_OPTLOCK_HIGH() \
     if ( READ_OPTLOCK() )


#define UNLESS_OPTLOCK_HIGH() \
     if (! READ_OPTLOCK() )


#define WAIT_OPTLOCK_LOW() \
    while ( READ_OPTLOCK() );


#define WAIT_OPTLOCK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OPTLOCK() && (--___t___ > 0)); }


#define WAIT_OPTLOCK_HIGH() \
    while (! READ_OPTLOCK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr1
//
// Return the value of register OPTCR1
//
// Notes : Register Optcr1 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OPTCR_1( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_OPTCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_OPTCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_OPTCR_1() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Optcr1
//
// Return the value of register OPTCR_1
//
// Notes : Register Flash option control register 1 (OPTCR1) at the offset 0x18, Bits 16:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Not write protect 
    // 
#define NWRP_MASK 0xFFF0000U
#define NWRP_OFFSET 27
#define NWRP_START_BIT 16
#define NWRP_WIDTH 12


#define OPTCR_1_REG 0x18

#define READ_NWRP() \
   ((READ_REGISTER_ULONG(0x18) & NWRP_MASK)  >> NWRP_START_BIT)

#define WRITE_NWRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ NWRP_MASK) | ((val << NWRP_START_BIT) & NWRP_MASK )); \
   } 

