/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/tim4.h
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
 
#define NB_DEVICE_TIM4 2
#define TIM4 0x40000800
#define TIM5 0x40000C00
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
// Function : DIR
//
// Return the value of register Cr1
//
// Notes : Direction 
//        (CR1) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

#define ENABLE_DIR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DIR_MASK ); \
   } 

#define DISABLE_DIR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DIR_MASK ); \
   } 

#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base ) & DIR_MASK) >> DIR_START_BIT )

#define WHEN_DIR_HIGH(base) \
     if ( READ_DIR(base) )


#define UNLESS_DIR_HIGH(base) \
     if (! READ_DIR(base) )


#define WAIT_DIR_LOW(base) \
    while ( READ_DIR(base) );


#define WAIT_DIR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DIR(base) && (--timeout > 0) );


#define WAIT_DIR_HIGH(base) \
    while (! READ_DIR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CMS
//
// Return the value of register Cr1
//
// Notes : Center-aligned mode selection 
//        (CR1) at the offset 0x0, Bits 5:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_CMS(base) \
    ((READ_REGISTER_ULONG(base ) & CMS_MASK) >> CMS_START_BIT )

#define WRITE_CMS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CMS_MASK) | ((val << CMS_START_BIT) & CMS_MASK )); \
   } 

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
// Function : CCDS
//
// Return the value of register Cr2
//
// Notes : Capture/compare DMA selection 
//        (CR2) at the offset 0x4, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CCDS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~CCDS_MASK) | ((val << CCDS_START_BIT) & CCDS_MASK )); \
   } 

#define ENABLE_CCDS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  CCDS_MASK ); \
   } 

#define DISABLE_CCDS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~CCDS_MASK ); \
   } 

#define READ_CCDS(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & CCDS_MASK) >> CCDS_START_BIT )

#define WHEN_CCDS_HIGH(base) \
     if ( READ_CCDS(base) )


#define UNLESS_CCDS_HIGH(base) \
     if (! READ_CCDS(base) )


#define WAIT_CCDS_LOW(base) \
    while ( READ_CCDS(base) );


#define WAIT_CCDS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CCDS(base) && (--timeout > 0) );


#define WAIT_CCDS_HIGH(base) \
    while (! READ_CCDS(base) );


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
// Function : TI1S
//
// Return the value of register Cr2
//
// Notes : TI1 selection 
//        (CR2) at the offset 0x4, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TI1S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TI1S_MASK) | ((val << TI1S_START_BIT) & TI1S_MASK )); \
   } 

#define ENABLE_TI1S(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TI1S_MASK ); \
   } 

#define DISABLE_TI1S(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TI1S_MASK ); \
   } 

#define READ_TI1S(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TI1S_MASK) >> TI1S_START_BIT )

#define WHEN_TI1S_HIGH(base) \
     if ( READ_TI1S(base) )


#define UNLESS_TI1S_HIGH(base) \
     if (! READ_TI1S(base) )


#define WAIT_TI1S_LOW(base) \
    while ( READ_TI1S(base) );


#define WAIT_TI1S_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TI1S(base) && (--timeout > 0) );


#define WAIT_TI1S_HIGH(base) \
    while (! READ_TI1S(base) );


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
// Function : SMS
//
// Return the value of register Smcr
//
// Notes : Slave mode selection 
//        (SMCR) at the offset 0x8, Bits 0:2
//
/////////////////////////////////////////////////////////////////////////
#define READ_SMS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & SMS_MASK) >> SMS_START_BIT )

#define WRITE_SMS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~SMS_MASK) | ((val << SMS_START_BIT) & SMS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : TS
//
// Return the value of register Smcr
//
// Notes : Trigger selection 
//        (SMCR) at the offset 0x8, Bits 4:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_TS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & TS_MASK) >> TS_START_BIT )

#define WRITE_TS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~TS_MASK) | ((val << TS_START_BIT) & TS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MSM
//
// Return the value of register Smcr
//
// Notes : Master/Slave mode 
//        (SMCR) at the offset 0x8, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
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
// Function : ETF
//
// Return the value of register Smcr
//
// Notes : External trigger filter 
//        (SMCR) at the offset 0x8, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_ETF(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ETF_MASK) >> ETF_START_BIT )

#define WRITE_ETF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ETF_MASK) | ((val << ETF_START_BIT) & ETF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ETPS
//
// Return the value of register Smcr
//
// Notes : External trigger prescaler 
//        (SMCR) at the offset 0x8, Bits 12:13
//
/////////////////////////////////////////////////////////////////////////
#define READ_ETPS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ETPS_MASK) >> ETPS_START_BIT )

#define WRITE_ETPS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ETPS_MASK) | ((val << ETPS_START_BIT) & ETPS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ECE
//
// Return the value of register Smcr
//
// Notes : External clock enable 
//        (SMCR) at the offset 0x8, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
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
// Function : ETP
//
// Return the value of register Smcr
//
// Notes : External trigger polarity 
//        (SMCR) at the offset 0x8, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC2IE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 2 interrupt enable 
//        (DIER) at the offset 0xC, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2IE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC2IE_MASK) | ((val << CC2IE_START_BIT) & CC2IE_MASK )); \
   } 

#define ENABLE_CC2IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC2IE_MASK ); \
   } 

#define DISABLE_CC2IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC2IE_MASK ); \
   } 

#define READ_CC2IE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC2IE_MASK) >> CC2IE_START_BIT )

#define WHEN_CC2IE_HIGH(base) \
     if ( READ_CC2IE(base) )


#define UNLESS_CC2IE_HIGH(base) \
     if (! READ_CC2IE(base) )


#define WAIT_CC2IE_LOW(base) \
    while ( READ_CC2IE(base) );


#define WAIT_CC2IE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2IE(base) && (--timeout > 0) );


#define WAIT_CC2IE_HIGH(base) \
    while (! READ_CC2IE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3IE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 3 interrupt enable 
//        (DIER) at the offset 0xC, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3IE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC3IE_MASK) | ((val << CC3IE_START_BIT) & CC3IE_MASK )); \
   } 

#define ENABLE_CC3IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC3IE_MASK ); \
   } 

#define DISABLE_CC3IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC3IE_MASK ); \
   } 

#define READ_CC3IE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC3IE_MASK) >> CC3IE_START_BIT )

#define WHEN_CC3IE_HIGH(base) \
     if ( READ_CC3IE(base) )


#define UNLESS_CC3IE_HIGH(base) \
     if (! READ_CC3IE(base) )


#define WAIT_CC3IE_LOW(base) \
    while ( READ_CC3IE(base) );


#define WAIT_CC3IE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3IE(base) && (--timeout > 0) );


#define WAIT_CC3IE_HIGH(base) \
    while (! READ_CC3IE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4IE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 4 interrupt enable 
//        (DIER) at the offset 0xC, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4IE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC4IE_MASK) | ((val << CC4IE_START_BIT) & CC4IE_MASK )); \
   } 

#define ENABLE_CC4IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC4IE_MASK ); \
   } 

#define DISABLE_CC4IE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC4IE_MASK ); \
   } 

#define READ_CC4IE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC4IE_MASK) >> CC4IE_START_BIT )

#define WHEN_CC4IE_HIGH(base) \
     if ( READ_CC4IE(base) )


#define UNLESS_CC4IE_HIGH(base) \
     if (! READ_CC4IE(base) )


#define WAIT_CC4IE_LOW(base) \
    while ( READ_CC4IE(base) );


#define WAIT_CC4IE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4IE(base) && (--timeout > 0) );


#define WAIT_CC4IE_HIGH(base) \
    while (! READ_CC4IE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TIE
//
// Return the value of register Dier
//
// Notes : Trigger interrupt enable 
//        (DIER) at the offset 0xC, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~TIE_MASK) | ((val << TIE_START_BIT) & TIE_MASK )); \
   } 

