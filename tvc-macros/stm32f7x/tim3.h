/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/tim3.h
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
 
#define TIM3 0x40000400
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR1
//
// Notes : Register Cr1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_1( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_CR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_CR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_CR_1() \
     READ_REGISTER_ULONG(0x0)

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
#define WRITE_CEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CEN_MASK) | ((val << CEN_START_BIT) & CEN_MASK )); \
   } 

#define ENABLE_CEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CEN_MASK ); \
   }

#define DISABLE_CEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CEN_MASK ); \
   } 

#define READ_CEN() \
   ((READ_REGISTER_ULONG(0x0) & CEN_MASK)  >> CEN_START_BIT)

#define WHEN_CEN_HIGH() \
     if ( READ_CEN() )


#define UNLESS_CEN_HIGH() \
     if (! READ_CEN() )


#define WAIT_CEN_LOW() \
    while ( READ_CEN() );


#define WAIT_CEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEN() && (--___t___ > 0)); }


#define WAIT_CEN_HIGH() \
    while (! READ_CEN() );


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
#define WRITE_UDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ UDIS_MASK) | ((val << UDIS_START_BIT) & UDIS_MASK )); \
   } 

#define ENABLE_UDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  UDIS_MASK ); \
   }

#define DISABLE_UDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~UDIS_MASK ); \
   } 

#define READ_UDIS() \
   ((READ_REGISTER_ULONG(0x0) & UDIS_MASK)  >> UDIS_START_BIT)

#define WHEN_UDIS_HIGH() \
     if ( READ_UDIS() )


#define UNLESS_UDIS_HIGH() \
     if (! READ_UDIS() )


#define WAIT_UDIS_LOW() \
    while ( READ_UDIS() );


#define WAIT_UDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UDIS() && (--___t___ > 0)); }


#define WAIT_UDIS_HIGH() \
    while (! READ_UDIS() );


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
#define WRITE_URS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ URS_MASK) | ((val << URS_START_BIT) & URS_MASK )); \
   } 

#define ENABLE_URS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  URS_MASK ); \
   }

#define DISABLE_URS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~URS_MASK ); \
   } 

#define READ_URS() \
   ((READ_REGISTER_ULONG(0x0) & URS_MASK)  >> URS_START_BIT)

#define WHEN_URS_HIGH() \
     if ( READ_URS() )


#define UNLESS_URS_HIGH() \
     if (! READ_URS() )


#define WAIT_URS_LOW() \
    while ( READ_URS() );


#define WAIT_URS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_URS() && (--___t___ > 0)); }


#define WAIT_URS_HIGH() \
    while (! READ_URS() );


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
#define WRITE_OPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ OPM_MASK) | ((val << OPM_START_BIT) & OPM_MASK )); \
   } 

#define ENABLE_OPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  OPM_MASK ); \
   }

#define DISABLE_OPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~OPM_MASK ); \
   } 

#define READ_OPM() \
   ((READ_REGISTER_ULONG(0x0) & OPM_MASK)  >> OPM_START_BIT)

#define WHEN_OPM_HIGH() \
     if ( READ_OPM() )


#define UNLESS_OPM_HIGH() \
     if (! READ_OPM() )


#define WAIT_OPM_LOW() \
    while ( READ_OPM() );


#define WAIT_OPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OPM() && (--___t___ > 0)); }


#define WAIT_OPM_HIGH() \
    while (! READ_OPM() );


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
#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

#define ENABLE_DIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DIR_MASK ); \
   }

#define DISABLE_DIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DIR_MASK ); \
   } 

#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x0) & DIR_MASK)  >> DIR_START_BIT)

#define WHEN_DIR_HIGH() \
     if ( READ_DIR() )


#define UNLESS_DIR_HIGH() \
     if (! READ_DIR() )


#define WAIT_DIR_LOW() \
    while ( READ_DIR() );


#define WAIT_DIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DIR() && (--___t___ > 0)); }


#define WAIT_DIR_HIGH() \
    while (! READ_DIR() );


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
#define READ_CMS() \
   ((READ_REGISTER_ULONG(0x0) & CMS_MASK)  >> CMS_START_BIT)

#define WRITE_CMS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CMS_MASK) | ((val << CMS_START_BIT) & CMS_MASK )); \
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
#define WRITE_ARPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ARPE_MASK) | ((val << ARPE_START_BIT) & ARPE_MASK )); \
   } 

#define ENABLE_ARPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ARPE_MASK ); \
   }

#define DISABLE_ARPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ARPE_MASK ); \
   } 

#define READ_ARPE() \
   ((READ_REGISTER_ULONG(0x0) & ARPE_MASK)  >> ARPE_START_BIT)

#define WHEN_ARPE_HIGH() \
     if ( READ_ARPE() )


#define UNLESS_ARPE_HIGH() \
     if (! READ_ARPE() )


#define WAIT_ARPE_LOW() \
    while ( READ_ARPE() );


#define WAIT_ARPE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARPE() && (--___t___ > 0)); }


#define WAIT_ARPE_HIGH() \
    while (! READ_ARPE() );


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
#define READ_CKD() \
   ((READ_REGISTER_ULONG(0x0) & CKD_MASK)  >> CKD_START_BIT)

#define WRITE_CKD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CKD_MASK) | ((val << CKD_START_BIT) & CKD_MASK )); \
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
#define WRITE_REGISTER_CR_2( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_CR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_CR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_CR_2() \
     READ_REGISTER_ULONG(0x4)

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
#define WRITE_CCDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CCDS_MASK) | ((val << CCDS_START_BIT) & CCDS_MASK )); \
   } 

#define ENABLE_CCDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CCDS_MASK ); \
   }

#define DISABLE_CCDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CCDS_MASK ); \
   } 

#define READ_CCDS() \
   ((READ_REGISTER_ULONG(0x4) & CCDS_MASK)  >> CCDS_START_BIT)

#define WHEN_CCDS_HIGH() \
     if ( READ_CCDS() )


#define UNLESS_CCDS_HIGH() \
     if (! READ_CCDS() )


#define WAIT_CCDS_LOW() \
    while ( READ_CCDS() );


#define WAIT_CCDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCDS() && (--___t___ > 0)); }


#define WAIT_CCDS_HIGH() \
    while (! READ_CCDS() );


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
#define READ_MMS() \
   ((READ_REGISTER_ULONG(0x4) & MMS_MASK)  >> MMS_START_BIT)

#define WRITE_MMS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MMS_MASK) | ((val << MMS_START_BIT) & MMS_MASK )); \
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
#define WRITE_TI1S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TI1S_MASK) | ((val << TI1S_START_BIT) & TI1S_MASK )); \
   } 

#define ENABLE_TI1S() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  TI1S_MASK ); \
   }

#define DISABLE_TI1S() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~TI1S_MASK ); \
   } 

#define READ_TI1S() \
   ((READ_REGISTER_ULONG(0x4) & TI1S_MASK)  >> TI1S_START_BIT)

#define WHEN_TI1S_HIGH() \
     if ( READ_TI1S() )


#define UNLESS_TI1S_HIGH() \
     if (! READ_TI1S() )


#define WAIT_TI1S_LOW() \
    while ( READ_TI1S() );


#define WAIT_TI1S_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TI1S() && (--___t___ > 0)); }


#define WAIT_TI1S_HIGH() \
    while (! READ_TI1S() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Smcr
//
// Return the value of register SMCR
//
// Notes : Register Smcr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SMCR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_SMCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_SMCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_SMCR() \
     READ_REGISTER_ULONG(0x8)

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
#define READ_SMS() \
   ((READ_REGISTER_ULONG(0x8) & SMS_MASK)  >> SMS_START_BIT)

#define WRITE_SMS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SMS_MASK) | ((val << SMS_START_BIT) & SMS_MASK )); \
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
#define READ_TS() \
   ((READ_REGISTER_ULONG(0x8) & TS_MASK)  >> TS_START_BIT)

#define WRITE_TS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TS_MASK) | ((val << TS_START_BIT) & TS_MASK )); \
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
#define WRITE_MSM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MSM_MASK) | ((val << MSM_START_BIT) & MSM_MASK )); \
   } 

#define ENABLE_MSM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  MSM_MASK ); \
   }

#define DISABLE_MSM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~MSM_MASK ); \
   } 

#define READ_MSM() \
   ((READ_REGISTER_ULONG(0x8) & MSM_MASK)  >> MSM_START_BIT)

#define WHEN_MSM_HIGH() \
     if ( READ_MSM() )


#define UNLESS_MSM_HIGH() \
     if (! READ_MSM() )


#define WAIT_MSM_LOW() \
    while ( READ_MSM() );


#define WAIT_MSM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSM() && (--___t___ > 0)); }


#define WAIT_MSM_HIGH() \
    while (! READ_MSM() );


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
#define READ_ETF() \
   ((READ_REGISTER_ULONG(0x8) & ETF_MASK)  >> ETF_START_BIT)

#define WRITE_ETF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ETF_MASK) | ((val << ETF_START_BIT) & ETF_MASK )); \
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
#define READ_ETPS() \
   ((READ_REGISTER_ULONG(0x8) & ETPS_MASK)  >> ETPS_START_BIT)

