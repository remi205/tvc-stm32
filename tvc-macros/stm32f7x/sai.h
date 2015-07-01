/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/sai.h
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
 
#define NB_DEVICE_SAI 2
#define SAI1 0x40015800
#define SAI2 0x40015C00
/////////////////////////////////////////////////////////////////////////
//
// Function : Gcr
//
// Return the value of register GCR
//
// Notes : Register Gcr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GCR( base,  val) \
     WRITE_REGISTER_ULONG( base , val)

#define SET_BITS_GCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  mask ); \
   } 

#define CLEAR_BITS_GCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base ,  val & ~mask ); \
   } 

#define READ_REGISTER_GCR( base ) \
     READ_REGISTER_ULONG( base ) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gcr
//
// Return the value of register GCR
//
// Notes : Register Global configuration register (GCR) at the offset 0x0, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization outputs 
    // 
#define SYNCOUT_MASK 0x30U
#define SYNCOUT_OFFSET 5
#define SYNCOUT_START_BIT 4
#define SYNCOUT_WIDTH 2


#define GCR_REG 0x0

typedef enum syncout {
    SYNCOUT_0,
    SYNCOUT_1
} SYNCOUT_T ;
#define READ_SYNCOUT(base) \
    ((READ_REGISTER_ULONG(base ) & SYNCOUT_MASK) >> SYNCOUT_START_BIT )

#define WRITE_SYNCOUT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SYNCOUT_MASK) | ((val << SYNCOUT_START_BIT) & SYNCOUT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gcr
//
// Return the value of register GCR
//
// Notes : Register Global configuration register (GCR) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization inputs 
    // 
#define SYNCIN_MASK 0x3U
#define SYNCIN_OFFSET 1
#define SYNCIN_START_BIT 0
#define SYNCIN_WIDTH 2



typedef enum syncin {
    SYNCIN_0,
    SYNCIN_1
} SYNCIN_T ;
#define READ_SYNCIN(base) \
    ((READ_REGISTER_ULONG(base ) & SYNCIN_MASK) >> SYNCIN_START_BIT )

#define WRITE_SYNCIN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SYNCIN_MASK) | ((val << SYNCIN_START_BIT) & SYNCIN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR1
//
// Notes : Register Acr1 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ACR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x4, val)

#define SET_BITS_ACR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  mask ); \
   } 

#define CLEAR_BITS_ACR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4,  val & ~mask ); \
   } 

#define READ_REGISTER_ACR_1( base ) \
     READ_REGISTER_ULONG( base + 0x4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Audio block mode 
    // 
#define MODE_MASK 0x3U
#define MODE_OFFSET 1
#define MODE_START_BIT 0
#define MODE_WIDTH 2


#define ACR_1_REG 0x4

#define READ_MODE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & MODE_MASK) >> MODE_START_BIT )

#define WRITE_MODE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~MODE_MASK) | ((val << MODE_START_BIT) & MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Protocol configuration 
    // 
#define PRTCFG_MASK 0xCU
#define PRTCFG_OFFSET 3
#define PRTCFG_START_BIT 2
#define PRTCFG_WIDTH 2



typedef enum prtcfg {
    PRTCFG_0,
    PRTCFG_1
} PRTCFG_T ;
#define READ_PRTCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & PRTCFG_MASK) >> PRTCFG_START_BIT )

#define WRITE_PRTCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~PRTCFG_MASK) | ((val << PRTCFG_START_BIT) & PRTCFG_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 5:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data size 
    // 
#define DS_MASK 0xE0U
#define DS_OFFSET 7
#define DS_START_BIT 5
#define DS_WIDTH 3



typedef enum ds {
    DS_0,
    DS_1
} DS_T ;
#define READ_DS(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DS_MASK) >> DS_START_BIT )

#define WRITE_DS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DS_MASK) | ((val << DS_START_BIT) & DS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Least significant bit first 
    // 
#define LSBFIRST_MASK 0x100U
#define LSBFIRST_OFFSET 8
#define LSBFIRST_START_BIT 8
#define LSBFIRST_WIDTH 1



typedef enum lsbfirst {
    LSBFIRST_0,
    LSBFIRST_1
} LSBFIRST_T ;
#define WRITE_LSBFIRST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~LSBFIRST_MASK) | ((val << LSBFIRST_START_BIT) & LSBFIRST_MASK )); \
   } 

#define ENABLE_LSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  LSBFIRST_MASK ); \
   } 

#define DISABLE_LSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~LSBFIRST_MASK ); \
   } 

#define READ_LSBFIRST(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & LSBFIRST_MASK) >> LSBFIRST_START_BIT )

#define WHEN_LSBFIRST_HIGH(base) \
     if ( READ_LSBFIRST(base) )


#define UNLESS_LSBFIRST_HIGH(base) \
     if (! READ_LSBFIRST(base) )


#define WAIT_LSBFIRST_LOW(base) \
    while ( READ_LSBFIRST(base) );


#define WAIT_LSBFIRST_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LSBFIRST(base) && (--timeout > 0) );


#define WAIT_LSBFIRST_HIGH(base) \
    while (! READ_LSBFIRST(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock strobing edge 
    // 
#define CKSTR_MASK 0x200U
#define CKSTR_OFFSET 9
#define CKSTR_START_BIT 9
#define CKSTR_WIDTH 1



typedef enum ckstr {
    CKSTR_0,
    CKSTR_1
} CKSTR_T ;
#define WRITE_CKSTR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~CKSTR_MASK) | ((val << CKSTR_START_BIT) & CKSTR_MASK )); \
   } 

#define ENABLE_CKSTR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  CKSTR_MASK ); \
   } 

#define DISABLE_CKSTR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~CKSTR_MASK ); \
   } 

#define READ_CKSTR(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & CKSTR_MASK) >> CKSTR_START_BIT )

#define WHEN_CKSTR_HIGH(base) \
     if ( READ_CKSTR(base) )


#define UNLESS_CKSTR_HIGH(base) \
     if (! READ_CKSTR(base) )


#define WAIT_CKSTR_LOW(base) \
    while ( READ_CKSTR(base) );


#define WAIT_CKSTR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CKSTR(base) && (--timeout > 0) );


#define WAIT_CKSTR_HIGH(base) \
    while (! READ_CKSTR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization enable 
    // 
#define SYNCEN_MASK 0xC00U
#define SYNCEN_OFFSET 11
#define SYNCEN_START_BIT 10
#define SYNCEN_WIDTH 2



typedef enum syncen {
    SYNCEN_0,
    SYNCEN_1
} SYNCEN_T ;
#define READ_SYNCEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & SYNCEN_MASK) >> SYNCEN_START_BIT )

#define WRITE_SYNCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~SYNCEN_MASK) | ((val << SYNCEN_START_BIT) & SYNCEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mono mode 
    // 
#define MONO_MASK 0x1000U
#define MONO_OFFSET 12
#define MONO_START_BIT 12
#define MONO_WIDTH 1



typedef enum mono {
    MONO_0,
    MONO_1
} MONO_T ;
#define WRITE_MONO(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~MONO_MASK) | ((val << MONO_START_BIT) & MONO_MASK )); \
   } 

#define ENABLE_MONO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  MONO_MASK ); \
   } 

#define DISABLE_MONO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~MONO_MASK ); \
   } 

#define READ_MONO(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & MONO_MASK) >> MONO_START_BIT )

#define WHEN_MONO_HIGH(base) \
     if ( READ_MONO(base) )


#define UNLESS_MONO_HIGH(base) \
     if (! READ_MONO(base) )


#define WAIT_MONO_LOW(base) \
    while ( READ_MONO(base) );


#define WAIT_MONO_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MONO(base) && (--timeout > 0) );


#define WAIT_MONO_HIGH(base) \
    while (! READ_MONO(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output drive 
    // 
#define OUTDRI_MASK 0x2000U
#define OUTDRI_OFFSET 13
#define OUTDRI_START_BIT 13
#define OUTDRI_WIDTH 1



typedef enum outdri {
    OUTDRI_0,
    OUTDRI_1
} OUTDRI_T ;
#define WRITE_OUTDRI(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~OUTDRI_MASK) | ((val << OUTDRI_START_BIT) & OUTDRI_MASK )); \
   } 

#define ENABLE_OUTDRI(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  OUTDRI_MASK ); \
   } 

#define DISABLE_OUTDRI(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~OUTDRI_MASK ); \
   } 

#define READ_OUTDRI(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & OUTDRI_MASK) >> OUTDRI_START_BIT )

#define WHEN_OUTDRI_HIGH(base) \
     if ( READ_OUTDRI(base) )


#define UNLESS_OUTDRI_HIGH(base) \
     if (! READ_OUTDRI(base) )


#define WAIT_OUTDRI_LOW(base) \
    while ( READ_OUTDRI(base) );


#define WAIT_OUTDRI_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OUTDRI(base) && (--timeout > 0) );


#define WAIT_OUTDRI_HIGH(base) \
    while (! READ_OUTDRI(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Audio block A enable 
    // 
#define SAIAEN_MASK 0x10000U
#define SAIAEN_OFFSET 16
#define SAIAEN_START_BIT 16
#define SAIAEN_WIDTH 1



typedef enum saiaen {
    SAIAEN_0,
    SAIAEN_1
} SAIAEN_T ;
#define WRITE_SAIAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~SAIAEN_MASK) | ((val << SAIAEN_START_BIT) & SAIAEN_MASK )); \
   } 

#define ENABLE_SAIAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  SAIAEN_MASK ); \
   } 

#define DISABLE_SAIAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~SAIAEN_MASK ); \
   } 

#define READ_SAIAEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & SAIAEN_MASK) >> SAIAEN_START_BIT )

#define WHEN_SAIAEN_HIGH(base) \
     if ( READ_SAIAEN(base) )


#define UNLESS_SAIAEN_HIGH(base) \
     if (! READ_SAIAEN(base) )


#define WAIT_SAIAEN_LOW(base) \
    while ( READ_SAIAEN(base) );


#define WAIT_SAIAEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SAIAEN(base) && (--timeout > 0) );


#define WAIT_SAIAEN_HIGH(base) \
    while (! READ_SAIAEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable 
    // 
#define DMAEN_MASK 0x20000U
#define DMAEN_OFFSET 17
#define DMAEN_START_BIT 17
#define DMAEN_WIDTH 1



#define WRITE_DMAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DMAEN_MASK) | ((val << DMAEN_START_BIT) & DMAEN_MASK )); \
   } 

#define ENABLE_DMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  DMAEN_MASK ); \
   } 

#define DISABLE_DMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~DMAEN_MASK ); \
   } 

#define READ_DMAEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DMAEN_MASK) >> DMAEN_START_BIT )

#define WHEN_DMAEN_HIGH(base) \
     if ( READ_DMAEN(base) )


#define UNLESS_DMAEN_HIGH(base) \
     if (! READ_DMAEN(base) )


#define WAIT_DMAEN_LOW(base) \
    while ( READ_DMAEN(base) );


#define WAIT_DMAEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMAEN(base) && (--timeout > 0) );


#define WAIT_DMAEN_HIGH(base) \
    while (! READ_DMAEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // No divider 
    // 
#define NODIV_MASK 0x80000U
#define NODIV_OFFSET 19
#define NODIV_START_BIT 19
#define NODIV_WIDTH 1



typedef enum nodiv {
    NODIV_0,
    NODIV_1
} NODIV_T ;
#define WRITE_NODIV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~NODIV_MASK) | ((val << NODIV_START_BIT) & NODIV_MASK )); \
   } 

#define ENABLE_NODIV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  NODIV_MASK ); \
   } 

#define DISABLE_NODIV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~NODIV_MASK ); \
   } 

#define READ_NODIV(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & NODIV_MASK) >> NODIV_START_BIT )

#define WHEN_NODIV_HIGH(base) \
     if ( READ_NODIV(base) )


#define UNLESS_NODIV_HIGH(base) \
     if (! READ_NODIV(base) )


#define WAIT_NODIV_LOW(base) \
    while ( READ_NODIV(base) );


#define WAIT_NODIV_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NODIV(base) && (--timeout > 0) );


