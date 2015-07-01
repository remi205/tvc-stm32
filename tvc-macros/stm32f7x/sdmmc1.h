/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/sdmmc1.h
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
 
#define SDMMC1 0x40012C00
/////////////////////////////////////////////////////////////////////////
//
// Function : Power
//
// Return the value of register POWER
//
// Notes : Register Power at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_POWER( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_POWER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_POWER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_POWER() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Power
//
// Return the value of register POWER
//
// Notes : Register power control register (POWER) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PWRCTRL 
    // 
#define PWRCTRL_MASK 0x3U
#define PWRCTRL_OFFSET 1
#define PWRCTRL_START_BIT 0
#define PWRCTRL_WIDTH 2


#define POWER_REG 0x0

typedef enum pwrctrl {
    PWRCTRL_0,
    PWRCTRL_1
} PWRCTRL_T ;
#define READ_PWRCTRL() \
   ((READ_REGISTER_ULONG(0x0) & PWRCTRL_MASK)  >> PWRCTRL_START_BIT)

#define WRITE_PWRCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PWRCTRL_MASK) | ((val << PWRCTRL_START_BIT) & PWRCTRL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register Clkcr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CLKCR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_CLKCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_CLKCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_CLKCR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock divide factor 
    // 
#define CLKDIV_MASK 0xFFU
#define CLKDIV_OFFSET 7
#define CLKDIV_START_BIT 0
#define CLKDIV_WIDTH 8


#define CLKCR_REG 0x4

#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x4) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock enable bit 
    // 
#define CLKEN_MASK 0x100U
#define CLKEN_OFFSET 8
#define CLKEN_START_BIT 8
#define CLKEN_WIDTH 1



#define WRITE_CLKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CLKEN_MASK) | ((val << CLKEN_START_BIT) & CLKEN_MASK )); \
   } 

#define ENABLE_CLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CLKEN_MASK ); \
   }

#define DISABLE_CLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CLKEN_MASK ); \
   } 

#define READ_CLKEN() \
   ((READ_REGISTER_ULONG(0x4) & CLKEN_MASK)  >> CLKEN_START_BIT)

#define WHEN_CLKEN_HIGH() \
     if ( READ_CLKEN() )


#define UNLESS_CLKEN_HIGH() \
     if (! READ_CLKEN() )


#define WAIT_CLKEN_LOW() \
    while ( READ_CLKEN() );


#define WAIT_CLKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CLKEN() && (--___t___ > 0)); }


#define WAIT_CLKEN_HIGH() \
    while (! READ_CLKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power saving configuration bit 
    // 
#define PWRSAV_MASK 0x200U
#define PWRSAV_OFFSET 9
#define PWRSAV_START_BIT 9
#define PWRSAV_WIDTH 1



typedef enum pwrsav {
    PWRSAV_0,
    PWRSAV_1
} PWRSAV_T ;
#define WRITE_PWRSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PWRSAV_MASK) | ((val << PWRSAV_START_BIT) & PWRSAV_MASK )); \
   } 

#define ENABLE_PWRSAV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  PWRSAV_MASK ); \
   }

#define DISABLE_PWRSAV() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~PWRSAV_MASK ); \
   } 

#define READ_PWRSAV() \
   ((READ_REGISTER_ULONG(0x4) & PWRSAV_MASK)  >> PWRSAV_START_BIT)

#define WHEN_PWRSAV_HIGH() \
     if ( READ_PWRSAV() )


#define UNLESS_PWRSAV_HIGH() \
     if (! READ_PWRSAV() )


#define WAIT_PWRSAV_LOW() \
    while ( READ_PWRSAV() );


#define WAIT_PWRSAV_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWRSAV() && (--___t___ > 0)); }


#define WAIT_PWRSAV_HIGH() \
    while (! READ_PWRSAV() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock divider bypass enable bit 
    // 
#define BYPASS_MASK 0x400U
#define BYPASS_OFFSET 10
#define BYPASS_START_BIT 10
#define BYPASS_WIDTH 1



typedef enum bypass {
    BYPASS_0,
    BYPASS_1
} BYPASS_T ;
#define WRITE_BYPASS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BYPASS_MASK) | ((val << BYPASS_START_BIT) & BYPASS_MASK )); \
   } 

#define ENABLE_BYPASS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  BYPASS_MASK ); \
   }

#define DISABLE_BYPASS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~BYPASS_MASK ); \
   } 

#define READ_BYPASS() \
   ((READ_REGISTER_ULONG(0x4) & BYPASS_MASK)  >> BYPASS_START_BIT)

#define WHEN_BYPASS_HIGH() \
     if ( READ_BYPASS() )


#define UNLESS_BYPASS_HIGH() \
     if (! READ_BYPASS() )


#define WAIT_BYPASS_LOW() \
    while ( READ_BYPASS() );


#define WAIT_BYPASS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BYPASS() && (--___t___ > 0)); }


#define WAIT_BYPASS_HIGH() \
    while (! READ_BYPASS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wide bus mode enable bit 
    // 
#define WIDBUS_MASK 0x1800U
#define WIDBUS_OFFSET 12
#define WIDBUS_START_BIT 11
#define WIDBUS_WIDTH 2



typedef enum widbus {
    WIDBUS_0,
    WIDBUS_1
} WIDBUS_T ;
#define READ_WIDBUS() \
   ((READ_REGISTER_ULONG(0x4) & WIDBUS_MASK)  >> WIDBUS_START_BIT)

#define WRITE_WIDBUS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ WIDBUS_MASK) | ((val << WIDBUS_START_BIT) & WIDBUS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDIO_CK dephasing selection bit 
    // 
#define NEGEDGE_MASK 0x2000U
#define NEGEDGE_OFFSET 13
#define NEGEDGE_START_BIT 13
#define NEGEDGE_WIDTH 1



typedef enum negedge {
    NEGEDGE_0,
    NEGEDGE_1
} NEGEDGE_T ;
#define WRITE_NEGEDGE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ NEGEDGE_MASK) | ((val << NEGEDGE_START_BIT) & NEGEDGE_MASK )); \
   } 

#define ENABLE_NEGEDGE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  NEGEDGE_MASK ); \
   }

#define DISABLE_NEGEDGE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~NEGEDGE_MASK ); \
   } 

#define READ_NEGEDGE() \
   ((READ_REGISTER_ULONG(0x4) & NEGEDGE_MASK)  >> NEGEDGE_START_BIT)

#define WHEN_NEGEDGE_HIGH() \
     if ( READ_NEGEDGE() )


#define UNLESS_NEGEDGE_HIGH() \
     if (! READ_NEGEDGE() )


#define WAIT_NEGEDGE_LOW() \
    while ( READ_NEGEDGE() );


#define WAIT_NEGEDGE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NEGEDGE() && (--___t___ > 0)); }


#define WAIT_NEGEDGE_HIGH() \
    while (! READ_NEGEDGE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Clkcr
//
// Return the value of register CLKCR
//
// Notes : Register SDI clock control register (CLKCR) at the offset 0x4, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HW Flow Control enable 
    // 
#define HWFC_EN_MASK 0x4000U
#define HWFC_EN_OFFSET 14
#define HWFC_EN_START_BIT 14
#define HWFC_EN_WIDTH 1



typedef enum hwfc_en {
    HWFC_EN_0,
    HWFC_EN_1
} HWFC_EN_T ;
#define WRITE_HWFC_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HWFC_EN_MASK) | ((val << HWFC_EN_START_BIT) & HWFC_EN_MASK )); \
   } 

#define ENABLE_HWFC_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HWFC_EN_MASK ); \
   }

#define DISABLE_HWFC_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HWFC_EN_MASK ); \
   } 

#define READ_HWFC_EN() \
   ((READ_REGISTER_ULONG(0x4) & HWFC_EN_MASK)  >> HWFC_EN_START_BIT)

#define WHEN_HWFC_EN_HIGH() \
     if ( READ_HWFC_EN() )


#define UNLESS_HWFC_EN_HIGH() \
     if (! READ_HWFC_EN() )


#define WAIT_HWFC_EN_LOW() \
    while ( READ_HWFC_EN() );


#define WAIT_HWFC_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HWFC_EN() && (--___t___ > 0)); }


#define WAIT_HWFC_EN_HIGH() \
    while (! READ_HWFC_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Arg
//
// Return the value of register ARG
//
// Notes : Register Arg at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ARG( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_ARG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_ARG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_ARG() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Arg
//
// Return the value of register ARG
//
// Notes : Register argument register (ARG) at the offset 0x8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command argument 
    // 
#define CMDARG_MASK 0xFFFFFFFFU
#define CMDARG_OFFSET 31
#define CMDARG_START_BIT 0
#define CMDARG_WIDTH 32


#define ARG_REG 0x8

typedef enum cmdarg {
    CMDARG_0,
    CMDARG_1
} CMDARG_T ;
#define READ_CMDARG() \
   ((READ_REGISTER_ULONG(0x8) & CMDARG_MASK)  >> CMDARG_START_BIT)

#define WRITE_CMDARG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CMDARG_MASK) | ((val << CMDARG_START_BIT) & CMDARG_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register Cmd at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CMD( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_CMD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_CMD(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_CMD() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 0:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command index 
    // 
#define CMDINDEX_MASK 0x3FU
#define CMDINDEX_OFFSET 5
#define CMDINDEX_START_BIT 0
#define CMDINDEX_WIDTH 6


#define CMD_REG 0xC

typedef enum cmdindex {
    CMDINDEX_0,
    CMDINDEX_1
} CMDINDEX_T ;
#define READ_CMDINDEX() \
   ((READ_REGISTER_ULONG(0xC) & CMDINDEX_MASK)  >> CMDINDEX_START_BIT)

#define WRITE_CMDINDEX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CMDINDEX_MASK) | ((val << CMDINDEX_START_BIT) & CMDINDEX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wait for response bits 
    // 
#define WAITRESP_MASK 0xC0U
#define WAITRESP_OFFSET 7
#define WAITRESP_START_BIT 6
#define WAITRESP_WIDTH 2



typedef enum waitresp {
    WAITRESP_0,
    WAITRESP_1
} WAITRESP_T ;
#define READ_WAITRESP() \
   ((READ_REGISTER_ULONG(0xC) & WAITRESP_MASK)  >> WAITRESP_START_BIT)

#define WRITE_WAITRESP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WAITRESP_MASK) | ((val << WAITRESP_START_BIT) & WAITRESP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CPSM waits for interrupt request 
    // 
#define WAITINT_MASK 0x100U
#define WAITINT_OFFSET 8
#define WAITINT_START_BIT 8
#define WAITINT_WIDTH 1



typedef enum waitint {
    WAITINT_0,
    WAITINT_1
} WAITINT_T ;
#define WRITE_WAITINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WAITINT_MASK) | ((val << WAITINT_START_BIT) & WAITINT_MASK )); \
   } 

#define ENABLE_WAITINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WAITINT_MASK ); \
   }

#define DISABLE_WAITINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WAITINT_MASK ); \
   } 

#define READ_WAITINT() \
   ((READ_REGISTER_ULONG(0xC) & WAITINT_MASK)  >> WAITINT_START_BIT)

#define WHEN_WAITINT_HIGH() \
     if ( READ_WAITINT() )


#define UNLESS_WAITINT_HIGH() \
     if (! READ_WAITINT() )


#define WAIT_WAITINT_LOW() \
    while ( READ_WAITINT() );


#define WAIT_WAITINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITINT() && (--___t___ > 0)); }


#define WAIT_WAITINT_HIGH() \
    while (! READ_WAITINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CPSM Waits for ends of data transfer (CmdPend internal 
    // signal) 
    // 
#define WAITPEND_MASK 0x200U
#define WAITPEND_OFFSET 9
#define WAITPEND_START_BIT 9
#define WAITPEND_WIDTH 1



typedef enum waitpend {
    WAITPEND_0,
    WAITPEND_1
} WAITPEND_T ;
#define WRITE_WAITPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WAITPEND_MASK) | ((val << WAITPEND_START_BIT) & WAITPEND_MASK )); \
   } 

#define ENABLE_WAITPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WAITPEND_MASK ); \
   }

#define DISABLE_WAITPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WAITPEND_MASK ); \
   } 

#define READ_WAITPEND() \
   ((READ_REGISTER_ULONG(0xC) & WAITPEND_MASK)  >> WAITPEND_START_BIT)

#define WHEN_WAITPEND_HIGH() \
     if ( READ_WAITPEND() )


#define UNLESS_WAITPEND_HIGH() \
     if (! READ_WAITPEND() )


#define WAIT_WAITPEND_LOW() \
    while ( READ_WAITPEND() );


#define WAIT_WAITPEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITPEND() && (--___t___ > 0)); }


#define WAIT_WAITPEND_HIGH() \
    while (! READ_WAITPEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command path state machine (CPSM) Enable bit 
    // 
#define CPSMEN_MASK 0x400U
#define CPSMEN_OFFSET 10
#define CPSMEN_START_BIT 10
#define CPSMEN_WIDTH 1



typedef enum cpsmen {
    CPSMEN_0,
    CPSMEN_1
} CPSMEN_T ;
#define WRITE_CPSMEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CPSMEN_MASK) | ((val << CPSMEN_START_BIT) & CPSMEN_MASK )); \
   } 

#define ENABLE_CPSMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CPSMEN_MASK ); \
   }

#define DISABLE_CPSMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CPSMEN_MASK ); \
   } 

#define READ_CPSMEN() \
   ((READ_REGISTER_ULONG(0xC) & CPSMEN_MASK)  >> CPSMEN_START_BIT)

#define WHEN_CPSMEN_HIGH() \
     if ( READ_CPSMEN() )


#define UNLESS_CPSMEN_HIGH() \
     if (! READ_CPSMEN() )


#define WAIT_CPSMEN_LOW() \
    while ( READ_CPSMEN() );


#define WAIT_CPSMEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CPSMEN() && (--___t___ > 0)); }


#define WAIT_CPSMEN_HIGH() \
    while (! READ_CPSMEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD I/O suspend command 
    // 
#define SDIOSUSPEND_MASK 0x800U
#define SDIOSUSPEND_OFFSET 11
#define SDIOSUSPEND_START_BIT 11
#define SDIOSUSPEND_WIDTH 1



typedef enum sdiosuspend {
    SDIOSUSPEND_0,
    SDIOSUSPEND_1
} SDIOSUSPEND_T ;
#define WRITE_SDIOSUSPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ SDIOSUSPEND_MASK) | ((val << SDIOSUSPEND_START_BIT) & SDIOSUSPEND_MASK )); \
   } 

#define ENABLE_SDIOSUSPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  SDIOSUSPEND_MASK ); \
   }

