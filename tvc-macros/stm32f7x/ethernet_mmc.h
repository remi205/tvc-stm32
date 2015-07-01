/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/ethernet_mmc.h
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
 
#define ETHERNET_MMC 0x40028100
/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Mmccr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MMCCR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_MMCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_MMCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_MMCCR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Ethernet MMC control register (MMCCR) at the offset 0x0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MCFHP_MASK 0x20U
#define MCFHP_OFFSET 5
#define MCFHP_START_BIT 5
#define MCFHP_WIDTH 1


#define MMCCR_REG 0x0

#define WRITE_MCFHP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MCFHP_MASK) | ((val << MCFHP_START_BIT) & MCFHP_MASK )); \
   } 

#define ENABLE_MCFHP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MCFHP_MASK ); \
   }

#define DISABLE_MCFHP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MCFHP_MASK ); \
   } 

#define READ_MCFHP() \
   ((READ_REGISTER_ULONG(0x0) & MCFHP_MASK)  >> MCFHP_START_BIT)

#define WHEN_MCFHP_HIGH() \
     if ( READ_MCFHP() )


#define UNLESS_MCFHP_HIGH() \
     if (! READ_MCFHP() )


#define WAIT_MCFHP_LOW() \
    while ( READ_MCFHP() );


#define WAIT_MCFHP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MCFHP() && (--___t___ > 0)); }


#define WAIT_MCFHP_HIGH() \
    while (! READ_MCFHP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Ethernet MMC control register (MMCCR) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MCP_MASK 0x10U
#define MCP_OFFSET 4
#define MCP_START_BIT 4
#define MCP_WIDTH 1



#define WRITE_MCP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MCP_MASK) | ((val << MCP_START_BIT) & MCP_MASK )); \
   } 

#define ENABLE_MCP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MCP_MASK ); \
   }

#define DISABLE_MCP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MCP_MASK ); \
   } 

#define READ_MCP() \
   ((READ_REGISTER_ULONG(0x0) & MCP_MASK)  >> MCP_START_BIT)

#define WHEN_MCP_HIGH() \
     if ( READ_MCP() )


#define UNLESS_MCP_HIGH() \
     if (! READ_MCP() )


#define WAIT_MCP_LOW() \
    while ( READ_MCP() );


#define WAIT_MCP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MCP() && (--___t___ > 0)); }


#define WAIT_MCP_HIGH() \
    while (! READ_MCP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Ethernet MMC control register (MMCCR) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define MCF_MASK 0x8U
#define MCF_OFFSET 3
#define MCF_START_BIT 3
#define MCF_WIDTH 1



#define WRITE_MCF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MCF_MASK) | ((val << MCF_START_BIT) & MCF_MASK )); \
   } 

#define ENABLE_MCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MCF_MASK ); \
   }

#define DISABLE_MCF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MCF_MASK ); \
   } 

#define READ_MCF() \
   ((READ_REGISTER_ULONG(0x0) & MCF_MASK)  >> MCF_START_BIT)

#define WHEN_MCF_HIGH() \
     if ( READ_MCF() )


#define UNLESS_MCF_HIGH() \
     if (! READ_MCF() )


#define WAIT_MCF_LOW() \
    while ( READ_MCF() );


#define WAIT_MCF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MCF() && (--___t___ > 0)); }


#define WAIT_MCF_HIGH() \
    while (! READ_MCF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Ethernet MMC control register (MMCCR) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define ROR_MASK 0x4U
#define ROR_OFFSET 2
#define ROR_START_BIT 2
#define ROR_WIDTH 1



#define WRITE_ROR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ROR_MASK) | ((val << ROR_START_BIT) & ROR_MASK )); \
   } 

#define ENABLE_ROR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ROR_MASK ); \
   }

#define DISABLE_ROR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ROR_MASK ); \
   } 

#define READ_ROR() \
   ((READ_REGISTER_ULONG(0x0) & ROR_MASK)  >> ROR_START_BIT)

#define WHEN_ROR_HIGH() \
     if ( READ_ROR() )


#define UNLESS_ROR_HIGH() \
     if (! READ_ROR() )


