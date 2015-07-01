/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/tim10.h
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
 
#define NB_DEVICE_TIM10 4
#define TIM10 0x40014400
#define TIM14 0x40002000
#define TIM13 0x40001C00
#define TIM11 0x40014800
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
// Function : CKD
//
// Return the value of register Cr1
//
// Notes : Clock division 
//        (CR1) at the offset 0x0, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_CKD(base) \
    ((READ_REGISTER_ULONG(base ) & CKD_MASK) >> CKD_START_BIT )

#define WRITE_CKD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CKD_MASK) | ((val << CKD_START_BIT) & CKD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register Smcr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SMCR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8, val)

#define SET_BITS_SMCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_SMCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_SMCR( base ) \
     READ_REGISTER_ULONG( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Slave mode selection 
    // 
#define SMS_MASK 0x7U
#define SMS_OFFSET 2
#define SMS_START_BIT 0
#define SMS_WIDTH 3


#define SMCR_REG 0x8

typedef enum sms {
    SMS_0,
    SMS_1
} SMS_T ;
#define READ_SMS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & SMS_MASK) >> SMS_START_BIT )

#define WRITE_SMS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~SMS_MASK) | ((val << SMS_START_BIT) & SMS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Trigger selection 
    // 
#define TS_MASK 0x70U
#define TS_OFFSET 6
#define TS_START_BIT 4
#define TS_WIDTH 3



typedef enum ts {
    TS_0,
    TS_1
} TS_T ;
#define READ_TS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & TS_MASK) >> TS_START_BIT )

#define WRITE_TS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~TS_MASK) | ((val << TS_START_BIT) & TS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Master/slave mode 
    // 
#define MSM_MASK 0x80U
#define MSM_OFFSET 7
#define MSM_START_BIT 7
#define MSM_WIDTH 1



typedef enum msm {
    MSM_0,
    MSM_1
} MSM_T ;
#define WRITE_MSM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~MSM_MASK) | ((val << MSM_START_BIT) & MSM_MASK )); \
   } 

#define ENABLE_MSM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  MSM_MASK ); \
   } 

#define DISABLE_MSM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~MSM_MASK ); \
   } 

#define READ_MSM(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & MSM_MASK) >> MSM_START_BIT )

#define WHEN_MSM_HIGH(base) \
     if ( READ_MSM(base) )


#define UNLESS_MSM_HIGH(base) \
     if (! READ_MSM(base) )


#define WAIT_MSM_LOW(base) \
    while ( READ_MSM(base) );


#define WAIT_MSM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MSM(base) && (--timeout > 0) );


#define WAIT_MSM_HIGH(base) \
    while (! READ_MSM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External trigger filter 
    // 
#define ETF_MASK 0xF00U
#define ETF_OFFSET 11
#define ETF_START_BIT 8
#define ETF_WIDTH 4



typedef enum etf {
    ETF_0,
    ETF_1
} ETF_T ;
#define READ_ETF(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ETF_MASK) >> ETF_START_BIT )

#define WRITE_ETF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ETF_MASK) | ((val << ETF_START_BIT) & ETF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External trigger prescaler 
    // 
#define ETPS_MASK 0x3000U
#define ETPS_OFFSET 13
#define ETPS_START_BIT 12
#define ETPS_WIDTH 2



typedef enum etps {
    ETPS_0,
    ETPS_1
} ETPS_T ;
#define READ_ETPS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ETPS_MASK) >> ETPS_START_BIT )

#define WRITE_ETPS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ETPS_MASK) | ((val << ETPS_START_BIT) & ETPS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External clock enable 
    // 
#define ECE_MASK 0x4000U
#define ECE_OFFSET 14
#define ECE_START_BIT 14
#define ECE_WIDTH 1



typedef enum ece {
    ECE_0,
    ECE_1
} ECE_T ;
#define WRITE_ECE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ECE_MASK) | ((val << ECE_START_BIT) & ECE_MASK )); \
   } 

#define ENABLE_ECE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  ECE_MASK ); \
   } 