#define DISABLE_SDIOSUSPEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~SDIOSUSPEND_MASK ); \
   } 

#define READ_SDIOSUSPEND() \
   ((READ_REGISTER_ULONG(0xC) & SDIOSUSPEND_MASK)  >> SDIOSUSPEND_START_BIT)

#define WHEN_SDIOSUSPEND_HIGH() \
     if ( READ_SDIOSUSPEND() )


#define UNLESS_SDIOSUSPEND_HIGH() \
     if (! READ_SDIOSUSPEND() )


#define WAIT_SDIOSUSPEND_LOW() \
    while ( READ_SDIOSUSPEND() );


#define WAIT_SDIOSUSPEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDIOSUSPEND() && (--___t___ > 0)); }


#define WAIT_SDIOSUSPEND_HIGH() \
    while (! READ_SDIOSUSPEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable CMD completion 
    // 
#define ENCMDCOMPL_MASK 0x1000U
#define ENCMDCOMPL_OFFSET 12
#define ENCMDCOMPL_START_BIT 12
#define ENCMDCOMPL_WIDTH 1



typedef enum encmdcompl {
    ENCMDCOMPL_0,
    ENCMDCOMPL_1
} ENCMDCOMPL_T ;
#define WRITE_ENCMDCOMPL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ENCMDCOMPL_MASK) | ((val << ENCMDCOMPL_START_BIT) & ENCMDCOMPL_MASK )); \
   } 

#define ENABLE_ENCMDCOMPL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ENCMDCOMPL_MASK ); \
   }

#define DISABLE_ENCMDCOMPL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ENCMDCOMPL_MASK ); \
   } 

#define READ_ENCMDCOMPL() \
   ((READ_REGISTER_ULONG(0xC) & ENCMDCOMPL_MASK)  >> ENCMDCOMPL_START_BIT)

#define WHEN_ENCMDCOMPL_HIGH() \
     if ( READ_ENCMDCOMPL() )


#define UNLESS_ENCMDCOMPL_HIGH() \
     if (! READ_ENCMDCOMPL() )


#define WAIT_ENCMDCOMPL_LOW() \
    while ( READ_ENCMDCOMPL() );


#define WAIT_ENCMDCOMPL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENCMDCOMPL() && (--___t___ > 0)); }


#define WAIT_ENCMDCOMPL_HIGH() \
    while (! READ_ENCMDCOMPL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // not Interrupt Enable 
    // 
#define NIEN_MASK 0x2000U
#define NIEN_OFFSET 13
#define NIEN_START_BIT 13
#define NIEN_WIDTH 1



typedef enum nien {
    NIEN_0,
    NIEN_1
} NIEN_T ;
#define WRITE_NIEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ NIEN_MASK) | ((val << NIEN_START_BIT) & NIEN_MASK )); \
   } 

#define ENABLE_NIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  NIEN_MASK ); \
   }

#define DISABLE_NIEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~NIEN_MASK ); \
   } 

#define READ_NIEN() \
   ((READ_REGISTER_ULONG(0xC) & NIEN_MASK)  >> NIEN_START_BIT)

#define WHEN_NIEN_HIGH() \
     if ( READ_NIEN() )


#define UNLESS_NIEN_HIGH() \
     if (! READ_NIEN() )


#define WAIT_NIEN_LOW() \
    while ( READ_NIEN() );


#define WAIT_NIEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NIEN() && (--___t___ > 0)); }


#define WAIT_NIEN_HIGH() \
    while (! READ_NIEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cmd
//
// Return the value of register CMD
//
// Notes : Register command register (CMD) at the offset 0xC, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CE-ATA command 
    // 
#define CE_ATACMD_MASK 0x4000U
#define CE_ATACMD_OFFSET 14
#define CE_ATACMD_START_BIT 14
#define CE_ATACMD_WIDTH 1



typedef enum ce_atacmd {
    CE_ATACMD_0,
    CE_ATACMD_1
} CE_ATACMD_T ;
#define WRITE_CE_ATACMD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CE_ATACMD_MASK) | ((val << CE_ATACMD_START_BIT) & CE_ATACMD_MASK )); \
   } 

#define ENABLE_CE_ATACMD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  CE_ATACMD_MASK ); \
   }

#define DISABLE_CE_ATACMD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~CE_ATACMD_MASK ); \
   } 

#define READ_CE_ATACMD() \
   ((READ_REGISTER_ULONG(0xC) & CE_ATACMD_MASK)  >> CE_ATACMD_START_BIT)

#define WHEN_CE_ATACMD_HIGH() \
     if ( READ_CE_ATACMD() )


#define UNLESS_CE_ATACMD_HIGH() \
     if (! READ_CE_ATACMD() )


#define WAIT_CE_ATACMD_LOW() \
    while ( READ_CE_ATACMD() );


#define WAIT_CE_ATACMD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CE_ATACMD() && (--___t___ > 0)); }


#define WAIT_CE_ATACMD_HIGH() \
    while (! READ_CE_ATACMD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Respcmd
//
// Return the value of register RESPCMD
//
// Notes : Register Respcmd at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RESPCMD() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Respcmd
//
// Return the value of register RESPCMD
//
// Notes : Register command response register (RESPCMD) at the offset 0x10, Bits 0:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Response command index 
    // 
#define RESPCMD_MASK 0x3FU
#define RESPCMD_OFFSET 5
#define RESPCMD_START_BIT 0
#define RESPCMD_WIDTH 6


#define RESPCMD_REG 0x10

typedef enum respcmd {
    RESPCMD_0,
    RESPCMD_1
} RESPCMD_T ;
#define READ_RESPCMD() \
   ((READ_REGISTER_ULONG(0x10) & RESPCMD_MASK)  >> RESPCMD_START_BIT)

#define WRITE_RESPCMD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ RESPCMD_MASK) | ((val << RESPCMD_START_BIT) & RESPCMD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp1
//
// Return the value of register RESP1
//
// Notes : Register Resp1 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RESP_1() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp1
//
// Return the value of register RESP_1
//
// Notes : Register response 1..4 register (RESP1) at the offset 0x14, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // see Table 132 
    // 
#define CARDSTATUS1_MASK 0xFFFFFFFFU
#define CARDSTATUS1_OFFSET 31
#define CARDSTATUS1_START_BIT 0
#define CARDSTATUS1_WIDTH 32


#define RESP_1_REG 0x14

typedef enum cardstatus1 {
    CARDSTATUS_1_0,
    CARDSTATUS_1_1
} CARDSTATUS_1_T ;
#define READ_CARDSTATUS1() \
   ((READ_REGISTER_ULONG(0x14) & CARDSTATUS1_MASK)  >> CARDSTATUS1_START_BIT)

#define WRITE_CARDSTATUS1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CARDSTATUS1_MASK) | ((val << CARDSTATUS1_START_BIT) & CARDSTATUS1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp2
//
// Return the value of register RESP2
//
// Notes : Register Resp2 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RESP_2() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp2
//
// Return the value of register RESP_2
//
// Notes : Register response 1..4 register (RESP2) at the offset 0x18, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // see Table 132 
    // 
#define CARDSTATUS2_MASK 0xFFFFFFFFU
#define CARDSTATUS2_OFFSET 31
#define CARDSTATUS2_START_BIT 0
#define CARDSTATUS2_WIDTH 32


#define RESP_2_REG 0x18

typedef enum cardstatus2 {
    CARDSTATUS_2_0,
    CARDSTATUS_2_1
} CARDSTATUS_2_T ;
#define READ_CARDSTATUS2() \
   ((READ_REGISTER_ULONG(0x18) & CARDSTATUS2_MASK)  >> CARDSTATUS2_START_BIT)

#define WRITE_CARDSTATUS2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CARDSTATUS2_MASK) | ((val << CARDSTATUS2_START_BIT) & CARDSTATUS2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp3
//
// Return the value of register RESP3
//
// Notes : Register Resp3 at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RESP_3() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp3
//
// Return the value of register RESP_3
//
// Notes : Register response 1..4 register (RESP3) at the offset 0x1C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // see Table 132 
    // 
#define CARDSTATUS3_MASK 0xFFFFFFFFU
#define CARDSTATUS3_OFFSET 31
#define CARDSTATUS3_START_BIT 0
#define CARDSTATUS3_WIDTH 32


#define RESP_3_REG 0x1C

typedef enum cardstatus3 {
    CARDSTATUS_3_0,
    CARDSTATUS_3_1
} CARDSTATUS_3_T ;
#define READ_CARDSTATUS3() \
   ((READ_REGISTER_ULONG(0x1C) & CARDSTATUS3_MASK)  >> CARDSTATUS3_START_BIT)

#define WRITE_CARDSTATUS3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CARDSTATUS3_MASK) | ((val << CARDSTATUS3_START_BIT) & CARDSTATUS3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp4
//
// Return the value of register RESP4
//
// Notes : Register Resp4 at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RESP_4() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Resp4
//
// Return the value of register RESP_4
//
// Notes : Register response 1..4 register (RESP4) at the offset 0x20, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // see Table 132 
    // 
#define CARDSTATUS4_MASK 0xFFFFFFFFU
#define CARDSTATUS4_OFFSET 31
#define CARDSTATUS4_START_BIT 0
#define CARDSTATUS4_WIDTH 32


#define RESP_4_REG 0x20

typedef enum cardstatus4 {
    CARDSTATUS_4_0,
    CARDSTATUS_4_1
} CARDSTATUS_4_T ;
#define READ_CARDSTATUS4() \
   ((READ_REGISTER_ULONG(0x20) & CARDSTATUS4_MASK)  >> CARDSTATUS4_START_BIT)

#define WRITE_CARDSTATUS4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CARDSTATUS4_MASK) | ((val << CARDSTATUS4_START_BIT) & CARDSTATUS4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dtimer
//
// Return the value of register DTIMER
//
// Notes : Register Dtimer at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DTIMER( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_DTIMER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_DTIMER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_DTIMER() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dtimer
//
// Return the value of register DTIMER
//
// Notes : Register data timer register (DTIMER) at the offset 0x24, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data timeout period 
    // 
#define DATATIME_MASK 0xFFFFFFFFU
#define DATATIME_OFFSET 31
#define DATATIME_START_BIT 0
#define DATATIME_WIDTH 32


#define DTIMER_REG 0x24

typedef enum datatime {
    DATATIME_0,
    DATATIME_1
} DATATIME_T ;
#define READ_DATATIME() \
   ((READ_REGISTER_ULONG(0x24) & DATATIME_MASK)  >> DATATIME_START_BIT)

#define WRITE_DATATIME(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ DATATIME_MASK) | ((val << DATATIME_START_BIT) & DATATIME_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dlen
//
// Return the value of register DLEN
//
// Notes : Register Dlen at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DLEN( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_DLEN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_DLEN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_DLEN() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dlen
//
// Return the value of register DLEN
//
// Notes : Register data length register (DLEN) at the offset 0x28, Bits 0:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data length value 
    // 
#define DATALENGTH_MASK 0x1FFFFFFU
#define DATALENGTH_OFFSET 24
#define DATALENGTH_START_BIT 0
#define DATALENGTH_WIDTH 25


#define DLEN_REG 0x28

typedef enum datalength {
    DATALENGTH_0,
    DATALENGTH_1
} DATALENGTH_T ;
#define READ_DATALENGTH() \
   ((READ_REGISTER_ULONG(0x28) & DATALENGTH_MASK)  >> DATALENGTH_START_BIT)

#define WRITE_DATALENGTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ DATALENGTH_MASK) | ((val << DATALENGTH_START_BIT) & DATALENGTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register Dctrl at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DCTRL( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_DCTRL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_DCTRL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_DCTRL() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DTEN 
    // 
#define DTEN_MASK 0x1U
#define DTEN_OFFSET 0
#define DTEN_START_BIT 0
#define DTEN_WIDTH 1


#define DCTRL_REG 0x2C

typedef enum dten {
    DTEN_0,
    DTEN_1
} DTEN_T ;
#define WRITE_DTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DTEN_MASK) | ((val << DTEN_START_BIT) & DTEN_MASK )); \
   } 

#define ENABLE_DTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  DTEN_MASK ); \
   }

#define DISABLE_DTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~DTEN_MASK ); \
   } 

#define READ_DTEN() \
   ((READ_REGISTER_ULONG(0x2C) & DTEN_MASK)  >> DTEN_START_BIT)

#define WHEN_DTEN_HIGH() \
     if ( READ_DTEN() )


#define UNLESS_DTEN_HIGH() \
     if (! READ_DTEN() )


#define WAIT_DTEN_LOW() \
    while ( READ_DTEN() );


#define WAIT_DTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTEN() && (--___t___ > 0)); }


#define WAIT_DTEN_HIGH() \
    while (! READ_DTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction selection 
    // 
#define DTDIR_MASK 0x2U
#define DTDIR_OFFSET 1
#define DTDIR_START_BIT 1
#define DTDIR_WIDTH 1



typedef enum dtdir {
    DTDIR_0,
    DTDIR_1
} DTDIR_T ;
#define WRITE_DTDIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DTDIR_MASK) | ((val << DTDIR_START_BIT) & DTDIR_MASK )); \
   } 

#define ENABLE_DTDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  DTDIR_MASK ); \
   }

#define DISABLE_DTDIR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~DTDIR_MASK ); \
   } 

#define READ_DTDIR() \
   ((READ_REGISTER_ULONG(0x2C) & DTDIR_MASK)  >> DTDIR_START_BIT)

#define WHEN_DTDIR_HIGH() \
     if ( READ_DTDIR() )


#define UNLESS_DTDIR_HIGH() \
     if (! READ_DTDIR() )


#define WAIT_DTDIR_LOW() \
    while ( READ_DTDIR() );


#define WAIT_DTDIR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTDIR() && (--___t___ > 0)); }


#define WAIT_DTDIR_HIGH() \
    while (! READ_DTDIR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer mode selection 1: Stream or SDIO multibyte 
    // data transfer 
    // 
#define DTMODE_MASK 0x4U
#define DTMODE_OFFSET 2
#define DTMODE_START_BIT 2
#define DTMODE_WIDTH 1



typedef enum dtmode {
    DTMODE_0,
    DTMODE_1
} DTMODE_T ;
#define WRITE_DTMODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DTMODE_MASK) | ((val << DTMODE_START_BIT) & DTMODE_MASK )); \
   } 

#define ENABLE_DTMODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  DTMODE_MASK ); \
   }

#define DISABLE_DTMODE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~DTMODE_MASK ); \
   } 

#define READ_DTMODE() \
   ((READ_REGISTER_ULONG(0x2C) & DTMODE_MASK)  >> DTMODE_START_BIT)

