/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/tim6.h
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
 
#define NB_DEVICE_TIM6 2
#define TIM6 0x40001000
#define TIM7 0x40001400
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR1
//
// Notes : Register Cr1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_1( base,  val) \
     WRITE_REGISTER_ULONG( base , val)

#define SET_BITS_CR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  mask ); \
   } 

#define CLEAR_BITS_CR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base ,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_1( base ) \
     READ_REGISTER_ULONG( base ) 

/////////////////////////////////////////////////////////////////////////
//
// Function : CEN
//
// Return the value of register Cr1
//
// Notes : Counter enable 
//        (CR1) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CEN_MASK) | ((val << CEN_START_BIT) & CEN_MASK )); \
   } 

#define ENABLE_CEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  CEN_MASK ); \
   } 

#define DISABLE_CEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~CEN_MASK ); \
   } 

#define READ_CEN(base) \
    ((READ_REGISTER_ULONG(base ) & CEN_MASK) >> CEN_START_BIT )

#define WHEN_CEN_HIGH(base) \
     if ( READ_CEN(base) )


#define UNLESS_CEN_HIGH(base) \
     if (! READ_CEN(base) )


#define WAIT_CEN_LOW(base) \
    while ( READ_CEN(base) );


#define WAIT_CEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CEN(base) && (--timeout > 0) );


#define WAIT_CEN_HIGH(base) \
    while (! READ_CEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : UDIS
//
// Return the value of register Cr1
//
// Notes : Update disable 
//        (CR1) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_UDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~UDIS_MASK) | ((val << UDIS_START_BIT) & UDIS_MASK )); \
   } 

#define ENABLE_UDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  UDIS_MASK ); \
   } 

#define DISABLE_UDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~UDIS_MASK ); \
   } 

#define READ_UDIS(base) \
    ((READ_REGISTER_ULONG(base ) & UDIS_MASK) >> UDIS_START_BIT )

#define WHEN_UDIS_HIGH(base) \
     if ( READ_UDIS(base) )


#define UNLESS_UDIS_HIGH(base) \
     if (! READ_UDIS(base) )


#define WAIT_UDIS_LOW(base) \
    while ( READ_UDIS(base) );


#define WAIT_UDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UDIS(base) && (--timeout > 0) );


#define WAIT_UDIS_HIGH(base) \
    while (! READ_UDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : URS
//
// Return the value of register Cr1
//
// Notes : Update request source 
//        (CR1) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_URS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~URS_MASK) | ((val << URS_START_BIT) & URS_MASK )); \
   } 

#define ENABLE_URS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  URS_MASK ); \
   } 

#define DISABLE_URS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~URS_MASK ); \
   } 

#define READ_URS(base) \
    ((READ_REGISTER_ULONG(base ) & URS_MASK) >> URS_START_BIT )

#define WHEN_URS_HIGH(base) \
     if ( READ_URS(base) )


#define UNLESS_URS_HIGH(base) \
     if (! READ_URS(base) )


#define WAIT_URS_LOW(base) \
    while ( READ_URS(base) );


#define WAIT_URS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_URS(base) && (--timeout > 0) );


#define WAIT_URS_HIGH(base) \
    while (! READ_URS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OPM
//
// Return the value of register Cr1
//
// Notes : One-pulse mode 
//        (CR1) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OPM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~OPM_MASK) | ((val << OPM_START_BIT) & OPM_MASK )); \
   } 

#define ENABLE_OPM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  OPM_MASK ); \
   } 

#define DISABLE_OPM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~OPM_MASK ); \
   } 

#define READ_OPM(base) \
    ((READ_REGISTER_ULONG(base ) & OPM_MASK) >> OPM_START_BIT )

#define WHEN_OPM_HIGH(base) \
     if ( READ_OPM(base) )


#define UNLESS_OPM_HIGH(base) \
     if (! READ_OPM(base) )


#define WAIT_OPM_LOW(base) \
    while ( READ_OPM(base) );


#define WAIT_OPM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OPM(base) && (--timeout > 0) );