#define WAIT_NODIV_HIGH(base) \
    while (! READ_NODIV(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr1
//
// Return the value of register ACR_1
//
// Notes : Register AConfiguration register 1 (ACR1) at the offset 0x4, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Master clock divider 
    // 
#define MCJDIV_MASK 0xF00000U
#define MCJDIV_OFFSET 23
#define MCJDIV_START_BIT 20
#define MCJDIV_WIDTH 4



typedef enum mcjdiv {
    MCJDIV_0,
    MCJDIV_1
} MCJDIV_T ;
#define READ_MCJDIV(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & MCJDIV_MASK) >> MCJDIV_START_BIT )

#define WRITE_MCJDIV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~MCJDIV_MASK) | ((val << MCJDIV_START_BIT) & MCJDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR2
//
// Notes : Register Acr2 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ACR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8, val)

#define SET_BITS_ACR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_ACR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_ACR_2( base ) \
     READ_REGISTER_ULONG( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold 
    // 
#define FTH_MASK 0x7U
#define FTH_OFFSET 2
#define FTH_START_BIT 0
#define FTH_WIDTH 3


#define ACR_2_REG 0x8

typedef enum fth {
    FTH_0,
    FTH_1
} FTH_T ;
#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO flush 
    // 
#define FFLUS_MASK 0x8U
#define FFLUS_OFFSET 3
#define FFLUS_START_BIT 3
#define FFLUS_WIDTH 1



typedef enum fflus {
    FFLUS_0,
    FFLUS_1
} FFLUS_T ;
#define WRITE_FFLUS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~FFLUS_MASK) | ((val << FFLUS_START_BIT) & FFLUS_MASK )); \
   } 

#define ENABLE_FFLUS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  FFLUS_MASK ); \
   } 

#define DISABLE_FFLUS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~FFLUS_MASK ); \
   } 

#define READ_FFLUS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & FFLUS_MASK) >> FFLUS_START_BIT )

#define WHEN_FFLUS_HIGH(base) \
     if ( READ_FFLUS(base) )


#define UNLESS_FFLUS_HIGH(base) \
     if (! READ_FFLUS(base) )


#define WAIT_FFLUS_LOW(base) \
    while ( READ_FFLUS(base) );


#define WAIT_FFLUS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FFLUS(base) && (--timeout > 0) );


#define WAIT_FFLUS_HIGH(base) \
    while (! READ_FFLUS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tristate management on data line 
    // 
#define TRIS_MASK 0x10U
#define TRIS_OFFSET 4
#define TRIS_START_BIT 4
#define TRIS_WIDTH 1



typedef enum tris {
    TRIS_0,
    TRIS_1
} TRIS_T ;
#define WRITE_TRIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~TRIS_MASK) | ((val << TRIS_START_BIT) & TRIS_MASK )); \
   } 

#define ENABLE_TRIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  TRIS_MASK ); \
   } 

#define DISABLE_TRIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~TRIS_MASK ); \
   } 

#define READ_TRIS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & TRIS_MASK) >> TRIS_START_BIT )

#define WHEN_TRIS_HIGH(base) \
     if ( READ_TRIS(base) )


#define UNLESS_TRIS_HIGH(base) \
     if (! READ_TRIS(base) )


#define WAIT_TRIS_LOW(base) \
    while ( READ_TRIS(base) );


#define WAIT_TRIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TRIS(base) && (--timeout > 0) );


#define WAIT_TRIS_HIGH(base) \
    while (! READ_TRIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute 
    // 
#define MUTE_MASK 0x20U
#define MUTE_OFFSET 5
#define MUTE_START_BIT 5
#define MUTE_WIDTH 1



typedef enum mute {
    MUTE_0,
    MUTE_1
} MUTE_T ;
#define WRITE_MUTE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~MUTE_MASK) | ((val << MUTE_START_BIT) & MUTE_MASK )); \
   } 

#define ENABLE_MUTE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  MUTE_MASK ); \
   } 

#define DISABLE_MUTE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~MUTE_MASK ); \
   } 

#define READ_MUTE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & MUTE_MASK) >> MUTE_START_BIT )

#define WHEN_MUTE_HIGH(base) \
     if ( READ_MUTE(base) )


#define UNLESS_MUTE_HIGH(base) \
     if (! READ_MUTE(base) )


#define WAIT_MUTE_LOW(base) \
    while ( READ_MUTE(base) );


#define WAIT_MUTE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTE(base) && (--timeout > 0) );


#define WAIT_MUTE_HIGH(base) \
    while (! READ_MUTE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute value 
    // 
#define MUTEVAL_MASK 0x40U
#define MUTEVAL_OFFSET 6
#define MUTEVAL_START_BIT 6
#define MUTEVAL_WIDTH 1



typedef enum muteval {
    MUTEVAL_0,
    MUTEVAL_1
} MUTEVAL_T ;
#define WRITE_MUTEVAL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~MUTEVAL_MASK) | ((val << MUTEVAL_START_BIT) & MUTEVAL_MASK )); \
   } 

#define ENABLE_MUTEVAL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  MUTEVAL_MASK ); \
   } 

#define DISABLE_MUTEVAL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~MUTEVAL_MASK ); \
   } 

#define READ_MUTEVAL(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & MUTEVAL_MASK) >> MUTEVAL_START_BIT )

#define WHEN_MUTEVAL_HIGH(base) \
     if ( READ_MUTEVAL(base) )


#define UNLESS_MUTEVAL_HIGH(base) \
     if (! READ_MUTEVAL(base) )


#define WAIT_MUTEVAL_LOW(base) \
    while ( READ_MUTEVAL(base) );


#define WAIT_MUTEVAL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEVAL(base) && (--timeout > 0) );


#define WAIT_MUTEVAL_HIGH(base) \
    while (! READ_MUTEVAL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 7:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute counter 
    // 
#define MUTECN_MASK 0x1F80U
#define MUTECN_OFFSET 12
#define MUTECN_START_BIT 7
#define MUTECN_WIDTH 6



typedef enum mutecn {
    MUTECN_0,
    MUTECN_1
} MUTECN_T ;
#define READ_MUTECN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & MUTECN_MASK) >> MUTECN_START_BIT )

#define WRITE_MUTECN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~MUTECN_MASK) | ((val << MUTECN_START_BIT) & MUTECN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Complement bit 
    // 
#define CPL_MASK 0x2000U
#define CPL_OFFSET 13
#define CPL_START_BIT 13
#define CPL_WIDTH 1



typedef enum cpl {
    CPL_0,
    CPL_1
} CPL_T ;
#define WRITE_CPL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CPL_MASK) | ((val << CPL_START_BIT) & CPL_MASK )); \
   } 

#define ENABLE_CPL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CPL_MASK ); \
   } 

#define DISABLE_CPL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CPL_MASK ); \
   } 

#define READ_CPL(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CPL_MASK) >> CPL_START_BIT )

#define WHEN_CPL_HIGH(base) \
     if ( READ_CPL(base) )


#define UNLESS_CPL_HIGH(base) \
     if (! READ_CPL(base) )


#define WAIT_CPL_LOW(base) \
    while ( READ_CPL(base) );


#define WAIT_CPL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CPL(base) && (--timeout > 0) );


#define WAIT_CPL_HIGH(base) \
    while (! READ_CPL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Acr2
//
// Return the value of register ACR_2
//
// Notes : Register AConfiguration register 2 (ACR2) at the offset 0x8, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Companding mode 
    // 
#define COMP_MASK 0xC000U
#define COMP_OFFSET 15
#define COMP_START_BIT 14
#define COMP_WIDTH 2



typedef enum comp {
    COMP_0,
    COMP_1
} COMP_T ;
#define READ_COMP(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & COMP_MASK) >> COMP_START_BIT )

#define WRITE_COMP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~COMP_MASK) | ((val << COMP_START_BIT) & COMP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrcr
//
// Return the value of register AFRCR
//
// Notes : Register Afrcr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFRCR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_AFRCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_AFRCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_AFRCR( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrcr
//
// Return the value of register AFRCR
//
// Notes : Register AFRCR (AFRCR) at the offset 0xC, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame length 
    // 
#define FRL_MASK 0xFFU
#define FRL_OFFSET 7
#define FRL_START_BIT 0
#define FRL_WIDTH 8


#define AFRCR_REG 0xC

typedef enum frl {
    FRL_0,
    FRL_1
} FRL_T ;
#define READ_FRL(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & FRL_MASK) >> FRL_START_BIT )

#define WRITE_FRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~FRL_MASK) | ((val << FRL_START_BIT) & FRL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrcr
//
// Return the value of register AFRCR
//
// Notes : Register AFRCR (AFRCR) at the offset 0xC, Bits 8:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization active level length 
    // 
#define FSALL_MASK 0x7F00U
#define FSALL_OFFSET 14
#define FSALL_START_BIT 8
#define FSALL_WIDTH 7



typedef enum fsall {
    FSALL_0,
    FSALL_1
} FSALL_T ;
#define READ_FSALL(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & FSALL_MASK) >> FSALL_START_BIT )

#define WRITE_FSALL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~FSALL_MASK) | ((val << FSALL_START_BIT) & FSALL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrcr
//
// Return the value of register AFRCR
//
// Notes : Register AFRCR (AFRCR) at the offset 0xC, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization definition 
    // 
#define FSDEF_MASK 0x10000U
#define FSDEF_OFFSET 16
#define FSDEF_START_BIT 16
#define FSDEF_WIDTH 1



typedef enum fsdef {
    FSDEF_0,
    FSDEF_1
} FSDEF_T ;
#define WRITE_FSDEF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~FSDEF_MASK) | ((val << FSDEF_START_BIT) & FSDEF_MASK )); \
   } 

#define ENABLE_FSDEF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  FSDEF_MASK ); \
   } 

#define DISABLE_FSDEF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~FSDEF_MASK ); \
   } 

#define READ_FSDEF(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & FSDEF_MASK) >> FSDEF_START_BIT )

#define WHEN_FSDEF_HIGH(base) \
     if ( READ_FSDEF(base) )


#define UNLESS_FSDEF_HIGH(base) \
     if (! READ_FSDEF(base) )


#define WAIT_FSDEF_LOW(base) \
    while ( READ_FSDEF(base) );


#define WAIT_FSDEF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FSDEF(base) && (--timeout > 0) );


#define WAIT_FSDEF_HIGH(base) \
    while (! READ_FSDEF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Afrcr
//
// Return the value of register AFRCR
//
// Notes : Register AFRCR (AFRCR) at the offset 0xC, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization polarity 
    // 
#define FSPOL_MASK 0x20000U
#define FSPOL_OFFSET 17
#define FSPOL_START_BIT 17
#define FSPOL_WIDTH 1



typedef enum fspol {
    FSPOL_0,
    FSPOL_1
} FSPOL_T ;
#define WRITE_FSPOL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~FSPOL_MASK) | ((val << FSPOL_START_BIT) & FSPOL_MASK )); \
   } 

#define ENABLE_FSPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  FSPOL_MASK ); \
   } 

#define DISABLE_FSPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~FSPOL_MASK ); \
   } 

#define READ_FSPOL(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & FSPOL_MASK) >> FSPOL_START_BIT )

#define WHEN_FSPOL_HIGH(base) \
     if ( READ_FSPOL(base) )


#define UNLESS_FSPOL_HIGH(base) \
     if (! READ_FSPOL(base) )


#define WAIT_FSPOL_LOW(base) \
    while ( READ_FSPOL(base) );


#define WAIT_FSPOL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FSPOL(base) && (--timeout > 0) );


#define WAIT_FSPOL_HIGH(base) \
    while (! READ_FSPOL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Afrcr
//
// Return the value of register AFRCR
//
// Notes : Register AFRCR (AFRCR) at the offset 0xC, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization offset 
    // 
#define FSOFF_MASK 0x40000U
#define FSOFF_OFFSET 18
#define FSOFF_START_BIT 18
#define FSOFF_WIDTH 1



typedef enum fsoff {
    FSOFF_0,
    FSOFF_1
} FSOFF_T ;
#define WRITE_FSOFF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~FSOFF_MASK) | ((val << FSOFF_START_BIT) & FSOFF_MASK )); \
   } 

#define ENABLE_FSOFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  FSOFF_MASK ); \
   } 

#define DISABLE_FSOFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~FSOFF_MASK ); \
   } 

#define READ_FSOFF(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & FSOFF_MASK) >> FSOFF_START_BIT )

#define WHEN_FSOFF_HIGH(base) \
     if ( READ_FSOFF(base) )


#define UNLESS_FSOFF_HIGH(base) \
     if (! READ_FSOFF(base) )


#define WAIT_FSOFF_LOW(base) \
    while ( READ_FSOFF(base) );


#define WAIT_FSOFF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FSOFF(base) && (--timeout > 0) );