#define WHEN_DTMODE_HIGH() \
     if ( READ_DTMODE() )


#define UNLESS_DTMODE_HIGH() \
     if (! READ_DTMODE() )


#define WAIT_DTMODE_LOW() \
    while ( READ_DTMODE() );


#define WAIT_DTMODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTMODE() && (--___t___ > 0)); }


#define WAIT_DTMODE_HIGH() \
    while (! READ_DTMODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable bit 
    // 
#define DMAEN_MASK 0x8U
#define DMAEN_OFFSET 3
#define DMAEN_START_BIT 3
#define DMAEN_WIDTH 1



#define WRITE_DMAEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DMAEN_MASK) | ((val << DMAEN_START_BIT) & DMAEN_MASK )); \
   } 

#define ENABLE_DMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  DMAEN_MASK ); \
   }

#define DISABLE_DMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~DMAEN_MASK ); \
   } 

#define READ_DMAEN() \
   ((READ_REGISTER_ULONG(0x2C) & DMAEN_MASK)  >> DMAEN_START_BIT)

#define WHEN_DMAEN_HIGH() \
     if ( READ_DMAEN() )


#define UNLESS_DMAEN_HIGH() \
     if (! READ_DMAEN() )


#define WAIT_DMAEN_LOW() \
    while ( READ_DMAEN() );


#define WAIT_DMAEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAEN() && (--___t___ > 0)); }


#define WAIT_DMAEN_HIGH() \
    while (! READ_DMAEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data block size 
    // 
#define DBLOCKSIZE_MASK 0xF0U
#define DBLOCKSIZE_OFFSET 7
#define DBLOCKSIZE_START_BIT 4
#define DBLOCKSIZE_WIDTH 4



typedef enum dblocksize {
    DBLOCKSIZE_0,
    DBLOCKSIZE_1
} DBLOCKSIZE_T ;
#define READ_DBLOCKSIZE() \
   ((READ_REGISTER_ULONG(0x2C) & DBLOCKSIZE_MASK)  >> DBLOCKSIZE_START_BIT)

#define WRITE_DBLOCKSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DBLOCKSIZE_MASK) | ((val << DBLOCKSIZE_START_BIT) & DBLOCKSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read wait start 
    // 
#define RWSTART_MASK 0x100U
#define RWSTART_OFFSET 8
#define RWSTART_START_BIT 8
#define RWSTART_WIDTH 1



typedef enum rwstart {
    RWSTART_0,
    RWSTART_1
} RWSTART_T ;
#define WRITE_RWSTART(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ RWSTART_MASK) | ((val << RWSTART_START_BIT) & RWSTART_MASK )); \
   } 

#define ENABLE_RWSTART() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  RWSTART_MASK ); \
   }

#define DISABLE_RWSTART() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~RWSTART_MASK ); \
   } 

#define READ_RWSTART() \
   ((READ_REGISTER_ULONG(0x2C) & RWSTART_MASK)  >> RWSTART_START_BIT)

#define WHEN_RWSTART_HIGH() \
     if ( READ_RWSTART() )


#define UNLESS_RWSTART_HIGH() \
     if (! READ_RWSTART() )


#define WAIT_RWSTART_LOW() \
    while ( READ_RWSTART() );


#define WAIT_RWSTART_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RWSTART() && (--___t___ > 0)); }


#define WAIT_RWSTART_HIGH() \
    while (! READ_RWSTART() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read wait stop 
    // 
#define RWSTOP_MASK 0x200U
#define RWSTOP_OFFSET 9
#define RWSTOP_START_BIT 9
#define RWSTOP_WIDTH 1



typedef enum rwstop {
    RWSTOP_0,
    RWSTOP_1
} RWSTOP_T ;
#define WRITE_RWSTOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ RWSTOP_MASK) | ((val << RWSTOP_START_BIT) & RWSTOP_MASK )); \
   } 

#define ENABLE_RWSTOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  RWSTOP_MASK ); \
   }

#define DISABLE_RWSTOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~RWSTOP_MASK ); \
   } 

#define READ_RWSTOP() \
   ((READ_REGISTER_ULONG(0x2C) & RWSTOP_MASK)  >> RWSTOP_START_BIT)

#define WHEN_RWSTOP_HIGH() \
     if ( READ_RWSTOP() )


#define UNLESS_RWSTOP_HIGH() \
     if (! READ_RWSTOP() )


#define WAIT_RWSTOP_LOW() \
    while ( READ_RWSTOP() );


#define WAIT_RWSTOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RWSTOP() && (--___t___ > 0)); }


#define WAIT_RWSTOP_HIGH() \
    while (! READ_RWSTOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read wait mode 
    // 
#define RWMOD_MASK 0x400U
#define RWMOD_OFFSET 10
#define RWMOD_START_BIT 10
#define RWMOD_WIDTH 1



typedef enum rwmod {
    RWMOD_0,
    RWMOD_1
} RWMOD_T ;
#define WRITE_RWMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ RWMOD_MASK) | ((val << RWMOD_START_BIT) & RWMOD_MASK )); \
   } 

#define ENABLE_RWMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  RWMOD_MASK ); \
   }

#define DISABLE_RWMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~RWMOD_MASK ); \
   } 

#define READ_RWMOD() \
   ((READ_REGISTER_ULONG(0x2C) & RWMOD_MASK)  >> RWMOD_START_BIT)

#define WHEN_RWMOD_HIGH() \
     if ( READ_RWMOD() )


#define UNLESS_RWMOD_HIGH() \
     if (! READ_RWMOD() )


#define WAIT_RWMOD_LOW() \
    while ( READ_RWMOD() );


#define WAIT_RWMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RWMOD() && (--___t___ > 0)); }


#define WAIT_RWMOD_HIGH() \
    while (! READ_RWMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dctrl
//
// Return the value of register DCTRL
//
// Notes : Register data control register (DCTRL) at the offset 0x2C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD I/O enable functions 
    // 
#define SDIOEN_MASK 0x800U
#define SDIOEN_OFFSET 11
#define SDIOEN_START_BIT 11
#define SDIOEN_WIDTH 1



typedef enum sdioen {
    SDIOEN_0,
    SDIOEN_1
} SDIOEN_T ;
#define WRITE_SDIOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ SDIOEN_MASK) | ((val << SDIOEN_START_BIT) & SDIOEN_MASK )); \
   } 

#define ENABLE_SDIOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  SDIOEN_MASK ); \
   }

#define DISABLE_SDIOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~SDIOEN_MASK ); \
   } 

#define READ_SDIOEN() \
   ((READ_REGISTER_ULONG(0x2C) & SDIOEN_MASK)  >> SDIOEN_START_BIT)

#define WHEN_SDIOEN_HIGH() \
     if ( READ_SDIOEN() )


#define UNLESS_SDIOEN_HIGH() \
     if (! READ_SDIOEN() )


#define WAIT_SDIOEN_LOW() \
    while ( READ_SDIOEN() );


#define WAIT_SDIOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDIOEN() && (--___t___ > 0)); }


#define WAIT_SDIOEN_HIGH() \
    while (! READ_SDIOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dcount
//
// Return the value of register DCOUNT
//
// Notes : Register Dcount at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DCOUNT() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dcount
//
// Return the value of register DCOUNT
//
// Notes : Register data counter register (DCOUNT) at the offset 0x30, Bits 0:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data count value 
    // 
#define DATACOUNT_MASK 0x1FFFFFFU
#define DATACOUNT_OFFSET 24
#define DATACOUNT_START_BIT 0
#define DATACOUNT_WIDTH 25


#define DCOUNT_REG 0x30

typedef enum datacount {
    DATACOUNT_0,
    DATACOUNT_1
} DATACOUNT_T ;
#define READ_DATACOUNT() \
   ((READ_REGISTER_ULONG(0x30) & DATACOUNT_MASK)  >> DATACOUNT_START_BIT)

#define WRITE_DATACOUNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ DATACOUNT_MASK) | ((val << DATACOUNT_START_BIT) & DATACOUNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register Sta at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_STA() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command response received (CRC check failed) 
    // 
#define CCRCFAIL_MASK 0x1U
#define CCRCFAIL_OFFSET 0
#define CCRCFAIL_START_BIT 0
#define CCRCFAIL_WIDTH 1


#define STA_REG 0x34

typedef enum ccrcfail {
    CCRCFAIL_0,
    CCRCFAIL_1
} CCRCFAIL_T ;
#define WRITE_CCRCFAIL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CCRCFAIL_MASK) | ((val << CCRCFAIL_START_BIT) & CCRCFAIL_MASK )); \
   } 

#define ENABLE_CCRCFAIL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CCRCFAIL_MASK ); \
   }

#define DISABLE_CCRCFAIL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CCRCFAIL_MASK ); \
   } 

#define READ_CCRCFAIL() \
   ((READ_REGISTER_ULONG(0x34) & CCRCFAIL_MASK)  >> CCRCFAIL_START_BIT)

#define WHEN_CCRCFAIL_HIGH() \
     if ( READ_CCRCFAIL() )


#define UNLESS_CCRCFAIL_HIGH() \
     if (! READ_CCRCFAIL() )


#define WAIT_CCRCFAIL_LOW() \
    while ( READ_CCRCFAIL() );


#define WAIT_CCRCFAIL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCRCFAIL() && (--___t___ > 0)); }


#define WAIT_CCRCFAIL_HIGH() \
    while (! READ_CCRCFAIL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data block sent/received (CRC check failed) 
    // 
#define DCRCFAIL_MASK 0x2U
#define DCRCFAIL_OFFSET 1
#define DCRCFAIL_START_BIT 1
#define DCRCFAIL_WIDTH 1



typedef enum dcrcfail {
    DCRCFAIL_0,
    DCRCFAIL_1
} DCRCFAIL_T ;
#define WRITE_DCRCFAIL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DCRCFAIL_MASK) | ((val << DCRCFAIL_START_BIT) & DCRCFAIL_MASK )); \
   } 

#define ENABLE_DCRCFAIL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DCRCFAIL_MASK ); \
   }

#define DISABLE_DCRCFAIL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DCRCFAIL_MASK ); \
   } 

#define READ_DCRCFAIL() \
   ((READ_REGISTER_ULONG(0x34) & DCRCFAIL_MASK)  >> DCRCFAIL_START_BIT)

#define WHEN_DCRCFAIL_HIGH() \
     if ( READ_DCRCFAIL() )


#define UNLESS_DCRCFAIL_HIGH() \
     if (! READ_DCRCFAIL() )


#define WAIT_DCRCFAIL_LOW() \
    while ( READ_DCRCFAIL() );


#define WAIT_DCRCFAIL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCRCFAIL() && (--___t___ > 0)); }


#define WAIT_DCRCFAIL_HIGH() \
    while (! READ_DCRCFAIL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command response timeout 
    // 
#define CTIMEOUT_MASK 0x4U
#define CTIMEOUT_OFFSET 2
#define CTIMEOUT_START_BIT 2
#define CTIMEOUT_WIDTH 1



typedef enum ctimeout {
    CTIMEOUT_0,
    CTIMEOUT_1
} CTIMEOUT_T ;
#define WRITE_CTIMEOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CTIMEOUT_MASK) | ((val << CTIMEOUT_START_BIT) & CTIMEOUT_MASK )); \
   } 

#define ENABLE_CTIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CTIMEOUT_MASK ); \
   }

#define DISABLE_CTIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CTIMEOUT_MASK ); \
   } 

#define READ_CTIMEOUT() \
   ((READ_REGISTER_ULONG(0x34) & CTIMEOUT_MASK)  >> CTIMEOUT_START_BIT)

#define WHEN_CTIMEOUT_HIGH() \
     if ( READ_CTIMEOUT() )


#define UNLESS_CTIMEOUT_HIGH() \
     if (! READ_CTIMEOUT() )


#define WAIT_CTIMEOUT_LOW() \
    while ( READ_CTIMEOUT() );


#define WAIT_CTIMEOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTIMEOUT() && (--___t___ > 0)); }


#define WAIT_CTIMEOUT_HIGH() \
    while (! READ_CTIMEOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data timeout 
    // 
#define DTIMEOUT_MASK 0x8U
#define DTIMEOUT_OFFSET 3
#define DTIMEOUT_START_BIT 3
#define DTIMEOUT_WIDTH 1



typedef enum dtimeout {
    DTIMEOUT_0,
    DTIMEOUT_1
} DTIMEOUT_T ;
#define WRITE_DTIMEOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DTIMEOUT_MASK) | ((val << DTIMEOUT_START_BIT) & DTIMEOUT_MASK )); \
   } 

#define ENABLE_DTIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DTIMEOUT_MASK ); \
   }

#define DISABLE_DTIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DTIMEOUT_MASK ); \
   } 

#define READ_DTIMEOUT() \
   ((READ_REGISTER_ULONG(0x34) & DTIMEOUT_MASK)  >> DTIMEOUT_START_BIT)

#define WHEN_DTIMEOUT_HIGH() \
     if ( READ_DTIMEOUT() )


#define UNLESS_DTIMEOUT_HIGH() \
     if (! READ_DTIMEOUT() )


#define WAIT_DTIMEOUT_LOW() \
    while ( READ_DTIMEOUT() );


#define WAIT_DTIMEOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTIMEOUT() && (--___t___ > 0)); }


#define WAIT_DTIMEOUT_HIGH() \
    while (! READ_DTIMEOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO underrun error 
    // 
#define TXUNDERR_MASK 0x10U
#define TXUNDERR_OFFSET 4
#define TXUNDERR_START_BIT 4
#define TXUNDERR_WIDTH 1



typedef enum txunderr {
    TXUNDERR_0,
    TXUNDERR_1
} TXUNDERR_T ;
#define WRITE_TXUNDERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TXUNDERR_MASK) | ((val << TXUNDERR_START_BIT) & TXUNDERR_MASK )); \
   } 

#define ENABLE_TXUNDERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TXUNDERR_MASK ); \
   }

#define DISABLE_TXUNDERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TXUNDERR_MASK ); \
   } 

#define READ_TXUNDERR() \
   ((READ_REGISTER_ULONG(0x34) & TXUNDERR_MASK)  >> TXUNDERR_START_BIT)

#define WHEN_TXUNDERR_HIGH() \
     if ( READ_TXUNDERR() )


#define UNLESS_TXUNDERR_HIGH() \
     if (! READ_TXUNDERR() )


#define WAIT_TXUNDERR_LOW() \
    while ( READ_TXUNDERR() );


#define WAIT_TXUNDERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXUNDERR() && (--___t___ > 0)); }