#define WAIT_OPM_HIGH(base) \
    while (! READ_OPM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARPE
//
// Return the value of register Cr1
//
// Notes : Auto-reload preload enable 
//        (CR1) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARPE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~ARPE_MASK) | ((val << ARPE_START_BIT) & ARPE_MASK )); \
   } 

#define ENABLE_ARPE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  ARPE_MASK ); \
   } 

#define DISABLE_ARPE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~ARPE_MASK ); \
   } 

#define READ_ARPE(base) \
    ((READ_REGISTER_ULONG(base ) & ARPE_MASK) >> ARPE_START_BIT )

#define WHEN_ARPE_HIGH(base) \
     if ( READ_ARPE(base) )


#define UNLESS_ARPE_HIGH(base) \
     if (! READ_ARPE(base) )


#define WAIT_ARPE_LOW(base) \
    while ( READ_ARPE(base) );


#define WAIT_ARPE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ARPE(base) && (--timeout > 0) );


#define WAIT_ARPE_HIGH(base) \
    while (! READ_ARPE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR2
//
// Notes : Register Cr2 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x4, val)

#define SET_BITS_CR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  mask ); \
   } 

#define CLEAR_BITS_CR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_2( base ) \
     READ_REGISTER_ULONG( base + 0x4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : MMS
//
// Return the value of register Cr2
//
// Notes : Master mode selection 
//        (CR2) at the offset 0x4, Bits 4:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_MMS(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & MMS_MASK) >> MMS_START_BIT )

#define WRITE_MMS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~MMS_MASK) | ((val << MMS_START_BIT) & MMS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dier
//
// Return the value of register DIER
//
// Notes : Register Dier at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DIER( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_DIER(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_DIER(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_DIER( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dier
//
// Return the value of register DIER
//
// Notes : Register DMA/Interrupt enable register (DIER) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Update interrupt enable 
    // 
#define UIE_MASK 0x1U
#define UIE_OFFSET 0
#define UIE_START_BIT 0
#define UIE_WIDTH 1


#define DIER_REG 0xC

typedef enum uie {
    UIE_0,
    UIE_1
} UIE_T ;
#define WRITE_UIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~UIE_MASK) | ((val << UIE_START_BIT) & UIE_MASK )); \
   } 

#define ENABLE_UIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  UIE_MASK ); \
   } 

#define DISABLE_UIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~UIE_MASK ); \
   } 

#define READ_UIE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & UIE_MASK) >> UIE_START_BIT )

#define WHEN_UIE_HIGH(base) \
     if ( READ_UIE(base) )


#define UNLESS_UIE_HIGH(base) \
     if (! READ_UIE(base) )


#define WAIT_UIE_LOW(base) \
    while ( READ_UIE(base) );


#define WAIT_UIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UIE(base) && (--timeout > 0) );


#define WAIT_UIE_HIGH(base) \
    while (! READ_UIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dier
//
// Return the value of register DIER
//
// Notes : Register DMA/Interrupt enable register (DIER) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Update DMA request enable 
    // 
#define UDE_MASK 0x100U
#define UDE_OFFSET 8
#define UDE_START_BIT 8
#define UDE_WIDTH 1



typedef enum ude {
    UDE_0,
    UDE_1
} UDE_T ;
#define WRITE_UDE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~UDE_MASK) | ((val << UDE_START_BIT) & UDE_MASK )); \
   } 

#define ENABLE_UDE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  UDE_MASK ); \
   } 

#define DISABLE_UDE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~UDE_MASK ); \
   } 

#define READ_UDE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & UDE_MASK) >> UDE_START_BIT )

#define WHEN_UDE_HIGH(base) \
     if ( READ_UDE(base) )


#define UNLESS_UDE_HIGH(base) \
     if (! READ_UDE(base) )


#define WAIT_UDE_LOW(base) \
    while ( READ_UDE(base) );


#define WAIT_UDE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UDE(base) && (--timeout > 0) );


#define WAIT_UDE_HIGH(base) \
    while (! READ_UDE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_SR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_SR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_SR( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : UIF
//
// Return the value of register Sr
//
// Notes : Update interrupt flag 
//        (SR) at the offset 0x10, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_UIF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~UIF_MASK) | ((val << UIF_START_BIT) & UIF_MASK )); \
   } 

#define ENABLE_UIF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  UIF_MASK ); \
   } 

