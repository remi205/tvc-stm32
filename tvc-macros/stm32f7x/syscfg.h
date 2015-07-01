/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/syscfg.h
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
 
#define SYSCFG 0x40013800
/////////////////////////////////////////////////////////////////////////
//
// Function : Memrm
//
// Return the value of register MEMRM
//
// Notes : Register Memrm at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MEMRM( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_MEMRM(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_MEMRM(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_MEMRM() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Memrm
//
// Return the value of register MEMRM
//
// Notes : Register memory remap register (MEMRM) at the offset 0x0, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FMC memory mapping swap 
    // 
#define SWP_FMC_MASK 0xC00U
#define SWP_FMC_OFFSET 11
#define SWP_FMC_START_BIT 10
#define SWP_FMC_WIDTH 2


#define MEMRM_REG 0x0

typedef enum swp_fmc {
    SWP_FMC_0,
    SWP_FMC_1
} SWP_FMC_T ;
#define READ_SWP_FMC() \
   ((READ_REGISTER_ULONG(0x0) & SWP_FMC_MASK)  >> SWP_FMC_START_BIT)

#define WRITE_SWP_FMC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SWP_FMC_MASK) | ((val << SWP_FMC_START_BIT) & SWP_FMC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Memrm
//
// Return the value of register MEMRM
//
// Notes : Register memory remap register (MEMRM) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Flash bank mode selection 
    // 
#define FB_MODE_MASK 0x100U
#define FB_MODE_OFFSET 8
#define FB_MODE_START_BIT 8
#define FB_MODE_WIDTH 1



typedef enum fb_mode {
    FB_MODE_0,
    FB_MODE_1
} FB_MODE_T ;
#define WRITE_FB_MODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FB_MODE_MASK) | ((val << FB_MODE_START_BIT) & FB_MODE_MASK )); \
   } 

#define ENABLE_FB_MODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FB_MODE_MASK ); \
   }

#define DISABLE_FB_MODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FB_MODE_MASK ); \
   } 

#define READ_FB_MODE() \
   ((READ_REGISTER_ULONG(0x0) & FB_MODE_MASK)  >> FB_MODE_START_BIT)

#define WHEN_FB_MODE_HIGH() \
     if ( READ_FB_MODE() )


#define UNLESS_FB_MODE_HIGH() \
     if (! READ_FB_MODE() )


#define WAIT_FB_MODE_LOW() \
    while ( READ_FB_MODE() );


#define WAIT_FB_MODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FB_MODE() && (--___t___ > 0)); }


#define WAIT_FB_MODE_HIGH() \
    while (! READ_FB_MODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Memrm
//
// Return the value of register MEMRM
//
// Notes : Register memory remap register (MEMRM) at the offset 0x0, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory mapping selection 
    // 
#define MEM_MODE_MASK 0x7U
#define MEM_MODE_OFFSET 2
#define MEM_MODE_START_BIT 0
#define MEM_MODE_WIDTH 3



typedef enum mem_mode {
    MEM_MODE_0,
    MEM_MODE_1
} MEM_MODE_T ;
#define READ_MEM_MODE() \
   ((READ_REGISTER_ULONG(0x0) & MEM_MODE_MASK)  >> MEM_MODE_START_BIT)

#define WRITE_MEM_MODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MEM_MODE_MASK) | ((val << MEM_MODE_START_BIT) & MEM_MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pmc
//
// Return the value of register PMC
//
// Notes : Register Pmc at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PMC( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_PMC(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_PMC(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_PMC() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pmc
//
// Return the value of register PMC
//
// Notes : Register peripheral mode configuration register (PMC) at the offset 0x4, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC3DC2 
    // 
#define ADC3DC2_MASK 0x40000U
#define ADC3DC2_OFFSET 18
#define ADC3DC2_START_BIT 18
#define ADC3DC2_WIDTH 1


#define PMC_REG 0x4

typedef enum adc3dc2 {
    ADC_3DC_2_0,
    ADC_3DC_2_1
} ADC_3DC_2_T ;
#define WRITE_ADC3DC2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADC3DC2_MASK) | ((val << ADC3DC2_START_BIT) & ADC3DC2_MASK )); \
   } 