#define WAIT_FSOFF_HIGH(base) \
    while (! READ_FSOFF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aslotr
//
// Return the value of register ASLOTR
//
// Notes : Register Aslotr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ASLOTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_ASLOTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_ASLOTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_ASLOTR( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aslotr
//
// Return the value of register ASLOTR
//
// Notes : Register ASlot register (ASLOTR) at the offset 0x10, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // First bit offset 
    // 
#define FBOFF_MASK 0x1FU
#define FBOFF_OFFSET 4
#define FBOFF_START_BIT 0
#define FBOFF_WIDTH 5


#define ASLOTR_REG 0x10

typedef enum fboff {
    FBOFF_0,
    FBOFF_1
} FBOFF_T ;
#define READ_FBOFF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & FBOFF_MASK) >> FBOFF_START_BIT )

#define WRITE_FBOFF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~FBOFF_MASK) | ((val << FBOFF_START_BIT) & FBOFF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aslotr
//
// Return the value of register ASLOTR
//
// Notes : Register ASlot register (ASLOTR) at the offset 0x10, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Slot size 
    // 
#define SLOTSZ_MASK 0xC0U
#define SLOTSZ_OFFSET 7
#define SLOTSZ_START_BIT 6
#define SLOTSZ_WIDTH 2



typedef enum slotsz {
    SLOTSZ_0,
    SLOTSZ_1
} SLOTSZ_T ;
#define READ_SLOTSZ(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SLOTSZ_MASK) >> SLOTSZ_START_BIT )

#define WRITE_SLOTSZ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SLOTSZ_MASK) | ((val << SLOTSZ_START_BIT) & SLOTSZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aslotr
//
// Return the value of register ASLOTR
//
// Notes : Register ASlot register (ASLOTR) at the offset 0x10, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of slots in an audio frame 
    // 
#define NBSLOT_MASK 0xF00U
#define NBSLOT_OFFSET 11
#define NBSLOT_START_BIT 8
#define NBSLOT_WIDTH 4



typedef enum nbslot {
    NBSLOT_0,
    NBSLOT_1
} NBSLOT_T ;
#define READ_NBSLOT(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & NBSLOT_MASK) >> NBSLOT_START_BIT )

#define WRITE_NBSLOT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~NBSLOT_MASK) | ((val << NBSLOT_START_BIT) & NBSLOT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aslotr
//
// Return the value of register ASLOTR
//
// Notes : Register ASlot register (ASLOTR) at the offset 0x10, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Slot enable 
    // 
#define SLOTEN_MASK 0xFFFF0000U
#define SLOTEN_OFFSET 31
#define SLOTEN_START_BIT 16
#define SLOTEN_WIDTH 16



typedef enum sloten {
    SLOTEN_0,
    SLOTEN_1
} SLOTEN_T ;
#define READ_SLOTEN(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SLOTEN_MASK) >> SLOTEN_START_BIT )

#define WRITE_SLOTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SLOTEN_MASK) | ((val << SLOTEN_START_BIT) & SLOTEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register Aim at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AIM( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x14, val)

#define SET_BITS_AIM(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  mask ); \
   } 

#define CLEAR_BITS_AIM(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14,  val & ~mask ); \
   } 

#define READ_REGISTER_AIM( base ) \
     READ_REGISTER_ULONG( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun/underrun interrupt enable 
    // 
#define OVRUDRIE_MASK 0x1U
#define OVRUDRIE_OFFSET 0
#define OVRUDRIE_START_BIT 0
#define OVRUDRIE_WIDTH 1


#define AIM_REG 0x14

typedef enum ovrudrie {
    OVRUDRIE_0,
    OVRUDRIE_1
} OVRUDRIE_T ;
#define WRITE_OVRUDRIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~OVRUDRIE_MASK) | ((val << OVRUDRIE_START_BIT) & OVRUDRIE_MASK )); \
   } 

#define ENABLE_OVRUDRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  OVRUDRIE_MASK ); \
   } 

#define DISABLE_OVRUDRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~OVRUDRIE_MASK ); \
   } 

#define READ_OVRUDRIE(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & OVRUDRIE_MASK) >> OVRUDRIE_START_BIT )

#define WHEN_OVRUDRIE_HIGH(base) \
     if ( READ_OVRUDRIE(base) )


#define UNLESS_OVRUDRIE_HIGH(base) \
     if (! READ_OVRUDRIE(base) )


#define WAIT_OVRUDRIE_LOW(base) \
    while ( READ_OVRUDRIE(base) );


#define WAIT_OVRUDRIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRUDRIE(base) && (--timeout > 0) );


#define WAIT_OVRUDRIE_HIGH(base) \
    while (! READ_OVRUDRIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute detection interrupt enable 
    // 
#define MUTEDET_MASK 0x2U
#define MUTEDET_OFFSET 1
#define MUTEDET_START_BIT 1
#define MUTEDET_WIDTH 1



typedef enum mutedet {
    MUTEDET_0,
    MUTEDET_1
} MUTEDET_T ;
#define WRITE_MUTEDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~MUTEDET_MASK) | ((val << MUTEDET_START_BIT) & MUTEDET_MASK )); \
   } 

#define ENABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  MUTEDET_MASK ); \
   } 

#define DISABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~MUTEDET_MASK ); \
   } 

#define READ_MUTEDET(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & MUTEDET_MASK) >> MUTEDET_START_BIT )

#define WHEN_MUTEDET_HIGH(base) \
     if ( READ_MUTEDET(base) )


#define UNLESS_MUTEDET_HIGH(base) \
     if (! READ_MUTEDET(base) )


#define WAIT_MUTEDET_LOW(base) \
    while ( READ_MUTEDET(base) );


#define WAIT_MUTEDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEDET(base) && (--timeout > 0) );


#define WAIT_MUTEDET_HIGH(base) \
    while (! READ_MUTEDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wrong clock configuration interrupt enable 
    // 
#define WCKCFG_MASK 0x4U
#define WCKCFG_OFFSET 2
#define WCKCFG_START_BIT 2
#define WCKCFG_WIDTH 1



typedef enum wckcfg {
    WCKCFG_0,
    WCKCFG_1
} WCKCFG_T ;
#define WRITE_WCKCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~WCKCFG_MASK) | ((val << WCKCFG_START_BIT) & WCKCFG_MASK )); \
   } 

#define ENABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  WCKCFG_MASK ); \
   } 

#define DISABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~WCKCFG_MASK ); \
   } 

#define READ_WCKCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & WCKCFG_MASK) >> WCKCFG_START_BIT )

#define WHEN_WCKCFG_HIGH(base) \
     if ( READ_WCKCFG(base) )


#define UNLESS_WCKCFG_HIGH(base) \
     if (! READ_WCKCFG(base) )


#define WAIT_WCKCFG_LOW(base) \
    while ( READ_WCKCFG(base) );


#define WAIT_WCKCFG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WCKCFG(base) && (--timeout > 0) );


#define WAIT_WCKCFG_HIGH(base) \
    while (! READ_WCKCFG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO request interrupt enable 
    // 
#define FREQIE_MASK 0x8U
#define FREQIE_OFFSET 3
#define FREQIE_START_BIT 3
#define FREQIE_WIDTH 1



typedef enum freqie {
    FREQIE_0,
    FREQIE_1
} FREQIE_T ;
#define WRITE_FREQIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~FREQIE_MASK) | ((val << FREQIE_START_BIT) & FREQIE_MASK )); \
   } 

#define ENABLE_FREQIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  FREQIE_MASK ); \
   } 

#define DISABLE_FREQIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~FREQIE_MASK ); \
   } 

#define READ_FREQIE(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & FREQIE_MASK) >> FREQIE_START_BIT )

#define WHEN_FREQIE_HIGH(base) \
     if ( READ_FREQIE(base) )


#define UNLESS_FREQIE_HIGH(base) \
     if (! READ_FREQIE(base) )


#define WAIT_FREQIE_LOW(base) \
    while ( READ_FREQIE(base) );


#define WAIT_FREQIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FREQIE(base) && (--timeout > 0) );


#define WAIT_FREQIE_HIGH(base) \
    while (! READ_FREQIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Codec not ready interrupt enable 
    // 
#define CNRDYIE_MASK 0x10U
#define CNRDYIE_OFFSET 4
#define CNRDYIE_START_BIT 4
#define CNRDYIE_WIDTH 1



typedef enum cnrdyie {
    CNRDYIE_0,
    CNRDYIE_1
} CNRDYIE_T ;
#define WRITE_CNRDYIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~CNRDYIE_MASK) | ((val << CNRDYIE_START_BIT) & CNRDYIE_MASK )); \
   } 

#define ENABLE_CNRDYIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  CNRDYIE_MASK ); \
   } 

#define DISABLE_CNRDYIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~CNRDYIE_MASK ); \
   } 

#define READ_CNRDYIE(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & CNRDYIE_MASK) >> CNRDYIE_START_BIT )

#define WHEN_CNRDYIE_HIGH(base) \
     if ( READ_CNRDYIE(base) )


#define UNLESS_CNRDYIE_HIGH(base) \
     if (! READ_CNRDYIE(base) )


#define WAIT_CNRDYIE_LOW(base) \
    while ( READ_CNRDYIE(base) );


#define WAIT_CNRDYIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CNRDYIE(base) && (--timeout > 0) );


#define WAIT_CNRDYIE_HIGH(base) \
    while (! READ_CNRDYIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Anticipated frame synchronization detection interrupt 
    // enable 
    // 
#define AFSDETIE_MASK 0x20U
#define AFSDETIE_OFFSET 5
#define AFSDETIE_START_BIT 5
#define AFSDETIE_WIDTH 1



typedef enum afsdetie {
    AFSDETIE_0,
    AFSDETIE_1
} AFSDETIE_T ;
#define WRITE_AFSDETIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~AFSDETIE_MASK) | ((val << AFSDETIE_START_BIT) & AFSDETIE_MASK )); \
   } 

#define ENABLE_AFSDETIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  AFSDETIE_MASK ); \
   } 

#define DISABLE_AFSDETIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~AFSDETIE_MASK ); \
   } 

#define READ_AFSDETIE(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & AFSDETIE_MASK) >> AFSDETIE_START_BIT )

#define WHEN_AFSDETIE_HIGH(base) \
     if ( READ_AFSDETIE(base) )


#define UNLESS_AFSDETIE_HIGH(base) \
     if (! READ_AFSDETIE(base) )


#define WAIT_AFSDETIE_LOW(base) \
    while ( READ_AFSDETIE(base) );


#define WAIT_AFSDETIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AFSDETIE(base) && (--timeout > 0) );


#define WAIT_AFSDETIE_HIGH(base) \
    while (! READ_AFSDETIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aim
//
// Return the value of register AIM
//
// Notes : Register AInterrupt mask register2 (AIM) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Late frame synchronization detection interrupt enable 
    // 
#define LFSDET_MASK 0x40U
#define LFSDET_OFFSET 6
#define LFSDET_START_BIT 6
#define LFSDET_WIDTH 1



typedef enum lfsdet {
    LFSDET_0,
    LFSDET_1
} LFSDET_T ;
#define WRITE_LFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~LFSDET_MASK) | ((val << LFSDET_START_BIT) & LFSDET_MASK )); \
   } 

#define ENABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  LFSDET_MASK ); \
   } 

#define DISABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~LFSDET_MASK ); \
   } 

#define READ_LFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & LFSDET_MASK) >> LFSDET_START_BIT )

#define WHEN_LFSDET_HIGH(base) \
     if ( READ_LFSDET(base) )


#define UNLESS_LFSDET_HIGH(base) \
     if (! READ_LFSDET(base) )


#define WAIT_LFSDET_LOW(base) \
    while ( READ_LFSDET(base) );


#define WAIT_LFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LFSDET(base) && (--timeout > 0) );


#define WAIT_LFSDET_HIGH(base) \
    while (! READ_LFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register Asr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ASR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x18, val)

#define SET_BITS_ASR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  mask ); \
   } 

#define CLEAR_BITS_ASR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18,  val & ~mask ); \
   } 

#define READ_REGISTER_ASR( base ) \
     READ_REGISTER_ULONG( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun / underrun 
    // 
#define OVRUDR_MASK 0x1U
#define OVRUDR_OFFSET 0
#define OVRUDR_START_BIT 0
#define OVRUDR_WIDTH 1


#define ASR_REG 0x18

typedef enum ovrudr {
    OVRUDR_0,
    OVRUDR_1
} OVRUDR_T ;
#define WRITE_OVRUDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OVRUDR_MASK) | ((val << OVRUDR_START_BIT) & OVRUDR_MASK )); \
   } 

#define ENABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OVRUDR_MASK ); \
   } 

#define DISABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OVRUDR_MASK ); \
   } 

#define READ_OVRUDR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OVRUDR_MASK) >> OVRUDR_START_BIT )

#define WHEN_OVRUDR_HIGH(base) \
     if ( READ_OVRUDR(base) )


#define UNLESS_OVRUDR_HIGH(base) \
     if (! READ_OVRUDR(base) )


#define WAIT_OVRUDR_LOW(base) \
    while ( READ_OVRUDR(base) );


