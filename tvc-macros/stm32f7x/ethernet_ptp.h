/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/ethernet_ptp.h
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
 
#define ETHERNET_PTP 0x40028700
/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ptptscr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPTSCR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_PTPTSCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_PTPTSCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_PTPTSCR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSSR_MASK 0x200U
#define TSSSR_OFFSET 9
#define TSSSR_START_BIT 9
#define TSSSR_WIDTH 1


#define PTPTSCR_REG 0x0

typedef enum tsssr {
    TSSSR_0,
    TSSSR_1
} TSSSR_T ;
#define WRITE_TSSSR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSSR_MASK) | ((val << TSSSR_START_BIT) & TSSSR_MASK )); \
   } 

#define ENABLE_TSSSR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSSR_MASK ); \
   }

#define DISABLE_TSSSR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSSR_MASK ); \
   } 

#define READ_TSSSR() \
   ((READ_REGISTER_ULONG(0x0) & TSSSR_MASK)  >> TSSSR_START_BIT)

#define WHEN_TSSSR_HIGH() \
     if ( READ_TSSSR() )


#define UNLESS_TSSSR_HIGH() \
     if (! READ_TSSSR() )


#define WAIT_TSSSR_LOW() \
    while ( READ_TSSSR() );


#define WAIT_TSSSR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSSR() && (--___t___ > 0)); }


#define WAIT_TSSSR_HIGH() \
    while (! READ_TSSSR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSARFE_MASK 0x100U
#define TSSARFE_OFFSET 8
#define TSSARFE_START_BIT 8
#define TSSARFE_WIDTH 1



typedef enum tssarfe {
    TSSARFE_0,
    TSSARFE_1
} TSSARFE_T ;
#define WRITE_TSSARFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSARFE_MASK) | ((val << TSSARFE_START_BIT) & TSSARFE_MASK )); \
   } 

#define ENABLE_TSSARFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSARFE_MASK ); \
   }

#define DISABLE_TSSARFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSARFE_MASK ); \
   } 

#define READ_TSSARFE() \
   ((READ_REGISTER_ULONG(0x0) & TSSARFE_MASK)  >> TSSARFE_START_BIT)

#define WHEN_TSSARFE_HIGH() \
     if ( READ_TSSARFE() )


#define UNLESS_TSSARFE_HIGH() \
     if (! READ_TSSARFE() )


#define WAIT_TSSARFE_LOW() \
    while ( READ_TSSARFE() );


#define WAIT_TSSARFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSARFE() && (--___t___ > 0)); }


#define WAIT_TSSARFE_HIGH() \
    while (! READ_TSSARFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TTSARU_MASK 0x20U
#define TTSARU_OFFSET 5
#define TTSARU_START_BIT 5
#define TTSARU_WIDTH 1



typedef enum ttsaru {
    TTSARU_0,
    TTSARU_1
} TTSARU_T ;
#define WRITE_TTSARU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TTSARU_MASK) | ((val << TTSARU_START_BIT) & TTSARU_MASK )); \
   } 

#define ENABLE_TTSARU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TTSARU_MASK ); \
   }

#define DISABLE_TTSARU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TTSARU_MASK ); \
   } 

#define READ_TTSARU() \
   ((READ_REGISTER_ULONG(0x0) & TTSARU_MASK)  >> TTSARU_START_BIT)

#define WHEN_TTSARU_HIGH() \
     if ( READ_TTSARU() )


#define UNLESS_TTSARU_HIGH() \
     if (! READ_TTSARU() )


#define WAIT_TTSARU_LOW() \
    while ( READ_TTSARU() );


#define WAIT_TTSARU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TTSARU() && (--___t___ > 0)); }


#define WAIT_TTSARU_HIGH() \
    while (! READ_TTSARU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSITE_MASK 0x10U
#define TSITE_OFFSET 4
#define TSITE_START_BIT 4
#define TSITE_WIDTH 1



typedef enum tsite {
    TSITE_0,
    TSITE_1
} TSITE_T ;
#define WRITE_TSITE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSITE_MASK) | ((val << TSITE_START_BIT) & TSITE_MASK )); \
   } 

#define ENABLE_TSITE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSITE_MASK ); \
   }

#define DISABLE_TSITE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSITE_MASK ); \
   } 