#define WAIT_ROR_LOW() \
    while ( READ_ROR() );


#define WAIT_ROR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ROR() && (--___t___ > 0)); }


#define WAIT_ROR_HIGH() \
    while (! READ_ROR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Ethernet MMC control register (MMCCR) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define CSR_MASK 0x2U
#define CSR_OFFSET 1
#define CSR_START_BIT 1
#define CSR_WIDTH 1



#define WRITE_CSR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CSR_MASK) | ((val << CSR_START_BIT) & CSR_MASK )); \
   } 

#define ENABLE_CSR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CSR_MASK ); \
   }

#define DISABLE_CSR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CSR_MASK ); \
   } 

#define READ_CSR() \
   ((READ_REGISTER_ULONG(0x0) & CSR_MASK)  >> CSR_START_BIT)

#define WHEN_CSR_HIGH() \
     if ( READ_CSR() )


#define UNLESS_CSR_HIGH() \
     if (! READ_CSR() )


#define WAIT_CSR_LOW() \
    while ( READ_CSR() );


#define WAIT_CSR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSR() && (--___t___ > 0)); }


#define WAIT_CSR_HIGH() \
    while (! READ_CSR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmccr
//
// Return the value of register MMCCR
//
// Notes : Register Ethernet MMC control register (MMCCR) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define CR_MASK 0x1U
#define CR_OFFSET 0
#define CR_START_BIT 0
#define CR_WIDTH 1



#define WRITE_CR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CR_MASK) | ((val << CR_START_BIT) & CR_MASK )); \
   } 

#define ENABLE_CR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CR_MASK ); \
   }

#define DISABLE_CR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CR_MASK ); \
   } 

#define READ_CR() \
   ((READ_REGISTER_ULONG(0x0) & CR_MASK)  >> CR_START_BIT)

#define WHEN_CR_HIGH() \
     if ( READ_CR() )


#define UNLESS_CR_HIGH() \
     if (! READ_CR() )


#define WAIT_CR_LOW() \
    while ( READ_CR() );


#define WAIT_CR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CR() && (--___t___ > 0)); }


#define WAIT_CR_HIGH() \
    while (! READ_CR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrir
//
// Return the value of register MMCRIR
//
// Notes : Register Mmcrir at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MMCRIR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_MMCRIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_MMCRIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_MMCRIR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrir
//
// Return the value of register MMCRIR
//
// Notes : Register Ethernet MMC receive interrupt register (MMCRIR) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RGUFS_MASK 0x20000U
#define RGUFS_OFFSET 17
#define RGUFS_START_BIT 17
#define RGUFS_WIDTH 1


#define MMCRIR_REG 0x4

typedef enum rgufs {
    RGUFS_0,
    RGUFS_1
} RGUFS_T ;
#define WRITE_RGUFS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RGUFS_MASK) | ((val << RGUFS_START_BIT) & RGUFS_MASK )); \
   } 

#define ENABLE_RGUFS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RGUFS_MASK ); \
   }

#define DISABLE_RGUFS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RGUFS_MASK ); \
   } 

#define READ_RGUFS() \
   ((READ_REGISTER_ULONG(0x4) & RGUFS_MASK)  >> RGUFS_START_BIT)

#define WHEN_RGUFS_HIGH() \
     if ( READ_RGUFS() )


#define UNLESS_RGUFS_HIGH() \
     if (! READ_RGUFS() )


#define WAIT_RGUFS_LOW() \
    while ( READ_RGUFS() );


#define WAIT_RGUFS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGUFS() && (--___t___ > 0)); }


#define WAIT_RGUFS_HIGH() \
    while (! READ_RGUFS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrir
//
// Return the value of register MMCRIR
//
// Notes : Register Ethernet MMC receive interrupt register (MMCRIR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFAES_MASK 0x40U
#define RFAES_OFFSET 6
#define RFAES_START_BIT 6
#define RFAES_WIDTH 1



typedef enum rfaes {
    RFAES_0,
    RFAES_1
} RFAES_T ;
#define WRITE_RFAES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RFAES_MASK) | ((val << RFAES_START_BIT) & RFAES_MASK )); \
   } 

#define ENABLE_RFAES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RFAES_MASK ); \
   }