#define WAIT_OVRUDR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRUDR(base) && (--timeout > 0) );


#define WAIT_OVRUDR_HIGH(base) \
    while (! READ_OVRUDR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute detection 
    // 
#define MUTEDET_MASK 0x2U
#define MUTEDET_OFFSET 1
#define MUTEDET_START_BIT 1
#define MUTEDET_WIDTH 1



#define WRITE_MUTEDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~MUTEDET_MASK) | ((val << MUTEDET_START_BIT) & MUTEDET_MASK )); \
   } 

#define ENABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  MUTEDET_MASK ); \
   } 

#define DISABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~MUTEDET_MASK ); \
   } 

#define READ_MUTEDET(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & MUTEDET_MASK) >> MUTEDET_START_BIT )

#define WHEN_MUTEDET_HIGH(base) \
     if ( READ_MUTEDET(base) )


#define UNLESS_MUTEDET_HIGH(base) \
     if (! READ_MUTEDET(base) )


#define WAIT_MUTEDET_LOW(base) \
    while ( READ_MUTEDET(base) );


#define WAIT_MUTEDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEDET(base) && (--timeout > 0) );


#define WAIT_MUTEDET_HIGH(base) \
    while (! READ_MUTEDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wrong clock configuration flag. This bit is read only. 
    // 
#define WCKCFG_MASK 0x4U
#define WCKCFG_OFFSET 2
#define WCKCFG_START_BIT 2
#define WCKCFG_WIDTH 1



#define WRITE_WCKCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~WCKCFG_MASK) | ((val << WCKCFG_START_BIT) & WCKCFG_MASK )); \
   } 

#define ENABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  WCKCFG_MASK ); \
   } 

#define DISABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~WCKCFG_MASK ); \
   } 

#define READ_WCKCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & WCKCFG_MASK) >> WCKCFG_START_BIT )

#define WHEN_WCKCFG_HIGH(base) \
     if ( READ_WCKCFG(base) )


#define UNLESS_WCKCFG_HIGH(base) \
     if (! READ_WCKCFG(base) )


#define WAIT_WCKCFG_LOW(base) \
    while ( READ_WCKCFG(base) );


#define WAIT_WCKCFG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WCKCFG(base) && (--timeout > 0) );


#define WAIT_WCKCFG_HIGH(base) \
    while (! READ_WCKCFG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO request 
    // 
#define FREQ_MASK 0x8U
#define FREQ_OFFSET 3
#define FREQ_START_BIT 3
#define FREQ_WIDTH 1



typedef enum freq {
    FREQ_0,
    FREQ_1
} FREQ_T ;
#define WRITE_FREQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~FREQ_MASK) | ((val << FREQ_START_BIT) & FREQ_MASK )); \
   } 

#define ENABLE_FREQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  FREQ_MASK ); \
   } 

#define DISABLE_FREQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~FREQ_MASK ); \
   } 

#define READ_FREQ(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & FREQ_MASK) >> FREQ_START_BIT )

#define WHEN_FREQ_HIGH(base) \
     if ( READ_FREQ(base) )


#define UNLESS_FREQ_HIGH(base) \
     if (! READ_FREQ(base) )


#define WAIT_FREQ_LOW(base) \
    while ( READ_FREQ(base) );


#define WAIT_FREQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FREQ(base) && (--timeout > 0) );


#define WAIT_FREQ_HIGH(base) \
    while (! READ_FREQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Codec not ready 
    // 
#define CNRDY_MASK 0x10U
#define CNRDY_OFFSET 4
#define CNRDY_START_BIT 4
#define CNRDY_WIDTH 1



typedef enum cnrdy {
    CNRDY_0,
    CNRDY_1
} CNRDY_T ;
#define WRITE_CNRDY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CNRDY_MASK) | ((val << CNRDY_START_BIT) & CNRDY_MASK )); \
   } 

#define ENABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  CNRDY_MASK ); \
   } 

#define DISABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~CNRDY_MASK ); \
   } 

#define READ_CNRDY(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CNRDY_MASK) >> CNRDY_START_BIT )

#define WHEN_CNRDY_HIGH(base) \
     if ( READ_CNRDY(base) )


#define UNLESS_CNRDY_HIGH(base) \
     if (! READ_CNRDY(base) )


#define WAIT_CNRDY_LOW(base) \
    while ( READ_CNRDY(base) );


#define WAIT_CNRDY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CNRDY(base) && (--timeout > 0) );


#define WAIT_CNRDY_HIGH(base) \
    while (! READ_CNRDY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Anticipated frame synchronization detection 
    // 
#define AFSDET_MASK 0x20U
#define AFSDET_OFFSET 5
#define AFSDET_START_BIT 5
#define AFSDET_WIDTH 1



typedef enum afsdet {
    AFSDET_0,
    AFSDET_1
} AFSDET_T ;
#define WRITE_AFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~AFSDET_MASK) | ((val << AFSDET_START_BIT) & AFSDET_MASK )); \
   } 

#define ENABLE_AFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  AFSDET_MASK ); \
   } 

#define DISABLE_AFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~AFSDET_MASK ); \
   } 

#define READ_AFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & AFSDET_MASK) >> AFSDET_START_BIT )

#define WHEN_AFSDET_HIGH(base) \
     if ( READ_AFSDET(base) )


#define UNLESS_AFSDET_HIGH(base) \
     if (! READ_AFSDET(base) )


#define WAIT_AFSDET_LOW(base) \
    while ( READ_AFSDET(base) );


#define WAIT_AFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AFSDET(base) && (--timeout > 0) );


#define WAIT_AFSDET_HIGH(base) \
    while (! READ_AFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Late frame synchronization detection 
    // 
#define LFSDET_MASK 0x40U
#define LFSDET_OFFSET 6
#define LFSDET_START_BIT 6
#define LFSDET_WIDTH 1



#define WRITE_LFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~LFSDET_MASK) | ((val << LFSDET_START_BIT) & LFSDET_MASK )); \
   } 

#define ENABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  LFSDET_MASK ); \
   } 

#define DISABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~LFSDET_MASK ); \
   } 

#define READ_LFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & LFSDET_MASK) >> LFSDET_START_BIT )

#define WHEN_LFSDET_HIGH(base) \
     if ( READ_LFSDET(base) )


#define UNLESS_LFSDET_HIGH(base) \
     if (! READ_LFSDET(base) )


#define WAIT_LFSDET_LOW(base) \
    while ( READ_LFSDET(base) );


#define WAIT_LFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LFSDET(base) && (--timeout > 0) );


#define WAIT_LFSDET_HIGH(base) \
    while (! READ_LFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Asr
//
// Return the value of register ASR
//
// Notes : Register AStatus register (ASR) at the offset 0x18, Bits 16:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO level threshold 
    // 
#define FLVL_MASK 0x70000U
#define FLVL_OFFSET 18
#define FLVL_START_BIT 16
#define FLVL_WIDTH 3



typedef enum flvl {
    FLVL_0,
    FLVL_1
} FLVL_T ;
#define READ_FLVL(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & FLVL_MASK) >> FLVL_START_BIT )

#define WRITE_FLVL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~FLVL_MASK) | ((val << FLVL_START_BIT) & FLVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register Aclrfr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ACLRFR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

#define SET_BITS_ACLRFR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_ACLRFR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_ACLRFR( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register AClear flag register (ACLRFR) at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear overrun / underrun 
    // 
#define OVRUDR_MASK 0x1U
#define OVRUDR_OFFSET 0
#define OVRUDR_START_BIT 0
#define OVRUDR_WIDTH 1


#define ACLRFR_REG 0x1C

#define WRITE_OVRUDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OVRUDR_MASK) | ((val << OVRUDR_START_BIT) & OVRUDR_MASK )); \
   } 

#define ENABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OVRUDR_MASK ); \
   } 

#define DISABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OVRUDR_MASK ); \
   } 

#define READ_OVRUDR(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OVRUDR_MASK) >> OVRUDR_START_BIT )

#define WHEN_OVRUDR_HIGH(base) \
     if ( READ_OVRUDR(base) )


#define UNLESS_OVRUDR_HIGH(base) \
     if (! READ_OVRUDR(base) )


#define WAIT_OVRUDR_LOW(base) \
    while ( READ_OVRUDR(base) );


#define WAIT_OVRUDR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRUDR(base) && (--timeout > 0) );


#define WAIT_OVRUDR_HIGH(base) \
    while (! READ_OVRUDR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register AClear flag register (ACLRFR) at the offset 0x1C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute detection flag 
    // 
#define MUTEDET_MASK 0x2U
#define MUTEDET_OFFSET 1
#define MUTEDET_START_BIT 1
#define MUTEDET_WIDTH 1



#define WRITE_MUTEDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~MUTEDET_MASK) | ((val << MUTEDET_START_BIT) & MUTEDET_MASK )); \
   } 

#define ENABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  MUTEDET_MASK ); \
   } 

#define DISABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~MUTEDET_MASK ); \
   } 

#define READ_MUTEDET(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & MUTEDET_MASK) >> MUTEDET_START_BIT )

#define WHEN_MUTEDET_HIGH(base) \
     if ( READ_MUTEDET(base) )


#define UNLESS_MUTEDET_HIGH(base) \
     if (! READ_MUTEDET(base) )


#define WAIT_MUTEDET_LOW(base) \
    while ( READ_MUTEDET(base) );


#define WAIT_MUTEDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEDET(base) && (--timeout > 0) );


#define WAIT_MUTEDET_HIGH(base) \
    while (! READ_MUTEDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register AClear flag register (ACLRFR) at the offset 0x1C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear wrong clock configuration flag 
    // 
#define WCKCFG_MASK 0x4U
#define WCKCFG_OFFSET 2
#define WCKCFG_START_BIT 2
#define WCKCFG_WIDTH 1



#define WRITE_WCKCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~WCKCFG_MASK) | ((val << WCKCFG_START_BIT) & WCKCFG_MASK )); \
   } 

#define ENABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  WCKCFG_MASK ); \
   } 

#define DISABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~WCKCFG_MASK ); \
   } 

#define READ_WCKCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & WCKCFG_MASK) >> WCKCFG_START_BIT )

#define WHEN_WCKCFG_HIGH(base) \
     if ( READ_WCKCFG(base) )


#define UNLESS_WCKCFG_HIGH(base) \
     if (! READ_WCKCFG(base) )


#define WAIT_WCKCFG_LOW(base) \
    while ( READ_WCKCFG(base) );


#define WAIT_WCKCFG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WCKCFG(base) && (--timeout > 0) );


#define WAIT_WCKCFG_HIGH(base) \
    while (! READ_WCKCFG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register AClear flag register (ACLRFR) at the offset 0x1C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear codec not ready flag 
    // 
#define CNRDY_MASK 0x10U
#define CNRDY_OFFSET 4
#define CNRDY_START_BIT 4
#define CNRDY_WIDTH 1



#define WRITE_CNRDY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CNRDY_MASK) | ((val << CNRDY_START_BIT) & CNRDY_MASK )); \
   } 

#define ENABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CNRDY_MASK ); \
   } 

#define DISABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CNRDY_MASK ); \
   } 

#define READ_CNRDY(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CNRDY_MASK) >> CNRDY_START_BIT )

#define WHEN_CNRDY_HIGH(base) \
     if ( READ_CNRDY(base) )


#define UNLESS_CNRDY_HIGH(base) \
     if (! READ_CNRDY(base) )


#define WAIT_CNRDY_LOW(base) \
    while ( READ_CNRDY(base) );


#define WAIT_CNRDY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CNRDY(base) && (--timeout > 0) );


#define WAIT_CNRDY_HIGH(base) \
    while (! READ_CNRDY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register AClear flag register (ACLRFR) at the offset 0x1C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear anticipated frame synchronization detection flag. 
    // 
#define CAFSDET_MASK 0x20U
#define CAFSDET_OFFSET 5
#define CAFSDET_START_BIT 5
#define CAFSDET_WIDTH 1



typedef enum cafsdet {
    CAFSDET_0,
    CAFSDET_1
} CAFSDET_T ;
#define WRITE_CAFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CAFSDET_MASK) | ((val << CAFSDET_START_BIT) & CAFSDET_MASK )); \
   } 

#define ENABLE_CAFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CAFSDET_MASK ); \
   } 

#define DISABLE_CAFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CAFSDET_MASK ); \
   } 

#define READ_CAFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CAFSDET_MASK) >> CAFSDET_START_BIT )

#define WHEN_CAFSDET_HIGH(base) \
     if ( READ_CAFSDET(base) )


#define UNLESS_CAFSDET_HIGH(base) \
     if (! READ_CAFSDET(base) )


