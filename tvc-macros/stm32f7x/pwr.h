/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/pwr.h
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
 
#define PWR 0x40007000
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
// Function : UDEN
//
// Return the value of register Cr1
//
// Notes : Under-drive enable in stop mode 
//        (CR1) at the offset 0x0, Bits 18:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_UDEN() \
   ((READ_REGISTER_ULONG(0x0) & UDEN_MASK)  >> UDEN_START_BIT)

#define WRITE_UDEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ UDEN_MASK) | ((val << UDEN_START_BIT) & UDEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ODSWEN
//
// Return the value of register Cr1
//
// Notes : Over-drive switching enabled 
//        (CR1) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODSWEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ODSWEN_MASK) | ((val << ODSWEN_START_BIT) & ODSWEN_MASK )); \
   } 

#define ENABLE_ODSWEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ODSWEN_MASK ); \
   }

#define DISABLE_ODSWEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ODSWEN_MASK ); \
   } 

#define READ_ODSWEN() \
   ((READ_REGISTER_ULONG(0x0) & ODSWEN_MASK)  >> ODSWEN_START_BIT)

#define WHEN_ODSWEN_HIGH() \
     if ( READ_ODSWEN() )


#define UNLESS_ODSWEN_HIGH() \
     if (! READ_ODSWEN() )


#define WAIT_ODSWEN_LOW() \
    while ( READ_ODSWEN() );


#define WAIT_ODSWEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODSWEN() && (--___t___ > 0)); }


#define WAIT_ODSWEN_HIGH() \
    while (! READ_ODSWEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODEN
//
// Return the value of register Cr1
//
// Notes : Over-drive enable 
//        (CR1) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ODEN_MASK) | ((val << ODEN_START_BIT) & ODEN_MASK )); \
   } 

#define ENABLE_ODEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ODEN_MASK ); \
   }

#define DISABLE_ODEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ODEN_MASK ); \
   } 

#define READ_ODEN() \
   ((READ_REGISTER_ULONG(0x0) & ODEN_MASK)  >> ODEN_START_BIT)

#define WHEN_ODEN_HIGH() \
     if ( READ_ODEN() )


#define UNLESS_ODEN_HIGH() \
     if (! READ_ODEN() )


#define WAIT_ODEN_LOW() \
    while ( READ_ODEN() );


#define WAIT_ODEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODEN() && (--___t___ > 0)); }


#define WAIT_ODEN_HIGH() \
    while (! READ_ODEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : VOS
//
// Return the value of register Cr1
//
// Notes : Regulator voltage scaling output selection 
//        (CR1) at the offset 0x0, Bits 14:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_VOS() \
   ((READ_REGISTER_ULONG(0x0) & VOS_MASK)  >> VOS_START_BIT)

#define WRITE_VOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ VOS_MASK) | ((val << VOS_START_BIT) & VOS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ADCDC1
//
// Return the value of register Cr1
//
// Notes : ADCDC1 
//        (CR1) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ADCDC1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ADCDC1_MASK) | ((val << ADCDC1_START_BIT) & ADCDC1_MASK )); \
   } 

#define ENABLE_ADCDC1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ADCDC1_MASK ); \
   }

#define DISABLE_ADCDC1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ADCDC1_MASK ); \
   } 

#define READ_ADCDC1() \
   ((READ_REGISTER_ULONG(0x0) & ADCDC1_MASK)  >> ADCDC1_START_BIT)

#define WHEN_ADCDC1_HIGH() \
     if ( READ_ADCDC1() )


#define UNLESS_ADCDC1_HIGH() \
     if (! READ_ADCDC1() )


#define WAIT_ADCDC1_LOW() \
    while ( READ_ADCDC1() );


#define WAIT_ADCDC1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADCDC1() && (--___t___ > 0)); }


#define WAIT_ADCDC1_HIGH() \
    while (! READ_ADCDC1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MRUDS
//
// Return the value of register Cr1
//
// Notes : Main regulator in deepsleep under-drive mode 
//        (CR1) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MRUDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MRUDS_MASK) | ((val << MRUDS_START_BIT) & MRUDS_MASK )); \
   } 

#define ENABLE_MRUDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MRUDS_MASK ); \
   }

#define DISABLE_MRUDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MRUDS_MASK ); \
   } 

#define READ_MRUDS() \
   ((READ_REGISTER_ULONG(0x0) & MRUDS_MASK)  >> MRUDS_START_BIT)

#define WHEN_MRUDS_HIGH() \
     if ( READ_MRUDS() )


#define UNLESS_MRUDS_HIGH() \
     if (! READ_MRUDS() )


#define WAIT_MRUDS_LOW() \
    while ( READ_MRUDS() );


#define WAIT_MRUDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MRUDS() && (--___t___ > 0)); }


#define WAIT_MRUDS_HIGH() \
    while (! READ_MRUDS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LPUDS
//
// Return the value of register Cr1
//
// Notes : Low-power regulator in deepsleep under-drive mode 
//        (CR1) at the offset 0x0, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LPUDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ LPUDS_MASK) | ((val << LPUDS_START_BIT) & LPUDS_MASK )); \
   } 

#define ENABLE_LPUDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  LPUDS_MASK ); \
   }

#define DISABLE_LPUDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~LPUDS_MASK ); \
   } 

#define READ_LPUDS() \
   ((READ_REGISTER_ULONG(0x0) & LPUDS_MASK)  >> LPUDS_START_BIT)

#define WHEN_LPUDS_HIGH() \
     if ( READ_LPUDS() )


#define UNLESS_LPUDS_HIGH() \
     if (! READ_LPUDS() )


#define WAIT_LPUDS_LOW() \
    while ( READ_LPUDS() );


#define WAIT_LPUDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPUDS() && (--___t___ > 0)); }


#define WAIT_LPUDS_HIGH() \
    while (! READ_LPUDS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FPDS
//
// Return the value of register Cr1
//
// Notes : Flash power down in Stop mode 
//        (CR1) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FPDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FPDS_MASK) | ((val << FPDS_START_BIT) & FPDS_MASK )); \
   } 