#define DISABLE_ECE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~ECE_MASK ); \
   } 

#define READ_ECE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ECE_MASK) >> ECE_START_BIT )

#define WHEN_ECE_HIGH(base) \
     if ( READ_ECE(base) )


#define UNLESS_ECE_HIGH(base) \
     if (! READ_ECE(base) )


#define WAIT_ECE_LOW(base) \
    while ( READ_ECE(base) );


#define WAIT_ECE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ECE(base) && (--timeout > 0) );


#define WAIT_ECE_HIGH(base) \
    while (! READ_ECE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // External trigger polarity 
    // 
#define ETP_MASK 0x8000U
#define ETP_OFFSET 15
#define ETP_START_BIT 15
#define ETP_WIDTH 1



typedef enum etp {
    ETP_0,
    ETP_1
} ETP_T ;
#define WRITE_ETP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ETP_MASK) | ((val << ETP_START_BIT) & ETP_MASK )); \
   } 

#define ENABLE_ETP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  ETP_MASK ); \
   } 

#define DISABLE_ETP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~ETP_MASK ); \
   } 

#define READ_ETP(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ETP_MASK) >> ETP_START_BIT )

#define WHEN_ETP_HIGH(base) \
     if ( READ_ETP(base) )


#define UNLESS_ETP_HIGH(base) \
     if (! READ_ETP(base) )


#define WAIT_ETP_LOW(base) \
    while ( READ_ETP(base) );


#define WAIT_ETP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ETP(base) && (--timeout > 0) );


#define WAIT_ETP_HIGH(base) \
    while (! READ_ETP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register slave mode control register (SMCR) at the offset 0x8, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Slave mode selection 
    // 
#define SMS3_MASK 0x10000U
#define SMS3_OFFSET 16
#define SMS3_START_BIT 16
#define SMS3_WIDTH 1



typedef enum sms3 {
    SMS_3_0,
    SMS_3_1
} SMS_3_T ;
#define WRITE_SMS3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~SMS3_MASK) | ((val << SMS3_START_BIT) & SMS3_MASK )); \
   } 

#define ENABLE_SMS3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  SMS3_MASK ); \
   } 

#define DISABLE_SMS3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~SMS3_MASK ); \
   } 

#define READ_SMS3(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & SMS3_MASK) >> SMS3_START_BIT )

#define WHEN_SMS3_HIGH(base) \
     if ( READ_SMS3(base) )


#define UNLESS_SMS3_HIGH(base) \
     if (! READ_SMS3(base) )


#define WAIT_SMS3_LOW(base) \
    while ( READ_SMS3(base) );


#define WAIT_SMS3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SMS3(base) && (--timeout > 0) );


#define WAIT_SMS3_HIGH(base) \
    while (! READ_SMS3(base) );


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
// Function : UIE
//
// Return the value of register Dier
//
// Notes : Update interrupt enable 
//        (DIER) at the offset 0xC, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC1IE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 1 interrupt enable 
//        (DIER) at the offset 0xC, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC1IE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC1IE_MASK) | ((val << CC1IE_START_BIT) & CC1IE_MASK )); \
   } 

#define ENABLE_CC1IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC1IE_MASK ); \
   } 

#define DISABLE_CC1IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC1IE_MASK ); \
   } 

#define READ_CC1IE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC1IE_MASK) >> CC1IE_START_BIT )

#define WHEN_CC1IE_HIGH(base) \
     if ( READ_CC1IE(base) )


#define UNLESS_CC1IE_HIGH(base) \
     if (! READ_CC1IE(base) )


#define WAIT_CC1IE_LOW(base) \
    while ( READ_CC1IE(base) );


#define WAIT_CC1IE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1IE(base) && (--timeout > 0) );


#define WAIT_CC1IE_HIGH(base) \
    while (! READ_CC1IE(base) );


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
// Function : CC1IF
//
// Return the value of register Sr
//
// Notes : Capture/compare 1 interrupt flag 
//        (SR) at the offset 0x10, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC1IF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC1IF_MASK) | ((val << CC1IF_START_BIT) & CC1IF_MASK )); \
   } 