#define WRITE_ETPS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ETPS_MASK) | ((val << ETPS_START_BIT) & ETPS_MASK )); \
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
#define WRITE_ECE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ECE_MASK) | ((val << ECE_START_BIT) & ECE_MASK )); \
   } 

#define ENABLE_ECE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ECE_MASK ); \
   }

#define DISABLE_ECE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ECE_MASK ); \
   } 

#define READ_ECE() \
   ((READ_REGISTER_ULONG(0x8) & ECE_MASK)  >> ECE_START_BIT)

#define WHEN_ECE_HIGH() \
     if ( READ_ECE() )


#define UNLESS_ECE_HIGH() \
     if (! READ_ECE() )


#define WAIT_ECE_LOW() \
    while ( READ_ECE() );


#define WAIT_ECE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ECE() && (--___t___ > 0)); }


#define WAIT_ECE_HIGH() \
    while (! READ_ECE() );


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
#define WRITE_ETP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ETP_MASK) | ((val << ETP_START_BIT) & ETP_MASK )); \
   } 

#define ENABLE_ETP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ETP_MASK ); \
   }

#define DISABLE_ETP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ETP_MASK ); \
   } 

#define READ_ETP() \
   ((READ_REGISTER_ULONG(0x8) & ETP_MASK)  >> ETP_START_BIT)

#define WHEN_ETP_HIGH() \
     if ( READ_ETP() )


#define UNLESS_ETP_HIGH() \
     if (! READ_ETP() )


#define WAIT_ETP_LOW() \
    while ( READ_ETP() );


#define WAIT_ETP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ETP() && (--___t___ > 0)); }


#define WAIT_ETP_HIGH() \
    while (! READ_ETP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dier
//
// Return the value of register DIER
//
// Notes : Register Dier at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DIER( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_DIER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_DIER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_DIER() \
     READ_REGISTER_ULONG(0xC)

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
#define WRITE_UIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ UIE_MASK) | ((val << UIE_START_BIT) & UIE_MASK )); \
   } 

#define ENABLE_UIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  UIE_MASK ); \
   }

#define DISABLE_UIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~UIE_MASK ); \
   } 

#define READ_UIE() \
   ((READ_REGISTER_ULONG(0xC) & UIE_MASK)  >> UIE_START_BIT)

#define WHEN_UIE_HIGH() \
     if ( READ_UIE() )


#define UNLESS_UIE_HIGH() \
     if (! READ_UIE() )


#define WAIT_UIE_LOW() \
    while ( READ_UIE() );


#define WAIT_UIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UIE() && (--___t___ > 0)); }


#define WAIT_UIE_HIGH() \
    while (! READ_UIE() );


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
#define WRITE_CC1IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC1IE_MASK) | ((val << CC1IE_START_BIT) & CC1IE_MASK )); \
   } 

#define ENABLE_CC1IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC1IE_MASK ); \
   }

#define DISABLE_CC1IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC1IE_MASK ); \
   } 

#define READ_CC1IE() \
   ((READ_REGISTER_ULONG(0xC) & CC1IE_MASK)  >> CC1IE_START_BIT)

#define WHEN_CC1IE_HIGH() \
     if ( READ_CC1IE() )


#define UNLESS_CC1IE_HIGH() \
     if (! READ_CC1IE() )


#define WAIT_CC1IE_LOW() \
    while ( READ_CC1IE() );


#define WAIT_CC1IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1IE() && (--___t___ > 0)); }


#define WAIT_CC1IE_HIGH() \
    while (! READ_CC1IE() );


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
#define WRITE_CC2IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC2IE_MASK) | ((val << CC2IE_START_BIT) & CC2IE_MASK )); \
   } 

#define ENABLE_CC2IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC2IE_MASK ); \
   }

#define DISABLE_CC2IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC2IE_MASK ); \
   } 

#define READ_CC2IE() \
   ((READ_REGISTER_ULONG(0xC) & CC2IE_MASK)  >> CC2IE_START_BIT)

#define WHEN_CC2IE_HIGH() \
     if ( READ_CC2IE() )


#define UNLESS_CC2IE_HIGH() \
     if (! READ_CC2IE() )


#define WAIT_CC2IE_LOW() \
    while ( READ_CC2IE() );


#define WAIT_CC2IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2IE() && (--___t___ > 0)); }


#define WAIT_CC2IE_HIGH() \
    while (! READ_CC2IE() );


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
#define WRITE_CC3IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC3IE_MASK) | ((val << CC3IE_START_BIT) & CC3IE_MASK )); \
   } 

#define ENABLE_CC3IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC3IE_MASK ); \
   }

#define DISABLE_CC3IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC3IE_MASK ); \
   } 

#define READ_CC3IE() \
   ((READ_REGISTER_ULONG(0xC) & CC3IE_MASK)  >> CC3IE_START_BIT)

#define WHEN_CC3IE_HIGH() \
     if ( READ_CC3IE() )


#define UNLESS_CC3IE_HIGH() \
     if (! READ_CC3IE() )


#define WAIT_CC3IE_LOW() \
    while ( READ_CC3IE() );


#define WAIT_CC3IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3IE() && (--___t___ > 0)); }


#define WAIT_CC3IE_HIGH() \
    while (! READ_CC3IE() );


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
#define WRITE_CC4IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC4IE_MASK) | ((val << CC4IE_START_BIT) & CC4IE_MASK )); \
   } 

#define ENABLE_CC4IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC4IE_MASK ); \
   }

#define DISABLE_CC4IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC4IE_MASK ); \
   } 

#define READ_CC4IE() \
   ((READ_REGISTER_ULONG(0xC) & CC4IE_MASK)  >> CC4IE_START_BIT)

#define WHEN_CC4IE_HIGH() \
     if ( READ_CC4IE() )


#define UNLESS_CC4IE_HIGH() \
     if (! READ_CC4IE() )


#define WAIT_CC4IE_LOW() \
    while ( READ_CC4IE() );


#define WAIT_CC4IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4IE() && (--___t___ > 0)); }


#define WAIT_CC4IE_HIGH() \
    while (! READ_CC4IE() );


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
#define WRITE_TIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TIE_MASK) | ((val << TIE_START_BIT) & TIE_MASK )); \
   } 

#define ENABLE_TIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TIE_MASK ); \
   }

#define DISABLE_TIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TIE_MASK ); \
   } 

#define READ_TIE() \
   ((READ_REGISTER_ULONG(0xC) & TIE_MASK)  >> TIE_START_BIT)

#define WHEN_TIE_HIGH() \
     if ( READ_TIE() )


#define UNLESS_TIE_HIGH() \
     if (! READ_TIE() )


#define WAIT_TIE_LOW() \
    while ( READ_TIE() );


#define WAIT_TIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIE() && (--___t___ > 0)); }


#define WAIT_TIE_HIGH() \
    while (! READ_TIE() );


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
#define WRITE_UDE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ UDE_MASK) | ((val << UDE_START_BIT) & UDE_MASK )); \
   } 

#define ENABLE_UDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  UDE_MASK ); \
   }

#define DISABLE_UDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~UDE_MASK ); \
   } 

#define READ_UDE() \
   ((READ_REGISTER_ULONG(0xC) & UDE_MASK)  >> UDE_START_BIT)

#define WHEN_UDE_HIGH() \
     if ( READ_UDE() )


#define UNLESS_UDE_HIGH() \
     if (! READ_UDE() )


#define WAIT_UDE_LOW() \
    while ( READ_UDE() );


#define WAIT_UDE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UDE() && (--___t___ > 0)); }


#define WAIT_UDE_HIGH() \
    while (! READ_UDE() );


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
#define WRITE_CC1DE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC1DE_MASK) | ((val << CC1DE_START_BIT) & CC1DE_MASK )); \
   } 

#define ENABLE_CC1DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC1DE_MASK ); \
   }

#define DISABLE_CC1DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC1DE_MASK ); \
   } 

#define READ_CC1DE() \
   ((READ_REGISTER_ULONG(0xC) & CC1DE_MASK)  >> CC1DE_START_BIT)

#define WHEN_CC1DE_HIGH() \
     if ( READ_CC1DE() )


#define UNLESS_CC1DE_HIGH() \
     if (! READ_CC1DE() )


#define WAIT_CC1DE_LOW() \
    while ( READ_CC1DE() );


#define WAIT_CC1DE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1DE() && (--___t___ > 0)); }


#define WAIT_CC1DE_HIGH() \
    while (! READ_CC1DE() );


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
#define WRITE_CC2DE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC2DE_MASK) | ((val << CC2DE_START_BIT) & CC2DE_MASK )); \
   } 

#define ENABLE_CC2DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC2DE_MASK ); \
   }

#define DISABLE_CC2DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC2DE_MASK ); \
   } 

#define READ_CC2DE() \
   ((READ_REGISTER_ULONG(0xC) & CC2DE_MASK)  >> CC2DE_START_BIT)

#define WHEN_CC2DE_HIGH() \
     if ( READ_CC2DE() )


#define UNLESS_CC2DE_HIGH() \
     if (! READ_CC2DE() )


#define WAIT_CC2DE_LOW() \
    while ( READ_CC2DE() );