#define ENABLE_ADC3DC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ADC3DC2_MASK ); \
   }

#define DISABLE_ADC3DC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ADC3DC2_MASK ); \
   } 

#define READ_ADC3DC2() \
   ((READ_REGISTER_ULONG(0x4) & ADC3DC2_MASK)  >> ADC3DC2_START_BIT)

#define WHEN_ADC3DC2_HIGH() \
     if ( READ_ADC3DC2() )


#define UNLESS_ADC3DC2_HIGH() \
     if (! READ_ADC3DC2() )


#define WAIT_ADC3DC2_LOW() \
    while ( READ_ADC3DC2() );


#define WAIT_ADC3DC2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC3DC2() && (--___t___ > 0)); }


#define WAIT_ADC3DC2_HIGH() \
    while (! READ_ADC3DC2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pmc
//
// Return the value of register PMC
//
// Notes : Register peripheral mode configuration register (PMC) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC2DC2 
    // 
#define ADC2DC2_MASK 0x20000U
#define ADC2DC2_OFFSET 17
#define ADC2DC2_START_BIT 17
#define ADC2DC2_WIDTH 1



typedef enum adc2dc2 {
    ADC_2DC_2_0,
    ADC_2DC_2_1
} ADC_2DC_2_T ;
#define WRITE_ADC2DC2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADC2DC2_MASK) | ((val << ADC2DC2_START_BIT) & ADC2DC2_MASK )); \
   } 

#define ENABLE_ADC2DC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ADC2DC2_MASK ); \
   }

#define DISABLE_ADC2DC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ADC2DC2_MASK ); \
   } 

#define READ_ADC2DC2() \
   ((READ_REGISTER_ULONG(0x4) & ADC2DC2_MASK)  >> ADC2DC2_START_BIT)

#define WHEN_ADC2DC2_HIGH() \
     if ( READ_ADC2DC2() )


#define UNLESS_ADC2DC2_HIGH() \
     if (! READ_ADC2DC2() )


#define WAIT_ADC2DC2_LOW() \
    while ( READ_ADC2DC2() );


#define WAIT_ADC2DC2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC2DC2() && (--___t___ > 0)); }


#define WAIT_ADC2DC2_HIGH() \
    while (! READ_ADC2DC2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pmc
//
// Return the value of register PMC
//
// Notes : Register peripheral mode configuration register (PMC) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADC1DC2 
    // 
#define ADC1DC2_MASK 0x10000U
#define ADC1DC2_OFFSET 16
#define ADC1DC2_START_BIT 16
#define ADC1DC2_WIDTH 1



typedef enum adc1dc2 {
    ADC_1DC_2_0,
    ADC_1DC_2_1
} ADC_1DC_2_T ;
#define WRITE_ADC1DC2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADC1DC2_MASK) | ((val << ADC1DC2_START_BIT) & ADC1DC2_MASK )); \
   } 

#define ENABLE_ADC1DC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ADC1DC2_MASK ); \
   }

#define DISABLE_ADC1DC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ADC1DC2_MASK ); \
   } 

#define READ_ADC1DC2() \
   ((READ_REGISTER_ULONG(0x4) & ADC1DC2_MASK)  >> ADC1DC2_START_BIT)

#define WHEN_ADC1DC2_HIGH() \
     if ( READ_ADC1DC2() )


#define UNLESS_ADC1DC2_HIGH() \
     if (! READ_ADC1DC2() )


#define WAIT_ADC1DC2_LOW() \
    while ( READ_ADC1DC2() );


#define WAIT_ADC1DC2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADC1DC2() && (--___t___ > 0)); }


#define WAIT_ADC1DC2_HIGH() \
    while (! READ_ADC1DC2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pmc
//
// Return the value of register PMC
//
// Notes : Register peripheral mode configuration register (PMC) at the offset 0x4, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ethernet PHY interface selection 
    // 
#define MII_RMII_SEL_MASK 0x800000U
#define MII_RMII_SEL_OFFSET 23
#define MII_RMII_SEL_START_BIT 23
#define MII_RMII_SEL_WIDTH 1



typedef enum mii_rmii_sel {
    MII_RMII_SEL_0,
    MII_RMII_SEL_1
} MII_RMII_SEL_T ;
#define WRITE_MII_RMII_SEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MII_RMII_SEL_MASK) | ((val << MII_RMII_SEL_START_BIT) & MII_RMII_SEL_MASK )); \
   } 