#define ENABLE_CC1IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC1IF_MASK ); \
   } 

#define DISABLE_CC1IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC1IF_MASK ); \
   } 

#define READ_CC1IF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC1IF_MASK) >> CC1IF_START_BIT )

#define WHEN_CC1IF_HIGH(base) \
     if ( READ_CC1IF(base) )


#define UNLESS_CC1IF_HIGH(base) \
     if (! READ_CC1IF(base) )


#define WAIT_CC1IF_LOW(base) \
    while ( READ_CC1IF(base) );


#define WAIT_CC1IF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1IF(base) && (--timeout > 0) );


#define WAIT_CC1IF_HIGH(base) \
    while (! READ_CC1IF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC1OF
//
// Return the value of register Sr
//
// Notes : Capture/Compare 1 overcapture flag 
//        (SR) at the offset 0x10, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC1OF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC1OF_MASK) | ((val << CC1OF_START_BIT) & CC1OF_MASK )); \
   } 

#define ENABLE_CC1OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC1OF_MASK ); \
   } 

#define DISABLE_CC1OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC1OF_MASK ); \
   } 

#define READ_CC1OF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC1OF_MASK) >> CC1OF_START_BIT )

#define WHEN_CC1OF_HIGH(base) \
     if ( READ_CC1OF(base) )


#define UNLESS_CC1OF_HIGH(base) \
     if (! READ_CC1OF(base) )


#define WAIT_CC1OF_LOW(base) \
    while ( READ_CC1OF(base) );


#define WAIT_CC1OF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1OF(base) && (--timeout > 0) );


#define WAIT_CC1OF_HIGH(base) \
    while (! READ_CC1OF(base) );


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
// Function : UG
//
// Return the value of register Egr
//
// Notes : Update generation 
//        (EGR) at the offset 0x14, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC1G
//
// Return the value of register Egr
//
// Notes : Capture/compare 1 generation 
//        (EGR) at the offset 0x14, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC1G(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~CC1G_MASK) | ((val << CC1G_START_BIT) & CC1G_MASK )); \
   } 

#define ENABLE_CC1G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  CC1G_MASK ); \
   } 

#define DISABLE_CC1G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~CC1G_MASK ); \
   } 

#define READ_CC1G(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & CC1G_MASK) >> CC1G_START_BIT )

#define WHEN_CC1G_HIGH(base) \
     if ( READ_CC1G(base) )


#define UNLESS_CC1G_HIGH(base) \
     if (! READ_CC1G(base) )


#define WAIT_CC1G_LOW(base) \
    while ( READ_CC1G(base) );


#define WAIT_CC1G_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1G(base) && (--timeout > 0) );


#define WAIT_CC1G_HIGH(base) \
    while (! READ_CC1G(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Input
//
// Return the value of register CCMR1_INPUT
//
// Notes : Register Ccmr1Input at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCMR_1_INPUT( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x18, val)

#define SET_BITS_CCMR_1_INPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  mask ); \
   } 

#define CLEAR_BITS_CCMR_1_INPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18,  val & ~mask ); \
   } 