#define ENABLE_FPDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FPDS_MASK ); \
   }

#define DISABLE_FPDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FPDS_MASK ); \
   } 

#define READ_FPDS() \
   ((READ_REGISTER_ULONG(0x0) & FPDS_MASK)  >> FPDS_START_BIT)

#define WHEN_FPDS_HIGH() \
     if ( READ_FPDS() )


#define UNLESS_FPDS_HIGH() \
     if (! READ_FPDS() )


#define WAIT_FPDS_LOW() \
    while ( READ_FPDS() );


#define WAIT_FPDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FPDS() && (--___t___ > 0)); }


#define WAIT_FPDS_HIGH() \
    while (! READ_FPDS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DBP
//
// Return the value of register Cr1
//
// Notes : Disable backup domain write protection 
//        (CR1) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DBP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DBP_MASK) | ((val << DBP_START_BIT) & DBP_MASK )); \
   } 

#define ENABLE_DBP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DBP_MASK ); \
   }

#define DISABLE_DBP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DBP_MASK ); \
   } 

#define READ_DBP() \
   ((READ_REGISTER_ULONG(0x0) & DBP_MASK)  >> DBP_START_BIT)

#define WHEN_DBP_HIGH() \
     if ( READ_DBP() )


#define UNLESS_DBP_HIGH() \
     if (! READ_DBP() )


#define WAIT_DBP_LOW() \
    while ( READ_DBP() );


#define WAIT_DBP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBP() && (--___t___ > 0)); }


#define WAIT_DBP_HIGH() \
    while (! READ_DBP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PLS
//
// Return the value of register Cr1
//
// Notes : PVD level selection 
//        (CR1) at the offset 0x0, Bits 5:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_PLS() \
   ((READ_REGISTER_ULONG(0x0) & PLS_MASK)  >> PLS_START_BIT)

#define WRITE_PLS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PLS_MASK) | ((val << PLS_START_BIT) & PLS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PVDE
//
// Return the value of register Cr1
//
// Notes : Power voltage detector enable 
//        (CR1) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PVDE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PVDE_MASK) | ((val << PVDE_START_BIT) & PVDE_MASK )); \
   } 

#define ENABLE_PVDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PVDE_MASK ); \
   }

#define DISABLE_PVDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PVDE_MASK ); \
   } 

#define READ_PVDE() \
   ((READ_REGISTER_ULONG(0x0) & PVDE_MASK)  >> PVDE_START_BIT)

#define WHEN_PVDE_HIGH() \
     if ( READ_PVDE() )


#define UNLESS_PVDE_HIGH() \
     if (! READ_PVDE() )


#define WAIT_PVDE_LOW() \
    while ( READ_PVDE() );


#define WAIT_PVDE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PVDE() && (--___t___ > 0)); }


#define WAIT_PVDE_HIGH() \
    while (! READ_PVDE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CSBF
//
// Return the value of register Cr1
//
// Notes : Clear standby flag 
//        (CR1) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CSBF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CSBF_MASK) | ((val << CSBF_START_BIT) & CSBF_MASK )); \
   } 

#define ENABLE_CSBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CSBF_MASK ); \
   }

#define DISABLE_CSBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CSBF_MASK ); \
   } 

#define READ_CSBF() \
   ((READ_REGISTER_ULONG(0x0) & CSBF_MASK)  >> CSBF_START_BIT)

#define WHEN_CSBF_HIGH() \
     if ( READ_CSBF() )


#define UNLESS_CSBF_HIGH() \
     if (! READ_CSBF() )


#define WAIT_CSBF_LOW() \
    while ( READ_CSBF() );


#define WAIT_CSBF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSBF() && (--___t___ > 0)); }


#define WAIT_CSBF_HIGH() \
    while (! READ_CSBF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : PDDS
//
// Return the value of register Cr1
//
// Notes : Power down deepsleep 
//        (CR1) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PDDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PDDS_MASK) | ((val << PDDS_START_BIT) & PDDS_MASK )); \
   } 

#define ENABLE_PDDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PDDS_MASK ); \
   }

#define DISABLE_PDDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PDDS_MASK ); \
   } 

#define READ_PDDS() \
   ((READ_REGISTER_ULONG(0x0) & PDDS_MASK)  >> PDDS_START_BIT)

#define WHEN_PDDS_HIGH() \
     if ( READ_PDDS() )


#define UNLESS_PDDS_HIGH() \
     if (! READ_PDDS() )


#define WAIT_PDDS_LOW() \
    while ( READ_PDDS() );


#define WAIT_PDDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PDDS() && (--___t___ > 0)); }


#define WAIT_PDDS_HIGH() \
    while (! READ_PDDS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LPDS
//
// Return the value of register Cr1
//
// Notes : Low-power deep sleep 
//        (CR1) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LPDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ LPDS_MASK) | ((val << LPDS_START_BIT) & LPDS_MASK )); \
   } 

#define ENABLE_LPDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  LPDS_MASK ); \
   }

#define DISABLE_LPDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~LPDS_MASK ); \
   } 

#define READ_LPDS() \
   ((READ_REGISTER_ULONG(0x0) & LPDS_MASK)  >> LPDS_START_BIT)

#define WHEN_LPDS_HIGH() \
     if ( READ_LPDS() )


#define UNLESS_LPDS_HIGH() \
     if (! READ_LPDS() )


#define WAIT_LPDS_LOW() \
    while ( READ_LPDS() );


#define WAIT_LPDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPDS() && (--___t___ > 0)); }