#define WAIT_TXUNDERR_HIGH() \
    while (! READ_TXUNDERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received FIFO overrun error 
    // 
#define RXOVERR_MASK 0x20U
#define RXOVERR_OFFSET 5
#define RXOVERR_START_BIT 5
#define RXOVERR_WIDTH 1



typedef enum rxoverr {
    RXOVERR_0,
    RXOVERR_1
} RXOVERR_T ;
#define WRITE_RXOVERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RXOVERR_MASK) | ((val << RXOVERR_START_BIT) & RXOVERR_MASK )); \
   } 

#define ENABLE_RXOVERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RXOVERR_MASK ); \
   }

#define DISABLE_RXOVERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RXOVERR_MASK ); \
   } 

#define READ_RXOVERR() \
   ((READ_REGISTER_ULONG(0x34) & RXOVERR_MASK)  >> RXOVERR_START_BIT)

#define WHEN_RXOVERR_HIGH() \
     if ( READ_RXOVERR() )


#define UNLESS_RXOVERR_HIGH() \
     if (! READ_RXOVERR() )


#define WAIT_RXOVERR_LOW() \
    while ( READ_RXOVERR() );


#define WAIT_RXOVERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXOVERR() && (--___t___ > 0)); }


#define WAIT_RXOVERR_HIGH() \
    while (! READ_RXOVERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command response received (CRC check passed) 
    // 
#define CMDREND_MASK 0x40U
#define CMDREND_OFFSET 6
#define CMDREND_START_BIT 6
#define CMDREND_WIDTH 1



typedef enum cmdrend {
    CMDREND_0,
    CMDREND_1
} CMDREND_T ;
#define WRITE_CMDREND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CMDREND_MASK) | ((val << CMDREND_START_BIT) & CMDREND_MASK )); \
   } 

#define ENABLE_CMDREND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CMDREND_MASK ); \
   }

#define DISABLE_CMDREND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CMDREND_MASK ); \
   } 

#define READ_CMDREND() \
   ((READ_REGISTER_ULONG(0x34) & CMDREND_MASK)  >> CMDREND_START_BIT)

#define WHEN_CMDREND_HIGH() \
     if ( READ_CMDREND() )


#define UNLESS_CMDREND_HIGH() \
     if (! READ_CMDREND() )


#define WAIT_CMDREND_LOW() \
    while ( READ_CMDREND() );


#define WAIT_CMDREND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDREND() && (--___t___ > 0)); }


#define WAIT_CMDREND_HIGH() \
    while (! READ_CMDREND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command sent (no response required) 
    // 
#define CMDSENT_MASK 0x80U
#define CMDSENT_OFFSET 7
#define CMDSENT_START_BIT 7
#define CMDSENT_WIDTH 1



typedef enum cmdsent {
    CMDSENT_0,
    CMDSENT_1
} CMDSENT_T ;
#define WRITE_CMDSENT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CMDSENT_MASK) | ((val << CMDSENT_START_BIT) & CMDSENT_MASK )); \
   } 

#define ENABLE_CMDSENT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CMDSENT_MASK ); \
   }

#define DISABLE_CMDSENT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CMDSENT_MASK ); \
   } 

#define READ_CMDSENT() \
   ((READ_REGISTER_ULONG(0x34) & CMDSENT_MASK)  >> CMDSENT_START_BIT)

#define WHEN_CMDSENT_HIGH() \
     if ( READ_CMDSENT() )


#define UNLESS_CMDSENT_HIGH() \
     if (! READ_CMDSENT() )


#define WAIT_CMDSENT_LOW() \
    while ( READ_CMDSENT() );


#define WAIT_CMDSENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDSENT() && (--___t___ > 0)); }


#define WAIT_CMDSENT_HIGH() \
    while (! READ_CMDSENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data end (data counter, SDIDCOUNT, is zero) 
    // 
#define DATAEND_MASK 0x100U
#define DATAEND_OFFSET 8
#define DATAEND_START_BIT 8
#define DATAEND_WIDTH 1



typedef enum dataend {
    DATAEND_0,
    DATAEND_1
} DATAEND_T ;
#define WRITE_DATAEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DATAEND_MASK) | ((val << DATAEND_START_BIT) & DATAEND_MASK )); \
   } 

#define ENABLE_DATAEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DATAEND_MASK ); \
   }

#define DISABLE_DATAEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DATAEND_MASK ); \
   } 

#define READ_DATAEND() \
   ((READ_REGISTER_ULONG(0x34) & DATAEND_MASK)  >> DATAEND_START_BIT)

#define WHEN_DATAEND_HIGH() \
     if ( READ_DATAEND() )


#define UNLESS_DATAEND_HIGH() \
     if (! READ_DATAEND() )


#define WAIT_DATAEND_LOW() \
    while ( READ_DATAEND() );


#define WAIT_DATAEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DATAEND() && (--___t___ > 0)); }


#define WAIT_DATAEND_HIGH() \
    while (! READ_DATAEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start bit not detected on all data signals in wide bus 
    // mode 
    // 
#define STBITERR_MASK 0x200U
#define STBITERR_OFFSET 9
#define STBITERR_START_BIT 9
#define STBITERR_WIDTH 1



typedef enum stbiterr {
    STBITERR_0,
    STBITERR_1
} STBITERR_T ;
#define WRITE_STBITERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ STBITERR_MASK) | ((val << STBITERR_START_BIT) & STBITERR_MASK )); \
   } 

#define ENABLE_STBITERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  STBITERR_MASK ); \
   }

#define DISABLE_STBITERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~STBITERR_MASK ); \
   } 

#define READ_STBITERR() \
   ((READ_REGISTER_ULONG(0x34) & STBITERR_MASK)  >> STBITERR_START_BIT)

#define WHEN_STBITERR_HIGH() \
     if ( READ_STBITERR() )


#define UNLESS_STBITERR_HIGH() \
     if (! READ_STBITERR() )


#define WAIT_STBITERR_LOW() \
    while ( READ_STBITERR() );


#define WAIT_STBITERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STBITERR() && (--___t___ > 0)); }


#define WAIT_STBITERR_HIGH() \
    while (! READ_STBITERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data block sent/received (CRC check passed) 
    // 
#define DBCKEND_MASK 0x400U
#define DBCKEND_OFFSET 10
#define DBCKEND_START_BIT 10
#define DBCKEND_WIDTH 1



typedef enum dbckend {
    DBCKEND_0,
    DBCKEND_1
} DBCKEND_T ;
#define WRITE_DBCKEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DBCKEND_MASK) | ((val << DBCKEND_START_BIT) & DBCKEND_MASK )); \
   } 

#define ENABLE_DBCKEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  DBCKEND_MASK ); \
   }

#define DISABLE_DBCKEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~DBCKEND_MASK ); \
   } 

#define READ_DBCKEND() \
   ((READ_REGISTER_ULONG(0x34) & DBCKEND_MASK)  >> DBCKEND_START_BIT)

#define WHEN_DBCKEND_HIGH() \
     if ( READ_DBCKEND() )


#define UNLESS_DBCKEND_HIGH() \
     if (! READ_DBCKEND() )


#define WAIT_DBCKEND_LOW() \
    while ( READ_DBCKEND() );


#define WAIT_DBCKEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBCKEND() && (--___t___ > 0)); }


#define WAIT_DBCKEND_HIGH() \
    while (! READ_DBCKEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command transfer in progress 
    // 
#define CMDACT_MASK 0x800U
#define CMDACT_OFFSET 11
#define CMDACT_START_BIT 11
#define CMDACT_WIDTH 1



typedef enum cmdact {
    CMDACT_0,
    CMDACT_1
} CMDACT_T ;
#define WRITE_CMDACT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CMDACT_MASK) | ((val << CMDACT_START_BIT) & CMDACT_MASK )); \
   } 

#define ENABLE_CMDACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CMDACT_MASK ); \
   }

#define DISABLE_CMDACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CMDACT_MASK ); \
   } 

#define READ_CMDACT() \
   ((READ_REGISTER_ULONG(0x34) & CMDACT_MASK)  >> CMDACT_START_BIT)

#define WHEN_CMDACT_HIGH() \
     if ( READ_CMDACT() )


#define UNLESS_CMDACT_HIGH() \
     if (! READ_CMDACT() )


#define WAIT_CMDACT_LOW() \
    while ( READ_CMDACT() );


#define WAIT_CMDACT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDACT() && (--___t___ > 0)); }


#define WAIT_CMDACT_HIGH() \
    while (! READ_CMDACT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transmit in progress 
    // 
#define TXACT_MASK 0x1000U
#define TXACT_OFFSET 12
#define TXACT_START_BIT 12
#define TXACT_WIDTH 1



typedef enum txact {
    TXACT_0,
    TXACT_1
} TXACT_T ;
#define WRITE_TXACT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TXACT_MASK) | ((val << TXACT_START_BIT) & TXACT_MASK )); \
   } 

#define ENABLE_TXACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TXACT_MASK ); \
   }

#define DISABLE_TXACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TXACT_MASK ); \
   } 

#define READ_TXACT() \
   ((READ_REGISTER_ULONG(0x34) & TXACT_MASK)  >> TXACT_START_BIT)

#define WHEN_TXACT_HIGH() \
     if ( READ_TXACT() )


#define UNLESS_TXACT_HIGH() \
     if (! READ_TXACT() )


#define WAIT_TXACT_LOW() \
    while ( READ_TXACT() );


#define WAIT_TXACT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXACT() && (--___t___ > 0)); }


#define WAIT_TXACT_HIGH() \
    while (! READ_TXACT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data receive in progress 
    // 
#define RXACT_MASK 0x2000U
#define RXACT_OFFSET 13
#define RXACT_START_BIT 13
#define RXACT_WIDTH 1



typedef enum rxact {
    RXACT_0,
    RXACT_1
} RXACT_T ;
#define WRITE_RXACT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RXACT_MASK) | ((val << RXACT_START_BIT) & RXACT_MASK )); \
   } 

#define ENABLE_RXACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RXACT_MASK ); \
   }

#define DISABLE_RXACT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RXACT_MASK ); \
   } 

#define READ_RXACT() \
   ((READ_REGISTER_ULONG(0x34) & RXACT_MASK)  >> RXACT_START_BIT)

#define WHEN_RXACT_HIGH() \
     if ( READ_RXACT() )


#define UNLESS_RXACT_HIGH() \
     if (! READ_RXACT() )


#define WAIT_RXACT_LOW() \
    while ( READ_RXACT() );


#define WAIT_RXACT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXACT() && (--___t___ > 0)); }


#define WAIT_RXACT_HIGH() \
    while (! READ_RXACT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO half empty: at least 8 words can be written 
    // into the FIFO 
    // 
#define TXFIFOHE_MASK 0x4000U
#define TXFIFOHE_OFFSET 14
#define TXFIFOHE_START_BIT 14
#define TXFIFOHE_WIDTH 1



typedef enum txfifohe {
    TXFIFOHE_0,
    TXFIFOHE_1
} TXFIFOHE_T ;
#define WRITE_TXFIFOHE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TXFIFOHE_MASK) | ((val << TXFIFOHE_START_BIT) & TXFIFOHE_MASK )); \
   } 

#define ENABLE_TXFIFOHE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TXFIFOHE_MASK ); \
   }

#define DISABLE_TXFIFOHE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TXFIFOHE_MASK ); \
   } 

#define READ_TXFIFOHE() \
   ((READ_REGISTER_ULONG(0x34) & TXFIFOHE_MASK)  >> TXFIFOHE_START_BIT)

#define WHEN_TXFIFOHE_HIGH() \
     if ( READ_TXFIFOHE() )


#define UNLESS_TXFIFOHE_HIGH() \
     if (! READ_TXFIFOHE() )


#define WAIT_TXFIFOHE_LOW() \
    while ( READ_TXFIFOHE() );


#define WAIT_TXFIFOHE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOHE() && (--___t___ > 0)); }


#define WAIT_TXFIFOHE_HIGH() \
    while (! READ_TXFIFOHE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive FIFO half full: there are at least 8 words in the 
    // FIFO 
    // 
#define RXFIFOHF_MASK 0x8000U
#define RXFIFOHF_OFFSET 15
#define RXFIFOHF_START_BIT 15
#define RXFIFOHF_WIDTH 1



typedef enum rxfifohf {
    RXFIFOHF_0,
    RXFIFOHF_1
} RXFIFOHF_T ;
#define WRITE_RXFIFOHF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RXFIFOHF_MASK) | ((val << RXFIFOHF_START_BIT) & RXFIFOHF_MASK )); \
   } 

#define ENABLE_RXFIFOHF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RXFIFOHF_MASK ); \
   }

#define DISABLE_RXFIFOHF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RXFIFOHF_MASK ); \
   } 

#define READ_RXFIFOHF() \
   ((READ_REGISTER_ULONG(0x34) & RXFIFOHF_MASK)  >> RXFIFOHF_START_BIT)

#define WHEN_RXFIFOHF_HIGH() \
     if ( READ_RXFIFOHF() )


#define UNLESS_RXFIFOHF_HIGH() \
     if (! READ_RXFIFOHF() )


#define WAIT_RXFIFOHF_LOW() \
    while ( READ_RXFIFOHF() );


#define WAIT_RXFIFOHF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFIFOHF() && (--___t___ > 0)); }


#define WAIT_RXFIFOHF_HIGH() \
    while (! READ_RXFIFOHF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO full 
    // 
#define TXFIFOF_MASK 0x10000U
#define TXFIFOF_OFFSET 16
#define TXFIFOF_START_BIT 16
#define TXFIFOF_WIDTH 1



typedef enum txfifof {
    TXFIFOF_0,
    TXFIFOF_1
} TXFIFOF_T ;
#define WRITE_TXFIFOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TXFIFOF_MASK) | ((val << TXFIFOF_START_BIT) & TXFIFOF_MASK )); \
   } 

#define ENABLE_TXFIFOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TXFIFOF_MASK ); \
   }

#define DISABLE_TXFIFOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TXFIFOF_MASK ); \
   } 

#define READ_TXFIFOF() \
   ((READ_REGISTER_ULONG(0x34) & TXFIFOF_MASK)  >> TXFIFOF_START_BIT)

#define WHEN_TXFIFOF_HIGH() \
     if ( READ_TXFIFOF() )


#define UNLESS_TXFIFOF_HIGH() \
     if (! READ_TXFIFOF() )


#define WAIT_TXFIFOF_LOW() \
    while ( READ_TXFIFOF() );


#define WAIT_TXFIFOF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOF() && (--___t___ > 0)); }


#define WAIT_TXFIFOF_HIGH() \
    while (! READ_TXFIFOF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive FIFO full 
    // 
#define RXFIFOF_MASK 0x20000U
#define RXFIFOF_OFFSET 17
#define RXFIFOF_START_BIT 17
#define RXFIFOF_WIDTH 1



typedef enum rxfifof {
    RXFIFOF_0,
    RXFIFOF_1
} RXFIFOF_T ;
#define WRITE_RXFIFOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RXFIFOF_MASK) | ((val << RXFIFOF_START_BIT) & RXFIFOF_MASK )); \
   } 