#define READ_REGISTER_CCMR_1_INPUT( base ) \
     READ_REGISTER_ULONG( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Input
//
// Return the value of register CCMR_1_INPUT
//
// Notes : Register capture/compare mode register 1 (input mode) (CCMR1_Input) at the offset 0x18, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 1 selection 
    // 
#define CC1S_MASK 0x3U
#define CC1S_OFFSET 1
#define CC1S_START_BIT 0
#define CC1S_WIDTH 2


#define CCMR_1_INPUT_REG 0x18

typedef enum cc1s {
    CC_1S_0,
    CC_1S_1
} CC_1S_T ;
#define READ_CC1S(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CC1S_MASK) >> CC1S_START_BIT )

#define WRITE_CC1S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CC1S_MASK) | ((val << CC1S_START_BIT) & CC1S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Input
//
// Return the value of register CCMR_1_INPUT
//
// Notes : Register capture/compare mode register 1 (input mode) (CCMR1_Input) at the offset 0x18, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input capture 1 prescaler 
    // 
#define ICPCS_MASK 0xCU
#define ICPCS_OFFSET 3
#define ICPCS_START_BIT 2
#define ICPCS_WIDTH 2



typedef enum icpcs {
    ICPCS_0,
    ICPCS_1
} ICPCS_T ;
#define READ_ICPCS(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ICPCS_MASK) >> ICPCS_START_BIT )

#define WRITE_ICPCS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ICPCS_MASK) | ((val << ICPCS_START_BIT) & ICPCS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Input
//
// Return the value of register CCMR_1_INPUT
//
// Notes : Register capture/compare mode register 1 (input mode) (CCMR1_Input) at the offset 0x18, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input capture 1 filter 
    // 
#define IC1F_MASK 0xF0U
#define IC1F_OFFSET 7
#define IC1F_START_BIT 4
#define IC1F_WIDTH 4



typedef enum ic1f {
    IC_1F_0,
    IC_1F_1
} IC_1F_T ;
#define READ_IC1F(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & IC1F_MASK) >> IC1F_START_BIT )

#define WRITE_IC1F(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~IC1F_MASK) | ((val << IC1F_START_BIT) & IC1F_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Output
//
// Return the value of register CCMR1_OUTPUT
//
// Notes : Register Ccmr1Output at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCMR_1_OUTPUT( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x18, val)

#define SET_BITS_CCMR_1_OUTPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  mask ); \
   } 

#define CLEAR_BITS_CCMR_1_OUTPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18,  val & ~mask ); \
   } 

#define READ_REGISTER_CCMR_1_OUTPUT( base ) \
     READ_REGISTER_ULONG( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Output
//
// Return the value of register CCMR_1_OUTPUT
//
// Notes : Register capture/compare mode register 1 (output mode) (CCMR1_Output) at the offset 0x18, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 1 selection 
    // 
#define CC1S_MASK 0x3U
#define CC1S_OFFSET 1
#define CC1S_START_BIT 0
#define CC1S_WIDTH 2


#define CCMR_1_OUTPUT_REG 0x18

#define READ_CC1S(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CC1S_MASK) >> CC1S_START_BIT )

#define WRITE_CC1S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CC1S_MASK) | ((val << CC1S_START_BIT) & CC1S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Output
//
// Return the value of register CCMR_1_OUTPUT
//
// Notes : Register capture/compare mode register 1 (output mode) (CCMR1_Output) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output Compare 1 fast enable 
    // 
#define OC1FE_MASK 0x4U
#define OC1FE_OFFSET 2
#define OC1FE_START_BIT 2
#define OC1FE_WIDTH 1



typedef enum oc1fe {
    OC_1FE_0,
    OC_1FE_1
} OC_1FE_T ;
#define WRITE_OC1FE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC1FE_MASK) | ((val << OC1FE_START_BIT) & OC1FE_MASK )); \
   } 

#define ENABLE_OC1FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OC1FE_MASK ); \
   } 

#define DISABLE_OC1FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OC1FE_MASK ); \
   } 

#define READ_OC1FE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC1FE_MASK) >> OC1FE_START_BIT )

#define WHEN_OC1FE_HIGH(base) \
     if ( READ_OC1FE(base) )


#define UNLESS_OC1FE_HIGH(base) \
     if (! READ_OC1FE(base) )


#define WAIT_OC1FE_LOW(base) \
    while ( READ_OC1FE(base) );


#define WAIT_OC1FE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC1FE(base) && (--timeout > 0) );


#define WAIT_OC1FE_HIGH(base) \
    while (! READ_OC1FE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Output
//
// Return the value of register CCMR_1_OUTPUT
//
// Notes : Register capture/compare mode register 1 (output mode) (CCMR1_Output) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output Compare 1 preload enable 
    // 
#define OC1PE_MASK 0x8U
#define OC1PE_OFFSET 3
#define OC1PE_START_BIT 3
#define OC1PE_WIDTH 1



typedef enum oc1pe {
    OC_1PE_0,
    OC_1PE_1
} OC_1PE_T ;
#define WRITE_OC1PE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC1PE_MASK) | ((val << OC1PE_START_BIT) & OC1PE_MASK )); \
   } 

