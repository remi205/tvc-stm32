/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/dac.h
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
 
#define DAC 0x40007400
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
// Function : EN1
//
// Return the value of register Cr
//
// Notes : DAC channel1 enable 
//        (CR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EN1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EN1_MASK) | ((val << EN1_START_BIT) & EN1_MASK )); \
   } 

#define ENABLE_EN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EN1_MASK ); \
   }

#define DISABLE_EN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EN1_MASK ); \
   } 

#define READ_EN1() \
   ((READ_REGISTER_ULONG(0x0) & EN1_MASK)  >> EN1_START_BIT)

#define WHEN_EN1_HIGH() \
     if ( READ_EN1() )


#define UNLESS_EN1_HIGH() \
     if (! READ_EN1() )


#define WAIT_EN1_LOW() \
    while ( READ_EN1() );


#define WAIT_EN1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN1() && (--___t___ > 0)); }


#define WAIT_EN1_HIGH() \
    while (! READ_EN1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BOFF1
//
// Return the value of register Cr
//
// Notes : DAC channel1 output buffer disable 
//        (CR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BOFF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BOFF1_MASK) | ((val << BOFF1_START_BIT) & BOFF1_MASK )); \
   } 

#define ENABLE_BOFF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  BOFF1_MASK ); \
   }

#define DISABLE_BOFF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~BOFF1_MASK ); \
   } 

#define READ_BOFF1() \
   ((READ_REGISTER_ULONG(0x0) & BOFF1_MASK)  >> BOFF1_START_BIT)

#define WHEN_BOFF1_HIGH() \
     if ( READ_BOFF1() )


#define UNLESS_BOFF1_HIGH() \
     if (! READ_BOFF1() )


#define WAIT_BOFF1_LOW() \
    while ( READ_BOFF1() );


#define WAIT_BOFF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BOFF1() && (--___t___ > 0)); }


#define WAIT_BOFF1_HIGH() \
    while (! READ_BOFF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TEN1
//
// Return the value of register Cr
//
// Notes : DAC channel1 trigger enable 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TEN1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TEN1_MASK) | ((val << TEN1_START_BIT) & TEN1_MASK )); \
   } 

#define ENABLE_TEN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TEN1_MASK ); \
   }

#define DISABLE_TEN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TEN1_MASK ); \
   } 

#define READ_TEN1() \
   ((READ_REGISTER_ULONG(0x0) & TEN1_MASK)  >> TEN1_START_BIT)

#define WHEN_TEN1_HIGH() \
     if ( READ_TEN1() )


#define UNLESS_TEN1_HIGH() \
     if (! READ_TEN1() )


#define WAIT_TEN1_LOW() \
    while ( READ_TEN1() );


#define WAIT_TEN1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEN1() && (--___t___ > 0)); }


#define WAIT_TEN1_HIGH() \
    while (! READ_TEN1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TSEL1
//
// Return the value of register Cr
//
// Notes : DAC channel1 trigger selection 
//        (CR) at the offset 0x0, Bits 3:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_TSEL1() \
   ((READ_REGISTER_ULONG(0x0) & TSEL1_MASK)  >> TSEL1_START_BIT)

#define WRITE_TSEL1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSEL1_MASK) | ((val << TSEL1_START_BIT) & TSEL1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : WAVE1
//
// Return the value of register Cr
//
// Notes : DAC channel1 noise/triangle wave generation enable 
//        (CR) at the offset 0x0, Bits 6:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_WAVE1() \
   ((READ_REGISTER_ULONG(0x0) & WAVE1_MASK)  >> WAVE1_START_BIT)

#define WRITE_WAVE1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WAVE1_MASK) | ((val << WAVE1_START_BIT) & WAVE1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MAMP1
//
// Return the value of register Cr
//
// Notes : DAC channel1 mask/amplitude selector 
//        (CR) at the offset 0x0, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_MAMP1() \
   ((READ_REGISTER_ULONG(0x0) & MAMP1_MASK)  >> MAMP1_START_BIT)

#define WRITE_MAMP1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MAMP1_MASK) | ((val << MAMP1_START_BIT) & MAMP1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DMAEN1
//
// Return the value of register Cr
//
// Notes : DAC channel1 DMA enable 
//        (CR) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAEN1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DMAEN1_MASK) | ((val << DMAEN1_START_BIT) & DMAEN1_MASK )); \
   } 