#define READ_TSITE() \
   ((READ_REGISTER_ULONG(0x0) & TSITE_MASK)  >> TSITE_START_BIT)

#define WHEN_TSITE_HIGH() \
     if ( READ_TSITE() )


#define UNLESS_TSITE_HIGH() \
     if (! READ_TSITE() )


#define WAIT_TSITE_LOW() \
    while ( READ_TSITE() );


#define WAIT_TSITE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSITE() && (--___t___ > 0)); }


#define WAIT_TSITE_HIGH() \
    while (! READ_TSITE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSTU_MASK 0x8U
#define TSSTU_OFFSET 3
#define TSSTU_START_BIT 3
#define TSSTU_WIDTH 1



typedef enum tsstu {
    TSSTU_0,
    TSSTU_1
} TSSTU_T ;
#define WRITE_TSSTU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSTU_MASK) | ((val << TSSTU_START_BIT) & TSSTU_MASK )); \
   } 

#define ENABLE_TSSTU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSTU_MASK ); \
   }

#define DISABLE_TSSTU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSTU_MASK ); \
   } 

#define READ_TSSTU() \
   ((READ_REGISTER_ULONG(0x0) & TSSTU_MASK)  >> TSSTU_START_BIT)

#define WHEN_TSSTU_HIGH() \
     if ( READ_TSSTU() )


#define UNLESS_TSSTU_HIGH() \
     if (! READ_TSSTU() )


#define WAIT_TSSTU_LOW() \
    while ( READ_TSSTU() );


#define WAIT_TSSTU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSTU() && (--___t___ > 0)); }


#define WAIT_TSSTU_HIGH() \
    while (! READ_TSSTU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSTI_MASK 0x4U
#define TSSTI_OFFSET 2
#define TSSTI_START_BIT 2
#define TSSTI_WIDTH 1



typedef enum tssti {
    TSSTI_0,
    TSSTI_1
} TSSTI_T ;
#define WRITE_TSSTI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSTI_MASK) | ((val << TSSTI_START_BIT) & TSSTI_MASK )); \
   } 

#define ENABLE_TSSTI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSTI_MASK ); \
   }

#define DISABLE_TSSTI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSTI_MASK ); \
   } 

#define READ_TSSTI() \
   ((READ_REGISTER_ULONG(0x0) & TSSTI_MASK)  >> TSSTI_START_BIT)

#define WHEN_TSSTI_HIGH() \
     if ( READ_TSSTI() )


#define UNLESS_TSSTI_HIGH() \
     if (! READ_TSSTI() )


#define WAIT_TSSTI_LOW() \
    while ( READ_TSSTI() );


#define WAIT_TSSTI_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSTI() && (--___t___ > 0)); }


#define WAIT_TSSTI_HIGH() \
    while (! READ_TSSTI() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSPFFMAE_MASK 0x40000U
#define TSPFFMAE_OFFSET 18
#define TSPFFMAE_START_BIT 18
#define TSPFFMAE_WIDTH 1



typedef enum tspffmae {
    TSPFFMAE_0,
    TSPFFMAE_1
} TSPFFMAE_T ;
#define WRITE_TSPFFMAE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSPFFMAE_MASK) | ((val << TSPFFMAE_START_BIT) & TSPFFMAE_MASK )); \
   } 

#define ENABLE_TSPFFMAE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSPFFMAE_MASK ); \
   }

#define DISABLE_TSPFFMAE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSPFFMAE_MASK ); \
   } 

#define READ_TSPFFMAE() \
   ((READ_REGISTER_ULONG(0x0) & TSPFFMAE_MASK)  >> TSPFFMAE_START_BIT)

#define WHEN_TSPFFMAE_HIGH() \
     if ( READ_TSPFFMAE() )


#define UNLESS_TSPFFMAE_HIGH() \
     if (! READ_TSPFFMAE() )


#define WAIT_TSPFFMAE_LOW() \
    while ( READ_TSPFFMAE() );


#define WAIT_TSPFFMAE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSPFFMAE() && (--___t___ > 0)); }