#define WAIT_CC2DE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2DE() && (--___t___ > 0)); }


#define WAIT_CC2DE_HIGH() \
    while (! READ_CC2DE() );


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
#define WRITE_CC3DE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC3DE_MASK) | ((val << CC3DE_START_BIT) & CC3DE_MASK )); \
   } 

#define ENABLE_CC3DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC3DE_MASK ); \
   }

#define DISABLE_CC3DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC3DE_MASK ); \
   } 

#define READ_CC3DE() \
   ((READ_REGISTER_ULONG(0xC) & CC3DE_MASK)  >> CC3DE_START_BIT)

#define WHEN_CC3DE_HIGH() \
     if ( READ_CC3DE() )


#define UNLESS_CC3DE_HIGH() \
     if (! READ_CC3DE() )


#define WAIT_CC3DE_LOW() \
    while ( READ_CC3DE() );


#define WAIT_CC3DE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3DE() && (--___t___ > 0)); }


#define WAIT_CC3DE_HIGH() \
    while (! READ_CC3DE() );


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
#define WRITE_CC4DE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CC4DE_MASK) | ((val << CC4DE_START_BIT) & CC4DE_MASK )); \
   } 

#define ENABLE_CC4DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CC4DE_MASK ); \
   }

#define DISABLE_CC4DE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CC4DE_MASK ); \
   } 

#define READ_CC4DE() \
   ((READ_REGISTER_ULONG(0xC) & CC4DE_MASK)  >> CC4DE_START_BIT)

#define WHEN_CC4DE_HIGH() \
     if ( READ_CC4DE() )


#define UNLESS_CC4DE_HIGH() \
     if (! READ_CC4DE() )


#define WAIT_CC4DE_LOW() \
    while ( READ_CC4DE() );


#define WAIT_CC4DE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4DE() && (--___t___ > 0)); }


#define WAIT_CC4DE_HIGH() \
    while (! READ_CC4DE() );


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
#define WRITE_TDE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TDE_MASK) | ((val << TDE_START_BIT) & TDE_MASK )); \
   } 

#define ENABLE_TDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TDE_MASK ); \
   }

#define DISABLE_TDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TDE_MASK ); \
   } 

#define READ_TDE() \
   ((READ_REGISTER_ULONG(0xC) & TDE_MASK)  >> TDE_START_BIT)

#define WHEN_TDE_HIGH() \
     if ( READ_TDE() )


#define UNLESS_TDE_HIGH() \
     if (! READ_TDE() )


#define WAIT_TDE_LOW() \
    while ( READ_TDE() );


#define WAIT_TDE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TDE() && (--___t___ > 0)); }


#define WAIT_TDE_HIGH() \
    while (! READ_TDE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_SR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_SR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_SR() \
     READ_REGISTER_ULONG(0x10)

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
#define WRITE_UIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ UIF_MASK) | ((val << UIF_START_BIT) & UIF_MASK )); \
   } 

#define ENABLE_UIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  UIF_MASK ); \
   }

#define DISABLE_UIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~UIF_MASK ); \
   } 

#define READ_UIF() \
   ((READ_REGISTER_ULONG(0x10) & UIF_MASK)  >> UIF_START_BIT)

#define WHEN_UIF_HIGH() \
     if ( READ_UIF() )


#define UNLESS_UIF_HIGH() \
     if (! READ_UIF() )


#define WAIT_UIF_LOW() \
    while ( READ_UIF() );


#define WAIT_UIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UIF() && (--___t___ > 0)); }


#define WAIT_UIF_HIGH() \
    while (! READ_UIF() );


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
#define WRITE_CC1IF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC1IF_MASK) | ((val << CC1IF_START_BIT) & CC1IF_MASK )); \
   } 

#define ENABLE_CC1IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC1IF_MASK ); \
   }

#define DISABLE_CC1IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC1IF_MASK ); \
   } 

#define READ_CC1IF() \
   ((READ_REGISTER_ULONG(0x10) & CC1IF_MASK)  >> CC1IF_START_BIT)

#define WHEN_CC1IF_HIGH() \
     if ( READ_CC1IF() )


#define UNLESS_CC1IF_HIGH() \
     if (! READ_CC1IF() )


#define WAIT_CC1IF_LOW() \
    while ( READ_CC1IF() );


#define WAIT_CC1IF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1IF() && (--___t___ > 0)); }


#define WAIT_CC1IF_HIGH() \
    while (! READ_CC1IF() );


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
#define WRITE_CC2IF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC2IF_MASK) | ((val << CC2IF_START_BIT) & CC2IF_MASK )); \
   } 

#define ENABLE_CC2IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC2IF_MASK ); \
   }

#define DISABLE_CC2IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC2IF_MASK ); \
   } 

#define READ_CC2IF() \
   ((READ_REGISTER_ULONG(0x10) & CC2IF_MASK)  >> CC2IF_START_BIT)

#define WHEN_CC2IF_HIGH() \
     if ( READ_CC2IF() )


#define UNLESS_CC2IF_HIGH() \
     if (! READ_CC2IF() )


#define WAIT_CC2IF_LOW() \
    while ( READ_CC2IF() );


#define WAIT_CC2IF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2IF() && (--___t___ > 0)); }


#define WAIT_CC2IF_HIGH() \
    while (! READ_CC2IF() );


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
#define WRITE_CC3IF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC3IF_MASK) | ((val << CC3IF_START_BIT) & CC3IF_MASK )); \
   } 

#define ENABLE_CC3IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC3IF_MASK ); \
   }

#define DISABLE_CC3IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC3IF_MASK ); \
   } 

#define READ_CC3IF() \
   ((READ_REGISTER_ULONG(0x10) & CC3IF_MASK)  >> CC3IF_START_BIT)

#define WHEN_CC3IF_HIGH() \
     if ( READ_CC3IF() )


#define UNLESS_CC3IF_HIGH() \
     if (! READ_CC3IF() )


#define WAIT_CC3IF_LOW() \
    while ( READ_CC3IF() );


#define WAIT_CC3IF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3IF() && (--___t___ > 0)); }


#define WAIT_CC3IF_HIGH() \
    while (! READ_CC3IF() );


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
#define WRITE_CC4IF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC4IF_MASK) | ((val << CC4IF_START_BIT) & CC4IF_MASK )); \
   } 

#define ENABLE_CC4IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC4IF_MASK ); \
   }

#define DISABLE_CC4IF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC4IF_MASK ); \
   } 

#define READ_CC4IF() \
   ((READ_REGISTER_ULONG(0x10) & CC4IF_MASK)  >> CC4IF_START_BIT)

#define WHEN_CC4IF_HIGH() \
     if ( READ_CC4IF() )


#define UNLESS_CC4IF_HIGH() \
     if (! READ_CC4IF() )


#define WAIT_CC4IF_LOW() \
    while ( READ_CC4IF() );


#define WAIT_CC4IF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4IF() && (--___t___ > 0)); }


#define WAIT_CC4IF_HIGH() \
    while (! READ_CC4IF() );


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
#define WRITE_TIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TIF_MASK) | ((val << TIF_START_BIT) & TIF_MASK )); \
   } 

#define ENABLE_TIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TIF_MASK ); \
   }

#define DISABLE_TIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TIF_MASK ); \
   } 

#define READ_TIF() \
   ((READ_REGISTER_ULONG(0x10) & TIF_MASK)  >> TIF_START_BIT)

#define WHEN_TIF_HIGH() \
     if ( READ_TIF() )


#define UNLESS_TIF_HIGH() \
     if (! READ_TIF() )


#define WAIT_TIF_LOW() \
    while ( READ_TIF() );


#define WAIT_TIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TIF() && (--___t___ > 0)); }


#define WAIT_TIF_HIGH() \
    while (! READ_TIF() );


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
#define WRITE_CC1OF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC1OF_MASK) | ((val << CC1OF_START_BIT) & CC1OF_MASK )); \
   } 

#define ENABLE_CC1OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC1OF_MASK ); \
   }

#define DISABLE_CC1OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC1OF_MASK ); \
   } 

#define READ_CC1OF() \
   ((READ_REGISTER_ULONG(0x10) & CC1OF_MASK)  >> CC1OF_START_BIT)

#define WHEN_CC1OF_HIGH() \
     if ( READ_CC1OF() )


#define UNLESS_CC1OF_HIGH() \
     if (! READ_CC1OF() )


#define WAIT_CC1OF_LOW() \
    while ( READ_CC1OF() );


#define WAIT_CC1OF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1OF() && (--___t___ > 0)); }


#define WAIT_CC1OF_HIGH() \
    while (! READ_CC1OF() );


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
#define WRITE_CC2OF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC2OF_MASK) | ((val << CC2OF_START_BIT) & CC2OF_MASK )); \
   } 

#define ENABLE_CC2OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC2OF_MASK ); \
   }

#define DISABLE_CC2OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC2OF_MASK ); \
   } 

#define READ_CC2OF() \
   ((READ_REGISTER_ULONG(0x10) & CC2OF_MASK)  >> CC2OF_START_BIT)

#define WHEN_CC2OF_HIGH() \
     if ( READ_CC2OF() )