#define DISABLE_RFAES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RFAES_MASK ); \
   } 

#define READ_RFAES() \
   ((READ_REGISTER_ULONG(0x4) & RFAES_MASK)  >> RFAES_START_BIT)

#define WHEN_RFAES_HIGH() \
     if ( READ_RFAES() )


#define UNLESS_RFAES_HIGH() \
     if (! READ_RFAES() )


#define WAIT_RFAES_LOW() \
    while ( READ_RFAES() );


#define WAIT_RFAES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RFAES() && (--___t___ > 0)); }


#define WAIT_RFAES_HIGH() \
    while (! READ_RFAES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrir
//
// Return the value of register MMCRIR
//
// Notes : Register Ethernet MMC receive interrupt register (MMCRIR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFCES_MASK 0x20U
#define RFCES_OFFSET 5
#define RFCES_START_BIT 5
#define RFCES_WIDTH 1



typedef enum rfces {
    RFCES_0,
    RFCES_1
} RFCES_T ;
#define WRITE_RFCES(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RFCES_MASK) | ((val << RFCES_START_BIT) & RFCES_MASK )); \
   } 

#define ENABLE_RFCES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RFCES_MASK ); \
   }

#define DISABLE_RFCES() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RFCES_MASK ); \
   } 

#define READ_RFCES() \
   ((READ_REGISTER_ULONG(0x4) & RFCES_MASK)  >> RFCES_START_BIT)

#define WHEN_RFCES_HIGH() \
     if ( READ_RFCES() )


#define UNLESS_RFCES_HIGH() \
     if (! READ_RFCES() )


#define WAIT_RFCES_LOW() \
    while ( READ_RFCES() );


#define WAIT_RFCES_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RFCES() && (--___t___ > 0)); }


#define WAIT_RFCES_HIGH() \
    while (! READ_RFCES() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctir
//
// Return the value of register MMCTIR
//
// Notes : Register Mmctir at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCTIR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctir
//
// Return the value of register MMCTIR
//
// Notes : Register Ethernet MMC transmit interrupt register (MMCTIR) at the offset 0x8, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFS_MASK 0x200000U
#define TGFS_OFFSET 21
#define TGFS_START_BIT 21
#define TGFS_WIDTH 1


#define MMCTIR_REG 0x8

typedef enum tgfs {
    TGFS_0,
    TGFS_1
} TGFS_T ;
#define WRITE_TGFS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TGFS_MASK) | ((val << TGFS_START_BIT) & TGFS_MASK )); \
   } 

#define ENABLE_TGFS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TGFS_MASK ); \
   }

#define DISABLE_TGFS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TGFS_MASK ); \
   } 

#define READ_TGFS() \
   ((READ_REGISTER_ULONG(0x8) & TGFS_MASK)  >> TGFS_START_BIT)

#define WHEN_TGFS_HIGH() \
     if ( READ_TGFS() )


#define UNLESS_TGFS_HIGH() \
     if (! READ_TGFS() )


#define WAIT_TGFS_LOW() \
    while ( READ_TGFS() );


#define WAIT_TGFS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TGFS() && (--___t___ > 0)); }


#define WAIT_TGFS_HIGH() \
    while (! READ_TGFS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctir
//
// Return the value of register MMCTIR
//
// Notes : Register Ethernet MMC transmit interrupt register (MMCTIR) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFMSCS_MASK 0x8000U
#define TGFMSCS_OFFSET 15
#define TGFMSCS_START_BIT 15
#define TGFMSCS_WIDTH 1



typedef enum tgfmscs {
    TGFMSCS_0,
    TGFMSCS_1
} TGFMSCS_T ;
#define WRITE_TGFMSCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TGFMSCS_MASK) | ((val << TGFMSCS_START_BIT) & TGFMSCS_MASK )); \
   } 

#define ENABLE_TGFMSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TGFMSCS_MASK ); \
   }

#define DISABLE_TGFMSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TGFMSCS_MASK ); \
   } 

#define READ_TGFMSCS() \
   ((READ_REGISTER_ULONG(0x8) & TGFMSCS_MASK)  >> TGFMSCS_START_BIT)