#define ENABLE_DMAEN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DMAEN1_MASK ); \
   }

#define DISABLE_DMAEN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DMAEN1_MASK ); \
   } 

#define READ_DMAEN1() \
   ((READ_REGISTER_ULONG(0x0) & DMAEN1_MASK)  >> DMAEN1_START_BIT)

#define WHEN_DMAEN1_HIGH() \
     if ( READ_DMAEN1() )


#define UNLESS_DMAEN1_HIGH() \
     if (! READ_DMAEN1() )


#define WAIT_DMAEN1_LOW() \
    while ( READ_DMAEN1() );


#define WAIT_DMAEN1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAEN1() && (--___t___ > 0)); }


#define WAIT_DMAEN1_HIGH() \
    while (! READ_DMAEN1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMAUDRIE1
//
// Return the value of register Cr
//
// Notes : DAC channel1 DMA Underrun Interrupt enable 
//        (CR) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAUDRIE1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DMAUDRIE1_MASK) | ((val << DMAUDRIE1_START_BIT) & DMAUDRIE1_MASK )); \
   } 

#define ENABLE_DMAUDRIE1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DMAUDRIE1_MASK ); \
   }

#define DISABLE_DMAUDRIE1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DMAUDRIE1_MASK ); \
   } 

#define READ_DMAUDRIE1() \
   ((READ_REGISTER_ULONG(0x0) & DMAUDRIE1_MASK)  >> DMAUDRIE1_START_BIT)

#define WHEN_DMAUDRIE1_HIGH() \
     if ( READ_DMAUDRIE1() )


#define UNLESS_DMAUDRIE1_HIGH() \
     if (! READ_DMAUDRIE1() )


#define WAIT_DMAUDRIE1_LOW() \
    while ( READ_DMAUDRIE1() );


#define WAIT_DMAUDRIE1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAUDRIE1() && (--___t___ > 0)); }


#define WAIT_DMAUDRIE1_HIGH() \
    while (! READ_DMAUDRIE1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EN2
//
// Return the value of register Cr
//
// Notes : DAC channel2 enable 
//        (CR) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EN2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EN2_MASK) | ((val << EN2_START_BIT) & EN2_MASK )); \
   } 

#define ENABLE_EN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EN2_MASK ); \
   }

#define DISABLE_EN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EN2_MASK ); \
   } 

#define READ_EN2() \
   ((READ_REGISTER_ULONG(0x0) & EN2_MASK)  >> EN2_START_BIT)

#define WHEN_EN2_HIGH() \
     if ( READ_EN2() )


#define UNLESS_EN2_HIGH() \
     if (! READ_EN2() )


#define WAIT_EN2_LOW() \
    while ( READ_EN2() );


#define WAIT_EN2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN2() && (--___t___ > 0)); }


#define WAIT_EN2_HIGH() \
    while (! READ_EN2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BOFF2
//
// Return the value of register Cr
//
// Notes : DAC channel2 output buffer disable 
//        (CR) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BOFF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BOFF2_MASK) | ((val << BOFF2_START_BIT) & BOFF2_MASK )); \
   } 

#define ENABLE_BOFF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  BOFF2_MASK ); \
   }

#define DISABLE_BOFF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~BOFF2_MASK ); \
   } 

#define READ_BOFF2() \
   ((READ_REGISTER_ULONG(0x0) & BOFF2_MASK)  >> BOFF2_START_BIT)

#define WHEN_BOFF2_HIGH() \
     if ( READ_BOFF2() )


#define UNLESS_BOFF2_HIGH() \
     if (! READ_BOFF2() )


#define WAIT_BOFF2_LOW() \
    while ( READ_BOFF2() );


#define WAIT_BOFF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BOFF2() && (--___t___ > 0)); }


#define WAIT_BOFF2_HIGH() \
    while (! READ_BOFF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TEN2
//
// Return the value of register Cr
//
// Notes : DAC channel2 trigger enable 
//        (CR) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TEN2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TEN2_MASK) | ((val << TEN2_START_BIT) & TEN2_MASK )); \
   } 

#define ENABLE_TEN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TEN2_MASK ); \
   }

#define DISABLE_TEN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TEN2_MASK ); \
   } 

#define READ_TEN2() \
   ((READ_REGISTER_ULONG(0x0) & TEN2_MASK)  >> TEN2_START_BIT)

#define WHEN_TEN2_HIGH() \
     if ( READ_TEN2() )