#define UNLESS_CC2OF_HIGH() \
     if (! READ_CC2OF() )


#define WAIT_CC2OF_LOW() \
    while ( READ_CC2OF() );


#define WAIT_CC2OF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2OF() && (--___t___ > 0)); }


#define WAIT_CC2OF_HIGH() \
    while (! READ_CC2OF() );


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
#define WRITE_CC3OF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC3OF_MASK) | ((val << CC3OF_START_BIT) & CC3OF_MASK )); \
   } 

#define ENABLE_CC3OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC3OF_MASK ); \
   }

#define DISABLE_CC3OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC3OF_MASK ); \
   } 

#define READ_CC3OF() \
   ((READ_REGISTER_ULONG(0x10) & CC3OF_MASK)  >> CC3OF_START_BIT)

#define WHEN_CC3OF_HIGH() \
     if ( READ_CC3OF() )


#define UNLESS_CC3OF_HIGH() \
     if (! READ_CC3OF() )


#define WAIT_CC3OF_LOW() \
    while ( READ_CC3OF() );


#define WAIT_CC3OF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3OF() && (--___t___ > 0)); }


#define WAIT_CC3OF_HIGH() \
    while (! READ_CC3OF() );


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
#define WRITE_CC4OF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CC4OF_MASK) | ((val << CC4OF_START_BIT) & CC4OF_MASK )); \
   } 

#define ENABLE_CC4OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CC4OF_MASK ); \
   }

#define DISABLE_CC4OF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CC4OF_MASK ); \
   } 

#define READ_CC4OF() \
   ((READ_REGISTER_ULONG(0x10) & CC4OF_MASK)  >> CC4OF_START_BIT)

#define WHEN_CC4OF_HIGH() \
     if ( READ_CC4OF() )


#define UNLESS_CC4OF_HIGH() \
     if (! READ_CC4OF() )


#define WAIT_CC4OF_LOW() \
    while ( READ_CC4OF() );


#define WAIT_CC4OF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4OF() && (--___t___ > 0)); }


#define WAIT_CC4OF_HIGH() \
    while (! READ_CC4OF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Egr
//
// Return the value of register EGR
//
// Notes : Register Egr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EGR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

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
#define WRITE_UG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ UG_MASK) | ((val << UG_START_BIT) & UG_MASK )); \
   } 

#define ENABLE_UG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  UG_MASK ); \
   }

#define DISABLE_UG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~UG_MASK ); \
   } 

#define READ_UG() \
   ((READ_REGISTER_ULONG(0x14) & UG_MASK)  >> UG_START_BIT)

#define WHEN_UG_HIGH() \
     if ( READ_UG() )


#define UNLESS_UG_HIGH() \
     if (! READ_UG() )


#define WAIT_UG_LOW() \
    while ( READ_UG() );


#define WAIT_UG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_UG() && (--___t___ > 0)); }


#define WAIT_UG_HIGH() \
    while (! READ_UG() );


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
#define WRITE_CC1G(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CC1G_MASK) | ((val << CC1G_START_BIT) & CC1G_MASK )); \
   } 

#define ENABLE_CC1G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CC1G_MASK ); \
   }

#define DISABLE_CC1G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CC1G_MASK ); \
   } 

#define READ_CC1G() \
   ((READ_REGISTER_ULONG(0x14) & CC1G_MASK)  >> CC1G_START_BIT)

#define WHEN_CC1G_HIGH() \
     if ( READ_CC1G() )


#define UNLESS_CC1G_HIGH() \
     if (! READ_CC1G() )


#define WAIT_CC1G_LOW() \
    while ( READ_CC1G() );


#define WAIT_CC1G_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1G() && (--___t___ > 0)); }


#define WAIT_CC1G_HIGH() \
    while (! READ_CC1G() );


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
#define WRITE_CC2G(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CC2G_MASK) | ((val << CC2G_START_BIT) & CC2G_MASK )); \
   } 

#define ENABLE_CC2G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CC2G_MASK ); \
   }

#define DISABLE_CC2G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CC2G_MASK ); \
   } 

#define READ_CC2G() \
   ((READ_REGISTER_ULONG(0x14) & CC2G_MASK)  >> CC2G_START_BIT)

#define WHEN_CC2G_HIGH() \
     if ( READ_CC2G() )


#define UNLESS_CC2G_HIGH() \
     if (! READ_CC2G() )


#define WAIT_CC2G_LOW() \
    while ( READ_CC2G() );


#define WAIT_CC2G_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2G() && (--___t___ > 0)); }


#define WAIT_CC2G_HIGH() \
    while (! READ_CC2G() );


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
#define WRITE_CC3G(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CC3G_MASK) | ((val << CC3G_START_BIT) & CC3G_MASK )); \
   } 

#define ENABLE_CC3G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CC3G_MASK ); \
   }

#define DISABLE_CC3G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CC3G_MASK ); \
   } 

#define READ_CC3G() \
   ((READ_REGISTER_ULONG(0x14) & CC3G_MASK)  >> CC3G_START_BIT)

#define WHEN_CC3G_HIGH() \
     if ( READ_CC3G() )


#define UNLESS_CC3G_HIGH() \
     if (! READ_CC3G() )


#define WAIT_CC3G_LOW() \
    while ( READ_CC3G() );


#define WAIT_CC3G_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3G() && (--___t___ > 0)); }


#define WAIT_CC3G_HIGH() \
    while (! READ_CC3G() );


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
#define WRITE_CC4G(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CC4G_MASK) | ((val << CC4G_START_BIT) & CC4G_MASK )); \
   } 

#define ENABLE_CC4G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CC4G_MASK ); \
   }

#define DISABLE_CC4G() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CC4G_MASK ); \
   } 

#define READ_CC4G() \
   ((READ_REGISTER_ULONG(0x14) & CC4G_MASK)  >> CC4G_START_BIT)

#define WHEN_CC4G_HIGH() \
     if ( READ_CC4G() )


#define UNLESS_CC4G_HIGH() \
     if (! READ_CC4G() )


#define WAIT_CC4G_LOW() \
    while ( READ_CC4G() );


#define WAIT_CC4G_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4G() && (--___t___ > 0)); }


#define WAIT_CC4G_HIGH() \
    while (! READ_CC4G() );


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
#define WRITE_TG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TG_MASK) | ((val << TG_START_BIT) & TG_MASK )); \
   } 

#define ENABLE_TG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TG_MASK ); \
   }

#define DISABLE_TG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TG_MASK ); \
   } 

#define READ_TG() \
   ((READ_REGISTER_ULONG(0x14) & TG_MASK)  >> TG_START_BIT)

#define WHEN_TG_HIGH() \
     if ( READ_TG() )


#define UNLESS_TG_HIGH() \
     if (! READ_TG() )


#define WAIT_TG_LOW() \
    while ( READ_TG() );


#define WAIT_TG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TG() && (--___t___ > 0)); }


#define WAIT_TG_HIGH() \
    while (! READ_TG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr1Input
//
// Return the value of register CCMR1_INPUT
//
// Notes : Register Ccmr1Input at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCMR_1_INPUT( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_CCMR_1_INPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_CCMR_1_INPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_CCMR_1_INPUT() \
     READ_REGISTER_ULONG(0x18)

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
#define READ_CC1S() \
   ((READ_REGISTER_ULONG(0x18) & CC1S_MASK)  >> CC1S_START_BIT)

#define WRITE_CC1S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CC1S_MASK) | ((val << CC1S_START_BIT) & CC1S_MASK )); \
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
#define READ_ICPCS() \
   ((READ_REGISTER_ULONG(0x18) & ICPCS_MASK)  >> ICPCS_START_BIT)

#define WRITE_ICPCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ICPCS_MASK) | ((val << ICPCS_START_BIT) & ICPCS_MASK )); \
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
#define READ_IC1F() \
   ((READ_REGISTER_ULONG(0x18) & IC1F_MASK)  >> IC1F_START_BIT)

#define WRITE_IC1F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IC1F_MASK) | ((val << IC1F_START_BIT) & IC1F_MASK )); \
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
#define READ_CC2S() \
   ((READ_REGISTER_ULONG(0x18) & CC2S_MASK)  >> CC2S_START_BIT)

#define WRITE_CC2S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CC2S_MASK) | ((val << CC2S_START_BIT) & CC2S_MASK )); \
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
#define READ_IC2PCS() \
   ((READ_REGISTER_ULONG(0x18) & IC2PCS_MASK)  >> IC2PCS_START_BIT)

#define WRITE_IC2PCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IC2PCS_MASK) | ((val << IC2PCS_START_BIT) & IC2PCS_MASK )); \
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
#define READ_IC2F() \
   ((READ_REGISTER_ULONG(0x18) & IC2F_MASK)  >> IC2F_START_BIT)

#define WRITE_IC2F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IC2F_MASK) | ((val << IC2F_START_BIT) & IC2F_MASK )); \
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
#define WRITE_REGISTER_CCMR_1_OUTPUT( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_CCMR_1_OUTPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_CCMR_1_OUTPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_CCMR_1_OUTPUT() \
     READ_REGISTER_ULONG(0x18)

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
#define READ_CC1S() \
   ((READ_REGISTER_ULONG(0x18) & CC1S_MASK)  >> CC1S_START_BIT)

#define WRITE_CC1S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CC1S_MASK) | ((val << CC1S_START_BIT) & CC1S_MASK )); \
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
#define WRITE_OC1FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC1FE_MASK) | ((val << OC1FE_START_BIT) & OC1FE_MASK )); \
   } 