#define WAIT_CAFSDET_LOW(base) \
    while ( READ_CAFSDET(base) );


#define WAIT_CAFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CAFSDET(base) && (--timeout > 0) );


#define WAIT_CAFSDET_HIGH(base) \
    while (! READ_CAFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Aclrfr
//
// Return the value of register ACLRFR
//
// Notes : Register AClear flag register (ACLRFR) at the offset 0x1C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear late frame synchronization detection flag 
    // 
#define LFSDET_MASK 0x40U
#define LFSDET_OFFSET 6
#define LFSDET_START_BIT 6
#define LFSDET_WIDTH 1



#define WRITE_LFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~LFSDET_MASK) | ((val << LFSDET_START_BIT) & LFSDET_MASK )); \
   } 

#define ENABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  LFSDET_MASK ); \
   } 

#define DISABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~LFSDET_MASK ); \
   } 

#define READ_LFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & LFSDET_MASK) >> LFSDET_START_BIT )

#define WHEN_LFSDET_HIGH(base) \
     if ( READ_LFSDET(base) )


#define UNLESS_LFSDET_HIGH(base) \
     if (! READ_LFSDET(base) )


#define WAIT_LFSDET_LOW(base) \
    while ( READ_LFSDET(base) );


#define WAIT_LFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LFSDET(base) && (--timeout > 0) );


#define WAIT_LFSDET_HIGH(base) \
    while (! READ_LFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Adr
//
// Return the value of register ADR
//
// Notes : Register Adr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ADR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x20, val)

#define SET_BITS_ADR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  mask ); \
   } 

#define CLEAR_BITS_ADR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20,  val & ~mask ); \
   } 

#define READ_REGISTER_ADR( base ) \
     READ_REGISTER_ULONG( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Adr
//
// Return the value of register ADR
//
// Notes : Register AData register (ADR) at the offset 0x20, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data 
    // 
#define DATA_MASK 0xFFFFFFFFU
#define DATA_OFFSET 31
#define DATA_START_BIT 0
#define DATA_WIDTH 32


#define ADR_REG 0x20

typedef enum data {
    DATA_0,
    DATA_1
} DATA_T ;
#define READ_DATA(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & DATA_MASK) >> DATA_START_BIT )

#define WRITE_DATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~DATA_MASK) | ((val << DATA_START_BIT) & DATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR1
//
// Notes : Register Bcr1 at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x24, val)

#define SET_BITS_BCR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  mask ); \
   } 

#define CLEAR_BITS_BCR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24,  val & ~mask ); \
   } 

#define READ_REGISTER_BCR_1( base ) \
     READ_REGISTER_ULONG( base + 0x24) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Audio block mode 
    // 
#define MODE_MASK 0x3U
#define MODE_OFFSET 1
#define MODE_START_BIT 0
#define MODE_WIDTH 2


#define BCR_1_REG 0x24

#define READ_MODE(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & MODE_MASK) >> MODE_START_BIT )

#define WRITE_MODE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~MODE_MASK) | ((val << MODE_START_BIT) & MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Protocol configuration 
    // 
#define PRTCFG_MASK 0xCU
#define PRTCFG_OFFSET 3
#define PRTCFG_START_BIT 2
#define PRTCFG_WIDTH 2



#define READ_PRTCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & PRTCFG_MASK) >> PRTCFG_START_BIT )

#define WRITE_PRTCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~PRTCFG_MASK) | ((val << PRTCFG_START_BIT) & PRTCFG_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 5:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data size 
    // 
#define DS_MASK 0xE0U
#define DS_OFFSET 7
#define DS_START_BIT 5
#define DS_WIDTH 3



#define READ_DS(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & DS_MASK) >> DS_START_BIT )

#define WRITE_DS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~DS_MASK) | ((val << DS_START_BIT) & DS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Least significant bit first 
    // 
#define LSBFIRST_MASK 0x100U
#define LSBFIRST_OFFSET 8
#define LSBFIRST_START_BIT 8
#define LSBFIRST_WIDTH 1



#define WRITE_LSBFIRST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~LSBFIRST_MASK) | ((val << LSBFIRST_START_BIT) & LSBFIRST_MASK )); \
   } 

#define ENABLE_LSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  LSBFIRST_MASK ); \
   } 

#define DISABLE_LSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~LSBFIRST_MASK ); \
   } 

#define READ_LSBFIRST(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & LSBFIRST_MASK) >> LSBFIRST_START_BIT )

#define WHEN_LSBFIRST_HIGH(base) \
     if ( READ_LSBFIRST(base) )


#define UNLESS_LSBFIRST_HIGH(base) \
     if (! READ_LSBFIRST(base) )


#define WAIT_LSBFIRST_LOW(base) \
    while ( READ_LSBFIRST(base) );


#define WAIT_LSBFIRST_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LSBFIRST(base) && (--timeout > 0) );


#define WAIT_LSBFIRST_HIGH(base) \
    while (! READ_LSBFIRST(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock strobing edge 
    // 
#define CKSTR_MASK 0x200U
#define CKSTR_OFFSET 9
#define CKSTR_START_BIT 9
#define CKSTR_WIDTH 1



#define WRITE_CKSTR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~CKSTR_MASK) | ((val << CKSTR_START_BIT) & CKSTR_MASK )); \
   } 

#define ENABLE_CKSTR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  CKSTR_MASK ); \
   } 

#define DISABLE_CKSTR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~CKSTR_MASK ); \
   } 

#define READ_CKSTR(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & CKSTR_MASK) >> CKSTR_START_BIT )

#define WHEN_CKSTR_HIGH(base) \
     if ( READ_CKSTR(base) )


#define UNLESS_CKSTR_HIGH(base) \
     if (! READ_CKSTR(base) )


#define WAIT_CKSTR_LOW(base) \
    while ( READ_CKSTR(base) );


#define WAIT_CKSTR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CKSTR(base) && (--timeout > 0) );


#define WAIT_CKSTR_HIGH(base) \
    while (! READ_CKSTR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronization enable 
    // 
#define SYNCEN_MASK 0xC00U
#define SYNCEN_OFFSET 11
#define SYNCEN_START_BIT 10
#define SYNCEN_WIDTH 2



#define READ_SYNCEN(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & SYNCEN_MASK) >> SYNCEN_START_BIT )

#define WRITE_SYNCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~SYNCEN_MASK) | ((val << SYNCEN_START_BIT) & SYNCEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mono mode 
    // 
#define MONO_MASK 0x1000U
#define MONO_OFFSET 12
#define MONO_START_BIT 12
#define MONO_WIDTH 1



#define WRITE_MONO(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~MONO_MASK) | ((val << MONO_START_BIT) & MONO_MASK )); \
   } 

#define ENABLE_MONO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  MONO_MASK ); \
   } 

#define DISABLE_MONO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~MONO_MASK ); \
   } 

#define READ_MONO(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & MONO_MASK) >> MONO_START_BIT )

#define WHEN_MONO_HIGH(base) \
     if ( READ_MONO(base) )


#define UNLESS_MONO_HIGH(base) \
     if (! READ_MONO(base) )


#define WAIT_MONO_LOW(base) \
    while ( READ_MONO(base) );


#define WAIT_MONO_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MONO(base) && (--timeout > 0) );


#define WAIT_MONO_HIGH(base) \
    while (! READ_MONO(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output drive 
    // 
#define OUTDRI_MASK 0x2000U
#define OUTDRI_OFFSET 13
#define OUTDRI_START_BIT 13
#define OUTDRI_WIDTH 1



#define WRITE_OUTDRI(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~OUTDRI_MASK) | ((val << OUTDRI_START_BIT) & OUTDRI_MASK )); \
   } 

#define ENABLE_OUTDRI(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  OUTDRI_MASK ); \
   } 

#define DISABLE_OUTDRI(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~OUTDRI_MASK ); \
   } 

#define READ_OUTDRI(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & OUTDRI_MASK) >> OUTDRI_START_BIT )

#define WHEN_OUTDRI_HIGH(base) \
     if ( READ_OUTDRI(base) )


#define UNLESS_OUTDRI_HIGH(base) \
     if (! READ_OUTDRI(base) )


#define WAIT_OUTDRI_LOW(base) \
    while ( READ_OUTDRI(base) );


#define WAIT_OUTDRI_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OUTDRI(base) && (--timeout > 0) );


#define WAIT_OUTDRI_HIGH(base) \
    while (! READ_OUTDRI(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Audio block B enable 
    // 
#define SAIBEN_MASK 0x10000U
#define SAIBEN_OFFSET 16
#define SAIBEN_START_BIT 16
#define SAIBEN_WIDTH 1



typedef enum saiben {
    SAIBEN_0,
    SAIBEN_1
} SAIBEN_T ;
#define WRITE_SAIBEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~SAIBEN_MASK) | ((val << SAIBEN_START_BIT) & SAIBEN_MASK )); \
   } 

#define ENABLE_SAIBEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  SAIBEN_MASK ); \
   } 

#define DISABLE_SAIBEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~SAIBEN_MASK ); \
   } 

#define READ_SAIBEN(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & SAIBEN_MASK) >> SAIBEN_START_BIT )

#define WHEN_SAIBEN_HIGH(base) \
     if ( READ_SAIBEN(base) )


#define UNLESS_SAIBEN_HIGH(base) \
     if (! READ_SAIBEN(base) )


#define WAIT_SAIBEN_LOW(base) \
    while ( READ_SAIBEN(base) );


#define WAIT_SAIBEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SAIBEN(base) && (--timeout > 0) );


#define WAIT_SAIBEN_HIGH(base) \
    while (! READ_SAIBEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable 
    // 
#define DMAEN_MASK 0x20000U
#define DMAEN_OFFSET 17
#define DMAEN_START_BIT 17
#define DMAEN_WIDTH 1



#define WRITE_DMAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~DMAEN_MASK) | ((val << DMAEN_START_BIT) & DMAEN_MASK )); \
   } 

#define ENABLE_DMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  DMAEN_MASK ); \
   } 

#define DISABLE_DMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~DMAEN_MASK ); \
   } 

#define READ_DMAEN(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & DMAEN_MASK) >> DMAEN_START_BIT )

#define WHEN_DMAEN_HIGH(base) \
     if ( READ_DMAEN(base) )


#define UNLESS_DMAEN_HIGH(base) \
     if (! READ_DMAEN(base) )


#define WAIT_DMAEN_LOW(base) \
    while ( READ_DMAEN(base) );


#define WAIT_DMAEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMAEN(base) && (--timeout > 0) );


#define WAIT_DMAEN_HIGH(base) \
    while (! READ_DMAEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // No divider 
    // 
#define NODIV_MASK 0x80000U
#define NODIV_OFFSET 19
#define NODIV_START_BIT 19
#define NODIV_WIDTH 1



#define WRITE_NODIV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~NODIV_MASK) | ((val << NODIV_START_BIT) & NODIV_MASK )); \
   } 

#define ENABLE_NODIV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  NODIV_MASK ); \
   } 

#define DISABLE_NODIV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x24 ); \
     WRITE_REGISTER_ULONG( base + 0x24, val & ~NODIV_MASK ); \
   } 

#define READ_NODIV(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & NODIV_MASK) >> NODIV_START_BIT )

#define WHEN_NODIV_HIGH(base) \
     if ( READ_NODIV(base) )


#define UNLESS_NODIV_HIGH(base) \
     if (! READ_NODIV(base) )


#define WAIT_NODIV_LOW(base) \
    while ( READ_NODIV(base) );


#define WAIT_NODIV_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NODIV(base) && (--timeout > 0) );


#define WAIT_NODIV_HIGH(base) \
    while (! READ_NODIV(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR_1
//
// Notes : Register BConfiguration register 1 (BCR1) at the offset 0x24, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Master clock divider 
    // 
#define MCJDIV_MASK 0xF00000U
#define MCJDIV_OFFSET 23
#define MCJDIV_START_BIT 20
#define MCJDIV_WIDTH 4



#define READ_MCJDIV(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & MCJDIV_MASK) >> MCJDIV_START_BIT )

#define WRITE_MCJDIV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~MCJDIV_MASK) | ((val << MCJDIV_START_BIT) & MCJDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR2
//
// Notes : Register Bcr2 at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x28, val)

#define SET_BITS_BCR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_BCR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_BCR_2( base ) \
     READ_REGISTER_ULONG( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold 
    // 
#define FTH_MASK 0x7U
#define FTH_OFFSET 2
#define FTH_START_BIT 0
#define FTH_WIDTH 3


#define BCR_2_REG 0x28

#define READ_FTH(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & FTH_MASK) >> FTH_START_BIT )

#define WRITE_FTH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO flush 
    // 
#define FFLUS_MASK 0x8U
#define FFLUS_OFFSET 3
#define FFLUS_START_BIT 3
#define FFLUS_WIDTH 1



#define WRITE_FFLUS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~FFLUS_MASK) | ((val << FFLUS_START_BIT) & FFLUS_MASK )); \
   } 

#define ENABLE_FFLUS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  FFLUS_MASK ); \
   } 

#define DISABLE_FFLUS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~FFLUS_MASK ); \
   } 

