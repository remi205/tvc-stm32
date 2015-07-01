/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/cryp.h
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
 
#define CRYP 0x50060000
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : ALGOMODE3
//
// Return the value of register Cr
//
// Notes : ALGOMODE 
//        (CR) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALGOMODE3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ALGOMODE3_MASK) | ((val << ALGOMODE3_START_BIT) & ALGOMODE3_MASK )); \
   } 

#define ENABLE_ALGOMODE3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ALGOMODE3_MASK ); \
   }

#define DISABLE_ALGOMODE3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ALGOMODE3_MASK ); \
   } 

#define READ_ALGOMODE3() \
   ((READ_REGISTER_ULONG(0x0) & ALGOMODE3_MASK)  >> ALGOMODE3_START_BIT)

#define WHEN_ALGOMODE3_HIGH() \
     if ( READ_ALGOMODE3() )


#define UNLESS_ALGOMODE3_HIGH() \
     if (! READ_ALGOMODE3() )


#define WAIT_ALGOMODE3_LOW() \
    while ( READ_ALGOMODE3() );


#define WAIT_ALGOMODE3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALGOMODE3() && (--___t___ > 0)); }


#define WAIT_ALGOMODE3_HIGH() \
    while (! READ_ALGOMODE3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : GCM_CCMPH
//
// Return the value of register Cr
//
// Notes : GCM_CCMPH 
//        (CR) at the offset 0x0, Bits 16:17
//
/////////////////////////////////////////////////////////////////////////
#define READ_GCM_CCMPH() \
   ((READ_REGISTER_ULONG(0x0) & GCM_CCMPH_MASK)  >> GCM_CCMPH_START_BIT)

#define WRITE_GCM_CCMPH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ GCM_CCMPH_MASK) | ((val << GCM_CCMPH_START_BIT) & GCM_CCMPH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CRYPEN
//
// Return the value of register Cr
//
// Notes : Cryptographic processor enable 
//        (CR) at the offset 0x0, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CRYPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CRYPEN_MASK) | ((val << CRYPEN_START_BIT) & CRYPEN_MASK )); \
   } 

#define ENABLE_CRYPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CRYPEN_MASK ); \
   }

#define DISABLE_CRYPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CRYPEN_MASK ); \
   } 

#define READ_CRYPEN() \
   ((READ_REGISTER_ULONG(0x0) & CRYPEN_MASK)  >> CRYPEN_START_BIT)

#define WHEN_CRYPEN_HIGH() \
     if ( READ_CRYPEN() )


#define UNLESS_CRYPEN_HIGH() \
     if (! READ_CRYPEN() )


#define WAIT_CRYPEN_LOW() \
    while ( READ_CRYPEN() );


#define WAIT_CRYPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRYPEN() && (--___t___ > 0)); }


#define WAIT_CRYPEN_HIGH() \
    while (! READ_CRYPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FFLUSH
//
// Return the value of register Cr
//
// Notes : FIFO flush 
//        (CR) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FFLUSH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FFLUSH_MASK) | ((val << FFLUSH_START_BIT) & FFLUSH_MASK )); \
   } 

#define ENABLE_FFLUSH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FFLUSH_MASK ); \
   }

#define DISABLE_FFLUSH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FFLUSH_MASK ); \
   } 

#define READ_FFLUSH() \
   ((READ_REGISTER_ULONG(0x0) & FFLUSH_MASK)  >> FFLUSH_START_BIT)

#define WHEN_FFLUSH_HIGH() \
     if ( READ_FFLUSH() )


#define UNLESS_FFLUSH_HIGH() \
     if (! READ_FFLUSH() )


#define WAIT_FFLUSH_LOW() \
    while ( READ_FFLUSH() );


#define WAIT_FFLUSH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FFLUSH() && (--___t___ > 0)); }


#define WAIT_FFLUSH_HIGH() \
    while (! READ_FFLUSH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : KEYSIZE
//
// Return the value of register Cr
//
// Notes : Key size selection (AES mode only) 
//        (CR) at the offset 0x0, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_KEYSIZE() \
   ((READ_REGISTER_ULONG(0x0) & KEYSIZE_MASK)  >> KEYSIZE_START_BIT)

#define WRITE_KEYSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ KEYSIZE_MASK) | ((val << KEYSIZE_START_BIT) & KEYSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DATATYPE
//
// Return the value of register Cr
//
// Notes : Data type selection 
//        (CR) at the offset 0x0, Bits 6:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_DATATYPE() \
   ((READ_REGISTER_ULONG(0x0) & DATATYPE_MASK)  >> DATATYPE_START_BIT)

#define WRITE_DATATYPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DATATYPE_MASK) | ((val << DATATYPE_START_BIT) & DATATYPE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ALGOMODE0
//
// Return the value of register Cr
//
// Notes : Algorithm mode 
//        (CR) at the offset 0x0, Bits 3:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_ALGOMODE0() \
   ((READ_REGISTER_ULONG(0x0) & ALGOMODE0_MASK)  >> ALGOMODE0_START_BIT)

#define WRITE_ALGOMODE0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ALGOMODE0_MASK) | ((val << ALGOMODE0_START_BIT) & ALGOMODE0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ALGODIR
//
// Return the value of register Cr
//
// Notes : Algorithm direction 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALGODIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ALGODIR_MASK) | ((val << ALGODIR_START_BIT) & ALGODIR_MASK )); \
   } 

#define ENABLE_ALGODIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ALGODIR_MASK ); \
   }

#define DISABLE_ALGODIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ALGODIR_MASK ); \
   } 

#define READ_ALGODIR() \
   ((READ_REGISTER_ULONG(0x0) & ALGODIR_MASK)  >> ALGODIR_START_BIT)

#define WHEN_ALGODIR_HIGH() \
     if ( READ_ALGODIR() )


#define UNLESS_ALGODIR_HIGH() \
     if (! READ_ALGODIR() )


#define WAIT_ALGODIR_LOW() \
    while ( READ_ALGODIR() );


#define WAIT_ALGODIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALGODIR() && (--___t___ > 0)); }


#define WAIT_ALGODIR_HIGH() \
    while (! READ_ALGODIR() );


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
// Function : IFEM
//
// Return the value of register Sr
//
// Notes : Input FIFO empty 
//        (SR) at the offset 0x4, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IFEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ IFEM_MASK) | ((val << IFEM_START_BIT) & IFEM_MASK )); \
   } 

#define ENABLE_IFEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  IFEM_MASK ); \
   }

#define DISABLE_IFEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~IFEM_MASK ); \
   } 

#define READ_IFEM() \
   ((READ_REGISTER_ULONG(0x4) & IFEM_MASK)  >> IFEM_START_BIT)

#define WHEN_IFEM_HIGH() \
     if ( READ_IFEM() )


#define UNLESS_IFEM_HIGH() \
     if (! READ_IFEM() )


#define WAIT_IFEM_LOW() \
    while ( READ_IFEM() );


#define WAIT_IFEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IFEM() && (--___t___ > 0)); }


#define WAIT_IFEM_HIGH() \
    while (! READ_IFEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IFNF
//
// Return the value of register Sr
//
// Notes : Input FIFO not full 
//        (SR) at the offset 0x4, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IFNF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ IFNF_MASK) | ((val << IFNF_START_BIT) & IFNF_MASK )); \
   } 

#define ENABLE_IFNF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  IFNF_MASK ); \
   }

#define DISABLE_IFNF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~IFNF_MASK ); \
   } 

#define READ_IFNF() \
   ((READ_REGISTER_ULONG(0x4) & IFNF_MASK)  >> IFNF_START_BIT)

#define WHEN_IFNF_HIGH() \
     if ( READ_IFNF() )


#define UNLESS_IFNF_HIGH() \
     if (! READ_IFNF() )


#define WAIT_IFNF_LOW() \
    while ( READ_IFNF() );


#define WAIT_IFNF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IFNF() && (--___t___ > 0)); }


#define WAIT_IFNF_HIGH() \
    while (! READ_IFNF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OFNE
//
// Return the value of register Sr
//
// Notes : Output FIFO not empty 
//        (SR) at the offset 0x4, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OFNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OFNE_MASK) | ((val << OFNE_START_BIT) & OFNE_MASK )); \
   } 

#define ENABLE_OFNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OFNE_MASK ); \
   }

#define DISABLE_OFNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OFNE_MASK ); \
   } 

#define READ_OFNE() \
   ((READ_REGISTER_ULONG(0x4) & OFNE_MASK)  >> OFNE_START_BIT)

#define WHEN_OFNE_HIGH() \
     if ( READ_OFNE() )


#define UNLESS_OFNE_HIGH() \
     if (! READ_OFNE() )


#define WAIT_OFNE_LOW() \
    while ( READ_OFNE() );


#define WAIT_OFNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OFNE() && (--___t___ > 0)); }


#define WAIT_OFNE_HIGH() \
    while (! READ_OFNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OFFU
//
// Return the value of register Sr
//
// Notes : Output FIFO full 
//        (SR) at the offset 0x4, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OFFU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ OFFU_MASK) | ((val << OFFU_START_BIT) & OFFU_MASK )); \
   } 

#define ENABLE_OFFU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  OFFU_MASK ); \
   }

#define DISABLE_OFFU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~OFFU_MASK ); \
   } 

#define READ_OFFU() \
   ((READ_REGISTER_ULONG(0x4) & OFFU_MASK)  >> OFFU_START_BIT)

#define WHEN_OFFU_HIGH() \
     if ( READ_OFFU() )


#define UNLESS_OFFU_HIGH() \
     if (! READ_OFFU() )


#define WAIT_OFFU_LOW() \
    while ( READ_OFFU() );


#define WAIT_OFFU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OFFU() && (--___t___ > 0)); }


#define WAIT_OFFU_HIGH() \
    while (! READ_OFFU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BUSY
//
// Return the value of register Sr
//
// Notes : Busy bit 
//        (SR) at the offset 0x4, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BUSY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BUSY_MASK ); \
   }

#define DISABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY() \
   ((READ_REGISTER_ULONG(0x4) & BUSY_MASK)  >> BUSY_START_BIT)

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
// Function : Din
//
// Return the value of register DIN
//
// Notes : Register Din at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DIN( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_DIN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_DIN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_DIN() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Din
//
// Return the value of register DIN
//
// Notes : Register data input register (DIN) at the offset 0x8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data input 
    // 
#define DATAIN_MASK 0xFFFFFFFFU
#define DATAIN_OFFSET 31
#define DATAIN_START_BIT 0
#define DATAIN_WIDTH 32


#define DIN_REG 0x8

typedef enum datain {
    DATAIN_0,
    DATAIN_1
} DATAIN_T ;
#define READ_DATAIN() \
   ((READ_REGISTER_ULONG(0x8) & DATAIN_MASK)  >> DATAIN_START_BIT)

#define WRITE_DATAIN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DATAIN_MASK) | ((val << DATAIN_START_BIT) & DATAIN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dout
//
// Return the value of register DOUT
//
// Notes : Register Dout at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DOUT() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dout
//
// Return the value of register DOUT
//
// Notes : Register data output register (DOUT) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data output 
    // 
#define DATAOUT_MASK 0xFFFFFFFFU
#define DATAOUT_OFFSET 31
#define DATAOUT_START_BIT 0
#define DATAOUT_WIDTH 32


#define DOUT_REG 0xC

typedef enum dataout {
    DATAOUT_0,
    DATAOUT_1
} DATAOUT_T ;
#define READ_DATAOUT() \
   ((READ_REGISTER_ULONG(0xC) & DATAOUT_MASK)  >> DATAOUT_START_BIT)

#define WRITE_DATAOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DATAOUT_MASK) | ((val << DATAOUT_START_BIT) & DATAOUT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmacr
//
// Return the value of register DMACR
//
// Notes : Register Dmacr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMACR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_DMACR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_DMACR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_DMACR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmacr
//
// Return the value of register DMACR
//
// Notes : Register DMA control register (DMACR) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA input enable 
    // 
#define DIEN_MASK 0x1U
#define DIEN_OFFSET 0
#define DIEN_START_BIT 0
#define DIEN_WIDTH 1


#define DMACR_REG 0x10

typedef enum dien {
    DIEN_0,
    DIEN_1
} DIEN_T ;
#define WRITE_DIEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DIEN_MASK) | ((val << DIEN_START_BIT) & DIEN_MASK )); \
   } 

#define ENABLE_DIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  DIEN_MASK ); \
   }

#define DISABLE_DIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~DIEN_MASK ); \
   } 

#define READ_DIEN() \
   ((READ_REGISTER_ULONG(0x10) & DIEN_MASK)  >> DIEN_START_BIT)

#define WHEN_DIEN_HIGH() \
     if ( READ_DIEN() )


#define UNLESS_DIEN_HIGH() \
     if (! READ_DIEN() )


#define WAIT_DIEN_LOW() \
    while ( READ_DIEN() );


#define WAIT_DIEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DIEN() && (--___t___ > 0)); }


#define WAIT_DIEN_HIGH() \
    while (! READ_DIEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dmacr
//
// Return the value of register DMACR
//
// Notes : Register DMA control register (DMACR) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA output enable 
    // 
#define DOEN_MASK 0x2U
#define DOEN_OFFSET 1
#define DOEN_START_BIT 1
#define DOEN_WIDTH 1



typedef enum doen {
    DOEN_0,
    DOEN_1
} DOEN_T ;
#define WRITE_DOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DOEN_MASK) | ((val << DOEN_START_BIT) & DOEN_MASK )); \
   } 

#define ENABLE_DOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  DOEN_MASK ); \
   }

#define DISABLE_DOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~DOEN_MASK ); \
   } 

#define READ_DOEN() \
   ((READ_REGISTER_ULONG(0x10) & DOEN_MASK)  >> DOEN_START_BIT)

#define WHEN_DOEN_HIGH() \
     if ( READ_DOEN() )


#define UNLESS_DOEN_HIGH() \
     if (! READ_DOEN() )


#define WAIT_DOEN_LOW() \
    while ( READ_DOEN() );


#define WAIT_DOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DOEN() && (--___t___ > 0)); }


#define WAIT_DOEN_HIGH() \
    while (! READ_DOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imscr
//
// Return the value of register IMSCR
//
// Notes : Register Imscr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IMSCR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_IMSCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_IMSCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_IMSCR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Imscr
//
// Return the value of register IMSCR
//
// Notes : Register interrupt mask set/clear register (IMSCR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input FIFO service interrupt mask 
    // 
#define INIM_MASK 0x1U
#define INIM_OFFSET 0
#define INIM_START_BIT 0
#define INIM_WIDTH 1


#define IMSCR_REG 0x14

typedef enum inim {
    INIM_0,
    INIM_1
} INIM_T ;
#define WRITE_INIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ INIM_MASK) | ((val << INIM_START_BIT) & INIM_MASK )); \
   } 

#define ENABLE_INIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  INIM_MASK ); \
   }

#define DISABLE_INIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~INIM_MASK ); \
   } 

#define READ_INIM() \
   ((READ_REGISTER_ULONG(0x14) & INIM_MASK)  >> INIM_START_BIT)

#define WHEN_INIM_HIGH() \
     if ( READ_INIM() )


#define UNLESS_INIM_HIGH() \
     if (! READ_INIM() )


#define WAIT_INIM_LOW() \
    while ( READ_INIM() );


#define WAIT_INIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INIM() && (--___t___ > 0)); }


#define WAIT_INIM_HIGH() \
    while (! READ_INIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Imscr
//
// Return the value of register IMSCR
//
// Notes : Register interrupt mask set/clear register (IMSCR) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output FIFO service interrupt mask 
    // 
#define OUTIM_MASK 0x2U
#define OUTIM_OFFSET 1
#define OUTIM_START_BIT 1
#define OUTIM_WIDTH 1



typedef enum outim {
    OUTIM_0,
    OUTIM_1
} OUTIM_T ;
#define WRITE_OUTIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OUTIM_MASK) | ((val << OUTIM_START_BIT) & OUTIM_MASK )); \
   } 

#define ENABLE_OUTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OUTIM_MASK ); \
   }

#define DISABLE_OUTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OUTIM_MASK ); \
   } 

#define READ_OUTIM() \
   ((READ_REGISTER_ULONG(0x14) & OUTIM_MASK)  >> OUTIM_START_BIT)

#define WHEN_OUTIM_HIGH() \
     if ( READ_OUTIM() )


#define UNLESS_OUTIM_HIGH() \
     if (! READ_OUTIM() )


#define WAIT_OUTIM_LOW() \
    while ( READ_OUTIM() );


#define WAIT_OUTIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OUTIM() && (--___t___ > 0)); }


#define WAIT_OUTIM_HIGH() \
    while (! READ_OUTIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Risr
//
// Return the value of register RISR
//
// Notes : Register Risr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RISR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Risr
//
// Return the value of register RISR
//
// Notes : Register raw interrupt status register (RISR) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input FIFO service raw interrupt status 
    // 
#define INRIS_MASK 0x1U
#define INRIS_OFFSET 0
#define INRIS_START_BIT 0
#define INRIS_WIDTH 1


#define RISR_REG 0x18

typedef enum inris {
    INRIS_0,
    INRIS_1
} INRIS_T ;
#define WRITE_INRIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ INRIS_MASK) | ((val << INRIS_START_BIT) & INRIS_MASK )); \
   } 

#define ENABLE_INRIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  INRIS_MASK ); \
   }

#define DISABLE_INRIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~INRIS_MASK ); \
   } 

#define READ_INRIS() \
   ((READ_REGISTER_ULONG(0x18) & INRIS_MASK)  >> INRIS_START_BIT)

#define WHEN_INRIS_HIGH() \
     if ( READ_INRIS() )


#define UNLESS_INRIS_HIGH() \
     if (! READ_INRIS() )


#define WAIT_INRIS_LOW() \
    while ( READ_INRIS() );


#define WAIT_INRIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INRIS() && (--___t___ > 0)); }


#define WAIT_INRIS_HIGH() \
    while (! READ_INRIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Risr
//
// Return the value of register RISR
//
// Notes : Register raw interrupt status register (RISR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output FIFO service raw interrupt status 
    // 
#define OUTRIS_MASK 0x2U
#define OUTRIS_OFFSET 1
#define OUTRIS_START_BIT 1
#define OUTRIS_WIDTH 1



typedef enum outris {
    OUTRIS_0,
    OUTRIS_1
} OUTRIS_T ;
#define WRITE_OUTRIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OUTRIS_MASK) | ((val << OUTRIS_START_BIT) & OUTRIS_MASK )); \
   } 

#define ENABLE_OUTRIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OUTRIS_MASK ); \
   }

#define DISABLE_OUTRIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OUTRIS_MASK ); \
   } 

#define READ_OUTRIS() \
   ((READ_REGISTER_ULONG(0x18) & OUTRIS_MASK)  >> OUTRIS_START_BIT)

#define WHEN_OUTRIS_HIGH() \
     if ( READ_OUTRIS() )


#define UNLESS_OUTRIS_HIGH() \
     if (! READ_OUTRIS() )


#define WAIT_OUTRIS_LOW() \
    while ( READ_OUTRIS() );


#define WAIT_OUTRIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OUTRIS() && (--___t___ > 0)); }


#define WAIT_OUTRIS_HIGH() \
    while (! READ_OUTRIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Misr
//
// Return the value of register MISR
//
// Notes : Register Misr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MISR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Misr
//
// Return the value of register MISR
//
// Notes : Register masked interrupt status register (MISR) at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input FIFO service masked interrupt status 
    // 
#define INMIS_MASK 0x1U
#define INMIS_OFFSET 0
#define INMIS_START_BIT 0
#define INMIS_WIDTH 1


#define MISR_REG 0x1C

typedef enum inmis {
    INMIS_0,
    INMIS_1
} INMIS_T ;
#define WRITE_INMIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ INMIS_MASK) | ((val << INMIS_START_BIT) & INMIS_MASK )); \
   } 

#define ENABLE_INMIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  INMIS_MASK ); \
   }

#define DISABLE_INMIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~INMIS_MASK ); \
   } 

#define READ_INMIS() \
   ((READ_REGISTER_ULONG(0x1C) & INMIS_MASK)  >> INMIS_START_BIT)

#define WHEN_INMIS_HIGH() \
     if ( READ_INMIS() )


#define UNLESS_INMIS_HIGH() \
     if (! READ_INMIS() )


#define WAIT_INMIS_LOW() \
    while ( READ_INMIS() );


#define WAIT_INMIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INMIS() && (--___t___ > 0)); }


#define WAIT_INMIS_HIGH() \
    while (! READ_INMIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Misr
//
// Return the value of register MISR
//
// Notes : Register masked interrupt status register (MISR) at the offset 0x1C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output FIFO service masked interrupt status 
    // 
#define OUTMIS_MASK 0x2U
#define OUTMIS_OFFSET 1
#define OUTMIS_START_BIT 1
#define OUTMIS_WIDTH 1



typedef enum outmis {
    OUTMIS_0,
    OUTMIS_1
} OUTMIS_T ;
#define WRITE_OUTMIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OUTMIS_MASK) | ((val << OUTMIS_START_BIT) & OUTMIS_MASK )); \
   } 

#define ENABLE_OUTMIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  OUTMIS_MASK ); \
   }

#define DISABLE_OUTMIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~OUTMIS_MASK ); \
   } 

#define READ_OUTMIS() \
   ((READ_REGISTER_ULONG(0x1C) & OUTMIS_MASK)  >> OUTMIS_START_BIT)

#define WHEN_OUTMIS_HIGH() \
     if ( READ_OUTMIS() )


#define UNLESS_OUTMIS_HIGH() \
     if (! READ_OUTMIS() )


#define WAIT_OUTMIS_LOW() \
    while ( READ_OUTMIS() );


#define WAIT_OUTMIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OUTMIS() && (--___t___ > 0)); }


#define WAIT_OUTMIS_HIGH() \
    while (! READ_OUTMIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K0LR
//
// Notes : Register K0lr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_0LR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b255 
    // 
#define B255_MASK 0x80000000U
#define B255_OFFSET 31
#define B255_START_BIT 31
#define B255_WIDTH 1


#define K_0LR_REG 0x20

typedef enum b255 {
    B_2_5_5_0,
    B_2_5_5_1
} B255_T ;
#define WRITE_B255(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B255_MASK) | ((val << B255_START_BIT) & B255_MASK )); \
   } 

#define ENABLE_B255() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B255_MASK ); \
   }

#define DISABLE_B255() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B255_MASK ); \
   } 

#define READ_B255() \
   ((READ_REGISTER_ULONG(0x20) & B255_MASK)  >> B255_START_BIT)

#define WHEN_B255_HIGH() \
     if ( READ_B255() )


#define UNLESS_B255_HIGH() \
     if (! READ_B255() )


#define WAIT_B255_LOW() \
    while ( READ_B255() );


#define WAIT_B255_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B255() && (--___t___ > 0)); }


#define WAIT_B255_HIGH() \
    while (! READ_B255() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b254 
    // 
#define B254_MASK 0x40000000U
#define B254_OFFSET 30
#define B254_START_BIT 30
#define B254_WIDTH 1



typedef enum b254 {
    B_2_5_4_0,
    B_2_5_4_1
} B254_T ;
#define WRITE_B254(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B254_MASK) | ((val << B254_START_BIT) & B254_MASK )); \
   } 

#define ENABLE_B254() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B254_MASK ); \
   }

#define DISABLE_B254() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B254_MASK ); \
   } 

#define READ_B254() \
   ((READ_REGISTER_ULONG(0x20) & B254_MASK)  >> B254_START_BIT)

#define WHEN_B254_HIGH() \
     if ( READ_B254() )


#define UNLESS_B254_HIGH() \
     if (! READ_B254() )


#define WAIT_B254_LOW() \
    while ( READ_B254() );


#define WAIT_B254_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B254() && (--___t___ > 0)); }


#define WAIT_B254_HIGH() \
    while (! READ_B254() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b253 
    // 
#define B253_MASK 0x20000000U
#define B253_OFFSET 29
#define B253_START_BIT 29
#define B253_WIDTH 1



typedef enum b253 {
    B_2_5_3_0,
    B_2_5_3_1
} B253_T ;
#define WRITE_B253(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B253_MASK) | ((val << B253_START_BIT) & B253_MASK )); \
   } 

#define ENABLE_B253() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B253_MASK ); \
   }

#define DISABLE_B253() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B253_MASK ); \
   } 

#define READ_B253() \
   ((READ_REGISTER_ULONG(0x20) & B253_MASK)  >> B253_START_BIT)

#define WHEN_B253_HIGH() \
     if ( READ_B253() )


#define UNLESS_B253_HIGH() \
     if (! READ_B253() )


#define WAIT_B253_LOW() \
    while ( READ_B253() );


#define WAIT_B253_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B253() && (--___t___ > 0)); }


#define WAIT_B253_HIGH() \
    while (! READ_B253() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b252 
    // 
#define B252_MASK 0x10000000U
#define B252_OFFSET 28
#define B252_START_BIT 28
#define B252_WIDTH 1



typedef enum b252 {
    B_2_5_2_0,
    B_2_5_2_1
} B252_T ;
#define WRITE_B252(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B252_MASK) | ((val << B252_START_BIT) & B252_MASK )); \
   } 

#define ENABLE_B252() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B252_MASK ); \
   }

#define DISABLE_B252() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B252_MASK ); \
   } 

#define READ_B252() \
   ((READ_REGISTER_ULONG(0x20) & B252_MASK)  >> B252_START_BIT)

#define WHEN_B252_HIGH() \
     if ( READ_B252() )


#define UNLESS_B252_HIGH() \
     if (! READ_B252() )


#define WAIT_B252_LOW() \
    while ( READ_B252() );


#define WAIT_B252_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B252() && (--___t___ > 0)); }


#define WAIT_B252_HIGH() \
    while (! READ_B252() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b251 
    // 
#define B251_MASK 0x8000000U
#define B251_OFFSET 27
#define B251_START_BIT 27
#define B251_WIDTH 1



typedef enum b251 {
    B_2_5_1_0,
    B_2_5_1_1
} B251_T ;
#define WRITE_B251(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B251_MASK) | ((val << B251_START_BIT) & B251_MASK )); \
   } 

#define ENABLE_B251() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B251_MASK ); \
   }

#define DISABLE_B251() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B251_MASK ); \
   } 

#define READ_B251() \
   ((READ_REGISTER_ULONG(0x20) & B251_MASK)  >> B251_START_BIT)

#define WHEN_B251_HIGH() \
     if ( READ_B251() )


#define UNLESS_B251_HIGH() \
     if (! READ_B251() )


#define WAIT_B251_LOW() \
    while ( READ_B251() );


#define WAIT_B251_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B251() && (--___t___ > 0)); }


#define WAIT_B251_HIGH() \
    while (! READ_B251() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b250 
    // 
#define B250_MASK 0x4000000U
#define B250_OFFSET 26
#define B250_START_BIT 26
#define B250_WIDTH 1



typedef enum b250 {
    B_2_5_0_0,
    B_2_5_0_1
} B250_T ;
#define WRITE_B250(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B250_MASK) | ((val << B250_START_BIT) & B250_MASK )); \
   } 

#define ENABLE_B250() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B250_MASK ); \
   }

#define DISABLE_B250() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B250_MASK ); \
   } 

#define READ_B250() \
   ((READ_REGISTER_ULONG(0x20) & B250_MASK)  >> B250_START_BIT)

#define WHEN_B250_HIGH() \
     if ( READ_B250() )


#define UNLESS_B250_HIGH() \
     if (! READ_B250() )


#define WAIT_B250_LOW() \
    while ( READ_B250() );


#define WAIT_B250_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B250() && (--___t___ > 0)); }


#define WAIT_B250_HIGH() \
    while (! READ_B250() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b249 
    // 
#define B249_MASK 0x2000000U
#define B249_OFFSET 25
#define B249_START_BIT 25
#define B249_WIDTH 1



typedef enum b249 {
    B_2_4_9_0,
    B_2_4_9_1
} B249_T ;
#define WRITE_B249(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B249_MASK) | ((val << B249_START_BIT) & B249_MASK )); \
   } 

#define ENABLE_B249() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B249_MASK ); \
   }

#define DISABLE_B249() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B249_MASK ); \
   } 

#define READ_B249() \
   ((READ_REGISTER_ULONG(0x20) & B249_MASK)  >> B249_START_BIT)

#define WHEN_B249_HIGH() \
     if ( READ_B249() )


#define UNLESS_B249_HIGH() \
     if (! READ_B249() )


#define WAIT_B249_LOW() \
    while ( READ_B249() );


#define WAIT_B249_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B249() && (--___t___ > 0)); }


#define WAIT_B249_HIGH() \
    while (! READ_B249() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b248 
    // 
#define B248_MASK 0x1000000U
#define B248_OFFSET 24
#define B248_START_BIT 24
#define B248_WIDTH 1



typedef enum b248 {
    B_2_4_8_0,
    B_2_4_8_1
} B248_T ;
#define WRITE_B248(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B248_MASK) | ((val << B248_START_BIT) & B248_MASK )); \
   } 

#define ENABLE_B248() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B248_MASK ); \
   }

#define DISABLE_B248() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B248_MASK ); \
   } 

#define READ_B248() \
   ((READ_REGISTER_ULONG(0x20) & B248_MASK)  >> B248_START_BIT)

#define WHEN_B248_HIGH() \
     if ( READ_B248() )


#define UNLESS_B248_HIGH() \
     if (! READ_B248() )


#define WAIT_B248_LOW() \
    while ( READ_B248() );


#define WAIT_B248_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B248() && (--___t___ > 0)); }


#define WAIT_B248_HIGH() \
    while (! READ_B248() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b247 
    // 
#define B247_MASK 0x800000U
#define B247_OFFSET 23
#define B247_START_BIT 23
#define B247_WIDTH 1



typedef enum b247 {
    B_2_4_7_0,
    B_2_4_7_1
} B247_T ;
#define WRITE_B247(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B247_MASK) | ((val << B247_START_BIT) & B247_MASK )); \
   } 

#define ENABLE_B247() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B247_MASK ); \
   }

#define DISABLE_B247() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B247_MASK ); \
   } 

#define READ_B247() \
   ((READ_REGISTER_ULONG(0x20) & B247_MASK)  >> B247_START_BIT)

#define WHEN_B247_HIGH() \
     if ( READ_B247() )


#define UNLESS_B247_HIGH() \
     if (! READ_B247() )


#define WAIT_B247_LOW() \
    while ( READ_B247() );


#define WAIT_B247_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B247() && (--___t___ > 0)); }


#define WAIT_B247_HIGH() \
    while (! READ_B247() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b246 
    // 
#define B246_MASK 0x400000U
#define B246_OFFSET 22
#define B246_START_BIT 22
#define B246_WIDTH 1



typedef enum b246 {
    B_2_4_6_0,
    B_2_4_6_1
} B246_T ;
#define WRITE_B246(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B246_MASK) | ((val << B246_START_BIT) & B246_MASK )); \
   } 

#define ENABLE_B246() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B246_MASK ); \
   }

#define DISABLE_B246() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B246_MASK ); \
   } 

#define READ_B246() \
   ((READ_REGISTER_ULONG(0x20) & B246_MASK)  >> B246_START_BIT)

#define WHEN_B246_HIGH() \
     if ( READ_B246() )


#define UNLESS_B246_HIGH() \
     if (! READ_B246() )


#define WAIT_B246_LOW() \
    while ( READ_B246() );


#define WAIT_B246_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B246() && (--___t___ > 0)); }


#define WAIT_B246_HIGH() \
    while (! READ_B246() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b245 
    // 
#define B245_MASK 0x200000U
#define B245_OFFSET 21
#define B245_START_BIT 21
#define B245_WIDTH 1



typedef enum b245 {
    B_2_4_5_0,
    B_2_4_5_1
} B245_T ;
#define WRITE_B245(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B245_MASK) | ((val << B245_START_BIT) & B245_MASK )); \
   } 

#define ENABLE_B245() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B245_MASK ); \
   }

#define DISABLE_B245() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B245_MASK ); \
   } 

#define READ_B245() \
   ((READ_REGISTER_ULONG(0x20) & B245_MASK)  >> B245_START_BIT)

#define WHEN_B245_HIGH() \
     if ( READ_B245() )


#define UNLESS_B245_HIGH() \
     if (! READ_B245() )


#define WAIT_B245_LOW() \
    while ( READ_B245() );


#define WAIT_B245_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B245() && (--___t___ > 0)); }


#define WAIT_B245_HIGH() \
    while (! READ_B245() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b244 
    // 
#define B244_MASK 0x100000U
#define B244_OFFSET 20
#define B244_START_BIT 20
#define B244_WIDTH 1



typedef enum b244 {
    B_2_4_4_0,
    B_2_4_4_1
} B244_T ;
#define WRITE_B244(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B244_MASK) | ((val << B244_START_BIT) & B244_MASK )); \
   } 

#define ENABLE_B244() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B244_MASK ); \
   }

#define DISABLE_B244() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B244_MASK ); \
   } 

#define READ_B244() \
   ((READ_REGISTER_ULONG(0x20) & B244_MASK)  >> B244_START_BIT)

#define WHEN_B244_HIGH() \
     if ( READ_B244() )


#define UNLESS_B244_HIGH() \
     if (! READ_B244() )


#define WAIT_B244_LOW() \
    while ( READ_B244() );


#define WAIT_B244_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B244() && (--___t___ > 0)); }


#define WAIT_B244_HIGH() \
    while (! READ_B244() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b243 
    // 
#define B243_MASK 0x80000U
#define B243_OFFSET 19
#define B243_START_BIT 19
#define B243_WIDTH 1



typedef enum b243 {
    B_2_4_3_0,
    B_2_4_3_1
} B243_T ;
#define WRITE_B243(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B243_MASK) | ((val << B243_START_BIT) & B243_MASK )); \
   } 

#define ENABLE_B243() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B243_MASK ); \
   }

#define DISABLE_B243() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B243_MASK ); \
   } 

#define READ_B243() \
   ((READ_REGISTER_ULONG(0x20) & B243_MASK)  >> B243_START_BIT)

#define WHEN_B243_HIGH() \
     if ( READ_B243() )


#define UNLESS_B243_HIGH() \
     if (! READ_B243() )


#define WAIT_B243_LOW() \
    while ( READ_B243() );


#define WAIT_B243_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B243() && (--___t___ > 0)); }


#define WAIT_B243_HIGH() \
    while (! READ_B243() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b242 
    // 
#define B242_MASK 0x40000U
#define B242_OFFSET 18
#define B242_START_BIT 18
#define B242_WIDTH 1



typedef enum b242 {
    B_2_4_2_0,
    B_2_4_2_1
} B242_T ;
#define WRITE_B242(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B242_MASK) | ((val << B242_START_BIT) & B242_MASK )); \
   } 

#define ENABLE_B242() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B242_MASK ); \
   }

#define DISABLE_B242() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B242_MASK ); \
   } 

#define READ_B242() \
   ((READ_REGISTER_ULONG(0x20) & B242_MASK)  >> B242_START_BIT)

#define WHEN_B242_HIGH() \
     if ( READ_B242() )


#define UNLESS_B242_HIGH() \
     if (! READ_B242() )


#define WAIT_B242_LOW() \
    while ( READ_B242() );


#define WAIT_B242_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B242() && (--___t___ > 0)); }


#define WAIT_B242_HIGH() \
    while (! READ_B242() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b241 
    // 
#define B241_MASK 0x20000U
#define B241_OFFSET 17
#define B241_START_BIT 17
#define B241_WIDTH 1



typedef enum b241 {
    B_2_4_1_0,
    B_2_4_1_1
} B241_T ;
#define WRITE_B241(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B241_MASK) | ((val << B241_START_BIT) & B241_MASK )); \
   } 

#define ENABLE_B241() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B241_MASK ); \
   }

#define DISABLE_B241() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B241_MASK ); \
   } 

#define READ_B241() \
   ((READ_REGISTER_ULONG(0x20) & B241_MASK)  >> B241_START_BIT)

#define WHEN_B241_HIGH() \
     if ( READ_B241() )


#define UNLESS_B241_HIGH() \
     if (! READ_B241() )


#define WAIT_B241_LOW() \
    while ( READ_B241() );


#define WAIT_B241_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B241() && (--___t___ > 0)); }


#define WAIT_B241_HIGH() \
    while (! READ_B241() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b240 
    // 
#define B240_MASK 0x10000U
#define B240_OFFSET 16
#define B240_START_BIT 16
#define B240_WIDTH 1



typedef enum b240 {
    B_2_4_0_0,
    B_2_4_0_1
} B240_T ;
#define WRITE_B240(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B240_MASK) | ((val << B240_START_BIT) & B240_MASK )); \
   } 

#define ENABLE_B240() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B240_MASK ); \
   }

#define DISABLE_B240() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B240_MASK ); \
   } 

#define READ_B240() \
   ((READ_REGISTER_ULONG(0x20) & B240_MASK)  >> B240_START_BIT)

#define WHEN_B240_HIGH() \
     if ( READ_B240() )


#define UNLESS_B240_HIGH() \
     if (! READ_B240() )


#define WAIT_B240_LOW() \
    while ( READ_B240() );


#define WAIT_B240_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B240() && (--___t___ > 0)); }


#define WAIT_B240_HIGH() \
    while (! READ_B240() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b239 
    // 
#define B239_MASK 0x8000U
#define B239_OFFSET 15
#define B239_START_BIT 15
#define B239_WIDTH 1



typedef enum b239 {
    B_2_3_9_0,
    B_2_3_9_1
} B239_T ;
#define WRITE_B239(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B239_MASK) | ((val << B239_START_BIT) & B239_MASK )); \
   } 

#define ENABLE_B239() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B239_MASK ); \
   }

#define DISABLE_B239() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B239_MASK ); \
   } 

#define READ_B239() \
   ((READ_REGISTER_ULONG(0x20) & B239_MASK)  >> B239_START_BIT)

#define WHEN_B239_HIGH() \
     if ( READ_B239() )


#define UNLESS_B239_HIGH() \
     if (! READ_B239() )


#define WAIT_B239_LOW() \
    while ( READ_B239() );


#define WAIT_B239_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B239() && (--___t___ > 0)); }


#define WAIT_B239_HIGH() \
    while (! READ_B239() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b238 
    // 
#define B238_MASK 0x4000U
#define B238_OFFSET 14
#define B238_START_BIT 14
#define B238_WIDTH 1



typedef enum b238 {
    B_2_3_8_0,
    B_2_3_8_1
} B238_T ;
#define WRITE_B238(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B238_MASK) | ((val << B238_START_BIT) & B238_MASK )); \
   } 

#define ENABLE_B238() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B238_MASK ); \
   }

#define DISABLE_B238() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B238_MASK ); \
   } 

#define READ_B238() \
   ((READ_REGISTER_ULONG(0x20) & B238_MASK)  >> B238_START_BIT)

#define WHEN_B238_HIGH() \
     if ( READ_B238() )


#define UNLESS_B238_HIGH() \
     if (! READ_B238() )


#define WAIT_B238_LOW() \
    while ( READ_B238() );


#define WAIT_B238_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B238() && (--___t___ > 0)); }


#define WAIT_B238_HIGH() \
    while (! READ_B238() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b237 
    // 
#define B237_MASK 0x2000U
#define B237_OFFSET 13
#define B237_START_BIT 13
#define B237_WIDTH 1



typedef enum b237 {
    B_2_3_7_0,
    B_2_3_7_1
} B237_T ;
#define WRITE_B237(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B237_MASK) | ((val << B237_START_BIT) & B237_MASK )); \
   } 

#define ENABLE_B237() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B237_MASK ); \
   }

#define DISABLE_B237() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B237_MASK ); \
   } 

#define READ_B237() \
   ((READ_REGISTER_ULONG(0x20) & B237_MASK)  >> B237_START_BIT)

#define WHEN_B237_HIGH() \
     if ( READ_B237() )


#define UNLESS_B237_HIGH() \
     if (! READ_B237() )


#define WAIT_B237_LOW() \
    while ( READ_B237() );


#define WAIT_B237_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B237() && (--___t___ > 0)); }


#define WAIT_B237_HIGH() \
    while (! READ_B237() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b236 
    // 
#define B236_MASK 0x1000U
#define B236_OFFSET 12
#define B236_START_BIT 12
#define B236_WIDTH 1



typedef enum b236 {
    B_2_3_6_0,
    B_2_3_6_1
} B236_T ;
#define WRITE_B236(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B236_MASK) | ((val << B236_START_BIT) & B236_MASK )); \
   } 

#define ENABLE_B236() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B236_MASK ); \
   }

#define DISABLE_B236() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B236_MASK ); \
   } 

#define READ_B236() \
   ((READ_REGISTER_ULONG(0x20) & B236_MASK)  >> B236_START_BIT)

#define WHEN_B236_HIGH() \
     if ( READ_B236() )


#define UNLESS_B236_HIGH() \
     if (! READ_B236() )


#define WAIT_B236_LOW() \
    while ( READ_B236() );


#define WAIT_B236_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B236() && (--___t___ > 0)); }


#define WAIT_B236_HIGH() \
    while (! READ_B236() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b235 
    // 
#define B235_MASK 0x800U
#define B235_OFFSET 11
#define B235_START_BIT 11
#define B235_WIDTH 1



typedef enum b235 {
    B_2_3_5_0,
    B_2_3_5_1
} B235_T ;
#define WRITE_B235(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B235_MASK) | ((val << B235_START_BIT) & B235_MASK )); \
   } 

#define ENABLE_B235() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B235_MASK ); \
   }

#define DISABLE_B235() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B235_MASK ); \
   } 

#define READ_B235() \
   ((READ_REGISTER_ULONG(0x20) & B235_MASK)  >> B235_START_BIT)

#define WHEN_B235_HIGH() \
     if ( READ_B235() )


#define UNLESS_B235_HIGH() \
     if (! READ_B235() )


#define WAIT_B235_LOW() \
    while ( READ_B235() );


#define WAIT_B235_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B235() && (--___t___ > 0)); }


#define WAIT_B235_HIGH() \
    while (! READ_B235() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b234 
    // 
#define B234_MASK 0x400U
#define B234_OFFSET 10
#define B234_START_BIT 10
#define B234_WIDTH 1



typedef enum b234 {
    B_2_3_4_0,
    B_2_3_4_1
} B234_T ;
#define WRITE_B234(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B234_MASK) | ((val << B234_START_BIT) & B234_MASK )); \
   } 

#define ENABLE_B234() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B234_MASK ); \
   }

#define DISABLE_B234() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B234_MASK ); \
   } 

#define READ_B234() \
   ((READ_REGISTER_ULONG(0x20) & B234_MASK)  >> B234_START_BIT)

#define WHEN_B234_HIGH() \
     if ( READ_B234() )


#define UNLESS_B234_HIGH() \
     if (! READ_B234() )


#define WAIT_B234_LOW() \
    while ( READ_B234() );


#define WAIT_B234_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B234() && (--___t___ > 0)); }


#define WAIT_B234_HIGH() \
    while (! READ_B234() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b233 
    // 
#define B233_MASK 0x200U
#define B233_OFFSET 9
#define B233_START_BIT 9
#define B233_WIDTH 1



typedef enum b233 {
    B_2_3_3_0,
    B_2_3_3_1
} B233_T ;
#define WRITE_B233(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B233_MASK) | ((val << B233_START_BIT) & B233_MASK )); \
   } 

#define ENABLE_B233() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B233_MASK ); \
   }

#define DISABLE_B233() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B233_MASK ); \
   } 

#define READ_B233() \
   ((READ_REGISTER_ULONG(0x20) & B233_MASK)  >> B233_START_BIT)

#define WHEN_B233_HIGH() \
     if ( READ_B233() )


#define UNLESS_B233_HIGH() \
     if (! READ_B233() )


#define WAIT_B233_LOW() \
    while ( READ_B233() );


#define WAIT_B233_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B233() && (--___t___ > 0)); }


#define WAIT_B233_HIGH() \
    while (! READ_B233() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b232 
    // 
#define B232_MASK 0x100U
#define B232_OFFSET 8
#define B232_START_BIT 8
#define B232_WIDTH 1



typedef enum b232 {
    B_2_3_2_0,
    B_2_3_2_1
} B232_T ;
#define WRITE_B232(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B232_MASK) | ((val << B232_START_BIT) & B232_MASK )); \
   } 

#define ENABLE_B232() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B232_MASK ); \
   }

#define DISABLE_B232() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B232_MASK ); \
   } 

#define READ_B232() \
   ((READ_REGISTER_ULONG(0x20) & B232_MASK)  >> B232_START_BIT)

#define WHEN_B232_HIGH() \
     if ( READ_B232() )


#define UNLESS_B232_HIGH() \
     if (! READ_B232() )


#define WAIT_B232_LOW() \
    while ( READ_B232() );


#define WAIT_B232_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B232() && (--___t___ > 0)); }


#define WAIT_B232_HIGH() \
    while (! READ_B232() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b231 
    // 
#define B231_MASK 0x80U
#define B231_OFFSET 7
#define B231_START_BIT 7
#define B231_WIDTH 1



typedef enum b231 {
    B_2_3_1_0,
    B_2_3_1_1
} B231_T ;
#define WRITE_B231(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B231_MASK) | ((val << B231_START_BIT) & B231_MASK )); \
   } 

#define ENABLE_B231() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B231_MASK ); \
   }

#define DISABLE_B231() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B231_MASK ); \
   } 

#define READ_B231() \
   ((READ_REGISTER_ULONG(0x20) & B231_MASK)  >> B231_START_BIT)

#define WHEN_B231_HIGH() \
     if ( READ_B231() )


#define UNLESS_B231_HIGH() \
     if (! READ_B231() )


#define WAIT_B231_LOW() \
    while ( READ_B231() );


#define WAIT_B231_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B231() && (--___t___ > 0)); }


#define WAIT_B231_HIGH() \
    while (! READ_B231() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b230 
    // 
#define B230_MASK 0x40U
#define B230_OFFSET 6
#define B230_START_BIT 6
#define B230_WIDTH 1



typedef enum b230 {
    B_2_3_0_0,
    B_2_3_0_1
} B230_T ;
#define WRITE_B230(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B230_MASK) | ((val << B230_START_BIT) & B230_MASK )); \
   } 

#define ENABLE_B230() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B230_MASK ); \
   }

#define DISABLE_B230() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B230_MASK ); \
   } 

#define READ_B230() \
   ((READ_REGISTER_ULONG(0x20) & B230_MASK)  >> B230_START_BIT)

#define WHEN_B230_HIGH() \
     if ( READ_B230() )


#define UNLESS_B230_HIGH() \
     if (! READ_B230() )


#define WAIT_B230_LOW() \
    while ( READ_B230() );


#define WAIT_B230_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B230() && (--___t___ > 0)); }


#define WAIT_B230_HIGH() \
    while (! READ_B230() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b229 
    // 
#define B229_MASK 0x20U
#define B229_OFFSET 5
#define B229_START_BIT 5
#define B229_WIDTH 1



typedef enum b229 {
    B_2_2_9_0,
    B_2_2_9_1
} B229_T ;
#define WRITE_B229(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B229_MASK) | ((val << B229_START_BIT) & B229_MASK )); \
   } 

#define ENABLE_B229() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B229_MASK ); \
   }

#define DISABLE_B229() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B229_MASK ); \
   } 

#define READ_B229() \
   ((READ_REGISTER_ULONG(0x20) & B229_MASK)  >> B229_START_BIT)

#define WHEN_B229_HIGH() \
     if ( READ_B229() )


#define UNLESS_B229_HIGH() \
     if (! READ_B229() )


#define WAIT_B229_LOW() \
    while ( READ_B229() );


#define WAIT_B229_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B229() && (--___t___ > 0)); }


#define WAIT_B229_HIGH() \
    while (! READ_B229() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b228 
    // 
#define B228_MASK 0x10U
#define B228_OFFSET 4
#define B228_START_BIT 4
#define B228_WIDTH 1



typedef enum b228 {
    B_2_2_8_0,
    B_2_2_8_1
} B228_T ;
#define WRITE_B228(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B228_MASK) | ((val << B228_START_BIT) & B228_MASK )); \
   } 

#define ENABLE_B228() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B228_MASK ); \
   }

#define DISABLE_B228() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B228_MASK ); \
   } 

#define READ_B228() \
   ((READ_REGISTER_ULONG(0x20) & B228_MASK)  >> B228_START_BIT)

#define WHEN_B228_HIGH() \
     if ( READ_B228() )


#define UNLESS_B228_HIGH() \
     if (! READ_B228() )


#define WAIT_B228_LOW() \
    while ( READ_B228() );


#define WAIT_B228_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B228() && (--___t___ > 0)); }


#define WAIT_B228_HIGH() \
    while (! READ_B228() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b227 
    // 
#define B227_MASK 0x8U
#define B227_OFFSET 3
#define B227_START_BIT 3
#define B227_WIDTH 1



typedef enum b227 {
    B_2_2_7_0,
    B_2_2_7_1
} B227_T ;
#define WRITE_B227(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B227_MASK) | ((val << B227_START_BIT) & B227_MASK )); \
   } 

#define ENABLE_B227() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B227_MASK ); \
   }

#define DISABLE_B227() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B227_MASK ); \
   } 

#define READ_B227() \
   ((READ_REGISTER_ULONG(0x20) & B227_MASK)  >> B227_START_BIT)

#define WHEN_B227_HIGH() \
     if ( READ_B227() )


#define UNLESS_B227_HIGH() \
     if (! READ_B227() )


#define WAIT_B227_LOW() \
    while ( READ_B227() );


#define WAIT_B227_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B227() && (--___t___ > 0)); }


#define WAIT_B227_HIGH() \
    while (! READ_B227() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b226 
    // 
#define B226_MASK 0x4U
#define B226_OFFSET 2
#define B226_START_BIT 2
#define B226_WIDTH 1



typedef enum b226 {
    B_2_2_6_0,
    B_2_2_6_1
} B226_T ;
#define WRITE_B226(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B226_MASK) | ((val << B226_START_BIT) & B226_MASK )); \
   } 

#define ENABLE_B226() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B226_MASK ); \
   }

#define DISABLE_B226() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B226_MASK ); \
   } 

#define READ_B226() \
   ((READ_REGISTER_ULONG(0x20) & B226_MASK)  >> B226_START_BIT)

#define WHEN_B226_HIGH() \
     if ( READ_B226() )


#define UNLESS_B226_HIGH() \
     if (! READ_B226() )


#define WAIT_B226_LOW() \
    while ( READ_B226() );


#define WAIT_B226_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B226() && (--___t___ > 0)); }


#define WAIT_B226_HIGH() \
    while (! READ_B226() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b225 
    // 
#define B225_MASK 0x2U
#define B225_OFFSET 1
#define B225_START_BIT 1
#define B225_WIDTH 1



typedef enum b225 {
    B_2_2_5_0,
    B_2_2_5_1
} B225_T ;
#define WRITE_B225(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B225_MASK) | ((val << B225_START_BIT) & B225_MASK )); \
   } 

#define ENABLE_B225() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B225_MASK ); \
   }

#define DISABLE_B225() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B225_MASK ); \
   } 

#define READ_B225() \
   ((READ_REGISTER_ULONG(0x20) & B225_MASK)  >> B225_START_BIT)

#define WHEN_B225_HIGH() \
     if ( READ_B225() )


#define UNLESS_B225_HIGH() \
     if (! READ_B225() )


#define WAIT_B225_LOW() \
    while ( READ_B225() );


#define WAIT_B225_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B225() && (--___t___ > 0)); }


#define WAIT_B225_HIGH() \
    while (! READ_B225() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0lr
//
// Return the value of register K_0LR
//
// Notes : Register key registers (K0LR) at the offset 0x20, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b224 
    // 
#define B224_MASK 0x1U
#define B224_OFFSET 0
#define B224_START_BIT 0
#define B224_WIDTH 1



typedef enum b224 {
    B_2_2_4_0,
    B_2_2_4_1
} B224_T ;
#define WRITE_B224(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ B224_MASK) | ((val << B224_START_BIT) & B224_MASK )); \
   } 

#define ENABLE_B224() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  B224_MASK ); \
   }

#define DISABLE_B224() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~B224_MASK ); \
   } 

#define READ_B224() \
   ((READ_REGISTER_ULONG(0x20) & B224_MASK)  >> B224_START_BIT)

#define WHEN_B224_HIGH() \
     if ( READ_B224() )


#define UNLESS_B224_HIGH() \
     if (! READ_B224() )


#define WAIT_B224_LOW() \
    while ( READ_B224() );


#define WAIT_B224_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B224() && (--___t___ > 0)); }


#define WAIT_B224_HIGH() \
    while (! READ_B224() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K0RR
//
// Notes : Register K0rr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_0RR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b223 
    // 
#define B223_MASK 0x80000000U
#define B223_OFFSET 31
#define B223_START_BIT 31
#define B223_WIDTH 1


#define K_0RR_REG 0x24

typedef enum b223 {
    B_2_2_3_0,
    B_2_2_3_1
} B223_T ;
#define WRITE_B223(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B223_MASK) | ((val << B223_START_BIT) & B223_MASK )); \
   } 

#define ENABLE_B223() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B223_MASK ); \
   }

#define DISABLE_B223() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B223_MASK ); \
   } 

#define READ_B223() \
   ((READ_REGISTER_ULONG(0x24) & B223_MASK)  >> B223_START_BIT)

#define WHEN_B223_HIGH() \
     if ( READ_B223() )


#define UNLESS_B223_HIGH() \
     if (! READ_B223() )


#define WAIT_B223_LOW() \
    while ( READ_B223() );


#define WAIT_B223_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B223() && (--___t___ > 0)); }


#define WAIT_B223_HIGH() \
    while (! READ_B223() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b222 
    // 
#define B222_MASK 0x40000000U
#define B222_OFFSET 30
#define B222_START_BIT 30
#define B222_WIDTH 1



typedef enum b222 {
    B_2_2_2_0,
    B_2_2_2_1
} B222_T ;
#define WRITE_B222(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B222_MASK) | ((val << B222_START_BIT) & B222_MASK )); \
   } 

#define ENABLE_B222() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B222_MASK ); \
   }

#define DISABLE_B222() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B222_MASK ); \
   } 

#define READ_B222() \
   ((READ_REGISTER_ULONG(0x24) & B222_MASK)  >> B222_START_BIT)

#define WHEN_B222_HIGH() \
     if ( READ_B222() )


#define UNLESS_B222_HIGH() \
     if (! READ_B222() )


#define WAIT_B222_LOW() \
    while ( READ_B222() );


#define WAIT_B222_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B222() && (--___t___ > 0)); }


#define WAIT_B222_HIGH() \
    while (! READ_B222() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b221 
    // 
#define B221_MASK 0x20000000U
#define B221_OFFSET 29
#define B221_START_BIT 29
#define B221_WIDTH 1



typedef enum b221 {
    B_2_2_1_0,
    B_2_2_1_1
} B221_T ;
#define WRITE_B221(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B221_MASK) | ((val << B221_START_BIT) & B221_MASK )); \
   } 

#define ENABLE_B221() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B221_MASK ); \
   }

#define DISABLE_B221() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B221_MASK ); \
   } 

#define READ_B221() \
   ((READ_REGISTER_ULONG(0x24) & B221_MASK)  >> B221_START_BIT)

#define WHEN_B221_HIGH() \
     if ( READ_B221() )


#define UNLESS_B221_HIGH() \
     if (! READ_B221() )


#define WAIT_B221_LOW() \
    while ( READ_B221() );


#define WAIT_B221_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B221() && (--___t___ > 0)); }


#define WAIT_B221_HIGH() \
    while (! READ_B221() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b220 
    // 
#define B220_MASK 0x10000000U
#define B220_OFFSET 28
#define B220_START_BIT 28
#define B220_WIDTH 1



typedef enum b220 {
    B_2_2_0_0,
    B_2_2_0_1
} B220_T ;
#define WRITE_B220(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B220_MASK) | ((val << B220_START_BIT) & B220_MASK )); \
   } 

#define ENABLE_B220() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B220_MASK ); \
   }

#define DISABLE_B220() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B220_MASK ); \
   } 

#define READ_B220() \
   ((READ_REGISTER_ULONG(0x24) & B220_MASK)  >> B220_START_BIT)

#define WHEN_B220_HIGH() \
     if ( READ_B220() )


#define UNLESS_B220_HIGH() \
     if (! READ_B220() )


#define WAIT_B220_LOW() \
    while ( READ_B220() );


#define WAIT_B220_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B220() && (--___t___ > 0)); }


#define WAIT_B220_HIGH() \
    while (! READ_B220() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b219 
    // 
#define B219_MASK 0x8000000U
#define B219_OFFSET 27
#define B219_START_BIT 27
#define B219_WIDTH 1



typedef enum b219 {
    B_2_1_9_0,
    B_2_1_9_1
} B219_T ;
#define WRITE_B219(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B219_MASK) | ((val << B219_START_BIT) & B219_MASK )); \
   } 

#define ENABLE_B219() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B219_MASK ); \
   }

#define DISABLE_B219() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B219_MASK ); \
   } 

#define READ_B219() \
   ((READ_REGISTER_ULONG(0x24) & B219_MASK)  >> B219_START_BIT)

#define WHEN_B219_HIGH() \
     if ( READ_B219() )


#define UNLESS_B219_HIGH() \
     if (! READ_B219() )


#define WAIT_B219_LOW() \
    while ( READ_B219() );


#define WAIT_B219_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B219() && (--___t___ > 0)); }


#define WAIT_B219_HIGH() \
    while (! READ_B219() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b218 
    // 
#define B218_MASK 0x4000000U
#define B218_OFFSET 26
#define B218_START_BIT 26
#define B218_WIDTH 1



typedef enum b218 {
    B_2_1_8_0,
    B_2_1_8_1
} B218_T ;
#define WRITE_B218(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B218_MASK) | ((val << B218_START_BIT) & B218_MASK )); \
   } 

#define ENABLE_B218() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B218_MASK ); \
   }

#define DISABLE_B218() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B218_MASK ); \
   } 

#define READ_B218() \
   ((READ_REGISTER_ULONG(0x24) & B218_MASK)  >> B218_START_BIT)

#define WHEN_B218_HIGH() \
     if ( READ_B218() )


#define UNLESS_B218_HIGH() \
     if (! READ_B218() )


#define WAIT_B218_LOW() \
    while ( READ_B218() );


#define WAIT_B218_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B218() && (--___t___ > 0)); }


#define WAIT_B218_HIGH() \
    while (! READ_B218() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b217 
    // 
#define B217_MASK 0x2000000U
#define B217_OFFSET 25
#define B217_START_BIT 25
#define B217_WIDTH 1



typedef enum b217 {
    B_2_1_7_0,
    B_2_1_7_1
} B217_T ;
#define WRITE_B217(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B217_MASK) | ((val << B217_START_BIT) & B217_MASK )); \
   } 

#define ENABLE_B217() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B217_MASK ); \
   }

#define DISABLE_B217() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B217_MASK ); \
   } 

#define READ_B217() \
   ((READ_REGISTER_ULONG(0x24) & B217_MASK)  >> B217_START_BIT)

#define WHEN_B217_HIGH() \
     if ( READ_B217() )


#define UNLESS_B217_HIGH() \
     if (! READ_B217() )


#define WAIT_B217_LOW() \
    while ( READ_B217() );


#define WAIT_B217_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B217() && (--___t___ > 0)); }


#define WAIT_B217_HIGH() \
    while (! READ_B217() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b216 
    // 
#define B216_MASK 0x1000000U
#define B216_OFFSET 24
#define B216_START_BIT 24
#define B216_WIDTH 1



typedef enum b216 {
    B_2_1_6_0,
    B_2_1_6_1
} B216_T ;
#define WRITE_B216(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B216_MASK) | ((val << B216_START_BIT) & B216_MASK )); \
   } 

#define ENABLE_B216() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B216_MASK ); \
   }

#define DISABLE_B216() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B216_MASK ); \
   } 

#define READ_B216() \
   ((READ_REGISTER_ULONG(0x24) & B216_MASK)  >> B216_START_BIT)

#define WHEN_B216_HIGH() \
     if ( READ_B216() )


#define UNLESS_B216_HIGH() \
     if (! READ_B216() )


#define WAIT_B216_LOW() \
    while ( READ_B216() );


#define WAIT_B216_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B216() && (--___t___ > 0)); }


#define WAIT_B216_HIGH() \
    while (! READ_B216() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b215 
    // 
#define B215_MASK 0x800000U
#define B215_OFFSET 23
#define B215_START_BIT 23
#define B215_WIDTH 1



typedef enum b215 {
    B_2_1_5_0,
    B_2_1_5_1
} B215_T ;
#define WRITE_B215(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B215_MASK) | ((val << B215_START_BIT) & B215_MASK )); \
   } 

#define ENABLE_B215() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B215_MASK ); \
   }

#define DISABLE_B215() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B215_MASK ); \
   } 

#define READ_B215() \
   ((READ_REGISTER_ULONG(0x24) & B215_MASK)  >> B215_START_BIT)

#define WHEN_B215_HIGH() \
     if ( READ_B215() )


#define UNLESS_B215_HIGH() \
     if (! READ_B215() )


#define WAIT_B215_LOW() \
    while ( READ_B215() );


#define WAIT_B215_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B215() && (--___t___ > 0)); }


#define WAIT_B215_HIGH() \
    while (! READ_B215() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b214 
    // 
#define B214_MASK 0x400000U
#define B214_OFFSET 22
#define B214_START_BIT 22
#define B214_WIDTH 1



typedef enum b214 {
    B_2_1_4_0,
    B_2_1_4_1
} B214_T ;
#define WRITE_B214(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B214_MASK) | ((val << B214_START_BIT) & B214_MASK )); \
   } 

#define ENABLE_B214() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B214_MASK ); \
   }

#define DISABLE_B214() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B214_MASK ); \
   } 

#define READ_B214() \
   ((READ_REGISTER_ULONG(0x24) & B214_MASK)  >> B214_START_BIT)

#define WHEN_B214_HIGH() \
     if ( READ_B214() )


#define UNLESS_B214_HIGH() \
     if (! READ_B214() )


#define WAIT_B214_LOW() \
    while ( READ_B214() );


#define WAIT_B214_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B214() && (--___t___ > 0)); }


#define WAIT_B214_HIGH() \
    while (! READ_B214() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b213 
    // 
#define B213_MASK 0x200000U
#define B213_OFFSET 21
#define B213_START_BIT 21
#define B213_WIDTH 1



typedef enum b213 {
    B_2_1_3_0,
    B_2_1_3_1
} B213_T ;
#define WRITE_B213(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B213_MASK) | ((val << B213_START_BIT) & B213_MASK )); \
   } 

#define ENABLE_B213() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B213_MASK ); \
   }

#define DISABLE_B213() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B213_MASK ); \
   } 

#define READ_B213() \
   ((READ_REGISTER_ULONG(0x24) & B213_MASK)  >> B213_START_BIT)

#define WHEN_B213_HIGH() \
     if ( READ_B213() )


#define UNLESS_B213_HIGH() \
     if (! READ_B213() )


#define WAIT_B213_LOW() \
    while ( READ_B213() );


#define WAIT_B213_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B213() && (--___t___ > 0)); }


#define WAIT_B213_HIGH() \
    while (! READ_B213() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b212 
    // 
#define B212_MASK 0x100000U
#define B212_OFFSET 20
#define B212_START_BIT 20
#define B212_WIDTH 1



typedef enum b212 {
    B_2_1_2_0,
    B_2_1_2_1
} B212_T ;
#define WRITE_B212(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B212_MASK) | ((val << B212_START_BIT) & B212_MASK )); \
   } 

#define ENABLE_B212() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B212_MASK ); \
   }

#define DISABLE_B212() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B212_MASK ); \
   } 

#define READ_B212() \
   ((READ_REGISTER_ULONG(0x24) & B212_MASK)  >> B212_START_BIT)

#define WHEN_B212_HIGH() \
     if ( READ_B212() )


#define UNLESS_B212_HIGH() \
     if (! READ_B212() )


#define WAIT_B212_LOW() \
    while ( READ_B212() );


#define WAIT_B212_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B212() && (--___t___ > 0)); }


#define WAIT_B212_HIGH() \
    while (! READ_B212() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b211 
    // 
#define B211_MASK 0x80000U
#define B211_OFFSET 19
#define B211_START_BIT 19
#define B211_WIDTH 1



typedef enum b211 {
    B_2_1_1_0,
    B_2_1_1_1
} B211_T ;
#define WRITE_B211(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B211_MASK) | ((val << B211_START_BIT) & B211_MASK )); \
   } 

#define ENABLE_B211() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B211_MASK ); \
   }

#define DISABLE_B211() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B211_MASK ); \
   } 

#define READ_B211() \
   ((READ_REGISTER_ULONG(0x24) & B211_MASK)  >> B211_START_BIT)

#define WHEN_B211_HIGH() \
     if ( READ_B211() )


#define UNLESS_B211_HIGH() \
     if (! READ_B211() )


#define WAIT_B211_LOW() \
    while ( READ_B211() );


#define WAIT_B211_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B211() && (--___t___ > 0)); }


#define WAIT_B211_HIGH() \
    while (! READ_B211() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b210 
    // 
#define B210_MASK 0x40000U
#define B210_OFFSET 18
#define B210_START_BIT 18
#define B210_WIDTH 1



typedef enum b210 {
    B_2_1_0_0,
    B_2_1_0_1
} B210_T ;
#define WRITE_B210(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B210_MASK) | ((val << B210_START_BIT) & B210_MASK )); \
   } 

#define ENABLE_B210() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B210_MASK ); \
   }

#define DISABLE_B210() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B210_MASK ); \
   } 

#define READ_B210() \
   ((READ_REGISTER_ULONG(0x24) & B210_MASK)  >> B210_START_BIT)

#define WHEN_B210_HIGH() \
     if ( READ_B210() )


#define UNLESS_B210_HIGH() \
     if (! READ_B210() )


#define WAIT_B210_LOW() \
    while ( READ_B210() );


#define WAIT_B210_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B210() && (--___t___ > 0)); }


#define WAIT_B210_HIGH() \
    while (! READ_B210() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b209 
    // 
#define B209_MASK 0x20000U
#define B209_OFFSET 17
#define B209_START_BIT 17
#define B209_WIDTH 1



typedef enum b209 {
    B_2_0_9_0,
    B_2_0_9_1
} B209_T ;
#define WRITE_B209(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B209_MASK) | ((val << B209_START_BIT) & B209_MASK )); \
   } 

#define ENABLE_B209() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B209_MASK ); \
   }

#define DISABLE_B209() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B209_MASK ); \
   } 

#define READ_B209() \
   ((READ_REGISTER_ULONG(0x24) & B209_MASK)  >> B209_START_BIT)

#define WHEN_B209_HIGH() \
     if ( READ_B209() )


#define UNLESS_B209_HIGH() \
     if (! READ_B209() )


#define WAIT_B209_LOW() \
    while ( READ_B209() );


#define WAIT_B209_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B209() && (--___t___ > 0)); }


#define WAIT_B209_HIGH() \
    while (! READ_B209() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b208 
    // 
#define B208_MASK 0x10000U
#define B208_OFFSET 16
#define B208_START_BIT 16
#define B208_WIDTH 1



typedef enum b208 {
    B_2_0_8_0,
    B_2_0_8_1
} B208_T ;
#define WRITE_B208(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B208_MASK) | ((val << B208_START_BIT) & B208_MASK )); \
   } 

#define ENABLE_B208() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B208_MASK ); \
   }

#define DISABLE_B208() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B208_MASK ); \
   } 

#define READ_B208() \
   ((READ_REGISTER_ULONG(0x24) & B208_MASK)  >> B208_START_BIT)

#define WHEN_B208_HIGH() \
     if ( READ_B208() )


#define UNLESS_B208_HIGH() \
     if (! READ_B208() )


#define WAIT_B208_LOW() \
    while ( READ_B208() );


#define WAIT_B208_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B208() && (--___t___ > 0)); }


#define WAIT_B208_HIGH() \
    while (! READ_B208() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b207 
    // 
#define B207_MASK 0x8000U
#define B207_OFFSET 15
#define B207_START_BIT 15
#define B207_WIDTH 1



typedef enum b207 {
    B_2_0_7_0,
    B_2_0_7_1
} B207_T ;
#define WRITE_B207(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B207_MASK) | ((val << B207_START_BIT) & B207_MASK )); \
   } 

#define ENABLE_B207() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B207_MASK ); \
   }

#define DISABLE_B207() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B207_MASK ); \
   } 

#define READ_B207() \
   ((READ_REGISTER_ULONG(0x24) & B207_MASK)  >> B207_START_BIT)

#define WHEN_B207_HIGH() \
     if ( READ_B207() )


#define UNLESS_B207_HIGH() \
     if (! READ_B207() )


#define WAIT_B207_LOW() \
    while ( READ_B207() );


#define WAIT_B207_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B207() && (--___t___ > 0)); }


#define WAIT_B207_HIGH() \
    while (! READ_B207() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b206 
    // 
#define B206_MASK 0x4000U
#define B206_OFFSET 14
#define B206_START_BIT 14
#define B206_WIDTH 1



typedef enum b206 {
    B_2_0_6_0,
    B_2_0_6_1
} B206_T ;
#define WRITE_B206(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B206_MASK) | ((val << B206_START_BIT) & B206_MASK )); \
   } 

#define ENABLE_B206() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B206_MASK ); \
   }

#define DISABLE_B206() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B206_MASK ); \
   } 

#define READ_B206() \
   ((READ_REGISTER_ULONG(0x24) & B206_MASK)  >> B206_START_BIT)

#define WHEN_B206_HIGH() \
     if ( READ_B206() )


#define UNLESS_B206_HIGH() \
     if (! READ_B206() )


#define WAIT_B206_LOW() \
    while ( READ_B206() );


#define WAIT_B206_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B206() && (--___t___ > 0)); }


#define WAIT_B206_HIGH() \
    while (! READ_B206() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b205 
    // 
#define B205_MASK 0x2000U
#define B205_OFFSET 13
#define B205_START_BIT 13
#define B205_WIDTH 1



typedef enum b205 {
    B_2_0_5_0,
    B_2_0_5_1
} B205_T ;
#define WRITE_B205(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B205_MASK) | ((val << B205_START_BIT) & B205_MASK )); \
   } 

#define ENABLE_B205() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B205_MASK ); \
   }

#define DISABLE_B205() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B205_MASK ); \
   } 

#define READ_B205() \
   ((READ_REGISTER_ULONG(0x24) & B205_MASK)  >> B205_START_BIT)

#define WHEN_B205_HIGH() \
     if ( READ_B205() )


#define UNLESS_B205_HIGH() \
     if (! READ_B205() )


#define WAIT_B205_LOW() \
    while ( READ_B205() );


#define WAIT_B205_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B205() && (--___t___ > 0)); }


#define WAIT_B205_HIGH() \
    while (! READ_B205() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b204 
    // 
#define B204_MASK 0x1000U
#define B204_OFFSET 12
#define B204_START_BIT 12
#define B204_WIDTH 1



typedef enum b204 {
    B_2_0_4_0,
    B_2_0_4_1
} B204_T ;
#define WRITE_B204(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B204_MASK) | ((val << B204_START_BIT) & B204_MASK )); \
   } 

#define ENABLE_B204() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B204_MASK ); \
   }

#define DISABLE_B204() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B204_MASK ); \
   } 

#define READ_B204() \
   ((READ_REGISTER_ULONG(0x24) & B204_MASK)  >> B204_START_BIT)

#define WHEN_B204_HIGH() \
     if ( READ_B204() )


#define UNLESS_B204_HIGH() \
     if (! READ_B204() )


#define WAIT_B204_LOW() \
    while ( READ_B204() );


#define WAIT_B204_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B204() && (--___t___ > 0)); }


#define WAIT_B204_HIGH() \
    while (! READ_B204() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b203 
    // 
#define B203_MASK 0x800U
#define B203_OFFSET 11
#define B203_START_BIT 11
#define B203_WIDTH 1



typedef enum b203 {
    B_2_0_3_0,
    B_2_0_3_1
} B203_T ;
#define WRITE_B203(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B203_MASK) | ((val << B203_START_BIT) & B203_MASK )); \
   } 

#define ENABLE_B203() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B203_MASK ); \
   }

#define DISABLE_B203() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B203_MASK ); \
   } 

#define READ_B203() \
   ((READ_REGISTER_ULONG(0x24) & B203_MASK)  >> B203_START_BIT)

#define WHEN_B203_HIGH() \
     if ( READ_B203() )


#define UNLESS_B203_HIGH() \
     if (! READ_B203() )


#define WAIT_B203_LOW() \
    while ( READ_B203() );


#define WAIT_B203_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B203() && (--___t___ > 0)); }


#define WAIT_B203_HIGH() \
    while (! READ_B203() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b202 
    // 
#define B202_MASK 0x400U
#define B202_OFFSET 10
#define B202_START_BIT 10
#define B202_WIDTH 1



typedef enum b202 {
    B_2_0_2_0,
    B_2_0_2_1
} B202_T ;
#define WRITE_B202(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B202_MASK) | ((val << B202_START_BIT) & B202_MASK )); \
   } 

#define ENABLE_B202() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B202_MASK ); \
   }

#define DISABLE_B202() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B202_MASK ); \
   } 

#define READ_B202() \
   ((READ_REGISTER_ULONG(0x24) & B202_MASK)  >> B202_START_BIT)

#define WHEN_B202_HIGH() \
     if ( READ_B202() )


#define UNLESS_B202_HIGH() \
     if (! READ_B202() )


#define WAIT_B202_LOW() \
    while ( READ_B202() );


#define WAIT_B202_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B202() && (--___t___ > 0)); }


#define WAIT_B202_HIGH() \
    while (! READ_B202() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b201 
    // 
#define B201_MASK 0x200U
#define B201_OFFSET 9
#define B201_START_BIT 9
#define B201_WIDTH 1



typedef enum b201 {
    B_2_0_1_0,
    B_2_0_1_1
} B201_T ;
#define WRITE_B201(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B201_MASK) | ((val << B201_START_BIT) & B201_MASK )); \
   } 

#define ENABLE_B201() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B201_MASK ); \
   }

#define DISABLE_B201() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B201_MASK ); \
   } 

#define READ_B201() \
   ((READ_REGISTER_ULONG(0x24) & B201_MASK)  >> B201_START_BIT)

#define WHEN_B201_HIGH() \
     if ( READ_B201() )


#define UNLESS_B201_HIGH() \
     if (! READ_B201() )


#define WAIT_B201_LOW() \
    while ( READ_B201() );


#define WAIT_B201_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B201() && (--___t___ > 0)); }


#define WAIT_B201_HIGH() \
    while (! READ_B201() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b200 
    // 
#define B200_MASK 0x100U
#define B200_OFFSET 8
#define B200_START_BIT 8
#define B200_WIDTH 1



typedef enum b200 {
    B_2_0_0_0,
    B_2_0_0_1
} B200_T ;
#define WRITE_B200(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B200_MASK) | ((val << B200_START_BIT) & B200_MASK )); \
   } 

#define ENABLE_B200() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B200_MASK ); \
   }

#define DISABLE_B200() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B200_MASK ); \
   } 

#define READ_B200() \
   ((READ_REGISTER_ULONG(0x24) & B200_MASK)  >> B200_START_BIT)

#define WHEN_B200_HIGH() \
     if ( READ_B200() )


#define UNLESS_B200_HIGH() \
     if (! READ_B200() )


#define WAIT_B200_LOW() \
    while ( READ_B200() );


#define WAIT_B200_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B200() && (--___t___ > 0)); }


#define WAIT_B200_HIGH() \
    while (! READ_B200() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b199 
    // 
#define B199_MASK 0x80U
#define B199_OFFSET 7
#define B199_START_BIT 7
#define B199_WIDTH 1



typedef enum b199 {
    B_1_9_9_0,
    B_1_9_9_1
} B199_T ;
#define WRITE_B199(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B199_MASK) | ((val << B199_START_BIT) & B199_MASK )); \
   } 

#define ENABLE_B199() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B199_MASK ); \
   }

#define DISABLE_B199() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B199_MASK ); \
   } 

#define READ_B199() \
   ((READ_REGISTER_ULONG(0x24) & B199_MASK)  >> B199_START_BIT)

#define WHEN_B199_HIGH() \
     if ( READ_B199() )


#define UNLESS_B199_HIGH() \
     if (! READ_B199() )


#define WAIT_B199_LOW() \
    while ( READ_B199() );


#define WAIT_B199_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B199() && (--___t___ > 0)); }


#define WAIT_B199_HIGH() \
    while (! READ_B199() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b198 
    // 
#define B198_MASK 0x40U
#define B198_OFFSET 6
#define B198_START_BIT 6
#define B198_WIDTH 1



typedef enum b198 {
    B_1_9_8_0,
    B_1_9_8_1
} B198_T ;
#define WRITE_B198(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B198_MASK) | ((val << B198_START_BIT) & B198_MASK )); \
   } 

#define ENABLE_B198() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B198_MASK ); \
   }

#define DISABLE_B198() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B198_MASK ); \
   } 

#define READ_B198() \
   ((READ_REGISTER_ULONG(0x24) & B198_MASK)  >> B198_START_BIT)

#define WHEN_B198_HIGH() \
     if ( READ_B198() )


#define UNLESS_B198_HIGH() \
     if (! READ_B198() )


#define WAIT_B198_LOW() \
    while ( READ_B198() );


#define WAIT_B198_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B198() && (--___t___ > 0)); }


#define WAIT_B198_HIGH() \
    while (! READ_B198() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b197 
    // 
#define B197_MASK 0x20U
#define B197_OFFSET 5
#define B197_START_BIT 5
#define B197_WIDTH 1



typedef enum b197 {
    B_1_9_7_0,
    B_1_9_7_1
} B197_T ;
#define WRITE_B197(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B197_MASK) | ((val << B197_START_BIT) & B197_MASK )); \
   } 

#define ENABLE_B197() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B197_MASK ); \
   }

#define DISABLE_B197() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B197_MASK ); \
   } 

#define READ_B197() \
   ((READ_REGISTER_ULONG(0x24) & B197_MASK)  >> B197_START_BIT)

#define WHEN_B197_HIGH() \
     if ( READ_B197() )


#define UNLESS_B197_HIGH() \
     if (! READ_B197() )


#define WAIT_B197_LOW() \
    while ( READ_B197() );


#define WAIT_B197_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B197() && (--___t___ > 0)); }


#define WAIT_B197_HIGH() \
    while (! READ_B197() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b196 
    // 
#define B196_MASK 0x10U
#define B196_OFFSET 4
#define B196_START_BIT 4
#define B196_WIDTH 1



typedef enum b196 {
    B_1_9_6_0,
    B_1_9_6_1
} B196_T ;
#define WRITE_B196(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B196_MASK) | ((val << B196_START_BIT) & B196_MASK )); \
   } 

#define ENABLE_B196() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B196_MASK ); \
   }

#define DISABLE_B196() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B196_MASK ); \
   } 

#define READ_B196() \
   ((READ_REGISTER_ULONG(0x24) & B196_MASK)  >> B196_START_BIT)

#define WHEN_B196_HIGH() \
     if ( READ_B196() )


#define UNLESS_B196_HIGH() \
     if (! READ_B196() )


#define WAIT_B196_LOW() \
    while ( READ_B196() );


#define WAIT_B196_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B196() && (--___t___ > 0)); }


#define WAIT_B196_HIGH() \
    while (! READ_B196() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b195 
    // 
#define B195_MASK 0x8U
#define B195_OFFSET 3
#define B195_START_BIT 3
#define B195_WIDTH 1



typedef enum b195 {
    B_1_9_5_0,
    B_1_9_5_1
} B195_T ;
#define WRITE_B195(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B195_MASK) | ((val << B195_START_BIT) & B195_MASK )); \
   } 

#define ENABLE_B195() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B195_MASK ); \
   }

#define DISABLE_B195() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B195_MASK ); \
   } 

#define READ_B195() \
   ((READ_REGISTER_ULONG(0x24) & B195_MASK)  >> B195_START_BIT)

#define WHEN_B195_HIGH() \
     if ( READ_B195() )


#define UNLESS_B195_HIGH() \
     if (! READ_B195() )


#define WAIT_B195_LOW() \
    while ( READ_B195() );


#define WAIT_B195_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B195() && (--___t___ > 0)); }


#define WAIT_B195_HIGH() \
    while (! READ_B195() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b194 
    // 
#define B194_MASK 0x4U
#define B194_OFFSET 2
#define B194_START_BIT 2
#define B194_WIDTH 1



typedef enum b194 {
    B_1_9_4_0,
    B_1_9_4_1
} B194_T ;
#define WRITE_B194(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B194_MASK) | ((val << B194_START_BIT) & B194_MASK )); \
   } 

#define ENABLE_B194() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B194_MASK ); \
   }

#define DISABLE_B194() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B194_MASK ); \
   } 

#define READ_B194() \
   ((READ_REGISTER_ULONG(0x24) & B194_MASK)  >> B194_START_BIT)

#define WHEN_B194_HIGH() \
     if ( READ_B194() )


#define UNLESS_B194_HIGH() \
     if (! READ_B194() )


#define WAIT_B194_LOW() \
    while ( READ_B194() );


#define WAIT_B194_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B194() && (--___t___ > 0)); }


#define WAIT_B194_HIGH() \
    while (! READ_B194() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b193 
    // 
#define B193_MASK 0x2U
#define B193_OFFSET 1
#define B193_START_BIT 1
#define B193_WIDTH 1



typedef enum b193 {
    B_1_9_3_0,
    B_1_9_3_1
} B193_T ;
#define WRITE_B193(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B193_MASK) | ((val << B193_START_BIT) & B193_MASK )); \
   } 

#define ENABLE_B193() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B193_MASK ); \
   }

#define DISABLE_B193() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B193_MASK ); \
   } 

#define READ_B193() \
   ((READ_REGISTER_ULONG(0x24) & B193_MASK)  >> B193_START_BIT)

#define WHEN_B193_HIGH() \
     if ( READ_B193() )


#define UNLESS_B193_HIGH() \
     if (! READ_B193() )


#define WAIT_B193_LOW() \
    while ( READ_B193() );


#define WAIT_B193_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B193() && (--___t___ > 0)); }


#define WAIT_B193_HIGH() \
    while (! READ_B193() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K0rr
//
// Return the value of register K_0RR
//
// Notes : Register key registers (K0RR) at the offset 0x24, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b192 
    // 
#define B192_MASK 0x1U
#define B192_OFFSET 0
#define B192_START_BIT 0
#define B192_WIDTH 1



typedef enum b192 {
    B_1_9_2_0,
    B_1_9_2_1
} B192_T ;
#define WRITE_B192(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ B192_MASK) | ((val << B192_START_BIT) & B192_MASK )); \
   } 

#define ENABLE_B192() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  B192_MASK ); \
   }

#define DISABLE_B192() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~B192_MASK ); \
   } 

#define READ_B192() \
   ((READ_REGISTER_ULONG(0x24) & B192_MASK)  >> B192_START_BIT)

#define WHEN_B192_HIGH() \
     if ( READ_B192() )


#define UNLESS_B192_HIGH() \
     if (! READ_B192() )


#define WAIT_B192_LOW() \
    while ( READ_B192() );


#define WAIT_B192_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B192() && (--___t___ > 0)); }


#define WAIT_B192_HIGH() \
    while (! READ_B192() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K1LR
//
// Notes : Register K1lr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_1LR( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b191 
    // 
#define B191_MASK 0x80000000U
#define B191_OFFSET 31
#define B191_START_BIT 31
#define B191_WIDTH 1


#define K_1LR_REG 0x28

typedef enum b191 {
    B_1_9_1_0,
    B_1_9_1_1
} B191_T ;
#define WRITE_B191(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B191_MASK) | ((val << B191_START_BIT) & B191_MASK )); \
   } 

#define ENABLE_B191() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B191_MASK ); \
   }

#define DISABLE_B191() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B191_MASK ); \
   } 

#define READ_B191() \
   ((READ_REGISTER_ULONG(0x28) & B191_MASK)  >> B191_START_BIT)

#define WHEN_B191_HIGH() \
     if ( READ_B191() )


#define UNLESS_B191_HIGH() \
     if (! READ_B191() )


#define WAIT_B191_LOW() \
    while ( READ_B191() );


#define WAIT_B191_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B191() && (--___t___ > 0)); }


#define WAIT_B191_HIGH() \
    while (! READ_B191() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b190 
    // 
#define B190_MASK 0x40000000U
#define B190_OFFSET 30
#define B190_START_BIT 30
#define B190_WIDTH 1



typedef enum b190 {
    B_1_9_0_0,
    B_1_9_0_1
} B190_T ;
#define WRITE_B190(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B190_MASK) | ((val << B190_START_BIT) & B190_MASK )); \
   } 

#define ENABLE_B190() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B190_MASK ); \
   }

#define DISABLE_B190() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B190_MASK ); \
   } 

#define READ_B190() \
   ((READ_REGISTER_ULONG(0x28) & B190_MASK)  >> B190_START_BIT)

#define WHEN_B190_HIGH() \
     if ( READ_B190() )


#define UNLESS_B190_HIGH() \
     if (! READ_B190() )


#define WAIT_B190_LOW() \
    while ( READ_B190() );


#define WAIT_B190_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B190() && (--___t___ > 0)); }


#define WAIT_B190_HIGH() \
    while (! READ_B190() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b189 
    // 
#define B189_MASK 0x20000000U
#define B189_OFFSET 29
#define B189_START_BIT 29
#define B189_WIDTH 1



typedef enum b189 {
    B_1_8_9_0,
    B_1_8_9_1
} B189_T ;
#define WRITE_B189(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B189_MASK) | ((val << B189_START_BIT) & B189_MASK )); \
   } 

#define ENABLE_B189() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B189_MASK ); \
   }

#define DISABLE_B189() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B189_MASK ); \
   } 

#define READ_B189() \
   ((READ_REGISTER_ULONG(0x28) & B189_MASK)  >> B189_START_BIT)

#define WHEN_B189_HIGH() \
     if ( READ_B189() )


#define UNLESS_B189_HIGH() \
     if (! READ_B189() )


#define WAIT_B189_LOW() \
    while ( READ_B189() );


#define WAIT_B189_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B189() && (--___t___ > 0)); }


#define WAIT_B189_HIGH() \
    while (! READ_B189() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b188 
    // 
#define B188_MASK 0x10000000U
#define B188_OFFSET 28
#define B188_START_BIT 28
#define B188_WIDTH 1



typedef enum b188 {
    B_1_8_8_0,
    B_1_8_8_1
} B188_T ;
#define WRITE_B188(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B188_MASK) | ((val << B188_START_BIT) & B188_MASK )); \
   } 

#define ENABLE_B188() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B188_MASK ); \
   }

#define DISABLE_B188() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B188_MASK ); \
   } 

#define READ_B188() \
   ((READ_REGISTER_ULONG(0x28) & B188_MASK)  >> B188_START_BIT)

#define WHEN_B188_HIGH() \
     if ( READ_B188() )


#define UNLESS_B188_HIGH() \
     if (! READ_B188() )


#define WAIT_B188_LOW() \
    while ( READ_B188() );


#define WAIT_B188_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B188() && (--___t___ > 0)); }


#define WAIT_B188_HIGH() \
    while (! READ_B188() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b187 
    // 
#define B187_MASK 0x8000000U
#define B187_OFFSET 27
#define B187_START_BIT 27
#define B187_WIDTH 1



typedef enum b187 {
    B_1_8_7_0,
    B_1_8_7_1
} B187_T ;
#define WRITE_B187(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B187_MASK) | ((val << B187_START_BIT) & B187_MASK )); \
   } 

#define ENABLE_B187() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B187_MASK ); \
   }

#define DISABLE_B187() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B187_MASK ); \
   } 

#define READ_B187() \
   ((READ_REGISTER_ULONG(0x28) & B187_MASK)  >> B187_START_BIT)

#define WHEN_B187_HIGH() \
     if ( READ_B187() )


#define UNLESS_B187_HIGH() \
     if (! READ_B187() )


#define WAIT_B187_LOW() \
    while ( READ_B187() );


#define WAIT_B187_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B187() && (--___t___ > 0)); }


#define WAIT_B187_HIGH() \
    while (! READ_B187() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b186 
    // 
#define B186_MASK 0x4000000U
#define B186_OFFSET 26
#define B186_START_BIT 26
#define B186_WIDTH 1



typedef enum b186 {
    B_1_8_6_0,
    B_1_8_6_1
} B186_T ;
#define WRITE_B186(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B186_MASK) | ((val << B186_START_BIT) & B186_MASK )); \
   } 

#define ENABLE_B186() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B186_MASK ); \
   }

#define DISABLE_B186() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B186_MASK ); \
   } 

#define READ_B186() \
   ((READ_REGISTER_ULONG(0x28) & B186_MASK)  >> B186_START_BIT)

#define WHEN_B186_HIGH() \
     if ( READ_B186() )


#define UNLESS_B186_HIGH() \
     if (! READ_B186() )


#define WAIT_B186_LOW() \
    while ( READ_B186() );


#define WAIT_B186_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B186() && (--___t___ > 0)); }


#define WAIT_B186_HIGH() \
    while (! READ_B186() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b185 
    // 
#define B185_MASK 0x2000000U
#define B185_OFFSET 25
#define B185_START_BIT 25
#define B185_WIDTH 1



typedef enum b185 {
    B_1_8_5_0,
    B_1_8_5_1
} B185_T ;
#define WRITE_B185(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B185_MASK) | ((val << B185_START_BIT) & B185_MASK )); \
   } 

#define ENABLE_B185() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B185_MASK ); \
   }

#define DISABLE_B185() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B185_MASK ); \
   } 

#define READ_B185() \
   ((READ_REGISTER_ULONG(0x28) & B185_MASK)  >> B185_START_BIT)

#define WHEN_B185_HIGH() \
     if ( READ_B185() )


#define UNLESS_B185_HIGH() \
     if (! READ_B185() )


#define WAIT_B185_LOW() \
    while ( READ_B185() );


#define WAIT_B185_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B185() && (--___t___ > 0)); }


#define WAIT_B185_HIGH() \
    while (! READ_B185() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b184 
    // 
#define B184_MASK 0x1000000U
#define B184_OFFSET 24
#define B184_START_BIT 24
#define B184_WIDTH 1



typedef enum b184 {
    B_1_8_4_0,
    B_1_8_4_1
} B184_T ;
#define WRITE_B184(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B184_MASK) | ((val << B184_START_BIT) & B184_MASK )); \
   } 

#define ENABLE_B184() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B184_MASK ); \
   }

#define DISABLE_B184() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B184_MASK ); \
   } 

#define READ_B184() \
   ((READ_REGISTER_ULONG(0x28) & B184_MASK)  >> B184_START_BIT)

#define WHEN_B184_HIGH() \
     if ( READ_B184() )


#define UNLESS_B184_HIGH() \
     if (! READ_B184() )


#define WAIT_B184_LOW() \
    while ( READ_B184() );


#define WAIT_B184_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B184() && (--___t___ > 0)); }


#define WAIT_B184_HIGH() \
    while (! READ_B184() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b183 
    // 
#define B183_MASK 0x800000U
#define B183_OFFSET 23
#define B183_START_BIT 23
#define B183_WIDTH 1



typedef enum b183 {
    B_1_8_3_0,
    B_1_8_3_1
} B183_T ;
#define WRITE_B183(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B183_MASK) | ((val << B183_START_BIT) & B183_MASK )); \
   } 

#define ENABLE_B183() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B183_MASK ); \
   }

#define DISABLE_B183() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B183_MASK ); \
   } 

#define READ_B183() \
   ((READ_REGISTER_ULONG(0x28) & B183_MASK)  >> B183_START_BIT)

#define WHEN_B183_HIGH() \
     if ( READ_B183() )


#define UNLESS_B183_HIGH() \
     if (! READ_B183() )


#define WAIT_B183_LOW() \
    while ( READ_B183() );


#define WAIT_B183_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B183() && (--___t___ > 0)); }


#define WAIT_B183_HIGH() \
    while (! READ_B183() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b182 
    // 
#define B182_MASK 0x400000U
#define B182_OFFSET 22
#define B182_START_BIT 22
#define B182_WIDTH 1



typedef enum b182 {
    B_1_8_2_0,
    B_1_8_2_1
} B182_T ;
#define WRITE_B182(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B182_MASK) | ((val << B182_START_BIT) & B182_MASK )); \
   } 

#define ENABLE_B182() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B182_MASK ); \
   }

#define DISABLE_B182() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B182_MASK ); \
   } 

#define READ_B182() \
   ((READ_REGISTER_ULONG(0x28) & B182_MASK)  >> B182_START_BIT)

#define WHEN_B182_HIGH() \
     if ( READ_B182() )


#define UNLESS_B182_HIGH() \
     if (! READ_B182() )


#define WAIT_B182_LOW() \
    while ( READ_B182() );


#define WAIT_B182_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B182() && (--___t___ > 0)); }


#define WAIT_B182_HIGH() \
    while (! READ_B182() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b181 
    // 
#define B181_MASK 0x200000U
#define B181_OFFSET 21
#define B181_START_BIT 21
#define B181_WIDTH 1



typedef enum b181 {
    B_1_8_1_0,
    B_1_8_1_1
} B181_T ;
#define WRITE_B181(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B181_MASK) | ((val << B181_START_BIT) & B181_MASK )); \
   } 

#define ENABLE_B181() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B181_MASK ); \
   }

#define DISABLE_B181() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B181_MASK ); \
   } 

#define READ_B181() \
   ((READ_REGISTER_ULONG(0x28) & B181_MASK)  >> B181_START_BIT)

#define WHEN_B181_HIGH() \
     if ( READ_B181() )


#define UNLESS_B181_HIGH() \
     if (! READ_B181() )


#define WAIT_B181_LOW() \
    while ( READ_B181() );


#define WAIT_B181_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B181() && (--___t___ > 0)); }


#define WAIT_B181_HIGH() \
    while (! READ_B181() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b180 
    // 
#define B180_MASK 0x100000U
#define B180_OFFSET 20
#define B180_START_BIT 20
#define B180_WIDTH 1



typedef enum b180 {
    B_1_8_0_0,
    B_1_8_0_1
} B180_T ;
#define WRITE_B180(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B180_MASK) | ((val << B180_START_BIT) & B180_MASK )); \
   } 

#define ENABLE_B180() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B180_MASK ); \
   }

#define DISABLE_B180() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B180_MASK ); \
   } 

#define READ_B180() \
   ((READ_REGISTER_ULONG(0x28) & B180_MASK)  >> B180_START_BIT)

#define WHEN_B180_HIGH() \
     if ( READ_B180() )


#define UNLESS_B180_HIGH() \
     if (! READ_B180() )


#define WAIT_B180_LOW() \
    while ( READ_B180() );


#define WAIT_B180_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B180() && (--___t___ > 0)); }


#define WAIT_B180_HIGH() \
    while (! READ_B180() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b179 
    // 
#define B179_MASK 0x80000U
#define B179_OFFSET 19
#define B179_START_BIT 19
#define B179_WIDTH 1



typedef enum b179 {
    B_1_7_9_0,
    B_1_7_9_1
} B179_T ;
#define WRITE_B179(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B179_MASK) | ((val << B179_START_BIT) & B179_MASK )); \
   } 

#define ENABLE_B179() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B179_MASK ); \
   }

#define DISABLE_B179() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B179_MASK ); \
   } 

#define READ_B179() \
   ((READ_REGISTER_ULONG(0x28) & B179_MASK)  >> B179_START_BIT)

#define WHEN_B179_HIGH() \
     if ( READ_B179() )


#define UNLESS_B179_HIGH() \
     if (! READ_B179() )


#define WAIT_B179_LOW() \
    while ( READ_B179() );


#define WAIT_B179_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B179() && (--___t___ > 0)); }


#define WAIT_B179_HIGH() \
    while (! READ_B179() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b178 
    // 
#define B178_MASK 0x40000U
#define B178_OFFSET 18
#define B178_START_BIT 18
#define B178_WIDTH 1



typedef enum b178 {
    B_1_7_8_0,
    B_1_7_8_1
} B178_T ;
#define WRITE_B178(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B178_MASK) | ((val << B178_START_BIT) & B178_MASK )); \
   } 

#define ENABLE_B178() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B178_MASK ); \
   }

#define DISABLE_B178() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B178_MASK ); \
   } 

#define READ_B178() \
   ((READ_REGISTER_ULONG(0x28) & B178_MASK)  >> B178_START_BIT)

#define WHEN_B178_HIGH() \
     if ( READ_B178() )


#define UNLESS_B178_HIGH() \
     if (! READ_B178() )


#define WAIT_B178_LOW() \
    while ( READ_B178() );


#define WAIT_B178_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B178() && (--___t___ > 0)); }


#define WAIT_B178_HIGH() \
    while (! READ_B178() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b177 
    // 
#define B177_MASK 0x20000U
#define B177_OFFSET 17
#define B177_START_BIT 17
#define B177_WIDTH 1



typedef enum b177 {
    B_1_7_7_0,
    B_1_7_7_1
} B177_T ;
#define WRITE_B177(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B177_MASK) | ((val << B177_START_BIT) & B177_MASK )); \
   } 

#define ENABLE_B177() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B177_MASK ); \
   }

#define DISABLE_B177() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B177_MASK ); \
   } 

#define READ_B177() \
   ((READ_REGISTER_ULONG(0x28) & B177_MASK)  >> B177_START_BIT)

#define WHEN_B177_HIGH() \
     if ( READ_B177() )


#define UNLESS_B177_HIGH() \
     if (! READ_B177() )


#define WAIT_B177_LOW() \
    while ( READ_B177() );


#define WAIT_B177_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B177() && (--___t___ > 0)); }


#define WAIT_B177_HIGH() \
    while (! READ_B177() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b176 
    // 
#define B176_MASK 0x10000U
#define B176_OFFSET 16
#define B176_START_BIT 16
#define B176_WIDTH 1



typedef enum b176 {
    B_1_7_6_0,
    B_1_7_6_1
} B176_T ;
#define WRITE_B176(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B176_MASK) | ((val << B176_START_BIT) & B176_MASK )); \
   } 

#define ENABLE_B176() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B176_MASK ); \
   }

#define DISABLE_B176() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B176_MASK ); \
   } 

#define READ_B176() \
   ((READ_REGISTER_ULONG(0x28) & B176_MASK)  >> B176_START_BIT)

#define WHEN_B176_HIGH() \
     if ( READ_B176() )


#define UNLESS_B176_HIGH() \
     if (! READ_B176() )


#define WAIT_B176_LOW() \
    while ( READ_B176() );


#define WAIT_B176_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B176() && (--___t___ > 0)); }


#define WAIT_B176_HIGH() \
    while (! READ_B176() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b175 
    // 
#define B175_MASK 0x8000U
#define B175_OFFSET 15
#define B175_START_BIT 15
#define B175_WIDTH 1



typedef enum b175 {
    B_1_7_5_0,
    B_1_7_5_1
} B175_T ;
#define WRITE_B175(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B175_MASK) | ((val << B175_START_BIT) & B175_MASK )); \
   } 

#define ENABLE_B175() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B175_MASK ); \
   }

#define DISABLE_B175() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B175_MASK ); \
   } 

#define READ_B175() \
   ((READ_REGISTER_ULONG(0x28) & B175_MASK)  >> B175_START_BIT)

#define WHEN_B175_HIGH() \
     if ( READ_B175() )


#define UNLESS_B175_HIGH() \
     if (! READ_B175() )


#define WAIT_B175_LOW() \
    while ( READ_B175() );


#define WAIT_B175_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B175() && (--___t___ > 0)); }


#define WAIT_B175_HIGH() \
    while (! READ_B175() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b174 
    // 
#define B174_MASK 0x4000U
#define B174_OFFSET 14
#define B174_START_BIT 14
#define B174_WIDTH 1



typedef enum b174 {
    B_1_7_4_0,
    B_1_7_4_1
} B174_T ;
#define WRITE_B174(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B174_MASK) | ((val << B174_START_BIT) & B174_MASK )); \
   } 

#define ENABLE_B174() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B174_MASK ); \
   }

#define DISABLE_B174() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B174_MASK ); \
   } 

#define READ_B174() \
   ((READ_REGISTER_ULONG(0x28) & B174_MASK)  >> B174_START_BIT)

#define WHEN_B174_HIGH() \
     if ( READ_B174() )


#define UNLESS_B174_HIGH() \
     if (! READ_B174() )


#define WAIT_B174_LOW() \
    while ( READ_B174() );


#define WAIT_B174_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B174() && (--___t___ > 0)); }


#define WAIT_B174_HIGH() \
    while (! READ_B174() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b173 
    // 
#define B173_MASK 0x2000U
#define B173_OFFSET 13
#define B173_START_BIT 13
#define B173_WIDTH 1



typedef enum b173 {
    B_1_7_3_0,
    B_1_7_3_1
} B173_T ;
#define WRITE_B173(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B173_MASK) | ((val << B173_START_BIT) & B173_MASK )); \
   } 

#define ENABLE_B173() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B173_MASK ); \
   }

#define DISABLE_B173() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B173_MASK ); \
   } 

#define READ_B173() \
   ((READ_REGISTER_ULONG(0x28) & B173_MASK)  >> B173_START_BIT)

#define WHEN_B173_HIGH() \
     if ( READ_B173() )


#define UNLESS_B173_HIGH() \
     if (! READ_B173() )


#define WAIT_B173_LOW() \
    while ( READ_B173() );


#define WAIT_B173_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B173() && (--___t___ > 0)); }


#define WAIT_B173_HIGH() \
    while (! READ_B173() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b172 
    // 
#define B172_MASK 0x1000U
#define B172_OFFSET 12
#define B172_START_BIT 12
#define B172_WIDTH 1



typedef enum b172 {
    B_1_7_2_0,
    B_1_7_2_1
} B172_T ;
#define WRITE_B172(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B172_MASK) | ((val << B172_START_BIT) & B172_MASK )); \
   } 

#define ENABLE_B172() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B172_MASK ); \
   }

#define DISABLE_B172() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B172_MASK ); \
   } 

#define READ_B172() \
   ((READ_REGISTER_ULONG(0x28) & B172_MASK)  >> B172_START_BIT)

#define WHEN_B172_HIGH() \
     if ( READ_B172() )


#define UNLESS_B172_HIGH() \
     if (! READ_B172() )


#define WAIT_B172_LOW() \
    while ( READ_B172() );


#define WAIT_B172_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B172() && (--___t___ > 0)); }


#define WAIT_B172_HIGH() \
    while (! READ_B172() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b171 
    // 
#define B171_MASK 0x800U
#define B171_OFFSET 11
#define B171_START_BIT 11
#define B171_WIDTH 1



typedef enum b171 {
    B_1_7_1_0,
    B_1_7_1_1
} B171_T ;
#define WRITE_B171(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B171_MASK) | ((val << B171_START_BIT) & B171_MASK )); \
   } 

#define ENABLE_B171() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B171_MASK ); \
   }

#define DISABLE_B171() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B171_MASK ); \
   } 

#define READ_B171() \
   ((READ_REGISTER_ULONG(0x28) & B171_MASK)  >> B171_START_BIT)

#define WHEN_B171_HIGH() \
     if ( READ_B171() )


#define UNLESS_B171_HIGH() \
     if (! READ_B171() )


#define WAIT_B171_LOW() \
    while ( READ_B171() );


#define WAIT_B171_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B171() && (--___t___ > 0)); }


#define WAIT_B171_HIGH() \
    while (! READ_B171() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b170 
    // 
#define B170_MASK 0x400U
#define B170_OFFSET 10
#define B170_START_BIT 10
#define B170_WIDTH 1



typedef enum b170 {
    B_1_7_0_0,
    B_1_7_0_1
} B170_T ;
#define WRITE_B170(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B170_MASK) | ((val << B170_START_BIT) & B170_MASK )); \
   } 

#define ENABLE_B170() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B170_MASK ); \
   }

#define DISABLE_B170() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B170_MASK ); \
   } 

#define READ_B170() \
   ((READ_REGISTER_ULONG(0x28) & B170_MASK)  >> B170_START_BIT)

#define WHEN_B170_HIGH() \
     if ( READ_B170() )


#define UNLESS_B170_HIGH() \
     if (! READ_B170() )


#define WAIT_B170_LOW() \
    while ( READ_B170() );


#define WAIT_B170_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B170() && (--___t___ > 0)); }


#define WAIT_B170_HIGH() \
    while (! READ_B170() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b169 
    // 
#define B169_MASK 0x200U
#define B169_OFFSET 9
#define B169_START_BIT 9
#define B169_WIDTH 1



typedef enum b169 {
    B_1_6_9_0,
    B_1_6_9_1
} B169_T ;
#define WRITE_B169(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B169_MASK) | ((val << B169_START_BIT) & B169_MASK )); \
   } 

#define ENABLE_B169() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B169_MASK ); \
   }

#define DISABLE_B169() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B169_MASK ); \
   } 

#define READ_B169() \
   ((READ_REGISTER_ULONG(0x28) & B169_MASK)  >> B169_START_BIT)

#define WHEN_B169_HIGH() \
     if ( READ_B169() )


#define UNLESS_B169_HIGH() \
     if (! READ_B169() )


#define WAIT_B169_LOW() \
    while ( READ_B169() );


#define WAIT_B169_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B169() && (--___t___ > 0)); }


#define WAIT_B169_HIGH() \
    while (! READ_B169() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b168 
    // 
#define B168_MASK 0x100U
#define B168_OFFSET 8
#define B168_START_BIT 8
#define B168_WIDTH 1



typedef enum b168 {
    B_1_6_8_0,
    B_1_6_8_1
} B168_T ;
#define WRITE_B168(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B168_MASK) | ((val << B168_START_BIT) & B168_MASK )); \
   } 

#define ENABLE_B168() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B168_MASK ); \
   }

#define DISABLE_B168() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B168_MASK ); \
   } 

#define READ_B168() \
   ((READ_REGISTER_ULONG(0x28) & B168_MASK)  >> B168_START_BIT)

#define WHEN_B168_HIGH() \
     if ( READ_B168() )


#define UNLESS_B168_HIGH() \
     if (! READ_B168() )


#define WAIT_B168_LOW() \
    while ( READ_B168() );


#define WAIT_B168_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B168() && (--___t___ > 0)); }


#define WAIT_B168_HIGH() \
    while (! READ_B168() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b167 
    // 
#define B167_MASK 0x80U
#define B167_OFFSET 7
#define B167_START_BIT 7
#define B167_WIDTH 1



typedef enum b167 {
    B_1_6_7_0,
    B_1_6_7_1
} B167_T ;
#define WRITE_B167(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B167_MASK) | ((val << B167_START_BIT) & B167_MASK )); \
   } 

#define ENABLE_B167() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B167_MASK ); \
   }

#define DISABLE_B167() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B167_MASK ); \
   } 

#define READ_B167() \
   ((READ_REGISTER_ULONG(0x28) & B167_MASK)  >> B167_START_BIT)

#define WHEN_B167_HIGH() \
     if ( READ_B167() )


#define UNLESS_B167_HIGH() \
     if (! READ_B167() )


#define WAIT_B167_LOW() \
    while ( READ_B167() );


#define WAIT_B167_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B167() && (--___t___ > 0)); }


#define WAIT_B167_HIGH() \
    while (! READ_B167() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b166 
    // 
#define B166_MASK 0x40U
#define B166_OFFSET 6
#define B166_START_BIT 6
#define B166_WIDTH 1



typedef enum b166 {
    B_1_6_6_0,
    B_1_6_6_1
} B166_T ;
#define WRITE_B166(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B166_MASK) | ((val << B166_START_BIT) & B166_MASK )); \
   } 

#define ENABLE_B166() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B166_MASK ); \
   }

#define DISABLE_B166() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B166_MASK ); \
   } 

#define READ_B166() \
   ((READ_REGISTER_ULONG(0x28) & B166_MASK)  >> B166_START_BIT)

#define WHEN_B166_HIGH() \
     if ( READ_B166() )


#define UNLESS_B166_HIGH() \
     if (! READ_B166() )


#define WAIT_B166_LOW() \
    while ( READ_B166() );


#define WAIT_B166_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B166() && (--___t___ > 0)); }


#define WAIT_B166_HIGH() \
    while (! READ_B166() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b165 
    // 
#define B165_MASK 0x20U
#define B165_OFFSET 5
#define B165_START_BIT 5
#define B165_WIDTH 1



typedef enum b165 {
    B_1_6_5_0,
    B_1_6_5_1
} B165_T ;
#define WRITE_B165(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B165_MASK) | ((val << B165_START_BIT) & B165_MASK )); \
   } 

#define ENABLE_B165() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B165_MASK ); \
   }

#define DISABLE_B165() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B165_MASK ); \
   } 

#define READ_B165() \
   ((READ_REGISTER_ULONG(0x28) & B165_MASK)  >> B165_START_BIT)

#define WHEN_B165_HIGH() \
     if ( READ_B165() )


#define UNLESS_B165_HIGH() \
     if (! READ_B165() )


#define WAIT_B165_LOW() \
    while ( READ_B165() );


#define WAIT_B165_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B165() && (--___t___ > 0)); }


#define WAIT_B165_HIGH() \
    while (! READ_B165() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b164 
    // 
#define B164_MASK 0x10U
#define B164_OFFSET 4
#define B164_START_BIT 4
#define B164_WIDTH 1



typedef enum b164 {
    B_1_6_4_0,
    B_1_6_4_1
} B164_T ;
#define WRITE_B164(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B164_MASK) | ((val << B164_START_BIT) & B164_MASK )); \
   } 

#define ENABLE_B164() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B164_MASK ); \
   }

#define DISABLE_B164() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B164_MASK ); \
   } 

#define READ_B164() \
   ((READ_REGISTER_ULONG(0x28) & B164_MASK)  >> B164_START_BIT)

#define WHEN_B164_HIGH() \
     if ( READ_B164() )


#define UNLESS_B164_HIGH() \
     if (! READ_B164() )


#define WAIT_B164_LOW() \
    while ( READ_B164() );


#define WAIT_B164_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B164() && (--___t___ > 0)); }


#define WAIT_B164_HIGH() \
    while (! READ_B164() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b163 
    // 
#define B163_MASK 0x8U
#define B163_OFFSET 3
#define B163_START_BIT 3
#define B163_WIDTH 1



typedef enum b163 {
    B_1_6_3_0,
    B_1_6_3_1
} B163_T ;
#define WRITE_B163(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B163_MASK) | ((val << B163_START_BIT) & B163_MASK )); \
   } 

#define ENABLE_B163() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B163_MASK ); \
   }

#define DISABLE_B163() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B163_MASK ); \
   } 

#define READ_B163() \
   ((READ_REGISTER_ULONG(0x28) & B163_MASK)  >> B163_START_BIT)

#define WHEN_B163_HIGH() \
     if ( READ_B163() )


#define UNLESS_B163_HIGH() \
     if (! READ_B163() )


#define WAIT_B163_LOW() \
    while ( READ_B163() );


#define WAIT_B163_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B163() && (--___t___ > 0)); }


#define WAIT_B163_HIGH() \
    while (! READ_B163() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b162 
    // 
#define B162_MASK 0x4U
#define B162_OFFSET 2
#define B162_START_BIT 2
#define B162_WIDTH 1



typedef enum b162 {
    B_1_6_2_0,
    B_1_6_2_1
} B162_T ;
#define WRITE_B162(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B162_MASK) | ((val << B162_START_BIT) & B162_MASK )); \
   } 

#define ENABLE_B162() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B162_MASK ); \
   }

#define DISABLE_B162() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B162_MASK ); \
   } 

#define READ_B162() \
   ((READ_REGISTER_ULONG(0x28) & B162_MASK)  >> B162_START_BIT)

#define WHEN_B162_HIGH() \
     if ( READ_B162() )


#define UNLESS_B162_HIGH() \
     if (! READ_B162() )


#define WAIT_B162_LOW() \
    while ( READ_B162() );


#define WAIT_B162_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B162() && (--___t___ > 0)); }


#define WAIT_B162_HIGH() \
    while (! READ_B162() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b161 
    // 
#define B161_MASK 0x2U
#define B161_OFFSET 1
#define B161_START_BIT 1
#define B161_WIDTH 1



typedef enum b161 {
    B_1_6_1_0,
    B_1_6_1_1
} B161_T ;
#define WRITE_B161(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B161_MASK) | ((val << B161_START_BIT) & B161_MASK )); \
   } 

#define ENABLE_B161() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B161_MASK ); \
   }

#define DISABLE_B161() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B161_MASK ); \
   } 

#define READ_B161() \
   ((READ_REGISTER_ULONG(0x28) & B161_MASK)  >> B161_START_BIT)

#define WHEN_B161_HIGH() \
     if ( READ_B161() )


#define UNLESS_B161_HIGH() \
     if (! READ_B161() )


#define WAIT_B161_LOW() \
    while ( READ_B161() );


#define WAIT_B161_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B161() && (--___t___ > 0)); }


#define WAIT_B161_HIGH() \
    while (! READ_B161() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1lr
//
// Return the value of register K_1LR
//
// Notes : Register key registers (K1LR) at the offset 0x28, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b160 
    // 
#define B160_MASK 0x1U
#define B160_OFFSET 0
#define B160_START_BIT 0
#define B160_WIDTH 1



typedef enum b160 {
    B_1_6_0_0,
    B_1_6_0_1
} B160_T ;
#define WRITE_B160(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ B160_MASK) | ((val << B160_START_BIT) & B160_MASK )); \
   } 

#define ENABLE_B160() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  B160_MASK ); \
   }

#define DISABLE_B160() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~B160_MASK ); \
   } 

#define READ_B160() \
   ((READ_REGISTER_ULONG(0x28) & B160_MASK)  >> B160_START_BIT)

#define WHEN_B160_HIGH() \
     if ( READ_B160() )


#define UNLESS_B160_HIGH() \
     if (! READ_B160() )


#define WAIT_B160_LOW() \
    while ( READ_B160() );


#define WAIT_B160_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B160() && (--___t___ > 0)); }


#define WAIT_B160_HIGH() \
    while (! READ_B160() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K1RR
//
// Notes : Register K1rr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_1RR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b159 
    // 
#define B159_MASK 0x80000000U
#define B159_OFFSET 31
#define B159_START_BIT 31
#define B159_WIDTH 1


#define K_1RR_REG 0x2C

typedef enum b159 {
    B_1_5_9_0,
    B_1_5_9_1
} B159_T ;
#define WRITE_B159(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B159_MASK) | ((val << B159_START_BIT) & B159_MASK )); \
   } 

#define ENABLE_B159() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B159_MASK ); \
   }

#define DISABLE_B159() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B159_MASK ); \
   } 

#define READ_B159() \
   ((READ_REGISTER_ULONG(0x2C) & B159_MASK)  >> B159_START_BIT)

#define WHEN_B159_HIGH() \
     if ( READ_B159() )


#define UNLESS_B159_HIGH() \
     if (! READ_B159() )


#define WAIT_B159_LOW() \
    while ( READ_B159() );


#define WAIT_B159_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B159() && (--___t___ > 0)); }


#define WAIT_B159_HIGH() \
    while (! READ_B159() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b158 
    // 
#define B158_MASK 0x40000000U
#define B158_OFFSET 30
#define B158_START_BIT 30
#define B158_WIDTH 1



typedef enum b158 {
    B_1_5_8_0,
    B_1_5_8_1
} B158_T ;
#define WRITE_B158(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B158_MASK) | ((val << B158_START_BIT) & B158_MASK )); \
   } 

#define ENABLE_B158() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B158_MASK ); \
   }

#define DISABLE_B158() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B158_MASK ); \
   } 

#define READ_B158() \
   ((READ_REGISTER_ULONG(0x2C) & B158_MASK)  >> B158_START_BIT)

#define WHEN_B158_HIGH() \
     if ( READ_B158() )


#define UNLESS_B158_HIGH() \
     if (! READ_B158() )


#define WAIT_B158_LOW() \
    while ( READ_B158() );


#define WAIT_B158_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B158() && (--___t___ > 0)); }


#define WAIT_B158_HIGH() \
    while (! READ_B158() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b157 
    // 
#define B157_MASK 0x20000000U
#define B157_OFFSET 29
#define B157_START_BIT 29
#define B157_WIDTH 1



typedef enum b157 {
    B_1_5_7_0,
    B_1_5_7_1
} B157_T ;
#define WRITE_B157(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B157_MASK) | ((val << B157_START_BIT) & B157_MASK )); \
   } 

#define ENABLE_B157() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B157_MASK ); \
   }

#define DISABLE_B157() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B157_MASK ); \
   } 

#define READ_B157() \
   ((READ_REGISTER_ULONG(0x2C) & B157_MASK)  >> B157_START_BIT)

#define WHEN_B157_HIGH() \
     if ( READ_B157() )


#define UNLESS_B157_HIGH() \
     if (! READ_B157() )


#define WAIT_B157_LOW() \
    while ( READ_B157() );


#define WAIT_B157_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B157() && (--___t___ > 0)); }


#define WAIT_B157_HIGH() \
    while (! READ_B157() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b156 
    // 
#define B156_MASK 0x10000000U
#define B156_OFFSET 28
#define B156_START_BIT 28
#define B156_WIDTH 1



typedef enum b156 {
    B_1_5_6_0,
    B_1_5_6_1
} B156_T ;
#define WRITE_B156(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B156_MASK) | ((val << B156_START_BIT) & B156_MASK )); \
   } 

#define ENABLE_B156() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B156_MASK ); \
   }

#define DISABLE_B156() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B156_MASK ); \
   } 

#define READ_B156() \
   ((READ_REGISTER_ULONG(0x2C) & B156_MASK)  >> B156_START_BIT)

#define WHEN_B156_HIGH() \
     if ( READ_B156() )


#define UNLESS_B156_HIGH() \
     if (! READ_B156() )


#define WAIT_B156_LOW() \
    while ( READ_B156() );


#define WAIT_B156_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B156() && (--___t___ > 0)); }


#define WAIT_B156_HIGH() \
    while (! READ_B156() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b155 
    // 
#define B155_MASK 0x8000000U
#define B155_OFFSET 27
#define B155_START_BIT 27
#define B155_WIDTH 1



typedef enum b155 {
    B_1_5_5_0,
    B_1_5_5_1
} B155_T ;
#define WRITE_B155(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B155_MASK) | ((val << B155_START_BIT) & B155_MASK )); \
   } 

#define ENABLE_B155() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B155_MASK ); \
   }

#define DISABLE_B155() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B155_MASK ); \
   } 

#define READ_B155() \
   ((READ_REGISTER_ULONG(0x2C) & B155_MASK)  >> B155_START_BIT)

#define WHEN_B155_HIGH() \
     if ( READ_B155() )


#define UNLESS_B155_HIGH() \
     if (! READ_B155() )


#define WAIT_B155_LOW() \
    while ( READ_B155() );


#define WAIT_B155_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B155() && (--___t___ > 0)); }


#define WAIT_B155_HIGH() \
    while (! READ_B155() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b154 
    // 
#define B154_MASK 0x4000000U
#define B154_OFFSET 26
#define B154_START_BIT 26
#define B154_WIDTH 1



typedef enum b154 {
    B_1_5_4_0,
    B_1_5_4_1
} B154_T ;
#define WRITE_B154(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B154_MASK) | ((val << B154_START_BIT) & B154_MASK )); \
   } 

#define ENABLE_B154() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B154_MASK ); \
   }

#define DISABLE_B154() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B154_MASK ); \
   } 

#define READ_B154() \
   ((READ_REGISTER_ULONG(0x2C) & B154_MASK)  >> B154_START_BIT)

#define WHEN_B154_HIGH() \
     if ( READ_B154() )


#define UNLESS_B154_HIGH() \
     if (! READ_B154() )


#define WAIT_B154_LOW() \
    while ( READ_B154() );


#define WAIT_B154_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B154() && (--___t___ > 0)); }


#define WAIT_B154_HIGH() \
    while (! READ_B154() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b153 
    // 
#define B153_MASK 0x2000000U
#define B153_OFFSET 25
#define B153_START_BIT 25
#define B153_WIDTH 1



typedef enum b153 {
    B_1_5_3_0,
    B_1_5_3_1
} B153_T ;
#define WRITE_B153(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B153_MASK) | ((val << B153_START_BIT) & B153_MASK )); \
   } 

#define ENABLE_B153() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B153_MASK ); \
   }

#define DISABLE_B153() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B153_MASK ); \
   } 

#define READ_B153() \
   ((READ_REGISTER_ULONG(0x2C) & B153_MASK)  >> B153_START_BIT)

#define WHEN_B153_HIGH() \
     if ( READ_B153() )


#define UNLESS_B153_HIGH() \
     if (! READ_B153() )


#define WAIT_B153_LOW() \
    while ( READ_B153() );


#define WAIT_B153_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B153() && (--___t___ > 0)); }


#define WAIT_B153_HIGH() \
    while (! READ_B153() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b152 
    // 
#define B152_MASK 0x1000000U
#define B152_OFFSET 24
#define B152_START_BIT 24
#define B152_WIDTH 1



typedef enum b152 {
    B_1_5_2_0,
    B_1_5_2_1
} B152_T ;
#define WRITE_B152(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B152_MASK) | ((val << B152_START_BIT) & B152_MASK )); \
   } 

#define ENABLE_B152() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B152_MASK ); \
   }

#define DISABLE_B152() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B152_MASK ); \
   } 

#define READ_B152() \
   ((READ_REGISTER_ULONG(0x2C) & B152_MASK)  >> B152_START_BIT)

#define WHEN_B152_HIGH() \
     if ( READ_B152() )


#define UNLESS_B152_HIGH() \
     if (! READ_B152() )


#define WAIT_B152_LOW() \
    while ( READ_B152() );


#define WAIT_B152_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B152() && (--___t___ > 0)); }


#define WAIT_B152_HIGH() \
    while (! READ_B152() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b151 
    // 
#define B151_MASK 0x800000U
#define B151_OFFSET 23
#define B151_START_BIT 23
#define B151_WIDTH 1



typedef enum b151 {
    B_1_5_1_0,
    B_1_5_1_1
} B151_T ;
#define WRITE_B151(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B151_MASK) | ((val << B151_START_BIT) & B151_MASK )); \
   } 

#define ENABLE_B151() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B151_MASK ); \
   }

#define DISABLE_B151() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B151_MASK ); \
   } 

#define READ_B151() \
   ((READ_REGISTER_ULONG(0x2C) & B151_MASK)  >> B151_START_BIT)

#define WHEN_B151_HIGH() \
     if ( READ_B151() )


#define UNLESS_B151_HIGH() \
     if (! READ_B151() )


#define WAIT_B151_LOW() \
    while ( READ_B151() );


#define WAIT_B151_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B151() && (--___t___ > 0)); }


#define WAIT_B151_HIGH() \
    while (! READ_B151() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b150 
    // 
#define B150_MASK 0x400000U
#define B150_OFFSET 22
#define B150_START_BIT 22
#define B150_WIDTH 1



typedef enum b150 {
    B_1_5_0_0,
    B_1_5_0_1
} B150_T ;
#define WRITE_B150(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B150_MASK) | ((val << B150_START_BIT) & B150_MASK )); \
   } 

#define ENABLE_B150() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B150_MASK ); \
   }

#define DISABLE_B150() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B150_MASK ); \
   } 

#define READ_B150() \
   ((READ_REGISTER_ULONG(0x2C) & B150_MASK)  >> B150_START_BIT)

#define WHEN_B150_HIGH() \
     if ( READ_B150() )


#define UNLESS_B150_HIGH() \
     if (! READ_B150() )


#define WAIT_B150_LOW() \
    while ( READ_B150() );


#define WAIT_B150_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B150() && (--___t___ > 0)); }


#define WAIT_B150_HIGH() \
    while (! READ_B150() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b149 
    // 
#define B149_MASK 0x200000U
#define B149_OFFSET 21
#define B149_START_BIT 21
#define B149_WIDTH 1



typedef enum b149 {
    B_1_4_9_0,
    B_1_4_9_1
} B149_T ;
#define WRITE_B149(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B149_MASK) | ((val << B149_START_BIT) & B149_MASK )); \
   } 

#define ENABLE_B149() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B149_MASK ); \
   }

#define DISABLE_B149() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B149_MASK ); \
   } 

#define READ_B149() \
   ((READ_REGISTER_ULONG(0x2C) & B149_MASK)  >> B149_START_BIT)

#define WHEN_B149_HIGH() \
     if ( READ_B149() )


#define UNLESS_B149_HIGH() \
     if (! READ_B149() )


#define WAIT_B149_LOW() \
    while ( READ_B149() );


#define WAIT_B149_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B149() && (--___t___ > 0)); }


#define WAIT_B149_HIGH() \
    while (! READ_B149() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b148 
    // 
#define B148_MASK 0x100000U
#define B148_OFFSET 20
#define B148_START_BIT 20
#define B148_WIDTH 1



typedef enum b148 {
    B_1_4_8_0,
    B_1_4_8_1
} B148_T ;
#define WRITE_B148(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B148_MASK) | ((val << B148_START_BIT) & B148_MASK )); \
   } 

#define ENABLE_B148() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B148_MASK ); \
   }

#define DISABLE_B148() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B148_MASK ); \
   } 

#define READ_B148() \
   ((READ_REGISTER_ULONG(0x2C) & B148_MASK)  >> B148_START_BIT)

#define WHEN_B148_HIGH() \
     if ( READ_B148() )


#define UNLESS_B148_HIGH() \
     if (! READ_B148() )


#define WAIT_B148_LOW() \
    while ( READ_B148() );


#define WAIT_B148_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B148() && (--___t___ > 0)); }


#define WAIT_B148_HIGH() \
    while (! READ_B148() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b147 
    // 
#define B147_MASK 0x80000U
#define B147_OFFSET 19
#define B147_START_BIT 19
#define B147_WIDTH 1



typedef enum b147 {
    B_1_4_7_0,
    B_1_4_7_1
} B147_T ;
#define WRITE_B147(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B147_MASK) | ((val << B147_START_BIT) & B147_MASK )); \
   } 

#define ENABLE_B147() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B147_MASK ); \
   }

#define DISABLE_B147() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B147_MASK ); \
   } 

#define READ_B147() \
   ((READ_REGISTER_ULONG(0x2C) & B147_MASK)  >> B147_START_BIT)

#define WHEN_B147_HIGH() \
     if ( READ_B147() )


#define UNLESS_B147_HIGH() \
     if (! READ_B147() )


#define WAIT_B147_LOW() \
    while ( READ_B147() );


#define WAIT_B147_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B147() && (--___t___ > 0)); }


#define WAIT_B147_HIGH() \
    while (! READ_B147() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b146 
    // 
#define B146_MASK 0x40000U
#define B146_OFFSET 18
#define B146_START_BIT 18
#define B146_WIDTH 1



typedef enum b146 {
    B_1_4_6_0,
    B_1_4_6_1
} B146_T ;
#define WRITE_B146(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B146_MASK) | ((val << B146_START_BIT) & B146_MASK )); \
   } 

#define ENABLE_B146() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B146_MASK ); \
   }

#define DISABLE_B146() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B146_MASK ); \
   } 

#define READ_B146() \
   ((READ_REGISTER_ULONG(0x2C) & B146_MASK)  >> B146_START_BIT)

#define WHEN_B146_HIGH() \
     if ( READ_B146() )


#define UNLESS_B146_HIGH() \
     if (! READ_B146() )


#define WAIT_B146_LOW() \
    while ( READ_B146() );


#define WAIT_B146_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B146() && (--___t___ > 0)); }


#define WAIT_B146_HIGH() \
    while (! READ_B146() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b145 
    // 
#define B145_MASK 0x20000U
#define B145_OFFSET 17
#define B145_START_BIT 17
#define B145_WIDTH 1



typedef enum b145 {
    B_1_4_5_0,
    B_1_4_5_1
} B145_T ;
#define WRITE_B145(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B145_MASK) | ((val << B145_START_BIT) & B145_MASK )); \
   } 

#define ENABLE_B145() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B145_MASK ); \
   }

#define DISABLE_B145() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B145_MASK ); \
   } 

#define READ_B145() \
   ((READ_REGISTER_ULONG(0x2C) & B145_MASK)  >> B145_START_BIT)

#define WHEN_B145_HIGH() \
     if ( READ_B145() )


#define UNLESS_B145_HIGH() \
     if (! READ_B145() )


#define WAIT_B145_LOW() \
    while ( READ_B145() );


#define WAIT_B145_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B145() && (--___t___ > 0)); }


#define WAIT_B145_HIGH() \
    while (! READ_B145() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b144 
    // 
#define B144_MASK 0x10000U
#define B144_OFFSET 16
#define B144_START_BIT 16
#define B144_WIDTH 1



typedef enum b144 {
    B_1_4_4_0,
    B_1_4_4_1
} B144_T ;
#define WRITE_B144(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B144_MASK) | ((val << B144_START_BIT) & B144_MASK )); \
   } 

#define ENABLE_B144() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B144_MASK ); \
   }

#define DISABLE_B144() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B144_MASK ); \
   } 

#define READ_B144() \
   ((READ_REGISTER_ULONG(0x2C) & B144_MASK)  >> B144_START_BIT)

#define WHEN_B144_HIGH() \
     if ( READ_B144() )


#define UNLESS_B144_HIGH() \
     if (! READ_B144() )


#define WAIT_B144_LOW() \
    while ( READ_B144() );


#define WAIT_B144_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B144() && (--___t___ > 0)); }


#define WAIT_B144_HIGH() \
    while (! READ_B144() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b143 
    // 
#define B143_MASK 0x8000U
#define B143_OFFSET 15
#define B143_START_BIT 15
#define B143_WIDTH 1



typedef enum b143 {
    B_1_4_3_0,
    B_1_4_3_1
} B143_T ;
#define WRITE_B143(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B143_MASK) | ((val << B143_START_BIT) & B143_MASK )); \
   } 

#define ENABLE_B143() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B143_MASK ); \
   }

#define DISABLE_B143() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B143_MASK ); \
   } 

#define READ_B143() \
   ((READ_REGISTER_ULONG(0x2C) & B143_MASK)  >> B143_START_BIT)

#define WHEN_B143_HIGH() \
     if ( READ_B143() )


#define UNLESS_B143_HIGH() \
     if (! READ_B143() )


#define WAIT_B143_LOW() \
    while ( READ_B143() );


#define WAIT_B143_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B143() && (--___t___ > 0)); }


#define WAIT_B143_HIGH() \
    while (! READ_B143() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b142 
    // 
#define B142_MASK 0x4000U
#define B142_OFFSET 14
#define B142_START_BIT 14
#define B142_WIDTH 1



typedef enum b142 {
    B_1_4_2_0,
    B_1_4_2_1
} B142_T ;
#define WRITE_B142(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B142_MASK) | ((val << B142_START_BIT) & B142_MASK )); \
   } 

#define ENABLE_B142() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B142_MASK ); \
   }

#define DISABLE_B142() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B142_MASK ); \
   } 

#define READ_B142() \
   ((READ_REGISTER_ULONG(0x2C) & B142_MASK)  >> B142_START_BIT)

#define WHEN_B142_HIGH() \
     if ( READ_B142() )


#define UNLESS_B142_HIGH() \
     if (! READ_B142() )


#define WAIT_B142_LOW() \
    while ( READ_B142() );


#define WAIT_B142_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B142() && (--___t___ > 0)); }


#define WAIT_B142_HIGH() \
    while (! READ_B142() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b141 
    // 
#define B141_MASK 0x2000U
#define B141_OFFSET 13
#define B141_START_BIT 13
#define B141_WIDTH 1



typedef enum b141 {
    B_1_4_1_0,
    B_1_4_1_1
} B141_T ;
#define WRITE_B141(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B141_MASK) | ((val << B141_START_BIT) & B141_MASK )); \
   } 

#define ENABLE_B141() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B141_MASK ); \
   }

#define DISABLE_B141() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B141_MASK ); \
   } 

#define READ_B141() \
   ((READ_REGISTER_ULONG(0x2C) & B141_MASK)  >> B141_START_BIT)

#define WHEN_B141_HIGH() \
     if ( READ_B141() )


#define UNLESS_B141_HIGH() \
     if (! READ_B141() )


#define WAIT_B141_LOW() \
    while ( READ_B141() );


#define WAIT_B141_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B141() && (--___t___ > 0)); }


#define WAIT_B141_HIGH() \
    while (! READ_B141() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b140 
    // 
#define B140_MASK 0x1000U
#define B140_OFFSET 12
#define B140_START_BIT 12
#define B140_WIDTH 1



typedef enum b140 {
    B_1_4_0_0,
    B_1_4_0_1
} B140_T ;
#define WRITE_B140(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B140_MASK) | ((val << B140_START_BIT) & B140_MASK )); \
   } 

#define ENABLE_B140() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B140_MASK ); \
   }

#define DISABLE_B140() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B140_MASK ); \
   } 

#define READ_B140() \
   ((READ_REGISTER_ULONG(0x2C) & B140_MASK)  >> B140_START_BIT)

#define WHEN_B140_HIGH() \
     if ( READ_B140() )


#define UNLESS_B140_HIGH() \
     if (! READ_B140() )


#define WAIT_B140_LOW() \
    while ( READ_B140() );


#define WAIT_B140_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B140() && (--___t___ > 0)); }


#define WAIT_B140_HIGH() \
    while (! READ_B140() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b139 
    // 
#define B139_MASK 0x800U
#define B139_OFFSET 11
#define B139_START_BIT 11
#define B139_WIDTH 1



typedef enum b139 {
    B_1_3_9_0,
    B_1_3_9_1
} B139_T ;
#define WRITE_B139(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B139_MASK) | ((val << B139_START_BIT) & B139_MASK )); \
   } 

#define ENABLE_B139() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B139_MASK ); \
   }

#define DISABLE_B139() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B139_MASK ); \
   } 

#define READ_B139() \
   ((READ_REGISTER_ULONG(0x2C) & B139_MASK)  >> B139_START_BIT)

#define WHEN_B139_HIGH() \
     if ( READ_B139() )


#define UNLESS_B139_HIGH() \
     if (! READ_B139() )


#define WAIT_B139_LOW() \
    while ( READ_B139() );


#define WAIT_B139_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B139() && (--___t___ > 0)); }


#define WAIT_B139_HIGH() \
    while (! READ_B139() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b138 
    // 
#define B138_MASK 0x400U
#define B138_OFFSET 10
#define B138_START_BIT 10
#define B138_WIDTH 1



typedef enum b138 {
    B_1_3_8_0,
    B_1_3_8_1
} B138_T ;
#define WRITE_B138(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B138_MASK) | ((val << B138_START_BIT) & B138_MASK )); \
   } 

#define ENABLE_B138() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B138_MASK ); \
   }

#define DISABLE_B138() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B138_MASK ); \
   } 

#define READ_B138() \
   ((READ_REGISTER_ULONG(0x2C) & B138_MASK)  >> B138_START_BIT)

#define WHEN_B138_HIGH() \
     if ( READ_B138() )


#define UNLESS_B138_HIGH() \
     if (! READ_B138() )


#define WAIT_B138_LOW() \
    while ( READ_B138() );


#define WAIT_B138_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B138() && (--___t___ > 0)); }


#define WAIT_B138_HIGH() \
    while (! READ_B138() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b137 
    // 
#define B137_MASK 0x200U
#define B137_OFFSET 9
#define B137_START_BIT 9
#define B137_WIDTH 1



typedef enum b137 {
    B_1_3_7_0,
    B_1_3_7_1
} B137_T ;
#define WRITE_B137(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B137_MASK) | ((val << B137_START_BIT) & B137_MASK )); \
   } 

#define ENABLE_B137() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B137_MASK ); \
   }

#define DISABLE_B137() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B137_MASK ); \
   } 

#define READ_B137() \
   ((READ_REGISTER_ULONG(0x2C) & B137_MASK)  >> B137_START_BIT)

#define WHEN_B137_HIGH() \
     if ( READ_B137() )


#define UNLESS_B137_HIGH() \
     if (! READ_B137() )


#define WAIT_B137_LOW() \
    while ( READ_B137() );


#define WAIT_B137_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B137() && (--___t___ > 0)); }


#define WAIT_B137_HIGH() \
    while (! READ_B137() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b136 
    // 
#define B136_MASK 0x100U
#define B136_OFFSET 8
#define B136_START_BIT 8
#define B136_WIDTH 1



typedef enum b136 {
    B_1_3_6_0,
    B_1_3_6_1
} B136_T ;
#define WRITE_B136(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B136_MASK) | ((val << B136_START_BIT) & B136_MASK )); \
   } 

#define ENABLE_B136() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B136_MASK ); \
   }

#define DISABLE_B136() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B136_MASK ); \
   } 

#define READ_B136() \
   ((READ_REGISTER_ULONG(0x2C) & B136_MASK)  >> B136_START_BIT)

#define WHEN_B136_HIGH() \
     if ( READ_B136() )


#define UNLESS_B136_HIGH() \
     if (! READ_B136() )


#define WAIT_B136_LOW() \
    while ( READ_B136() );


#define WAIT_B136_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B136() && (--___t___ > 0)); }


#define WAIT_B136_HIGH() \
    while (! READ_B136() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b135 
    // 
#define B135_MASK 0x80U
#define B135_OFFSET 7
#define B135_START_BIT 7
#define B135_WIDTH 1



typedef enum b135 {
    B_1_3_5_0,
    B_1_3_5_1
} B135_T ;
#define WRITE_B135(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B135_MASK) | ((val << B135_START_BIT) & B135_MASK )); \
   } 

#define ENABLE_B135() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B135_MASK ); \
   }

#define DISABLE_B135() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B135_MASK ); \
   } 

#define READ_B135() \
   ((READ_REGISTER_ULONG(0x2C) & B135_MASK)  >> B135_START_BIT)

#define WHEN_B135_HIGH() \
     if ( READ_B135() )


#define UNLESS_B135_HIGH() \
     if (! READ_B135() )


#define WAIT_B135_LOW() \
    while ( READ_B135() );


#define WAIT_B135_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B135() && (--___t___ > 0)); }


#define WAIT_B135_HIGH() \
    while (! READ_B135() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b134 
    // 
#define B134_MASK 0x40U
#define B134_OFFSET 6
#define B134_START_BIT 6
#define B134_WIDTH 1



typedef enum b134 {
    B_1_3_4_0,
    B_1_3_4_1
} B134_T ;
#define WRITE_B134(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B134_MASK) | ((val << B134_START_BIT) & B134_MASK )); \
   } 

#define ENABLE_B134() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B134_MASK ); \
   }

#define DISABLE_B134() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B134_MASK ); \
   } 

#define READ_B134() \
   ((READ_REGISTER_ULONG(0x2C) & B134_MASK)  >> B134_START_BIT)

#define WHEN_B134_HIGH() \
     if ( READ_B134() )


#define UNLESS_B134_HIGH() \
     if (! READ_B134() )


#define WAIT_B134_LOW() \
    while ( READ_B134() );


#define WAIT_B134_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B134() && (--___t___ > 0)); }


#define WAIT_B134_HIGH() \
    while (! READ_B134() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b133 
    // 
#define B133_MASK 0x20U
#define B133_OFFSET 5
#define B133_START_BIT 5
#define B133_WIDTH 1



typedef enum b133 {
    B_1_3_3_0,
    B_1_3_3_1
} B133_T ;
#define WRITE_B133(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B133_MASK) | ((val << B133_START_BIT) & B133_MASK )); \
   } 

#define ENABLE_B133() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B133_MASK ); \
   }

#define DISABLE_B133() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B133_MASK ); \
   } 

#define READ_B133() \
   ((READ_REGISTER_ULONG(0x2C) & B133_MASK)  >> B133_START_BIT)

#define WHEN_B133_HIGH() \
     if ( READ_B133() )


#define UNLESS_B133_HIGH() \
     if (! READ_B133() )


#define WAIT_B133_LOW() \
    while ( READ_B133() );


#define WAIT_B133_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B133() && (--___t___ > 0)); }


#define WAIT_B133_HIGH() \
    while (! READ_B133() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b132 
    // 
#define B132_MASK 0x10U
#define B132_OFFSET 4
#define B132_START_BIT 4
#define B132_WIDTH 1



typedef enum b132 {
    B_1_3_2_0,
    B_1_3_2_1
} B132_T ;
#define WRITE_B132(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B132_MASK) | ((val << B132_START_BIT) & B132_MASK )); \
   } 

#define ENABLE_B132() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B132_MASK ); \
   }

#define DISABLE_B132() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B132_MASK ); \
   } 

#define READ_B132() \
   ((READ_REGISTER_ULONG(0x2C) & B132_MASK)  >> B132_START_BIT)

#define WHEN_B132_HIGH() \
     if ( READ_B132() )


#define UNLESS_B132_HIGH() \
     if (! READ_B132() )


#define WAIT_B132_LOW() \
    while ( READ_B132() );


#define WAIT_B132_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B132() && (--___t___ > 0)); }


#define WAIT_B132_HIGH() \
    while (! READ_B132() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b131 
    // 
#define B131_MASK 0x8U
#define B131_OFFSET 3
#define B131_START_BIT 3
#define B131_WIDTH 1



typedef enum b131 {
    B_1_3_1_0,
    B_1_3_1_1
} B131_T ;
#define WRITE_B131(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B131_MASK) | ((val << B131_START_BIT) & B131_MASK )); \
   } 

#define ENABLE_B131() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B131_MASK ); \
   }

#define DISABLE_B131() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B131_MASK ); \
   } 

#define READ_B131() \
   ((READ_REGISTER_ULONG(0x2C) & B131_MASK)  >> B131_START_BIT)

#define WHEN_B131_HIGH() \
     if ( READ_B131() )


#define UNLESS_B131_HIGH() \
     if (! READ_B131() )


#define WAIT_B131_LOW() \
    while ( READ_B131() );


#define WAIT_B131_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B131() && (--___t___ > 0)); }


#define WAIT_B131_HIGH() \
    while (! READ_B131() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b130 
    // 
#define B130_MASK 0x4U
#define B130_OFFSET 2
#define B130_START_BIT 2
#define B130_WIDTH 1



typedef enum b130 {
    B_1_3_0_0,
    B_1_3_0_1
} B130_T ;
#define WRITE_B130(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B130_MASK) | ((val << B130_START_BIT) & B130_MASK )); \
   } 

#define ENABLE_B130() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B130_MASK ); \
   }

#define DISABLE_B130() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B130_MASK ); \
   } 

#define READ_B130() \
   ((READ_REGISTER_ULONG(0x2C) & B130_MASK)  >> B130_START_BIT)

#define WHEN_B130_HIGH() \
     if ( READ_B130() )


#define UNLESS_B130_HIGH() \
     if (! READ_B130() )


#define WAIT_B130_LOW() \
    while ( READ_B130() );


#define WAIT_B130_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B130() && (--___t___ > 0)); }


#define WAIT_B130_HIGH() \
    while (! READ_B130() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b129 
    // 
#define B129_MASK 0x2U
#define B129_OFFSET 1
#define B129_START_BIT 1
#define B129_WIDTH 1



typedef enum b129 {
    B_1_2_9_0,
    B_1_2_9_1
} B129_T ;
#define WRITE_B129(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B129_MASK) | ((val << B129_START_BIT) & B129_MASK )); \
   } 

#define ENABLE_B129() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B129_MASK ); \
   }

#define DISABLE_B129() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B129_MASK ); \
   } 

#define READ_B129() \
   ((READ_REGISTER_ULONG(0x2C) & B129_MASK)  >> B129_START_BIT)

#define WHEN_B129_HIGH() \
     if ( READ_B129() )


#define UNLESS_B129_HIGH() \
     if (! READ_B129() )


#define WAIT_B129_LOW() \
    while ( READ_B129() );


#define WAIT_B129_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B129() && (--___t___ > 0)); }


#define WAIT_B129_HIGH() \
    while (! READ_B129() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K1rr
//
// Return the value of register K_1RR
//
// Notes : Register key registers (K1RR) at the offset 0x2C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b128 
    // 
#define B128_MASK 0x1U
#define B128_OFFSET 0
#define B128_START_BIT 0
#define B128_WIDTH 1



typedef enum b128 {
    B_1_2_8_0,
    B_1_2_8_1
} B128_T ;
#define WRITE_B128(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ B128_MASK) | ((val << B128_START_BIT) & B128_MASK )); \
   } 

#define ENABLE_B128() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  B128_MASK ); \
   }

#define DISABLE_B128() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~B128_MASK ); \
   } 

#define READ_B128() \
   ((READ_REGISTER_ULONG(0x2C) & B128_MASK)  >> B128_START_BIT)

#define WHEN_B128_HIGH() \
     if ( READ_B128() )


#define UNLESS_B128_HIGH() \
     if (! READ_B128() )


#define WAIT_B128_LOW() \
    while ( READ_B128() );


#define WAIT_B128_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B128() && (--___t___ > 0)); }


#define WAIT_B128_HIGH() \
    while (! READ_B128() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K2LR
//
// Notes : Register K2lr at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_2LR( y) \
     WRITE_REGISTER_ULONG( 0x30 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b127 
    // 
#define B127_MASK 0x80000000U
#define B127_OFFSET 31
#define B127_START_BIT 31
#define B127_WIDTH 1


#define K_2LR_REG 0x30

typedef enum b127 {
    B_1_2_7_0,
    B_1_2_7_1
} B127_T ;
#define WRITE_B127(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B127_MASK) | ((val << B127_START_BIT) & B127_MASK )); \
   } 

#define ENABLE_B127() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B127_MASK ); \
   }

#define DISABLE_B127() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B127_MASK ); \
   } 

#define READ_B127() \
   ((READ_REGISTER_ULONG(0x30) & B127_MASK)  >> B127_START_BIT)

#define WHEN_B127_HIGH() \
     if ( READ_B127() )


#define UNLESS_B127_HIGH() \
     if (! READ_B127() )


#define WAIT_B127_LOW() \
    while ( READ_B127() );


#define WAIT_B127_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B127() && (--___t___ > 0)); }


#define WAIT_B127_HIGH() \
    while (! READ_B127() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b126 
    // 
#define B126_MASK 0x40000000U
#define B126_OFFSET 30
#define B126_START_BIT 30
#define B126_WIDTH 1



typedef enum b126 {
    B_1_2_6_0,
    B_1_2_6_1
} B126_T ;
#define WRITE_B126(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B126_MASK) | ((val << B126_START_BIT) & B126_MASK )); \
   } 

#define ENABLE_B126() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B126_MASK ); \
   }

#define DISABLE_B126() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B126_MASK ); \
   } 

#define READ_B126() \
   ((READ_REGISTER_ULONG(0x30) & B126_MASK)  >> B126_START_BIT)

#define WHEN_B126_HIGH() \
     if ( READ_B126() )


#define UNLESS_B126_HIGH() \
     if (! READ_B126() )


#define WAIT_B126_LOW() \
    while ( READ_B126() );


#define WAIT_B126_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B126() && (--___t___ > 0)); }


#define WAIT_B126_HIGH() \
    while (! READ_B126() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b125 
    // 
#define B125_MASK 0x20000000U
#define B125_OFFSET 29
#define B125_START_BIT 29
#define B125_WIDTH 1



typedef enum b125 {
    B_1_2_5_0,
    B_1_2_5_1
} B125_T ;
#define WRITE_B125(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B125_MASK) | ((val << B125_START_BIT) & B125_MASK )); \
   } 

#define ENABLE_B125() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B125_MASK ); \
   }

#define DISABLE_B125() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B125_MASK ); \
   } 

#define READ_B125() \
   ((READ_REGISTER_ULONG(0x30) & B125_MASK)  >> B125_START_BIT)

#define WHEN_B125_HIGH() \
     if ( READ_B125() )


#define UNLESS_B125_HIGH() \
     if (! READ_B125() )


#define WAIT_B125_LOW() \
    while ( READ_B125() );


#define WAIT_B125_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B125() && (--___t___ > 0)); }


#define WAIT_B125_HIGH() \
    while (! READ_B125() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b124 
    // 
#define B124_MASK 0x10000000U
#define B124_OFFSET 28
#define B124_START_BIT 28
#define B124_WIDTH 1



typedef enum b124 {
    B_1_2_4_0,
    B_1_2_4_1
} B124_T ;
#define WRITE_B124(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B124_MASK) | ((val << B124_START_BIT) & B124_MASK )); \
   } 

#define ENABLE_B124() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B124_MASK ); \
   }

#define DISABLE_B124() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B124_MASK ); \
   } 

#define READ_B124() \
   ((READ_REGISTER_ULONG(0x30) & B124_MASK)  >> B124_START_BIT)

#define WHEN_B124_HIGH() \
     if ( READ_B124() )


#define UNLESS_B124_HIGH() \
     if (! READ_B124() )


#define WAIT_B124_LOW() \
    while ( READ_B124() );


#define WAIT_B124_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B124() && (--___t___ > 0)); }


#define WAIT_B124_HIGH() \
    while (! READ_B124() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b123 
    // 
#define B123_MASK 0x8000000U
#define B123_OFFSET 27
#define B123_START_BIT 27
#define B123_WIDTH 1



typedef enum b123 {
    B_1_2_3_0,
    B_1_2_3_1
} B123_T ;
#define WRITE_B123(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B123_MASK) | ((val << B123_START_BIT) & B123_MASK )); \
   } 

#define ENABLE_B123() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B123_MASK ); \
   }

#define DISABLE_B123() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B123_MASK ); \
   } 

#define READ_B123() \
   ((READ_REGISTER_ULONG(0x30) & B123_MASK)  >> B123_START_BIT)

#define WHEN_B123_HIGH() \
     if ( READ_B123() )


#define UNLESS_B123_HIGH() \
     if (! READ_B123() )


#define WAIT_B123_LOW() \
    while ( READ_B123() );


#define WAIT_B123_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B123() && (--___t___ > 0)); }


#define WAIT_B123_HIGH() \
    while (! READ_B123() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b122 
    // 
#define B122_MASK 0x4000000U
#define B122_OFFSET 26
#define B122_START_BIT 26
#define B122_WIDTH 1



typedef enum b122 {
    B_1_2_2_0,
    B_1_2_2_1
} B122_T ;
#define WRITE_B122(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B122_MASK) | ((val << B122_START_BIT) & B122_MASK )); \
   } 

#define ENABLE_B122() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B122_MASK ); \
   }

#define DISABLE_B122() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B122_MASK ); \
   } 

#define READ_B122() \
   ((READ_REGISTER_ULONG(0x30) & B122_MASK)  >> B122_START_BIT)

#define WHEN_B122_HIGH() \
     if ( READ_B122() )


#define UNLESS_B122_HIGH() \
     if (! READ_B122() )


#define WAIT_B122_LOW() \
    while ( READ_B122() );


#define WAIT_B122_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B122() && (--___t___ > 0)); }


#define WAIT_B122_HIGH() \
    while (! READ_B122() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b121 
    // 
#define B121_MASK 0x2000000U
#define B121_OFFSET 25
#define B121_START_BIT 25
#define B121_WIDTH 1



typedef enum b121 {
    B_1_2_1_0,
    B_1_2_1_1
} B121_T ;
#define WRITE_B121(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B121_MASK) | ((val << B121_START_BIT) & B121_MASK )); \
   } 

#define ENABLE_B121() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B121_MASK ); \
   }

#define DISABLE_B121() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B121_MASK ); \
   } 

#define READ_B121() \
   ((READ_REGISTER_ULONG(0x30) & B121_MASK)  >> B121_START_BIT)

#define WHEN_B121_HIGH() \
     if ( READ_B121() )


#define UNLESS_B121_HIGH() \
     if (! READ_B121() )


#define WAIT_B121_LOW() \
    while ( READ_B121() );


#define WAIT_B121_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B121() && (--___t___ > 0)); }


#define WAIT_B121_HIGH() \
    while (! READ_B121() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b120 
    // 
#define B120_MASK 0x1000000U
#define B120_OFFSET 24
#define B120_START_BIT 24
#define B120_WIDTH 1



typedef enum b120 {
    B_1_2_0_0,
    B_1_2_0_1
} B120_T ;
#define WRITE_B120(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B120_MASK) | ((val << B120_START_BIT) & B120_MASK )); \
   } 

#define ENABLE_B120() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B120_MASK ); \
   }

#define DISABLE_B120() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B120_MASK ); \
   } 

#define READ_B120() \
   ((READ_REGISTER_ULONG(0x30) & B120_MASK)  >> B120_START_BIT)

#define WHEN_B120_HIGH() \
     if ( READ_B120() )


#define UNLESS_B120_HIGH() \
     if (! READ_B120() )


#define WAIT_B120_LOW() \
    while ( READ_B120() );


#define WAIT_B120_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B120() && (--___t___ > 0)); }


#define WAIT_B120_HIGH() \
    while (! READ_B120() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b119 
    // 
#define B119_MASK 0x800000U
#define B119_OFFSET 23
#define B119_START_BIT 23
#define B119_WIDTH 1



typedef enum b119 {
    B_1_1_9_0,
    B_1_1_9_1
} B119_T ;
#define WRITE_B119(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B119_MASK) | ((val << B119_START_BIT) & B119_MASK )); \
   } 

#define ENABLE_B119() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B119_MASK ); \
   }

#define DISABLE_B119() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B119_MASK ); \
   } 

#define READ_B119() \
   ((READ_REGISTER_ULONG(0x30) & B119_MASK)  >> B119_START_BIT)

#define WHEN_B119_HIGH() \
     if ( READ_B119() )


#define UNLESS_B119_HIGH() \
     if (! READ_B119() )


#define WAIT_B119_LOW() \
    while ( READ_B119() );


#define WAIT_B119_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B119() && (--___t___ > 0)); }


#define WAIT_B119_HIGH() \
    while (! READ_B119() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b118 
    // 
#define B118_MASK 0x400000U
#define B118_OFFSET 22
#define B118_START_BIT 22
#define B118_WIDTH 1



typedef enum b118 {
    B_1_1_8_0,
    B_1_1_8_1
} B118_T ;
#define WRITE_B118(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B118_MASK) | ((val << B118_START_BIT) & B118_MASK )); \
   } 

#define ENABLE_B118() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B118_MASK ); \
   }

#define DISABLE_B118() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B118_MASK ); \
   } 

#define READ_B118() \
   ((READ_REGISTER_ULONG(0x30) & B118_MASK)  >> B118_START_BIT)

#define WHEN_B118_HIGH() \
     if ( READ_B118() )


#define UNLESS_B118_HIGH() \
     if (! READ_B118() )


#define WAIT_B118_LOW() \
    while ( READ_B118() );


#define WAIT_B118_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B118() && (--___t___ > 0)); }


#define WAIT_B118_HIGH() \
    while (! READ_B118() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b117 
    // 
#define B117_MASK 0x200000U
#define B117_OFFSET 21
#define B117_START_BIT 21
#define B117_WIDTH 1



typedef enum b117 {
    B_1_1_7_0,
    B_1_1_7_1
} B117_T ;
#define WRITE_B117(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B117_MASK) | ((val << B117_START_BIT) & B117_MASK )); \
   } 

#define ENABLE_B117() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B117_MASK ); \
   }

#define DISABLE_B117() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B117_MASK ); \
   } 

#define READ_B117() \
   ((READ_REGISTER_ULONG(0x30) & B117_MASK)  >> B117_START_BIT)

#define WHEN_B117_HIGH() \
     if ( READ_B117() )


#define UNLESS_B117_HIGH() \
     if (! READ_B117() )


#define WAIT_B117_LOW() \
    while ( READ_B117() );


#define WAIT_B117_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B117() && (--___t___ > 0)); }


#define WAIT_B117_HIGH() \
    while (! READ_B117() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b116 
    // 
#define B116_MASK 0x100000U
#define B116_OFFSET 20
#define B116_START_BIT 20
#define B116_WIDTH 1



typedef enum b116 {
    B_1_1_6_0,
    B_1_1_6_1
} B116_T ;
#define WRITE_B116(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B116_MASK) | ((val << B116_START_BIT) & B116_MASK )); \
   } 

#define ENABLE_B116() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B116_MASK ); \
   }

#define DISABLE_B116() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B116_MASK ); \
   } 

#define READ_B116() \
   ((READ_REGISTER_ULONG(0x30) & B116_MASK)  >> B116_START_BIT)

#define WHEN_B116_HIGH() \
     if ( READ_B116() )


#define UNLESS_B116_HIGH() \
     if (! READ_B116() )


#define WAIT_B116_LOW() \
    while ( READ_B116() );


#define WAIT_B116_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B116() && (--___t___ > 0)); }


#define WAIT_B116_HIGH() \
    while (! READ_B116() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b115 
    // 
#define B115_MASK 0x80000U
#define B115_OFFSET 19
#define B115_START_BIT 19
#define B115_WIDTH 1



typedef enum b115 {
    B_1_1_5_0,
    B_1_1_5_1
} B115_T ;
#define WRITE_B115(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B115_MASK) | ((val << B115_START_BIT) & B115_MASK )); \
   } 

#define ENABLE_B115() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B115_MASK ); \
   }

#define DISABLE_B115() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B115_MASK ); \
   } 

#define READ_B115() \
   ((READ_REGISTER_ULONG(0x30) & B115_MASK)  >> B115_START_BIT)

#define WHEN_B115_HIGH() \
     if ( READ_B115() )


#define UNLESS_B115_HIGH() \
     if (! READ_B115() )


#define WAIT_B115_LOW() \
    while ( READ_B115() );


#define WAIT_B115_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B115() && (--___t___ > 0)); }


#define WAIT_B115_HIGH() \
    while (! READ_B115() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b114 
    // 
#define B114_MASK 0x40000U
#define B114_OFFSET 18
#define B114_START_BIT 18
#define B114_WIDTH 1



typedef enum b114 {
    B_1_1_4_0,
    B_1_1_4_1
} B114_T ;
#define WRITE_B114(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B114_MASK) | ((val << B114_START_BIT) & B114_MASK )); \
   } 

#define ENABLE_B114() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B114_MASK ); \
   }

#define DISABLE_B114() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B114_MASK ); \
   } 

#define READ_B114() \
   ((READ_REGISTER_ULONG(0x30) & B114_MASK)  >> B114_START_BIT)

#define WHEN_B114_HIGH() \
     if ( READ_B114() )


#define UNLESS_B114_HIGH() \
     if (! READ_B114() )


#define WAIT_B114_LOW() \
    while ( READ_B114() );


#define WAIT_B114_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B114() && (--___t___ > 0)); }


#define WAIT_B114_HIGH() \
    while (! READ_B114() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b113 
    // 
#define B113_MASK 0x20000U
#define B113_OFFSET 17
#define B113_START_BIT 17
#define B113_WIDTH 1



typedef enum b113 {
    B_1_1_3_0,
    B_1_1_3_1
} B113_T ;
#define WRITE_B113(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B113_MASK) | ((val << B113_START_BIT) & B113_MASK )); \
   } 

#define ENABLE_B113() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B113_MASK ); \
   }

#define DISABLE_B113() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B113_MASK ); \
   } 

#define READ_B113() \
   ((READ_REGISTER_ULONG(0x30) & B113_MASK)  >> B113_START_BIT)

#define WHEN_B113_HIGH() \
     if ( READ_B113() )


#define UNLESS_B113_HIGH() \
     if (! READ_B113() )


#define WAIT_B113_LOW() \
    while ( READ_B113() );


#define WAIT_B113_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B113() && (--___t___ > 0)); }


#define WAIT_B113_HIGH() \
    while (! READ_B113() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b112 
    // 
#define B112_MASK 0x10000U
#define B112_OFFSET 16
#define B112_START_BIT 16
#define B112_WIDTH 1



typedef enum b112 {
    B_1_1_2_0,
    B_1_1_2_1
} B112_T ;
#define WRITE_B112(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B112_MASK) | ((val << B112_START_BIT) & B112_MASK )); \
   } 

#define ENABLE_B112() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B112_MASK ); \
   }

#define DISABLE_B112() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B112_MASK ); \
   } 

#define READ_B112() \
   ((READ_REGISTER_ULONG(0x30) & B112_MASK)  >> B112_START_BIT)

#define WHEN_B112_HIGH() \
     if ( READ_B112() )


#define UNLESS_B112_HIGH() \
     if (! READ_B112() )


#define WAIT_B112_LOW() \
    while ( READ_B112() );


#define WAIT_B112_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B112() && (--___t___ > 0)); }


#define WAIT_B112_HIGH() \
    while (! READ_B112() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b111 
    // 
#define B111_MASK 0x8000U
#define B111_OFFSET 15
#define B111_START_BIT 15
#define B111_WIDTH 1



typedef enum b111 {
    B_1_1_1_0,
    B_1_1_1_1
} B111_T ;
#define WRITE_B111(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B111_MASK) | ((val << B111_START_BIT) & B111_MASK )); \
   } 

#define ENABLE_B111() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B111_MASK ); \
   }

#define DISABLE_B111() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B111_MASK ); \
   } 

#define READ_B111() \
   ((READ_REGISTER_ULONG(0x30) & B111_MASK)  >> B111_START_BIT)

#define WHEN_B111_HIGH() \
     if ( READ_B111() )


#define UNLESS_B111_HIGH() \
     if (! READ_B111() )


#define WAIT_B111_LOW() \
    while ( READ_B111() );


#define WAIT_B111_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B111() && (--___t___ > 0)); }


#define WAIT_B111_HIGH() \
    while (! READ_B111() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b110 
    // 
#define B110_MASK 0x4000U
#define B110_OFFSET 14
#define B110_START_BIT 14
#define B110_WIDTH 1



typedef enum b110 {
    B_1_1_0_0,
    B_1_1_0_1
} B110_T ;
#define WRITE_B110(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B110_MASK) | ((val << B110_START_BIT) & B110_MASK )); \
   } 

#define ENABLE_B110() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B110_MASK ); \
   }

#define DISABLE_B110() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B110_MASK ); \
   } 

#define READ_B110() \
   ((READ_REGISTER_ULONG(0x30) & B110_MASK)  >> B110_START_BIT)

#define WHEN_B110_HIGH() \
     if ( READ_B110() )


#define UNLESS_B110_HIGH() \
     if (! READ_B110() )


#define WAIT_B110_LOW() \
    while ( READ_B110() );


#define WAIT_B110_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B110() && (--___t___ > 0)); }


#define WAIT_B110_HIGH() \
    while (! READ_B110() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b109 
    // 
#define B109_MASK 0x2000U
#define B109_OFFSET 13
#define B109_START_BIT 13
#define B109_WIDTH 1



typedef enum b109 {
    B_1_0_9_0,
    B_1_0_9_1
} B109_T ;
#define WRITE_B109(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B109_MASK) | ((val << B109_START_BIT) & B109_MASK )); \
   } 

#define ENABLE_B109() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B109_MASK ); \
   }

#define DISABLE_B109() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B109_MASK ); \
   } 

#define READ_B109() \
   ((READ_REGISTER_ULONG(0x30) & B109_MASK)  >> B109_START_BIT)

#define WHEN_B109_HIGH() \
     if ( READ_B109() )


#define UNLESS_B109_HIGH() \
     if (! READ_B109() )


#define WAIT_B109_LOW() \
    while ( READ_B109() );


#define WAIT_B109_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B109() && (--___t___ > 0)); }


#define WAIT_B109_HIGH() \
    while (! READ_B109() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b108 
    // 
#define B108_MASK 0x1000U
#define B108_OFFSET 12
#define B108_START_BIT 12
#define B108_WIDTH 1



typedef enum b108 {
    B_1_0_8_0,
    B_1_0_8_1
} B108_T ;
#define WRITE_B108(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B108_MASK) | ((val << B108_START_BIT) & B108_MASK )); \
   } 

#define ENABLE_B108() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B108_MASK ); \
   }

#define DISABLE_B108() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B108_MASK ); \
   } 

#define READ_B108() \
   ((READ_REGISTER_ULONG(0x30) & B108_MASK)  >> B108_START_BIT)

#define WHEN_B108_HIGH() \
     if ( READ_B108() )


#define UNLESS_B108_HIGH() \
     if (! READ_B108() )


#define WAIT_B108_LOW() \
    while ( READ_B108() );


#define WAIT_B108_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B108() && (--___t___ > 0)); }


#define WAIT_B108_HIGH() \
    while (! READ_B108() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b107 
    // 
#define B107_MASK 0x800U
#define B107_OFFSET 11
#define B107_START_BIT 11
#define B107_WIDTH 1



typedef enum b107 {
    B_1_0_7_0,
    B_1_0_7_1
} B107_T ;
#define WRITE_B107(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B107_MASK) | ((val << B107_START_BIT) & B107_MASK )); \
   } 

#define ENABLE_B107() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B107_MASK ); \
   }

#define DISABLE_B107() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B107_MASK ); \
   } 

#define READ_B107() \
   ((READ_REGISTER_ULONG(0x30) & B107_MASK)  >> B107_START_BIT)

#define WHEN_B107_HIGH() \
     if ( READ_B107() )


#define UNLESS_B107_HIGH() \
     if (! READ_B107() )


#define WAIT_B107_LOW() \
    while ( READ_B107() );


#define WAIT_B107_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B107() && (--___t___ > 0)); }


#define WAIT_B107_HIGH() \
    while (! READ_B107() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b106 
    // 
#define B106_MASK 0x400U
#define B106_OFFSET 10
#define B106_START_BIT 10
#define B106_WIDTH 1



typedef enum b106 {
    B_1_0_6_0,
    B_1_0_6_1
} B106_T ;
#define WRITE_B106(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B106_MASK) | ((val << B106_START_BIT) & B106_MASK )); \
   } 

#define ENABLE_B106() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B106_MASK ); \
   }

#define DISABLE_B106() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B106_MASK ); \
   } 

#define READ_B106() \
   ((READ_REGISTER_ULONG(0x30) & B106_MASK)  >> B106_START_BIT)

#define WHEN_B106_HIGH() \
     if ( READ_B106() )


#define UNLESS_B106_HIGH() \
     if (! READ_B106() )


#define WAIT_B106_LOW() \
    while ( READ_B106() );


#define WAIT_B106_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B106() && (--___t___ > 0)); }


#define WAIT_B106_HIGH() \
    while (! READ_B106() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b105 
    // 
#define B105_MASK 0x200U
#define B105_OFFSET 9
#define B105_START_BIT 9
#define B105_WIDTH 1



typedef enum b105 {
    B_1_0_5_0,
    B_1_0_5_1
} B105_T ;
#define WRITE_B105(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B105_MASK) | ((val << B105_START_BIT) & B105_MASK )); \
   } 

#define ENABLE_B105() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B105_MASK ); \
   }

#define DISABLE_B105() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B105_MASK ); \
   } 

#define READ_B105() \
   ((READ_REGISTER_ULONG(0x30) & B105_MASK)  >> B105_START_BIT)

#define WHEN_B105_HIGH() \
     if ( READ_B105() )


#define UNLESS_B105_HIGH() \
     if (! READ_B105() )


#define WAIT_B105_LOW() \
    while ( READ_B105() );


#define WAIT_B105_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B105() && (--___t___ > 0)); }


#define WAIT_B105_HIGH() \
    while (! READ_B105() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b104 
    // 
#define B104_MASK 0x100U
#define B104_OFFSET 8
#define B104_START_BIT 8
#define B104_WIDTH 1



typedef enum b104 {
    B_1_0_4_0,
    B_1_0_4_1
} B104_T ;
#define WRITE_B104(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B104_MASK) | ((val << B104_START_BIT) & B104_MASK )); \
   } 

#define ENABLE_B104() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B104_MASK ); \
   }

#define DISABLE_B104() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B104_MASK ); \
   } 

#define READ_B104() \
   ((READ_REGISTER_ULONG(0x30) & B104_MASK)  >> B104_START_BIT)

#define WHEN_B104_HIGH() \
     if ( READ_B104() )


#define UNLESS_B104_HIGH() \
     if (! READ_B104() )


#define WAIT_B104_LOW() \
    while ( READ_B104() );


#define WAIT_B104_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B104() && (--___t___ > 0)); }


#define WAIT_B104_HIGH() \
    while (! READ_B104() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b103 
    // 
#define B103_MASK 0x80U
#define B103_OFFSET 7
#define B103_START_BIT 7
#define B103_WIDTH 1



typedef enum b103 {
    B_1_0_3_0,
    B_1_0_3_1
} B103_T ;
#define WRITE_B103(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B103_MASK) | ((val << B103_START_BIT) & B103_MASK )); \
   } 

#define ENABLE_B103() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B103_MASK ); \
   }

#define DISABLE_B103() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B103_MASK ); \
   } 

#define READ_B103() \
   ((READ_REGISTER_ULONG(0x30) & B103_MASK)  >> B103_START_BIT)

#define WHEN_B103_HIGH() \
     if ( READ_B103() )


#define UNLESS_B103_HIGH() \
     if (! READ_B103() )


#define WAIT_B103_LOW() \
    while ( READ_B103() );


#define WAIT_B103_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B103() && (--___t___ > 0)); }


#define WAIT_B103_HIGH() \
    while (! READ_B103() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b102 
    // 
#define B102_MASK 0x40U
#define B102_OFFSET 6
#define B102_START_BIT 6
#define B102_WIDTH 1



typedef enum b102 {
    B_1_0_2_0,
    B_1_0_2_1
} B102_T ;
#define WRITE_B102(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B102_MASK) | ((val << B102_START_BIT) & B102_MASK )); \
   } 

#define ENABLE_B102() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B102_MASK ); \
   }

#define DISABLE_B102() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B102_MASK ); \
   } 

#define READ_B102() \
   ((READ_REGISTER_ULONG(0x30) & B102_MASK)  >> B102_START_BIT)

#define WHEN_B102_HIGH() \
     if ( READ_B102() )


#define UNLESS_B102_HIGH() \
     if (! READ_B102() )


#define WAIT_B102_LOW() \
    while ( READ_B102() );


#define WAIT_B102_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B102() && (--___t___ > 0)); }


#define WAIT_B102_HIGH() \
    while (! READ_B102() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b101 
    // 
#define B101_MASK 0x20U
#define B101_OFFSET 5
#define B101_START_BIT 5
#define B101_WIDTH 1



typedef enum b101 {
    B_1_0_1_0,
    B_1_0_1_1
} B101_T ;
#define WRITE_B101(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B101_MASK) | ((val << B101_START_BIT) & B101_MASK )); \
   } 

#define ENABLE_B101() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B101_MASK ); \
   }

#define DISABLE_B101() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B101_MASK ); \
   } 

#define READ_B101() \
   ((READ_REGISTER_ULONG(0x30) & B101_MASK)  >> B101_START_BIT)

#define WHEN_B101_HIGH() \
     if ( READ_B101() )


#define UNLESS_B101_HIGH() \
     if (! READ_B101() )


#define WAIT_B101_LOW() \
    while ( READ_B101() );


#define WAIT_B101_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B101() && (--___t___ > 0)); }


#define WAIT_B101_HIGH() \
    while (! READ_B101() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b100 
    // 
#define B100_MASK 0x10U
#define B100_OFFSET 4
#define B100_START_BIT 4
#define B100_WIDTH 1



typedef enum b100 {
    B_1_0_0_0,
    B_1_0_0_1
} B100_T ;
#define WRITE_B100(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B100_MASK) | ((val << B100_START_BIT) & B100_MASK )); \
   } 

#define ENABLE_B100() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B100_MASK ); \
   }

#define DISABLE_B100() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B100_MASK ); \
   } 

#define READ_B100() \
   ((READ_REGISTER_ULONG(0x30) & B100_MASK)  >> B100_START_BIT)

#define WHEN_B100_HIGH() \
     if ( READ_B100() )


#define UNLESS_B100_HIGH() \
     if (! READ_B100() )


#define WAIT_B100_LOW() \
    while ( READ_B100() );


#define WAIT_B100_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B100() && (--___t___ > 0)); }


#define WAIT_B100_HIGH() \
    while (! READ_B100() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b99 
    // 
#define B99_MASK 0x8U
#define B99_OFFSET 3
#define B99_START_BIT 3
#define B99_WIDTH 1



typedef enum b99 {
    B_9_9_0,
    B_9_9_1
} B99_T ;
#define WRITE_B99(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B99_MASK) | ((val << B99_START_BIT) & B99_MASK )); \
   } 

#define ENABLE_B99() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B99_MASK ); \
   }

#define DISABLE_B99() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B99_MASK ); \
   } 

#define READ_B99() \
   ((READ_REGISTER_ULONG(0x30) & B99_MASK)  >> B99_START_BIT)

#define WHEN_B99_HIGH() \
     if ( READ_B99() )


#define UNLESS_B99_HIGH() \
     if (! READ_B99() )


#define WAIT_B99_LOW() \
    while ( READ_B99() );


#define WAIT_B99_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B99() && (--___t___ > 0)); }


#define WAIT_B99_HIGH() \
    while (! READ_B99() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b98 
    // 
#define B98_MASK 0x4U
#define B98_OFFSET 2
#define B98_START_BIT 2
#define B98_WIDTH 1



typedef enum b98 {
    B_9_8_0,
    B_9_8_1
} B98_T ;
#define WRITE_B98(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B98_MASK) | ((val << B98_START_BIT) & B98_MASK )); \
   } 

#define ENABLE_B98() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B98_MASK ); \
   }

#define DISABLE_B98() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B98_MASK ); \
   } 

#define READ_B98() \
   ((READ_REGISTER_ULONG(0x30) & B98_MASK)  >> B98_START_BIT)

#define WHEN_B98_HIGH() \
     if ( READ_B98() )


#define UNLESS_B98_HIGH() \
     if (! READ_B98() )


#define WAIT_B98_LOW() \
    while ( READ_B98() );


#define WAIT_B98_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B98() && (--___t___ > 0)); }


#define WAIT_B98_HIGH() \
    while (! READ_B98() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b97 
    // 
#define B97_MASK 0x2U
#define B97_OFFSET 1
#define B97_START_BIT 1
#define B97_WIDTH 1



typedef enum b97 {
    B_9_7_0,
    B_9_7_1
} B97_T ;
#define WRITE_B97(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B97_MASK) | ((val << B97_START_BIT) & B97_MASK )); \
   } 

#define ENABLE_B97() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B97_MASK ); \
   }

#define DISABLE_B97() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B97_MASK ); \
   } 

#define READ_B97() \
   ((READ_REGISTER_ULONG(0x30) & B97_MASK)  >> B97_START_BIT)

#define WHEN_B97_HIGH() \
     if ( READ_B97() )


#define UNLESS_B97_HIGH() \
     if (! READ_B97() )


#define WAIT_B97_LOW() \
    while ( READ_B97() );


#define WAIT_B97_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B97() && (--___t___ > 0)); }


#define WAIT_B97_HIGH() \
    while (! READ_B97() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2lr
//
// Return the value of register K_2LR
//
// Notes : Register key registers (K2LR) at the offset 0x30, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b96 
    // 
#define B96_MASK 0x1U
#define B96_OFFSET 0
#define B96_START_BIT 0
#define B96_WIDTH 1



typedef enum b96 {
    B_9_6_0,
    B_9_6_1
} B96_T ;
#define WRITE_B96(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ B96_MASK) | ((val << B96_START_BIT) & B96_MASK )); \
   } 

#define ENABLE_B96() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  B96_MASK ); \
   }

#define DISABLE_B96() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~B96_MASK ); \
   } 

#define READ_B96() \
   ((READ_REGISTER_ULONG(0x30) & B96_MASK)  >> B96_START_BIT)

#define WHEN_B96_HIGH() \
     if ( READ_B96() )


#define UNLESS_B96_HIGH() \
     if (! READ_B96() )


#define WAIT_B96_LOW() \
    while ( READ_B96() );


#define WAIT_B96_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B96() && (--___t___ > 0)); }


#define WAIT_B96_HIGH() \
    while (! READ_B96() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K2RR
//
// Notes : Register K2rr at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_2RR( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b95 
    // 
#define B95_MASK 0x80000000U
#define B95_OFFSET 31
#define B95_START_BIT 31
#define B95_WIDTH 1


#define K_2RR_REG 0x34

typedef enum b95 {
    B_9_5_0,
    B_9_5_1
} B95_T ;
#define WRITE_B95(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B95_MASK) | ((val << B95_START_BIT) & B95_MASK )); \
   } 

#define ENABLE_B95() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B95_MASK ); \
   }

#define DISABLE_B95() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B95_MASK ); \
   } 

#define READ_B95() \
   ((READ_REGISTER_ULONG(0x34) & B95_MASK)  >> B95_START_BIT)

#define WHEN_B95_HIGH() \
     if ( READ_B95() )


#define UNLESS_B95_HIGH() \
     if (! READ_B95() )


#define WAIT_B95_LOW() \
    while ( READ_B95() );


#define WAIT_B95_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B95() && (--___t___ > 0)); }


#define WAIT_B95_HIGH() \
    while (! READ_B95() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b94 
    // 
#define B94_MASK 0x40000000U
#define B94_OFFSET 30
#define B94_START_BIT 30
#define B94_WIDTH 1



typedef enum b94 {
    B_9_4_0,
    B_9_4_1
} B94_T ;
#define WRITE_B94(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B94_MASK) | ((val << B94_START_BIT) & B94_MASK )); \
   } 

#define ENABLE_B94() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B94_MASK ); \
   }

#define DISABLE_B94() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B94_MASK ); \
   } 

#define READ_B94() \
   ((READ_REGISTER_ULONG(0x34) & B94_MASK)  >> B94_START_BIT)

#define WHEN_B94_HIGH() \
     if ( READ_B94() )


#define UNLESS_B94_HIGH() \
     if (! READ_B94() )


#define WAIT_B94_LOW() \
    while ( READ_B94() );


#define WAIT_B94_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B94() && (--___t___ > 0)); }


#define WAIT_B94_HIGH() \
    while (! READ_B94() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b93 
    // 
#define B93_MASK 0x20000000U
#define B93_OFFSET 29
#define B93_START_BIT 29
#define B93_WIDTH 1



typedef enum b93 {
    B_9_3_0,
    B_9_3_1
} B93_T ;
#define WRITE_B93(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B93_MASK) | ((val << B93_START_BIT) & B93_MASK )); \
   } 

#define ENABLE_B93() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B93_MASK ); \
   }

#define DISABLE_B93() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B93_MASK ); \
   } 

#define READ_B93() \
   ((READ_REGISTER_ULONG(0x34) & B93_MASK)  >> B93_START_BIT)

#define WHEN_B93_HIGH() \
     if ( READ_B93() )


#define UNLESS_B93_HIGH() \
     if (! READ_B93() )


#define WAIT_B93_LOW() \
    while ( READ_B93() );


#define WAIT_B93_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B93() && (--___t___ > 0)); }


#define WAIT_B93_HIGH() \
    while (! READ_B93() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b92 
    // 
#define B92_MASK 0x10000000U
#define B92_OFFSET 28
#define B92_START_BIT 28
#define B92_WIDTH 1



typedef enum b92 {
    B_9_2_0,
    B_9_2_1
} B92_T ;
#define WRITE_B92(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B92_MASK) | ((val << B92_START_BIT) & B92_MASK )); \
   } 

#define ENABLE_B92() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B92_MASK ); \
   }

#define DISABLE_B92() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B92_MASK ); \
   } 

#define READ_B92() \
   ((READ_REGISTER_ULONG(0x34) & B92_MASK)  >> B92_START_BIT)

#define WHEN_B92_HIGH() \
     if ( READ_B92() )


#define UNLESS_B92_HIGH() \
     if (! READ_B92() )


#define WAIT_B92_LOW() \
    while ( READ_B92() );


#define WAIT_B92_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B92() && (--___t___ > 0)); }


#define WAIT_B92_HIGH() \
    while (! READ_B92() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b91 
    // 
#define B91_MASK 0x8000000U
#define B91_OFFSET 27
#define B91_START_BIT 27
#define B91_WIDTH 1



typedef enum b91 {
    B_9_1_0,
    B_9_1_1
} B91_T ;
#define WRITE_B91(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B91_MASK) | ((val << B91_START_BIT) & B91_MASK )); \
   } 

#define ENABLE_B91() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B91_MASK ); \
   }

#define DISABLE_B91() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B91_MASK ); \
   } 

#define READ_B91() \
   ((READ_REGISTER_ULONG(0x34) & B91_MASK)  >> B91_START_BIT)

#define WHEN_B91_HIGH() \
     if ( READ_B91() )


#define UNLESS_B91_HIGH() \
     if (! READ_B91() )


#define WAIT_B91_LOW() \
    while ( READ_B91() );


#define WAIT_B91_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B91() && (--___t___ > 0)); }


#define WAIT_B91_HIGH() \
    while (! READ_B91() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b90 
    // 
#define B90_MASK 0x4000000U
#define B90_OFFSET 26
#define B90_START_BIT 26
#define B90_WIDTH 1



typedef enum b90 {
    B_9_0_0,
    B_9_0_1
} B90_T ;
#define WRITE_B90(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B90_MASK) | ((val << B90_START_BIT) & B90_MASK )); \
   } 

#define ENABLE_B90() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B90_MASK ); \
   }

#define DISABLE_B90() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B90_MASK ); \
   } 

#define READ_B90() \
   ((READ_REGISTER_ULONG(0x34) & B90_MASK)  >> B90_START_BIT)

#define WHEN_B90_HIGH() \
     if ( READ_B90() )


#define UNLESS_B90_HIGH() \
     if (! READ_B90() )


#define WAIT_B90_LOW() \
    while ( READ_B90() );


#define WAIT_B90_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B90() && (--___t___ > 0)); }


#define WAIT_B90_HIGH() \
    while (! READ_B90() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b89 
    // 
#define B89_MASK 0x2000000U
#define B89_OFFSET 25
#define B89_START_BIT 25
#define B89_WIDTH 1



typedef enum b89 {
    B_8_9_0,
    B_8_9_1
} B89_T ;
#define WRITE_B89(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B89_MASK) | ((val << B89_START_BIT) & B89_MASK )); \
   } 

#define ENABLE_B89() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B89_MASK ); \
   }

#define DISABLE_B89() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B89_MASK ); \
   } 

#define READ_B89() \
   ((READ_REGISTER_ULONG(0x34) & B89_MASK)  >> B89_START_BIT)

#define WHEN_B89_HIGH() \
     if ( READ_B89() )


#define UNLESS_B89_HIGH() \
     if (! READ_B89() )


#define WAIT_B89_LOW() \
    while ( READ_B89() );


#define WAIT_B89_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B89() && (--___t___ > 0)); }


#define WAIT_B89_HIGH() \
    while (! READ_B89() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b88 
    // 
#define B88_MASK 0x1000000U
#define B88_OFFSET 24
#define B88_START_BIT 24
#define B88_WIDTH 1



typedef enum b88 {
    B_8_8_0,
    B_8_8_1
} B88_T ;
#define WRITE_B88(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B88_MASK) | ((val << B88_START_BIT) & B88_MASK )); \
   } 

#define ENABLE_B88() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B88_MASK ); \
   }

#define DISABLE_B88() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B88_MASK ); \
   } 

#define READ_B88() \
   ((READ_REGISTER_ULONG(0x34) & B88_MASK)  >> B88_START_BIT)

#define WHEN_B88_HIGH() \
     if ( READ_B88() )


#define UNLESS_B88_HIGH() \
     if (! READ_B88() )


#define WAIT_B88_LOW() \
    while ( READ_B88() );


#define WAIT_B88_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B88() && (--___t___ > 0)); }


#define WAIT_B88_HIGH() \
    while (! READ_B88() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b87 
    // 
#define B87_MASK 0x800000U
#define B87_OFFSET 23
#define B87_START_BIT 23
#define B87_WIDTH 1



typedef enum b87 {
    B_8_7_0,
    B_8_7_1
} B87_T ;
#define WRITE_B87(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B87_MASK) | ((val << B87_START_BIT) & B87_MASK )); \
   } 

#define ENABLE_B87() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B87_MASK ); \
   }

#define DISABLE_B87() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B87_MASK ); \
   } 

#define READ_B87() \
   ((READ_REGISTER_ULONG(0x34) & B87_MASK)  >> B87_START_BIT)

#define WHEN_B87_HIGH() \
     if ( READ_B87() )


#define UNLESS_B87_HIGH() \
     if (! READ_B87() )


#define WAIT_B87_LOW() \
    while ( READ_B87() );


#define WAIT_B87_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B87() && (--___t___ > 0)); }


#define WAIT_B87_HIGH() \
    while (! READ_B87() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b86 
    // 
#define B86_MASK 0x400000U
#define B86_OFFSET 22
#define B86_START_BIT 22
#define B86_WIDTH 1



typedef enum b86 {
    B_8_6_0,
    B_8_6_1
} B86_T ;
#define WRITE_B86(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B86_MASK) | ((val << B86_START_BIT) & B86_MASK )); \
   } 

#define ENABLE_B86() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B86_MASK ); \
   }

#define DISABLE_B86() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B86_MASK ); \
   } 

#define READ_B86() \
   ((READ_REGISTER_ULONG(0x34) & B86_MASK)  >> B86_START_BIT)

#define WHEN_B86_HIGH() \
     if ( READ_B86() )


#define UNLESS_B86_HIGH() \
     if (! READ_B86() )


#define WAIT_B86_LOW() \
    while ( READ_B86() );


#define WAIT_B86_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B86() && (--___t___ > 0)); }


#define WAIT_B86_HIGH() \
    while (! READ_B86() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b85 
    // 
#define B85_MASK 0x200000U
#define B85_OFFSET 21
#define B85_START_BIT 21
#define B85_WIDTH 1



typedef enum b85 {
    B_8_5_0,
    B_8_5_1
} B85_T ;
#define WRITE_B85(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B85_MASK) | ((val << B85_START_BIT) & B85_MASK )); \
   } 

#define ENABLE_B85() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B85_MASK ); \
   }

#define DISABLE_B85() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B85_MASK ); \
   } 

#define READ_B85() \
   ((READ_REGISTER_ULONG(0x34) & B85_MASK)  >> B85_START_BIT)

#define WHEN_B85_HIGH() \
     if ( READ_B85() )


#define UNLESS_B85_HIGH() \
     if (! READ_B85() )


#define WAIT_B85_LOW() \
    while ( READ_B85() );


#define WAIT_B85_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B85() && (--___t___ > 0)); }


#define WAIT_B85_HIGH() \
    while (! READ_B85() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b84 
    // 
#define B84_MASK 0x100000U
#define B84_OFFSET 20
#define B84_START_BIT 20
#define B84_WIDTH 1



typedef enum b84 {
    B_8_4_0,
    B_8_4_1
} B84_T ;
#define WRITE_B84(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B84_MASK) | ((val << B84_START_BIT) & B84_MASK )); \
   } 

#define ENABLE_B84() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B84_MASK ); \
   }

#define DISABLE_B84() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B84_MASK ); \
   } 

#define READ_B84() \
   ((READ_REGISTER_ULONG(0x34) & B84_MASK)  >> B84_START_BIT)

#define WHEN_B84_HIGH() \
     if ( READ_B84() )


#define UNLESS_B84_HIGH() \
     if (! READ_B84() )


#define WAIT_B84_LOW() \
    while ( READ_B84() );


#define WAIT_B84_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B84() && (--___t___ > 0)); }


#define WAIT_B84_HIGH() \
    while (! READ_B84() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b83 
    // 
#define B83_MASK 0x80000U
#define B83_OFFSET 19
#define B83_START_BIT 19
#define B83_WIDTH 1



typedef enum b83 {
    B_8_3_0,
    B_8_3_1
} B83_T ;
#define WRITE_B83(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B83_MASK) | ((val << B83_START_BIT) & B83_MASK )); \
   } 

#define ENABLE_B83() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B83_MASK ); \
   }

#define DISABLE_B83() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B83_MASK ); \
   } 

#define READ_B83() \
   ((READ_REGISTER_ULONG(0x34) & B83_MASK)  >> B83_START_BIT)

#define WHEN_B83_HIGH() \
     if ( READ_B83() )


#define UNLESS_B83_HIGH() \
     if (! READ_B83() )


#define WAIT_B83_LOW() \
    while ( READ_B83() );


#define WAIT_B83_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B83() && (--___t___ > 0)); }


#define WAIT_B83_HIGH() \
    while (! READ_B83() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b82 
    // 
#define B82_MASK 0x40000U
#define B82_OFFSET 18
#define B82_START_BIT 18
#define B82_WIDTH 1



typedef enum b82 {
    B_8_2_0,
    B_8_2_1
} B82_T ;
#define WRITE_B82(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B82_MASK) | ((val << B82_START_BIT) & B82_MASK )); \
   } 

#define ENABLE_B82() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B82_MASK ); \
   }

#define DISABLE_B82() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B82_MASK ); \
   } 

#define READ_B82() \
   ((READ_REGISTER_ULONG(0x34) & B82_MASK)  >> B82_START_BIT)

#define WHEN_B82_HIGH() \
     if ( READ_B82() )


#define UNLESS_B82_HIGH() \
     if (! READ_B82() )


#define WAIT_B82_LOW() \
    while ( READ_B82() );


#define WAIT_B82_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B82() && (--___t___ > 0)); }


#define WAIT_B82_HIGH() \
    while (! READ_B82() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b81 
    // 
#define B81_MASK 0x20000U
#define B81_OFFSET 17
#define B81_START_BIT 17
#define B81_WIDTH 1



typedef enum b81 {
    B_8_1_0,
    B_8_1_1
} B81_T ;
#define WRITE_B81(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B81_MASK) | ((val << B81_START_BIT) & B81_MASK )); \
   } 

#define ENABLE_B81() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B81_MASK ); \
   }

#define DISABLE_B81() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B81_MASK ); \
   } 

#define READ_B81() \
   ((READ_REGISTER_ULONG(0x34) & B81_MASK)  >> B81_START_BIT)

#define WHEN_B81_HIGH() \
     if ( READ_B81() )


#define UNLESS_B81_HIGH() \
     if (! READ_B81() )


#define WAIT_B81_LOW() \
    while ( READ_B81() );


#define WAIT_B81_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B81() && (--___t___ > 0)); }


#define WAIT_B81_HIGH() \
    while (! READ_B81() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b80 
    // 
#define B80_MASK 0x10000U
#define B80_OFFSET 16
#define B80_START_BIT 16
#define B80_WIDTH 1



typedef enum b80 {
    B_8_0_0,
    B_8_0_1
} B80_T ;
#define WRITE_B80(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B80_MASK) | ((val << B80_START_BIT) & B80_MASK )); \
   } 

#define ENABLE_B80() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B80_MASK ); \
   }

#define DISABLE_B80() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B80_MASK ); \
   } 

#define READ_B80() \
   ((READ_REGISTER_ULONG(0x34) & B80_MASK)  >> B80_START_BIT)

#define WHEN_B80_HIGH() \
     if ( READ_B80() )


#define UNLESS_B80_HIGH() \
     if (! READ_B80() )


#define WAIT_B80_LOW() \
    while ( READ_B80() );


#define WAIT_B80_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B80() && (--___t___ > 0)); }


#define WAIT_B80_HIGH() \
    while (! READ_B80() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b79 
    // 
#define B79_MASK 0x8000U
#define B79_OFFSET 15
#define B79_START_BIT 15
#define B79_WIDTH 1



typedef enum b79 {
    B_7_9_0,
    B_7_9_1
} B79_T ;
#define WRITE_B79(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B79_MASK) | ((val << B79_START_BIT) & B79_MASK )); \
   } 

#define ENABLE_B79() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B79_MASK ); \
   }

#define DISABLE_B79() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B79_MASK ); \
   } 

#define READ_B79() \
   ((READ_REGISTER_ULONG(0x34) & B79_MASK)  >> B79_START_BIT)

#define WHEN_B79_HIGH() \
     if ( READ_B79() )


#define UNLESS_B79_HIGH() \
     if (! READ_B79() )


#define WAIT_B79_LOW() \
    while ( READ_B79() );


#define WAIT_B79_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B79() && (--___t___ > 0)); }


#define WAIT_B79_HIGH() \
    while (! READ_B79() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b78 
    // 
#define B78_MASK 0x4000U
#define B78_OFFSET 14
#define B78_START_BIT 14
#define B78_WIDTH 1



typedef enum b78 {
    B_7_8_0,
    B_7_8_1
} B78_T ;
#define WRITE_B78(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B78_MASK) | ((val << B78_START_BIT) & B78_MASK )); \
   } 

#define ENABLE_B78() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B78_MASK ); \
   }

#define DISABLE_B78() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B78_MASK ); \
   } 

#define READ_B78() \
   ((READ_REGISTER_ULONG(0x34) & B78_MASK)  >> B78_START_BIT)

#define WHEN_B78_HIGH() \
     if ( READ_B78() )


#define UNLESS_B78_HIGH() \
     if (! READ_B78() )


#define WAIT_B78_LOW() \
    while ( READ_B78() );


#define WAIT_B78_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B78() && (--___t___ > 0)); }


#define WAIT_B78_HIGH() \
    while (! READ_B78() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b77 
    // 
#define B77_MASK 0x2000U
#define B77_OFFSET 13
#define B77_START_BIT 13
#define B77_WIDTH 1



typedef enum b77 {
    B_7_7_0,
    B_7_7_1
} B77_T ;
#define WRITE_B77(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B77_MASK) | ((val << B77_START_BIT) & B77_MASK )); \
   } 

#define ENABLE_B77() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B77_MASK ); \
   }

#define DISABLE_B77() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B77_MASK ); \
   } 

#define READ_B77() \
   ((READ_REGISTER_ULONG(0x34) & B77_MASK)  >> B77_START_BIT)

#define WHEN_B77_HIGH() \
     if ( READ_B77() )


#define UNLESS_B77_HIGH() \
     if (! READ_B77() )


#define WAIT_B77_LOW() \
    while ( READ_B77() );


#define WAIT_B77_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B77() && (--___t___ > 0)); }


#define WAIT_B77_HIGH() \
    while (! READ_B77() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b76 
    // 
#define B76_MASK 0x1000U
#define B76_OFFSET 12
#define B76_START_BIT 12
#define B76_WIDTH 1



typedef enum b76 {
    B_7_6_0,
    B_7_6_1
} B76_T ;
#define WRITE_B76(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B76_MASK) | ((val << B76_START_BIT) & B76_MASK )); \
   } 

#define ENABLE_B76() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B76_MASK ); \
   }

#define DISABLE_B76() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B76_MASK ); \
   } 

#define READ_B76() \
   ((READ_REGISTER_ULONG(0x34) & B76_MASK)  >> B76_START_BIT)

#define WHEN_B76_HIGH() \
     if ( READ_B76() )


#define UNLESS_B76_HIGH() \
     if (! READ_B76() )


#define WAIT_B76_LOW() \
    while ( READ_B76() );


#define WAIT_B76_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B76() && (--___t___ > 0)); }


#define WAIT_B76_HIGH() \
    while (! READ_B76() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b75 
    // 
#define B75_MASK 0x800U
#define B75_OFFSET 11
#define B75_START_BIT 11
#define B75_WIDTH 1



typedef enum b75 {
    B_7_5_0,
    B_7_5_1
} B75_T ;
#define WRITE_B75(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B75_MASK) | ((val << B75_START_BIT) & B75_MASK )); \
   } 

#define ENABLE_B75() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B75_MASK ); \
   }

#define DISABLE_B75() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B75_MASK ); \
   } 

#define READ_B75() \
   ((READ_REGISTER_ULONG(0x34) & B75_MASK)  >> B75_START_BIT)

#define WHEN_B75_HIGH() \
     if ( READ_B75() )


#define UNLESS_B75_HIGH() \
     if (! READ_B75() )


#define WAIT_B75_LOW() \
    while ( READ_B75() );


#define WAIT_B75_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B75() && (--___t___ > 0)); }


#define WAIT_B75_HIGH() \
    while (! READ_B75() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b74 
    // 
#define B74_MASK 0x400U
#define B74_OFFSET 10
#define B74_START_BIT 10
#define B74_WIDTH 1



typedef enum b74 {
    B_7_4_0,
    B_7_4_1
} B74_T ;
#define WRITE_B74(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B74_MASK) | ((val << B74_START_BIT) & B74_MASK )); \
   } 

#define ENABLE_B74() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B74_MASK ); \
   }

#define DISABLE_B74() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B74_MASK ); \
   } 

#define READ_B74() \
   ((READ_REGISTER_ULONG(0x34) & B74_MASK)  >> B74_START_BIT)

#define WHEN_B74_HIGH() \
     if ( READ_B74() )


#define UNLESS_B74_HIGH() \
     if (! READ_B74() )


#define WAIT_B74_LOW() \
    while ( READ_B74() );


#define WAIT_B74_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B74() && (--___t___ > 0)); }


#define WAIT_B74_HIGH() \
    while (! READ_B74() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b73 
    // 
#define B73_MASK 0x200U
#define B73_OFFSET 9
#define B73_START_BIT 9
#define B73_WIDTH 1



typedef enum b73 {
    B_7_3_0,
    B_7_3_1
} B73_T ;
#define WRITE_B73(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B73_MASK) | ((val << B73_START_BIT) & B73_MASK )); \
   } 

#define ENABLE_B73() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B73_MASK ); \
   }

#define DISABLE_B73() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B73_MASK ); \
   } 

#define READ_B73() \
   ((READ_REGISTER_ULONG(0x34) & B73_MASK)  >> B73_START_BIT)

#define WHEN_B73_HIGH() \
     if ( READ_B73() )


#define UNLESS_B73_HIGH() \
     if (! READ_B73() )


#define WAIT_B73_LOW() \
    while ( READ_B73() );


#define WAIT_B73_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B73() && (--___t___ > 0)); }


#define WAIT_B73_HIGH() \
    while (! READ_B73() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b72 
    // 
#define B72_MASK 0x100U
#define B72_OFFSET 8
#define B72_START_BIT 8
#define B72_WIDTH 1



typedef enum b72 {
    B_7_2_0,
    B_7_2_1
} B72_T ;
#define WRITE_B72(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B72_MASK) | ((val << B72_START_BIT) & B72_MASK )); \
   } 

#define ENABLE_B72() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B72_MASK ); \
   }

#define DISABLE_B72() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B72_MASK ); \
   } 

#define READ_B72() \
   ((READ_REGISTER_ULONG(0x34) & B72_MASK)  >> B72_START_BIT)

#define WHEN_B72_HIGH() \
     if ( READ_B72() )


#define UNLESS_B72_HIGH() \
     if (! READ_B72() )


#define WAIT_B72_LOW() \
    while ( READ_B72() );


#define WAIT_B72_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B72() && (--___t___ > 0)); }


#define WAIT_B72_HIGH() \
    while (! READ_B72() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b71 
    // 
#define B71_MASK 0x80U
#define B71_OFFSET 7
#define B71_START_BIT 7
#define B71_WIDTH 1



typedef enum b71 {
    B_7_1_0,
    B_7_1_1
} B71_T ;
#define WRITE_B71(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B71_MASK) | ((val << B71_START_BIT) & B71_MASK )); \
   } 

#define ENABLE_B71() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B71_MASK ); \
   }

#define DISABLE_B71() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B71_MASK ); \
   } 

#define READ_B71() \
   ((READ_REGISTER_ULONG(0x34) & B71_MASK)  >> B71_START_BIT)

#define WHEN_B71_HIGH() \
     if ( READ_B71() )


#define UNLESS_B71_HIGH() \
     if (! READ_B71() )


#define WAIT_B71_LOW() \
    while ( READ_B71() );


#define WAIT_B71_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B71() && (--___t___ > 0)); }


#define WAIT_B71_HIGH() \
    while (! READ_B71() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b70 
    // 
#define B70_MASK 0x40U
#define B70_OFFSET 6
#define B70_START_BIT 6
#define B70_WIDTH 1



typedef enum b70 {
    B_7_0_0,
    B_7_0_1
} B70_T ;
#define WRITE_B70(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B70_MASK) | ((val << B70_START_BIT) & B70_MASK )); \
   } 

#define ENABLE_B70() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B70_MASK ); \
   }

#define DISABLE_B70() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B70_MASK ); \
   } 

#define READ_B70() \
   ((READ_REGISTER_ULONG(0x34) & B70_MASK)  >> B70_START_BIT)

#define WHEN_B70_HIGH() \
     if ( READ_B70() )


#define UNLESS_B70_HIGH() \
     if (! READ_B70() )


#define WAIT_B70_LOW() \
    while ( READ_B70() );


#define WAIT_B70_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B70() && (--___t___ > 0)); }


#define WAIT_B70_HIGH() \
    while (! READ_B70() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b69 
    // 
#define B69_MASK 0x20U
#define B69_OFFSET 5
#define B69_START_BIT 5
#define B69_WIDTH 1



typedef enum b69 {
    B_6_9_0,
    B_6_9_1
} B69_T ;
#define WRITE_B69(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B69_MASK) | ((val << B69_START_BIT) & B69_MASK )); \
   } 

#define ENABLE_B69() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B69_MASK ); \
   }

#define DISABLE_B69() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B69_MASK ); \
   } 

#define READ_B69() \
   ((READ_REGISTER_ULONG(0x34) & B69_MASK)  >> B69_START_BIT)

#define WHEN_B69_HIGH() \
     if ( READ_B69() )


#define UNLESS_B69_HIGH() \
     if (! READ_B69() )


#define WAIT_B69_LOW() \
    while ( READ_B69() );


#define WAIT_B69_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B69() && (--___t___ > 0)); }


#define WAIT_B69_HIGH() \
    while (! READ_B69() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b68 
    // 
#define B68_MASK 0x10U
#define B68_OFFSET 4
#define B68_START_BIT 4
#define B68_WIDTH 1



typedef enum b68 {
    B_6_8_0,
    B_6_8_1
} B68_T ;
#define WRITE_B68(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B68_MASK) | ((val << B68_START_BIT) & B68_MASK )); \
   } 

#define ENABLE_B68() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B68_MASK ); \
   }

#define DISABLE_B68() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B68_MASK ); \
   } 

#define READ_B68() \
   ((READ_REGISTER_ULONG(0x34) & B68_MASK)  >> B68_START_BIT)

#define WHEN_B68_HIGH() \
     if ( READ_B68() )


#define UNLESS_B68_HIGH() \
     if (! READ_B68() )


#define WAIT_B68_LOW() \
    while ( READ_B68() );


#define WAIT_B68_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B68() && (--___t___ > 0)); }


#define WAIT_B68_HIGH() \
    while (! READ_B68() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b67 
    // 
#define B67_MASK 0x8U
#define B67_OFFSET 3
#define B67_START_BIT 3
#define B67_WIDTH 1



typedef enum b67 {
    B_6_7_0,
    B_6_7_1
} B67_T ;
#define WRITE_B67(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B67_MASK) | ((val << B67_START_BIT) & B67_MASK )); \
   } 

#define ENABLE_B67() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B67_MASK ); \
   }

#define DISABLE_B67() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B67_MASK ); \
   } 

#define READ_B67() \
   ((READ_REGISTER_ULONG(0x34) & B67_MASK)  >> B67_START_BIT)

#define WHEN_B67_HIGH() \
     if ( READ_B67() )


#define UNLESS_B67_HIGH() \
     if (! READ_B67() )


#define WAIT_B67_LOW() \
    while ( READ_B67() );


#define WAIT_B67_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B67() && (--___t___ > 0)); }


#define WAIT_B67_HIGH() \
    while (! READ_B67() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b66 
    // 
#define B66_MASK 0x4U
#define B66_OFFSET 2
#define B66_START_BIT 2
#define B66_WIDTH 1



typedef enum b66 {
    B_6_6_0,
    B_6_6_1
} B66_T ;
#define WRITE_B66(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B66_MASK) | ((val << B66_START_BIT) & B66_MASK )); \
   } 

#define ENABLE_B66() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B66_MASK ); \
   }

#define DISABLE_B66() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B66_MASK ); \
   } 

#define READ_B66() \
   ((READ_REGISTER_ULONG(0x34) & B66_MASK)  >> B66_START_BIT)

#define WHEN_B66_HIGH() \
     if ( READ_B66() )


#define UNLESS_B66_HIGH() \
     if (! READ_B66() )


#define WAIT_B66_LOW() \
    while ( READ_B66() );


#define WAIT_B66_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B66() && (--___t___ > 0)); }


#define WAIT_B66_HIGH() \
    while (! READ_B66() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b65 
    // 
#define B65_MASK 0x2U
#define B65_OFFSET 1
#define B65_START_BIT 1
#define B65_WIDTH 1



typedef enum b65 {
    B_6_5_0,
    B_6_5_1
} B65_T ;
#define WRITE_B65(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B65_MASK) | ((val << B65_START_BIT) & B65_MASK )); \
   } 

#define ENABLE_B65() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B65_MASK ); \
   }

#define DISABLE_B65() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B65_MASK ); \
   } 

#define READ_B65() \
   ((READ_REGISTER_ULONG(0x34) & B65_MASK)  >> B65_START_BIT)

#define WHEN_B65_HIGH() \
     if ( READ_B65() )


#define UNLESS_B65_HIGH() \
     if (! READ_B65() )


#define WAIT_B65_LOW() \
    while ( READ_B65() );


#define WAIT_B65_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B65() && (--___t___ > 0)); }


#define WAIT_B65_HIGH() \
    while (! READ_B65() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K2rr
//
// Return the value of register K_2RR
//
// Notes : Register key registers (K2RR) at the offset 0x34, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b64 
    // 
#define B64_MASK 0x1U
#define B64_OFFSET 0
#define B64_START_BIT 0
#define B64_WIDTH 1



typedef enum b64 {
    B_6_4_0,
    B_6_4_1
} B64_T ;
#define WRITE_B64(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ B64_MASK) | ((val << B64_START_BIT) & B64_MASK )); \
   } 

#define ENABLE_B64() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  B64_MASK ); \
   }

#define DISABLE_B64() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~B64_MASK ); \
   } 

#define READ_B64() \
   ((READ_REGISTER_ULONG(0x34) & B64_MASK)  >> B64_START_BIT)

#define WHEN_B64_HIGH() \
     if ( READ_B64() )


#define UNLESS_B64_HIGH() \
     if (! READ_B64() )


#define WAIT_B64_LOW() \
    while ( READ_B64() );


#define WAIT_B64_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B64() && (--___t___ > 0)); }


#define WAIT_B64_HIGH() \
    while (! READ_B64() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K3LR
//
// Notes : Register K3lr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_3LR( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b63 
    // 
#define B63_MASK 0x80000000U
#define B63_OFFSET 31
#define B63_START_BIT 31
#define B63_WIDTH 1


#define K_3LR_REG 0x38

typedef enum b63 {
    B_6_3_0,
    B_6_3_1
} B63_T ;
#define WRITE_B63(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B63_MASK) | ((val << B63_START_BIT) & B63_MASK )); \
   } 

#define ENABLE_B63() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B63_MASK ); \
   }

#define DISABLE_B63() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B63_MASK ); \
   } 

#define READ_B63() \
   ((READ_REGISTER_ULONG(0x38) & B63_MASK)  >> B63_START_BIT)

#define WHEN_B63_HIGH() \
     if ( READ_B63() )


#define UNLESS_B63_HIGH() \
     if (! READ_B63() )


#define WAIT_B63_LOW() \
    while ( READ_B63() );


#define WAIT_B63_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B63() && (--___t___ > 0)); }


#define WAIT_B63_HIGH() \
    while (! READ_B63() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b62 
    // 
#define B62_MASK 0x40000000U
#define B62_OFFSET 30
#define B62_START_BIT 30
#define B62_WIDTH 1



typedef enum b62 {
    B_6_2_0,
    B_6_2_1
} B62_T ;
#define WRITE_B62(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B62_MASK) | ((val << B62_START_BIT) & B62_MASK )); \
   } 

#define ENABLE_B62() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B62_MASK ); \
   }

#define DISABLE_B62() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B62_MASK ); \
   } 

#define READ_B62() \
   ((READ_REGISTER_ULONG(0x38) & B62_MASK)  >> B62_START_BIT)

#define WHEN_B62_HIGH() \
     if ( READ_B62() )


#define UNLESS_B62_HIGH() \
     if (! READ_B62() )


#define WAIT_B62_LOW() \
    while ( READ_B62() );


#define WAIT_B62_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B62() && (--___t___ > 0)); }


#define WAIT_B62_HIGH() \
    while (! READ_B62() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b61 
    // 
#define B61_MASK 0x20000000U
#define B61_OFFSET 29
#define B61_START_BIT 29
#define B61_WIDTH 1



typedef enum b61 {
    B_6_1_0,
    B_6_1_1
} B61_T ;
#define WRITE_B61(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B61_MASK) | ((val << B61_START_BIT) & B61_MASK )); \
   } 

#define ENABLE_B61() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B61_MASK ); \
   }

#define DISABLE_B61() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B61_MASK ); \
   } 

#define READ_B61() \
   ((READ_REGISTER_ULONG(0x38) & B61_MASK)  >> B61_START_BIT)

#define WHEN_B61_HIGH() \
     if ( READ_B61() )


#define UNLESS_B61_HIGH() \
     if (! READ_B61() )


#define WAIT_B61_LOW() \
    while ( READ_B61() );


#define WAIT_B61_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B61() && (--___t___ > 0)); }


#define WAIT_B61_HIGH() \
    while (! READ_B61() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b60 
    // 
#define B60_MASK 0x10000000U
#define B60_OFFSET 28
#define B60_START_BIT 28
#define B60_WIDTH 1



typedef enum b60 {
    B_6_0_0,
    B_6_0_1
} B60_T ;
#define WRITE_B60(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B60_MASK) | ((val << B60_START_BIT) & B60_MASK )); \
   } 

#define ENABLE_B60() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B60_MASK ); \
   }

#define DISABLE_B60() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B60_MASK ); \
   } 

#define READ_B60() \
   ((READ_REGISTER_ULONG(0x38) & B60_MASK)  >> B60_START_BIT)

#define WHEN_B60_HIGH() \
     if ( READ_B60() )


#define UNLESS_B60_HIGH() \
     if (! READ_B60() )


#define WAIT_B60_LOW() \
    while ( READ_B60() );


#define WAIT_B60_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B60() && (--___t___ > 0)); }


#define WAIT_B60_HIGH() \
    while (! READ_B60() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b59 
    // 
#define B59_MASK 0x8000000U
#define B59_OFFSET 27
#define B59_START_BIT 27
#define B59_WIDTH 1



typedef enum b59 {
    B_5_9_0,
    B_5_9_1
} B59_T ;
#define WRITE_B59(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B59_MASK) | ((val << B59_START_BIT) & B59_MASK )); \
   } 

#define ENABLE_B59() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B59_MASK ); \
   }

#define DISABLE_B59() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B59_MASK ); \
   } 

#define READ_B59() \
   ((READ_REGISTER_ULONG(0x38) & B59_MASK)  >> B59_START_BIT)

#define WHEN_B59_HIGH() \
     if ( READ_B59() )


#define UNLESS_B59_HIGH() \
     if (! READ_B59() )


#define WAIT_B59_LOW() \
    while ( READ_B59() );


#define WAIT_B59_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B59() && (--___t___ > 0)); }


#define WAIT_B59_HIGH() \
    while (! READ_B59() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b58 
    // 
#define B58_MASK 0x4000000U
#define B58_OFFSET 26
#define B58_START_BIT 26
#define B58_WIDTH 1



typedef enum b58 {
    B_5_8_0,
    B_5_8_1
} B58_T ;
#define WRITE_B58(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B58_MASK) | ((val << B58_START_BIT) & B58_MASK )); \
   } 

#define ENABLE_B58() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B58_MASK ); \
   }

#define DISABLE_B58() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B58_MASK ); \
   } 

#define READ_B58() \
   ((READ_REGISTER_ULONG(0x38) & B58_MASK)  >> B58_START_BIT)

#define WHEN_B58_HIGH() \
     if ( READ_B58() )


#define UNLESS_B58_HIGH() \
     if (! READ_B58() )


#define WAIT_B58_LOW() \
    while ( READ_B58() );


#define WAIT_B58_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B58() && (--___t___ > 0)); }


#define WAIT_B58_HIGH() \
    while (! READ_B58() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b57 
    // 
#define B57_MASK 0x2000000U
#define B57_OFFSET 25
#define B57_START_BIT 25
#define B57_WIDTH 1



typedef enum b57 {
    B_5_7_0,
    B_5_7_1
} B57_T ;
#define WRITE_B57(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B57_MASK) | ((val << B57_START_BIT) & B57_MASK )); \
   } 

#define ENABLE_B57() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B57_MASK ); \
   }

#define DISABLE_B57() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B57_MASK ); \
   } 

#define READ_B57() \
   ((READ_REGISTER_ULONG(0x38) & B57_MASK)  >> B57_START_BIT)

#define WHEN_B57_HIGH() \
     if ( READ_B57() )


#define UNLESS_B57_HIGH() \
     if (! READ_B57() )


#define WAIT_B57_LOW() \
    while ( READ_B57() );


#define WAIT_B57_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B57() && (--___t___ > 0)); }


#define WAIT_B57_HIGH() \
    while (! READ_B57() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b56 
    // 
#define B56_MASK 0x1000000U
#define B56_OFFSET 24
#define B56_START_BIT 24
#define B56_WIDTH 1



typedef enum b56 {
    B_5_6_0,
    B_5_6_1
} B56_T ;
#define WRITE_B56(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B56_MASK) | ((val << B56_START_BIT) & B56_MASK )); \
   } 

#define ENABLE_B56() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B56_MASK ); \
   }

#define DISABLE_B56() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B56_MASK ); \
   } 

#define READ_B56() \
   ((READ_REGISTER_ULONG(0x38) & B56_MASK)  >> B56_START_BIT)

#define WHEN_B56_HIGH() \
     if ( READ_B56() )


#define UNLESS_B56_HIGH() \
     if (! READ_B56() )


#define WAIT_B56_LOW() \
    while ( READ_B56() );


#define WAIT_B56_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B56() && (--___t___ > 0)); }


#define WAIT_B56_HIGH() \
    while (! READ_B56() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b55 
    // 
#define B55_MASK 0x800000U
#define B55_OFFSET 23
#define B55_START_BIT 23
#define B55_WIDTH 1



typedef enum b55 {
    B_5_5_0,
    B_5_5_1
} B55_T ;
#define WRITE_B55(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B55_MASK) | ((val << B55_START_BIT) & B55_MASK )); \
   } 

#define ENABLE_B55() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B55_MASK ); \
   }

#define DISABLE_B55() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B55_MASK ); \
   } 

#define READ_B55() \
   ((READ_REGISTER_ULONG(0x38) & B55_MASK)  >> B55_START_BIT)

#define WHEN_B55_HIGH() \
     if ( READ_B55() )


#define UNLESS_B55_HIGH() \
     if (! READ_B55() )


#define WAIT_B55_LOW() \
    while ( READ_B55() );


#define WAIT_B55_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B55() && (--___t___ > 0)); }


#define WAIT_B55_HIGH() \
    while (! READ_B55() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b54 
    // 
#define B54_MASK 0x400000U
#define B54_OFFSET 22
#define B54_START_BIT 22
#define B54_WIDTH 1



typedef enum b54 {
    B_5_4_0,
    B_5_4_1
} B54_T ;
#define WRITE_B54(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B54_MASK) | ((val << B54_START_BIT) & B54_MASK )); \
   } 

#define ENABLE_B54() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B54_MASK ); \
   }

#define DISABLE_B54() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B54_MASK ); \
   } 

#define READ_B54() \
   ((READ_REGISTER_ULONG(0x38) & B54_MASK)  >> B54_START_BIT)

#define WHEN_B54_HIGH() \
     if ( READ_B54() )


#define UNLESS_B54_HIGH() \
     if (! READ_B54() )


#define WAIT_B54_LOW() \
    while ( READ_B54() );


#define WAIT_B54_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B54() && (--___t___ > 0)); }


#define WAIT_B54_HIGH() \
    while (! READ_B54() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b53 
    // 
#define B53_MASK 0x200000U
#define B53_OFFSET 21
#define B53_START_BIT 21
#define B53_WIDTH 1



typedef enum b53 {
    B_5_3_0,
    B_5_3_1
} B53_T ;
#define WRITE_B53(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B53_MASK) | ((val << B53_START_BIT) & B53_MASK )); \
   } 

#define ENABLE_B53() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B53_MASK ); \
   }

#define DISABLE_B53() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B53_MASK ); \
   } 

#define READ_B53() \
   ((READ_REGISTER_ULONG(0x38) & B53_MASK)  >> B53_START_BIT)

#define WHEN_B53_HIGH() \
     if ( READ_B53() )


#define UNLESS_B53_HIGH() \
     if (! READ_B53() )


#define WAIT_B53_LOW() \
    while ( READ_B53() );


#define WAIT_B53_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B53() && (--___t___ > 0)); }


#define WAIT_B53_HIGH() \
    while (! READ_B53() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b52 
    // 
#define B52_MASK 0x100000U
#define B52_OFFSET 20
#define B52_START_BIT 20
#define B52_WIDTH 1



typedef enum b52 {
    B_5_2_0,
    B_5_2_1
} B52_T ;
#define WRITE_B52(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B52_MASK) | ((val << B52_START_BIT) & B52_MASK )); \
   } 

#define ENABLE_B52() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B52_MASK ); \
   }

#define DISABLE_B52() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B52_MASK ); \
   } 

#define READ_B52() \
   ((READ_REGISTER_ULONG(0x38) & B52_MASK)  >> B52_START_BIT)

#define WHEN_B52_HIGH() \
     if ( READ_B52() )


#define UNLESS_B52_HIGH() \
     if (! READ_B52() )


#define WAIT_B52_LOW() \
    while ( READ_B52() );


#define WAIT_B52_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B52() && (--___t___ > 0)); }


#define WAIT_B52_HIGH() \
    while (! READ_B52() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b51 
    // 
#define B51_MASK 0x80000U
#define B51_OFFSET 19
#define B51_START_BIT 19
#define B51_WIDTH 1



typedef enum b51 {
    B_5_1_0,
    B_5_1_1
} B51_T ;
#define WRITE_B51(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B51_MASK) | ((val << B51_START_BIT) & B51_MASK )); \
   } 

#define ENABLE_B51() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B51_MASK ); \
   }

#define DISABLE_B51() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B51_MASK ); \
   } 

#define READ_B51() \
   ((READ_REGISTER_ULONG(0x38) & B51_MASK)  >> B51_START_BIT)

#define WHEN_B51_HIGH() \
     if ( READ_B51() )


#define UNLESS_B51_HIGH() \
     if (! READ_B51() )


#define WAIT_B51_LOW() \
    while ( READ_B51() );


#define WAIT_B51_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B51() && (--___t___ > 0)); }


#define WAIT_B51_HIGH() \
    while (! READ_B51() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b50 
    // 
#define B50_MASK 0x40000U
#define B50_OFFSET 18
#define B50_START_BIT 18
#define B50_WIDTH 1



typedef enum b50 {
    B_5_0_0,
    B_5_0_1
} B50_T ;
#define WRITE_B50(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B50_MASK) | ((val << B50_START_BIT) & B50_MASK )); \
   } 

#define ENABLE_B50() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B50_MASK ); \
   }

#define DISABLE_B50() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B50_MASK ); \
   } 

#define READ_B50() \
   ((READ_REGISTER_ULONG(0x38) & B50_MASK)  >> B50_START_BIT)

#define WHEN_B50_HIGH() \
     if ( READ_B50() )


#define UNLESS_B50_HIGH() \
     if (! READ_B50() )


#define WAIT_B50_LOW() \
    while ( READ_B50() );


#define WAIT_B50_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B50() && (--___t___ > 0)); }


#define WAIT_B50_HIGH() \
    while (! READ_B50() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b49 
    // 
#define B49_MASK 0x20000U
#define B49_OFFSET 17
#define B49_START_BIT 17
#define B49_WIDTH 1



typedef enum b49 {
    B_4_9_0,
    B_4_9_1
} B49_T ;
#define WRITE_B49(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B49_MASK) | ((val << B49_START_BIT) & B49_MASK )); \
   } 

#define ENABLE_B49() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B49_MASK ); \
   }

#define DISABLE_B49() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B49_MASK ); \
   } 

#define READ_B49() \
   ((READ_REGISTER_ULONG(0x38) & B49_MASK)  >> B49_START_BIT)

#define WHEN_B49_HIGH() \
     if ( READ_B49() )


#define UNLESS_B49_HIGH() \
     if (! READ_B49() )


#define WAIT_B49_LOW() \
    while ( READ_B49() );


#define WAIT_B49_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B49() && (--___t___ > 0)); }


#define WAIT_B49_HIGH() \
    while (! READ_B49() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b48 
    // 
#define B48_MASK 0x10000U
#define B48_OFFSET 16
#define B48_START_BIT 16
#define B48_WIDTH 1



typedef enum b48 {
    B_4_8_0,
    B_4_8_1
} B48_T ;
#define WRITE_B48(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B48_MASK) | ((val << B48_START_BIT) & B48_MASK )); \
   } 

#define ENABLE_B48() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B48_MASK ); \
   }

#define DISABLE_B48() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B48_MASK ); \
   } 

#define READ_B48() \
   ((READ_REGISTER_ULONG(0x38) & B48_MASK)  >> B48_START_BIT)

#define WHEN_B48_HIGH() \
     if ( READ_B48() )


#define UNLESS_B48_HIGH() \
     if (! READ_B48() )


#define WAIT_B48_LOW() \
    while ( READ_B48() );


#define WAIT_B48_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B48() && (--___t___ > 0)); }


#define WAIT_B48_HIGH() \
    while (! READ_B48() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b47 
    // 
#define B47_MASK 0x8000U
#define B47_OFFSET 15
#define B47_START_BIT 15
#define B47_WIDTH 1



typedef enum b47 {
    B_4_7_0,
    B_4_7_1
} B47_T ;
#define WRITE_B47(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B47_MASK) | ((val << B47_START_BIT) & B47_MASK )); \
   } 

#define ENABLE_B47() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B47_MASK ); \
   }

#define DISABLE_B47() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B47_MASK ); \
   } 

#define READ_B47() \
   ((READ_REGISTER_ULONG(0x38) & B47_MASK)  >> B47_START_BIT)

#define WHEN_B47_HIGH() \
     if ( READ_B47() )


#define UNLESS_B47_HIGH() \
     if (! READ_B47() )


#define WAIT_B47_LOW() \
    while ( READ_B47() );


#define WAIT_B47_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B47() && (--___t___ > 0)); }


#define WAIT_B47_HIGH() \
    while (! READ_B47() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b46 
    // 
#define B46_MASK 0x4000U
#define B46_OFFSET 14
#define B46_START_BIT 14
#define B46_WIDTH 1



typedef enum b46 {
    B_4_6_0,
    B_4_6_1
} B46_T ;
#define WRITE_B46(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B46_MASK) | ((val << B46_START_BIT) & B46_MASK )); \
   } 

#define ENABLE_B46() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B46_MASK ); \
   }

#define DISABLE_B46() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B46_MASK ); \
   } 

#define READ_B46() \
   ((READ_REGISTER_ULONG(0x38) & B46_MASK)  >> B46_START_BIT)

#define WHEN_B46_HIGH() \
     if ( READ_B46() )


#define UNLESS_B46_HIGH() \
     if (! READ_B46() )


#define WAIT_B46_LOW() \
    while ( READ_B46() );


#define WAIT_B46_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B46() && (--___t___ > 0)); }


#define WAIT_B46_HIGH() \
    while (! READ_B46() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b45 
    // 
#define B45_MASK 0x2000U
#define B45_OFFSET 13
#define B45_START_BIT 13
#define B45_WIDTH 1



typedef enum b45 {
    B_4_5_0,
    B_4_5_1
} B45_T ;
#define WRITE_B45(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B45_MASK) | ((val << B45_START_BIT) & B45_MASK )); \
   } 

#define ENABLE_B45() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B45_MASK ); \
   }

#define DISABLE_B45() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B45_MASK ); \
   } 

#define READ_B45() \
   ((READ_REGISTER_ULONG(0x38) & B45_MASK)  >> B45_START_BIT)

#define WHEN_B45_HIGH() \
     if ( READ_B45() )


#define UNLESS_B45_HIGH() \
     if (! READ_B45() )


#define WAIT_B45_LOW() \
    while ( READ_B45() );


#define WAIT_B45_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B45() && (--___t___ > 0)); }


#define WAIT_B45_HIGH() \
    while (! READ_B45() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b44 
    // 
#define B44_MASK 0x1000U
#define B44_OFFSET 12
#define B44_START_BIT 12
#define B44_WIDTH 1



typedef enum b44 {
    B_4_4_0,
    B_4_4_1
} B44_T ;
#define WRITE_B44(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B44_MASK) | ((val << B44_START_BIT) & B44_MASK )); \
   } 

#define ENABLE_B44() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B44_MASK ); \
   }

#define DISABLE_B44() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B44_MASK ); \
   } 

#define READ_B44() \
   ((READ_REGISTER_ULONG(0x38) & B44_MASK)  >> B44_START_BIT)

#define WHEN_B44_HIGH() \
     if ( READ_B44() )


#define UNLESS_B44_HIGH() \
     if (! READ_B44() )


#define WAIT_B44_LOW() \
    while ( READ_B44() );


#define WAIT_B44_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B44() && (--___t___ > 0)); }


#define WAIT_B44_HIGH() \
    while (! READ_B44() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b43 
    // 
#define B43_MASK 0x800U
#define B43_OFFSET 11
#define B43_START_BIT 11
#define B43_WIDTH 1



typedef enum b43 {
    B_4_3_0,
    B_4_3_1
} B43_T ;
#define WRITE_B43(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B43_MASK) | ((val << B43_START_BIT) & B43_MASK )); \
   } 

#define ENABLE_B43() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B43_MASK ); \
   }

#define DISABLE_B43() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B43_MASK ); \
   } 

#define READ_B43() \
   ((READ_REGISTER_ULONG(0x38) & B43_MASK)  >> B43_START_BIT)

#define WHEN_B43_HIGH() \
     if ( READ_B43() )


#define UNLESS_B43_HIGH() \
     if (! READ_B43() )


#define WAIT_B43_LOW() \
    while ( READ_B43() );


#define WAIT_B43_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B43() && (--___t___ > 0)); }


#define WAIT_B43_HIGH() \
    while (! READ_B43() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b42 
    // 
#define B42_MASK 0x400U
#define B42_OFFSET 10
#define B42_START_BIT 10
#define B42_WIDTH 1



typedef enum b42 {
    B_4_2_0,
    B_4_2_1
} B42_T ;
#define WRITE_B42(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B42_MASK) | ((val << B42_START_BIT) & B42_MASK )); \
   } 

#define ENABLE_B42() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B42_MASK ); \
   }

#define DISABLE_B42() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B42_MASK ); \
   } 

#define READ_B42() \
   ((READ_REGISTER_ULONG(0x38) & B42_MASK)  >> B42_START_BIT)

#define WHEN_B42_HIGH() \
     if ( READ_B42() )


#define UNLESS_B42_HIGH() \
     if (! READ_B42() )


#define WAIT_B42_LOW() \
    while ( READ_B42() );


#define WAIT_B42_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B42() && (--___t___ > 0)); }


#define WAIT_B42_HIGH() \
    while (! READ_B42() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b41 
    // 
#define B41_MASK 0x200U
#define B41_OFFSET 9
#define B41_START_BIT 9
#define B41_WIDTH 1



typedef enum b41 {
    B_4_1_0,
    B_4_1_1
} B41_T ;
#define WRITE_B41(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B41_MASK) | ((val << B41_START_BIT) & B41_MASK )); \
   } 

#define ENABLE_B41() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B41_MASK ); \
   }

#define DISABLE_B41() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B41_MASK ); \
   } 

#define READ_B41() \
   ((READ_REGISTER_ULONG(0x38) & B41_MASK)  >> B41_START_BIT)

#define WHEN_B41_HIGH() \
     if ( READ_B41() )


#define UNLESS_B41_HIGH() \
     if (! READ_B41() )


#define WAIT_B41_LOW() \
    while ( READ_B41() );


#define WAIT_B41_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B41() && (--___t___ > 0)); }


#define WAIT_B41_HIGH() \
    while (! READ_B41() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b40 
    // 
#define B40_MASK 0x100U
#define B40_OFFSET 8
#define B40_START_BIT 8
#define B40_WIDTH 1



typedef enum b40 {
    B_4_0_0,
    B_4_0_1
} B40_T ;
#define WRITE_B40(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B40_MASK) | ((val << B40_START_BIT) & B40_MASK )); \
   } 

#define ENABLE_B40() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B40_MASK ); \
   }

#define DISABLE_B40() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B40_MASK ); \
   } 

#define READ_B40() \
   ((READ_REGISTER_ULONG(0x38) & B40_MASK)  >> B40_START_BIT)

#define WHEN_B40_HIGH() \
     if ( READ_B40() )


#define UNLESS_B40_HIGH() \
     if (! READ_B40() )


#define WAIT_B40_LOW() \
    while ( READ_B40() );


#define WAIT_B40_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B40() && (--___t___ > 0)); }


#define WAIT_B40_HIGH() \
    while (! READ_B40() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b39 
    // 
#define B39_MASK 0x80U
#define B39_OFFSET 7
#define B39_START_BIT 7
#define B39_WIDTH 1



typedef enum b39 {
    B_3_9_0,
    B_3_9_1
} B39_T ;
#define WRITE_B39(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B39_MASK) | ((val << B39_START_BIT) & B39_MASK )); \
   } 

#define ENABLE_B39() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B39_MASK ); \
   }

#define DISABLE_B39() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B39_MASK ); \
   } 

#define READ_B39() \
   ((READ_REGISTER_ULONG(0x38) & B39_MASK)  >> B39_START_BIT)

#define WHEN_B39_HIGH() \
     if ( READ_B39() )


#define UNLESS_B39_HIGH() \
     if (! READ_B39() )


#define WAIT_B39_LOW() \
    while ( READ_B39() );


#define WAIT_B39_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B39() && (--___t___ > 0)); }


#define WAIT_B39_HIGH() \
    while (! READ_B39() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b38 
    // 
#define B38_MASK 0x40U
#define B38_OFFSET 6
#define B38_START_BIT 6
#define B38_WIDTH 1



typedef enum b38 {
    B_3_8_0,
    B_3_8_1
} B38_T ;
#define WRITE_B38(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B38_MASK) | ((val << B38_START_BIT) & B38_MASK )); \
   } 

#define ENABLE_B38() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B38_MASK ); \
   }

#define DISABLE_B38() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B38_MASK ); \
   } 

#define READ_B38() \
   ((READ_REGISTER_ULONG(0x38) & B38_MASK)  >> B38_START_BIT)

#define WHEN_B38_HIGH() \
     if ( READ_B38() )


#define UNLESS_B38_HIGH() \
     if (! READ_B38() )


#define WAIT_B38_LOW() \
    while ( READ_B38() );


#define WAIT_B38_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B38() && (--___t___ > 0)); }


#define WAIT_B38_HIGH() \
    while (! READ_B38() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b37 
    // 
#define B37_MASK 0x20U
#define B37_OFFSET 5
#define B37_START_BIT 5
#define B37_WIDTH 1



typedef enum b37 {
    B_3_7_0,
    B_3_7_1
} B37_T ;
#define WRITE_B37(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B37_MASK) | ((val << B37_START_BIT) & B37_MASK )); \
   } 

#define ENABLE_B37() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B37_MASK ); \
   }

#define DISABLE_B37() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B37_MASK ); \
   } 

#define READ_B37() \
   ((READ_REGISTER_ULONG(0x38) & B37_MASK)  >> B37_START_BIT)

#define WHEN_B37_HIGH() \
     if ( READ_B37() )


#define UNLESS_B37_HIGH() \
     if (! READ_B37() )


#define WAIT_B37_LOW() \
    while ( READ_B37() );


#define WAIT_B37_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B37() && (--___t___ > 0)); }


#define WAIT_B37_HIGH() \
    while (! READ_B37() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b36 
    // 
#define B36_MASK 0x10U
#define B36_OFFSET 4
#define B36_START_BIT 4
#define B36_WIDTH 1



typedef enum b36 {
    B_3_6_0,
    B_3_6_1
} B36_T ;
#define WRITE_B36(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B36_MASK) | ((val << B36_START_BIT) & B36_MASK )); \
   } 

#define ENABLE_B36() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B36_MASK ); \
   }

#define DISABLE_B36() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B36_MASK ); \
   } 

#define READ_B36() \
   ((READ_REGISTER_ULONG(0x38) & B36_MASK)  >> B36_START_BIT)

#define WHEN_B36_HIGH() \
     if ( READ_B36() )


#define UNLESS_B36_HIGH() \
     if (! READ_B36() )


#define WAIT_B36_LOW() \
    while ( READ_B36() );


#define WAIT_B36_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B36() && (--___t___ > 0)); }


#define WAIT_B36_HIGH() \
    while (! READ_B36() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b35 
    // 
#define B35_MASK 0x8U
#define B35_OFFSET 3
#define B35_START_BIT 3
#define B35_WIDTH 1



typedef enum b35 {
    B_3_5_0,
    B_3_5_1
} B35_T ;
#define WRITE_B35(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B35_MASK) | ((val << B35_START_BIT) & B35_MASK )); \
   } 

#define ENABLE_B35() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B35_MASK ); \
   }

#define DISABLE_B35() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B35_MASK ); \
   } 

#define READ_B35() \
   ((READ_REGISTER_ULONG(0x38) & B35_MASK)  >> B35_START_BIT)

#define WHEN_B35_HIGH() \
     if ( READ_B35() )


#define UNLESS_B35_HIGH() \
     if (! READ_B35() )


#define WAIT_B35_LOW() \
    while ( READ_B35() );


#define WAIT_B35_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B35() && (--___t___ > 0)); }


#define WAIT_B35_HIGH() \
    while (! READ_B35() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b34 
    // 
#define B34_MASK 0x4U
#define B34_OFFSET 2
#define B34_START_BIT 2
#define B34_WIDTH 1



typedef enum b34 {
    B_3_4_0,
    B_3_4_1
} B34_T ;
#define WRITE_B34(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B34_MASK) | ((val << B34_START_BIT) & B34_MASK )); \
   } 

#define ENABLE_B34() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B34_MASK ); \
   }

#define DISABLE_B34() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B34_MASK ); \
   } 

#define READ_B34() \
   ((READ_REGISTER_ULONG(0x38) & B34_MASK)  >> B34_START_BIT)

#define WHEN_B34_HIGH() \
     if ( READ_B34() )


#define UNLESS_B34_HIGH() \
     if (! READ_B34() )


#define WAIT_B34_LOW() \
    while ( READ_B34() );


#define WAIT_B34_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B34() && (--___t___ > 0)); }


#define WAIT_B34_HIGH() \
    while (! READ_B34() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b33 
    // 
#define B33_MASK 0x2U
#define B33_OFFSET 1
#define B33_START_BIT 1
#define B33_WIDTH 1



typedef enum b33 {
    B_3_3_0,
    B_3_3_1
} B33_T ;
#define WRITE_B33(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B33_MASK) | ((val << B33_START_BIT) & B33_MASK )); \
   } 

#define ENABLE_B33() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B33_MASK ); \
   }

#define DISABLE_B33() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B33_MASK ); \
   } 

#define READ_B33() \
   ((READ_REGISTER_ULONG(0x38) & B33_MASK)  >> B33_START_BIT)

#define WHEN_B33_HIGH() \
     if ( READ_B33() )


#define UNLESS_B33_HIGH() \
     if (! READ_B33() )


#define WAIT_B33_LOW() \
    while ( READ_B33() );


#define WAIT_B33_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B33() && (--___t___ > 0)); }


#define WAIT_B33_HIGH() \
    while (! READ_B33() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3lr
//
// Return the value of register K_3LR
//
// Notes : Register key registers (K3LR) at the offset 0x38, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b32 
    // 
#define B32_MASK 0x1U
#define B32_OFFSET 0
#define B32_START_BIT 0
#define B32_WIDTH 1



typedef enum b32 {
    B_3_2_0,
    B_3_2_1
} B32_T ;
#define WRITE_B32(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ B32_MASK) | ((val << B32_START_BIT) & B32_MASK )); \
   } 

#define ENABLE_B32() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  B32_MASK ); \
   }

#define DISABLE_B32() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~B32_MASK ); \
   } 

#define READ_B32() \
   ((READ_REGISTER_ULONG(0x38) & B32_MASK)  >> B32_START_BIT)

#define WHEN_B32_HIGH() \
     if ( READ_B32() )


#define UNLESS_B32_HIGH() \
     if (! READ_B32() )


#define WAIT_B32_LOW() \
    while ( READ_B32() );


#define WAIT_B32_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B32() && (--___t___ > 0)); }


#define WAIT_B32_HIGH() \
    while (! READ_B32() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K3RR
//
// Notes : Register K3rr at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_K_3RR( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b31 
    // 
#define B31_MASK 0x80000000U
#define B31_OFFSET 31
#define B31_START_BIT 31
#define B31_WIDTH 1


#define K_3RR_REG 0x3C

typedef enum b31 {
    B_3_1_0,
    B_3_1_1
} B31_T ;
#define WRITE_B31(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B31_MASK) | ((val << B31_START_BIT) & B31_MASK )); \
   } 

#define ENABLE_B31() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B31_MASK ); \
   }

#define DISABLE_B31() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B31_MASK ); \
   } 

#define READ_B31() \
   ((READ_REGISTER_ULONG(0x3C) & B31_MASK)  >> B31_START_BIT)

#define WHEN_B31_HIGH() \
     if ( READ_B31() )


#define UNLESS_B31_HIGH() \
     if (! READ_B31() )


#define WAIT_B31_LOW() \
    while ( READ_B31() );


#define WAIT_B31_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B31() && (--___t___ > 0)); }


#define WAIT_B31_HIGH() \
    while (! READ_B31() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b30 
    // 
#define B30_MASK 0x40000000U
#define B30_OFFSET 30
#define B30_START_BIT 30
#define B30_WIDTH 1



typedef enum b30 {
    B_3_0_0,
    B_3_0_1
} B30_T ;
#define WRITE_B30(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B30_MASK) | ((val << B30_START_BIT) & B30_MASK )); \
   } 

#define ENABLE_B30() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B30_MASK ); \
   }

#define DISABLE_B30() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B30_MASK ); \
   } 

#define READ_B30() \
   ((READ_REGISTER_ULONG(0x3C) & B30_MASK)  >> B30_START_BIT)

#define WHEN_B30_HIGH() \
     if ( READ_B30() )


#define UNLESS_B30_HIGH() \
     if (! READ_B30() )


#define WAIT_B30_LOW() \
    while ( READ_B30() );


#define WAIT_B30_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B30() && (--___t___ > 0)); }


#define WAIT_B30_HIGH() \
    while (! READ_B30() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b29 
    // 
#define B29_MASK 0x20000000U
#define B29_OFFSET 29
#define B29_START_BIT 29
#define B29_WIDTH 1



typedef enum b29 {
    B_2_9_0,
    B_2_9_1
} B29_T ;
#define WRITE_B29(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B29_MASK) | ((val << B29_START_BIT) & B29_MASK )); \
   } 

#define ENABLE_B29() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B29_MASK ); \
   }

#define DISABLE_B29() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B29_MASK ); \
   } 

#define READ_B29() \
   ((READ_REGISTER_ULONG(0x3C) & B29_MASK)  >> B29_START_BIT)

#define WHEN_B29_HIGH() \
     if ( READ_B29() )


#define UNLESS_B29_HIGH() \
     if (! READ_B29() )


#define WAIT_B29_LOW() \
    while ( READ_B29() );


#define WAIT_B29_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B29() && (--___t___ > 0)); }


#define WAIT_B29_HIGH() \
    while (! READ_B29() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b28 
    // 
#define B28_MASK 0x10000000U
#define B28_OFFSET 28
#define B28_START_BIT 28
#define B28_WIDTH 1



typedef enum b28 {
    B_2_8_0,
    B_2_8_1
} B28_T ;
#define WRITE_B28(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B28_MASK) | ((val << B28_START_BIT) & B28_MASK )); \
   } 

#define ENABLE_B28() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B28_MASK ); \
   }

#define DISABLE_B28() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B28_MASK ); \
   } 

#define READ_B28() \
   ((READ_REGISTER_ULONG(0x3C) & B28_MASK)  >> B28_START_BIT)

#define WHEN_B28_HIGH() \
     if ( READ_B28() )


#define UNLESS_B28_HIGH() \
     if (! READ_B28() )


#define WAIT_B28_LOW() \
    while ( READ_B28() );


#define WAIT_B28_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B28() && (--___t___ > 0)); }


#define WAIT_B28_HIGH() \
    while (! READ_B28() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b27 
    // 
#define B27_MASK 0x8000000U
#define B27_OFFSET 27
#define B27_START_BIT 27
#define B27_WIDTH 1



typedef enum b27 {
    B_2_7_0,
    B_2_7_1
} B27_T ;
#define WRITE_B27(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B27_MASK) | ((val << B27_START_BIT) & B27_MASK )); \
   } 

#define ENABLE_B27() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B27_MASK ); \
   }

#define DISABLE_B27() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B27_MASK ); \
   } 

#define READ_B27() \
   ((READ_REGISTER_ULONG(0x3C) & B27_MASK)  >> B27_START_BIT)

#define WHEN_B27_HIGH() \
     if ( READ_B27() )


#define UNLESS_B27_HIGH() \
     if (! READ_B27() )


#define WAIT_B27_LOW() \
    while ( READ_B27() );


#define WAIT_B27_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B27() && (--___t___ > 0)); }


#define WAIT_B27_HIGH() \
    while (! READ_B27() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b26 
    // 
#define B26_MASK 0x4000000U
#define B26_OFFSET 26
#define B26_START_BIT 26
#define B26_WIDTH 1



typedef enum b26 {
    B_2_6_0,
    B_2_6_1
} B26_T ;
#define WRITE_B26(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B26_MASK) | ((val << B26_START_BIT) & B26_MASK )); \
   } 

#define ENABLE_B26() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B26_MASK ); \
   }

#define DISABLE_B26() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B26_MASK ); \
   } 

#define READ_B26() \
   ((READ_REGISTER_ULONG(0x3C) & B26_MASK)  >> B26_START_BIT)

#define WHEN_B26_HIGH() \
     if ( READ_B26() )


#define UNLESS_B26_HIGH() \
     if (! READ_B26() )


#define WAIT_B26_LOW() \
    while ( READ_B26() );


#define WAIT_B26_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B26() && (--___t___ > 0)); }


#define WAIT_B26_HIGH() \
    while (! READ_B26() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b25 
    // 
#define B25_MASK 0x2000000U
#define B25_OFFSET 25
#define B25_START_BIT 25
#define B25_WIDTH 1



typedef enum b25 {
    B_2_5_0,
    B_2_5_1
} B25_T ;
#define WRITE_B25(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B25_MASK) | ((val << B25_START_BIT) & B25_MASK )); \
   } 

#define ENABLE_B25() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B25_MASK ); \
   }

#define DISABLE_B25() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B25_MASK ); \
   } 

#define READ_B25() \
   ((READ_REGISTER_ULONG(0x3C) & B25_MASK)  >> B25_START_BIT)

#define WHEN_B25_HIGH() \
     if ( READ_B25() )


#define UNLESS_B25_HIGH() \
     if (! READ_B25() )


#define WAIT_B25_LOW() \
    while ( READ_B25() );


#define WAIT_B25_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B25() && (--___t___ > 0)); }


#define WAIT_B25_HIGH() \
    while (! READ_B25() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b24 
    // 
#define B24_MASK 0x1000000U
#define B24_OFFSET 24
#define B24_START_BIT 24
#define B24_WIDTH 1



typedef enum b24 {
    B_2_4_0,
    B_2_4_1
} B24_T ;
#define WRITE_B24(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B24_MASK) | ((val << B24_START_BIT) & B24_MASK )); \
   } 

#define ENABLE_B24() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B24_MASK ); \
   }

#define DISABLE_B24() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B24_MASK ); \
   } 

#define READ_B24() \
   ((READ_REGISTER_ULONG(0x3C) & B24_MASK)  >> B24_START_BIT)

#define WHEN_B24_HIGH() \
     if ( READ_B24() )


#define UNLESS_B24_HIGH() \
     if (! READ_B24() )


#define WAIT_B24_LOW() \
    while ( READ_B24() );


#define WAIT_B24_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B24() && (--___t___ > 0)); }


#define WAIT_B24_HIGH() \
    while (! READ_B24() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b23 
    // 
#define B23_MASK 0x800000U
#define B23_OFFSET 23
#define B23_START_BIT 23
#define B23_WIDTH 1



typedef enum b23 {
    B_2_3_0,
    B_2_3_1
} B23_T ;
#define WRITE_B23(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B23_MASK) | ((val << B23_START_BIT) & B23_MASK )); \
   } 

#define ENABLE_B23() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B23_MASK ); \
   }

#define DISABLE_B23() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B23_MASK ); \
   } 

#define READ_B23() \
   ((READ_REGISTER_ULONG(0x3C) & B23_MASK)  >> B23_START_BIT)

#define WHEN_B23_HIGH() \
     if ( READ_B23() )


#define UNLESS_B23_HIGH() \
     if (! READ_B23() )


#define WAIT_B23_LOW() \
    while ( READ_B23() );


#define WAIT_B23_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B23() && (--___t___ > 0)); }


#define WAIT_B23_HIGH() \
    while (! READ_B23() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b22 
    // 
#define B22_MASK 0x400000U
#define B22_OFFSET 22
#define B22_START_BIT 22
#define B22_WIDTH 1



typedef enum b22 {
    B_2_2_0,
    B_2_2_1
} B22_T ;
#define WRITE_B22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B22_MASK) | ((val << B22_START_BIT) & B22_MASK )); \
   } 

#define ENABLE_B22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B22_MASK ); \
   }

#define DISABLE_B22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B22_MASK ); \
   } 

#define READ_B22() \
   ((READ_REGISTER_ULONG(0x3C) & B22_MASK)  >> B22_START_BIT)

#define WHEN_B22_HIGH() \
     if ( READ_B22() )


#define UNLESS_B22_HIGH() \
     if (! READ_B22() )


#define WAIT_B22_LOW() \
    while ( READ_B22() );


#define WAIT_B22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B22() && (--___t___ > 0)); }


#define WAIT_B22_HIGH() \
    while (! READ_B22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b21 
    // 
#define B21_MASK 0x200000U
#define B21_OFFSET 21
#define B21_START_BIT 21
#define B21_WIDTH 1



typedef enum b21 {
    B_2_1_0,
    B_2_1_1
} B21_T ;
#define WRITE_B21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B21_MASK) | ((val << B21_START_BIT) & B21_MASK )); \
   } 

#define ENABLE_B21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B21_MASK ); \
   }

#define DISABLE_B21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B21_MASK ); \
   } 

#define READ_B21() \
   ((READ_REGISTER_ULONG(0x3C) & B21_MASK)  >> B21_START_BIT)

#define WHEN_B21_HIGH() \
     if ( READ_B21() )


#define UNLESS_B21_HIGH() \
     if (! READ_B21() )


#define WAIT_B21_LOW() \
    while ( READ_B21() );


#define WAIT_B21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B21() && (--___t___ > 0)); }


#define WAIT_B21_HIGH() \
    while (! READ_B21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b20 
    // 
#define B20_MASK 0x100000U
#define B20_OFFSET 20
#define B20_START_BIT 20
#define B20_WIDTH 1



typedef enum b20 {
    B_2_0_0,
    B_2_0_1
} B20_T ;
#define WRITE_B20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B20_MASK) | ((val << B20_START_BIT) & B20_MASK )); \
   } 

#define ENABLE_B20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B20_MASK ); \
   }

#define DISABLE_B20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B20_MASK ); \
   } 

#define READ_B20() \
   ((READ_REGISTER_ULONG(0x3C) & B20_MASK)  >> B20_START_BIT)

#define WHEN_B20_HIGH() \
     if ( READ_B20() )


#define UNLESS_B20_HIGH() \
     if (! READ_B20() )


#define WAIT_B20_LOW() \
    while ( READ_B20() );


#define WAIT_B20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B20() && (--___t___ > 0)); }


#define WAIT_B20_HIGH() \
    while (! READ_B20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b19 
    // 
#define B19_MASK 0x80000U
#define B19_OFFSET 19
#define B19_START_BIT 19
#define B19_WIDTH 1



typedef enum b19 {
    B_1_9_0,
    B_1_9_1
} B19_T ;
#define WRITE_B19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B19_MASK) | ((val << B19_START_BIT) & B19_MASK )); \
   } 

#define ENABLE_B19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B19_MASK ); \
   }

#define DISABLE_B19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B19_MASK ); \
   } 

#define READ_B19() \
   ((READ_REGISTER_ULONG(0x3C) & B19_MASK)  >> B19_START_BIT)

#define WHEN_B19_HIGH() \
     if ( READ_B19() )


#define UNLESS_B19_HIGH() \
     if (! READ_B19() )


#define WAIT_B19_LOW() \
    while ( READ_B19() );


#define WAIT_B19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B19() && (--___t___ > 0)); }


#define WAIT_B19_HIGH() \
    while (! READ_B19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b18 
    // 
#define B18_MASK 0x40000U
#define B18_OFFSET 18
#define B18_START_BIT 18
#define B18_WIDTH 1



typedef enum b18 {
    B_1_8_0,
    B_1_8_1
} B18_T ;
#define WRITE_B18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B18_MASK) | ((val << B18_START_BIT) & B18_MASK )); \
   } 

#define ENABLE_B18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B18_MASK ); \
   }

#define DISABLE_B18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B18_MASK ); \
   } 

#define READ_B18() \
   ((READ_REGISTER_ULONG(0x3C) & B18_MASK)  >> B18_START_BIT)

#define WHEN_B18_HIGH() \
     if ( READ_B18() )


#define UNLESS_B18_HIGH() \
     if (! READ_B18() )


#define WAIT_B18_LOW() \
    while ( READ_B18() );


#define WAIT_B18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B18() && (--___t___ > 0)); }


#define WAIT_B18_HIGH() \
    while (! READ_B18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b17 
    // 
#define B17_MASK 0x20000U
#define B17_OFFSET 17
#define B17_START_BIT 17
#define B17_WIDTH 1



typedef enum b17 {
    B_1_7_0,
    B_1_7_1
} B17_T ;
#define WRITE_B17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B17_MASK) | ((val << B17_START_BIT) & B17_MASK )); \
   } 

#define ENABLE_B17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B17_MASK ); \
   }

#define DISABLE_B17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B17_MASK ); \
   } 

#define READ_B17() \
   ((READ_REGISTER_ULONG(0x3C) & B17_MASK)  >> B17_START_BIT)

#define WHEN_B17_HIGH() \
     if ( READ_B17() )


#define UNLESS_B17_HIGH() \
     if (! READ_B17() )


#define WAIT_B17_LOW() \
    while ( READ_B17() );


#define WAIT_B17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B17() && (--___t___ > 0)); }


#define WAIT_B17_HIGH() \
    while (! READ_B17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b16 
    // 
#define B16_MASK 0x10000U
#define B16_OFFSET 16
#define B16_START_BIT 16
#define B16_WIDTH 1



typedef enum b16 {
    B_1_6_0,
    B_1_6_1
} B16_T ;
#define WRITE_B16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B16_MASK) | ((val << B16_START_BIT) & B16_MASK )); \
   } 

#define ENABLE_B16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B16_MASK ); \
   }

#define DISABLE_B16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B16_MASK ); \
   } 

#define READ_B16() \
   ((READ_REGISTER_ULONG(0x3C) & B16_MASK)  >> B16_START_BIT)

#define WHEN_B16_HIGH() \
     if ( READ_B16() )


#define UNLESS_B16_HIGH() \
     if (! READ_B16() )


#define WAIT_B16_LOW() \
    while ( READ_B16() );


#define WAIT_B16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B16() && (--___t___ > 0)); }


#define WAIT_B16_HIGH() \
    while (! READ_B16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b15 
    // 
#define B15_MASK 0x8000U
#define B15_OFFSET 15
#define B15_START_BIT 15
#define B15_WIDTH 1



typedef enum b15 {
    B_1_5_0,
    B_1_5_1
} B15_T ;
#define WRITE_B15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B15_MASK) | ((val << B15_START_BIT) & B15_MASK )); \
   } 

#define ENABLE_B15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B15_MASK ); \
   }

#define DISABLE_B15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B15_MASK ); \
   } 

#define READ_B15() \
   ((READ_REGISTER_ULONG(0x3C) & B15_MASK)  >> B15_START_BIT)

#define WHEN_B15_HIGH() \
     if ( READ_B15() )


#define UNLESS_B15_HIGH() \
     if (! READ_B15() )


#define WAIT_B15_LOW() \
    while ( READ_B15() );


#define WAIT_B15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B15() && (--___t___ > 0)); }


#define WAIT_B15_HIGH() \
    while (! READ_B15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b14 
    // 
#define B14_MASK 0x4000U
#define B14_OFFSET 14
#define B14_START_BIT 14
#define B14_WIDTH 1



typedef enum b14 {
    B_1_4_0,
    B_1_4_1
} B14_T ;
#define WRITE_B14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B14_MASK) | ((val << B14_START_BIT) & B14_MASK )); \
   } 

#define ENABLE_B14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B14_MASK ); \
   }

#define DISABLE_B14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B14_MASK ); \
   } 

#define READ_B14() \
   ((READ_REGISTER_ULONG(0x3C) & B14_MASK)  >> B14_START_BIT)

#define WHEN_B14_HIGH() \
     if ( READ_B14() )


#define UNLESS_B14_HIGH() \
     if (! READ_B14() )


#define WAIT_B14_LOW() \
    while ( READ_B14() );


#define WAIT_B14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B14() && (--___t___ > 0)); }


#define WAIT_B14_HIGH() \
    while (! READ_B14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b13 
    // 
#define B13_MASK 0x2000U
#define B13_OFFSET 13
#define B13_START_BIT 13
#define B13_WIDTH 1



typedef enum b13 {
    B_1_3_0,
    B_1_3_1
} B13_T ;
#define WRITE_B13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B13_MASK) | ((val << B13_START_BIT) & B13_MASK )); \
   } 

#define ENABLE_B13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B13_MASK ); \
   }

#define DISABLE_B13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B13_MASK ); \
   } 

#define READ_B13() \
   ((READ_REGISTER_ULONG(0x3C) & B13_MASK)  >> B13_START_BIT)

#define WHEN_B13_HIGH() \
     if ( READ_B13() )


#define UNLESS_B13_HIGH() \
     if (! READ_B13() )


#define WAIT_B13_LOW() \
    while ( READ_B13() );


#define WAIT_B13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B13() && (--___t___ > 0)); }


#define WAIT_B13_HIGH() \
    while (! READ_B13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b12 
    // 
#define B12_MASK 0x1000U
#define B12_OFFSET 12
#define B12_START_BIT 12
#define B12_WIDTH 1



typedef enum b12 {
    B_1_2_0,
    B_1_2_1
} B12_T ;
#define WRITE_B12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B12_MASK) | ((val << B12_START_BIT) & B12_MASK )); \
   } 

#define ENABLE_B12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B12_MASK ); \
   }

#define DISABLE_B12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B12_MASK ); \
   } 

#define READ_B12() \
   ((READ_REGISTER_ULONG(0x3C) & B12_MASK)  >> B12_START_BIT)

#define WHEN_B12_HIGH() \
     if ( READ_B12() )


#define UNLESS_B12_HIGH() \
     if (! READ_B12() )


#define WAIT_B12_LOW() \
    while ( READ_B12() );


#define WAIT_B12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B12() && (--___t___ > 0)); }


#define WAIT_B12_HIGH() \
    while (! READ_B12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b11 
    // 
#define B11_MASK 0x800U
#define B11_OFFSET 11
#define B11_START_BIT 11
#define B11_WIDTH 1



typedef enum b11 {
    B_1_1_0,
    B_1_1_1
} B11_T ;
#define WRITE_B11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B11_MASK) | ((val << B11_START_BIT) & B11_MASK )); \
   } 

#define ENABLE_B11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B11_MASK ); \
   }

#define DISABLE_B11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B11_MASK ); \
   } 

#define READ_B11() \
   ((READ_REGISTER_ULONG(0x3C) & B11_MASK)  >> B11_START_BIT)

#define WHEN_B11_HIGH() \
     if ( READ_B11() )


#define UNLESS_B11_HIGH() \
     if (! READ_B11() )


#define WAIT_B11_LOW() \
    while ( READ_B11() );


#define WAIT_B11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B11() && (--___t___ > 0)); }


#define WAIT_B11_HIGH() \
    while (! READ_B11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b10 
    // 
#define B10_MASK 0x400U
#define B10_OFFSET 10
#define B10_START_BIT 10
#define B10_WIDTH 1



typedef enum b10 {
    B_1_0_0,
    B_1_0_1
} B10_T ;
#define WRITE_B10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B10_MASK) | ((val << B10_START_BIT) & B10_MASK )); \
   } 

#define ENABLE_B10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B10_MASK ); \
   }

#define DISABLE_B10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B10_MASK ); \
   } 

#define READ_B10() \
   ((READ_REGISTER_ULONG(0x3C) & B10_MASK)  >> B10_START_BIT)

#define WHEN_B10_HIGH() \
     if ( READ_B10() )


#define UNLESS_B10_HIGH() \
     if (! READ_B10() )


#define WAIT_B10_LOW() \
    while ( READ_B10() );


#define WAIT_B10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B10() && (--___t___ > 0)); }


#define WAIT_B10_HIGH() \
    while (! READ_B10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b9 
    // 
#define B9_MASK 0x200U
#define B9_OFFSET 9
#define B9_START_BIT 9
#define B9_WIDTH 1



typedef enum b9 {
    B_9_0,
    B_9_1
} B9_T ;
#define WRITE_B9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B9_MASK) | ((val << B9_START_BIT) & B9_MASK )); \
   } 

#define ENABLE_B9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B9_MASK ); \
   }

#define DISABLE_B9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B9_MASK ); \
   } 

#define READ_B9() \
   ((READ_REGISTER_ULONG(0x3C) & B9_MASK)  >> B9_START_BIT)

#define WHEN_B9_HIGH() \
     if ( READ_B9() )


#define UNLESS_B9_HIGH() \
     if (! READ_B9() )


#define WAIT_B9_LOW() \
    while ( READ_B9() );


#define WAIT_B9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B9() && (--___t___ > 0)); }


#define WAIT_B9_HIGH() \
    while (! READ_B9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b8 
    // 
#define B8_MASK 0x100U
#define B8_OFFSET 8
#define B8_START_BIT 8
#define B8_WIDTH 1



typedef enum b8 {
    B_8_0,
    B_8_1
} B8_T ;
#define WRITE_B8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B8_MASK) | ((val << B8_START_BIT) & B8_MASK )); \
   } 

#define ENABLE_B8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B8_MASK ); \
   }

#define DISABLE_B8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B8_MASK ); \
   } 

#define READ_B8() \
   ((READ_REGISTER_ULONG(0x3C) & B8_MASK)  >> B8_START_BIT)

#define WHEN_B8_HIGH() \
     if ( READ_B8() )


#define UNLESS_B8_HIGH() \
     if (! READ_B8() )


#define WAIT_B8_LOW() \
    while ( READ_B8() );


#define WAIT_B8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B8() && (--___t___ > 0)); }


#define WAIT_B8_HIGH() \
    while (! READ_B8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b7 
    // 
#define B7_MASK 0x80U
#define B7_OFFSET 7
#define B7_START_BIT 7
#define B7_WIDTH 1



typedef enum b7 {
    B_7_0,
    B_7_1
} B7_T ;
#define WRITE_B7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B7_MASK) | ((val << B7_START_BIT) & B7_MASK )); \
   } 

#define ENABLE_B7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B7_MASK ); \
   }

#define DISABLE_B7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B7_MASK ); \
   } 

#define READ_B7() \
   ((READ_REGISTER_ULONG(0x3C) & B7_MASK)  >> B7_START_BIT)

#define WHEN_B7_HIGH() \
     if ( READ_B7() )


#define UNLESS_B7_HIGH() \
     if (! READ_B7() )


#define WAIT_B7_LOW() \
    while ( READ_B7() );


#define WAIT_B7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B7() && (--___t___ > 0)); }


#define WAIT_B7_HIGH() \
    while (! READ_B7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b6 
    // 
#define B6_MASK 0x40U
#define B6_OFFSET 6
#define B6_START_BIT 6
#define B6_WIDTH 1



typedef enum b6 {
    B_6_0,
    B_6_1
} B6_T ;
#define WRITE_B6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B6_MASK) | ((val << B6_START_BIT) & B6_MASK )); \
   } 

#define ENABLE_B6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B6_MASK ); \
   }

#define DISABLE_B6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B6_MASK ); \
   } 

#define READ_B6() \
   ((READ_REGISTER_ULONG(0x3C) & B6_MASK)  >> B6_START_BIT)

#define WHEN_B6_HIGH() \
     if ( READ_B6() )


#define UNLESS_B6_HIGH() \
     if (! READ_B6() )


#define WAIT_B6_LOW() \
    while ( READ_B6() );


#define WAIT_B6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B6() && (--___t___ > 0)); }


#define WAIT_B6_HIGH() \
    while (! READ_B6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b5 
    // 
#define B5_MASK 0x20U
#define B5_OFFSET 5
#define B5_START_BIT 5
#define B5_WIDTH 1



typedef enum b5 {
    B_5_0,
    B_5_1
} B5_T ;
#define WRITE_B5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B5_MASK) | ((val << B5_START_BIT) & B5_MASK )); \
   } 

#define ENABLE_B5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B5_MASK ); \
   }

#define DISABLE_B5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B5_MASK ); \
   } 

#define READ_B5() \
   ((READ_REGISTER_ULONG(0x3C) & B5_MASK)  >> B5_START_BIT)

#define WHEN_B5_HIGH() \
     if ( READ_B5() )


#define UNLESS_B5_HIGH() \
     if (! READ_B5() )


#define WAIT_B5_LOW() \
    while ( READ_B5() );


#define WAIT_B5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B5() && (--___t___ > 0)); }


#define WAIT_B5_HIGH() \
    while (! READ_B5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b4 
    // 
#define B4_MASK 0x10U
#define B4_OFFSET 4
#define B4_START_BIT 4
#define B4_WIDTH 1



typedef enum b4 {
    B_4_0,
    B_4_1
} B4_T ;
#define WRITE_B4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B4_MASK) | ((val << B4_START_BIT) & B4_MASK )); \
   } 

#define ENABLE_B4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B4_MASK ); \
   }

#define DISABLE_B4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B4_MASK ); \
   } 

#define READ_B4() \
   ((READ_REGISTER_ULONG(0x3C) & B4_MASK)  >> B4_START_BIT)

#define WHEN_B4_HIGH() \
     if ( READ_B4() )


#define UNLESS_B4_HIGH() \
     if (! READ_B4() )


#define WAIT_B4_LOW() \
    while ( READ_B4() );


#define WAIT_B4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B4() && (--___t___ > 0)); }


#define WAIT_B4_HIGH() \
    while (! READ_B4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b3 
    // 
#define B3_MASK 0x8U
#define B3_OFFSET 3
#define B3_START_BIT 3
#define B3_WIDTH 1



typedef enum b3 {
    B_3_0,
    B_3_1
} B3_T ;
#define WRITE_B3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B3_MASK) | ((val << B3_START_BIT) & B3_MASK )); \
   } 

#define ENABLE_B3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B3_MASK ); \
   }

#define DISABLE_B3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B3_MASK ); \
   } 

#define READ_B3() \
   ((READ_REGISTER_ULONG(0x3C) & B3_MASK)  >> B3_START_BIT)

#define WHEN_B3_HIGH() \
     if ( READ_B3() )


#define UNLESS_B3_HIGH() \
     if (! READ_B3() )


#define WAIT_B3_LOW() \
    while ( READ_B3() );


#define WAIT_B3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B3() && (--___t___ > 0)); }


#define WAIT_B3_HIGH() \
    while (! READ_B3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b2 
    // 
#define B2_MASK 0x4U
#define B2_OFFSET 2
#define B2_START_BIT 2
#define B2_WIDTH 1



typedef enum b2 {
    B_2_0,
    B_2_1
} B2_T ;
#define WRITE_B2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B2_MASK) | ((val << B2_START_BIT) & B2_MASK )); \
   } 

#define ENABLE_B2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B2_MASK ); \
   }

#define DISABLE_B2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B2_MASK ); \
   } 

#define READ_B2() \
   ((READ_REGISTER_ULONG(0x3C) & B2_MASK)  >> B2_START_BIT)

#define WHEN_B2_HIGH() \
     if ( READ_B2() )


#define UNLESS_B2_HIGH() \
     if (! READ_B2() )


#define WAIT_B2_LOW() \
    while ( READ_B2() );


#define WAIT_B2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2() && (--___t___ > 0)); }


#define WAIT_B2_HIGH() \
    while (! READ_B2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b1 
    // 
#define B1_MASK 0x2U
#define B1_OFFSET 1
#define B1_START_BIT 1
#define B1_WIDTH 1



typedef enum b1 {
    B_1_0,
    B_1_1
} B1_T ;
#define WRITE_B1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B1_MASK) | ((val << B1_START_BIT) & B1_MASK )); \
   } 

#define ENABLE_B1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B1_MASK ); \
   }

#define DISABLE_B1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B1_MASK ); \
   } 

#define READ_B1() \
   ((READ_REGISTER_ULONG(0x3C) & B1_MASK)  >> B1_START_BIT)

#define WHEN_B1_HIGH() \
     if ( READ_B1() )


#define UNLESS_B1_HIGH() \
     if (! READ_B1() )


#define WAIT_B1_LOW() \
    while ( READ_B1() );


#define WAIT_B1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B1() && (--___t___ > 0)); }


#define WAIT_B1_HIGH() \
    while (! READ_B1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : K3rr
//
// Return the value of register K_3RR
//
// Notes : Register key registers (K3RR) at the offset 0x3C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // b0 
    // 
#define B0_MASK 0x1U
#define B0_OFFSET 0
#define B0_START_BIT 0
#define B0_WIDTH 1



typedef enum b0 {
    B_0_0,
    B_0_1
} B0_T ;
#define WRITE_B0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ B0_MASK) | ((val << B0_START_BIT) & B0_MASK )); \
   } 

#define ENABLE_B0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  B0_MASK ); \
   }

#define DISABLE_B0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~B0_MASK ); \
   } 

#define READ_B0() \
   ((READ_REGISTER_ULONG(0x3C) & B0_MASK)  >> B0_START_BIT)

#define WHEN_B0_HIGH() \
     if ( READ_B0() )


#define UNLESS_B0_HIGH() \
     if (! READ_B0() )


#define WAIT_B0_LOW() \
    while ( READ_B0() );


#define WAIT_B0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B0() && (--___t___ > 0)); }


#define WAIT_B0_HIGH() \
    while (! READ_B0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV0LR
//
// Notes : Register Iv0lr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IV_0LR( y) \
     WRITE_REGISTER_ULONG( 0x40 , y)

#define SET_BITS_IV_0LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  mask ); \
   }

#define CLEAR_BITS_IV_0LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val & ~mask ); \
   }

#define READ_REGISTER_IV_0LR() \
     READ_REGISTER_ULONG(0x40)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV0 
    // 
#define IV0_MASK 0x80000000U
#define IV0_OFFSET 31
#define IV0_START_BIT 31
#define IV0_WIDTH 1


#define IV_0LR_REG 0x40

typedef enum iv0 {
    IV_0_0,
    IV_0_1
} IV_0_T ;
#define WRITE_IV0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV0_MASK) | ((val << IV0_START_BIT) & IV0_MASK )); \
   } 

#define ENABLE_IV0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV0_MASK ); \
   }

#define DISABLE_IV0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV0_MASK ); \
   } 

#define READ_IV0() \
   ((READ_REGISTER_ULONG(0x40) & IV0_MASK)  >> IV0_START_BIT)

#define WHEN_IV0_HIGH() \
     if ( READ_IV0() )


#define UNLESS_IV0_HIGH() \
     if (! READ_IV0() )


#define WAIT_IV0_LOW() \
    while ( READ_IV0() );


#define WAIT_IV0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV0() && (--___t___ > 0)); }


#define WAIT_IV0_HIGH() \
    while (! READ_IV0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV1 
    // 
#define IV1_MASK 0x40000000U
#define IV1_OFFSET 30
#define IV1_START_BIT 30
#define IV1_WIDTH 1



typedef enum iv1 {
    IV_1_0,
    IV_1_1
} IV_1_T ;
#define WRITE_IV1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV1_MASK) | ((val << IV1_START_BIT) & IV1_MASK )); \
   } 

#define ENABLE_IV1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV1_MASK ); \
   }

#define DISABLE_IV1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV1_MASK ); \
   } 

#define READ_IV1() \
   ((READ_REGISTER_ULONG(0x40) & IV1_MASK)  >> IV1_START_BIT)

#define WHEN_IV1_HIGH() \
     if ( READ_IV1() )


#define UNLESS_IV1_HIGH() \
     if (! READ_IV1() )


#define WAIT_IV1_LOW() \
    while ( READ_IV1() );


#define WAIT_IV1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV1() && (--___t___ > 0)); }


#define WAIT_IV1_HIGH() \
    while (! READ_IV1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV2 
    // 
#define IV2_MASK 0x20000000U
#define IV2_OFFSET 29
#define IV2_START_BIT 29
#define IV2_WIDTH 1



typedef enum iv2 {
    IV_2_0,
    IV_2_1
} IV_2_T ;
#define WRITE_IV2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV2_MASK) | ((val << IV2_START_BIT) & IV2_MASK )); \
   } 

#define ENABLE_IV2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV2_MASK ); \
   }

#define DISABLE_IV2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV2_MASK ); \
   } 

#define READ_IV2() \
   ((READ_REGISTER_ULONG(0x40) & IV2_MASK)  >> IV2_START_BIT)

#define WHEN_IV2_HIGH() \
     if ( READ_IV2() )


#define UNLESS_IV2_HIGH() \
     if (! READ_IV2() )


#define WAIT_IV2_LOW() \
    while ( READ_IV2() );


#define WAIT_IV2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV2() && (--___t___ > 0)); }


#define WAIT_IV2_HIGH() \
    while (! READ_IV2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV3 
    // 
#define IV3_MASK 0x10000000U
#define IV3_OFFSET 28
#define IV3_START_BIT 28
#define IV3_WIDTH 1



typedef enum iv3 {
    IV_3_0,
    IV_3_1
} IV_3_T ;
#define WRITE_IV3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV3_MASK) | ((val << IV3_START_BIT) & IV3_MASK )); \
   } 

#define ENABLE_IV3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV3_MASK ); \
   }

#define DISABLE_IV3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV3_MASK ); \
   } 

#define READ_IV3() \
   ((READ_REGISTER_ULONG(0x40) & IV3_MASK)  >> IV3_START_BIT)

#define WHEN_IV3_HIGH() \
     if ( READ_IV3() )


#define UNLESS_IV3_HIGH() \
     if (! READ_IV3() )


#define WAIT_IV3_LOW() \
    while ( READ_IV3() );


#define WAIT_IV3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV3() && (--___t___ > 0)); }


#define WAIT_IV3_HIGH() \
    while (! READ_IV3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV4 
    // 
#define IV4_MASK 0x8000000U
#define IV4_OFFSET 27
#define IV4_START_BIT 27
#define IV4_WIDTH 1



typedef enum iv4 {
    IV_4_0,
    IV_4_1
} IV_4_T ;
#define WRITE_IV4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV4_MASK) | ((val << IV4_START_BIT) & IV4_MASK )); \
   } 

#define ENABLE_IV4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV4_MASK ); \
   }

#define DISABLE_IV4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV4_MASK ); \
   } 

#define READ_IV4() \
   ((READ_REGISTER_ULONG(0x40) & IV4_MASK)  >> IV4_START_BIT)

#define WHEN_IV4_HIGH() \
     if ( READ_IV4() )


#define UNLESS_IV4_HIGH() \
     if (! READ_IV4() )


#define WAIT_IV4_LOW() \
    while ( READ_IV4() );


#define WAIT_IV4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV4() && (--___t___ > 0)); }


#define WAIT_IV4_HIGH() \
    while (! READ_IV4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV5 
    // 
#define IV5_MASK 0x4000000U
#define IV5_OFFSET 26
#define IV5_START_BIT 26
#define IV5_WIDTH 1



typedef enum iv5 {
    IV_5_0,
    IV_5_1
} IV_5_T ;
#define WRITE_IV5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV5_MASK) | ((val << IV5_START_BIT) & IV5_MASK )); \
   } 

#define ENABLE_IV5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV5_MASK ); \
   }

#define DISABLE_IV5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV5_MASK ); \
   } 

#define READ_IV5() \
   ((READ_REGISTER_ULONG(0x40) & IV5_MASK)  >> IV5_START_BIT)

#define WHEN_IV5_HIGH() \
     if ( READ_IV5() )


#define UNLESS_IV5_HIGH() \
     if (! READ_IV5() )


#define WAIT_IV5_LOW() \
    while ( READ_IV5() );


#define WAIT_IV5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV5() && (--___t___ > 0)); }


#define WAIT_IV5_HIGH() \
    while (! READ_IV5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV6 
    // 
#define IV6_MASK 0x2000000U
#define IV6_OFFSET 25
#define IV6_START_BIT 25
#define IV6_WIDTH 1



typedef enum iv6 {
    IV_6_0,
    IV_6_1
} IV_6_T ;
#define WRITE_IV6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV6_MASK) | ((val << IV6_START_BIT) & IV6_MASK )); \
   } 

#define ENABLE_IV6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV6_MASK ); \
   }

#define DISABLE_IV6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV6_MASK ); \
   } 

#define READ_IV6() \
   ((READ_REGISTER_ULONG(0x40) & IV6_MASK)  >> IV6_START_BIT)

#define WHEN_IV6_HIGH() \
     if ( READ_IV6() )


#define UNLESS_IV6_HIGH() \
     if (! READ_IV6() )


#define WAIT_IV6_LOW() \
    while ( READ_IV6() );


#define WAIT_IV6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV6() && (--___t___ > 0)); }


#define WAIT_IV6_HIGH() \
    while (! READ_IV6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV7 
    // 
#define IV7_MASK 0x1000000U
#define IV7_OFFSET 24
#define IV7_START_BIT 24
#define IV7_WIDTH 1



typedef enum iv7 {
    IV_7_0,
    IV_7_1
} IV_7_T ;
#define WRITE_IV7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV7_MASK) | ((val << IV7_START_BIT) & IV7_MASK )); \
   } 

#define ENABLE_IV7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV7_MASK ); \
   }

#define DISABLE_IV7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV7_MASK ); \
   } 

#define READ_IV7() \
   ((READ_REGISTER_ULONG(0x40) & IV7_MASK)  >> IV7_START_BIT)

#define WHEN_IV7_HIGH() \
     if ( READ_IV7() )


#define UNLESS_IV7_HIGH() \
     if (! READ_IV7() )


#define WAIT_IV7_LOW() \
    while ( READ_IV7() );


#define WAIT_IV7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV7() && (--___t___ > 0)); }


#define WAIT_IV7_HIGH() \
    while (! READ_IV7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV8 
    // 
#define IV8_MASK 0x800000U
#define IV8_OFFSET 23
#define IV8_START_BIT 23
#define IV8_WIDTH 1



typedef enum iv8 {
    IV_8_0,
    IV_8_1
} IV_8_T ;
#define WRITE_IV8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV8_MASK) | ((val << IV8_START_BIT) & IV8_MASK )); \
   } 

#define ENABLE_IV8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV8_MASK ); \
   }

#define DISABLE_IV8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV8_MASK ); \
   } 

#define READ_IV8() \
   ((READ_REGISTER_ULONG(0x40) & IV8_MASK)  >> IV8_START_BIT)

#define WHEN_IV8_HIGH() \
     if ( READ_IV8() )


#define UNLESS_IV8_HIGH() \
     if (! READ_IV8() )


#define WAIT_IV8_LOW() \
    while ( READ_IV8() );


#define WAIT_IV8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV8() && (--___t___ > 0)); }


#define WAIT_IV8_HIGH() \
    while (! READ_IV8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV9 
    // 
#define IV9_MASK 0x400000U
#define IV9_OFFSET 22
#define IV9_START_BIT 22
#define IV9_WIDTH 1



typedef enum iv9 {
    IV_9_0,
    IV_9_1
} IV_9_T ;
#define WRITE_IV9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV9_MASK) | ((val << IV9_START_BIT) & IV9_MASK )); \
   } 

#define ENABLE_IV9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV9_MASK ); \
   }

#define DISABLE_IV9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV9_MASK ); \
   } 

#define READ_IV9() \
   ((READ_REGISTER_ULONG(0x40) & IV9_MASK)  >> IV9_START_BIT)

#define WHEN_IV9_HIGH() \
     if ( READ_IV9() )


#define UNLESS_IV9_HIGH() \
     if (! READ_IV9() )


#define WAIT_IV9_LOW() \
    while ( READ_IV9() );


#define WAIT_IV9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV9() && (--___t___ > 0)); }


#define WAIT_IV9_HIGH() \
    while (! READ_IV9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV10 
    // 
#define IV10_MASK 0x200000U
#define IV10_OFFSET 21
#define IV10_START_BIT 21
#define IV10_WIDTH 1



typedef enum iv10 {
    IV_1_0_0,
    IV_1_0_1
} IV_10_T ;
#define WRITE_IV10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV10_MASK) | ((val << IV10_START_BIT) & IV10_MASK )); \
   } 

#define ENABLE_IV10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV10_MASK ); \
   }

#define DISABLE_IV10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV10_MASK ); \
   } 

#define READ_IV10() \
   ((READ_REGISTER_ULONG(0x40) & IV10_MASK)  >> IV10_START_BIT)

#define WHEN_IV10_HIGH() \
     if ( READ_IV10() )


#define UNLESS_IV10_HIGH() \
     if (! READ_IV10() )


#define WAIT_IV10_LOW() \
    while ( READ_IV10() );


#define WAIT_IV10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV10() && (--___t___ > 0)); }


#define WAIT_IV10_HIGH() \
    while (! READ_IV10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV11 
    // 
#define IV11_MASK 0x100000U
#define IV11_OFFSET 20
#define IV11_START_BIT 20
#define IV11_WIDTH 1



typedef enum iv11 {
    IV_1_1_0,
    IV_1_1_1
} IV_11_T ;
#define WRITE_IV11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV11_MASK) | ((val << IV11_START_BIT) & IV11_MASK )); \
   } 

#define ENABLE_IV11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV11_MASK ); \
   }

#define DISABLE_IV11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV11_MASK ); \
   } 

#define READ_IV11() \
   ((READ_REGISTER_ULONG(0x40) & IV11_MASK)  >> IV11_START_BIT)

#define WHEN_IV11_HIGH() \
     if ( READ_IV11() )


#define UNLESS_IV11_HIGH() \
     if (! READ_IV11() )


#define WAIT_IV11_LOW() \
    while ( READ_IV11() );


#define WAIT_IV11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV11() && (--___t___ > 0)); }


#define WAIT_IV11_HIGH() \
    while (! READ_IV11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV12 
    // 
#define IV12_MASK 0x80000U
#define IV12_OFFSET 19
#define IV12_START_BIT 19
#define IV12_WIDTH 1



typedef enum iv12 {
    IV_1_2_0,
    IV_1_2_1
} IV_12_T ;
#define WRITE_IV12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV12_MASK) | ((val << IV12_START_BIT) & IV12_MASK )); \
   } 

#define ENABLE_IV12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV12_MASK ); \
   }

#define DISABLE_IV12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV12_MASK ); \
   } 

#define READ_IV12() \
   ((READ_REGISTER_ULONG(0x40) & IV12_MASK)  >> IV12_START_BIT)

#define WHEN_IV12_HIGH() \
     if ( READ_IV12() )


#define UNLESS_IV12_HIGH() \
     if (! READ_IV12() )


#define WAIT_IV12_LOW() \
    while ( READ_IV12() );


#define WAIT_IV12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV12() && (--___t___ > 0)); }


#define WAIT_IV12_HIGH() \
    while (! READ_IV12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV13 
    // 
#define IV13_MASK 0x40000U
#define IV13_OFFSET 18
#define IV13_START_BIT 18
#define IV13_WIDTH 1



typedef enum iv13 {
    IV_1_3_0,
    IV_1_3_1
} IV_13_T ;
#define WRITE_IV13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV13_MASK) | ((val << IV13_START_BIT) & IV13_MASK )); \
   } 

#define ENABLE_IV13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV13_MASK ); \
   }

#define DISABLE_IV13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV13_MASK ); \
   } 

#define READ_IV13() \
   ((READ_REGISTER_ULONG(0x40) & IV13_MASK)  >> IV13_START_BIT)

#define WHEN_IV13_HIGH() \
     if ( READ_IV13() )


#define UNLESS_IV13_HIGH() \
     if (! READ_IV13() )


#define WAIT_IV13_LOW() \
    while ( READ_IV13() );


#define WAIT_IV13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV13() && (--___t___ > 0)); }


#define WAIT_IV13_HIGH() \
    while (! READ_IV13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV14 
    // 
#define IV14_MASK 0x20000U
#define IV14_OFFSET 17
#define IV14_START_BIT 17
#define IV14_WIDTH 1



typedef enum iv14 {
    IV_1_4_0,
    IV_1_4_1
} IV_14_T ;
#define WRITE_IV14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV14_MASK) | ((val << IV14_START_BIT) & IV14_MASK )); \
   } 

#define ENABLE_IV14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV14_MASK ); \
   }

#define DISABLE_IV14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV14_MASK ); \
   } 

#define READ_IV14() \
   ((READ_REGISTER_ULONG(0x40) & IV14_MASK)  >> IV14_START_BIT)

#define WHEN_IV14_HIGH() \
     if ( READ_IV14() )


#define UNLESS_IV14_HIGH() \
     if (! READ_IV14() )


#define WAIT_IV14_LOW() \
    while ( READ_IV14() );


#define WAIT_IV14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV14() && (--___t___ > 0)); }


#define WAIT_IV14_HIGH() \
    while (! READ_IV14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV15 
    // 
#define IV15_MASK 0x10000U
#define IV15_OFFSET 16
#define IV15_START_BIT 16
#define IV15_WIDTH 1



typedef enum iv15 {
    IV_1_5_0,
    IV_1_5_1
} IV_15_T ;
#define WRITE_IV15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV15_MASK) | ((val << IV15_START_BIT) & IV15_MASK )); \
   } 

#define ENABLE_IV15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV15_MASK ); \
   }

#define DISABLE_IV15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV15_MASK ); \
   } 

#define READ_IV15() \
   ((READ_REGISTER_ULONG(0x40) & IV15_MASK)  >> IV15_START_BIT)

#define WHEN_IV15_HIGH() \
     if ( READ_IV15() )


#define UNLESS_IV15_HIGH() \
     if (! READ_IV15() )


#define WAIT_IV15_LOW() \
    while ( READ_IV15() );


#define WAIT_IV15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV15() && (--___t___ > 0)); }


#define WAIT_IV15_HIGH() \
    while (! READ_IV15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV16 
    // 
#define IV16_MASK 0x8000U
#define IV16_OFFSET 15
#define IV16_START_BIT 15
#define IV16_WIDTH 1



typedef enum iv16 {
    IV_1_6_0,
    IV_1_6_1
} IV_16_T ;
#define WRITE_IV16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV16_MASK) | ((val << IV16_START_BIT) & IV16_MASK )); \
   } 

#define ENABLE_IV16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV16_MASK ); \
   }

#define DISABLE_IV16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV16_MASK ); \
   } 

#define READ_IV16() \
   ((READ_REGISTER_ULONG(0x40) & IV16_MASK)  >> IV16_START_BIT)

#define WHEN_IV16_HIGH() \
     if ( READ_IV16() )


#define UNLESS_IV16_HIGH() \
     if (! READ_IV16() )


#define WAIT_IV16_LOW() \
    while ( READ_IV16() );


#define WAIT_IV16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV16() && (--___t___ > 0)); }


#define WAIT_IV16_HIGH() \
    while (! READ_IV16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV17 
    // 
#define IV17_MASK 0x4000U
#define IV17_OFFSET 14
#define IV17_START_BIT 14
#define IV17_WIDTH 1



typedef enum iv17 {
    IV_1_7_0,
    IV_1_7_1
} IV_17_T ;
#define WRITE_IV17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV17_MASK) | ((val << IV17_START_BIT) & IV17_MASK )); \
   } 

#define ENABLE_IV17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV17_MASK ); \
   }

#define DISABLE_IV17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV17_MASK ); \
   } 

#define READ_IV17() \
   ((READ_REGISTER_ULONG(0x40) & IV17_MASK)  >> IV17_START_BIT)

#define WHEN_IV17_HIGH() \
     if ( READ_IV17() )


#define UNLESS_IV17_HIGH() \
     if (! READ_IV17() )


#define WAIT_IV17_LOW() \
    while ( READ_IV17() );


#define WAIT_IV17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV17() && (--___t___ > 0)); }


#define WAIT_IV17_HIGH() \
    while (! READ_IV17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV18 
    // 
#define IV18_MASK 0x2000U
#define IV18_OFFSET 13
#define IV18_START_BIT 13
#define IV18_WIDTH 1



typedef enum iv18 {
    IV_1_8_0,
    IV_1_8_1
} IV_18_T ;
#define WRITE_IV18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV18_MASK) | ((val << IV18_START_BIT) & IV18_MASK )); \
   } 

#define ENABLE_IV18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV18_MASK ); \
   }

#define DISABLE_IV18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV18_MASK ); \
   } 

#define READ_IV18() \
   ((READ_REGISTER_ULONG(0x40) & IV18_MASK)  >> IV18_START_BIT)

#define WHEN_IV18_HIGH() \
     if ( READ_IV18() )


#define UNLESS_IV18_HIGH() \
     if (! READ_IV18() )


#define WAIT_IV18_LOW() \
    while ( READ_IV18() );


#define WAIT_IV18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV18() && (--___t___ > 0)); }


#define WAIT_IV18_HIGH() \
    while (! READ_IV18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV19 
    // 
#define IV19_MASK 0x1000U
#define IV19_OFFSET 12
#define IV19_START_BIT 12
#define IV19_WIDTH 1



typedef enum iv19 {
    IV_1_9_0,
    IV_1_9_1
} IV_19_T ;
#define WRITE_IV19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV19_MASK) | ((val << IV19_START_BIT) & IV19_MASK )); \
   } 

#define ENABLE_IV19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV19_MASK ); \
   }

#define DISABLE_IV19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV19_MASK ); \
   } 

#define READ_IV19() \
   ((READ_REGISTER_ULONG(0x40) & IV19_MASK)  >> IV19_START_BIT)

#define WHEN_IV19_HIGH() \
     if ( READ_IV19() )


#define UNLESS_IV19_HIGH() \
     if (! READ_IV19() )


#define WAIT_IV19_LOW() \
    while ( READ_IV19() );


#define WAIT_IV19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV19() && (--___t___ > 0)); }


#define WAIT_IV19_HIGH() \
    while (! READ_IV19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV20 
    // 
#define IV20_MASK 0x800U
#define IV20_OFFSET 11
#define IV20_START_BIT 11
#define IV20_WIDTH 1



typedef enum iv20 {
    IV_2_0_0,
    IV_2_0_1
} IV_20_T ;
#define WRITE_IV20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV20_MASK) | ((val << IV20_START_BIT) & IV20_MASK )); \
   } 

#define ENABLE_IV20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV20_MASK ); \
   }

#define DISABLE_IV20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV20_MASK ); \
   } 

#define READ_IV20() \
   ((READ_REGISTER_ULONG(0x40) & IV20_MASK)  >> IV20_START_BIT)

#define WHEN_IV20_HIGH() \
     if ( READ_IV20() )


#define UNLESS_IV20_HIGH() \
     if (! READ_IV20() )


#define WAIT_IV20_LOW() \
    while ( READ_IV20() );


#define WAIT_IV20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV20() && (--___t___ > 0)); }


#define WAIT_IV20_HIGH() \
    while (! READ_IV20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV21 
    // 
#define IV21_MASK 0x400U
#define IV21_OFFSET 10
#define IV21_START_BIT 10
#define IV21_WIDTH 1



typedef enum iv21 {
    IV_2_1_0,
    IV_2_1_1
} IV_21_T ;
#define WRITE_IV21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV21_MASK) | ((val << IV21_START_BIT) & IV21_MASK )); \
   } 

#define ENABLE_IV21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV21_MASK ); \
   }

#define DISABLE_IV21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV21_MASK ); \
   } 

#define READ_IV21() \
   ((READ_REGISTER_ULONG(0x40) & IV21_MASK)  >> IV21_START_BIT)

#define WHEN_IV21_HIGH() \
     if ( READ_IV21() )


#define UNLESS_IV21_HIGH() \
     if (! READ_IV21() )


#define WAIT_IV21_LOW() \
    while ( READ_IV21() );


#define WAIT_IV21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV21() && (--___t___ > 0)); }


#define WAIT_IV21_HIGH() \
    while (! READ_IV21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV22 
    // 
#define IV22_MASK 0x200U
#define IV22_OFFSET 9
#define IV22_START_BIT 9
#define IV22_WIDTH 1



typedef enum iv22 {
    IV_2_2_0,
    IV_2_2_1
} IV_22_T ;
#define WRITE_IV22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV22_MASK) | ((val << IV22_START_BIT) & IV22_MASK )); \
   } 

#define ENABLE_IV22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV22_MASK ); \
   }

#define DISABLE_IV22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV22_MASK ); \
   } 

#define READ_IV22() \
   ((READ_REGISTER_ULONG(0x40) & IV22_MASK)  >> IV22_START_BIT)

#define WHEN_IV22_HIGH() \
     if ( READ_IV22() )


#define UNLESS_IV22_HIGH() \
     if (! READ_IV22() )


#define WAIT_IV22_LOW() \
    while ( READ_IV22() );


#define WAIT_IV22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV22() && (--___t___ > 0)); }


#define WAIT_IV22_HIGH() \
    while (! READ_IV22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV23 
    // 
#define IV23_MASK 0x100U
#define IV23_OFFSET 8
#define IV23_START_BIT 8
#define IV23_WIDTH 1



typedef enum iv23 {
    IV_2_3_0,
    IV_2_3_1
} IV_23_T ;
#define WRITE_IV23(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV23_MASK) | ((val << IV23_START_BIT) & IV23_MASK )); \
   } 

#define ENABLE_IV23() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV23_MASK ); \
   }

#define DISABLE_IV23() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV23_MASK ); \
   } 

#define READ_IV23() \
   ((READ_REGISTER_ULONG(0x40) & IV23_MASK)  >> IV23_START_BIT)

#define WHEN_IV23_HIGH() \
     if ( READ_IV23() )


#define UNLESS_IV23_HIGH() \
     if (! READ_IV23() )


#define WAIT_IV23_LOW() \
    while ( READ_IV23() );


#define WAIT_IV23_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV23() && (--___t___ > 0)); }


#define WAIT_IV23_HIGH() \
    while (! READ_IV23() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV24 
    // 
#define IV24_MASK 0x80U
#define IV24_OFFSET 7
#define IV24_START_BIT 7
#define IV24_WIDTH 1



typedef enum iv24 {
    IV_2_4_0,
    IV_2_4_1
} IV_24_T ;
#define WRITE_IV24(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV24_MASK) | ((val << IV24_START_BIT) & IV24_MASK )); \
   } 

#define ENABLE_IV24() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV24_MASK ); \
   }

#define DISABLE_IV24() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV24_MASK ); \
   } 

#define READ_IV24() \
   ((READ_REGISTER_ULONG(0x40) & IV24_MASK)  >> IV24_START_BIT)

#define WHEN_IV24_HIGH() \
     if ( READ_IV24() )


#define UNLESS_IV24_HIGH() \
     if (! READ_IV24() )


#define WAIT_IV24_LOW() \
    while ( READ_IV24() );


#define WAIT_IV24_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV24() && (--___t___ > 0)); }


#define WAIT_IV24_HIGH() \
    while (! READ_IV24() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV25 
    // 
#define IV25_MASK 0x40U
#define IV25_OFFSET 6
#define IV25_START_BIT 6
#define IV25_WIDTH 1



typedef enum iv25 {
    IV_2_5_0,
    IV_2_5_1
} IV_25_T ;
#define WRITE_IV25(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV25_MASK) | ((val << IV25_START_BIT) & IV25_MASK )); \
   } 

#define ENABLE_IV25() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV25_MASK ); \
   }

#define DISABLE_IV25() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV25_MASK ); \
   } 

#define READ_IV25() \
   ((READ_REGISTER_ULONG(0x40) & IV25_MASK)  >> IV25_START_BIT)

#define WHEN_IV25_HIGH() \
     if ( READ_IV25() )


#define UNLESS_IV25_HIGH() \
     if (! READ_IV25() )


#define WAIT_IV25_LOW() \
    while ( READ_IV25() );


#define WAIT_IV25_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV25() && (--___t___ > 0)); }


#define WAIT_IV25_HIGH() \
    while (! READ_IV25() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV26 
    // 
#define IV26_MASK 0x20U
#define IV26_OFFSET 5
#define IV26_START_BIT 5
#define IV26_WIDTH 1



typedef enum iv26 {
    IV_2_6_0,
    IV_2_6_1
} IV_26_T ;
#define WRITE_IV26(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV26_MASK) | ((val << IV26_START_BIT) & IV26_MASK )); \
   } 

#define ENABLE_IV26() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV26_MASK ); \
   }

#define DISABLE_IV26() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV26_MASK ); \
   } 

#define READ_IV26() \
   ((READ_REGISTER_ULONG(0x40) & IV26_MASK)  >> IV26_START_BIT)

#define WHEN_IV26_HIGH() \
     if ( READ_IV26() )


#define UNLESS_IV26_HIGH() \
     if (! READ_IV26() )


#define WAIT_IV26_LOW() \
    while ( READ_IV26() );


#define WAIT_IV26_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV26() && (--___t___ > 0)); }


#define WAIT_IV26_HIGH() \
    while (! READ_IV26() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV27 
    // 
#define IV27_MASK 0x10U
#define IV27_OFFSET 4
#define IV27_START_BIT 4
#define IV27_WIDTH 1



typedef enum iv27 {
    IV_2_7_0,
    IV_2_7_1
} IV_27_T ;
#define WRITE_IV27(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV27_MASK) | ((val << IV27_START_BIT) & IV27_MASK )); \
   } 

#define ENABLE_IV27() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV27_MASK ); \
   }

#define DISABLE_IV27() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV27_MASK ); \
   } 

#define READ_IV27() \
   ((READ_REGISTER_ULONG(0x40) & IV27_MASK)  >> IV27_START_BIT)

#define WHEN_IV27_HIGH() \
     if ( READ_IV27() )


#define UNLESS_IV27_HIGH() \
     if (! READ_IV27() )


#define WAIT_IV27_LOW() \
    while ( READ_IV27() );


#define WAIT_IV27_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV27() && (--___t___ > 0)); }


#define WAIT_IV27_HIGH() \
    while (! READ_IV27() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV28 
    // 
#define IV28_MASK 0x8U
#define IV28_OFFSET 3
#define IV28_START_BIT 3
#define IV28_WIDTH 1



typedef enum iv28 {
    IV_2_8_0,
    IV_2_8_1
} IV_28_T ;
#define WRITE_IV28(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV28_MASK) | ((val << IV28_START_BIT) & IV28_MASK )); \
   } 

#define ENABLE_IV28() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV28_MASK ); \
   }

#define DISABLE_IV28() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV28_MASK ); \
   } 

#define READ_IV28() \
   ((READ_REGISTER_ULONG(0x40) & IV28_MASK)  >> IV28_START_BIT)

#define WHEN_IV28_HIGH() \
     if ( READ_IV28() )


#define UNLESS_IV28_HIGH() \
     if (! READ_IV28() )


#define WAIT_IV28_LOW() \
    while ( READ_IV28() );


#define WAIT_IV28_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV28() && (--___t___ > 0)); }


#define WAIT_IV28_HIGH() \
    while (! READ_IV28() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV29 
    // 
#define IV29_MASK 0x4U
#define IV29_OFFSET 2
#define IV29_START_BIT 2
#define IV29_WIDTH 1



typedef enum iv29 {
    IV_2_9_0,
    IV_2_9_1
} IV_29_T ;
#define WRITE_IV29(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV29_MASK) | ((val << IV29_START_BIT) & IV29_MASK )); \
   } 

#define ENABLE_IV29() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV29_MASK ); \
   }

#define DISABLE_IV29() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV29_MASK ); \
   } 

#define READ_IV29() \
   ((READ_REGISTER_ULONG(0x40) & IV29_MASK)  >> IV29_START_BIT)

#define WHEN_IV29_HIGH() \
     if ( READ_IV29() )


#define UNLESS_IV29_HIGH() \
     if (! READ_IV29() )


#define WAIT_IV29_LOW() \
    while ( READ_IV29() );


#define WAIT_IV29_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV29() && (--___t___ > 0)); }


#define WAIT_IV29_HIGH() \
    while (! READ_IV29() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV30 
    // 
#define IV30_MASK 0x2U
#define IV30_OFFSET 1
#define IV30_START_BIT 1
#define IV30_WIDTH 1



typedef enum iv30 {
    IV_3_0_0,
    IV_3_0_1
} IV_30_T ;
#define WRITE_IV30(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV30_MASK) | ((val << IV30_START_BIT) & IV30_MASK )); \
   } 

#define ENABLE_IV30() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV30_MASK ); \
   }

#define DISABLE_IV30() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV30_MASK ); \
   } 

#define READ_IV30() \
   ((READ_REGISTER_ULONG(0x40) & IV30_MASK)  >> IV30_START_BIT)

#define WHEN_IV30_HIGH() \
     if ( READ_IV30() )


#define UNLESS_IV30_HIGH() \
     if (! READ_IV30() )


#define WAIT_IV30_LOW() \
    while ( READ_IV30() );


#define WAIT_IV30_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV30() && (--___t___ > 0)); }


#define WAIT_IV30_HIGH() \
    while (! READ_IV30() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0lr
//
// Return the value of register IV_0LR
//
// Notes : Register initialization vector registers (IV0LR) at the offset 0x40, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV31 
    // 
#define IV31_MASK 0x1U
#define IV31_OFFSET 0
#define IV31_START_BIT 0
#define IV31_WIDTH 1



typedef enum iv31 {
    IV_3_1_0,
    IV_3_1_1
} IV_31_T ;
#define WRITE_IV31(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ IV31_MASK) | ((val << IV31_START_BIT) & IV31_MASK )); \
   } 

#define ENABLE_IV31() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  IV31_MASK ); \
   }

#define DISABLE_IV31() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~IV31_MASK ); \
   } 

#define READ_IV31() \
   ((READ_REGISTER_ULONG(0x40) & IV31_MASK)  >> IV31_START_BIT)

#define WHEN_IV31_HIGH() \
     if ( READ_IV31() )


#define UNLESS_IV31_HIGH() \
     if (! READ_IV31() )


#define WAIT_IV31_LOW() \
    while ( READ_IV31() );


#define WAIT_IV31_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV31() && (--___t___ > 0)); }


#define WAIT_IV31_HIGH() \
    while (! READ_IV31() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV0RR
//
// Notes : Register Iv0rr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IV_0RR( y) \
     WRITE_REGISTER_ULONG( 0x44 , y)

#define SET_BITS_IV_0RR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  mask ); \
   }

#define CLEAR_BITS_IV_0RR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val & ~mask ); \
   }

#define READ_REGISTER_IV_0RR() \
     READ_REGISTER_ULONG(0x44)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV32 
    // 
#define IV32_MASK 0x80000000U
#define IV32_OFFSET 31
#define IV32_START_BIT 31
#define IV32_WIDTH 1


#define IV_0RR_REG 0x44

typedef enum iv32 {
    IV_3_2_0,
    IV_3_2_1
} IV_32_T ;
#define WRITE_IV32(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV32_MASK) | ((val << IV32_START_BIT) & IV32_MASK )); \
   } 

#define ENABLE_IV32() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV32_MASK ); \
   }

#define DISABLE_IV32() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV32_MASK ); \
   } 

#define READ_IV32() \
   ((READ_REGISTER_ULONG(0x44) & IV32_MASK)  >> IV32_START_BIT)

#define WHEN_IV32_HIGH() \
     if ( READ_IV32() )


#define UNLESS_IV32_HIGH() \
     if (! READ_IV32() )


#define WAIT_IV32_LOW() \
    while ( READ_IV32() );


#define WAIT_IV32_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV32() && (--___t___ > 0)); }


#define WAIT_IV32_HIGH() \
    while (! READ_IV32() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV33 
    // 
#define IV33_MASK 0x40000000U
#define IV33_OFFSET 30
#define IV33_START_BIT 30
#define IV33_WIDTH 1



typedef enum iv33 {
    IV_3_3_0,
    IV_3_3_1
} IV_33_T ;
#define WRITE_IV33(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV33_MASK) | ((val << IV33_START_BIT) & IV33_MASK )); \
   } 

#define ENABLE_IV33() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV33_MASK ); \
   }

#define DISABLE_IV33() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV33_MASK ); \
   } 

#define READ_IV33() \
   ((READ_REGISTER_ULONG(0x44) & IV33_MASK)  >> IV33_START_BIT)

#define WHEN_IV33_HIGH() \
     if ( READ_IV33() )


#define UNLESS_IV33_HIGH() \
     if (! READ_IV33() )


#define WAIT_IV33_LOW() \
    while ( READ_IV33() );


#define WAIT_IV33_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV33() && (--___t___ > 0)); }


#define WAIT_IV33_HIGH() \
    while (! READ_IV33() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV34 
    // 
#define IV34_MASK 0x20000000U
#define IV34_OFFSET 29
#define IV34_START_BIT 29
#define IV34_WIDTH 1



typedef enum iv34 {
    IV_3_4_0,
    IV_3_4_1
} IV_34_T ;
#define WRITE_IV34(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV34_MASK) | ((val << IV34_START_BIT) & IV34_MASK )); \
   } 

#define ENABLE_IV34() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV34_MASK ); \
   }

#define DISABLE_IV34() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV34_MASK ); \
   } 

#define READ_IV34() \
   ((READ_REGISTER_ULONG(0x44) & IV34_MASK)  >> IV34_START_BIT)

#define WHEN_IV34_HIGH() \
     if ( READ_IV34() )


#define UNLESS_IV34_HIGH() \
     if (! READ_IV34() )


#define WAIT_IV34_LOW() \
    while ( READ_IV34() );


#define WAIT_IV34_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV34() && (--___t___ > 0)); }


#define WAIT_IV34_HIGH() \
    while (! READ_IV34() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV35 
    // 
#define IV35_MASK 0x10000000U
#define IV35_OFFSET 28
#define IV35_START_BIT 28
#define IV35_WIDTH 1



typedef enum iv35 {
    IV_3_5_0,
    IV_3_5_1
} IV_35_T ;
#define WRITE_IV35(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV35_MASK) | ((val << IV35_START_BIT) & IV35_MASK )); \
   } 

#define ENABLE_IV35() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV35_MASK ); \
   }

#define DISABLE_IV35() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV35_MASK ); \
   } 

#define READ_IV35() \
   ((READ_REGISTER_ULONG(0x44) & IV35_MASK)  >> IV35_START_BIT)

#define WHEN_IV35_HIGH() \
     if ( READ_IV35() )


#define UNLESS_IV35_HIGH() \
     if (! READ_IV35() )


#define WAIT_IV35_LOW() \
    while ( READ_IV35() );


#define WAIT_IV35_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV35() && (--___t___ > 0)); }


#define WAIT_IV35_HIGH() \
    while (! READ_IV35() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV36 
    // 
#define IV36_MASK 0x8000000U
#define IV36_OFFSET 27
#define IV36_START_BIT 27
#define IV36_WIDTH 1



typedef enum iv36 {
    IV_3_6_0,
    IV_3_6_1
} IV_36_T ;
#define WRITE_IV36(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV36_MASK) | ((val << IV36_START_BIT) & IV36_MASK )); \
   } 

#define ENABLE_IV36() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV36_MASK ); \
   }

#define DISABLE_IV36() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV36_MASK ); \
   } 

#define READ_IV36() \
   ((READ_REGISTER_ULONG(0x44) & IV36_MASK)  >> IV36_START_BIT)

#define WHEN_IV36_HIGH() \
     if ( READ_IV36() )


#define UNLESS_IV36_HIGH() \
     if (! READ_IV36() )


#define WAIT_IV36_LOW() \
    while ( READ_IV36() );


#define WAIT_IV36_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV36() && (--___t___ > 0)); }


#define WAIT_IV36_HIGH() \
    while (! READ_IV36() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV37 
    // 
#define IV37_MASK 0x4000000U
#define IV37_OFFSET 26
#define IV37_START_BIT 26
#define IV37_WIDTH 1



typedef enum iv37 {
    IV_3_7_0,
    IV_3_7_1
} IV_37_T ;
#define WRITE_IV37(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV37_MASK) | ((val << IV37_START_BIT) & IV37_MASK )); \
   } 

#define ENABLE_IV37() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV37_MASK ); \
   }

#define DISABLE_IV37() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV37_MASK ); \
   } 

#define READ_IV37() \
   ((READ_REGISTER_ULONG(0x44) & IV37_MASK)  >> IV37_START_BIT)

#define WHEN_IV37_HIGH() \
     if ( READ_IV37() )


#define UNLESS_IV37_HIGH() \
     if (! READ_IV37() )


#define WAIT_IV37_LOW() \
    while ( READ_IV37() );


#define WAIT_IV37_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV37() && (--___t___ > 0)); }


#define WAIT_IV37_HIGH() \
    while (! READ_IV37() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV38 
    // 
#define IV38_MASK 0x2000000U
#define IV38_OFFSET 25
#define IV38_START_BIT 25
#define IV38_WIDTH 1



typedef enum iv38 {
    IV_3_8_0,
    IV_3_8_1
} IV_38_T ;
#define WRITE_IV38(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV38_MASK) | ((val << IV38_START_BIT) & IV38_MASK )); \
   } 

#define ENABLE_IV38() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV38_MASK ); \
   }

#define DISABLE_IV38() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV38_MASK ); \
   } 

#define READ_IV38() \
   ((READ_REGISTER_ULONG(0x44) & IV38_MASK)  >> IV38_START_BIT)

#define WHEN_IV38_HIGH() \
     if ( READ_IV38() )


#define UNLESS_IV38_HIGH() \
     if (! READ_IV38() )


#define WAIT_IV38_LOW() \
    while ( READ_IV38() );


#define WAIT_IV38_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV38() && (--___t___ > 0)); }


#define WAIT_IV38_HIGH() \
    while (! READ_IV38() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV39 
    // 
#define IV39_MASK 0x1000000U
#define IV39_OFFSET 24
#define IV39_START_BIT 24
#define IV39_WIDTH 1



typedef enum iv39 {
    IV_3_9_0,
    IV_3_9_1
} IV_39_T ;
#define WRITE_IV39(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV39_MASK) | ((val << IV39_START_BIT) & IV39_MASK )); \
   } 

#define ENABLE_IV39() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV39_MASK ); \
   }

#define DISABLE_IV39() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV39_MASK ); \
   } 

#define READ_IV39() \
   ((READ_REGISTER_ULONG(0x44) & IV39_MASK)  >> IV39_START_BIT)

#define WHEN_IV39_HIGH() \
     if ( READ_IV39() )


#define UNLESS_IV39_HIGH() \
     if (! READ_IV39() )


#define WAIT_IV39_LOW() \
    while ( READ_IV39() );


#define WAIT_IV39_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV39() && (--___t___ > 0)); }


#define WAIT_IV39_HIGH() \
    while (! READ_IV39() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV40 
    // 
#define IV40_MASK 0x800000U
#define IV40_OFFSET 23
#define IV40_START_BIT 23
#define IV40_WIDTH 1



typedef enum iv40 {
    IV_4_0_0,
    IV_4_0_1
} IV_40_T ;
#define WRITE_IV40(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV40_MASK) | ((val << IV40_START_BIT) & IV40_MASK )); \
   } 

#define ENABLE_IV40() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV40_MASK ); \
   }

#define DISABLE_IV40() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV40_MASK ); \
   } 

#define READ_IV40() \
   ((READ_REGISTER_ULONG(0x44) & IV40_MASK)  >> IV40_START_BIT)

#define WHEN_IV40_HIGH() \
     if ( READ_IV40() )


#define UNLESS_IV40_HIGH() \
     if (! READ_IV40() )


#define WAIT_IV40_LOW() \
    while ( READ_IV40() );


#define WAIT_IV40_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV40() && (--___t___ > 0)); }


#define WAIT_IV40_HIGH() \
    while (! READ_IV40() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV41 
    // 
#define IV41_MASK 0x400000U
#define IV41_OFFSET 22
#define IV41_START_BIT 22
#define IV41_WIDTH 1



typedef enum iv41 {
    IV_4_1_0,
    IV_4_1_1
} IV_41_T ;
#define WRITE_IV41(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV41_MASK) | ((val << IV41_START_BIT) & IV41_MASK )); \
   } 

#define ENABLE_IV41() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV41_MASK ); \
   }

#define DISABLE_IV41() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV41_MASK ); \
   } 

#define READ_IV41() \
   ((READ_REGISTER_ULONG(0x44) & IV41_MASK)  >> IV41_START_BIT)

#define WHEN_IV41_HIGH() \
     if ( READ_IV41() )


#define UNLESS_IV41_HIGH() \
     if (! READ_IV41() )


#define WAIT_IV41_LOW() \
    while ( READ_IV41() );


#define WAIT_IV41_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV41() && (--___t___ > 0)); }


#define WAIT_IV41_HIGH() \
    while (! READ_IV41() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV42 
    // 
#define IV42_MASK 0x200000U
#define IV42_OFFSET 21
#define IV42_START_BIT 21
#define IV42_WIDTH 1



typedef enum iv42 {
    IV_4_2_0,
    IV_4_2_1
} IV_42_T ;
#define WRITE_IV42(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV42_MASK) | ((val << IV42_START_BIT) & IV42_MASK )); \
   } 

#define ENABLE_IV42() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV42_MASK ); \
   }

#define DISABLE_IV42() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV42_MASK ); \
   } 

#define READ_IV42() \
   ((READ_REGISTER_ULONG(0x44) & IV42_MASK)  >> IV42_START_BIT)

#define WHEN_IV42_HIGH() \
     if ( READ_IV42() )


#define UNLESS_IV42_HIGH() \
     if (! READ_IV42() )


#define WAIT_IV42_LOW() \
    while ( READ_IV42() );


#define WAIT_IV42_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV42() && (--___t___ > 0)); }


#define WAIT_IV42_HIGH() \
    while (! READ_IV42() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV43 
    // 
#define IV43_MASK 0x100000U
#define IV43_OFFSET 20
#define IV43_START_BIT 20
#define IV43_WIDTH 1



typedef enum iv43 {
    IV_4_3_0,
    IV_4_3_1
} IV_43_T ;
#define WRITE_IV43(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV43_MASK) | ((val << IV43_START_BIT) & IV43_MASK )); \
   } 

#define ENABLE_IV43() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV43_MASK ); \
   }

#define DISABLE_IV43() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV43_MASK ); \
   } 

#define READ_IV43() \
   ((READ_REGISTER_ULONG(0x44) & IV43_MASK)  >> IV43_START_BIT)

#define WHEN_IV43_HIGH() \
     if ( READ_IV43() )


#define UNLESS_IV43_HIGH() \
     if (! READ_IV43() )


#define WAIT_IV43_LOW() \
    while ( READ_IV43() );


#define WAIT_IV43_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV43() && (--___t___ > 0)); }


#define WAIT_IV43_HIGH() \
    while (! READ_IV43() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV44 
    // 
#define IV44_MASK 0x80000U
#define IV44_OFFSET 19
#define IV44_START_BIT 19
#define IV44_WIDTH 1



typedef enum iv44 {
    IV_4_4_0,
    IV_4_4_1
} IV_44_T ;
#define WRITE_IV44(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV44_MASK) | ((val << IV44_START_BIT) & IV44_MASK )); \
   } 

#define ENABLE_IV44() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV44_MASK ); \
   }

#define DISABLE_IV44() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV44_MASK ); \
   } 

#define READ_IV44() \
   ((READ_REGISTER_ULONG(0x44) & IV44_MASK)  >> IV44_START_BIT)

#define WHEN_IV44_HIGH() \
     if ( READ_IV44() )


#define UNLESS_IV44_HIGH() \
     if (! READ_IV44() )


#define WAIT_IV44_LOW() \
    while ( READ_IV44() );


#define WAIT_IV44_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV44() && (--___t___ > 0)); }


#define WAIT_IV44_HIGH() \
    while (! READ_IV44() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV45 
    // 
#define IV45_MASK 0x40000U
#define IV45_OFFSET 18
#define IV45_START_BIT 18
#define IV45_WIDTH 1



typedef enum iv45 {
    IV_4_5_0,
    IV_4_5_1
} IV_45_T ;
#define WRITE_IV45(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV45_MASK) | ((val << IV45_START_BIT) & IV45_MASK )); \
   } 

#define ENABLE_IV45() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV45_MASK ); \
   }

#define DISABLE_IV45() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV45_MASK ); \
   } 

#define READ_IV45() \
   ((READ_REGISTER_ULONG(0x44) & IV45_MASK)  >> IV45_START_BIT)

#define WHEN_IV45_HIGH() \
     if ( READ_IV45() )


#define UNLESS_IV45_HIGH() \
     if (! READ_IV45() )


#define WAIT_IV45_LOW() \
    while ( READ_IV45() );


#define WAIT_IV45_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV45() && (--___t___ > 0)); }


#define WAIT_IV45_HIGH() \
    while (! READ_IV45() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV46 
    // 
#define IV46_MASK 0x20000U
#define IV46_OFFSET 17
#define IV46_START_BIT 17
#define IV46_WIDTH 1



typedef enum iv46 {
    IV_4_6_0,
    IV_4_6_1
} IV_46_T ;
#define WRITE_IV46(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV46_MASK) | ((val << IV46_START_BIT) & IV46_MASK )); \
   } 

#define ENABLE_IV46() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV46_MASK ); \
   }

#define DISABLE_IV46() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV46_MASK ); \
   } 

#define READ_IV46() \
   ((READ_REGISTER_ULONG(0x44) & IV46_MASK)  >> IV46_START_BIT)

#define WHEN_IV46_HIGH() \
     if ( READ_IV46() )


#define UNLESS_IV46_HIGH() \
     if (! READ_IV46() )


#define WAIT_IV46_LOW() \
    while ( READ_IV46() );


#define WAIT_IV46_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV46() && (--___t___ > 0)); }


#define WAIT_IV46_HIGH() \
    while (! READ_IV46() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV47 
    // 
#define IV47_MASK 0x10000U
#define IV47_OFFSET 16
#define IV47_START_BIT 16
#define IV47_WIDTH 1



typedef enum iv47 {
    IV_4_7_0,
    IV_4_7_1
} IV_47_T ;
#define WRITE_IV47(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV47_MASK) | ((val << IV47_START_BIT) & IV47_MASK )); \
   } 

#define ENABLE_IV47() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV47_MASK ); \
   }

#define DISABLE_IV47() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV47_MASK ); \
   } 

#define READ_IV47() \
   ((READ_REGISTER_ULONG(0x44) & IV47_MASK)  >> IV47_START_BIT)

#define WHEN_IV47_HIGH() \
     if ( READ_IV47() )


#define UNLESS_IV47_HIGH() \
     if (! READ_IV47() )


#define WAIT_IV47_LOW() \
    while ( READ_IV47() );


#define WAIT_IV47_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV47() && (--___t___ > 0)); }


#define WAIT_IV47_HIGH() \
    while (! READ_IV47() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV48 
    // 
#define IV48_MASK 0x8000U
#define IV48_OFFSET 15
#define IV48_START_BIT 15
#define IV48_WIDTH 1



typedef enum iv48 {
    IV_4_8_0,
    IV_4_8_1
} IV_48_T ;
#define WRITE_IV48(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV48_MASK) | ((val << IV48_START_BIT) & IV48_MASK )); \
   } 

#define ENABLE_IV48() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV48_MASK ); \
   }

#define DISABLE_IV48() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV48_MASK ); \
   } 

#define READ_IV48() \
   ((READ_REGISTER_ULONG(0x44) & IV48_MASK)  >> IV48_START_BIT)

#define WHEN_IV48_HIGH() \
     if ( READ_IV48() )


#define UNLESS_IV48_HIGH() \
     if (! READ_IV48() )


#define WAIT_IV48_LOW() \
    while ( READ_IV48() );


#define WAIT_IV48_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV48() && (--___t___ > 0)); }


#define WAIT_IV48_HIGH() \
    while (! READ_IV48() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV49 
    // 
#define IV49_MASK 0x4000U
#define IV49_OFFSET 14
#define IV49_START_BIT 14
#define IV49_WIDTH 1



typedef enum iv49 {
    IV_4_9_0,
    IV_4_9_1
} IV_49_T ;
#define WRITE_IV49(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV49_MASK) | ((val << IV49_START_BIT) & IV49_MASK )); \
   } 

#define ENABLE_IV49() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV49_MASK ); \
   }

#define DISABLE_IV49() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV49_MASK ); \
   } 

#define READ_IV49() \
   ((READ_REGISTER_ULONG(0x44) & IV49_MASK)  >> IV49_START_BIT)

#define WHEN_IV49_HIGH() \
     if ( READ_IV49() )


#define UNLESS_IV49_HIGH() \
     if (! READ_IV49() )


#define WAIT_IV49_LOW() \
    while ( READ_IV49() );


#define WAIT_IV49_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV49() && (--___t___ > 0)); }


#define WAIT_IV49_HIGH() \
    while (! READ_IV49() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV50 
    // 
#define IV50_MASK 0x2000U
#define IV50_OFFSET 13
#define IV50_START_BIT 13
#define IV50_WIDTH 1



typedef enum iv50 {
    IV_5_0_0,
    IV_5_0_1
} IV_50_T ;
#define WRITE_IV50(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV50_MASK) | ((val << IV50_START_BIT) & IV50_MASK )); \
   } 

#define ENABLE_IV50() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV50_MASK ); \
   }

#define DISABLE_IV50() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV50_MASK ); \
   } 

#define READ_IV50() \
   ((READ_REGISTER_ULONG(0x44) & IV50_MASK)  >> IV50_START_BIT)

#define WHEN_IV50_HIGH() \
     if ( READ_IV50() )


#define UNLESS_IV50_HIGH() \
     if (! READ_IV50() )


#define WAIT_IV50_LOW() \
    while ( READ_IV50() );


#define WAIT_IV50_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV50() && (--___t___ > 0)); }


#define WAIT_IV50_HIGH() \
    while (! READ_IV50() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV51 
    // 
#define IV51_MASK 0x1000U
#define IV51_OFFSET 12
#define IV51_START_BIT 12
#define IV51_WIDTH 1



typedef enum iv51 {
    IV_5_1_0,
    IV_5_1_1
} IV_51_T ;
#define WRITE_IV51(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV51_MASK) | ((val << IV51_START_BIT) & IV51_MASK )); \
   } 

#define ENABLE_IV51() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV51_MASK ); \
   }

#define DISABLE_IV51() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV51_MASK ); \
   } 

#define READ_IV51() \
   ((READ_REGISTER_ULONG(0x44) & IV51_MASK)  >> IV51_START_BIT)

#define WHEN_IV51_HIGH() \
     if ( READ_IV51() )


#define UNLESS_IV51_HIGH() \
     if (! READ_IV51() )


#define WAIT_IV51_LOW() \
    while ( READ_IV51() );


#define WAIT_IV51_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV51() && (--___t___ > 0)); }


#define WAIT_IV51_HIGH() \
    while (! READ_IV51() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV52 
    // 
#define IV52_MASK 0x800U
#define IV52_OFFSET 11
#define IV52_START_BIT 11
#define IV52_WIDTH 1



typedef enum iv52 {
    IV_5_2_0,
    IV_5_2_1
} IV_52_T ;
#define WRITE_IV52(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV52_MASK) | ((val << IV52_START_BIT) & IV52_MASK )); \
   } 

#define ENABLE_IV52() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV52_MASK ); \
   }

#define DISABLE_IV52() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV52_MASK ); \
   } 

#define READ_IV52() \
   ((READ_REGISTER_ULONG(0x44) & IV52_MASK)  >> IV52_START_BIT)

#define WHEN_IV52_HIGH() \
     if ( READ_IV52() )


#define UNLESS_IV52_HIGH() \
     if (! READ_IV52() )


#define WAIT_IV52_LOW() \
    while ( READ_IV52() );


#define WAIT_IV52_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV52() && (--___t___ > 0)); }


#define WAIT_IV52_HIGH() \
    while (! READ_IV52() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV53 
    // 
#define IV53_MASK 0x400U
#define IV53_OFFSET 10
#define IV53_START_BIT 10
#define IV53_WIDTH 1



typedef enum iv53 {
    IV_5_3_0,
    IV_5_3_1
} IV_53_T ;
#define WRITE_IV53(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV53_MASK) | ((val << IV53_START_BIT) & IV53_MASK )); \
   } 

#define ENABLE_IV53() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV53_MASK ); \
   }

#define DISABLE_IV53() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV53_MASK ); \
   } 

#define READ_IV53() \
   ((READ_REGISTER_ULONG(0x44) & IV53_MASK)  >> IV53_START_BIT)

#define WHEN_IV53_HIGH() \
     if ( READ_IV53() )


#define UNLESS_IV53_HIGH() \
     if (! READ_IV53() )


#define WAIT_IV53_LOW() \
    while ( READ_IV53() );


#define WAIT_IV53_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV53() && (--___t___ > 0)); }


#define WAIT_IV53_HIGH() \
    while (! READ_IV53() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV54 
    // 
#define IV54_MASK 0x200U
#define IV54_OFFSET 9
#define IV54_START_BIT 9
#define IV54_WIDTH 1



typedef enum iv54 {
    IV_5_4_0,
    IV_5_4_1
} IV_54_T ;
#define WRITE_IV54(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV54_MASK) | ((val << IV54_START_BIT) & IV54_MASK )); \
   } 

#define ENABLE_IV54() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV54_MASK ); \
   }

#define DISABLE_IV54() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV54_MASK ); \
   } 

#define READ_IV54() \
   ((READ_REGISTER_ULONG(0x44) & IV54_MASK)  >> IV54_START_BIT)

#define WHEN_IV54_HIGH() \
     if ( READ_IV54() )


#define UNLESS_IV54_HIGH() \
     if (! READ_IV54() )


#define WAIT_IV54_LOW() \
    while ( READ_IV54() );


#define WAIT_IV54_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV54() && (--___t___ > 0)); }


#define WAIT_IV54_HIGH() \
    while (! READ_IV54() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV55 
    // 
#define IV55_MASK 0x100U
#define IV55_OFFSET 8
#define IV55_START_BIT 8
#define IV55_WIDTH 1



typedef enum iv55 {
    IV_5_5_0,
    IV_5_5_1
} IV_55_T ;
#define WRITE_IV55(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV55_MASK) | ((val << IV55_START_BIT) & IV55_MASK )); \
   } 

#define ENABLE_IV55() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV55_MASK ); \
   }

#define DISABLE_IV55() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV55_MASK ); \
   } 

#define READ_IV55() \
   ((READ_REGISTER_ULONG(0x44) & IV55_MASK)  >> IV55_START_BIT)

#define WHEN_IV55_HIGH() \
     if ( READ_IV55() )


#define UNLESS_IV55_HIGH() \
     if (! READ_IV55() )


#define WAIT_IV55_LOW() \
    while ( READ_IV55() );


#define WAIT_IV55_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV55() && (--___t___ > 0)); }


#define WAIT_IV55_HIGH() \
    while (! READ_IV55() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV56 
    // 
#define IV56_MASK 0x80U
#define IV56_OFFSET 7
#define IV56_START_BIT 7
#define IV56_WIDTH 1



typedef enum iv56 {
    IV_5_6_0,
    IV_5_6_1
} IV_56_T ;
#define WRITE_IV56(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV56_MASK) | ((val << IV56_START_BIT) & IV56_MASK )); \
   } 

#define ENABLE_IV56() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV56_MASK ); \
   }

#define DISABLE_IV56() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV56_MASK ); \
   } 

#define READ_IV56() \
   ((READ_REGISTER_ULONG(0x44) & IV56_MASK)  >> IV56_START_BIT)

#define WHEN_IV56_HIGH() \
     if ( READ_IV56() )


#define UNLESS_IV56_HIGH() \
     if (! READ_IV56() )


#define WAIT_IV56_LOW() \
    while ( READ_IV56() );


#define WAIT_IV56_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV56() && (--___t___ > 0)); }


#define WAIT_IV56_HIGH() \
    while (! READ_IV56() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV57 
    // 
#define IV57_MASK 0x40U
#define IV57_OFFSET 6
#define IV57_START_BIT 6
#define IV57_WIDTH 1



typedef enum iv57 {
    IV_5_7_0,
    IV_5_7_1
} IV_57_T ;
#define WRITE_IV57(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV57_MASK) | ((val << IV57_START_BIT) & IV57_MASK )); \
   } 

#define ENABLE_IV57() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV57_MASK ); \
   }

#define DISABLE_IV57() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV57_MASK ); \
   } 

#define READ_IV57() \
   ((READ_REGISTER_ULONG(0x44) & IV57_MASK)  >> IV57_START_BIT)

#define WHEN_IV57_HIGH() \
     if ( READ_IV57() )


#define UNLESS_IV57_HIGH() \
     if (! READ_IV57() )


#define WAIT_IV57_LOW() \
    while ( READ_IV57() );


#define WAIT_IV57_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV57() && (--___t___ > 0)); }


#define WAIT_IV57_HIGH() \
    while (! READ_IV57() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV58 
    // 
#define IV58_MASK 0x20U
#define IV58_OFFSET 5
#define IV58_START_BIT 5
#define IV58_WIDTH 1



typedef enum iv58 {
    IV_5_8_0,
    IV_5_8_1
} IV_58_T ;
#define WRITE_IV58(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV58_MASK) | ((val << IV58_START_BIT) & IV58_MASK )); \
   } 

#define ENABLE_IV58() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV58_MASK ); \
   }

#define DISABLE_IV58() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV58_MASK ); \
   } 

#define READ_IV58() \
   ((READ_REGISTER_ULONG(0x44) & IV58_MASK)  >> IV58_START_BIT)

#define WHEN_IV58_HIGH() \
     if ( READ_IV58() )


#define UNLESS_IV58_HIGH() \
     if (! READ_IV58() )


#define WAIT_IV58_LOW() \
    while ( READ_IV58() );


#define WAIT_IV58_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV58() && (--___t___ > 0)); }


#define WAIT_IV58_HIGH() \
    while (! READ_IV58() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV59 
    // 
#define IV59_MASK 0x10U
#define IV59_OFFSET 4
#define IV59_START_BIT 4
#define IV59_WIDTH 1



typedef enum iv59 {
    IV_5_9_0,
    IV_5_9_1
} IV_59_T ;
#define WRITE_IV59(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV59_MASK) | ((val << IV59_START_BIT) & IV59_MASK )); \
   } 

#define ENABLE_IV59() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV59_MASK ); \
   }

#define DISABLE_IV59() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV59_MASK ); \
   } 

#define READ_IV59() \
   ((READ_REGISTER_ULONG(0x44) & IV59_MASK)  >> IV59_START_BIT)

#define WHEN_IV59_HIGH() \
     if ( READ_IV59() )


#define UNLESS_IV59_HIGH() \
     if (! READ_IV59() )


#define WAIT_IV59_LOW() \
    while ( READ_IV59() );


#define WAIT_IV59_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV59() && (--___t___ > 0)); }


#define WAIT_IV59_HIGH() \
    while (! READ_IV59() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV60 
    // 
#define IV60_MASK 0x8U
#define IV60_OFFSET 3
#define IV60_START_BIT 3
#define IV60_WIDTH 1



typedef enum iv60 {
    IV_6_0_0,
    IV_6_0_1
} IV_60_T ;
#define WRITE_IV60(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV60_MASK) | ((val << IV60_START_BIT) & IV60_MASK )); \
   } 

#define ENABLE_IV60() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV60_MASK ); \
   }

#define DISABLE_IV60() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV60_MASK ); \
   } 

#define READ_IV60() \
   ((READ_REGISTER_ULONG(0x44) & IV60_MASK)  >> IV60_START_BIT)

#define WHEN_IV60_HIGH() \
     if ( READ_IV60() )


#define UNLESS_IV60_HIGH() \
     if (! READ_IV60() )


#define WAIT_IV60_LOW() \
    while ( READ_IV60() );


#define WAIT_IV60_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV60() && (--___t___ > 0)); }


#define WAIT_IV60_HIGH() \
    while (! READ_IV60() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV61 
    // 
#define IV61_MASK 0x4U
#define IV61_OFFSET 2
#define IV61_START_BIT 2
#define IV61_WIDTH 1



typedef enum iv61 {
    IV_6_1_0,
    IV_6_1_1
} IV_61_T ;
#define WRITE_IV61(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV61_MASK) | ((val << IV61_START_BIT) & IV61_MASK )); \
   } 

#define ENABLE_IV61() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV61_MASK ); \
   }

#define DISABLE_IV61() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV61_MASK ); \
   } 

#define READ_IV61() \
   ((READ_REGISTER_ULONG(0x44) & IV61_MASK)  >> IV61_START_BIT)

#define WHEN_IV61_HIGH() \
     if ( READ_IV61() )


#define UNLESS_IV61_HIGH() \
     if (! READ_IV61() )


#define WAIT_IV61_LOW() \
    while ( READ_IV61() );


#define WAIT_IV61_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV61() && (--___t___ > 0)); }


#define WAIT_IV61_HIGH() \
    while (! READ_IV61() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV62 
    // 
#define IV62_MASK 0x2U
#define IV62_OFFSET 1
#define IV62_START_BIT 1
#define IV62_WIDTH 1



typedef enum iv62 {
    IV_6_2_0,
    IV_6_2_1
} IV_62_T ;
#define WRITE_IV62(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV62_MASK) | ((val << IV62_START_BIT) & IV62_MASK )); \
   } 

#define ENABLE_IV62() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV62_MASK ); \
   }

#define DISABLE_IV62() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV62_MASK ); \
   } 

#define READ_IV62() \
   ((READ_REGISTER_ULONG(0x44) & IV62_MASK)  >> IV62_START_BIT)

#define WHEN_IV62_HIGH() \
     if ( READ_IV62() )


#define UNLESS_IV62_HIGH() \
     if (! READ_IV62() )


#define WAIT_IV62_LOW() \
    while ( READ_IV62() );


#define WAIT_IV62_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV62() && (--___t___ > 0)); }


#define WAIT_IV62_HIGH() \
    while (! READ_IV62() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv0rr
//
// Return the value of register IV_0RR
//
// Notes : Register initialization vector registers (IV0RR) at the offset 0x44, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV63 
    // 
#define IV63_MASK 0x1U
#define IV63_OFFSET 0
#define IV63_START_BIT 0
#define IV63_WIDTH 1



typedef enum iv63 {
    IV_6_3_0,
    IV_6_3_1
} IV_63_T ;
#define WRITE_IV63(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ IV63_MASK) | ((val << IV63_START_BIT) & IV63_MASK )); \
   } 

#define ENABLE_IV63() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  IV63_MASK ); \
   }

#define DISABLE_IV63() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~IV63_MASK ); \
   } 

#define READ_IV63() \
   ((READ_REGISTER_ULONG(0x44) & IV63_MASK)  >> IV63_START_BIT)

#define WHEN_IV63_HIGH() \
     if ( READ_IV63() )


#define UNLESS_IV63_HIGH() \
     if (! READ_IV63() )


#define WAIT_IV63_LOW() \
    while ( READ_IV63() );


#define WAIT_IV63_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV63() && (--___t___ > 0)); }


#define WAIT_IV63_HIGH() \
    while (! READ_IV63() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV1LR
//
// Notes : Register Iv1lr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IV_1LR( y) \
     WRITE_REGISTER_ULONG( 0x48 , y)

#define SET_BITS_IV_1LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  mask ); \
   }

#define CLEAR_BITS_IV_1LR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val & ~mask ); \
   }

#define READ_REGISTER_IV_1LR() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV64 
    // 
#define IV64_MASK 0x80000000U
#define IV64_OFFSET 31
#define IV64_START_BIT 31
#define IV64_WIDTH 1


#define IV_1LR_REG 0x48

typedef enum iv64 {
    IV_6_4_0,
    IV_6_4_1
} IV_64_T ;
#define WRITE_IV64(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV64_MASK) | ((val << IV64_START_BIT) & IV64_MASK )); \
   } 

#define ENABLE_IV64() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV64_MASK ); \
   }

#define DISABLE_IV64() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV64_MASK ); \
   } 

#define READ_IV64() \
   ((READ_REGISTER_ULONG(0x48) & IV64_MASK)  >> IV64_START_BIT)

#define WHEN_IV64_HIGH() \
     if ( READ_IV64() )


#define UNLESS_IV64_HIGH() \
     if (! READ_IV64() )


#define WAIT_IV64_LOW() \
    while ( READ_IV64() );


#define WAIT_IV64_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV64() && (--___t___ > 0)); }


#define WAIT_IV64_HIGH() \
    while (! READ_IV64() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV65 
    // 
#define IV65_MASK 0x40000000U
#define IV65_OFFSET 30
#define IV65_START_BIT 30
#define IV65_WIDTH 1



typedef enum iv65 {
    IV_6_5_0,
    IV_6_5_1
} IV_65_T ;
#define WRITE_IV65(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV65_MASK) | ((val << IV65_START_BIT) & IV65_MASK )); \
   } 

#define ENABLE_IV65() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV65_MASK ); \
   }

#define DISABLE_IV65() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV65_MASK ); \
   } 

#define READ_IV65() \
   ((READ_REGISTER_ULONG(0x48) & IV65_MASK)  >> IV65_START_BIT)

#define WHEN_IV65_HIGH() \
     if ( READ_IV65() )


#define UNLESS_IV65_HIGH() \
     if (! READ_IV65() )


#define WAIT_IV65_LOW() \
    while ( READ_IV65() );


#define WAIT_IV65_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV65() && (--___t___ > 0)); }


#define WAIT_IV65_HIGH() \
    while (! READ_IV65() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV66 
    // 
#define IV66_MASK 0x20000000U
#define IV66_OFFSET 29
#define IV66_START_BIT 29
#define IV66_WIDTH 1



typedef enum iv66 {
    IV_6_6_0,
    IV_6_6_1
} IV_66_T ;
#define WRITE_IV66(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV66_MASK) | ((val << IV66_START_BIT) & IV66_MASK )); \
   } 

#define ENABLE_IV66() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV66_MASK ); \
   }

#define DISABLE_IV66() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV66_MASK ); \
   } 

#define READ_IV66() \
   ((READ_REGISTER_ULONG(0x48) & IV66_MASK)  >> IV66_START_BIT)

#define WHEN_IV66_HIGH() \
     if ( READ_IV66() )


#define UNLESS_IV66_HIGH() \
     if (! READ_IV66() )


#define WAIT_IV66_LOW() \
    while ( READ_IV66() );


#define WAIT_IV66_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV66() && (--___t___ > 0)); }


#define WAIT_IV66_HIGH() \
    while (! READ_IV66() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV67 
    // 
#define IV67_MASK 0x10000000U
#define IV67_OFFSET 28
#define IV67_START_BIT 28
#define IV67_WIDTH 1



typedef enum iv67 {
    IV_6_7_0,
    IV_6_7_1
} IV_67_T ;
#define WRITE_IV67(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV67_MASK) | ((val << IV67_START_BIT) & IV67_MASK )); \
   } 

#define ENABLE_IV67() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV67_MASK ); \
   }

#define DISABLE_IV67() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV67_MASK ); \
   } 

#define READ_IV67() \
   ((READ_REGISTER_ULONG(0x48) & IV67_MASK)  >> IV67_START_BIT)

#define WHEN_IV67_HIGH() \
     if ( READ_IV67() )


#define UNLESS_IV67_HIGH() \
     if (! READ_IV67() )


#define WAIT_IV67_LOW() \
    while ( READ_IV67() );


#define WAIT_IV67_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV67() && (--___t___ > 0)); }


#define WAIT_IV67_HIGH() \
    while (! READ_IV67() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV68 
    // 
#define IV68_MASK 0x8000000U
#define IV68_OFFSET 27
#define IV68_START_BIT 27
#define IV68_WIDTH 1



typedef enum iv68 {
    IV_6_8_0,
    IV_6_8_1
} IV_68_T ;
#define WRITE_IV68(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV68_MASK) | ((val << IV68_START_BIT) & IV68_MASK )); \
   } 

#define ENABLE_IV68() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV68_MASK ); \
   }

#define DISABLE_IV68() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV68_MASK ); \
   } 

#define READ_IV68() \
   ((READ_REGISTER_ULONG(0x48) & IV68_MASK)  >> IV68_START_BIT)

#define WHEN_IV68_HIGH() \
     if ( READ_IV68() )


#define UNLESS_IV68_HIGH() \
     if (! READ_IV68() )


#define WAIT_IV68_LOW() \
    while ( READ_IV68() );


#define WAIT_IV68_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV68() && (--___t___ > 0)); }


#define WAIT_IV68_HIGH() \
    while (! READ_IV68() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV69 
    // 
#define IV69_MASK 0x4000000U
#define IV69_OFFSET 26
#define IV69_START_BIT 26
#define IV69_WIDTH 1



typedef enum iv69 {
    IV_6_9_0,
    IV_6_9_1
} IV_69_T ;
#define WRITE_IV69(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV69_MASK) | ((val << IV69_START_BIT) & IV69_MASK )); \
   } 

#define ENABLE_IV69() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV69_MASK ); \
   }

#define DISABLE_IV69() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV69_MASK ); \
   } 

#define READ_IV69() \
   ((READ_REGISTER_ULONG(0x48) & IV69_MASK)  >> IV69_START_BIT)

#define WHEN_IV69_HIGH() \
     if ( READ_IV69() )


#define UNLESS_IV69_HIGH() \
     if (! READ_IV69() )


#define WAIT_IV69_LOW() \
    while ( READ_IV69() );


#define WAIT_IV69_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV69() && (--___t___ > 0)); }


#define WAIT_IV69_HIGH() \
    while (! READ_IV69() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV70 
    // 
#define IV70_MASK 0x2000000U
#define IV70_OFFSET 25
#define IV70_START_BIT 25
#define IV70_WIDTH 1



typedef enum iv70 {
    IV_7_0_0,
    IV_7_0_1
} IV_70_T ;
#define WRITE_IV70(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV70_MASK) | ((val << IV70_START_BIT) & IV70_MASK )); \
   } 

#define ENABLE_IV70() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV70_MASK ); \
   }

#define DISABLE_IV70() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV70_MASK ); \
   } 

#define READ_IV70() \
   ((READ_REGISTER_ULONG(0x48) & IV70_MASK)  >> IV70_START_BIT)

#define WHEN_IV70_HIGH() \
     if ( READ_IV70() )


#define UNLESS_IV70_HIGH() \
     if (! READ_IV70() )


#define WAIT_IV70_LOW() \
    while ( READ_IV70() );


#define WAIT_IV70_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV70() && (--___t___ > 0)); }


#define WAIT_IV70_HIGH() \
    while (! READ_IV70() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV71 
    // 
#define IV71_MASK 0x1000000U
#define IV71_OFFSET 24
#define IV71_START_BIT 24
#define IV71_WIDTH 1



typedef enum iv71 {
    IV_7_1_0,
    IV_7_1_1
} IV_71_T ;
#define WRITE_IV71(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV71_MASK) | ((val << IV71_START_BIT) & IV71_MASK )); \
   } 

#define ENABLE_IV71() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV71_MASK ); \
   }

#define DISABLE_IV71() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV71_MASK ); \
   } 

#define READ_IV71() \
   ((READ_REGISTER_ULONG(0x48) & IV71_MASK)  >> IV71_START_BIT)

#define WHEN_IV71_HIGH() \
     if ( READ_IV71() )


#define UNLESS_IV71_HIGH() \
     if (! READ_IV71() )


#define WAIT_IV71_LOW() \
    while ( READ_IV71() );


#define WAIT_IV71_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV71() && (--___t___ > 0)); }


#define WAIT_IV71_HIGH() \
    while (! READ_IV71() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV72 
    // 
#define IV72_MASK 0x800000U
#define IV72_OFFSET 23
#define IV72_START_BIT 23
#define IV72_WIDTH 1



typedef enum iv72 {
    IV_7_2_0,
    IV_7_2_1
} IV_72_T ;
#define WRITE_IV72(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV72_MASK) | ((val << IV72_START_BIT) & IV72_MASK )); \
   } 

#define ENABLE_IV72() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV72_MASK ); \
   }

#define DISABLE_IV72() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV72_MASK ); \
   } 

#define READ_IV72() \
   ((READ_REGISTER_ULONG(0x48) & IV72_MASK)  >> IV72_START_BIT)

#define WHEN_IV72_HIGH() \
     if ( READ_IV72() )


#define UNLESS_IV72_HIGH() \
     if (! READ_IV72() )


#define WAIT_IV72_LOW() \
    while ( READ_IV72() );


#define WAIT_IV72_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV72() && (--___t___ > 0)); }


#define WAIT_IV72_HIGH() \
    while (! READ_IV72() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV73 
    // 
#define IV73_MASK 0x400000U
#define IV73_OFFSET 22
#define IV73_START_BIT 22
#define IV73_WIDTH 1



typedef enum iv73 {
    IV_7_3_0,
    IV_7_3_1
} IV_73_T ;
#define WRITE_IV73(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV73_MASK) | ((val << IV73_START_BIT) & IV73_MASK )); \
   } 

#define ENABLE_IV73() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV73_MASK ); \
   }

#define DISABLE_IV73() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV73_MASK ); \
   } 

#define READ_IV73() \
   ((READ_REGISTER_ULONG(0x48) & IV73_MASK)  >> IV73_START_BIT)

#define WHEN_IV73_HIGH() \
     if ( READ_IV73() )


#define UNLESS_IV73_HIGH() \
     if (! READ_IV73() )


#define WAIT_IV73_LOW() \
    while ( READ_IV73() );


#define WAIT_IV73_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV73() && (--___t___ > 0)); }


#define WAIT_IV73_HIGH() \
    while (! READ_IV73() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV74 
    // 
#define IV74_MASK 0x200000U
#define IV74_OFFSET 21
#define IV74_START_BIT 21
#define IV74_WIDTH 1



typedef enum iv74 {
    IV_7_4_0,
    IV_7_4_1
} IV_74_T ;
#define WRITE_IV74(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV74_MASK) | ((val << IV74_START_BIT) & IV74_MASK )); \
   } 

#define ENABLE_IV74() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV74_MASK ); \
   }

#define DISABLE_IV74() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV74_MASK ); \
   } 

#define READ_IV74() \
   ((READ_REGISTER_ULONG(0x48) & IV74_MASK)  >> IV74_START_BIT)

#define WHEN_IV74_HIGH() \
     if ( READ_IV74() )


#define UNLESS_IV74_HIGH() \
     if (! READ_IV74() )


#define WAIT_IV74_LOW() \
    while ( READ_IV74() );


#define WAIT_IV74_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV74() && (--___t___ > 0)); }


#define WAIT_IV74_HIGH() \
    while (! READ_IV74() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV75 
    // 
#define IV75_MASK 0x100000U
#define IV75_OFFSET 20
#define IV75_START_BIT 20
#define IV75_WIDTH 1



typedef enum iv75 {
    IV_7_5_0,
    IV_7_5_1
} IV_75_T ;
#define WRITE_IV75(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV75_MASK) | ((val << IV75_START_BIT) & IV75_MASK )); \
   } 

#define ENABLE_IV75() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV75_MASK ); \
   }

#define DISABLE_IV75() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV75_MASK ); \
   } 

#define READ_IV75() \
   ((READ_REGISTER_ULONG(0x48) & IV75_MASK)  >> IV75_START_BIT)

#define WHEN_IV75_HIGH() \
     if ( READ_IV75() )


#define UNLESS_IV75_HIGH() \
     if (! READ_IV75() )


#define WAIT_IV75_LOW() \
    while ( READ_IV75() );


#define WAIT_IV75_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV75() && (--___t___ > 0)); }


#define WAIT_IV75_HIGH() \
    while (! READ_IV75() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV76 
    // 
#define IV76_MASK 0x80000U
#define IV76_OFFSET 19
#define IV76_START_BIT 19
#define IV76_WIDTH 1



typedef enum iv76 {
    IV_7_6_0,
    IV_7_6_1
} IV_76_T ;
#define WRITE_IV76(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV76_MASK) | ((val << IV76_START_BIT) & IV76_MASK )); \
   } 

#define ENABLE_IV76() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV76_MASK ); \
   }

#define DISABLE_IV76() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV76_MASK ); \
   } 

#define READ_IV76() \
   ((READ_REGISTER_ULONG(0x48) & IV76_MASK)  >> IV76_START_BIT)

#define WHEN_IV76_HIGH() \
     if ( READ_IV76() )


#define UNLESS_IV76_HIGH() \
     if (! READ_IV76() )


#define WAIT_IV76_LOW() \
    while ( READ_IV76() );


#define WAIT_IV76_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV76() && (--___t___ > 0)); }


#define WAIT_IV76_HIGH() \
    while (! READ_IV76() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV77 
    // 
#define IV77_MASK 0x40000U
#define IV77_OFFSET 18
#define IV77_START_BIT 18
#define IV77_WIDTH 1



typedef enum iv77 {
    IV_7_7_0,
    IV_7_7_1
} IV_77_T ;
#define WRITE_IV77(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV77_MASK) | ((val << IV77_START_BIT) & IV77_MASK )); \
   } 

#define ENABLE_IV77() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV77_MASK ); \
   }

#define DISABLE_IV77() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV77_MASK ); \
   } 

#define READ_IV77() \
   ((READ_REGISTER_ULONG(0x48) & IV77_MASK)  >> IV77_START_BIT)

#define WHEN_IV77_HIGH() \
     if ( READ_IV77() )


#define UNLESS_IV77_HIGH() \
     if (! READ_IV77() )


#define WAIT_IV77_LOW() \
    while ( READ_IV77() );


#define WAIT_IV77_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV77() && (--___t___ > 0)); }


#define WAIT_IV77_HIGH() \
    while (! READ_IV77() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV78 
    // 
#define IV78_MASK 0x20000U
#define IV78_OFFSET 17
#define IV78_START_BIT 17
#define IV78_WIDTH 1



typedef enum iv78 {
    IV_7_8_0,
    IV_7_8_1
} IV_78_T ;
#define WRITE_IV78(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV78_MASK) | ((val << IV78_START_BIT) & IV78_MASK )); \
   } 

#define ENABLE_IV78() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV78_MASK ); \
   }

#define DISABLE_IV78() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV78_MASK ); \
   } 

#define READ_IV78() \
   ((READ_REGISTER_ULONG(0x48) & IV78_MASK)  >> IV78_START_BIT)

#define WHEN_IV78_HIGH() \
     if ( READ_IV78() )


#define UNLESS_IV78_HIGH() \
     if (! READ_IV78() )


#define WAIT_IV78_LOW() \
    while ( READ_IV78() );


#define WAIT_IV78_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV78() && (--___t___ > 0)); }


#define WAIT_IV78_HIGH() \
    while (! READ_IV78() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV79 
    // 
#define IV79_MASK 0x10000U
#define IV79_OFFSET 16
#define IV79_START_BIT 16
#define IV79_WIDTH 1



typedef enum iv79 {
    IV_7_9_0,
    IV_7_9_1
} IV_79_T ;
#define WRITE_IV79(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV79_MASK) | ((val << IV79_START_BIT) & IV79_MASK )); \
   } 

#define ENABLE_IV79() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV79_MASK ); \
   }

#define DISABLE_IV79() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV79_MASK ); \
   } 

#define READ_IV79() \
   ((READ_REGISTER_ULONG(0x48) & IV79_MASK)  >> IV79_START_BIT)

#define WHEN_IV79_HIGH() \
     if ( READ_IV79() )


#define UNLESS_IV79_HIGH() \
     if (! READ_IV79() )


#define WAIT_IV79_LOW() \
    while ( READ_IV79() );


#define WAIT_IV79_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV79() && (--___t___ > 0)); }


#define WAIT_IV79_HIGH() \
    while (! READ_IV79() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV80 
    // 
#define IV80_MASK 0x8000U
#define IV80_OFFSET 15
#define IV80_START_BIT 15
#define IV80_WIDTH 1



typedef enum iv80 {
    IV_8_0_0,
    IV_8_0_1
} IV_80_T ;
#define WRITE_IV80(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV80_MASK) | ((val << IV80_START_BIT) & IV80_MASK )); \
   } 

#define ENABLE_IV80() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV80_MASK ); \
   }

#define DISABLE_IV80() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV80_MASK ); \
   } 

#define READ_IV80() \
   ((READ_REGISTER_ULONG(0x48) & IV80_MASK)  >> IV80_START_BIT)

#define WHEN_IV80_HIGH() \
     if ( READ_IV80() )


#define UNLESS_IV80_HIGH() \
     if (! READ_IV80() )


#define WAIT_IV80_LOW() \
    while ( READ_IV80() );


#define WAIT_IV80_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV80() && (--___t___ > 0)); }


#define WAIT_IV80_HIGH() \
    while (! READ_IV80() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV81 
    // 
#define IV81_MASK 0x4000U
#define IV81_OFFSET 14
#define IV81_START_BIT 14
#define IV81_WIDTH 1



typedef enum iv81 {
    IV_8_1_0,
    IV_8_1_1
} IV_81_T ;
#define WRITE_IV81(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV81_MASK) | ((val << IV81_START_BIT) & IV81_MASK )); \
   } 

#define ENABLE_IV81() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV81_MASK ); \
   }

#define DISABLE_IV81() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV81_MASK ); \
   } 

#define READ_IV81() \
   ((READ_REGISTER_ULONG(0x48) & IV81_MASK)  >> IV81_START_BIT)

#define WHEN_IV81_HIGH() \
     if ( READ_IV81() )


#define UNLESS_IV81_HIGH() \
     if (! READ_IV81() )


#define WAIT_IV81_LOW() \
    while ( READ_IV81() );


#define WAIT_IV81_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV81() && (--___t___ > 0)); }


#define WAIT_IV81_HIGH() \
    while (! READ_IV81() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV82 
    // 
#define IV82_MASK 0x2000U
#define IV82_OFFSET 13
#define IV82_START_BIT 13
#define IV82_WIDTH 1



typedef enum iv82 {
    IV_8_2_0,
    IV_8_2_1
} IV_82_T ;
#define WRITE_IV82(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV82_MASK) | ((val << IV82_START_BIT) & IV82_MASK )); \
   } 

#define ENABLE_IV82() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV82_MASK ); \
   }

#define DISABLE_IV82() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV82_MASK ); \
   } 

#define READ_IV82() \
   ((READ_REGISTER_ULONG(0x48) & IV82_MASK)  >> IV82_START_BIT)

#define WHEN_IV82_HIGH() \
     if ( READ_IV82() )


#define UNLESS_IV82_HIGH() \
     if (! READ_IV82() )


#define WAIT_IV82_LOW() \
    while ( READ_IV82() );


#define WAIT_IV82_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV82() && (--___t___ > 0)); }


#define WAIT_IV82_HIGH() \
    while (! READ_IV82() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV83 
    // 
#define IV83_MASK 0x1000U
#define IV83_OFFSET 12
#define IV83_START_BIT 12
#define IV83_WIDTH 1



typedef enum iv83 {
    IV_8_3_0,
    IV_8_3_1
} IV_83_T ;
#define WRITE_IV83(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV83_MASK) | ((val << IV83_START_BIT) & IV83_MASK )); \
   } 

#define ENABLE_IV83() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV83_MASK ); \
   }

#define DISABLE_IV83() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV83_MASK ); \
   } 

#define READ_IV83() \
   ((READ_REGISTER_ULONG(0x48) & IV83_MASK)  >> IV83_START_BIT)

#define WHEN_IV83_HIGH() \
     if ( READ_IV83() )


#define UNLESS_IV83_HIGH() \
     if (! READ_IV83() )


#define WAIT_IV83_LOW() \
    while ( READ_IV83() );


#define WAIT_IV83_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV83() && (--___t___ > 0)); }


#define WAIT_IV83_HIGH() \
    while (! READ_IV83() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV84 
    // 
#define IV84_MASK 0x800U
#define IV84_OFFSET 11
#define IV84_START_BIT 11
#define IV84_WIDTH 1



typedef enum iv84 {
    IV_8_4_0,
    IV_8_4_1
} IV_84_T ;
#define WRITE_IV84(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV84_MASK) | ((val << IV84_START_BIT) & IV84_MASK )); \
   } 

#define ENABLE_IV84() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV84_MASK ); \
   }

#define DISABLE_IV84() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV84_MASK ); \
   } 

#define READ_IV84() \
   ((READ_REGISTER_ULONG(0x48) & IV84_MASK)  >> IV84_START_BIT)

#define WHEN_IV84_HIGH() \
     if ( READ_IV84() )


#define UNLESS_IV84_HIGH() \
     if (! READ_IV84() )


#define WAIT_IV84_LOW() \
    while ( READ_IV84() );


#define WAIT_IV84_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV84() && (--___t___ > 0)); }


#define WAIT_IV84_HIGH() \
    while (! READ_IV84() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV85 
    // 
#define IV85_MASK 0x400U
#define IV85_OFFSET 10
#define IV85_START_BIT 10
#define IV85_WIDTH 1



typedef enum iv85 {
    IV_8_5_0,
    IV_8_5_1
} IV_85_T ;
#define WRITE_IV85(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV85_MASK) | ((val << IV85_START_BIT) & IV85_MASK )); \
   } 

#define ENABLE_IV85() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV85_MASK ); \
   }

#define DISABLE_IV85() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV85_MASK ); \
   } 

#define READ_IV85() \
   ((READ_REGISTER_ULONG(0x48) & IV85_MASK)  >> IV85_START_BIT)

#define WHEN_IV85_HIGH() \
     if ( READ_IV85() )


#define UNLESS_IV85_HIGH() \
     if (! READ_IV85() )


#define WAIT_IV85_LOW() \
    while ( READ_IV85() );


#define WAIT_IV85_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV85() && (--___t___ > 0)); }


#define WAIT_IV85_HIGH() \
    while (! READ_IV85() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV86 
    // 
#define IV86_MASK 0x200U
#define IV86_OFFSET 9
#define IV86_START_BIT 9
#define IV86_WIDTH 1



typedef enum iv86 {
    IV_8_6_0,
    IV_8_6_1
} IV_86_T ;
#define WRITE_IV86(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV86_MASK) | ((val << IV86_START_BIT) & IV86_MASK )); \
   } 

#define ENABLE_IV86() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV86_MASK ); \
   }

#define DISABLE_IV86() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV86_MASK ); \
   } 

#define READ_IV86() \
   ((READ_REGISTER_ULONG(0x48) & IV86_MASK)  >> IV86_START_BIT)

#define WHEN_IV86_HIGH() \
     if ( READ_IV86() )


#define UNLESS_IV86_HIGH() \
     if (! READ_IV86() )


#define WAIT_IV86_LOW() \
    while ( READ_IV86() );


#define WAIT_IV86_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV86() && (--___t___ > 0)); }


#define WAIT_IV86_HIGH() \
    while (! READ_IV86() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV87 
    // 
#define IV87_MASK 0x100U
#define IV87_OFFSET 8
#define IV87_START_BIT 8
#define IV87_WIDTH 1



typedef enum iv87 {
    IV_8_7_0,
    IV_8_7_1
} IV_87_T ;
#define WRITE_IV87(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV87_MASK) | ((val << IV87_START_BIT) & IV87_MASK )); \
   } 

#define ENABLE_IV87() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV87_MASK ); \
   }

#define DISABLE_IV87() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV87_MASK ); \
   } 

#define READ_IV87() \
   ((READ_REGISTER_ULONG(0x48) & IV87_MASK)  >> IV87_START_BIT)

#define WHEN_IV87_HIGH() \
     if ( READ_IV87() )


#define UNLESS_IV87_HIGH() \
     if (! READ_IV87() )


#define WAIT_IV87_LOW() \
    while ( READ_IV87() );


#define WAIT_IV87_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV87() && (--___t___ > 0)); }


#define WAIT_IV87_HIGH() \
    while (! READ_IV87() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV88 
    // 
#define IV88_MASK 0x80U
#define IV88_OFFSET 7
#define IV88_START_BIT 7
#define IV88_WIDTH 1



typedef enum iv88 {
    IV_8_8_0,
    IV_8_8_1
} IV_88_T ;
#define WRITE_IV88(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV88_MASK) | ((val << IV88_START_BIT) & IV88_MASK )); \
   } 

#define ENABLE_IV88() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV88_MASK ); \
   }

#define DISABLE_IV88() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV88_MASK ); \
   } 

#define READ_IV88() \
   ((READ_REGISTER_ULONG(0x48) & IV88_MASK)  >> IV88_START_BIT)

#define WHEN_IV88_HIGH() \
     if ( READ_IV88() )


#define UNLESS_IV88_HIGH() \
     if (! READ_IV88() )


#define WAIT_IV88_LOW() \
    while ( READ_IV88() );


#define WAIT_IV88_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV88() && (--___t___ > 0)); }


#define WAIT_IV88_HIGH() \
    while (! READ_IV88() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV89 
    // 
#define IV89_MASK 0x40U
#define IV89_OFFSET 6
#define IV89_START_BIT 6
#define IV89_WIDTH 1



typedef enum iv89 {
    IV_8_9_0,
    IV_8_9_1
} IV_89_T ;
#define WRITE_IV89(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV89_MASK) | ((val << IV89_START_BIT) & IV89_MASK )); \
   } 

#define ENABLE_IV89() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV89_MASK ); \
   }

#define DISABLE_IV89() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV89_MASK ); \
   } 

#define READ_IV89() \
   ((READ_REGISTER_ULONG(0x48) & IV89_MASK)  >> IV89_START_BIT)

#define WHEN_IV89_HIGH() \
     if ( READ_IV89() )


#define UNLESS_IV89_HIGH() \
     if (! READ_IV89() )


#define WAIT_IV89_LOW() \
    while ( READ_IV89() );


#define WAIT_IV89_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV89() && (--___t___ > 0)); }


#define WAIT_IV89_HIGH() \
    while (! READ_IV89() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV90 
    // 
#define IV90_MASK 0x20U
#define IV90_OFFSET 5
#define IV90_START_BIT 5
#define IV90_WIDTH 1



typedef enum iv90 {
    IV_9_0_0,
    IV_9_0_1
} IV_90_T ;
#define WRITE_IV90(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV90_MASK) | ((val << IV90_START_BIT) & IV90_MASK )); \
   } 

#define ENABLE_IV90() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV90_MASK ); \
   }

#define DISABLE_IV90() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV90_MASK ); \
   } 

#define READ_IV90() \
   ((READ_REGISTER_ULONG(0x48) & IV90_MASK)  >> IV90_START_BIT)

#define WHEN_IV90_HIGH() \
     if ( READ_IV90() )


#define UNLESS_IV90_HIGH() \
     if (! READ_IV90() )


#define WAIT_IV90_LOW() \
    while ( READ_IV90() );


#define WAIT_IV90_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV90() && (--___t___ > 0)); }


#define WAIT_IV90_HIGH() \
    while (! READ_IV90() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV91 
    // 
#define IV91_MASK 0x10U
#define IV91_OFFSET 4
#define IV91_START_BIT 4
#define IV91_WIDTH 1



typedef enum iv91 {
    IV_9_1_0,
    IV_9_1_1
} IV_91_T ;
#define WRITE_IV91(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV91_MASK) | ((val << IV91_START_BIT) & IV91_MASK )); \
   } 

#define ENABLE_IV91() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV91_MASK ); \
   }

#define DISABLE_IV91() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV91_MASK ); \
   } 

#define READ_IV91() \
   ((READ_REGISTER_ULONG(0x48) & IV91_MASK)  >> IV91_START_BIT)

#define WHEN_IV91_HIGH() \
     if ( READ_IV91() )


#define UNLESS_IV91_HIGH() \
     if (! READ_IV91() )


#define WAIT_IV91_LOW() \
    while ( READ_IV91() );


#define WAIT_IV91_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV91() && (--___t___ > 0)); }


#define WAIT_IV91_HIGH() \
    while (! READ_IV91() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV92 
    // 
#define IV92_MASK 0x8U
#define IV92_OFFSET 3
#define IV92_START_BIT 3
#define IV92_WIDTH 1



typedef enum iv92 {
    IV_9_2_0,
    IV_9_2_1
} IV_92_T ;
#define WRITE_IV92(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV92_MASK) | ((val << IV92_START_BIT) & IV92_MASK )); \
   } 

#define ENABLE_IV92() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV92_MASK ); \
   }

#define DISABLE_IV92() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV92_MASK ); \
   } 

#define READ_IV92() \
   ((READ_REGISTER_ULONG(0x48) & IV92_MASK)  >> IV92_START_BIT)

#define WHEN_IV92_HIGH() \
     if ( READ_IV92() )


#define UNLESS_IV92_HIGH() \
     if (! READ_IV92() )


#define WAIT_IV92_LOW() \
    while ( READ_IV92() );


#define WAIT_IV92_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV92() && (--___t___ > 0)); }


#define WAIT_IV92_HIGH() \
    while (! READ_IV92() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV93 
    // 
#define IV93_MASK 0x4U
#define IV93_OFFSET 2
#define IV93_START_BIT 2
#define IV93_WIDTH 1



typedef enum iv93 {
    IV_9_3_0,
    IV_9_3_1
} IV_93_T ;
#define WRITE_IV93(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV93_MASK) | ((val << IV93_START_BIT) & IV93_MASK )); \
   } 

#define ENABLE_IV93() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV93_MASK ); \
   }

#define DISABLE_IV93() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV93_MASK ); \
   } 

#define READ_IV93() \
   ((READ_REGISTER_ULONG(0x48) & IV93_MASK)  >> IV93_START_BIT)

#define WHEN_IV93_HIGH() \
     if ( READ_IV93() )


#define UNLESS_IV93_HIGH() \
     if (! READ_IV93() )


#define WAIT_IV93_LOW() \
    while ( READ_IV93() );


#define WAIT_IV93_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV93() && (--___t___ > 0)); }


#define WAIT_IV93_HIGH() \
    while (! READ_IV93() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV94 
    // 
#define IV94_MASK 0x2U
#define IV94_OFFSET 1
#define IV94_START_BIT 1
#define IV94_WIDTH 1



typedef enum iv94 {
    IV_9_4_0,
    IV_9_4_1
} IV_94_T ;
#define WRITE_IV94(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV94_MASK) | ((val << IV94_START_BIT) & IV94_MASK )); \
   } 

#define ENABLE_IV94() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV94_MASK ); \
   }

#define DISABLE_IV94() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV94_MASK ); \
   } 

#define READ_IV94() \
   ((READ_REGISTER_ULONG(0x48) & IV94_MASK)  >> IV94_START_BIT)

#define WHEN_IV94_HIGH() \
     if ( READ_IV94() )


#define UNLESS_IV94_HIGH() \
     if (! READ_IV94() )


#define WAIT_IV94_LOW() \
    while ( READ_IV94() );


#define WAIT_IV94_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV94() && (--___t___ > 0)); }


#define WAIT_IV94_HIGH() \
    while (! READ_IV94() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1lr
//
// Return the value of register IV_1LR
//
// Notes : Register initialization vector registers (IV1LR) at the offset 0x48, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV95 
    // 
#define IV95_MASK 0x1U
#define IV95_OFFSET 0
#define IV95_START_BIT 0
#define IV95_WIDTH 1



typedef enum iv95 {
    IV_9_5_0,
    IV_9_5_1
} IV_95_T ;
#define WRITE_IV95(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ IV95_MASK) | ((val << IV95_START_BIT) & IV95_MASK )); \
   } 

#define ENABLE_IV95() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  IV95_MASK ); \
   }

#define DISABLE_IV95() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG(0x48, val & ~IV95_MASK ); \
   } 

#define READ_IV95() \
   ((READ_REGISTER_ULONG(0x48) & IV95_MASK)  >> IV95_START_BIT)

#define WHEN_IV95_HIGH() \
     if ( READ_IV95() )


#define UNLESS_IV95_HIGH() \
     if (! READ_IV95() )


#define WAIT_IV95_LOW() \
    while ( READ_IV95() );


#define WAIT_IV95_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV95() && (--___t___ > 0)); }


#define WAIT_IV95_HIGH() \
    while (! READ_IV95() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV1RR
//
// Notes : Register Iv1rr at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IV_1RR( y) \
     WRITE_REGISTER_ULONG( 0x4C , y)

#define SET_BITS_IV_1RR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  mask ); \
   }

#define CLEAR_BITS_IV_1RR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val & ~mask ); \
   }

#define READ_REGISTER_IV_1RR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV96 
    // 
#define IV96_MASK 0x80000000U
#define IV96_OFFSET 31
#define IV96_START_BIT 31
#define IV96_WIDTH 1


#define IV_1RR_REG 0x4C

typedef enum iv96 {
    IV_9_6_0,
    IV_9_6_1
} IV_96_T ;
#define WRITE_IV96(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV96_MASK) | ((val << IV96_START_BIT) & IV96_MASK )); \
   } 

#define ENABLE_IV96() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV96_MASK ); \
   }

#define DISABLE_IV96() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV96_MASK ); \
   } 

#define READ_IV96() \
   ((READ_REGISTER_ULONG(0x4C) & IV96_MASK)  >> IV96_START_BIT)

#define WHEN_IV96_HIGH() \
     if ( READ_IV96() )


#define UNLESS_IV96_HIGH() \
     if (! READ_IV96() )


#define WAIT_IV96_LOW() \
    while ( READ_IV96() );


#define WAIT_IV96_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV96() && (--___t___ > 0)); }


#define WAIT_IV96_HIGH() \
    while (! READ_IV96() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV97 
    // 
#define IV97_MASK 0x40000000U
#define IV97_OFFSET 30
#define IV97_START_BIT 30
#define IV97_WIDTH 1



typedef enum iv97 {
    IV_9_7_0,
    IV_9_7_1
} IV_97_T ;
#define WRITE_IV97(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV97_MASK) | ((val << IV97_START_BIT) & IV97_MASK )); \
   } 

#define ENABLE_IV97() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV97_MASK ); \
   }

#define DISABLE_IV97() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV97_MASK ); \
   } 

#define READ_IV97() \
   ((READ_REGISTER_ULONG(0x4C) & IV97_MASK)  >> IV97_START_BIT)

#define WHEN_IV97_HIGH() \
     if ( READ_IV97() )


#define UNLESS_IV97_HIGH() \
     if (! READ_IV97() )


#define WAIT_IV97_LOW() \
    while ( READ_IV97() );


#define WAIT_IV97_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV97() && (--___t___ > 0)); }


#define WAIT_IV97_HIGH() \
    while (! READ_IV97() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV98 
    // 
#define IV98_MASK 0x20000000U
#define IV98_OFFSET 29
#define IV98_START_BIT 29
#define IV98_WIDTH 1



typedef enum iv98 {
    IV_9_8_0,
    IV_9_8_1
} IV_98_T ;
#define WRITE_IV98(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV98_MASK) | ((val << IV98_START_BIT) & IV98_MASK )); \
   } 

#define ENABLE_IV98() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV98_MASK ); \
   }

#define DISABLE_IV98() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV98_MASK ); \
   } 

#define READ_IV98() \
   ((READ_REGISTER_ULONG(0x4C) & IV98_MASK)  >> IV98_START_BIT)

#define WHEN_IV98_HIGH() \
     if ( READ_IV98() )


#define UNLESS_IV98_HIGH() \
     if (! READ_IV98() )


#define WAIT_IV98_LOW() \
    while ( READ_IV98() );


#define WAIT_IV98_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV98() && (--___t___ > 0)); }


#define WAIT_IV98_HIGH() \
    while (! READ_IV98() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV99 
    // 
#define IV99_MASK 0x10000000U
#define IV99_OFFSET 28
#define IV99_START_BIT 28
#define IV99_WIDTH 1



typedef enum iv99 {
    IV_9_9_0,
    IV_9_9_1
} IV_99_T ;
#define WRITE_IV99(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV99_MASK) | ((val << IV99_START_BIT) & IV99_MASK )); \
   } 

#define ENABLE_IV99() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV99_MASK ); \
   }

#define DISABLE_IV99() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV99_MASK ); \
   } 

#define READ_IV99() \
   ((READ_REGISTER_ULONG(0x4C) & IV99_MASK)  >> IV99_START_BIT)

#define WHEN_IV99_HIGH() \
     if ( READ_IV99() )


#define UNLESS_IV99_HIGH() \
     if (! READ_IV99() )


#define WAIT_IV99_LOW() \
    while ( READ_IV99() );


#define WAIT_IV99_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV99() && (--___t___ > 0)); }


#define WAIT_IV99_HIGH() \
    while (! READ_IV99() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV100 
    // 
#define IV100_MASK 0x8000000U
#define IV100_OFFSET 27
#define IV100_START_BIT 27
#define IV100_WIDTH 1



typedef enum iv100 {
    IV_1_0_0_0,
    IV_1_0_0_1
} IV_100_T ;
#define WRITE_IV100(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV100_MASK) | ((val << IV100_START_BIT) & IV100_MASK )); \
   } 

#define ENABLE_IV100() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV100_MASK ); \
   }

#define DISABLE_IV100() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV100_MASK ); \
   } 

#define READ_IV100() \
   ((READ_REGISTER_ULONG(0x4C) & IV100_MASK)  >> IV100_START_BIT)

#define WHEN_IV100_HIGH() \
     if ( READ_IV100() )


#define UNLESS_IV100_HIGH() \
     if (! READ_IV100() )


#define WAIT_IV100_LOW() \
    while ( READ_IV100() );


#define WAIT_IV100_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV100() && (--___t___ > 0)); }


#define WAIT_IV100_HIGH() \
    while (! READ_IV100() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV101 
    // 
#define IV101_MASK 0x4000000U
#define IV101_OFFSET 26
#define IV101_START_BIT 26
#define IV101_WIDTH 1



typedef enum iv101 {
    IV_1_0_1_0,
    IV_1_0_1_1
} IV_101_T ;
#define WRITE_IV101(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV101_MASK) | ((val << IV101_START_BIT) & IV101_MASK )); \
   } 

#define ENABLE_IV101() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV101_MASK ); \
   }

#define DISABLE_IV101() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV101_MASK ); \
   } 

#define READ_IV101() \
   ((READ_REGISTER_ULONG(0x4C) & IV101_MASK)  >> IV101_START_BIT)

#define WHEN_IV101_HIGH() \
     if ( READ_IV101() )


#define UNLESS_IV101_HIGH() \
     if (! READ_IV101() )


#define WAIT_IV101_LOW() \
    while ( READ_IV101() );


#define WAIT_IV101_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV101() && (--___t___ > 0)); }


#define WAIT_IV101_HIGH() \
    while (! READ_IV101() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV102 
    // 
#define IV102_MASK 0x2000000U
#define IV102_OFFSET 25
#define IV102_START_BIT 25
#define IV102_WIDTH 1



typedef enum iv102 {
    IV_1_0_2_0,
    IV_1_0_2_1
} IV_102_T ;
#define WRITE_IV102(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV102_MASK) | ((val << IV102_START_BIT) & IV102_MASK )); \
   } 

#define ENABLE_IV102() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV102_MASK ); \
   }

#define DISABLE_IV102() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV102_MASK ); \
   } 

#define READ_IV102() \
   ((READ_REGISTER_ULONG(0x4C) & IV102_MASK)  >> IV102_START_BIT)

#define WHEN_IV102_HIGH() \
     if ( READ_IV102() )


#define UNLESS_IV102_HIGH() \
     if (! READ_IV102() )


#define WAIT_IV102_LOW() \
    while ( READ_IV102() );


#define WAIT_IV102_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV102() && (--___t___ > 0)); }


#define WAIT_IV102_HIGH() \
    while (! READ_IV102() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV103 
    // 
#define IV103_MASK 0x1000000U
#define IV103_OFFSET 24
#define IV103_START_BIT 24
#define IV103_WIDTH 1



typedef enum iv103 {
    IV_1_0_3_0,
    IV_1_0_3_1
} IV_103_T ;
#define WRITE_IV103(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV103_MASK) | ((val << IV103_START_BIT) & IV103_MASK )); \
   } 

#define ENABLE_IV103() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV103_MASK ); \
   }

#define DISABLE_IV103() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV103_MASK ); \
   } 

#define READ_IV103() \
   ((READ_REGISTER_ULONG(0x4C) & IV103_MASK)  >> IV103_START_BIT)

#define WHEN_IV103_HIGH() \
     if ( READ_IV103() )


#define UNLESS_IV103_HIGH() \
     if (! READ_IV103() )


#define WAIT_IV103_LOW() \
    while ( READ_IV103() );


#define WAIT_IV103_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV103() && (--___t___ > 0)); }


#define WAIT_IV103_HIGH() \
    while (! READ_IV103() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV104 
    // 
#define IV104_MASK 0x800000U
#define IV104_OFFSET 23
#define IV104_START_BIT 23
#define IV104_WIDTH 1



typedef enum iv104 {
    IV_1_0_4_0,
    IV_1_0_4_1
} IV_104_T ;
#define WRITE_IV104(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV104_MASK) | ((val << IV104_START_BIT) & IV104_MASK )); \
   } 

#define ENABLE_IV104() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV104_MASK ); \
   }

#define DISABLE_IV104() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV104_MASK ); \
   } 

#define READ_IV104() \
   ((READ_REGISTER_ULONG(0x4C) & IV104_MASK)  >> IV104_START_BIT)

#define WHEN_IV104_HIGH() \
     if ( READ_IV104() )


#define UNLESS_IV104_HIGH() \
     if (! READ_IV104() )


#define WAIT_IV104_LOW() \
    while ( READ_IV104() );


#define WAIT_IV104_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV104() && (--___t___ > 0)); }


#define WAIT_IV104_HIGH() \
    while (! READ_IV104() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV105 
    // 
#define IV105_MASK 0x400000U
#define IV105_OFFSET 22
#define IV105_START_BIT 22
#define IV105_WIDTH 1



typedef enum iv105 {
    IV_1_0_5_0,
    IV_1_0_5_1
} IV_105_T ;
#define WRITE_IV105(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV105_MASK) | ((val << IV105_START_BIT) & IV105_MASK )); \
   } 

#define ENABLE_IV105() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV105_MASK ); \
   }

#define DISABLE_IV105() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV105_MASK ); \
   } 

#define READ_IV105() \
   ((READ_REGISTER_ULONG(0x4C) & IV105_MASK)  >> IV105_START_BIT)

#define WHEN_IV105_HIGH() \
     if ( READ_IV105() )


#define UNLESS_IV105_HIGH() \
     if (! READ_IV105() )


#define WAIT_IV105_LOW() \
    while ( READ_IV105() );


#define WAIT_IV105_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV105() && (--___t___ > 0)); }


#define WAIT_IV105_HIGH() \
    while (! READ_IV105() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV106 
    // 
#define IV106_MASK 0x200000U
#define IV106_OFFSET 21
#define IV106_START_BIT 21
#define IV106_WIDTH 1



typedef enum iv106 {
    IV_1_0_6_0,
    IV_1_0_6_1
} IV_106_T ;
#define WRITE_IV106(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV106_MASK) | ((val << IV106_START_BIT) & IV106_MASK )); \
   } 

#define ENABLE_IV106() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV106_MASK ); \
   }

#define DISABLE_IV106() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV106_MASK ); \
   } 

#define READ_IV106() \
   ((READ_REGISTER_ULONG(0x4C) & IV106_MASK)  >> IV106_START_BIT)

#define WHEN_IV106_HIGH() \
     if ( READ_IV106() )


#define UNLESS_IV106_HIGH() \
     if (! READ_IV106() )


#define WAIT_IV106_LOW() \
    while ( READ_IV106() );


#define WAIT_IV106_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV106() && (--___t___ > 0)); }


#define WAIT_IV106_HIGH() \
    while (! READ_IV106() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV107 
    // 
#define IV107_MASK 0x100000U
#define IV107_OFFSET 20
#define IV107_START_BIT 20
#define IV107_WIDTH 1



typedef enum iv107 {
    IV_1_0_7_0,
    IV_1_0_7_1
} IV_107_T ;
#define WRITE_IV107(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV107_MASK) | ((val << IV107_START_BIT) & IV107_MASK )); \
   } 

#define ENABLE_IV107() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV107_MASK ); \
   }

#define DISABLE_IV107() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV107_MASK ); \
   } 

#define READ_IV107() \
   ((READ_REGISTER_ULONG(0x4C) & IV107_MASK)  >> IV107_START_BIT)

#define WHEN_IV107_HIGH() \
     if ( READ_IV107() )


#define UNLESS_IV107_HIGH() \
     if (! READ_IV107() )


#define WAIT_IV107_LOW() \
    while ( READ_IV107() );


#define WAIT_IV107_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV107() && (--___t___ > 0)); }


#define WAIT_IV107_HIGH() \
    while (! READ_IV107() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV108 
    // 
#define IV108_MASK 0x80000U
#define IV108_OFFSET 19
#define IV108_START_BIT 19
#define IV108_WIDTH 1



typedef enum iv108 {
    IV_1_0_8_0,
    IV_1_0_8_1
} IV_108_T ;
#define WRITE_IV108(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV108_MASK) | ((val << IV108_START_BIT) & IV108_MASK )); \
   } 

#define ENABLE_IV108() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV108_MASK ); \
   }

#define DISABLE_IV108() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV108_MASK ); \
   } 

#define READ_IV108() \
   ((READ_REGISTER_ULONG(0x4C) & IV108_MASK)  >> IV108_START_BIT)

#define WHEN_IV108_HIGH() \
     if ( READ_IV108() )


#define UNLESS_IV108_HIGH() \
     if (! READ_IV108() )


#define WAIT_IV108_LOW() \
    while ( READ_IV108() );


#define WAIT_IV108_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV108() && (--___t___ > 0)); }


#define WAIT_IV108_HIGH() \
    while (! READ_IV108() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV109 
    // 
#define IV109_MASK 0x40000U
#define IV109_OFFSET 18
#define IV109_START_BIT 18
#define IV109_WIDTH 1



typedef enum iv109 {
    IV_1_0_9_0,
    IV_1_0_9_1
} IV_109_T ;
#define WRITE_IV109(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV109_MASK) | ((val << IV109_START_BIT) & IV109_MASK )); \
   } 

#define ENABLE_IV109() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV109_MASK ); \
   }

#define DISABLE_IV109() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV109_MASK ); \
   } 

#define READ_IV109() \
   ((READ_REGISTER_ULONG(0x4C) & IV109_MASK)  >> IV109_START_BIT)

#define WHEN_IV109_HIGH() \
     if ( READ_IV109() )


#define UNLESS_IV109_HIGH() \
     if (! READ_IV109() )


#define WAIT_IV109_LOW() \
    while ( READ_IV109() );


#define WAIT_IV109_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV109() && (--___t___ > 0)); }


#define WAIT_IV109_HIGH() \
    while (! READ_IV109() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV110 
    // 
#define IV110_MASK 0x20000U
#define IV110_OFFSET 17
#define IV110_START_BIT 17
#define IV110_WIDTH 1



typedef enum iv110 {
    IV_1_1_0_0,
    IV_1_1_0_1
} IV_110_T ;
#define WRITE_IV110(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV110_MASK) | ((val << IV110_START_BIT) & IV110_MASK )); \
   } 

#define ENABLE_IV110() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV110_MASK ); \
   }

#define DISABLE_IV110() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV110_MASK ); \
   } 

#define READ_IV110() \
   ((READ_REGISTER_ULONG(0x4C) & IV110_MASK)  >> IV110_START_BIT)

#define WHEN_IV110_HIGH() \
     if ( READ_IV110() )


#define UNLESS_IV110_HIGH() \
     if (! READ_IV110() )


#define WAIT_IV110_LOW() \
    while ( READ_IV110() );


#define WAIT_IV110_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV110() && (--___t___ > 0)); }


#define WAIT_IV110_HIGH() \
    while (! READ_IV110() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV111 
    // 
#define IV111_MASK 0x10000U
#define IV111_OFFSET 16
#define IV111_START_BIT 16
#define IV111_WIDTH 1



typedef enum iv111 {
    IV_1_1_1_0,
    IV_1_1_1_1
} IV_111_T ;
#define WRITE_IV111(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV111_MASK) | ((val << IV111_START_BIT) & IV111_MASK )); \
   } 

#define ENABLE_IV111() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV111_MASK ); \
   }

#define DISABLE_IV111() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV111_MASK ); \
   } 

#define READ_IV111() \
   ((READ_REGISTER_ULONG(0x4C) & IV111_MASK)  >> IV111_START_BIT)

#define WHEN_IV111_HIGH() \
     if ( READ_IV111() )


#define UNLESS_IV111_HIGH() \
     if (! READ_IV111() )


#define WAIT_IV111_LOW() \
    while ( READ_IV111() );


#define WAIT_IV111_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV111() && (--___t___ > 0)); }


#define WAIT_IV111_HIGH() \
    while (! READ_IV111() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV112 
    // 
#define IV112_MASK 0x8000U
#define IV112_OFFSET 15
#define IV112_START_BIT 15
#define IV112_WIDTH 1



typedef enum iv112 {
    IV_1_1_2_0,
    IV_1_1_2_1
} IV_112_T ;
#define WRITE_IV112(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV112_MASK) | ((val << IV112_START_BIT) & IV112_MASK )); \
   } 

#define ENABLE_IV112() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV112_MASK ); \
   }

#define DISABLE_IV112() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV112_MASK ); \
   } 

#define READ_IV112() \
   ((READ_REGISTER_ULONG(0x4C) & IV112_MASK)  >> IV112_START_BIT)

#define WHEN_IV112_HIGH() \
     if ( READ_IV112() )


#define UNLESS_IV112_HIGH() \
     if (! READ_IV112() )


#define WAIT_IV112_LOW() \
    while ( READ_IV112() );


#define WAIT_IV112_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV112() && (--___t___ > 0)); }


#define WAIT_IV112_HIGH() \
    while (! READ_IV112() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV113 
    // 
#define IV113_MASK 0x4000U
#define IV113_OFFSET 14
#define IV113_START_BIT 14
#define IV113_WIDTH 1



typedef enum iv113 {
    IV_1_1_3_0,
    IV_1_1_3_1
} IV_113_T ;
#define WRITE_IV113(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV113_MASK) | ((val << IV113_START_BIT) & IV113_MASK )); \
   } 

#define ENABLE_IV113() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV113_MASK ); \
   }

#define DISABLE_IV113() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV113_MASK ); \
   } 

#define READ_IV113() \
   ((READ_REGISTER_ULONG(0x4C) & IV113_MASK)  >> IV113_START_BIT)

#define WHEN_IV113_HIGH() \
     if ( READ_IV113() )


#define UNLESS_IV113_HIGH() \
     if (! READ_IV113() )


#define WAIT_IV113_LOW() \
    while ( READ_IV113() );


#define WAIT_IV113_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV113() && (--___t___ > 0)); }


#define WAIT_IV113_HIGH() \
    while (! READ_IV113() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV114 
    // 
#define IV114_MASK 0x2000U
#define IV114_OFFSET 13
#define IV114_START_BIT 13
#define IV114_WIDTH 1



typedef enum iv114 {
    IV_1_1_4_0,
    IV_1_1_4_1
} IV_114_T ;
#define WRITE_IV114(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV114_MASK) | ((val << IV114_START_BIT) & IV114_MASK )); \
   } 

#define ENABLE_IV114() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV114_MASK ); \
   }

#define DISABLE_IV114() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV114_MASK ); \
   } 

#define READ_IV114() \
   ((READ_REGISTER_ULONG(0x4C) & IV114_MASK)  >> IV114_START_BIT)

#define WHEN_IV114_HIGH() \
     if ( READ_IV114() )


#define UNLESS_IV114_HIGH() \
     if (! READ_IV114() )


#define WAIT_IV114_LOW() \
    while ( READ_IV114() );


#define WAIT_IV114_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV114() && (--___t___ > 0)); }


#define WAIT_IV114_HIGH() \
    while (! READ_IV114() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV115 
    // 
#define IV115_MASK 0x1000U
#define IV115_OFFSET 12
#define IV115_START_BIT 12
#define IV115_WIDTH 1



typedef enum iv115 {
    IV_1_1_5_0,
    IV_1_1_5_1
} IV_115_T ;
#define WRITE_IV115(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV115_MASK) | ((val << IV115_START_BIT) & IV115_MASK )); \
   } 

#define ENABLE_IV115() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV115_MASK ); \
   }

#define DISABLE_IV115() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV115_MASK ); \
   } 

#define READ_IV115() \
   ((READ_REGISTER_ULONG(0x4C) & IV115_MASK)  >> IV115_START_BIT)

#define WHEN_IV115_HIGH() \
     if ( READ_IV115() )


#define UNLESS_IV115_HIGH() \
     if (! READ_IV115() )


#define WAIT_IV115_LOW() \
    while ( READ_IV115() );


#define WAIT_IV115_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV115() && (--___t___ > 0)); }


#define WAIT_IV115_HIGH() \
    while (! READ_IV115() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV116 
    // 
#define IV116_MASK 0x800U
#define IV116_OFFSET 11
#define IV116_START_BIT 11
#define IV116_WIDTH 1



typedef enum iv116 {
    IV_1_1_6_0,
    IV_1_1_6_1
} IV_116_T ;
#define WRITE_IV116(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV116_MASK) | ((val << IV116_START_BIT) & IV116_MASK )); \
   } 

#define ENABLE_IV116() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV116_MASK ); \
   }

#define DISABLE_IV116() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV116_MASK ); \
   } 

#define READ_IV116() \
   ((READ_REGISTER_ULONG(0x4C) & IV116_MASK)  >> IV116_START_BIT)

#define WHEN_IV116_HIGH() \
     if ( READ_IV116() )


#define UNLESS_IV116_HIGH() \
     if (! READ_IV116() )


#define WAIT_IV116_LOW() \
    while ( READ_IV116() );


#define WAIT_IV116_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV116() && (--___t___ > 0)); }


#define WAIT_IV116_HIGH() \
    while (! READ_IV116() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV117 
    // 
#define IV117_MASK 0x400U
#define IV117_OFFSET 10
#define IV117_START_BIT 10
#define IV117_WIDTH 1



typedef enum iv117 {
    IV_1_1_7_0,
    IV_1_1_7_1
} IV_117_T ;
#define WRITE_IV117(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV117_MASK) | ((val << IV117_START_BIT) & IV117_MASK )); \
   } 

#define ENABLE_IV117() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV117_MASK ); \
   }

#define DISABLE_IV117() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV117_MASK ); \
   } 

#define READ_IV117() \
   ((READ_REGISTER_ULONG(0x4C) & IV117_MASK)  >> IV117_START_BIT)

#define WHEN_IV117_HIGH() \
     if ( READ_IV117() )


#define UNLESS_IV117_HIGH() \
     if (! READ_IV117() )


#define WAIT_IV117_LOW() \
    while ( READ_IV117() );


#define WAIT_IV117_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV117() && (--___t___ > 0)); }


#define WAIT_IV117_HIGH() \
    while (! READ_IV117() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV118 
    // 
#define IV118_MASK 0x200U
#define IV118_OFFSET 9
#define IV118_START_BIT 9
#define IV118_WIDTH 1



typedef enum iv118 {
    IV_1_1_8_0,
    IV_1_1_8_1
} IV_118_T ;
#define WRITE_IV118(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV118_MASK) | ((val << IV118_START_BIT) & IV118_MASK )); \
   } 

#define ENABLE_IV118() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV118_MASK ); \
   }

#define DISABLE_IV118() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV118_MASK ); \
   } 

#define READ_IV118() \
   ((READ_REGISTER_ULONG(0x4C) & IV118_MASK)  >> IV118_START_BIT)

#define WHEN_IV118_HIGH() \
     if ( READ_IV118() )


#define UNLESS_IV118_HIGH() \
     if (! READ_IV118() )


#define WAIT_IV118_LOW() \
    while ( READ_IV118() );


#define WAIT_IV118_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV118() && (--___t___ > 0)); }


#define WAIT_IV118_HIGH() \
    while (! READ_IV118() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV119 
    // 
#define IV119_MASK 0x100U
#define IV119_OFFSET 8
#define IV119_START_BIT 8
#define IV119_WIDTH 1



typedef enum iv119 {
    IV_1_1_9_0,
    IV_1_1_9_1
} IV_119_T ;
#define WRITE_IV119(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV119_MASK) | ((val << IV119_START_BIT) & IV119_MASK )); \
   } 

#define ENABLE_IV119() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV119_MASK ); \
   }

#define DISABLE_IV119() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV119_MASK ); \
   } 

#define READ_IV119() \
   ((READ_REGISTER_ULONG(0x4C) & IV119_MASK)  >> IV119_START_BIT)

#define WHEN_IV119_HIGH() \
     if ( READ_IV119() )


#define UNLESS_IV119_HIGH() \
     if (! READ_IV119() )


#define WAIT_IV119_LOW() \
    while ( READ_IV119() );


#define WAIT_IV119_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV119() && (--___t___ > 0)); }


#define WAIT_IV119_HIGH() \
    while (! READ_IV119() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV120 
    // 
#define IV120_MASK 0x80U
#define IV120_OFFSET 7
#define IV120_START_BIT 7
#define IV120_WIDTH 1



typedef enum iv120 {
    IV_1_2_0_0,
    IV_1_2_0_1
} IV_120_T ;
#define WRITE_IV120(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV120_MASK) | ((val << IV120_START_BIT) & IV120_MASK )); \
   } 

#define ENABLE_IV120() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV120_MASK ); \
   }

#define DISABLE_IV120() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV120_MASK ); \
   } 

#define READ_IV120() \
   ((READ_REGISTER_ULONG(0x4C) & IV120_MASK)  >> IV120_START_BIT)

#define WHEN_IV120_HIGH() \
     if ( READ_IV120() )


#define UNLESS_IV120_HIGH() \
     if (! READ_IV120() )


#define WAIT_IV120_LOW() \
    while ( READ_IV120() );


#define WAIT_IV120_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV120() && (--___t___ > 0)); }


#define WAIT_IV120_HIGH() \
    while (! READ_IV120() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV121 
    // 
#define IV121_MASK 0x40U
#define IV121_OFFSET 6
#define IV121_START_BIT 6
#define IV121_WIDTH 1



typedef enum iv121 {
    IV_1_2_1_0,
    IV_1_2_1_1
} IV_121_T ;
#define WRITE_IV121(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV121_MASK) | ((val << IV121_START_BIT) & IV121_MASK )); \
   } 

#define ENABLE_IV121() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV121_MASK ); \
   }

#define DISABLE_IV121() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV121_MASK ); \
   } 

#define READ_IV121() \
   ((READ_REGISTER_ULONG(0x4C) & IV121_MASK)  >> IV121_START_BIT)

#define WHEN_IV121_HIGH() \
     if ( READ_IV121() )


#define UNLESS_IV121_HIGH() \
     if (! READ_IV121() )


#define WAIT_IV121_LOW() \
    while ( READ_IV121() );


#define WAIT_IV121_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV121() && (--___t___ > 0)); }


#define WAIT_IV121_HIGH() \
    while (! READ_IV121() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV122 
    // 
#define IV122_MASK 0x20U
#define IV122_OFFSET 5
#define IV122_START_BIT 5
#define IV122_WIDTH 1



typedef enum iv122 {
    IV_1_2_2_0,
    IV_1_2_2_1
} IV_122_T ;
#define WRITE_IV122(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV122_MASK) | ((val << IV122_START_BIT) & IV122_MASK )); \
   } 

#define ENABLE_IV122() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV122_MASK ); \
   }

#define DISABLE_IV122() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV122_MASK ); \
   } 

#define READ_IV122() \
   ((READ_REGISTER_ULONG(0x4C) & IV122_MASK)  >> IV122_START_BIT)

#define WHEN_IV122_HIGH() \
     if ( READ_IV122() )


#define UNLESS_IV122_HIGH() \
     if (! READ_IV122() )


#define WAIT_IV122_LOW() \
    while ( READ_IV122() );


#define WAIT_IV122_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV122() && (--___t___ > 0)); }


#define WAIT_IV122_HIGH() \
    while (! READ_IV122() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV123 
    // 
#define IV123_MASK 0x10U
#define IV123_OFFSET 4
#define IV123_START_BIT 4
#define IV123_WIDTH 1



typedef enum iv123 {
    IV_1_2_3_0,
    IV_1_2_3_1
} IV_123_T ;
#define WRITE_IV123(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV123_MASK) | ((val << IV123_START_BIT) & IV123_MASK )); \
   } 

#define ENABLE_IV123() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV123_MASK ); \
   }

#define DISABLE_IV123() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV123_MASK ); \
   } 

#define READ_IV123() \
   ((READ_REGISTER_ULONG(0x4C) & IV123_MASK)  >> IV123_START_BIT)

#define WHEN_IV123_HIGH() \
     if ( READ_IV123() )


#define UNLESS_IV123_HIGH() \
     if (! READ_IV123() )


#define WAIT_IV123_LOW() \
    while ( READ_IV123() );


#define WAIT_IV123_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV123() && (--___t___ > 0)); }


#define WAIT_IV123_HIGH() \
    while (! READ_IV123() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV124 
    // 
#define IV124_MASK 0x8U
#define IV124_OFFSET 3
#define IV124_START_BIT 3
#define IV124_WIDTH 1



typedef enum iv124 {
    IV_1_2_4_0,
    IV_1_2_4_1
} IV_124_T ;
#define WRITE_IV124(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV124_MASK) | ((val << IV124_START_BIT) & IV124_MASK )); \
   } 

#define ENABLE_IV124() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV124_MASK ); \
   }

#define DISABLE_IV124() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV124_MASK ); \
   } 

#define READ_IV124() \
   ((READ_REGISTER_ULONG(0x4C) & IV124_MASK)  >> IV124_START_BIT)

#define WHEN_IV124_HIGH() \
     if ( READ_IV124() )


#define UNLESS_IV124_HIGH() \
     if (! READ_IV124() )


#define WAIT_IV124_LOW() \
    while ( READ_IV124() );


#define WAIT_IV124_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV124() && (--___t___ > 0)); }


#define WAIT_IV124_HIGH() \
    while (! READ_IV124() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV125 
    // 
#define IV125_MASK 0x4U
#define IV125_OFFSET 2
#define IV125_START_BIT 2
#define IV125_WIDTH 1



typedef enum iv125 {
    IV_1_2_5_0,
    IV_1_2_5_1
} IV_125_T ;
#define WRITE_IV125(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV125_MASK) | ((val << IV125_START_BIT) & IV125_MASK )); \
   } 

#define ENABLE_IV125() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV125_MASK ); \
   }

#define DISABLE_IV125() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV125_MASK ); \
   } 

#define READ_IV125() \
   ((READ_REGISTER_ULONG(0x4C) & IV125_MASK)  >> IV125_START_BIT)

#define WHEN_IV125_HIGH() \
     if ( READ_IV125() )


#define UNLESS_IV125_HIGH() \
     if (! READ_IV125() )


#define WAIT_IV125_LOW() \
    while ( READ_IV125() );


#define WAIT_IV125_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV125() && (--___t___ > 0)); }


#define WAIT_IV125_HIGH() \
    while (! READ_IV125() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV126 
    // 
#define IV126_MASK 0x2U
#define IV126_OFFSET 1
#define IV126_START_BIT 1
#define IV126_WIDTH 1



typedef enum iv126 {
    IV_1_2_6_0,
    IV_1_2_6_1
} IV_126_T ;
#define WRITE_IV126(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV126_MASK) | ((val << IV126_START_BIT) & IV126_MASK )); \
   } 

#define ENABLE_IV126() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV126_MASK ); \
   }

#define DISABLE_IV126() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV126_MASK ); \
   } 

#define READ_IV126() \
   ((READ_REGISTER_ULONG(0x4C) & IV126_MASK)  >> IV126_START_BIT)

#define WHEN_IV126_HIGH() \
     if ( READ_IV126() )


#define UNLESS_IV126_HIGH() \
     if (! READ_IV126() )


#define WAIT_IV126_LOW() \
    while ( READ_IV126() );


#define WAIT_IV126_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV126() && (--___t___ > 0)); }


#define WAIT_IV126_HIGH() \
    while (! READ_IV126() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Iv1rr
//
// Return the value of register IV_1RR
//
// Notes : Register initialization vector registers (IV1RR) at the offset 0x4C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IV127 
    // 
#define IV127_MASK 0x1U
#define IV127_OFFSET 0
#define IV127_START_BIT 0
#define IV127_WIDTH 1



typedef enum iv127 {
    IV_1_2_7_0,
    IV_1_2_7_1
} IV_127_T ;
#define WRITE_IV127(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ IV127_MASK) | ((val << IV127_START_BIT) & IV127_MASK )); \
   } 

#define ENABLE_IV127() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  IV127_MASK ); \
   }

#define DISABLE_IV127() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~IV127_MASK ); \
   } 

#define READ_IV127() \
   ((READ_REGISTER_ULONG(0x4C) & IV127_MASK)  >> IV127_START_BIT)

#define WHEN_IV127_HIGH() \
     if ( READ_IV127() )


#define UNLESS_IV127_HIGH() \
     if (! READ_IV127() )


#define WAIT_IV127_LOW() \
    while ( READ_IV127() );


#define WAIT_IV127_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IV127() && (--___t___ > 0)); }


#define WAIT_IV127_HIGH() \
    while (! READ_IV127() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm0r
//
// Return the value of register CSGCMCCM0R
//
// Notes : Register Csgcmccm0r at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_0R( y) \
     WRITE_REGISTER_ULONG( 0x50 , y)

#define SET_BITS_CSGCMCCM_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_0R() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm0r
//
// Return the value of register CSGCMCCM_0R
//
// Notes : Register context swap register (CSGCMCCM0R) at the offset 0x50, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM0R 
    // 
#define CSGCMCCM0R_MASK 0xFFFFFFFFU
#define CSGCMCCM0R_OFFSET 31
#define CSGCMCCM0R_START_BIT 0
#define CSGCMCCM0R_WIDTH 32


#define CSGCMCCM_0R_REG 0x50

typedef enum csgcmccm0r {
    CSGCMCCM_0R_0,
    CSGCMCCM_0R_1
} CSGCMCCM_0R_T ;
#define READ_CSGCMCCM0R() \
   ((READ_REGISTER_ULONG(0x50) & CSGCMCCM0R_MASK)  >> CSGCMCCM0R_START_BIT)

#define WRITE_CSGCMCCM0R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ CSGCMCCM0R_MASK) | ((val << CSGCMCCM0R_START_BIT) & CSGCMCCM0R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm1r
//
// Return the value of register CSGCMCCM1R
//
// Notes : Register Csgcmccm1r at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_1R( y) \
     WRITE_REGISTER_ULONG( 0x54 , y)

#define SET_BITS_CSGCMCCM_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_1R() \
     READ_REGISTER_ULONG(0x54)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm1r
//
// Return the value of register CSGCMCCM_1R
//
// Notes : Register context swap register (CSGCMCCM1R) at the offset 0x54, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM1R 
    // 
#define CSGCMCCM1R_MASK 0xFFFFFFFFU
#define CSGCMCCM1R_OFFSET 31
#define CSGCMCCM1R_START_BIT 0
#define CSGCMCCM1R_WIDTH 32


#define CSGCMCCM_1R_REG 0x54

typedef enum csgcmccm1r {
    CSGCMCCM_1R_0,
    CSGCMCCM_1R_1
} CSGCMCCM_1R_T ;
#define READ_CSGCMCCM1R() \
   ((READ_REGISTER_ULONG(0x54) & CSGCMCCM1R_MASK)  >> CSGCMCCM1R_START_BIT)

#define WRITE_CSGCMCCM1R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ CSGCMCCM1R_MASK) | ((val << CSGCMCCM1R_START_BIT) & CSGCMCCM1R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm2r
//
// Return the value of register CSGCMCCM2R
//
// Notes : Register Csgcmccm2r at offset 0x58
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_2R( y) \
     WRITE_REGISTER_ULONG( 0x58 , y)

#define SET_BITS_CSGCMCCM_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_2R() \
     READ_REGISTER_ULONG(0x58)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm2r
//
// Return the value of register CSGCMCCM_2R
//
// Notes : Register context swap register (CSGCMCCM2R) at the offset 0x58, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM2R 
    // 
#define CSGCMCCM2R_MASK 0xFFFFFFFFU
#define CSGCMCCM2R_OFFSET 31
#define CSGCMCCM2R_START_BIT 0
#define CSGCMCCM2R_WIDTH 32


#define CSGCMCCM_2R_REG 0x58

typedef enum csgcmccm2r {
    CSGCMCCM_2R_0,
    CSGCMCCM_2R_1
} CSGCMCCM_2R_T ;
#define READ_CSGCMCCM2R() \
   ((READ_REGISTER_ULONG(0x58) & CSGCMCCM2R_MASK)  >> CSGCMCCM2R_START_BIT)

#define WRITE_CSGCMCCM2R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ CSGCMCCM2R_MASK) | ((val << CSGCMCCM2R_START_BIT) & CSGCMCCM2R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm3r
//
// Return the value of register CSGCMCCM3R
//
// Notes : Register Csgcmccm3r at offset 0x5C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_3R( y) \
     WRITE_REGISTER_ULONG( 0x5C , y)

#define SET_BITS_CSGCMCCM_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x5C); \
     WRITE_REGISTER_ULONG( 0x5C , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x5C); \
     WRITE_REGISTER_ULONG( 0x5C , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_3R() \
     READ_REGISTER_ULONG(0x5C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm3r
//
// Return the value of register CSGCMCCM_3R
//
// Notes : Register context swap register (CSGCMCCM3R) at the offset 0x5C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM3R 
    // 
#define CSGCMCCM3R_MASK 0xFFFFFFFFU
#define CSGCMCCM3R_OFFSET 31
#define CSGCMCCM3R_START_BIT 0
#define CSGCMCCM3R_WIDTH 32


#define CSGCMCCM_3R_REG 0x5C

typedef enum csgcmccm3r {
    CSGCMCCM_3R_0,
    CSGCMCCM_3R_1
} CSGCMCCM_3R_T ;
#define READ_CSGCMCCM3R() \
   ((READ_REGISTER_ULONG(0x5C) & CSGCMCCM3R_MASK)  >> CSGCMCCM3R_START_BIT)

#define WRITE_CSGCMCCM3R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x5C); \
     WRITE_REGISTER_ULONG(0x5C, (OldValue & ~ CSGCMCCM3R_MASK) | ((val << CSGCMCCM3R_START_BIT) & CSGCMCCM3R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm4r
//
// Return the value of register CSGCMCCM4R
//
// Notes : Register Csgcmccm4r at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_4R( y) \
     WRITE_REGISTER_ULONG( 0x60 , y)

#define SET_BITS_CSGCMCCM_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_4R() \
     READ_REGISTER_ULONG(0x60)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm4r
//
// Return the value of register CSGCMCCM_4R
//
// Notes : Register context swap register (CSGCMCCM4R) at the offset 0x60, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM4R 
    // 
#define CSGCMCCM4R_MASK 0xFFFFFFFFU
#define CSGCMCCM4R_OFFSET 31
#define CSGCMCCM4R_START_BIT 0
#define CSGCMCCM4R_WIDTH 32


#define CSGCMCCM_4R_REG 0x60

typedef enum csgcmccm4r {
    CSGCMCCM_4R_0,
    CSGCMCCM_4R_1
} CSGCMCCM_4R_T ;
#define READ_CSGCMCCM4R() \
   ((READ_REGISTER_ULONG(0x60) & CSGCMCCM4R_MASK)  >> CSGCMCCM4R_START_BIT)

#define WRITE_CSGCMCCM4R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ CSGCMCCM4R_MASK) | ((val << CSGCMCCM4R_START_BIT) & CSGCMCCM4R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm5r
//
// Return the value of register CSGCMCCM5R
//
// Notes : Register Csgcmccm5r at offset 0x64
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_5R( y) \
     WRITE_REGISTER_ULONG( 0x64 , y)

#define SET_BITS_CSGCMCCM_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_5R() \
     READ_REGISTER_ULONG(0x64)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm5r
//
// Return the value of register CSGCMCCM_5R
//
// Notes : Register context swap register (CSGCMCCM5R) at the offset 0x64, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM5R 
    // 
#define CSGCMCCM5R_MASK 0xFFFFFFFFU
#define CSGCMCCM5R_OFFSET 31
#define CSGCMCCM5R_START_BIT 0
#define CSGCMCCM5R_WIDTH 32


#define CSGCMCCM_5R_REG 0x64

typedef enum csgcmccm5r {
    CSGCMCCM_5R_0,
    CSGCMCCM_5R_1
} CSGCMCCM_5R_T ;
#define READ_CSGCMCCM5R() \
   ((READ_REGISTER_ULONG(0x64) & CSGCMCCM5R_MASK)  >> CSGCMCCM5R_START_BIT)

#define WRITE_CSGCMCCM5R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ CSGCMCCM5R_MASK) | ((val << CSGCMCCM5R_START_BIT) & CSGCMCCM5R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm6r
//
// Return the value of register CSGCMCCM6R
//
// Notes : Register Csgcmccm6r at offset 0x68
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_6R( y) \
     WRITE_REGISTER_ULONG( 0x68 , y)

#define SET_BITS_CSGCMCCM_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x68); \
     WRITE_REGISTER_ULONG( 0x68 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x68); \
     WRITE_REGISTER_ULONG( 0x68 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_6R() \
     READ_REGISTER_ULONG(0x68)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm6r
//
// Return the value of register CSGCMCCM_6R
//
// Notes : Register context swap register (CSGCMCCM6R) at the offset 0x68, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM6R 
    // 
#define CSGCMCCM6R_MASK 0xFFFFFFFFU
#define CSGCMCCM6R_OFFSET 31
#define CSGCMCCM6R_START_BIT 0
#define CSGCMCCM6R_WIDTH 32


#define CSGCMCCM_6R_REG 0x68

typedef enum csgcmccm6r {
    CSGCMCCM_6R_0,
    CSGCMCCM_6R_1
} CSGCMCCM_6R_T ;
#define READ_CSGCMCCM6R() \
   ((READ_REGISTER_ULONG(0x68) & CSGCMCCM6R_MASK)  >> CSGCMCCM6R_START_BIT)

#define WRITE_CSGCMCCM6R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x68); \
     WRITE_REGISTER_ULONG(0x68, (OldValue & ~ CSGCMCCM6R_MASK) | ((val << CSGCMCCM6R_START_BIT) & CSGCMCCM6R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm7r
//
// Return the value of register CSGCMCCM7R
//
// Notes : Register Csgcmccm7r at offset 0x6C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCMCCM_7R( y) \
     WRITE_REGISTER_ULONG( 0x6C , y)

#define SET_BITS_CSGCMCCM_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x6C); \
     WRITE_REGISTER_ULONG( 0x6C , val |  mask ); \
   }

#define CLEAR_BITS_CSGCMCCM_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x6C); \
     WRITE_REGISTER_ULONG( 0x6C , val & ~mask ); \
   }

#define READ_REGISTER_CSGCMCCM_7R() \
     READ_REGISTER_ULONG(0x6C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcmccm7r
//
// Return the value of register CSGCMCCM_7R
//
// Notes : Register context swap register (CSGCMCCM7R) at the offset 0x6C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCMCCM7R 
    // 
#define CSGCMCCM7R_MASK 0xFFFFFFFFU
#define CSGCMCCM7R_OFFSET 31
#define CSGCMCCM7R_START_BIT 0
#define CSGCMCCM7R_WIDTH 32


#define CSGCMCCM_7R_REG 0x6C

typedef enum csgcmccm7r {
    CSGCMCCM_7R_0,
    CSGCMCCM_7R_1
} CSGCMCCM_7R_T ;
#define READ_CSGCMCCM7R() \
   ((READ_REGISTER_ULONG(0x6C) & CSGCMCCM7R_MASK)  >> CSGCMCCM7R_START_BIT)

#define WRITE_CSGCMCCM7R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x6C); \
     WRITE_REGISTER_ULONG(0x6C, (OldValue & ~ CSGCMCCM7R_MASK) | ((val << CSGCMCCM7R_START_BIT) & CSGCMCCM7R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm0r
//
// Return the value of register CSGCM0R
//
// Notes : Register Csgcm0r at offset 0x70
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_0R( y) \
     WRITE_REGISTER_ULONG( 0x70 , y)

#define SET_BITS_CSGCM_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_0R() \
     READ_REGISTER_ULONG(0x70)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm0r
//
// Return the value of register CSGCM_0R
//
// Notes : Register context swap register (CSGCM0R) at the offset 0x70, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM0R 
    // 
#define CSGCM0R_MASK 0xFFFFFFFFU
#define CSGCM0R_OFFSET 31
#define CSGCM0R_START_BIT 0
#define CSGCM0R_WIDTH 32


#define CSGCM_0R_REG 0x70

typedef enum csgcm0r {
    CSGCM_0R_0,
    CSGCM_0R_1
} CSGCM_0R_T ;
#define READ_CSGCM0R() \
   ((READ_REGISTER_ULONG(0x70) & CSGCM0R_MASK)  >> CSGCM0R_START_BIT)

#define WRITE_CSGCM0R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ CSGCM0R_MASK) | ((val << CSGCM0R_START_BIT) & CSGCM0R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm1r
//
// Return the value of register CSGCM1R
//
// Notes : Register Csgcm1r at offset 0x74
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_1R( y) \
     WRITE_REGISTER_ULONG( 0x74 , y)

#define SET_BITS_CSGCM_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_1R() \
     READ_REGISTER_ULONG(0x74)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm1r
//
// Return the value of register CSGCM_1R
//
// Notes : Register context swap register (CSGCM1R) at the offset 0x74, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM1R 
    // 
#define CSGCM1R_MASK 0xFFFFFFFFU
#define CSGCM1R_OFFSET 31
#define CSGCM1R_START_BIT 0
#define CSGCM1R_WIDTH 32


#define CSGCM_1R_REG 0x74

typedef enum csgcm1r {
    CSGCM_1R_0,
    CSGCM_1R_1
} CSGCM_1R_T ;
#define READ_CSGCM1R() \
   ((READ_REGISTER_ULONG(0x74) & CSGCM1R_MASK)  >> CSGCM1R_START_BIT)

#define WRITE_CSGCM1R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ CSGCM1R_MASK) | ((val << CSGCM1R_START_BIT) & CSGCM1R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm2r
//
// Return the value of register CSGCM2R
//
// Notes : Register Csgcm2r at offset 0x78
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_2R( y) \
     WRITE_REGISTER_ULONG( 0x78 , y)

#define SET_BITS_CSGCM_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x78); \
     WRITE_REGISTER_ULONG( 0x78 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x78); \
     WRITE_REGISTER_ULONG( 0x78 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_2R() \
     READ_REGISTER_ULONG(0x78)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm2r
//
// Return the value of register CSGCM_2R
//
// Notes : Register context swap register (CSGCM2R) at the offset 0x78, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM2R 
    // 
#define CSGCM2R_MASK 0xFFFFFFFFU
#define CSGCM2R_OFFSET 31
#define CSGCM2R_START_BIT 0
#define CSGCM2R_WIDTH 32


#define CSGCM_2R_REG 0x78

typedef enum csgcm2r {
    CSGCM_2R_0,
    CSGCM_2R_1
} CSGCM_2R_T ;
#define READ_CSGCM2R() \
   ((READ_REGISTER_ULONG(0x78) & CSGCM2R_MASK)  >> CSGCM2R_START_BIT)

#define WRITE_CSGCM2R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x78); \
     WRITE_REGISTER_ULONG(0x78, (OldValue & ~ CSGCM2R_MASK) | ((val << CSGCM2R_START_BIT) & CSGCM2R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm3r
//
// Return the value of register CSGCM3R
//
// Notes : Register Csgcm3r at offset 0x7C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_3R( y) \
     WRITE_REGISTER_ULONG( 0x7C , y)

#define SET_BITS_CSGCM_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x7C); \
     WRITE_REGISTER_ULONG( 0x7C , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x7C); \
     WRITE_REGISTER_ULONG( 0x7C , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_3R() \
     READ_REGISTER_ULONG(0x7C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm3r
//
// Return the value of register CSGCM_3R
//
// Notes : Register context swap register (CSGCM3R) at the offset 0x7C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM3R 
    // 
#define CSGCM3R_MASK 0xFFFFFFFFU
#define CSGCM3R_OFFSET 31
#define CSGCM3R_START_BIT 0
#define CSGCM3R_WIDTH 32


#define CSGCM_3R_REG 0x7C

typedef enum csgcm3r {
    CSGCM_3R_0,
    CSGCM_3R_1
} CSGCM_3R_T ;
#define READ_CSGCM3R() \
   ((READ_REGISTER_ULONG(0x7C) & CSGCM3R_MASK)  >> CSGCM3R_START_BIT)

#define WRITE_CSGCM3R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x7C); \
     WRITE_REGISTER_ULONG(0x7C, (OldValue & ~ CSGCM3R_MASK) | ((val << CSGCM3R_START_BIT) & CSGCM3R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm4r
//
// Return the value of register CSGCM4R
//
// Notes : Register Csgcm4r at offset 0x80
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_4R( y) \
     WRITE_REGISTER_ULONG( 0x80 , y)

#define SET_BITS_CSGCM_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_4R() \
     READ_REGISTER_ULONG(0x80)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm4r
//
// Return the value of register CSGCM_4R
//
// Notes : Register context swap register (CSGCM4R) at the offset 0x80, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM4R 
    // 
#define CSGCM4R_MASK 0xFFFFFFFFU
#define CSGCM4R_OFFSET 31
#define CSGCM4R_START_BIT 0
#define CSGCM4R_WIDTH 32


#define CSGCM_4R_REG 0x80

typedef enum csgcm4r {
    CSGCM_4R_0,
    CSGCM_4R_1
} CSGCM_4R_T ;
#define READ_CSGCM4R() \
   ((READ_REGISTER_ULONG(0x80) & CSGCM4R_MASK)  >> CSGCM4R_START_BIT)

#define WRITE_CSGCM4R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ CSGCM4R_MASK) | ((val << CSGCM4R_START_BIT) & CSGCM4R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm5r
//
// Return the value of register CSGCM5R
//
// Notes : Register Csgcm5r at offset 0x84
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_5R( y) \
     WRITE_REGISTER_ULONG( 0x84 , y)

#define SET_BITS_CSGCM_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_5R() \
     READ_REGISTER_ULONG(0x84)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm5r
//
// Return the value of register CSGCM_5R
//
// Notes : Register context swap register (CSGCM5R) at the offset 0x84, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM5R 
    // 
#define CSGCM5R_MASK 0xFFFFFFFFU
#define CSGCM5R_OFFSET 31
#define CSGCM5R_START_BIT 0
#define CSGCM5R_WIDTH 32


#define CSGCM_5R_REG 0x84

typedef enum csgcm5r {
    CSGCM_5R_0,
    CSGCM_5R_1
} CSGCM_5R_T ;
#define READ_CSGCM5R() \
   ((READ_REGISTER_ULONG(0x84) & CSGCM5R_MASK)  >> CSGCM5R_START_BIT)

#define WRITE_CSGCM5R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ CSGCM5R_MASK) | ((val << CSGCM5R_START_BIT) & CSGCM5R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm6r
//
// Return the value of register CSGCM6R
//
// Notes : Register Csgcm6r at offset 0x88
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_6R( y) \
     WRITE_REGISTER_ULONG( 0x88 , y)

#define SET_BITS_CSGCM_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_6R() \
     READ_REGISTER_ULONG(0x88)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm6r
//
// Return the value of register CSGCM_6R
//
// Notes : Register context swap register (CSGCM6R) at the offset 0x88, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM6R 
    // 
#define CSGCM6R_MASK 0xFFFFFFFFU
#define CSGCM6R_OFFSET 31
#define CSGCM6R_START_BIT 0
#define CSGCM6R_WIDTH 32


#define CSGCM_6R_REG 0x88

typedef enum csgcm6r {
    CSGCM_6R_0,
    CSGCM_6R_1
} CSGCM_6R_T ;
#define READ_CSGCM6R() \
   ((READ_REGISTER_ULONG(0x88) & CSGCM6R_MASK)  >> CSGCM6R_START_BIT)

#define WRITE_CSGCM6R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ CSGCM6R_MASK) | ((val << CSGCM6R_START_BIT) & CSGCM6R_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm7r
//
// Return the value of register CSGCM7R
//
// Notes : Register Csgcm7r at offset 0x8C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CSGCM_7R( y) \
     WRITE_REGISTER_ULONG( 0x8C , y)

#define SET_BITS_CSGCM_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val |  mask ); \
   }

#define CLEAR_BITS_CSGCM_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val & ~mask ); \
   }

#define READ_REGISTER_CSGCM_7R() \
     READ_REGISTER_ULONG(0x8C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Csgcm7r
//
// Return the value of register CSGCM_7R
//
// Notes : Register context swap register (CSGCM7R) at the offset 0x8C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CSGCM7R 
    // 
#define CSGCM7R_MASK 0xFFFFFFFFU
#define CSGCM7R_OFFSET 31
#define CSGCM7R_START_BIT 0
#define CSGCM7R_WIDTH 32


#define CSGCM_7R_REG 0x8C

typedef enum csgcm7r {
    CSGCM_7R_0,
    CSGCM_7R_1
} CSGCM_7R_T ;
#define READ_CSGCM7R() \
   ((READ_REGISTER_ULONG(0x8C) & CSGCM7R_MASK)  >> CSGCM7R_START_BIT)

#define WRITE_CSGCM7R(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ CSGCM7R_MASK) | ((val << CSGCM7R_START_BIT) & CSGCM7R_MASK )); \
   } 