#define WHEN_TGFMSCS_HIGH() \
     if ( READ_TGFMSCS() )


#define UNLESS_TGFMSCS_HIGH() \
     if (! READ_TGFMSCS() )


#define WAIT_TGFMSCS_LOW() \
    while ( READ_TGFMSCS() );


#define WAIT_TGFMSCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TGFMSCS() && (--___t___ > 0)); }


#define WAIT_TGFMSCS_HIGH() \
    while (! READ_TGFMSCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctir
//
// Return the value of register MMCTIR
//
// Notes : Register Ethernet MMC transmit interrupt register (MMCTIR) at the offset 0x8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFSCS_MASK 0x4000U
#define TGFSCS_OFFSET 14
#define TGFSCS_START_BIT 14
#define TGFSCS_WIDTH 1



typedef enum tgfscs {
    TGFSCS_0,
    TGFSCS_1
} TGFSCS_T ;
#define WRITE_TGFSCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TGFSCS_MASK) | ((val << TGFSCS_START_BIT) & TGFSCS_MASK )); \
   } 

#define ENABLE_TGFSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TGFSCS_MASK ); \
   }

#define DISABLE_TGFSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TGFSCS_MASK ); \
   } 

#define READ_TGFSCS() \
   ((READ_REGISTER_ULONG(0x8) & TGFSCS_MASK)  >> TGFSCS_START_BIT)

#define WHEN_TGFSCS_HIGH() \
     if ( READ_TGFSCS() )


#define UNLESS_TGFSCS_HIGH() \
     if (! READ_TGFSCS() )


#define WAIT_TGFSCS_LOW() \
    while ( READ_TGFSCS() );


#define WAIT_TGFSCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TGFSCS() && (--___t___ > 0)); }


#define WAIT_TGFSCS_HIGH() \
    while (! READ_TGFSCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrimr
//
// Return the value of register MMCRIMR
//
// Notes : Register Mmcrimr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MMCRIMR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_MMCRIMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_MMCRIMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_MMCRIMR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrimr
//
// Return the value of register MMCRIMR
//
// Notes : Register Ethernet MMC receive interrupt mask register (MMCRIMR) at the offset 0xC, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RGUFM_MASK 0x20000U
#define RGUFM_OFFSET 17
#define RGUFM_START_BIT 17
#define RGUFM_WIDTH 1


#define MMCRIMR_REG 0xC

typedef enum rgufm {
    RGUFM_0,
    RGUFM_1
} RGUFM_T ;
#define WRITE_RGUFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RGUFM_MASK) | ((val << RGUFM_START_BIT) & RGUFM_MASK )); \
   } 

#define ENABLE_RGUFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  RGUFM_MASK ); \
   }

#define DISABLE_RGUFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~RGUFM_MASK ); \
   } 

#define READ_RGUFM() \
   ((READ_REGISTER_ULONG(0xC) & RGUFM_MASK)  >> RGUFM_START_BIT)

#define WHEN_RGUFM_HIGH() \
     if ( READ_RGUFM() )


#define UNLESS_RGUFM_HIGH() \
     if (! READ_RGUFM() )


#define WAIT_RGUFM_LOW() \
    while ( READ_RGUFM() );


#define WAIT_RGUFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGUFM() && (--___t___ > 0)); }


#define WAIT_RGUFM_HIGH() \
    while (! READ_RGUFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrimr
//
// Return the value of register MMCRIMR
//
// Notes : Register Ethernet MMC receive interrupt mask register (MMCRIMR) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFAEM_MASK 0x40U
#define RFAEM_OFFSET 6
#define RFAEM_START_BIT 6
#define RFAEM_WIDTH 1



typedef enum rfaem {
    RFAEM_0,
    RFAEM_1
} RFAEM_T ;
#define WRITE_RFAEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RFAEM_MASK) | ((val << RFAEM_START_BIT) & RFAEM_MASK )); \
   } 

#define ENABLE_RFAEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  RFAEM_MASK ); \
   }

#define DISABLE_RFAEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~RFAEM_MASK ); \
   } 