#define ENABLE_MII_RMII_SEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MII_RMII_SEL_MASK ); \
   }

#define DISABLE_MII_RMII_SEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MII_RMII_SEL_MASK ); \
   } 

#define READ_MII_RMII_SEL() \
   ((READ_REGISTER_ULONG(0x4) & MII_RMII_SEL_MASK)  >> MII_RMII_SEL_START_BIT)

#define WHEN_MII_RMII_SEL_HIGH() \
     if ( READ_MII_RMII_SEL() )


#define UNLESS_MII_RMII_SEL_HIGH() \
     if (! READ_MII_RMII_SEL() )


#define WAIT_MII_RMII_SEL_LOW() \
    while ( READ_MII_RMII_SEL() );


#define WAIT_MII_RMII_SEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MII_RMII_SEL() && (--___t___ > 0)); }


#define WAIT_MII_RMII_SEL_HIGH() \
    while (! READ_MII_RMII_SEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr1
//
// Return the value of register EXTICR1
//
// Notes : Register Exticr1 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTICR_1( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_EXTICR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_EXTICR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_EXTICR_1() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr1
//
// Return the value of register EXTICR_1
//
// Notes : Register external interrupt configuration register 1 (EXTICR1) at the offset 0x8, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 0 to 3) 
    // 
#define EXTI0_MASK 0xFU
#define EXTI0_OFFSET 3
#define EXTI0_START_BIT 0
#define EXTI0_WIDTH 4


#define EXTICR_1_REG 0x8

typedef enum exti0 {
    EXTI_0_0,
    EXTI_0_1
} EXTI_0_T ;
#define READ_EXTI0() \
   ((READ_REGISTER_ULONG(0x8) & EXTI0_MASK)  >> EXTI0_START_BIT)

#define WRITE_EXTI0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EXTI0_MASK) | ((val << EXTI0_START_BIT) & EXTI0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr1
//
// Return the value of register EXTICR_1
//
// Notes : Register external interrupt configuration register 1 (EXTICR1) at the offset 0x8, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 0 to 3) 
    // 
#define EXTI1_MASK 0xF0U
#define EXTI1_OFFSET 7
#define EXTI1_START_BIT 4
#define EXTI1_WIDTH 4



typedef enum exti1 {
    EXTI_1_0,
    EXTI_1_1
} EXTI_1_T ;
#define READ_EXTI1() \
   ((READ_REGISTER_ULONG(0x8) & EXTI1_MASK)  >> EXTI1_START_BIT)

#define WRITE_EXTI1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EXTI1_MASK) | ((val << EXTI1_START_BIT) & EXTI1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr1
//
// Return the value of register EXTICR_1
//
// Notes : Register external interrupt configuration register 1 (EXTICR1) at the offset 0x8, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 0 to 3) 
    // 
#define EXTI2_MASK 0xF00U
#define EXTI2_OFFSET 11
#define EXTI2_START_BIT 8
#define EXTI2_WIDTH 4



typedef enum exti2 {
    EXTI_2_0,
    EXTI_2_1
} EXTI_2_T ;
#define READ_EXTI2() \
   ((READ_REGISTER_ULONG(0x8) & EXTI2_MASK)  >> EXTI2_START_BIT)

#define WRITE_EXTI2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EXTI2_MASK) | ((val << EXTI2_START_BIT) & EXTI2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr1
//
// Return the value of register EXTICR_1
//
// Notes : Register external interrupt configuration register 1 (EXTICR1) at the offset 0x8, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 0 to 3) 
    // 
#define EXTI3_MASK 0xF000U
#define EXTI3_OFFSET 15
#define EXTI3_START_BIT 12
#define EXTI3_WIDTH 4



typedef enum exti3 {
    EXTI_3_0,
    EXTI_3_1
} EXTI_3_T ;
#define READ_EXTI3() \
   ((READ_REGISTER_ULONG(0x8) & EXTI3_MASK)  >> EXTI3_START_BIT)

#define WRITE_EXTI3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EXTI3_MASK) | ((val << EXTI3_START_BIT) & EXTI3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr2
//
// Return the value of register EXTICR2
//
// Notes : Register Exticr2 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTICR_2( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_EXTICR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_EXTICR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_EXTICR_2() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr2
//
// Return the value of register EXTICR_2
//
// Notes : Register external interrupt configuration register 2 (EXTICR2) at the offset 0xC, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 4 to 7) 
    // 
#define EXTI4_MASK 0xFU
#define EXTI4_OFFSET 3
#define EXTI4_START_BIT 0
#define EXTI4_WIDTH 4


#define EXTICR_2_REG 0xC

typedef enum exti4 {
    EXTI_4_0,
    EXTI_4_1
} EXTI_4_T ;
#define READ_EXTI4() \
   ((READ_REGISTER_ULONG(0xC) & EXTI4_MASK)  >> EXTI4_START_BIT)

#define WRITE_EXTI4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EXTI4_MASK) | ((val << EXTI4_START_BIT) & EXTI4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr2
//
// Return the value of register EXTICR_2
//
// Notes : Register external interrupt configuration register 2 (EXTICR2) at the offset 0xC, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 4 to 7) 
    // 
#define EXTI5_MASK 0xF0U
#define EXTI5_OFFSET 7
#define EXTI5_START_BIT 4
#define EXTI5_WIDTH 4



typedef enum exti5 {
    EXTI_5_0,
    EXTI_5_1
} EXTI_5_T ;
#define READ_EXTI5() \
   ((READ_REGISTER_ULONG(0xC) & EXTI5_MASK)  >> EXTI5_START_BIT)

#define WRITE_EXTI5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EXTI5_MASK) | ((val << EXTI5_START_BIT) & EXTI5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr2
//
// Return the value of register EXTICR_2
//
// Notes : Register external interrupt configuration register 2 (EXTICR2) at the offset 0xC, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 4 to 7) 
    // 
#define EXTI6_MASK 0xF00U
#define EXTI6_OFFSET 11
#define EXTI6_START_BIT 8
#define EXTI6_WIDTH 4



typedef enum exti6 {
    EXTI_6_0,
    EXTI_6_1
} EXTI_6_T ;
#define READ_EXTI6() \
   ((READ_REGISTER_ULONG(0xC) & EXTI6_MASK)  >> EXTI6_START_BIT)

#define WRITE_EXTI6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EXTI6_MASK) | ((val << EXTI6_START_BIT) & EXTI6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr2
//
// Return the value of register EXTICR_2
//
// Notes : Register external interrupt configuration register 2 (EXTICR2) at the offset 0xC, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 4 to 7) 
    // 
#define EXTI7_MASK 0xF000U
#define EXTI7_OFFSET 15
#define EXTI7_START_BIT 12
#define EXTI7_WIDTH 4



typedef enum exti7 {
    EXTI_7_0,
    EXTI_7_1
} EXTI_7_T ;
#define READ_EXTI7() \
   ((READ_REGISTER_ULONG(0xC) & EXTI7_MASK)  >> EXTI7_START_BIT)

#define WRITE_EXTI7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EXTI7_MASK) | ((val << EXTI7_START_BIT) & EXTI7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr3
//
// Return the value of register EXTICR3
//
// Notes : Register Exticr3 at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTICR_3( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_EXTICR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_EXTICR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_EXTICR_3() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr3
//
// Return the value of register EXTICR_3
//
// Notes : Register external interrupt configuration register 3 (EXTICR3) at the offset 0x10, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 8 to 11) 
    // 
#define EXTI8_MASK 0xFU
#define EXTI8_OFFSET 3
#define EXTI8_START_BIT 0
#define EXTI8_WIDTH 4


#define EXTICR_3_REG 0x10

typedef enum exti8 {
    EXTI_8_0,
    EXTI_8_1
} EXTI_8_T ;
#define READ_EXTI8() \
   ((READ_REGISTER_ULONG(0x10) & EXTI8_MASK)  >> EXTI8_START_BIT)

#define WRITE_EXTI8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EXTI8_MASK) | ((val << EXTI8_START_BIT) & EXTI8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr3
//
// Return the value of register EXTICR_3
//
// Notes : Register external interrupt configuration register 3 (EXTICR3) at the offset 0x10, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 8 to 11) 
    // 
#define EXTI9_MASK 0xF0U
#define EXTI9_OFFSET 7
#define EXTI9_START_BIT 4
#define EXTI9_WIDTH 4



typedef enum exti9 {
    EXTI_9_0,
    EXTI_9_1
} EXTI_9_T ;
#define READ_EXTI9() \
   ((READ_REGISTER_ULONG(0x10) & EXTI9_MASK)  >> EXTI9_START_BIT)

#define WRITE_EXTI9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EXTI9_MASK) | ((val << EXTI9_START_BIT) & EXTI9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr3
//
// Return the value of register EXTICR_3
//
// Notes : Register external interrupt configuration register 3 (EXTICR3) at the offset 0x10, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI10 
    // 
#define EXTI10_MASK 0xF00U
#define EXTI10_OFFSET 11
#define EXTI10_START_BIT 8
#define EXTI10_WIDTH 4



typedef enum exti10 {
    EXTI_1_0_0,
    EXTI_1_0_1
} EXTI_10_T ;
#define READ_EXTI10() \
   ((READ_REGISTER_ULONG(0x10) & EXTI10_MASK)  >> EXTI10_START_BIT)

#define WRITE_EXTI10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EXTI10_MASK) | ((val << EXTI10_START_BIT) & EXTI10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr3
//
// Return the value of register EXTICR_3
//
// Notes : Register external interrupt configuration register 3 (EXTICR3) at the offset 0x10, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 8 to 11) 
    // 
#define EXTI11_MASK 0xF000U
#define EXTI11_OFFSET 15
#define EXTI11_START_BIT 12
#define EXTI11_WIDTH 4



typedef enum exti11 {
    EXTI_1_1_0,
    EXTI_1_1_1
} EXTI_11_T ;
#define READ_EXTI11() \
   ((READ_REGISTER_ULONG(0x10) & EXTI11_MASK)  >> EXTI11_START_BIT)

#define WRITE_EXTI11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EXTI11_MASK) | ((val << EXTI11_START_BIT) & EXTI11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr4
//
// Return the value of register EXTICR4
//
// Notes : Register Exticr4 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EXTICR_4( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_EXTICR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_EXTICR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_EXTICR_4() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr4
//
// Return the value of register EXTICR_4
//
// Notes : Register external interrupt configuration register 4 (EXTICR4) at the offset 0x14, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 12 to 15) 
    // 
#define EXTI12_MASK 0xFU
#define EXTI12_OFFSET 3
#define EXTI12_START_BIT 0
#define EXTI12_WIDTH 4


#define EXTICR_4_REG 0x14

typedef enum exti12 {
    EXTI_1_2_0,
    EXTI_1_2_1
} EXTI_12_T ;
#define READ_EXTI12() \
   ((READ_REGISTER_ULONG(0x14) & EXTI12_MASK)  >> EXTI12_START_BIT)

#define WRITE_EXTI12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EXTI12_MASK) | ((val << EXTI12_START_BIT) & EXTI12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr4
//
// Return the value of register EXTICR_4
//
// Notes : Register external interrupt configuration register 4 (EXTICR4) at the offset 0x14, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 12 to 15) 
    // 
#define EXTI13_MASK 0xF0U
#define EXTI13_OFFSET 7
#define EXTI13_START_BIT 4
#define EXTI13_WIDTH 4



typedef enum exti13 {
    EXTI_1_3_0,
    EXTI_1_3_1
} EXTI_13_T ;
#define READ_EXTI13() \
   ((READ_REGISTER_ULONG(0x14) & EXTI13_MASK)  >> EXTI13_START_BIT)

#define WRITE_EXTI13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EXTI13_MASK) | ((val << EXTI13_START_BIT) & EXTI13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr4
//
// Return the value of register EXTICR_4
//
// Notes : Register external interrupt configuration register 4 (EXTICR4) at the offset 0x14, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 12 to 15) 
    // 
#define EXTI14_MASK 0xF00U
#define EXTI14_OFFSET 11
#define EXTI14_START_BIT 8
#define EXTI14_WIDTH 4



typedef enum exti14 {
    EXTI_1_4_0,
    EXTI_1_4_1
} EXTI_14_T ;
#define READ_EXTI14() \
   ((READ_REGISTER_ULONG(0x14) & EXTI14_MASK)  >> EXTI14_START_BIT)

#define WRITE_EXTI14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EXTI14_MASK) | ((val << EXTI14_START_BIT) & EXTI14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Exticr4
//
// Return the value of register EXTICR_4
//
// Notes : Register external interrupt configuration register 4 (EXTICR4) at the offset 0x14, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTI x configuration (x = 12 to 15) 
    // 
#define EXTI15_MASK 0xF000U
#define EXTI15_OFFSET 15
#define EXTI15_START_BIT 12
#define EXTI15_WIDTH 4



typedef enum exti15 {
    EXTI_1_5_0,
    EXTI_1_5_1
} EXTI_15_T ;
#define READ_EXTI15() \
   ((READ_REGISTER_ULONG(0x14) & EXTI15_MASK)  >> EXTI15_START_BIT)

#define WRITE_EXTI15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EXTI15_MASK) | ((val << EXTI15_START_BIT) & EXTI15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmpcr
//
// Return the value of register CMPCR
//
// Notes : Register Cmpcr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CMPCR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmpcr
//
// Return the value of register CMPCR
//
// Notes : Register Compensation cell control register (CMPCR) at the offset 0x20, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Compensation cell power-down 
    // 
#define CMP_PD_MASK 0x1U
#define CMP_PD_OFFSET 0
#define CMP_PD_START_BIT 0
#define CMP_PD_WIDTH 1


#define CMPCR_REG 0x20

typedef enum cmp_pd {
    CMP_PD_0,
    CMP_PD_1
} CMP_PD_T ;
#define WRITE_CMP_PD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CMP_PD_MASK) | ((val << CMP_PD_START_BIT) & CMP_PD_MASK )); \
   } 

