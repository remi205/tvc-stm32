/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/rcc.h
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
 
#define RCC 0x40023800
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
// Function : HSION
//
// Return the value of register Cr
//
// Notes : Internal high-speed clock enable 
//        (CR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSION_MASK) | ((val << HSION_START_BIT) & HSION_MASK )); \
   } 

#define ENABLE_HSION() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSION_MASK ); \
   }

#define DISABLE_HSION() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSION_MASK ); \
   } 

#define READ_HSION() \
   ((READ_REGISTER_ULONG(0x0) & HSION_MASK)  >> HSION_START_BIT)

#define WHEN_HSION_HIGH() \
     if ( READ_HSION() )


#define UNLESS_HSION_HIGH() \
     if (! READ_HSION() )


#define WAIT_HSION_LOW() \
    while ( READ_HSION() );


#define WAIT_HSION_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSION() && (--___t___ > 0)); }


#define WAIT_HSION_HIGH() \
    while (! READ_HSION() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HSIRDY
//
// Return the value of register Cr
//
// Notes : Internal high-speed clock ready flag 
//        (CR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSIRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSIRDY_MASK) | ((val << HSIRDY_START_BIT) & HSIRDY_MASK )); \
   } 

#define ENABLE_HSIRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSIRDY_MASK ); \
   }

#define DISABLE_HSIRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSIRDY_MASK ); \
   } 

#define READ_HSIRDY() \
   ((READ_REGISTER_ULONG(0x0) & HSIRDY_MASK)  >> HSIRDY_START_BIT)

#define WHEN_HSIRDY_HIGH() \
     if ( READ_HSIRDY() )


#define UNLESS_HSIRDY_HIGH() \
     if (! READ_HSIRDY() )


#define WAIT_HSIRDY_LOW() \
    while ( READ_HSIRDY() );


#define WAIT_HSIRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSIRDY() && (--___t___ > 0)); }


#define WAIT_HSIRDY_HIGH() \
    while (! READ_HSIRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HSITRIM
//
// Return the value of register Cr
//
// Notes : Internal high-speed clock trimming 
//        (CR) at the offset 0x0, Bits 3:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_HSITRIM() \
   ((READ_REGISTER_ULONG(0x0) & HSITRIM_MASK)  >> HSITRIM_START_BIT)

#define WRITE_HSITRIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSITRIM_MASK) | ((val << HSITRIM_START_BIT) & HSITRIM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HSICAL
//
// Return the value of register Cr
//
// Notes : Internal high-speed clock calibration 
//        (CR) at the offset 0x0, Bits 8:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_HSICAL() \
   ((READ_REGISTER_ULONG(0x0) & HSICAL_MASK)  >> HSICAL_START_BIT)

#define WRITE_HSICAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSICAL_MASK) | ((val << HSICAL_START_BIT) & HSICAL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : HSEON
//
// Return the value of register Cr
//
// Notes : HSE clock enable 
//        (CR) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSEON(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSEON_MASK) | ((val << HSEON_START_BIT) & HSEON_MASK )); \
   } 

#define ENABLE_HSEON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSEON_MASK ); \
   }

#define DISABLE_HSEON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSEON_MASK ); \
   } 

#define READ_HSEON() \
   ((READ_REGISTER_ULONG(0x0) & HSEON_MASK)  >> HSEON_START_BIT)

#define WHEN_HSEON_HIGH() \
     if ( READ_HSEON() )


#define UNLESS_HSEON_HIGH() \
     if (! READ_HSEON() )


#define WAIT_HSEON_LOW() \
    while ( READ_HSEON() );


#define WAIT_HSEON_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSEON() && (--___t___ > 0)); }


#define WAIT_HSEON_HIGH() \
    while (! READ_HSEON() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HSERDY
//
// Return the value of register Cr
//
// Notes : HSE clock ready flag 
//        (CR) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSERDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSERDY_MASK) | ((val << HSERDY_START_BIT) & HSERDY_MASK )); \
   } 

#define ENABLE_HSERDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSERDY_MASK ); \
   }

#define DISABLE_HSERDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSERDY_MASK ); \
   } 

#define READ_HSERDY() \
   ((READ_REGISTER_ULONG(0x0) & HSERDY_MASK)  >> HSERDY_START_BIT)

#define WHEN_HSERDY_HIGH() \
     if ( READ_HSERDY() )


#define UNLESS_HSERDY_HIGH() \
     if (! READ_HSERDY() )


#define WAIT_HSERDY_LOW() \
    while ( READ_HSERDY() );


#define WAIT_HSERDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSERDY() && (--___t___ > 0)); }


#define WAIT_HSERDY_HIGH() \
    while (! READ_HSERDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HSEBYP
//
// Return the value of register Cr
//
// Notes : HSE clock bypass 
//        (CR) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HSEBYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSEBYP_MASK) | ((val << HSEBYP_START_BIT) & HSEBYP_MASK )); \
   } 

#define ENABLE_HSEBYP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSEBYP_MASK ); \
   }

#define DISABLE_HSEBYP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSEBYP_MASK ); \
   } 

#define READ_HSEBYP() \
   ((READ_REGISTER_ULONG(0x0) & HSEBYP_MASK)  >> HSEBYP_START_BIT)

#define WHEN_HSEBYP_HIGH() \
     if ( READ_HSEBYP() )


#define UNLESS_HSEBYP_HIGH() \
     if (! READ_HSEBYP() )


#define WAIT_HSEBYP_LOW() \
    while ( READ_HSEBYP() );


#define WAIT_HSEBYP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSEBYP() && (--___t___ > 0)); }


#define WAIT_HSEBYP_HIGH() \
    while (! READ_HSEBYP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CSSON
//
// Return the value of register Cr
//
// Notes : Clock security system enable 
//        (CR) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CSSON(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CSSON_MASK) | ((val << CSSON_START_BIT) & CSSON_MASK )); \
   } 

#define ENABLE_CSSON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CSSON_MASK ); \
   }

#define DISABLE_CSSON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CSSON_MASK ); \
   } 

#define READ_CSSON() \
   ((READ_REGISTER_ULONG(0x0) & CSSON_MASK)  >> CSSON_START_BIT)

#define WHEN_CSSON_HIGH() \
     if ( READ_CSSON() )


#define UNLESS_CSSON_HIGH() \
     if (! READ_CSSON() )


#define WAIT_CSSON_LOW() \
    while ( READ_CSSON() );


#define WAIT_CSSON_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSSON() && (--___t___ > 0)); }


#define WAIT_CSSON_HIGH() \
    while (! READ_CSSON() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PLLON
//
// Return the value of register Cr
//
// Notes : Main PLL (PLL) enable 
//        (CR) at the offset 0x0, Bits 24:24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PLLON(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PLLON_MASK) | ((val << PLLON_START_BIT) & PLLON_MASK )); \
   } 

#define ENABLE_PLLON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PLLON_MASK ); \
   }

#define DISABLE_PLLON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PLLON_MASK ); \
   } 

#define READ_PLLON() \
   ((READ_REGISTER_ULONG(0x0) & PLLON_MASK)  >> PLLON_START_BIT)

#define WHEN_PLLON_HIGH() \
     if ( READ_PLLON() )


#define UNLESS_PLLON_HIGH() \
     if (! READ_PLLON() )


#define WAIT_PLLON_LOW() \
    while ( READ_PLLON() );


#define WAIT_PLLON_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLON() && (--___t___ > 0)); }


#define WAIT_PLLON_HIGH() \
    while (! READ_PLLON() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PLLRDY
//
// Return the value of register Cr
//
// Notes : Main PLL (PLL) clock ready flag 
//        (CR) at the offset 0x0, Bits 25:25
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PLLRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PLLRDY_MASK) | ((val << PLLRDY_START_BIT) & PLLRDY_MASK )); \
   } 

#define ENABLE_PLLRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PLLRDY_MASK ); \
   }

#define DISABLE_PLLRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PLLRDY_MASK ); \
   } 

#define READ_PLLRDY() \
   ((READ_REGISTER_ULONG(0x0) & PLLRDY_MASK)  >> PLLRDY_START_BIT)

#define WHEN_PLLRDY_HIGH() \
     if ( READ_PLLRDY() )


#define UNLESS_PLLRDY_HIGH() \
     if (! READ_PLLRDY() )


#define WAIT_PLLRDY_LOW() \
    while ( READ_PLLRDY() );


#define WAIT_PLLRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLRDY() && (--___t___ > 0)); }


#define WAIT_PLLRDY_HIGH() \
    while (! READ_PLLRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PLLI2SON
//
// Return the value of register Cr
//
// Notes : PLLI2S enable 
//        (CR) at the offset 0x0, Bits 26:26
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PLLI2SON(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PLLI2SON_MASK) | ((val << PLLI2SON_START_BIT) & PLLI2SON_MASK )); \
   } 

#define ENABLE_PLLI2SON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PLLI2SON_MASK ); \
   }

#define DISABLE_PLLI2SON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PLLI2SON_MASK ); \
   } 

#define READ_PLLI2SON() \
   ((READ_REGISTER_ULONG(0x0) & PLLI2SON_MASK)  >> PLLI2SON_START_BIT)

#define WHEN_PLLI2SON_HIGH() \
     if ( READ_PLLI2SON() )


#define UNLESS_PLLI2SON_HIGH() \
     if (! READ_PLLI2SON() )


#define WAIT_PLLI2SON_LOW() \
    while ( READ_PLLI2SON() );


#define WAIT_PLLI2SON_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLI2SON() && (--___t___ > 0)); }


#define WAIT_PLLI2SON_HIGH() \
    while (! READ_PLLI2SON() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PLLI2SRDY
//
// Return the value of register Cr
//
// Notes : PLLI2S clock ready flag 
//        (CR) at the offset 0x0, Bits 27:27
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PLLI2SRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PLLI2SRDY_MASK) | ((val << PLLI2SRDY_START_BIT) & PLLI2SRDY_MASK )); \
   } 

#define ENABLE_PLLI2SRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PLLI2SRDY_MASK ); \
   }

#define DISABLE_PLLI2SRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PLLI2SRDY_MASK ); \
   } 

#define READ_PLLI2SRDY() \
   ((READ_REGISTER_ULONG(0x0) & PLLI2SRDY_MASK)  >> PLLI2SRDY_START_BIT)

#define WHEN_PLLI2SRDY_HIGH() \
     if ( READ_PLLI2SRDY() )


#define UNLESS_PLLI2SRDY_HIGH() \
     if (! READ_PLLI2SRDY() )


#define WAIT_PLLI2SRDY_LOW() \
    while ( READ_PLLI2SRDY() );


#define WAIT_PLLI2SRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLI2SRDY() && (--___t___ > 0)); }


#define WAIT_PLLI2SRDY_HIGH() \
    while (! READ_PLLI2SRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register Pllcfgr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PLLCFGR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_PLLCFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_PLLCFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_PLLCFGR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Division factor for the main PLL (PLL) and audio PLL 
    // (PLLI2S) input clock 
    // 
#define PLLM0_MASK 0x1U
#define PLLM0_OFFSET 0
#define PLLM0_START_BIT 0
#define PLLM0_WIDTH 1


#define PLLCFGR_REG 0x4

typedef enum pllm0 {
    PLLM_0_0,
    PLLM_0_1
} PLLM_0_T ;
#define WRITE_PLLM0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLM0_MASK) | ((val << PLLM0_START_BIT) & PLLM0_MASK )); \
   } 

#define ENABLE_PLLM0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLM0_MASK ); \
   }

#define DISABLE_PLLM0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLM0_MASK ); \
   } 

#define READ_PLLM0() \
   ((READ_REGISTER_ULONG(0x4) & PLLM0_MASK)  >> PLLM0_START_BIT)

#define WHEN_PLLM0_HIGH() \
     if ( READ_PLLM0() )


#define UNLESS_PLLM0_HIGH() \
     if (! READ_PLLM0() )


#define WAIT_PLLM0_LOW() \
    while ( READ_PLLM0() );


#define WAIT_PLLM0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLM0() && (--___t___ > 0)); }


#define WAIT_PLLM0_HIGH() \
    while (! READ_PLLM0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Division factor for the main PLL (PLL) and audio PLL 
    // (PLLI2S) input clock 
    // 
#define PLLM1_MASK 0x2U
#define PLLM1_OFFSET 1
#define PLLM1_START_BIT 1
#define PLLM1_WIDTH 1



typedef enum pllm1 {
    PLLM_1_0,
    PLLM_1_1
} PLLM_1_T ;
#define WRITE_PLLM1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLM1_MASK) | ((val << PLLM1_START_BIT) & PLLM1_MASK )); \
   } 

#define ENABLE_PLLM1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLM1_MASK ); \
   }

#define DISABLE_PLLM1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLM1_MASK ); \
   } 

#define READ_PLLM1() \
   ((READ_REGISTER_ULONG(0x4) & PLLM1_MASK)  >> PLLM1_START_BIT)

#define WHEN_PLLM1_HIGH() \
     if ( READ_PLLM1() )


#define UNLESS_PLLM1_HIGH() \
     if (! READ_PLLM1() )


#define WAIT_PLLM1_LOW() \
    while ( READ_PLLM1() );


#define WAIT_PLLM1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLM1() && (--___t___ > 0)); }


#define WAIT_PLLM1_HIGH() \
    while (! READ_PLLM1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Division factor for the main PLL (PLL) and audio PLL 
    // (PLLI2S) input clock 
    // 
#define PLLM2_MASK 0x4U
#define PLLM2_OFFSET 2
#define PLLM2_START_BIT 2
#define PLLM2_WIDTH 1



typedef enum pllm2 {
    PLLM_2_0,
    PLLM_2_1
} PLLM_2_T ;
#define WRITE_PLLM2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLM2_MASK) | ((val << PLLM2_START_BIT) & PLLM2_MASK )); \
   } 

#define ENABLE_PLLM2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLM2_MASK ); \
   }

#define DISABLE_PLLM2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLM2_MASK ); \
   } 

#define READ_PLLM2() \
   ((READ_REGISTER_ULONG(0x4) & PLLM2_MASK)  >> PLLM2_START_BIT)

#define WHEN_PLLM2_HIGH() \
     if ( READ_PLLM2() )


#define UNLESS_PLLM2_HIGH() \
     if (! READ_PLLM2() )


#define WAIT_PLLM2_LOW() \
    while ( READ_PLLM2() );


#define WAIT_PLLM2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLM2() && (--___t___ > 0)); }


#define WAIT_PLLM2_HIGH() \
    while (! READ_PLLM2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Division factor for the main PLL (PLL) and audio PLL 
    // (PLLI2S) input clock 
    // 
#define PLLM3_MASK 0x8U
#define PLLM3_OFFSET 3
#define PLLM3_START_BIT 3
#define PLLM3_WIDTH 1



typedef enum pllm3 {
    PLLM_3_0,
    PLLM_3_1
} PLLM_3_T ;
#define WRITE_PLLM3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLM3_MASK) | ((val << PLLM3_START_BIT) & PLLM3_MASK )); \
   } 

#define ENABLE_PLLM3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLM3_MASK ); \
   }

#define DISABLE_PLLM3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLM3_MASK ); \
   } 

#define READ_PLLM3() \
   ((READ_REGISTER_ULONG(0x4) & PLLM3_MASK)  >> PLLM3_START_BIT)

#define WHEN_PLLM3_HIGH() \
     if ( READ_PLLM3() )


#define UNLESS_PLLM3_HIGH() \
     if (! READ_PLLM3() )


#define WAIT_PLLM3_LOW() \
    while ( READ_PLLM3() );


#define WAIT_PLLM3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLM3() && (--___t___ > 0)); }


#define WAIT_PLLM3_HIGH() \
    while (! READ_PLLM3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Division factor for the main PLL (PLL) and audio PLL 
    // (PLLI2S) input clock 
    // 
#define PLLM4_MASK 0x10U
#define PLLM4_OFFSET 4
#define PLLM4_START_BIT 4
#define PLLM4_WIDTH 1



typedef enum pllm4 {
    PLLM_4_0,
    PLLM_4_1
} PLLM_4_T ;
#define WRITE_PLLM4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLM4_MASK) | ((val << PLLM4_START_BIT) & PLLM4_MASK )); \
   } 

#define ENABLE_PLLM4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLM4_MASK ); \
   }

#define DISABLE_PLLM4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLM4_MASK ); \
   } 

#define READ_PLLM4() \
   ((READ_REGISTER_ULONG(0x4) & PLLM4_MASK)  >> PLLM4_START_BIT)

#define WHEN_PLLM4_HIGH() \
     if ( READ_PLLM4() )


#define UNLESS_PLLM4_HIGH() \
     if (! READ_PLLM4() )


#define WAIT_PLLM4_LOW() \
    while ( READ_PLLM4() );


#define WAIT_PLLM4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLM4() && (--___t___ > 0)); }


#define WAIT_PLLM4_HIGH() \
    while (! READ_PLLM4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Division factor for the main PLL (PLL) and audio PLL 
    // (PLLI2S) input clock 
    // 
#define PLLM5_MASK 0x20U
#define PLLM5_OFFSET 5
#define PLLM5_START_BIT 5
#define PLLM5_WIDTH 1



typedef enum pllm5 {
    PLLM_5_0,
    PLLM_5_1
} PLLM_5_T ;
#define WRITE_PLLM5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLM5_MASK) | ((val << PLLM5_START_BIT) & PLLM5_MASK )); \
   } 

#define ENABLE_PLLM5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLM5_MASK ); \
   }

#define DISABLE_PLLM5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLM5_MASK ); \
   } 

#define READ_PLLM5() \
   ((READ_REGISTER_ULONG(0x4) & PLLM5_MASK)  >> PLLM5_START_BIT)

#define WHEN_PLLM5_HIGH() \
     if ( READ_PLLM5() )


#define UNLESS_PLLM5_HIGH() \
     if (! READ_PLLM5() )


#define WAIT_PLLM5_LOW() \
    while ( READ_PLLM5() );


#define WAIT_PLLM5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLM5() && (--___t___ > 0)); }


#define WAIT_PLLM5_HIGH() \
    while (! READ_PLLM5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN0_MASK 0x40U
#define PLLN0_OFFSET 6
#define PLLN0_START_BIT 6
#define PLLN0_WIDTH 1



typedef enum plln0 {
    PLLN_0_0,
    PLLN_0_1
} PLLN_0_T ;
#define WRITE_PLLN0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN0_MASK) | ((val << PLLN0_START_BIT) & PLLN0_MASK )); \
   } 

#define ENABLE_PLLN0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN0_MASK ); \
   }

#define DISABLE_PLLN0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN0_MASK ); \
   } 

#define READ_PLLN0() \
   ((READ_REGISTER_ULONG(0x4) & PLLN0_MASK)  >> PLLN0_START_BIT)

#define WHEN_PLLN0_HIGH() \
     if ( READ_PLLN0() )


#define UNLESS_PLLN0_HIGH() \
     if (! READ_PLLN0() )


#define WAIT_PLLN0_LOW() \
    while ( READ_PLLN0() );


#define WAIT_PLLN0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN0() && (--___t___ > 0)); }


#define WAIT_PLLN0_HIGH() \
    while (! READ_PLLN0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN1_MASK 0x80U
#define PLLN1_OFFSET 7
#define PLLN1_START_BIT 7
#define PLLN1_WIDTH 1



typedef enum plln1 {
    PLLN_1_0,
    PLLN_1_1
} PLLN_1_T ;
#define WRITE_PLLN1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN1_MASK) | ((val << PLLN1_START_BIT) & PLLN1_MASK )); \
   } 

#define ENABLE_PLLN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN1_MASK ); \
   }

#define DISABLE_PLLN1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN1_MASK ); \
   } 

#define READ_PLLN1() \
   ((READ_REGISTER_ULONG(0x4) & PLLN1_MASK)  >> PLLN1_START_BIT)

#define WHEN_PLLN1_HIGH() \
     if ( READ_PLLN1() )


#define UNLESS_PLLN1_HIGH() \
     if (! READ_PLLN1() )


#define WAIT_PLLN1_LOW() \
    while ( READ_PLLN1() );


#define WAIT_PLLN1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN1() && (--___t___ > 0)); }


#define WAIT_PLLN1_HIGH() \
    while (! READ_PLLN1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN2_MASK 0x100U
#define PLLN2_OFFSET 8
#define PLLN2_START_BIT 8
#define PLLN2_WIDTH 1



typedef enum plln2 {
    PLLN_2_0,
    PLLN_2_1
} PLLN_2_T ;
#define WRITE_PLLN2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN2_MASK) | ((val << PLLN2_START_BIT) & PLLN2_MASK )); \
   } 

#define ENABLE_PLLN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN2_MASK ); \
   }

#define DISABLE_PLLN2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN2_MASK ); \
   } 

#define READ_PLLN2() \
   ((READ_REGISTER_ULONG(0x4) & PLLN2_MASK)  >> PLLN2_START_BIT)

#define WHEN_PLLN2_HIGH() \
     if ( READ_PLLN2() )


#define UNLESS_PLLN2_HIGH() \
     if (! READ_PLLN2() )


#define WAIT_PLLN2_LOW() \
    while ( READ_PLLN2() );


#define WAIT_PLLN2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN2() && (--___t___ > 0)); }


#define WAIT_PLLN2_HIGH() \
    while (! READ_PLLN2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN3_MASK 0x200U
#define PLLN3_OFFSET 9
#define PLLN3_START_BIT 9
#define PLLN3_WIDTH 1



typedef enum plln3 {
    PLLN_3_0,
    PLLN_3_1
} PLLN_3_T ;
#define WRITE_PLLN3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN3_MASK) | ((val << PLLN3_START_BIT) & PLLN3_MASK )); \
   } 

#define ENABLE_PLLN3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN3_MASK ); \
   }

#define DISABLE_PLLN3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN3_MASK ); \
   } 

#define READ_PLLN3() \
   ((READ_REGISTER_ULONG(0x4) & PLLN3_MASK)  >> PLLN3_START_BIT)

#define WHEN_PLLN3_HIGH() \
     if ( READ_PLLN3() )


#define UNLESS_PLLN3_HIGH() \
     if (! READ_PLLN3() )


#define WAIT_PLLN3_LOW() \
    while ( READ_PLLN3() );


#define WAIT_PLLN3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN3() && (--___t___ > 0)); }


#define WAIT_PLLN3_HIGH() \
    while (! READ_PLLN3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN4_MASK 0x400U
#define PLLN4_OFFSET 10
#define PLLN4_START_BIT 10
#define PLLN4_WIDTH 1



typedef enum plln4 {
    PLLN_4_0,
    PLLN_4_1
} PLLN_4_T ;
#define WRITE_PLLN4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN4_MASK) | ((val << PLLN4_START_BIT) & PLLN4_MASK )); \
   } 

#define ENABLE_PLLN4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN4_MASK ); \
   }

#define DISABLE_PLLN4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN4_MASK ); \
   } 

#define READ_PLLN4() \
   ((READ_REGISTER_ULONG(0x4) & PLLN4_MASK)  >> PLLN4_START_BIT)

#define WHEN_PLLN4_HIGH() \
     if ( READ_PLLN4() )


#define UNLESS_PLLN4_HIGH() \
     if (! READ_PLLN4() )


#define WAIT_PLLN4_LOW() \
    while ( READ_PLLN4() );


#define WAIT_PLLN4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN4() && (--___t___ > 0)); }


#define WAIT_PLLN4_HIGH() \
    while (! READ_PLLN4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN5_MASK 0x800U
#define PLLN5_OFFSET 11
#define PLLN5_START_BIT 11
#define PLLN5_WIDTH 1



typedef enum plln5 {
    PLLN_5_0,
    PLLN_5_1
} PLLN_5_T ;
#define WRITE_PLLN5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN5_MASK) | ((val << PLLN5_START_BIT) & PLLN5_MASK )); \
   } 

#define ENABLE_PLLN5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN5_MASK ); \
   }

#define DISABLE_PLLN5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN5_MASK ); \
   } 

#define READ_PLLN5() \
   ((READ_REGISTER_ULONG(0x4) & PLLN5_MASK)  >> PLLN5_START_BIT)

#define WHEN_PLLN5_HIGH() \
     if ( READ_PLLN5() )


#define UNLESS_PLLN5_HIGH() \
     if (! READ_PLLN5() )


#define WAIT_PLLN5_LOW() \
    while ( READ_PLLN5() );


#define WAIT_PLLN5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN5() && (--___t___ > 0)); }


#define WAIT_PLLN5_HIGH() \
    while (! READ_PLLN5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN6_MASK 0x1000U
#define PLLN6_OFFSET 12
#define PLLN6_START_BIT 12
#define PLLN6_WIDTH 1



typedef enum plln6 {
    PLLN_6_0,
    PLLN_6_1
} PLLN_6_T ;
#define WRITE_PLLN6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN6_MASK) | ((val << PLLN6_START_BIT) & PLLN6_MASK )); \
   } 

#define ENABLE_PLLN6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN6_MASK ); \
   }

#define DISABLE_PLLN6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN6_MASK ); \
   } 

#define READ_PLLN6() \
   ((READ_REGISTER_ULONG(0x4) & PLLN6_MASK)  >> PLLN6_START_BIT)

#define WHEN_PLLN6_HIGH() \
     if ( READ_PLLN6() )


#define UNLESS_PLLN6_HIGH() \
     if (! READ_PLLN6() )


#define WAIT_PLLN6_LOW() \
    while ( READ_PLLN6() );


#define WAIT_PLLN6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN6() && (--___t___ > 0)); }


#define WAIT_PLLN6_HIGH() \
    while (! READ_PLLN6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN7_MASK 0x2000U
#define PLLN7_OFFSET 13
#define PLLN7_START_BIT 13
#define PLLN7_WIDTH 1



typedef enum plln7 {
    PLLN_7_0,
    PLLN_7_1
} PLLN_7_T ;
#define WRITE_PLLN7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN7_MASK) | ((val << PLLN7_START_BIT) & PLLN7_MASK )); \
   } 

#define ENABLE_PLLN7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN7_MASK ); \
   }

#define DISABLE_PLLN7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN7_MASK ); \
   } 

#define READ_PLLN7() \
   ((READ_REGISTER_ULONG(0x4) & PLLN7_MASK)  >> PLLN7_START_BIT)

#define WHEN_PLLN7_HIGH() \
     if ( READ_PLLN7() )


#define UNLESS_PLLN7_HIGH() \
     if (! READ_PLLN7() )


#define WAIT_PLLN7_LOW() \
    while ( READ_PLLN7() );


#define WAIT_PLLN7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN7() && (--___t___ > 0)); }


#define WAIT_PLLN7_HIGH() \
    while (! READ_PLLN7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) multiplication factor for VCO 
    // 
#define PLLN8_MASK 0x4000U
#define PLLN8_OFFSET 14
#define PLLN8_START_BIT 14
#define PLLN8_WIDTH 1



typedef enum plln8 {
    PLLN_8_0,
    PLLN_8_1
} PLLN_8_T ;
#define WRITE_PLLN8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLN8_MASK) | ((val << PLLN8_START_BIT) & PLLN8_MASK )); \
   } 

#define ENABLE_PLLN8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLN8_MASK ); \
   }

#define DISABLE_PLLN8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLN8_MASK ); \
   } 

#define READ_PLLN8() \
   ((READ_REGISTER_ULONG(0x4) & PLLN8_MASK)  >> PLLN8_START_BIT)

#define WHEN_PLLN8_HIGH() \
     if ( READ_PLLN8() )


#define UNLESS_PLLN8_HIGH() \
     if (! READ_PLLN8() )


#define WAIT_PLLN8_LOW() \
    while ( READ_PLLN8() );


#define WAIT_PLLN8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLN8() && (--___t___ > 0)); }


#define WAIT_PLLN8_HIGH() \
    while (! READ_PLLN8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) division factor for main system clock 
    // 
#define PLLP0_MASK 0x10000U
#define PLLP0_OFFSET 16
#define PLLP0_START_BIT 16
#define PLLP0_WIDTH 1



typedef enum pllp0 {
    PLLP_0_0,
    PLLP_0_1
} PLLP_0_T ;
#define WRITE_PLLP0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLP0_MASK) | ((val << PLLP0_START_BIT) & PLLP0_MASK )); \
   } 

#define ENABLE_PLLP0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLP0_MASK ); \
   }

#define DISABLE_PLLP0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLP0_MASK ); \
   } 

#define READ_PLLP0() \
   ((READ_REGISTER_ULONG(0x4) & PLLP0_MASK)  >> PLLP0_START_BIT)

#define WHEN_PLLP0_HIGH() \
     if ( READ_PLLP0() )


#define UNLESS_PLLP0_HIGH() \
     if (! READ_PLLP0() )


#define WAIT_PLLP0_LOW() \
    while ( READ_PLLP0() );


#define WAIT_PLLP0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLP0() && (--___t___ > 0)); }


#define WAIT_PLLP0_HIGH() \
    while (! READ_PLLP0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) division factor for main system clock 
    // 
#define PLLP1_MASK 0x20000U
#define PLLP1_OFFSET 17
#define PLLP1_START_BIT 17
#define PLLP1_WIDTH 1



typedef enum pllp1 {
    PLLP_1_0,
    PLLP_1_1
} PLLP_1_T ;
#define WRITE_PLLP1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLP1_MASK) | ((val << PLLP1_START_BIT) & PLLP1_MASK )); \
   } 

#define ENABLE_PLLP1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLP1_MASK ); \
   }

#define DISABLE_PLLP1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLP1_MASK ); \
   } 

#define READ_PLLP1() \
   ((READ_REGISTER_ULONG(0x4) & PLLP1_MASK)  >> PLLP1_START_BIT)

#define WHEN_PLLP1_HIGH() \
     if ( READ_PLLP1() )


#define UNLESS_PLLP1_HIGH() \
     if (! READ_PLLP1() )


#define WAIT_PLLP1_LOW() \
    while ( READ_PLLP1() );


#define WAIT_PLLP1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLP1() && (--___t___ > 0)); }


#define WAIT_PLLP1_HIGH() \
    while (! READ_PLLP1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source 
    // 
#define PLLSRC_MASK 0x400000U
#define PLLSRC_OFFSET 22
#define PLLSRC_START_BIT 22
#define PLLSRC_WIDTH 1



typedef enum pllsrc {
    PLLSRC_0,
    PLLSRC_1
} PLLSRC_T ;
#define WRITE_PLLSRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLSRC_MASK) | ((val << PLLSRC_START_BIT) & PLLSRC_MASK )); \
   } 

#define ENABLE_PLLSRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLSRC_MASK ); \
   }

#define DISABLE_PLLSRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLSRC_MASK ); \
   } 

#define READ_PLLSRC() \
   ((READ_REGISTER_ULONG(0x4) & PLLSRC_MASK)  >> PLLSRC_START_BIT)

#define WHEN_PLLSRC_HIGH() \
     if ( READ_PLLSRC() )


#define UNLESS_PLLSRC_HIGH() \
     if (! READ_PLLSRC() )


#define WAIT_PLLSRC_LOW() \
    while ( READ_PLLSRC() );


#define WAIT_PLLSRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLSRC() && (--___t___ > 0)); }


#define WAIT_PLLSRC_HIGH() \
    while (! READ_PLLSRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) division factor for USB OTG FS, SDIO and 
    // random number generator clocks 
    // 
#define PLLQ0_MASK 0x1000000U
#define PLLQ0_OFFSET 24
#define PLLQ0_START_BIT 24
#define PLLQ0_WIDTH 1



typedef enum pllq0 {
    PLLQ_0_0,
    PLLQ_0_1
} PLLQ_0_T ;
#define WRITE_PLLQ0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLQ0_MASK) | ((val << PLLQ0_START_BIT) & PLLQ0_MASK )); \
   } 

#define ENABLE_PLLQ0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLQ0_MASK ); \
   }

#define DISABLE_PLLQ0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLQ0_MASK ); \
   } 

#define READ_PLLQ0() \
   ((READ_REGISTER_ULONG(0x4) & PLLQ0_MASK)  >> PLLQ0_START_BIT)

#define WHEN_PLLQ0_HIGH() \
     if ( READ_PLLQ0() )


#define UNLESS_PLLQ0_HIGH() \
     if (! READ_PLLQ0() )


#define WAIT_PLLQ0_LOW() \
    while ( READ_PLLQ0() );


#define WAIT_PLLQ0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLQ0() && (--___t___ > 0)); }


#define WAIT_PLLQ0_HIGH() \
    while (! READ_PLLQ0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) division factor for USB OTG FS, SDIO and 
    // random number generator clocks 
    // 
#define PLLQ1_MASK 0x2000000U
#define PLLQ1_OFFSET 25
#define PLLQ1_START_BIT 25
#define PLLQ1_WIDTH 1



typedef enum pllq1 {
    PLLQ_1_0,
    PLLQ_1_1
} PLLQ_1_T ;
#define WRITE_PLLQ1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLQ1_MASK) | ((val << PLLQ1_START_BIT) & PLLQ1_MASK )); \
   } 

#define ENABLE_PLLQ1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLQ1_MASK ); \
   }

#define DISABLE_PLLQ1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLQ1_MASK ); \
   } 

#define READ_PLLQ1() \
   ((READ_REGISTER_ULONG(0x4) & PLLQ1_MASK)  >> PLLQ1_START_BIT)

#define WHEN_PLLQ1_HIGH() \
     if ( READ_PLLQ1() )


#define UNLESS_PLLQ1_HIGH() \
     if (! READ_PLLQ1() )


#define WAIT_PLLQ1_LOW() \
    while ( READ_PLLQ1() );


#define WAIT_PLLQ1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLQ1() && (--___t___ > 0)); }


#define WAIT_PLLQ1_HIGH() \
    while (! READ_PLLQ1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) division factor for USB OTG FS, SDIO and 
    // random number generator clocks 
    // 
#define PLLQ2_MASK 0x4000000U
#define PLLQ2_OFFSET 26
#define PLLQ2_START_BIT 26
#define PLLQ2_WIDTH 1



typedef enum pllq2 {
    PLLQ_2_0,
    PLLQ_2_1
} PLLQ_2_T ;
#define WRITE_PLLQ2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLQ2_MASK) | ((val << PLLQ2_START_BIT) & PLLQ2_MASK )); \
   } 

#define ENABLE_PLLQ2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLQ2_MASK ); \
   }

#define DISABLE_PLLQ2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLQ2_MASK ); \
   } 

#define READ_PLLQ2() \
   ((READ_REGISTER_ULONG(0x4) & PLLQ2_MASK)  >> PLLQ2_START_BIT)

#define WHEN_PLLQ2_HIGH() \
     if ( READ_PLLQ2() )


#define UNLESS_PLLQ2_HIGH() \
     if (! READ_PLLQ2() )


#define WAIT_PLLQ2_LOW() \
    while ( READ_PLLQ2() );


#define WAIT_PLLQ2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLQ2() && (--___t___ > 0)); }


#define WAIT_PLLQ2_HIGH() \
    while (! READ_PLLQ2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pllcfgr
//
// Return the value of register PLLCFGR
//
// Notes : Register PLL configuration register (PLLCFGR) at the offset 0x4, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) division factor for USB OTG FS, SDIO and 
    // random number generator clocks 
    // 
#define PLLQ3_MASK 0x8000000U
#define PLLQ3_OFFSET 27
#define PLLQ3_START_BIT 27
#define PLLQ3_WIDTH 1



typedef enum pllq3 {
    PLLQ_3_0,
    PLLQ_3_1
} PLLQ_3_T ;
#define WRITE_PLLQ3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PLLQ3_MASK) | ((val << PLLQ3_START_BIT) & PLLQ3_MASK )); \
   } 

#define ENABLE_PLLQ3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PLLQ3_MASK ); \
   }

#define DISABLE_PLLQ3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PLLQ3_MASK ); \
   } 

#define READ_PLLQ3() \
   ((READ_REGISTER_ULONG(0x4) & PLLQ3_MASK)  >> PLLQ3_START_BIT)

#define WHEN_PLLQ3_HIGH() \
     if ( READ_PLLQ3() )


#define UNLESS_PLLQ3_HIGH() \
     if (! READ_PLLQ3() )


#define WAIT_PLLQ3_LOW() \
    while ( READ_PLLQ3() );


#define WAIT_PLLQ3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLQ3() && (--___t___ > 0)); }


#define WAIT_PLLQ3_HIGH() \
    while (! READ_PLLQ3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cfgr
//
// Return the value of register CFGR
//
// Notes : Register Cfgr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : SW0
//
// Return the value of register Cfgr
//
// Notes : System clock switch 
//        (CFGR) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SW0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SW0_MASK) | ((val << SW0_START_BIT) & SW0_MASK )); \
   } 

#define ENABLE_SW0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SW0_MASK ); \
   }

#define DISABLE_SW0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SW0_MASK ); \
   } 

#define READ_SW0() \
   ((READ_REGISTER_ULONG(0x8) & SW0_MASK)  >> SW0_START_BIT)

#define WHEN_SW0_HIGH() \
     if ( READ_SW0() )


#define UNLESS_SW0_HIGH() \
     if (! READ_SW0() )


#define WAIT_SW0_LOW() \
    while ( READ_SW0() );


#define WAIT_SW0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SW0() && (--___t___ > 0)); }


#define WAIT_SW0_HIGH() \
    while (! READ_SW0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SW1
//
// Return the value of register Cfgr
//
// Notes : System clock switch 
//        (CFGR) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SW1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SW1_MASK) | ((val << SW1_START_BIT) & SW1_MASK )); \
   } 

#define ENABLE_SW1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SW1_MASK ); \
   }

#define DISABLE_SW1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SW1_MASK ); \
   } 

#define READ_SW1() \
   ((READ_REGISTER_ULONG(0x8) & SW1_MASK)  >> SW1_START_BIT)

#define WHEN_SW1_HIGH() \
     if ( READ_SW1() )


#define UNLESS_SW1_HIGH() \
     if (! READ_SW1() )


#define WAIT_SW1_LOW() \
    while ( READ_SW1() );


#define WAIT_SW1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SW1() && (--___t___ > 0)); }


#define WAIT_SW1_HIGH() \
    while (! READ_SW1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SWS0
//
// Return the value of register Cfgr
//
// Notes : System clock switch status 
//        (CFGR) at the offset 0x8, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SWS0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SWS0_MASK) | ((val << SWS0_START_BIT) & SWS0_MASK )); \
   } 

#define ENABLE_SWS0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SWS0_MASK ); \
   }

#define DISABLE_SWS0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SWS0_MASK ); \
   } 

#define READ_SWS0() \
   ((READ_REGISTER_ULONG(0x8) & SWS0_MASK)  >> SWS0_START_BIT)

#define WHEN_SWS0_HIGH() \
     if ( READ_SWS0() )


#define UNLESS_SWS0_HIGH() \
     if (! READ_SWS0() )


#define WAIT_SWS0_LOW() \
    while ( READ_SWS0() );


#define WAIT_SWS0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWS0() && (--___t___ > 0)); }


#define WAIT_SWS0_HIGH() \
    while (! READ_SWS0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SWS1
//
// Return the value of register Cfgr
//
// Notes : System clock switch status 
//        (CFGR) at the offset 0x8, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SWS1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SWS1_MASK) | ((val << SWS1_START_BIT) & SWS1_MASK )); \
   } 

#define ENABLE_SWS1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SWS1_MASK ); \
   }

#define DISABLE_SWS1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SWS1_MASK ); \
   } 

#define READ_SWS1() \
   ((READ_REGISTER_ULONG(0x8) & SWS1_MASK)  >> SWS1_START_BIT)

#define WHEN_SWS1_HIGH() \
     if ( READ_SWS1() )


#define UNLESS_SWS1_HIGH() \
     if (! READ_SWS1() )


#define WAIT_SWS1_LOW() \
    while ( READ_SWS1() );


#define WAIT_SWS1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWS1() && (--___t___ > 0)); }


#define WAIT_SWS1_HIGH() \
    while (! READ_SWS1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : HPRE
//
// Return the value of register Cfgr
//
// Notes : AHB prescaler 
//        (CFGR) at the offset 0x8, Bits 4:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_HPRE() \
   ((READ_REGISTER_ULONG(0x8) & HPRE_MASK)  >> HPRE_START_BIT)

#define WRITE_HPRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ HPRE_MASK) | ((val << HPRE_START_BIT) & HPRE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PPRE1
//
// Return the value of register Cfgr
//
// Notes : APB Low speed prescaler (APB1) 
//        (CFGR) at the offset 0x8, Bits 10:12
//
/////////////////////////////////////////////////////////////////////////
#define READ_PPRE1() \
   ((READ_REGISTER_ULONG(0x8) & PPRE1_MASK)  >> PPRE1_START_BIT)

#define WRITE_PPRE1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ PPRE1_MASK) | ((val << PPRE1_START_BIT) & PPRE1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PPRE2
//
// Return the value of register Cfgr
//
// Notes : APB high-speed prescaler (APB2) 
//        (CFGR) at the offset 0x8, Bits 13:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_PPRE2() \
   ((READ_REGISTER_ULONG(0x8) & PPRE2_MASK)  >> PPRE2_START_BIT)

#define WRITE_PPRE2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ PPRE2_MASK) | ((val << PPRE2_START_BIT) & PPRE2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RTCPRE
//
// Return the value of register Cfgr
//
// Notes : HSE division factor for RTC clock 
//        (CFGR) at the offset 0x8, Bits 16:20
//
/////////////////////////////////////////////////////////////////////////
#define READ_RTCPRE() \
   ((READ_REGISTER_ULONG(0x8) & RTCPRE_MASK)  >> RTCPRE_START_BIT)

#define WRITE_RTCPRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ RTCPRE_MASK) | ((val << RTCPRE_START_BIT) & RTCPRE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MCO1
//
// Return the value of register Cfgr
//
// Notes : Microcontroller clock output 1 
//        (CFGR) at the offset 0x8, Bits 21:22
//
/////////////////////////////////////////////////////////////////////////
#define READ_MCO1() \
   ((READ_REGISTER_ULONG(0x8) & MCO1_MASK)  >> MCO1_START_BIT)

#define WRITE_MCO1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MCO1_MASK) | ((val << MCO1_START_BIT) & MCO1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2SSRC
//
// Return the value of register Cfgr
//
// Notes : I2S clock selection 
//        (CFGR) at the offset 0x8, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_I2SSRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ I2SSRC_MASK) | ((val << I2SSRC_START_BIT) & I2SSRC_MASK )); \
   } 

#define ENABLE_I2SSRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  I2SSRC_MASK ); \
   }

#define DISABLE_I2SSRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~I2SSRC_MASK ); \
   } 

#define READ_I2SSRC() \
   ((READ_REGISTER_ULONG(0x8) & I2SSRC_MASK)  >> I2SSRC_START_BIT)

#define WHEN_I2SSRC_HIGH() \
     if ( READ_I2SSRC() )


#define UNLESS_I2SSRC_HIGH() \
     if (! READ_I2SSRC() )


#define WAIT_I2SSRC_LOW() \
    while ( READ_I2SSRC() );


#define WAIT_I2SSRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2SSRC() && (--___t___ > 0)); }


#define WAIT_I2SSRC_HIGH() \
    while (! READ_I2SSRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MCO1PRE
//
// Return the value of register Cfgr
//
// Notes : MCO1 prescaler 
//        (CFGR) at the offset 0x8, Bits 24:26
//
/////////////////////////////////////////////////////////////////////////
#define READ_MCO1PRE() \
   ((READ_REGISTER_ULONG(0x8) & MCO1PRE_MASK)  >> MCO1PRE_START_BIT)

#define WRITE_MCO1PRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MCO1PRE_MASK) | ((val << MCO1PRE_START_BIT) & MCO1PRE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MCO2PRE
//
// Return the value of register Cfgr
//
// Notes : MCO2 prescaler 
//        (CFGR) at the offset 0x8, Bits 27:29
//
/////////////////////////////////////////////////////////////////////////
#define READ_MCO2PRE() \
   ((READ_REGISTER_ULONG(0x8) & MCO2PRE_MASK)  >> MCO2PRE_START_BIT)

#define WRITE_MCO2PRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MCO2PRE_MASK) | ((val << MCO2PRE_START_BIT) & MCO2PRE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MCO2
//
// Return the value of register Cfgr
//
// Notes : Microcontroller clock output 2 
//        (CFGR) at the offset 0x8, Bits 30:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_MCO2() \
   ((READ_REGISTER_ULONG(0x8) & MCO2_MASK)  >> MCO2_START_BIT)

#define WRITE_MCO2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MCO2_MASK) | ((val << MCO2_START_BIT) & MCO2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register Cir at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LSI ready interrupt flag 
    // 
#define LSIRDYF_MASK 0x1U
#define LSIRDYF_OFFSET 0
#define LSIRDYF_START_BIT 0
#define LSIRDYF_WIDTH 1


#define CIR_REG 0xC

typedef enum lsirdyf {
    LSIRDYF_0,
    LSIRDYF_1
} LSIRDYF_T ;
#define WRITE_LSIRDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LSIRDYF_MASK) | ((val << LSIRDYF_START_BIT) & LSIRDYF_MASK )); \
   } 

#define ENABLE_LSIRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LSIRDYF_MASK ); \
   }

#define DISABLE_LSIRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LSIRDYF_MASK ); \
   } 

#define READ_LSIRDYF() \
   ((READ_REGISTER_ULONG(0xC) & LSIRDYF_MASK)  >> LSIRDYF_START_BIT)

#define WHEN_LSIRDYF_HIGH() \
     if ( READ_LSIRDYF() )


#define UNLESS_LSIRDYF_HIGH() \
     if (! READ_LSIRDYF() )


#define WAIT_LSIRDYF_LOW() \
    while ( READ_LSIRDYF() );


#define WAIT_LSIRDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSIRDYF() && (--___t___ > 0)); }


#define WAIT_LSIRDYF_HIGH() \
    while (! READ_LSIRDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LSE ready interrupt flag 
    // 
#define LSERDYF_MASK 0x2U
#define LSERDYF_OFFSET 1
#define LSERDYF_START_BIT 1
#define LSERDYF_WIDTH 1



typedef enum lserdyf {
    LSERDYF_0,
    LSERDYF_1
} LSERDYF_T ;
#define WRITE_LSERDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LSERDYF_MASK) | ((val << LSERDYF_START_BIT) & LSERDYF_MASK )); \
   } 

#define ENABLE_LSERDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LSERDYF_MASK ); \
   }

#define DISABLE_LSERDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LSERDYF_MASK ); \
   } 

#define READ_LSERDYF() \
   ((READ_REGISTER_ULONG(0xC) & LSERDYF_MASK)  >> LSERDYF_START_BIT)

#define WHEN_LSERDYF_HIGH() \
     if ( READ_LSERDYF() )


#define UNLESS_LSERDYF_HIGH() \
     if (! READ_LSERDYF() )


#define WAIT_LSERDYF_LOW() \
    while ( READ_LSERDYF() );


#define WAIT_LSERDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSERDYF() && (--___t___ > 0)); }


#define WAIT_LSERDYF_HIGH() \
    while (! READ_LSERDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HSI ready interrupt flag 
    // 
#define HSIRDYF_MASK 0x4U
#define HSIRDYF_OFFSET 2
#define HSIRDYF_START_BIT 2
#define HSIRDYF_WIDTH 1



typedef enum hsirdyf {
    HSIRDYF_0,
    HSIRDYF_1
} HSIRDYF_T ;
#define WRITE_HSIRDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HSIRDYF_MASK) | ((val << HSIRDYF_START_BIT) & HSIRDYF_MASK )); \
   } 

#define ENABLE_HSIRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HSIRDYF_MASK ); \
   }

#define DISABLE_HSIRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HSIRDYF_MASK ); \
   } 

#define READ_HSIRDYF() \
   ((READ_REGISTER_ULONG(0xC) & HSIRDYF_MASK)  >> HSIRDYF_START_BIT)

#define WHEN_HSIRDYF_HIGH() \
     if ( READ_HSIRDYF() )


#define UNLESS_HSIRDYF_HIGH() \
     if (! READ_HSIRDYF() )


#define WAIT_HSIRDYF_LOW() \
    while ( READ_HSIRDYF() );


#define WAIT_HSIRDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSIRDYF() && (--___t___ > 0)); }


#define WAIT_HSIRDYF_HIGH() \
    while (! READ_HSIRDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HSE ready interrupt flag 
    // 
#define HSERDYF_MASK 0x8U
#define HSERDYF_OFFSET 3
#define HSERDYF_START_BIT 3
#define HSERDYF_WIDTH 1



typedef enum hserdyf {
    HSERDYF_0,
    HSERDYF_1
} HSERDYF_T ;
#define WRITE_HSERDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HSERDYF_MASK) | ((val << HSERDYF_START_BIT) & HSERDYF_MASK )); \
   } 

#define ENABLE_HSERDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HSERDYF_MASK ); \
   }

#define DISABLE_HSERDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HSERDYF_MASK ); \
   } 

#define READ_HSERDYF() \
   ((READ_REGISTER_ULONG(0xC) & HSERDYF_MASK)  >> HSERDYF_START_BIT)

#define WHEN_HSERDYF_HIGH() \
     if ( READ_HSERDYF() )


#define UNLESS_HSERDYF_HIGH() \
     if (! READ_HSERDYF() )


#define WAIT_HSERDYF_LOW() \
    while ( READ_HSERDYF() );


#define WAIT_HSERDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSERDYF() && (--___t___ > 0)); }


#define WAIT_HSERDYF_HIGH() \
    while (! READ_HSERDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) ready interrupt flag 
    // 
#define PLLRDYF_MASK 0x10U
#define PLLRDYF_OFFSET 4
#define PLLRDYF_START_BIT 4
#define PLLRDYF_WIDTH 1



typedef enum pllrdyf {
    PLLRDYF_0,
    PLLRDYF_1
} PLLRDYF_T ;
#define WRITE_PLLRDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLRDYF_MASK) | ((val << PLLRDYF_START_BIT) & PLLRDYF_MASK )); \
   } 

#define ENABLE_PLLRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLRDYF_MASK ); \
   }

#define DISABLE_PLLRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLRDYF_MASK ); \
   } 

#define READ_PLLRDYF() \
   ((READ_REGISTER_ULONG(0xC) & PLLRDYF_MASK)  >> PLLRDYF_START_BIT)

#define WHEN_PLLRDYF_HIGH() \
     if ( READ_PLLRDYF() )


#define UNLESS_PLLRDYF_HIGH() \
     if (! READ_PLLRDYF() )


#define WAIT_PLLRDYF_LOW() \
    while ( READ_PLLRDYF() );


#define WAIT_PLLRDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLRDYF() && (--___t___ > 0)); }


#define WAIT_PLLRDYF_HIGH() \
    while (! READ_PLLRDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S ready interrupt flag 
    // 
#define PLLI2SRDYF_MASK 0x20U
#define PLLI2SRDYF_OFFSET 5
#define PLLI2SRDYF_START_BIT 5
#define PLLI2SRDYF_WIDTH 1



typedef enum plli2srdyf {
    PLLI_2SRDYF_0,
    PLLI_2SRDYF_1
} PLLI_2SRDYF_T ;
#define WRITE_PLLI2SRDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLI2SRDYF_MASK) | ((val << PLLI2SRDYF_START_BIT) & PLLI2SRDYF_MASK )); \
   } 

#define ENABLE_PLLI2SRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLI2SRDYF_MASK ); \
   }

#define DISABLE_PLLI2SRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLI2SRDYF_MASK ); \
   } 

#define READ_PLLI2SRDYF() \
   ((READ_REGISTER_ULONG(0xC) & PLLI2SRDYF_MASK)  >> PLLI2SRDYF_START_BIT)

#define WHEN_PLLI2SRDYF_HIGH() \
     if ( READ_PLLI2SRDYF() )


#define UNLESS_PLLI2SRDYF_HIGH() \
     if (! READ_PLLI2SRDYF() )


#define WAIT_PLLI2SRDYF_LOW() \
    while ( READ_PLLI2SRDYF() );


#define WAIT_PLLI2SRDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLI2SRDYF() && (--___t___ > 0)); }


#define WAIT_PLLI2SRDYF_HIGH() \
    while (! READ_PLLI2SRDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI ready interrupt flag 
    // 
#define PLLSAIRDYF_MASK 0x40U
#define PLLSAIRDYF_OFFSET 6
#define PLLSAIRDYF_START_BIT 6
#define PLLSAIRDYF_WIDTH 1



typedef enum pllsairdyf {
    PLLSAIRDYF_0,
    PLLSAIRDYF_1
} PLLSAIRDYF_T ;
#define WRITE_PLLSAIRDYF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLSAIRDYF_MASK) | ((val << PLLSAIRDYF_START_BIT) & PLLSAIRDYF_MASK )); \
   } 

#define ENABLE_PLLSAIRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLSAIRDYF_MASK ); \
   }

#define DISABLE_PLLSAIRDYF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLSAIRDYF_MASK ); \
   } 

#define READ_PLLSAIRDYF() \
   ((READ_REGISTER_ULONG(0xC) & PLLSAIRDYF_MASK)  >> PLLSAIRDYF_START_BIT)

#define WHEN_PLLSAIRDYF_HIGH() \
     if ( READ_PLLSAIRDYF() )


#define UNLESS_PLLSAIRDYF_HIGH() \
     if (! READ_PLLSAIRDYF() )


#define WAIT_PLLSAIRDYF_LOW() \
    while ( READ_PLLSAIRDYF() );


#define WAIT_PLLSAIRDYF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLSAIRDYF() && (--___t___ > 0)); }


#define WAIT_PLLSAIRDYF_HIGH() \
    while (! READ_PLLSAIRDYF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock security system interrupt flag 
    // 
#define CSSF_MASK 0x80U
#define CSSF_OFFSET 7
#define CSSF_START_BIT 7
#define CSSF_WIDTH 1



typedef enum cssf {
    CSSF_0,
    CSSF_1
} CSSF_T ;
#define WRITE_CSSF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CSSF_MASK) | ((val << CSSF_START_BIT) & CSSF_MASK )); \
   } 

#define ENABLE_CSSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CSSF_MASK ); \
   }

#define DISABLE_CSSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CSSF_MASK ); \
   } 

#define READ_CSSF() \
   ((READ_REGISTER_ULONG(0xC) & CSSF_MASK)  >> CSSF_START_BIT)

#define WHEN_CSSF_HIGH() \
     if ( READ_CSSF() )


#define UNLESS_CSSF_HIGH() \
     if (! READ_CSSF() )


#define WAIT_CSSF_LOW() \
    while ( READ_CSSF() );


#define WAIT_CSSF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSSF() && (--___t___ > 0)); }


#define WAIT_CSSF_HIGH() \
    while (! READ_CSSF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LSI ready interrupt enable 
    // 
#define LSIRDYIE_MASK 0x100U
#define LSIRDYIE_OFFSET 8
#define LSIRDYIE_START_BIT 8
#define LSIRDYIE_WIDTH 1



typedef enum lsirdyie {
    LSIRDYIE_0,
    LSIRDYIE_1
} LSIRDYIE_T ;
#define WRITE_LSIRDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LSIRDYIE_MASK) | ((val << LSIRDYIE_START_BIT) & LSIRDYIE_MASK )); \
   } 

#define ENABLE_LSIRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LSIRDYIE_MASK ); \
   }

#define DISABLE_LSIRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LSIRDYIE_MASK ); \
   } 

#define READ_LSIRDYIE() \
   ((READ_REGISTER_ULONG(0xC) & LSIRDYIE_MASK)  >> LSIRDYIE_START_BIT)

#define WHEN_LSIRDYIE_HIGH() \
     if ( READ_LSIRDYIE() )


#define UNLESS_LSIRDYIE_HIGH() \
     if (! READ_LSIRDYIE() )


#define WAIT_LSIRDYIE_LOW() \
    while ( READ_LSIRDYIE() );


#define WAIT_LSIRDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSIRDYIE() && (--___t___ > 0)); }


#define WAIT_LSIRDYIE_HIGH() \
    while (! READ_LSIRDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LSE ready interrupt enable 
    // 
#define LSERDYIE_MASK 0x200U
#define LSERDYIE_OFFSET 9
#define LSERDYIE_START_BIT 9
#define LSERDYIE_WIDTH 1



typedef enum lserdyie {
    LSERDYIE_0,
    LSERDYIE_1
} LSERDYIE_T ;
#define WRITE_LSERDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LSERDYIE_MASK) | ((val << LSERDYIE_START_BIT) & LSERDYIE_MASK )); \
   } 

#define ENABLE_LSERDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LSERDYIE_MASK ); \
   }

#define DISABLE_LSERDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LSERDYIE_MASK ); \
   } 

#define READ_LSERDYIE() \
   ((READ_REGISTER_ULONG(0xC) & LSERDYIE_MASK)  >> LSERDYIE_START_BIT)

#define WHEN_LSERDYIE_HIGH() \
     if ( READ_LSERDYIE() )


#define UNLESS_LSERDYIE_HIGH() \
     if (! READ_LSERDYIE() )


#define WAIT_LSERDYIE_LOW() \
    while ( READ_LSERDYIE() );


#define WAIT_LSERDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSERDYIE() && (--___t___ > 0)); }


#define WAIT_LSERDYIE_HIGH() \
    while (! READ_LSERDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HSI ready interrupt enable 
    // 
#define HSIRDYIE_MASK 0x400U
#define HSIRDYIE_OFFSET 10
#define HSIRDYIE_START_BIT 10
#define HSIRDYIE_WIDTH 1



typedef enum hsirdyie {
    HSIRDYIE_0,
    HSIRDYIE_1
} HSIRDYIE_T ;
#define WRITE_HSIRDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HSIRDYIE_MASK) | ((val << HSIRDYIE_START_BIT) & HSIRDYIE_MASK )); \
   } 

#define ENABLE_HSIRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HSIRDYIE_MASK ); \
   }

#define DISABLE_HSIRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HSIRDYIE_MASK ); \
   } 

#define READ_HSIRDYIE() \
   ((READ_REGISTER_ULONG(0xC) & HSIRDYIE_MASK)  >> HSIRDYIE_START_BIT)

#define WHEN_HSIRDYIE_HIGH() \
     if ( READ_HSIRDYIE() )


#define UNLESS_HSIRDYIE_HIGH() \
     if (! READ_HSIRDYIE() )


#define WAIT_HSIRDYIE_LOW() \
    while ( READ_HSIRDYIE() );


#define WAIT_HSIRDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSIRDYIE() && (--___t___ > 0)); }


#define WAIT_HSIRDYIE_HIGH() \
    while (! READ_HSIRDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HSE ready interrupt enable 
    // 
#define HSERDYIE_MASK 0x800U
#define HSERDYIE_OFFSET 11
#define HSERDYIE_START_BIT 11
#define HSERDYIE_WIDTH 1



typedef enum hserdyie {
    HSERDYIE_0,
    HSERDYIE_1
} HSERDYIE_T ;
#define WRITE_HSERDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HSERDYIE_MASK) | ((val << HSERDYIE_START_BIT) & HSERDYIE_MASK )); \
   } 

#define ENABLE_HSERDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HSERDYIE_MASK ); \
   }

#define DISABLE_HSERDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HSERDYIE_MASK ); \
   } 

#define READ_HSERDYIE() \
   ((READ_REGISTER_ULONG(0xC) & HSERDYIE_MASK)  >> HSERDYIE_START_BIT)

#define WHEN_HSERDYIE_HIGH() \
     if ( READ_HSERDYIE() )


#define UNLESS_HSERDYIE_HIGH() \
     if (! READ_HSERDYIE() )


#define WAIT_HSERDYIE_LOW() \
    while ( READ_HSERDYIE() );


#define WAIT_HSERDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSERDYIE() && (--___t___ > 0)); }


#define WAIT_HSERDYIE_HIGH() \
    while (! READ_HSERDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL (PLL) ready interrupt enable 
    // 
#define PLLRDYIE_MASK 0x1000U
#define PLLRDYIE_OFFSET 12
#define PLLRDYIE_START_BIT 12
#define PLLRDYIE_WIDTH 1



typedef enum pllrdyie {
    PLLRDYIE_0,
    PLLRDYIE_1
} PLLRDYIE_T ;
#define WRITE_PLLRDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLRDYIE_MASK) | ((val << PLLRDYIE_START_BIT) & PLLRDYIE_MASK )); \
   } 

#define ENABLE_PLLRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLRDYIE_MASK ); \
   }

#define DISABLE_PLLRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLRDYIE_MASK ); \
   } 

#define READ_PLLRDYIE() \
   ((READ_REGISTER_ULONG(0xC) & PLLRDYIE_MASK)  >> PLLRDYIE_START_BIT)

#define WHEN_PLLRDYIE_HIGH() \
     if ( READ_PLLRDYIE() )


#define UNLESS_PLLRDYIE_HIGH() \
     if (! READ_PLLRDYIE() )


#define WAIT_PLLRDYIE_LOW() \
    while ( READ_PLLRDYIE() );


#define WAIT_PLLRDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLRDYIE() && (--___t___ > 0)); }


#define WAIT_PLLRDYIE_HIGH() \
    while (! READ_PLLRDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S ready interrupt enable 
    // 
#define PLLI2SRDYIE_MASK 0x2000U
#define PLLI2SRDYIE_OFFSET 13
#define PLLI2SRDYIE_START_BIT 13
#define PLLI2SRDYIE_WIDTH 1



typedef enum plli2srdyie {
    PLLI_2SRDYIE_0,
    PLLI_2SRDYIE_1
} PLLI_2SRDYIE_T ;
#define WRITE_PLLI2SRDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLI2SRDYIE_MASK) | ((val << PLLI2SRDYIE_START_BIT) & PLLI2SRDYIE_MASK )); \
   } 

#define ENABLE_PLLI2SRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLI2SRDYIE_MASK ); \
   }

#define DISABLE_PLLI2SRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLI2SRDYIE_MASK ); \
   } 

#define READ_PLLI2SRDYIE() \
   ((READ_REGISTER_ULONG(0xC) & PLLI2SRDYIE_MASK)  >> PLLI2SRDYIE_START_BIT)

#define WHEN_PLLI2SRDYIE_HIGH() \
     if ( READ_PLLI2SRDYIE() )


#define UNLESS_PLLI2SRDYIE_HIGH() \
     if (! READ_PLLI2SRDYIE() )


#define WAIT_PLLI2SRDYIE_LOW() \
    while ( READ_PLLI2SRDYIE() );


#define WAIT_PLLI2SRDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLI2SRDYIE() && (--___t___ > 0)); }


#define WAIT_PLLI2SRDYIE_HIGH() \
    while (! READ_PLLI2SRDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI Ready Interrupt Enable 
    // 
#define PLLSAIRDYIE_MASK 0x4000U
#define PLLSAIRDYIE_OFFSET 14
#define PLLSAIRDYIE_START_BIT 14
#define PLLSAIRDYIE_WIDTH 1



typedef enum pllsairdyie {
    PLLSAIRDYIE_0,
    PLLSAIRDYIE_1
} PLLSAIRDYIE_T ;
#define WRITE_PLLSAIRDYIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLSAIRDYIE_MASK) | ((val << PLLSAIRDYIE_START_BIT) & PLLSAIRDYIE_MASK )); \
   } 

#define ENABLE_PLLSAIRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLSAIRDYIE_MASK ); \
   }

#define DISABLE_PLLSAIRDYIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLSAIRDYIE_MASK ); \
   } 

#define READ_PLLSAIRDYIE() \
   ((READ_REGISTER_ULONG(0xC) & PLLSAIRDYIE_MASK)  >> PLLSAIRDYIE_START_BIT)

#define WHEN_PLLSAIRDYIE_HIGH() \
     if ( READ_PLLSAIRDYIE() )


#define UNLESS_PLLSAIRDYIE_HIGH() \
     if (! READ_PLLSAIRDYIE() )


#define WAIT_PLLSAIRDYIE_LOW() \
    while ( READ_PLLSAIRDYIE() );


#define WAIT_PLLSAIRDYIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLSAIRDYIE() && (--___t___ > 0)); }


#define WAIT_PLLSAIRDYIE_HIGH() \
    while (! READ_PLLSAIRDYIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LSI ready interrupt clear 
    // 
#define LSIRDYC_MASK 0x10000U
#define LSIRDYC_OFFSET 16
#define LSIRDYC_START_BIT 16
#define LSIRDYC_WIDTH 1



typedef enum lsirdyc {
    LSIRDYC_0,
    LSIRDYC_1
} LSIRDYC_T ;
#define WRITE_LSIRDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LSIRDYC_MASK) | ((val << LSIRDYC_START_BIT) & LSIRDYC_MASK )); \
   } 

#define ENABLE_LSIRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LSIRDYC_MASK ); \
   }

#define DISABLE_LSIRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LSIRDYC_MASK ); \
   } 

#define READ_LSIRDYC() \
   ((READ_REGISTER_ULONG(0xC) & LSIRDYC_MASK)  >> LSIRDYC_START_BIT)

#define WHEN_LSIRDYC_HIGH() \
     if ( READ_LSIRDYC() )


#define UNLESS_LSIRDYC_HIGH() \
     if (! READ_LSIRDYC() )


#define WAIT_LSIRDYC_LOW() \
    while ( READ_LSIRDYC() );


#define WAIT_LSIRDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSIRDYC() && (--___t___ > 0)); }


#define WAIT_LSIRDYC_HIGH() \
    while (! READ_LSIRDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LSE ready interrupt clear 
    // 
#define LSERDYC_MASK 0x20000U
#define LSERDYC_OFFSET 17
#define LSERDYC_START_BIT 17
#define LSERDYC_WIDTH 1



typedef enum lserdyc {
    LSERDYC_0,
    LSERDYC_1
} LSERDYC_T ;
#define WRITE_LSERDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ LSERDYC_MASK) | ((val << LSERDYC_START_BIT) & LSERDYC_MASK )); \
   } 

#define ENABLE_LSERDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  LSERDYC_MASK ); \
   }

#define DISABLE_LSERDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~LSERDYC_MASK ); \
   } 

#define READ_LSERDYC() \
   ((READ_REGISTER_ULONG(0xC) & LSERDYC_MASK)  >> LSERDYC_START_BIT)

#define WHEN_LSERDYC_HIGH() \
     if ( READ_LSERDYC() )


#define UNLESS_LSERDYC_HIGH() \
     if (! READ_LSERDYC() )


#define WAIT_LSERDYC_LOW() \
    while ( READ_LSERDYC() );


#define WAIT_LSERDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSERDYC() && (--___t___ > 0)); }


#define WAIT_LSERDYC_HIGH() \
    while (! READ_LSERDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HSI ready interrupt clear 
    // 
#define HSIRDYC_MASK 0x40000U
#define HSIRDYC_OFFSET 18
#define HSIRDYC_START_BIT 18
#define HSIRDYC_WIDTH 1



typedef enum hsirdyc {
    HSIRDYC_0,
    HSIRDYC_1
} HSIRDYC_T ;
#define WRITE_HSIRDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HSIRDYC_MASK) | ((val << HSIRDYC_START_BIT) & HSIRDYC_MASK )); \
   } 

#define ENABLE_HSIRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HSIRDYC_MASK ); \
   }

#define DISABLE_HSIRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HSIRDYC_MASK ); \
   } 

#define READ_HSIRDYC() \
   ((READ_REGISTER_ULONG(0xC) & HSIRDYC_MASK)  >> HSIRDYC_START_BIT)

#define WHEN_HSIRDYC_HIGH() \
     if ( READ_HSIRDYC() )


#define UNLESS_HSIRDYC_HIGH() \
     if (! READ_HSIRDYC() )


#define WAIT_HSIRDYC_LOW() \
    while ( READ_HSIRDYC() );


#define WAIT_HSIRDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSIRDYC() && (--___t___ > 0)); }


#define WAIT_HSIRDYC_HIGH() \
    while (! READ_HSIRDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HSE ready interrupt clear 
    // 
#define HSERDYC_MASK 0x80000U
#define HSERDYC_OFFSET 19
#define HSERDYC_START_BIT 19
#define HSERDYC_WIDTH 1



typedef enum hserdyc {
    HSERDYC_0,
    HSERDYC_1
} HSERDYC_T ;
#define WRITE_HSERDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HSERDYC_MASK) | ((val << HSERDYC_START_BIT) & HSERDYC_MASK )); \
   } 

#define ENABLE_HSERDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HSERDYC_MASK ); \
   }

#define DISABLE_HSERDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HSERDYC_MASK ); \
   } 

#define READ_HSERDYC() \
   ((READ_REGISTER_ULONG(0xC) & HSERDYC_MASK)  >> HSERDYC_START_BIT)

#define WHEN_HSERDYC_HIGH() \
     if ( READ_HSERDYC() )


#define UNLESS_HSERDYC_HIGH() \
     if (! READ_HSERDYC() )


#define WAIT_HSERDYC_LOW() \
    while ( READ_HSERDYC() );


#define WAIT_HSERDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSERDYC() && (--___t___ > 0)); }


#define WAIT_HSERDYC_HIGH() \
    while (! READ_HSERDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Main PLL(PLL) ready interrupt clear 
    // 
#define PLLRDYC_MASK 0x100000U
#define PLLRDYC_OFFSET 20
#define PLLRDYC_START_BIT 20
#define PLLRDYC_WIDTH 1



typedef enum pllrdyc {
    PLLRDYC_0,
    PLLRDYC_1
} PLLRDYC_T ;
#define WRITE_PLLRDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLRDYC_MASK) | ((val << PLLRDYC_START_BIT) & PLLRDYC_MASK )); \
   } 

#define ENABLE_PLLRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLRDYC_MASK ); \
   }

#define DISABLE_PLLRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLRDYC_MASK ); \
   } 

#define READ_PLLRDYC() \
   ((READ_REGISTER_ULONG(0xC) & PLLRDYC_MASK)  >> PLLRDYC_START_BIT)

#define WHEN_PLLRDYC_HIGH() \
     if ( READ_PLLRDYC() )


#define UNLESS_PLLRDYC_HIGH() \
     if (! READ_PLLRDYC() )


#define WAIT_PLLRDYC_LOW() \
    while ( READ_PLLRDYC() );


#define WAIT_PLLRDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLRDYC() && (--___t___ > 0)); }


#define WAIT_PLLRDYC_HIGH() \
    while (! READ_PLLRDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S ready interrupt clear 
    // 
#define PLLI2SRDYC_MASK 0x200000U
#define PLLI2SRDYC_OFFSET 21
#define PLLI2SRDYC_START_BIT 21
#define PLLI2SRDYC_WIDTH 1



typedef enum plli2srdyc {
    PLLI_2SRDYC_0,
    PLLI_2SRDYC_1
} PLLI_2SRDYC_T ;
#define WRITE_PLLI2SRDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLI2SRDYC_MASK) | ((val << PLLI2SRDYC_START_BIT) & PLLI2SRDYC_MASK )); \
   } 

#define ENABLE_PLLI2SRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLI2SRDYC_MASK ); \
   }

#define DISABLE_PLLI2SRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLI2SRDYC_MASK ); \
   } 

#define READ_PLLI2SRDYC() \
   ((READ_REGISTER_ULONG(0xC) & PLLI2SRDYC_MASK)  >> PLLI2SRDYC_START_BIT)

#define WHEN_PLLI2SRDYC_HIGH() \
     if ( READ_PLLI2SRDYC() )


#define UNLESS_PLLI2SRDYC_HIGH() \
     if (! READ_PLLI2SRDYC() )


#define WAIT_PLLI2SRDYC_LOW() \
    while ( READ_PLLI2SRDYC() );


#define WAIT_PLLI2SRDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLI2SRDYC() && (--___t___ > 0)); }


#define WAIT_PLLI2SRDYC_HIGH() \
    while (! READ_PLLI2SRDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI Ready Interrupt Clear 
    // 
#define PLLSAIRDYC_MASK 0x400000U
#define PLLSAIRDYC_OFFSET 22
#define PLLSAIRDYC_START_BIT 22
#define PLLSAIRDYC_WIDTH 1



typedef enum pllsairdyc {
    PLLSAIRDYC_0,
    PLLSAIRDYC_1
} PLLSAIRDYC_T ;
#define WRITE_PLLSAIRDYC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PLLSAIRDYC_MASK) | ((val << PLLSAIRDYC_START_BIT) & PLLSAIRDYC_MASK )); \
   } 

#define ENABLE_PLLSAIRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PLLSAIRDYC_MASK ); \
   }

#define DISABLE_PLLSAIRDYC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PLLSAIRDYC_MASK ); \
   } 

#define READ_PLLSAIRDYC() \
   ((READ_REGISTER_ULONG(0xC) & PLLSAIRDYC_MASK)  >> PLLSAIRDYC_START_BIT)

#define WHEN_PLLSAIRDYC_HIGH() \
     if ( READ_PLLSAIRDYC() )


#define UNLESS_PLLSAIRDYC_HIGH() \
     if (! READ_PLLSAIRDYC() )


#define WAIT_PLLSAIRDYC_LOW() \
    while ( READ_PLLSAIRDYC() );


#define WAIT_PLLSAIRDYC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PLLSAIRDYC() && (--___t___ > 0)); }


#define WAIT_PLLSAIRDYC_HIGH() \
    while (! READ_PLLSAIRDYC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cir
//
// Return the value of register CIR
//
// Notes : Register clock interrupt register (CIR) at the offset 0xC, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock security system interrupt clear 
    // 
#define CSSC_MASK 0x800000U
#define CSSC_OFFSET 23
#define CSSC_START_BIT 23
#define CSSC_WIDTH 1



typedef enum cssc {
    CSSC_0,
    CSSC_1
} CSSC_T ;
#define WRITE_CSSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CSSC_MASK) | ((val << CSSC_START_BIT) & CSSC_MASK )); \
   } 

#define ENABLE_CSSC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CSSC_MASK ); \
   }

#define DISABLE_CSSC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CSSC_MASK ); \
   } 

#define READ_CSSC() \
   ((READ_REGISTER_ULONG(0xC) & CSSC_MASK)  >> CSSC_START_BIT)

#define WHEN_CSSC_HIGH() \
     if ( READ_CSSC() )


#define UNLESS_CSSC_HIGH() \
     if (! READ_CSSC() )


#define WAIT_CSSC_LOW() \
    while ( READ_CSSC() );


#define WAIT_CSSC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSSC() && (--___t___ > 0)); }


#define WAIT_CSSC_HIGH() \
    while (! READ_CSSC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB1RSTR
//
// Notes : Register Ahb1rstr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_1RSTR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_AHB_1RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_1RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_1RSTR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port A reset 
    // 
#define GPIOARST_MASK 0x1U
#define GPIOARST_OFFSET 0
#define GPIOARST_START_BIT 0
#define GPIOARST_WIDTH 1


#define AHB_1RSTR_REG 0x10

typedef enum gpioarst {
    GPIOARST_0,
    GPIOARST_1
} GPIOARST_T ;
#define WRITE_GPIOARST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOARST_MASK) | ((val << GPIOARST_START_BIT) & GPIOARST_MASK )); \
   } 

#define ENABLE_GPIOARST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOARST_MASK ); \
   }

#define DISABLE_GPIOARST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOARST_MASK ); \
   } 

#define READ_GPIOARST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOARST_MASK)  >> GPIOARST_START_BIT)

#define WHEN_GPIOARST_HIGH() \
     if ( READ_GPIOARST() )


#define UNLESS_GPIOARST_HIGH() \
     if (! READ_GPIOARST() )


#define WAIT_GPIOARST_LOW() \
    while ( READ_GPIOARST() );


#define WAIT_GPIOARST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOARST() && (--___t___ > 0)); }


#define WAIT_GPIOARST_HIGH() \
    while (! READ_GPIOARST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port B reset 
    // 
#define GPIOBRST_MASK 0x2U
#define GPIOBRST_OFFSET 1
#define GPIOBRST_START_BIT 1
#define GPIOBRST_WIDTH 1



typedef enum gpiobrst {
    GPIOBRST_0,
    GPIOBRST_1
} GPIOBRST_T ;
#define WRITE_GPIOBRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOBRST_MASK) | ((val << GPIOBRST_START_BIT) & GPIOBRST_MASK )); \
   } 

#define ENABLE_GPIOBRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOBRST_MASK ); \
   }

#define DISABLE_GPIOBRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOBRST_MASK ); \
   } 

#define READ_GPIOBRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOBRST_MASK)  >> GPIOBRST_START_BIT)

#define WHEN_GPIOBRST_HIGH() \
     if ( READ_GPIOBRST() )


#define UNLESS_GPIOBRST_HIGH() \
     if (! READ_GPIOBRST() )


#define WAIT_GPIOBRST_LOW() \
    while ( READ_GPIOBRST() );


#define WAIT_GPIOBRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOBRST() && (--___t___ > 0)); }


#define WAIT_GPIOBRST_HIGH() \
    while (! READ_GPIOBRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port C reset 
    // 
#define GPIOCRST_MASK 0x4U
#define GPIOCRST_OFFSET 2
#define GPIOCRST_START_BIT 2
#define GPIOCRST_WIDTH 1



typedef enum gpiocrst {
    GPIOCRST_0,
    GPIOCRST_1
} GPIOCRST_T ;
#define WRITE_GPIOCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOCRST_MASK) | ((val << GPIOCRST_START_BIT) & GPIOCRST_MASK )); \
   } 

#define ENABLE_GPIOCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOCRST_MASK ); \
   }

#define DISABLE_GPIOCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOCRST_MASK ); \
   } 

#define READ_GPIOCRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOCRST_MASK)  >> GPIOCRST_START_BIT)

#define WHEN_GPIOCRST_HIGH() \
     if ( READ_GPIOCRST() )


#define UNLESS_GPIOCRST_HIGH() \
     if (! READ_GPIOCRST() )


#define WAIT_GPIOCRST_LOW() \
    while ( READ_GPIOCRST() );


#define WAIT_GPIOCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOCRST() && (--___t___ > 0)); }


#define WAIT_GPIOCRST_HIGH() \
    while (! READ_GPIOCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port D reset 
    // 
#define GPIODRST_MASK 0x8U
#define GPIODRST_OFFSET 3
#define GPIODRST_START_BIT 3
#define GPIODRST_WIDTH 1



typedef enum gpiodrst {
    GPIODRST_0,
    GPIODRST_1
} GPIODRST_T ;
#define WRITE_GPIODRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIODRST_MASK) | ((val << GPIODRST_START_BIT) & GPIODRST_MASK )); \
   } 

#define ENABLE_GPIODRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIODRST_MASK ); \
   }

#define DISABLE_GPIODRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIODRST_MASK ); \
   } 

#define READ_GPIODRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIODRST_MASK)  >> GPIODRST_START_BIT)

#define WHEN_GPIODRST_HIGH() \
     if ( READ_GPIODRST() )


#define UNLESS_GPIODRST_HIGH() \
     if (! READ_GPIODRST() )


#define WAIT_GPIODRST_LOW() \
    while ( READ_GPIODRST() );


#define WAIT_GPIODRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIODRST() && (--___t___ > 0)); }


#define WAIT_GPIODRST_HIGH() \
    while (! READ_GPIODRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port E reset 
    // 
#define GPIOERST_MASK 0x10U
#define GPIOERST_OFFSET 4
#define GPIOERST_START_BIT 4
#define GPIOERST_WIDTH 1



typedef enum gpioerst {
    GPIOERST_0,
    GPIOERST_1
} GPIOERST_T ;
#define WRITE_GPIOERST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOERST_MASK) | ((val << GPIOERST_START_BIT) & GPIOERST_MASK )); \
   } 

#define ENABLE_GPIOERST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOERST_MASK ); \
   }

#define DISABLE_GPIOERST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOERST_MASK ); \
   } 

#define READ_GPIOERST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOERST_MASK)  >> GPIOERST_START_BIT)

#define WHEN_GPIOERST_HIGH() \
     if ( READ_GPIOERST() )


#define UNLESS_GPIOERST_HIGH() \
     if (! READ_GPIOERST() )


#define WAIT_GPIOERST_LOW() \
    while ( READ_GPIOERST() );


#define WAIT_GPIOERST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOERST() && (--___t___ > 0)); }


#define WAIT_GPIOERST_HIGH() \
    while (! READ_GPIOERST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port F reset 
    // 
#define GPIOFRST_MASK 0x20U
#define GPIOFRST_OFFSET 5
#define GPIOFRST_START_BIT 5
#define GPIOFRST_WIDTH 1



typedef enum gpiofrst {
    GPIOFRST_0,
    GPIOFRST_1
} GPIOFRST_T ;
#define WRITE_GPIOFRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOFRST_MASK) | ((val << GPIOFRST_START_BIT) & GPIOFRST_MASK )); \
   } 

#define ENABLE_GPIOFRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOFRST_MASK ); \
   }

#define DISABLE_GPIOFRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOFRST_MASK ); \
   } 

#define READ_GPIOFRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOFRST_MASK)  >> GPIOFRST_START_BIT)

#define WHEN_GPIOFRST_HIGH() \
     if ( READ_GPIOFRST() )


#define UNLESS_GPIOFRST_HIGH() \
     if (! READ_GPIOFRST() )


#define WAIT_GPIOFRST_LOW() \
    while ( READ_GPIOFRST() );


#define WAIT_GPIOFRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOFRST() && (--___t___ > 0)); }


#define WAIT_GPIOFRST_HIGH() \
    while (! READ_GPIOFRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port G reset 
    // 
#define GPIOGRST_MASK 0x40U
#define GPIOGRST_OFFSET 6
#define GPIOGRST_START_BIT 6
#define GPIOGRST_WIDTH 1



typedef enum gpiogrst {
    GPIOGRST_0,
    GPIOGRST_1
} GPIOGRST_T ;
#define WRITE_GPIOGRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOGRST_MASK) | ((val << GPIOGRST_START_BIT) & GPIOGRST_MASK )); \
   } 

#define ENABLE_GPIOGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOGRST_MASK ); \
   }

#define DISABLE_GPIOGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOGRST_MASK ); \
   } 

#define READ_GPIOGRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOGRST_MASK)  >> GPIOGRST_START_BIT)

#define WHEN_GPIOGRST_HIGH() \
     if ( READ_GPIOGRST() )


#define UNLESS_GPIOGRST_HIGH() \
     if (! READ_GPIOGRST() )


#define WAIT_GPIOGRST_LOW() \
    while ( READ_GPIOGRST() );


#define WAIT_GPIOGRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOGRST() && (--___t___ > 0)); }


#define WAIT_GPIOGRST_HIGH() \
    while (! READ_GPIOGRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port H reset 
    // 
#define GPIOHRST_MASK 0x80U
#define GPIOHRST_OFFSET 7
#define GPIOHRST_START_BIT 7
#define GPIOHRST_WIDTH 1



typedef enum gpiohrst {
    GPIOHRST_0,
    GPIOHRST_1
} GPIOHRST_T ;
#define WRITE_GPIOHRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOHRST_MASK) | ((val << GPIOHRST_START_BIT) & GPIOHRST_MASK )); \
   } 

#define ENABLE_GPIOHRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOHRST_MASK ); \
   }

#define DISABLE_GPIOHRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOHRST_MASK ); \
   } 

#define READ_GPIOHRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOHRST_MASK)  >> GPIOHRST_START_BIT)

#define WHEN_GPIOHRST_HIGH() \
     if ( READ_GPIOHRST() )


#define UNLESS_GPIOHRST_HIGH() \
     if (! READ_GPIOHRST() )


#define WAIT_GPIOHRST_LOW() \
    while ( READ_GPIOHRST() );


#define WAIT_GPIOHRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOHRST() && (--___t___ > 0)); }


#define WAIT_GPIOHRST_HIGH() \
    while (! READ_GPIOHRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port I reset 
    // 
#define GPIOIRST_MASK 0x100U
#define GPIOIRST_OFFSET 8
#define GPIOIRST_START_BIT 8
#define GPIOIRST_WIDTH 1



typedef enum gpioirst {
    GPIOIRST_0,
    GPIOIRST_1
} GPIOIRST_T ;
#define WRITE_GPIOIRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOIRST_MASK) | ((val << GPIOIRST_START_BIT) & GPIOIRST_MASK )); \
   } 

#define ENABLE_GPIOIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOIRST_MASK ); \
   }

#define DISABLE_GPIOIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOIRST_MASK ); \
   } 

#define READ_GPIOIRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOIRST_MASK)  >> GPIOIRST_START_BIT)

#define WHEN_GPIOIRST_HIGH() \
     if ( READ_GPIOIRST() )


#define UNLESS_GPIOIRST_HIGH() \
     if (! READ_GPIOIRST() )


#define WAIT_GPIOIRST_LOW() \
    while ( READ_GPIOIRST() );


#define WAIT_GPIOIRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOIRST() && (--___t___ > 0)); }


#define WAIT_GPIOIRST_HIGH() \
    while (! READ_GPIOIRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port J reset 
    // 
#define GPIOJRST_MASK 0x200U
#define GPIOJRST_OFFSET 9
#define GPIOJRST_START_BIT 9
#define GPIOJRST_WIDTH 1



typedef enum gpiojrst {
    GPIOJRST_0,
    GPIOJRST_1
} GPIOJRST_T ;
#define WRITE_GPIOJRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOJRST_MASK) | ((val << GPIOJRST_START_BIT) & GPIOJRST_MASK )); \
   } 

#define ENABLE_GPIOJRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOJRST_MASK ); \
   }

#define DISABLE_GPIOJRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOJRST_MASK ); \
   } 

#define READ_GPIOJRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOJRST_MASK)  >> GPIOJRST_START_BIT)

#define WHEN_GPIOJRST_HIGH() \
     if ( READ_GPIOJRST() )


#define UNLESS_GPIOJRST_HIGH() \
     if (! READ_GPIOJRST() )


#define WAIT_GPIOJRST_LOW() \
    while ( READ_GPIOJRST() );


#define WAIT_GPIOJRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOJRST() && (--___t___ > 0)); }


#define WAIT_GPIOJRST_HIGH() \
    while (! READ_GPIOJRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port K reset 
    // 
#define GPIOKRST_MASK 0x400U
#define GPIOKRST_OFFSET 10
#define GPIOKRST_START_BIT 10
#define GPIOKRST_WIDTH 1



typedef enum gpiokrst {
    GPIOKRST_0,
    GPIOKRST_1
} GPIOKRST_T ;
#define WRITE_GPIOKRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ GPIOKRST_MASK) | ((val << GPIOKRST_START_BIT) & GPIOKRST_MASK )); \
   } 

#define ENABLE_GPIOKRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  GPIOKRST_MASK ); \
   }

#define DISABLE_GPIOKRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~GPIOKRST_MASK ); \
   } 

#define READ_GPIOKRST() \
   ((READ_REGISTER_ULONG(0x10) & GPIOKRST_MASK)  >> GPIOKRST_START_BIT)

#define WHEN_GPIOKRST_HIGH() \
     if ( READ_GPIOKRST() )


#define UNLESS_GPIOKRST_HIGH() \
     if (! READ_GPIOKRST() )


#define WAIT_GPIOKRST_LOW() \
    while ( READ_GPIOKRST() );


#define WAIT_GPIOKRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOKRST() && (--___t___ > 0)); }


#define WAIT_GPIOKRST_HIGH() \
    while (! READ_GPIOKRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CRC reset 
    // 
#define CRCRST_MASK 0x1000U
#define CRCRST_OFFSET 12
#define CRCRST_START_BIT 12
#define CRCRST_WIDTH 1



typedef enum crcrst {
    CRCRST_0,
    CRCRST_1
} CRCRST_T ;
#define WRITE_CRCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CRCRST_MASK) | ((val << CRCRST_START_BIT) & CRCRST_MASK )); \
   } 

#define ENABLE_CRCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CRCRST_MASK ); \
   }

#define DISABLE_CRCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CRCRST_MASK ); \
   } 

#define READ_CRCRST() \
   ((READ_REGISTER_ULONG(0x10) & CRCRST_MASK)  >> CRCRST_START_BIT)

#define WHEN_CRCRST_HIGH() \
     if ( READ_CRCRST() )


#define UNLESS_CRCRST_HIGH() \
     if (! READ_CRCRST() )


#define WAIT_CRCRST_LOW() \
    while ( READ_CRCRST() );


#define WAIT_CRCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRCRST() && (--___t___ > 0)); }


#define WAIT_CRCRST_HIGH() \
    while (! READ_CRCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2 reset 
    // 
#define DMA1RST_MASK 0x200000U
#define DMA1RST_OFFSET 21
#define DMA1RST_START_BIT 21
#define DMA1RST_WIDTH 1



typedef enum dma1rst {
    DMA_1RST_0,
    DMA_1RST_1
} DMA_1RST_T ;
#define WRITE_DMA1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DMA1RST_MASK) | ((val << DMA1RST_START_BIT) & DMA1RST_MASK )); \
   } 

#define ENABLE_DMA1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  DMA1RST_MASK ); \
   }

#define DISABLE_DMA1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~DMA1RST_MASK ); \
   } 

#define READ_DMA1RST() \
   ((READ_REGISTER_ULONG(0x10) & DMA1RST_MASK)  >> DMA1RST_START_BIT)

#define WHEN_DMA1RST_HIGH() \
     if ( READ_DMA1RST() )


#define UNLESS_DMA1RST_HIGH() \
     if (! READ_DMA1RST() )


#define WAIT_DMA1RST_LOW() \
    while ( READ_DMA1RST() );


#define WAIT_DMA1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA1RST() && (--___t___ > 0)); }


#define WAIT_DMA1RST_HIGH() \
    while (! READ_DMA1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2 reset 
    // 
#define DMA2RST_MASK 0x400000U
#define DMA2RST_OFFSET 22
#define DMA2RST_START_BIT 22
#define DMA2RST_WIDTH 1



typedef enum dma2rst {
    DMA_2RST_0,
    DMA_2RST_1
} DMA_2RST_T ;
#define WRITE_DMA2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DMA2RST_MASK) | ((val << DMA2RST_START_BIT) & DMA2RST_MASK )); \
   } 

#define ENABLE_DMA2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  DMA2RST_MASK ); \
   }

#define DISABLE_DMA2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~DMA2RST_MASK ); \
   } 

#define READ_DMA2RST() \
   ((READ_REGISTER_ULONG(0x10) & DMA2RST_MASK)  >> DMA2RST_START_BIT)

#define WHEN_DMA2RST_HIGH() \
     if ( READ_DMA2RST() )


#define UNLESS_DMA2RST_HIGH() \
     if (! READ_DMA2RST() )


#define WAIT_DMA2RST_LOW() \
    while ( READ_DMA2RST() );


#define WAIT_DMA2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA2RST() && (--___t___ > 0)); }


#define WAIT_DMA2RST_HIGH() \
    while (! READ_DMA2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2D reset 
    // 
#define DMA2DRST_MASK 0x800000U
#define DMA2DRST_OFFSET 23
#define DMA2DRST_START_BIT 23
#define DMA2DRST_WIDTH 1



typedef enum dma2drst {
    DMA_2DRST_0,
    DMA_2DRST_1
} DMA_2DRST_T ;
#define WRITE_DMA2DRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DMA2DRST_MASK) | ((val << DMA2DRST_START_BIT) & DMA2DRST_MASK )); \
   } 

#define ENABLE_DMA2DRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  DMA2DRST_MASK ); \
   }

#define DISABLE_DMA2DRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~DMA2DRST_MASK ); \
   } 

#define READ_DMA2DRST() \
   ((READ_REGISTER_ULONG(0x10) & DMA2DRST_MASK)  >> DMA2DRST_START_BIT)

#define WHEN_DMA2DRST_HIGH() \
     if ( READ_DMA2DRST() )


#define UNLESS_DMA2DRST_HIGH() \
     if (! READ_DMA2DRST() )


#define WAIT_DMA2DRST_LOW() \
    while ( READ_DMA2DRST() );


#define WAIT_DMA2DRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA2DRST() && (--___t___ > 0)); }


#define WAIT_DMA2DRST_HIGH() \
    while (! READ_DMA2DRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet MAC reset 
    // 
#define ETHMACRST_MASK 0x2000000U
#define ETHMACRST_OFFSET 25
#define ETHMACRST_START_BIT 25
#define ETHMACRST_WIDTH 1



typedef enum ethmacrst {
    ETHMACRST_0,
    ETHMACRST_1
} ETHMACRST_T ;
#define WRITE_ETHMACRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ETHMACRST_MASK) | ((val << ETHMACRST_START_BIT) & ETHMACRST_MASK )); \
   } 

#define ENABLE_ETHMACRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ETHMACRST_MASK ); \
   }

#define DISABLE_ETHMACRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ETHMACRST_MASK ); \
   } 

#define READ_ETHMACRST() \
   ((READ_REGISTER_ULONG(0x10) & ETHMACRST_MASK)  >> ETHMACRST_START_BIT)

#define WHEN_ETHMACRST_HIGH() \
     if ( READ_ETHMACRST() )


#define UNLESS_ETHMACRST_HIGH() \
     if (! READ_ETHMACRST() )


#define WAIT_ETHMACRST_LOW() \
    while ( READ_ETHMACRST() );


#define WAIT_ETHMACRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACRST() && (--___t___ > 0)); }


#define WAIT_ETHMACRST_HIGH() \
    while (! READ_ETHMACRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1rstr
//
// Return the value of register AHB_1RSTR
//
// Notes : Register AHB1 peripheral reset register (AHB1RSTR) at the offset 0x10, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG HS module reset 
    // 
#define OTGHSRST_MASK 0x20000000U
#define OTGHSRST_OFFSET 29
#define OTGHSRST_START_BIT 29
#define OTGHSRST_WIDTH 1



typedef enum otghsrst {
    OTGHSRST_0,
    OTGHSRST_1
} OTGHSRST_T ;
#define WRITE_OTGHSRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ OTGHSRST_MASK) | ((val << OTGHSRST_START_BIT) & OTGHSRST_MASK )); \
   } 

#define ENABLE_OTGHSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  OTGHSRST_MASK ); \
   }

#define DISABLE_OTGHSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~OTGHSRST_MASK ); \
   } 

#define READ_OTGHSRST() \
   ((READ_REGISTER_ULONG(0x10) & OTGHSRST_MASK)  >> OTGHSRST_START_BIT)

#define WHEN_OTGHSRST_HIGH() \
     if ( READ_OTGHSRST() )


#define UNLESS_OTGHSRST_HIGH() \
     if (! READ_OTGHSRST() )


#define WAIT_OTGHSRST_LOW() \
    while ( READ_OTGHSRST() );


#define WAIT_OTGHSRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGHSRST() && (--___t___ > 0)); }


#define WAIT_OTGHSRST_HIGH() \
    while (! READ_OTGHSRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2rstr
//
// Return the value of register AHB2RSTR
//
// Notes : Register Ahb2rstr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_2RSTR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_AHB_2RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_2RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_2RSTR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2rstr
//
// Return the value of register AHB_2RSTR
//
// Notes : Register AHB2 peripheral reset register (AHB2RSTR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Camera interface reset 
    // 
#define DCMIRST_MASK 0x1U
#define DCMIRST_OFFSET 0
#define DCMIRST_START_BIT 0
#define DCMIRST_WIDTH 1


#define AHB_2RSTR_REG 0x14

typedef enum dcmirst {
    DCMIRST_0,
    DCMIRST_1
} DCMIRST_T ;
#define WRITE_DCMIRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DCMIRST_MASK) | ((val << DCMIRST_START_BIT) & DCMIRST_MASK )); \
   } 

#define ENABLE_DCMIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  DCMIRST_MASK ); \
   }

#define DISABLE_DCMIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~DCMIRST_MASK ); \
   } 

#define READ_DCMIRST() \
   ((READ_REGISTER_ULONG(0x14) & DCMIRST_MASK)  >> DCMIRST_START_BIT)

#define WHEN_DCMIRST_HIGH() \
     if ( READ_DCMIRST() )


#define UNLESS_DCMIRST_HIGH() \
     if (! READ_DCMIRST() )


#define WAIT_DCMIRST_LOW() \
    while ( READ_DCMIRST() );


#define WAIT_DCMIRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCMIRST() && (--___t___ > 0)); }


#define WAIT_DCMIRST_HIGH() \
    while (! READ_DCMIRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2rstr
//
// Return the value of register AHB_2RSTR
//
// Notes : Register AHB2 peripheral reset register (AHB2RSTR) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Cryptographic module reset 
    // 
#define CRYPRST_MASK 0x10U
#define CRYPRST_OFFSET 4
#define CRYPRST_START_BIT 4
#define CRYPRST_WIDTH 1



typedef enum cryprst {
    CRYPRST_0,
    CRYPRST_1
} CRYPRST_T ;
#define WRITE_CRYPRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CRYPRST_MASK) | ((val << CRYPRST_START_BIT) & CRYPRST_MASK )); \
   } 

#define ENABLE_CRYPRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CRYPRST_MASK ); \
   }

#define DISABLE_CRYPRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CRYPRST_MASK ); \
   } 

#define READ_CRYPRST() \
   ((READ_REGISTER_ULONG(0x14) & CRYPRST_MASK)  >> CRYPRST_START_BIT)

#define WHEN_CRYPRST_HIGH() \
     if ( READ_CRYPRST() )


#define UNLESS_CRYPRST_HIGH() \
     if (! READ_CRYPRST() )


#define WAIT_CRYPRST_LOW() \
    while ( READ_CRYPRST() );


#define WAIT_CRYPRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRYPRST() && (--___t___ > 0)); }


#define WAIT_CRYPRST_HIGH() \
    while (! READ_CRYPRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2rstr
//
// Return the value of register AHB_2RSTR
//
// Notes : Register AHB2 peripheral reset register (AHB2RSTR) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hash module reset 
    // 
#define HSAHRST_MASK 0x20U
#define HSAHRST_OFFSET 5
#define HSAHRST_START_BIT 5
#define HSAHRST_WIDTH 1



typedef enum hsahrst {
    HSAHRST_0,
    HSAHRST_1
} HSAHRST_T ;
#define WRITE_HSAHRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ HSAHRST_MASK) | ((val << HSAHRST_START_BIT) & HSAHRST_MASK )); \
   } 

#define ENABLE_HSAHRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  HSAHRST_MASK ); \
   }

#define DISABLE_HSAHRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~HSAHRST_MASK ); \
   } 

#define READ_HSAHRST() \
   ((READ_REGISTER_ULONG(0x14) & HSAHRST_MASK)  >> HSAHRST_START_BIT)

#define WHEN_HSAHRST_HIGH() \
     if ( READ_HSAHRST() )


#define UNLESS_HSAHRST_HIGH() \
     if (! READ_HSAHRST() )


#define WAIT_HSAHRST_LOW() \
    while ( READ_HSAHRST() );


#define WAIT_HSAHRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSAHRST() && (--___t___ > 0)); }


#define WAIT_HSAHRST_HIGH() \
    while (! READ_HSAHRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2rstr
//
// Return the value of register AHB_2RSTR
//
// Notes : Register AHB2 peripheral reset register (AHB2RSTR) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Random number generator module reset 
    // 
#define RNGRST_MASK 0x40U
#define RNGRST_OFFSET 6
#define RNGRST_START_BIT 6
#define RNGRST_WIDTH 1



typedef enum rngrst {
    RNGRST_0,
    RNGRST_1
} RNGRST_T ;
#define WRITE_RNGRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RNGRST_MASK) | ((val << RNGRST_START_BIT) & RNGRST_MASK )); \
   } 

#define ENABLE_RNGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RNGRST_MASK ); \
   }

#define DISABLE_RNGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RNGRST_MASK ); \
   } 

#define READ_RNGRST() \
   ((READ_REGISTER_ULONG(0x14) & RNGRST_MASK)  >> RNGRST_START_BIT)

#define WHEN_RNGRST_HIGH() \
     if ( READ_RNGRST() )


#define UNLESS_RNGRST_HIGH() \
     if (! READ_RNGRST() )


#define WAIT_RNGRST_LOW() \
    while ( READ_RNGRST() );


#define WAIT_RNGRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RNGRST() && (--___t___ > 0)); }


#define WAIT_RNGRST_HIGH() \
    while (! READ_RNGRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2rstr
//
// Return the value of register AHB_2RSTR
//
// Notes : Register AHB2 peripheral reset register (AHB2RSTR) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG FS module reset 
    // 
#define OTGFSRST_MASK 0x80U
#define OTGFSRST_OFFSET 7
#define OTGFSRST_START_BIT 7
#define OTGFSRST_WIDTH 1



typedef enum otgfsrst {
    OTGFSRST_0,
    OTGFSRST_1
} OTGFSRST_T ;
#define WRITE_OTGFSRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OTGFSRST_MASK) | ((val << OTGFSRST_START_BIT) & OTGFSRST_MASK )); \
   } 

#define ENABLE_OTGFSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OTGFSRST_MASK ); \
   }

#define DISABLE_OTGFSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OTGFSRST_MASK ); \
   } 

#define READ_OTGFSRST() \
   ((READ_REGISTER_ULONG(0x14) & OTGFSRST_MASK)  >> OTGFSRST_START_BIT)

#define WHEN_OTGFSRST_HIGH() \
     if ( READ_OTGFSRST() )


#define UNLESS_OTGFSRST_HIGH() \
     if (! READ_OTGFSRST() )


#define WAIT_OTGFSRST_LOW() \
    while ( READ_OTGFSRST() );


#define WAIT_OTGFSRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGFSRST() && (--___t___ > 0)); }


#define WAIT_OTGFSRST_HIGH() \
    while (! READ_OTGFSRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3rstr
//
// Return the value of register AHB3RSTR
//
// Notes : Register Ahb3rstr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_3RSTR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_AHB_3RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_3RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_3RSTR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3rstr
//
// Return the value of register AHB_3RSTR
//
// Notes : Register AHB3 peripheral reset register (AHB3RSTR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Quad SPI memory controller reset 
    // 
#define QSPIRST_MASK 0x2U
#define QSPIRST_OFFSET 1
#define QSPIRST_START_BIT 1
#define QSPIRST_WIDTH 1


#define AHB_3RSTR_REG 0x18

typedef enum qspirst {
    QSPIRST_0,
    QSPIRST_1
} QSPIRST_T ;
#define WRITE_QSPIRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ QSPIRST_MASK) | ((val << QSPIRST_START_BIT) & QSPIRST_MASK )); \
   } 

#define ENABLE_QSPIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  QSPIRST_MASK ); \
   }

#define DISABLE_QSPIRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~QSPIRST_MASK ); \
   } 

#define READ_QSPIRST() \
   ((READ_REGISTER_ULONG(0x18) & QSPIRST_MASK)  >> QSPIRST_START_BIT)

#define WHEN_QSPIRST_HIGH() \
     if ( READ_QSPIRST() )


#define UNLESS_QSPIRST_HIGH() \
     if (! READ_QSPIRST() )


#define WAIT_QSPIRST_LOW() \
    while ( READ_QSPIRST() );


#define WAIT_QSPIRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_QSPIRST() && (--___t___ > 0)); }


#define WAIT_QSPIRST_HIGH() \
    while (! READ_QSPIRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3rstr
//
// Return the value of register AHB_3RSTR
//
// Notes : Register AHB3 peripheral reset register (AHB3RSTR) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Flexible memory controller module reset 
    // 
#define FMCRST_MASK 0x1U
#define FMCRST_OFFSET 0
#define FMCRST_START_BIT 0
#define FMCRST_WIDTH 1



typedef enum fmcrst {
    FMCRST_0,
    FMCRST_1
} FMCRST_T ;
#define WRITE_FMCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FMCRST_MASK) | ((val << FMCRST_START_BIT) & FMCRST_MASK )); \
   } 

#define ENABLE_FMCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FMCRST_MASK ); \
   }

#define DISABLE_FMCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FMCRST_MASK ); \
   } 

#define READ_FMCRST() \
   ((READ_REGISTER_ULONG(0x18) & FMCRST_MASK)  >> FMCRST_START_BIT)

#define WHEN_FMCRST_HIGH() \
     if ( READ_FMCRST() )


#define UNLESS_FMCRST_HIGH() \
     if (! READ_FMCRST() )


#define WAIT_FMCRST_LOW() \
    while ( READ_FMCRST() );


#define WAIT_FMCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FMCRST() && (--___t___ > 0)); }


#define WAIT_FMCRST_HIGH() \
    while (! READ_FMCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB1RSTR
//
// Notes : Register Apb1rstr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_APB_1RSTR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_APB_1RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_APB_1RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_APB_1RSTR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C 4 reset 
    // 
#define I2C4RST_MASK 0x1000000U
#define I2C4RST_OFFSET 24
#define I2C4RST_START_BIT 24
#define I2C4RST_WIDTH 1


#define APB_1RSTR_REG 0x20

typedef enum i2c4rst {
    I_2C_4RST_0,
    I_2C_4RST_1
} I_2C_4RST_T ;
#define WRITE_I2C4RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ I2C4RST_MASK) | ((val << I2C4RST_START_BIT) & I2C4RST_MASK )); \
   } 

#define ENABLE_I2C4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  I2C4RST_MASK ); \
   }

#define DISABLE_I2C4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~I2C4RST_MASK ); \
   } 

#define READ_I2C4RST() \
   ((READ_REGISTER_ULONG(0x20) & I2C4RST_MASK)  >> I2C4RST_START_BIT)

#define WHEN_I2C4RST_HIGH() \
     if ( READ_I2C4RST() )


#define UNLESS_I2C4RST_HIGH() \
     if (! READ_I2C4RST() )


#define WAIT_I2C4RST_LOW() \
    while ( READ_I2C4RST() );


#define WAIT_I2C4RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C4RST() && (--___t___ > 0)); }


#define WAIT_I2C4RST_HIGH() \
    while (! READ_I2C4RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low power timer 1 reset 
    // 
#define LPTIM1RST_MASK 0x200U
#define LPTIM1RST_OFFSET 9
#define LPTIM1RST_START_BIT 9
#define LPTIM1RST_WIDTH 1



typedef enum lptim1rst {
    LPTIM_1RST_0,
    LPTIM_1RST_1
} LPTIM_1RST_T ;
#define WRITE_LPTIM1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ LPTIM1RST_MASK) | ((val << LPTIM1RST_START_BIT) & LPTIM1RST_MASK )); \
   } 

#define ENABLE_LPTIM1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  LPTIM1RST_MASK ); \
   }

#define DISABLE_LPTIM1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~LPTIM1RST_MASK ); \
   } 

#define READ_LPTIM1RST() \
   ((READ_REGISTER_ULONG(0x20) & LPTIM1RST_MASK)  >> LPTIM1RST_START_BIT)

#define WHEN_LPTIM1RST_HIGH() \
     if ( READ_LPTIM1RST() )


#define UNLESS_LPTIM1RST_HIGH() \
     if (! READ_LPTIM1RST() )


#define WAIT_LPTIM1RST_LOW() \
    while ( READ_LPTIM1RST() );


#define WAIT_LPTIM1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPTIM1RST() && (--___t___ > 0)); }


#define WAIT_LPTIM1RST_HIGH() \
    while (! READ_LPTIM1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HDMI-CEC reset 
    // 
#define CECRST_MASK 0x8000000U
#define CECRST_OFFSET 27
#define CECRST_START_BIT 27
#define CECRST_WIDTH 1



typedef enum cecrst {
    CECRST_0,
    CECRST_1
} CECRST_T ;
#define WRITE_CECRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CECRST_MASK) | ((val << CECRST_START_BIT) & CECRST_MASK )); \
   } 

#define ENABLE_CECRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CECRST_MASK ); \
   }

#define DISABLE_CECRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CECRST_MASK ); \
   } 

#define READ_CECRST() \
   ((READ_REGISTER_ULONG(0x20) & CECRST_MASK)  >> CECRST_START_BIT)

#define WHEN_CECRST_HIGH() \
     if ( READ_CECRST() )


#define UNLESS_CECRST_HIGH() \
     if (! READ_CECRST() )


#define WAIT_CECRST_LOW() \
    while ( READ_CECRST() );


#define WAIT_CECRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CECRST() && (--___t___ > 0)); }


#define WAIT_CECRST_HIGH() \
    while (! READ_CECRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPDIF-RX reset 
    // 
#define SPDIFRXRST_MASK 0x10000U
#define SPDIFRXRST_OFFSET 16
#define SPDIFRXRST_START_BIT 16
#define SPDIFRXRST_WIDTH 1



typedef enum spdifrxrst {
    SPDIFRXRST_0,
    SPDIFRXRST_1
} SPDIFRXRST_T ;
#define WRITE_SPDIFRXRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ SPDIFRXRST_MASK) | ((val << SPDIFRXRST_START_BIT) & SPDIFRXRST_MASK )); \
   } 

#define ENABLE_SPDIFRXRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  SPDIFRXRST_MASK ); \
   }

#define DISABLE_SPDIFRXRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~SPDIFRXRST_MASK ); \
   } 

#define READ_SPDIFRXRST() \
   ((READ_REGISTER_ULONG(0x20) & SPDIFRXRST_MASK)  >> SPDIFRXRST_START_BIT)

#define WHEN_SPDIFRXRST_HIGH() \
     if ( READ_SPDIFRXRST() )


#define UNLESS_SPDIFRXRST_HIGH() \
     if (! READ_SPDIFRXRST() )


#define WAIT_SPDIFRXRST_LOW() \
    while ( READ_SPDIFRXRST() );


#define WAIT_SPDIFRXRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPDIFRXRST() && (--___t___ > 0)); }


#define WAIT_SPDIFRXRST_HIGH() \
    while (! READ_SPDIFRXRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART8 reset 
    // 
#define UART8RST_MASK 0x80000000U
#define UART8RST_OFFSET 31
#define UART8RST_START_BIT 31
#define UART8RST_WIDTH 1



typedef enum uart8rst {
    UART_8RST_0,
    UART_8RST_1
} UART_8RST_T ;
#define WRITE_UART8RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ UART8RST_MASK) | ((val << UART8RST_START_BIT) & UART8RST_MASK )); \
   } 

#define ENABLE_UART8RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  UART8RST_MASK ); \
   }

#define DISABLE_UART8RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~UART8RST_MASK ); \
   } 

#define READ_UART8RST() \
   ((READ_REGISTER_ULONG(0x20) & UART8RST_MASK)  >> UART8RST_START_BIT)

#define WHEN_UART8RST_HIGH() \
     if ( READ_UART8RST() )


#define UNLESS_UART8RST_HIGH() \
     if (! READ_UART8RST() )


#define WAIT_UART8RST_LOW() \
    while ( READ_UART8RST() );


#define WAIT_UART8RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART8RST() && (--___t___ > 0)); }


#define WAIT_UART8RST_HIGH() \
    while (! READ_UART8RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART7 reset 
    // 
#define UART7RST_MASK 0x40000000U
#define UART7RST_OFFSET 30
#define UART7RST_START_BIT 30
#define UART7RST_WIDTH 1



typedef enum uart7rst {
    UART_7RST_0,
    UART_7RST_1
} UART_7RST_T ;
#define WRITE_UART7RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ UART7RST_MASK) | ((val << UART7RST_START_BIT) & UART7RST_MASK )); \
   } 

#define ENABLE_UART7RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  UART7RST_MASK ); \
   }

#define DISABLE_UART7RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~UART7RST_MASK ); \
   } 

#define READ_UART7RST() \
   ((READ_REGISTER_ULONG(0x20) & UART7RST_MASK)  >> UART7RST_START_BIT)

#define WHEN_UART7RST_HIGH() \
     if ( READ_UART7RST() )


#define UNLESS_UART7RST_HIGH() \
     if (! READ_UART7RST() )


#define WAIT_UART7RST_LOW() \
    while ( READ_UART7RST() );


#define WAIT_UART7RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART7RST() && (--___t___ > 0)); }


#define WAIT_UART7RST_HIGH() \
    while (! READ_UART7RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC reset 
    // 
#define DACRST_MASK 0x20000000U
#define DACRST_OFFSET 29
#define DACRST_START_BIT 29
#define DACRST_WIDTH 1



typedef enum dacrst {
    DACRST_0,
    DACRST_1
} DACRST_T ;
#define WRITE_DACRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DACRST_MASK) | ((val << DACRST_START_BIT) & DACRST_MASK )); \
   } 

#define ENABLE_DACRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  DACRST_MASK ); \
   }

#define DISABLE_DACRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~DACRST_MASK ); \
   } 

#define READ_DACRST() \
   ((READ_REGISTER_ULONG(0x20) & DACRST_MASK)  >> DACRST_START_BIT)

#define WHEN_DACRST_HIGH() \
     if ( READ_DACRST() )


#define UNLESS_DACRST_HIGH() \
     if (! READ_DACRST() )


#define WAIT_DACRST_LOW() \
    while ( READ_DACRST() );


#define WAIT_DACRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DACRST() && (--___t___ > 0)); }


#define WAIT_DACRST_HIGH() \
    while (! READ_DACRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power interface reset 
    // 
#define PWRRST_MASK 0x10000000U
#define PWRRST_OFFSET 28
#define PWRRST_START_BIT 28
#define PWRRST_WIDTH 1



typedef enum pwrrst {
    PWRRST_0,
    PWRRST_1
} PWRRST_T ;
#define WRITE_PWRRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ PWRRST_MASK) | ((val << PWRRST_START_BIT) & PWRRST_MASK )); \
   } 

#define ENABLE_PWRRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  PWRRST_MASK ); \
   }

#define DISABLE_PWRRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~PWRRST_MASK ); \
   } 

#define READ_PWRRST() \
   ((READ_REGISTER_ULONG(0x20) & PWRRST_MASK)  >> PWRRST_START_BIT)

#define WHEN_PWRRST_HIGH() \
     if ( READ_PWRRST() )


#define UNLESS_PWRRST_HIGH() \
     if (! READ_PWRRST() )


#define WAIT_PWRRST_LOW() \
    while ( READ_PWRRST() );


#define WAIT_PWRRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWRRST() && (--___t___ > 0)); }


#define WAIT_PWRRST_HIGH() \
    while (! READ_PWRRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAN2 reset 
    // 
#define CAN2RST_MASK 0x4000000U
#define CAN2RST_OFFSET 26
#define CAN2RST_START_BIT 26
#define CAN2RST_WIDTH 1



typedef enum can2rst {
    CAN_2RST_0,
    CAN_2RST_1
} CAN_2RST_T ;
#define WRITE_CAN2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CAN2RST_MASK) | ((val << CAN2RST_START_BIT) & CAN2RST_MASK )); \
   } 

#define ENABLE_CAN2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CAN2RST_MASK ); \
   }

#define DISABLE_CAN2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CAN2RST_MASK ); \
   } 

#define READ_CAN2RST() \
   ((READ_REGISTER_ULONG(0x20) & CAN2RST_MASK)  >> CAN2RST_START_BIT)

#define WHEN_CAN2RST_HIGH() \
     if ( READ_CAN2RST() )


#define UNLESS_CAN2RST_HIGH() \
     if (! READ_CAN2RST() )


#define WAIT_CAN2RST_LOW() \
    while ( READ_CAN2RST() );


#define WAIT_CAN2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAN2RST() && (--___t___ > 0)); }


#define WAIT_CAN2RST_HIGH() \
    while (! READ_CAN2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAN1 reset 
    // 
#define CAN1RST_MASK 0x2000000U
#define CAN1RST_OFFSET 25
#define CAN1RST_START_BIT 25
#define CAN1RST_WIDTH 1



typedef enum can1rst {
    CAN_1RST_0,
    CAN_1RST_1
} CAN_1RST_T ;
#define WRITE_CAN1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CAN1RST_MASK) | ((val << CAN1RST_START_BIT) & CAN1RST_MASK )); \
   } 

#define ENABLE_CAN1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CAN1RST_MASK ); \
   }

#define DISABLE_CAN1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CAN1RST_MASK ); \
   } 

#define READ_CAN1RST() \
   ((READ_REGISTER_ULONG(0x20) & CAN1RST_MASK)  >> CAN1RST_START_BIT)

#define WHEN_CAN1RST_HIGH() \
     if ( READ_CAN1RST() )


#define UNLESS_CAN1RST_HIGH() \
     if (! READ_CAN1RST() )


#define WAIT_CAN1RST_LOW() \
    while ( READ_CAN1RST() );


#define WAIT_CAN1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAN1RST() && (--___t___ > 0)); }


#define WAIT_CAN1RST_HIGH() \
    while (! READ_CAN1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C3 reset 
    // 
#define I2C3RST_MASK 0x800000U
#define I2C3RST_OFFSET 23
#define I2C3RST_START_BIT 23
#define I2C3RST_WIDTH 1



typedef enum i2c3rst {
    I_2C_3RST_0,
    I_2C_3RST_1
} I_2C_3RST_T ;
#define WRITE_I2C3RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ I2C3RST_MASK) | ((val << I2C3RST_START_BIT) & I2C3RST_MASK )); \
   } 

#define ENABLE_I2C3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  I2C3RST_MASK ); \
   }

#define DISABLE_I2C3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~I2C3RST_MASK ); \
   } 

#define READ_I2C3RST() \
   ((READ_REGISTER_ULONG(0x20) & I2C3RST_MASK)  >> I2C3RST_START_BIT)

#define WHEN_I2C3RST_HIGH() \
     if ( READ_I2C3RST() )


#define UNLESS_I2C3RST_HIGH() \
     if (! READ_I2C3RST() )


#define WAIT_I2C3RST_LOW() \
    while ( READ_I2C3RST() );


#define WAIT_I2C3RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C3RST() && (--___t___ > 0)); }


#define WAIT_I2C3RST_HIGH() \
    while (! READ_I2C3RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C 2 reset 
    // 
#define I2C2RST_MASK 0x400000U
#define I2C2RST_OFFSET 22
#define I2C2RST_START_BIT 22
#define I2C2RST_WIDTH 1



typedef enum i2c2rst {
    I_2C_2RST_0,
    I_2C_2RST_1
} I_2C_2RST_T ;
#define WRITE_I2C2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ I2C2RST_MASK) | ((val << I2C2RST_START_BIT) & I2C2RST_MASK )); \
   } 

#define ENABLE_I2C2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  I2C2RST_MASK ); \
   }

#define DISABLE_I2C2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~I2C2RST_MASK ); \
   } 

#define READ_I2C2RST() \
   ((READ_REGISTER_ULONG(0x20) & I2C2RST_MASK)  >> I2C2RST_START_BIT)

#define WHEN_I2C2RST_HIGH() \
     if ( READ_I2C2RST() )


#define UNLESS_I2C2RST_HIGH() \
     if (! READ_I2C2RST() )


#define WAIT_I2C2RST_LOW() \
    while ( READ_I2C2RST() );


#define WAIT_I2C2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C2RST() && (--___t___ > 0)); }


#define WAIT_I2C2RST_HIGH() \
    while (! READ_I2C2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C 1 reset 
    // 
#define I2C1RST_MASK 0x200000U
#define I2C1RST_OFFSET 21
#define I2C1RST_START_BIT 21
#define I2C1RST_WIDTH 1



typedef enum i2c1rst {
    I_2C_1RST_0,
    I_2C_1RST_1
} I_2C_1RST_T ;
#define WRITE_I2C1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ I2C1RST_MASK) | ((val << I2C1RST_START_BIT) & I2C1RST_MASK )); \
   } 

#define ENABLE_I2C1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  I2C1RST_MASK ); \
   }

#define DISABLE_I2C1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~I2C1RST_MASK ); \
   } 

#define READ_I2C1RST() \
   ((READ_REGISTER_ULONG(0x20) & I2C1RST_MASK)  >> I2C1RST_START_BIT)

#define WHEN_I2C1RST_HIGH() \
     if ( READ_I2C1RST() )


#define UNLESS_I2C1RST_HIGH() \
     if (! READ_I2C1RST() )


#define WAIT_I2C1RST_LOW() \
    while ( READ_I2C1RST() );


#define WAIT_I2C1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C1RST() && (--___t___ > 0)); }


#define WAIT_I2C1RST_HIGH() \
    while (! READ_I2C1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 5 reset 
    // 
#define UART5RST_MASK 0x100000U
#define UART5RST_OFFSET 20
#define UART5RST_START_BIT 20
#define UART5RST_WIDTH 1



typedef enum uart5rst {
    UART_5RST_0,
    UART_5RST_1
} UART_5RST_T ;
#define WRITE_UART5RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ UART5RST_MASK) | ((val << UART5RST_START_BIT) & UART5RST_MASK )); \
   } 

#define ENABLE_UART5RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  UART5RST_MASK ); \
   }

#define DISABLE_UART5RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~UART5RST_MASK ); \
   } 

#define READ_UART5RST() \
   ((READ_REGISTER_ULONG(0x20) & UART5RST_MASK)  >> UART5RST_START_BIT)

#define WHEN_UART5RST_HIGH() \
     if ( READ_UART5RST() )


#define UNLESS_UART5RST_HIGH() \
     if (! READ_UART5RST() )


#define WAIT_UART5RST_LOW() \
    while ( READ_UART5RST() );


#define WAIT_UART5RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART5RST() && (--___t___ > 0)); }


#define WAIT_UART5RST_HIGH() \
    while (! READ_UART5RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 4 reset 
    // 
#define UART4RST_MASK 0x80000U
#define UART4RST_OFFSET 19
#define UART4RST_START_BIT 19
#define UART4RST_WIDTH 1



typedef enum uart4rst {
    UART_4RST_0,
    UART_4RST_1
} UART_4RST_T ;
#define WRITE_UART4RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ UART4RST_MASK) | ((val << UART4RST_START_BIT) & UART4RST_MASK )); \
   } 

#define ENABLE_UART4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  UART4RST_MASK ); \
   }

#define DISABLE_UART4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~UART4RST_MASK ); \
   } 

#define READ_UART4RST() \
   ((READ_REGISTER_ULONG(0x20) & UART4RST_MASK)  >> UART4RST_START_BIT)

#define WHEN_UART4RST_HIGH() \
     if ( READ_UART4RST() )


#define UNLESS_UART4RST_HIGH() \
     if (! READ_UART4RST() )


#define WAIT_UART4RST_LOW() \
    while ( READ_UART4RST() );


#define WAIT_UART4RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART4RST() && (--___t___ > 0)); }


#define WAIT_UART4RST_HIGH() \
    while (! READ_UART4RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 3 reset 
    // 
#define UART3RST_MASK 0x40000U
#define UART3RST_OFFSET 18
#define UART3RST_START_BIT 18
#define UART3RST_WIDTH 1



typedef enum uart3rst {
    UART_3RST_0,
    UART_3RST_1
} UART_3RST_T ;
#define WRITE_UART3RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ UART3RST_MASK) | ((val << UART3RST_START_BIT) & UART3RST_MASK )); \
   } 

#define ENABLE_UART3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  UART3RST_MASK ); \
   }

#define DISABLE_UART3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~UART3RST_MASK ); \
   } 

#define READ_UART3RST() \
   ((READ_REGISTER_ULONG(0x20) & UART3RST_MASK)  >> UART3RST_START_BIT)

#define WHEN_UART3RST_HIGH() \
     if ( READ_UART3RST() )


#define UNLESS_UART3RST_HIGH() \
     if (! READ_UART3RST() )


#define WAIT_UART3RST_LOW() \
    while ( READ_UART3RST() );


#define WAIT_UART3RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART3RST() && (--___t___ > 0)); }


#define WAIT_UART3RST_HIGH() \
    while (! READ_UART3RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 2 reset 
    // 
#define UART2RST_MASK 0x20000U
#define UART2RST_OFFSET 17
#define UART2RST_START_BIT 17
#define UART2RST_WIDTH 1



typedef enum uart2rst {
    UART_2RST_0,
    UART_2RST_1
} UART_2RST_T ;
#define WRITE_UART2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ UART2RST_MASK) | ((val << UART2RST_START_BIT) & UART2RST_MASK )); \
   } 

#define ENABLE_UART2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  UART2RST_MASK ); \
   }

#define DISABLE_UART2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~UART2RST_MASK ); \
   } 

#define READ_UART2RST() \
   ((READ_REGISTER_ULONG(0x20) & UART2RST_MASK)  >> UART2RST_START_BIT)

#define WHEN_UART2RST_HIGH() \
     if ( READ_UART2RST() )


#define UNLESS_UART2RST_HIGH() \
     if (! READ_UART2RST() )


#define WAIT_UART2RST_LOW() \
    while ( READ_UART2RST() );


#define WAIT_UART2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART2RST() && (--___t___ > 0)); }


#define WAIT_UART2RST_HIGH() \
    while (! READ_UART2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 3 reset 
    // 
#define SPI3RST_MASK 0x8000U
#define SPI3RST_OFFSET 15
#define SPI3RST_START_BIT 15
#define SPI3RST_WIDTH 1



typedef enum spi3rst {
    SPI_3RST_0,
    SPI_3RST_1
} SPI_3RST_T ;
#define WRITE_SPI3RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ SPI3RST_MASK) | ((val << SPI3RST_START_BIT) & SPI3RST_MASK )); \
   } 

#define ENABLE_SPI3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  SPI3RST_MASK ); \
   }

#define DISABLE_SPI3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~SPI3RST_MASK ); \
   } 

#define READ_SPI3RST() \
   ((READ_REGISTER_ULONG(0x20) & SPI3RST_MASK)  >> SPI3RST_START_BIT)

#define WHEN_SPI3RST_HIGH() \
     if ( READ_SPI3RST() )


#define UNLESS_SPI3RST_HIGH() \
     if (! READ_SPI3RST() )


#define WAIT_SPI3RST_LOW() \
    while ( READ_SPI3RST() );


#define WAIT_SPI3RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI3RST() && (--___t___ > 0)); }


#define WAIT_SPI3RST_HIGH() \
    while (! READ_SPI3RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 2 reset 
    // 
#define SPI2RST_MASK 0x4000U
#define SPI2RST_OFFSET 14
#define SPI2RST_START_BIT 14
#define SPI2RST_WIDTH 1



typedef enum spi2rst {
    SPI_2RST_0,
    SPI_2RST_1
} SPI_2RST_T ;
#define WRITE_SPI2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ SPI2RST_MASK) | ((val << SPI2RST_START_BIT) & SPI2RST_MASK )); \
   } 

#define ENABLE_SPI2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  SPI2RST_MASK ); \
   }

#define DISABLE_SPI2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~SPI2RST_MASK ); \
   } 

#define READ_SPI2RST() \
   ((READ_REGISTER_ULONG(0x20) & SPI2RST_MASK)  >> SPI2RST_START_BIT)

#define WHEN_SPI2RST_HIGH() \
     if ( READ_SPI2RST() )


#define UNLESS_SPI2RST_HIGH() \
     if (! READ_SPI2RST() )


#define WAIT_SPI2RST_LOW() \
    while ( READ_SPI2RST() );


#define WAIT_SPI2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI2RST() && (--___t___ > 0)); }


#define WAIT_SPI2RST_HIGH() \
    while (! READ_SPI2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window watchdog reset 
    // 
#define WWDGRST_MASK 0x800U
#define WWDGRST_OFFSET 11
#define WWDGRST_START_BIT 11
#define WWDGRST_WIDTH 1



typedef enum wwdgrst {
    WWDGRST_0,
    WWDGRST_1
} WWDGRST_T ;
#define WRITE_WWDGRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ WWDGRST_MASK) | ((val << WWDGRST_START_BIT) & WWDGRST_MASK )); \
   } 

#define ENABLE_WWDGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  WWDGRST_MASK ); \
   }

#define DISABLE_WWDGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~WWDGRST_MASK ); \
   } 

#define READ_WWDGRST() \
   ((READ_REGISTER_ULONG(0x20) & WWDGRST_MASK)  >> WWDGRST_START_BIT)

#define WHEN_WWDGRST_HIGH() \
     if ( READ_WWDGRST() )


#define UNLESS_WWDGRST_HIGH() \
     if (! READ_WWDGRST() )


#define WAIT_WWDGRST_LOW() \
    while ( READ_WWDGRST() );


#define WAIT_WWDGRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WWDGRST() && (--___t___ > 0)); }


#define WAIT_WWDGRST_HIGH() \
    while (! READ_WWDGRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM14 reset 
    // 
#define TIM14RST_MASK 0x100U
#define TIM14RST_OFFSET 8
#define TIM14RST_START_BIT 8
#define TIM14RST_WIDTH 1



typedef enum tim14rst {
    TIM_1_4RST_0,
    TIM_1_4RST_1
} TIM_1_4RST_T ;
#define WRITE_TIM14RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM14RST_MASK) | ((val << TIM14RST_START_BIT) & TIM14RST_MASK )); \
   } 

#define ENABLE_TIM14RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM14RST_MASK ); \
   }

#define DISABLE_TIM14RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM14RST_MASK ); \
   } 

#define READ_TIM14RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM14RST_MASK)  >> TIM14RST_START_BIT)

#define WHEN_TIM14RST_HIGH() \
     if ( READ_TIM14RST() )


#define UNLESS_TIM14RST_HIGH() \
     if (! READ_TIM14RST() )


#define WAIT_TIM14RST_LOW() \
    while ( READ_TIM14RST() );


#define WAIT_TIM14RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM14RST() && (--___t___ > 0)); }


#define WAIT_TIM14RST_HIGH() \
    while (! READ_TIM14RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM13 reset 
    // 
#define TIM13RST_MASK 0x80U
#define TIM13RST_OFFSET 7
#define TIM13RST_START_BIT 7
#define TIM13RST_WIDTH 1



typedef enum tim13rst {
    TIM_1_3RST_0,
    TIM_1_3RST_1
} TIM_1_3RST_T ;
#define WRITE_TIM13RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM13RST_MASK) | ((val << TIM13RST_START_BIT) & TIM13RST_MASK )); \
   } 

#define ENABLE_TIM13RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM13RST_MASK ); \
   }

#define DISABLE_TIM13RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM13RST_MASK ); \
   } 

#define READ_TIM13RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM13RST_MASK)  >> TIM13RST_START_BIT)

#define WHEN_TIM13RST_HIGH() \
     if ( READ_TIM13RST() )


#define UNLESS_TIM13RST_HIGH() \
     if (! READ_TIM13RST() )


#define WAIT_TIM13RST_LOW() \
    while ( READ_TIM13RST() );


#define WAIT_TIM13RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM13RST() && (--___t___ > 0)); }


#define WAIT_TIM13RST_HIGH() \
    while (! READ_TIM13RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM12 reset 
    // 
#define TIM12RST_MASK 0x40U
#define TIM12RST_OFFSET 6
#define TIM12RST_START_BIT 6
#define TIM12RST_WIDTH 1



typedef enum tim12rst {
    TIM_1_2RST_0,
    TIM_1_2RST_1
} TIM_1_2RST_T ;
#define WRITE_TIM12RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM12RST_MASK) | ((val << TIM12RST_START_BIT) & TIM12RST_MASK )); \
   } 

#define ENABLE_TIM12RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM12RST_MASK ); \
   }

#define DISABLE_TIM12RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM12RST_MASK ); \
   } 

#define READ_TIM12RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM12RST_MASK)  >> TIM12RST_START_BIT)

#define WHEN_TIM12RST_HIGH() \
     if ( READ_TIM12RST() )


#define UNLESS_TIM12RST_HIGH() \
     if (! READ_TIM12RST() )


#define WAIT_TIM12RST_LOW() \
    while ( READ_TIM12RST() );


#define WAIT_TIM12RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM12RST() && (--___t___ > 0)); }


#define WAIT_TIM12RST_HIGH() \
    while (! READ_TIM12RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM7 reset 
    // 
#define TIM7RST_MASK 0x20U
#define TIM7RST_OFFSET 5
#define TIM7RST_START_BIT 5
#define TIM7RST_WIDTH 1



typedef enum tim7rst {
    TIM_7RST_0,
    TIM_7RST_1
} TIM_7RST_T ;
#define WRITE_TIM7RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM7RST_MASK) | ((val << TIM7RST_START_BIT) & TIM7RST_MASK )); \
   } 

#define ENABLE_TIM7RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM7RST_MASK ); \
   }

#define DISABLE_TIM7RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM7RST_MASK ); \
   } 

#define READ_TIM7RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM7RST_MASK)  >> TIM7RST_START_BIT)

#define WHEN_TIM7RST_HIGH() \
     if ( READ_TIM7RST() )


#define UNLESS_TIM7RST_HIGH() \
     if (! READ_TIM7RST() )


#define WAIT_TIM7RST_LOW() \
    while ( READ_TIM7RST() );


#define WAIT_TIM7RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM7RST() && (--___t___ > 0)); }


#define WAIT_TIM7RST_HIGH() \
    while (! READ_TIM7RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM6 reset 
    // 
#define TIM6RST_MASK 0x10U
#define TIM6RST_OFFSET 4
#define TIM6RST_START_BIT 4
#define TIM6RST_WIDTH 1



typedef enum tim6rst {
    TIM_6RST_0,
    TIM_6RST_1
} TIM_6RST_T ;
#define WRITE_TIM6RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM6RST_MASK) | ((val << TIM6RST_START_BIT) & TIM6RST_MASK )); \
   } 

#define ENABLE_TIM6RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM6RST_MASK ); \
   }

#define DISABLE_TIM6RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM6RST_MASK ); \
   } 

#define READ_TIM6RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM6RST_MASK)  >> TIM6RST_START_BIT)

#define WHEN_TIM6RST_HIGH() \
     if ( READ_TIM6RST() )


#define UNLESS_TIM6RST_HIGH() \
     if (! READ_TIM6RST() )


#define WAIT_TIM6RST_LOW() \
    while ( READ_TIM6RST() );


#define WAIT_TIM6RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM6RST() && (--___t___ > 0)); }


#define WAIT_TIM6RST_HIGH() \
    while (! READ_TIM6RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM5 reset 
    // 
#define TIM5RST_MASK 0x8U
#define TIM5RST_OFFSET 3
#define TIM5RST_START_BIT 3
#define TIM5RST_WIDTH 1



typedef enum tim5rst {
    TIM_5RST_0,
    TIM_5RST_1
} TIM_5RST_T ;
#define WRITE_TIM5RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM5RST_MASK) | ((val << TIM5RST_START_BIT) & TIM5RST_MASK )); \
   } 

#define ENABLE_TIM5RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM5RST_MASK ); \
   }

#define DISABLE_TIM5RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM5RST_MASK ); \
   } 

#define READ_TIM5RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM5RST_MASK)  >> TIM5RST_START_BIT)

#define WHEN_TIM5RST_HIGH() \
     if ( READ_TIM5RST() )


#define UNLESS_TIM5RST_HIGH() \
     if (! READ_TIM5RST() )


#define WAIT_TIM5RST_LOW() \
    while ( READ_TIM5RST() );


#define WAIT_TIM5RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM5RST() && (--___t___ > 0)); }


#define WAIT_TIM5RST_HIGH() \
    while (! READ_TIM5RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM4 reset 
    // 
#define TIM4RST_MASK 0x4U
#define TIM4RST_OFFSET 2
#define TIM4RST_START_BIT 2
#define TIM4RST_WIDTH 1



typedef enum tim4rst {
    TIM_4RST_0,
    TIM_4RST_1
} TIM_4RST_T ;
#define WRITE_TIM4RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM4RST_MASK) | ((val << TIM4RST_START_BIT) & TIM4RST_MASK )); \
   } 

#define ENABLE_TIM4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM4RST_MASK ); \
   }

#define DISABLE_TIM4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM4RST_MASK ); \
   } 

#define READ_TIM4RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM4RST_MASK)  >> TIM4RST_START_BIT)

#define WHEN_TIM4RST_HIGH() \
     if ( READ_TIM4RST() )


#define UNLESS_TIM4RST_HIGH() \
     if (! READ_TIM4RST() )


#define WAIT_TIM4RST_LOW() \
    while ( READ_TIM4RST() );


#define WAIT_TIM4RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM4RST() && (--___t___ > 0)); }


#define WAIT_TIM4RST_HIGH() \
    while (! READ_TIM4RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM3 reset 
    // 
#define TIM3RST_MASK 0x2U
#define TIM3RST_OFFSET 1
#define TIM3RST_START_BIT 1
#define TIM3RST_WIDTH 1



typedef enum tim3rst {
    TIM_3RST_0,
    TIM_3RST_1
} TIM_3RST_T ;
#define WRITE_TIM3RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM3RST_MASK) | ((val << TIM3RST_START_BIT) & TIM3RST_MASK )); \
   } 

#define ENABLE_TIM3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM3RST_MASK ); \
   }

#define DISABLE_TIM3RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM3RST_MASK ); \
   } 

#define READ_TIM3RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM3RST_MASK)  >> TIM3RST_START_BIT)

#define WHEN_TIM3RST_HIGH() \
     if ( READ_TIM3RST() )


#define UNLESS_TIM3RST_HIGH() \
     if (! READ_TIM3RST() )


#define WAIT_TIM3RST_LOW() \
    while ( READ_TIM3RST() );


#define WAIT_TIM3RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM3RST() && (--___t___ > 0)); }


#define WAIT_TIM3RST_HIGH() \
    while (! READ_TIM3RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1rstr
//
// Return the value of register APB_1RSTR
//
// Notes : Register APB1 peripheral reset register (APB1RSTR) at the offset 0x20, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM2 reset 
    // 
#define TIM2RST_MASK 0x1U
#define TIM2RST_OFFSET 0
#define TIM2RST_START_BIT 0
#define TIM2RST_WIDTH 1



typedef enum tim2rst {
    TIM_2RST_0,
    TIM_2RST_1
} TIM_2RST_T ;
#define WRITE_TIM2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TIM2RST_MASK) | ((val << TIM2RST_START_BIT) & TIM2RST_MASK )); \
   } 

#define ENABLE_TIM2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  TIM2RST_MASK ); \
   }

#define DISABLE_TIM2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~TIM2RST_MASK ); \
   } 

#define READ_TIM2RST() \
   ((READ_REGISTER_ULONG(0x20) & TIM2RST_MASK)  >> TIM2RST_START_BIT)

#define WHEN_TIM2RST_HIGH() \
     if ( READ_TIM2RST() )


#define UNLESS_TIM2RST_HIGH() \
     if (! READ_TIM2RST() )


#define WAIT_TIM2RST_LOW() \
    while ( READ_TIM2RST() );


#define WAIT_TIM2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM2RST() && (--___t___ > 0)); }


#define WAIT_TIM2RST_HIGH() \
    while (! READ_TIM2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB2RSTR
//
// Notes : Register Apb2rstr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_APB_2RSTR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_APB_2RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_APB_2RSTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_APB_2RSTR() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDMMC1 reset 
    // 
#define SDMMC1RST_MASK 0x800U
#define SDMMC1RST_OFFSET 11
#define SDMMC1RST_START_BIT 11
#define SDMMC1RST_WIDTH 1


#define APB_2RSTR_REG 0x24

typedef enum sdmmc1rst {
    SDMMC_1RST_0,
    SDMMC_1RST_1
} SDMMC_1RST_T ;
#define WRITE_SDMMC1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SDMMC1RST_MASK) | ((val << SDMMC1RST_START_BIT) & SDMMC1RST_MASK )); \
   } 

#define ENABLE_SDMMC1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SDMMC1RST_MASK ); \
   }

#define DISABLE_SDMMC1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SDMMC1RST_MASK ); \
   } 

#define READ_SDMMC1RST() \
   ((READ_REGISTER_ULONG(0x24) & SDMMC1RST_MASK)  >> SDMMC1RST_START_BIT)

#define WHEN_SDMMC1RST_HIGH() \
     if ( READ_SDMMC1RST() )


#define UNLESS_SDMMC1RST_HIGH() \
     if (! READ_SDMMC1RST() )


#define WAIT_SDMMC1RST_LOW() \
    while ( READ_SDMMC1RST() );


#define WAIT_SDMMC1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDMMC1RST() && (--___t___ > 0)); }


#define WAIT_SDMMC1RST_HIGH() \
    while (! READ_SDMMC1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI2 reset 
    // 
#define SAI2RST_MASK 0x800000U
#define SAI2RST_OFFSET 23
#define SAI2RST_START_BIT 23
#define SAI2RST_WIDTH 1



typedef enum sai2rst {
    SAI_2RST_0,
    SAI_2RST_1
} SAI_2RST_T ;
#define WRITE_SAI2RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SAI2RST_MASK) | ((val << SAI2RST_START_BIT) & SAI2RST_MASK )); \
   } 

#define ENABLE_SAI2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SAI2RST_MASK ); \
   }

#define DISABLE_SAI2RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SAI2RST_MASK ); \
   } 

#define READ_SAI2RST() \
   ((READ_REGISTER_ULONG(0x24) & SAI2RST_MASK)  >> SAI2RST_START_BIT)

#define WHEN_SAI2RST_HIGH() \
     if ( READ_SAI2RST() )


#define UNLESS_SAI2RST_HIGH() \
     if (! READ_SAI2RST() )


#define WAIT_SAI2RST_LOW() \
    while ( READ_SAI2RST() );


#define WAIT_SAI2RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAI2RST() && (--___t___ > 0)); }


#define WAIT_SAI2RST_HIGH() \
    while (! READ_SAI2RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LTDC reset 
    // 
#define LTDCRST_MASK 0x4000000U
#define LTDCRST_OFFSET 26
#define LTDCRST_START_BIT 26
#define LTDCRST_WIDTH 1



typedef enum ltdcrst {
    LTDCRST_0,
    LTDCRST_1
} LTDCRST_T ;
#define WRITE_LTDCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ LTDCRST_MASK) | ((val << LTDCRST_START_BIT) & LTDCRST_MASK )); \
   } 

#define ENABLE_LTDCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  LTDCRST_MASK ); \
   }

#define DISABLE_LTDCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~LTDCRST_MASK ); \
   } 

#define READ_LTDCRST() \
   ((READ_REGISTER_ULONG(0x24) & LTDCRST_MASK)  >> LTDCRST_START_BIT)

#define WHEN_LTDCRST_HIGH() \
     if ( READ_LTDCRST() )


#define UNLESS_LTDCRST_HIGH() \
     if (! READ_LTDCRST() )


#define WAIT_LTDCRST_LOW() \
    while ( READ_LTDCRST() );


#define WAIT_LTDCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LTDCRST() && (--___t___ > 0)); }


#define WAIT_LTDCRST_HIGH() \
    while (! READ_LTDCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI1 reset 
    // 
#define SAI1RST_MASK 0x400000U
#define SAI1RST_OFFSET 22
#define SAI1RST_START_BIT 22
#define SAI1RST_WIDTH 1



typedef enum sai1rst {
    SAI_1RST_0,
    SAI_1RST_1
} SAI_1RST_T ;
#define WRITE_SAI1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SAI1RST_MASK) | ((val << SAI1RST_START_BIT) & SAI1RST_MASK )); \
   } 

#define ENABLE_SAI1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SAI1RST_MASK ); \
   }

#define DISABLE_SAI1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SAI1RST_MASK ); \
   } 

#define READ_SAI1RST() \
   ((READ_REGISTER_ULONG(0x24) & SAI1RST_MASK)  >> SAI1RST_START_BIT)

#define WHEN_SAI1RST_HIGH() \
     if ( READ_SAI1RST() )


#define UNLESS_SAI1RST_HIGH() \
     if (! READ_SAI1RST() )


#define WAIT_SAI1RST_LOW() \
    while ( READ_SAI1RST() );


#define WAIT_SAI1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAI1RST() && (--___t___ > 0)); }


#define WAIT_SAI1RST_HIGH() \
    while (! READ_SAI1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI6 reset 
    // 
#define SPI6RST_MASK 0x200000U
#define SPI6RST_OFFSET 21
#define SPI6RST_START_BIT 21
#define SPI6RST_WIDTH 1



typedef enum spi6rst {
    SPI_6RST_0,
    SPI_6RST_1
} SPI_6RST_T ;
#define WRITE_SPI6RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SPI6RST_MASK) | ((val << SPI6RST_START_BIT) & SPI6RST_MASK )); \
   } 

#define ENABLE_SPI6RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SPI6RST_MASK ); \
   }

#define DISABLE_SPI6RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SPI6RST_MASK ); \
   } 

#define READ_SPI6RST() \
   ((READ_REGISTER_ULONG(0x24) & SPI6RST_MASK)  >> SPI6RST_START_BIT)

#define WHEN_SPI6RST_HIGH() \
     if ( READ_SPI6RST() )


#define UNLESS_SPI6RST_HIGH() \
     if (! READ_SPI6RST() )


#define WAIT_SPI6RST_LOW() \
    while ( READ_SPI6RST() );


#define WAIT_SPI6RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI6RST() && (--___t___ > 0)); }


#define WAIT_SPI6RST_HIGH() \
    while (! READ_SPI6RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI5 reset 
    // 
#define SPI5RST_MASK 0x100000U
#define SPI5RST_OFFSET 20
#define SPI5RST_START_BIT 20
#define SPI5RST_WIDTH 1



typedef enum spi5rst {
    SPI_5RST_0,
    SPI_5RST_1
} SPI_5RST_T ;
#define WRITE_SPI5RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SPI5RST_MASK) | ((val << SPI5RST_START_BIT) & SPI5RST_MASK )); \
   } 

#define ENABLE_SPI5RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SPI5RST_MASK ); \
   }

#define DISABLE_SPI5RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SPI5RST_MASK ); \
   } 

#define READ_SPI5RST() \
   ((READ_REGISTER_ULONG(0x24) & SPI5RST_MASK)  >> SPI5RST_START_BIT)

#define WHEN_SPI5RST_HIGH() \
     if ( READ_SPI5RST() )


#define UNLESS_SPI5RST_HIGH() \
     if (! READ_SPI5RST() )


#define WAIT_SPI5RST_LOW() \
    while ( READ_SPI5RST() );


#define WAIT_SPI5RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI5RST() && (--___t___ > 0)); }


#define WAIT_SPI5RST_HIGH() \
    while (! READ_SPI5RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM11 reset 
    // 
#define TIM11RST_MASK 0x40000U
#define TIM11RST_OFFSET 18
#define TIM11RST_START_BIT 18
#define TIM11RST_WIDTH 1



typedef enum tim11rst {
    TIM_1_1RST_0,
    TIM_1_1RST_1
} TIM_1_1RST_T ;
#define WRITE_TIM11RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ TIM11RST_MASK) | ((val << TIM11RST_START_BIT) & TIM11RST_MASK )); \
   } 

#define ENABLE_TIM11RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  TIM11RST_MASK ); \
   }

#define DISABLE_TIM11RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~TIM11RST_MASK ); \
   } 

#define READ_TIM11RST() \
   ((READ_REGISTER_ULONG(0x24) & TIM11RST_MASK)  >> TIM11RST_START_BIT)

#define WHEN_TIM11RST_HIGH() \
     if ( READ_TIM11RST() )


#define UNLESS_TIM11RST_HIGH() \
     if (! READ_TIM11RST() )


#define WAIT_TIM11RST_LOW() \
    while ( READ_TIM11RST() );


#define WAIT_TIM11RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM11RST() && (--___t___ > 0)); }


#define WAIT_TIM11RST_HIGH() \
    while (! READ_TIM11RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM10 reset 
    // 
#define TIM10RST_MASK 0x20000U
#define TIM10RST_OFFSET 17
#define TIM10RST_START_BIT 17
#define TIM10RST_WIDTH 1



typedef enum tim10rst {
    TIM_1_0RST_0,
    TIM_1_0RST_1
} TIM_1_0RST_T ;
#define WRITE_TIM10RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ TIM10RST_MASK) | ((val << TIM10RST_START_BIT) & TIM10RST_MASK )); \
   } 

#define ENABLE_TIM10RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  TIM10RST_MASK ); \
   }

#define DISABLE_TIM10RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~TIM10RST_MASK ); \
   } 

#define READ_TIM10RST() \
   ((READ_REGISTER_ULONG(0x24) & TIM10RST_MASK)  >> TIM10RST_START_BIT)

#define WHEN_TIM10RST_HIGH() \
     if ( READ_TIM10RST() )


#define UNLESS_TIM10RST_HIGH() \
     if (! READ_TIM10RST() )


#define WAIT_TIM10RST_LOW() \
    while ( READ_TIM10RST() );


#define WAIT_TIM10RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM10RST() && (--___t___ > 0)); }


#define WAIT_TIM10RST_HIGH() \
    while (! READ_TIM10RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM9 reset 
    // 
#define TIM9RST_MASK 0x10000U
#define TIM9RST_OFFSET 16
#define TIM9RST_START_BIT 16
#define TIM9RST_WIDTH 1



typedef enum tim9rst {
    TIM_9RST_0,
    TIM_9RST_1
} TIM_9RST_T ;
#define WRITE_TIM9RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ TIM9RST_MASK) | ((val << TIM9RST_START_BIT) & TIM9RST_MASK )); \
   } 

#define ENABLE_TIM9RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  TIM9RST_MASK ); \
   }

#define DISABLE_TIM9RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~TIM9RST_MASK ); \
   } 

#define READ_TIM9RST() \
   ((READ_REGISTER_ULONG(0x24) & TIM9RST_MASK)  >> TIM9RST_START_BIT)

#define WHEN_TIM9RST_HIGH() \
     if ( READ_TIM9RST() )


#define UNLESS_TIM9RST_HIGH() \
     if (! READ_TIM9RST() )


#define WAIT_TIM9RST_LOW() \
    while ( READ_TIM9RST() );


#define WAIT_TIM9RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM9RST() && (--___t___ > 0)); }


#define WAIT_TIM9RST_HIGH() \
    while (! READ_TIM9RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // System configuration controller reset 
    // 
#define SYSCFGRST_MASK 0x4000U
#define SYSCFGRST_OFFSET 14
#define SYSCFGRST_START_BIT 14
#define SYSCFGRST_WIDTH 1



typedef enum syscfgrst {
    SYSCFGRST_0,
    SYSCFGRST_1
} SYSCFGRST_T ;
#define WRITE_SYSCFGRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SYSCFGRST_MASK) | ((val << SYSCFGRST_START_BIT) & SYSCFGRST_MASK )); \
   } 

#define ENABLE_SYSCFGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SYSCFGRST_MASK ); \
   }

#define DISABLE_SYSCFGRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SYSCFGRST_MASK ); \
   } 

#define READ_SYSCFGRST() \
   ((READ_REGISTER_ULONG(0x24) & SYSCFGRST_MASK)  >> SYSCFGRST_START_BIT)

#define WHEN_SYSCFGRST_HIGH() \
     if ( READ_SYSCFGRST() )


#define UNLESS_SYSCFGRST_HIGH() \
     if (! READ_SYSCFGRST() )


#define WAIT_SYSCFGRST_LOW() \
    while ( READ_SYSCFGRST() );


#define WAIT_SYSCFGRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SYSCFGRST() && (--___t___ > 0)); }


#define WAIT_SYSCFGRST_HIGH() \
    while (! READ_SYSCFGRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI4 reset 
    // 
#define SPI4RST_MASK 0x2000U
#define SPI4RST_OFFSET 13
#define SPI4RST_START_BIT 13
#define SPI4RST_WIDTH 1



typedef enum spi4rst {
    SPI_4RST_0,
    SPI_4RST_1
} SPI_4RST_T ;
#define WRITE_SPI4RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SPI4RST_MASK) | ((val << SPI4RST_START_BIT) & SPI4RST_MASK )); \
   } 

#define ENABLE_SPI4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SPI4RST_MASK ); \
   }

#define DISABLE_SPI4RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SPI4RST_MASK ); \
   } 

#define READ_SPI4RST() \
   ((READ_REGISTER_ULONG(0x24) & SPI4RST_MASK)  >> SPI4RST_START_BIT)

#define WHEN_SPI4RST_HIGH() \
     if ( READ_SPI4RST() )


#define UNLESS_SPI4RST_HIGH() \
     if (! READ_SPI4RST() )


#define WAIT_SPI4RST_LOW() \
    while ( READ_SPI4RST() );


#define WAIT_SPI4RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI4RST() && (--___t___ > 0)); }


#define WAIT_SPI4RST_HIGH() \
    while (! READ_SPI4RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 1 reset 
    // 
#define SPI1RST_MASK 0x1000U
#define SPI1RST_OFFSET 12
#define SPI1RST_START_BIT 12
#define SPI1RST_WIDTH 1



typedef enum spi1rst {
    SPI_1RST_0,
    SPI_1RST_1
} SPI_1RST_T ;
#define WRITE_SPI1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ SPI1RST_MASK) | ((val << SPI1RST_START_BIT) & SPI1RST_MASK )); \
   } 

#define ENABLE_SPI1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  SPI1RST_MASK ); \
   }

#define DISABLE_SPI1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~SPI1RST_MASK ); \
   } 

#define READ_SPI1RST() \
   ((READ_REGISTER_ULONG(0x24) & SPI1RST_MASK)  >> SPI1RST_START_BIT)

#define WHEN_SPI1RST_HIGH() \
     if ( READ_SPI1RST() )


#define UNLESS_SPI1RST_HIGH() \
     if (! READ_SPI1RST() )


#define WAIT_SPI1RST_LOW() \
    while ( READ_SPI1RST() );


#define WAIT_SPI1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI1RST() && (--___t___ > 0)); }


#define WAIT_SPI1RST_HIGH() \
    while (! READ_SPI1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC interface reset (common to all ADCs) 
    // 
#define ADCRST_MASK 0x100U
#define ADCRST_OFFSET 8
#define ADCRST_START_BIT 8
#define ADCRST_WIDTH 1



typedef enum adcrst {
    ADCRST_0,
    ADCRST_1
} ADCRST_T ;
#define WRITE_ADCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ ADCRST_MASK) | ((val << ADCRST_START_BIT) & ADCRST_MASK )); \
   } 

#define ENABLE_ADCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  ADCRST_MASK ); \
   }

#define DISABLE_ADCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~ADCRST_MASK ); \
   } 

#define READ_ADCRST() \
   ((READ_REGISTER_ULONG(0x24) & ADCRST_MASK)  >> ADCRST_START_BIT)

#define WHEN_ADCRST_HIGH() \
     if ( READ_ADCRST() )


#define UNLESS_ADCRST_HIGH() \
     if (! READ_ADCRST() )


#define WAIT_ADCRST_LOW() \
    while ( READ_ADCRST() );


#define WAIT_ADCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADCRST() && (--___t___ > 0)); }


#define WAIT_ADCRST_HIGH() \
    while (! READ_ADCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART6 reset 
    // 
#define USART6RST_MASK 0x20U
#define USART6RST_OFFSET 5
#define USART6RST_START_BIT 5
#define USART6RST_WIDTH 1



typedef enum usart6rst {
    USART_6RST_0,
    USART_6RST_1
} USART_6RST_T ;
#define WRITE_USART6RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ USART6RST_MASK) | ((val << USART6RST_START_BIT) & USART6RST_MASK )); \
   } 

#define ENABLE_USART6RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  USART6RST_MASK ); \
   }

#define DISABLE_USART6RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~USART6RST_MASK ); \
   } 

#define READ_USART6RST() \
   ((READ_REGISTER_ULONG(0x24) & USART6RST_MASK)  >> USART6RST_START_BIT)

#define WHEN_USART6RST_HIGH() \
     if ( READ_USART6RST() )


#define UNLESS_USART6RST_HIGH() \
     if (! READ_USART6RST() )


#define WAIT_USART6RST_LOW() \
    while ( READ_USART6RST() );


#define WAIT_USART6RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART6RST() && (--___t___ > 0)); }


#define WAIT_USART6RST_HIGH() \
    while (! READ_USART6RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART1 reset 
    // 
#define USART1RST_MASK 0x10U
#define USART1RST_OFFSET 4
#define USART1RST_START_BIT 4
#define USART1RST_WIDTH 1



typedef enum usart1rst {
    USART_1RST_0,
    USART_1RST_1
} USART_1RST_T ;
#define WRITE_USART1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ USART1RST_MASK) | ((val << USART1RST_START_BIT) & USART1RST_MASK )); \
   } 

#define ENABLE_USART1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  USART1RST_MASK ); \
   }

#define DISABLE_USART1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~USART1RST_MASK ); \
   } 

#define READ_USART1RST() \
   ((READ_REGISTER_ULONG(0x24) & USART1RST_MASK)  >> USART1RST_START_BIT)

#define WHEN_USART1RST_HIGH() \
     if ( READ_USART1RST() )


#define UNLESS_USART1RST_HIGH() \
     if (! READ_USART1RST() )


#define WAIT_USART1RST_LOW() \
    while ( READ_USART1RST() );


#define WAIT_USART1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART1RST() && (--___t___ > 0)); }


#define WAIT_USART1RST_HIGH() \
    while (! READ_USART1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM8 reset 
    // 
#define TIM8RST_MASK 0x2U
#define TIM8RST_OFFSET 1
#define TIM8RST_START_BIT 1
#define TIM8RST_WIDTH 1



typedef enum tim8rst {
    TIM_8RST_0,
    TIM_8RST_1
} TIM_8RST_T ;
#define WRITE_TIM8RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ TIM8RST_MASK) | ((val << TIM8RST_START_BIT) & TIM8RST_MASK )); \
   } 

#define ENABLE_TIM8RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  TIM8RST_MASK ); \
   }

#define DISABLE_TIM8RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~TIM8RST_MASK ); \
   } 

#define READ_TIM8RST() \
   ((READ_REGISTER_ULONG(0x24) & TIM8RST_MASK)  >> TIM8RST_START_BIT)

#define WHEN_TIM8RST_HIGH() \
     if ( READ_TIM8RST() )


#define UNLESS_TIM8RST_HIGH() \
     if (! READ_TIM8RST() )


#define WAIT_TIM8RST_LOW() \
    while ( READ_TIM8RST() );


#define WAIT_TIM8RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM8RST() && (--___t___ > 0)); }


#define WAIT_TIM8RST_HIGH() \
    while (! READ_TIM8RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2rstr
//
// Return the value of register APB_2RSTR
//
// Notes : Register APB2 peripheral reset register (APB2RSTR) at the offset 0x24, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM1 reset 
    // 
#define TIM1RST_MASK 0x1U
#define TIM1RST_OFFSET 0
#define TIM1RST_START_BIT 0
#define TIM1RST_WIDTH 1



typedef enum tim1rst {
    TIM_1RST_0,
    TIM_1RST_1
} TIM_1RST_T ;
#define WRITE_TIM1RST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ TIM1RST_MASK) | ((val << TIM1RST_START_BIT) & TIM1RST_MASK )); \
   } 

#define ENABLE_TIM1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  TIM1RST_MASK ); \
   }

#define DISABLE_TIM1RST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~TIM1RST_MASK ); \
   } 

#define READ_TIM1RST() \
   ((READ_REGISTER_ULONG(0x24) & TIM1RST_MASK)  >> TIM1RST_START_BIT)

#define WHEN_TIM1RST_HIGH() \
     if ( READ_TIM1RST() )


#define UNLESS_TIM1RST_HIGH() \
     if (! READ_TIM1RST() )


#define WAIT_TIM1RST_LOW() \
    while ( READ_TIM1RST() );


#define WAIT_TIM1RST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM1RST() && (--___t___ > 0)); }


#define WAIT_TIM1RST_HIGH() \
    while (! READ_TIM1RST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB1ENR
//
// Notes : Register Ahb1enr at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_1ENR( y) \
     WRITE_REGISTER_ULONG( 0x30 , y)

#define SET_BITS_AHB_1ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_1ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_1ENR() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port A clock enable 
    // 
#define GPIOAEN_MASK 0x1U
#define GPIOAEN_OFFSET 0
#define GPIOAEN_START_BIT 0
#define GPIOAEN_WIDTH 1


#define AHB_1ENR_REG 0x30

typedef enum gpioaen {
    GPIOAEN_0,
    GPIOAEN_1
} GPIOAEN_T ;
#define WRITE_GPIOAEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOAEN_MASK) | ((val << GPIOAEN_START_BIT) & GPIOAEN_MASK )); \
   } 

#define ENABLE_GPIOAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOAEN_MASK ); \
   }

#define DISABLE_GPIOAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOAEN_MASK ); \
   } 

#define READ_GPIOAEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOAEN_MASK)  >> GPIOAEN_START_BIT)

#define WHEN_GPIOAEN_HIGH() \
     if ( READ_GPIOAEN() )


#define UNLESS_GPIOAEN_HIGH() \
     if (! READ_GPIOAEN() )


#define WAIT_GPIOAEN_LOW() \
    while ( READ_GPIOAEN() );


#define WAIT_GPIOAEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOAEN() && (--___t___ > 0)); }


#define WAIT_GPIOAEN_HIGH() \
    while (! READ_GPIOAEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port B clock enable 
    // 
#define GPIOBEN_MASK 0x2U
#define GPIOBEN_OFFSET 1
#define GPIOBEN_START_BIT 1
#define GPIOBEN_WIDTH 1



typedef enum gpioben {
    GPIOBEN_0,
    GPIOBEN_1
} GPIOBEN_T ;
#define WRITE_GPIOBEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOBEN_MASK) | ((val << GPIOBEN_START_BIT) & GPIOBEN_MASK )); \
   } 

#define ENABLE_GPIOBEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOBEN_MASK ); \
   }

#define DISABLE_GPIOBEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOBEN_MASK ); \
   } 

#define READ_GPIOBEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOBEN_MASK)  >> GPIOBEN_START_BIT)

#define WHEN_GPIOBEN_HIGH() \
     if ( READ_GPIOBEN() )


#define UNLESS_GPIOBEN_HIGH() \
     if (! READ_GPIOBEN() )


#define WAIT_GPIOBEN_LOW() \
    while ( READ_GPIOBEN() );


#define WAIT_GPIOBEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOBEN() && (--___t___ > 0)); }


#define WAIT_GPIOBEN_HIGH() \
    while (! READ_GPIOBEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port C clock enable 
    // 
#define GPIOCEN_MASK 0x4U
#define GPIOCEN_OFFSET 2
#define GPIOCEN_START_BIT 2
#define GPIOCEN_WIDTH 1



typedef enum gpiocen {
    GPIOCEN_0,
    GPIOCEN_1
} GPIOCEN_T ;
#define WRITE_GPIOCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOCEN_MASK) | ((val << GPIOCEN_START_BIT) & GPIOCEN_MASK )); \
   } 

#define ENABLE_GPIOCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOCEN_MASK ); \
   }

#define DISABLE_GPIOCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOCEN_MASK ); \
   } 

#define READ_GPIOCEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOCEN_MASK)  >> GPIOCEN_START_BIT)

#define WHEN_GPIOCEN_HIGH() \
     if ( READ_GPIOCEN() )


#define UNLESS_GPIOCEN_HIGH() \
     if (! READ_GPIOCEN() )


#define WAIT_GPIOCEN_LOW() \
    while ( READ_GPIOCEN() );


#define WAIT_GPIOCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOCEN() && (--___t___ > 0)); }


#define WAIT_GPIOCEN_HIGH() \
    while (! READ_GPIOCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port D clock enable 
    // 
#define GPIODEN_MASK 0x8U
#define GPIODEN_OFFSET 3
#define GPIODEN_START_BIT 3
#define GPIODEN_WIDTH 1



typedef enum gpioden {
    GPIODEN_0,
    GPIODEN_1
} GPIODEN_T ;
#define WRITE_GPIODEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIODEN_MASK) | ((val << GPIODEN_START_BIT) & GPIODEN_MASK )); \
   } 

#define ENABLE_GPIODEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIODEN_MASK ); \
   }

#define DISABLE_GPIODEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIODEN_MASK ); \
   } 

#define READ_GPIODEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIODEN_MASK)  >> GPIODEN_START_BIT)

#define WHEN_GPIODEN_HIGH() \
     if ( READ_GPIODEN() )


#define UNLESS_GPIODEN_HIGH() \
     if (! READ_GPIODEN() )


#define WAIT_GPIODEN_LOW() \
    while ( READ_GPIODEN() );


#define WAIT_GPIODEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIODEN() && (--___t___ > 0)); }


#define WAIT_GPIODEN_HIGH() \
    while (! READ_GPIODEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port E clock enable 
    // 
#define GPIOEEN_MASK 0x10U
#define GPIOEEN_OFFSET 4
#define GPIOEEN_START_BIT 4
#define GPIOEEN_WIDTH 1



typedef enum gpioeen {
    GPIOEEN_0,
    GPIOEEN_1
} GPIOEEN_T ;
#define WRITE_GPIOEEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOEEN_MASK) | ((val << GPIOEEN_START_BIT) & GPIOEEN_MASK )); \
   } 

#define ENABLE_GPIOEEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOEEN_MASK ); \
   }

#define DISABLE_GPIOEEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOEEN_MASK ); \
   } 

#define READ_GPIOEEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOEEN_MASK)  >> GPIOEEN_START_BIT)

#define WHEN_GPIOEEN_HIGH() \
     if ( READ_GPIOEEN() )


#define UNLESS_GPIOEEN_HIGH() \
     if (! READ_GPIOEEN() )


#define WAIT_GPIOEEN_LOW() \
    while ( READ_GPIOEEN() );


#define WAIT_GPIOEEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOEEN() && (--___t___ > 0)); }


#define WAIT_GPIOEEN_HIGH() \
    while (! READ_GPIOEEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port F clock enable 
    // 
#define GPIOFEN_MASK 0x20U
#define GPIOFEN_OFFSET 5
#define GPIOFEN_START_BIT 5
#define GPIOFEN_WIDTH 1



typedef enum gpiofen {
    GPIOFEN_0,
    GPIOFEN_1
} GPIOFEN_T ;
#define WRITE_GPIOFEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOFEN_MASK) | ((val << GPIOFEN_START_BIT) & GPIOFEN_MASK )); \
   } 

#define ENABLE_GPIOFEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOFEN_MASK ); \
   }

#define DISABLE_GPIOFEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOFEN_MASK ); \
   } 

#define READ_GPIOFEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOFEN_MASK)  >> GPIOFEN_START_BIT)

#define WHEN_GPIOFEN_HIGH() \
     if ( READ_GPIOFEN() )


#define UNLESS_GPIOFEN_HIGH() \
     if (! READ_GPIOFEN() )


#define WAIT_GPIOFEN_LOW() \
    while ( READ_GPIOFEN() );


#define WAIT_GPIOFEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOFEN() && (--___t___ > 0)); }


#define WAIT_GPIOFEN_HIGH() \
    while (! READ_GPIOFEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port G clock enable 
    // 
#define GPIOGEN_MASK 0x40U
#define GPIOGEN_OFFSET 6
#define GPIOGEN_START_BIT 6
#define GPIOGEN_WIDTH 1



typedef enum gpiogen {
    GPIOGEN_0,
    GPIOGEN_1
} GPIOGEN_T ;
#define WRITE_GPIOGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOGEN_MASK) | ((val << GPIOGEN_START_BIT) & GPIOGEN_MASK )); \
   } 

#define ENABLE_GPIOGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOGEN_MASK ); \
   }

#define DISABLE_GPIOGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOGEN_MASK ); \
   } 

#define READ_GPIOGEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOGEN_MASK)  >> GPIOGEN_START_BIT)

#define WHEN_GPIOGEN_HIGH() \
     if ( READ_GPIOGEN() )


#define UNLESS_GPIOGEN_HIGH() \
     if (! READ_GPIOGEN() )


#define WAIT_GPIOGEN_LOW() \
    while ( READ_GPIOGEN() );


#define WAIT_GPIOGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOGEN() && (--___t___ > 0)); }


#define WAIT_GPIOGEN_HIGH() \
    while (! READ_GPIOGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port H clock enable 
    // 
#define GPIOHEN_MASK 0x80U
#define GPIOHEN_OFFSET 7
#define GPIOHEN_START_BIT 7
#define GPIOHEN_WIDTH 1



typedef enum gpiohen {
    GPIOHEN_0,
    GPIOHEN_1
} GPIOHEN_T ;
#define WRITE_GPIOHEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOHEN_MASK) | ((val << GPIOHEN_START_BIT) & GPIOHEN_MASK )); \
   } 

#define ENABLE_GPIOHEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOHEN_MASK ); \
   }

#define DISABLE_GPIOHEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOHEN_MASK ); \
   } 

#define READ_GPIOHEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOHEN_MASK)  >> GPIOHEN_START_BIT)

#define WHEN_GPIOHEN_HIGH() \
     if ( READ_GPIOHEN() )


#define UNLESS_GPIOHEN_HIGH() \
     if (! READ_GPIOHEN() )


#define WAIT_GPIOHEN_LOW() \
    while ( READ_GPIOHEN() );


#define WAIT_GPIOHEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOHEN() && (--___t___ > 0)); }


#define WAIT_GPIOHEN_HIGH() \
    while (! READ_GPIOHEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port I clock enable 
    // 
#define GPIOIEN_MASK 0x100U
#define GPIOIEN_OFFSET 8
#define GPIOIEN_START_BIT 8
#define GPIOIEN_WIDTH 1



typedef enum gpioien {
    GPIOIEN_0,
    GPIOIEN_1
} GPIOIEN_T ;
#define WRITE_GPIOIEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOIEN_MASK) | ((val << GPIOIEN_START_BIT) & GPIOIEN_MASK )); \
   } 

#define ENABLE_GPIOIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOIEN_MASK ); \
   }

#define DISABLE_GPIOIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOIEN_MASK ); \
   } 

#define READ_GPIOIEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOIEN_MASK)  >> GPIOIEN_START_BIT)

#define WHEN_GPIOIEN_HIGH() \
     if ( READ_GPIOIEN() )


#define UNLESS_GPIOIEN_HIGH() \
     if (! READ_GPIOIEN() )


#define WAIT_GPIOIEN_LOW() \
    while ( READ_GPIOIEN() );


#define WAIT_GPIOIEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOIEN() && (--___t___ > 0)); }


#define WAIT_GPIOIEN_HIGH() \
    while (! READ_GPIOIEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port J clock enable 
    // 
#define GPIOJEN_MASK 0x200U
#define GPIOJEN_OFFSET 9
#define GPIOJEN_START_BIT 9
#define GPIOJEN_WIDTH 1



typedef enum gpiojen {
    GPIOJEN_0,
    GPIOJEN_1
} GPIOJEN_T ;
#define WRITE_GPIOJEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOJEN_MASK) | ((val << GPIOJEN_START_BIT) & GPIOJEN_MASK )); \
   } 

#define ENABLE_GPIOJEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOJEN_MASK ); \
   }

#define DISABLE_GPIOJEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOJEN_MASK ); \
   } 

#define READ_GPIOJEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOJEN_MASK)  >> GPIOJEN_START_BIT)

#define WHEN_GPIOJEN_HIGH() \
     if ( READ_GPIOJEN() )


#define UNLESS_GPIOJEN_HIGH() \
     if (! READ_GPIOJEN() )


#define WAIT_GPIOJEN_LOW() \
    while ( READ_GPIOJEN() );


#define WAIT_GPIOJEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOJEN() && (--___t___ > 0)); }


#define WAIT_GPIOJEN_HIGH() \
    while (! READ_GPIOJEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port K clock enable 
    // 
#define GPIOKEN_MASK 0x400U
#define GPIOKEN_OFFSET 10
#define GPIOKEN_START_BIT 10
#define GPIOKEN_WIDTH 1



typedef enum gpioken {
    GPIOKEN_0,
    GPIOKEN_1
} GPIOKEN_T ;
#define WRITE_GPIOKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ GPIOKEN_MASK) | ((val << GPIOKEN_START_BIT) & GPIOKEN_MASK )); \
   } 

#define ENABLE_GPIOKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  GPIOKEN_MASK ); \
   }

#define DISABLE_GPIOKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~GPIOKEN_MASK ); \
   } 

#define READ_GPIOKEN() \
   ((READ_REGISTER_ULONG(0x30) & GPIOKEN_MASK)  >> GPIOKEN_START_BIT)

#define WHEN_GPIOKEN_HIGH() \
     if ( READ_GPIOKEN() )


#define UNLESS_GPIOKEN_HIGH() \
     if (! READ_GPIOKEN() )


#define WAIT_GPIOKEN_LOW() \
    while ( READ_GPIOKEN() );


#define WAIT_GPIOKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOKEN() && (--___t___ > 0)); }


#define WAIT_GPIOKEN_HIGH() \
    while (! READ_GPIOKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CRC clock enable 
    // 
#define CRCEN_MASK 0x1000U
#define CRCEN_OFFSET 12
#define CRCEN_START_BIT 12
#define CRCEN_WIDTH 1



typedef enum crcen {
    CRCEN_0,
    CRCEN_1
} CRCEN_T ;
#define WRITE_CRCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ CRCEN_MASK) | ((val << CRCEN_START_BIT) & CRCEN_MASK )); \
   } 

#define ENABLE_CRCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  CRCEN_MASK ); \
   }

#define DISABLE_CRCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~CRCEN_MASK ); \
   } 

#define READ_CRCEN() \
   ((READ_REGISTER_ULONG(0x30) & CRCEN_MASK)  >> CRCEN_START_BIT)

#define WHEN_CRCEN_HIGH() \
     if ( READ_CRCEN() )


#define UNLESS_CRCEN_HIGH() \
     if (! READ_CRCEN() )


#define WAIT_CRCEN_LOW() \
    while ( READ_CRCEN() );


#define WAIT_CRCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRCEN() && (--___t___ > 0)); }


#define WAIT_CRCEN_HIGH() \
    while (! READ_CRCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Backup SRAM interface clock enable 
    // 
#define BKPSRAMEN_MASK 0x40000U
#define BKPSRAMEN_OFFSET 18
#define BKPSRAMEN_START_BIT 18
#define BKPSRAMEN_WIDTH 1



typedef enum bkpsramen {
    BKPSRAMEN_0,
    BKPSRAMEN_1
} BKPSRAMEN_T ;
#define WRITE_BKPSRAMEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ BKPSRAMEN_MASK) | ((val << BKPSRAMEN_START_BIT) & BKPSRAMEN_MASK )); \
   } 

#define ENABLE_BKPSRAMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  BKPSRAMEN_MASK ); \
   }

#define DISABLE_BKPSRAMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~BKPSRAMEN_MASK ); \
   } 

#define READ_BKPSRAMEN() \
   ((READ_REGISTER_ULONG(0x30) & BKPSRAMEN_MASK)  >> BKPSRAMEN_START_BIT)

#define WHEN_BKPSRAMEN_HIGH() \
     if ( READ_BKPSRAMEN() )


#define UNLESS_BKPSRAMEN_HIGH() \
     if (! READ_BKPSRAMEN() )


#define WAIT_BKPSRAMEN_LOW() \
    while ( READ_BKPSRAMEN() );


#define WAIT_BKPSRAMEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BKPSRAMEN() && (--___t___ > 0)); }


#define WAIT_BKPSRAMEN_HIGH() \
    while (! READ_BKPSRAMEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CCM data RAM clock enable 
    // 
#define CCMDATARAMEN_MASK 0x100000U
#define CCMDATARAMEN_OFFSET 20
#define CCMDATARAMEN_START_BIT 20
#define CCMDATARAMEN_WIDTH 1



typedef enum ccmdataramen {
    CCMDATARAMEN_0,
    CCMDATARAMEN_1
} CCMDATARAMEN_T ;
#define WRITE_CCMDATARAMEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ CCMDATARAMEN_MASK) | ((val << CCMDATARAMEN_START_BIT) & CCMDATARAMEN_MASK )); \
   } 

#define ENABLE_CCMDATARAMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  CCMDATARAMEN_MASK ); \
   }

#define DISABLE_CCMDATARAMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~CCMDATARAMEN_MASK ); \
   } 

#define READ_CCMDATARAMEN() \
   ((READ_REGISTER_ULONG(0x30) & CCMDATARAMEN_MASK)  >> CCMDATARAMEN_START_BIT)

#define WHEN_CCMDATARAMEN_HIGH() \
     if ( READ_CCMDATARAMEN() )


#define UNLESS_CCMDATARAMEN_HIGH() \
     if (! READ_CCMDATARAMEN() )


#define WAIT_CCMDATARAMEN_LOW() \
    while ( READ_CCMDATARAMEN() );


#define WAIT_CCMDATARAMEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCMDATARAMEN() && (--___t___ > 0)); }


#define WAIT_CCMDATARAMEN_HIGH() \
    while (! READ_CCMDATARAMEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA1 clock enable 
    // 
#define DMA1EN_MASK 0x200000U
#define DMA1EN_OFFSET 21
#define DMA1EN_START_BIT 21
#define DMA1EN_WIDTH 1



typedef enum dma1en {
    DMA_1EN_0,
    DMA_1EN_1
} DMA_1EN_T ;
#define WRITE_DMA1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ DMA1EN_MASK) | ((val << DMA1EN_START_BIT) & DMA1EN_MASK )); \
   } 

#define ENABLE_DMA1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  DMA1EN_MASK ); \
   }

#define DISABLE_DMA1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~DMA1EN_MASK ); \
   } 

#define READ_DMA1EN() \
   ((READ_REGISTER_ULONG(0x30) & DMA1EN_MASK)  >> DMA1EN_START_BIT)

#define WHEN_DMA1EN_HIGH() \
     if ( READ_DMA1EN() )


#define UNLESS_DMA1EN_HIGH() \
     if (! READ_DMA1EN() )


#define WAIT_DMA1EN_LOW() \
    while ( READ_DMA1EN() );


#define WAIT_DMA1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA1EN() && (--___t___ > 0)); }


#define WAIT_DMA1EN_HIGH() \
    while (! READ_DMA1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2 clock enable 
    // 
#define DMA2EN_MASK 0x400000U
#define DMA2EN_OFFSET 22
#define DMA2EN_START_BIT 22
#define DMA2EN_WIDTH 1



typedef enum dma2en {
    DMA_2EN_0,
    DMA_2EN_1
} DMA_2EN_T ;
#define WRITE_DMA2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ DMA2EN_MASK) | ((val << DMA2EN_START_BIT) & DMA2EN_MASK )); \
   } 

#define ENABLE_DMA2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  DMA2EN_MASK ); \
   }

#define DISABLE_DMA2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~DMA2EN_MASK ); \
   } 

#define READ_DMA2EN() \
   ((READ_REGISTER_ULONG(0x30) & DMA2EN_MASK)  >> DMA2EN_START_BIT)

#define WHEN_DMA2EN_HIGH() \
     if ( READ_DMA2EN() )


#define UNLESS_DMA2EN_HIGH() \
     if (! READ_DMA2EN() )


#define WAIT_DMA2EN_LOW() \
    while ( READ_DMA2EN() );


#define WAIT_DMA2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA2EN() && (--___t___ > 0)); }


#define WAIT_DMA2EN_HIGH() \
    while (! READ_DMA2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2D clock enable 
    // 
#define DMA2DEN_MASK 0x800000U
#define DMA2DEN_OFFSET 23
#define DMA2DEN_START_BIT 23
#define DMA2DEN_WIDTH 1



typedef enum dma2den {
    DMA_2DEN_0,
    DMA_2DEN_1
} DMA_2DEN_T ;
#define WRITE_DMA2DEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ DMA2DEN_MASK) | ((val << DMA2DEN_START_BIT) & DMA2DEN_MASK )); \
   } 

#define ENABLE_DMA2DEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  DMA2DEN_MASK ); \
   }

#define DISABLE_DMA2DEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~DMA2DEN_MASK ); \
   } 

#define READ_DMA2DEN() \
   ((READ_REGISTER_ULONG(0x30) & DMA2DEN_MASK)  >> DMA2DEN_START_BIT)

#define WHEN_DMA2DEN_HIGH() \
     if ( READ_DMA2DEN() )


#define UNLESS_DMA2DEN_HIGH() \
     if (! READ_DMA2DEN() )


#define WAIT_DMA2DEN_LOW() \
    while ( READ_DMA2DEN() );


#define WAIT_DMA2DEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA2DEN() && (--___t___ > 0)); }


#define WAIT_DMA2DEN_HIGH() \
    while (! READ_DMA2DEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet MAC clock enable 
    // 
#define ETHMACEN_MASK 0x2000000U
#define ETHMACEN_OFFSET 25
#define ETHMACEN_START_BIT 25
#define ETHMACEN_WIDTH 1



typedef enum ethmacen {
    ETHMACEN_0,
    ETHMACEN_1
} ETHMACEN_T ;
#define WRITE_ETHMACEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ETHMACEN_MASK) | ((val << ETHMACEN_START_BIT) & ETHMACEN_MASK )); \
   } 

#define ENABLE_ETHMACEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ETHMACEN_MASK ); \
   }

#define DISABLE_ETHMACEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ETHMACEN_MASK ); \
   } 

#define READ_ETHMACEN() \
   ((READ_REGISTER_ULONG(0x30) & ETHMACEN_MASK)  >> ETHMACEN_START_BIT)

#define WHEN_ETHMACEN_HIGH() \
     if ( READ_ETHMACEN() )


#define UNLESS_ETHMACEN_HIGH() \
     if (! READ_ETHMACEN() )


#define WAIT_ETHMACEN_LOW() \
    while ( READ_ETHMACEN() );


#define WAIT_ETHMACEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACEN() && (--___t___ > 0)); }


#define WAIT_ETHMACEN_HIGH() \
    while (! READ_ETHMACEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet Transmission clock enable 
    // 
#define ETHMACTXEN_MASK 0x4000000U
#define ETHMACTXEN_OFFSET 26
#define ETHMACTXEN_START_BIT 26
#define ETHMACTXEN_WIDTH 1



typedef enum ethmactxen {
    ETHMACTXEN_0,
    ETHMACTXEN_1
} ETHMACTXEN_T ;
#define WRITE_ETHMACTXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ETHMACTXEN_MASK) | ((val << ETHMACTXEN_START_BIT) & ETHMACTXEN_MASK )); \
   } 

#define ENABLE_ETHMACTXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ETHMACTXEN_MASK ); \
   }

#define DISABLE_ETHMACTXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ETHMACTXEN_MASK ); \
   } 

#define READ_ETHMACTXEN() \
   ((READ_REGISTER_ULONG(0x30) & ETHMACTXEN_MASK)  >> ETHMACTXEN_START_BIT)

#define WHEN_ETHMACTXEN_HIGH() \
     if ( READ_ETHMACTXEN() )


#define UNLESS_ETHMACTXEN_HIGH() \
     if (! READ_ETHMACTXEN() )


#define WAIT_ETHMACTXEN_LOW() \
    while ( READ_ETHMACTXEN() );


#define WAIT_ETHMACTXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACTXEN() && (--___t___ > 0)); }


#define WAIT_ETHMACTXEN_HIGH() \
    while (! READ_ETHMACTXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet Reception clock enable 
    // 
#define ETHMACRXEN_MASK 0x8000000U
#define ETHMACRXEN_OFFSET 27
#define ETHMACRXEN_START_BIT 27
#define ETHMACRXEN_WIDTH 1



typedef enum ethmacrxen {
    ETHMACRXEN_0,
    ETHMACRXEN_1
} ETHMACRXEN_T ;
#define WRITE_ETHMACRXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ETHMACRXEN_MASK) | ((val << ETHMACRXEN_START_BIT) & ETHMACRXEN_MASK )); \
   } 

#define ENABLE_ETHMACRXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ETHMACRXEN_MASK ); \
   }

#define DISABLE_ETHMACRXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ETHMACRXEN_MASK ); \
   } 

#define READ_ETHMACRXEN() \
   ((READ_REGISTER_ULONG(0x30) & ETHMACRXEN_MASK)  >> ETHMACRXEN_START_BIT)

#define WHEN_ETHMACRXEN_HIGH() \
     if ( READ_ETHMACRXEN() )


#define UNLESS_ETHMACRXEN_HIGH() \
     if (! READ_ETHMACRXEN() )


#define WAIT_ETHMACRXEN_LOW() \
    while ( READ_ETHMACRXEN() );


#define WAIT_ETHMACRXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACRXEN() && (--___t___ > 0)); }


#define WAIT_ETHMACRXEN_HIGH() \
    while (! READ_ETHMACRXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet PTP clock enable 
    // 
#define ETHMACPTPEN_MASK 0x10000000U
#define ETHMACPTPEN_OFFSET 28
#define ETHMACPTPEN_START_BIT 28
#define ETHMACPTPEN_WIDTH 1



typedef enum ethmacptpen {
    ETHMACPTPEN_0,
    ETHMACPTPEN_1
} ETHMACPTPEN_T ;
#define WRITE_ETHMACPTPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ETHMACPTPEN_MASK) | ((val << ETHMACPTPEN_START_BIT) & ETHMACPTPEN_MASK )); \
   } 

#define ENABLE_ETHMACPTPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ETHMACPTPEN_MASK ); \
   }

#define DISABLE_ETHMACPTPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ETHMACPTPEN_MASK ); \
   } 

#define READ_ETHMACPTPEN() \
   ((READ_REGISTER_ULONG(0x30) & ETHMACPTPEN_MASK)  >> ETHMACPTPEN_START_BIT)

#define WHEN_ETHMACPTPEN_HIGH() \
     if ( READ_ETHMACPTPEN() )


#define UNLESS_ETHMACPTPEN_HIGH() \
     if (! READ_ETHMACPTPEN() )


#define WAIT_ETHMACPTPEN_LOW() \
    while ( READ_ETHMACPTPEN() );


#define WAIT_ETHMACPTPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACPTPEN() && (--___t___ > 0)); }


#define WAIT_ETHMACPTPEN_HIGH() \
    while (! READ_ETHMACPTPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG HS clock enable 
    // 
#define OTGHSEN_MASK 0x20000000U
#define OTGHSEN_OFFSET 29
#define OTGHSEN_START_BIT 29
#define OTGHSEN_WIDTH 1



typedef enum otghsen {
    OTGHSEN_0,
    OTGHSEN_1
} OTGHSEN_T ;
#define WRITE_OTGHSEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ OTGHSEN_MASK) | ((val << OTGHSEN_START_BIT) & OTGHSEN_MASK )); \
   } 

#define ENABLE_OTGHSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  OTGHSEN_MASK ); \
   }

#define DISABLE_OTGHSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~OTGHSEN_MASK ); \
   } 

#define READ_OTGHSEN() \
   ((READ_REGISTER_ULONG(0x30) & OTGHSEN_MASK)  >> OTGHSEN_START_BIT)

#define WHEN_OTGHSEN_HIGH() \
     if ( READ_OTGHSEN() )


#define UNLESS_OTGHSEN_HIGH() \
     if (! READ_OTGHSEN() )


#define WAIT_OTGHSEN_LOW() \
    while ( READ_OTGHSEN() );


#define WAIT_OTGHSEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGHSEN() && (--___t___ > 0)); }


#define WAIT_OTGHSEN_HIGH() \
    while (! READ_OTGHSEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1enr
//
// Return the value of register AHB_1ENR
//
// Notes : Register AHB1 peripheral clock register (AHB1ENR) at the offset 0x30, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG HSULPI clock enable 
    // 
#define OTGHSULPIEN_MASK 0x40000000U
#define OTGHSULPIEN_OFFSET 30
#define OTGHSULPIEN_START_BIT 30
#define OTGHSULPIEN_WIDTH 1



typedef enum otghsulpien {
    OTGHSULPIEN_0,
    OTGHSULPIEN_1
} OTGHSULPIEN_T ;
#define WRITE_OTGHSULPIEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ OTGHSULPIEN_MASK) | ((val << OTGHSULPIEN_START_BIT) & OTGHSULPIEN_MASK )); \
   } 

#define ENABLE_OTGHSULPIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  OTGHSULPIEN_MASK ); \
   }

#define DISABLE_OTGHSULPIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~OTGHSULPIEN_MASK ); \
   } 

#define READ_OTGHSULPIEN() \
   ((READ_REGISTER_ULONG(0x30) & OTGHSULPIEN_MASK)  >> OTGHSULPIEN_START_BIT)

#define WHEN_OTGHSULPIEN_HIGH() \
     if ( READ_OTGHSULPIEN() )


#define UNLESS_OTGHSULPIEN_HIGH() \
     if (! READ_OTGHSULPIEN() )


#define WAIT_OTGHSULPIEN_LOW() \
    while ( READ_OTGHSULPIEN() );


#define WAIT_OTGHSULPIEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGHSULPIEN() && (--___t___ > 0)); }


#define WAIT_OTGHSULPIEN_HIGH() \
    while (! READ_OTGHSULPIEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2enr
//
// Return the value of register AHB2ENR
//
// Notes : Register Ahb2enr at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_2ENR( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_AHB_2ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_2ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_2ENR() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2enr
//
// Return the value of register AHB_2ENR
//
// Notes : Register AHB2 peripheral clock enable register (AHB2ENR) at the offset 0x34, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Camera interface enable 
    // 
#define DCMIEN_MASK 0x1U
#define DCMIEN_OFFSET 0
#define DCMIEN_START_BIT 0
#define DCMIEN_WIDTH 1


#define AHB_2ENR_REG 0x34

typedef enum dcmien {
    DCMIEN_0,
    DCMIEN_1
} DCMIEN_T ;
#define WRITE_DCMIEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DCMIEN_MASK) | ((val << DCMIEN_START_BIT) & DCMIEN_MASK )); \
   } 

#define ENABLE_DCMIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DCMIEN_MASK ); \
   }

#define DISABLE_DCMIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DCMIEN_MASK ); \
   } 

#define READ_DCMIEN() \
   ((READ_REGISTER_ULONG(0x34) & DCMIEN_MASK)  >> DCMIEN_START_BIT)

#define WHEN_DCMIEN_HIGH() \
     if ( READ_DCMIEN() )


#define UNLESS_DCMIEN_HIGH() \
     if (! READ_DCMIEN() )


#define WAIT_DCMIEN_LOW() \
    while ( READ_DCMIEN() );


#define WAIT_DCMIEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCMIEN() && (--___t___ > 0)); }


#define WAIT_DCMIEN_HIGH() \
    while (! READ_DCMIEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2enr
//
// Return the value of register AHB_2ENR
//
// Notes : Register AHB2 peripheral clock enable register (AHB2ENR) at the offset 0x34, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Cryptographic modules clock enable 
    // 
#define CRYPEN_MASK 0x10U
#define CRYPEN_OFFSET 4
#define CRYPEN_START_BIT 4
#define CRYPEN_WIDTH 1



typedef enum crypen {
    CRYPEN_0,
    CRYPEN_1
} CRYPEN_T ;
#define WRITE_CRYPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CRYPEN_MASK) | ((val << CRYPEN_START_BIT) & CRYPEN_MASK )); \
   } 

#define ENABLE_CRYPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CRYPEN_MASK ); \
   }

#define DISABLE_CRYPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CRYPEN_MASK ); \
   } 

#define READ_CRYPEN() \
   ((READ_REGISTER_ULONG(0x34) & CRYPEN_MASK)  >> CRYPEN_START_BIT)

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
// Function : Ahb2enr
//
// Return the value of register AHB_2ENR
//
// Notes : Register AHB2 peripheral clock enable register (AHB2ENR) at the offset 0x34, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hash modules clock enable 
    // 
#define HASHEN_MASK 0x20U
#define HASHEN_OFFSET 5
#define HASHEN_START_BIT 5
#define HASHEN_WIDTH 1



typedef enum hashen {
    HASHEN_0,
    HASHEN_1
} HASHEN_T ;
#define WRITE_HASHEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ HASHEN_MASK) | ((val << HASHEN_START_BIT) & HASHEN_MASK )); \
   } 

#define ENABLE_HASHEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  HASHEN_MASK ); \
   }

#define DISABLE_HASHEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~HASHEN_MASK ); \
   } 

#define READ_HASHEN() \
   ((READ_REGISTER_ULONG(0x34) & HASHEN_MASK)  >> HASHEN_START_BIT)

#define WHEN_HASHEN_HIGH() \
     if ( READ_HASHEN() )


#define UNLESS_HASHEN_HIGH() \
     if (! READ_HASHEN() )


#define WAIT_HASHEN_LOW() \
    while ( READ_HASHEN() );


#define WAIT_HASHEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HASHEN() && (--___t___ > 0)); }


#define WAIT_HASHEN_HIGH() \
    while (! READ_HASHEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2enr
//
// Return the value of register AHB_2ENR
//
// Notes : Register AHB2 peripheral clock enable register (AHB2ENR) at the offset 0x34, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Random number generator clock enable 
    // 
#define RNGEN_MASK 0x40U
#define RNGEN_OFFSET 6
#define RNGEN_START_BIT 6
#define RNGEN_WIDTH 1



typedef enum rngen {
    RNGEN_0,
    RNGEN_1
} RNGEN_T ;
#define WRITE_RNGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RNGEN_MASK) | ((val << RNGEN_START_BIT) & RNGEN_MASK )); \
   } 

#define ENABLE_RNGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RNGEN_MASK ); \
   }

#define DISABLE_RNGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RNGEN_MASK ); \
   } 

#define READ_RNGEN() \
   ((READ_REGISTER_ULONG(0x34) & RNGEN_MASK)  >> RNGEN_START_BIT)

#define WHEN_RNGEN_HIGH() \
     if ( READ_RNGEN() )


#define UNLESS_RNGEN_HIGH() \
     if (! READ_RNGEN() )


#define WAIT_RNGEN_LOW() \
    while ( READ_RNGEN() );


#define WAIT_RNGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RNGEN() && (--___t___ > 0)); }


#define WAIT_RNGEN_HIGH() \
    while (! READ_RNGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2enr
//
// Return the value of register AHB_2ENR
//
// Notes : Register AHB2 peripheral clock enable register (AHB2ENR) at the offset 0x34, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG FS clock enable 
    // 
#define OTGFSEN_MASK 0x80U
#define OTGFSEN_OFFSET 7
#define OTGFSEN_START_BIT 7
#define OTGFSEN_WIDTH 1



typedef enum otgfsen {
    OTGFSEN_0,
    OTGFSEN_1
} OTGFSEN_T ;
#define WRITE_OTGFSEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ OTGFSEN_MASK) | ((val << OTGFSEN_START_BIT) & OTGFSEN_MASK )); \
   } 

#define ENABLE_OTGFSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  OTGFSEN_MASK ); \
   }

#define DISABLE_OTGFSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~OTGFSEN_MASK ); \
   } 

#define READ_OTGFSEN() \
   ((READ_REGISTER_ULONG(0x34) & OTGFSEN_MASK)  >> OTGFSEN_START_BIT)

#define WHEN_OTGFSEN_HIGH() \
     if ( READ_OTGFSEN() )


#define UNLESS_OTGFSEN_HIGH() \
     if (! READ_OTGFSEN() )


#define WAIT_OTGFSEN_LOW() \
    while ( READ_OTGFSEN() );


#define WAIT_OTGFSEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGFSEN() && (--___t___ > 0)); }


#define WAIT_OTGFSEN_HIGH() \
    while (! READ_OTGFSEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3enr
//
// Return the value of register AHB3ENR
//
// Notes : Register Ahb3enr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_3ENR( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_AHB_3ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_3ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_3ENR() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3enr
//
// Return the value of register AHB_3ENR
//
// Notes : Register AHB3 peripheral clock enable register (AHB3ENR) at the offset 0x38, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Quad SPI memory controller clock enable 
    // 
#define QSPIEN_MASK 0x2U
#define QSPIEN_OFFSET 1
#define QSPIEN_START_BIT 1
#define QSPIEN_WIDTH 1


#define AHB_3ENR_REG 0x38

typedef enum qspien {
    QSPIEN_0,
    QSPIEN_1
} QSPIEN_T ;
#define WRITE_QSPIEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ QSPIEN_MASK) | ((val << QSPIEN_START_BIT) & QSPIEN_MASK )); \
   } 

#define ENABLE_QSPIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  QSPIEN_MASK ); \
   }

#define DISABLE_QSPIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~QSPIEN_MASK ); \
   } 

#define READ_QSPIEN() \
   ((READ_REGISTER_ULONG(0x38) & QSPIEN_MASK)  >> QSPIEN_START_BIT)

#define WHEN_QSPIEN_HIGH() \
     if ( READ_QSPIEN() )


#define UNLESS_QSPIEN_HIGH() \
     if (! READ_QSPIEN() )


#define WAIT_QSPIEN_LOW() \
    while ( READ_QSPIEN() );


#define WAIT_QSPIEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_QSPIEN() && (--___t___ > 0)); }


#define WAIT_QSPIEN_HIGH() \
    while (! READ_QSPIEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3enr
//
// Return the value of register AHB_3ENR
//
// Notes : Register AHB3 peripheral clock enable register (AHB3ENR) at the offset 0x38, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Flexible memory controller module clock enable 
    // 
#define FMCEN_MASK 0x1U
#define FMCEN_OFFSET 0
#define FMCEN_START_BIT 0
#define FMCEN_WIDTH 1



typedef enum fmcen {
    FMCEN_0,
    FMCEN_1
} FMCEN_T ;
#define WRITE_FMCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ FMCEN_MASK) | ((val << FMCEN_START_BIT) & FMCEN_MASK )); \
   } 

#define ENABLE_FMCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  FMCEN_MASK ); \
   }

#define DISABLE_FMCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~FMCEN_MASK ); \
   } 

#define READ_FMCEN() \
   ((READ_REGISTER_ULONG(0x38) & FMCEN_MASK)  >> FMCEN_START_BIT)

#define WHEN_FMCEN_HIGH() \
     if ( READ_FMCEN() )


#define UNLESS_FMCEN_HIGH() \
     if (! READ_FMCEN() )


#define WAIT_FMCEN_LOW() \
    while ( READ_FMCEN() );


#define WAIT_FMCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FMCEN() && (--___t___ > 0)); }


#define WAIT_FMCEN_HIGH() \
    while (! READ_FMCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB1ENR
//
// Notes : Register Apb1enr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_APB_1ENR( y) \
     WRITE_REGISTER_ULONG( 0x40 , y)

#define SET_BITS_APB_1ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  mask ); \
   }

#define CLEAR_BITS_APB_1ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val & ~mask ); \
   }

#define READ_REGISTER_APB_1ENR() \
     READ_REGISTER_ULONG(0x40)

/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C4 clock enable 
    // 
#define I2C4EN_MASK 0x1000000U
#define I2C4EN_OFFSET 24
#define I2C4EN_START_BIT 24
#define I2C4EN_WIDTH 1


#define APB_1ENR_REG 0x40

typedef enum i2c4en {
    I_2C_4EN_0,
    I_2C_4EN_1
} I_2C_4EN_T ;
#define WRITE_I2C4EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ I2C4EN_MASK) | ((val << I2C4EN_START_BIT) & I2C4EN_MASK )); \
   } 

#define ENABLE_I2C4EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  I2C4EN_MASK ); \
   }

#define DISABLE_I2C4EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~I2C4EN_MASK ); \
   } 

#define READ_I2C4EN() \
   ((READ_REGISTER_ULONG(0x40) & I2C4EN_MASK)  >> I2C4EN_START_BIT)

#define WHEN_I2C4EN_HIGH() \
     if ( READ_I2C4EN() )


#define UNLESS_I2C4EN_HIGH() \
     if (! READ_I2C4EN() )


#define WAIT_I2C4EN_LOW() \
    while ( READ_I2C4EN() );


#define WAIT_I2C4EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C4EN() && (--___t___ > 0)); }


#define WAIT_I2C4EN_HIGH() \
    while (! READ_I2C4EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low power timer 1 clock enable 
    // 
#define LPTMI1EN_MASK 0x200U
#define LPTMI1EN_OFFSET 9
#define LPTMI1EN_START_BIT 9
#define LPTMI1EN_WIDTH 1



typedef enum lptmi1en {
    LPTMI_1EN_0,
    LPTMI_1EN_1
} LPTMI_1EN_T ;
#define WRITE_LPTMI1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ LPTMI1EN_MASK) | ((val << LPTMI1EN_START_BIT) & LPTMI1EN_MASK )); \
   } 

#define ENABLE_LPTMI1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  LPTMI1EN_MASK ); \
   }

#define DISABLE_LPTMI1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~LPTMI1EN_MASK ); \
   } 

#define READ_LPTMI1EN() \
   ((READ_REGISTER_ULONG(0x40) & LPTMI1EN_MASK)  >> LPTMI1EN_START_BIT)

#define WHEN_LPTMI1EN_HIGH() \
     if ( READ_LPTMI1EN() )


#define UNLESS_LPTMI1EN_HIGH() \
     if (! READ_LPTMI1EN() )


#define WAIT_LPTMI1EN_LOW() \
    while ( READ_LPTMI1EN() );


#define WAIT_LPTMI1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPTMI1EN() && (--___t___ > 0)); }


#define WAIT_LPTMI1EN_HIGH() \
    while (! READ_LPTMI1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HDMI-CEN clock enable 
    // 
#define CECEN_MASK 0x8000000U
#define CECEN_OFFSET 27
#define CECEN_START_BIT 27
#define CECEN_WIDTH 1



typedef enum cecen {
    CECEN_0,
    CECEN_1
} CECEN_T ;
#define WRITE_CECEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ CECEN_MASK) | ((val << CECEN_START_BIT) & CECEN_MASK )); \
   } 

#define ENABLE_CECEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  CECEN_MASK ); \
   }

#define DISABLE_CECEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~CECEN_MASK ); \
   } 

#define READ_CECEN() \
   ((READ_REGISTER_ULONG(0x40) & CECEN_MASK)  >> CECEN_START_BIT)

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
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPDIF-RX clock enable 
    // 
#define SPDIFRXEN_MASK 0x10000U
#define SPDIFRXEN_OFFSET 16
#define SPDIFRXEN_START_BIT 16
#define SPDIFRXEN_WIDTH 1



typedef enum spdifrxen {
    SPDIFRXEN_0,
    SPDIFRXEN_1
} SPDIFRXEN_T ;
#define WRITE_SPDIFRXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ SPDIFRXEN_MASK) | ((val << SPDIFRXEN_START_BIT) & SPDIFRXEN_MASK )); \
   } 

#define ENABLE_SPDIFRXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  SPDIFRXEN_MASK ); \
   }

#define DISABLE_SPDIFRXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~SPDIFRXEN_MASK ); \
   } 

#define READ_SPDIFRXEN() \
   ((READ_REGISTER_ULONG(0x40) & SPDIFRXEN_MASK)  >> SPDIFRXEN_START_BIT)

#define WHEN_SPDIFRXEN_HIGH() \
     if ( READ_SPDIFRXEN() )


#define UNLESS_SPDIFRXEN_HIGH() \
     if (! READ_SPDIFRXEN() )


#define WAIT_SPDIFRXEN_LOW() \
    while ( READ_SPDIFRXEN() );


#define WAIT_SPDIFRXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPDIFRXEN() && (--___t___ > 0)); }


#define WAIT_SPDIFRXEN_HIGH() \
    while (! READ_SPDIFRXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART8 clock enable 
    // 
#define UART8ENR_MASK 0x80000000U
#define UART8ENR_OFFSET 31
#define UART8ENR_START_BIT 31
#define UART8ENR_WIDTH 1



typedef enum uart8enr {
    UART_8ENR_0,
    UART_8ENR_1
} UART_8ENR_T ;
#define WRITE_UART8ENR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ UART8ENR_MASK) | ((val << UART8ENR_START_BIT) & UART8ENR_MASK )); \
   } 

#define ENABLE_UART8ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  UART8ENR_MASK ); \
   }

#define DISABLE_UART8ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~UART8ENR_MASK ); \
   } 

#define READ_UART8ENR() \
   ((READ_REGISTER_ULONG(0x40) & UART8ENR_MASK)  >> UART8ENR_START_BIT)

#define WHEN_UART8ENR_HIGH() \
     if ( READ_UART8ENR() )


#define UNLESS_UART8ENR_HIGH() \
     if (! READ_UART8ENR() )


#define WAIT_UART8ENR_LOW() \
    while ( READ_UART8ENR() );


#define WAIT_UART8ENR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART8ENR() && (--___t___ > 0)); }


#define WAIT_UART8ENR_HIGH() \
    while (! READ_UART8ENR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART7 clock enable 
    // 
#define UART7ENR_MASK 0x40000000U
#define UART7ENR_OFFSET 30
#define UART7ENR_START_BIT 30
#define UART7ENR_WIDTH 1



typedef enum uart7enr {
    UART_7ENR_0,
    UART_7ENR_1
} UART_7ENR_T ;
#define WRITE_UART7ENR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ UART7ENR_MASK) | ((val << UART7ENR_START_BIT) & UART7ENR_MASK )); \
   } 

#define ENABLE_UART7ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  UART7ENR_MASK ); \
   }

#define DISABLE_UART7ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~UART7ENR_MASK ); \
   } 

#define READ_UART7ENR() \
   ((READ_REGISTER_ULONG(0x40) & UART7ENR_MASK)  >> UART7ENR_START_BIT)

#define WHEN_UART7ENR_HIGH() \
     if ( READ_UART7ENR() )


#define UNLESS_UART7ENR_HIGH() \
     if (! READ_UART7ENR() )


#define WAIT_UART7ENR_LOW() \
    while ( READ_UART7ENR() );


#define WAIT_UART7ENR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART7ENR() && (--___t___ > 0)); }


#define WAIT_UART7ENR_HIGH() \
    while (! READ_UART7ENR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC interface clock enable 
    // 
#define DACEN_MASK 0x20000000U
#define DACEN_OFFSET 29
#define DACEN_START_BIT 29
#define DACEN_WIDTH 1



typedef enum dacen {
    DACEN_0,
    DACEN_1
} DACEN_T ;
#define WRITE_DACEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ DACEN_MASK) | ((val << DACEN_START_BIT) & DACEN_MASK )); \
   } 

#define ENABLE_DACEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  DACEN_MASK ); \
   }

#define DISABLE_DACEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~DACEN_MASK ); \
   } 

#define READ_DACEN() \
   ((READ_REGISTER_ULONG(0x40) & DACEN_MASK)  >> DACEN_START_BIT)

#define WHEN_DACEN_HIGH() \
     if ( READ_DACEN() )


#define UNLESS_DACEN_HIGH() \
     if (! READ_DACEN() )


#define WAIT_DACEN_LOW() \
    while ( READ_DACEN() );


#define WAIT_DACEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DACEN() && (--___t___ > 0)); }


#define WAIT_DACEN_HIGH() \
    while (! READ_DACEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power interface clock enable 
    // 
#define PWREN_MASK 0x10000000U
#define PWREN_OFFSET 28
#define PWREN_START_BIT 28
#define PWREN_WIDTH 1



typedef enum pwren {
    PWREN_0,
    PWREN_1
} PWREN_T ;
#define WRITE_PWREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ PWREN_MASK) | ((val << PWREN_START_BIT) & PWREN_MASK )); \
   } 

#define ENABLE_PWREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  PWREN_MASK ); \
   }

#define DISABLE_PWREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~PWREN_MASK ); \
   } 

#define READ_PWREN() \
   ((READ_REGISTER_ULONG(0x40) & PWREN_MASK)  >> PWREN_START_BIT)

#define WHEN_PWREN_HIGH() \
     if ( READ_PWREN() )


#define UNLESS_PWREN_HIGH() \
     if (! READ_PWREN() )


#define WAIT_PWREN_LOW() \
    while ( READ_PWREN() );


#define WAIT_PWREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWREN() && (--___t___ > 0)); }


#define WAIT_PWREN_HIGH() \
    while (! READ_PWREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAN 2 clock enable 
    // 
#define CAN2EN_MASK 0x4000000U
#define CAN2EN_OFFSET 26
#define CAN2EN_START_BIT 26
#define CAN2EN_WIDTH 1



typedef enum can2en {
    CAN_2EN_0,
    CAN_2EN_1
} CAN_2EN_T ;
#define WRITE_CAN2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ CAN2EN_MASK) | ((val << CAN2EN_START_BIT) & CAN2EN_MASK )); \
   } 

#define ENABLE_CAN2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  CAN2EN_MASK ); \
   }

#define DISABLE_CAN2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~CAN2EN_MASK ); \
   } 

#define READ_CAN2EN() \
   ((READ_REGISTER_ULONG(0x40) & CAN2EN_MASK)  >> CAN2EN_START_BIT)

#define WHEN_CAN2EN_HIGH() \
     if ( READ_CAN2EN() )


#define UNLESS_CAN2EN_HIGH() \
     if (! READ_CAN2EN() )


#define WAIT_CAN2EN_LOW() \
    while ( READ_CAN2EN() );


#define WAIT_CAN2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAN2EN() && (--___t___ > 0)); }


#define WAIT_CAN2EN_HIGH() \
    while (! READ_CAN2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAN 1 clock enable 
    // 
#define CAN1EN_MASK 0x2000000U
#define CAN1EN_OFFSET 25
#define CAN1EN_START_BIT 25
#define CAN1EN_WIDTH 1



typedef enum can1en {
    CAN_1EN_0,
    CAN_1EN_1
} CAN_1EN_T ;
#define WRITE_CAN1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ CAN1EN_MASK) | ((val << CAN1EN_START_BIT) & CAN1EN_MASK )); \
   } 

#define ENABLE_CAN1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  CAN1EN_MASK ); \
   }

#define DISABLE_CAN1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~CAN1EN_MASK ); \
   } 

#define READ_CAN1EN() \
   ((READ_REGISTER_ULONG(0x40) & CAN1EN_MASK)  >> CAN1EN_START_BIT)

#define WHEN_CAN1EN_HIGH() \
     if ( READ_CAN1EN() )


#define UNLESS_CAN1EN_HIGH() \
     if (! READ_CAN1EN() )


#define WAIT_CAN1EN_LOW() \
    while ( READ_CAN1EN() );


#define WAIT_CAN1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAN1EN() && (--___t___ > 0)); }


#define WAIT_CAN1EN_HIGH() \
    while (! READ_CAN1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C3 clock enable 
    // 
#define I2C3EN_MASK 0x800000U
#define I2C3EN_OFFSET 23
#define I2C3EN_START_BIT 23
#define I2C3EN_WIDTH 1



typedef enum i2c3en {
    I_2C_3EN_0,
    I_2C_3EN_1
} I_2C_3EN_T ;
#define WRITE_I2C3EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ I2C3EN_MASK) | ((val << I2C3EN_START_BIT) & I2C3EN_MASK )); \
   } 

#define ENABLE_I2C3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  I2C3EN_MASK ); \
   }

#define DISABLE_I2C3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~I2C3EN_MASK ); \
   } 

#define READ_I2C3EN() \
   ((READ_REGISTER_ULONG(0x40) & I2C3EN_MASK)  >> I2C3EN_START_BIT)

#define WHEN_I2C3EN_HIGH() \
     if ( READ_I2C3EN() )


#define UNLESS_I2C3EN_HIGH() \
     if (! READ_I2C3EN() )


#define WAIT_I2C3EN_LOW() \
    while ( READ_I2C3EN() );


#define WAIT_I2C3EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C3EN() && (--___t___ > 0)); }


#define WAIT_I2C3EN_HIGH() \
    while (! READ_I2C3EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C2 clock enable 
    // 
#define I2C2EN_MASK 0x400000U
#define I2C2EN_OFFSET 22
#define I2C2EN_START_BIT 22
#define I2C2EN_WIDTH 1



typedef enum i2c2en {
    I_2C_2EN_0,
    I_2C_2EN_1
} I_2C_2EN_T ;
#define WRITE_I2C2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ I2C2EN_MASK) | ((val << I2C2EN_START_BIT) & I2C2EN_MASK )); \
   } 

#define ENABLE_I2C2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  I2C2EN_MASK ); \
   }

#define DISABLE_I2C2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~I2C2EN_MASK ); \
   } 

#define READ_I2C2EN() \
   ((READ_REGISTER_ULONG(0x40) & I2C2EN_MASK)  >> I2C2EN_START_BIT)

#define WHEN_I2C2EN_HIGH() \
     if ( READ_I2C2EN() )


#define UNLESS_I2C2EN_HIGH() \
     if (! READ_I2C2EN() )


#define WAIT_I2C2EN_LOW() \
    while ( READ_I2C2EN() );


#define WAIT_I2C2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C2EN() && (--___t___ > 0)); }


#define WAIT_I2C2EN_HIGH() \
    while (! READ_I2C2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C1 clock enable 
    // 
#define I2C1EN_MASK 0x200000U
#define I2C1EN_OFFSET 21
#define I2C1EN_START_BIT 21
#define I2C1EN_WIDTH 1



typedef enum i2c1en {
    I_2C_1EN_0,
    I_2C_1EN_1
} I_2C_1EN_T ;
#define WRITE_I2C1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ I2C1EN_MASK) | ((val << I2C1EN_START_BIT) & I2C1EN_MASK )); \
   } 

#define ENABLE_I2C1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  I2C1EN_MASK ); \
   }

#define DISABLE_I2C1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~I2C1EN_MASK ); \
   } 

#define READ_I2C1EN() \
   ((READ_REGISTER_ULONG(0x40) & I2C1EN_MASK)  >> I2C1EN_START_BIT)

#define WHEN_I2C1EN_HIGH() \
     if ( READ_I2C1EN() )


#define UNLESS_I2C1EN_HIGH() \
     if (! READ_I2C1EN() )


#define WAIT_I2C1EN_LOW() \
    while ( READ_I2C1EN() );


#define WAIT_I2C1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C1EN() && (--___t___ > 0)); }


#define WAIT_I2C1EN_HIGH() \
    while (! READ_I2C1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART5 clock enable 
    // 
#define UART5EN_MASK 0x100000U
#define UART5EN_OFFSET 20
#define UART5EN_START_BIT 20
#define UART5EN_WIDTH 1



typedef enum uart5en {
    UART_5EN_0,
    UART_5EN_1
} UART_5EN_T ;
#define WRITE_UART5EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ UART5EN_MASK) | ((val << UART5EN_START_BIT) & UART5EN_MASK )); \
   } 

#define ENABLE_UART5EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  UART5EN_MASK ); \
   }

#define DISABLE_UART5EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~UART5EN_MASK ); \
   } 

#define READ_UART5EN() \
   ((READ_REGISTER_ULONG(0x40) & UART5EN_MASK)  >> UART5EN_START_BIT)

#define WHEN_UART5EN_HIGH() \
     if ( READ_UART5EN() )


#define UNLESS_UART5EN_HIGH() \
     if (! READ_UART5EN() )


#define WAIT_UART5EN_LOW() \
    while ( READ_UART5EN() );


#define WAIT_UART5EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART5EN() && (--___t___ > 0)); }


#define WAIT_UART5EN_HIGH() \
    while (! READ_UART5EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART4 clock enable 
    // 
#define UART4EN_MASK 0x80000U
#define UART4EN_OFFSET 19
#define UART4EN_START_BIT 19
#define UART4EN_WIDTH 1



typedef enum uart4en {
    UART_4EN_0,
    UART_4EN_1
} UART_4EN_T ;
#define WRITE_UART4EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ UART4EN_MASK) | ((val << UART4EN_START_BIT) & UART4EN_MASK )); \
   } 

#define ENABLE_UART4EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  UART4EN_MASK ); \
   }

#define DISABLE_UART4EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~UART4EN_MASK ); \
   } 

#define READ_UART4EN() \
   ((READ_REGISTER_ULONG(0x40) & UART4EN_MASK)  >> UART4EN_START_BIT)

#define WHEN_UART4EN_HIGH() \
     if ( READ_UART4EN() )


#define UNLESS_UART4EN_HIGH() \
     if (! READ_UART4EN() )


#define WAIT_UART4EN_LOW() \
    while ( READ_UART4EN() );


#define WAIT_UART4EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART4EN() && (--___t___ > 0)); }


#define WAIT_UART4EN_HIGH() \
    while (! READ_UART4EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART3 clock enable 
    // 
#define USART3EN_MASK 0x40000U
#define USART3EN_OFFSET 18
#define USART3EN_START_BIT 18
#define USART3EN_WIDTH 1



typedef enum usart3en {
    USART_3EN_0,
    USART_3EN_1
} USART_3EN_T ;
#define WRITE_USART3EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ USART3EN_MASK) | ((val << USART3EN_START_BIT) & USART3EN_MASK )); \
   } 

#define ENABLE_USART3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  USART3EN_MASK ); \
   }

#define DISABLE_USART3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~USART3EN_MASK ); \
   } 

#define READ_USART3EN() \
   ((READ_REGISTER_ULONG(0x40) & USART3EN_MASK)  >> USART3EN_START_BIT)

#define WHEN_USART3EN_HIGH() \
     if ( READ_USART3EN() )


#define UNLESS_USART3EN_HIGH() \
     if (! READ_USART3EN() )


#define WAIT_USART3EN_LOW() \
    while ( READ_USART3EN() );


#define WAIT_USART3EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART3EN() && (--___t___ > 0)); }


#define WAIT_USART3EN_HIGH() \
    while (! READ_USART3EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 2 clock enable 
    // 
#define USART2EN_MASK 0x20000U
#define USART2EN_OFFSET 17
#define USART2EN_START_BIT 17
#define USART2EN_WIDTH 1



typedef enum usart2en {
    USART_2EN_0,
    USART_2EN_1
} USART_2EN_T ;
#define WRITE_USART2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ USART2EN_MASK) | ((val << USART2EN_START_BIT) & USART2EN_MASK )); \
   } 

#define ENABLE_USART2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  USART2EN_MASK ); \
   }

#define DISABLE_USART2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~USART2EN_MASK ); \
   } 

#define READ_USART2EN() \
   ((READ_REGISTER_ULONG(0x40) & USART2EN_MASK)  >> USART2EN_START_BIT)

#define WHEN_USART2EN_HIGH() \
     if ( READ_USART2EN() )


#define UNLESS_USART2EN_HIGH() \
     if (! READ_USART2EN() )


#define WAIT_USART2EN_LOW() \
    while ( READ_USART2EN() );


#define WAIT_USART2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART2EN() && (--___t___ > 0)); }


#define WAIT_USART2EN_HIGH() \
    while (! READ_USART2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI3 clock enable 
    // 
#define SPI3EN_MASK 0x8000U
#define SPI3EN_OFFSET 15
#define SPI3EN_START_BIT 15
#define SPI3EN_WIDTH 1



typedef enum spi3en {
    SPI_3EN_0,
    SPI_3EN_1
} SPI_3EN_T ;
#define WRITE_SPI3EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ SPI3EN_MASK) | ((val << SPI3EN_START_BIT) & SPI3EN_MASK )); \
   } 

#define ENABLE_SPI3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  SPI3EN_MASK ); \
   }

#define DISABLE_SPI3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~SPI3EN_MASK ); \
   } 

#define READ_SPI3EN() \
   ((READ_REGISTER_ULONG(0x40) & SPI3EN_MASK)  >> SPI3EN_START_BIT)

#define WHEN_SPI3EN_HIGH() \
     if ( READ_SPI3EN() )


#define UNLESS_SPI3EN_HIGH() \
     if (! READ_SPI3EN() )


#define WAIT_SPI3EN_LOW() \
    while ( READ_SPI3EN() );


#define WAIT_SPI3EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI3EN() && (--___t___ > 0)); }


#define WAIT_SPI3EN_HIGH() \
    while (! READ_SPI3EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI2 clock enable 
    // 
#define SPI2EN_MASK 0x4000U
#define SPI2EN_OFFSET 14
#define SPI2EN_START_BIT 14
#define SPI2EN_WIDTH 1



typedef enum spi2en {
    SPI_2EN_0,
    SPI_2EN_1
} SPI_2EN_T ;
#define WRITE_SPI2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ SPI2EN_MASK) | ((val << SPI2EN_START_BIT) & SPI2EN_MASK )); \
   } 

#define ENABLE_SPI2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  SPI2EN_MASK ); \
   }

#define DISABLE_SPI2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~SPI2EN_MASK ); \
   } 

#define READ_SPI2EN() \
   ((READ_REGISTER_ULONG(0x40) & SPI2EN_MASK)  >> SPI2EN_START_BIT)

#define WHEN_SPI2EN_HIGH() \
     if ( READ_SPI2EN() )


#define UNLESS_SPI2EN_HIGH() \
     if (! READ_SPI2EN() )


#define WAIT_SPI2EN_LOW() \
    while ( READ_SPI2EN() );


#define WAIT_SPI2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI2EN() && (--___t___ > 0)); }


#define WAIT_SPI2EN_HIGH() \
    while (! READ_SPI2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window watchdog clock enable 
    // 
#define WWDGEN_MASK 0x800U
#define WWDGEN_OFFSET 11
#define WWDGEN_START_BIT 11
#define WWDGEN_WIDTH 1



typedef enum wwdgen {
    WWDGEN_0,
    WWDGEN_1
} WWDGEN_T ;
#define WRITE_WWDGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ WWDGEN_MASK) | ((val << WWDGEN_START_BIT) & WWDGEN_MASK )); \
   } 

#define ENABLE_WWDGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  WWDGEN_MASK ); \
   }

#define DISABLE_WWDGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~WWDGEN_MASK ); \
   } 

#define READ_WWDGEN() \
   ((READ_REGISTER_ULONG(0x40) & WWDGEN_MASK)  >> WWDGEN_START_BIT)

#define WHEN_WWDGEN_HIGH() \
     if ( READ_WWDGEN() )


#define UNLESS_WWDGEN_HIGH() \
     if (! READ_WWDGEN() )


#define WAIT_WWDGEN_LOW() \
    while ( READ_WWDGEN() );


#define WAIT_WWDGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WWDGEN() && (--___t___ > 0)); }


#define WAIT_WWDGEN_HIGH() \
    while (! READ_WWDGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM14 clock enable 
    // 
#define TIM14EN_MASK 0x100U
#define TIM14EN_OFFSET 8
#define TIM14EN_START_BIT 8
#define TIM14EN_WIDTH 1



typedef enum tim14en {
    TIM_1_4EN_0,
    TIM_1_4EN_1
} TIM_1_4EN_T ;
#define WRITE_TIM14EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM14EN_MASK) | ((val << TIM14EN_START_BIT) & TIM14EN_MASK )); \
   } 

#define ENABLE_TIM14EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM14EN_MASK ); \
   }

#define DISABLE_TIM14EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM14EN_MASK ); \
   } 

#define READ_TIM14EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM14EN_MASK)  >> TIM14EN_START_BIT)

#define WHEN_TIM14EN_HIGH() \
     if ( READ_TIM14EN() )


#define UNLESS_TIM14EN_HIGH() \
     if (! READ_TIM14EN() )


#define WAIT_TIM14EN_LOW() \
    while ( READ_TIM14EN() );


#define WAIT_TIM14EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM14EN() && (--___t___ > 0)); }


#define WAIT_TIM14EN_HIGH() \
    while (! READ_TIM14EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM13 clock enable 
    // 
#define TIM13EN_MASK 0x80U
#define TIM13EN_OFFSET 7
#define TIM13EN_START_BIT 7
#define TIM13EN_WIDTH 1



typedef enum tim13en {
    TIM_1_3EN_0,
    TIM_1_3EN_1
} TIM_1_3EN_T ;
#define WRITE_TIM13EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM13EN_MASK) | ((val << TIM13EN_START_BIT) & TIM13EN_MASK )); \
   } 

#define ENABLE_TIM13EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM13EN_MASK ); \
   }

#define DISABLE_TIM13EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM13EN_MASK ); \
   } 

#define READ_TIM13EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM13EN_MASK)  >> TIM13EN_START_BIT)

#define WHEN_TIM13EN_HIGH() \
     if ( READ_TIM13EN() )


#define UNLESS_TIM13EN_HIGH() \
     if (! READ_TIM13EN() )


#define WAIT_TIM13EN_LOW() \
    while ( READ_TIM13EN() );


#define WAIT_TIM13EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM13EN() && (--___t___ > 0)); }


#define WAIT_TIM13EN_HIGH() \
    while (! READ_TIM13EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM12 clock enable 
    // 
#define TIM12EN_MASK 0x40U
#define TIM12EN_OFFSET 6
#define TIM12EN_START_BIT 6
#define TIM12EN_WIDTH 1



typedef enum tim12en {
    TIM_1_2EN_0,
    TIM_1_2EN_1
} TIM_1_2EN_T ;
#define WRITE_TIM12EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM12EN_MASK) | ((val << TIM12EN_START_BIT) & TIM12EN_MASK )); \
   } 

#define ENABLE_TIM12EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM12EN_MASK ); \
   }

#define DISABLE_TIM12EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM12EN_MASK ); \
   } 

#define READ_TIM12EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM12EN_MASK)  >> TIM12EN_START_BIT)

#define WHEN_TIM12EN_HIGH() \
     if ( READ_TIM12EN() )


#define UNLESS_TIM12EN_HIGH() \
     if (! READ_TIM12EN() )


#define WAIT_TIM12EN_LOW() \
    while ( READ_TIM12EN() );


#define WAIT_TIM12EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM12EN() && (--___t___ > 0)); }


#define WAIT_TIM12EN_HIGH() \
    while (! READ_TIM12EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM7 clock enable 
    // 
#define TIM7EN_MASK 0x20U
#define TIM7EN_OFFSET 5
#define TIM7EN_START_BIT 5
#define TIM7EN_WIDTH 1



typedef enum tim7en {
    TIM_7EN_0,
    TIM_7EN_1
} TIM_7EN_T ;
#define WRITE_TIM7EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM7EN_MASK) | ((val << TIM7EN_START_BIT) & TIM7EN_MASK )); \
   } 

#define ENABLE_TIM7EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM7EN_MASK ); \
   }

#define DISABLE_TIM7EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM7EN_MASK ); \
   } 

#define READ_TIM7EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM7EN_MASK)  >> TIM7EN_START_BIT)

#define WHEN_TIM7EN_HIGH() \
     if ( READ_TIM7EN() )


#define UNLESS_TIM7EN_HIGH() \
     if (! READ_TIM7EN() )


#define WAIT_TIM7EN_LOW() \
    while ( READ_TIM7EN() );


#define WAIT_TIM7EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM7EN() && (--___t___ > 0)); }


#define WAIT_TIM7EN_HIGH() \
    while (! READ_TIM7EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM6 clock enable 
    // 
#define TIM6EN_MASK 0x10U
#define TIM6EN_OFFSET 4
#define TIM6EN_START_BIT 4
#define TIM6EN_WIDTH 1



typedef enum tim6en {
    TIM_6EN_0,
    TIM_6EN_1
} TIM_6EN_T ;
#define WRITE_TIM6EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM6EN_MASK) | ((val << TIM6EN_START_BIT) & TIM6EN_MASK )); \
   } 

#define ENABLE_TIM6EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM6EN_MASK ); \
   }

#define DISABLE_TIM6EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM6EN_MASK ); \
   } 

#define READ_TIM6EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM6EN_MASK)  >> TIM6EN_START_BIT)

#define WHEN_TIM6EN_HIGH() \
     if ( READ_TIM6EN() )


#define UNLESS_TIM6EN_HIGH() \
     if (! READ_TIM6EN() )


#define WAIT_TIM6EN_LOW() \
    while ( READ_TIM6EN() );


#define WAIT_TIM6EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM6EN() && (--___t___ > 0)); }


#define WAIT_TIM6EN_HIGH() \
    while (! READ_TIM6EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM5 clock enable 
    // 
#define TIM5EN_MASK 0x8U
#define TIM5EN_OFFSET 3
#define TIM5EN_START_BIT 3
#define TIM5EN_WIDTH 1



typedef enum tim5en {
    TIM_5EN_0,
    TIM_5EN_1
} TIM_5EN_T ;
#define WRITE_TIM5EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM5EN_MASK) | ((val << TIM5EN_START_BIT) & TIM5EN_MASK )); \
   } 

#define ENABLE_TIM5EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM5EN_MASK ); \
   }

#define DISABLE_TIM5EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM5EN_MASK ); \
   } 

#define READ_TIM5EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM5EN_MASK)  >> TIM5EN_START_BIT)

#define WHEN_TIM5EN_HIGH() \
     if ( READ_TIM5EN() )


#define UNLESS_TIM5EN_HIGH() \
     if (! READ_TIM5EN() )


#define WAIT_TIM5EN_LOW() \
    while ( READ_TIM5EN() );


#define WAIT_TIM5EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM5EN() && (--___t___ > 0)); }


#define WAIT_TIM5EN_HIGH() \
    while (! READ_TIM5EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM4 clock enable 
    // 
#define TIM4EN_MASK 0x4U
#define TIM4EN_OFFSET 2
#define TIM4EN_START_BIT 2
#define TIM4EN_WIDTH 1



typedef enum tim4en {
    TIM_4EN_0,
    TIM_4EN_1
} TIM_4EN_T ;
#define WRITE_TIM4EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM4EN_MASK) | ((val << TIM4EN_START_BIT) & TIM4EN_MASK )); \
   } 

#define ENABLE_TIM4EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM4EN_MASK ); \
   }

#define DISABLE_TIM4EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM4EN_MASK ); \
   } 

#define READ_TIM4EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM4EN_MASK)  >> TIM4EN_START_BIT)

#define WHEN_TIM4EN_HIGH() \
     if ( READ_TIM4EN() )


#define UNLESS_TIM4EN_HIGH() \
     if (! READ_TIM4EN() )


#define WAIT_TIM4EN_LOW() \
    while ( READ_TIM4EN() );


#define WAIT_TIM4EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM4EN() && (--___t___ > 0)); }


#define WAIT_TIM4EN_HIGH() \
    while (! READ_TIM4EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM3 clock enable 
    // 
#define TIM3EN_MASK 0x2U
#define TIM3EN_OFFSET 1
#define TIM3EN_START_BIT 1
#define TIM3EN_WIDTH 1



typedef enum tim3en {
    TIM_3EN_0,
    TIM_3EN_1
} TIM_3EN_T ;
#define WRITE_TIM3EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM3EN_MASK) | ((val << TIM3EN_START_BIT) & TIM3EN_MASK )); \
   } 

#define ENABLE_TIM3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM3EN_MASK ); \
   }

#define DISABLE_TIM3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM3EN_MASK ); \
   } 

#define READ_TIM3EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM3EN_MASK)  >> TIM3EN_START_BIT)

#define WHEN_TIM3EN_HIGH() \
     if ( READ_TIM3EN() )


#define UNLESS_TIM3EN_HIGH() \
     if (! READ_TIM3EN() )


#define WAIT_TIM3EN_LOW() \
    while ( READ_TIM3EN() );


#define WAIT_TIM3EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM3EN() && (--___t___ > 0)); }


#define WAIT_TIM3EN_HIGH() \
    while (! READ_TIM3EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1enr
//
// Return the value of register APB_1ENR
//
// Notes : Register APB1 peripheral clock enable register (APB1ENR) at the offset 0x40, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM2 clock enable 
    // 
#define TIM2EN_MASK 0x1U
#define TIM2EN_OFFSET 0
#define TIM2EN_START_BIT 0
#define TIM2EN_WIDTH 1



typedef enum tim2en {
    TIM_2EN_0,
    TIM_2EN_1
} TIM_2EN_T ;
#define WRITE_TIM2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TIM2EN_MASK) | ((val << TIM2EN_START_BIT) & TIM2EN_MASK )); \
   } 

#define ENABLE_TIM2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TIM2EN_MASK ); \
   }

#define DISABLE_TIM2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TIM2EN_MASK ); \
   } 

#define READ_TIM2EN() \
   ((READ_REGISTER_ULONG(0x40) & TIM2EN_MASK)  >> TIM2EN_START_BIT)

#define WHEN_TIM2EN_HIGH() \
     if ( READ_TIM2EN() )


#define UNLESS_TIM2EN_HIGH() \
     if (! READ_TIM2EN() )


#define WAIT_TIM2EN_LOW() \
    while ( READ_TIM2EN() );


#define WAIT_TIM2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM2EN() && (--___t___ > 0)); }


#define WAIT_TIM2EN_HIGH() \
    while (! READ_TIM2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB2ENR
//
// Notes : Register Apb2enr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_APB_2ENR( y) \
     WRITE_REGISTER_ULONG( 0x44 , y)

#define SET_BITS_APB_2ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  mask ); \
   }

#define CLEAR_BITS_APB_2ENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val & ~mask ); \
   }

#define READ_REGISTER_APB_2ENR() \
     READ_REGISTER_ULONG(0x44)

/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDMMC1 clock enable 
    // 
#define SDMMC1EN_MASK 0x800U
#define SDMMC1EN_OFFSET 11
#define SDMMC1EN_START_BIT 11
#define SDMMC1EN_WIDTH 1


#define APB_2ENR_REG 0x44

typedef enum sdmmc1en {
    SDMMC_1EN_0,
    SDMMC_1EN_1
} SDMMC_1EN_T ;
#define WRITE_SDMMC1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SDMMC1EN_MASK) | ((val << SDMMC1EN_START_BIT) & SDMMC1EN_MASK )); \
   } 

#define ENABLE_SDMMC1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SDMMC1EN_MASK ); \
   }

#define DISABLE_SDMMC1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SDMMC1EN_MASK ); \
   } 

#define READ_SDMMC1EN() \
   ((READ_REGISTER_ULONG(0x44) & SDMMC1EN_MASK)  >> SDMMC1EN_START_BIT)

#define WHEN_SDMMC1EN_HIGH() \
     if ( READ_SDMMC1EN() )


#define UNLESS_SDMMC1EN_HIGH() \
     if (! READ_SDMMC1EN() )


#define WAIT_SDMMC1EN_LOW() \
    while ( READ_SDMMC1EN() );


#define WAIT_SDMMC1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDMMC1EN() && (--___t___ > 0)); }


#define WAIT_SDMMC1EN_HIGH() \
    while (! READ_SDMMC1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI2 clock enable 
    // 
#define SAI2EN_MASK 0x800000U
#define SAI2EN_OFFSET 23
#define SAI2EN_START_BIT 23
#define SAI2EN_WIDTH 1



typedef enum sai2en {
    SAI_2EN_0,
    SAI_2EN_1
} SAI_2EN_T ;
#define WRITE_SAI2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SAI2EN_MASK) | ((val << SAI2EN_START_BIT) & SAI2EN_MASK )); \
   } 

#define ENABLE_SAI2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SAI2EN_MASK ); \
   }

#define DISABLE_SAI2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SAI2EN_MASK ); \
   } 

#define READ_SAI2EN() \
   ((READ_REGISTER_ULONG(0x44) & SAI2EN_MASK)  >> SAI2EN_START_BIT)

#define WHEN_SAI2EN_HIGH() \
     if ( READ_SAI2EN() )


#define UNLESS_SAI2EN_HIGH() \
     if (! READ_SAI2EN() )


#define WAIT_SAI2EN_LOW() \
    while ( READ_SAI2EN() );


#define WAIT_SAI2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAI2EN() && (--___t___ > 0)); }


#define WAIT_SAI2EN_HIGH() \
    while (! READ_SAI2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LTDC clock enable 
    // 
#define LTDCEN_MASK 0x4000000U
#define LTDCEN_OFFSET 26
#define LTDCEN_START_BIT 26
#define LTDCEN_WIDTH 1



typedef enum ltdcen {
    LTDCEN_0,
    LTDCEN_1
} LTDCEN_T ;
#define WRITE_LTDCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ LTDCEN_MASK) | ((val << LTDCEN_START_BIT) & LTDCEN_MASK )); \
   } 

#define ENABLE_LTDCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  LTDCEN_MASK ); \
   }

#define DISABLE_LTDCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~LTDCEN_MASK ); \
   } 

#define READ_LTDCEN() \
   ((READ_REGISTER_ULONG(0x44) & LTDCEN_MASK)  >> LTDCEN_START_BIT)

#define WHEN_LTDCEN_HIGH() \
     if ( READ_LTDCEN() )


#define UNLESS_LTDCEN_HIGH() \
     if (! READ_LTDCEN() )


#define WAIT_LTDCEN_LOW() \
    while ( READ_LTDCEN() );


#define WAIT_LTDCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LTDCEN() && (--___t___ > 0)); }


#define WAIT_LTDCEN_HIGH() \
    while (! READ_LTDCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI1 clock enable 
    // 
#define SAI1EN_MASK 0x400000U
#define SAI1EN_OFFSET 22
#define SAI1EN_START_BIT 22
#define SAI1EN_WIDTH 1



typedef enum sai1en {
    SAI_1EN_0,
    SAI_1EN_1
} SAI_1EN_T ;
#define WRITE_SAI1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SAI1EN_MASK) | ((val << SAI1EN_START_BIT) & SAI1EN_MASK )); \
   } 

#define ENABLE_SAI1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SAI1EN_MASK ); \
   }

#define DISABLE_SAI1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SAI1EN_MASK ); \
   } 

#define READ_SAI1EN() \
   ((READ_REGISTER_ULONG(0x44) & SAI1EN_MASK)  >> SAI1EN_START_BIT)

#define WHEN_SAI1EN_HIGH() \
     if ( READ_SAI1EN() )


#define UNLESS_SAI1EN_HIGH() \
     if (! READ_SAI1EN() )


#define WAIT_SAI1EN_LOW() \
    while ( READ_SAI1EN() );


#define WAIT_SAI1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAI1EN() && (--___t___ > 0)); }


#define WAIT_SAI1EN_HIGH() \
    while (! READ_SAI1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI6 clock enable 
    // 
#define SPI6ENR_MASK 0x200000U
#define SPI6ENR_OFFSET 21
#define SPI6ENR_START_BIT 21
#define SPI6ENR_WIDTH 1



typedef enum spi6enr {
    SPI_6ENR_0,
    SPI_6ENR_1
} SPI_6ENR_T ;
#define WRITE_SPI6ENR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SPI6ENR_MASK) | ((val << SPI6ENR_START_BIT) & SPI6ENR_MASK )); \
   } 

#define ENABLE_SPI6ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SPI6ENR_MASK ); \
   }

#define DISABLE_SPI6ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SPI6ENR_MASK ); \
   } 

#define READ_SPI6ENR() \
   ((READ_REGISTER_ULONG(0x44) & SPI6ENR_MASK)  >> SPI6ENR_START_BIT)

#define WHEN_SPI6ENR_HIGH() \
     if ( READ_SPI6ENR() )


#define UNLESS_SPI6ENR_HIGH() \
     if (! READ_SPI6ENR() )


#define WAIT_SPI6ENR_LOW() \
    while ( READ_SPI6ENR() );


#define WAIT_SPI6ENR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI6ENR() && (--___t___ > 0)); }


#define WAIT_SPI6ENR_HIGH() \
    while (! READ_SPI6ENR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI5 clock enable 
    // 
#define SPI5ENR_MASK 0x100000U
#define SPI5ENR_OFFSET 20
#define SPI5ENR_START_BIT 20
#define SPI5ENR_WIDTH 1



typedef enum spi5enr {
    SPI_5ENR_0,
    SPI_5ENR_1
} SPI_5ENR_T ;
#define WRITE_SPI5ENR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SPI5ENR_MASK) | ((val << SPI5ENR_START_BIT) & SPI5ENR_MASK )); \
   } 

#define ENABLE_SPI5ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SPI5ENR_MASK ); \
   }

#define DISABLE_SPI5ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SPI5ENR_MASK ); \
   } 

#define READ_SPI5ENR() \
   ((READ_REGISTER_ULONG(0x44) & SPI5ENR_MASK)  >> SPI5ENR_START_BIT)

#define WHEN_SPI5ENR_HIGH() \
     if ( READ_SPI5ENR() )


#define UNLESS_SPI5ENR_HIGH() \
     if (! READ_SPI5ENR() )


#define WAIT_SPI5ENR_LOW() \
    while ( READ_SPI5ENR() );


#define WAIT_SPI5ENR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI5ENR() && (--___t___ > 0)); }


#define WAIT_SPI5ENR_HIGH() \
    while (! READ_SPI5ENR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM11 clock enable 
    // 
#define TIM11EN_MASK 0x40000U
#define TIM11EN_OFFSET 18
#define TIM11EN_START_BIT 18
#define TIM11EN_WIDTH 1



typedef enum tim11en {
    TIM_1_1EN_0,
    TIM_1_1EN_1
} TIM_1_1EN_T ;
#define WRITE_TIM11EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ TIM11EN_MASK) | ((val << TIM11EN_START_BIT) & TIM11EN_MASK )); \
   } 

#define ENABLE_TIM11EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  TIM11EN_MASK ); \
   }

#define DISABLE_TIM11EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~TIM11EN_MASK ); \
   } 

#define READ_TIM11EN() \
   ((READ_REGISTER_ULONG(0x44) & TIM11EN_MASK)  >> TIM11EN_START_BIT)

#define WHEN_TIM11EN_HIGH() \
     if ( READ_TIM11EN() )


#define UNLESS_TIM11EN_HIGH() \
     if (! READ_TIM11EN() )


#define WAIT_TIM11EN_LOW() \
    while ( READ_TIM11EN() );


#define WAIT_TIM11EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM11EN() && (--___t___ > 0)); }


#define WAIT_TIM11EN_HIGH() \
    while (! READ_TIM11EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM10 clock enable 
    // 
#define TIM10EN_MASK 0x20000U
#define TIM10EN_OFFSET 17
#define TIM10EN_START_BIT 17
#define TIM10EN_WIDTH 1



typedef enum tim10en {
    TIM_1_0EN_0,
    TIM_1_0EN_1
} TIM_1_0EN_T ;
#define WRITE_TIM10EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ TIM10EN_MASK) | ((val << TIM10EN_START_BIT) & TIM10EN_MASK )); \
   } 

#define ENABLE_TIM10EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  TIM10EN_MASK ); \
   }

#define DISABLE_TIM10EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~TIM10EN_MASK ); \
   } 

#define READ_TIM10EN() \
   ((READ_REGISTER_ULONG(0x44) & TIM10EN_MASK)  >> TIM10EN_START_BIT)

#define WHEN_TIM10EN_HIGH() \
     if ( READ_TIM10EN() )


#define UNLESS_TIM10EN_HIGH() \
     if (! READ_TIM10EN() )


#define WAIT_TIM10EN_LOW() \
    while ( READ_TIM10EN() );


#define WAIT_TIM10EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM10EN() && (--___t___ > 0)); }


#define WAIT_TIM10EN_HIGH() \
    while (! READ_TIM10EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM9 clock enable 
    // 
#define TIM9EN_MASK 0x10000U
#define TIM9EN_OFFSET 16
#define TIM9EN_START_BIT 16
#define TIM9EN_WIDTH 1



typedef enum tim9en {
    TIM_9EN_0,
    TIM_9EN_1
} TIM_9EN_T ;
#define WRITE_TIM9EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ TIM9EN_MASK) | ((val << TIM9EN_START_BIT) & TIM9EN_MASK )); \
   } 

#define ENABLE_TIM9EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  TIM9EN_MASK ); \
   }

#define DISABLE_TIM9EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~TIM9EN_MASK ); \
   } 

#define READ_TIM9EN() \
   ((READ_REGISTER_ULONG(0x44) & TIM9EN_MASK)  >> TIM9EN_START_BIT)

#define WHEN_TIM9EN_HIGH() \
     if ( READ_TIM9EN() )


#define UNLESS_TIM9EN_HIGH() \
     if (! READ_TIM9EN() )


#define WAIT_TIM9EN_LOW() \
    while ( READ_TIM9EN() );


#define WAIT_TIM9EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM9EN() && (--___t___ > 0)); }


#define WAIT_TIM9EN_HIGH() \
    while (! READ_TIM9EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // System configuration controller clock enable 
    // 
#define SYSCFGEN_MASK 0x4000U
#define SYSCFGEN_OFFSET 14
#define SYSCFGEN_START_BIT 14
#define SYSCFGEN_WIDTH 1



typedef enum syscfgen {
    SYSCFGEN_0,
    SYSCFGEN_1
} SYSCFGEN_T ;
#define WRITE_SYSCFGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SYSCFGEN_MASK) | ((val << SYSCFGEN_START_BIT) & SYSCFGEN_MASK )); \
   } 

#define ENABLE_SYSCFGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SYSCFGEN_MASK ); \
   }

#define DISABLE_SYSCFGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SYSCFGEN_MASK ); \
   } 

#define READ_SYSCFGEN() \
   ((READ_REGISTER_ULONG(0x44) & SYSCFGEN_MASK)  >> SYSCFGEN_START_BIT)

#define WHEN_SYSCFGEN_HIGH() \
     if ( READ_SYSCFGEN() )


#define UNLESS_SYSCFGEN_HIGH() \
     if (! READ_SYSCFGEN() )


#define WAIT_SYSCFGEN_LOW() \
    while ( READ_SYSCFGEN() );


#define WAIT_SYSCFGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SYSCFGEN() && (--___t___ > 0)); }


#define WAIT_SYSCFGEN_HIGH() \
    while (! READ_SYSCFGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI4 clock enable 
    // 
#define SPI4ENR_MASK 0x2000U
#define SPI4ENR_OFFSET 13
#define SPI4ENR_START_BIT 13
#define SPI4ENR_WIDTH 1



typedef enum spi4enr {
    SPI_4ENR_0,
    SPI_4ENR_1
} SPI_4ENR_T ;
#define WRITE_SPI4ENR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SPI4ENR_MASK) | ((val << SPI4ENR_START_BIT) & SPI4ENR_MASK )); \
   } 

#define ENABLE_SPI4ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SPI4ENR_MASK ); \
   }

#define DISABLE_SPI4ENR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SPI4ENR_MASK ); \
   } 

#define READ_SPI4ENR() \
   ((READ_REGISTER_ULONG(0x44) & SPI4ENR_MASK)  >> SPI4ENR_START_BIT)

#define WHEN_SPI4ENR_HIGH() \
     if ( READ_SPI4ENR() )


#define UNLESS_SPI4ENR_HIGH() \
     if (! READ_SPI4ENR() )


#define WAIT_SPI4ENR_LOW() \
    while ( READ_SPI4ENR() );


#define WAIT_SPI4ENR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI4ENR() && (--___t___ > 0)); }


#define WAIT_SPI4ENR_HIGH() \
    while (! READ_SPI4ENR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI1 clock enable 
    // 
#define SPI1EN_MASK 0x1000U
#define SPI1EN_OFFSET 12
#define SPI1EN_START_BIT 12
#define SPI1EN_WIDTH 1



typedef enum spi1en {
    SPI_1EN_0,
    SPI_1EN_1
} SPI_1EN_T ;
#define WRITE_SPI1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SPI1EN_MASK) | ((val << SPI1EN_START_BIT) & SPI1EN_MASK )); \
   } 

#define ENABLE_SPI1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  SPI1EN_MASK ); \
   }

#define DISABLE_SPI1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~SPI1EN_MASK ); \
   } 

#define READ_SPI1EN() \
   ((READ_REGISTER_ULONG(0x44) & SPI1EN_MASK)  >> SPI1EN_START_BIT)

#define WHEN_SPI1EN_HIGH() \
     if ( READ_SPI1EN() )


#define UNLESS_SPI1EN_HIGH() \
     if (! READ_SPI1EN() )


#define WAIT_SPI1EN_LOW() \
    while ( READ_SPI1EN() );


#define WAIT_SPI1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI1EN() && (--___t___ > 0)); }


#define WAIT_SPI1EN_HIGH() \
    while (! READ_SPI1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC3 clock enable 
    // 
#define ADC3EN_MASK 0x400U
#define ADC3EN_OFFSET 10
#define ADC3EN_START_BIT 10
#define ADC3EN_WIDTH 1



typedef enum adc3en {
    ADC_3EN_0,
    ADC_3EN_1
} ADC_3EN_T ;
#define WRITE_ADC3EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ ADC3EN_MASK) | ((val << ADC3EN_START_BIT) & ADC3EN_MASK )); \
   } 

#define ENABLE_ADC3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  ADC3EN_MASK ); \
   }

#define DISABLE_ADC3EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~ADC3EN_MASK ); \
   } 

#define READ_ADC3EN() \
   ((READ_REGISTER_ULONG(0x44) & ADC3EN_MASK)  >> ADC3EN_START_BIT)

#define WHEN_ADC3EN_HIGH() \
     if ( READ_ADC3EN() )


#define UNLESS_ADC3EN_HIGH() \
     if (! READ_ADC3EN() )


#define WAIT_ADC3EN_LOW() \
    while ( READ_ADC3EN() );


#define WAIT_ADC3EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC3EN() && (--___t___ > 0)); }


#define WAIT_ADC3EN_HIGH() \
    while (! READ_ADC3EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC2 clock enable 
    // 
#define ADC2EN_MASK 0x200U
#define ADC2EN_OFFSET 9
#define ADC2EN_START_BIT 9
#define ADC2EN_WIDTH 1



typedef enum adc2en {
    ADC_2EN_0,
    ADC_2EN_1
} ADC_2EN_T ;
#define WRITE_ADC2EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ ADC2EN_MASK) | ((val << ADC2EN_START_BIT) & ADC2EN_MASK )); \
   } 

#define ENABLE_ADC2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  ADC2EN_MASK ); \
   }

#define DISABLE_ADC2EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~ADC2EN_MASK ); \
   } 

#define READ_ADC2EN() \
   ((READ_REGISTER_ULONG(0x44) & ADC2EN_MASK)  >> ADC2EN_START_BIT)

#define WHEN_ADC2EN_HIGH() \
     if ( READ_ADC2EN() )


#define UNLESS_ADC2EN_HIGH() \
     if (! READ_ADC2EN() )


#define WAIT_ADC2EN_LOW() \
    while ( READ_ADC2EN() );


#define WAIT_ADC2EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC2EN() && (--___t___ > 0)); }


#define WAIT_ADC2EN_HIGH() \
    while (! READ_ADC2EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC1 clock enable 
    // 
#define ADC1EN_MASK 0x100U
#define ADC1EN_OFFSET 8
#define ADC1EN_START_BIT 8
#define ADC1EN_WIDTH 1



typedef enum adc1en {
    ADC_1EN_0,
    ADC_1EN_1
} ADC_1EN_T ;
#define WRITE_ADC1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ ADC1EN_MASK) | ((val << ADC1EN_START_BIT) & ADC1EN_MASK )); \
   } 

#define ENABLE_ADC1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  ADC1EN_MASK ); \
   }

#define DISABLE_ADC1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~ADC1EN_MASK ); \
   } 

#define READ_ADC1EN() \
   ((READ_REGISTER_ULONG(0x44) & ADC1EN_MASK)  >> ADC1EN_START_BIT)

#define WHEN_ADC1EN_HIGH() \
     if ( READ_ADC1EN() )


#define UNLESS_ADC1EN_HIGH() \
     if (! READ_ADC1EN() )


#define WAIT_ADC1EN_LOW() \
    while ( READ_ADC1EN() );


#define WAIT_ADC1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC1EN() && (--___t___ > 0)); }


#define WAIT_ADC1EN_HIGH() \
    while (! READ_ADC1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART6 clock enable 
    // 
#define USART6EN_MASK 0x20U
#define USART6EN_OFFSET 5
#define USART6EN_START_BIT 5
#define USART6EN_WIDTH 1



typedef enum usart6en {
    USART_6EN_0,
    USART_6EN_1
} USART_6EN_T ;
#define WRITE_USART6EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ USART6EN_MASK) | ((val << USART6EN_START_BIT) & USART6EN_MASK )); \
   } 

#define ENABLE_USART6EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  USART6EN_MASK ); \
   }

#define DISABLE_USART6EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~USART6EN_MASK ); \
   } 

#define READ_USART6EN() \
   ((READ_REGISTER_ULONG(0x44) & USART6EN_MASK)  >> USART6EN_START_BIT)

#define WHEN_USART6EN_HIGH() \
     if ( READ_USART6EN() )


#define UNLESS_USART6EN_HIGH() \
     if (! READ_USART6EN() )


#define WAIT_USART6EN_LOW() \
    while ( READ_USART6EN() );


#define WAIT_USART6EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART6EN() && (--___t___ > 0)); }


#define WAIT_USART6EN_HIGH() \
    while (! READ_USART6EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART1 clock enable 
    // 
#define USART1EN_MASK 0x10U
#define USART1EN_OFFSET 4
#define USART1EN_START_BIT 4
#define USART1EN_WIDTH 1



typedef enum usart1en {
    USART_1EN_0,
    USART_1EN_1
} USART_1EN_T ;
#define WRITE_USART1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ USART1EN_MASK) | ((val << USART1EN_START_BIT) & USART1EN_MASK )); \
   } 

#define ENABLE_USART1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  USART1EN_MASK ); \
   }

#define DISABLE_USART1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~USART1EN_MASK ); \
   } 

#define READ_USART1EN() \
   ((READ_REGISTER_ULONG(0x44) & USART1EN_MASK)  >> USART1EN_START_BIT)

#define WHEN_USART1EN_HIGH() \
     if ( READ_USART1EN() )


#define UNLESS_USART1EN_HIGH() \
     if (! READ_USART1EN() )


#define WAIT_USART1EN_LOW() \
    while ( READ_USART1EN() );


#define WAIT_USART1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART1EN() && (--___t___ > 0)); }


#define WAIT_USART1EN_HIGH() \
    while (! READ_USART1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM8 clock enable 
    // 
#define TIM8EN_MASK 0x2U
#define TIM8EN_OFFSET 1
#define TIM8EN_START_BIT 1
#define TIM8EN_WIDTH 1



typedef enum tim8en {
    TIM_8EN_0,
    TIM_8EN_1
} TIM_8EN_T ;
#define WRITE_TIM8EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ TIM8EN_MASK) | ((val << TIM8EN_START_BIT) & TIM8EN_MASK )); \
   } 

#define ENABLE_TIM8EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  TIM8EN_MASK ); \
   }

#define DISABLE_TIM8EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~TIM8EN_MASK ); \
   } 

#define READ_TIM8EN() \
   ((READ_REGISTER_ULONG(0x44) & TIM8EN_MASK)  >> TIM8EN_START_BIT)

#define WHEN_TIM8EN_HIGH() \
     if ( READ_TIM8EN() )


#define UNLESS_TIM8EN_HIGH() \
     if (! READ_TIM8EN() )


#define WAIT_TIM8EN_LOW() \
    while ( READ_TIM8EN() );


#define WAIT_TIM8EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM8EN() && (--___t___ > 0)); }


#define WAIT_TIM8EN_HIGH() \
    while (! READ_TIM8EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2enr
//
// Return the value of register APB_2ENR
//
// Notes : Register APB2 peripheral clock enable register (APB2ENR) at the offset 0x44, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM1 clock enable 
    // 
#define TIM1EN_MASK 0x1U
#define TIM1EN_OFFSET 0
#define TIM1EN_START_BIT 0
#define TIM1EN_WIDTH 1



typedef enum tim1en {
    TIM_1EN_0,
    TIM_1EN_1
} TIM_1EN_T ;
#define WRITE_TIM1EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ TIM1EN_MASK) | ((val << TIM1EN_START_BIT) & TIM1EN_MASK )); \
   } 

#define ENABLE_TIM1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  TIM1EN_MASK ); \
   }

#define DISABLE_TIM1EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG(0x44, val & ~TIM1EN_MASK ); \
   } 

#define READ_TIM1EN() \
   ((READ_REGISTER_ULONG(0x44) & TIM1EN_MASK)  >> TIM1EN_START_BIT)

#define WHEN_TIM1EN_HIGH() \
     if ( READ_TIM1EN() )


#define UNLESS_TIM1EN_HIGH() \
     if (! READ_TIM1EN() )


#define WAIT_TIM1EN_LOW() \
    while ( READ_TIM1EN() );


#define WAIT_TIM1EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM1EN() && (--___t___ > 0)); }


#define WAIT_TIM1EN_HIGH() \
    while (! READ_TIM1EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB1LPENR
//
// Notes : Register Ahb1lpenr at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_1LPENR( y) \
     WRITE_REGISTER_ULONG( 0x50 , y)

#define SET_BITS_AHB_1LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_1LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_1LPENR() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG HS ULPI clock enable during Sleep mode 
    // 
#define OTGHSULPILPEN_MASK 0x40000000U
#define OTGHSULPILPEN_OFFSET 30
#define OTGHSULPILPEN_START_BIT 30
#define OTGHSULPILPEN_WIDTH 1


#define AHB_1LPENR_REG 0x50

typedef enum otghsulpilpen {
    OTGHSULPILPEN_0,
    OTGHSULPILPEN_1
} OTGHSULPILPEN_T ;
#define WRITE_OTGHSULPILPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ OTGHSULPILPEN_MASK) | ((val << OTGHSULPILPEN_START_BIT) & OTGHSULPILPEN_MASK )); \
   } 

#define ENABLE_OTGHSULPILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  OTGHSULPILPEN_MASK ); \
   }

#define DISABLE_OTGHSULPILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~OTGHSULPILPEN_MASK ); \
   } 

#define READ_OTGHSULPILPEN() \
   ((READ_REGISTER_ULONG(0x50) & OTGHSULPILPEN_MASK)  >> OTGHSULPILPEN_START_BIT)

#define WHEN_OTGHSULPILPEN_HIGH() \
     if ( READ_OTGHSULPILPEN() )


#define UNLESS_OTGHSULPILPEN_HIGH() \
     if (! READ_OTGHSULPILPEN() )


#define WAIT_OTGHSULPILPEN_LOW() \
    while ( READ_OTGHSULPILPEN() );


#define WAIT_OTGHSULPILPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGHSULPILPEN() && (--___t___ > 0)); }


#define WAIT_OTGHSULPILPEN_HIGH() \
    while (! READ_OTGHSULPILPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG HS clock enable during Sleep mode 
    // 
#define OTGHSLPEN_MASK 0x20000000U
#define OTGHSLPEN_OFFSET 29
#define OTGHSLPEN_START_BIT 29
#define OTGHSLPEN_WIDTH 1



typedef enum otghslpen {
    OTGHSLPEN_0,
    OTGHSLPEN_1
} OTGHSLPEN_T ;
#define WRITE_OTGHSLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ OTGHSLPEN_MASK) | ((val << OTGHSLPEN_START_BIT) & OTGHSLPEN_MASK )); \
   } 

#define ENABLE_OTGHSLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  OTGHSLPEN_MASK ); \
   }

#define DISABLE_OTGHSLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~OTGHSLPEN_MASK ); \
   } 

#define READ_OTGHSLPEN() \
   ((READ_REGISTER_ULONG(0x50) & OTGHSLPEN_MASK)  >> OTGHSLPEN_START_BIT)

#define WHEN_OTGHSLPEN_HIGH() \
     if ( READ_OTGHSLPEN() )


#define UNLESS_OTGHSLPEN_HIGH() \
     if (! READ_OTGHSLPEN() )


#define WAIT_OTGHSLPEN_LOW() \
    while ( READ_OTGHSLPEN() );


#define WAIT_OTGHSLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGHSLPEN() && (--___t___ > 0)); }


#define WAIT_OTGHSLPEN_HIGH() \
    while (! READ_OTGHSLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet PTP clock enable during Sleep mode 
    // 
#define ETHMACPTPLPEN_MASK 0x10000000U
#define ETHMACPTPLPEN_OFFSET 28
#define ETHMACPTPLPEN_START_BIT 28
#define ETHMACPTPLPEN_WIDTH 1



typedef enum ethmacptplpen {
    ETHMACPTPLPEN_0,
    ETHMACPTPLPEN_1
} ETHMACPTPLPEN_T ;
#define WRITE_ETHMACPTPLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ ETHMACPTPLPEN_MASK) | ((val << ETHMACPTPLPEN_START_BIT) & ETHMACPTPLPEN_MASK )); \
   } 

#define ENABLE_ETHMACPTPLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  ETHMACPTPLPEN_MASK ); \
   }

#define DISABLE_ETHMACPTPLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~ETHMACPTPLPEN_MASK ); \
   } 

#define READ_ETHMACPTPLPEN() \
   ((READ_REGISTER_ULONG(0x50) & ETHMACPTPLPEN_MASK)  >> ETHMACPTPLPEN_START_BIT)

#define WHEN_ETHMACPTPLPEN_HIGH() \
     if ( READ_ETHMACPTPLPEN() )


#define UNLESS_ETHMACPTPLPEN_HIGH() \
     if (! READ_ETHMACPTPLPEN() )


#define WAIT_ETHMACPTPLPEN_LOW() \
    while ( READ_ETHMACPTPLPEN() );


#define WAIT_ETHMACPTPLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACPTPLPEN() && (--___t___ > 0)); }


#define WAIT_ETHMACPTPLPEN_HIGH() \
    while (! READ_ETHMACPTPLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet reception clock enable during Sleep mode 
    // 
#define ETHMACRXLPEN_MASK 0x8000000U
#define ETHMACRXLPEN_OFFSET 27
#define ETHMACRXLPEN_START_BIT 27
#define ETHMACRXLPEN_WIDTH 1



typedef enum ethmacrxlpen {
    ETHMACRXLPEN_0,
    ETHMACRXLPEN_1
} ETHMACRXLPEN_T ;
#define WRITE_ETHMACRXLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ ETHMACRXLPEN_MASK) | ((val << ETHMACRXLPEN_START_BIT) & ETHMACRXLPEN_MASK )); \
   } 

#define ENABLE_ETHMACRXLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  ETHMACRXLPEN_MASK ); \
   }

#define DISABLE_ETHMACRXLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~ETHMACRXLPEN_MASK ); \
   } 

#define READ_ETHMACRXLPEN() \
   ((READ_REGISTER_ULONG(0x50) & ETHMACRXLPEN_MASK)  >> ETHMACRXLPEN_START_BIT)

#define WHEN_ETHMACRXLPEN_HIGH() \
     if ( READ_ETHMACRXLPEN() )


#define UNLESS_ETHMACRXLPEN_HIGH() \
     if (! READ_ETHMACRXLPEN() )


#define WAIT_ETHMACRXLPEN_LOW() \
    while ( READ_ETHMACRXLPEN() );


#define WAIT_ETHMACRXLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACRXLPEN() && (--___t___ > 0)); }


#define WAIT_ETHMACRXLPEN_HIGH() \
    while (! READ_ETHMACRXLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet transmission clock enable during Sleep mode 
    // 
#define ETHMACTXLPEN_MASK 0x4000000U
#define ETHMACTXLPEN_OFFSET 26
#define ETHMACTXLPEN_START_BIT 26
#define ETHMACTXLPEN_WIDTH 1



typedef enum ethmactxlpen {
    ETHMACTXLPEN_0,
    ETHMACTXLPEN_1
} ETHMACTXLPEN_T ;
#define WRITE_ETHMACTXLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ ETHMACTXLPEN_MASK) | ((val << ETHMACTXLPEN_START_BIT) & ETHMACTXLPEN_MASK )); \
   } 

#define ENABLE_ETHMACTXLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  ETHMACTXLPEN_MASK ); \
   }

#define DISABLE_ETHMACTXLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~ETHMACTXLPEN_MASK ); \
   } 

#define READ_ETHMACTXLPEN() \
   ((READ_REGISTER_ULONG(0x50) & ETHMACTXLPEN_MASK)  >> ETHMACTXLPEN_START_BIT)

#define WHEN_ETHMACTXLPEN_HIGH() \
     if ( READ_ETHMACTXLPEN() )


#define UNLESS_ETHMACTXLPEN_HIGH() \
     if (! READ_ETHMACTXLPEN() )


#define WAIT_ETHMACTXLPEN_LOW() \
    while ( READ_ETHMACTXLPEN() );


#define WAIT_ETHMACTXLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACTXLPEN() && (--___t___ > 0)); }


#define WAIT_ETHMACTXLPEN_HIGH() \
    while (! READ_ETHMACTXLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet MAC clock enable during Sleep mode 
    // 
#define ETHMACLPEN_MASK 0x2000000U
#define ETHMACLPEN_OFFSET 25
#define ETHMACLPEN_START_BIT 25
#define ETHMACLPEN_WIDTH 1



typedef enum ethmaclpen {
    ETHMACLPEN_0,
    ETHMACLPEN_1
} ETHMACLPEN_T ;
#define WRITE_ETHMACLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ ETHMACLPEN_MASK) | ((val << ETHMACLPEN_START_BIT) & ETHMACLPEN_MASK )); \
   } 

#define ENABLE_ETHMACLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  ETHMACLPEN_MASK ); \
   }

#define DISABLE_ETHMACLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~ETHMACLPEN_MASK ); \
   } 

#define READ_ETHMACLPEN() \
   ((READ_REGISTER_ULONG(0x50) & ETHMACLPEN_MASK)  >> ETHMACLPEN_START_BIT)

#define WHEN_ETHMACLPEN_HIGH() \
     if ( READ_ETHMACLPEN() )


#define UNLESS_ETHMACLPEN_HIGH() \
     if (! READ_ETHMACLPEN() )


#define WAIT_ETHMACLPEN_LOW() \
    while ( READ_ETHMACLPEN() );


#define WAIT_ETHMACLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETHMACLPEN() && (--___t___ > 0)); }


#define WAIT_ETHMACLPEN_HIGH() \
    while (! READ_ETHMACLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2D clock enable during Sleep mode 
    // 
#define DMA2DLPEN_MASK 0x800000U
#define DMA2DLPEN_OFFSET 23
#define DMA2DLPEN_START_BIT 23
#define DMA2DLPEN_WIDTH 1



typedef enum dma2dlpen {
    DMA_2DLPEN_0,
    DMA_2DLPEN_1
} DMA_2DLPEN_T ;
#define WRITE_DMA2DLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ DMA2DLPEN_MASK) | ((val << DMA2DLPEN_START_BIT) & DMA2DLPEN_MASK )); \
   } 

#define ENABLE_DMA2DLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  DMA2DLPEN_MASK ); \
   }

#define DISABLE_DMA2DLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~DMA2DLPEN_MASK ); \
   } 

#define READ_DMA2DLPEN() \
   ((READ_REGISTER_ULONG(0x50) & DMA2DLPEN_MASK)  >> DMA2DLPEN_START_BIT)

#define WHEN_DMA2DLPEN_HIGH() \
     if ( READ_DMA2DLPEN() )


#define UNLESS_DMA2DLPEN_HIGH() \
     if (! READ_DMA2DLPEN() )


#define WAIT_DMA2DLPEN_LOW() \
    while ( READ_DMA2DLPEN() );


#define WAIT_DMA2DLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA2DLPEN() && (--___t___ > 0)); }


#define WAIT_DMA2DLPEN_HIGH() \
    while (! READ_DMA2DLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA2 clock enable during Sleep mode 
    // 
#define DMA2LPEN_MASK 0x400000U
#define DMA2LPEN_OFFSET 22
#define DMA2LPEN_START_BIT 22
#define DMA2LPEN_WIDTH 1



typedef enum dma2lpen {
    DMA_2LPEN_0,
    DMA_2LPEN_1
} DMA_2LPEN_T ;
#define WRITE_DMA2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ DMA2LPEN_MASK) | ((val << DMA2LPEN_START_BIT) & DMA2LPEN_MASK )); \
   } 

#define ENABLE_DMA2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  DMA2LPEN_MASK ); \
   }

#define DISABLE_DMA2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~DMA2LPEN_MASK ); \
   } 

#define READ_DMA2LPEN() \
   ((READ_REGISTER_ULONG(0x50) & DMA2LPEN_MASK)  >> DMA2LPEN_START_BIT)

#define WHEN_DMA2LPEN_HIGH() \
     if ( READ_DMA2LPEN() )


#define UNLESS_DMA2LPEN_HIGH() \
     if (! READ_DMA2LPEN() )


#define WAIT_DMA2LPEN_LOW() \
    while ( READ_DMA2LPEN() );


#define WAIT_DMA2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA2LPEN() && (--___t___ > 0)); }


#define WAIT_DMA2LPEN_HIGH() \
    while (! READ_DMA2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA1 clock enable during Sleep mode 
    // 
#define DMA1LPEN_MASK 0x200000U
#define DMA1LPEN_OFFSET 21
#define DMA1LPEN_START_BIT 21
#define DMA1LPEN_WIDTH 1



typedef enum dma1lpen {
    DMA_1LPEN_0,
    DMA_1LPEN_1
} DMA_1LPEN_T ;
#define WRITE_DMA1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ DMA1LPEN_MASK) | ((val << DMA1LPEN_START_BIT) & DMA1LPEN_MASK )); \
   } 

#define ENABLE_DMA1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  DMA1LPEN_MASK ); \
   }

#define DISABLE_DMA1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~DMA1LPEN_MASK ); \
   } 

#define READ_DMA1LPEN() \
   ((READ_REGISTER_ULONG(0x50) & DMA1LPEN_MASK)  >> DMA1LPEN_START_BIT)

#define WHEN_DMA1LPEN_HIGH() \
     if ( READ_DMA1LPEN() )


#define UNLESS_DMA1LPEN_HIGH() \
     if (! READ_DMA1LPEN() )


#define WAIT_DMA1LPEN_LOW() \
    while ( READ_DMA1LPEN() );


#define WAIT_DMA1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMA1LPEN() && (--___t___ > 0)); }


#define WAIT_DMA1LPEN_HIGH() \
    while (! READ_DMA1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SRAM 3 interface clock enable during Sleep mode 
    // 
#define SRAM3LPEN_MASK 0x80000U
#define SRAM3LPEN_OFFSET 19
#define SRAM3LPEN_START_BIT 19
#define SRAM3LPEN_WIDTH 1



typedef enum sram3lpen {
    SRAM_3LPEN_0,
    SRAM_3LPEN_1
} SRAM_3LPEN_T ;
#define WRITE_SRAM3LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ SRAM3LPEN_MASK) | ((val << SRAM3LPEN_START_BIT) & SRAM3LPEN_MASK )); \
   } 

#define ENABLE_SRAM3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  SRAM3LPEN_MASK ); \
   }

#define DISABLE_SRAM3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~SRAM3LPEN_MASK ); \
   } 

#define READ_SRAM3LPEN() \
   ((READ_REGISTER_ULONG(0x50) & SRAM3LPEN_MASK)  >> SRAM3LPEN_START_BIT)

#define WHEN_SRAM3LPEN_HIGH() \
     if ( READ_SRAM3LPEN() )


#define UNLESS_SRAM3LPEN_HIGH() \
     if (! READ_SRAM3LPEN() )


#define WAIT_SRAM3LPEN_LOW() \
    while ( READ_SRAM3LPEN() );


#define WAIT_SRAM3LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRAM3LPEN() && (--___t___ > 0)); }


#define WAIT_SRAM3LPEN_HIGH() \
    while (! READ_SRAM3LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Backup SRAM interface clock enable during Sleep mode 
    // 
#define BKPSRAMLPEN_MASK 0x40000U
#define BKPSRAMLPEN_OFFSET 18
#define BKPSRAMLPEN_START_BIT 18
#define BKPSRAMLPEN_WIDTH 1



typedef enum bkpsramlpen {
    BKPSRAMLPEN_0,
    BKPSRAMLPEN_1
} BKPSRAMLPEN_T ;
#define WRITE_BKPSRAMLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ BKPSRAMLPEN_MASK) | ((val << BKPSRAMLPEN_START_BIT) & BKPSRAMLPEN_MASK )); \
   } 

#define ENABLE_BKPSRAMLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  BKPSRAMLPEN_MASK ); \
   }

#define DISABLE_BKPSRAMLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~BKPSRAMLPEN_MASK ); \
   } 

#define READ_BKPSRAMLPEN() \
   ((READ_REGISTER_ULONG(0x50) & BKPSRAMLPEN_MASK)  >> BKPSRAMLPEN_START_BIT)

#define WHEN_BKPSRAMLPEN_HIGH() \
     if ( READ_BKPSRAMLPEN() )


#define UNLESS_BKPSRAMLPEN_HIGH() \
     if (! READ_BKPSRAMLPEN() )


#define WAIT_BKPSRAMLPEN_LOW() \
    while ( READ_BKPSRAMLPEN() );


#define WAIT_BKPSRAMLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BKPSRAMLPEN() && (--___t___ > 0)); }


#define WAIT_BKPSRAMLPEN_HIGH() \
    while (! READ_BKPSRAMLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SRAM 2 interface clock enable during Sleep mode 
    // 
#define SRAM2LPEN_MASK 0x20000U
#define SRAM2LPEN_OFFSET 17
#define SRAM2LPEN_START_BIT 17
#define SRAM2LPEN_WIDTH 1



typedef enum sram2lpen {
    SRAM_2LPEN_0,
    SRAM_2LPEN_1
} SRAM_2LPEN_T ;
#define WRITE_SRAM2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ SRAM2LPEN_MASK) | ((val << SRAM2LPEN_START_BIT) & SRAM2LPEN_MASK )); \
   } 

#define ENABLE_SRAM2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  SRAM2LPEN_MASK ); \
   }

#define DISABLE_SRAM2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~SRAM2LPEN_MASK ); \
   } 

#define READ_SRAM2LPEN() \
   ((READ_REGISTER_ULONG(0x50) & SRAM2LPEN_MASK)  >> SRAM2LPEN_START_BIT)

#define WHEN_SRAM2LPEN_HIGH() \
     if ( READ_SRAM2LPEN() )


#define UNLESS_SRAM2LPEN_HIGH() \
     if (! READ_SRAM2LPEN() )


#define WAIT_SRAM2LPEN_LOW() \
    while ( READ_SRAM2LPEN() );


#define WAIT_SRAM2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRAM2LPEN() && (--___t___ > 0)); }


#define WAIT_SRAM2LPEN_HIGH() \
    while (! READ_SRAM2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SRAM 1interface clock enable during Sleep mode 
    // 
#define SRAM1LPEN_MASK 0x10000U
#define SRAM1LPEN_OFFSET 16
#define SRAM1LPEN_START_BIT 16
#define SRAM1LPEN_WIDTH 1



typedef enum sram1lpen {
    SRAM_1LPEN_0,
    SRAM_1LPEN_1
} SRAM_1LPEN_T ;
#define WRITE_SRAM1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ SRAM1LPEN_MASK) | ((val << SRAM1LPEN_START_BIT) & SRAM1LPEN_MASK )); \
   } 

#define ENABLE_SRAM1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  SRAM1LPEN_MASK ); \
   }

#define DISABLE_SRAM1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~SRAM1LPEN_MASK ); \
   } 

#define READ_SRAM1LPEN() \
   ((READ_REGISTER_ULONG(0x50) & SRAM1LPEN_MASK)  >> SRAM1LPEN_START_BIT)

#define WHEN_SRAM1LPEN_HIGH() \
     if ( READ_SRAM1LPEN() )


#define UNLESS_SRAM1LPEN_HIGH() \
     if (! READ_SRAM1LPEN() )


#define WAIT_SRAM1LPEN_LOW() \
    while ( READ_SRAM1LPEN() );


#define WAIT_SRAM1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRAM1LPEN() && (--___t___ > 0)); }


#define WAIT_SRAM1LPEN_HIGH() \
    while (! READ_SRAM1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Flash interface clock enable during Sleep mode 
    // 
#define FLITFLPEN_MASK 0x8000U
#define FLITFLPEN_OFFSET 15
#define FLITFLPEN_START_BIT 15
#define FLITFLPEN_WIDTH 1



typedef enum flitflpen {
    FLITFLPEN_0,
    FLITFLPEN_1
} FLITFLPEN_T ;
#define WRITE_FLITFLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ FLITFLPEN_MASK) | ((val << FLITFLPEN_START_BIT) & FLITFLPEN_MASK )); \
   } 

#define ENABLE_FLITFLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  FLITFLPEN_MASK ); \
   }

#define DISABLE_FLITFLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~FLITFLPEN_MASK ); \
   } 

#define READ_FLITFLPEN() \
   ((READ_REGISTER_ULONG(0x50) & FLITFLPEN_MASK)  >> FLITFLPEN_START_BIT)

#define WHEN_FLITFLPEN_HIGH() \
     if ( READ_FLITFLPEN() )


#define UNLESS_FLITFLPEN_HIGH() \
     if (! READ_FLITFLPEN() )


#define WAIT_FLITFLPEN_LOW() \
    while ( READ_FLITFLPEN() );


#define WAIT_FLITFLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FLITFLPEN() && (--___t___ > 0)); }


#define WAIT_FLITFLPEN_HIGH() \
    while (! READ_FLITFLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CRC clock enable during Sleep mode 
    // 
#define CRCLPEN_MASK 0x1000U
#define CRCLPEN_OFFSET 12
#define CRCLPEN_START_BIT 12
#define CRCLPEN_WIDTH 1



typedef enum crclpen {
    CRCLPEN_0,
    CRCLPEN_1
} CRCLPEN_T ;
#define WRITE_CRCLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ CRCLPEN_MASK) | ((val << CRCLPEN_START_BIT) & CRCLPEN_MASK )); \
   } 

#define ENABLE_CRCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  CRCLPEN_MASK ); \
   }

#define DISABLE_CRCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~CRCLPEN_MASK ); \
   } 

#define READ_CRCLPEN() \
   ((READ_REGISTER_ULONG(0x50) & CRCLPEN_MASK)  >> CRCLPEN_START_BIT)

#define WHEN_CRCLPEN_HIGH() \
     if ( READ_CRCLPEN() )


#define UNLESS_CRCLPEN_HIGH() \
     if (! READ_CRCLPEN() )


#define WAIT_CRCLPEN_LOW() \
    while ( READ_CRCLPEN() );


#define WAIT_CRCLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRCLPEN() && (--___t___ > 0)); }


#define WAIT_CRCLPEN_HIGH() \
    while (! READ_CRCLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port K clock enable during Sleep mode 
    // 
#define GPIOKLPEN_MASK 0x400U
#define GPIOKLPEN_OFFSET 10
#define GPIOKLPEN_START_BIT 10
#define GPIOKLPEN_WIDTH 1



typedef enum gpioklpen {
    GPIOKLPEN_0,
    GPIOKLPEN_1
} GPIOKLPEN_T ;
#define WRITE_GPIOKLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOKLPEN_MASK) | ((val << GPIOKLPEN_START_BIT) & GPIOKLPEN_MASK )); \
   } 

#define ENABLE_GPIOKLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOKLPEN_MASK ); \
   }

#define DISABLE_GPIOKLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOKLPEN_MASK ); \
   } 

#define READ_GPIOKLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOKLPEN_MASK)  >> GPIOKLPEN_START_BIT)

#define WHEN_GPIOKLPEN_HIGH() \
     if ( READ_GPIOKLPEN() )


#define UNLESS_GPIOKLPEN_HIGH() \
     if (! READ_GPIOKLPEN() )


#define WAIT_GPIOKLPEN_LOW() \
    while ( READ_GPIOKLPEN() );


#define WAIT_GPIOKLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOKLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOKLPEN_HIGH() \
    while (! READ_GPIOKLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port J clock enable during Sleep mode 
    // 
#define GPIOJLPEN_MASK 0x200U
#define GPIOJLPEN_OFFSET 9
#define GPIOJLPEN_START_BIT 9
#define GPIOJLPEN_WIDTH 1



typedef enum gpiojlpen {
    GPIOJLPEN_0,
    GPIOJLPEN_1
} GPIOJLPEN_T ;
#define WRITE_GPIOJLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOJLPEN_MASK) | ((val << GPIOJLPEN_START_BIT) & GPIOJLPEN_MASK )); \
   } 

#define ENABLE_GPIOJLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOJLPEN_MASK ); \
   }

#define DISABLE_GPIOJLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOJLPEN_MASK ); \
   } 

#define READ_GPIOJLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOJLPEN_MASK)  >> GPIOJLPEN_START_BIT)

#define WHEN_GPIOJLPEN_HIGH() \
     if ( READ_GPIOJLPEN() )


#define UNLESS_GPIOJLPEN_HIGH() \
     if (! READ_GPIOJLPEN() )


#define WAIT_GPIOJLPEN_LOW() \
    while ( READ_GPIOJLPEN() );


#define WAIT_GPIOJLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOJLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOJLPEN_HIGH() \
    while (! READ_GPIOJLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port I clock enable during Sleep mode 
    // 
#define GPIOILPEN_MASK 0x100U
#define GPIOILPEN_OFFSET 8
#define GPIOILPEN_START_BIT 8
#define GPIOILPEN_WIDTH 1



typedef enum gpioilpen {
    GPIOILPEN_0,
    GPIOILPEN_1
} GPIOILPEN_T ;
#define WRITE_GPIOILPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOILPEN_MASK) | ((val << GPIOILPEN_START_BIT) & GPIOILPEN_MASK )); \
   } 

#define ENABLE_GPIOILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOILPEN_MASK ); \
   }

#define DISABLE_GPIOILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOILPEN_MASK ); \
   } 

#define READ_GPIOILPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOILPEN_MASK)  >> GPIOILPEN_START_BIT)

#define WHEN_GPIOILPEN_HIGH() \
     if ( READ_GPIOILPEN() )


#define UNLESS_GPIOILPEN_HIGH() \
     if (! READ_GPIOILPEN() )


#define WAIT_GPIOILPEN_LOW() \
    while ( READ_GPIOILPEN() );


#define WAIT_GPIOILPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOILPEN() && (--___t___ > 0)); }


#define WAIT_GPIOILPEN_HIGH() \
    while (! READ_GPIOILPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port H clock enable during Sleep mode 
    // 
#define GPIOHLPEN_MASK 0x80U
#define GPIOHLPEN_OFFSET 7
#define GPIOHLPEN_START_BIT 7
#define GPIOHLPEN_WIDTH 1



typedef enum gpiohlpen {
    GPIOHLPEN_0,
    GPIOHLPEN_1
} GPIOHLPEN_T ;
#define WRITE_GPIOHLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOHLPEN_MASK) | ((val << GPIOHLPEN_START_BIT) & GPIOHLPEN_MASK )); \
   } 

#define ENABLE_GPIOHLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOHLPEN_MASK ); \
   }

#define DISABLE_GPIOHLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOHLPEN_MASK ); \
   } 

#define READ_GPIOHLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOHLPEN_MASK)  >> GPIOHLPEN_START_BIT)

#define WHEN_GPIOHLPEN_HIGH() \
     if ( READ_GPIOHLPEN() )


#define UNLESS_GPIOHLPEN_HIGH() \
     if (! READ_GPIOHLPEN() )


#define WAIT_GPIOHLPEN_LOW() \
    while ( READ_GPIOHLPEN() );


#define WAIT_GPIOHLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOHLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOHLPEN_HIGH() \
    while (! READ_GPIOHLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port G clock enable during Sleep mode 
    // 
#define GPIOGLPEN_MASK 0x40U
#define GPIOGLPEN_OFFSET 6
#define GPIOGLPEN_START_BIT 6
#define GPIOGLPEN_WIDTH 1



typedef enum gpioglpen {
    GPIOGLPEN_0,
    GPIOGLPEN_1
} GPIOGLPEN_T ;
#define WRITE_GPIOGLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOGLPEN_MASK) | ((val << GPIOGLPEN_START_BIT) & GPIOGLPEN_MASK )); \
   } 

#define ENABLE_GPIOGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOGLPEN_MASK ); \
   }

#define DISABLE_GPIOGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOGLPEN_MASK ); \
   } 

#define READ_GPIOGLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOGLPEN_MASK)  >> GPIOGLPEN_START_BIT)

#define WHEN_GPIOGLPEN_HIGH() \
     if ( READ_GPIOGLPEN() )


#define UNLESS_GPIOGLPEN_HIGH() \
     if (! READ_GPIOGLPEN() )


#define WAIT_GPIOGLPEN_LOW() \
    while ( READ_GPIOGLPEN() );


#define WAIT_GPIOGLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOGLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOGLPEN_HIGH() \
    while (! READ_GPIOGLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port F clock enable during Sleep mode 
    // 
#define GPIOFLPEN_MASK 0x20U
#define GPIOFLPEN_OFFSET 5
#define GPIOFLPEN_START_BIT 5
#define GPIOFLPEN_WIDTH 1



typedef enum gpioflpen {
    GPIOFLPEN_0,
    GPIOFLPEN_1
} GPIOFLPEN_T ;
#define WRITE_GPIOFLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOFLPEN_MASK) | ((val << GPIOFLPEN_START_BIT) & GPIOFLPEN_MASK )); \
   } 

#define ENABLE_GPIOFLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOFLPEN_MASK ); \
   }

#define DISABLE_GPIOFLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOFLPEN_MASK ); \
   } 

#define READ_GPIOFLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOFLPEN_MASK)  >> GPIOFLPEN_START_BIT)

#define WHEN_GPIOFLPEN_HIGH() \
     if ( READ_GPIOFLPEN() )


#define UNLESS_GPIOFLPEN_HIGH() \
     if (! READ_GPIOFLPEN() )


#define WAIT_GPIOFLPEN_LOW() \
    while ( READ_GPIOFLPEN() );


#define WAIT_GPIOFLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOFLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOFLPEN_HIGH() \
    while (! READ_GPIOFLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port E clock enable during Sleep mode 
    // 
#define GPIOELPEN_MASK 0x10U
#define GPIOELPEN_OFFSET 4
#define GPIOELPEN_START_BIT 4
#define GPIOELPEN_WIDTH 1



typedef enum gpioelpen {
    GPIOELPEN_0,
    GPIOELPEN_1
} GPIOELPEN_T ;
#define WRITE_GPIOELPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOELPEN_MASK) | ((val << GPIOELPEN_START_BIT) & GPIOELPEN_MASK )); \
   } 

#define ENABLE_GPIOELPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOELPEN_MASK ); \
   }

#define DISABLE_GPIOELPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOELPEN_MASK ); \
   } 

#define READ_GPIOELPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOELPEN_MASK)  >> GPIOELPEN_START_BIT)

#define WHEN_GPIOELPEN_HIGH() \
     if ( READ_GPIOELPEN() )


#define UNLESS_GPIOELPEN_HIGH() \
     if (! READ_GPIOELPEN() )


#define WAIT_GPIOELPEN_LOW() \
    while ( READ_GPIOELPEN() );


#define WAIT_GPIOELPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOELPEN() && (--___t___ > 0)); }


#define WAIT_GPIOELPEN_HIGH() \
    while (! READ_GPIOELPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port D clock enable during Sleep mode 
    // 
#define GPIODLPEN_MASK 0x8U
#define GPIODLPEN_OFFSET 3
#define GPIODLPEN_START_BIT 3
#define GPIODLPEN_WIDTH 1



typedef enum gpiodlpen {
    GPIODLPEN_0,
    GPIODLPEN_1
} GPIODLPEN_T ;
#define WRITE_GPIODLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIODLPEN_MASK) | ((val << GPIODLPEN_START_BIT) & GPIODLPEN_MASK )); \
   } 

#define ENABLE_GPIODLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIODLPEN_MASK ); \
   }

#define DISABLE_GPIODLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIODLPEN_MASK ); \
   } 

#define READ_GPIODLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIODLPEN_MASK)  >> GPIODLPEN_START_BIT)

#define WHEN_GPIODLPEN_HIGH() \
     if ( READ_GPIODLPEN() )


#define UNLESS_GPIODLPEN_HIGH() \
     if (! READ_GPIODLPEN() )


#define WAIT_GPIODLPEN_LOW() \
    while ( READ_GPIODLPEN() );


#define WAIT_GPIODLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIODLPEN() && (--___t___ > 0)); }


#define WAIT_GPIODLPEN_HIGH() \
    while (! READ_GPIODLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port C clock enable during Sleep mode 
    // 
#define GPIOCLPEN_MASK 0x4U
#define GPIOCLPEN_OFFSET 2
#define GPIOCLPEN_START_BIT 2
#define GPIOCLPEN_WIDTH 1



typedef enum gpioclpen {
    GPIOCLPEN_0,
    GPIOCLPEN_1
} GPIOCLPEN_T ;
#define WRITE_GPIOCLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOCLPEN_MASK) | ((val << GPIOCLPEN_START_BIT) & GPIOCLPEN_MASK )); \
   } 

#define ENABLE_GPIOCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOCLPEN_MASK ); \
   }

#define DISABLE_GPIOCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOCLPEN_MASK ); \
   } 

#define READ_GPIOCLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOCLPEN_MASK)  >> GPIOCLPEN_START_BIT)

#define WHEN_GPIOCLPEN_HIGH() \
     if ( READ_GPIOCLPEN() )


#define UNLESS_GPIOCLPEN_HIGH() \
     if (! READ_GPIOCLPEN() )


#define WAIT_GPIOCLPEN_LOW() \
    while ( READ_GPIOCLPEN() );


#define WAIT_GPIOCLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOCLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOCLPEN_HIGH() \
    while (! READ_GPIOCLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port B clock enable during Sleep mode 
    // 
#define GPIOBLPEN_MASK 0x2U
#define GPIOBLPEN_OFFSET 1
#define GPIOBLPEN_START_BIT 1
#define GPIOBLPEN_WIDTH 1



typedef enum gpioblpen {
    GPIOBLPEN_0,
    GPIOBLPEN_1
} GPIOBLPEN_T ;
#define WRITE_GPIOBLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOBLPEN_MASK) | ((val << GPIOBLPEN_START_BIT) & GPIOBLPEN_MASK )); \
   } 

#define ENABLE_GPIOBLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOBLPEN_MASK ); \
   }

#define DISABLE_GPIOBLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOBLPEN_MASK ); \
   } 

#define READ_GPIOBLPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOBLPEN_MASK)  >> GPIOBLPEN_START_BIT)

#define WHEN_GPIOBLPEN_HIGH() \
     if ( READ_GPIOBLPEN() )


#define UNLESS_GPIOBLPEN_HIGH() \
     if (! READ_GPIOBLPEN() )


#define WAIT_GPIOBLPEN_LOW() \
    while ( READ_GPIOBLPEN() );


#define WAIT_GPIOBLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOBLPEN() && (--___t___ > 0)); }


#define WAIT_GPIOBLPEN_HIGH() \
    while (! READ_GPIOBLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb1lpenr
//
// Return the value of register AHB_1LPENR
//
// Notes : Register AHB1 peripheral clock enable in low power mode register (AHB1LPENR) at the offset 0x50, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IO port A clock enable during sleep mode 
    // 
#define GPIOALPEN_MASK 0x1U
#define GPIOALPEN_OFFSET 0
#define GPIOALPEN_START_BIT 0
#define GPIOALPEN_WIDTH 1



typedef enum gpioalpen {
    GPIOALPEN_0,
    GPIOALPEN_1
} GPIOALPEN_T ;
#define WRITE_GPIOALPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ GPIOALPEN_MASK) | ((val << GPIOALPEN_START_BIT) & GPIOALPEN_MASK )); \
   } 

#define ENABLE_GPIOALPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  GPIOALPEN_MASK ); \
   }

#define DISABLE_GPIOALPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG(0x50, val & ~GPIOALPEN_MASK ); \
   } 

#define READ_GPIOALPEN() \
   ((READ_REGISTER_ULONG(0x50) & GPIOALPEN_MASK)  >> GPIOALPEN_START_BIT)

#define WHEN_GPIOALPEN_HIGH() \
     if ( READ_GPIOALPEN() )


#define UNLESS_GPIOALPEN_HIGH() \
     if (! READ_GPIOALPEN() )


#define WAIT_GPIOALPEN_LOW() \
    while ( READ_GPIOALPEN() );


#define WAIT_GPIOALPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GPIOALPEN() && (--___t___ > 0)); }


#define WAIT_GPIOALPEN_HIGH() \
    while (! READ_GPIOALPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2lpenr
//
// Return the value of register AHB2LPENR
//
// Notes : Register Ahb2lpenr at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_2LPENR( y) \
     WRITE_REGISTER_ULONG( 0x54 , y)

#define SET_BITS_AHB_2LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_2LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_2LPENR() \
     READ_REGISTER_ULONG(0x54)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2lpenr
//
// Return the value of register AHB_2LPENR
//
// Notes : Register AHB2 peripheral clock enable in low power mode register (AHB2LPENR) at the offset 0x54, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Camera interface enable during Sleep mode 
    // 
#define DCMILPEN_MASK 0x1U
#define DCMILPEN_OFFSET 0
#define DCMILPEN_START_BIT 0
#define DCMILPEN_WIDTH 1


#define AHB_2LPENR_REG 0x54

typedef enum dcmilpen {
    DCMILPEN_0,
    DCMILPEN_1
} DCMILPEN_T ;
#define WRITE_DCMILPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ DCMILPEN_MASK) | ((val << DCMILPEN_START_BIT) & DCMILPEN_MASK )); \
   } 

#define ENABLE_DCMILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  DCMILPEN_MASK ); \
   }

#define DISABLE_DCMILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~DCMILPEN_MASK ); \
   } 

#define READ_DCMILPEN() \
   ((READ_REGISTER_ULONG(0x54) & DCMILPEN_MASK)  >> DCMILPEN_START_BIT)

#define WHEN_DCMILPEN_HIGH() \
     if ( READ_DCMILPEN() )


#define UNLESS_DCMILPEN_HIGH() \
     if (! READ_DCMILPEN() )


#define WAIT_DCMILPEN_LOW() \
    while ( READ_DCMILPEN() );


#define WAIT_DCMILPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCMILPEN() && (--___t___ > 0)); }


#define WAIT_DCMILPEN_HIGH() \
    while (! READ_DCMILPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2lpenr
//
// Return the value of register AHB_2LPENR
//
// Notes : Register AHB2 peripheral clock enable in low power mode register (AHB2LPENR) at the offset 0x54, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Cryptography modules clock enable during Sleep mode 
    // 
#define CRYPLPEN_MASK 0x10U
#define CRYPLPEN_OFFSET 4
#define CRYPLPEN_START_BIT 4
#define CRYPLPEN_WIDTH 1



typedef enum cryplpen {
    CRYPLPEN_0,
    CRYPLPEN_1
} CRYPLPEN_T ;
#define WRITE_CRYPLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ CRYPLPEN_MASK) | ((val << CRYPLPEN_START_BIT) & CRYPLPEN_MASK )); \
   } 

#define ENABLE_CRYPLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  CRYPLPEN_MASK ); \
   }

#define DISABLE_CRYPLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~CRYPLPEN_MASK ); \
   } 

#define READ_CRYPLPEN() \
   ((READ_REGISTER_ULONG(0x54) & CRYPLPEN_MASK)  >> CRYPLPEN_START_BIT)

#define WHEN_CRYPLPEN_HIGH() \
     if ( READ_CRYPLPEN() )


#define UNLESS_CRYPLPEN_HIGH() \
     if (! READ_CRYPLPEN() )


#define WAIT_CRYPLPEN_LOW() \
    while ( READ_CRYPLPEN() );


#define WAIT_CRYPLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRYPLPEN() && (--___t___ > 0)); }


#define WAIT_CRYPLPEN_HIGH() \
    while (! READ_CRYPLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2lpenr
//
// Return the value of register AHB_2LPENR
//
// Notes : Register AHB2 peripheral clock enable in low power mode register (AHB2LPENR) at the offset 0x54, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hash modules clock enable during Sleep mode 
    // 
#define HASHLPEN_MASK 0x20U
#define HASHLPEN_OFFSET 5
#define HASHLPEN_START_BIT 5
#define HASHLPEN_WIDTH 1



typedef enum hashlpen {
    HASHLPEN_0,
    HASHLPEN_1
} HASHLPEN_T ;
#define WRITE_HASHLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ HASHLPEN_MASK) | ((val << HASHLPEN_START_BIT) & HASHLPEN_MASK )); \
   } 

#define ENABLE_HASHLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  HASHLPEN_MASK ); \
   }

#define DISABLE_HASHLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~HASHLPEN_MASK ); \
   } 

#define READ_HASHLPEN() \
   ((READ_REGISTER_ULONG(0x54) & HASHLPEN_MASK)  >> HASHLPEN_START_BIT)

#define WHEN_HASHLPEN_HIGH() \
     if ( READ_HASHLPEN() )


#define UNLESS_HASHLPEN_HIGH() \
     if (! READ_HASHLPEN() )


#define WAIT_HASHLPEN_LOW() \
    while ( READ_HASHLPEN() );


#define WAIT_HASHLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HASHLPEN() && (--___t___ > 0)); }


#define WAIT_HASHLPEN_HIGH() \
    while (! READ_HASHLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2lpenr
//
// Return the value of register AHB_2LPENR
//
// Notes : Register AHB2 peripheral clock enable in low power mode register (AHB2LPENR) at the offset 0x54, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Random number generator clock enable during Sleep mode 
    // 
#define RNGLPEN_MASK 0x40U
#define RNGLPEN_OFFSET 6
#define RNGLPEN_START_BIT 6
#define RNGLPEN_WIDTH 1



typedef enum rnglpen {
    RNGLPEN_0,
    RNGLPEN_1
} RNGLPEN_T ;
#define WRITE_RNGLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ RNGLPEN_MASK) | ((val << RNGLPEN_START_BIT) & RNGLPEN_MASK )); \
   } 

#define ENABLE_RNGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  RNGLPEN_MASK ); \
   }

#define DISABLE_RNGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~RNGLPEN_MASK ); \
   } 

#define READ_RNGLPEN() \
   ((READ_REGISTER_ULONG(0x54) & RNGLPEN_MASK)  >> RNGLPEN_START_BIT)

#define WHEN_RNGLPEN_HIGH() \
     if ( READ_RNGLPEN() )


#define UNLESS_RNGLPEN_HIGH() \
     if (! READ_RNGLPEN() )


#define WAIT_RNGLPEN_LOW() \
    while ( READ_RNGLPEN() );


#define WAIT_RNGLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RNGLPEN() && (--___t___ > 0)); }


#define WAIT_RNGLPEN_HIGH() \
    while (! READ_RNGLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb2lpenr
//
// Return the value of register AHB_2LPENR
//
// Notes : Register AHB2 peripheral clock enable in low power mode register (AHB2LPENR) at the offset 0x54, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB OTG FS clock enable during Sleep mode 
    // 
#define OTGFSLPEN_MASK 0x80U
#define OTGFSLPEN_OFFSET 7
#define OTGFSLPEN_START_BIT 7
#define OTGFSLPEN_WIDTH 1



typedef enum otgfslpen {
    OTGFSLPEN_0,
    OTGFSLPEN_1
} OTGFSLPEN_T ;
#define WRITE_OTGFSLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ OTGFSLPEN_MASK) | ((val << OTGFSLPEN_START_BIT) & OTGFSLPEN_MASK )); \
   } 

#define ENABLE_OTGFSLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  OTGFSLPEN_MASK ); \
   }

#define DISABLE_OTGFSLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~OTGFSLPEN_MASK ); \
   } 

#define READ_OTGFSLPEN() \
   ((READ_REGISTER_ULONG(0x54) & OTGFSLPEN_MASK)  >> OTGFSLPEN_START_BIT)

#define WHEN_OTGFSLPEN_HIGH() \
     if ( READ_OTGFSLPEN() )


#define UNLESS_OTGFSLPEN_HIGH() \
     if (! READ_OTGFSLPEN() )


#define WAIT_OTGFSLPEN_LOW() \
    while ( READ_OTGFSLPEN() );


#define WAIT_OTGFSLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGFSLPEN() && (--___t___ > 0)); }


#define WAIT_OTGFSLPEN_HIGH() \
    while (! READ_OTGFSLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3lpenr
//
// Return the value of register AHB3LPENR
//
// Notes : Register Ahb3lpenr at offset 0x58
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AHB_3LPENR( y) \
     WRITE_REGISTER_ULONG( 0x58 , y)

#define SET_BITS_AHB_3LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  mask ); \
   }

#define CLEAR_BITS_AHB_3LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val & ~mask ); \
   }

#define READ_REGISTER_AHB_3LPENR() \
     READ_REGISTER_ULONG(0x58)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3lpenr
//
// Return the value of register AHB_3LPENR
//
// Notes : Register AHB3 peripheral clock enable in low power mode register (AHB3LPENR) at the offset 0x58, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Quand SPI memory controller clock enable during Sleep 
    // mode 
    // 
#define QSPILPEN_MASK 0x2U
#define QSPILPEN_OFFSET 1
#define QSPILPEN_START_BIT 1
#define QSPILPEN_WIDTH 1


#define AHB_3LPENR_REG 0x58

typedef enum qspilpen {
    QSPILPEN_0,
    QSPILPEN_1
} QSPILPEN_T ;
#define WRITE_QSPILPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ QSPILPEN_MASK) | ((val << QSPILPEN_START_BIT) & QSPILPEN_MASK )); \
   } 

#define ENABLE_QSPILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  QSPILPEN_MASK ); \
   }

#define DISABLE_QSPILPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG(0x58, val & ~QSPILPEN_MASK ); \
   } 

#define READ_QSPILPEN() \
   ((READ_REGISTER_ULONG(0x58) & QSPILPEN_MASK)  >> QSPILPEN_START_BIT)

#define WHEN_QSPILPEN_HIGH() \
     if ( READ_QSPILPEN() )


#define UNLESS_QSPILPEN_HIGH() \
     if (! READ_QSPILPEN() )


#define WAIT_QSPILPEN_LOW() \
    while ( READ_QSPILPEN() );


#define WAIT_QSPILPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_QSPILPEN() && (--___t___ > 0)); }


#define WAIT_QSPILPEN_HIGH() \
    while (! READ_QSPILPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ahb3lpenr
//
// Return the value of register AHB_3LPENR
//
// Notes : Register AHB3 peripheral clock enable in low power mode register (AHB3LPENR) at the offset 0x58, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Flexible memory controller module clock enable during 
    // Sleep mode 
    // 
#define FMCLPEN_MASK 0x1U
#define FMCLPEN_OFFSET 0
#define FMCLPEN_START_BIT 0
#define FMCLPEN_WIDTH 1



typedef enum fmclpen {
    FMCLPEN_0,
    FMCLPEN_1
} FMCLPEN_T ;
#define WRITE_FMCLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ FMCLPEN_MASK) | ((val << FMCLPEN_START_BIT) & FMCLPEN_MASK )); \
   } 

#define ENABLE_FMCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  FMCLPEN_MASK ); \
   }

#define DISABLE_FMCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG(0x58, val & ~FMCLPEN_MASK ); \
   } 

#define READ_FMCLPEN() \
   ((READ_REGISTER_ULONG(0x58) & FMCLPEN_MASK)  >> FMCLPEN_START_BIT)

#define WHEN_FMCLPEN_HIGH() \
     if ( READ_FMCLPEN() )


#define UNLESS_FMCLPEN_HIGH() \
     if (! READ_FMCLPEN() )


#define WAIT_FMCLPEN_LOW() \
    while ( READ_FMCLPEN() );


#define WAIT_FMCLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FMCLPEN() && (--___t___ > 0)); }


#define WAIT_FMCLPEN_HIGH() \
    while (! READ_FMCLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB1LPENR
//
// Notes : Register Apb1lpenr at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_APB_1LPENR( y) \
     WRITE_REGISTER_ULONG( 0x60 , y)

#define SET_BITS_APB_1LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  mask ); \
   }

#define CLEAR_BITS_APB_1LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val & ~mask ); \
   }

#define READ_REGISTER_APB_1LPENR() \
     READ_REGISTER_ULONG(0x60)

/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C4 clock enable during Sleep mode 
    // 
#define I2C4LPEN_MASK 0x1000000U
#define I2C4LPEN_OFFSET 24
#define I2C4LPEN_START_BIT 24
#define I2C4LPEN_WIDTH 1


#define APB_1LPENR_REG 0x60

typedef enum i2c4lpen {
    I_2C_4LPEN_0,
    I_2C_4LPEN_1
} I_2C_4LPEN_T ;
#define WRITE_I2C4LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ I2C4LPEN_MASK) | ((val << I2C4LPEN_START_BIT) & I2C4LPEN_MASK )); \
   } 

#define ENABLE_I2C4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  I2C4LPEN_MASK ); \
   }

#define DISABLE_I2C4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~I2C4LPEN_MASK ); \
   } 

#define READ_I2C4LPEN() \
   ((READ_REGISTER_ULONG(0x60) & I2C4LPEN_MASK)  >> I2C4LPEN_START_BIT)

#define WHEN_I2C4LPEN_HIGH() \
     if ( READ_I2C4LPEN() )


#define UNLESS_I2C4LPEN_HIGH() \
     if (! READ_I2C4LPEN() )


#define WAIT_I2C4LPEN_LOW() \
    while ( READ_I2C4LPEN() );


#define WAIT_I2C4LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C4LPEN() && (--___t___ > 0)); }


#define WAIT_I2C4LPEN_HIGH() \
    while (! READ_I2C4LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // low power timer 1 clock enable during Sleep mode 
    // 
#define LPTIM1LPEN_MASK 0x200U
#define LPTIM1LPEN_OFFSET 9
#define LPTIM1LPEN_START_BIT 9
#define LPTIM1LPEN_WIDTH 1



typedef enum lptim1lpen {
    LPTIM_1LPEN_0,
    LPTIM_1LPEN_1
} LPTIM_1LPEN_T ;
#define WRITE_LPTIM1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ LPTIM1LPEN_MASK) | ((val << LPTIM1LPEN_START_BIT) & LPTIM1LPEN_MASK )); \
   } 

#define ENABLE_LPTIM1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  LPTIM1LPEN_MASK ); \
   }

#define DISABLE_LPTIM1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~LPTIM1LPEN_MASK ); \
   } 

#define READ_LPTIM1LPEN() \
   ((READ_REGISTER_ULONG(0x60) & LPTIM1LPEN_MASK)  >> LPTIM1LPEN_START_BIT)

#define WHEN_LPTIM1LPEN_HIGH() \
     if ( READ_LPTIM1LPEN() )


#define UNLESS_LPTIM1LPEN_HIGH() \
     if (! READ_LPTIM1LPEN() )


#define WAIT_LPTIM1LPEN_LOW() \
    while ( READ_LPTIM1LPEN() );


#define WAIT_LPTIM1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPTIM1LPEN() && (--___t___ > 0)); }


#define WAIT_LPTIM1LPEN_HIGH() \
    while (! READ_LPTIM1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HDMI-CEN clock enable during Sleep mode 
    // 
#define CECLPEN_MASK 0x8000000U
#define CECLPEN_OFFSET 27
#define CECLPEN_START_BIT 27
#define CECLPEN_WIDTH 1



typedef enum ceclpen {
    CECLPEN_0,
    CECLPEN_1
} CECLPEN_T ;
#define WRITE_CECLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ CECLPEN_MASK) | ((val << CECLPEN_START_BIT) & CECLPEN_MASK )); \
   } 

#define ENABLE_CECLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  CECLPEN_MASK ); \
   }

#define DISABLE_CECLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~CECLPEN_MASK ); \
   } 

#define READ_CECLPEN() \
   ((READ_REGISTER_ULONG(0x60) & CECLPEN_MASK)  >> CECLPEN_START_BIT)

#define WHEN_CECLPEN_HIGH() \
     if ( READ_CECLPEN() )


#define UNLESS_CECLPEN_HIGH() \
     if (! READ_CECLPEN() )


#define WAIT_CECLPEN_LOW() \
    while ( READ_CECLPEN() );


#define WAIT_CECLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CECLPEN() && (--___t___ > 0)); }


#define WAIT_CECLPEN_HIGH() \
    while (! READ_CECLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPDIF-RX clock enable during sleep mode 
    // 
#define SPDIFRXLPEN_MASK 0x10000U
#define SPDIFRXLPEN_OFFSET 16
#define SPDIFRXLPEN_START_BIT 16
#define SPDIFRXLPEN_WIDTH 1



typedef enum spdifrxlpen {
    SPDIFRXLPEN_0,
    SPDIFRXLPEN_1
} SPDIFRXLPEN_T ;
#define WRITE_SPDIFRXLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ SPDIFRXLPEN_MASK) | ((val << SPDIFRXLPEN_START_BIT) & SPDIFRXLPEN_MASK )); \
   } 

#define ENABLE_SPDIFRXLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  SPDIFRXLPEN_MASK ); \
   }

#define DISABLE_SPDIFRXLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~SPDIFRXLPEN_MASK ); \
   } 

#define READ_SPDIFRXLPEN() \
   ((READ_REGISTER_ULONG(0x60) & SPDIFRXLPEN_MASK)  >> SPDIFRXLPEN_START_BIT)

#define WHEN_SPDIFRXLPEN_HIGH() \
     if ( READ_SPDIFRXLPEN() )


#define UNLESS_SPDIFRXLPEN_HIGH() \
     if (! READ_SPDIFRXLPEN() )


#define WAIT_SPDIFRXLPEN_LOW() \
    while ( READ_SPDIFRXLPEN() );


#define WAIT_SPDIFRXLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPDIFRXLPEN() && (--___t___ > 0)); }


#define WAIT_SPDIFRXLPEN_HIGH() \
    while (! READ_SPDIFRXLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART8 clock enable during Sleep mode 
    // 
#define UART8LPEN_MASK 0x80000000U
#define UART8LPEN_OFFSET 31
#define UART8LPEN_START_BIT 31
#define UART8LPEN_WIDTH 1



typedef enum uart8lpen {
    UART_8LPEN_0,
    UART_8LPEN_1
} UART_8LPEN_T ;
#define WRITE_UART8LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ UART8LPEN_MASK) | ((val << UART8LPEN_START_BIT) & UART8LPEN_MASK )); \
   } 

#define ENABLE_UART8LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  UART8LPEN_MASK ); \
   }

#define DISABLE_UART8LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~UART8LPEN_MASK ); \
   } 

#define READ_UART8LPEN() \
   ((READ_REGISTER_ULONG(0x60) & UART8LPEN_MASK)  >> UART8LPEN_START_BIT)

#define WHEN_UART8LPEN_HIGH() \
     if ( READ_UART8LPEN() )


#define UNLESS_UART8LPEN_HIGH() \
     if (! READ_UART8LPEN() )


#define WAIT_UART8LPEN_LOW() \
    while ( READ_UART8LPEN() );


#define WAIT_UART8LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART8LPEN() && (--___t___ > 0)); }


#define WAIT_UART8LPEN_HIGH() \
    while (! READ_UART8LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART7 clock enable during Sleep mode 
    // 
#define UART7LPEN_MASK 0x40000000U
#define UART7LPEN_OFFSET 30
#define UART7LPEN_START_BIT 30
#define UART7LPEN_WIDTH 1



typedef enum uart7lpen {
    UART_7LPEN_0,
    UART_7LPEN_1
} UART_7LPEN_T ;
#define WRITE_UART7LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ UART7LPEN_MASK) | ((val << UART7LPEN_START_BIT) & UART7LPEN_MASK )); \
   } 

#define ENABLE_UART7LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  UART7LPEN_MASK ); \
   }

#define DISABLE_UART7LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~UART7LPEN_MASK ); \
   } 

#define READ_UART7LPEN() \
   ((READ_REGISTER_ULONG(0x60) & UART7LPEN_MASK)  >> UART7LPEN_START_BIT)

#define WHEN_UART7LPEN_HIGH() \
     if ( READ_UART7LPEN() )


#define UNLESS_UART7LPEN_HIGH() \
     if (! READ_UART7LPEN() )


#define WAIT_UART7LPEN_LOW() \
    while ( READ_UART7LPEN() );


#define WAIT_UART7LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART7LPEN() && (--___t___ > 0)); }


#define WAIT_UART7LPEN_HIGH() \
    while (! READ_UART7LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DAC interface clock enable during Sleep mode 
    // 
#define DACLPEN_MASK 0x20000000U
#define DACLPEN_OFFSET 29
#define DACLPEN_START_BIT 29
#define DACLPEN_WIDTH 1



typedef enum daclpen {
    DACLPEN_0,
    DACLPEN_1
} DACLPEN_T ;
#define WRITE_DACLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ DACLPEN_MASK) | ((val << DACLPEN_START_BIT) & DACLPEN_MASK )); \
   } 

#define ENABLE_DACLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  DACLPEN_MASK ); \
   }

#define DISABLE_DACLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~DACLPEN_MASK ); \
   } 

#define READ_DACLPEN() \
   ((READ_REGISTER_ULONG(0x60) & DACLPEN_MASK)  >> DACLPEN_START_BIT)

#define WHEN_DACLPEN_HIGH() \
     if ( READ_DACLPEN() )


#define UNLESS_DACLPEN_HIGH() \
     if (! READ_DACLPEN() )


#define WAIT_DACLPEN_LOW() \
    while ( READ_DACLPEN() );


#define WAIT_DACLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DACLPEN() && (--___t___ > 0)); }


#define WAIT_DACLPEN_HIGH() \
    while (! READ_DACLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power interface clock enable during Sleep mode 
    // 
#define PWRLPEN_MASK 0x10000000U
#define PWRLPEN_OFFSET 28
#define PWRLPEN_START_BIT 28
#define PWRLPEN_WIDTH 1



typedef enum pwrlpen {
    PWRLPEN_0,
    PWRLPEN_1
} PWRLPEN_T ;
#define WRITE_PWRLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ PWRLPEN_MASK) | ((val << PWRLPEN_START_BIT) & PWRLPEN_MASK )); \
   } 

#define ENABLE_PWRLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  PWRLPEN_MASK ); \
   }

#define DISABLE_PWRLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~PWRLPEN_MASK ); \
   } 

#define READ_PWRLPEN() \
   ((READ_REGISTER_ULONG(0x60) & PWRLPEN_MASK)  >> PWRLPEN_START_BIT)

#define WHEN_PWRLPEN_HIGH() \
     if ( READ_PWRLPEN() )


#define UNLESS_PWRLPEN_HIGH() \
     if (! READ_PWRLPEN() )


#define WAIT_PWRLPEN_LOW() \
    while ( READ_PWRLPEN() );


#define WAIT_PWRLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWRLPEN() && (--___t___ > 0)); }


#define WAIT_PWRLPEN_HIGH() \
    while (! READ_PWRLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAN 2 clock enable during Sleep mode 
    // 
#define CAN2LPEN_MASK 0x4000000U
#define CAN2LPEN_OFFSET 26
#define CAN2LPEN_START_BIT 26
#define CAN2LPEN_WIDTH 1



typedef enum can2lpen {
    CAN_2LPEN_0,
    CAN_2LPEN_1
} CAN_2LPEN_T ;
#define WRITE_CAN2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ CAN2LPEN_MASK) | ((val << CAN2LPEN_START_BIT) & CAN2LPEN_MASK )); \
   } 

#define ENABLE_CAN2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  CAN2LPEN_MASK ); \
   }

#define DISABLE_CAN2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~CAN2LPEN_MASK ); \
   } 

#define READ_CAN2LPEN() \
   ((READ_REGISTER_ULONG(0x60) & CAN2LPEN_MASK)  >> CAN2LPEN_START_BIT)

#define WHEN_CAN2LPEN_HIGH() \
     if ( READ_CAN2LPEN() )


#define UNLESS_CAN2LPEN_HIGH() \
     if (! READ_CAN2LPEN() )


#define WAIT_CAN2LPEN_LOW() \
    while ( READ_CAN2LPEN() );


#define WAIT_CAN2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAN2LPEN() && (--___t___ > 0)); }


#define WAIT_CAN2LPEN_HIGH() \
    while (! READ_CAN2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAN 1 clock enable during Sleep mode 
    // 
#define CAN1LPEN_MASK 0x2000000U
#define CAN1LPEN_OFFSET 25
#define CAN1LPEN_START_BIT 25
#define CAN1LPEN_WIDTH 1



typedef enum can1lpen {
    CAN_1LPEN_0,
    CAN_1LPEN_1
} CAN_1LPEN_T ;
#define WRITE_CAN1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ CAN1LPEN_MASK) | ((val << CAN1LPEN_START_BIT) & CAN1LPEN_MASK )); \
   } 

#define ENABLE_CAN1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  CAN1LPEN_MASK ); \
   }

#define DISABLE_CAN1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~CAN1LPEN_MASK ); \
   } 

#define READ_CAN1LPEN() \
   ((READ_REGISTER_ULONG(0x60) & CAN1LPEN_MASK)  >> CAN1LPEN_START_BIT)

#define WHEN_CAN1LPEN_HIGH() \
     if ( READ_CAN1LPEN() )


#define UNLESS_CAN1LPEN_HIGH() \
     if (! READ_CAN1LPEN() )


#define WAIT_CAN1LPEN_LOW() \
    while ( READ_CAN1LPEN() );


#define WAIT_CAN1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAN1LPEN() && (--___t___ > 0)); }


#define WAIT_CAN1LPEN_HIGH() \
    while (! READ_CAN1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C3 clock enable during Sleep mode 
    // 
#define I2C3LPEN_MASK 0x800000U
#define I2C3LPEN_OFFSET 23
#define I2C3LPEN_START_BIT 23
#define I2C3LPEN_WIDTH 1



typedef enum i2c3lpen {
    I_2C_3LPEN_0,
    I_2C_3LPEN_1
} I_2C_3LPEN_T ;
#define WRITE_I2C3LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ I2C3LPEN_MASK) | ((val << I2C3LPEN_START_BIT) & I2C3LPEN_MASK )); \
   } 

#define ENABLE_I2C3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  I2C3LPEN_MASK ); \
   }

#define DISABLE_I2C3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~I2C3LPEN_MASK ); \
   } 

#define READ_I2C3LPEN() \
   ((READ_REGISTER_ULONG(0x60) & I2C3LPEN_MASK)  >> I2C3LPEN_START_BIT)

#define WHEN_I2C3LPEN_HIGH() \
     if ( READ_I2C3LPEN() )


#define UNLESS_I2C3LPEN_HIGH() \
     if (! READ_I2C3LPEN() )


#define WAIT_I2C3LPEN_LOW() \
    while ( READ_I2C3LPEN() );


#define WAIT_I2C3LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C3LPEN() && (--___t___ > 0)); }


#define WAIT_I2C3LPEN_HIGH() \
    while (! READ_I2C3LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C2 clock enable during Sleep mode 
    // 
#define I2C2LPEN_MASK 0x400000U
#define I2C2LPEN_OFFSET 22
#define I2C2LPEN_START_BIT 22
#define I2C2LPEN_WIDTH 1



typedef enum i2c2lpen {
    I_2C_2LPEN_0,
    I_2C_2LPEN_1
} I_2C_2LPEN_T ;
#define WRITE_I2C2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ I2C2LPEN_MASK) | ((val << I2C2LPEN_START_BIT) & I2C2LPEN_MASK )); \
   } 

#define ENABLE_I2C2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  I2C2LPEN_MASK ); \
   }

#define DISABLE_I2C2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~I2C2LPEN_MASK ); \
   } 

#define READ_I2C2LPEN() \
   ((READ_REGISTER_ULONG(0x60) & I2C2LPEN_MASK)  >> I2C2LPEN_START_BIT)

#define WHEN_I2C2LPEN_HIGH() \
     if ( READ_I2C2LPEN() )


#define UNLESS_I2C2LPEN_HIGH() \
     if (! READ_I2C2LPEN() )


#define WAIT_I2C2LPEN_LOW() \
    while ( READ_I2C2LPEN() );


#define WAIT_I2C2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C2LPEN() && (--___t___ > 0)); }


#define WAIT_I2C2LPEN_HIGH() \
    while (! READ_I2C2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C1 clock enable during Sleep mode 
    // 
#define I2C1LPEN_MASK 0x200000U
#define I2C1LPEN_OFFSET 21
#define I2C1LPEN_START_BIT 21
#define I2C1LPEN_WIDTH 1



typedef enum i2c1lpen {
    I_2C_1LPEN_0,
    I_2C_1LPEN_1
} I_2C_1LPEN_T ;
#define WRITE_I2C1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ I2C1LPEN_MASK) | ((val << I2C1LPEN_START_BIT) & I2C1LPEN_MASK )); \
   } 

#define ENABLE_I2C1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  I2C1LPEN_MASK ); \
   }

#define DISABLE_I2C1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~I2C1LPEN_MASK ); \
   } 

#define READ_I2C1LPEN() \
   ((READ_REGISTER_ULONG(0x60) & I2C1LPEN_MASK)  >> I2C1LPEN_START_BIT)

#define WHEN_I2C1LPEN_HIGH() \
     if ( READ_I2C1LPEN() )


#define UNLESS_I2C1LPEN_HIGH() \
     if (! READ_I2C1LPEN() )


#define WAIT_I2C1LPEN_LOW() \
    while ( READ_I2C1LPEN() );


#define WAIT_I2C1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2C1LPEN() && (--___t___ > 0)); }


#define WAIT_I2C1LPEN_HIGH() \
    while (! READ_I2C1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART5 clock enable during Sleep mode 
    // 
#define UART5LPEN_MASK 0x100000U
#define UART5LPEN_OFFSET 20
#define UART5LPEN_START_BIT 20
#define UART5LPEN_WIDTH 1



typedef enum uart5lpen {
    UART_5LPEN_0,
    UART_5LPEN_1
} UART_5LPEN_T ;
#define WRITE_UART5LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ UART5LPEN_MASK) | ((val << UART5LPEN_START_BIT) & UART5LPEN_MASK )); \
   } 

#define ENABLE_UART5LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  UART5LPEN_MASK ); \
   }

#define DISABLE_UART5LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~UART5LPEN_MASK ); \
   } 

#define READ_UART5LPEN() \
   ((READ_REGISTER_ULONG(0x60) & UART5LPEN_MASK)  >> UART5LPEN_START_BIT)

#define WHEN_UART5LPEN_HIGH() \
     if ( READ_UART5LPEN() )


#define UNLESS_UART5LPEN_HIGH() \
     if (! READ_UART5LPEN() )


#define WAIT_UART5LPEN_LOW() \
    while ( READ_UART5LPEN() );


#define WAIT_UART5LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART5LPEN() && (--___t___ > 0)); }


#define WAIT_UART5LPEN_HIGH() \
    while (! READ_UART5LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART4 clock enable during Sleep mode 
    // 
#define UART4LPEN_MASK 0x80000U
#define UART4LPEN_OFFSET 19
#define UART4LPEN_START_BIT 19
#define UART4LPEN_WIDTH 1



typedef enum uart4lpen {
    UART_4LPEN_0,
    UART_4LPEN_1
} UART_4LPEN_T ;
#define WRITE_UART4LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ UART4LPEN_MASK) | ((val << UART4LPEN_START_BIT) & UART4LPEN_MASK )); \
   } 

#define ENABLE_UART4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  UART4LPEN_MASK ); \
   }

#define DISABLE_UART4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~UART4LPEN_MASK ); \
   } 

#define READ_UART4LPEN() \
   ((READ_REGISTER_ULONG(0x60) & UART4LPEN_MASK)  >> UART4LPEN_START_BIT)

#define WHEN_UART4LPEN_HIGH() \
     if ( READ_UART4LPEN() )


#define UNLESS_UART4LPEN_HIGH() \
     if (! READ_UART4LPEN() )


#define WAIT_UART4LPEN_LOW() \
    while ( READ_UART4LPEN() );


#define WAIT_UART4LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UART4LPEN() && (--___t___ > 0)); }


#define WAIT_UART4LPEN_HIGH() \
    while (! READ_UART4LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART3 clock enable during Sleep mode 
    // 
#define USART3LPEN_MASK 0x40000U
#define USART3LPEN_OFFSET 18
#define USART3LPEN_START_BIT 18
#define USART3LPEN_WIDTH 1



typedef enum usart3lpen {
    USART_3LPEN_0,
    USART_3LPEN_1
} USART_3LPEN_T ;
#define WRITE_USART3LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ USART3LPEN_MASK) | ((val << USART3LPEN_START_BIT) & USART3LPEN_MASK )); \
   } 

#define ENABLE_USART3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  USART3LPEN_MASK ); \
   }

#define DISABLE_USART3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~USART3LPEN_MASK ); \
   } 

#define READ_USART3LPEN() \
   ((READ_REGISTER_ULONG(0x60) & USART3LPEN_MASK)  >> USART3LPEN_START_BIT)

#define WHEN_USART3LPEN_HIGH() \
     if ( READ_USART3LPEN() )


#define UNLESS_USART3LPEN_HIGH() \
     if (! READ_USART3LPEN() )


#define WAIT_USART3LPEN_LOW() \
    while ( READ_USART3LPEN() );


#define WAIT_USART3LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART3LPEN() && (--___t___ > 0)); }


#define WAIT_USART3LPEN_HIGH() \
    while (! READ_USART3LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART2 clock enable during Sleep mode 
    // 
#define USART2LPEN_MASK 0x20000U
#define USART2LPEN_OFFSET 17
#define USART2LPEN_START_BIT 17
#define USART2LPEN_WIDTH 1



typedef enum usart2lpen {
    USART_2LPEN_0,
    USART_2LPEN_1
} USART_2LPEN_T ;
#define WRITE_USART2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ USART2LPEN_MASK) | ((val << USART2LPEN_START_BIT) & USART2LPEN_MASK )); \
   } 

#define ENABLE_USART2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  USART2LPEN_MASK ); \
   }

#define DISABLE_USART2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~USART2LPEN_MASK ); \
   } 

#define READ_USART2LPEN() \
   ((READ_REGISTER_ULONG(0x60) & USART2LPEN_MASK)  >> USART2LPEN_START_BIT)

#define WHEN_USART2LPEN_HIGH() \
     if ( READ_USART2LPEN() )


#define UNLESS_USART2LPEN_HIGH() \
     if (! READ_USART2LPEN() )


#define WAIT_USART2LPEN_LOW() \
    while ( READ_USART2LPEN() );


#define WAIT_USART2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART2LPEN() && (--___t___ > 0)); }


#define WAIT_USART2LPEN_HIGH() \
    while (! READ_USART2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI3 clock enable during Sleep mode 
    // 
#define SPI3LPEN_MASK 0x8000U
#define SPI3LPEN_OFFSET 15
#define SPI3LPEN_START_BIT 15
#define SPI3LPEN_WIDTH 1



typedef enum spi3lpen {
    SPI_3LPEN_0,
    SPI_3LPEN_1
} SPI_3LPEN_T ;
#define WRITE_SPI3LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ SPI3LPEN_MASK) | ((val << SPI3LPEN_START_BIT) & SPI3LPEN_MASK )); \
   } 

#define ENABLE_SPI3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  SPI3LPEN_MASK ); \
   }

#define DISABLE_SPI3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~SPI3LPEN_MASK ); \
   } 

#define READ_SPI3LPEN() \
   ((READ_REGISTER_ULONG(0x60) & SPI3LPEN_MASK)  >> SPI3LPEN_START_BIT)

#define WHEN_SPI3LPEN_HIGH() \
     if ( READ_SPI3LPEN() )


#define UNLESS_SPI3LPEN_HIGH() \
     if (! READ_SPI3LPEN() )


#define WAIT_SPI3LPEN_LOW() \
    while ( READ_SPI3LPEN() );


#define WAIT_SPI3LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI3LPEN() && (--___t___ > 0)); }


#define WAIT_SPI3LPEN_HIGH() \
    while (! READ_SPI3LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI2 clock enable during Sleep mode 
    // 
#define SPI2LPEN_MASK 0x4000U
#define SPI2LPEN_OFFSET 14
#define SPI2LPEN_START_BIT 14
#define SPI2LPEN_WIDTH 1



typedef enum spi2lpen {
    SPI_2LPEN_0,
    SPI_2LPEN_1
} SPI_2LPEN_T ;
#define WRITE_SPI2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ SPI2LPEN_MASK) | ((val << SPI2LPEN_START_BIT) & SPI2LPEN_MASK )); \
   } 

#define ENABLE_SPI2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  SPI2LPEN_MASK ); \
   }

#define DISABLE_SPI2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~SPI2LPEN_MASK ); \
   } 

#define READ_SPI2LPEN() \
   ((READ_REGISTER_ULONG(0x60) & SPI2LPEN_MASK)  >> SPI2LPEN_START_BIT)

#define WHEN_SPI2LPEN_HIGH() \
     if ( READ_SPI2LPEN() )


#define UNLESS_SPI2LPEN_HIGH() \
     if (! READ_SPI2LPEN() )


#define WAIT_SPI2LPEN_LOW() \
    while ( READ_SPI2LPEN() );


#define WAIT_SPI2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI2LPEN() && (--___t___ > 0)); }


#define WAIT_SPI2LPEN_HIGH() \
    while (! READ_SPI2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Window watchdog clock enable during Sleep mode 
    // 
#define WWDGLPEN_MASK 0x800U
#define WWDGLPEN_OFFSET 11
#define WWDGLPEN_START_BIT 11
#define WWDGLPEN_WIDTH 1



typedef enum wwdglpen {
    WWDGLPEN_0,
    WWDGLPEN_1
} WWDGLPEN_T ;
#define WRITE_WWDGLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ WWDGLPEN_MASK) | ((val << WWDGLPEN_START_BIT) & WWDGLPEN_MASK )); \
   } 

#define ENABLE_WWDGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  WWDGLPEN_MASK ); \
   }

#define DISABLE_WWDGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~WWDGLPEN_MASK ); \
   } 

#define READ_WWDGLPEN() \
   ((READ_REGISTER_ULONG(0x60) & WWDGLPEN_MASK)  >> WWDGLPEN_START_BIT)

#define WHEN_WWDGLPEN_HIGH() \
     if ( READ_WWDGLPEN() )


#define UNLESS_WWDGLPEN_HIGH() \
     if (! READ_WWDGLPEN() )


#define WAIT_WWDGLPEN_LOW() \
    while ( READ_WWDGLPEN() );


#define WAIT_WWDGLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WWDGLPEN() && (--___t___ > 0)); }


#define WAIT_WWDGLPEN_HIGH() \
    while (! READ_WWDGLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM14 clock enable during Sleep mode 
    // 
#define TIM14LPEN_MASK 0x100U
#define TIM14LPEN_OFFSET 8
#define TIM14LPEN_START_BIT 8
#define TIM14LPEN_WIDTH 1



typedef enum tim14lpen {
    TIM_1_4LPEN_0,
    TIM_1_4LPEN_1
} TIM_1_4LPEN_T ;
#define WRITE_TIM14LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM14LPEN_MASK) | ((val << TIM14LPEN_START_BIT) & TIM14LPEN_MASK )); \
   } 

#define ENABLE_TIM14LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM14LPEN_MASK ); \
   }

#define DISABLE_TIM14LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM14LPEN_MASK ); \
   } 

#define READ_TIM14LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM14LPEN_MASK)  >> TIM14LPEN_START_BIT)

#define WHEN_TIM14LPEN_HIGH() \
     if ( READ_TIM14LPEN() )


#define UNLESS_TIM14LPEN_HIGH() \
     if (! READ_TIM14LPEN() )


#define WAIT_TIM14LPEN_LOW() \
    while ( READ_TIM14LPEN() );


#define WAIT_TIM14LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM14LPEN() && (--___t___ > 0)); }


#define WAIT_TIM14LPEN_HIGH() \
    while (! READ_TIM14LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM13 clock enable during Sleep mode 
    // 
#define TIM13LPEN_MASK 0x80U
#define TIM13LPEN_OFFSET 7
#define TIM13LPEN_START_BIT 7
#define TIM13LPEN_WIDTH 1



typedef enum tim13lpen {
    TIM_1_3LPEN_0,
    TIM_1_3LPEN_1
} TIM_1_3LPEN_T ;
#define WRITE_TIM13LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM13LPEN_MASK) | ((val << TIM13LPEN_START_BIT) & TIM13LPEN_MASK )); \
   } 

#define ENABLE_TIM13LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM13LPEN_MASK ); \
   }

#define DISABLE_TIM13LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM13LPEN_MASK ); \
   } 

#define READ_TIM13LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM13LPEN_MASK)  >> TIM13LPEN_START_BIT)

#define WHEN_TIM13LPEN_HIGH() \
     if ( READ_TIM13LPEN() )


#define UNLESS_TIM13LPEN_HIGH() \
     if (! READ_TIM13LPEN() )


#define WAIT_TIM13LPEN_LOW() \
    while ( READ_TIM13LPEN() );


#define WAIT_TIM13LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM13LPEN() && (--___t___ > 0)); }


#define WAIT_TIM13LPEN_HIGH() \
    while (! READ_TIM13LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM12 clock enable during Sleep mode 
    // 
#define TIM12LPEN_MASK 0x40U
#define TIM12LPEN_OFFSET 6
#define TIM12LPEN_START_BIT 6
#define TIM12LPEN_WIDTH 1



typedef enum tim12lpen {
    TIM_1_2LPEN_0,
    TIM_1_2LPEN_1
} TIM_1_2LPEN_T ;
#define WRITE_TIM12LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM12LPEN_MASK) | ((val << TIM12LPEN_START_BIT) & TIM12LPEN_MASK )); \
   } 

#define ENABLE_TIM12LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM12LPEN_MASK ); \
   }

#define DISABLE_TIM12LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM12LPEN_MASK ); \
   } 

#define READ_TIM12LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM12LPEN_MASK)  >> TIM12LPEN_START_BIT)

#define WHEN_TIM12LPEN_HIGH() \
     if ( READ_TIM12LPEN() )


#define UNLESS_TIM12LPEN_HIGH() \
     if (! READ_TIM12LPEN() )


#define WAIT_TIM12LPEN_LOW() \
    while ( READ_TIM12LPEN() );


#define WAIT_TIM12LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM12LPEN() && (--___t___ > 0)); }


#define WAIT_TIM12LPEN_HIGH() \
    while (! READ_TIM12LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM7 clock enable during Sleep mode 
    // 
#define TIM7LPEN_MASK 0x20U
#define TIM7LPEN_OFFSET 5
#define TIM7LPEN_START_BIT 5
#define TIM7LPEN_WIDTH 1



typedef enum tim7lpen {
    TIM_7LPEN_0,
    TIM_7LPEN_1
} TIM_7LPEN_T ;
#define WRITE_TIM7LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM7LPEN_MASK) | ((val << TIM7LPEN_START_BIT) & TIM7LPEN_MASK )); \
   } 

#define ENABLE_TIM7LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM7LPEN_MASK ); \
   }

#define DISABLE_TIM7LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM7LPEN_MASK ); \
   } 

#define READ_TIM7LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM7LPEN_MASK)  >> TIM7LPEN_START_BIT)

#define WHEN_TIM7LPEN_HIGH() \
     if ( READ_TIM7LPEN() )


#define UNLESS_TIM7LPEN_HIGH() \
     if (! READ_TIM7LPEN() )


#define WAIT_TIM7LPEN_LOW() \
    while ( READ_TIM7LPEN() );


#define WAIT_TIM7LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM7LPEN() && (--___t___ > 0)); }


#define WAIT_TIM7LPEN_HIGH() \
    while (! READ_TIM7LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM6 clock enable during Sleep mode 
    // 
#define TIM6LPEN_MASK 0x10U
#define TIM6LPEN_OFFSET 4
#define TIM6LPEN_START_BIT 4
#define TIM6LPEN_WIDTH 1



typedef enum tim6lpen {
    TIM_6LPEN_0,
    TIM_6LPEN_1
} TIM_6LPEN_T ;
#define WRITE_TIM6LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM6LPEN_MASK) | ((val << TIM6LPEN_START_BIT) & TIM6LPEN_MASK )); \
   } 

#define ENABLE_TIM6LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM6LPEN_MASK ); \
   }

#define DISABLE_TIM6LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM6LPEN_MASK ); \
   } 

#define READ_TIM6LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM6LPEN_MASK)  >> TIM6LPEN_START_BIT)

#define WHEN_TIM6LPEN_HIGH() \
     if ( READ_TIM6LPEN() )


#define UNLESS_TIM6LPEN_HIGH() \
     if (! READ_TIM6LPEN() )


#define WAIT_TIM6LPEN_LOW() \
    while ( READ_TIM6LPEN() );


#define WAIT_TIM6LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM6LPEN() && (--___t___ > 0)); }


#define WAIT_TIM6LPEN_HIGH() \
    while (! READ_TIM6LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM5 clock enable during Sleep mode 
    // 
#define TIM5LPEN_MASK 0x8U
#define TIM5LPEN_OFFSET 3
#define TIM5LPEN_START_BIT 3
#define TIM5LPEN_WIDTH 1



typedef enum tim5lpen {
    TIM_5LPEN_0,
    TIM_5LPEN_1
} TIM_5LPEN_T ;
#define WRITE_TIM5LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM5LPEN_MASK) | ((val << TIM5LPEN_START_BIT) & TIM5LPEN_MASK )); \
   } 

#define ENABLE_TIM5LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM5LPEN_MASK ); \
   }

#define DISABLE_TIM5LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM5LPEN_MASK ); \
   } 

#define READ_TIM5LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM5LPEN_MASK)  >> TIM5LPEN_START_BIT)

#define WHEN_TIM5LPEN_HIGH() \
     if ( READ_TIM5LPEN() )


#define UNLESS_TIM5LPEN_HIGH() \
     if (! READ_TIM5LPEN() )


#define WAIT_TIM5LPEN_LOW() \
    while ( READ_TIM5LPEN() );


#define WAIT_TIM5LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM5LPEN() && (--___t___ > 0)); }


#define WAIT_TIM5LPEN_HIGH() \
    while (! READ_TIM5LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM4 clock enable during Sleep mode 
    // 
#define TIM4LPEN_MASK 0x4U
#define TIM4LPEN_OFFSET 2
#define TIM4LPEN_START_BIT 2
#define TIM4LPEN_WIDTH 1



typedef enum tim4lpen {
    TIM_4LPEN_0,
    TIM_4LPEN_1
} TIM_4LPEN_T ;
#define WRITE_TIM4LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM4LPEN_MASK) | ((val << TIM4LPEN_START_BIT) & TIM4LPEN_MASK )); \
   } 

#define ENABLE_TIM4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM4LPEN_MASK ); \
   }

#define DISABLE_TIM4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM4LPEN_MASK ); \
   } 

#define READ_TIM4LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM4LPEN_MASK)  >> TIM4LPEN_START_BIT)

#define WHEN_TIM4LPEN_HIGH() \
     if ( READ_TIM4LPEN() )


#define UNLESS_TIM4LPEN_HIGH() \
     if (! READ_TIM4LPEN() )


#define WAIT_TIM4LPEN_LOW() \
    while ( READ_TIM4LPEN() );


#define WAIT_TIM4LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM4LPEN() && (--___t___ > 0)); }


#define WAIT_TIM4LPEN_HIGH() \
    while (! READ_TIM4LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM3 clock enable during Sleep mode 
    // 
#define TIM3LPEN_MASK 0x2U
#define TIM3LPEN_OFFSET 1
#define TIM3LPEN_START_BIT 1
#define TIM3LPEN_WIDTH 1



typedef enum tim3lpen {
    TIM_3LPEN_0,
    TIM_3LPEN_1
} TIM_3LPEN_T ;
#define WRITE_TIM3LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM3LPEN_MASK) | ((val << TIM3LPEN_START_BIT) & TIM3LPEN_MASK )); \
   } 

#define ENABLE_TIM3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM3LPEN_MASK ); \
   }

#define DISABLE_TIM3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM3LPEN_MASK ); \
   } 

#define READ_TIM3LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM3LPEN_MASK)  >> TIM3LPEN_START_BIT)

#define WHEN_TIM3LPEN_HIGH() \
     if ( READ_TIM3LPEN() )


#define UNLESS_TIM3LPEN_HIGH() \
     if (! READ_TIM3LPEN() )


#define WAIT_TIM3LPEN_LOW() \
    while ( READ_TIM3LPEN() );


#define WAIT_TIM3LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM3LPEN() && (--___t___ > 0)); }


#define WAIT_TIM3LPEN_HIGH() \
    while (! READ_TIM3LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb1lpenr
//
// Return the value of register APB_1LPENR
//
// Notes : Register APB1 peripheral clock enable in low power mode register (APB1LPENR) at the offset 0x60, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM2 clock enable during Sleep mode 
    // 
#define TIM2LPEN_MASK 0x1U
#define TIM2LPEN_OFFSET 0
#define TIM2LPEN_START_BIT 0
#define TIM2LPEN_WIDTH 1



typedef enum tim2lpen {
    TIM_2LPEN_0,
    TIM_2LPEN_1
} TIM_2LPEN_T ;
#define WRITE_TIM2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ TIM2LPEN_MASK) | ((val << TIM2LPEN_START_BIT) & TIM2LPEN_MASK )); \
   } 

#define ENABLE_TIM2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  TIM2LPEN_MASK ); \
   }

#define DISABLE_TIM2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~TIM2LPEN_MASK ); \
   } 

#define READ_TIM2LPEN() \
   ((READ_REGISTER_ULONG(0x60) & TIM2LPEN_MASK)  >> TIM2LPEN_START_BIT)

#define WHEN_TIM2LPEN_HIGH() \
     if ( READ_TIM2LPEN() )


#define UNLESS_TIM2LPEN_HIGH() \
     if (! READ_TIM2LPEN() )


#define WAIT_TIM2LPEN_LOW() \
    while ( READ_TIM2LPEN() );


#define WAIT_TIM2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM2LPEN() && (--___t___ > 0)); }


#define WAIT_TIM2LPEN_HIGH() \
    while (! READ_TIM2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB2LPENR
//
// Notes : Register Apb2lpenr at offset 0x64
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_APB_2LPENR( y) \
     WRITE_REGISTER_ULONG( 0x64 , y)

#define SET_BITS_APB_2LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  mask ); \
   }

#define CLEAR_BITS_APB_2LPENR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val & ~mask ); \
   }

#define READ_REGISTER_APB_2LPENR() \
     READ_REGISTER_ULONG(0x64)

/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDMMC1 clock enable during Sleep mode 
    // 
#define SDMMC1LPEN_MASK 0x800U
#define SDMMC1LPEN_OFFSET 11
#define SDMMC1LPEN_START_BIT 11
#define SDMMC1LPEN_WIDTH 1


#define APB_2LPENR_REG 0x64

typedef enum sdmmc1lpen {
    SDMMC_1LPEN_0,
    SDMMC_1LPEN_1
} SDMMC_1LPEN_T ;
#define WRITE_SDMMC1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SDMMC1LPEN_MASK) | ((val << SDMMC1LPEN_START_BIT) & SDMMC1LPEN_MASK )); \
   } 

#define ENABLE_SDMMC1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SDMMC1LPEN_MASK ); \
   }

#define DISABLE_SDMMC1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SDMMC1LPEN_MASK ); \
   } 

#define READ_SDMMC1LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SDMMC1LPEN_MASK)  >> SDMMC1LPEN_START_BIT)

#define WHEN_SDMMC1LPEN_HIGH() \
     if ( READ_SDMMC1LPEN() )


#define UNLESS_SDMMC1LPEN_HIGH() \
     if (! READ_SDMMC1LPEN() )


#define WAIT_SDMMC1LPEN_LOW() \
    while ( READ_SDMMC1LPEN() );


#define WAIT_SDMMC1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDMMC1LPEN() && (--___t___ > 0)); }


#define WAIT_SDMMC1LPEN_HIGH() \
    while (! READ_SDMMC1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI2 clock enable during sleep mode 
    // 
#define SAI2LPEN_MASK 0x800000U
#define SAI2LPEN_OFFSET 23
#define SAI2LPEN_START_BIT 23
#define SAI2LPEN_WIDTH 1



typedef enum sai2lpen {
    SAI_2LPEN_0,
    SAI_2LPEN_1
} SAI_2LPEN_T ;
#define WRITE_SAI2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SAI2LPEN_MASK) | ((val << SAI2LPEN_START_BIT) & SAI2LPEN_MASK )); \
   } 

#define ENABLE_SAI2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SAI2LPEN_MASK ); \
   }

#define DISABLE_SAI2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SAI2LPEN_MASK ); \
   } 

#define READ_SAI2LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SAI2LPEN_MASK)  >> SAI2LPEN_START_BIT)

#define WHEN_SAI2LPEN_HIGH() \
     if ( READ_SAI2LPEN() )


#define UNLESS_SAI2LPEN_HIGH() \
     if (! READ_SAI2LPEN() )


#define WAIT_SAI2LPEN_LOW() \
    while ( READ_SAI2LPEN() );


#define WAIT_SAI2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAI2LPEN() && (--___t___ > 0)); }


#define WAIT_SAI2LPEN_HIGH() \
    while (! READ_SAI2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LTDC clock enable during sleep mode 
    // 
#define LTDCLPEN_MASK 0x4000000U
#define LTDCLPEN_OFFSET 26
#define LTDCLPEN_START_BIT 26
#define LTDCLPEN_WIDTH 1



typedef enum ltdclpen {
    LTDCLPEN_0,
    LTDCLPEN_1
} LTDCLPEN_T ;
#define WRITE_LTDCLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ LTDCLPEN_MASK) | ((val << LTDCLPEN_START_BIT) & LTDCLPEN_MASK )); \
   } 

#define ENABLE_LTDCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  LTDCLPEN_MASK ); \
   }

#define DISABLE_LTDCLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~LTDCLPEN_MASK ); \
   } 

#define READ_LTDCLPEN() \
   ((READ_REGISTER_ULONG(0x64) & LTDCLPEN_MASK)  >> LTDCLPEN_START_BIT)

#define WHEN_LTDCLPEN_HIGH() \
     if ( READ_LTDCLPEN() )


#define UNLESS_LTDCLPEN_HIGH() \
     if (! READ_LTDCLPEN() )


#define WAIT_LTDCLPEN_LOW() \
    while ( READ_LTDCLPEN() );


#define WAIT_LTDCLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LTDCLPEN() && (--___t___ > 0)); }


#define WAIT_LTDCLPEN_HIGH() \
    while (! READ_LTDCLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI1 clock enable during sleep mode 
    // 
#define SAI1LPEN_MASK 0x400000U
#define SAI1LPEN_OFFSET 22
#define SAI1LPEN_START_BIT 22
#define SAI1LPEN_WIDTH 1



typedef enum sai1lpen {
    SAI_1LPEN_0,
    SAI_1LPEN_1
} SAI_1LPEN_T ;
#define WRITE_SAI1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SAI1LPEN_MASK) | ((val << SAI1LPEN_START_BIT) & SAI1LPEN_MASK )); \
   } 

#define ENABLE_SAI1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SAI1LPEN_MASK ); \
   }

#define DISABLE_SAI1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SAI1LPEN_MASK ); \
   } 

#define READ_SAI1LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SAI1LPEN_MASK)  >> SAI1LPEN_START_BIT)

#define WHEN_SAI1LPEN_HIGH() \
     if ( READ_SAI1LPEN() )


#define UNLESS_SAI1LPEN_HIGH() \
     if (! READ_SAI1LPEN() )


#define WAIT_SAI1LPEN_LOW() \
    while ( READ_SAI1LPEN() );


#define WAIT_SAI1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SAI1LPEN() && (--___t___ > 0)); }


#define WAIT_SAI1LPEN_HIGH() \
    while (! READ_SAI1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 6 clock enable during Sleep mode 
    // 
#define SPI6LPEN_MASK 0x200000U
#define SPI6LPEN_OFFSET 21
#define SPI6LPEN_START_BIT 21
#define SPI6LPEN_WIDTH 1



typedef enum spi6lpen {
    SPI_6LPEN_0,
    SPI_6LPEN_1
} SPI_6LPEN_T ;
#define WRITE_SPI6LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SPI6LPEN_MASK) | ((val << SPI6LPEN_START_BIT) & SPI6LPEN_MASK )); \
   } 

#define ENABLE_SPI6LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SPI6LPEN_MASK ); \
   }

#define DISABLE_SPI6LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SPI6LPEN_MASK ); \
   } 

#define READ_SPI6LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SPI6LPEN_MASK)  >> SPI6LPEN_START_BIT)

#define WHEN_SPI6LPEN_HIGH() \
     if ( READ_SPI6LPEN() )


#define UNLESS_SPI6LPEN_HIGH() \
     if (! READ_SPI6LPEN() )


#define WAIT_SPI6LPEN_LOW() \
    while ( READ_SPI6LPEN() );


#define WAIT_SPI6LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI6LPEN() && (--___t___ > 0)); }


#define WAIT_SPI6LPEN_HIGH() \
    while (! READ_SPI6LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 5 clock enable during Sleep mode 
    // 
#define SPI5LPEN_MASK 0x100000U
#define SPI5LPEN_OFFSET 20
#define SPI5LPEN_START_BIT 20
#define SPI5LPEN_WIDTH 1



typedef enum spi5lpen {
    SPI_5LPEN_0,
    SPI_5LPEN_1
} SPI_5LPEN_T ;
#define WRITE_SPI5LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SPI5LPEN_MASK) | ((val << SPI5LPEN_START_BIT) & SPI5LPEN_MASK )); \
   } 

#define ENABLE_SPI5LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SPI5LPEN_MASK ); \
   }

#define DISABLE_SPI5LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SPI5LPEN_MASK ); \
   } 

#define READ_SPI5LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SPI5LPEN_MASK)  >> SPI5LPEN_START_BIT)

#define WHEN_SPI5LPEN_HIGH() \
     if ( READ_SPI5LPEN() )


#define UNLESS_SPI5LPEN_HIGH() \
     if (! READ_SPI5LPEN() )


#define WAIT_SPI5LPEN_LOW() \
    while ( READ_SPI5LPEN() );


#define WAIT_SPI5LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI5LPEN() && (--___t___ > 0)); }


#define WAIT_SPI5LPEN_HIGH() \
    while (! READ_SPI5LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM11 clock enable during Sleep mode 
    // 
#define TIM11LPEN_MASK 0x40000U
#define TIM11LPEN_OFFSET 18
#define TIM11LPEN_START_BIT 18
#define TIM11LPEN_WIDTH 1



typedef enum tim11lpen {
    TIM_1_1LPEN_0,
    TIM_1_1LPEN_1
} TIM_1_1LPEN_T ;
#define WRITE_TIM11LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ TIM11LPEN_MASK) | ((val << TIM11LPEN_START_BIT) & TIM11LPEN_MASK )); \
   } 

#define ENABLE_TIM11LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  TIM11LPEN_MASK ); \
   }

#define DISABLE_TIM11LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~TIM11LPEN_MASK ); \
   } 

#define READ_TIM11LPEN() \
   ((READ_REGISTER_ULONG(0x64) & TIM11LPEN_MASK)  >> TIM11LPEN_START_BIT)

#define WHEN_TIM11LPEN_HIGH() \
     if ( READ_TIM11LPEN() )


#define UNLESS_TIM11LPEN_HIGH() \
     if (! READ_TIM11LPEN() )


#define WAIT_TIM11LPEN_LOW() \
    while ( READ_TIM11LPEN() );


#define WAIT_TIM11LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM11LPEN() && (--___t___ > 0)); }


#define WAIT_TIM11LPEN_HIGH() \
    while (! READ_TIM11LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM10 clock enable during Sleep mode 
    // 
#define TIM10LPEN_MASK 0x20000U
#define TIM10LPEN_OFFSET 17
#define TIM10LPEN_START_BIT 17
#define TIM10LPEN_WIDTH 1



typedef enum tim10lpen {
    TIM_1_0LPEN_0,
    TIM_1_0LPEN_1
} TIM_1_0LPEN_T ;
#define WRITE_TIM10LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ TIM10LPEN_MASK) | ((val << TIM10LPEN_START_BIT) & TIM10LPEN_MASK )); \
   } 

#define ENABLE_TIM10LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  TIM10LPEN_MASK ); \
   }

#define DISABLE_TIM10LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~TIM10LPEN_MASK ); \
   } 

#define READ_TIM10LPEN() \
   ((READ_REGISTER_ULONG(0x64) & TIM10LPEN_MASK)  >> TIM10LPEN_START_BIT)

#define WHEN_TIM10LPEN_HIGH() \
     if ( READ_TIM10LPEN() )


#define UNLESS_TIM10LPEN_HIGH() \
     if (! READ_TIM10LPEN() )


#define WAIT_TIM10LPEN_LOW() \
    while ( READ_TIM10LPEN() );


#define WAIT_TIM10LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM10LPEN() && (--___t___ > 0)); }


#define WAIT_TIM10LPEN_HIGH() \
    while (! READ_TIM10LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM9 clock enable during sleep mode 
    // 
#define TIM9LPEN_MASK 0x10000U
#define TIM9LPEN_OFFSET 16
#define TIM9LPEN_START_BIT 16
#define TIM9LPEN_WIDTH 1



typedef enum tim9lpen {
    TIM_9LPEN_0,
    TIM_9LPEN_1
} TIM_9LPEN_T ;
#define WRITE_TIM9LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ TIM9LPEN_MASK) | ((val << TIM9LPEN_START_BIT) & TIM9LPEN_MASK )); \
   } 

#define ENABLE_TIM9LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  TIM9LPEN_MASK ); \
   }

#define DISABLE_TIM9LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~TIM9LPEN_MASK ); \
   } 

#define READ_TIM9LPEN() \
   ((READ_REGISTER_ULONG(0x64) & TIM9LPEN_MASK)  >> TIM9LPEN_START_BIT)

#define WHEN_TIM9LPEN_HIGH() \
     if ( READ_TIM9LPEN() )


#define UNLESS_TIM9LPEN_HIGH() \
     if (! READ_TIM9LPEN() )


#define WAIT_TIM9LPEN_LOW() \
    while ( READ_TIM9LPEN() );


#define WAIT_TIM9LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM9LPEN() && (--___t___ > 0)); }


#define WAIT_TIM9LPEN_HIGH() \
    while (! READ_TIM9LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // System configuration controller clock enable during Sleep 
    // mode 
    // 
#define SYSCFGLPEN_MASK 0x4000U
#define SYSCFGLPEN_OFFSET 14
#define SYSCFGLPEN_START_BIT 14
#define SYSCFGLPEN_WIDTH 1



typedef enum syscfglpen {
    SYSCFGLPEN_0,
    SYSCFGLPEN_1
} SYSCFGLPEN_T ;
#define WRITE_SYSCFGLPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SYSCFGLPEN_MASK) | ((val << SYSCFGLPEN_START_BIT) & SYSCFGLPEN_MASK )); \
   } 

#define ENABLE_SYSCFGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SYSCFGLPEN_MASK ); \
   }

#define DISABLE_SYSCFGLPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SYSCFGLPEN_MASK ); \
   } 

#define READ_SYSCFGLPEN() \
   ((READ_REGISTER_ULONG(0x64) & SYSCFGLPEN_MASK)  >> SYSCFGLPEN_START_BIT)

#define WHEN_SYSCFGLPEN_HIGH() \
     if ( READ_SYSCFGLPEN() )


#define UNLESS_SYSCFGLPEN_HIGH() \
     if (! READ_SYSCFGLPEN() )


#define WAIT_SYSCFGLPEN_LOW() \
    while ( READ_SYSCFGLPEN() );


#define WAIT_SYSCFGLPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SYSCFGLPEN() && (--___t___ > 0)); }


#define WAIT_SYSCFGLPEN_HIGH() \
    while (! READ_SYSCFGLPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 4 clock enable during Sleep mode 
    // 
#define SPI4LPEN_MASK 0x2000U
#define SPI4LPEN_OFFSET 13
#define SPI4LPEN_START_BIT 13
#define SPI4LPEN_WIDTH 1



typedef enum spi4lpen {
    SPI_4LPEN_0,
    SPI_4LPEN_1
} SPI_4LPEN_T ;
#define WRITE_SPI4LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SPI4LPEN_MASK) | ((val << SPI4LPEN_START_BIT) & SPI4LPEN_MASK )); \
   } 

#define ENABLE_SPI4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SPI4LPEN_MASK ); \
   }

#define DISABLE_SPI4LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SPI4LPEN_MASK ); \
   } 

#define READ_SPI4LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SPI4LPEN_MASK)  >> SPI4LPEN_START_BIT)

#define WHEN_SPI4LPEN_HIGH() \
     if ( READ_SPI4LPEN() )


#define UNLESS_SPI4LPEN_HIGH() \
     if (! READ_SPI4LPEN() )


#define WAIT_SPI4LPEN_LOW() \
    while ( READ_SPI4LPEN() );


#define WAIT_SPI4LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI4LPEN() && (--___t___ > 0)); }


#define WAIT_SPI4LPEN_HIGH() \
    while (! READ_SPI4LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SPI 1 clock enable during Sleep mode 
    // 
#define SPI1LPEN_MASK 0x1000U
#define SPI1LPEN_OFFSET 12
#define SPI1LPEN_START_BIT 12
#define SPI1LPEN_WIDTH 1



typedef enum spi1lpen {
    SPI_1LPEN_0,
    SPI_1LPEN_1
} SPI_1LPEN_T ;
#define WRITE_SPI1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ SPI1LPEN_MASK) | ((val << SPI1LPEN_START_BIT) & SPI1LPEN_MASK )); \
   } 

#define ENABLE_SPI1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  SPI1LPEN_MASK ); \
   }

#define DISABLE_SPI1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~SPI1LPEN_MASK ); \
   } 

#define READ_SPI1LPEN() \
   ((READ_REGISTER_ULONG(0x64) & SPI1LPEN_MASK)  >> SPI1LPEN_START_BIT)

#define WHEN_SPI1LPEN_HIGH() \
     if ( READ_SPI1LPEN() )


#define UNLESS_SPI1LPEN_HIGH() \
     if (! READ_SPI1LPEN() )


#define WAIT_SPI1LPEN_LOW() \
    while ( READ_SPI1LPEN() );


#define WAIT_SPI1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI1LPEN() && (--___t___ > 0)); }


#define WAIT_SPI1LPEN_HIGH() \
    while (! READ_SPI1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC 3 clock enable during Sleep mode 
    // 
#define ADC3LPEN_MASK 0x400U
#define ADC3LPEN_OFFSET 10
#define ADC3LPEN_START_BIT 10
#define ADC3LPEN_WIDTH 1



typedef enum adc3lpen {
    ADC_3LPEN_0,
    ADC_3LPEN_1
} ADC_3LPEN_T ;
#define WRITE_ADC3LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ ADC3LPEN_MASK) | ((val << ADC3LPEN_START_BIT) & ADC3LPEN_MASK )); \
   } 

#define ENABLE_ADC3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  ADC3LPEN_MASK ); \
   }

#define DISABLE_ADC3LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~ADC3LPEN_MASK ); \
   } 

#define READ_ADC3LPEN() \
   ((READ_REGISTER_ULONG(0x64) & ADC3LPEN_MASK)  >> ADC3LPEN_START_BIT)

#define WHEN_ADC3LPEN_HIGH() \
     if ( READ_ADC3LPEN() )


#define UNLESS_ADC3LPEN_HIGH() \
     if (! READ_ADC3LPEN() )


#define WAIT_ADC3LPEN_LOW() \
    while ( READ_ADC3LPEN() );


#define WAIT_ADC3LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC3LPEN() && (--___t___ > 0)); }


#define WAIT_ADC3LPEN_HIGH() \
    while (! READ_ADC3LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC2 clock enable during Sleep mode 
    // 
#define ADC2LPEN_MASK 0x200U
#define ADC2LPEN_OFFSET 9
#define ADC2LPEN_START_BIT 9
#define ADC2LPEN_WIDTH 1



typedef enum adc2lpen {
    ADC_2LPEN_0,
    ADC_2LPEN_1
} ADC_2LPEN_T ;
#define WRITE_ADC2LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ ADC2LPEN_MASK) | ((val << ADC2LPEN_START_BIT) & ADC2LPEN_MASK )); \
   } 

#define ENABLE_ADC2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  ADC2LPEN_MASK ); \
   }

#define DISABLE_ADC2LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~ADC2LPEN_MASK ); \
   } 

#define READ_ADC2LPEN() \
   ((READ_REGISTER_ULONG(0x64) & ADC2LPEN_MASK)  >> ADC2LPEN_START_BIT)

#define WHEN_ADC2LPEN_HIGH() \
     if ( READ_ADC2LPEN() )


#define UNLESS_ADC2LPEN_HIGH() \
     if (! READ_ADC2LPEN() )


#define WAIT_ADC2LPEN_LOW() \
    while ( READ_ADC2LPEN() );


#define WAIT_ADC2LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC2LPEN() && (--___t___ > 0)); }


#define WAIT_ADC2LPEN_HIGH() \
    while (! READ_ADC2LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC1 clock enable during Sleep mode 
    // 
#define ADC1LPEN_MASK 0x100U
#define ADC1LPEN_OFFSET 8
#define ADC1LPEN_START_BIT 8
#define ADC1LPEN_WIDTH 1



typedef enum adc1lpen {
    ADC_1LPEN_0,
    ADC_1LPEN_1
} ADC_1LPEN_T ;
#define WRITE_ADC1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ ADC1LPEN_MASK) | ((val << ADC1LPEN_START_BIT) & ADC1LPEN_MASK )); \
   } 

#define ENABLE_ADC1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  ADC1LPEN_MASK ); \
   }

#define DISABLE_ADC1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~ADC1LPEN_MASK ); \
   } 

#define READ_ADC1LPEN() \
   ((READ_REGISTER_ULONG(0x64) & ADC1LPEN_MASK)  >> ADC1LPEN_START_BIT)

#define WHEN_ADC1LPEN_HIGH() \
     if ( READ_ADC1LPEN() )


#define UNLESS_ADC1LPEN_HIGH() \
     if (! READ_ADC1LPEN() )


#define WAIT_ADC1LPEN_LOW() \
    while ( READ_ADC1LPEN() );


#define WAIT_ADC1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC1LPEN() && (--___t___ > 0)); }


#define WAIT_ADC1LPEN_HIGH() \
    while (! READ_ADC1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART6 clock enable during Sleep mode 
    // 
#define USART6LPEN_MASK 0x20U
#define USART6LPEN_OFFSET 5
#define USART6LPEN_START_BIT 5
#define USART6LPEN_WIDTH 1



typedef enum usart6lpen {
    USART_6LPEN_0,
    USART_6LPEN_1
} USART_6LPEN_T ;
#define WRITE_USART6LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ USART6LPEN_MASK) | ((val << USART6LPEN_START_BIT) & USART6LPEN_MASK )); \
   } 

#define ENABLE_USART6LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  USART6LPEN_MASK ); \
   }

#define DISABLE_USART6LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~USART6LPEN_MASK ); \
   } 

#define READ_USART6LPEN() \
   ((READ_REGISTER_ULONG(0x64) & USART6LPEN_MASK)  >> USART6LPEN_START_BIT)

#define WHEN_USART6LPEN_HIGH() \
     if ( READ_USART6LPEN() )


#define UNLESS_USART6LPEN_HIGH() \
     if (! READ_USART6LPEN() )


#define WAIT_USART6LPEN_LOW() \
    while ( READ_USART6LPEN() );


#define WAIT_USART6LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART6LPEN() && (--___t___ > 0)); }


#define WAIT_USART6LPEN_HIGH() \
    while (! READ_USART6LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART1 clock enable during Sleep mode 
    // 
#define USART1LPEN_MASK 0x10U
#define USART1LPEN_OFFSET 4
#define USART1LPEN_START_BIT 4
#define USART1LPEN_WIDTH 1



typedef enum usart1lpen {
    USART_1LPEN_0,
    USART_1LPEN_1
} USART_1LPEN_T ;
#define WRITE_USART1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ USART1LPEN_MASK) | ((val << USART1LPEN_START_BIT) & USART1LPEN_MASK )); \
   } 

#define ENABLE_USART1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  USART1LPEN_MASK ); \
   }

#define DISABLE_USART1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~USART1LPEN_MASK ); \
   } 

#define READ_USART1LPEN() \
   ((READ_REGISTER_ULONG(0x64) & USART1LPEN_MASK)  >> USART1LPEN_START_BIT)

#define WHEN_USART1LPEN_HIGH() \
     if ( READ_USART1LPEN() )


#define UNLESS_USART1LPEN_HIGH() \
     if (! READ_USART1LPEN() )


#define WAIT_USART1LPEN_LOW() \
    while ( READ_USART1LPEN() );


#define WAIT_USART1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USART1LPEN() && (--___t___ > 0)); }


#define WAIT_USART1LPEN_HIGH() \
    while (! READ_USART1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM8 clock enable during Sleep mode 
    // 
#define TIM8LPEN_MASK 0x2U
#define TIM8LPEN_OFFSET 1
#define TIM8LPEN_START_BIT 1
#define TIM8LPEN_WIDTH 1



typedef enum tim8lpen {
    TIM_8LPEN_0,
    TIM_8LPEN_1
} TIM_8LPEN_T ;
#define WRITE_TIM8LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ TIM8LPEN_MASK) | ((val << TIM8LPEN_START_BIT) & TIM8LPEN_MASK )); \
   } 

#define ENABLE_TIM8LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  TIM8LPEN_MASK ); \
   }

#define DISABLE_TIM8LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~TIM8LPEN_MASK ); \
   } 

#define READ_TIM8LPEN() \
   ((READ_REGISTER_ULONG(0x64) & TIM8LPEN_MASK)  >> TIM8LPEN_START_BIT)

#define WHEN_TIM8LPEN_HIGH() \
     if ( READ_TIM8LPEN() )


#define UNLESS_TIM8LPEN_HIGH() \
     if (! READ_TIM8LPEN() )


#define WAIT_TIM8LPEN_LOW() \
    while ( READ_TIM8LPEN() );


#define WAIT_TIM8LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM8LPEN() && (--___t___ > 0)); }


#define WAIT_TIM8LPEN_HIGH() \
    while (! READ_TIM8LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Apb2lpenr
//
// Return the value of register APB_2LPENR
//
// Notes : Register APB2 peripheral clock enabled in low power mode register (APB2LPENR) at the offset 0x64, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM1 clock enable during Sleep mode 
    // 
#define TIM1LPEN_MASK 0x1U
#define TIM1LPEN_OFFSET 0
#define TIM1LPEN_START_BIT 0
#define TIM1LPEN_WIDTH 1



typedef enum tim1lpen {
    TIM_1LPEN_0,
    TIM_1LPEN_1
} TIM_1LPEN_T ;
#define WRITE_TIM1LPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ TIM1LPEN_MASK) | ((val << TIM1LPEN_START_BIT) & TIM1LPEN_MASK )); \
   } 

#define ENABLE_TIM1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  TIM1LPEN_MASK ); \
   }

#define DISABLE_TIM1LPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG(0x64, val & ~TIM1LPEN_MASK ); \
   } 

#define READ_TIM1LPEN() \
   ((READ_REGISTER_ULONG(0x64) & TIM1LPEN_MASK)  >> TIM1LPEN_START_BIT)

#define WHEN_TIM1LPEN_HIGH() \
     if ( READ_TIM1LPEN() )


#define UNLESS_TIM1LPEN_HIGH() \
     if (! READ_TIM1LPEN() )


#define WAIT_TIM1LPEN_LOW() \
    while ( READ_TIM1LPEN() );


#define WAIT_TIM1LPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIM1LPEN() && (--___t___ > 0)); }


#define WAIT_TIM1LPEN_HIGH() \
    while (! READ_TIM1LPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Bdcr at offset 0x70
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External low-speed oscillator enable 
    // 
#define LSEON_MASK 0x1U
#define LSEON_OFFSET 0
#define LSEON_START_BIT 0
#define LSEON_WIDTH 1


#define BDCR_REG 0x70

typedef enum lseon {
    LSEON_0,
    LSEON_1
} LSEON_T ;
#define WRITE_LSEON(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ LSEON_MASK) | ((val << LSEON_START_BIT) & LSEON_MASK )); \
   } 

#define ENABLE_LSEON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  LSEON_MASK ); \
   }

#define DISABLE_LSEON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~LSEON_MASK ); \
   } 

#define READ_LSEON() \
   ((READ_REGISTER_ULONG(0x70) & LSEON_MASK)  >> LSEON_START_BIT)

#define WHEN_LSEON_HIGH() \
     if ( READ_LSEON() )


#define UNLESS_LSEON_HIGH() \
     if (! READ_LSEON() )


#define WAIT_LSEON_LOW() \
    while ( READ_LSEON() );


#define WAIT_LSEON_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSEON() && (--___t___ > 0)); }


#define WAIT_LSEON_HIGH() \
    while (! READ_LSEON() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External low-speed oscillator ready 
    // 
#define LSERDY_MASK 0x2U
#define LSERDY_OFFSET 1
#define LSERDY_START_BIT 1
#define LSERDY_WIDTH 1



typedef enum lserdy {
    LSERDY_0,
    LSERDY_1
} LSERDY_T ;
#define WRITE_LSERDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ LSERDY_MASK) | ((val << LSERDY_START_BIT) & LSERDY_MASK )); \
   } 

#define ENABLE_LSERDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  LSERDY_MASK ); \
   }

#define DISABLE_LSERDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~LSERDY_MASK ); \
   } 

#define READ_LSERDY() \
   ((READ_REGISTER_ULONG(0x70) & LSERDY_MASK)  >> LSERDY_START_BIT)

#define WHEN_LSERDY_HIGH() \
     if ( READ_LSERDY() )


#define UNLESS_LSERDY_HIGH() \
     if (! READ_LSERDY() )


#define WAIT_LSERDY_LOW() \
    while ( READ_LSERDY() );


#define WAIT_LSERDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSERDY() && (--___t___ > 0)); }


#define WAIT_LSERDY_HIGH() \
    while (! READ_LSERDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External low-speed oscillator bypass 
    // 
#define LSEBYP_MASK 0x4U
#define LSEBYP_OFFSET 2
#define LSEBYP_START_BIT 2
#define LSEBYP_WIDTH 1



typedef enum lsebyp {
    LSEBYP_0,
    LSEBYP_1
} LSEBYP_T ;
#define WRITE_LSEBYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ LSEBYP_MASK) | ((val << LSEBYP_START_BIT) & LSEBYP_MASK )); \
   } 

#define ENABLE_LSEBYP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  LSEBYP_MASK ); \
   }

#define DISABLE_LSEBYP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~LSEBYP_MASK ); \
   } 

#define READ_LSEBYP() \
   ((READ_REGISTER_ULONG(0x70) & LSEBYP_MASK)  >> LSEBYP_START_BIT)

#define WHEN_LSEBYP_HIGH() \
     if ( READ_LSEBYP() )


#define UNLESS_LSEBYP_HIGH() \
     if (! READ_LSEBYP() )


#define WAIT_LSEBYP_LOW() \
    while ( READ_LSEBYP() );


#define WAIT_LSEBYP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSEBYP() && (--___t___ > 0)); }


#define WAIT_LSEBYP_HIGH() \
    while (! READ_LSEBYP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTC clock source selection 
    // 
#define RTCSEL0_MASK 0x100U
#define RTCSEL0_OFFSET 8
#define RTCSEL0_START_BIT 8
#define RTCSEL0_WIDTH 1



typedef enum rtcsel0 {
    RTCSEL_0_0,
    RTCSEL_0_1
} RTCSEL_0_T ;
#define WRITE_RTCSEL0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ RTCSEL0_MASK) | ((val << RTCSEL0_START_BIT) & RTCSEL0_MASK )); \
   } 

#define ENABLE_RTCSEL0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  RTCSEL0_MASK ); \
   }

#define DISABLE_RTCSEL0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~RTCSEL0_MASK ); \
   } 

#define READ_RTCSEL0() \
   ((READ_REGISTER_ULONG(0x70) & RTCSEL0_MASK)  >> RTCSEL0_START_BIT)

#define WHEN_RTCSEL0_HIGH() \
     if ( READ_RTCSEL0() )


#define UNLESS_RTCSEL0_HIGH() \
     if (! READ_RTCSEL0() )


#define WAIT_RTCSEL0_LOW() \
    while ( READ_RTCSEL0() );


#define WAIT_RTCSEL0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTCSEL0() && (--___t___ > 0)); }


#define WAIT_RTCSEL0_HIGH() \
    while (! READ_RTCSEL0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTC clock source selection 
    // 
#define RTCSEL1_MASK 0x200U
#define RTCSEL1_OFFSET 9
#define RTCSEL1_START_BIT 9
#define RTCSEL1_WIDTH 1



typedef enum rtcsel1 {
    RTCSEL_1_0,
    RTCSEL_1_1
} RTCSEL_1_T ;
#define WRITE_RTCSEL1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ RTCSEL1_MASK) | ((val << RTCSEL1_START_BIT) & RTCSEL1_MASK )); \
   } 

#define ENABLE_RTCSEL1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  RTCSEL1_MASK ); \
   }

#define DISABLE_RTCSEL1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~RTCSEL1_MASK ); \
   } 

#define READ_RTCSEL1() \
   ((READ_REGISTER_ULONG(0x70) & RTCSEL1_MASK)  >> RTCSEL1_START_BIT)

#define WHEN_RTCSEL1_HIGH() \
     if ( READ_RTCSEL1() )


#define UNLESS_RTCSEL1_HIGH() \
     if (! READ_RTCSEL1() )


#define WAIT_RTCSEL1_LOW() \
    while ( READ_RTCSEL1() );


#define WAIT_RTCSEL1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTCSEL1() && (--___t___ > 0)); }


#define WAIT_RTCSEL1_HIGH() \
    while (! READ_RTCSEL1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTC clock enable 
    // 
#define RTCEN_MASK 0x8000U
#define RTCEN_OFFSET 15
#define RTCEN_START_BIT 15
#define RTCEN_WIDTH 1



typedef enum rtcen {
    RTCEN_0,
    RTCEN_1
} RTCEN_T ;
#define WRITE_RTCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ RTCEN_MASK) | ((val << RTCEN_START_BIT) & RTCEN_MASK )); \
   } 

#define ENABLE_RTCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  RTCEN_MASK ); \
   }

#define DISABLE_RTCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~RTCEN_MASK ); \
   } 

#define READ_RTCEN() \
   ((READ_REGISTER_ULONG(0x70) & RTCEN_MASK)  >> RTCEN_START_BIT)

#define WHEN_RTCEN_HIGH() \
     if ( READ_RTCEN() )


#define UNLESS_RTCEN_HIGH() \
     if (! READ_RTCEN() )


#define WAIT_RTCEN_LOW() \
    while ( READ_RTCEN() );


#define WAIT_RTCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTCEN() && (--___t___ > 0)); }


#define WAIT_RTCEN_HIGH() \
    while (! READ_RTCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bdcr
//
// Return the value of register BDCR
//
// Notes : Register Backup domain control register (BDCR) at the offset 0x70, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Backup domain software reset 
    // 
#define BDRST_MASK 0x10000U
#define BDRST_OFFSET 16
#define BDRST_START_BIT 16
#define BDRST_WIDTH 1



typedef enum bdrst {
    BDRST_0,
    BDRST_1
} BDRST_T ;
#define WRITE_BDRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ BDRST_MASK) | ((val << BDRST_START_BIT) & BDRST_MASK )); \
   } 

#define ENABLE_BDRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  BDRST_MASK ); \
   }

#define DISABLE_BDRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG(0x70, val & ~BDRST_MASK ); \
   } 

#define READ_BDRST() \
   ((READ_REGISTER_ULONG(0x70) & BDRST_MASK)  >> BDRST_START_BIT)

#define WHEN_BDRST_HIGH() \
     if ( READ_BDRST() )


#define UNLESS_BDRST_HIGH() \
     if (! READ_BDRST() )


#define WAIT_BDRST_LOW() \
    while ( READ_BDRST() );


#define WAIT_BDRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BDRST() && (--___t___ > 0)); }


#define WAIT_BDRST_HIGH() \
    while (! READ_BDRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr
//
// Return the value of register CSR
//
// Notes : Register Csr at offset 0x74
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : LSION
//
// Return the value of register Csr
//
// Notes : Internal low-speed oscillator enable 
//        (CSR) at the offset 0x74, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LSION(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ LSION_MASK) | ((val << LSION_START_BIT) & LSION_MASK )); \
   } 

#define ENABLE_LSION() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  LSION_MASK ); \
   }

#define DISABLE_LSION() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~LSION_MASK ); \
   } 

#define READ_LSION() \
   ((READ_REGISTER_ULONG(0x74) & LSION_MASK)  >> LSION_START_BIT)

#define WHEN_LSION_HIGH() \
     if ( READ_LSION() )


#define UNLESS_LSION_HIGH() \
     if (! READ_LSION() )


#define WAIT_LSION_LOW() \
    while ( READ_LSION() );


#define WAIT_LSION_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSION() && (--___t___ > 0)); }


#define WAIT_LSION_HIGH() \
    while (! READ_LSION() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LSIRDY
//
// Return the value of register Csr
//
// Notes : Internal low-speed oscillator ready 
//        (CSR) at the offset 0x74, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LSIRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ LSIRDY_MASK) | ((val << LSIRDY_START_BIT) & LSIRDY_MASK )); \
   } 

#define ENABLE_LSIRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  LSIRDY_MASK ); \
   }

#define DISABLE_LSIRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~LSIRDY_MASK ); \
   } 

#define READ_LSIRDY() \
   ((READ_REGISTER_ULONG(0x74) & LSIRDY_MASK)  >> LSIRDY_START_BIT)

#define WHEN_LSIRDY_HIGH() \
     if ( READ_LSIRDY() )


#define UNLESS_LSIRDY_HIGH() \
     if (! READ_LSIRDY() )


#define WAIT_LSIRDY_LOW() \
    while ( READ_LSIRDY() );


#define WAIT_LSIRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LSIRDY() && (--___t___ > 0)); }


#define WAIT_LSIRDY_HIGH() \
    while (! READ_LSIRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RMVF
//
// Return the value of register Csr
//
// Notes : Remove reset flag 
//        (CSR) at the offset 0x74, Bits 24:24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RMVF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ RMVF_MASK) | ((val << RMVF_START_BIT) & RMVF_MASK )); \
   } 

#define ENABLE_RMVF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  RMVF_MASK ); \
   }

#define DISABLE_RMVF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~RMVF_MASK ); \
   } 

#define READ_RMVF() \
   ((READ_REGISTER_ULONG(0x74) & RMVF_MASK)  >> RMVF_START_BIT)

#define WHEN_RMVF_HIGH() \
     if ( READ_RMVF() )


#define UNLESS_RMVF_HIGH() \
     if (! READ_RMVF() )


#define WAIT_RMVF_LOW() \
    while ( READ_RMVF() );


#define WAIT_RMVF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RMVF() && (--___t___ > 0)); }


#define WAIT_RMVF_HIGH() \
    while (! READ_RMVF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BORRSTF
//
// Return the value of register Csr
//
// Notes : BOR reset flag 
//        (CSR) at the offset 0x74, Bits 25:25
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BORRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ BORRSTF_MASK) | ((val << BORRSTF_START_BIT) & BORRSTF_MASK )); \
   } 

#define ENABLE_BORRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  BORRSTF_MASK ); \
   }

#define DISABLE_BORRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~BORRSTF_MASK ); \
   } 

#define READ_BORRSTF() \
   ((READ_REGISTER_ULONG(0x74) & BORRSTF_MASK)  >> BORRSTF_START_BIT)

#define WHEN_BORRSTF_HIGH() \
     if ( READ_BORRSTF() )


#define UNLESS_BORRSTF_HIGH() \
     if (! READ_BORRSTF() )


#define WAIT_BORRSTF_LOW() \
    while ( READ_BORRSTF() );


#define WAIT_BORRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BORRSTF() && (--___t___ > 0)); }


#define WAIT_BORRSTF_HIGH() \
    while (! READ_BORRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PADRSTF
//
// Return the value of register Csr
//
// Notes : PIN reset flag 
//        (CSR) at the offset 0x74, Bits 26:26
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PADRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ PADRSTF_MASK) | ((val << PADRSTF_START_BIT) & PADRSTF_MASK )); \
   } 

#define ENABLE_PADRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  PADRSTF_MASK ); \
   }

#define DISABLE_PADRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~PADRSTF_MASK ); \
   } 

#define READ_PADRSTF() \
   ((READ_REGISTER_ULONG(0x74) & PADRSTF_MASK)  >> PADRSTF_START_BIT)

#define WHEN_PADRSTF_HIGH() \
     if ( READ_PADRSTF() )


#define UNLESS_PADRSTF_HIGH() \
     if (! READ_PADRSTF() )


#define WAIT_PADRSTF_LOW() \
    while ( READ_PADRSTF() );


#define WAIT_PADRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PADRSTF() && (--___t___ > 0)); }


#define WAIT_PADRSTF_HIGH() \
    while (! READ_PADRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PORRSTF
//
// Return the value of register Csr
//
// Notes : POR/PDR reset flag 
//        (CSR) at the offset 0x74, Bits 27:27
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PORRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ PORRSTF_MASK) | ((val << PORRSTF_START_BIT) & PORRSTF_MASK )); \
   } 

#define ENABLE_PORRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  PORRSTF_MASK ); \
   }

#define DISABLE_PORRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~PORRSTF_MASK ); \
   } 

#define READ_PORRSTF() \
   ((READ_REGISTER_ULONG(0x74) & PORRSTF_MASK)  >> PORRSTF_START_BIT)

#define WHEN_PORRSTF_HIGH() \
     if ( READ_PORRSTF() )


#define UNLESS_PORRSTF_HIGH() \
     if (! READ_PORRSTF() )


#define WAIT_PORRSTF_LOW() \
    while ( READ_PORRSTF() );


#define WAIT_PORRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PORRSTF() && (--___t___ > 0)); }


#define WAIT_PORRSTF_HIGH() \
    while (! READ_PORRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SFTRSTF
//
// Return the value of register Csr
//
// Notes : Software reset flag 
//        (CSR) at the offset 0x74, Bits 28:28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SFTRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ SFTRSTF_MASK) | ((val << SFTRSTF_START_BIT) & SFTRSTF_MASK )); \
   } 

#define ENABLE_SFTRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  SFTRSTF_MASK ); \
   }

#define DISABLE_SFTRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~SFTRSTF_MASK ); \
   } 

#define READ_SFTRSTF() \
   ((READ_REGISTER_ULONG(0x74) & SFTRSTF_MASK)  >> SFTRSTF_START_BIT)

#define WHEN_SFTRSTF_HIGH() \
     if ( READ_SFTRSTF() )


#define UNLESS_SFTRSTF_HIGH() \
     if (! READ_SFTRSTF() )


#define WAIT_SFTRSTF_LOW() \
    while ( READ_SFTRSTF() );


#define WAIT_SFTRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SFTRSTF() && (--___t___ > 0)); }


#define WAIT_SFTRSTF_HIGH() \
    while (! READ_SFTRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WDGRSTF
//
// Return the value of register Csr
//
// Notes : Independent watchdog reset flag 
//        (CSR) at the offset 0x74, Bits 29:29
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WDGRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ WDGRSTF_MASK) | ((val << WDGRSTF_START_BIT) & WDGRSTF_MASK )); \
   } 

#define ENABLE_WDGRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  WDGRSTF_MASK ); \
   }

#define DISABLE_WDGRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~WDGRSTF_MASK ); \
   } 

#define READ_WDGRSTF() \
   ((READ_REGISTER_ULONG(0x74) & WDGRSTF_MASK)  >> WDGRSTF_START_BIT)

#define WHEN_WDGRSTF_HIGH() \
     if ( READ_WDGRSTF() )


#define UNLESS_WDGRSTF_HIGH() \
     if (! READ_WDGRSTF() )


#define WAIT_WDGRSTF_LOW() \
    while ( READ_WDGRSTF() );


#define WAIT_WDGRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDGRSTF() && (--___t___ > 0)); }


#define WAIT_WDGRSTF_HIGH() \
    while (! READ_WDGRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WWDGRSTF
//
// Return the value of register Csr
//
// Notes : Window watchdog reset flag 
//        (CSR) at the offset 0x74, Bits 30:30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WWDGRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ WWDGRSTF_MASK) | ((val << WWDGRSTF_START_BIT) & WWDGRSTF_MASK )); \
   } 

#define ENABLE_WWDGRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  WWDGRSTF_MASK ); \
   }

#define DISABLE_WWDGRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~WWDGRSTF_MASK ); \
   } 

#define READ_WWDGRSTF() \
   ((READ_REGISTER_ULONG(0x74) & WWDGRSTF_MASK)  >> WWDGRSTF_START_BIT)

#define WHEN_WWDGRSTF_HIGH() \
     if ( READ_WWDGRSTF() )


#define UNLESS_WWDGRSTF_HIGH() \
     if (! READ_WWDGRSTF() )


#define WAIT_WWDGRSTF_LOW() \
    while ( READ_WWDGRSTF() );


#define WAIT_WWDGRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WWDGRSTF() && (--___t___ > 0)); }


#define WAIT_WWDGRSTF_HIGH() \
    while (! READ_WWDGRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LPWRRSTF
//
// Return the value of register Csr
//
// Notes : Low-power reset flag 
//        (CSR) at the offset 0x74, Bits 31:31
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LPWRRSTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ LPWRRSTF_MASK) | ((val << LPWRRSTF_START_BIT) & LPWRRSTF_MASK )); \
   } 

#define ENABLE_LPWRRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  LPWRRSTF_MASK ); \
   }

#define DISABLE_LPWRRSTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG(0x74, val & ~LPWRRSTF_MASK ); \
   } 

#define READ_LPWRRSTF() \
   ((READ_REGISTER_ULONG(0x74) & LPWRRSTF_MASK)  >> LPWRRSTF_START_BIT)

#define WHEN_LPWRRSTF_HIGH() \
     if ( READ_LPWRRSTF() )


#define UNLESS_LPWRRSTF_HIGH() \
     if (! READ_LPWRRSTF() )


#define WAIT_LPWRRSTF_LOW() \
    while ( READ_LPWRRSTF() );


#define WAIT_LPWRRSTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPWRRSTF() && (--___t___ > 0)); }


#define WAIT_LPWRRSTF_HIGH() \
    while (! READ_LPWRRSTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sscgr
//
// Return the value of register SSCGR
//
// Notes : Register Sscgr at offset 0x80
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SSCGR( y) \
     WRITE_REGISTER_ULONG( 0x80 , y)

#define SET_BITS_SSCGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  mask ); \
   }

#define CLEAR_BITS_SSCGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val & ~mask ); \
   }

#define READ_REGISTER_SSCGR() \
     READ_REGISTER_ULONG(0x80)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sscgr
//
// Return the value of register SSCGR
//
// Notes : Register spread spectrum clock generation register (SSCGR) at the offset 0x80, Bits 0:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Modulation period 
    // 
#define MODPER_MASK 0x1FFFU
#define MODPER_OFFSET 12
#define MODPER_START_BIT 0
#define MODPER_WIDTH 13


#define SSCGR_REG 0x80

typedef enum modper {
    MODPER_0,
    MODPER_1
} MODPER_T ;
#define READ_MODPER() \
   ((READ_REGISTER_ULONG(0x80) & MODPER_MASK)  >> MODPER_START_BIT)

#define WRITE_MODPER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ MODPER_MASK) | ((val << MODPER_START_BIT) & MODPER_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sscgr
//
// Return the value of register SSCGR
//
// Notes : Register spread spectrum clock generation register (SSCGR) at the offset 0x80, Bits 13:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incrementation step 
    // 
#define INCSTEP_MASK 0xFFFE000U
#define INCSTEP_OFFSET 27
#define INCSTEP_START_BIT 13
#define INCSTEP_WIDTH 15



typedef enum incstep {
    INCSTEP_0,
    INCSTEP_1
} INCSTEP_T ;
#define READ_INCSTEP() \
   ((READ_REGISTER_ULONG(0x80) & INCSTEP_MASK)  >> INCSTEP_START_BIT)

#define WRITE_INCSTEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ INCSTEP_MASK) | ((val << INCSTEP_START_BIT) & INCSTEP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sscgr
//
// Return the value of register SSCGR
//
// Notes : Register spread spectrum clock generation register (SSCGR) at the offset 0x80, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Spread Select 
    // 
#define SPREADSEL_MASK 0x40000000U
#define SPREADSEL_OFFSET 30
#define SPREADSEL_START_BIT 30
#define SPREADSEL_WIDTH 1



typedef enum spreadsel {
    SPREADSEL_0,
    SPREADSEL_1
} SPREADSEL_T ;
#define WRITE_SPREADSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ SPREADSEL_MASK) | ((val << SPREADSEL_START_BIT) & SPREADSEL_MASK )); \
   } 

#define ENABLE_SPREADSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  SPREADSEL_MASK ); \
   }

#define DISABLE_SPREADSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG(0x80, val & ~SPREADSEL_MASK ); \
   } 

#define READ_SPREADSEL() \
   ((READ_REGISTER_ULONG(0x80) & SPREADSEL_MASK)  >> SPREADSEL_START_BIT)

#define WHEN_SPREADSEL_HIGH() \
     if ( READ_SPREADSEL() )


#define UNLESS_SPREADSEL_HIGH() \
     if (! READ_SPREADSEL() )


#define WAIT_SPREADSEL_LOW() \
    while ( READ_SPREADSEL() );


#define WAIT_SPREADSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPREADSEL() && (--___t___ > 0)); }


#define WAIT_SPREADSEL_HIGH() \
    while (! READ_SPREADSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sscgr
//
// Return the value of register SSCGR
//
// Notes : Register spread spectrum clock generation register (SSCGR) at the offset 0x80, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Spread spectrum modulation enable 
    // 
#define SSCGEN_MASK 0x80000000U
#define SSCGEN_OFFSET 31
#define SSCGEN_START_BIT 31
#define SSCGEN_WIDTH 1



typedef enum sscgen {
    SSCGEN_0,
    SSCGEN_1
} SSCGEN_T ;
#define WRITE_SSCGEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ SSCGEN_MASK) | ((val << SSCGEN_START_BIT) & SSCGEN_MASK )); \
   } 

#define ENABLE_SSCGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  SSCGEN_MASK ); \
   }

#define DISABLE_SSCGEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG(0x80, val & ~SSCGEN_MASK ); \
   } 

#define READ_SSCGEN() \
   ((READ_REGISTER_ULONG(0x80) & SSCGEN_MASK)  >> SSCGEN_START_BIT)

#define WHEN_SSCGEN_HIGH() \
     if ( READ_SSCGEN() )


#define UNLESS_SSCGEN_HIGH() \
     if (! READ_SSCGEN() )


#define WAIT_SSCGEN_LOW() \
    while ( READ_SSCGEN() );


#define WAIT_SSCGEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SSCGEN() && (--___t___ > 0)); }


#define WAIT_SSCGEN_HIGH() \
    while (! READ_SSCGEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Plli2scfgr
//
// Return the value of register PLLI2SCFGR
//
// Notes : Register Plli2scfgr at offset 0x84
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PLLI_2SCFGR( y) \
     WRITE_REGISTER_ULONG( 0x84 , y)

#define SET_BITS_PLLI_2SCFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  mask ); \
   }

#define CLEAR_BITS_PLLI_2SCFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val & ~mask ); \
   }

#define READ_REGISTER_PLLI_2SCFGR() \
     READ_REGISTER_ULONG(0x84)

/////////////////////////////////////////////////////////////////////////
//
// Function : Plli2scfgr
//
// Return the value of register PLLI_2SCFGR
//
// Notes : Register PLLI2S configuration register (PLLI2SCFGR) at the offset 0x84, Bits 6:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S multiplication factor for VCO 
    // 
#define PLLI2SN_MASK 0x7FC0U
#define PLLI2SN_OFFSET 14
#define PLLI2SN_START_BIT 6
#define PLLI2SN_WIDTH 9


#define PLLI_2SCFGR_REG 0x84

typedef enum plli2sn {
    PLLI_2SN_0,
    PLLI_2SN_1
} PLLI_2SN_T ;
#define READ_PLLI2SN() \
   ((READ_REGISTER_ULONG(0x84) & PLLI2SN_MASK)  >> PLLI2SN_START_BIT)

#define WRITE_PLLI2SN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ PLLI2SN_MASK) | ((val << PLLI2SN_START_BIT) & PLLI2SN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Plli2scfgr
//
// Return the value of register PLLI_2SCFGR
//
// Notes : Register PLLI2S configuration register (PLLI2SCFGR) at the offset 0x84, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S division factor for SAI1 clock 
    // 
#define PLLI2SQ_MASK 0xF000000U
#define PLLI2SQ_OFFSET 27
#define PLLI2SQ_START_BIT 24
#define PLLI2SQ_WIDTH 4



typedef enum plli2sq {
    PLLI_2SQ_0,
    PLLI_2SQ_1
} PLLI_2SQ_T ;
#define READ_PLLI2SQ() \
   ((READ_REGISTER_ULONG(0x84) & PLLI2SQ_MASK)  >> PLLI2SQ_START_BIT)

#define WRITE_PLLI2SQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ PLLI2SQ_MASK) | ((val << PLLI2SQ_START_BIT) & PLLI2SQ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Plli2scfgr
//
// Return the value of register PLLI_2SCFGR
//
// Notes : Register PLLI2S configuration register (PLLI2SCFGR) at the offset 0x84, Bits 28:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S division factor for I2S clocks 
    // 
#define PLLI2SR_MASK 0x70000000U
#define PLLI2SR_OFFSET 30
#define PLLI2SR_START_BIT 28
#define PLLI2SR_WIDTH 3



typedef enum plli2sr {
    PLLI_2SR_0,
    PLLI_2SR_1
} PLLI_2SR_T ;
#define READ_PLLI2SR() \
   ((READ_REGISTER_ULONG(0x84) & PLLI2SR_MASK)  >> PLLI2SR_START_BIT)

#define WRITE_PLLI2SR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ PLLI2SR_MASK) | ((val << PLLI2SR_START_BIT) & PLLI2SR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pllsaicfgr
//
// Return the value of register PLLSAICFGR
//
// Notes : Register Pllsaicfgr at offset 0x88
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PLLSAICFGR( y) \
     WRITE_REGISTER_ULONG( 0x88 , y)

#define SET_BITS_PLLSAICFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val |  mask ); \
   }

#define CLEAR_BITS_PLLSAICFGR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val & ~mask ); \
   }

#define READ_REGISTER_PLLSAICFGR() \
     READ_REGISTER_ULONG(0x88)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pllsaicfgr
//
// Return the value of register PLLSAICFGR
//
// Notes : Register PLL configuration register (PLLSAICFGR) at the offset 0x88, Bits 28:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI division factor for LCD clock 
    // 
#define PLLSAIR_MASK 0x70000000U
#define PLLSAIR_OFFSET 30
#define PLLSAIR_START_BIT 28
#define PLLSAIR_WIDTH 3


#define PLLSAICFGR_REG 0x88

typedef enum pllsair {
    PLLSAIR_0,
    PLLSAIR_1
} PLLSAIR_T ;
#define READ_PLLSAIR() \
   ((READ_REGISTER_ULONG(0x88) & PLLSAIR_MASK)  >> PLLSAIR_START_BIT)

#define WRITE_PLLSAIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ PLLSAIR_MASK) | ((val << PLLSAIR_START_BIT) & PLLSAIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pllsaicfgr
//
// Return the value of register PLLSAICFGR
//
// Notes : Register PLL configuration register (PLLSAICFGR) at the offset 0x88, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI division factor for SAI clock 
    // 
#define PLLSAIQ_MASK 0xF000000U
#define PLLSAIQ_OFFSET 27
#define PLLSAIQ_START_BIT 24
#define PLLSAIQ_WIDTH 4



typedef enum pllsaiq {
    PLLSAIQ_0,
    PLLSAIQ_1
} PLLSAIQ_T ;
#define READ_PLLSAIQ() \
   ((READ_REGISTER_ULONG(0x88) & PLLSAIQ_MASK)  >> PLLSAIQ_START_BIT)

#define WRITE_PLLSAIQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ PLLSAIQ_MASK) | ((val << PLLSAIQ_START_BIT) & PLLSAIQ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pllsaicfgr
//
// Return the value of register PLLSAICFGR
//
// Notes : Register PLL configuration register (PLLSAICFGR) at the offset 0x88, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI division factor for 48MHz clock 
    // 
#define PLLSAIP_MASK 0x30000U
#define PLLSAIP_OFFSET 17
#define PLLSAIP_START_BIT 16
#define PLLSAIP_WIDTH 2



typedef enum pllsaip {
    PLLSAIP_0,
    PLLSAIP_1
} PLLSAIP_T ;
#define READ_PLLSAIP() \
   ((READ_REGISTER_ULONG(0x88) & PLLSAIP_MASK)  >> PLLSAIP_START_BIT)

#define WRITE_PLLSAIP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ PLLSAIP_MASK) | ((val << PLLSAIP_START_BIT) & PLLSAIP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pllsaicfgr
//
// Return the value of register PLLSAICFGR
//
// Notes : Register PLL configuration register (PLLSAICFGR) at the offset 0x88, Bits 6:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI division factor for VCO 
    // 
#define PLLSAIN_MASK 0x7FC0U
#define PLLSAIN_OFFSET 14
#define PLLSAIN_START_BIT 6
#define PLLSAIN_WIDTH 9



typedef enum pllsain {
    PLLSAIN_0,
    PLLSAIN_1
} PLLSAIN_T ;
#define READ_PLLSAIN() \
   ((READ_REGISTER_ULONG(0x88) & PLLSAIN_MASK)  >> PLLSAIN_START_BIT)

#define WRITE_PLLSAIN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ PLLSAIN_MASK) | ((val << PLLSAIN_START_BIT) & PLLSAIN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR1
//
// Notes : Register Dkcfgr1 at offset 0x8C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DKCFGR_1( y) \
     WRITE_REGISTER_ULONG( 0x8C , y)

#define SET_BITS_DKCFGR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val |  mask ); \
   }

#define CLEAR_BITS_DKCFGR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val & ~mask ); \
   }

#define READ_REGISTER_DKCFGR_1() \
     READ_REGISTER_ULONG(0x8C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR_1
//
// Notes : Register dedicated clocks configuration register (DKCFGR1) at the offset 0x8C, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timers clocks prescalers selection 
    // 
#define TIMPRE_MASK 0x1000000U
#define TIMPRE_OFFSET 24
#define TIMPRE_START_BIT 24
#define TIMPRE_WIDTH 1


#define DKCFGR_1_REG 0x8C

typedef enum timpre {
    TIMPRE_0,
    TIMPRE_1
} TIMPRE_T ;
#define WRITE_TIMPRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ TIMPRE_MASK) | ((val << TIMPRE_START_BIT) & TIMPRE_MASK )); \
   } 

#define ENABLE_TIMPRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val |  TIMPRE_MASK ); \
   }

#define DISABLE_TIMPRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG(0x8C, val & ~TIMPRE_MASK ); \
   } 

#define READ_TIMPRE() \
   ((READ_REGISTER_ULONG(0x8C) & TIMPRE_MASK)  >> TIMPRE_START_BIT)

#define WHEN_TIMPRE_HIGH() \
     if ( READ_TIMPRE() )


#define UNLESS_TIMPRE_HIGH() \
     if (! READ_TIMPRE() )


#define WAIT_TIMPRE_LOW() \
    while ( READ_TIMPRE() );


#define WAIT_TIMPRE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIMPRE() && (--___t___ > 0)); }


#define WAIT_TIMPRE_HIGH() \
    while (! READ_TIMPRE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR_1
//
// Notes : Register dedicated clocks configuration register (DKCFGR1) at the offset 0x8C, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI2 clock source selection 
    // 
#define SAI2SEL_MASK 0xC00000U
#define SAI2SEL_OFFSET 23
#define SAI2SEL_START_BIT 22
#define SAI2SEL_WIDTH 2



typedef enum sai2sel {
    SAI_2SEL_0,
    SAI_2SEL_1
} SAI_2SEL_T ;
#define READ_SAI2SEL() \
   ((READ_REGISTER_ULONG(0x8C) & SAI2SEL_MASK)  >> SAI2SEL_START_BIT)

#define WRITE_SAI2SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ SAI2SEL_MASK) | ((val << SAI2SEL_START_BIT) & SAI2SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR_1
//
// Notes : Register dedicated clocks configuration register (DKCFGR1) at the offset 0x8C, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SAI1 clock source selection 
    // 
#define SAI1SEL_MASK 0x300000U
#define SAI1SEL_OFFSET 21
#define SAI1SEL_START_BIT 20
#define SAI1SEL_WIDTH 2



typedef enum sai1sel {
    SAI_1SEL_0,
    SAI_1SEL_1
} SAI_1SEL_T ;
#define READ_SAI1SEL() \
   ((READ_REGISTER_ULONG(0x8C) & SAI1SEL_MASK)  >> SAI1SEL_START_BIT)

#define WRITE_SAI1SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ SAI1SEL_MASK) | ((val << SAI1SEL_START_BIT) & SAI1SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR_1
//
// Notes : Register dedicated clocks configuration register (DKCFGR1) at the offset 0x8C, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // division factor for LCD_CLK 
    // 
#define PLLSAIDIVR_MASK 0x30000U
#define PLLSAIDIVR_OFFSET 17
#define PLLSAIDIVR_START_BIT 16
#define PLLSAIDIVR_WIDTH 2



typedef enum pllsaidivr {
    PLLSAIDIVR_0,
    PLLSAIDIVR_1
} PLLSAIDIVR_T ;
#define READ_PLLSAIDIVR() \
   ((READ_REGISTER_ULONG(0x8C) & PLLSAIDIVR_MASK)  >> PLLSAIDIVR_START_BIT)

#define WRITE_PLLSAIDIVR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ PLLSAIDIVR_MASK) | ((val << PLLSAIDIVR_START_BIT) & PLLSAIDIVR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR_1
//
// Notes : Register dedicated clocks configuration register (DKCFGR1) at the offset 0x8C, Bits 8:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLSAI division factor for SAI1 clock 
    // 
#define PLLSAIDIVQ_MASK 0x1F00U
#define PLLSAIDIVQ_OFFSET 12
#define PLLSAIDIVQ_START_BIT 8
#define PLLSAIDIVQ_WIDTH 5



typedef enum pllsaidivq {
    PLLSAIDIVQ_0,
    PLLSAIDIVQ_1
} PLLSAIDIVQ_T ;
#define READ_PLLSAIDIVQ() \
   ((READ_REGISTER_ULONG(0x8C) & PLLSAIDIVQ_MASK)  >> PLLSAIDIVQ_START_BIT)

#define WRITE_PLLSAIDIVQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ PLLSAIDIVQ_MASK) | ((val << PLLSAIDIVQ_START_BIT) & PLLSAIDIVQ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr1
//
// Return the value of register DKCFGR_1
//
// Notes : Register dedicated clocks configuration register (DKCFGR1) at the offset 0x8C, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PLLI2S division factor for SAI1 clock 
    // 
#define PLLI2SDIV_MASK 0x1FU
#define PLLI2SDIV_OFFSET 4
#define PLLI2SDIV_START_BIT 0
#define PLLI2SDIV_WIDTH 5



typedef enum plli2sdiv {
    PLLI_2SDIV_0,
    PLLI_2SDIV_1
} PLLI_2SDIV_T ;
#define READ_PLLI2SDIV() \
   ((READ_REGISTER_ULONG(0x8C) & PLLI2SDIV_MASK)  >> PLLI2SDIV_START_BIT)

#define WRITE_PLLI2SDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ PLLI2SDIV_MASK) | ((val << PLLI2SDIV_START_BIT) & PLLI2SDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR2
//
// Notes : Register Dkcfgr2 at offset 0x90
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DKCFGR_2( y) \
     WRITE_REGISTER_ULONG( 0x90 , y)

#define SET_BITS_DKCFGR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val |  mask ); \
   }

#define CLEAR_BITS_DKCFGR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val & ~mask ); \
   }

#define READ_REGISTER_DKCFGR_2() \
     READ_REGISTER_ULONG(0x90)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDMMC clock source selection 
    // 
#define SDMMCSEL_MASK 0x10000000U
#define SDMMCSEL_OFFSET 28
#define SDMMCSEL_START_BIT 28
#define SDMMCSEL_WIDTH 1


#define DKCFGR_2_REG 0x90

typedef enum sdmmcsel {
    SDMMCSEL_0,
    SDMMCSEL_1
} SDMMCSEL_T ;
#define WRITE_SDMMCSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ SDMMCSEL_MASK) | ((val << SDMMCSEL_START_BIT) & SDMMCSEL_MASK )); \
   } 

#define ENABLE_SDMMCSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val |  SDMMCSEL_MASK ); \
   }

#define DISABLE_SDMMCSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG(0x90, val & ~SDMMCSEL_MASK ); \
   } 

#define READ_SDMMCSEL() \
   ((READ_REGISTER_ULONG(0x90) & SDMMCSEL_MASK)  >> SDMMCSEL_START_BIT)

#define WHEN_SDMMCSEL_HIGH() \
     if ( READ_SDMMCSEL() )


#define UNLESS_SDMMCSEL_HIGH() \
     if (! READ_SDMMCSEL() )


#define WAIT_SDMMCSEL_LOW() \
    while ( READ_SDMMCSEL() );


#define WAIT_SDMMCSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDMMCSEL() && (--___t___ > 0)); }


#define WAIT_SDMMCSEL_HIGH() \
    while (! READ_SDMMCSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MHz clock source selection 
    // 
#define CK48MSEL_MASK 0x8000000U
#define CK48MSEL_OFFSET 27
#define CK48MSEL_START_BIT 27
#define CK48MSEL_WIDTH 1



typedef enum ck48msel {
    CK_4_8MSEL_0,
    CK_4_8MSEL_1
} CK_4_8MSEL_T ;
#define WRITE_CK48MSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ CK48MSEL_MASK) | ((val << CK48MSEL_START_BIT) & CK48MSEL_MASK )); \
   } 

#define ENABLE_CK48MSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val |  CK48MSEL_MASK ); \
   }

#define DISABLE_CK48MSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG(0x90, val & ~CK48MSEL_MASK ); \
   } 

#define READ_CK48MSEL() \
   ((READ_REGISTER_ULONG(0x90) & CK48MSEL_MASK)  >> CK48MSEL_START_BIT)

#define WHEN_CK48MSEL_HIGH() \
     if ( READ_CK48MSEL() )


#define UNLESS_CK48MSEL_HIGH() \
     if (! READ_CK48MSEL() )


#define WAIT_CK48MSEL_LOW() \
    while ( READ_CK48MSEL() );


#define WAIT_CK48MSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CK48MSEL() && (--___t___ > 0)); }


#define WAIT_CK48MSEL_HIGH() \
    while (! READ_CK48MSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HDMI-CEC clock source selection 
    // 
#define CECSEL_MASK 0x4000000U
#define CECSEL_OFFSET 26
#define CECSEL_START_BIT 26
#define CECSEL_WIDTH 1



typedef enum cecsel {
    CECSEL_0,
    CECSEL_1
} CECSEL_T ;
#define WRITE_CECSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ CECSEL_MASK) | ((val << CECSEL_START_BIT) & CECSEL_MASK )); \
   } 

#define ENABLE_CECSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val |  CECSEL_MASK ); \
   }

#define DISABLE_CECSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG(0x90, val & ~CECSEL_MASK ); \
   } 

#define READ_CECSEL() \
   ((READ_REGISTER_ULONG(0x90) & CECSEL_MASK)  >> CECSEL_START_BIT)

#define WHEN_CECSEL_HIGH() \
     if ( READ_CECSEL() )


#define UNLESS_CECSEL_HIGH() \
     if (! READ_CECSEL() )


#define WAIT_CECSEL_LOW() \
    while ( READ_CECSEL() );


#define WAIT_CECSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CECSEL() && (--___t___ > 0)); }


#define WAIT_CECSEL_HIGH() \
    while (! READ_CECSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low power timer 1 clock source selection 
    // 
#define LPTIM1SEL_MASK 0x3000000U
#define LPTIM1SEL_OFFSET 25
#define LPTIM1SEL_START_BIT 24
#define LPTIM1SEL_WIDTH 2



typedef enum lptim1sel {
    LPTIM_1SEL_0,
    LPTIM_1SEL_1
} LPTIM_1SEL_T ;
#define READ_LPTIM1SEL() \
   ((READ_REGISTER_ULONG(0x90) & LPTIM1SEL_MASK)  >> LPTIM1SEL_START_BIT)

#define WRITE_LPTIM1SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ LPTIM1SEL_MASK) | ((val << LPTIM1SEL_START_BIT) & LPTIM1SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 22:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C4 clock source selection 
    // 
#define I2C4SEL_MASK 0xC00000U
#define I2C4SEL_OFFSET 23
#define I2C4SEL_START_BIT 22
#define I2C4SEL_WIDTH 2



typedef enum i2c4sel {
    I_2C_4SEL_0,
    I_2C_4SEL_1
} I_2C_4SEL_T ;
#define READ_I2C4SEL() \
   ((READ_REGISTER_ULONG(0x90) & I2C4SEL_MASK)  >> I2C4SEL_START_BIT)

#define WRITE_I2C4SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ I2C4SEL_MASK) | ((val << I2C4SEL_START_BIT) & I2C4SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C3 clock source selection 
    // 
#define I2C3SEL_MASK 0x300000U
#define I2C3SEL_OFFSET 21
#define I2C3SEL_START_BIT 20
#define I2C3SEL_WIDTH 2



typedef enum i2c3sel {
    I_2C_3SEL_0,
    I_2C_3SEL_1
} I_2C_3SEL_T ;
#define READ_I2C3SEL() \
   ((READ_REGISTER_ULONG(0x90) & I2C3SEL_MASK)  >> I2C3SEL_START_BIT)

#define WRITE_I2C3SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ I2C3SEL_MASK) | ((val << I2C3SEL_START_BIT) & I2C3SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C2 clock source selection 
    // 
#define I2C2SEL_MASK 0xC0000U
#define I2C2SEL_OFFSET 19
#define I2C2SEL_START_BIT 18
#define I2C2SEL_WIDTH 2



typedef enum i2c2sel {
    I_2C_2SEL_0,
    I_2C_2SEL_1
} I_2C_2SEL_T ;
#define READ_I2C2SEL() \
   ((READ_REGISTER_ULONG(0x90) & I2C2SEL_MASK)  >> I2C2SEL_START_BIT)

#define WRITE_I2C2SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ I2C2SEL_MASK) | ((val << I2C2SEL_START_BIT) & I2C2SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C1 clock source selection 
    // 
#define I2C1SEL_MASK 0x30000U
#define I2C1SEL_OFFSET 17
#define I2C1SEL_START_BIT 16
#define I2C1SEL_WIDTH 2



typedef enum i2c1sel {
    I_2C_1SEL_0,
    I_2C_1SEL_1
} I_2C_1SEL_T ;
#define READ_I2C1SEL() \
   ((READ_REGISTER_ULONG(0x90) & I2C1SEL_MASK)  >> I2C1SEL_START_BIT)

#define WRITE_I2C1SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ I2C1SEL_MASK) | ((val << I2C1SEL_START_BIT) & I2C1SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 14:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART 8 clock source selection 
    // 
#define UART8SEL_MASK 0xC000U
#define UART8SEL_OFFSET 15
#define UART8SEL_START_BIT 14
#define UART8SEL_WIDTH 2



typedef enum uart8sel {
    UART_8SEL_0,
    UART_8SEL_1
} UART_8SEL_T ;
#define READ_UART8SEL() \
   ((READ_REGISTER_ULONG(0x90) & UART8SEL_MASK)  >> UART8SEL_START_BIT)

#define WRITE_UART8SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ UART8SEL_MASK) | ((val << UART8SEL_START_BIT) & UART8SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART 7 clock source selection 
    // 
#define UART7SEL_MASK 0x3000U
#define UART7SEL_OFFSET 13
#define UART7SEL_START_BIT 12
#define UART7SEL_WIDTH 2



typedef enum uart7sel {
    UART_7SEL_0,
    UART_7SEL_1
} UART_7SEL_T ;
#define READ_UART7SEL() \
   ((READ_REGISTER_ULONG(0x90) & UART7SEL_MASK)  >> UART7SEL_START_BIT)

#define WRITE_UART7SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ UART7SEL_MASK) | ((val << UART7SEL_START_BIT) & UART7SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 6 clock source selection 
    // 
#define USART6SEL_MASK 0xC00U
#define USART6SEL_OFFSET 11
#define USART6SEL_START_BIT 10
#define USART6SEL_WIDTH 2



typedef enum usart6sel {
    USART_6SEL_0,
    USART_6SEL_1
} USART_6SEL_T ;
#define READ_USART6SEL() \
   ((READ_REGISTER_ULONG(0x90) & USART6SEL_MASK)  >> USART6SEL_START_BIT)

#define WRITE_USART6SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ USART6SEL_MASK) | ((val << USART6SEL_START_BIT) & USART6SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART 5 clock source selection 
    // 
#define UART5SEL_MASK 0x300U
#define UART5SEL_OFFSET 9
#define UART5SEL_START_BIT 8
#define UART5SEL_WIDTH 2



typedef enum uart5sel {
    UART_5SEL_0,
    UART_5SEL_1
} UART_5SEL_T ;
#define READ_UART5SEL() \
   ((READ_REGISTER_ULONG(0x90) & UART5SEL_MASK)  >> UART5SEL_START_BIT)

#define WRITE_UART5SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ UART5SEL_MASK) | ((val << UART5SEL_START_BIT) & UART5SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // UART 4 clock source selection 
    // 
#define UART4SEL_MASK 0xC0U
#define UART4SEL_OFFSET 7
#define UART4SEL_START_BIT 6
#define UART4SEL_WIDTH 2



typedef enum uart4sel {
    UART_4SEL_0,
    UART_4SEL_1
} UART_4SEL_T ;
#define READ_UART4SEL() \
   ((READ_REGISTER_ULONG(0x90) & UART4SEL_MASK)  >> UART4SEL_START_BIT)

#define WRITE_UART4SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ UART4SEL_MASK) | ((val << UART4SEL_START_BIT) & UART4SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 3 clock source selection 
    // 
#define USART3SEL_MASK 0x30U
#define USART3SEL_OFFSET 5
#define USART3SEL_START_BIT 4
#define USART3SEL_WIDTH 2



typedef enum usart3sel {
    USART_3SEL_0,
    USART_3SEL_1
} USART_3SEL_T ;
#define READ_USART3SEL() \
   ((READ_REGISTER_ULONG(0x90) & USART3SEL_MASK)  >> USART3SEL_START_BIT)

#define WRITE_USART3SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ USART3SEL_MASK) | ((val << USART3SEL_START_BIT) & USART3SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 2 clock source selection 
    // 
#define USART2SEL_MASK 0xCU
#define USART2SEL_OFFSET 3
#define USART2SEL_START_BIT 2
#define USART2SEL_WIDTH 2



typedef enum usart2sel {
    USART_2SEL_0,
    USART_2SEL_1
} USART_2SEL_T ;
#define READ_USART2SEL() \
   ((READ_REGISTER_ULONG(0x90) & USART2SEL_MASK)  >> USART2SEL_START_BIT)

#define WRITE_USART2SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ USART2SEL_MASK) | ((val << USART2SEL_START_BIT) & USART2SEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dkcfgr2
//
// Return the value of register DKCFGR_2
//
// Notes : Register dedicated clocks configuration register (DKCFGR2) at the offset 0x90, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART 1 clock source selection 
    // 
#define USART1SEL_MASK 0x3U
#define USART1SEL_OFFSET 1
#define USART1SEL_START_BIT 0
#define USART1SEL_WIDTH 2



typedef enum usart1sel {
    USART_1SEL_0,
    USART_1SEL_1
} USART_1SEL_T ;
#define READ_USART1SEL() \
   ((READ_REGISTER_ULONG(0x90) & USART1SEL_MASK)  >> USART1SEL_START_BIT)

#define WRITE_USART1SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ USART1SEL_MASK) | ((val << USART1SEL_START_BIT) & USART1SEL_MASK )); \
   } 