#define UNLESS_TEN2_HIGH() \
     if (! READ_TEN2() )


#define WAIT_TEN2_LOW() \
    while ( READ_TEN2() );


#define WAIT_TEN2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEN2() && (--___t___ > 0)); }


#define WAIT_TEN2_HIGH() \
    while (! READ_TEN2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TSEL2
//
// Return the value of register Cr
//
// Notes : DAC channel2 trigger selection 
//        (CR) at the offset 0x0, Bits 19:21
//
/////////////////////////////////////////////////////////////////////////
#define READ_TSEL2() \
   ((READ_REGISTER_ULONG(0x0) & TSEL2_MASK)  >> TSEL2_START_BIT)

#define WRITE_TSEL2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSEL2_MASK) | ((val << TSEL2_START_BIT) & TSEL2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : WAVE2
//
// Return the value of register Cr
//
// Notes : DAC channel2 noise/triangle wave generation enable 
//        (CR) at the offset 0x0, Bits 22:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_WAVE2() \
   ((READ_REGISTER_ULONG(0x0) & WAVE2_MASK)  >> WAVE2_START_BIT)

#define WRITE_WAVE2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WAVE2_MASK) | ((val << WAVE2_START_BIT) & WAVE2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MAMP2
//
// Return the value of register Cr
//
// Notes : DAC channel2 mask/amplitude selector 
//        (CR) at the offset 0x0, Bits 24:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_MAMP2() \
   ((READ_REGISTER_ULONG(0x0) & MAMP2_MASK)  >> MAMP2_START_BIT)

#define WRITE_MAMP2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MAMP2_MASK) | ((val << MAMP2_START_BIT) & MAMP2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DMAEN2
//
// Return the value of register Cr
//
// Notes : DAC channel2 DMA enable 
//        (CR) at the offset 0x0, Bits 28:28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAEN2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DMAEN2_MASK) | ((val << DMAEN2_START_BIT) & DMAEN2_MASK )); \
   } 

#define ENABLE_DMAEN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DMAEN2_MASK ); \
   }

#define DISABLE_DMAEN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DMAEN2_MASK ); \
   } 

#define READ_DMAEN2() \
   ((READ_REGISTER_ULONG(0x0) & DMAEN2_MASK)  >> DMAEN2_START_BIT)

#define WHEN_DMAEN2_HIGH() \
     if ( READ_DMAEN2() )


#define UNLESS_DMAEN2_HIGH() \
     if (! READ_DMAEN2() )


#define WAIT_DMAEN2_LOW() \
    while ( READ_DMAEN2() );


#define WAIT_DMAEN2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAEN2() && (--___t___ > 0)); }


#define WAIT_DMAEN2_HIGH() \
    while (! READ_DMAEN2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMAUDRIE2
//
// Return the value of register Cr
//
// Notes : DAC channel2 DMA underrun interrupt enable 
//        (CR) at the offset 0x0, Bits 29:29
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAUDRIE2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DMAUDRIE2_MASK) | ((val << DMAUDRIE2_START_BIT) & DMAUDRIE2_MASK )); \
   } 

#define ENABLE_DMAUDRIE2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DMAUDRIE2_MASK ); \
   }

#define DISABLE_DMAUDRIE2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DMAUDRIE2_MASK ); \
   } 

#define READ_DMAUDRIE2() \
   ((READ_REGISTER_ULONG(0x0) & DMAUDRIE2_MASK)  >> DMAUDRIE2_START_BIT)

#define WHEN_DMAUDRIE2_HIGH() \
     if ( READ_DMAUDRIE2() )


#define UNLESS_DMAUDRIE2_HIGH() \
     if (! READ_DMAUDRIE2() )


#define WAIT_DMAUDRIE2_LOW() \
    while ( READ_DMAUDRIE2() );


#define WAIT_DMAUDRIE2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAUDRIE2() && (--___t___ > 0)); }


#define WAIT_DMAUDRIE2_HIGH() \
    while (! READ_DMAUDRIE2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swtrigr
//
// Return the value of register SWTRIGR
//
// Notes : Register Swtrigr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SWTRIGR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Swtrigr
//
// Return the value of register SWTRIGR
//
// Notes : Register software trigger register (SWTRIGR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 software trigger 
    // 
#define SWTRIG1_MASK 0x1U
#define SWTRIG1_OFFSET 0
#define SWTRIG1_START_BIT 0
#define SWTRIG1_WIDTH 1


#define SWTRIGR_REG 0x4

typedef enum swtrig1 {
    SWTRIG_1_0,
    SWTRIG_1_1
} SWTRIG_1_T ;
#define WRITE_SWTRIG1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SWTRIG1_MASK) | ((val << SWTRIG1_START_BIT) & SWTRIG1_MASK )); \
   } 