#define ENABLE_CMP_PD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CMP_PD_MASK ); \
   }

#define DISABLE_CMP_PD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CMP_PD_MASK ); \
   } 

#define READ_CMP_PD() \
   ((READ_REGISTER_ULONG(0x20) & CMP_PD_MASK)  >> CMP_PD_START_BIT)

#define WHEN_CMP_PD_HIGH() \
     if ( READ_CMP_PD() )


#define UNLESS_CMP_PD_HIGH() \
     if (! READ_CMP_PD() )


#define WAIT_CMP_PD_LOW() \
    while ( READ_CMP_PD() );


#define WAIT_CMP_PD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMP_PD() && (--___t___ > 0)); }


#define WAIT_CMP_PD_HIGH() \
    while (! READ_CMP_PD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmpcr
//
// Return the value of register CMPCR
//
// Notes : Register Compensation cell control register (CMPCR) at the offset 0x20, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // READY 
    // 
#define READY_MASK 0x100U
#define READY_OFFSET 8
#define READY_START_BIT 8
#define READY_WIDTH 1



typedef enum ready {
    READY_0,
    READY_1
} READY_T ;
#define WRITE_READY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ READY_MASK) | ((val << READY_START_BIT) & READY_MASK )); \
   } 

#define ENABLE_READY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  READY_MASK ); \
   }

#define DISABLE_READY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~READY_MASK ); \
   } 

#define READ_READY() \
   ((READ_REGISTER_ULONG(0x20) & READY_MASK)  >> READY_START_BIT)

#define WHEN_READY_HIGH() \
     if ( READ_READY() )


#define UNLESS_READY_HIGH() \
     if (! READ_READY() )


#define WAIT_READY_LOW() \
    while ( READ_READY() );


#define WAIT_READY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_READY() && (--___t___ > 0)); }


#define WAIT_READY_HIGH() \
    while (! READ_READY() );