#define READ_RFAEM() \
   ((READ_REGISTER_ULONG(0xC) & RFAEM_MASK)  >> RFAEM_START_BIT)

#define WHEN_RFAEM_HIGH() \
     if ( READ_RFAEM() )


#define UNLESS_RFAEM_HIGH() \
     if (! READ_RFAEM() )


#define WAIT_RFAEM_LOW() \
    while ( READ_RFAEM() );


#define WAIT_RFAEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RFAEM() && (--___t___ > 0)); }


#define WAIT_RFAEM_HIGH() \
    while (! READ_RFAEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrimr
//
// Return the value of register MMCRIMR
//
// Notes : Register Ethernet MMC receive interrupt mask register (MMCRIMR) at the offset 0xC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFCEM_MASK 0x20U
#define RFCEM_OFFSET 5
#define RFCEM_START_BIT 5
#define RFCEM_WIDTH 1



typedef enum rfcem {
    RFCEM_0,
    RFCEM_1
} RFCEM_T ;
#define WRITE_RFCEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RFCEM_MASK) | ((val << RFCEM_START_BIT) & RFCEM_MASK )); \
   } 

#define ENABLE_RFCEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  RFCEM_MASK ); \
   }

#define DISABLE_RFCEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~RFCEM_MASK ); \
   } 

#define READ_RFCEM() \
   ((READ_REGISTER_ULONG(0xC) & RFCEM_MASK)  >> RFCEM_START_BIT)

#define WHEN_RFCEM_HIGH() \
     if ( READ_RFCEM() )


#define UNLESS_RFCEM_HIGH() \
     if (! READ_RFCEM() )


#define WAIT_RFCEM_LOW() \
    while ( READ_RFCEM() );


#define WAIT_RFCEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RFCEM() && (--___t___ > 0)); }


#define WAIT_RFCEM_HIGH() \
    while (! READ_RFCEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctimr
//
// Return the value of register MMCTIMR
//
// Notes : Register Mmctimr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MMCTIMR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_MMCTIMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_MMCTIMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_MMCTIMR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctimr
//
// Return the value of register MMCTIMR
//
// Notes : Register Ethernet MMC transmit interrupt mask register (MMCTIMR) at the offset 0x10, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFM_MASK 0x10000U
#define TGFM_OFFSET 16
#define TGFM_START_BIT 16
#define TGFM_WIDTH 1


#define MMCTIMR_REG 0x10

typedef enum tgfm {
    TGFM_0,
    TGFM_1
} TGFM_T ;
#define WRITE_TGFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TGFM_MASK) | ((val << TGFM_START_BIT) & TGFM_MASK )); \
   } 

#define ENABLE_TGFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TGFM_MASK ); \
   }

#define DISABLE_TGFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TGFM_MASK ); \
   } 

#define READ_TGFM() \
   ((READ_REGISTER_ULONG(0x10) & TGFM_MASK)  >> TGFM_START_BIT)

#define WHEN_TGFM_HIGH() \
     if ( READ_TGFM() )


#define UNLESS_TGFM_HIGH() \
     if (! READ_TGFM() )


#define WAIT_TGFM_LOW() \
    while ( READ_TGFM() );


#define WAIT_TGFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TGFM() && (--___t___ > 0)); }


#define WAIT_TGFM_HIGH() \
    while (! READ_TGFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctimr
//
// Return the value of register MMCTIMR
//
// Notes : Register Ethernet MMC transmit interrupt mask register (MMCTIMR) at the offset 0x10, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFMSCM_MASK 0x8000U
#define TGFMSCM_OFFSET 15
#define TGFMSCM_START_BIT 15
#define TGFMSCM_WIDTH 1



typedef enum tgfmscm {
    TGFMSCM_0,
    TGFMSCM_1
} TGFMSCM_T ;
#define WRITE_TGFMSCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TGFMSCM_MASK) | ((val << TGFMSCM_START_BIT) & TGFMSCM_MASK )); \
   } 

#define ENABLE_TGFMSCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TGFMSCM_MASK ); \
   }

#define DISABLE_TGFMSCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TGFMSCM_MASK ); \
   } 