#define ENABLE_OC1FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OC1FE_MASK ); \
   }

#define DISABLE_OC1FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OC1FE_MASK ); \
   } 

#define READ_OC1FE() \
   ((READ_REGISTER_ULONG(0x18) & OC1FE_MASK)  >> OC1FE_START_BIT)

#define WHEN_OC1FE_HIGH() \
     if ( READ_OC1FE() )


#define UNLESS_OC1FE_HIGH() \
     if (! READ_OC1FE() )


#define WAIT_OC1FE_LOW() \
    while ( READ_OC1FE() );


#define WAIT_OC1FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC1FE() && (--___t___ > 0)); }


#define WAIT_OC1FE_HIGH() \
    while (! READ_OC1FE() );


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
#define WRITE_OC1PE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC1PE_MASK) | ((val << OC1PE_START_BIT) & OC1PE_MASK )); \
   } 

#define ENABLE_OC1PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OC1PE_MASK ); \
   }

#define DISABLE_OC1PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OC1PE_MASK ); \
   } 

#define READ_OC1PE() \
   ((READ_REGISTER_ULONG(0x18) & OC1PE_MASK)  >> OC1PE_START_BIT)

#define WHEN_OC1PE_HIGH() \
     if ( READ_OC1PE() )


#define UNLESS_OC1PE_HIGH() \
     if (! READ_OC1PE() )


#define WAIT_OC1PE_LOW() \
    while ( READ_OC1PE() );


#define WAIT_OC1PE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC1PE() && (--___t___ > 0)); }


#define WAIT_OC1PE_HIGH() \
    while (! READ_OC1PE() );


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
#define READ_OC1M() \
   ((READ_REGISTER_ULONG(0x18) & OC1M_MASK)  >> OC1M_START_BIT)

#define WRITE_OC1M(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC1M_MASK) | ((val << OC1M_START_BIT) & OC1M_MASK )); \
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
#define WRITE_OC1CE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC1CE_MASK) | ((val << OC1CE_START_BIT) & OC1CE_MASK )); \
   } 

#define ENABLE_OC1CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OC1CE_MASK ); \
   }

#define DISABLE_OC1CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OC1CE_MASK ); \
   } 

#define READ_OC1CE() \
   ((READ_REGISTER_ULONG(0x18) & OC1CE_MASK)  >> OC1CE_START_BIT)

#define WHEN_OC1CE_HIGH() \
     if ( READ_OC1CE() )


#define UNLESS_OC1CE_HIGH() \
     if (! READ_OC1CE() )


#define WAIT_OC1CE_LOW() \
    while ( READ_OC1CE() );


#define WAIT_OC1CE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC1CE() && (--___t___ > 0)); }


#define WAIT_OC1CE_HIGH() \
    while (! READ_OC1CE() );


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
#define READ_CC2S() \
   ((READ_REGISTER_ULONG(0x18) & CC2S_MASK)  >> CC2S_START_BIT)

#define WRITE_CC2S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CC2S_MASK) | ((val << CC2S_START_BIT) & CC2S_MASK )); \
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
#define WRITE_OC2FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC2FE_MASK) | ((val << OC2FE_START_BIT) & OC2FE_MASK )); \
   } 

#define ENABLE_OC2FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OC2FE_MASK ); \
   }

#define DISABLE_OC2FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OC2FE_MASK ); \
   } 

#define READ_OC2FE() \
   ((READ_REGISTER_ULONG(0x18) & OC2FE_MASK)  >> OC2FE_START_BIT)

#define WHEN_OC2FE_HIGH() \
     if ( READ_OC2FE() )


#define UNLESS_OC2FE_HIGH() \
     if (! READ_OC2FE() )


#define WAIT_OC2FE_LOW() \
    while ( READ_OC2FE() );


#define WAIT_OC2FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC2FE() && (--___t___ > 0)); }


#define WAIT_OC2FE_HIGH() \
    while (! READ_OC2FE() );


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
#define WRITE_OC2PE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC2PE_MASK) | ((val << OC2PE_START_BIT) & OC2PE_MASK )); \
   } 

#define ENABLE_OC2PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OC2PE_MASK ); \
   }

#define DISABLE_OC2PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OC2PE_MASK ); \
   } 

#define READ_OC2PE() \
   ((READ_REGISTER_ULONG(0x18) & OC2PE_MASK)  >> OC2PE_START_BIT)

#define WHEN_OC2PE_HIGH() \
     if ( READ_OC2PE() )


#define UNLESS_OC2PE_HIGH() \
     if (! READ_OC2PE() )


#define WAIT_OC2PE_LOW() \
    while ( READ_OC2PE() );


#define WAIT_OC2PE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC2PE() && (--___t___ > 0)); }


#define WAIT_OC2PE_HIGH() \
    while (! READ_OC2PE() );


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
#define READ_OC2M() \
   ((READ_REGISTER_ULONG(0x18) & OC2M_MASK)  >> OC2M_START_BIT)

#define WRITE_OC2M(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC2M_MASK) | ((val << OC2M_START_BIT) & OC2M_MASK )); \
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
#define WRITE_OC2CE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OC2CE_MASK) | ((val << OC2CE_START_BIT) & OC2CE_MASK )); \
   } 

#define ENABLE_OC2CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OC2CE_MASK ); \
   }

#define DISABLE_OC2CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OC2CE_MASK ); \
   } 

#define READ_OC2CE() \
   ((READ_REGISTER_ULONG(0x18) & OC2CE_MASK)  >> OC2CE_START_BIT)

#define WHEN_OC2CE_HIGH() \
     if ( READ_OC2CE() )


#define UNLESS_OC2CE_HIGH() \
     if (! READ_OC2CE() )


#define WAIT_OC2CE_LOW() \
    while ( READ_OC2CE() );


#define WAIT_OC2CE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC2CE() && (--___t___ > 0)); }


#define WAIT_OC2CE_HIGH() \
    while (! READ_OC2CE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccmr2Input
//
// Return the value of register CCMR2_INPUT
//
// Notes : Register Ccmr2Input at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCMR_2_INPUT( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_CCMR_2_INPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_CCMR_2_INPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_CCMR_2_INPUT() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : CC3S
//
// Return the value of register Ccmr2Input
//
// Notes : Capture/compare 3 selection 
//        (CCMR2_Input) at the offset 0x1C, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC3S() \
   ((READ_REGISTER_ULONG(0x1C) & CC3S_MASK)  >> CC3S_START_BIT)

#define WRITE_CC3S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CC3S_MASK) | ((val << CC3S_START_BIT) & CC3S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC3PSC
//
// Return the value of register Ccmr2Input
//
// Notes : Input capture 3 prescaler 
//        (CCMR2_Input) at the offset 0x1C, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC3PSC() \
   ((READ_REGISTER_ULONG(0x1C) & IC3PSC_MASK)  >> IC3PSC_START_BIT)

#define WRITE_IC3PSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ IC3PSC_MASK) | ((val << IC3PSC_START_BIT) & IC3PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC3F
//
// Return the value of register Ccmr2Input
//
// Notes : Input capture 3 filter 
//        (CCMR2_Input) at the offset 0x1C, Bits 4:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC3F() \
   ((READ_REGISTER_ULONG(0x1C) & IC3F_MASK)  >> IC3F_START_BIT)

#define WRITE_IC3F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ IC3F_MASK) | ((val << IC3F_START_BIT) & IC3F_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CC4S
//
// Return the value of register Ccmr2Input
//
// Notes : Capture/Compare 4 selection 
//        (CCMR2_Input) at the offset 0x1C, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC4S() \
   ((READ_REGISTER_ULONG(0x1C) & CC4S_MASK)  >> CC4S_START_BIT)

#define WRITE_CC4S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CC4S_MASK) | ((val << CC4S_START_BIT) & CC4S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC4PSC
//
// Return the value of register Ccmr2Input
//
// Notes : Input capture 4 prescaler 
//        (CCMR2_Input) at the offset 0x1C, Bits 10:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC4PSC() \
   ((READ_REGISTER_ULONG(0x1C) & IC4PSC_MASK)  >> IC4PSC_START_BIT)

#define WRITE_IC4PSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ IC4PSC_MASK) | ((val << IC4PSC_START_BIT) & IC4PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : IC4F
//
// Return the value of register Ccmr2Input
//
// Notes : Input capture 4 filter 
//        (CCMR2_Input) at the offset 0x1C, Bits 12:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_IC4F() \
   ((READ_REGISTER_ULONG(0x1C) & IC4F_MASK)  >> IC4F_START_BIT)

#define WRITE_IC4F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ IC4F_MASK) | ((val << IC4F_START_BIT) & IC4F_MASK )); \
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
#define WRITE_REGISTER_CCMR_2_OUTPUT( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_CCMR_2_OUTPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_CCMR_2_OUTPUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_CCMR_2_OUTPUT() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : CC3S
//
// Return the value of register Ccmr2Output
//
// Notes : CC3S 
//        (CCMR2_Output) at the offset 0x1C, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC3S() \
   ((READ_REGISTER_ULONG(0x1C) & CC3S_MASK)  >> CC3S_START_BIT)

#define WRITE_CC3S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CC3S_MASK) | ((val << CC3S_START_BIT) & CC3S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC3FE
//
// Return the value of register Ccmr2Output
//
// Notes : OC3FE 
//        (CCMR2_Output) at the offset 0x1C, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC3FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC3FE_MASK) | ((val << OC3FE_START_BIT) & OC3FE_MASK )); \
   } 