#define WAIT_LPDS_HIGH() \
    while (! READ_LPDS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR1
//
// Notes : Register Csr1 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Under-drive ready flag 
    // 
#define UDRDY_MASK 0xC0000U
#define UDRDY_OFFSET 19
#define UDRDY_START_BIT 18
#define UDRDY_WIDTH 2


#define CSR_1_REG 0x4

typedef enum udrdy {
    UDRDY_0,
    UDRDY_1
} UDRDY_T ;
#define READ_UDRDY() \
   ((READ_REGISTER_ULONG(0x4) & UDRDY_MASK)  >> UDRDY_START_BIT)

#define WRITE_UDRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ UDRDY_MASK) | ((val << UDRDY_START_BIT) & UDRDY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Over-drive mode switching ready 
    // 
#define ODSWRDY_MASK 0x20000U
#define ODSWRDY_OFFSET 17
#define ODSWRDY_START_BIT 17
#define ODSWRDY_WIDTH 1



typedef enum odswrdy {
    ODSWRDY_0,
    ODSWRDY_1
} ODSWRDY_T ;
#define WRITE_ODSWRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ODSWRDY_MASK) | ((val << ODSWRDY_START_BIT) & ODSWRDY_MASK )); \
   } 

#define ENABLE_ODSWRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ODSWRDY_MASK ); \
   }

#define DISABLE_ODSWRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ODSWRDY_MASK ); \
   } 

#define READ_ODSWRDY() \
   ((READ_REGISTER_ULONG(0x4) & ODSWRDY_MASK)  >> ODSWRDY_START_BIT)

#define WHEN_ODSWRDY_HIGH() \
     if ( READ_ODSWRDY() )


#define UNLESS_ODSWRDY_HIGH() \
     if (! READ_ODSWRDY() )


#define WAIT_ODSWRDY_LOW() \
    while ( READ_ODSWRDY() );


#define WAIT_ODSWRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODSWRDY() && (--___t___ > 0)); }


#define WAIT_ODSWRDY_HIGH() \
    while (! READ_ODSWRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Over-drive mode ready 
    // 
#define ODRDY_MASK 0x10000U
#define ODRDY_OFFSET 16
#define ODRDY_START_BIT 16
#define ODRDY_WIDTH 1



typedef enum odrdy {
    ODRDY_0,
    ODRDY_1
} ODRDY_T ;
#define WRITE_ODRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ODRDY_MASK) | ((val << ODRDY_START_BIT) & ODRDY_MASK )); \
   } 

#define ENABLE_ODRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ODRDY_MASK ); \
   }

#define DISABLE_ODRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ODRDY_MASK ); \
   } 

#define READ_ODRDY() \
   ((READ_REGISTER_ULONG(0x4) & ODRDY_MASK)  >> ODRDY_START_BIT)

#define WHEN_ODRDY_HIGH() \
     if ( READ_ODRDY() )


#define UNLESS_ODRDY_HIGH() \
     if (! READ_ODRDY() )


#define WAIT_ODRDY_LOW() \
    while ( READ_ODRDY() );


#define WAIT_ODRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODRDY() && (--___t___ > 0)); }


#define WAIT_ODRDY_HIGH() \
    while (! READ_ODRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Regulator voltage scaling output selection ready bit 
    // 
#define VOSRDY_MASK 0x4000U
#define VOSRDY_OFFSET 14
#define VOSRDY_START_BIT 14
#define VOSRDY_WIDTH 1



typedef enum vosrdy {
    VOSRDY_0,
    VOSRDY_1
} VOSRDY_T ;
#define WRITE_VOSRDY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ VOSRDY_MASK) | ((val << VOSRDY_START_BIT) & VOSRDY_MASK )); \
   } 

#define ENABLE_VOSRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  VOSRDY_MASK ); \
   }

#define DISABLE_VOSRDY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~VOSRDY_MASK ); \
   } 

#define READ_VOSRDY() \
   ((READ_REGISTER_ULONG(0x4) & VOSRDY_MASK)  >> VOSRDY_START_BIT)

#define WHEN_VOSRDY_HIGH() \
     if ( READ_VOSRDY() )


#define UNLESS_VOSRDY_HIGH() \
     if (! READ_VOSRDY() )


#define WAIT_VOSRDY_LOW() \
    while ( READ_VOSRDY() );


#define WAIT_VOSRDY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VOSRDY() && (--___t___ > 0)); }


#define WAIT_VOSRDY_HIGH() \
    while (! READ_VOSRDY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Backup regulator enable 
    // 
#define BRE_MASK 0x200U
#define BRE_OFFSET 9
#define BRE_START_BIT 9
#define BRE_WIDTH 1



typedef enum bre {
    BRE_0,
    BRE_1
} BRE_T ;
#define WRITE_BRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BRE_MASK) | ((val << BRE_START_BIT) & BRE_MASK )); \
   } 

#define ENABLE_BRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BRE_MASK ); \
   }

#define DISABLE_BRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BRE_MASK ); \
   } 

#define READ_BRE() \
   ((READ_REGISTER_ULONG(0x4) & BRE_MASK)  >> BRE_START_BIT)

#define WHEN_BRE_HIGH() \
     if ( READ_BRE() )


#define UNLESS_BRE_HIGH() \
     if (! READ_BRE() )


#define WAIT_BRE_LOW() \
    while ( READ_BRE() );


#define WAIT_BRE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BRE() && (--___t___ > 0)); }


#define WAIT_BRE_HIGH() \
    while (! READ_BRE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Backup regulator ready 
    // 
#define BRR_MASK 0x8U
#define BRR_OFFSET 3
#define BRR_START_BIT 3
#define BRR_WIDTH 1



typedef enum brr {
    BRR_0,
    BRR_1
} BRR_T ;
#define WRITE_BRR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BRR_MASK) | ((val << BRR_START_BIT) & BRR_MASK )); \
   } 

#define ENABLE_BRR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BRR_MASK ); \
   }

#define DISABLE_BRR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BRR_MASK ); \
   } 

#define READ_BRR() \
   ((READ_REGISTER_ULONG(0x4) & BRR_MASK)  >> BRR_START_BIT)

#define WHEN_BRR_HIGH() \
     if ( READ_BRR() )


#define UNLESS_BRR_HIGH() \
     if (! READ_BRR() )


#define WAIT_BRR_LOW() \
    while ( READ_BRR() );


#define WAIT_BRR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BRR() && (--___t___ > 0)); }