#define WAIT_TSPFFMAE_HIGH() \
    while (! READ_TSPFFMAE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSCNT_MASK 0x30000U
#define TSCNT_OFFSET 17
#define TSCNT_START_BIT 16
#define TSCNT_WIDTH 2



typedef enum tscnt {
    TSCNT_0,
    TSCNT_1
} TSCNT_T ;
#define READ_TSCNT() \
   ((READ_REGISTER_ULONG(0x0) & TSCNT_MASK)  >> TSCNT_START_BIT)

#define WRITE_TSCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSCNT_MASK) | ((val << TSCNT_START_BIT) & TSCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSMRME_MASK 0x8000U
#define TSSMRME_OFFSET 15
#define TSSMRME_START_BIT 15
#define TSSMRME_WIDTH 1



typedef enum tssmrme {
    TSSMRME_0,
    TSSMRME_1
} TSSMRME_T ;
#define WRITE_TSSMRME(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSMRME_MASK) | ((val << TSSMRME_START_BIT) & TSSMRME_MASK )); \
   } 

#define ENABLE_TSSMRME() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSMRME_MASK ); \
   }

#define DISABLE_TSSMRME() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSMRME_MASK ); \
   } 

#define READ_TSSMRME() \
   ((READ_REGISTER_ULONG(0x0) & TSSMRME_MASK)  >> TSSMRME_START_BIT)

#define WHEN_TSSMRME_HIGH() \
     if ( READ_TSSMRME() )


#define UNLESS_TSSMRME_HIGH() \
     if (! READ_TSSMRME() )


#define WAIT_TSSMRME_LOW() \
    while ( READ_TSSMRME() );


#define WAIT_TSSMRME_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSMRME() && (--___t___ > 0)); }


#define WAIT_TSSMRME_HIGH() \
    while (! READ_TSSMRME() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSEME_MASK 0x4000U
#define TSSEME_OFFSET 14
#define TSSEME_START_BIT 14
#define TSSEME_WIDTH 1



typedef enum tsseme {
    TSSEME_0,
    TSSEME_1
} TSSEME_T ;
#define WRITE_TSSEME(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSEME_MASK) | ((val << TSSEME_START_BIT) & TSSEME_MASK )); \
   } 

#define ENABLE_TSSEME() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSEME_MASK ); \
   }

#define DISABLE_TSSEME() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSEME_MASK ); \
   } 

#define READ_TSSEME() \
   ((READ_REGISTER_ULONG(0x0) & TSSEME_MASK)  >> TSSEME_START_BIT)

#define WHEN_TSSEME_HIGH() \
     if ( READ_TSSEME() )


#define UNLESS_TSSEME_HIGH() \
     if (! READ_TSSEME() )


#define WAIT_TSSEME_LOW() \
    while ( READ_TSSEME() );


#define WAIT_TSSEME_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSEME() && (--___t___ > 0)); }


#define WAIT_TSSEME_HIGH() \
    while (! READ_TSSEME() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSIPV4FE_MASK 0x2000U
#define TSSIPV4FE_OFFSET 13
#define TSSIPV4FE_START_BIT 13
#define TSSIPV4FE_WIDTH 1



typedef enum tssipv4fe {
    TSSIPV_4FE_0,
    TSSIPV_4FE_1
} TSSIPV_4FE_T ;
#define WRITE_TSSIPV4FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSIPV4FE_MASK) | ((val << TSSIPV4FE_START_BIT) & TSSIPV4FE_MASK )); \
   } 

#define ENABLE_TSSIPV4FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSIPV4FE_MASK ); \
   }

#define DISABLE_TSSIPV4FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSIPV4FE_MASK ); \
   } 

#define READ_TSSIPV4FE() \
   ((READ_REGISTER_ULONG(0x0) & TSSIPV4FE_MASK)  >> TSSIPV4FE_START_BIT)

#define WHEN_TSSIPV4FE_HIGH() \
     if ( READ_TSSIPV4FE() )


#define UNLESS_TSSIPV4FE_HIGH() \
     if (! READ_TSSIPV4FE() )


#define WAIT_TSSIPV4FE_LOW() \
    while ( READ_TSSIPV4FE() );


#define WAIT_TSSIPV4FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSIPV4FE() && (--___t___ > 0)); }


#define WAIT_TSSIPV4FE_HIGH() \
    while (! READ_TSSIPV4FE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSIPV6FE_MASK 0x1000U
#define TSSIPV6FE_OFFSET 12
#define TSSIPV6FE_START_BIT 12
#define TSSIPV6FE_WIDTH 1



typedef enum tssipv6fe {
    TSSIPV_6FE_0,
    TSSIPV_6FE_1
} TSSIPV_6FE_T ;
#define WRITE_TSSIPV6FE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSIPV6FE_MASK) | ((val << TSSIPV6FE_START_BIT) & TSSIPV6FE_MASK )); \
   } 