#define ENABLE_SWTRIG1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SWTRIG1_MASK ); \
   }

#define DISABLE_SWTRIG1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SWTRIG1_MASK ); \
   } 

#define READ_SWTRIG1() \
   ((READ_REGISTER_ULONG(0x4) & SWTRIG1_MASK)  >> SWTRIG1_START_BIT)

#define WHEN_SWTRIG1_HIGH() \
     if ( READ_SWTRIG1() )


#define UNLESS_SWTRIG1_HIGH() \
     if (! READ_SWTRIG1() )


#define WAIT_SWTRIG1_LOW() \
    while ( READ_SWTRIG1() );


#define WAIT_SWTRIG1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWTRIG1() && (--___t___ > 0)); }


#define WAIT_SWTRIG1_HIGH() \
    while (! READ_SWTRIG1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swtrigr
//
// Return the value of register SWTRIGR
//
// Notes : Register software trigger register (SWTRIGR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 software trigger 
    // 
#define SWTRIG2_MASK 0x2U
#define SWTRIG2_OFFSET 1
#define SWTRIG2_START_BIT 1
#define SWTRIG2_WIDTH 1



typedef enum swtrig2 {
    SWTRIG_2_0,
    SWTRIG_2_1
} SWTRIG_2_T ;
#define WRITE_SWTRIG2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SWTRIG2_MASK) | ((val << SWTRIG2_START_BIT) & SWTRIG2_MASK )); \
   } 

#define ENABLE_SWTRIG2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SWTRIG2_MASK ); \
   }

#define DISABLE_SWTRIG2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SWTRIG2_MASK ); \
   } 

#define READ_SWTRIG2() \
   ((READ_REGISTER_ULONG(0x4) & SWTRIG2_MASK)  >> SWTRIG2_START_BIT)

#define WHEN_SWTRIG2_HIGH() \
     if ( READ_SWTRIG2() )


#define UNLESS_SWTRIG2_HIGH() \
     if (! READ_SWTRIG2() )


#define WAIT_SWTRIG2_LOW() \
    while ( READ_SWTRIG2() );


#define WAIT_SWTRIG2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWTRIG2() && (--___t___ > 0)); }