#define WAIT_BRR_HIGH() \
    while (! READ_BRR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PVD output 
    // 
#define PVDO_MASK 0x4U
#define PVDO_OFFSET 2
#define PVDO_START_BIT 2
#define PVDO_WIDTH 1



typedef enum pvdo {
    PVDO_0,
    PVDO_1
} PVDO_T ;
#define WRITE_PVDO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PVDO_MASK) | ((val << PVDO_START_BIT) & PVDO_MASK )); \
   } 

#define ENABLE_PVDO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PVDO_MASK ); \
   }

#define DISABLE_PVDO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PVDO_MASK ); \
   } 

#define READ_PVDO() \
   ((READ_REGISTER_ULONG(0x4) & PVDO_MASK)  >> PVDO_START_BIT)

#define WHEN_PVDO_HIGH() \
     if ( READ_PVDO() )


#define UNLESS_PVDO_HIGH() \
     if (! READ_PVDO() )


#define WAIT_PVDO_LOW() \
    while ( READ_PVDO() );


#define WAIT_PVDO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PVDO() && (--___t___ > 0)); }


#define WAIT_PVDO_HIGH() \
    while (! READ_PVDO() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Standby flag 
    // 
#define SBF_MASK 0x2U
#define SBF_OFFSET 1
#define SBF_START_BIT 1
#define SBF_WIDTH 1



typedef enum sbf {
    SBF_0,
    SBF_1
} SBF_T ;
#define WRITE_SBF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SBF_MASK) | ((val << SBF_START_BIT) & SBF_MASK )); \
   } 

#define ENABLE_SBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SBF_MASK ); \
   }

#define DISABLE_SBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SBF_MASK ); \
   } 

#define READ_SBF() \
   ((READ_REGISTER_ULONG(0x4) & SBF_MASK)  >> SBF_START_BIT)

#define WHEN_SBF_HIGH() \
     if ( READ_SBF() )


#define UNLESS_SBF_HIGH() \
     if (! READ_SBF() )


#define WAIT_SBF_LOW() \
    while ( READ_SBF() );


#define WAIT_SBF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SBF() && (--___t___ > 0)); }


#define WAIT_SBF_HIGH() \
    while (! READ_SBF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr1
//
// Return the value of register CSR_1
//
// Notes : Register power control/status register (CSR1) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup internal flag 
    // 
#define WUIF_MASK 0x1U
#define WUIF_OFFSET 0
#define WUIF_START_BIT 0
#define WUIF_WIDTH 1



typedef enum wuif {
    WUIF_0,
    WUIF_1
} WUIF_T ;
#define WRITE_WUIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ WUIF_MASK) | ((val << WUIF_START_BIT) & WUIF_MASK )); \
   } 

#define ENABLE_WUIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  WUIF_MASK ); \
   }

#define DISABLE_WUIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~WUIF_MASK ); \
   } 

#define READ_WUIF() \
   ((READ_REGISTER_ULONG(0x4) & WUIF_MASK)  >> WUIF_START_BIT)

#define WHEN_WUIF_HIGH() \
     if ( READ_WUIF() )


#define UNLESS_WUIF_HIGH() \
     if (! READ_WUIF() )


#define WAIT_WUIF_LOW() \
    while ( READ_WUIF() );


#define WAIT_WUIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUIF() && (--___t___ > 0)); }


#define WAIT_WUIF_HIGH() \
    while (! READ_WUIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR2
//
// Notes : Register Cr2 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : WUPP6
//
// Return the value of register Cr2
//
// Notes : Wakeup pin polarity bit for PI11 
//        (CR2) at the offset 0x8, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPP6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUPP6_MASK) | ((val << WUPP6_START_BIT) & WUPP6_MASK )); \
   } 

#define ENABLE_WUPP6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUPP6_MASK ); \
   }

#define DISABLE_WUPP6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUPP6_MASK ); \
   } 

#define READ_WUPP6() \
   ((READ_REGISTER_ULONG(0x8) & WUPP6_MASK)  >> WUPP6_START_BIT)

#define WHEN_WUPP6_HIGH() \
     if ( READ_WUPP6() )


#define UNLESS_WUPP6_HIGH() \
     if (! READ_WUPP6() )


#define WAIT_WUPP6_LOW() \
    while ( READ_WUPP6() );


#define WAIT_WUPP6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPP6() && (--___t___ > 0)); }


#define WAIT_WUPP6_HIGH() \
    while (! READ_WUPP6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUPP5
//
// Return the value of register Cr2
//
// Notes : Wakeup pin polarity bit for PI8 
//        (CR2) at the offset 0x8, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPP5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUPP5_MASK) | ((val << WUPP5_START_BIT) & WUPP5_MASK )); \
   } 

#define ENABLE_WUPP5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUPP5_MASK ); \
   }

#define DISABLE_WUPP5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUPP5_MASK ); \
   } 

#define READ_WUPP5() \
   ((READ_REGISTER_ULONG(0x8) & WUPP5_MASK)  >> WUPP5_START_BIT)

#define WHEN_WUPP5_HIGH() \
     if ( READ_WUPP5() )


#define UNLESS_WUPP5_HIGH() \
     if (! READ_WUPP5() )


#define WAIT_WUPP5_LOW() \
    while ( READ_WUPP5() );


#define WAIT_WUPP5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPP5() && (--___t___ > 0)); }


#define WAIT_WUPP5_HIGH() \
    while (! READ_WUPP5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUPP4
//
// Return the value of register Cr2
//
// Notes : Wakeup pin polarity bit for PC13 
//        (CR2) at the offset 0x8, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPP4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUPP4_MASK) | ((val << WUPP4_START_BIT) & WUPP4_MASK )); \
   } 

#define ENABLE_WUPP4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUPP4_MASK ); \
   }

#define DISABLE_WUPP4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUPP4_MASK ); \
   } 

#define READ_WUPP4() \
   ((READ_REGISTER_ULONG(0x8) & WUPP4_MASK)  >> WUPP4_START_BIT)