#define ENABLE_OC1PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OC1PE_MASK ); \
   } 

#define DISABLE_OC1PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OC1PE_MASK ); \
   } 

#define READ_OC1PE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC1PE_MASK) >> OC1PE_START_BIT )

#define WHEN_OC1PE_HIGH(base) \
     if ( READ_OC1PE(base) )


#define UNLESS_OC1PE_HIGH(base) \
     if (! READ_OC1PE(base) )


#define WAIT_OC1PE_LOW(base) \
    while ( READ_OC1PE(base) );


#define WAIT_OC1PE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC1PE(base) && (--timeout > 0) );


#define WAIT_OC1PE_HIGH(base) \
    while (! READ_OC1PE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Output
//
// Return the value of register CCMR_1_OUTPUT
//
// Notes : Register capture/compare mode register 1 (output mode) (CCMR1_Output) at the offset 0x18, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output Compare 1 mode 
    // 
#define OC1M_MASK 0x70U
#define OC1M_OFFSET 6
#define OC1M_START_BIT 4
#define OC1M_WIDTH 3



typedef enum oc1m {
    OC_1M_0,
    OC_1M_1
} OC_1M_T ;
#define READ_OC1M(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC1M_MASK) >> OC1M_START_BIT )

#define WRITE_OC1M(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC1M_MASK) | ((val << OC1M_START_BIT) & OC1M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccer
//
// Return the value of register CCER
//
// Notes : Register Ccer at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCER( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x20, val)

#define SET_BITS_CCER(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  mask ); \
   } 

#define CLEAR_BITS_CCER(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20,  val & ~mask ); \
   } 

#define READ_REGISTER_CCER( base ) \
     READ_REGISTER_ULONG( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccer
//
// Return the value of register CCER
//
// Notes : Register capture/compare enable register (CCER) at the offset 0x20, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 1 output enable 
    // 
#define CC1E_MASK 0x1U
#define CC1E_OFFSET 0
#define CC1E_START_BIT 0
#define CC1E_WIDTH 1


#define CCER_REG 0x20

typedef enum cc1e {
    CC_1E_0,
    CC_1E_1
} CC_1E_T ;
#define WRITE_CC1E(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC1E_MASK) | ((val << CC1E_START_BIT) & CC1E_MASK )); \
   } 

#define ENABLE_CC1E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC1E_MASK ); \
   } 

#define DISABLE_CC1E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC1E_MASK ); \
   } 

#define READ_CC1E(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC1E_MASK) >> CC1E_START_BIT )

#define WHEN_CC1E_HIGH(base) \
     if ( READ_CC1E(base) )


#define UNLESS_CC1E_HIGH(base) \
     if (! READ_CC1E(base) )


#define WAIT_CC1E_LOW(base) \
    while ( READ_CC1E(base) );


#define WAIT_CC1E_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1E(base) && (--timeout > 0) );


#define WAIT_CC1E_HIGH(base) \
    while (! READ_CC1E(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccer
//
// Return the value of register CCER
//
// Notes : Register capture/compare enable register (CCER) at the offset 0x20, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 1 output Polarity 
    // 
#define CC1P_MASK 0x2U
#define CC1P_OFFSET 1
#define CC1P_START_BIT 1
#define CC1P_WIDTH 1



typedef enum cc1p {
    CC_1P_0,
    CC_1P_1
} CC_1P_T ;
#define WRITE_CC1P(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC1P_MASK) | ((val << CC1P_START_BIT) & CC1P_MASK )); \
   } 

#define ENABLE_CC1P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC1P_MASK ); \
   } 

#define DISABLE_CC1P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC1P_MASK ); \
   } 

#define READ_CC1P(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC1P_MASK) >> CC1P_START_BIT )

#define WHEN_CC1P_HIGH(base) \
     if ( READ_CC1P(base) )