#define ENABLE_TIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  TIE_MASK ); \
   } 

#define DISABLE_TIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~TIE_MASK ); \
   } 

#define READ_TIE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & TIE_MASK) >> TIE_START_BIT )

#define WHEN_TIE_HIGH(base) \
     if ( READ_TIE(base) )


#define UNLESS_TIE_HIGH(base) \
     if (! READ_TIE(base) )


#define WAIT_TIE_LOW(base) \
    while ( READ_TIE(base) );


#define WAIT_TIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIE(base) && (--timeout > 0) );


#define WAIT_TIE_HIGH(base) \
    while (! READ_TIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : UDE
//
// Return the value of register Dier
//
// Notes : Update DMA request enable 
//        (DIER) at the offset 0xC, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC1DE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 1 DMA request enable 
//        (DIER) at the offset 0xC, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC1DE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC1DE_MASK) | ((val << CC1DE_START_BIT) & CC1DE_MASK )); \
   } 

#define ENABLE_CC1DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC1DE_MASK ); \
   } 

#define DISABLE_CC1DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC1DE_MASK ); \
   } 

#define READ_CC1DE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC1DE_MASK) >> CC1DE_START_BIT )

#define WHEN_CC1DE_HIGH(base) \
     if ( READ_CC1DE(base) )


#define UNLESS_CC1DE_HIGH(base) \
     if (! READ_CC1DE(base) )


#define WAIT_CC1DE_LOW(base) \
    while ( READ_CC1DE(base) );


#define WAIT_CC1DE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC1DE(base) && (--timeout > 0) );


#define WAIT_CC1DE_HIGH(base) \
    while (! READ_CC1DE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC2DE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 2 DMA request enable 
//        (DIER) at the offset 0xC, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2DE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC2DE_MASK) | ((val << CC2DE_START_BIT) & CC2DE_MASK )); \
   } 

#define ENABLE_CC2DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC2DE_MASK ); \
   } 

#define DISABLE_CC2DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC2DE_MASK ); \
   } 

#define READ_CC2DE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC2DE_MASK) >> CC2DE_START_BIT )

#define WHEN_CC2DE_HIGH(base) \
     if ( READ_CC2DE(base) )


#define UNLESS_CC2DE_HIGH(base) \
     if (! READ_CC2DE(base) )


#define WAIT_CC2DE_LOW(base) \
    while ( READ_CC2DE(base) );


#define WAIT_CC2DE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2DE(base) && (--timeout > 0) );


#define WAIT_CC2DE_HIGH(base) \
    while (! READ_CC2DE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3DE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 3 DMA request enable 
//        (DIER) at the offset 0xC, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3DE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC3DE_MASK) | ((val << CC3DE_START_BIT) & CC3DE_MASK )); \
   } 

#define ENABLE_CC3DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC3DE_MASK ); \
   } 

#define DISABLE_CC3DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC3DE_MASK ); \
   } 

#define READ_CC3DE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC3DE_MASK) >> CC3DE_START_BIT )

#define WHEN_CC3DE_HIGH(base) \
     if ( READ_CC3DE(base) )


#define UNLESS_CC3DE_HIGH(base) \
     if (! READ_CC3DE(base) )


#define WAIT_CC3DE_LOW(base) \
    while ( READ_CC3DE(base) );


#define WAIT_CC3DE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3DE(base) && (--timeout > 0) );


#define WAIT_CC3DE_HIGH(base) \
    while (! READ_CC3DE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4DE
//
// Return the value of register Dier
//
// Notes : Capture/Compare 4 DMA request enable 
//        (DIER) at the offset 0xC, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4DE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~CC4DE_MASK) | ((val << CC4DE_START_BIT) & CC4DE_MASK )); \
   } 

#define ENABLE_CC4DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  CC4DE_MASK ); \
   } 

#define DISABLE_CC4DE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~CC4DE_MASK ); \
   } 

#define READ_CC4DE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & CC4DE_MASK) >> CC4DE_START_BIT )

#define WHEN_CC4DE_HIGH(base) \
     if ( READ_CC4DE(base) )


#define UNLESS_CC4DE_HIGH(base) \
     if (! READ_CC4DE(base) )


#define WAIT_CC4DE_LOW(base) \
    while ( READ_CC4DE(base) );


#define WAIT_CC4DE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4DE(base) && (--timeout > 0) );


#define WAIT_CC4DE_HIGH(base) \
    while (! READ_CC4DE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TDE
//
// Return the value of register Dier
//
// Notes : Trigger DMA request enable 
//        (DIER) at the offset 0xC, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TDE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~TDE_MASK) | ((val << TDE_START_BIT) & TDE_MASK )); \
   } 

#define ENABLE_TDE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  TDE_MASK ); \
   } 

#define DISABLE_TDE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~TDE_MASK ); \
   } 

#define READ_TDE(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & TDE_MASK) >> TDE_START_BIT )

#define WHEN_TDE_HIGH(base) \
     if ( READ_TDE(base) )


#define UNLESS_TDE_HIGH(base) \
     if (! READ_TDE(base) )


#define WAIT_TDE_LOW(base) \
    while ( READ_TDE(base) );


#define WAIT_TDE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TDE(base) && (--timeout > 0) );


#define WAIT_TDE_HIGH(base) \
    while (! READ_TDE(base) );


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
// Function : CC2IF
//
// Return the value of register Sr
//
// Notes : Capture/Compare 2 interrupt flag 
//        (SR) at the offset 0x10, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2IF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC2IF_MASK) | ((val << CC2IF_START_BIT) & CC2IF_MASK )); \
   } 

#define ENABLE_CC2IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC2IF_MASK ); \
   } 

#define DISABLE_CC2IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC2IF_MASK ); \
   } 

#define READ_CC2IF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC2IF_MASK) >> CC2IF_START_BIT )

#define WHEN_CC2IF_HIGH(base) \
     if ( READ_CC2IF(base) )


#define UNLESS_CC2IF_HIGH(base) \
     if (! READ_CC2IF(base) )


#define WAIT_CC2IF_LOW(base) \
    while ( READ_CC2IF(base) );


#define WAIT_CC2IF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2IF(base) && (--timeout > 0) );


#define WAIT_CC2IF_HIGH(base) \
    while (! READ_CC2IF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3IF
//
// Return the value of register Sr
//
// Notes : Capture/Compare 3 interrupt flag 
//        (SR) at the offset 0x10, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3IF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC3IF_MASK) | ((val << CC3IF_START_BIT) & CC3IF_MASK )); \
   } 

#define ENABLE_CC3IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC3IF_MASK ); \
   } 

#define DISABLE_CC3IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC3IF_MASK ); \
   } 

#define READ_CC3IF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC3IF_MASK) >> CC3IF_START_BIT )

#define WHEN_CC3IF_HIGH(base) \
     if ( READ_CC3IF(base) )


#define UNLESS_CC3IF_HIGH(base) \
     if (! READ_CC3IF(base) )


#define WAIT_CC3IF_LOW(base) \
    while ( READ_CC3IF(base) );


#define WAIT_CC3IF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3IF(base) && (--timeout > 0) );


#define WAIT_CC3IF_HIGH(base) \
    while (! READ_CC3IF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4IF
//
// Return the value of register Sr
//
// Notes : Capture/Compare 4 interrupt flag 
//        (SR) at the offset 0x10, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4IF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC4IF_MASK) | ((val << CC4IF_START_BIT) & CC4IF_MASK )); \
   } 

#define ENABLE_CC4IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC4IF_MASK ); \
   } 

#define DISABLE_CC4IF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC4IF_MASK ); \
   } 