#define WHEN_WUPP4_HIGH() \
     if ( READ_WUPP4() )


#define UNLESS_WUPP4_HIGH() \
     if (! READ_WUPP4() )


#define WAIT_WUPP4_LOW() \
    while ( READ_WUPP4() );


#define WAIT_WUPP4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPP4() && (--___t___ > 0)); }


#define WAIT_WUPP4_HIGH() \
    while (! READ_WUPP4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUPP3
//
// Return the value of register Cr2
//
// Notes : Wakeup pin polarity bit for PC1 
//        (CR2) at the offset 0x8, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPP3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUPP3_MASK) | ((val << WUPP3_START_BIT) & WUPP3_MASK )); \
   } 

#define ENABLE_WUPP3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUPP3_MASK ); \
   }

#define DISABLE_WUPP3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUPP3_MASK ); \
   } 

#define READ_WUPP3() \
   ((READ_REGISTER_ULONG(0x8) & WUPP3_MASK)  >> WUPP3_START_BIT)

#define WHEN_WUPP3_HIGH() \
     if ( READ_WUPP3() )


#define UNLESS_WUPP3_HIGH() \
     if (! READ_WUPP3() )


#define WAIT_WUPP3_LOW() \
    while ( READ_WUPP3() );


#define WAIT_WUPP3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPP3() && (--___t___ > 0)); }


#define WAIT_WUPP3_HIGH() \
    while (! READ_WUPP3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUPP2
//
// Return the value of register Cr2
//
// Notes : Wakeup pin polarity bit for PA2 
//        (CR2) at the offset 0x8, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPP2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUPP2_MASK) | ((val << WUPP2_START_BIT) & WUPP2_MASK )); \
   } 

#define ENABLE_WUPP2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUPP2_MASK ); \
   }

#define DISABLE_WUPP2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUPP2_MASK ); \
   } 

#define READ_WUPP2() \
   ((READ_REGISTER_ULONG(0x8) & WUPP2_MASK)  >> WUPP2_START_BIT)

#define WHEN_WUPP2_HIGH() \
     if ( READ_WUPP2() )


#define UNLESS_WUPP2_HIGH() \
     if (! READ_WUPP2() )


#define WAIT_WUPP2_LOW() \
    while ( READ_WUPP2() );


#define WAIT_WUPP2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPP2() && (--___t___ > 0)); }


#define WAIT_WUPP2_HIGH() \
    while (! READ_WUPP2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUPP1
//
// Return the value of register Cr2
//
// Notes : Wakeup pin polarity bit for PA0 
//        (CR2) at the offset 0x8, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPP1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUPP1_MASK) | ((val << WUPP1_START_BIT) & WUPP1_MASK )); \
   } 

#define ENABLE_WUPP1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUPP1_MASK ); \
   }

#define DISABLE_WUPP1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUPP1_MASK ); \
   } 

#define READ_WUPP1() \
   ((READ_REGISTER_ULONG(0x8) & WUPP1_MASK)  >> WUPP1_START_BIT)

#define WHEN_WUPP1_HIGH() \
     if ( READ_WUPP1() )


#define UNLESS_WUPP1_HIGH() \
     if (! READ_WUPP1() )


#define WAIT_WUPP1_LOW() \
    while ( READ_WUPP1() );


#define WAIT_WUPP1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPP1() && (--___t___ > 0)); }


#define WAIT_WUPP1_HIGH() \
    while (! READ_WUPP1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CWUPF6
//
// Return the value of register Cr2
//
// Notes : Clear Wakeup Pin flag for PI11 
//        (CR2) at the offset 0x8, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CWUPF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CWUPF6_MASK) | ((val << CWUPF6_START_BIT) & CWUPF6_MASK )); \
   } 

#define ENABLE_CWUPF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CWUPF6_MASK ); \
   }

#define DISABLE_CWUPF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CWUPF6_MASK ); \
   } 

#define READ_CWUPF6() \
   ((READ_REGISTER_ULONG(0x8) & CWUPF6_MASK)  >> CWUPF6_START_BIT)

#define WHEN_CWUPF6_HIGH() \
     if ( READ_CWUPF6() )


#define UNLESS_CWUPF6_HIGH() \
     if (! READ_CWUPF6() )


#define WAIT_CWUPF6_LOW() \
    while ( READ_CWUPF6() );


#define WAIT_CWUPF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CWUPF6() && (--___t___ > 0)); }


#define WAIT_CWUPF6_HIGH() \
    while (! READ_CWUPF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CWUPF5
//
// Return the value of register Cr2
//
// Notes : Clear Wakeup Pin flag for PI8 
//        (CR2) at the offset 0x8, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CWUPF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CWUPF5_MASK) | ((val << CWUPF5_START_BIT) & CWUPF5_MASK )); \
   } 

#define ENABLE_CWUPF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CWUPF5_MASK ); \
   }

#define DISABLE_CWUPF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CWUPF5_MASK ); \
   } 

#define READ_CWUPF5() \
   ((READ_REGISTER_ULONG(0x8) & CWUPF5_MASK)  >> CWUPF5_START_BIT)

#define WHEN_CWUPF5_HIGH() \
     if ( READ_CWUPF5() )


#define UNLESS_CWUPF5_HIGH() \
     if (! READ_CWUPF5() )


#define WAIT_CWUPF5_LOW() \
    while ( READ_CWUPF5() );


#define WAIT_CWUPF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CWUPF5() && (--___t___ > 0)); }


#define WAIT_CWUPF5_HIGH() \
    while (! READ_CWUPF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CWUPF4
//
// Return the value of register Cr2
//
// Notes : Clear Wakeup Pin flag for PC13 
//        (CR2) at the offset 0x8, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CWUPF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CWUPF4_MASK) | ((val << CWUPF4_START_BIT) & CWUPF4_MASK )); \
   } 

#define ENABLE_CWUPF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CWUPF4_MASK ); \
   }

#define DISABLE_CWUPF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CWUPF4_MASK ); \
   } 