#define WAIT_SWTRIG2_HIGH() \
    while (! READ_SWTRIG2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12r1
//
// Return the value of register DHR12R1
//
// Notes : Register Dhr12r1 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_1_2R_1( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_DHR_1_2R_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_1_2R_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_1_2R_1() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12r1
//
// Return the value of register DHR_1_2R_1
//
// Notes : Register channel1 12-bit right-aligned data holding register (DHR12R1) at the offset 0x8, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 12-bit right-aligned data 
    // 
#define DACC1DHR_MASK 0xFFFU
#define DACC1DHR_OFFSET 11
#define DACC1DHR_START_BIT 0
#define DACC1DHR_WIDTH 12


#define DHR_1_2R_1_REG 0x8

typedef enum dacc1dhr {
    DACC_1DHR_0,
    DACC_1DHR_1
} DACC_1DHR_T ;
#define READ_DACC1DHR() \
   ((READ_REGISTER_ULONG(0x8) & DACC1DHR_MASK)  >> DACC1DHR_START_BIT)

#define WRITE_DACC1DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DACC1DHR_MASK) | ((val << DACC1DHR_START_BIT) & DACC1DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12l1
//
// Return the value of register DHR12L1
//
// Notes : Register Dhr12l1 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_1_2L_1( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_DHR_1_2L_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_DHR_1_2L_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_DHR_1_2L_1() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12l1
//
// Return the value of register DHR_1_2L_1
//
// Notes : Register channel1 12-bit left aligned data holding register (DHR12L1) at the offset 0xC, Bits 4:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 12-bit left-aligned data 
    // 
#define DACC1DHR_MASK 0xFFF0U
#define DACC1DHR_OFFSET 15
#define DACC1DHR_START_BIT 4
#define DACC1DHR_WIDTH 12


#define DHR_1_2L_1_REG 0xC

#define READ_DACC1DHR() \
   ((READ_REGISTER_ULONG(0xC) & DACC1DHR_MASK)  >> DACC1DHR_START_BIT)

#define WRITE_DACC1DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DACC1DHR_MASK) | ((val << DACC1DHR_START_BIT) & DACC1DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8r1
//
// Return the value of register DHR8R1
//
// Notes : Register Dhr8r1 at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_8R_1( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_DHR_8R_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_8R_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_8R_1() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8r1
//
// Return the value of register DHR_8R_1
//
// Notes : Register channel1 8-bit right aligned data holding register (DHR8R1) at the offset 0x10, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 8-bit right-aligned data 
    // 
#define DACC1DHR_MASK 0xFFU
#define DACC1DHR_OFFSET 7
#define DACC1DHR_START_BIT 0
#define DACC1DHR_WIDTH 8


#define DHR_8R_1_REG 0x10

#define READ_DACC1DHR() \
   ((READ_REGISTER_ULONG(0x10) & DACC1DHR_MASK)  >> DACC1DHR_START_BIT)

#define WRITE_DACC1DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DACC1DHR_MASK) | ((val << DACC1DHR_START_BIT) & DACC1DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12r2
//
// Return the value of register DHR12R2
//
// Notes : Register Dhr12r2 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_1_2R_2( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_DHR_1_2R_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_1_2R_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_1_2R_2() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12r2
//
// Return the value of register DHR_1_2R_2
//
// Notes : Register channel2 12-bit right aligned data holding register (DHR12R2) at the offset 0x14, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 12-bit right-aligned data 
    // 
#define DACC2DHR_MASK 0xFFFU
#define DACC2DHR_OFFSET 11
#define DACC2DHR_START_BIT 0
#define DACC2DHR_WIDTH 12


#define DHR_1_2R_2_REG 0x14

typedef enum dacc2dhr {
    DACC_2DHR_0,
    DACC_2DHR_1
} DACC_2DHR_T ;
#define READ_DACC2DHR() \
   ((READ_REGISTER_ULONG(0x14) & DACC2DHR_MASK)  >> DACC2DHR_START_BIT)

#define WRITE_DACC2DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DACC2DHR_MASK) | ((val << DACC2DHR_START_BIT) & DACC2DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12l2
//
// Return the value of register DHR12L2
//
// Notes : Register Dhr12l2 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_1_2L_2( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_DHR_1_2L_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_1_2L_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_1_2L_2() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12l2
//
// Return the value of register DHR_1_2L_2
//
// Notes : Register channel2 12-bit left aligned data holding register (DHR12L2) at the offset 0x18, Bits 4:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 12-bit left-aligned data 
    // 
#define DACC2DHR_MASK 0xFFF0U
#define DACC2DHR_OFFSET 15
#define DACC2DHR_START_BIT 4
#define DACC2DHR_WIDTH 12


#define DHR_1_2L_2_REG 0x18

#define READ_DACC2DHR() \
   ((READ_REGISTER_ULONG(0x18) & DACC2DHR_MASK)  >> DACC2DHR_START_BIT)

#define WRITE_DACC2DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DACC2DHR_MASK) | ((val << DACC2DHR_START_BIT) & DACC2DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8r2
//
// Return the value of register DHR8R2
//
// Notes : Register Dhr8r2 at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_8R_2( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_DHR_8R_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_DHR_8R_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_DHR_8R_2() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8r2
//
// Return the value of register DHR_8R_2
//
// Notes : Register channel2 8-bit right-aligned data holding register (DHR8R2) at the offset 0x1C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 8-bit right-aligned data 
    // 
#define DACC2DHR_MASK 0xFFU
#define DACC2DHR_OFFSET 7
#define DACC2DHR_START_BIT 0
#define DACC2DHR_WIDTH 8


#define DHR_8R_2_REG 0x1C

#define READ_DACC2DHR() \
   ((READ_REGISTER_ULONG(0x1C) & DACC2DHR_MASK)  >> DACC2DHR_START_BIT)

#define WRITE_DACC2DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DACC2DHR_MASK) | ((val << DACC2DHR_START_BIT) & DACC2DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12rd
//
// Return the value of register DHR12RD
//
// Notes : Register Dhr12rd at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_1_2RD( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_DHR_1_2RD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_1_2RD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_1_2RD() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12rd
//
// Return the value of register DHR_1_2RD
//
// Notes : Register Dual DAC 12-bit right-aligned data holding register (DHR12RD) at the offset 0x20, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 12-bit right-aligned data 
    // 
#define DACC1DHR_MASK 0xFFFU
#define DACC1DHR_OFFSET 11
#define DACC1DHR_START_BIT 0
#define DACC1DHR_WIDTH 12


#define DHR_1_2RD_REG 0x20

#define READ_DACC1DHR() \
   ((READ_REGISTER_ULONG(0x20) & DACC1DHR_MASK)  >> DACC1DHR_START_BIT)

#define WRITE_DACC1DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DACC1DHR_MASK) | ((val << DACC1DHR_START_BIT) & DACC1DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12rd
//
// Return the value of register DHR_1_2RD
//
// Notes : Register Dual DAC 12-bit right-aligned data holding register (DHR12RD) at the offset 0x20, Bits 16:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 12-bit right-aligned data 
    // 
#define DACC2DHR_MASK 0xFFF0000U
#define DACC2DHR_OFFSET 27
#define DACC2DHR_START_BIT 16
#define DACC2DHR_WIDTH 12



#define READ_DACC2DHR() \
   ((READ_REGISTER_ULONG(0x20) & DACC2DHR_MASK)  >> DACC2DHR_START_BIT)

#define WRITE_DACC2DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DACC2DHR_MASK) | ((val << DACC2DHR_START_BIT) & DACC2DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12ld
//
// Return the value of register DHR12LD
//
// Notes : Register Dhr12ld at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_1_2LD( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_DHR_1_2LD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_1_2LD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_1_2LD() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12ld
//
// Return the value of register DHR_1_2LD
//
// Notes : Register DUAL DAC 12-bit left aligned data holding register (DHR12LD) at the offset 0x24, Bits 4:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 12-bit left-aligned data 
    // 
#define DACC1DHR_MASK 0xFFF0U
#define DACC1DHR_OFFSET 15
#define DACC1DHR_START_BIT 4
#define DACC1DHR_WIDTH 12


#define DHR_1_2LD_REG 0x24

#define READ_DACC1DHR() \
   ((READ_REGISTER_ULONG(0x24) & DACC1DHR_MASK)  >> DACC1DHR_START_BIT)

#define WRITE_DACC1DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ DACC1DHR_MASK) | ((val << DACC1DHR_START_BIT) & DACC1DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr12ld
//
// Return the value of register DHR_1_2LD
//
// Notes : Register DUAL DAC 12-bit left aligned data holding register (DHR12LD) at the offset 0x24, Bits 20:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 12-bit left-aligned data 
    // 
#define DACC2DHR_MASK 0xFFF00000U
#define DACC2DHR_OFFSET 31
#define DACC2DHR_START_BIT 20
#define DACC2DHR_WIDTH 12



#define READ_DACC2DHR() \
   ((READ_REGISTER_ULONG(0x24) & DACC2DHR_MASK)  >> DACC2DHR_START_BIT)

#define WRITE_DACC2DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ DACC2DHR_MASK) | ((val << DACC2DHR_START_BIT) & DACC2DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8rd
//
// Return the value of register DHR8RD
//
// Notes : Register Dhr8rd at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DHR_8RD( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_DHR_8RD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_DHR_8RD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_DHR_8RD() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8rd
//
// Return the value of register DHR_8RD
//
// Notes : Register DUAL DAC 8-bit right aligned data holding register (DHR8RD) at the offset 0x28, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 8-bit right-aligned data 
    // 
#define DACC1DHR_MASK 0xFFU
#define DACC1DHR_OFFSET 7
#define DACC1DHR_START_BIT 0
#define DACC1DHR_WIDTH 8


#define DHR_8RD_REG 0x28

#define READ_DACC1DHR() \
   ((READ_REGISTER_ULONG(0x28) & DACC1DHR_MASK)  >> DACC1DHR_START_BIT)

#define WRITE_DACC1DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ DACC1DHR_MASK) | ((val << DACC1DHR_START_BIT) & DACC1DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dhr8rd
//
// Return the value of register DHR_8RD
//
// Notes : Register DUAL DAC 8-bit right aligned data holding register (DHR8RD) at the offset 0x28, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 8-bit right-aligned data 
    // 
#define DACC2DHR_MASK 0xFF00U
#define DACC2DHR_OFFSET 15
#define DACC2DHR_START_BIT 8
#define DACC2DHR_WIDTH 8



#define READ_DACC2DHR() \
   ((READ_REGISTER_ULONG(0x28) & DACC2DHR_MASK)  >> DACC2DHR_START_BIT)

#define WRITE_DACC2DHR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ DACC2DHR_MASK) | ((val << DACC2DHR_START_BIT) & DACC2DHR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dor1
//
// Return the value of register DOR1
//
// Notes : Register Dor1 at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DOR_1() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dor1
//
// Return the value of register DOR_1
//
// Notes : Register channel1 data output register (DOR1) at the offset 0x2C, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel1 data output 
    // 
#define DACC1DOR_MASK 0xFFFU
#define DACC1DOR_OFFSET 11
#define DACC1DOR_START_BIT 0
#define DACC1DOR_WIDTH 12


#define DOR_1_REG 0x2C

typedef enum dacc1dor {
    DACC_1DOR_0,
    DACC_1DOR_1
} DACC_1DOR_T ;
#define READ_DACC1DOR() \
   ((READ_REGISTER_ULONG(0x2C) & DACC1DOR_MASK)  >> DACC1DOR_START_BIT)

#define WRITE_DACC1DOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DACC1DOR_MASK) | ((val << DACC1DOR_START_BIT) & DACC1DOR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dor2
//
// Return the value of register DOR2
//
// Notes : Register Dor2 at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DOR_2() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dor2
//
// Return the value of register DOR_2
//
// Notes : Register channel2 data output register (DOR2) at the offset 0x30, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC channel2 data output 
    // 
#define DACC2DOR_MASK 0xFFFU
#define DACC2DOR_OFFSET 11
#define DACC2DOR_START_BIT 0
#define DACC2DOR_WIDTH 12


#define DOR_2_REG 0x30

typedef enum dacc2dor {
    DACC_2DOR_0,
    DACC_2DOR_1
} DACC_2DOR_T ;
#define READ_DACC2DOR() \
   ((READ_REGISTER_ULONG(0x30) & DACC2DOR_MASK)  >> DACC2DOR_START_BIT)

#define WRITE_DACC2DOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ DACC2DOR_MASK) | ((val << DACC2DOR_START_BIT) & DACC2DOR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SR( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_SR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_SR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_SR() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : DMAUDR1
//
// Return the value of register Sr
//
// Notes : DAC channel1 DMA underrun flag 
//        (SR) at the offset 0x34, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAUDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DMAUDR1_MASK) | ((val << DMAUDR1_START_BIT) & DMAUDR1_MASK )); \
   } 