#define READ_CC4IF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC4IF_MASK) >> CC4IF_START_BIT )

#define WHEN_CC4IF_HIGH(base) \
     if ( READ_CC4IF(base) )


#define UNLESS_CC4IF_HIGH(base) \
     if (! READ_CC4IF(base) )


#define WAIT_CC4IF_LOW(base) \
    while ( READ_CC4IF(base) );


#define WAIT_CC4IF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4IF(base) && (--timeout > 0) );


#define WAIT_CC4IF_HIGH(base) \
    while (! READ_CC4IF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TIF
//
// Return the value of register Sr
//
// Notes : Trigger interrupt flag 
//        (SR) at the offset 0x10, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TIF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~TIF_MASK) | ((val << TIF_START_BIT) & TIF_MASK )); \
   } 

#define ENABLE_TIF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  TIF_MASK ); \
   } 

#define DISABLE_TIF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~TIF_MASK ); \
   } 

#define READ_TIF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & TIF_MASK) >> TIF_START_BIT )

#define WHEN_TIF_HIGH(base) \
     if ( READ_TIF(base) )


#define UNLESS_TIF_HIGH(base) \
     if (! READ_TIF(base) )


#define WAIT_TIF_LOW(base) \
    while ( READ_TIF(base) );


#define WAIT_TIF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIF(base) && (--timeout > 0) );


#define WAIT_TIF_HIGH(base) \
    while (! READ_TIF(base) );


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
// Function : CC2OF
//
// Return the value of register Sr
//
// Notes : Capture/compare 2 overcapture flag 
//        (SR) at the offset 0x10, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2OF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC2OF_MASK) | ((val << CC2OF_START_BIT) & CC2OF_MASK )); \
   } 

#define ENABLE_CC2OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC2OF_MASK ); \
   } 

#define DISABLE_CC2OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC2OF_MASK ); \
   } 

#define READ_CC2OF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC2OF_MASK) >> CC2OF_START_BIT )

#define WHEN_CC2OF_HIGH(base) \
     if ( READ_CC2OF(base) )


#define UNLESS_CC2OF_HIGH(base) \
     if (! READ_CC2OF(base) )


#define WAIT_CC2OF_LOW(base) \
    while ( READ_CC2OF(base) );


#define WAIT_CC2OF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2OF(base) && (--timeout > 0) );


#define WAIT_CC2OF_HIGH(base) \
    while (! READ_CC2OF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3OF
//
// Return the value of register Sr
//
// Notes : Capture/Compare 3 overcapture flag 
//        (SR) at the offset 0x10, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3OF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC3OF_MASK) | ((val << CC3OF_START_BIT) & CC3OF_MASK )); \
   } 

#define ENABLE_CC3OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC3OF_MASK ); \
   } 

#define DISABLE_CC3OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC3OF_MASK ); \
   } 

#define READ_CC3OF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC3OF_MASK) >> CC3OF_START_BIT )

#define WHEN_CC3OF_HIGH(base) \
     if ( READ_CC3OF(base) )


#define UNLESS_CC3OF_HIGH(base) \
     if (! READ_CC3OF(base) )


#define WAIT_CC3OF_LOW(base) \
    while ( READ_CC3OF(base) );


#define WAIT_CC3OF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3OF(base) && (--timeout > 0) );


#define WAIT_CC3OF_HIGH(base) \
    while (! READ_CC3OF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4OF
//
// Return the value of register Sr
//
// Notes : Capture/Compare 4 overcapture flag 
//        (SR) at the offset 0x10, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4OF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CC4OF_MASK) | ((val << CC4OF_START_BIT) & CC4OF_MASK )); \
   } 

#define ENABLE_CC4OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  CC4OF_MASK ); \
   } 

#define DISABLE_CC4OF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x10 ); \
     WRITE_REGISTER_ULONG( base + 0x10, val & ~CC4OF_MASK ); \
   } 

#define READ_CC4OF(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CC4OF_MASK) >> CC4OF_START_BIT )

#define WHEN_CC4OF_HIGH(base) \
     if ( READ_CC4OF(base) )


#define UNLESS_CC4OF_HIGH(base) \
     if (! READ_CC4OF(base) )


#define WAIT_CC4OF_LOW(base) \
    while ( READ_CC4OF(base) );


#define WAIT_CC4OF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4OF(base) && (--timeout > 0) );


#define WAIT_CC4OF_HIGH(base) \
    while (! READ_CC4OF(base) );


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
// Function : CC2G
//
// Return the value of register Egr
//
// Notes : Capture/compare 2 generation 
//        (EGR) at the offset 0x14, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2G(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~CC2G_MASK) | ((val << CC2G_START_BIT) & CC2G_MASK )); \
   } 

#define ENABLE_CC2G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  CC2G_MASK ); \
   } 

#define DISABLE_CC2G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~CC2G_MASK ); \
   } 

#define READ_CC2G(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & CC2G_MASK) >> CC2G_START_BIT )

#define WHEN_CC2G_HIGH(base) \
     if ( READ_CC2G(base) )


#define UNLESS_CC2G_HIGH(base) \
     if (! READ_CC2G(base) )


#define WAIT_CC2G_LOW(base) \
    while ( READ_CC2G(base) );


#define WAIT_CC2G_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2G(base) && (--timeout > 0) );


#define WAIT_CC2G_HIGH(base) \
    while (! READ_CC2G(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3G
//
// Return the value of register Egr
//
// Notes : Capture/compare 3 generation 
//        (EGR) at the offset 0x14, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3G(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~CC3G_MASK) | ((val << CC3G_START_BIT) & CC3G_MASK )); \
   } 

#define ENABLE_CC3G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  CC3G_MASK ); \
   } 

#define DISABLE_CC3G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~CC3G_MASK ); \
   } 

#define READ_CC3G(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & CC3G_MASK) >> CC3G_START_BIT )

#define WHEN_CC3G_HIGH(base) \
     if ( READ_CC3G(base) )


#define UNLESS_CC3G_HIGH(base) \
     if (! READ_CC3G(base) )


#define WAIT_CC3G_LOW(base) \
    while ( READ_CC3G(base) );


#define WAIT_CC3G_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3G(base) && (--timeout > 0) );


#define WAIT_CC3G_HIGH(base) \
    while (! READ_CC3G(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4G
//
// Return the value of register Egr
//
// Notes : Capture/compare 4 generation 
//        (EGR) at the offset 0x14, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4G(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~CC4G_MASK) | ((val << CC4G_START_BIT) & CC4G_MASK )); \
   } 

#define ENABLE_CC4G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  CC4G_MASK ); \
   } 

#define DISABLE_CC4G(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~CC4G_MASK ); \
   } 

#define READ_CC4G(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & CC4G_MASK) >> CC4G_START_BIT )

#define WHEN_CC4G_HIGH(base) \
     if ( READ_CC4G(base) )


#define UNLESS_CC4G_HIGH(base) \
     if (! READ_CC4G(base) )


#define WAIT_CC4G_LOW(base) \
    while ( READ_CC4G(base) );


#define WAIT_CC4G_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4G(base) && (--timeout > 0) );


#define WAIT_CC4G_HIGH(base) \
    while (! READ_CC4G(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TG
//
// Return the value of register Egr
//
// Notes : Trigger generation 
//        (EGR) at the offset 0x14, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~TG_MASK) | ((val << TG_START_BIT) & TG_MASK )); \
   } 

#define ENABLE_TG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  TG_MASK ); \
   } 

#define DISABLE_TG(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~TG_MASK ); \
   } 

#define READ_TG(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & TG_MASK) >> TG_START_BIT )

#define WHEN_TG_HIGH(base) \
     if ( READ_TG(base) )


#define UNLESS_TG_HIGH(base) \
     if (! READ_TG(base) )