#define READ_CWUPF4() \
   ((READ_REGISTER_ULONG(0x8) & CWUPF4_MASK)  >> CWUPF4_START_BIT)

#define WHEN_CWUPF4_HIGH() \
     if ( READ_CWUPF4() )


#define UNLESS_CWUPF4_HIGH() \
     if (! READ_CWUPF4() )


#define WAIT_CWUPF4_LOW() \
    while ( READ_CWUPF4() );


#define WAIT_CWUPF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CWUPF4() && (--___t___ > 0)); }


#define WAIT_CWUPF4_HIGH() \
    while (! READ_CWUPF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CWUPF3
//
// Return the value of register Cr2
//
// Notes : Clear Wakeup Pin flag for PC1 
//        (CR2) at the offset 0x8, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CWUPF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CWUPF3_MASK) | ((val << CWUPF3_START_BIT) & CWUPF3_MASK )); \
   } 

#define ENABLE_CWUPF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CWUPF3_MASK ); \
   }

#define DISABLE_CWUPF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CWUPF3_MASK ); \
   } 

#define READ_CWUPF3() \
   ((READ_REGISTER_ULONG(0x8) & CWUPF3_MASK)  >> CWUPF3_START_BIT)

#define WHEN_CWUPF3_HIGH() \
     if ( READ_CWUPF3() )


#define UNLESS_CWUPF3_HIGH() \
     if (! READ_CWUPF3() )


#define WAIT_CWUPF3_LOW() \
    while ( READ_CWUPF3() );


#define WAIT_CWUPF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CWUPF3() && (--___t___ > 0)); }


#define WAIT_CWUPF3_HIGH() \
    while (! READ_CWUPF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CWUPF2
//
// Return the value of register Cr2
//
// Notes : Clear Wakeup Pin flag for PA2 
//        (CR2) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CWUPF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CWUPF2_MASK) | ((val << CWUPF2_START_BIT) & CWUPF2_MASK )); \
   } 

#define ENABLE_CWUPF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CWUPF2_MASK ); \
   }

#define DISABLE_CWUPF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CWUPF2_MASK ); \
   } 

#define READ_CWUPF2() \
   ((READ_REGISTER_ULONG(0x8) & CWUPF2_MASK)  >> CWUPF2_START_BIT)

#define WHEN_CWUPF2_HIGH() \
     if ( READ_CWUPF2() )


#define UNLESS_CWUPF2_HIGH() \
     if (! READ_CWUPF2() )


#define WAIT_CWUPF2_LOW() \
    while ( READ_CWUPF2() );


#define WAIT_CWUPF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CWUPF2() && (--___t___ > 0)); }


#define WAIT_CWUPF2_HIGH() \
    while (! READ_CWUPF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CWUPF1
//
// Return the value of register Cr2
//
// Notes : Clear Wakeup Pin flag for PA0 
//        (CR2) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CWUPF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CWUPF1_MASK) | ((val << CWUPF1_START_BIT) & CWUPF1_MASK )); \
   } 

#define ENABLE_CWUPF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CWUPF1_MASK ); \
   }

#define DISABLE_CWUPF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CWUPF1_MASK ); \
   } 

#define READ_CWUPF1() \
   ((READ_REGISTER_ULONG(0x8) & CWUPF1_MASK)  >> CWUPF1_START_BIT)

#define WHEN_CWUPF1_HIGH() \
     if ( READ_CWUPF1() )


#define UNLESS_CWUPF1_HIGH() \
     if (! READ_CWUPF1() )


#define WAIT_CWUPF1_LOW() \
    while ( READ_CWUPF1() );


#define WAIT_CWUPF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CWUPF1() && (--___t___ > 0)); }


#define WAIT_CWUPF1_HIGH() \
    while (! READ_CWUPF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR2
//
// Notes : Register Csr2 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable Wakeup pin for PI11 
    // 
#define EWUP6_MASK 0x2000U
#define EWUP6_OFFSET 13
#define EWUP6_START_BIT 13
#define EWUP6_WIDTH 1


#define CSR_2_REG 0xC

typedef enum ewup6 {
    EWUP_6_0,
    EWUP_6_1
} EWUP_6_T ;
#define WRITE_EWUP6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EWUP6_MASK) | ((val << EWUP6_START_BIT) & EWUP6_MASK )); \
   } 

#define ENABLE_EWUP6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EWUP6_MASK ); \
   }

#define DISABLE_EWUP6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EWUP6_MASK ); \
   } 

#define READ_EWUP6() \
   ((READ_REGISTER_ULONG(0xC) & EWUP6_MASK)  >> EWUP6_START_BIT)

#define WHEN_EWUP6_HIGH() \
     if ( READ_EWUP6() )


#define UNLESS_EWUP6_HIGH() \
     if (! READ_EWUP6() )


#define WAIT_EWUP6_LOW() \
    while ( READ_EWUP6() );


#define WAIT_EWUP6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWUP6() && (--___t___ > 0)); }


#define WAIT_EWUP6_HIGH() \
    while (! READ_EWUP6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable Wakeup pin for PI8 
    // 
#define EWUP5_MASK 0x1000U
#define EWUP5_OFFSET 12
#define EWUP5_START_BIT 12
#define EWUP5_WIDTH 1



typedef enum ewup5 {
    EWUP_5_0,
    EWUP_5_1
} EWUP_5_T ;
#define WRITE_EWUP5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EWUP5_MASK) | ((val << EWUP5_START_BIT) & EWUP5_MASK )); \
   } 

#define ENABLE_EWUP5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EWUP5_MASK ); \
   }

#define DISABLE_EWUP5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EWUP5_MASK ); \
   } 

#define READ_EWUP5() \
   ((READ_REGISTER_ULONG(0xC) & EWUP5_MASK)  >> EWUP5_START_BIT)

#define WHEN_EWUP5_HIGH() \
     if ( READ_EWUP5() )


#define UNLESS_EWUP5_HIGH() \
     if (! READ_EWUP5() )


#define WAIT_EWUP5_LOW() \
    while ( READ_EWUP5() );