#define UNLESS_CC1P_HIGH(base) \
     if (! READ_CC1P(base) )


#define WAIT_CC1P_LOW(base) \
    while ( READ_CC1P(base) );


#define WAIT_CC1P_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1P(base) && (--timeout > 0) );


#define WAIT_CC1P_HIGH(base) \
    while (! READ_CC1P(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccer
//
// Return the value of register CCER
//
// Notes : Register capture/compare enable register (CCER) at the offset 0x20, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 1 output Polarity 
    // 
#define CC1NP_MASK 0x8U
#define CC1NP_OFFSET 3
#define CC1NP_START_BIT 3
#define CC1NP_WIDTH 1



typedef enum cc1np {
    CC_1NP_0,
    CC_1NP_1
} CC_1NP_T ;
#define WRITE_CC1NP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC1NP_MASK) | ((val << CC1NP_START_BIT) & CC1NP_MASK )); \
   } 

#define ENABLE_CC1NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC1NP_MASK ); \
   } 

#define DISABLE_CC1NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC1NP_MASK ); \
   } 

#define READ_CC1NP(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC1NP_MASK) >> CC1NP_START_BIT )

#define WHEN_CC1NP_HIGH(base) \
     if ( READ_CC1NP(base) )


#define UNLESS_CC1NP_HIGH(base) \
     if (! READ_CC1NP(base) )


#define WAIT_CC1NP_LOW(base) \
    while ( READ_CC1NP(base) );


#define WAIT_CC1NP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1NP(base) && (--timeout > 0) );


#define WAIT_CC1NP_HIGH(base) \
    while (! READ_CC1NP(base) );


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
// Notes : counter value 
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
// Function : PSC
//
// Return the value of register Psc
//
// Notes : Prescaler value 
//        (PSC) at the offset 0x28, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
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
// Notes : Auto-reload value 
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

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr1
//
// Return the value of register CCR1
//
// Notes : Register Ccr1 at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x34, val)

#define SET_BITS_CCR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  mask ); \
   } 

#define CLEAR_BITS_CCR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34,  val & ~mask ); \
   } 

#define READ_REGISTER_CCR_1( base ) \
     READ_REGISTER_ULONG( base + 0x34) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr1
//
// Return the value of register CCR_1
//
// Notes : Register capture/compare register 1 (CCR1) at the offset 0x34, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 1 value 
    // 
#define CCR1_MASK 0xFFFFU
#define CCR1_OFFSET 15
#define CCR1_START_BIT 0
#define CCR1_WIDTH 16


#define CCR_1_REG 0x34

typedef enum ccr1 {
    CCR_1_0,
    CCR_1_1
} CCR_1_T ;
#define READ_CCR1(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & CCR1_MASK) >> CCR1_START_BIT )

#define WRITE_CCR1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~CCR1_MASK) | ((val << CCR1_START_BIT) & CCR1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Or
//
// Return the value of register OR
//
// Notes : Register Or at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x50, val)

#define SET_BITS_OR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x50); \
     WRITE_REGISTER_ULONG( base + 0x50, val |  mask ); \
   } 

#define CLEAR_BITS_OR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x50); \
     WRITE_REGISTER_ULONG( base + 0x50,  val & ~mask ); \
   } 

#define READ_REGISTER_OR( base ) \
     READ_REGISTER_ULONG( base + 0x50) 

/////////////////////////////////////////////////////////////////////////
//
// Function : TI1_RMP
//
// Return the value of register Or
//
// Notes : TIM11 Input 1 remapping capability 
//        (OR) at the offset 0x50, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_TI1_RMP(base) \
    ((READ_REGISTER_ULONG(base + 0x50) & TI1_RMP_MASK) >> TI1_RMP_START_BIT )

#define WRITE_TI1_RMP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x50); \
     WRITE_REGISTER_ULONG( base + 0x50, (OldValue & ~TI1_RMP_MASK) | ((val << TI1_RMP_START_BIT) & TI1_RMP_MASK )); \
   } 