#define ENABLE_TSSIPV6FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSIPV6FE_MASK ); \
   }

#define DISABLE_TSSIPV6FE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSIPV6FE_MASK ); \
   } 

#define READ_TSSIPV6FE() \
   ((READ_REGISTER_ULONG(0x0) & TSSIPV6FE_MASK)  >> TSSIPV6FE_START_BIT)

#define WHEN_TSSIPV6FE_HIGH() \
     if ( READ_TSSIPV6FE() )


#define UNLESS_TSSIPV6FE_HIGH() \
     if (! READ_TSSIPV6FE() )


#define WAIT_TSSIPV6FE_LOW() \
    while ( READ_TSSIPV6FE() );


#define WAIT_TSSIPV6FE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSIPV6FE() && (--___t___ > 0)); }


#define WAIT_TSSIPV6FE_HIGH() \
    while (! READ_TSSIPV6FE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSPTPOEFE_MASK 0x800U
#define TSSPTPOEFE_OFFSET 11
#define TSSPTPOEFE_START_BIT 11
#define TSSPTPOEFE_WIDTH 1



typedef enum tssptpoefe {
    TSSPTPOEFE_0,
    TSSPTPOEFE_1
} TSSPTPOEFE_T ;
#define WRITE_TSSPTPOEFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSSPTPOEFE_MASK) | ((val << TSSPTPOEFE_START_BIT) & TSSPTPOEFE_MASK )); \
   } 

#define ENABLE_TSSPTPOEFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSSPTPOEFE_MASK ); \
   }

#define DISABLE_TSSPTPOEFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSSPTPOEFE_MASK ); \
   } 

#define READ_TSSPTPOEFE() \
   ((READ_REGISTER_ULONG(0x0) & TSSPTPOEFE_MASK)  >> TSSPTPOEFE_START_BIT)

#define WHEN_TSSPTPOEFE_HIGH() \
     if ( READ_TSSPTPOEFE() )


#define UNLESS_TSSPTPOEFE_HIGH() \
     if (! READ_TSSPTPOEFE() )


#define WAIT_TSSPTPOEFE_LOW() \
    while ( READ_TSSPTPOEFE() );


#define WAIT_TSSPTPOEFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSPTPOEFE() && (--___t___ > 0)); }


#define WAIT_TSSPTPOEFE_HIGH() \
    while (! READ_TSSPTPOEFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSPTPPSV2E_MASK 0x400U
#define TSPTPPSV2E_OFFSET 10
#define TSPTPPSV2E_START_BIT 10
#define TSPTPPSV2E_WIDTH 1



typedef enum tsptppsv2e {
    TSPTPPSV_2E_0,
    TSPTPPSV_2E_1
} TSPTPPSV_2E_T ;
#define WRITE_TSPTPPSV2E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSPTPPSV2E_MASK) | ((val << TSPTPPSV2E_START_BIT) & TSPTPPSV2E_MASK )); \
   } 

#define ENABLE_TSPTPPSV2E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSPTPPSV2E_MASK ); \
   }

#define DISABLE_TSPTPPSV2E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSPTPPSV2E_MASK ); \
   } 

#define READ_TSPTPPSV2E() \
   ((READ_REGISTER_ULONG(0x0) & TSPTPPSV2E_MASK)  >> TSPTPPSV2E_START_BIT)

#define WHEN_TSPTPPSV2E_HIGH() \
     if ( READ_TSPTPPSV2E() )


#define UNLESS_TSPTPPSV2E_HIGH() \
     if (! READ_TSPTPPSV2E() )


#define WAIT_TSPTPPSV2E_LOW() \
    while ( READ_TSPTPPSV2E() );


#define WAIT_TSPTPPSV2E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSPTPPSV2E() && (--___t___ > 0)); }