#define WAIT_TG_LOW(base) \
    while ( READ_TG(base) );


#define WAIT_TG_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TG(base) && (--timeout > 0) );


#define WAIT_TG_HIGH(base) \
    while (! READ_TG(base) );


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
// Function : CC1S
//
// Return the value of register Ccmr1Input
//
// Notes : Capture/Compare 1 selection 
//        (CCMR1_Input) at the offset 0x18, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC1S(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CC1S_MASK) >> CC1S_START_BIT )

#define WRITE_CC1S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CC1S_MASK) | ((val << CC1S_START_BIT) & CC1S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ICPCS
//
// Return the value of register Ccmr1Input
//
// Notes : Input capture 1 prescaler 
//        (CCMR1_Input) at the offset 0x18, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_ICPCS(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ICPCS_MASK) >> ICPCS_START_BIT )

#define WRITE_ICPCS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ICPCS_MASK) | ((val << ICPCS_START_BIT) & ICPCS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC1F
//
// Return the value of register Ccmr1Input
//
// Notes : Input capture 1 filter 
//        (CCMR1_Input) at the offset 0x18, Bits 4:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC1F(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & IC1F_MASK) >> IC1F_START_BIT )

#define WRITE_IC1F(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~IC1F_MASK) | ((val << IC1F_START_BIT) & IC1F_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CC2S
//
// Return the value of register Ccmr1Input
//
// Notes : Capture/Compare 2 selection 
//        (CCMR1_Input) at the offset 0x18, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC2S(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CC2S_MASK) >> CC2S_START_BIT )

#define WRITE_CC2S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CC2S_MASK) | ((val << CC2S_START_BIT) & CC2S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC2PCS
//
// Return the value of register Ccmr1Input
//
// Notes : Input capture 2 prescaler 
//        (CCMR1_Input) at the offset 0x18, Bits 10:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC2PCS(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & IC2PCS_MASK) >> IC2PCS_START_BIT )

#define WRITE_IC2PCS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~IC2PCS_MASK) | ((val << IC2PCS_START_BIT) & IC2PCS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC2F
//
// Return the value of register Ccmr1Input
//
// Notes : Input capture 2 filter 
//        (CCMR1_Input) at the offset 0x18, Bits 12:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC2F(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & IC2F_MASK) >> IC2F_START_BIT )

#define WRITE_IC2F(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~IC2F_MASK) | ((val << IC2F_START_BIT) & IC2F_MASK )); \
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
// Function : CC1S
//
// Return the value of register Ccmr1Output
//
// Notes : CC1S 
//        (CCMR1_Output) at the offset 0x18, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC1S(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CC1S_MASK) >> CC1S_START_BIT )

#define WRITE_CC1S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CC1S_MASK) | ((val << CC1S_START_BIT) & CC1S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC1FE
//
// Return the value of register Ccmr1Output
//
// Notes : OC1FE 
//        (CCMR1_Output) at the offset 0x18, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
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
// Function : OC1PE
//
// Return the value of register Ccmr1Output
//
// Notes : OC1PE 
//        (CCMR1_Output) at the offset 0x18, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
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
// Function : OC1M
//
// Return the value of register Ccmr1Output
//
// Notes : OC1M 
//        (CCMR1_Output) at the offset 0x18, Bits 4:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_OC1M(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC1M_MASK) >> OC1M_START_BIT )

#define WRITE_OC1M(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC1M_MASK) | ((val << OC1M_START_BIT) & OC1M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC1CE
//
// Return the value of register Ccmr1Output
//
// Notes : OC1CE 
//        (CCMR1_Output) at the offset 0x18, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC1CE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC1CE_MASK) | ((val << OC1CE_START_BIT) & OC1CE_MASK )); \
   } 

#define ENABLE_OC1CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OC1CE_MASK ); \
   } 

#define DISABLE_OC1CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OC1CE_MASK ); \
   } 

#define READ_OC1CE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC1CE_MASK) >> OC1CE_START_BIT )

#define WHEN_OC1CE_HIGH(base) \
     if ( READ_OC1CE(base) )


#define UNLESS_OC1CE_HIGH(base) \
     if (! READ_OC1CE(base) )


#define WAIT_OC1CE_LOW(base) \
    while ( READ_OC1CE(base) );


#define WAIT_OC1CE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC1CE(base) && (--timeout > 0) );


#define WAIT_OC1CE_HIGH(base) \
    while (! READ_OC1CE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC2S
//
// Return the value of register Ccmr1Output
//
// Notes : CC2S 
//        (CCMR1_Output) at the offset 0x18, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC2S(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & CC2S_MASK) >> CC2S_START_BIT )

#define WRITE_CC2S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~CC2S_MASK) | ((val << CC2S_START_BIT) & CC2S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC2FE
//
// Return the value of register Ccmr1Output
//
// Notes : OC2FE 
//        (CCMR1_Output) at the offset 0x18, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC2FE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC2FE_MASK) | ((val << OC2FE_START_BIT) & OC2FE_MASK )); \
   } 

#define ENABLE_OC2FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OC2FE_MASK ); \
   } 

#define DISABLE_OC2FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OC2FE_MASK ); \
   } 

#define READ_OC2FE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC2FE_MASK) >> OC2FE_START_BIT )

#define WHEN_OC2FE_HIGH(base) \
     if ( READ_OC2FE(base) )


#define UNLESS_OC2FE_HIGH(base) \
     if (! READ_OC2FE(base) )


#define WAIT_OC2FE_LOW(base) \
    while ( READ_OC2FE(base) );


#define WAIT_OC2FE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC2FE(base) && (--timeout > 0) );


#define WAIT_OC2FE_HIGH(base) \
    while (! READ_OC2FE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OC2PE
//
// Return the value of register Ccmr1Output
//
// Notes : OC2PE 
//        (CCMR1_Output) at the offset 0x18, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC2PE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC2PE_MASK) | ((val << OC2PE_START_BIT) & OC2PE_MASK )); \
   } 

#define ENABLE_OC2PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OC2PE_MASK ); \
   } 

#define DISABLE_OC2PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OC2PE_MASK ); \
   } 

#define READ_OC2PE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC2PE_MASK) >> OC2PE_START_BIT )

#define WHEN_OC2PE_HIGH(base) \
     if ( READ_OC2PE(base) )


#define UNLESS_OC2PE_HIGH(base) \
     if (! READ_OC2PE(base) )


#define WAIT_OC2PE_LOW(base) \
    while ( READ_OC2PE(base) );


#define WAIT_OC2PE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC2PE(base) && (--timeout > 0) );


#define WAIT_OC2PE_HIGH(base) \
    while (! READ_OC2PE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OC2M
//
// Return the value of register Ccmr1Output
//
// Notes : OC2M 
//        (CCMR1_Output) at the offset 0x18, Bits 12:14
//
/////////////////////////////////////////////////////////////////////////
#define READ_OC2M(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC2M_MASK) >> OC2M_START_BIT )

#define WRITE_OC2M(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC2M_MASK) | ((val << OC2M_START_BIT) & OC2M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC2CE
//
// Return the value of register Ccmr1Output
//
// Notes : OC2CE 
//        (CCMR1_Output) at the offset 0x18, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC2CE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OC2CE_MASK) | ((val << OC2CE_START_BIT) & OC2CE_MASK )); \
   } 

#define ENABLE_OC2CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OC2CE_MASK ); \
   } 

#define DISABLE_OC2CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OC2CE_MASK ); \
   } 

#define READ_OC2CE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OC2CE_MASK) >> OC2CE_START_BIT )

#define WHEN_OC2CE_HIGH(base) \
     if ( READ_OC2CE(base) )


#define UNLESS_OC2CE_HIGH(base) \
     if (! READ_OC2CE(base) )