#define READ_FFLUS(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & FFLUS_MASK) >> FFLUS_START_BIT )

#define WHEN_FFLUS_HIGH(base) \
     if ( READ_FFLUS(base) )


#define UNLESS_FFLUS_HIGH(base) \
     if (! READ_FFLUS(base) )


#define WAIT_FFLUS_LOW(base) \
    while ( READ_FFLUS(base) );


#define WAIT_FFLUS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FFLUS(base) && (--timeout > 0) );


#define WAIT_FFLUS_HIGH(base) \
    while (! READ_FFLUS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tristate management on data line 
    // 
#define TRIS_MASK 0x10U
#define TRIS_OFFSET 4
#define TRIS_START_BIT 4
#define TRIS_WIDTH 1



#define WRITE_TRIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~TRIS_MASK) | ((val << TRIS_START_BIT) & TRIS_MASK )); \
   } 

#define ENABLE_TRIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  TRIS_MASK ); \
   } 

#define DISABLE_TRIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~TRIS_MASK ); \
   } 

#define READ_TRIS(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & TRIS_MASK) >> TRIS_START_BIT )

#define WHEN_TRIS_HIGH(base) \
     if ( READ_TRIS(base) )


#define UNLESS_TRIS_HIGH(base) \
     if (! READ_TRIS(base) )


#define WAIT_TRIS_LOW(base) \
    while ( READ_TRIS(base) );


#define WAIT_TRIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TRIS(base) && (--timeout > 0) );


#define WAIT_TRIS_HIGH(base) \
    while (! READ_TRIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute 
    // 
#define MUTE_MASK 0x20U
#define MUTE_OFFSET 5
#define MUTE_START_BIT 5
#define MUTE_WIDTH 1



#define WRITE_MUTE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~MUTE_MASK) | ((val << MUTE_START_BIT) & MUTE_MASK )); \
   } 

#define ENABLE_MUTE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  MUTE_MASK ); \
   } 

#define DISABLE_MUTE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~MUTE_MASK ); \
   } 

#define READ_MUTE(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & MUTE_MASK) >> MUTE_START_BIT )

#define WHEN_MUTE_HIGH(base) \
     if ( READ_MUTE(base) )


#define UNLESS_MUTE_HIGH(base) \
     if (! READ_MUTE(base) )


#define WAIT_MUTE_LOW(base) \
    while ( READ_MUTE(base) );


#define WAIT_MUTE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTE(base) && (--timeout > 0) );


#define WAIT_MUTE_HIGH(base) \
    while (! READ_MUTE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute value 
    // 
#define MUTEVAL_MASK 0x40U
#define MUTEVAL_OFFSET 6
#define MUTEVAL_START_BIT 6
#define MUTEVAL_WIDTH 1



#define WRITE_MUTEVAL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~MUTEVAL_MASK) | ((val << MUTEVAL_START_BIT) & MUTEVAL_MASK )); \
   } 

#define ENABLE_MUTEVAL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  MUTEVAL_MASK ); \
   } 

#define DISABLE_MUTEVAL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~MUTEVAL_MASK ); \
   } 

#define READ_MUTEVAL(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & MUTEVAL_MASK) >> MUTEVAL_START_BIT )

#define WHEN_MUTEVAL_HIGH(base) \
     if ( READ_MUTEVAL(base) )


#define UNLESS_MUTEVAL_HIGH(base) \
     if (! READ_MUTEVAL(base) )


#define WAIT_MUTEVAL_LOW(base) \
    while ( READ_MUTEVAL(base) );


#define WAIT_MUTEVAL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEVAL(base) && (--timeout > 0) );


#define WAIT_MUTEVAL_HIGH(base) \
    while (! READ_MUTEVAL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 7:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute counter 
    // 
#define MUTECN_MASK 0x1F80U
#define MUTECN_OFFSET 12
#define MUTECN_START_BIT 7
#define MUTECN_WIDTH 6



#define READ_MUTECN(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & MUTECN_MASK) >> MUTECN_START_BIT )

#define WRITE_MUTECN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~MUTECN_MASK) | ((val << MUTECN_START_BIT) & MUTECN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Complement bit 
    // 
#define CPL_MASK 0x2000U
#define CPL_OFFSET 13
#define CPL_START_BIT 13
#define CPL_WIDTH 1



#define WRITE_CPL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~CPL_MASK) | ((val << CPL_START_BIT) & CPL_MASK )); \
   } 

#define ENABLE_CPL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  CPL_MASK ); \
   } 

#define DISABLE_CPL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x28 ); \
     WRITE_REGISTER_ULONG( base + 0x28, val & ~CPL_MASK ); \
   } 

#define READ_CPL(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & CPL_MASK) >> CPL_START_BIT )

#define WHEN_CPL_HIGH(base) \
     if ( READ_CPL(base) )


#define UNLESS_CPL_HIGH(base) \
     if (! READ_CPL(base) )


#define WAIT_CPL_LOW(base) \
    while ( READ_CPL(base) );


#define WAIT_CPL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CPL(base) && (--timeout > 0) );


#define WAIT_CPL_HIGH(base) \
    while (! READ_CPL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR_2
//
// Notes : Register BConfiguration register 2 (BCR2) at the offset 0x28, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Companding mode 
    // 
#define COMP_MASK 0xC000U
#define COMP_OFFSET 15
#define COMP_START_BIT 14
#define COMP_WIDTH 2



#define READ_COMP(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & COMP_MASK) >> COMP_START_BIT )

#define WRITE_COMP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~COMP_MASK) | ((val << COMP_START_BIT) & COMP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bfrcr
//
// Return the value of register BFRCR
//
// Notes : Register Bfrcr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BFRCR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x2C, val)

#define SET_BITS_BFRCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  mask ); \
   } 

#define CLEAR_BITS_BFRCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C,  val & ~mask ); \
   } 

#define READ_REGISTER_BFRCR( base ) \
     READ_REGISTER_ULONG( base + 0x2C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bfrcr
//
// Return the value of register BFRCR
//
// Notes : Register BFRCR (BFRCR) at the offset 0x2C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame length 
    // 
#define FRL_MASK 0xFFU
#define FRL_OFFSET 7
#define FRL_START_BIT 0
#define FRL_WIDTH 8


#define BFRCR_REG 0x2C

#define READ_FRL(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & FRL_MASK) >> FRL_START_BIT )

#define WRITE_FRL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~FRL_MASK) | ((val << FRL_START_BIT) & FRL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bfrcr
//
// Return the value of register BFRCR
//
// Notes : Register BFRCR (BFRCR) at the offset 0x2C, Bits 8:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization active level length 
    // 
#define FSALL_MASK 0x7F00U
#define FSALL_OFFSET 14
#define FSALL_START_BIT 8
#define FSALL_WIDTH 7



#define READ_FSALL(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & FSALL_MASK) >> FSALL_START_BIT )

#define WRITE_FSALL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~FSALL_MASK) | ((val << FSALL_START_BIT) & FSALL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bfrcr
//
// Return the value of register BFRCR
//
// Notes : Register BFRCR (BFRCR) at the offset 0x2C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization definition 
    // 
#define FSDEF_MASK 0x10000U
#define FSDEF_OFFSET 16
#define FSDEF_START_BIT 16
#define FSDEF_WIDTH 1



#define WRITE_FSDEF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~FSDEF_MASK) | ((val << FSDEF_START_BIT) & FSDEF_MASK )); \
   } 

#define ENABLE_FSDEF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  FSDEF_MASK ); \
   } 

#define DISABLE_FSDEF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x2C ); \
     WRITE_REGISTER_ULONG( base + 0x2C, val & ~FSDEF_MASK ); \
   } 

#define READ_FSDEF(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & FSDEF_MASK) >> FSDEF_START_BIT )

#define WHEN_FSDEF_HIGH(base) \
     if ( READ_FSDEF(base) )


#define UNLESS_FSDEF_HIGH(base) \
     if (! READ_FSDEF(base) )


#define WAIT_FSDEF_LOW(base) \
    while ( READ_FSDEF(base) );


#define WAIT_FSDEF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FSDEF(base) && (--timeout > 0) );


#define WAIT_FSDEF_HIGH(base) \
    while (! READ_FSDEF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bfrcr
//
// Return the value of register BFRCR
//
// Notes : Register BFRCR (BFRCR) at the offset 0x2C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization polarity 
    // 
#define FSPOL_MASK 0x20000U
#define FSPOL_OFFSET 17
#define FSPOL_START_BIT 17
#define FSPOL_WIDTH 1



#define WRITE_FSPOL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~FSPOL_MASK) | ((val << FSPOL_START_BIT) & FSPOL_MASK )); \
   } 

#define ENABLE_FSPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  FSPOL_MASK ); \
   } 

#define DISABLE_FSPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x2C ); \
     WRITE_REGISTER_ULONG( base + 0x2C, val & ~FSPOL_MASK ); \
   } 

#define READ_FSPOL(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & FSPOL_MASK) >> FSPOL_START_BIT )

#define WHEN_FSPOL_HIGH(base) \
     if ( READ_FSPOL(base) )


#define UNLESS_FSPOL_HIGH(base) \
     if (! READ_FSPOL(base) )


#define WAIT_FSPOL_LOW(base) \
    while ( READ_FSPOL(base) );


#define WAIT_FSPOL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FSPOL(base) && (--timeout > 0) );


#define WAIT_FSPOL_HIGH(base) \
    while (! READ_FSPOL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bfrcr
//
// Return the value of register BFRCR
//
// Notes : Register BFRCR (BFRCR) at the offset 0x2C, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame synchronization offset 
    // 
#define FSOFF_MASK 0x40000U
#define FSOFF_OFFSET 18
#define FSOFF_START_BIT 18
#define FSOFF_WIDTH 1



#define WRITE_FSOFF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~FSOFF_MASK) | ((val << FSOFF_START_BIT) & FSOFF_MASK )); \
   } 

#define ENABLE_FSOFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  FSOFF_MASK ); \
   } 

#define DISABLE_FSOFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x2C ); \
     WRITE_REGISTER_ULONG( base + 0x2C, val & ~FSOFF_MASK ); \
   } 

#define READ_FSOFF(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & FSOFF_MASK) >> FSOFF_START_BIT )

#define WHEN_FSOFF_HIGH(base) \
     if ( READ_FSOFF(base) )


#define UNLESS_FSOFF_HIGH(base) \
     if (! READ_FSOFF(base) )


#define WAIT_FSOFF_LOW(base) \
    while ( READ_FSOFF(base) );


#define WAIT_FSOFF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FSOFF(base) && (--timeout > 0) );


#define WAIT_FSOFF_HIGH(base) \
    while (! READ_FSOFF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bslotr
//
// Return the value of register BSLOTR
//
// Notes : Register Bslotr at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BSLOTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x30, val)

#define SET_BITS_BSLOTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, val |  mask ); \
   } 

#define CLEAR_BITS_BSLOTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30,  val & ~mask ); \
   } 

#define READ_REGISTER_BSLOTR( base ) \
     READ_REGISTER_ULONG( base + 0x30) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bslotr
//
// Return the value of register BSLOTR
//
// Notes : Register BSlot register (BSLOTR) at the offset 0x30, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // First bit offset 
    // 
#define FBOFF_MASK 0x1FU
#define FBOFF_OFFSET 4
#define FBOFF_START_BIT 0
#define FBOFF_WIDTH 5


#define BSLOTR_REG 0x30

#define READ_FBOFF(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & FBOFF_MASK) >> FBOFF_START_BIT )

#define WRITE_FBOFF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~FBOFF_MASK) | ((val << FBOFF_START_BIT) & FBOFF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bslotr
//
// Return the value of register BSLOTR
//
// Notes : Register BSlot register (BSLOTR) at the offset 0x30, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Slot size 
    // 
#define SLOTSZ_MASK 0xC0U
#define SLOTSZ_OFFSET 7
#define SLOTSZ_START_BIT 6
#define SLOTSZ_WIDTH 2



#define READ_SLOTSZ(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SLOTSZ_MASK) >> SLOTSZ_START_BIT )

#define WRITE_SLOTSZ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SLOTSZ_MASK) | ((val << SLOTSZ_START_BIT) & SLOTSZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bslotr
//
// Return the value of register BSLOTR
//
// Notes : Register BSlot register (BSLOTR) at the offset 0x30, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of slots in an audio frame 
    // 