#define READ_TGFMSCM() \
   ((READ_REGISTER_ULONG(0x10) & TGFMSCM_MASK)  >> TGFMSCM_START_BIT)

#define WHEN_TGFMSCM_HIGH() \
     if ( READ_TGFMSCM() )


#define UNLESS_TGFMSCM_HIGH() \
     if (! READ_TGFMSCM() )


#define WAIT_TGFMSCM_LOW() \
    while ( READ_TGFMSCM() );


#define WAIT_TGFMSCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TGFMSCM() && (--___t___ > 0)); }


#define WAIT_TGFMSCM_HIGH() \
    while (! READ_TGFMSCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctimr
//
// Return the value of register MMCTIMR
//
// Notes : Register Ethernet MMC transmit interrupt mask register (MMCTIMR) at the offset 0x10, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFSCM_MASK 0x4000U
#define TGFSCM_OFFSET 14
#define TGFSCM_START_BIT 14
#define TGFSCM_WIDTH 1



typedef enum tgfscm {
    TGFSCM_0,
    TGFSCM_1
} TGFSCM_T ;
#define WRITE_TGFSCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TGFSCM_MASK) | ((val << TGFSCM_START_BIT) & TGFSCM_MASK )); \
   } 

#define ENABLE_TGFSCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TGFSCM_MASK ); \
   }

#define DISABLE_TGFSCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TGFSCM_MASK ); \
   } 

#define READ_TGFSCM() \
   ((READ_REGISTER_ULONG(0x10) & TGFSCM_MASK)  >> TGFSCM_START_BIT)

#define WHEN_TGFSCM_HIGH() \
     if ( READ_TGFSCM() )


#define UNLESS_TGFSCM_HIGH() \
     if (! READ_TGFSCM() )


#define WAIT_TGFSCM_LOW() \
    while ( READ_TGFSCM() );


#define WAIT_TGFSCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TGFSCM() && (--___t___ > 0)); }