#define WAIT_OC2CE_LOW(base) \
    while ( READ_OC2CE(base) );


#define WAIT_OC2CE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC2CE(base) && (--timeout > 0) );


#define WAIT_OC2CE_HIGH(base) \
    while (! READ_OC2CE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR2_INPUT
//
// Notes : Register Ccmr2Input at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCMR_2_INPUT( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

#define SET_BITS_CCMR_2_INPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_CCMR_2_INPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_CCMR_2_INPUT( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR_2_INPUT
//
// Notes : Register capture/compare mode register 2 (input mode) (CCMR2_Input) at the offset 0x1C, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/compare 3 selection 
    // 
#define CC3S_MASK 0x3U
#define CC3S_OFFSET 1
#define CC3S_START_BIT 0
#define CC3S_WIDTH 2


#define CCMR_2_INPUT_REG 0x1C

typedef enum cc3s {
    CC_3S_0,
    CC_3S_1
} CC_3S_T ;
#define READ_CC3S(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CC3S_MASK) >> CC3S_START_BIT )

#define WRITE_CC3S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CC3S_MASK) | ((val << CC3S_START_BIT) & CC3S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR_2_INPUT
//
// Notes : Register capture/compare mode register 2 (input mode) (CCMR2_Input) at the offset 0x1C, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input capture 3 prescaler 
    // 
#define IC3PSC_MASK 0xCU
#define IC3PSC_OFFSET 3
#define IC3PSC_START_BIT 2
#define IC3PSC_WIDTH 2



typedef enum ic3psc {
    IC_3PSC_0,
    IC_3PSC_1
} IC_3PSC_T ;
#define READ_IC3PSC(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & IC3PSC_MASK) >> IC3PSC_START_BIT )

#define WRITE_IC3PSC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~IC3PSC_MASK) | ((val << IC3PSC_START_BIT) & IC3PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR_2_INPUT
//
// Notes : Register capture/compare mode register 2 (input mode) (CCMR2_Input) at the offset 0x1C, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input capture 3 filter 
    // 
#define IC3F_MASK 0xF0U
#define IC3F_OFFSET 7
#define IC3F_START_BIT 4
#define IC3F_WIDTH 4



typedef enum ic3f {
    IC_3F_0,
    IC_3F_1
} IC_3F_T ;
#define READ_IC3F(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & IC3F_MASK) >> IC3F_START_BIT )

#define WRITE_IC3F(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~IC3F_MASK) | ((val << IC3F_START_BIT) & IC3F_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR_2_INPUT
//
// Notes : Register capture/compare mode register 2 (input mode) (CCMR2_Input) at the offset 0x1C, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 4 selection 
    // 
#define CC4S_MASK 0x300U
#define CC4S_OFFSET 9
#define CC4S_START_BIT 8
#define CC4S_WIDTH 2



typedef enum cc4s {
    CC_4S_0,
    CC_4S_1
} CC_4S_T ;
#define READ_CC4S(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CC4S_MASK) >> CC4S_START_BIT )

#define WRITE_CC4S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CC4S_MASK) | ((val << CC4S_START_BIT) & CC4S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR_2_INPUT
//
// Notes : Register capture/compare mode register 2 (input mode) (CCMR2_Input) at the offset 0x1C, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input capture 4 prescaler 
    // 
#define IC4PSC_MASK 0xC00U
#define IC4PSC_OFFSET 11
#define IC4PSC_START_BIT 10
#define IC4PSC_WIDTH 2



typedef enum ic4psc {
    IC_4PSC_0,
    IC_4PSC_1
} IC_4PSC_T ;
#define READ_IC4PSC(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & IC4PSC_MASK) >> IC4PSC_START_BIT )

#define WRITE_IC4PSC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~IC4PSC_MASK) | ((val << IC4PSC_START_BIT) & IC4PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR_2_INPUT
//
// Notes : Register capture/compare mode register 2 (input mode) (CCMR2_Input) at the offset 0x1C, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input capture 4 filter 
    // 
#define IC4F_MASK 0xF000U
#define IC4F_OFFSET 15
#define IC4F_START_BIT 12
#define IC4F_WIDTH 4



typedef enum ic4f {
    IC_4F_0,
    IC_4F_1
} IC_4F_T ;
#define READ_IC4F(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & IC4F_MASK) >> IC4F_START_BIT )

#define WRITE_IC4F(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~IC4F_MASK) | ((val << IC4F_START_BIT) & IC4F_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR2_OUTPUT
//
// Notes : Register Ccmr2Output at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCMR_2_OUTPUT( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

#define SET_BITS_CCMR_2_OUTPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_CCMR_2_OUTPUT(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_CCMR_2_OUTPUT( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CC3S 
    // 
#define CC3S_MASK 0x3U
#define CC3S_OFFSET 1
#define CC3S_START_BIT 0
#define CC3S_WIDTH 2


#define CCMR_2_OUTPUT_REG 0x1C

#define READ_CC3S(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CC3S_MASK) >> CC3S_START_BIT )

#define WRITE_CC3S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CC3S_MASK) | ((val << CC3S_START_BIT) & CC3S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC3FE 
    // 
#define OC3FE_MASK 0x4U
#define OC3FE_OFFSET 2
#define OC3FE_START_BIT 2
#define OC3FE_WIDTH 1



typedef enum oc3fe {
    OC_3FE_0,
    OC_3FE_1
} OC_3FE_T ;
#define WRITE_OC3FE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC3FE_MASK) | ((val << OC3FE_START_BIT) & OC3FE_MASK )); \
   } 

#define ENABLE_OC3FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OC3FE_MASK ); \
   } 

#define DISABLE_OC3FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OC3FE_MASK ); \
   } 

#define READ_OC3FE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC3FE_MASK) >> OC3FE_START_BIT )

#define WHEN_OC3FE_HIGH(base) \
     if ( READ_OC3FE(base) )


#define UNLESS_OC3FE_HIGH(base) \
     if (! READ_OC3FE(base) )


#define WAIT_OC3FE_LOW(base) \
    while ( READ_OC3FE(base) );


#define WAIT_OC3FE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC3FE(base) && (--timeout > 0) );


#define WAIT_OC3FE_HIGH(base) \
    while (! READ_OC3FE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC3PE 
    // 
#define OC3PE_MASK 0x8U
#define OC3PE_OFFSET 3
#define OC3PE_START_BIT 3
#define OC3PE_WIDTH 1



typedef enum oc3pe {
    OC_3PE_0,
    OC_3PE_1
} OC_3PE_T ;
#define WRITE_OC3PE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC3PE_MASK) | ((val << OC3PE_START_BIT) & OC3PE_MASK )); \
   } 

#define ENABLE_OC3PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OC3PE_MASK ); \
   } 

#define DISABLE_OC3PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OC3PE_MASK ); \
   } 

#define READ_OC3PE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC3PE_MASK) >> OC3PE_START_BIT )

#define WHEN_OC3PE_HIGH(base) \
     if ( READ_OC3PE(base) )


#define UNLESS_OC3PE_HIGH(base) \
     if (! READ_OC3PE(base) )


#define WAIT_OC3PE_LOW(base) \
    while ( READ_OC3PE(base) );


#define WAIT_OC3PE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC3PE(base) && (--timeout > 0) );