#define ENABLE_RXFIFOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RXFIFOF_MASK ); \
   }

#define DISABLE_RXFIFOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RXFIFOF_MASK ); \
   } 

#define READ_RXFIFOF() \
   ((READ_REGISTER_ULONG(0x34) & RXFIFOF_MASK)  >> RXFIFOF_START_BIT)

#define WHEN_RXFIFOF_HIGH() \
     if ( READ_RXFIFOF() )


#define UNLESS_RXFIFOF_HIGH() \
     if (! READ_RXFIFOF() )


#define WAIT_RXFIFOF_LOW() \
    while ( READ_RXFIFOF() );


#define WAIT_RXFIFOF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFIFOF() && (--___t___ > 0)); }


#define WAIT_RXFIFOF_HIGH() \
    while (! READ_RXFIFOF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFIFOE_MASK 0x40000U
#define TXFIFOE_OFFSET 18
#define TXFIFOE_START_BIT 18
#define TXFIFOE_WIDTH 1



typedef enum txfifoe {
    TXFIFOE_0,
    TXFIFOE_1
} TXFIFOE_T ;
#define WRITE_TXFIFOE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TXFIFOE_MASK) | ((val << TXFIFOE_START_BIT) & TXFIFOE_MASK )); \
   } 

#define ENABLE_TXFIFOE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TXFIFOE_MASK ); \
   }

#define DISABLE_TXFIFOE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TXFIFOE_MASK ); \
   } 

#define READ_TXFIFOE() \
   ((READ_REGISTER_ULONG(0x34) & TXFIFOE_MASK)  >> TXFIFOE_START_BIT)

#define WHEN_TXFIFOE_HIGH() \
     if ( READ_TXFIFOE() )


#define UNLESS_TXFIFOE_HIGH() \
     if (! READ_TXFIFOE() )


#define WAIT_TXFIFOE_LOW() \
    while ( READ_TXFIFOE() );


#define WAIT_TXFIFOE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOE() && (--___t___ > 0)); }


#define WAIT_TXFIFOE_HIGH() \
    while (! READ_TXFIFOE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive FIFO empty 
    // 
#define RXFIFOE_MASK 0x80000U
#define RXFIFOE_OFFSET 19
#define RXFIFOE_START_BIT 19
#define RXFIFOE_WIDTH 1



typedef enum rxfifoe {
    RXFIFOE_0,
    RXFIFOE_1
} RXFIFOE_T ;
#define WRITE_RXFIFOE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RXFIFOE_MASK) | ((val << RXFIFOE_START_BIT) & RXFIFOE_MASK )); \
   } 

#define ENABLE_RXFIFOE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RXFIFOE_MASK ); \
   }

#define DISABLE_RXFIFOE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RXFIFOE_MASK ); \
   } 

#define READ_RXFIFOE() \
   ((READ_REGISTER_ULONG(0x34) & RXFIFOE_MASK)  >> RXFIFOE_START_BIT)

#define WHEN_RXFIFOE_HIGH() \
     if ( READ_RXFIFOE() )


#define UNLESS_RXFIFOE_HIGH() \
     if (! READ_RXFIFOE() )


#define WAIT_RXFIFOE_LOW() \
    while ( READ_RXFIFOE() );


#define WAIT_RXFIFOE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFIFOE() && (--___t___ > 0)); }


#define WAIT_RXFIFOE_HIGH() \
    while (! READ_RXFIFOE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data available in transmit FIFO 
    // 
#define TXDAVL_MASK 0x100000U
#define TXDAVL_OFFSET 20
#define TXDAVL_START_BIT 20
#define TXDAVL_WIDTH 1



typedef enum txdavl {
    TXDAVL_0,
    TXDAVL_1
} TXDAVL_T ;
#define WRITE_TXDAVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ TXDAVL_MASK) | ((val << TXDAVL_START_BIT) & TXDAVL_MASK )); \
   } 

#define ENABLE_TXDAVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  TXDAVL_MASK ); \
   }

#define DISABLE_TXDAVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~TXDAVL_MASK ); \
   } 

#define READ_TXDAVL() \
   ((READ_REGISTER_ULONG(0x34) & TXDAVL_MASK)  >> TXDAVL_START_BIT)

#define WHEN_TXDAVL_HIGH() \
     if ( READ_TXDAVL() )


#define UNLESS_TXDAVL_HIGH() \
     if (! READ_TXDAVL() )


#define WAIT_TXDAVL_LOW() \
    while ( READ_TXDAVL() );


#define WAIT_TXDAVL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXDAVL() && (--___t___ > 0)); }


#define WAIT_TXDAVL_HIGH() \
    while (! READ_TXDAVL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data available in receive FIFO 
    // 
#define RXDAVL_MASK 0x200000U
#define RXDAVL_OFFSET 21
#define RXDAVL_START_BIT 21
#define RXDAVL_WIDTH 1



typedef enum rxdavl {
    RXDAVL_0,
    RXDAVL_1
} RXDAVL_T ;
#define WRITE_RXDAVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ RXDAVL_MASK) | ((val << RXDAVL_START_BIT) & RXDAVL_MASK )); \
   } 

#define ENABLE_RXDAVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  RXDAVL_MASK ); \
   }

#define DISABLE_RXDAVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~RXDAVL_MASK ); \
   } 

#define READ_RXDAVL() \
   ((READ_REGISTER_ULONG(0x34) & RXDAVL_MASK)  >> RXDAVL_START_BIT)

#define WHEN_RXDAVL_HIGH() \
     if ( READ_RXDAVL() )


#define UNLESS_RXDAVL_HIGH() \
     if (! READ_RXDAVL() )


#define WAIT_RXDAVL_LOW() \
    while ( READ_RXDAVL() );


#define WAIT_RXDAVL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXDAVL() && (--___t___ > 0)); }


#define WAIT_RXDAVL_HIGH() \
    while (! READ_RXDAVL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDIO interrupt received 
    // 
#define SDIOIT_MASK 0x400000U
#define SDIOIT_OFFSET 22
#define SDIOIT_START_BIT 22
#define SDIOIT_WIDTH 1



typedef enum sdioit {
    SDIOIT_0,
    SDIOIT_1
} SDIOIT_T ;
#define WRITE_SDIOIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ SDIOIT_MASK) | ((val << SDIOIT_START_BIT) & SDIOIT_MASK )); \
   } 

#define ENABLE_SDIOIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  SDIOIT_MASK ); \
   }

#define DISABLE_SDIOIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~SDIOIT_MASK ); \
   } 

#define READ_SDIOIT() \
   ((READ_REGISTER_ULONG(0x34) & SDIOIT_MASK)  >> SDIOIT_START_BIT)

#define WHEN_SDIOIT_HIGH() \
     if ( READ_SDIOIT() )


#define UNLESS_SDIOIT_HIGH() \
     if (! READ_SDIOIT() )


#define WAIT_SDIOIT_LOW() \
    while ( READ_SDIOIT() );


#define WAIT_SDIOIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDIOIT() && (--___t___ > 0)); }


#define WAIT_SDIOIT_HIGH() \
    while (! READ_SDIOIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sta
//
// Return the value of register STA
//
// Notes : Register status register (STA) at the offset 0x34, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CE-ATA command completion signal received for CMD61 
    // 
#define CEATAEND_MASK 0x800000U
#define CEATAEND_OFFSET 23
#define CEATAEND_START_BIT 23
#define CEATAEND_WIDTH 1



typedef enum ceataend {
    CEATAEND_0,
    CEATAEND_1
} CEATAEND_T ;
#define WRITE_CEATAEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CEATAEND_MASK) | ((val << CEATAEND_START_BIT) & CEATAEND_MASK )); \
   } 

#define ENABLE_CEATAEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  CEATAEND_MASK ); \
   }

#define DISABLE_CEATAEND() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~CEATAEND_MASK ); \
   } 

#define READ_CEATAEND() \
   ((READ_REGISTER_ULONG(0x34) & CEATAEND_MASK)  >> CEATAEND_START_BIT)

#define WHEN_CEATAEND_HIGH() \
     if ( READ_CEATAEND() )


#define UNLESS_CEATAEND_HIGH() \
     if (! READ_CEATAEND() )


#define WAIT_CEATAEND_LOW() \
    while ( READ_CEATAEND() );


#define WAIT_CEATAEND_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEATAEND() && (--___t___ > 0)); }


#define WAIT_CEATAEND_HIGH() \
    while (! READ_CEATAEND() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_ICR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_ICR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_ICR() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : CCRCFAILC
//
// Return the value of register Icr
//
// Notes : CCRCFAIL flag clear bit 
//        (ICR) at the offset 0x38, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CCRCFAILC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CCRCFAILC_MASK) | ((val << CCRCFAILC_START_BIT) & CCRCFAILC_MASK )); \
   } 

#define ENABLE_CCRCFAILC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  CCRCFAILC_MASK ); \
   }

#define DISABLE_CCRCFAILC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~CCRCFAILC_MASK ); \
   } 

#define READ_CCRCFAILC() \
   ((READ_REGISTER_ULONG(0x38) & CCRCFAILC_MASK)  >> CCRCFAILC_START_BIT)

#define WHEN_CCRCFAILC_HIGH() \
     if ( READ_CCRCFAILC() )


#define UNLESS_CCRCFAILC_HIGH() \
     if (! READ_CCRCFAILC() )


#define WAIT_CCRCFAILC_LOW() \
    while ( READ_CCRCFAILC() );


#define WAIT_CCRCFAILC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCRCFAILC() && (--___t___ > 0)); }


#define WAIT_CCRCFAILC_HIGH() \
    while (! READ_CCRCFAILC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DCRCFAILC
//
// Return the value of register Icr
//
// Notes : DCRCFAIL flag clear bit 
//        (ICR) at the offset 0x38, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DCRCFAILC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ DCRCFAILC_MASK) | ((val << DCRCFAILC_START_BIT) & DCRCFAILC_MASK )); \
   } 

#define ENABLE_DCRCFAILC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  DCRCFAILC_MASK ); \
   }

#define DISABLE_DCRCFAILC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~DCRCFAILC_MASK ); \
   } 

#define READ_DCRCFAILC() \
   ((READ_REGISTER_ULONG(0x38) & DCRCFAILC_MASK)  >> DCRCFAILC_START_BIT)

#define WHEN_DCRCFAILC_HIGH() \
     if ( READ_DCRCFAILC() )


#define UNLESS_DCRCFAILC_HIGH() \
     if (! READ_DCRCFAILC() )


#define WAIT_DCRCFAILC_LOW() \
    while ( READ_DCRCFAILC() );


#define WAIT_DCRCFAILC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCRCFAILC() && (--___t___ > 0)); }


#define WAIT_DCRCFAILC_HIGH() \
    while (! READ_DCRCFAILC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CTIMEOUTC
//
// Return the value of register Icr
//
// Notes : CTIMEOUT flag clear bit 
//        (ICR) at the offset 0x38, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTIMEOUTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CTIMEOUTC_MASK) | ((val << CTIMEOUTC_START_BIT) & CTIMEOUTC_MASK )); \
   } 

#define ENABLE_CTIMEOUTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  CTIMEOUTC_MASK ); \
   }

#define DISABLE_CTIMEOUTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~CTIMEOUTC_MASK ); \
   } 

#define READ_CTIMEOUTC() \
   ((READ_REGISTER_ULONG(0x38) & CTIMEOUTC_MASK)  >> CTIMEOUTC_START_BIT)

#define WHEN_CTIMEOUTC_HIGH() \
     if ( READ_CTIMEOUTC() )


#define UNLESS_CTIMEOUTC_HIGH() \
     if (! READ_CTIMEOUTC() )


#define WAIT_CTIMEOUTC_LOW() \
    while ( READ_CTIMEOUTC() );


#define WAIT_CTIMEOUTC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTIMEOUTC() && (--___t___ > 0)); }


#define WAIT_CTIMEOUTC_HIGH() \
    while (! READ_CTIMEOUTC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DTIMEOUTC
//
// Return the value of register Icr
//
// Notes : DTIMEOUT flag clear bit 
//        (ICR) at the offset 0x38, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DTIMEOUTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ DTIMEOUTC_MASK) | ((val << DTIMEOUTC_START_BIT) & DTIMEOUTC_MASK )); \
   } 

#define ENABLE_DTIMEOUTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  DTIMEOUTC_MASK ); \
   }

#define DISABLE_DTIMEOUTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~DTIMEOUTC_MASK ); \
   } 

#define READ_DTIMEOUTC() \
   ((READ_REGISTER_ULONG(0x38) & DTIMEOUTC_MASK)  >> DTIMEOUTC_START_BIT)

#define WHEN_DTIMEOUTC_HIGH() \
     if ( READ_DTIMEOUTC() )


#define UNLESS_DTIMEOUTC_HIGH() \
     if (! READ_DTIMEOUTC() )


#define WAIT_DTIMEOUTC_LOW() \
    while ( READ_DTIMEOUTC() );


#define WAIT_DTIMEOUTC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTIMEOUTC() && (--___t___ > 0)); }


#define WAIT_DTIMEOUTC_HIGH() \
    while (! READ_DTIMEOUTC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXUNDERRC
//
// Return the value of register Icr
//
// Notes : TXUNDERR flag clear bit 
//        (ICR) at the offset 0x38, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXUNDERRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ TXUNDERRC_MASK) | ((val << TXUNDERRC_START_BIT) & TXUNDERRC_MASK )); \
   } 

#define ENABLE_TXUNDERRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  TXUNDERRC_MASK ); \
   }

#define DISABLE_TXUNDERRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~TXUNDERRC_MASK ); \
   } 

#define READ_TXUNDERRC() \
   ((READ_REGISTER_ULONG(0x38) & TXUNDERRC_MASK)  >> TXUNDERRC_START_BIT)

#define WHEN_TXUNDERRC_HIGH() \
     if ( READ_TXUNDERRC() )


#define UNLESS_TXUNDERRC_HIGH() \
     if (! READ_TXUNDERRC() )


#define WAIT_TXUNDERRC_LOW() \
    while ( READ_TXUNDERRC() );


#define WAIT_TXUNDERRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXUNDERRC() && (--___t___ > 0)); }


#define WAIT_TXUNDERRC_HIGH() \
    while (! READ_TXUNDERRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXOVERRC
//
// Return the value of register Icr
//
// Notes : RXOVERR flag clear bit 
//        (ICR) at the offset 0x38, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXOVERRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ RXOVERRC_MASK) | ((val << RXOVERRC_START_BIT) & RXOVERRC_MASK )); \
   } 