#define NBSLOT_MASK 0xF00U
#define NBSLOT_OFFSET 11
#define NBSLOT_START_BIT 8
#define NBSLOT_WIDTH 4



#define READ_NBSLOT(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & NBSLOT_MASK) >> NBSLOT_START_BIT )

#define WRITE_NBSLOT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~NBSLOT_MASK) | ((val << NBSLOT_START_BIT) & NBSLOT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bslotr
//
// Return the value of register BSLOTR
//
// Notes : Register BSlot register (BSLOTR) at the offset 0x30, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Slot enable 
    // 
#define SLOTEN_MASK 0xFFFF0000U
#define SLOTEN_OFFSET 31
#define SLOTEN_START_BIT 16
#define SLOTEN_WIDTH 16



#define READ_SLOTEN(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SLOTEN_MASK) >> SLOTEN_START_BIT )

#define WRITE_SLOTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SLOTEN_MASK) | ((val << SLOTEN_START_BIT) & SLOTEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register Bim at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BIM( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x34, val)

#define SET_BITS_BIM(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  mask ); \
   } 

#define CLEAR_BITS_BIM(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34,  val & ~mask ); \
   } 

#define READ_REGISTER_BIM( base ) \
     READ_REGISTER_ULONG( base + 0x34) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun/underrun interrupt enable 
    // 
#define OVRUDRIE_MASK 0x1U
#define OVRUDRIE_OFFSET 0
#define OVRUDRIE_START_BIT 0
#define OVRUDRIE_WIDTH 1


#define BIM_REG 0x34

#define WRITE_OVRUDRIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~OVRUDRIE_MASK) | ((val << OVRUDRIE_START_BIT) & OVRUDRIE_MASK )); \
   } 

#define ENABLE_OVRUDRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  OVRUDRIE_MASK ); \
   } 

#define DISABLE_OVRUDRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~OVRUDRIE_MASK ); \
   } 

#define READ_OVRUDRIE(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & OVRUDRIE_MASK) >> OVRUDRIE_START_BIT )

#define WHEN_OVRUDRIE_HIGH(base) \
     if ( READ_OVRUDRIE(base) )


#define UNLESS_OVRUDRIE_HIGH(base) \
     if (! READ_OVRUDRIE(base) )


#define WAIT_OVRUDRIE_LOW(base) \
    while ( READ_OVRUDRIE(base) );


#define WAIT_OVRUDRIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRUDRIE(base) && (--timeout > 0) );


#define WAIT_OVRUDRIE_HIGH(base) \
    while (! READ_OVRUDRIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute detection interrupt enable 
    // 
#define MUTEDET_MASK 0x2U
#define MUTEDET_OFFSET 1
#define MUTEDET_START_BIT 1
#define MUTEDET_WIDTH 1



#define WRITE_MUTEDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~MUTEDET_MASK) | ((val << MUTEDET_START_BIT) & MUTEDET_MASK )); \
   } 

#define ENABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  MUTEDET_MASK ); \
   } 

#define DISABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~MUTEDET_MASK ); \
   } 

#define READ_MUTEDET(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & MUTEDET_MASK) >> MUTEDET_START_BIT )

#define WHEN_MUTEDET_HIGH(base) \
     if ( READ_MUTEDET(base) )


#define UNLESS_MUTEDET_HIGH(base) \
     if (! READ_MUTEDET(base) )


#define WAIT_MUTEDET_LOW(base) \
    while ( READ_MUTEDET(base) );


#define WAIT_MUTEDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEDET(base) && (--timeout > 0) );


#define WAIT_MUTEDET_HIGH(base) \
    while (! READ_MUTEDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wrong clock configuration interrupt enable 
    // 
#define WCKCFG_MASK 0x4U
#define WCKCFG_OFFSET 2
#define WCKCFG_START_BIT 2
#define WCKCFG_WIDTH 1



#define WRITE_WCKCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~WCKCFG_MASK) | ((val << WCKCFG_START_BIT) & WCKCFG_MASK )); \
   } 

#define ENABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  WCKCFG_MASK ); \
   } 

#define DISABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~WCKCFG_MASK ); \
   } 

#define READ_WCKCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & WCKCFG_MASK) >> WCKCFG_START_BIT )

#define WHEN_WCKCFG_HIGH(base) \
     if ( READ_WCKCFG(base) )


#define UNLESS_WCKCFG_HIGH(base) \
     if (! READ_WCKCFG(base) )


#define WAIT_WCKCFG_LOW(base) \
    while ( READ_WCKCFG(base) );


#define WAIT_WCKCFG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WCKCFG(base) && (--timeout > 0) );


#define WAIT_WCKCFG_HIGH(base) \
    while (! READ_WCKCFG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO request interrupt enable 
    // 
#define FREQIE_MASK 0x8U
#define FREQIE_OFFSET 3
#define FREQIE_START_BIT 3
#define FREQIE_WIDTH 1



#define WRITE_FREQIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~FREQIE_MASK) | ((val << FREQIE_START_BIT) & FREQIE_MASK )); \
   } 

#define ENABLE_FREQIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  FREQIE_MASK ); \
   } 

#define DISABLE_FREQIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~FREQIE_MASK ); \
   } 

#define READ_FREQIE(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & FREQIE_MASK) >> FREQIE_START_BIT )

#define WHEN_FREQIE_HIGH(base) \
     if ( READ_FREQIE(base) )


#define UNLESS_FREQIE_HIGH(base) \
     if (! READ_FREQIE(base) )


#define WAIT_FREQIE_LOW(base) \
    while ( READ_FREQIE(base) );


#define WAIT_FREQIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FREQIE(base) && (--timeout > 0) );


#define WAIT_FREQIE_HIGH(base) \
    while (! READ_FREQIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Codec not ready interrupt enable 
    // 
#define CNRDYIE_MASK 0x10U
#define CNRDYIE_OFFSET 4
#define CNRDYIE_START_BIT 4
#define CNRDYIE_WIDTH 1



#define WRITE_CNRDYIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~CNRDYIE_MASK) | ((val << CNRDYIE_START_BIT) & CNRDYIE_MASK )); \
   } 

#define ENABLE_CNRDYIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  CNRDYIE_MASK ); \
   } 

#define DISABLE_CNRDYIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~CNRDYIE_MASK ); \
   } 

#define READ_CNRDYIE(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & CNRDYIE_MASK) >> CNRDYIE_START_BIT )

#define WHEN_CNRDYIE_HIGH(base) \
     if ( READ_CNRDYIE(base) )


#define UNLESS_CNRDYIE_HIGH(base) \
     if (! READ_CNRDYIE(base) )


#define WAIT_CNRDYIE_LOW(base) \
    while ( READ_CNRDYIE(base) );


#define WAIT_CNRDYIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CNRDYIE(base) && (--timeout > 0) );


#define WAIT_CNRDYIE_HIGH(base) \
    while (! READ_CNRDYIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Anticipated frame synchronization detection interrupt 
    // enable 
    // 
#define AFSDETIE_MASK 0x20U
#define AFSDETIE_OFFSET 5
#define AFSDETIE_START_BIT 5
#define AFSDETIE_WIDTH 1



#define WRITE_AFSDETIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~AFSDETIE_MASK) | ((val << AFSDETIE_START_BIT) & AFSDETIE_MASK )); \
   } 

#define ENABLE_AFSDETIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  AFSDETIE_MASK ); \
   } 

#define DISABLE_AFSDETIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~AFSDETIE_MASK ); \
   } 

#define READ_AFSDETIE(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & AFSDETIE_MASK) >> AFSDETIE_START_BIT )

#define WHEN_AFSDETIE_HIGH(base) \
     if ( READ_AFSDETIE(base) )


#define UNLESS_AFSDETIE_HIGH(base) \
     if (! READ_AFSDETIE(base) )


#define WAIT_AFSDETIE_LOW(base) \
    while ( READ_AFSDETIE(base) );


#define WAIT_AFSDETIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AFSDETIE(base) && (--timeout > 0) );


#define WAIT_AFSDETIE_HIGH(base) \
    while (! READ_AFSDETIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bim
//
// Return the value of register BIM
//
// Notes : Register BInterrupt mask register2 (BIM) at the offset 0x34, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Late frame synchronization detection interrupt enable 
    // 
#define LFSDETIE_MASK 0x40U
#define LFSDETIE_OFFSET 6
#define LFSDETIE_START_BIT 6
#define LFSDETIE_WIDTH 1



typedef enum lfsdetie {
    LFSDETIE_0,
    LFSDETIE_1
} LFSDETIE_T ;
#define WRITE_LFSDETIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~LFSDETIE_MASK) | ((val << LFSDETIE_START_BIT) & LFSDETIE_MASK )); \
   } 

#define ENABLE_LFSDETIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  LFSDETIE_MASK ); \
   } 

#define DISABLE_LFSDETIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x34 ); \
     WRITE_REGISTER_ULONG( base + 0x34, val & ~LFSDETIE_MASK ); \
   } 

#define READ_LFSDETIE(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & LFSDETIE_MASK) >> LFSDETIE_START_BIT )

#define WHEN_LFSDETIE_HIGH(base) \
     if ( READ_LFSDETIE(base) )


#define UNLESS_LFSDETIE_HIGH(base) \
     if (! READ_LFSDETIE(base) )


#define WAIT_LFSDETIE_LOW(base) \
    while ( READ_LFSDETIE(base) );


#define WAIT_LFSDETIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LFSDETIE(base) && (--timeout > 0) );


#define WAIT_LFSDETIE_HIGH(base) \
    while (! READ_LFSDETIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register Bsr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_BSR( base ) \
     READ_REGISTER_ULONG( base + 0x38) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun / underrun 
    // 
#define OVRUDR_MASK 0x1U
#define OVRUDR_OFFSET 0
#define OVRUDR_START_BIT 0
#define OVRUDR_WIDTH 1


#define BSR_REG 0x38

#define WRITE_OVRUDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~OVRUDR_MASK) | ((val << OVRUDR_START_BIT) & OVRUDR_MASK )); \
   } 

#define ENABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  OVRUDR_MASK ); \
   } 

#define DISABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~OVRUDR_MASK ); \
   } 

#define READ_OVRUDR(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & OVRUDR_MASK) >> OVRUDR_START_BIT )

#define WHEN_OVRUDR_HIGH(base) \
     if ( READ_OVRUDR(base) )


#define UNLESS_OVRUDR_HIGH(base) \
     if (! READ_OVRUDR(base) )


#define WAIT_OVRUDR_LOW(base) \
    while ( READ_OVRUDR(base) );


#define WAIT_OVRUDR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRUDR(base) && (--timeout > 0) );


#define WAIT_OVRUDR_HIGH(base) \
    while (! READ_OVRUDR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute detection 
    // 
#define MUTEDET_MASK 0x2U
#define MUTEDET_OFFSET 1
#define MUTEDET_START_BIT 1
#define MUTEDET_WIDTH 1



#define WRITE_MUTEDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~MUTEDET_MASK) | ((val << MUTEDET_START_BIT) & MUTEDET_MASK )); \
   } 

#define ENABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  MUTEDET_MASK ); \
   } 

#define DISABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~MUTEDET_MASK ); \
   } 

#define READ_MUTEDET(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & MUTEDET_MASK) >> MUTEDET_START_BIT )

#define WHEN_MUTEDET_HIGH(base) \
     if ( READ_MUTEDET(base) )


#define UNLESS_MUTEDET_HIGH(base) \
     if (! READ_MUTEDET(base) )


#define WAIT_MUTEDET_LOW(base) \
    while ( READ_MUTEDET(base) );


#define WAIT_MUTEDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEDET(base) && (--timeout > 0) );


#define WAIT_MUTEDET_HIGH(base) \
    while (! READ_MUTEDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wrong clock configuration flag 
    // 
#define WCKCFG_MASK 0x4U
#define WCKCFG_OFFSET 2
#define WCKCFG_START_BIT 2
#define WCKCFG_WIDTH 1



#define WRITE_WCKCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~WCKCFG_MASK) | ((val << WCKCFG_START_BIT) & WCKCFG_MASK )); \
   } 

#define ENABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  WCKCFG_MASK ); \
   } 

#define DISABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~WCKCFG_MASK ); \
   } 

#define READ_WCKCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & WCKCFG_MASK) >> WCKCFG_START_BIT )

#define WHEN_WCKCFG_HIGH(base) \
     if ( READ_WCKCFG(base) )


#define UNLESS_WCKCFG_HIGH(base) \
     if (! READ_WCKCFG(base) )