#define WAIT_EWUP5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWUP5() && (--___t___ > 0)); }


#define WAIT_EWUP5_HIGH() \
    while (! READ_EWUP5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable Wakeup pin for PC13 
    // 
#define EWUP4_MASK 0x800U
#define EWUP4_OFFSET 11
#define EWUP4_START_BIT 11
#define EWUP4_WIDTH 1



typedef enum ewup4 {
    EWUP_4_0,
    EWUP_4_1
} EWUP_4_T ;
#define WRITE_EWUP4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EWUP4_MASK) | ((val << EWUP4_START_BIT) & EWUP4_MASK )); \
   } 

#define ENABLE_EWUP4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EWUP4_MASK ); \
   }

#define DISABLE_EWUP4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EWUP4_MASK ); \
   } 

#define READ_EWUP4() \
   ((READ_REGISTER_ULONG(0xC) & EWUP4_MASK)  >> EWUP4_START_BIT)

#define WHEN_EWUP4_HIGH() \
     if ( READ_EWUP4() )


#define UNLESS_EWUP4_HIGH() \
     if (! READ_EWUP4() )


#define WAIT_EWUP4_LOW() \
    while ( READ_EWUP4() );


#define WAIT_EWUP4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWUP4() && (--___t___ > 0)); }


#define WAIT_EWUP4_HIGH() \
    while (! READ_EWUP4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable Wakeup pin for PC1 
    // 
#define EWUP3_MASK 0x400U
#define EWUP3_OFFSET 10
#define EWUP3_START_BIT 10
#define EWUP3_WIDTH 1



typedef enum ewup3 {
    EWUP_3_0,
    EWUP_3_1
} EWUP_3_T ;
#define WRITE_EWUP3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EWUP3_MASK) | ((val << EWUP3_START_BIT) & EWUP3_MASK )); \
   } 

#define ENABLE_EWUP3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EWUP3_MASK ); \
   }

#define DISABLE_EWUP3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EWUP3_MASK ); \
   } 

#define READ_EWUP3() \
   ((READ_REGISTER_ULONG(0xC) & EWUP3_MASK)  >> EWUP3_START_BIT)

#define WHEN_EWUP3_HIGH() \
     if ( READ_EWUP3() )


#define UNLESS_EWUP3_HIGH() \
     if (! READ_EWUP3() )


#define WAIT_EWUP3_LOW() \
    while ( READ_EWUP3() );


#define WAIT_EWUP3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWUP3() && (--___t___ > 0)); }


#define WAIT_EWUP3_HIGH() \
    while (! READ_EWUP3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable Wakeup pin for PA2 
    // 
#define EWUP2_MASK 0x200U
#define EWUP2_OFFSET 9
#define EWUP2_START_BIT 9
#define EWUP2_WIDTH 1



typedef enum ewup2 {
    EWUP_2_0,
    EWUP_2_1
} EWUP_2_T ;
#define WRITE_EWUP2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EWUP2_MASK) | ((val << EWUP2_START_BIT) & EWUP2_MASK )); \
   } 

#define ENABLE_EWUP2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EWUP2_MASK ); \
   }

#define DISABLE_EWUP2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EWUP2_MASK ); \
   } 

#define READ_EWUP2() \
   ((READ_REGISTER_ULONG(0xC) & EWUP2_MASK)  >> EWUP2_START_BIT)

#define WHEN_EWUP2_HIGH() \
     if ( READ_EWUP2() )


#define UNLESS_EWUP2_HIGH() \
     if (! READ_EWUP2() )


#define WAIT_EWUP2_LOW() \
    while ( READ_EWUP2() );


#define WAIT_EWUP2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWUP2() && (--___t___ > 0)); }


#define WAIT_EWUP2_HIGH() \
    while (! READ_EWUP2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable Wakeup pin for PA0 
    // 
#define EWUP1_MASK 0x100U
#define EWUP1_OFFSET 8
#define EWUP1_START_BIT 8
#define EWUP1_WIDTH 1



typedef enum ewup1 {
    EWUP_1_0,
    EWUP_1_1
} EWUP_1_T ;
#define WRITE_EWUP1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ EWUP1_MASK) | ((val << EWUP1_START_BIT) & EWUP1_MASK )); \
   } 

#define ENABLE_EWUP1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  EWUP1_MASK ); \
   }

#define DISABLE_EWUP1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~EWUP1_MASK ); \
   } 

#define READ_EWUP1() \
   ((READ_REGISTER_ULONG(0xC) & EWUP1_MASK)  >> EWUP1_START_BIT)

#define WHEN_EWUP1_HIGH() \
     if ( READ_EWUP1() )


#define UNLESS_EWUP1_HIGH() \
     if (! READ_EWUP1() )


#define WAIT_EWUP1_LOW() \
    while ( READ_EWUP1() );


#define WAIT_EWUP1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EWUP1() && (--___t___ > 0)); }


#define WAIT_EWUP1_HIGH() \
    while (! READ_EWUP1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup Pin flag for PI11 
    // 
#define WUPF6_MASK 0x20U
#define WUPF6_OFFSET 5
#define WUPF6_START_BIT 5
#define WUPF6_WIDTH 1



typedef enum wupf6 {
    WUPF_6_0,
    WUPF_6_1
} WUPF_6_T ;
#define WRITE_WUPF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUPF6_MASK) | ((val << WUPF6_START_BIT) & WUPF6_MASK )); \
   } 

#define ENABLE_WUPF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUPF6_MASK ); \
   }

#define DISABLE_WUPF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUPF6_MASK ); \
   } 

#define READ_WUPF6() \
   ((READ_REGISTER_ULONG(0xC) & WUPF6_MASK)  >> WUPF6_START_BIT)

#define WHEN_WUPF6_HIGH() \
     if ( READ_WUPF6() )


#define UNLESS_WUPF6_HIGH() \
     if (! READ_WUPF6() )


#define WAIT_WUPF6_LOW() \
    while ( READ_WUPF6() );


#define WAIT_WUPF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPF6() && (--___t___ > 0)); }