#define WAIT_TSPTPPSV2E_HIGH() \
    while (! READ_TSPTPPSV2E() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSFCU_MASK 0x2U
#define TSFCU_OFFSET 1
#define TSFCU_START_BIT 1
#define TSFCU_WIDTH 1



typedef enum tsfcu {
    TSFCU_0,
    TSFCU_1
} TSFCU_T ;
#define WRITE_TSFCU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSFCU_MASK) | ((val << TSFCU_START_BIT) & TSFCU_MASK )); \
   } 

#define ENABLE_TSFCU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSFCU_MASK ); \
   }

#define DISABLE_TSFCU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSFCU_MASK ); \
   } 

#define READ_TSFCU() \
   ((READ_REGISTER_ULONG(0x0) & TSFCU_MASK)  >> TSFCU_START_BIT)

#define WHEN_TSFCU_HIGH() \
     if ( READ_TSFCU() )


#define UNLESS_TSFCU_HIGH() \
     if (! READ_TSFCU() )


#define WAIT_TSFCU_LOW() \
    while ( READ_TSFCU() );


#define WAIT_TSFCU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSFCU() && (--___t___ > 0)); }


#define WAIT_TSFCU_HIGH() \
    while (! READ_TSFCU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptscr
//
// Return the value of register PTPTSCR
//
// Notes : Register Ethernet PTP time stamp control register (PTPTSCR) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSE_MASK 0x1U
#define TSE_OFFSET 0
#define TSE_START_BIT 0
#define TSE_WIDTH 1



typedef enum tse {
    TSE_0,
    TSE_1
} TSE_T ;
#define WRITE_TSE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TSE_MASK) | ((val << TSE_START_BIT) & TSE_MASK )); \
   } 

#define ENABLE_TSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TSE_MASK ); \
   }

#define DISABLE_TSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TSE_MASK ); \
   } 

#define READ_TSE() \
   ((READ_REGISTER_ULONG(0x0) & TSE_MASK)  >> TSE_START_BIT)

#define WHEN_TSE_HIGH() \
     if ( READ_TSE() )


#define UNLESS_TSE_HIGH() \
     if (! READ_TSE() )


#define WAIT_TSE_LOW() \
    while ( READ_TSE() );


#define WAIT_TSE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSE() && (--___t___ > 0)); }


#define WAIT_TSE_HIGH() \
    while (! READ_TSE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpssir
//
// Return the value of register PTPSSIR
//
// Notes : Register Ptpssir at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPSSIR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_PTPSSIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_PTPSSIR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_PTPSSIR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpssir
//
// Return the value of register PTPSSIR
//
// Notes : Register Ethernet PTP subsecond increment register (PTPSSIR) at the offset 0x4, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define STSSI_MASK 0xFFU
#define STSSI_OFFSET 7
#define STSSI_START_BIT 0
#define STSSI_WIDTH 8


#define PTPSSIR_REG 0x4

typedef enum stssi {
    STSSI_0,
    STSSI_1
} STSSI_T ;
#define READ_STSSI() \
   ((READ_REGISTER_ULONG(0x4) & STSSI_MASK)  >> STSSI_START_BIT)

#define WRITE_STSSI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ STSSI_MASK) | ((val << STSSI_START_BIT) & STSSI_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptshr
//
// Return the value of register PTPTSHR
//
// Notes : Register Ptptshr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_PTPTSHR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptshr
//
// Return the value of register PTPTSHR
//
// Notes : Register Ethernet PTP time stamp high register (PTPTSHR) at the offset 0x8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define STS_MASK 0xFFFFFFFFU
#define STS_OFFSET 31
#define STS_START_BIT 0
#define STS_WIDTH 32


#define PTPTSHR_REG 0x8

typedef enum sts {
    STS_0,
    STS_1
} STS_T ;
#define READ_STS() \
   ((READ_REGISTER_ULONG(0x8) & STS_MASK)  >> STS_START_BIT)

#define WRITE_STS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ STS_MASK) | ((val << STS_START_BIT) & STS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptslr
//
// Return the value of register PTPTSLR
//
// Notes : Register Ptptslr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_PTPTSLR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptslr
//
// Return the value of register PTPTSLR
//
// Notes : Register Ethernet PTP time stamp low register (PTPTSLR) at the offset 0xC, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define STPNS_MASK 0x80000000U
#define STPNS_OFFSET 31
#define STPNS_START_BIT 31
#define STPNS_WIDTH 1


#define PTPTSLR_REG 0xC

typedef enum stpns {
    STPNS_0,
    STPNS_1
} STPNS_T ;
#define WRITE_STPNS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ STPNS_MASK) | ((val << STPNS_START_BIT) & STPNS_MASK )); \
   } 