#define ENABLE_RXOVERRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  RXOVERRC_MASK ); \
   }

#define DISABLE_RXOVERRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~RXOVERRC_MASK ); \
   } 

#define READ_RXOVERRC() \
   ((READ_REGISTER_ULONG(0x38) & RXOVERRC_MASK)  >> RXOVERRC_START_BIT)

#define WHEN_RXOVERRC_HIGH() \
     if ( READ_RXOVERRC() )


#define UNLESS_RXOVERRC_HIGH() \
     if (! READ_RXOVERRC() )


#define WAIT_RXOVERRC_LOW() \
    while ( READ_RXOVERRC() );


#define WAIT_RXOVERRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXOVERRC() && (--___t___ > 0)); }


#define WAIT_RXOVERRC_HIGH() \
    while (! READ_RXOVERRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CMDRENDC
//
// Return the value of register Icr
//
// Notes : CMDREND flag clear bit 
//        (ICR) at the offset 0x38, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CMDRENDC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CMDRENDC_MASK) | ((val << CMDRENDC_START_BIT) & CMDRENDC_MASK )); \
   } 

#define ENABLE_CMDRENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  CMDRENDC_MASK ); \
   }

#define DISABLE_CMDRENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~CMDRENDC_MASK ); \
   } 

#define READ_CMDRENDC() \
   ((READ_REGISTER_ULONG(0x38) & CMDRENDC_MASK)  >> CMDRENDC_START_BIT)

#define WHEN_CMDRENDC_HIGH() \
     if ( READ_CMDRENDC() )


#define UNLESS_CMDRENDC_HIGH() \
     if (! READ_CMDRENDC() )


#define WAIT_CMDRENDC_LOW() \
    while ( READ_CMDRENDC() );


#define WAIT_CMDRENDC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDRENDC() && (--___t___ > 0)); }


#define WAIT_CMDRENDC_HIGH() \
    while (! READ_CMDRENDC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CMDSENTC
//
// Return the value of register Icr
//
// Notes : CMDSENT flag clear bit 
//        (ICR) at the offset 0x38, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CMDSENTC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CMDSENTC_MASK) | ((val << CMDSENTC_START_BIT) & CMDSENTC_MASK )); \
   } 

#define ENABLE_CMDSENTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  CMDSENTC_MASK ); \
   }

#define DISABLE_CMDSENTC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~CMDSENTC_MASK ); \
   } 

#define READ_CMDSENTC() \
   ((READ_REGISTER_ULONG(0x38) & CMDSENTC_MASK)  >> CMDSENTC_START_BIT)

#define WHEN_CMDSENTC_HIGH() \
     if ( READ_CMDSENTC() )


#define UNLESS_CMDSENTC_HIGH() \
     if (! READ_CMDSENTC() )


#define WAIT_CMDSENTC_LOW() \
    while ( READ_CMDSENTC() );


#define WAIT_CMDSENTC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDSENTC() && (--___t___ > 0)); }


#define WAIT_CMDSENTC_HIGH() \
    while (! READ_CMDSENTC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DATAENDC
//
// Return the value of register Icr
//
// Notes : DATAEND flag clear bit 
//        (ICR) at the offset 0x38, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DATAENDC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ DATAENDC_MASK) | ((val << DATAENDC_START_BIT) & DATAENDC_MASK )); \
   } 

#define ENABLE_DATAENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  DATAENDC_MASK ); \
   }

#define DISABLE_DATAENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~DATAENDC_MASK ); \
   } 

#define READ_DATAENDC() \
   ((READ_REGISTER_ULONG(0x38) & DATAENDC_MASK)  >> DATAENDC_START_BIT)

#define WHEN_DATAENDC_HIGH() \
     if ( READ_DATAENDC() )


#define UNLESS_DATAENDC_HIGH() \
     if (! READ_DATAENDC() )


#define WAIT_DATAENDC_LOW() \
    while ( READ_DATAENDC() );


#define WAIT_DATAENDC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DATAENDC() && (--___t___ > 0)); }


#define WAIT_DATAENDC_HIGH() \
    while (! READ_DATAENDC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : STBITERRC
//
// Return the value of register Icr
//
// Notes : STBITERR flag clear bit 
//        (ICR) at the offset 0x38, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STBITERRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ STBITERRC_MASK) | ((val << STBITERRC_START_BIT) & STBITERRC_MASK )); \
   } 

#define ENABLE_STBITERRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  STBITERRC_MASK ); \
   }

#define DISABLE_STBITERRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~STBITERRC_MASK ); \
   } 

#define READ_STBITERRC() \
   ((READ_REGISTER_ULONG(0x38) & STBITERRC_MASK)  >> STBITERRC_START_BIT)

#define WHEN_STBITERRC_HIGH() \
     if ( READ_STBITERRC() )


#define UNLESS_STBITERRC_HIGH() \
     if (! READ_STBITERRC() )


#define WAIT_STBITERRC_LOW() \
    while ( READ_STBITERRC() );


#define WAIT_STBITERRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STBITERRC() && (--___t___ > 0)); }


#define WAIT_STBITERRC_HIGH() \
    while (! READ_STBITERRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DBCKENDC
//
// Return the value of register Icr
//
// Notes : DBCKEND flag clear bit 
//        (ICR) at the offset 0x38, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DBCKENDC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ DBCKENDC_MASK) | ((val << DBCKENDC_START_BIT) & DBCKENDC_MASK )); \
   } 

#define ENABLE_DBCKENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  DBCKENDC_MASK ); \
   }

#define DISABLE_DBCKENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~DBCKENDC_MASK ); \
   } 

#define READ_DBCKENDC() \
   ((READ_REGISTER_ULONG(0x38) & DBCKENDC_MASK)  >> DBCKENDC_START_BIT)

#define WHEN_DBCKENDC_HIGH() \
     if ( READ_DBCKENDC() )


#define UNLESS_DBCKENDC_HIGH() \
     if (! READ_DBCKENDC() )


#define WAIT_DBCKENDC_LOW() \
    while ( READ_DBCKENDC() );


#define WAIT_DBCKENDC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBCKENDC() && (--___t___ > 0)); }


#define WAIT_DBCKENDC_HIGH() \
    while (! READ_DBCKENDC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SDIOITC
//
// Return the value of register Icr
//
// Notes : SDIOIT flag clear bit 
//        (ICR) at the offset 0x38, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SDIOITC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ SDIOITC_MASK) | ((val << SDIOITC_START_BIT) & SDIOITC_MASK )); \
   } 

#define ENABLE_SDIOITC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  SDIOITC_MASK ); \
   }

#define DISABLE_SDIOITC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~SDIOITC_MASK ); \
   } 

#define READ_SDIOITC() \
   ((READ_REGISTER_ULONG(0x38) & SDIOITC_MASK)  >> SDIOITC_START_BIT)

#define WHEN_SDIOITC_HIGH() \
     if ( READ_SDIOITC() )


#define UNLESS_SDIOITC_HIGH() \
     if (! READ_SDIOITC() )


#define WAIT_SDIOITC_LOW() \
    while ( READ_SDIOITC() );


#define WAIT_SDIOITC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDIOITC() && (--___t___ > 0)); }


#define WAIT_SDIOITC_HIGH() \
    while (! READ_SDIOITC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CEATAENDC
//
// Return the value of register Icr
//
// Notes : CEATAEND flag clear bit 
//        (ICR) at the offset 0x38, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CEATAENDC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ CEATAENDC_MASK) | ((val << CEATAENDC_START_BIT) & CEATAENDC_MASK )); \
   } 

#define ENABLE_CEATAENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  CEATAENDC_MASK ); \
   }

#define DISABLE_CEATAENDC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~CEATAENDC_MASK ); \
   } 

#define READ_CEATAENDC() \
   ((READ_REGISTER_ULONG(0x38) & CEATAENDC_MASK)  >> CEATAENDC_START_BIT)

#define WHEN_CEATAENDC_HIGH() \
     if ( READ_CEATAENDC() )


#define UNLESS_CEATAENDC_HIGH() \
     if (! READ_CEATAENDC() )


#define WAIT_CEATAENDC_LOW() \
    while ( READ_CEATAENDC() );


#define WAIT_CEATAENDC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEATAENDC() && (--___t___ > 0)); }


#define WAIT_CEATAENDC_HIGH() \
    while (! READ_CEATAENDC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register Mask at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MASK( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_MASK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_MASK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_MASK() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command CRC fail interrupt enable 
    // 
#define CCRCFAILIE_MASK 0x1U
#define CCRCFAILIE_OFFSET 0
#define CCRCFAILIE_START_BIT 0
#define CCRCFAILIE_WIDTH 1


#define MASK_REG 0x3C

typedef enum ccrcfailie {
    CCRCFAILIE_0,
    CCRCFAILIE_1
} CCRCFAILIE_T ;
#define WRITE_CCRCFAILIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CCRCFAILIE_MASK) | ((val << CCRCFAILIE_START_BIT) & CCRCFAILIE_MASK )); \
   } 

#define ENABLE_CCRCFAILIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CCRCFAILIE_MASK ); \
   }

#define DISABLE_CCRCFAILIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CCRCFAILIE_MASK ); \
   } 

#define READ_CCRCFAILIE() \
   ((READ_REGISTER_ULONG(0x3C) & CCRCFAILIE_MASK)  >> CCRCFAILIE_START_BIT)

#define WHEN_CCRCFAILIE_HIGH() \
     if ( READ_CCRCFAILIE() )


#define UNLESS_CCRCFAILIE_HIGH() \
     if (! READ_CCRCFAILIE() )


#define WAIT_CCRCFAILIE_LOW() \
    while ( READ_CCRCFAILIE() );


#define WAIT_CCRCFAILIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCRCFAILIE() && (--___t___ > 0)); }


#define WAIT_CCRCFAILIE_HIGH() \
    while (! READ_CCRCFAILIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data CRC fail interrupt enable 
    // 
#define DCRCFAILIE_MASK 0x2U
#define DCRCFAILIE_OFFSET 1
#define DCRCFAILIE_START_BIT 1
#define DCRCFAILIE_WIDTH 1



typedef enum dcrcfailie {
    DCRCFAILIE_0,
    DCRCFAILIE_1
} DCRCFAILIE_T ;
#define WRITE_DCRCFAILIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ DCRCFAILIE_MASK) | ((val << DCRCFAILIE_START_BIT) & DCRCFAILIE_MASK )); \
   } 

#define ENABLE_DCRCFAILIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  DCRCFAILIE_MASK ); \
   }

#define DISABLE_DCRCFAILIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~DCRCFAILIE_MASK ); \
   } 

#define READ_DCRCFAILIE() \
   ((READ_REGISTER_ULONG(0x3C) & DCRCFAILIE_MASK)  >> DCRCFAILIE_START_BIT)

#define WHEN_DCRCFAILIE_HIGH() \
     if ( READ_DCRCFAILIE() )


#define UNLESS_DCRCFAILIE_HIGH() \
     if (! READ_DCRCFAILIE() )


#define WAIT_DCRCFAILIE_LOW() \
    while ( READ_DCRCFAILIE() );


#define WAIT_DCRCFAILIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCRCFAILIE() && (--___t___ > 0)); }


#define WAIT_DCRCFAILIE_HIGH() \
    while (! READ_DCRCFAILIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command timeout interrupt enable 
    // 
#define CTIMEOUTIE_MASK 0x4U
#define CTIMEOUTIE_OFFSET 2
#define CTIMEOUTIE_START_BIT 2
#define CTIMEOUTIE_WIDTH 1



typedef enum ctimeoutie {
    CTIMEOUTIE_0,
    CTIMEOUTIE_1
} CTIMEOUTIE_T ;
#define WRITE_CTIMEOUTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CTIMEOUTIE_MASK) | ((val << CTIMEOUTIE_START_BIT) & CTIMEOUTIE_MASK )); \
   } 

#define ENABLE_CTIMEOUTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CTIMEOUTIE_MASK ); \
   }

#define DISABLE_CTIMEOUTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CTIMEOUTIE_MASK ); \
   } 

#define READ_CTIMEOUTIE() \
   ((READ_REGISTER_ULONG(0x3C) & CTIMEOUTIE_MASK)  >> CTIMEOUTIE_START_BIT)

#define WHEN_CTIMEOUTIE_HIGH() \
     if ( READ_CTIMEOUTIE() )


#define UNLESS_CTIMEOUTIE_HIGH() \
     if (! READ_CTIMEOUTIE() )


#define WAIT_CTIMEOUTIE_LOW() \
    while ( READ_CTIMEOUTIE() );


#define WAIT_CTIMEOUTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTIMEOUTIE() && (--___t___ > 0)); }


#define WAIT_CTIMEOUTIE_HIGH() \
    while (! READ_CTIMEOUTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data timeout interrupt enable 
    // 
#define DTIMEOUTIE_MASK 0x8U
#define DTIMEOUTIE_OFFSET 3
#define DTIMEOUTIE_START_BIT 3
#define DTIMEOUTIE_WIDTH 1



typedef enum dtimeoutie {
    DTIMEOUTIE_0,
    DTIMEOUTIE_1
} DTIMEOUTIE_T ;
#define WRITE_DTIMEOUTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ DTIMEOUTIE_MASK) | ((val << DTIMEOUTIE_START_BIT) & DTIMEOUTIE_MASK )); \
   } 

#define ENABLE_DTIMEOUTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  DTIMEOUTIE_MASK ); \
   }

#define DISABLE_DTIMEOUTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~DTIMEOUTIE_MASK ); \
   } 

#define READ_DTIMEOUTIE() \
   ((READ_REGISTER_ULONG(0x3C) & DTIMEOUTIE_MASK)  >> DTIMEOUTIE_START_BIT)

#define WHEN_DTIMEOUTIE_HIGH() \
     if ( READ_DTIMEOUTIE() )


#define UNLESS_DTIMEOUTIE_HIGH() \
     if (! READ_DTIMEOUTIE() )


#define WAIT_DTIMEOUTIE_LOW() \
    while ( READ_DTIMEOUTIE() );


#define WAIT_DTIMEOUTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DTIMEOUTIE() && (--___t___ > 0)); }


#define WAIT_DTIMEOUTIE_HIGH() \
    while (! READ_DTIMEOUTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tx FIFO underrun error interrupt enable 
    // 
#define TXUNDERRIE_MASK 0x10U
#define TXUNDERRIE_OFFSET 4
#define TXUNDERRIE_START_BIT 4
#define TXUNDERRIE_WIDTH 1



typedef enum txunderrie {
    TXUNDERRIE_0,
    TXUNDERRIE_1
} TXUNDERRIE_T ;
#define WRITE_TXUNDERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TXUNDERRIE_MASK) | ((val << TXUNDERRIE_START_BIT) & TXUNDERRIE_MASK )); \
   } 