#define WAIT_OC3PE_HIGH(base) \
    while (! READ_OC3PE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC3M 
    // 
#define OC3M_MASK 0x70U
#define OC3M_OFFSET 6
#define OC3M_START_BIT 4
#define OC3M_WIDTH 3



typedef enum oc3m {
    OC_3M_0,
    OC_3M_1
} OC_3M_T ;
#define READ_OC3M(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC3M_MASK) >> OC3M_START_BIT )

#define WRITE_OC3M(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC3M_MASK) | ((val << OC3M_START_BIT) & OC3M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC3CE 
    // 
#define OC3CE_MASK 0x80U
#define OC3CE_OFFSET 7
#define OC3CE_START_BIT 7
#define OC3CE_WIDTH 1



typedef enum oc3ce {
    OC_3CE_0,
    OC_3CE_1
} OC_3CE_T ;
#define WRITE_OC3CE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC3CE_MASK) | ((val << OC3CE_START_BIT) & OC3CE_MASK )); \
   } 

#define ENABLE_OC3CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OC3CE_MASK ); \
   } 

#define DISABLE_OC3CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OC3CE_MASK ); \
   } 

#define READ_OC3CE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC3CE_MASK) >> OC3CE_START_BIT )

#define WHEN_OC3CE_HIGH(base) \
     if ( READ_OC3CE(base) )


#define UNLESS_OC3CE_HIGH(base) \
     if (! READ_OC3CE(base) )


#define WAIT_OC3CE_LOW(base) \
    while ( READ_OC3CE(base) );


#define WAIT_OC3CE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC3CE(base) && (--timeout > 0) );


#define WAIT_OC3CE_HIGH(base) \
    while (! READ_OC3CE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CC4S 
    // 
#define CC4S_MASK 0x300U
#define CC4S_OFFSET 9
#define CC4S_START_BIT 8
#define CC4S_WIDTH 2



#define READ_CC4S(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CC4S_MASK) >> CC4S_START_BIT )

#define WRITE_CC4S(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CC4S_MASK) | ((val << CC4S_START_BIT) & CC4S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC4FE 
    // 
#define OC4FE_MASK 0x400U
#define OC4FE_OFFSET 10
#define OC4FE_START_BIT 10
#define OC4FE_WIDTH 1



typedef enum oc4fe {
    OC_4FE_0,
    OC_4FE_1
} OC_4FE_T ;
#define WRITE_OC4FE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC4FE_MASK) | ((val << OC4FE_START_BIT) & OC4FE_MASK )); \
   } 

#define ENABLE_OC4FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OC4FE_MASK ); \
   } 

#define DISABLE_OC4FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OC4FE_MASK ); \
   } 

#define READ_OC4FE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC4FE_MASK) >> OC4FE_START_BIT )

#define WHEN_OC4FE_HIGH(base) \
     if ( READ_OC4FE(base) )


#define UNLESS_OC4FE_HIGH(base) \
     if (! READ_OC4FE(base) )


#define WAIT_OC4FE_LOW(base) \
    while ( READ_OC4FE(base) );


#define WAIT_OC4FE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC4FE(base) && (--timeout > 0) );


#define WAIT_OC4FE_HIGH(base) \
    while (! READ_OC4FE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC4PE 
    // 
#define OC4PE_MASK 0x800U
#define OC4PE_OFFSET 11
#define OC4PE_START_BIT 11
#define OC4PE_WIDTH 1



typedef enum oc4pe {
    OC_4PE_0,
    OC_4PE_1
} OC_4PE_T ;
#define WRITE_OC4PE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC4PE_MASK) | ((val << OC4PE_START_BIT) & OC4PE_MASK )); \
   } 

#define ENABLE_OC4PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OC4PE_MASK ); \
   } 

#define DISABLE_OC4PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OC4PE_MASK ); \
   } 

#define READ_OC4PE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC4PE_MASK) >> OC4PE_START_BIT )

#define WHEN_OC4PE_HIGH(base) \
     if ( READ_OC4PE(base) )


#define UNLESS_OC4PE_HIGH(base) \
     if (! READ_OC4PE(base) )


#define WAIT_OC4PE_LOW(base) \
    while ( READ_OC4PE(base) );


#define WAIT_OC4PE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OC4PE(base) && (--timeout > 0) );


#define WAIT_OC4PE_HIGH(base) \
    while (! READ_OC4PE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 12:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OC4M 
    // 
#define OC4M_MASK 0x7000U
#define OC4M_OFFSET 14
#define OC4M_START_BIT 12
#define OC4M_WIDTH 3



typedef enum oc4m {
    OC_4M_0,
    OC_4M_1
} OC_4M_T ;
#define READ_OC4M(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OC4M_MASK) >> OC4M_START_BIT )

#define WRITE_OC4M(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OC4M_MASK) | ((val << OC4M_START_BIT) & OC4M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Output
//
// Return the value of register CCMR_2_OUTPUT
//
// Notes : Register capture/compare mode register 2 (output mode) (CCMR2_Output) at the offset 0x1C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // O24CE 
    // 
#define O24CE_MASK 0x8000U
#define O24CE_OFFSET 15
#define O24CE_START_BIT 15
#define O24CE_WIDTH 1



typedef enum o24ce {
    O_2_4CE_0,
    O_2_4CE_1
} O2_4CE_T ;
#define WRITE_O24CE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~O24CE_MASK) | ((val << O24CE_START_BIT) & O24CE_MASK )); \
   } 

#define ENABLE_O24CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  O24CE_MASK ); \
   } 

#define DISABLE_O24CE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~O24CE_MASK ); \
   } 

#define READ_O24CE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & O24CE_MASK) >> O24CE_START_BIT )

#define WHEN_O24CE_HIGH(base) \
     if ( READ_O24CE(base) )


#define UNLESS_O24CE_HIGH(base) \
     if (! READ_O24CE(base) )


#define WAIT_O24CE_LOW(base) \
    while ( READ_O24CE(base) );


#define WAIT_O24CE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_O24CE(base) && (--timeout > 0) );


#define WAIT_O24CE_HIGH(base) \
    while (! READ_O24CE(base) );


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
// Function : CC1E
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 1 output enable 
//        (CCER) at the offset 0x20, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC1P
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 1 output Polarity 
//        (CCER) at the offset 0x20, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC1NP
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 1 output Polarity 
//        (CCER) at the offset 0x20, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
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
// Function : CC2E
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 2 output enable 
//        (CCER) at the offset 0x20, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2E(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC2E_MASK) | ((val << CC2E_START_BIT) & CC2E_MASK )); \
   } 

#define ENABLE_CC2E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC2E_MASK ); \
   } 

#define DISABLE_CC2E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC2E_MASK ); \
   } 

#define READ_CC2E(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC2E_MASK) >> CC2E_START_BIT )

#define WHEN_CC2E_HIGH(base) \
     if ( READ_CC2E(base) )


#define UNLESS_CC2E_HIGH(base) \
     if (! READ_CC2E(base) )


#define WAIT_CC2E_LOW(base) \
    while ( READ_CC2E(base) );


#define WAIT_CC2E_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2E(base) && (--timeout > 0) );


#define WAIT_CC2E_HIGH(base) \
    while (! READ_CC2E(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC2P
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 2 output Polarity 
//        (CCER) at the offset 0x20, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2P(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC2P_MASK) | ((val << CC2P_START_BIT) & CC2P_MASK )); \
   } 

#define ENABLE_CC2P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC2P_MASK ); \
   } 

#define DISABLE_CC2P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC2P_MASK ); \
   } 

#define READ_CC2P(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC2P_MASK) >> CC2P_START_BIT )

#define WHEN_CC2P_HIGH(base) \
     if ( READ_CC2P(base) )


#define UNLESS_CC2P_HIGH(base) \
     if (! READ_CC2P(base) )


#define WAIT_CC2P_LOW(base) \
    while ( READ_CC2P(base) );


#define WAIT_CC2P_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2P(base) && (--timeout > 0) );


#define WAIT_CC2P_HIGH(base) \
    while (! READ_CC2P(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC2NP
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 2 output Polarity 
//        (CCER) at the offset 0x20, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC2NP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC2NP_MASK) | ((val << CC2NP_START_BIT) & CC2NP_MASK )); \
   } 

#define ENABLE_CC2NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC2NP_MASK ); \
   } 