#define WAIT_WCKCFG_LOW(base) \
    while ( READ_WCKCFG(base) );


#define WAIT_WCKCFG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WCKCFG(base) && (--timeout > 0) );


#define WAIT_WCKCFG_HIGH(base) \
    while (! READ_WCKCFG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO request 
    // 
#define FREQ_MASK 0x8U
#define FREQ_OFFSET 3
#define FREQ_START_BIT 3
#define FREQ_WIDTH 1



#define WRITE_FREQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~FREQ_MASK) | ((val << FREQ_START_BIT) & FREQ_MASK )); \
   } 

#define ENABLE_FREQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  FREQ_MASK ); \
   } 

#define DISABLE_FREQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~FREQ_MASK ); \
   } 

#define READ_FREQ(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & FREQ_MASK) >> FREQ_START_BIT )

#define WHEN_FREQ_HIGH(base) \
     if ( READ_FREQ(base) )


#define UNLESS_FREQ_HIGH(base) \
     if (! READ_FREQ(base) )


#define WAIT_FREQ_LOW(base) \
    while ( READ_FREQ(base) );


#define WAIT_FREQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FREQ(base) && (--timeout > 0) );


#define WAIT_FREQ_HIGH(base) \
    while (! READ_FREQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Codec not ready 
    // 
#define CNRDY_MASK 0x10U
#define CNRDY_OFFSET 4
#define CNRDY_START_BIT 4
#define CNRDY_WIDTH 1



#define WRITE_CNRDY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~CNRDY_MASK) | ((val << CNRDY_START_BIT) & CNRDY_MASK )); \
   } 

#define ENABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  CNRDY_MASK ); \
   } 

#define DISABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~CNRDY_MASK ); \
   } 

#define READ_CNRDY(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & CNRDY_MASK) >> CNRDY_START_BIT )

#define WHEN_CNRDY_HIGH(base) \
     if ( READ_CNRDY(base) )


#define UNLESS_CNRDY_HIGH(base) \
     if (! READ_CNRDY(base) )


#define WAIT_CNRDY_LOW(base) \
    while ( READ_CNRDY(base) );


#define WAIT_CNRDY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CNRDY(base) && (--timeout > 0) );


#define WAIT_CNRDY_HIGH(base) \
    while (! READ_CNRDY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Anticipated frame synchronization detection 
    // 
#define AFSDET_MASK 0x20U
#define AFSDET_OFFSET 5
#define AFSDET_START_BIT 5
#define AFSDET_WIDTH 1



#define WRITE_AFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~AFSDET_MASK) | ((val << AFSDET_START_BIT) & AFSDET_MASK )); \
   } 

#define ENABLE_AFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  AFSDET_MASK ); \
   } 

#define DISABLE_AFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~AFSDET_MASK ); \
   } 

#define READ_AFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & AFSDET_MASK) >> AFSDET_START_BIT )

#define WHEN_AFSDET_HIGH(base) \
     if ( READ_AFSDET(base) )


#define UNLESS_AFSDET_HIGH(base) \
     if (! READ_AFSDET(base) )


#define WAIT_AFSDET_LOW(base) \
    while ( READ_AFSDET(base) );


#define WAIT_AFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AFSDET(base) && (--timeout > 0) );


#define WAIT_AFSDET_HIGH(base) \
    while (! READ_AFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Late frame synchronization detection 
    // 
#define LFSDET_MASK 0x40U
#define LFSDET_OFFSET 6
#define LFSDET_START_BIT 6
#define LFSDET_WIDTH 1



#define WRITE_LFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~LFSDET_MASK) | ((val << LFSDET_START_BIT) & LFSDET_MASK )); \
   } 

#define ENABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  LFSDET_MASK ); \
   } 

#define DISABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x38 ); \
     WRITE_REGISTER_ULONG( base + 0x38, val & ~LFSDET_MASK ); \
   } 

#define READ_LFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & LFSDET_MASK) >> LFSDET_START_BIT )

#define WHEN_LFSDET_HIGH(base) \
     if ( READ_LFSDET(base) )


#define UNLESS_LFSDET_HIGH(base) \
     if (! READ_LFSDET(base) )


#define WAIT_LFSDET_LOW(base) \
    while ( READ_LFSDET(base) );


#define WAIT_LFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LFSDET(base) && (--timeout > 0) );


#define WAIT_LFSDET_HIGH(base) \
    while (! READ_LFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bsr
//
// Return the value of register BSR
//
// Notes : Register BStatus register (BSR) at the offset 0x38, Bits 16:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO level threshold 
    // 
#define FLVL_MASK 0x70000U
#define FLVL_OFFSET 18
#define FLVL_START_BIT 16
#define FLVL_WIDTH 3



#define READ_FLVL(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & FLVL_MASK) >> FLVL_START_BIT )

#define WRITE_FLVL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~FLVL_MASK) | ((val << FLVL_START_BIT) & FLVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register Bclrfr at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCLRFR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x3C, val)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register BClear flag register (BCLRFR) at the offset 0x3C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear overrun / underrun 
    // 
#define OVRUDR_MASK 0x1U
#define OVRUDR_OFFSET 0
#define OVRUDR_START_BIT 0
#define OVRUDR_WIDTH 1


#define BCLRFR_REG 0x3C

#define WRITE_OVRUDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~OVRUDR_MASK) | ((val << OVRUDR_START_BIT) & OVRUDR_MASK )); \
   } 

#define ENABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  OVRUDR_MASK ); \
   } 

#define DISABLE_OVRUDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~OVRUDR_MASK ); \
   } 

#define READ_OVRUDR(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & OVRUDR_MASK) >> OVRUDR_START_BIT )

#define WHEN_OVRUDR_HIGH(base) \
     if ( READ_OVRUDR(base) )


#define UNLESS_OVRUDR_HIGH(base) \
     if (! READ_OVRUDR(base) )


#define WAIT_OVRUDR_LOW(base) \
    while ( READ_OVRUDR(base) );


#define WAIT_OVRUDR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRUDR(base) && (--timeout > 0) );


#define WAIT_OVRUDR_HIGH(base) \
    while (! READ_OVRUDR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register BClear flag register (BCLRFR) at the offset 0x3C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute detection flag 
    // 
#define MUTEDET_MASK 0x2U
#define MUTEDET_OFFSET 1
#define MUTEDET_START_BIT 1
#define MUTEDET_WIDTH 1



#define WRITE_MUTEDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~MUTEDET_MASK) | ((val << MUTEDET_START_BIT) & MUTEDET_MASK )); \
   } 

#define ENABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  MUTEDET_MASK ); \
   } 

#define DISABLE_MUTEDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~MUTEDET_MASK ); \
   } 

#define READ_MUTEDET(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & MUTEDET_MASK) >> MUTEDET_START_BIT )

#define WHEN_MUTEDET_HIGH(base) \
     if ( READ_MUTEDET(base) )


#define UNLESS_MUTEDET_HIGH(base) \
     if (! READ_MUTEDET(base) )


#define WAIT_MUTEDET_LOW(base) \
    while ( READ_MUTEDET(base) );


#define WAIT_MUTEDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MUTEDET(base) && (--timeout > 0) );


#define WAIT_MUTEDET_HIGH(base) \
    while (! READ_MUTEDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register BClear flag register (BCLRFR) at the offset 0x3C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear wrong clock configuration flag 
    // 
#define WCKCFG_MASK 0x4U
#define WCKCFG_OFFSET 2
#define WCKCFG_START_BIT 2
#define WCKCFG_WIDTH 1



#define WRITE_WCKCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~WCKCFG_MASK) | ((val << WCKCFG_START_BIT) & WCKCFG_MASK )); \
   } 

#define ENABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  WCKCFG_MASK ); \
   } 

#define DISABLE_WCKCFG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~WCKCFG_MASK ); \
   } 

#define READ_WCKCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & WCKCFG_MASK) >> WCKCFG_START_BIT )

#define WHEN_WCKCFG_HIGH(base) \
     if ( READ_WCKCFG(base) )


#define UNLESS_WCKCFG_HIGH(base) \
     if (! READ_WCKCFG(base) )


#define WAIT_WCKCFG_LOW(base) \
    while ( READ_WCKCFG(base) );


#define WAIT_WCKCFG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WCKCFG(base) && (--timeout > 0) );


#define WAIT_WCKCFG_HIGH(base) \
    while (! READ_WCKCFG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register BClear flag register (BCLRFR) at the offset 0x3C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear codec not ready flag 
    // 
#define CNRDY_MASK 0x10U
#define CNRDY_OFFSET 4
#define CNRDY_START_BIT 4
#define CNRDY_WIDTH 1



#define WRITE_CNRDY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~CNRDY_MASK) | ((val << CNRDY_START_BIT) & CNRDY_MASK )); \
   } 

#define ENABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  CNRDY_MASK ); \
   } 

#define DISABLE_CNRDY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~CNRDY_MASK ); \
   } 

#define READ_CNRDY(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & CNRDY_MASK) >> CNRDY_START_BIT )

#define WHEN_CNRDY_HIGH(base) \
     if ( READ_CNRDY(base) )


#define UNLESS_CNRDY_HIGH(base) \
     if (! READ_CNRDY(base) )


#define WAIT_CNRDY_LOW(base) \
    while ( READ_CNRDY(base) );


#define WAIT_CNRDY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CNRDY(base) && (--timeout > 0) );


#define WAIT_CNRDY_HIGH(base) \
    while (! READ_CNRDY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register BClear flag register (BCLRFR) at the offset 0x3C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear anticipated frame synchronization detection flag 
    // 
#define CAFSDET_MASK 0x20U
#define CAFSDET_OFFSET 5
#define CAFSDET_START_BIT 5
#define CAFSDET_WIDTH 1



#define WRITE_CAFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~CAFSDET_MASK) | ((val << CAFSDET_START_BIT) & CAFSDET_MASK )); \
   } 

#define ENABLE_CAFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  CAFSDET_MASK ); \
   } 

#define DISABLE_CAFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~CAFSDET_MASK ); \
   } 

#define READ_CAFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & CAFSDET_MASK) >> CAFSDET_START_BIT )

#define WHEN_CAFSDET_HIGH(base) \
     if ( READ_CAFSDET(base) )


#define UNLESS_CAFSDET_HIGH(base) \
     if (! READ_CAFSDET(base) )


#define WAIT_CAFSDET_LOW(base) \
    while ( READ_CAFSDET(base) );


#define WAIT_CAFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CAFSDET(base) && (--timeout > 0) );


#define WAIT_CAFSDET_HIGH(base) \
    while (! READ_CAFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bclrfr
//
// Return the value of register BCLRFR
//
// Notes : Register BClear flag register (BCLRFR) at the offset 0x3C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear late frame synchronization detection flag 
    // 
#define LFSDET_MASK 0x40U
#define LFSDET_OFFSET 6
#define LFSDET_START_BIT 6
#define LFSDET_WIDTH 1



#define WRITE_LFSDET(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~LFSDET_MASK) | ((val << LFSDET_START_BIT) & LFSDET_MASK )); \
   } 

#define ENABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  LFSDET_MASK ); \
   } 

#define DISABLE_LFSDET(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x3C ); \
     WRITE_REGISTER_ULONG( base + 0x3C, val & ~LFSDET_MASK ); \
   } 

#define READ_LFSDET(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & LFSDET_MASK) >> LFSDET_START_BIT )

#define WHEN_LFSDET_HIGH(base) \
     if ( READ_LFSDET(base) )


#define UNLESS_LFSDET_HIGH(base) \
     if (! READ_LFSDET(base) )


#define WAIT_LFSDET_LOW(base) \
    while ( READ_LFSDET(base) );


#define WAIT_LFSDET_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LFSDET(base) && (--timeout > 0) );


#define WAIT_LFSDET_HIGH(base) \
    while (! READ_LFSDET(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdr
//
// Return the value of register BDR
//
// Notes : Register Bdr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BDR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x40, val)

#define SET_BITS_BDR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  mask ); \
   } 

#define CLEAR_BITS_BDR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40,  val & ~mask ); \
   } 

#define READ_REGISTER_BDR( base ) \
     READ_REGISTER_ULONG( base + 0x40) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bdr
//
// Return the value of register BDR
//
// Notes : Register BData register (BDR) at the offset 0x40, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data 
    // 
#define DATA_MASK 0xFFFFFFFFU
#define DATA_OFFSET 31
#define DATA_START_BIT 0
#define DATA_WIDTH 32


#define BDR_REG 0x40

#define READ_DATA(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & DATA_MASK) >> DATA_START_BIT )

#define WRITE_DATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~DATA_MASK) | ((val << DATA_START_BIT) & DATA_MASK )); \
   } 