#define ENABLE_TXUNDERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TXUNDERRIE_MASK ); \
   }

#define DISABLE_TXUNDERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TXUNDERRIE_MASK ); \
   } 

#define READ_TXUNDERRIE() \
   ((READ_REGISTER_ULONG(0x3C) & TXUNDERRIE_MASK)  >> TXUNDERRIE_START_BIT)

#define WHEN_TXUNDERRIE_HIGH() \
     if ( READ_TXUNDERRIE() )


#define UNLESS_TXUNDERRIE_HIGH() \
     if (! READ_TXUNDERRIE() )


#define WAIT_TXUNDERRIE_LOW() \
    while ( READ_TXUNDERRIE() );


#define WAIT_TXUNDERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXUNDERRIE() && (--___t___ > 0)); }


#define WAIT_TXUNDERRIE_HIGH() \
    while (! READ_TXUNDERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rx FIFO overrun error interrupt enable 
    // 
#define RXOVERRIE_MASK 0x20U
#define RXOVERRIE_OFFSET 5
#define RXOVERRIE_START_BIT 5
#define RXOVERRIE_WIDTH 1



typedef enum rxoverrie {
    RXOVERRIE_0,
    RXOVERRIE_1
} RXOVERRIE_T ;
#define WRITE_RXOVERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ RXOVERRIE_MASK) | ((val << RXOVERRIE_START_BIT) & RXOVERRIE_MASK )); \
   } 

#define ENABLE_RXOVERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  RXOVERRIE_MASK ); \
   }

#define DISABLE_RXOVERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~RXOVERRIE_MASK ); \
   } 

#define READ_RXOVERRIE() \
   ((READ_REGISTER_ULONG(0x3C) & RXOVERRIE_MASK)  >> RXOVERRIE_START_BIT)

#define WHEN_RXOVERRIE_HIGH() \
     if ( READ_RXOVERRIE() )


#define UNLESS_RXOVERRIE_HIGH() \
     if (! READ_RXOVERRIE() )


#define WAIT_RXOVERRIE_LOW() \
    while ( READ_RXOVERRIE() );


#define WAIT_RXOVERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXOVERRIE() && (--___t___ > 0)); }


#define WAIT_RXOVERRIE_HIGH() \
    while (! READ_RXOVERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command response received interrupt enable 
    // 
#define CMDRENDIE_MASK 0x40U
#define CMDRENDIE_OFFSET 6
#define CMDRENDIE_START_BIT 6
#define CMDRENDIE_WIDTH 1



typedef enum cmdrendie {
    CMDRENDIE_0,
    CMDRENDIE_1
} CMDRENDIE_T ;
#define WRITE_CMDRENDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CMDRENDIE_MASK) | ((val << CMDRENDIE_START_BIT) & CMDRENDIE_MASK )); \
   } 

#define ENABLE_CMDRENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CMDRENDIE_MASK ); \
   }

#define DISABLE_CMDRENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CMDRENDIE_MASK ); \
   } 

#define READ_CMDRENDIE() \
   ((READ_REGISTER_ULONG(0x3C) & CMDRENDIE_MASK)  >> CMDRENDIE_START_BIT)

#define WHEN_CMDRENDIE_HIGH() \
     if ( READ_CMDRENDIE() )


#define UNLESS_CMDRENDIE_HIGH() \
     if (! READ_CMDRENDIE() )


#define WAIT_CMDRENDIE_LOW() \
    while ( READ_CMDRENDIE() );


#define WAIT_CMDRENDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDRENDIE() && (--___t___ > 0)); }


#define WAIT_CMDRENDIE_HIGH() \
    while (! READ_CMDRENDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command sent interrupt enable 
    // 
#define CMDSENTIE_MASK 0x80U
#define CMDSENTIE_OFFSET 7
#define CMDSENTIE_START_BIT 7
#define CMDSENTIE_WIDTH 1



typedef enum cmdsentie {
    CMDSENTIE_0,
    CMDSENTIE_1
} CMDSENTIE_T ;
#define WRITE_CMDSENTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CMDSENTIE_MASK) | ((val << CMDSENTIE_START_BIT) & CMDSENTIE_MASK )); \
   } 

#define ENABLE_CMDSENTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CMDSENTIE_MASK ); \
   }

#define DISABLE_CMDSENTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CMDSENTIE_MASK ); \
   } 

#define READ_CMDSENTIE() \
   ((READ_REGISTER_ULONG(0x3C) & CMDSENTIE_MASK)  >> CMDSENTIE_START_BIT)

#define WHEN_CMDSENTIE_HIGH() \
     if ( READ_CMDSENTIE() )


#define UNLESS_CMDSENTIE_HIGH() \
     if (! READ_CMDSENTIE() )


#define WAIT_CMDSENTIE_LOW() \
    while ( READ_CMDSENTIE() );


#define WAIT_CMDSENTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDSENTIE() && (--___t___ > 0)); }


#define WAIT_CMDSENTIE_HIGH() \
    while (! READ_CMDSENTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data end interrupt enable 
    // 
#define DATAENDIE_MASK 0x100U
#define DATAENDIE_OFFSET 8
#define DATAENDIE_START_BIT 8
#define DATAENDIE_WIDTH 1



typedef enum dataendie {
    DATAENDIE_0,
    DATAENDIE_1
} DATAENDIE_T ;
#define WRITE_DATAENDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ DATAENDIE_MASK) | ((val << DATAENDIE_START_BIT) & DATAENDIE_MASK )); \
   } 

#define ENABLE_DATAENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  DATAENDIE_MASK ); \
   }

#define DISABLE_DATAENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~DATAENDIE_MASK ); \
   } 

#define READ_DATAENDIE() \
   ((READ_REGISTER_ULONG(0x3C) & DATAENDIE_MASK)  >> DATAENDIE_START_BIT)

#define WHEN_DATAENDIE_HIGH() \
     if ( READ_DATAENDIE() )


#define UNLESS_DATAENDIE_HIGH() \
     if (! READ_DATAENDIE() )


#define WAIT_DATAENDIE_LOW() \
    while ( READ_DATAENDIE() );


#define WAIT_DATAENDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DATAENDIE() && (--___t___ > 0)); }


#define WAIT_DATAENDIE_HIGH() \
    while (! READ_DATAENDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start bit error interrupt enable 
    // 
#define STBITERRIE_MASK 0x200U
#define STBITERRIE_OFFSET 9
#define STBITERRIE_START_BIT 9
#define STBITERRIE_WIDTH 1



typedef enum stbiterrie {
    STBITERRIE_0,
    STBITERRIE_1
} STBITERRIE_T ;
#define WRITE_STBITERRIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ STBITERRIE_MASK) | ((val << STBITERRIE_START_BIT) & STBITERRIE_MASK )); \
   } 

#define ENABLE_STBITERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  STBITERRIE_MASK ); \
   }

#define DISABLE_STBITERRIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~STBITERRIE_MASK ); \
   } 

#define READ_STBITERRIE() \
   ((READ_REGISTER_ULONG(0x3C) & STBITERRIE_MASK)  >> STBITERRIE_START_BIT)

#define WHEN_STBITERRIE_HIGH() \
     if ( READ_STBITERRIE() )


#define UNLESS_STBITERRIE_HIGH() \
     if (! READ_STBITERRIE() )


#define WAIT_STBITERRIE_LOW() \
    while ( READ_STBITERRIE() );


#define WAIT_STBITERRIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STBITERRIE() && (--___t___ > 0)); }


#define WAIT_STBITERRIE_HIGH() \
    while (! READ_STBITERRIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data block end interrupt enable 
    // 
#define DBCKENDIE_MASK 0x400U
#define DBCKENDIE_OFFSET 10
#define DBCKENDIE_START_BIT 10
#define DBCKENDIE_WIDTH 1



typedef enum dbckendie {
    DBCKENDIE_0,
    DBCKENDIE_1
} DBCKENDIE_T ;
#define WRITE_DBCKENDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ DBCKENDIE_MASK) | ((val << DBCKENDIE_START_BIT) & DBCKENDIE_MASK )); \
   } 

#define ENABLE_DBCKENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  DBCKENDIE_MASK ); \
   }

#define DISABLE_DBCKENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~DBCKENDIE_MASK ); \
   } 

#define READ_DBCKENDIE() \
   ((READ_REGISTER_ULONG(0x3C) & DBCKENDIE_MASK)  >> DBCKENDIE_START_BIT)

#define WHEN_DBCKENDIE_HIGH() \
     if ( READ_DBCKENDIE() )


#define UNLESS_DBCKENDIE_HIGH() \
     if (! READ_DBCKENDIE() )


#define WAIT_DBCKENDIE_LOW() \
    while ( READ_DBCKENDIE() );


#define WAIT_DBCKENDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBCKENDIE() && (--___t___ > 0)); }


#define WAIT_DBCKENDIE_HIGH() \
    while (! READ_DBCKENDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command acting interrupt enable 
    // 
#define CMDACTIE_MASK 0x800U
#define CMDACTIE_OFFSET 11
#define CMDACTIE_START_BIT 11
#define CMDACTIE_WIDTH 1



typedef enum cmdactie {
    CMDACTIE_0,
    CMDACTIE_1
} CMDACTIE_T ;
#define WRITE_CMDACTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CMDACTIE_MASK) | ((val << CMDACTIE_START_BIT) & CMDACTIE_MASK )); \
   } 

#define ENABLE_CMDACTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CMDACTIE_MASK ); \
   }

#define DISABLE_CMDACTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CMDACTIE_MASK ); \
   } 

#define READ_CMDACTIE() \
   ((READ_REGISTER_ULONG(0x3C) & CMDACTIE_MASK)  >> CMDACTIE_START_BIT)

#define WHEN_CMDACTIE_HIGH() \
     if ( READ_CMDACTIE() )


#define UNLESS_CMDACTIE_HIGH() \
     if (! READ_CMDACTIE() )


#define WAIT_CMDACTIE_LOW() \
    while ( READ_CMDACTIE() );


#define WAIT_CMDACTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMDACTIE() && (--___t___ > 0)); }


#define WAIT_CMDACTIE_HIGH() \
    while (! READ_CMDACTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transmit acting interrupt enable 
    // 
#define TXACTIE_MASK 0x1000U
#define TXACTIE_OFFSET 12
#define TXACTIE_START_BIT 12
#define TXACTIE_WIDTH 1



typedef enum txactie {
    TXACTIE_0,
    TXACTIE_1
} TXACTIE_T ;
#define WRITE_TXACTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TXACTIE_MASK) | ((val << TXACTIE_START_BIT) & TXACTIE_MASK )); \
   } 

#define ENABLE_TXACTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TXACTIE_MASK ); \
   }

#define DISABLE_TXACTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TXACTIE_MASK ); \
   } 

#define READ_TXACTIE() \
   ((READ_REGISTER_ULONG(0x3C) & TXACTIE_MASK)  >> TXACTIE_START_BIT)

#define WHEN_TXACTIE_HIGH() \
     if ( READ_TXACTIE() )


#define UNLESS_TXACTIE_HIGH() \
     if (! READ_TXACTIE() )


#define WAIT_TXACTIE_LOW() \
    while ( READ_TXACTIE() );


#define WAIT_TXACTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXACTIE() && (--___t___ > 0)); }


#define WAIT_TXACTIE_HIGH() \
    while (! READ_TXACTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data receive acting interrupt enable 
    // 
#define RXACTIE_MASK 0x2000U
#define RXACTIE_OFFSET 13
#define RXACTIE_START_BIT 13
#define RXACTIE_WIDTH 1



typedef enum rxactie {
    RXACTIE_0,
    RXACTIE_1
} RXACTIE_T ;
#define WRITE_RXACTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ RXACTIE_MASK) | ((val << RXACTIE_START_BIT) & RXACTIE_MASK )); \
   } 

#define ENABLE_RXACTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  RXACTIE_MASK ); \
   }

#define DISABLE_RXACTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~RXACTIE_MASK ); \
   } 

#define READ_RXACTIE() \
   ((READ_REGISTER_ULONG(0x3C) & RXACTIE_MASK)  >> RXACTIE_START_BIT)

#define WHEN_RXACTIE_HIGH() \
     if ( READ_RXACTIE() )


#define UNLESS_RXACTIE_HIGH() \
     if (! READ_RXACTIE() )


#define WAIT_RXACTIE_LOW() \
    while ( READ_RXACTIE() );


#define WAIT_RXACTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXACTIE() && (--___t___ > 0)); }


#define WAIT_RXACTIE_HIGH() \
    while (! READ_RXACTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tx FIFO half empty interrupt enable 
    // 
#define TXFIFOHEIE_MASK 0x4000U
#define TXFIFOHEIE_OFFSET 14
#define TXFIFOHEIE_START_BIT 14
#define TXFIFOHEIE_WIDTH 1



typedef enum txfifoheie {
    TXFIFOHEIE_0,
    TXFIFOHEIE_1
} TXFIFOHEIE_T ;
#define WRITE_TXFIFOHEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TXFIFOHEIE_MASK) | ((val << TXFIFOHEIE_START_BIT) & TXFIFOHEIE_MASK )); \
   } 

#define ENABLE_TXFIFOHEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TXFIFOHEIE_MASK ); \
   }

#define DISABLE_TXFIFOHEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TXFIFOHEIE_MASK ); \
   } 

#define READ_TXFIFOHEIE() \
   ((READ_REGISTER_ULONG(0x3C) & TXFIFOHEIE_MASK)  >> TXFIFOHEIE_START_BIT)

#define WHEN_TXFIFOHEIE_HIGH() \
     if ( READ_TXFIFOHEIE() )


#define UNLESS_TXFIFOHEIE_HIGH() \
     if (! READ_TXFIFOHEIE() )


#define WAIT_TXFIFOHEIE_LOW() \
    while ( READ_TXFIFOHEIE() );


#define WAIT_TXFIFOHEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOHEIE() && (--___t___ > 0)); }


#define WAIT_TXFIFOHEIE_HIGH() \
    while (! READ_TXFIFOHEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rx FIFO half full interrupt enable 
    // 
#define RXFIFOHFIE_MASK 0x8000U
#define RXFIFOHFIE_OFFSET 15
#define RXFIFOHFIE_START_BIT 15
#define RXFIFOHFIE_WIDTH 1



typedef enum rxfifohfie {
    RXFIFOHFIE_0,
    RXFIFOHFIE_1
} RXFIFOHFIE_T ;
#define WRITE_RXFIFOHFIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ RXFIFOHFIE_MASK) | ((val << RXFIFOHFIE_START_BIT) & RXFIFOHFIE_MASK )); \
   } 