#define ENABLE_STPNS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  STPNS_MASK ); \
   }

#define DISABLE_STPNS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~STPNS_MASK ); \
   } 

#define READ_STPNS() \
   ((READ_REGISTER_ULONG(0xC) & STPNS_MASK)  >> STPNS_START_BIT)

#define WHEN_STPNS_HIGH() \
     if ( READ_STPNS() )


#define UNLESS_STPNS_HIGH() \
     if (! READ_STPNS() )


#define WAIT_STPNS_LOW() \
    while ( READ_STPNS() );


#define WAIT_STPNS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STPNS() && (--___t___ > 0)); }


#define WAIT_STPNS_HIGH() \
    while (! READ_STPNS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptslr
//
// Return the value of register PTPTSLR
//
// Notes : Register Ethernet PTP time stamp low register (PTPTSLR) at the offset 0xC, Bits 0:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define STSS_MASK 0x7FFFFFFFU
#define STSS_OFFSET 30
#define STSS_START_BIT 0
#define STSS_WIDTH 31



typedef enum stss {
    STSS_0,
    STSS_1
} STSS_T ;
#define READ_STSS() \
   ((READ_REGISTER_ULONG(0xC) & STSS_MASK)  >> STSS_START_BIT)

#define WRITE_STSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ STSS_MASK) | ((val << STSS_START_BIT) & STSS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptshur
//
// Return the value of register PTPTSHUR
//
// Notes : Register Ptptshur at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPTSHUR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_PTPTSHUR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_PTPTSHUR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_PTPTSHUR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptshur
//
// Return the value of register PTPTSHUR
//
// Notes : Register Ethernet PTP time stamp high update register (PTPTSHUR) at the offset 0x10, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSUS_MASK 0xFFFFFFFFU
#define TSUS_OFFSET 31
#define TSUS_START_BIT 0
#define TSUS_WIDTH 32


#define PTPTSHUR_REG 0x10

typedef enum tsus {
    TSUS_0,
    TSUS_1
} TSUS_T ;
#define READ_TSUS() \
   ((READ_REGISTER_ULONG(0x10) & TSUS_MASK)  >> TSUS_START_BIT)

#define WRITE_TSUS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TSUS_MASK) | ((val << TSUS_START_BIT) & TSUS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptslur
//
// Return the value of register PTPTSLUR
//
// Notes : Register Ptptslur at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPTSLUR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_PTPTSLUR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_PTPTSLUR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_PTPTSLUR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptslur
//
// Return the value of register PTPTSLUR
//
// Notes : Register Ethernet PTP time stamp low update register (PTPTSLUR) at the offset 0x14, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSUPNS_MASK 0x80000000U
#define TSUPNS_OFFSET 31
#define TSUPNS_START_BIT 31
#define TSUPNS_WIDTH 1


#define PTPTSLUR_REG 0x14

typedef enum tsupns {
    TSUPNS_0,
    TSUPNS_1
} TSUPNS_T ;
#define WRITE_TSUPNS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TSUPNS_MASK) | ((val << TSUPNS_START_BIT) & TSUPNS_MASK )); \
   } 

#define ENABLE_TSUPNS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  TSUPNS_MASK ); \
   }

#define DISABLE_TSUPNS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~TSUPNS_MASK ); \
   } 

#define READ_TSUPNS() \
   ((READ_REGISTER_ULONG(0x14) & TSUPNS_MASK)  >> TSUPNS_START_BIT)

#define WHEN_TSUPNS_HIGH() \
     if ( READ_TSUPNS() )


#define UNLESS_TSUPNS_HIGH() \
     if (! READ_TSUPNS() )


#define WAIT_TSUPNS_LOW() \
    while ( READ_TSUPNS() );


#define WAIT_TSUPNS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSUPNS() && (--___t___ > 0)); }