#define WAIT_TGFSCM_HIGH() \
    while (! READ_TGFSCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctgfsccr
//
// Return the value of register MMCTGFSCCR
//
// Notes : Register Mmctgfsccr at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCTGFSCCR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctgfsccr
//
// Return the value of register MMCTGFSCCR
//
// Notes : Register Ethernet MMC transmitted good frames after a single collision counter (MMCTGFSCCR) at the offset 0x4C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFSCC_MASK 0xFFFFFFFFU
#define TGFSCC_OFFSET 31
#define TGFSCC_START_BIT 0
#define TGFSCC_WIDTH 32


#define MMCTGFSCCR_REG 0x4C

typedef enum tgfscc {
    TGFSCC_0,
    TGFSCC_1
} TGFSCC_T ;
#define READ_TGFSCC() \
   ((READ_REGISTER_ULONG(0x4C) & TGFSCC_MASK)  >> TGFSCC_START_BIT)

#define WRITE_TGFSCC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ TGFSCC_MASK) | ((val << TGFSCC_START_BIT) & TGFSCC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctgfmsccr
//
// Return the value of register MMCTGFMSCCR
//
// Notes : Register Mmctgfmsccr at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCTGFMSCCR() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctgfmsccr
//
// Return the value of register MMCTGFMSCCR
//
// Notes : Register Ethernet MMC transmitted good frames after more than a single collision (MMCTGFMSCCR) at the offset 0x50, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TGFMSCC_MASK 0xFFFFFFFFU
#define TGFMSCC_OFFSET 31
#define TGFMSCC_START_BIT 0
#define TGFMSCC_WIDTH 32


#define MMCTGFMSCCR_REG 0x50

typedef enum tgfmscc {
    TGFMSCC_0,
    TGFMSCC_1
} TGFMSCC_T ;
#define READ_TGFMSCC() \
   ((READ_REGISTER_ULONG(0x50) & TGFMSCC_MASK)  >> TGFMSCC_START_BIT)

#define WRITE_TGFMSCC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ TGFMSCC_MASK) | ((val << TGFMSCC_START_BIT) & TGFMSCC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctgfcr
//
// Return the value of register MMCTGFCR
//
// Notes : Register Mmctgfcr at offset 0x68
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCTGFCR() \
     READ_REGISTER_ULONG(0x68)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmctgfcr
//
// Return the value of register MMCTGFCR
//
// Notes : Register Ethernet MMC transmitted good frames counter register (MMCTGFCR) at the offset 0x68, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HTL 
    // 
#define TGFC_MASK 0xFFFFFFFFU
#define TGFC_OFFSET 31
#define TGFC_START_BIT 0
#define TGFC_WIDTH 32


#define MMCTGFCR_REG 0x68

typedef enum tgfc {
    TGFC_0,
    TGFC_1
} TGFC_T ;
#define READ_TGFC() \
   ((READ_REGISTER_ULONG(0x68) & TGFC_MASK)  >> TGFC_START_BIT)

#define WRITE_TGFC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x68); \
     WRITE_REGISTER_ULONG(0x68, (OldValue & ~ TGFC_MASK) | ((val << TGFC_START_BIT) & TGFC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrfcecr
//
// Return the value of register MMCRFCECR
//
// Notes : Register Mmcrfcecr at offset 0x94
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCRFCECR() \
     READ_REGISTER_ULONG(0x94)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrfcecr
//
// Return the value of register MMCRFCECR
//
// Notes : Register Ethernet MMC received frames with CRC error counter register (MMCRFCECR) at the offset 0x94, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFCFC_MASK 0xFFFFFFFFU
#define RFCFC_OFFSET 31
#define RFCFC_START_BIT 0
#define RFCFC_WIDTH 32


#define MMCRFCECR_REG 0x94

typedef enum rfcfc {
    RFCFC_0,
    RFCFC_1
} RFCFC_T ;
#define READ_RFCFC() \
   ((READ_REGISTER_ULONG(0x94) & RFCFC_MASK)  >> RFCFC_START_BIT)

#define WRITE_RFCFC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x94); \
     WRITE_REGISTER_ULONG(0x94, (OldValue & ~ RFCFC_MASK) | ((val << RFCFC_START_BIT) & RFCFC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrfaecr
//
// Return the value of register MMCRFAECR
//
// Notes : Register Mmcrfaecr at offset 0x98
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCRFAECR() \
     READ_REGISTER_ULONG(0x98)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrfaecr
//
// Return the value of register MMCRFAECR
//
// Notes : Register Ethernet MMC received frames with alignment error counter register (MMCRFAECR) at the offset 0x98, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RFAEC_MASK 0xFFFFFFFFU
#define RFAEC_OFFSET 31
#define RFAEC_START_BIT 0
#define RFAEC_WIDTH 32


#define MMCRFAECR_REG 0x98

typedef enum rfaec {
    RFAEC_0,
    RFAEC_1
} RFAEC_T ;
#define READ_RFAEC() \
   ((READ_REGISTER_ULONG(0x98) & RFAEC_MASK)  >> RFAEC_START_BIT)

#define WRITE_RFAEC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x98); \
     WRITE_REGISTER_ULONG(0x98, (OldValue & ~ RFAEC_MASK) | ((val << RFAEC_START_BIT) & RFAEC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrgufcr
//
// Return the value of register MMCRGUFCR
//
// Notes : Register Mmcrgufcr at offset 0xC4
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_MMCRGUFCR() \
     READ_REGISTER_ULONG(0xC4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Mmcrgufcr
//
// Return the value of register MMCRGUFCR
//
// Notes : Register MMC received good unicast frames counter register (MMCRGUFCR) at the offset 0xC4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define RGUFC_MASK 0xFFFFFFFFU
#define RGUFC_OFFSET 31
#define RGUFC_START_BIT 0
#define RGUFC_WIDTH 32


#define MMCRGUFCR_REG 0xC4

typedef enum rgufc {
    RGUFC_0,
    RGUFC_1
} RGUFC_T ;
#define READ_RGUFC() \
   ((READ_REGISTER_ULONG(0xC4) & RGUFC_MASK)  >> RGUFC_START_BIT)

#define WRITE_RGUFC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC4); \
     WRITE_REGISTER_ULONG(0xC4, (OldValue & ~ RGUFC_MASK) | ((val << RGUFC_START_BIT) & RGUFC_MASK )); \
   } 

