/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/tim9.h
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
 
#define NB_DEVICE_TIM9 2
#define TIM9 0x40014000
#define TIM12 0x40001800
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
//        (CCMR1_Input) at the offset 0x18, Bits 4:6
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
//        (CCMR1_Input) at the offset 0x18, Bits 12:14
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
// Notes : Capture/Compare 1 selection 
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
// Notes : Output Compare 1 fast enable 
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
// Notes : Output Compare 1 preload enable 
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
// Notes : Output Compare 1 mode 
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
// Function : CC2S
//
// Return the value of register Ccmr1Output
//
// Notes : Capture/Compare 2 selection 
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
// Notes : Output Compare 2 fast enable 
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
// Notes : Output Compare 2 preload enable 
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
// Notes : Output Compare 2 mode 
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
// Function : CCR1
//
// Return the value of register Ccr1
//
// Notes : Capture/Compare 1 value 
//        (CCR1) at the offset 0x34, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR1(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & CCR1_MASK) >> CCR1_START_BIT )

#define WRITE_CCR1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~CCR1_MASK) | ((val << CCR1_START_BIT) & CCR1_MASK )); \
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
// Function : Ccr2
//
// Return the value of register CCR_2
//
// Notes : Register capture/compare register 2 (CCR2) at the offset 0x38, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Capture/Compare 2 value 
    // 
#define CCR2_MASK 0xFFFFU
#define CCR2_OFFSET 15
#define CCR2_START_BIT 0
#define CCR2_WIDTH 16


#define CCR_2_REG 0x38

typedef enum ccr2 {
    CCR_2_0,
    CCR_2_1
} CCR_2_T ;
#define READ_CCR2(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & CCR2_MASK) >> CCR2_START_BIT )

#define WRITE_CCR2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~CCR2_MASK) | ((val << CCR2_START_BIT) & CCR2_MASK )); \
   } 