#define DISABLE_CC2NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC2NP_MASK ); \
   } 

#define READ_CC2NP(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC2NP_MASK) >> CC2NP_START_BIT )

#define WHEN_CC2NP_HIGH(base) \
     if ( READ_CC2NP(base) )


#define UNLESS_CC2NP_HIGH(base) \
     if (! READ_CC2NP(base) )


#define WAIT_CC2NP_LOW(base) \
    while ( READ_CC2NP(base) );


#define WAIT_CC2NP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC2NP(base) && (--timeout > 0) );


#define WAIT_CC2NP_HIGH(base) \
    while (! READ_CC2NP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3E
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 3 output enable 
//        (CCER) at the offset 0x20, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3E(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC3E_MASK) | ((val << CC3E_START_BIT) & CC3E_MASK )); \
   } 

#define ENABLE_CC3E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC3E_MASK ); \
   } 

#define DISABLE_CC3E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC3E_MASK ); \
   } 

#define READ_CC3E(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC3E_MASK) >> CC3E_START_BIT )

#define WHEN_CC3E_HIGH(base) \
     if ( READ_CC3E(base) )


#define UNLESS_CC3E_HIGH(base) \
     if (! READ_CC3E(base) )


#define WAIT_CC3E_LOW(base) \
    while ( READ_CC3E(base) );


#define WAIT_CC3E_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3E(base) && (--timeout > 0) );


#define WAIT_CC3E_HIGH(base) \
    while (! READ_CC3E(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3P
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 3 output Polarity 
//        (CCER) at the offset 0x20, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3P(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC3P_MASK) | ((val << CC3P_START_BIT) & CC3P_MASK )); \
   } 

#define ENABLE_CC3P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC3P_MASK ); \
   } 

#define DISABLE_CC3P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC3P_MASK ); \
   } 

#define READ_CC3P(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC3P_MASK) >> CC3P_START_BIT )

#define WHEN_CC3P_HIGH(base) \
     if ( READ_CC3P(base) )


#define UNLESS_CC3P_HIGH(base) \
     if (! READ_CC3P(base) )


#define WAIT_CC3P_LOW(base) \
    while ( READ_CC3P(base) );


#define WAIT_CC3P_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3P(base) && (--timeout > 0) );


#define WAIT_CC3P_HIGH(base) \
    while (! READ_CC3P(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC3NP
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 3 output Polarity 
//        (CCER) at the offset 0x20, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC3NP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC3NP_MASK) | ((val << CC3NP_START_BIT) & CC3NP_MASK )); \
   } 

#define ENABLE_CC3NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC3NP_MASK ); \
   } 

#define DISABLE_CC3NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC3NP_MASK ); \
   } 

#define READ_CC3NP(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC3NP_MASK) >> CC3NP_START_BIT )

#define WHEN_CC3NP_HIGH(base) \
     if ( READ_CC3NP(base) )


#define UNLESS_CC3NP_HIGH(base) \
     if (! READ_CC3NP(base) )


#define WAIT_CC3NP_LOW(base) \
    while ( READ_CC3NP(base) );


#define WAIT_CC3NP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC3NP(base) && (--timeout > 0) );


#define WAIT_CC3NP_HIGH(base) \
    while (! READ_CC3NP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4E
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 4 output enable 
//        (CCER) at the offset 0x20, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4E(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC4E_MASK) | ((val << CC4E_START_BIT) & CC4E_MASK )); \
   } 

#define ENABLE_CC4E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC4E_MASK ); \
   } 

#define DISABLE_CC4E(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC4E_MASK ); \
   } 

#define READ_CC4E(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC4E_MASK) >> CC4E_START_BIT )

#define WHEN_CC4E_HIGH(base) \
     if ( READ_CC4E(base) )


#define UNLESS_CC4E_HIGH(base) \
     if (! READ_CC4E(base) )


#define WAIT_CC4E_LOW(base) \
    while ( READ_CC4E(base) );


#define WAIT_CC4E_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4E(base) && (--timeout > 0) );


#define WAIT_CC4E_HIGH(base) \
    while (! READ_CC4E(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4P
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 3 output Polarity 
//        (CCER) at the offset 0x20, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4P(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC4P_MASK) | ((val << CC4P_START_BIT) & CC4P_MASK )); \
   } 

#define ENABLE_CC4P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC4P_MASK ); \
   } 

#define DISABLE_CC4P(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC4P_MASK ); \
   } 

#define READ_CC4P(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC4P_MASK) >> CC4P_START_BIT )

#define WHEN_CC4P_HIGH(base) \
     if ( READ_CC4P(base) )


#define UNLESS_CC4P_HIGH(base) \
     if (! READ_CC4P(base) )


#define WAIT_CC4P_LOW(base) \
    while ( READ_CC4P(base) );


#define WAIT_CC4P_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4P(base) && (--timeout > 0) );


#define WAIT_CC4P_HIGH(base) \
    while (! READ_CC4P(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4NP
//
// Return the value of register Ccer
//
// Notes : Capture/Compare 4 output Polarity 
//        (CCER) at the offset 0x20, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CC4NP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CC4NP_MASK) | ((val << CC4NP_START_BIT) & CC4NP_MASK )); \
   } 

#define ENABLE_CC4NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CC4NP_MASK ); \
   } 

#define DISABLE_CC4NP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CC4NP_MASK ); \
   } 

#define READ_CC4NP(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CC4NP_MASK) >> CC4NP_START_BIT )

#define WHEN_CC4NP_HIGH(base) \
     if ( READ_CC4NP(base) )


#define UNLESS_CC4NP_HIGH(base) \
     if (! READ_CC4NP(base) )


#define WAIT_CC4NP_LOW(base) \
    while ( READ_CC4NP(base) );


#define WAIT_CC4NP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CC4NP(base) && (--timeout > 0) );


#define WAIT_CC4NP_HIGH(base) \
    while (! READ_CC4NP(base) );


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
// Function : CNT_L
//
// Return the value of register Cnt
//
// Notes : Low counter value 
//        (CNT) at the offset 0x24, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CNT_L(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & CNT_L_MASK) >> CNT_L_START_BIT )

#define WRITE_CNT_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~CNT_L_MASK) | ((val << CNT_L_START_BIT) & CNT_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CNT_H
//
// Return the value of register Cnt
//
// Notes : High counter value 
//        (CNT) at the offset 0x24, Bits 16:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CNT_H(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & CNT_H_MASK) >> CNT_H_START_BIT )

#define WRITE_CNT_H(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~CNT_H_MASK) | ((val << CNT_H_START_BIT) & CNT_H_MASK )); \
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
// Function : ARR_L
//
// Return the value of register Arr
//
// Notes : Low Auto-reload value 
//        (ARR) at the offset 0x2C, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_ARR_L(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & ARR_L_MASK) >> ARR_L_START_BIT )

#define WRITE_ARR_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~ARR_L_MASK) | ((val << ARR_L_START_BIT) & ARR_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ARR_H
//
// Return the value of register Arr
//
// Notes : High Auto-reload value 
//        (ARR) at the offset 0x2C, Bits 16:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_ARR_H(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & ARR_H_MASK) >> ARR_H_START_BIT )

#define WRITE_ARR_H(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~ARR_H_MASK) | ((val << ARR_H_START_BIT) & ARR_H_MASK )); \
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
// Function : CCR1_L
//
// Return the value of register Ccr1
//
// Notes : Low Capture/Compare 1 value 
//        (CCR1) at the offset 0x34, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR1_L(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & CCR1_L_MASK) >> CCR1_L_START_BIT )