#define ENABLE_OC3FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  OC3FE_MASK ); \
   }

#define DISABLE_OC3FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~OC3FE_MASK ); \
   } 

#define READ_OC3FE() \
   ((READ_REGISTER_ULONG(0x1C) & OC3FE_MASK)  >> OC3FE_START_BIT)

#define WHEN_OC3FE_HIGH() \
     if ( READ_OC3FE() )


#define UNLESS_OC3FE_HIGH() \
     if (! READ_OC3FE() )


#define WAIT_OC3FE_LOW() \
    while ( READ_OC3FE() );


#define WAIT_OC3FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC3FE() && (--___t___ > 0)); }


#define WAIT_OC3FE_HIGH() \
    while (! READ_OC3FE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OC3PE
//
// Return the value of register Ccmr2Output
//
// Notes : OC3PE 
//        (CCMR2_Output) at the offset 0x1C, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC3PE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC3PE_MASK) | ((val << OC3PE_START_BIT) & OC3PE_MASK )); \
   } 

#define ENABLE_OC3PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  OC3PE_MASK ); \
   }

#define DISABLE_OC3PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~OC3PE_MASK ); \
   } 

#define READ_OC3PE() \
   ((READ_REGISTER_ULONG(0x1C) & OC3PE_MASK)  >> OC3PE_START_BIT)

#define WHEN_OC3PE_HIGH() \
     if ( READ_OC3PE() )


#define UNLESS_OC3PE_HIGH() \
     if (! READ_OC3PE() )


#define WAIT_OC3PE_LOW() \
    while ( READ_OC3PE() );


#define WAIT_OC3PE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC3PE() && (--___t___ > 0)); }


#define WAIT_OC3PE_HIGH() \
    while (! READ_OC3PE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OC3M
//
// Return the value of register Ccmr2Output
//
// Notes : OC3M 
//        (CCMR2_Output) at the offset 0x1C, Bits 4:6
//
/////////////////////////////////////////////////////////////////////////
#define READ_OC3M() \
   ((READ_REGISTER_ULONG(0x1C) & OC3M_MASK)  >> OC3M_START_BIT)

#define WRITE_OC3M(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC3M_MASK) | ((val << OC3M_START_BIT) & OC3M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC3CE
//
// Return the value of register Ccmr2Output
//
// Notes : OC3CE 
//        (CCMR2_Output) at the offset 0x1C, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC3CE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC3CE_MASK) | ((val << OC3CE_START_BIT) & OC3CE_MASK )); \
   } 

#define ENABLE_OC3CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  OC3CE_MASK ); \
   }

#define DISABLE_OC3CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~OC3CE_MASK ); \
   } 

#define READ_OC3CE() \
   ((READ_REGISTER_ULONG(0x1C) & OC3CE_MASK)  >> OC3CE_START_BIT)

#define WHEN_OC3CE_HIGH() \
     if ( READ_OC3CE() )


#define UNLESS_OC3CE_HIGH() \
     if (! READ_OC3CE() )


#define WAIT_OC3CE_LOW() \
    while ( READ_OC3CE() );


#define WAIT_OC3CE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC3CE() && (--___t___ > 0)); }


#define WAIT_OC3CE_HIGH() \
    while (! READ_OC3CE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CC4S
//
// Return the value of register Ccmr2Output
//
// Notes : CC4S 
//        (CCMR2_Output) at the offset 0x1C, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_CC4S() \
   ((READ_REGISTER_ULONG(0x1C) & CC4S_MASK)  >> CC4S_START_BIT)

#define WRITE_CC4S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CC4S_MASK) | ((val << CC4S_START_BIT) & CC4S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OC4FE
//
// Return the value of register Ccmr2Output
//
// Notes : OC4FE 
//        (CCMR2_Output) at the offset 0x1C, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC4FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC4FE_MASK) | ((val << OC4FE_START_BIT) & OC4FE_MASK )); \
   } 

#define ENABLE_OC4FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  OC4FE_MASK ); \
   }

#define DISABLE_OC4FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~OC4FE_MASK ); \
   } 

#define READ_OC4FE() \
   ((READ_REGISTER_ULONG(0x1C) & OC4FE_MASK)  >> OC4FE_START_BIT)

#define WHEN_OC4FE_HIGH() \
     if ( READ_OC4FE() )


#define UNLESS_OC4FE_HIGH() \
     if (! READ_OC4FE() )


#define WAIT_OC4FE_LOW() \
    while ( READ_OC4FE() );


#define WAIT_OC4FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC4FE() && (--___t___ > 0)); }


#define WAIT_OC4FE_HIGH() \
    while (! READ_OC4FE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OC4PE
//
// Return the value of register Ccmr2Output
//
// Notes : OC4PE 
//        (CCMR2_Output) at the offset 0x1C, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OC4PE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC4PE_MASK) | ((val << OC4PE_START_BIT) & OC4PE_MASK )); \
   } 

#define ENABLE_OC4PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  OC4PE_MASK ); \
   }

#define DISABLE_OC4PE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~OC4PE_MASK ); \
   } 

#define READ_OC4PE() \
   ((READ_REGISTER_ULONG(0x1C) & OC4PE_MASK)  >> OC4PE_START_BIT)

#define WHEN_OC4PE_HIGH() \
     if ( READ_OC4PE() )


#define UNLESS_OC4PE_HIGH() \
     if (! READ_OC4PE() )


#define WAIT_OC4PE_LOW() \
    while ( READ_OC4PE() );


#define WAIT_OC4PE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OC4PE() && (--___t___ > 0)); }


#define WAIT_OC4PE_HIGH() \
    while (! READ_OC4PE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OC4M
//
// Return the value of register Ccmr2Output
//
// Notes : OC4M 
//        (CCMR2_Output) at the offset 0x1C, Bits 12:14
//
/////////////////////////////////////////////////////////////////////////
#define READ_OC4M() \
   ((READ_REGISTER_ULONG(0x1C) & OC4M_MASK)  >> OC4M_START_BIT)

#define WRITE_OC4M(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OC4M_MASK) | ((val << OC4M_START_BIT) & OC4M_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : O24CE
//
// Return the value of register Ccmr2Output
//
// Notes : O24CE 
//        (CCMR2_Output) at the offset 0x1C, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_O24CE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ O24CE_MASK) | ((val << O24CE_START_BIT) & O24CE_MASK )); \
   } 

#define ENABLE_O24CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  O24CE_MASK ); \
   }

#define DISABLE_O24CE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~O24CE_MASK ); \
   } 

#define READ_O24CE() \
   ((READ_REGISTER_ULONG(0x1C) & O24CE_MASK)  >> O24CE_START_BIT)

#define WHEN_O24CE_HIGH() \
     if ( READ_O24CE() )


#define UNLESS_O24CE_HIGH() \
     if (! READ_O24CE() )


#define WAIT_O24CE_LOW() \
    while ( READ_O24CE() );


#define WAIT_O24CE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_O24CE() && (--___t___ > 0)); }


#define WAIT_O24CE_HIGH() \
    while (! READ_O24CE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccer
//
// Return the value of register CCER
//
// Notes : Register Ccer at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCER( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_CCER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_CCER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_CCER() \
     READ_REGISTER_ULONG(0x20)

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
#define WRITE_CC1E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC1E_MASK) | ((val << CC1E_START_BIT) & CC1E_MASK )); \
   } 

#define ENABLE_CC1E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC1E_MASK ); \
   }

#define DISABLE_CC1E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC1E_MASK ); \
   } 

#define READ_CC1E() \
   ((READ_REGISTER_ULONG(0x20) & CC1E_MASK)  >> CC1E_START_BIT)

#define WHEN_CC1E_HIGH() \
     if ( READ_CC1E() )


#define UNLESS_CC1E_HIGH() \
     if (! READ_CC1E() )


#define WAIT_CC1E_LOW() \
    while ( READ_CC1E() );


#define WAIT_CC1E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1E() && (--___t___ > 0)); }


#define WAIT_CC1E_HIGH() \
    while (! READ_CC1E() );


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
#define WRITE_CC1P(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC1P_MASK) | ((val << CC1P_START_BIT) & CC1P_MASK )); \
   } 

#define ENABLE_CC1P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC1P_MASK ); \
   }

#define DISABLE_CC1P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC1P_MASK ); \
   } 

#define READ_CC1P() \
   ((READ_REGISTER_ULONG(0x20) & CC1P_MASK)  >> CC1P_START_BIT)