#define WAIT_TSUPNS_HIGH() \
    while (! READ_TSUPNS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptslur
//
// Return the value of register PTPTSLUR
//
// Notes : Register Ethernet PTP time stamp low update register (PTPTSLUR) at the offset 0x14, Bits 0:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSUSS_MASK 0x7FFFFFFFU
#define TSUSS_OFFSET 30
#define TSUSS_START_BIT 0
#define TSUSS_WIDTH 31



typedef enum tsuss {
    TSUSS_0,
    TSUSS_1
} TSUSS_T ;
#define READ_TSUSS() \
   ((READ_REGISTER_ULONG(0x14) & TSUSS_MASK)  >> TSUSS_START_BIT)

#define WRITE_TSUSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ TSUSS_MASK) | ((val << TSUSS_START_BIT) & TSUSS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptsar
//
// Return the value of register PTPTSAR
//
// Notes : Register Ptptsar at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPTSAR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_PTPTSAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_PTPTSAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_PTPTSAR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptsar
//
// Return the value of register PTPTSAR
//
// Notes : Register Ethernet PTP time stamp addend register (PTPTSAR) at the offset 0x18, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSA_MASK 0xFFFFFFFFU
#define TSA_OFFSET 31
#define TSA_START_BIT 0
#define TSA_WIDTH 32


#define PTPTSAR_REG 0x18

typedef enum tsa {
    TSA_0,
    TSA_1
} TSA_T ;
#define READ_TSA() \
   ((READ_REGISTER_ULONG(0x18) & TSA_MASK)  >> TSA_START_BIT)

#define WRITE_TSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ TSA_MASK) | ((val << TSA_START_BIT) & TSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptthr
//
// Return the value of register PTPTTHR
//
// Notes : Register Ptptthr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPTTHR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_PTPTTHR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_PTPTTHR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_PTPTTHR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptthr
//
// Return the value of register PTPTTHR
//
// Notes : Register Ethernet PTP target time high register (PTPTTHR) at the offset 0x1C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////
#define TTSH_MASK 0xFFFFFFFFU
#define TTSH_OFFSET 31
#define TTSH_START_BIT 0
#define TTSH_WIDTH 32


#define PTPTTHR_REG 0x1C

typedef enum ttsh {
    TTSH_0,
    TTSH_1
} TTSH_T ;
#define READ_TTSH() \
   ((READ_REGISTER_ULONG(0x1C) & TTSH_MASK)  >> TTSH_START_BIT)

#define WRITE_TTSH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ TTSH_MASK) | ((val << TTSH_START_BIT) & TTSH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpttlr
//
// Return the value of register PTPTTLR
//
// Notes : Register Ptpttlr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PTPTTLR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_PTPTTLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_PTPTTLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_PTPTTLR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpttlr
//
// Return the value of register PTPTTLR
//
// Notes : Register Ethernet PTP target time low register (PTPTTLR) at the offset 0x20, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TTSL_MASK 0xFFFFFFFFU
#define TTSL_OFFSET 31
#define TTSL_START_BIT 0
#define TTSL_WIDTH 32


#define PTPTTLR_REG 0x20

typedef enum ttsl {
    TTSL_0,
    TTSL_1
} TTSL_T ;
#define READ_TTSL() \
   ((READ_REGISTER_ULONG(0x20) & TTSL_MASK)  >> TTSL_START_BIT)

#define WRITE_TTSL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ TTSL_MASK) | ((val << TTSL_START_BIT) & TTSL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptssr
//
// Return the value of register PTPTSSR
//
// Notes : Register Ptptssr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_PTPTSSR() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptssr
//
// Return the value of register PTPTSSR
//
// Notes : Register Ethernet PTP time stamp status register (PTPTSSR) at the offset 0x28, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSTTR_MASK 0x2U
#define TSTTR_OFFSET 1
#define TSTTR_START_BIT 1
#define TSTTR_WIDTH 1


#define PTPTSSR_REG 0x28

typedef enum tsttr {
    TSTTR_0,
    TSTTR_1
} TSTTR_T ;
#define WRITE_TSTTR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ TSTTR_MASK) | ((val << TSTTR_START_BIT) & TSTTR_MASK )); \
   } 

#define ENABLE_TSTTR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  TSTTR_MASK ); \
   }

#define DISABLE_TSTTR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~TSTTR_MASK ); \
   } 

#define READ_TSTTR() \
   ((READ_REGISTER_ULONG(0x28) & TSTTR_MASK)  >> TSTTR_START_BIT)