#define WAIT_WUPF6_HIGH() \
    while (! READ_WUPF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup Pin flag for PI8 
    // 
#define WUPF5_MASK 0x10U
#define WUPF5_OFFSET 4
#define WUPF5_START_BIT 4
#define WUPF5_WIDTH 1



typedef enum wupf5 {
    WUPF_5_0,
    WUPF_5_1
} WUPF_5_T ;
#define WRITE_WUPF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUPF5_MASK) | ((val << WUPF5_START_BIT) & WUPF5_MASK )); \
   } 

#define ENABLE_WUPF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUPF5_MASK ); \
   }

#define DISABLE_WUPF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUPF5_MASK ); \
   } 

#define READ_WUPF5() \
   ((READ_REGISTER_ULONG(0xC) & WUPF5_MASK)  >> WUPF5_START_BIT)

#define WHEN_WUPF5_HIGH() \
     if ( READ_WUPF5() )


#define UNLESS_WUPF5_HIGH() \
     if (! READ_WUPF5() )


#define WAIT_WUPF5_LOW() \
    while ( READ_WUPF5() );


#define WAIT_WUPF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPF5() && (--___t___ > 0)); }


#define WAIT_WUPF5_HIGH() \
    while (! READ_WUPF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup Pin flag for PC13 
    // 
#define WUPF4_MASK 0x8U
#define WUPF4_OFFSET 3
#define WUPF4_START_BIT 3
#define WUPF4_WIDTH 1



typedef enum wupf4 {
    WUPF_4_0,
    WUPF_4_1
} WUPF_4_T ;
#define WRITE_WUPF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUPF4_MASK) | ((val << WUPF4_START_BIT) & WUPF4_MASK )); \
   } 

#define ENABLE_WUPF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUPF4_MASK ); \
   }

#define DISABLE_WUPF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUPF4_MASK ); \
   } 

#define READ_WUPF4() \
   ((READ_REGISTER_ULONG(0xC) & WUPF4_MASK)  >> WUPF4_START_BIT)

#define WHEN_WUPF4_HIGH() \
     if ( READ_WUPF4() )


#define UNLESS_WUPF4_HIGH() \
     if (! READ_WUPF4() )


#define WAIT_WUPF4_LOW() \
    while ( READ_WUPF4() );


#define WAIT_WUPF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPF4() && (--___t___ > 0)); }


#define WAIT_WUPF4_HIGH() \
    while (! READ_WUPF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup Pin flag for PC1 
    // 
#define WUPF3_MASK 0x4U
#define WUPF3_OFFSET 2
#define WUPF3_START_BIT 2
#define WUPF3_WIDTH 1



typedef enum wupf3 {
    WUPF_3_0,
    WUPF_3_1
} WUPF_3_T ;
#define WRITE_WUPF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUPF3_MASK) | ((val << WUPF3_START_BIT) & WUPF3_MASK )); \
   } 

#define ENABLE_WUPF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUPF3_MASK ); \
   }

#define DISABLE_WUPF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUPF3_MASK ); \
   } 

#define READ_WUPF3() \
   ((READ_REGISTER_ULONG(0xC) & WUPF3_MASK)  >> WUPF3_START_BIT)

#define WHEN_WUPF3_HIGH() \
     if ( READ_WUPF3() )


#define UNLESS_WUPF3_HIGH() \
     if (! READ_WUPF3() )


#define WAIT_WUPF3_LOW() \
    while ( READ_WUPF3() );


#define WAIT_WUPF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPF3() && (--___t___ > 0)); }


#define WAIT_WUPF3_HIGH() \
    while (! READ_WUPF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup Pin flag for PA2 
    // 
#define WUPF2_MASK 0x2U
#define WUPF2_OFFSET 1
#define WUPF2_START_BIT 1
#define WUPF2_WIDTH 1



typedef enum wupf2 {
    WUPF_2_0,
    WUPF_2_1
} WUPF_2_T ;
#define WRITE_WUPF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUPF2_MASK) | ((val << WUPF2_START_BIT) & WUPF2_MASK )); \
   } 

#define ENABLE_WUPF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUPF2_MASK ); \
   }

#define DISABLE_WUPF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUPF2_MASK ); \
   } 

#define READ_WUPF2() \
   ((READ_REGISTER_ULONG(0xC) & WUPF2_MASK)  >> WUPF2_START_BIT)

#define WHEN_WUPF2_HIGH() \
     if ( READ_WUPF2() )


#define UNLESS_WUPF2_HIGH() \
     if (! READ_WUPF2() )


#define WAIT_WUPF2_LOW() \
    while ( READ_WUPF2() );


#define WAIT_WUPF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPF2() && (--___t___ > 0)); }


#define WAIT_WUPF2_HIGH() \
    while (! READ_WUPF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Csr2
//
// Return the value of register CSR_2
//
// Notes : Register power control/status register (CSR2) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup Pin flag for PA0 
    // 
#define WUPF1_MASK 0x1U
#define WUPF1_OFFSET 0
#define WUPF1_START_BIT 0
#define WUPF1_WIDTH 1



typedef enum wupf1 {
    WUPF_1_0,
    WUPF_1_1
} WUPF_1_T ;
#define WRITE_WUPF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUPF1_MASK) | ((val << WUPF1_START_BIT) & WUPF1_MASK )); \
   } 

#define ENABLE_WUPF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUPF1_MASK ); \
   }

#define DISABLE_WUPF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUPF1_MASK ); \
   } 

#define READ_WUPF1() \
   ((READ_REGISTER_ULONG(0xC) & WUPF1_MASK)  >> WUPF1_START_BIT)

#define WHEN_WUPF1_HIGH() \
     if ( READ_WUPF1() )


#define UNLESS_WUPF1_HIGH() \
     if (! READ_WUPF1() )


#define WAIT_WUPF1_LOW() \
    while ( READ_WUPF1() );


#define WAIT_WUPF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUPF1() && (--___t___ > 0)); }


#define WAIT_WUPF1_HIGH() \
    while (! READ_WUPF1() );