#define WHEN_CC1P_HIGH() \
     if ( READ_CC1P() )


#define UNLESS_CC1P_HIGH() \
     if (! READ_CC1P() )


#define WAIT_CC1P_LOW() \
    while ( READ_CC1P() );


#define WAIT_CC1P_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1P() && (--___t___ > 0)); }


#define WAIT_CC1P_HIGH() \
    while (! READ_CC1P() );


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
#define WRITE_CC1NP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC1NP_MASK) | ((val << CC1NP_START_BIT) & CC1NP_MASK )); \
   } 

#define ENABLE_CC1NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC1NP_MASK ); \
   }

#define DISABLE_CC1NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC1NP_MASK ); \
   } 

#define READ_CC1NP() \
   ((READ_REGISTER_ULONG(0x20) & CC1NP_MASK)  >> CC1NP_START_BIT)

#define WHEN_CC1NP_HIGH() \
     if ( READ_CC1NP() )


#define UNLESS_CC1NP_HIGH() \
     if (! READ_CC1NP() )


#define WAIT_CC1NP_LOW() \
    while ( READ_CC1NP() );


#define WAIT_CC1NP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC1NP() && (--___t___ > 0)); }


#define WAIT_CC1NP_HIGH() \
    while (! READ_CC1NP() );


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
#define WRITE_CC2E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC2E_MASK) | ((val << CC2E_START_BIT) & CC2E_MASK )); \
   } 

#define ENABLE_CC2E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC2E_MASK ); \
   }

#define DISABLE_CC2E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC2E_MASK ); \
   } 

#define READ_CC2E() \
   ((READ_REGISTER_ULONG(0x20) & CC2E_MASK)  >> CC2E_START_BIT)

#define WHEN_CC2E_HIGH() \
     if ( READ_CC2E() )


#define UNLESS_CC2E_HIGH() \
     if (! READ_CC2E() )


#define WAIT_CC2E_LOW() \
    while ( READ_CC2E() );


#define WAIT_CC2E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2E() && (--___t___ > 0)); }


#define WAIT_CC2E_HIGH() \
    while (! READ_CC2E() );


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
#define WRITE_CC2P(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC2P_MASK) | ((val << CC2P_START_BIT) & CC2P_MASK )); \
   } 

#define ENABLE_CC2P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC2P_MASK ); \
   }

#define DISABLE_CC2P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC2P_MASK ); \
   } 

#define READ_CC2P() \
   ((READ_REGISTER_ULONG(0x20) & CC2P_MASK)  >> CC2P_START_BIT)

#define WHEN_CC2P_HIGH() \
     if ( READ_CC2P() )


#define UNLESS_CC2P_HIGH() \
     if (! READ_CC2P() )


#define WAIT_CC2P_LOW() \
    while ( READ_CC2P() );


#define WAIT_CC2P_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2P() && (--___t___ > 0)); }


#define WAIT_CC2P_HIGH() \
    while (! READ_CC2P() );


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
#define WRITE_CC2NP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC2NP_MASK) | ((val << CC2NP_START_BIT) & CC2NP_MASK )); \
   } 

#define ENABLE_CC2NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC2NP_MASK ); \
   }

#define DISABLE_CC2NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC2NP_MASK ); \
   } 

#define READ_CC2NP() \
   ((READ_REGISTER_ULONG(0x20) & CC2NP_MASK)  >> CC2NP_START_BIT)

#define WHEN_CC2NP_HIGH() \
     if ( READ_CC2NP() )


#define UNLESS_CC2NP_HIGH() \
     if (! READ_CC2NP() )


#define WAIT_CC2NP_LOW() \
    while ( READ_CC2NP() );


#define WAIT_CC2NP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC2NP() && (--___t___ > 0)); }


#define WAIT_CC2NP_HIGH() \
    while (! READ_CC2NP() );


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
#define WRITE_CC3E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC3E_MASK) | ((val << CC3E_START_BIT) & CC3E_MASK )); \
   } 

#define ENABLE_CC3E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC3E_MASK ); \
   }

#define DISABLE_CC3E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC3E_MASK ); \
   } 

#define READ_CC3E() \
   ((READ_REGISTER_ULONG(0x20) & CC3E_MASK)  >> CC3E_START_BIT)

#define WHEN_CC3E_HIGH() \
     if ( READ_CC3E() )


#define UNLESS_CC3E_HIGH() \
     if (! READ_CC3E() )


#define WAIT_CC3E_LOW() \
    while ( READ_CC3E() );


#define WAIT_CC3E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3E() && (--___t___ > 0)); }


#define WAIT_CC3E_HIGH() \
    while (! READ_CC3E() );


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
#define WRITE_CC3P(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC3P_MASK) | ((val << CC3P_START_BIT) & CC3P_MASK )); \
   } 

#define ENABLE_CC3P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC3P_MASK ); \
   }

#define DISABLE_CC3P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC3P_MASK ); \
   } 

#define READ_CC3P() \
   ((READ_REGISTER_ULONG(0x20) & CC3P_MASK)  >> CC3P_START_BIT)

#define WHEN_CC3P_HIGH() \
     if ( READ_CC3P() )


#define UNLESS_CC3P_HIGH() \
     if (! READ_CC3P() )


#define WAIT_CC3P_LOW() \
    while ( READ_CC3P() );


#define WAIT_CC3P_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3P() && (--___t___ > 0)); }


#define WAIT_CC3P_HIGH() \
    while (! READ_CC3P() );


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
#define WRITE_CC3NP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC3NP_MASK) | ((val << CC3NP_START_BIT) & CC3NP_MASK )); \
   } 

#define ENABLE_CC3NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC3NP_MASK ); \
   }

#define DISABLE_CC3NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC3NP_MASK ); \
   } 

#define READ_CC3NP() \
   ((READ_REGISTER_ULONG(0x20) & CC3NP_MASK)  >> CC3NP_START_BIT)

#define WHEN_CC3NP_HIGH() \
     if ( READ_CC3NP() )


#define UNLESS_CC3NP_HIGH() \
     if (! READ_CC3NP() )


#define WAIT_CC3NP_LOW() \
    while ( READ_CC3NP() );


#define WAIT_CC3NP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC3NP() && (--___t___ > 0)); }


#define WAIT_CC3NP_HIGH() \
    while (! READ_CC3NP() );


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
#define WRITE_CC4E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC4E_MASK) | ((val << CC4E_START_BIT) & CC4E_MASK )); \
   } 

#define ENABLE_CC4E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC4E_MASK ); \
   }

#define DISABLE_CC4E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC4E_MASK ); \
   } 

#define READ_CC4E() \
   ((READ_REGISTER_ULONG(0x20) & CC4E_MASK)  >> CC4E_START_BIT)

#define WHEN_CC4E_HIGH() \
     if ( READ_CC4E() )


#define UNLESS_CC4E_HIGH() \
     if (! READ_CC4E() )


#define WAIT_CC4E_LOW() \
    while ( READ_CC4E() );


#define WAIT_CC4E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4E() && (--___t___ > 0)); }


#define WAIT_CC4E_HIGH() \
    while (! READ_CC4E() );


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
#define WRITE_CC4P(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC4P_MASK) | ((val << CC4P_START_BIT) & CC4P_MASK )); \
   } 

#define ENABLE_CC4P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC4P_MASK ); \
   }

#define DISABLE_CC4P() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC4P_MASK ); \
   } 

#define READ_CC4P() \
   ((READ_REGISTER_ULONG(0x20) & CC4P_MASK)  >> CC4P_START_BIT)

#define WHEN_CC4P_HIGH() \
     if ( READ_CC4P() )


#define UNLESS_CC4P_HIGH() \
     if (! READ_CC4P() )


#define WAIT_CC4P_LOW() \
    while ( READ_CC4P() );


#define WAIT_CC4P_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4P() && (--___t___ > 0)); }


#define WAIT_CC4P_HIGH() \
    while (! READ_CC4P() );


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
#define WRITE_CC4NP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CC4NP_MASK) | ((val << CC4NP_START_BIT) & CC4NP_MASK )); \
   } 

#define ENABLE_CC4NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  CC4NP_MASK ); \
   }

#define DISABLE_CC4NP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~CC4NP_MASK ); \
   } 

#define READ_CC4NP() \
   ((READ_REGISTER_ULONG(0x20) & CC4NP_MASK)  >> CC4NP_START_BIT)

#define WHEN_CC4NP_HIGH() \
     if ( READ_CC4NP() )


#define UNLESS_CC4NP_HIGH() \
     if (! READ_CC4NP() )


#define WAIT_CC4NP_LOW() \
    while ( READ_CC4NP() );


#define WAIT_CC4NP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CC4NP() && (--___t___ > 0)); }