#define WHEN_TSTTR_HIGH() \
     if ( READ_TSTTR() )


#define UNLESS_TSTTR_HIGH() \
     if (! READ_TSTTR() )


#define WAIT_TSTTR_LOW() \
    while ( READ_TSTTR() );


#define WAIT_TSTTR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSTTR() && (--___t___ > 0)); }


#define WAIT_TSTTR_HIGH() \
    while (! READ_TSTTR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptptssr
//
// Return the value of register PTPTSSR
//
// Notes : Register Ethernet PTP time stamp status register (PTPTSSR) at the offset 0x28, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // no description available 
    // 
#define TSSO_MASK 0x1U
#define TSSO_OFFSET 0
#define TSSO_START_BIT 0
#define TSSO_WIDTH 1



typedef enum tsso {
    TSSO_0,
    TSSO_1
} TSSO_T ;
#define WRITE_TSSO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ TSSO_MASK) | ((val << TSSO_START_BIT) & TSSO_MASK )); \
   } 

#define ENABLE_TSSO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  TSSO_MASK ); \
   }

#define DISABLE_TSSO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG(0x28, val & ~TSSO_MASK ); \
   } 

#define READ_TSSO() \
   ((READ_REGISTER_ULONG(0x28) & TSSO_MASK)  >> TSSO_START_BIT)

#define WHEN_TSSO_HIGH() \
     if ( READ_TSSO() )


#define UNLESS_TSSO_HIGH() \
     if (! READ_TSSO() )


#define WAIT_TSSO_LOW() \
    while ( READ_TSSO() );


#define WAIT_TSSO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSO() && (--___t___ > 0)); }


#define WAIT_TSSO_HIGH() \
    while (! READ_TSSO() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpppscr
//
// Return the value of register PTPPPSCR
//
// Notes : Register Ptpppscr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_PTPPPSCR() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpppscr
//
// Return the value of register PTPPPSCR
//
// Notes : Register Ethernet PTP PPS control register (PTPPPSCR) at the offset 0x2C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TSTTR 
    // 
#define TSTTR_MASK 0x2U
#define TSTTR_OFFSET 1
#define TSTTR_START_BIT 1
#define TSTTR_WIDTH 1


#define PTPPPSCR_REG 0x2C

#define WRITE_TSTTR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ TSTTR_MASK) | ((val << TSTTR_START_BIT) & TSTTR_MASK )); \
   } 

#define ENABLE_TSTTR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  TSTTR_MASK ); \
   }

#define DISABLE_TSTTR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~TSTTR_MASK ); \
   } 

#define READ_TSTTR() \
   ((READ_REGISTER_ULONG(0x2C) & TSTTR_MASK)  >> TSTTR_START_BIT)

#define WHEN_TSTTR_HIGH() \
     if ( READ_TSTTR() )


#define UNLESS_TSTTR_HIGH() \
     if (! READ_TSTTR() )


#define WAIT_TSTTR_LOW() \
    while ( READ_TSTTR() );


#define WAIT_TSTTR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSTTR() && (--___t___ > 0)); }


#define WAIT_TSTTR_HIGH() \
    while (! READ_TSTTR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ptpppscr
//
// Return the value of register PTPPPSCR
//
// Notes : Register Ethernet PTP PPS control register (PTPPPSCR) at the offset 0x2C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TSSO 
    // 
#define TSSO_MASK 0x1U
#define TSSO_OFFSET 0
#define TSSO_START_BIT 0
#define TSSO_WIDTH 1



#define WRITE_TSSO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ TSSO_MASK) | ((val << TSSO_START_BIT) & TSSO_MASK )); \
   } 

#define ENABLE_TSSO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  TSSO_MASK ); \
   }

#define DISABLE_TSSO() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~TSSO_MASK ); \
   } 

#define READ_TSSO() \
   ((READ_REGISTER_ULONG(0x2C) & TSSO_MASK)  >> TSSO_START_BIT)

#define WHEN_TSSO_HIGH() \
     if ( READ_TSSO() )


#define UNLESS_TSSO_HIGH() \
     if (! READ_TSSO() )


#define WAIT_TSSO_LOW() \
    while ( READ_TSSO() );


#define WAIT_TSSO_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSSO() && (--___t___ > 0)); }


#define WAIT_TSSO_HIGH() \
    while (! READ_TSSO() );