#define ENABLE_RXFIFOHFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  RXFIFOHFIE_MASK ); \
   }

#define DISABLE_RXFIFOHFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~RXFIFOHFIE_MASK ); \
   } 

#define READ_RXFIFOHFIE() \
   ((READ_REGISTER_ULONG(0x3C) & RXFIFOHFIE_MASK)  >> RXFIFOHFIE_START_BIT)

#define WHEN_RXFIFOHFIE_HIGH() \
     if ( READ_RXFIFOHFIE() )


#define UNLESS_RXFIFOHFIE_HIGH() \
     if (! READ_RXFIFOHFIE() )


#define WAIT_RXFIFOHFIE_LOW() \
    while ( READ_RXFIFOHFIE() );


#define WAIT_RXFIFOHFIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFIFOHFIE() && (--___t___ > 0)); }


#define WAIT_RXFIFOHFIE_HIGH() \
    while (! READ_RXFIFOHFIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tx FIFO full interrupt enable 
    // 
#define TXFIFOFIE_MASK 0x10000U
#define TXFIFOFIE_OFFSET 16
#define TXFIFOFIE_START_BIT 16
#define TXFIFOFIE_WIDTH 1



typedef enum txfifofie {
    TXFIFOFIE_0,
    TXFIFOFIE_1
} TXFIFOFIE_T ;
#define WRITE_TXFIFOFIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TXFIFOFIE_MASK) | ((val << TXFIFOFIE_START_BIT) & TXFIFOFIE_MASK )); \
   } 

#define ENABLE_TXFIFOFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TXFIFOFIE_MASK ); \
   }

#define DISABLE_TXFIFOFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TXFIFOFIE_MASK ); \
   } 

#define READ_TXFIFOFIE() \
   ((READ_REGISTER_ULONG(0x3C) & TXFIFOFIE_MASK)  >> TXFIFOFIE_START_BIT)

#define WHEN_TXFIFOFIE_HIGH() \
     if ( READ_TXFIFOFIE() )


#define UNLESS_TXFIFOFIE_HIGH() \
     if (! READ_TXFIFOFIE() )


#define WAIT_TXFIFOFIE_LOW() \
    while ( READ_TXFIFOFIE() );


#define WAIT_TXFIFOFIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOFIE() && (--___t___ > 0)); }


#define WAIT_TXFIFOFIE_HIGH() \
    while (! READ_TXFIFOFIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rx FIFO full interrupt enable 
    // 
#define RXFIFOFIE_MASK 0x20000U
#define RXFIFOFIE_OFFSET 17
#define RXFIFOFIE_START_BIT 17
#define RXFIFOFIE_WIDTH 1



typedef enum rxfifofie {
    RXFIFOFIE_0,
    RXFIFOFIE_1
} RXFIFOFIE_T ;
#define WRITE_RXFIFOFIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ RXFIFOFIE_MASK) | ((val << RXFIFOFIE_START_BIT) & RXFIFOFIE_MASK )); \
   } 

#define ENABLE_RXFIFOFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  RXFIFOFIE_MASK ); \
   }

#define DISABLE_RXFIFOFIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~RXFIFOFIE_MASK ); \
   } 

#define READ_RXFIFOFIE() \
   ((READ_REGISTER_ULONG(0x3C) & RXFIFOFIE_MASK)  >> RXFIFOFIE_START_BIT)

#define WHEN_RXFIFOFIE_HIGH() \
     if ( READ_RXFIFOFIE() )


#define UNLESS_RXFIFOFIE_HIGH() \
     if (! READ_RXFIFOFIE() )


#define WAIT_RXFIFOFIE_LOW() \
    while ( READ_RXFIFOFIE() );


#define WAIT_RXFIFOFIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFIFOFIE() && (--___t___ > 0)); }


#define WAIT_RXFIFOFIE_HIGH() \
    while (! READ_RXFIFOFIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tx FIFO empty interrupt enable 
    // 
#define TXFIFOEIE_MASK 0x40000U
#define TXFIFOEIE_OFFSET 18
#define TXFIFOEIE_START_BIT 18
#define TXFIFOEIE_WIDTH 1



typedef enum txfifoeie {
    TXFIFOEIE_0,
    TXFIFOEIE_1
} TXFIFOEIE_T ;
#define WRITE_TXFIFOEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TXFIFOEIE_MASK) | ((val << TXFIFOEIE_START_BIT) & TXFIFOEIE_MASK )); \
   } 

#define ENABLE_TXFIFOEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TXFIFOEIE_MASK ); \
   }

#define DISABLE_TXFIFOEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TXFIFOEIE_MASK ); \
   } 

#define READ_TXFIFOEIE() \
   ((READ_REGISTER_ULONG(0x3C) & TXFIFOEIE_MASK)  >> TXFIFOEIE_START_BIT)

#define WHEN_TXFIFOEIE_HIGH() \
     if ( READ_TXFIFOEIE() )


#define UNLESS_TXFIFOEIE_HIGH() \
     if (! READ_TXFIFOEIE() )


#define WAIT_TXFIFOEIE_LOW() \
    while ( READ_TXFIFOEIE() );


#define WAIT_TXFIFOEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOEIE() && (--___t___ > 0)); }


#define WAIT_TXFIFOEIE_HIGH() \
    while (! READ_TXFIFOEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rx FIFO empty interrupt enable 
    // 
#define RXFIFOEIE_MASK 0x80000U
#define RXFIFOEIE_OFFSET 19
#define RXFIFOEIE_START_BIT 19
#define RXFIFOEIE_WIDTH 1



typedef enum rxfifoeie {
    RXFIFOEIE_0,
    RXFIFOEIE_1
} RXFIFOEIE_T ;
#define WRITE_RXFIFOEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ RXFIFOEIE_MASK) | ((val << RXFIFOEIE_START_BIT) & RXFIFOEIE_MASK )); \
   } 

#define ENABLE_RXFIFOEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  RXFIFOEIE_MASK ); \
   }

#define DISABLE_RXFIFOEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~RXFIFOEIE_MASK ); \
   } 

#define READ_RXFIFOEIE() \
   ((READ_REGISTER_ULONG(0x3C) & RXFIFOEIE_MASK)  >> RXFIFOEIE_START_BIT)

#define WHEN_RXFIFOEIE_HIGH() \
     if ( READ_RXFIFOEIE() )


#define UNLESS_RXFIFOEIE_HIGH() \
     if (! READ_RXFIFOEIE() )


#define WAIT_RXFIFOEIE_LOW() \
    while ( READ_RXFIFOEIE() );


#define WAIT_RXFIFOEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFIFOEIE() && (--___t___ > 0)); }


#define WAIT_RXFIFOEIE_HIGH() \
    while (! READ_RXFIFOEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data available in Tx FIFO interrupt enable 
    // 
#define TXDAVLIE_MASK 0x100000U
#define TXDAVLIE_OFFSET 20
#define TXDAVLIE_START_BIT 20
#define TXDAVLIE_WIDTH 1



typedef enum txdavlie {
    TXDAVLIE_0,
    TXDAVLIE_1
} TXDAVLIE_T ;
#define WRITE_TXDAVLIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ TXDAVLIE_MASK) | ((val << TXDAVLIE_START_BIT) & TXDAVLIE_MASK )); \
   } 

#define ENABLE_TXDAVLIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  TXDAVLIE_MASK ); \
   }

#define DISABLE_TXDAVLIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~TXDAVLIE_MASK ); \
   } 

#define READ_TXDAVLIE() \
   ((READ_REGISTER_ULONG(0x3C) & TXDAVLIE_MASK)  >> TXDAVLIE_START_BIT)

#define WHEN_TXDAVLIE_HIGH() \
     if ( READ_TXDAVLIE() )


#define UNLESS_TXDAVLIE_HIGH() \
     if (! READ_TXDAVLIE() )


#define WAIT_TXDAVLIE_LOW() \
    while ( READ_TXDAVLIE() );


#define WAIT_TXDAVLIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXDAVLIE() && (--___t___ > 0)); }


#define WAIT_TXDAVLIE_HIGH() \
    while (! READ_TXDAVLIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data available in Rx FIFO interrupt enable 
    // 
#define RXDAVLIE_MASK 0x200000U
#define RXDAVLIE_OFFSET 21
#define RXDAVLIE_START_BIT 21
#define RXDAVLIE_WIDTH 1



typedef enum rxdavlie {
    RXDAVLIE_0,
    RXDAVLIE_1
} RXDAVLIE_T ;
#define WRITE_RXDAVLIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ RXDAVLIE_MASK) | ((val << RXDAVLIE_START_BIT) & RXDAVLIE_MASK )); \
   } 

#define ENABLE_RXDAVLIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  RXDAVLIE_MASK ); \
   }

#define DISABLE_RXDAVLIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~RXDAVLIE_MASK ); \
   } 

#define READ_RXDAVLIE() \
   ((READ_REGISTER_ULONG(0x3C) & RXDAVLIE_MASK)  >> RXDAVLIE_START_BIT)

#define WHEN_RXDAVLIE_HIGH() \
     if ( READ_RXDAVLIE() )


#define UNLESS_RXDAVLIE_HIGH() \
     if (! READ_RXDAVLIE() )


#define WAIT_RXDAVLIE_LOW() \
    while ( READ_RXDAVLIE() );


#define WAIT_RXDAVLIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXDAVLIE() && (--___t___ > 0)); }


#define WAIT_RXDAVLIE_HIGH() \
    while (! READ_RXDAVLIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDIO mode interrupt received interrupt enable 
    // 
#define SDIOITIE_MASK 0x400000U
#define SDIOITIE_OFFSET 22
#define SDIOITIE_START_BIT 22
#define SDIOITIE_WIDTH 1



typedef enum sdioitie {
    SDIOITIE_0,
    SDIOITIE_1
} SDIOITIE_T ;
#define WRITE_SDIOITIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ SDIOITIE_MASK) | ((val << SDIOITIE_START_BIT) & SDIOITIE_MASK )); \
   } 

#define ENABLE_SDIOITIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  SDIOITIE_MASK ); \
   }

#define DISABLE_SDIOITIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~SDIOITIE_MASK ); \
   } 

#define READ_SDIOITIE() \
   ((READ_REGISTER_ULONG(0x3C) & SDIOITIE_MASK)  >> SDIOITIE_START_BIT)

#define WHEN_SDIOITIE_HIGH() \
     if ( READ_SDIOITIE() )


#define UNLESS_SDIOITIE_HIGH() \
     if (! READ_SDIOITIE() )


#define WAIT_SDIOITIE_LOW() \
    while ( READ_SDIOITIE() );


#define WAIT_SDIOITIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDIOITIE() && (--___t___ > 0)); }


#define WAIT_SDIOITIE_HIGH() \
    while (! READ_SDIOITIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mask
//
// Return the value of register MASK
//
// Notes : Register mask register (MASK) at the offset 0x3C, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CE-ATA command completion signal received interrupt 
    // enable 
    // 
#define CEATAENDIE_MASK 0x800000U
#define CEATAENDIE_OFFSET 23
#define CEATAENDIE_START_BIT 23
#define CEATAENDIE_WIDTH 1



typedef enum ceataendie {
    CEATAENDIE_0,
    CEATAENDIE_1
} CEATAENDIE_T ;
#define WRITE_CEATAENDIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CEATAENDIE_MASK) | ((val << CEATAENDIE_START_BIT) & CEATAENDIE_MASK )); \
   } 

#define ENABLE_CEATAENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CEATAENDIE_MASK ); \
   }

#define DISABLE_CEATAENDIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CEATAENDIE_MASK ); \
   } 

#define READ_CEATAENDIE() \
   ((READ_REGISTER_ULONG(0x3C) & CEATAENDIE_MASK)  >> CEATAENDIE_START_BIT)

#define WHEN_CEATAENDIE_HIGH() \
     if ( READ_CEATAENDIE() )


#define UNLESS_CEATAENDIE_HIGH() \
     if (! READ_CEATAENDIE() )


#define WAIT_CEATAENDIE_LOW() \
    while ( READ_CEATAENDIE() );


#define WAIT_CEATAENDIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEATAENDIE() && (--___t___ > 0)); }


#define WAIT_CEATAENDIE_HIGH() \
    while (! READ_CEATAENDIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fifocnt
//
// Return the value of register FIFOCNT
//
// Notes : Register Fifocnt at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_FIFOCNT() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fifocnt
//
// Return the value of register FIFOCNT
//
// Notes : Register FIFO counter register (FIFOCNT) at the offset 0x48, Bits 0:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Remaining number of words to be written to or read from 
    // the FIFO 
    // 
#define FIFOCOUNT_MASK 0xFFFFFFU
#define FIFOCOUNT_OFFSET 23
#define FIFOCOUNT_START_BIT 0
#define FIFOCOUNT_WIDTH 24


#define FIFOCNT_REG 0x48

typedef enum fifocount {
    FIFOCOUNT_0,
    FIFOCOUNT_1
} FIFOCOUNT_T ;
#define READ_FIFOCOUNT() \
   ((READ_REGISTER_ULONG(0x48) & FIFOCOUNT_MASK)  >> FIFOCOUNT_START_BIT)

#define WRITE_FIFOCOUNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ FIFOCOUNT_MASK) | ((val << FIFOCOUNT_START_BIT) & FIFOCOUNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fifo
//
// Return the value of register FIFO
//
// Notes : Register Fifo at offset 0x80
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FIFO( y) \
     WRITE_REGISTER_ULONG( 0x80 , y)

#define SET_BITS_FIFO(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  mask ); \
   }

#define CLEAR_BITS_FIFO(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val & ~mask ); \
   }

#define READ_REGISTER_FIFO() \
     READ_REGISTER_ULONG(0x80)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fifo
//
// Return the value of register FIFO
//
// Notes : Register data FIFO register (FIFO) at the offset 0x80, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive and transmit FIFO data 
    // 
#define FIFODATA_MASK 0xFFFFFFFFU
#define FIFODATA_OFFSET 31
#define FIFODATA_START_BIT 0
#define FIFODATA_WIDTH 32


#define FIFO_REG 0x80

typedef enum fifodata {
    FIFODATA_0,
    FIFODATA_1
} FIFODATA_T ;
#define READ_FIFODATA() \
   ((READ_REGISTER_ULONG(0x80) & FIFODATA_MASK)  >> FIFODATA_START_BIT)

#define WRITE_FIFODATA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ FIFODATA_MASK) | ((val << FIFODATA_START_BIT) & FIFODATA_MASK )); \
   } 