#define WAIT_CC4NP_HIGH() \
    while (! READ_CC4NP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cnt
//
// Return the value of register CNT
//
// Notes : Register Cnt at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CNT( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_CNT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_CNT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_CNT() \
     READ_REGISTER_ULONG(0x24)

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
#define READ_CNT_L() \
   ((READ_REGISTER_ULONG(0x24) & CNT_L_MASK)  >> CNT_L_START_BIT)

#define WRITE_CNT_L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ CNT_L_MASK) | ((val << CNT_L_START_BIT) & CNT_L_MASK )); \
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
#define READ_CNT_H() \
   ((READ_REGISTER_ULONG(0x24) & CNT_H_MASK)  >> CNT_H_START_BIT)

#define WRITE_CNT_H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ CNT_H_MASK) | ((val << CNT_H_START_BIT) & CNT_H_MASK )); \
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
#define WRITE_REGISTER_PSC( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_PSC(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_PSC(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_PSC() \
     READ_REGISTER_ULONG(0x28)

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
#define READ_PSC() \
   ((READ_REGISTER_ULONG(0x28) & PSC_MASK)  >> PSC_START_BIT)

#define WRITE_PSC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ PSC_MASK) | ((val << PSC_START_BIT) & PSC_MASK )); \
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
#define WRITE_REGISTER_ARR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_ARR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_ARR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_ARR() \
     READ_REGISTER_ULONG(0x2C)

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
#define READ_ARR_L() \
   ((READ_REGISTER_ULONG(0x2C) & ARR_L_MASK)  >> ARR_L_START_BIT)

#define WRITE_ARR_L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ ARR_L_MASK) | ((val << ARR_L_START_BIT) & ARR_L_MASK )); \
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
#define READ_ARR_H() \
   ((READ_REGISTER_ULONG(0x2C) & ARR_H_MASK)  >> ARR_H_START_BIT)

#define WRITE_ARR_H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ ARR_H_MASK) | ((val << ARR_H_START_BIT) & ARR_H_MASK )); \
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
#define WRITE_REGISTER_CCR_1( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_CCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_CCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_CCR_1() \
     READ_REGISTER_ULONG(0x34)

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
#define READ_CCR1_L() \
   ((READ_REGISTER_ULONG(0x34) & CCR1_L_MASK)  >> CCR1_L_START_BIT)

#define WRITE_CCR1_L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CCR1_L_MASK) | ((val << CCR1_L_START_BIT) & CCR1_L_MASK )); \
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
#define READ_CCR1_H() \
   ((READ_REGISTER_ULONG(0x34) & CCR1_H_MASK)  >> CCR1_H_START_BIT)

#define WRITE_CCR1_H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CCR1_H_MASK) | ((val << CCR1_H_START_BIT) & CCR1_H_MASK )); \
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
#define WRITE_REGISTER_CCR_2( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_CCR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_CCR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_CCR_2() \
     READ_REGISTER_ULONG(0x38)

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
#define READ_CCR2_L() \
   ((READ_REGISTER_ULONG(0x38) & CCR2_L_MASK)  >> CCR2_L_START_BIT)

#define WRITE_CCR2_L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CCR2_L_MASK) | ((val << CCR2_L_START_BIT) & CCR2_L_MASK )); \
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
#define READ_CCR2_H() \
   ((READ_REGISTER_ULONG(0x38) & CCR2_H_MASK)  >> CCR2_H_START_BIT)

#define WRITE_CCR2_H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CCR2_H_MASK) | ((val << CCR2_H_START_BIT) & CCR2_H_MASK )); \
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
#define WRITE_REGISTER_CCR_3( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_CCR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_CCR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_CCR_3() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR3_L
//
// Return the value of register Ccr3
//
// Notes : Low Capture/Compare value 
//        (CCR3) at the offset 0x3C, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR3_L() \
   ((READ_REGISTER_ULONG(0x3C) & CCR3_L_MASK)  >> CCR3_L_START_BIT)

#define WRITE_CCR3_L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CCR3_L_MASK) | ((val << CCR3_L_START_BIT) & CCR3_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR3_H
//
// Return the value of register Ccr3
//
// Notes : High Capture/Compare value 
//        (CCR3) at the offset 0x3C, Bits 16:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR3_H() \
   ((READ_REGISTER_ULONG(0x3C) & CCR3_H_MASK)  >> CCR3_H_START_BIT)

#define WRITE_CCR3_H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CCR3_H_MASK) | ((val << CCR3_H_START_BIT) & CCR3_H_MASK )); \
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
#define WRITE_REGISTER_CCR_4( y) \
     WRITE_REGISTER_ULONG( 0x40 , y)

#define SET_BITS_CCR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  mask ); \
   }

#define CLEAR_BITS_CCR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val & ~mask ); \
   }

#define READ_REGISTER_CCR_4() \
     READ_REGISTER_ULONG(0x40)

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR4_L
//
// Return the value of register Ccr4
//
// Notes : Low Capture/Compare value 
//        (CCR4) at the offset 0x40, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR4_L() \
   ((READ_REGISTER_ULONG(0x40) & CCR4_L_MASK)  >> CCR4_L_START_BIT)

#define WRITE_CCR4_L(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ CCR4_L_MASK) | ((val << CCR4_L_START_BIT) & CCR4_L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : CCR4_H
//
// Return the value of register Ccr4
//
// Notes : High Capture/Compare value 
//        (CCR4) at the offset 0x40, Bits 16:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_CCR4_H() \
   ((READ_REGISTER_ULONG(0x40) & CCR4_H_MASK)  >> CCR4_H_START_BIT)

#define WRITE_CCR4_H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ CCR4_H_MASK) | ((val << CCR4_H_START_BIT) & CCR4_H_MASK )); \
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
#define WRITE_REGISTER_DCR( y) \
     WRITE_REGISTER_ULONG( 0x48 , y)

#define SET_BITS_DCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  mask ); \
   }

#define CLEAR_BITS_DCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val & ~mask ); \
   }

#define READ_REGISTER_DCR() \
     READ_REGISTER_ULONG(0x48)

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
#define READ_DBA() \
   ((READ_REGISTER_ULONG(0x48) & DBA_MASK)  >> DBA_START_BIT)

#define WRITE_DBA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ DBA_MASK) | ((val << DBA_START_BIT) & DBA_MASK )); \
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
#define READ_DBL() \
   ((READ_REGISTER_ULONG(0x48) & DBL_MASK)  >> DBL_START_BIT)

#define WRITE_DBL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ DBL_MASK) | ((val << DBL_START_BIT) & DBL_MASK )); \
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
#define WRITE_REGISTER_DMAR( y) \
     WRITE_REGISTER_ULONG( 0x4C , y)

#define SET_BITS_DMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  mask ); \
   }

#define CLEAR_BITS_DMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val & ~mask ); \
   }

#define READ_REGISTER_DMAR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : DMAB
//
// Return the value of register Dmar
//
// Notes : DMA register for burst accesses 
//        (DMAR) at the offset 0x4C, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_DMAB() \
   ((READ_REGISTER_ULONG(0x4C) & DMAB_MASK)  >> DMAB_START_BIT)

#define WRITE_DMAB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ DMAB_MASK) | ((val << DMAB_START_BIT) & DMAB_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Or1
//
// Return the value of register OR1
//
// Notes : Register Or1 at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OR_1( y) \
     WRITE_REGISTER_ULONG( 0x50 , y)

#define SET_BITS_OR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  mask ); \
   }

#define CLEAR_BITS_OR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val & ~mask ); \
   }

#define READ_REGISTER_OR_1() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Or1
//
// Return the value of register OR_1
//
// Notes : Register TIM3 option register 1 (OR1) at the offset 0x50, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Input Capture 1 remap 
    // 
#define TI1_RMP_MASK 0x3U
#define TI1_RMP_OFFSET 1
#define TI1_RMP_START_BIT 0
#define TI1_RMP_WIDTH 2


#define OR_1_REG 0x50

typedef enum ti1_rmp {
    TI_1_RMP_0,
    TI_1_RMP_1
} TI_1_RMP_T ;
#define READ_TI1_RMP() \
   ((READ_REGISTER_ULONG(0x50) & TI1_RMP_MASK)  >> TI1_RMP_START_BIT)

#define WRITE_TI1_RMP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ TI1_RMP_MASK) | ((val << TI1_RMP_START_BIT) & TI1_RMP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Or2
//
// Return the value of register OR2
//
// Notes : Register Or2 at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OR_2( y) \
     WRITE_REGISTER_ULONG( 0x60 , y)

#define SET_BITS_OR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  mask ); \
   }

#define CLEAR_BITS_OR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val & ~mask ); \
   }

#define READ_REGISTER_OR_2() \
     READ_REGISTER_ULONG(0x60)

/////////////////////////////////////////////////////////////////////////
//
// Function : Or2
//
// Return the value of register OR_2
//
// Notes : Register TIM3 option register 2 (OR2) at the offset 0x60, Bits 14:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ETR source selection 
    // 
#define ETRSEL_MASK 0x1C000U
#define ETRSEL_OFFSET 16
#define ETRSEL_START_BIT 14
#define ETRSEL_WIDTH 3


#define OR_2_REG 0x60

typedef enum etrsel {
    ETRSEL_0,
    ETRSEL_1
} ETRSEL_T ;
#define READ_ETRSEL() \
   ((READ_REGISTER_ULONG(0x60) & ETRSEL_MASK)  >> ETRSEL_START_BIT)

#define WRITE_ETRSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ETRSEL_MASK) | ((val << ETRSEL_START_BIT) & ETRSEL_MASK )); \
   } 