#define DISABLE_UIF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~UIF_MASK ); \
   } 

#define READ_UIF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & UIF_MASK) >> UIF_START_BIT )

#define WHEN_UIF_HIGH(base) \
     if ( READ_UIF(base) )


#define UNLESS_UIF_HIGH(base) \
     if (! READ_UIF(base) )


#define WAIT_UIF_LOW(base) \
    while ( READ_UIF(base) );


#define WAIT_UIF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UIF(base) && (--timeout > 0) );


#define WAIT_UIF_HIGH(base) \
    while (! READ_UIF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Egr
//
// Return the value of register EGR
//
// Notes : Register Egr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EGR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x14, val)

/////////////////////////////////////////////////////////////////////////
//
// Function : Egr
//
// Return the value of register EGR
//
// Notes : Register event generation register (EGR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Update generation 
    // 
#define UG_MASK 0x1U
#define UG_OFFSET 0
#define UG_START_BIT 0
#define UG_WIDTH 1


#define EGR_REG 0x14

typedef enum ug {
    UG_0,
    UG_1
} UG_T ;
#define WRITE_UG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~UG_MASK) | ((val << UG_START_BIT) & UG_MASK )); \
   } 

#define ENABLE_UG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  UG_MASK ); \
   } 

#define DISABLE_UG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~UG_MASK ); \
   } 

#define READ_UG(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & UG_MASK) >> UG_START_BIT )

#define WHEN_UG_HIGH(base) \
     if ( READ_UG(base) )


#define UNLESS_UG_HIGH(base) \
     if (! READ_UG(base) )


#define WAIT_UG_LOW(base) \
    while ( READ_UG(base) );


#define WAIT_UG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UG(base) && (--timeout > 0) );


#define WAIT_UG_HIGH(base) \
    while (! READ_UG(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cnt
//
// Return the value of register CNT
//
// Notes : Register Cnt at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CNT( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x24, val)

#define SET_BITS_CNT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  mask ); \
   } 

#define CLEAR_BITS_CNT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24,  val & ~mask ); \
   } 

#define READ_REGISTER_CNT( base ) \
     READ_REGISTER_ULONG( base + 0x24) 

/////////////////////////////////////////////////////////////////////////
//
// Function : CNT
//
// Return the value of register Cnt
//
// Notes : Low counter value 
//        (CNT) at the offset 0x24, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CNT(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & CNT_MASK) >> CNT_START_BIT )

#define WRITE_CNT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~CNT_MASK) | ((val << CNT_START_BIT) & CNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Psc
//
// Return the value of register PSC
//
// Notes : Register Psc at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PSC( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x28, val)

#define SET_BITS_PSC(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_PSC(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_PSC( base ) \
     READ_REGISTER_ULONG( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Psc
//
// Return the value of register PSC
//
// Notes : Register prescaler (PSC) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Prescaler value 
    // 
#define PSC_MASK 0xFFFFU
#define PSC_OFFSET 15
#define PSC_START_BIT 0
#define PSC_WIDTH 16


#define PSC_REG 0x28

#define READ_PSC(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & PSC_MASK) >> PSC_START_BIT )

#define WRITE_PSC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~PSC_MASK) | ((val << PSC_START_BIT) & PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Arr
//
// Return the value of register ARR
//
// Notes : Register Arr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ARR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x2C, val)

#define SET_BITS_ARR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  mask ); \
   } 

#define CLEAR_BITS_ARR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C,  val & ~mask ); \
   } 

#define READ_REGISTER_ARR( base ) \
     READ_REGISTER_ULONG( base + 0x2C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : ARR
//
// Return the value of register Arr
//
// Notes : Low Auto-reload value 
//        (ARR) at the offset 0x2C, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_ARR(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & ARR_MASK) >> ARR_START_BIT )

#define WRITE_ARR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~ARR_MASK) | ((val << ARR_START_BIT) & ARR_MASK )); \
   } 