#define WRITE_CCR1_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~CCR1_L_MASK) | ((val << CCR1_L_START_BIT) & CCR1_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR1_H
//
// Return the value of register Ccr1
//
// Notes : High Capture/Compare 1 value 
//        (CCR1) at the offset 0x34, Bits 16:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR1_H(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & CCR1_H_MASK) >> CCR1_H_START_BIT )

#define WRITE_CCR1_H(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~CCR1_H_MASK) | ((val << CCR1_H_START_BIT) & CCR1_H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr2
//
// Return the value of register CCR2
//
// Notes : Register Ccr2 at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x38, val)

#define SET_BITS_CCR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  mask ); \
   } 

#define CLEAR_BITS_CCR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38,  val & ~mask ); \
   } 

#define READ_REGISTER_CCR_2( base ) \
     READ_REGISTER_ULONG( base + 0x38) 

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR2_L
//
// Return the value of register Ccr2
//
// Notes : Low Capture/Compare 2 value 
//        (CCR2) at the offset 0x38, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR2_L(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & CCR2_L_MASK) >> CCR2_L_START_BIT )

#define WRITE_CCR2_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~CCR2_L_MASK) | ((val << CCR2_L_START_BIT) & CCR2_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR2_H
//
// Return the value of register Ccr2
//
// Notes : High Capture/Compare 2 value 
//        (CCR2) at the offset 0x38, Bits 16:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR2_H(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & CCR2_H_MASK) >> CCR2_H_START_BIT )

#define WRITE_CCR2_H(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~CCR2_H_MASK) | ((val << CCR2_H_START_BIT) & CCR2_H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr3
//
// Return the value of register CCR3
//
// Notes : Register Ccr3 at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCR_3( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x3C, val)

#define SET_BITS_CCR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, val |  mask ); \
   } 

#define CLEAR_BITS_CCR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C,  val & ~mask ); \
   } 

#define READ_REGISTER_CCR_3( base ) \
     READ_REGISTER_ULONG( base + 0x3C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr3
//
// Return the value of register CCR_3
//
// Notes : Register capture/compare register 3 (CCR3) at the offset 0x3C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low Capture/Compare value 
    // 
#define CCR3_L_MASK 0xFFFFU
#define CCR3_L_OFFSET 15
#define CCR3_L_START_BIT 0
#define CCR3_L_WIDTH 16


#define CCR_3_REG 0x3C

typedef enum ccr3_l {
    CCR_3_L_0,
    CCR_3_L_1
} CCR_3L_T ;
#define READ_CCR3_L(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & CCR3_L_MASK) >> CCR3_L_START_BIT )

#define WRITE_CCR3_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~CCR3_L_MASK) | ((val << CCR3_L_START_BIT) & CCR3_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr3
//
// Return the value of register CCR_3
//
// Notes : Register capture/compare register 3 (CCR3) at the offset 0x3C, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // High Capture/Compare value 
    // 
#define CCR3_H_MASK 0xFFFF0000U
#define CCR3_H_OFFSET 31
#define CCR3_H_START_BIT 16
#define CCR3_H_WIDTH 16



typedef enum ccr3_h {
    CCR_3_H_0,
    CCR_3_H_1
} CCR_3H_T ;
#define READ_CCR3_H(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & CCR3_H_MASK) >> CCR3_H_START_BIT )

#define WRITE_CCR3_H(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~CCR3_H_MASK) | ((val << CCR3_H_START_BIT) & CCR3_H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr4
//
// Return the value of register CCR4
//
// Notes : Register Ccr4 at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCR_4( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x40, val)

#define SET_BITS_CCR_4(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, val |  mask ); \
   } 

#define CLEAR_BITS_CCR_4(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40,  val & ~mask ); \
   } 

#define READ_REGISTER_CCR_4( base ) \
     READ_REGISTER_ULONG( base + 0x40) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr4
//
// Return the value of register CCR_4
//
// Notes : Register capture/compare register 4 (CCR4) at the offset 0x40, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Low Capture/Compare value 
    // 
#define CCR4_L_MASK 0xFFFFU
#define CCR4_L_OFFSET 15
#define CCR4_L_START_BIT 0
#define CCR4_L_WIDTH 16


#define CCR_4_REG 0x40

typedef enum ccr4_l {
    CCR_4_L_0,
    CCR_4_L_1
} CCR_4L_T ;
#define READ_CCR4_L(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & CCR4_L_MASK) >> CCR4_L_START_BIT )

#define WRITE_CCR4_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~CCR4_L_MASK) | ((val << CCR4_L_START_BIT) & CCR4_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr4
//
// Return the value of register CCR_4
//
// Notes : Register capture/compare register 4 (CCR4) at the offset 0x40, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // High Capture/Compare value 
    // 
#define CCR4_H_MASK 0xFFFF0000U
#define CCR4_H_OFFSET 31
#define CCR4_H_START_BIT 16
#define CCR4_H_WIDTH 16



typedef enum ccr4_h {
    CCR_4_H_0,
    CCR_4_H_1
} CCR_4H_T ;
#define READ_CCR4_H(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & CCR4_H_MASK) >> CCR4_H_START_BIT )

#define WRITE_CCR4_H(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~CCR4_H_MASK) | ((val << CCR4_H_START_BIT) & CCR4_H_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dcr
//
// Return the value of register DCR
//
// Notes : Register Dcr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DCR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x48, val)

#define SET_BITS_DCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48, val |  mask ); \
   } 

#define CLEAR_BITS_DCR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48,  val & ~mask ); \
   } 

#define READ_REGISTER_DCR( base ) \
     READ_REGISTER_ULONG( base + 0x48) 

/////////////////////////////////////////////////////////////////////////
//
// Function : DBA
//
// Return the value of register Dcr
//
// Notes : DMA base address 
//        (DCR) at the offset 0x48, Bits 0:4
//
/////////////////////////////////////////////////////////////////////////
#define READ_DBA(base) \
    ((READ_REGISTER_ULONG(base + 0x48) & DBA_MASK) >> DBA_START_BIT )

#define WRITE_DBA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48, (OldValue & ~DBA_MASK) | ((val << DBA_START_BIT) & DBA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DBL
//
// Return the value of register Dcr
//
// Notes : DMA burst length 
//        (DCR) at the offset 0x48, Bits 8:12
//
/////////////////////////////////////////////////////////////////////////
#define READ_DBL(base) \
    ((READ_REGISTER_ULONG(base + 0x48) & DBL_MASK) >> DBL_START_BIT )

#define WRITE_DBL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48, (OldValue & ~DBL_MASK) | ((val << DBL_START_BIT) & DBL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmar
//
// Return the value of register DMAR
//
// Notes : Register Dmar at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DMAR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x4C, val)

#define SET_BITS_DMAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C, val |  mask ); \
   } 

#define CLEAR_BITS_DMAR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C,  val & ~mask ); \
   } 

#define READ_REGISTER_DMAR( base ) \
     READ_REGISTER_ULONG( base + 0x4C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dmar
//
// Return the value of register DMAR
//
// Notes : Register DMA address for full transfer (DMAR) at the offset 0x4C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA register for burst accesses 
    // 
#define DMAB_MASK 0xFFFFU
#define DMAB_OFFSET 15
#define DMAB_START_BIT 0
#define DMAB_WIDTH 16


#define DMAR_REG 0x4C

typedef enum dmab {
    DMAB_0,
    DMAB_1
} DMAB_T ;
#define READ_DMAB(base) \
    ((READ_REGISTER_ULONG(base + 0x4C) & DMAB_MASK) >> DMAB_START_BIT )

#define WRITE_DMAB(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C, (OldValue & ~DMAB_MASK) | ((val << DMAB_START_BIT) & DMAB_MASK )); \
   } 