#define ENABLE_DMAUDR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DMAUDR1_MASK ); \
   }

#define DISABLE_DMAUDR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DMAUDR1_MASK ); \
   } 

#define READ_DMAUDR1() \
   ((READ_REGISTER_ULONG(0x34) & DMAUDR1_MASK)  >> DMAUDR1_START_BIT)

#define WHEN_DMAUDR1_HIGH() \
     if ( READ_DMAUDR1() )


#define UNLESS_DMAUDR1_HIGH() \
     if (! READ_DMAUDR1() )


#define WAIT_DMAUDR1_LOW() \
    while ( READ_DMAUDR1() );


#define WAIT_DMAUDR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAUDR1() && (--___t___ > 0)); }


#define WAIT_DMAUDR1_HIGH() \
    while (! READ_DMAUDR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMAUDR2
//
// Return the value of register Sr
//
// Notes : DAC channel2 DMA underrun flag 
//        (SR) at the offset 0x34, Bits 29:29
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMAUDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DMAUDR2_MASK) | ((val << DMAUDR2_START_BIT) & DMAUDR2_MASK )); \
   } 

#define ENABLE_DMAUDR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DMAUDR2_MASK ); \
   }

#define DISABLE_DMAUDR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DMAUDR2_MASK ); \
   } 

#define READ_DMAUDR2() \
   ((READ_REGISTER_ULONG(0x34) & DMAUDR2_MASK)  >> DMAUDR2_START_BIT)

#define WHEN_DMAUDR2_HIGH() \
     if ( READ_DMAUDR2() )


#define UNLESS_DMAUDR2_HIGH() \
     if (! READ_DMAUDR2() )


#define WAIT_DMAUDR2_LOW() \
    while ( READ_DMAUDR2() );


#define WAIT_DMAUDR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAUDR2() && (--___t___ > 0)); }


#define WAIT_DMAUDR2_HIGH() \
    while (! READ_DMAUDR2() );


