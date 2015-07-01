/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_hs_global.h
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
 
#define OTG_HS_GLOBAL 0x40040000
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OtgHsGotgctl at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Embedded host enable 
    // 
#define EHEN_MASK 0x1000U
#define EHEN_OFFSET 12
#define EHEN_START_BIT 12
#define EHEN_WIDTH 1


#define OTG_HS_GOTGCTL_REG 0x0

#define WRITE_EHEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EHEN_MASK) | ((val << EHEN_START_BIT) & EHEN_MASK )); \
   } 

#define ENABLE_EHEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EHEN_MASK ); \
   }

#define DISABLE_EHEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EHEN_MASK ); \
   } 

#define READ_EHEN() \
   ((READ_REGISTER_ULONG(0x0) & EHEN_MASK)  >> EHEN_START_BIT)

#define WHEN_EHEN_HIGH() \
     if ( READ_EHEN() )


#define UNLESS_EHEN_HIGH() \
     if (! READ_EHEN() )


#define WAIT_EHEN_LOW() \
    while ( READ_EHEN() );


#define WAIT_EHEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EHEN() && (--___t___ > 0)); }


#define WAIT_EHEN_HIGH() \
    while (! READ_EHEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B-session valid 
    // 
#define BSVLD_MASK 0x80000U
#define BSVLD_OFFSET 19
#define BSVLD_START_BIT 19
#define BSVLD_WIDTH 1



#define WRITE_BSVLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BSVLD_MASK) | ((val << BSVLD_START_BIT) & BSVLD_MASK )); \
   } 

#define ENABLE_BSVLD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  BSVLD_MASK ); \
   }

#define DISABLE_BSVLD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~BSVLD_MASK ); \
   } 

#define READ_BSVLD() \
   ((READ_REGISTER_ULONG(0x0) & BSVLD_MASK)  >> BSVLD_START_BIT)

#define WHEN_BSVLD_HIGH() \
     if ( READ_BSVLD() )


#define UNLESS_BSVLD_HIGH() \
     if (! READ_BSVLD() )


#define WAIT_BSVLD_LOW() \
    while ( READ_BSVLD() );


#define WAIT_BSVLD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BSVLD() && (--___t___ > 0)); }


#define WAIT_BSVLD_HIGH() \
    while (! READ_BSVLD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // A-session valid 
    // 
#define ASVLD_MASK 0x40000U
#define ASVLD_OFFSET 18
#define ASVLD_START_BIT 18
#define ASVLD_WIDTH 1



#define WRITE_ASVLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ASVLD_MASK) | ((val << ASVLD_START_BIT) & ASVLD_MASK )); \
   } 

#define ENABLE_ASVLD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ASVLD_MASK ); \
   }

#define DISABLE_ASVLD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ASVLD_MASK ); \
   } 

#define READ_ASVLD() \
   ((READ_REGISTER_ULONG(0x0) & ASVLD_MASK)  >> ASVLD_START_BIT)

#define WHEN_ASVLD_HIGH() \
     if ( READ_ASVLD() )


#define UNLESS_ASVLD_HIGH() \
     if (! READ_ASVLD() )


#define WAIT_ASVLD_LOW() \
    while ( READ_ASVLD() );


#define WAIT_ASVLD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ASVLD() && (--___t___ > 0)); }


#define WAIT_ASVLD_HIGH() \
    while (! READ_ASVLD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Long/short debounce time 
    // 
#define DBCT_MASK 0x20000U
#define DBCT_OFFSET 17
#define DBCT_START_BIT 17
#define DBCT_WIDTH 1



#define WRITE_DBCT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DBCT_MASK) | ((val << DBCT_START_BIT) & DBCT_MASK )); \
   } 

#define ENABLE_DBCT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DBCT_MASK ); \
   }

#define DISABLE_DBCT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DBCT_MASK ); \
   } 

#define READ_DBCT() \
   ((READ_REGISTER_ULONG(0x0) & DBCT_MASK)  >> DBCT_START_BIT)

#define WHEN_DBCT_HIGH() \
     if ( READ_DBCT() )


#define UNLESS_DBCT_HIGH() \
     if (! READ_DBCT() )


#define WAIT_DBCT_LOW() \
    while ( READ_DBCT() );


#define WAIT_DBCT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBCT() && (--___t___ > 0)); }


#define WAIT_DBCT_HIGH() \
    while (! READ_DBCT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Connector ID status 
    // 
#define CIDSTS_MASK 0x10000U
#define CIDSTS_OFFSET 16
#define CIDSTS_START_BIT 16
#define CIDSTS_WIDTH 1



#define WRITE_CIDSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CIDSTS_MASK) | ((val << CIDSTS_START_BIT) & CIDSTS_MASK )); \
   } 

#define ENABLE_CIDSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CIDSTS_MASK ); \
   }

#define DISABLE_CIDSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CIDSTS_MASK ); \
   } 

#define READ_CIDSTS() \
   ((READ_REGISTER_ULONG(0x0) & CIDSTS_MASK)  >> CIDSTS_START_BIT)

#define WHEN_CIDSTS_HIGH() \
     if ( READ_CIDSTS() )


#define UNLESS_CIDSTS_HIGH() \
     if (! READ_CIDSTS() )


#define WAIT_CIDSTS_LOW() \
    while ( READ_CIDSTS() );


#define WAIT_CIDSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIDSTS() && (--___t___ > 0)); }


#define WAIT_CIDSTS_HIGH() \
    while (! READ_CIDSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device HNP enabled 
    // 
#define DHNPEN_MASK 0x800U
#define DHNPEN_OFFSET 11
#define DHNPEN_START_BIT 11
#define DHNPEN_WIDTH 1



#define WRITE_DHNPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DHNPEN_MASK) | ((val << DHNPEN_START_BIT) & DHNPEN_MASK )); \
   } 

#define ENABLE_DHNPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  DHNPEN_MASK ); \
   }

#define DISABLE_DHNPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~DHNPEN_MASK ); \
   } 

#define READ_DHNPEN() \
   ((READ_REGISTER_ULONG(0x0) & DHNPEN_MASK)  >> DHNPEN_START_BIT)

#define WHEN_DHNPEN_HIGH() \
     if ( READ_DHNPEN() )


#define UNLESS_DHNPEN_HIGH() \
     if (! READ_DHNPEN() )


#define WAIT_DHNPEN_LOW() \
    while ( READ_DHNPEN() );


#define WAIT_DHNPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DHNPEN() && (--___t___ > 0)); }


#define WAIT_DHNPEN_HIGH() \
    while (! READ_DHNPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host set HNP enable 
    // 
#define HSHNPEN_MASK 0x400U
#define HSHNPEN_OFFSET 10
#define HSHNPEN_START_BIT 10
#define HSHNPEN_WIDTH 1



#define WRITE_HSHNPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HSHNPEN_MASK) | ((val << HSHNPEN_START_BIT) & HSHNPEN_MASK )); \
   } 

#define ENABLE_HSHNPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HSHNPEN_MASK ); \
   }

#define DISABLE_HSHNPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HSHNPEN_MASK ); \
   } 

#define READ_HSHNPEN() \
   ((READ_REGISTER_ULONG(0x0) & HSHNPEN_MASK)  >> HSHNPEN_START_BIT)

#define WHEN_HSHNPEN_HIGH() \
     if ( READ_HSHNPEN() )


#define UNLESS_HSHNPEN_HIGH() \
     if (! READ_HSHNPEN() )


#define WAIT_HSHNPEN_LOW() \
    while ( READ_HSHNPEN() );


#define WAIT_HSHNPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSHNPEN() && (--___t___ > 0)); }


#define WAIT_HSHNPEN_HIGH() \
    while (! READ_HSHNPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HNP request 
    // 
#define HNPRQ_MASK 0x200U
#define HNPRQ_OFFSET 9
#define HNPRQ_START_BIT 9
#define HNPRQ_WIDTH 1



#define WRITE_HNPRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HNPRQ_MASK) | ((val << HNPRQ_START_BIT) & HNPRQ_MASK )); \
   } 

#define ENABLE_HNPRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HNPRQ_MASK ); \
   }

#define DISABLE_HNPRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HNPRQ_MASK ); \
   } 

#define READ_HNPRQ() \
   ((READ_REGISTER_ULONG(0x0) & HNPRQ_MASK)  >> HNPRQ_START_BIT)

#define WHEN_HNPRQ_HIGH() \
     if ( READ_HNPRQ() )


#define UNLESS_HNPRQ_HIGH() \
     if (! READ_HNPRQ() )


#define WAIT_HNPRQ_LOW() \
    while ( READ_HNPRQ() );


#define WAIT_HNPRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HNPRQ() && (--___t___ > 0)); }


#define WAIT_HNPRQ_HIGH() \
    while (! READ_HNPRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host negotiation success 
    // 
#define HNGSCS_MASK 0x100U
#define HNGSCS_OFFSET 8
#define HNGSCS_START_BIT 8
#define HNGSCS_WIDTH 1



#define WRITE_HNGSCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HNGSCS_MASK) | ((val << HNGSCS_START_BIT) & HNGSCS_MASK )); \
   } 

#define ENABLE_HNGSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  HNGSCS_MASK ); \
   }

#define DISABLE_HNGSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~HNGSCS_MASK ); \
   } 

#define READ_HNGSCS() \
   ((READ_REGISTER_ULONG(0x0) & HNGSCS_MASK)  >> HNGSCS_START_BIT)

#define WHEN_HNGSCS_HIGH() \
     if ( READ_HNGSCS() )


#define UNLESS_HNGSCS_HIGH() \
     if (! READ_HNGSCS() )


#define WAIT_HNGSCS_LOW() \
    while ( READ_HNGSCS() );


#define WAIT_HNGSCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HNGSCS() && (--___t___ > 0)); }


#define WAIT_HNGSCS_HIGH() \
    while (! READ_HNGSCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request 
    // 
#define SRQ_MASK 0x2U
#define SRQ_OFFSET 1
#define SRQ_START_BIT 1
#define SRQ_WIDTH 1



#define WRITE_SRQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SRQ_MASK) | ((val << SRQ_START_BIT) & SRQ_MASK )); \
   } 

#define ENABLE_SRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  SRQ_MASK ); \
   }

#define DISABLE_SRQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~SRQ_MASK ); \
   } 

#define READ_SRQ() \
   ((READ_REGISTER_ULONG(0x0) & SRQ_MASK)  >> SRQ_START_BIT)

#define WHEN_SRQ_HIGH() \
     if ( READ_SRQ() )


#define UNLESS_SRQ_HIGH() \
     if (! READ_SRQ() )


#define WAIT_SRQ_LOW() \
    while ( READ_SRQ() );


#define WAIT_SRQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRQ() && (--___t___ > 0)); }


#define WAIT_SRQ_HIGH() \
    while (! READ_SRQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgctl
//
// Return the value of register OTG_HS_GOTGCTL
//
// Notes : Register OTG_HS control and status register (OTG_HS_GOTGCTL) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request success 
    // 
#define SRQSCS_MASK 0x1U
#define SRQSCS_OFFSET 0
#define SRQSCS_START_BIT 0
#define SRQSCS_WIDTH 1



#define WRITE_SRQSCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SRQSCS_MASK) | ((val << SRQSCS_START_BIT) & SRQSCS_MASK )); \
   } 

#define ENABLE_SRQSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  SRQSCS_MASK ); \
   }

#define DISABLE_SRQSCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~SRQSCS_MASK ); \
   } 

#define READ_SRQSCS() \
   ((READ_REGISTER_ULONG(0x0) & SRQSCS_MASK)  >> SRQSCS_START_BIT)

#define WHEN_SRQSCS_HIGH() \
     if ( READ_SRQSCS() )


#define UNLESS_SRQSCS_HIGH() \
     if (! READ_SRQSCS() )


#define WAIT_SRQSCS_LOW() \
    while ( READ_SRQSCS() );


#define WAIT_SRQSCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRQSCS() && (--___t___ > 0)); }


#define WAIT_SRQSCS_HIGH() \
    while (! READ_SRQSCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OtgHsGotgint at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_GOTGINT( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_OTG_HS_GOTGINT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_GOTGINT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_GOTGINT() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ID input pin changed 
    // 
#define IDCHNG_MASK 0x100000U
#define IDCHNG_OFFSET 20
#define IDCHNG_START_BIT 20
#define IDCHNG_WIDTH 1


#define OTG_HS_GOTGINT_REG 0x4

#define WRITE_IDCHNG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ IDCHNG_MASK) | ((val << IDCHNG_START_BIT) & IDCHNG_MASK )); \
   } 

#define ENABLE_IDCHNG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  IDCHNG_MASK ); \
   }

#define DISABLE_IDCHNG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~IDCHNG_MASK ); \
   } 

#define READ_IDCHNG() \
   ((READ_REGISTER_ULONG(0x4) & IDCHNG_MASK)  >> IDCHNG_START_BIT)

#define WHEN_IDCHNG_HIGH() \
     if ( READ_IDCHNG() )


#define UNLESS_IDCHNG_HIGH() \
     if (! READ_IDCHNG() )


#define WAIT_IDCHNG_LOW() \
    while ( READ_IDCHNG() );


#define WAIT_IDCHNG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDCHNG() && (--___t___ > 0)); }


#define WAIT_IDCHNG_HIGH() \
    while (! READ_IDCHNG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Debounce done 
    // 
#define DBCDNE_MASK 0x80000U
#define DBCDNE_OFFSET 19
#define DBCDNE_START_BIT 19
#define DBCDNE_WIDTH 1



#define WRITE_DBCDNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DBCDNE_MASK) | ((val << DBCDNE_START_BIT) & DBCDNE_MASK )); \
   } 

#define ENABLE_DBCDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DBCDNE_MASK ); \
   }

#define DISABLE_DBCDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DBCDNE_MASK ); \
   } 

#define READ_DBCDNE() \
   ((READ_REGISTER_ULONG(0x4) & DBCDNE_MASK)  >> DBCDNE_START_BIT)

#define WHEN_DBCDNE_HIGH() \
     if ( READ_DBCDNE() )


#define UNLESS_DBCDNE_HIGH() \
     if (! READ_DBCDNE() )


#define WAIT_DBCDNE_LOW() \
    while ( READ_DBCDNE() );


#define WAIT_DBCDNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBCDNE() && (--___t___ > 0)); }


#define WAIT_DBCDNE_HIGH() \
    while (! READ_DBCDNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // A-device timeout change 
    // 
#define ADTOCHG_MASK 0x40000U
#define ADTOCHG_OFFSET 18
#define ADTOCHG_START_BIT 18
#define ADTOCHG_WIDTH 1



#define WRITE_ADTOCHG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADTOCHG_MASK) | ((val << ADTOCHG_START_BIT) & ADTOCHG_MASK )); \
   } 

#define ENABLE_ADTOCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  ADTOCHG_MASK ); \
   }

#define DISABLE_ADTOCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~ADTOCHG_MASK ); \
   } 

#define READ_ADTOCHG() \
   ((READ_REGISTER_ULONG(0x4) & ADTOCHG_MASK)  >> ADTOCHG_START_BIT)

#define WHEN_ADTOCHG_HIGH() \
     if ( READ_ADTOCHG() )


#define UNLESS_ADTOCHG_HIGH() \
     if (! READ_ADTOCHG() )


#define WAIT_ADTOCHG_LOW() \
    while ( READ_ADTOCHG() );


#define WAIT_ADTOCHG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADTOCHG() && (--___t___ > 0)); }


#define WAIT_ADTOCHG_HIGH() \
    while (! READ_ADTOCHG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host negotiation detected 
    // 
#define HNGDET_MASK 0x20000U
#define HNGDET_OFFSET 17
#define HNGDET_START_BIT 17
#define HNGDET_WIDTH 1



#define WRITE_HNGDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HNGDET_MASK) | ((val << HNGDET_START_BIT) & HNGDET_MASK )); \
   } 

#define ENABLE_HNGDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HNGDET_MASK ); \
   }

#define DISABLE_HNGDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HNGDET_MASK ); \
   } 

#define READ_HNGDET() \
   ((READ_REGISTER_ULONG(0x4) & HNGDET_MASK)  >> HNGDET_START_BIT)

#define WHEN_HNGDET_HIGH() \
     if ( READ_HNGDET() )


#define UNLESS_HNGDET_HIGH() \
     if (! READ_HNGDET() )


#define WAIT_HNGDET_LOW() \
    while ( READ_HNGDET() );


#define WAIT_HNGDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HNGDET() && (--___t___ > 0)); }


#define WAIT_HNGDET_HIGH() \
    while (! READ_HNGDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host negotiation success status change 
    // 
#define HNSSCHG_MASK 0x200U
#define HNSSCHG_OFFSET 9
#define HNSSCHG_START_BIT 9
#define HNSSCHG_WIDTH 1



#define WRITE_HNSSCHG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ HNSSCHG_MASK) | ((val << HNSSCHG_START_BIT) & HNSSCHG_MASK )); \
   } 

#define ENABLE_HNSSCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  HNSSCHG_MASK ); \
   }

#define DISABLE_HNSSCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~HNSSCHG_MASK ); \
   } 

#define READ_HNSSCHG() \
   ((READ_REGISTER_ULONG(0x4) & HNSSCHG_MASK)  >> HNSSCHG_START_BIT)

#define WHEN_HNSSCHG_HIGH() \
     if ( READ_HNSSCHG() )


#define UNLESS_HNSSCHG_HIGH() \
     if (! READ_HNSSCHG() )


#define WAIT_HNSSCHG_LOW() \
    while ( READ_HNSSCHG() );


#define WAIT_HNSSCHG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HNSSCHG() && (--___t___ > 0)); }


#define WAIT_HNSSCHG_HIGH() \
    while (! READ_HNSSCHG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request success status change 
    // 
#define SRSSCHG_MASK 0x100U
#define SRSSCHG_OFFSET 8
#define SRSSCHG_START_BIT 8
#define SRSSCHG_WIDTH 1



#define WRITE_SRSSCHG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SRSSCHG_MASK) | ((val << SRSSCHG_START_BIT) & SRSSCHG_MASK )); \
   } 

#define ENABLE_SRSSCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SRSSCHG_MASK ); \
   }

#define DISABLE_SRSSCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SRSSCHG_MASK ); \
   } 

#define READ_SRSSCHG() \
   ((READ_REGISTER_ULONG(0x4) & SRSSCHG_MASK)  >> SRSSCHG_START_BIT)

#define WHEN_SRSSCHG_HIGH() \
     if ( READ_SRSSCHG() )


#define UNLESS_SRSSCHG_HIGH() \
     if (! READ_SRSSCHG() )


#define WAIT_SRSSCHG_LOW() \
    while ( READ_SRSSCHG() );


#define WAIT_SRSSCHG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRSSCHG() && (--___t___ > 0)); }


#define WAIT_SRSSCHG_HIGH() \
    while (! READ_SRSSCHG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGotgint
//
// Return the value of register OTG_HS_GOTGINT
//
// Notes : Register OTG_HS interrupt register (OTG_HS_GOTGINT) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session end detected 
    // 
#define SEDET_MASK 0x4U
#define SEDET_OFFSET 2
#define SEDET_START_BIT 2
#define SEDET_WIDTH 1



#define WRITE_SEDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SEDET_MASK) | ((val << SEDET_START_BIT) & SEDET_MASK )); \
   } 

#define ENABLE_SEDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SEDET_MASK ); \
   }

#define DISABLE_SEDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SEDET_MASK ); \
   } 

#define READ_SEDET() \
   ((READ_REGISTER_ULONG(0x4) & SEDET_MASK)  >> SEDET_START_BIT)

#define WHEN_SEDET_HIGH() \
     if ( READ_SEDET() )


#define UNLESS_SEDET_HIGH() \
     if (! READ_SEDET() )


#define WAIT_SEDET_LOW() \
    while ( READ_SEDET() );


#define WAIT_SEDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SEDET() && (--___t___ > 0)); }


#define WAIT_SEDET_HIGH() \
    while (! READ_SEDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGahbcfg
//
// Return the value of register OTG_HS_GAHBCFG
//
// Notes : Register OtgHsGahbcfg at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_GAHBCFG( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_OTG_HS_GAHBCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_GAHBCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_GAHBCFG() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGahbcfg
//
// Return the value of register OTG_HS_GAHBCFG
//
// Notes : Register OTG_HS AHB configuration register (OTG_HS_GAHBCFG) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic TxFIFO empty level 
    // 
#define PTXFELVL_MASK 0x100U
#define PTXFELVL_OFFSET 8
#define PTXFELVL_START_BIT 8
#define PTXFELVL_WIDTH 1


#define OTG_HS_GAHBCFG_REG 0x8

#define WRITE_PTXFELVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ PTXFELVL_MASK) | ((val << PTXFELVL_START_BIT) & PTXFELVL_MASK )); \
   } 

#define ENABLE_PTXFELVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  PTXFELVL_MASK ); \
   }

#define DISABLE_PTXFELVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~PTXFELVL_MASK ); \
   } 

#define READ_PTXFELVL() \
   ((READ_REGISTER_ULONG(0x8) & PTXFELVL_MASK)  >> PTXFELVL_START_BIT)

#define WHEN_PTXFELVL_HIGH() \
     if ( READ_PTXFELVL() )


#define UNLESS_PTXFELVL_HIGH() \
     if (! READ_PTXFELVL() )


#define WAIT_PTXFELVL_LOW() \
    while ( READ_PTXFELVL() );


#define WAIT_PTXFELVL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PTXFELVL() && (--___t___ > 0)); }


#define WAIT_PTXFELVL_HIGH() \
    while (! READ_PTXFELVL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGahbcfg
//
// Return the value of register OTG_HS_GAHBCFG
//
// Notes : Register OTG_HS AHB configuration register (OTG_HS_GAHBCFG) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO empty level 
    // 
#define TXFELVL_MASK 0x80U
#define TXFELVL_OFFSET 7
#define TXFELVL_START_BIT 7
#define TXFELVL_WIDTH 1



#define WRITE_TXFELVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TXFELVL_MASK) | ((val << TXFELVL_START_BIT) & TXFELVL_MASK )); \
   } 

#define ENABLE_TXFELVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TXFELVL_MASK ); \
   }

#define DISABLE_TXFELVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TXFELVL_MASK ); \
   } 

#define READ_TXFELVL() \
   ((READ_REGISTER_ULONG(0x8) & TXFELVL_MASK)  >> TXFELVL_START_BIT)

#define WHEN_TXFELVL_HIGH() \
     if ( READ_TXFELVL() )


#define UNLESS_TXFELVL_HIGH() \
     if (! READ_TXFELVL() )


#define WAIT_TXFELVL_LOW() \
    while ( READ_TXFELVL() );


#define WAIT_TXFELVL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFELVL() && (--___t___ > 0)); }


#define WAIT_TXFELVL_HIGH() \
    while (! READ_TXFELVL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGahbcfg
//
// Return the value of register OTG_HS_GAHBCFG
//
// Notes : Register OTG_HS AHB configuration register (OTG_HS_GAHBCFG) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable 
    // 
#define DMAEN_MASK 0x20U
#define DMAEN_OFFSET 5
#define DMAEN_START_BIT 5
#define DMAEN_WIDTH 1



typedef enum dmaen {
    DMAEN_0,
    DMAEN_1
} DMAEN_T ;
#define WRITE_DMAEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DMAEN_MASK) | ((val << DMAEN_START_BIT) & DMAEN_MASK )); \
   } 

#define ENABLE_DMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DMAEN_MASK ); \
   }

#define DISABLE_DMAEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DMAEN_MASK ); \
   } 

#define READ_DMAEN() \
   ((READ_REGISTER_ULONG(0x8) & DMAEN_MASK)  >> DMAEN_START_BIT)

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
// Function : OtgHsGahbcfg
//
// Return the value of register OTG_HS_GAHBCFG
//
// Notes : Register OTG_HS AHB configuration register (OTG_HS_GAHBCFG) at the offset 0x8, Bits 1:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Burst length/type 
    // 
#define HBSTLEN_MASK 0x1EU
#define HBSTLEN_OFFSET 4
#define HBSTLEN_START_BIT 1
#define HBSTLEN_WIDTH 4



typedef enum hbstlen {
    HBSTLEN_0,
    HBSTLEN_1
} HBSTLEN_T ;
#define READ_HBSTLEN() \
   ((READ_REGISTER_ULONG(0x8) & HBSTLEN_MASK)  >> HBSTLEN_START_BIT)

#define WRITE_HBSTLEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ HBSTLEN_MASK) | ((val << HBSTLEN_START_BIT) & HBSTLEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGahbcfg
//
// Return the value of register OTG_HS_GAHBCFG
//
// Notes : Register OTG_HS AHB configuration register (OTG_HS_GAHBCFG) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global interrupt mask 
    // 
#define GINT_MASK 0x1U
#define GINT_OFFSET 0
#define GINT_START_BIT 0
#define GINT_WIDTH 1



#define WRITE_GINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ GINT_MASK) | ((val << GINT_START_BIT) & GINT_MASK )); \
   } 

#define ENABLE_GINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  GINT_MASK ); \
   }

#define DISABLE_GINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~GINT_MASK ); \
   } 

#define READ_GINT() \
   ((READ_REGISTER_ULONG(0x8) & GINT_MASK)  >> GINT_START_BIT)

#define WHEN_GINT_HIGH() \
     if ( READ_GINT() )


#define UNLESS_GINT_HIGH() \
     if (! READ_GINT() )


#define WAIT_GINT_LOW() \
    while ( READ_GINT() );


#define WAIT_GINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GINT() && (--___t___ > 0)); }


#define WAIT_GINT_HIGH() \
    while (! READ_GINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OtgHsGusbcfg at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Forced peripheral mode 
    // 
#define FDMOD_MASK 0x40000000U
#define FDMOD_OFFSET 30
#define FDMOD_START_BIT 30
#define FDMOD_WIDTH 1


#define OTG_HS_GUSBCFG_REG 0xC

#define WRITE_FDMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ FDMOD_MASK) | ((val << FDMOD_START_BIT) & FDMOD_MASK )); \
   } 

#define ENABLE_FDMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  FDMOD_MASK ); \
   }

#define DISABLE_FDMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~FDMOD_MASK ); \
   } 

#define READ_FDMOD() \
   ((READ_REGISTER_ULONG(0xC) & FDMOD_MASK)  >> FDMOD_START_BIT)

#define WHEN_FDMOD_HIGH() \
     if ( READ_FDMOD() )


#define UNLESS_FDMOD_HIGH() \
     if (! READ_FDMOD() )


#define WAIT_FDMOD_LOW() \
    while ( READ_FDMOD() );


#define WAIT_FDMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FDMOD() && (--___t___ > 0)); }


#define WAIT_FDMOD_HIGH() \
    while (! READ_FDMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Forced host mode 
    // 
#define FHMOD_MASK 0x20000000U
#define FHMOD_OFFSET 29
#define FHMOD_START_BIT 29
#define FHMOD_WIDTH 1



#define WRITE_FHMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ FHMOD_MASK) | ((val << FHMOD_START_BIT) & FHMOD_MASK )); \
   } 

#define ENABLE_FHMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  FHMOD_MASK ); \
   }

#define DISABLE_FHMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~FHMOD_MASK ); \
   } 

#define READ_FHMOD() \
   ((READ_REGISTER_ULONG(0xC) & FHMOD_MASK)  >> FHMOD_START_BIT)

#define WHEN_FHMOD_HIGH() \
     if ( READ_FHMOD() )


#define UNLESS_FHMOD_HIGH() \
     if (! READ_FHMOD() )


#define WAIT_FHMOD_LOW() \
    while ( READ_FHMOD() );


#define WAIT_FHMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FHMOD() && (--___t___ > 0)); }


#define WAIT_FHMOD_HIGH() \
    while (! READ_FHMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ULPI interface protect disable 
    // 
#define ULPIIPD_MASK 0x2000000U
#define ULPIIPD_OFFSET 25
#define ULPIIPD_START_BIT 25
#define ULPIIPD_WIDTH 1



typedef enum ulpiipd {
    ULPIIPD_0,
    ULPIIPD_1
} ULPIIPD_T ;
#define WRITE_ULPIIPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ULPIIPD_MASK) | ((val << ULPIIPD_START_BIT) & ULPIIPD_MASK )); \
   } 

#define ENABLE_ULPIIPD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ULPIIPD_MASK ); \
   }

#define DISABLE_ULPIIPD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ULPIIPD_MASK ); \
   } 

#define READ_ULPIIPD() \
   ((READ_REGISTER_ULONG(0xC) & ULPIIPD_MASK)  >> ULPIIPD_START_BIT)

#define WHEN_ULPIIPD_HIGH() \
     if ( READ_ULPIIPD() )


#define UNLESS_ULPIIPD_HIGH() \
     if (! READ_ULPIIPD() )


#define WAIT_ULPIIPD_LOW() \
    while ( READ_ULPIIPD() );


#define WAIT_ULPIIPD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ULPIIPD() && (--___t___ > 0)); }


#define WAIT_ULPIIPD_HIGH() \
    while (! READ_ULPIIPD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Indicator pass through 
    // 
#define PTCI_MASK 0x1000000U
#define PTCI_OFFSET 24
#define PTCI_START_BIT 24
#define PTCI_WIDTH 1



typedef enum ptci {
    PTCI_0,
    PTCI_1
} PTCI_T ;
#define WRITE_PTCI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PTCI_MASK) | ((val << PTCI_START_BIT) & PTCI_MASK )); \
   } 

#define ENABLE_PTCI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PTCI_MASK ); \
   }

#define DISABLE_PTCI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PTCI_MASK ); \
   } 

#define READ_PTCI() \
   ((READ_REGISTER_ULONG(0xC) & PTCI_MASK)  >> PTCI_START_BIT)

#define WHEN_PTCI_HIGH() \
     if ( READ_PTCI() )


#define UNLESS_PTCI_HIGH() \
     if (! READ_PTCI() )


#define WAIT_PTCI_LOW() \
    while ( READ_PTCI() );


#define WAIT_PTCI_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PTCI() && (--___t___ > 0)); }


#define WAIT_PTCI_HIGH() \
    while (! READ_PTCI() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Indicator complement 
    // 
#define PCCI_MASK 0x800000U
#define PCCI_OFFSET 23
#define PCCI_START_BIT 23
#define PCCI_WIDTH 1



typedef enum pcci {
    PCCI_0,
    PCCI_1
} PCCI_T ;
#define WRITE_PCCI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PCCI_MASK) | ((val << PCCI_START_BIT) & PCCI_MASK )); \
   } 

#define ENABLE_PCCI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PCCI_MASK ); \
   }

#define DISABLE_PCCI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PCCI_MASK ); \
   } 

#define READ_PCCI() \
   ((READ_REGISTER_ULONG(0xC) & PCCI_MASK)  >> PCCI_START_BIT)

#define WHEN_PCCI_HIGH() \
     if ( READ_PCCI() )


#define UNLESS_PCCI_HIGH() \
     if (! READ_PCCI() )


#define WAIT_PCCI_LOW() \
    while ( READ_PCCI() );


#define WAIT_PCCI_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PCCI() && (--___t___ > 0)); }


#define WAIT_PCCI_HIGH() \
    while (! READ_PCCI() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TermSel DLine pulsing selection 
    // 
#define TSDPS_MASK 0x400000U
#define TSDPS_OFFSET 22
#define TSDPS_START_BIT 22
#define TSDPS_WIDTH 1



typedef enum tsdps {
    TSDPS_0,
    TSDPS_1
} TSDPS_T ;
#define WRITE_TSDPS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TSDPS_MASK) | ((val << TSDPS_START_BIT) & TSDPS_MASK )); \
   } 

#define ENABLE_TSDPS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TSDPS_MASK ); \
   }

#define DISABLE_TSDPS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TSDPS_MASK ); \
   } 

#define READ_TSDPS() \
   ((READ_REGISTER_ULONG(0xC) & TSDPS_MASK)  >> TSDPS_START_BIT)

#define WHEN_TSDPS_HIGH() \
     if ( READ_TSDPS() )


#define UNLESS_TSDPS_HIGH() \
     if (! READ_TSDPS() )


#define WAIT_TSDPS_LOW() \
    while ( READ_TSDPS() );


#define WAIT_TSDPS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSDPS() && (--___t___ > 0)); }


#define WAIT_TSDPS_HIGH() \
    while (! READ_TSDPS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ULPI external VBUS indicator 
    // 
#define ULPIEVBUSI_MASK 0x200000U
#define ULPIEVBUSI_OFFSET 21
#define ULPIEVBUSI_START_BIT 21
#define ULPIEVBUSI_WIDTH 1



typedef enum ulpievbusi {
    ULPIEVBUSI_0,
    ULPIEVBUSI_1
} ULPIEVBUSI_T ;
#define WRITE_ULPIEVBUSI(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ULPIEVBUSI_MASK) | ((val << ULPIEVBUSI_START_BIT) & ULPIEVBUSI_MASK )); \
   } 

#define ENABLE_ULPIEVBUSI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ULPIEVBUSI_MASK ); \
   }

#define DISABLE_ULPIEVBUSI() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ULPIEVBUSI_MASK ); \
   } 

#define READ_ULPIEVBUSI() \
   ((READ_REGISTER_ULONG(0xC) & ULPIEVBUSI_MASK)  >> ULPIEVBUSI_START_BIT)

#define WHEN_ULPIEVBUSI_HIGH() \
     if ( READ_ULPIEVBUSI() )


#define UNLESS_ULPIEVBUSI_HIGH() \
     if (! READ_ULPIEVBUSI() )


#define WAIT_ULPIEVBUSI_LOW() \
    while ( READ_ULPIEVBUSI() );


#define WAIT_ULPIEVBUSI_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ULPIEVBUSI() && (--___t___ > 0)); }


#define WAIT_ULPIEVBUSI_HIGH() \
    while (! READ_ULPIEVBUSI() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ULPI External VBUS Drive 
    // 
#define ULPIEVBUSD_MASK 0x100000U
#define ULPIEVBUSD_OFFSET 20
#define ULPIEVBUSD_START_BIT 20
#define ULPIEVBUSD_WIDTH 1



typedef enum ulpievbusd {
    ULPIEVBUSD_0,
    ULPIEVBUSD_1
} ULPIEVBUSD_T ;
#define WRITE_ULPIEVBUSD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ULPIEVBUSD_MASK) | ((val << ULPIEVBUSD_START_BIT) & ULPIEVBUSD_MASK )); \
   } 

#define ENABLE_ULPIEVBUSD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ULPIEVBUSD_MASK ); \
   }

#define DISABLE_ULPIEVBUSD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ULPIEVBUSD_MASK ); \
   } 

#define READ_ULPIEVBUSD() \
   ((READ_REGISTER_ULONG(0xC) & ULPIEVBUSD_MASK)  >> ULPIEVBUSD_START_BIT)

#define WHEN_ULPIEVBUSD_HIGH() \
     if ( READ_ULPIEVBUSD() )


#define UNLESS_ULPIEVBUSD_HIGH() \
     if (! READ_ULPIEVBUSD() )


#define WAIT_ULPIEVBUSD_LOW() \
    while ( READ_ULPIEVBUSD() );


#define WAIT_ULPIEVBUSD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ULPIEVBUSD() && (--___t___ > 0)); }


#define WAIT_ULPIEVBUSD_HIGH() \
    while (! READ_ULPIEVBUSD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ULPI Clock SuspendM 
    // 
#define ULPICSM_MASK 0x80000U
#define ULPICSM_OFFSET 19
#define ULPICSM_START_BIT 19
#define ULPICSM_WIDTH 1



typedef enum ulpicsm {
    ULPICSM_0,
    ULPICSM_1
} ULPICSM_T ;
#define WRITE_ULPICSM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ULPICSM_MASK) | ((val << ULPICSM_START_BIT) & ULPICSM_MASK )); \
   } 

#define ENABLE_ULPICSM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ULPICSM_MASK ); \
   }

#define DISABLE_ULPICSM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ULPICSM_MASK ); \
   } 

#define READ_ULPICSM() \
   ((READ_REGISTER_ULONG(0xC) & ULPICSM_MASK)  >> ULPICSM_START_BIT)

#define WHEN_ULPICSM_HIGH() \
     if ( READ_ULPICSM() )


#define UNLESS_ULPICSM_HIGH() \
     if (! READ_ULPICSM() )


#define WAIT_ULPICSM_LOW() \
    while ( READ_ULPICSM() );


#define WAIT_ULPICSM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ULPICSM() && (--___t___ > 0)); }


#define WAIT_ULPICSM_HIGH() \
    while (! READ_ULPICSM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ULPI Auto-resume 
    // 
#define ULPIAR_MASK 0x40000U
#define ULPIAR_OFFSET 18
#define ULPIAR_START_BIT 18
#define ULPIAR_WIDTH 1



typedef enum ulpiar {
    ULPIAR_0,
    ULPIAR_1
} ULPIAR_T ;
#define WRITE_ULPIAR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ULPIAR_MASK) | ((val << ULPIAR_START_BIT) & ULPIAR_MASK )); \
   } 

#define ENABLE_ULPIAR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ULPIAR_MASK ); \
   }

#define DISABLE_ULPIAR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ULPIAR_MASK ); \
   } 

#define READ_ULPIAR() \
   ((READ_REGISTER_ULONG(0xC) & ULPIAR_MASK)  >> ULPIAR_START_BIT)

#define WHEN_ULPIAR_HIGH() \
     if ( READ_ULPIAR() )


#define UNLESS_ULPIAR_HIGH() \
     if (! READ_ULPIAR() )


#define WAIT_ULPIAR_LOW() \
    while ( READ_ULPIAR() );


#define WAIT_ULPIAR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ULPIAR() && (--___t___ > 0)); }


#define WAIT_ULPIAR_HIGH() \
    while (! READ_ULPIAR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ULPI FS/LS select 
    // 
#define ULPIFSLS_MASK 0x20000U
#define ULPIFSLS_OFFSET 17
#define ULPIFSLS_START_BIT 17
#define ULPIFSLS_WIDTH 1



typedef enum ulpifsls {
    ULPIFSLS_0,
    ULPIFSLS_1
} ULPIFSLS_T ;
#define WRITE_ULPIFSLS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ULPIFSLS_MASK) | ((val << ULPIFSLS_START_BIT) & ULPIFSLS_MASK )); \
   } 

#define ENABLE_ULPIFSLS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ULPIFSLS_MASK ); \
   }

#define DISABLE_ULPIFSLS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ULPIFSLS_MASK ); \
   } 

#define READ_ULPIFSLS() \
   ((READ_REGISTER_ULONG(0xC) & ULPIFSLS_MASK)  >> ULPIFSLS_START_BIT)

#define WHEN_ULPIFSLS_HIGH() \
     if ( READ_ULPIFSLS() )


#define UNLESS_ULPIFSLS_HIGH() \
     if (! READ_ULPIFSLS() )


#define WAIT_ULPIFSLS_LOW() \
    while ( READ_ULPIFSLS() );


#define WAIT_ULPIFSLS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ULPIFSLS() && (--___t___ > 0)); }


#define WAIT_ULPIFSLS_HIGH() \
    while (! READ_ULPIFSLS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PHY Low-power clock select 
    // 
#define PHYLPCS_MASK 0x8000U
#define PHYLPCS_OFFSET 15
#define PHYLPCS_START_BIT 15
#define PHYLPCS_WIDTH 1



typedef enum phylpcs {
    PHYLPCS_0,
    PHYLPCS_1
} PHYLPCS_T ;
#define WRITE_PHYLPCS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PHYLPCS_MASK) | ((val << PHYLPCS_START_BIT) & PHYLPCS_MASK )); \
   } 

#define ENABLE_PHYLPCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PHYLPCS_MASK ); \
   }

#define DISABLE_PHYLPCS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PHYLPCS_MASK ); \
   } 

#define READ_PHYLPCS() \
   ((READ_REGISTER_ULONG(0xC) & PHYLPCS_MASK)  >> PHYLPCS_START_BIT)

#define WHEN_PHYLPCS_HIGH() \
     if ( READ_PHYLPCS() )


#define UNLESS_PHYLPCS_HIGH() \
     if (! READ_PHYLPCS() )


#define WAIT_PHYLPCS_LOW() \
    while ( READ_PHYLPCS() );


#define WAIT_PHYLPCS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PHYLPCS() && (--___t___ > 0)); }


#define WAIT_PHYLPCS_HIGH() \
    while (! READ_PHYLPCS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 10:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB turnaround time 
    // 
#define TRDT_MASK 0x3C00U
#define TRDT_OFFSET 13
#define TRDT_START_BIT 10
#define TRDT_WIDTH 4



#define READ_TRDT() \
   ((READ_REGISTER_ULONG(0xC) & TRDT_MASK)  >> TRDT_START_BIT)

#define WRITE_TRDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TRDT_MASK) | ((val << TRDT_START_BIT) & TRDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HNP-capable 
    // 
#define HNPCAP_MASK 0x200U
#define HNPCAP_OFFSET 9
#define HNPCAP_START_BIT 9
#define HNPCAP_WIDTH 1



#define WRITE_HNPCAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ HNPCAP_MASK) | ((val << HNPCAP_START_BIT) & HNPCAP_MASK )); \
   } 

#define ENABLE_HNPCAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  HNPCAP_MASK ); \
   }

#define DISABLE_HNPCAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~HNPCAP_MASK ); \
   } 

#define READ_HNPCAP() \
   ((READ_REGISTER_ULONG(0xC) & HNPCAP_MASK)  >> HNPCAP_START_BIT)

#define WHEN_HNPCAP_HIGH() \
     if ( READ_HNPCAP() )


#define UNLESS_HNPCAP_HIGH() \
     if (! READ_HNPCAP() )


#define WAIT_HNPCAP_LOW() \
    while ( READ_HNPCAP() );


#define WAIT_HNPCAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HNPCAP() && (--___t___ > 0)); }


#define WAIT_HNPCAP_HIGH() \
    while (! READ_HNPCAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SRP-capable 
    // 
#define SRPCAP_MASK 0x100U
#define SRPCAP_OFFSET 8
#define SRPCAP_START_BIT 8
#define SRPCAP_WIDTH 1



#define WRITE_SRPCAP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ SRPCAP_MASK) | ((val << SRPCAP_START_BIT) & SRPCAP_MASK )); \
   } 

#define ENABLE_SRPCAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  SRPCAP_MASK ); \
   }

#define DISABLE_SRPCAP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~SRPCAP_MASK ); \
   } 

#define READ_SRPCAP() \
   ((READ_REGISTER_ULONG(0xC) & SRPCAP_MASK)  >> SRPCAP_START_BIT)

#define WHEN_SRPCAP_HIGH() \
     if ( READ_SRPCAP() )


#define UNLESS_SRPCAP_HIGH() \
     if (! READ_SRPCAP() )


#define WAIT_SRPCAP_LOW() \
    while ( READ_SRPCAP() );


#define WAIT_SRPCAP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRPCAP() && (--___t___ > 0)); }


#define WAIT_SRPCAP_HIGH() \
    while (! READ_SRPCAP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial 
    // transceiver select 
    // 
#define PHYSEL_MASK 0x40U
#define PHYSEL_OFFSET 6
#define PHYSEL_START_BIT 6
#define PHYSEL_WIDTH 1



#define WRITE_PHYSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PHYSEL_MASK) | ((val << PHYSEL_START_BIT) & PHYSEL_MASK )); \
   } 

#define ENABLE_PHYSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PHYSEL_MASK ); \
   }

#define DISABLE_PHYSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PHYSEL_MASK ); \
   } 

#define READ_PHYSEL() \
   ((READ_REGISTER_ULONG(0xC) & PHYSEL_MASK)  >> PHYSEL_START_BIT)

#define WHEN_PHYSEL_HIGH() \
     if ( READ_PHYSEL() )


#define UNLESS_PHYSEL_HIGH() \
     if (! READ_PHYSEL() )


#define WAIT_PHYSEL_LOW() \
    while ( READ_PHYSEL() );


#define WAIT_PHYSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PHYSEL() && (--___t___ > 0)); }


#define WAIT_PHYSEL_HIGH() \
    while (! READ_PHYSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGusbcfg
//
// Return the value of register OTG_HS_GUSBCFG
//
// Notes : Register OTG_HS USB configuration register (OTG_HS_GUSBCFG) at the offset 0xC, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FS timeout calibration 
    // 
#define TOCAL_MASK 0x7U
#define TOCAL_OFFSET 2
#define TOCAL_START_BIT 0
#define TOCAL_WIDTH 3



#define READ_TOCAL() \
   ((READ_REGISTER_ULONG(0xC) & TOCAL_MASK)  >> TOCAL_START_BIT)

#define WRITE_TOCAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TOCAL_MASK) | ((val << TOCAL_START_BIT) & TOCAL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OtgHsGrstctl at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA request signal enabled for USB OTG HS 
    // 
#define DMAREQ_MASK 0x40000000U
#define DMAREQ_OFFSET 30
#define DMAREQ_START_BIT 30
#define DMAREQ_WIDTH 1


#define OTG_HS_GRSTCTL_REG 0x10

typedef enum dmareq {
    DMAREQ_0,
    DMAREQ_1
} DMAREQ_T ;
#define WRITE_DMAREQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ DMAREQ_MASK) | ((val << DMAREQ_START_BIT) & DMAREQ_MASK )); \
   } 

#define ENABLE_DMAREQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  DMAREQ_MASK ); \
   }

#define DISABLE_DMAREQ() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~DMAREQ_MASK ); \
   } 

#define READ_DMAREQ() \
   ((READ_REGISTER_ULONG(0x10) & DMAREQ_MASK)  >> DMAREQ_START_BIT)

#define WHEN_DMAREQ_HIGH() \
     if ( READ_DMAREQ() )


#define UNLESS_DMAREQ_HIGH() \
     if (! READ_DMAREQ() )


#define WAIT_DMAREQ_LOW() \
    while ( READ_DMAREQ() );


#define WAIT_DMAREQ_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMAREQ() && (--___t___ > 0)); }


#define WAIT_DMAREQ_HIGH() \
    while (! READ_DMAREQ() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB master idle 
    // 
#define AHBIDL_MASK 0x80000000U
#define AHBIDL_OFFSET 31
#define AHBIDL_START_BIT 31
#define AHBIDL_WIDTH 1



#define WRITE_AHBIDL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ AHBIDL_MASK) | ((val << AHBIDL_START_BIT) & AHBIDL_MASK )); \
   } 

#define ENABLE_AHBIDL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  AHBIDL_MASK ); \
   }

#define DISABLE_AHBIDL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~AHBIDL_MASK ); \
   } 

#define READ_AHBIDL() \
   ((READ_REGISTER_ULONG(0x10) & AHBIDL_MASK)  >> AHBIDL_START_BIT)

#define WHEN_AHBIDL_HIGH() \
     if ( READ_AHBIDL() )


#define UNLESS_AHBIDL_HIGH() \
     if (! READ_AHBIDL() )


#define WAIT_AHBIDL_LOW() \
    while ( READ_AHBIDL() );


#define WAIT_AHBIDL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AHBIDL() && (--___t___ > 0)); }


#define WAIT_AHBIDL_HIGH() \
    while (! READ_AHBIDL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 6:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x7C0U
#define TXFNUM_OFFSET 10
#define TXFNUM_START_BIT 6
#define TXFNUM_WIDTH 5



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x10) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO flush 
    // 
#define TXFFLSH_MASK 0x20U
#define TXFFLSH_OFFSET 5
#define TXFFLSH_START_BIT 5
#define TXFFLSH_WIDTH 1



#define WRITE_TXFFLSH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXFFLSH_MASK) | ((val << TXFFLSH_START_BIT) & TXFFLSH_MASK )); \
   } 

#define ENABLE_TXFFLSH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXFFLSH_MASK ); \
   }

#define DISABLE_TXFFLSH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXFFLSH_MASK ); \
   } 

#define READ_TXFFLSH() \
   ((READ_REGISTER_ULONG(0x10) & TXFFLSH_MASK)  >> TXFFLSH_START_BIT)

#define WHEN_TXFFLSH_HIGH() \
     if ( READ_TXFFLSH() )


#define UNLESS_TXFFLSH_HIGH() \
     if (! READ_TXFFLSH() )


#define WAIT_TXFFLSH_LOW() \
    while ( READ_TXFFLSH() );


#define WAIT_TXFFLSH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFFLSH() && (--___t___ > 0)); }


#define WAIT_TXFFLSH_HIGH() \
    while (! READ_TXFFLSH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RxFIFO flush 
    // 
#define RXFFLSH_MASK 0x10U
#define RXFFLSH_OFFSET 4
#define RXFFLSH_START_BIT 4
#define RXFFLSH_WIDTH 1



#define WRITE_RXFFLSH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ RXFFLSH_MASK) | ((val << RXFFLSH_START_BIT) & RXFFLSH_MASK )); \
   } 

#define ENABLE_RXFFLSH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  RXFFLSH_MASK ); \
   }

#define DISABLE_RXFFLSH() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~RXFFLSH_MASK ); \
   } 

#define READ_RXFFLSH() \
   ((READ_REGISTER_ULONG(0x10) & RXFFLSH_MASK)  >> RXFFLSH_START_BIT)

#define WHEN_RXFFLSH_HIGH() \
     if ( READ_RXFFLSH() )


#define UNLESS_RXFFLSH_HIGH() \
     if (! READ_RXFFLSH() )


#define WAIT_RXFFLSH_LOW() \
    while ( READ_RXFFLSH() );


#define WAIT_RXFFLSH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFFLSH() && (--___t___ > 0)); }


#define WAIT_RXFFLSH_HIGH() \
    while (! READ_RXFFLSH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host frame counter reset 
    // 
#define FCRST_MASK 0x4U
#define FCRST_OFFSET 2
#define FCRST_START_BIT 2
#define FCRST_WIDTH 1



#define WRITE_FCRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ FCRST_MASK) | ((val << FCRST_START_BIT) & FCRST_MASK )); \
   } 

#define ENABLE_FCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  FCRST_MASK ); \
   }

#define DISABLE_FCRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~FCRST_MASK ); \
   } 

#define READ_FCRST() \
   ((READ_REGISTER_ULONG(0x10) & FCRST_MASK)  >> FCRST_START_BIT)

#define WHEN_FCRST_HIGH() \
     if ( READ_FCRST() )


#define UNLESS_FCRST_HIGH() \
     if (! READ_FCRST() )


#define WAIT_FCRST_LOW() \
    while ( READ_FCRST() );


#define WAIT_FCRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FCRST() && (--___t___ > 0)); }


#define WAIT_FCRST_HIGH() \
    while (! READ_FCRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HCLK soft reset 
    // 
#define HSRST_MASK 0x2U
#define HSRST_OFFSET 1
#define HSRST_START_BIT 1
#define HSRST_WIDTH 1



#define WRITE_HSRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ HSRST_MASK) | ((val << HSRST_START_BIT) & HSRST_MASK )); \
   } 

#define ENABLE_HSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  HSRST_MASK ); \
   }

#define DISABLE_HSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~HSRST_MASK ); \
   } 

#define READ_HSRST() \
   ((READ_REGISTER_ULONG(0x10) & HSRST_MASK)  >> HSRST_START_BIT)

#define WHEN_HSRST_HIGH() \
     if ( READ_HSRST() )


#define UNLESS_HSRST_HIGH() \
     if (! READ_HSRST() )


#define WAIT_HSRST_LOW() \
    while ( READ_HSRST() );


#define WAIT_HSRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HSRST() && (--___t___ > 0)); }


#define WAIT_HSRST_HIGH() \
    while (! READ_HSRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrstctl
//
// Return the value of register OTG_HS_GRSTCTL
//
// Notes : Register OTG_HS reset register (OTG_HS_GRSTCTL) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Core soft reset 
    // 
#define CSRST_MASK 0x1U
#define CSRST_OFFSET 0
#define CSRST_START_BIT 0
#define CSRST_WIDTH 1



#define WRITE_CSRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CSRST_MASK) | ((val << CSRST_START_BIT) & CSRST_MASK )); \
   } 

#define ENABLE_CSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CSRST_MASK ); \
   }

#define DISABLE_CSRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CSRST_MASK ); \
   } 

#define READ_CSRST() \
   ((READ_REGISTER_ULONG(0x10) & CSRST_MASK)  >> CSRST_START_BIT)

#define WHEN_CSRST_HIGH() \
     if ( READ_CSRST() )


#define UNLESS_CSRST_HIGH() \
     if (! READ_CSRST() )


#define WAIT_CSRST_LOW() \
    while ( READ_CSRST() );


#define WAIT_CSRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CSRST() && (--___t___ > 0)); }


#define WAIT_CSRST_HIGH() \
    while (! READ_CSRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OtgHsGintsts at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Resume/remote wakeup detected interrupt 
    // 
#define WKUINT_MASK 0x80000000U
#define WKUINT_OFFSET 31
#define WKUINT_START_BIT 31
#define WKUINT_WIDTH 1


#define OTG_HS_GINTSTS_REG 0x14

typedef enum wkuint {
    WKUINT_0,
    WKUINT_1
} WKUINT_T ;
#define WRITE_WKUINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ WKUINT_MASK) | ((val << WKUINT_START_BIT) & WKUINT_MASK )); \
   } 

#define ENABLE_WKUINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  WKUINT_MASK ); \
   }

#define DISABLE_WKUINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~WKUINT_MASK ); \
   } 

#define READ_WKUINT() \
   ((READ_REGISTER_ULONG(0x14) & WKUINT_MASK)  >> WKUINT_START_BIT)

#define WHEN_WKUINT_HIGH() \
     if ( READ_WKUINT() )


#define UNLESS_WKUINT_HIGH() \
     if (! READ_WKUINT() )


#define WAIT_WKUINT_LOW() \
    while ( READ_WKUINT() );


#define WAIT_WKUINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WKUINT() && (--___t___ > 0)); }


#define WAIT_WKUINT_HIGH() \
    while (! READ_WKUINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request/new session detected interrupt 
    // 
#define SRQINT_MASK 0x40000000U
#define SRQINT_OFFSET 30
#define SRQINT_START_BIT 30
#define SRQINT_WIDTH 1



#define WRITE_SRQINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ SRQINT_MASK) | ((val << SRQINT_START_BIT) & SRQINT_MASK )); \
   } 

#define ENABLE_SRQINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  SRQINT_MASK ); \
   }

#define DISABLE_SRQINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~SRQINT_MASK ); \
   } 

#define READ_SRQINT() \
   ((READ_REGISTER_ULONG(0x14) & SRQINT_MASK)  >> SRQINT_START_BIT)

#define WHEN_SRQINT_HIGH() \
     if ( READ_SRQINT() )


#define UNLESS_SRQINT_HIGH() \
     if (! READ_SRQINT() )


#define WAIT_SRQINT_LOW() \
    while ( READ_SRQINT() );


#define WAIT_SRQINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRQINT() && (--___t___ > 0)); }


#define WAIT_SRQINT_HIGH() \
    while (! READ_SRQINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Disconnect detected interrupt 
    // 
#define DISCINT_MASK 0x20000000U
#define DISCINT_OFFSET 29
#define DISCINT_START_BIT 29
#define DISCINT_WIDTH 1



#define WRITE_DISCINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DISCINT_MASK) | ((val << DISCINT_START_BIT) & DISCINT_MASK )); \
   } 

#define ENABLE_DISCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  DISCINT_MASK ); \
   }

#define DISABLE_DISCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~DISCINT_MASK ); \
   } 

#define READ_DISCINT() \
   ((READ_REGISTER_ULONG(0x14) & DISCINT_MASK)  >> DISCINT_START_BIT)

#define WHEN_DISCINT_HIGH() \
     if ( READ_DISCINT() )


#define UNLESS_DISCINT_HIGH() \
     if (! READ_DISCINT() )


#define WAIT_DISCINT_LOW() \
    while ( READ_DISCINT() );


#define WAIT_DISCINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DISCINT() && (--___t___ > 0)); }


#define WAIT_DISCINT_HIGH() \
    while (! READ_DISCINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Connector ID status change 
    // 
#define CIDSCHG_MASK 0x10000000U
#define CIDSCHG_OFFSET 28
#define CIDSCHG_START_BIT 28
#define CIDSCHG_WIDTH 1



#define WRITE_CIDSCHG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CIDSCHG_MASK) | ((val << CIDSCHG_START_BIT) & CIDSCHG_MASK )); \
   } 

#define ENABLE_CIDSCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CIDSCHG_MASK ); \
   }

#define DISABLE_CIDSCHG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CIDSCHG_MASK ); \
   } 

#define READ_CIDSCHG() \
   ((READ_REGISTER_ULONG(0x14) & CIDSCHG_MASK)  >> CIDSCHG_START_BIT)

#define WHEN_CIDSCHG_HIGH() \
     if ( READ_CIDSCHG() )


#define UNLESS_CIDSCHG_HIGH() \
     if (! READ_CIDSCHG() )


#define WAIT_CIDSCHG_LOW() \
    while ( READ_CIDSCHG() );


#define WAIT_CIDSCHG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIDSCHG() && (--___t___ > 0)); }


#define WAIT_CIDSCHG_HIGH() \
    while (! READ_CIDSCHG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic TxFIFO empty 
    // 
#define PTXFE_MASK 0x4000000U
#define PTXFE_OFFSET 26
#define PTXFE_START_BIT 26
#define PTXFE_WIDTH 1



#define WRITE_PTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PTXFE_MASK) | ((val << PTXFE_START_BIT) & PTXFE_MASK )); \
   } 

#define ENABLE_PTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PTXFE_MASK ); \
   }

#define DISABLE_PTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PTXFE_MASK ); \
   } 

#define READ_PTXFE() \
   ((READ_REGISTER_ULONG(0x14) & PTXFE_MASK)  >> PTXFE_START_BIT)

#define WHEN_PTXFE_HIGH() \
     if ( READ_PTXFE() )


#define UNLESS_PTXFE_HIGH() \
     if (! READ_PTXFE() )


#define WAIT_PTXFE_LOW() \
    while ( READ_PTXFE() );


#define WAIT_PTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PTXFE() && (--___t___ > 0)); }


#define WAIT_PTXFE_HIGH() \
    while (! READ_PTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host channels interrupt 
    // 
#define HCINT_MASK 0x2000000U
#define HCINT_OFFSET 25
#define HCINT_START_BIT 25
#define HCINT_WIDTH 1



#define WRITE_HCINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ HCINT_MASK) | ((val << HCINT_START_BIT) & HCINT_MASK )); \
   } 

#define ENABLE_HCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  HCINT_MASK ); \
   }

#define DISABLE_HCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~HCINT_MASK ); \
   } 

#define READ_HCINT() \
   ((READ_REGISTER_ULONG(0x14) & HCINT_MASK)  >> HCINT_START_BIT)

#define WHEN_HCINT_HIGH() \
     if ( READ_HCINT() )


#define UNLESS_HCINT_HIGH() \
     if (! READ_HCINT() )


#define WAIT_HCINT_LOW() \
    while ( READ_HCINT() );


#define WAIT_HCINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HCINT() && (--___t___ > 0)); }


#define WAIT_HCINT_HIGH() \
    while (! READ_HCINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host port interrupt 
    // 
#define HPRTINT_MASK 0x1000000U
#define HPRTINT_OFFSET 24
#define HPRTINT_START_BIT 24
#define HPRTINT_WIDTH 1



#define WRITE_HPRTINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ HPRTINT_MASK) | ((val << HPRTINT_START_BIT) & HPRTINT_MASK )); \
   } 

#define ENABLE_HPRTINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  HPRTINT_MASK ); \
   }

#define DISABLE_HPRTINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~HPRTINT_MASK ); \
   } 

#define READ_HPRTINT() \
   ((READ_REGISTER_ULONG(0x14) & HPRTINT_MASK)  >> HPRTINT_START_BIT)

#define WHEN_HPRTINT_HIGH() \
     if ( READ_HPRTINT() )


#define UNLESS_HPRTINT_HIGH() \
     if (! READ_HPRTINT() )


#define WAIT_HPRTINT_LOW() \
    while ( READ_HPRTINT() );


#define WAIT_HPRTINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HPRTINT() && (--___t___ > 0)); }


#define WAIT_HPRTINT_HIGH() \
    while (! READ_HPRTINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data fetch suspended 
    // 
#define DATAFSUSP_MASK 0x400000U
#define DATAFSUSP_OFFSET 22
#define DATAFSUSP_START_BIT 22
#define DATAFSUSP_WIDTH 1



typedef enum datafsusp {
    DATAFSUSP_0,
    DATAFSUSP_1
} DATAFSUSP_T ;
#define WRITE_DATAFSUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DATAFSUSP_MASK) | ((val << DATAFSUSP_START_BIT) & DATAFSUSP_MASK )); \
   } 

#define ENABLE_DATAFSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  DATAFSUSP_MASK ); \
   }

#define DISABLE_DATAFSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~DATAFSUSP_MASK ); \
   } 

#define READ_DATAFSUSP() \
   ((READ_REGISTER_ULONG(0x14) & DATAFSUSP_MASK)  >> DATAFSUSP_START_BIT)

#define WHEN_DATAFSUSP_HIGH() \
     if ( READ_DATAFSUSP() )


#define UNLESS_DATAFSUSP_HIGH() \
     if (! READ_DATAFSUSP() )


#define WAIT_DATAFSUSP_LOW() \
    while ( READ_DATAFSUSP() );


#define WAIT_DATAFSUSP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DATAFSUSP() && (--___t___ > 0)); }


#define WAIT_DATAFSUSP_HIGH() \
    while (! READ_DATAFSUSP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete periodic transfer 
    // 
#define PXFR_INCOMPISOOUT_MASK 0x200000U
#define PXFR_INCOMPISOOUT_OFFSET 21
#define PXFR_INCOMPISOOUT_START_BIT 21
#define PXFR_INCOMPISOOUT_WIDTH 1



typedef enum pxfr_incompisoout {
    PXFR_INCOMPISOOUT_0,
    PXFR_INCOMPISOOUT_1
} PXFR_INCOMPISOOUT_T ;
#define WRITE_PXFR_INCOMPISOOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PXFR_INCOMPISOOUT_MASK) | ((val << PXFR_INCOMPISOOUT_START_BIT) & PXFR_INCOMPISOOUT_MASK )); \
   } 

#define ENABLE_PXFR_INCOMPISOOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PXFR_INCOMPISOOUT_MASK ); \
   }

#define DISABLE_PXFR_INCOMPISOOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PXFR_INCOMPISOOUT_MASK ); \
   } 

#define READ_PXFR_INCOMPISOOUT() \
   ((READ_REGISTER_ULONG(0x14) & PXFR_INCOMPISOOUT_MASK)  >> PXFR_INCOMPISOOUT_START_BIT)

#define WHEN_PXFR_INCOMPISOOUT_HIGH() \
     if ( READ_PXFR_INCOMPISOOUT() )


#define UNLESS_PXFR_INCOMPISOOUT_HIGH() \
     if (! READ_PXFR_INCOMPISOOUT() )


#define WAIT_PXFR_INCOMPISOOUT_LOW() \
    while ( READ_PXFR_INCOMPISOOUT() );


#define WAIT_PXFR_INCOMPISOOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PXFR_INCOMPISOOUT() && (--___t___ > 0)); }


#define WAIT_PXFR_INCOMPISOOUT_HIGH() \
    while (! READ_PXFR_INCOMPISOOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete isochronous IN transfer 
    // 
#define IISOIXFR_MASK 0x100000U
#define IISOIXFR_OFFSET 20
#define IISOIXFR_START_BIT 20
#define IISOIXFR_WIDTH 1



#define WRITE_IISOIXFR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ IISOIXFR_MASK) | ((val << IISOIXFR_START_BIT) & IISOIXFR_MASK )); \
   } 

#define ENABLE_IISOIXFR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  IISOIXFR_MASK ); \
   }

#define DISABLE_IISOIXFR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~IISOIXFR_MASK ); \
   } 

#define READ_IISOIXFR() \
   ((READ_REGISTER_ULONG(0x14) & IISOIXFR_MASK)  >> IISOIXFR_START_BIT)

#define WHEN_IISOIXFR_HIGH() \
     if ( READ_IISOIXFR() )


#define UNLESS_IISOIXFR_HIGH() \
     if (! READ_IISOIXFR() )


#define WAIT_IISOIXFR_LOW() \
    while ( READ_IISOIXFR() );


#define WAIT_IISOIXFR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IISOIXFR() && (--___t___ > 0)); }


#define WAIT_IISOIXFR_HIGH() \
    while (! READ_IISOIXFR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoint interrupt 
    // 
#define OEPINT_MASK 0x80000U
#define OEPINT_OFFSET 19
#define OEPINT_START_BIT 19
#define OEPINT_WIDTH 1



#define WRITE_OEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OEPINT_MASK) | ((val << OEPINT_START_BIT) & OEPINT_MASK )); \
   } 

#define ENABLE_OEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OEPINT_MASK ); \
   }

#define DISABLE_OEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OEPINT_MASK ); \
   } 

#define READ_OEPINT() \
   ((READ_REGISTER_ULONG(0x14) & OEPINT_MASK)  >> OEPINT_START_BIT)

#define WHEN_OEPINT_HIGH() \
     if ( READ_OEPINT() )


#define UNLESS_OEPINT_HIGH() \
     if (! READ_OEPINT() )


#define WAIT_OEPINT_LOW() \
    while ( READ_OEPINT() );


#define WAIT_OEPINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OEPINT() && (--___t___ > 0)); }


#define WAIT_OEPINT_HIGH() \
    while (! READ_OEPINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint interrupt 
    // 
#define IEPINT_MASK 0x40000U
#define IEPINT_OFFSET 18
#define IEPINT_START_BIT 18
#define IEPINT_WIDTH 1



#define WRITE_IEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ IEPINT_MASK) | ((val << IEPINT_START_BIT) & IEPINT_MASK )); \
   } 

#define ENABLE_IEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  IEPINT_MASK ); \
   }

#define DISABLE_IEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~IEPINT_MASK ); \
   } 

#define READ_IEPINT() \
   ((READ_REGISTER_ULONG(0x14) & IEPINT_MASK)  >> IEPINT_START_BIT)

#define WHEN_IEPINT_HIGH() \
     if ( READ_IEPINT() )


#define UNLESS_IEPINT_HIGH() \
     if (! READ_IEPINT() )


#define WAIT_IEPINT_LOW() \
    while ( READ_IEPINT() );


#define WAIT_IEPINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IEPINT() && (--___t___ > 0)); }


#define WAIT_IEPINT_HIGH() \
    while (! READ_IEPINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of periodic frame interrupt 
    // 
#define EOPF_MASK 0x8000U
#define EOPF_OFFSET 15
#define EOPF_START_BIT 15
#define EOPF_WIDTH 1



#define WRITE_EOPF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EOPF_MASK) | ((val << EOPF_START_BIT) & EOPF_MASK )); \
   } 

#define ENABLE_EOPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  EOPF_MASK ); \
   }

#define DISABLE_EOPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~EOPF_MASK ); \
   } 

#define READ_EOPF() \
   ((READ_REGISTER_ULONG(0x14) & EOPF_MASK)  >> EOPF_START_BIT)

#define WHEN_EOPF_HIGH() \
     if ( READ_EOPF() )


#define UNLESS_EOPF_HIGH() \
     if (! READ_EOPF() )


#define WAIT_EOPF_LOW() \
    while ( READ_EOPF() );


#define WAIT_EOPF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOPF() && (--___t___ > 0)); }


#define WAIT_EOPF_HIGH() \
    while (! READ_EOPF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Isochronous OUT packet dropped interrupt 
    // 
#define ISOODRP_MASK 0x4000U
#define ISOODRP_OFFSET 14
#define ISOODRP_START_BIT 14
#define ISOODRP_WIDTH 1



#define WRITE_ISOODRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ISOODRP_MASK) | ((val << ISOODRP_START_BIT) & ISOODRP_MASK )); \
   } 

#define ENABLE_ISOODRP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ISOODRP_MASK ); \
   }

#define DISABLE_ISOODRP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ISOODRP_MASK ); \
   } 

#define READ_ISOODRP() \
   ((READ_REGISTER_ULONG(0x14) & ISOODRP_MASK)  >> ISOODRP_START_BIT)

#define WHEN_ISOODRP_HIGH() \
     if ( READ_ISOODRP() )


#define UNLESS_ISOODRP_HIGH() \
     if (! READ_ISOODRP() )


#define WAIT_ISOODRP_LOW() \
    while ( READ_ISOODRP() );


#define WAIT_ISOODRP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ISOODRP() && (--___t___ > 0)); }


#define WAIT_ISOODRP_HIGH() \
    while (! READ_ISOODRP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enumeration done 
    // 
#define ENUMDNE_MASK 0x2000U
#define ENUMDNE_OFFSET 13
#define ENUMDNE_START_BIT 13
#define ENUMDNE_WIDTH 1



#define WRITE_ENUMDNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ENUMDNE_MASK) | ((val << ENUMDNE_START_BIT) & ENUMDNE_MASK )); \
   } 

#define ENABLE_ENUMDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ENUMDNE_MASK ); \
   }

#define DISABLE_ENUMDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ENUMDNE_MASK ); \
   } 

#define READ_ENUMDNE() \
   ((READ_REGISTER_ULONG(0x14) & ENUMDNE_MASK)  >> ENUMDNE_START_BIT)

#define WHEN_ENUMDNE_HIGH() \
     if ( READ_ENUMDNE() )


#define UNLESS_ENUMDNE_HIGH() \
     if (! READ_ENUMDNE() )


#define WAIT_ENUMDNE_LOW() \
    while ( READ_ENUMDNE() );


#define WAIT_ENUMDNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENUMDNE() && (--___t___ > 0)); }


#define WAIT_ENUMDNE_HIGH() \
    while (! READ_ENUMDNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB reset 
    // 
#define USBRST_MASK 0x1000U
#define USBRST_OFFSET 12
#define USBRST_START_BIT 12
#define USBRST_WIDTH 1



#define WRITE_USBRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ USBRST_MASK) | ((val << USBRST_START_BIT) & USBRST_MASK )); \
   } 

#define ENABLE_USBRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  USBRST_MASK ); \
   }

#define DISABLE_USBRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~USBRST_MASK ); \
   } 

#define READ_USBRST() \
   ((READ_REGISTER_ULONG(0x14) & USBRST_MASK)  >> USBRST_START_BIT)

#define WHEN_USBRST_HIGH() \
     if ( READ_USBRST() )


#define UNLESS_USBRST_HIGH() \
     if (! READ_USBRST() )


#define WAIT_USBRST_LOW() \
    while ( READ_USBRST() );


#define WAIT_USBRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBRST() && (--___t___ > 0)); }


#define WAIT_USBRST_HIGH() \
    while (! READ_USBRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB suspend 
    // 
#define USBSUSP_MASK 0x800U
#define USBSUSP_OFFSET 11
#define USBSUSP_START_BIT 11
#define USBSUSP_WIDTH 1



#define WRITE_USBSUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ USBSUSP_MASK) | ((val << USBSUSP_START_BIT) & USBSUSP_MASK )); \
   } 

#define ENABLE_USBSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  USBSUSP_MASK ); \
   }

#define DISABLE_USBSUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~USBSUSP_MASK ); \
   } 

#define READ_USBSUSP() \
   ((READ_REGISTER_ULONG(0x14) & USBSUSP_MASK)  >> USBSUSP_START_BIT)

#define WHEN_USBSUSP_HIGH() \
     if ( READ_USBSUSP() )


#define UNLESS_USBSUSP_HIGH() \
     if (! READ_USBSUSP() )


#define WAIT_USBSUSP_LOW() \
    while ( READ_USBSUSP() );


#define WAIT_USBSUSP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBSUSP() && (--___t___ > 0)); }


#define WAIT_USBSUSP_HIGH() \
    while (! READ_USBSUSP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Early suspend 
    // 
#define ESUSP_MASK 0x400U
#define ESUSP_OFFSET 10
#define ESUSP_START_BIT 10
#define ESUSP_WIDTH 1



#define WRITE_ESUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ESUSP_MASK) | ((val << ESUSP_START_BIT) & ESUSP_MASK )); \
   } 

#define ENABLE_ESUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  ESUSP_MASK ); \
   }

#define DISABLE_ESUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~ESUSP_MASK ); \
   } 

#define READ_ESUSP() \
   ((READ_REGISTER_ULONG(0x14) & ESUSP_MASK)  >> ESUSP_START_BIT)

#define WHEN_ESUSP_HIGH() \
     if ( READ_ESUSP() )


#define UNLESS_ESUSP_HIGH() \
     if (! READ_ESUSP() )


#define WAIT_ESUSP_LOW() \
    while ( READ_ESUSP() );


#define WAIT_ESUSP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ESUSP() && (--___t___ > 0)); }


#define WAIT_ESUSP_HIGH() \
    while (! READ_ESUSP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global OUT NAK effective 
    // 
#define BOUTNAKEFF_MASK 0x80U
#define BOUTNAKEFF_OFFSET 7
#define BOUTNAKEFF_START_BIT 7
#define BOUTNAKEFF_WIDTH 1



typedef enum boutnakeff {
    BOUTNAKEFF_0,
    BOUTNAKEFF_1
} BOUTNAKEFF_T ;
#define WRITE_BOUTNAKEFF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ BOUTNAKEFF_MASK) | ((val << BOUTNAKEFF_START_BIT) & BOUTNAKEFF_MASK )); \
   } 

#define ENABLE_BOUTNAKEFF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  BOUTNAKEFF_MASK ); \
   }

#define DISABLE_BOUTNAKEFF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~BOUTNAKEFF_MASK ); \
   } 

#define READ_BOUTNAKEFF() \
   ((READ_REGISTER_ULONG(0x14) & BOUTNAKEFF_MASK)  >> BOUTNAKEFF_START_BIT)

#define WHEN_BOUTNAKEFF_HIGH() \
     if ( READ_BOUTNAKEFF() )


#define UNLESS_BOUTNAKEFF_HIGH() \
     if (! READ_BOUTNAKEFF() )


#define WAIT_BOUTNAKEFF_LOW() \
    while ( READ_BOUTNAKEFF() );


#define WAIT_BOUTNAKEFF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BOUTNAKEFF() && (--___t___ > 0)); }


#define WAIT_BOUTNAKEFF_HIGH() \
    while (! READ_BOUTNAKEFF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global IN nonperiodic NAK effective 
    // 
#define GINAKEFF_MASK 0x40U
#define GINAKEFF_OFFSET 6
#define GINAKEFF_START_BIT 6
#define GINAKEFF_WIDTH 1



#define WRITE_GINAKEFF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ GINAKEFF_MASK) | ((val << GINAKEFF_START_BIT) & GINAKEFF_MASK )); \
   } 

#define ENABLE_GINAKEFF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  GINAKEFF_MASK ); \
   }

#define DISABLE_GINAKEFF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~GINAKEFF_MASK ); \
   } 

#define READ_GINAKEFF() \
   ((READ_REGISTER_ULONG(0x14) & GINAKEFF_MASK)  >> GINAKEFF_START_BIT)

#define WHEN_GINAKEFF_HIGH() \
     if ( READ_GINAKEFF() )


#define UNLESS_GINAKEFF_HIGH() \
     if (! READ_GINAKEFF() )


#define WAIT_GINAKEFF_LOW() \
    while ( READ_GINAKEFF() );


#define WAIT_GINAKEFF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GINAKEFF() && (--___t___ > 0)); }


#define WAIT_GINAKEFF_HIGH() \
    while (! READ_GINAKEFF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonperiodic TxFIFO empty 
    // 
#define NPTXFE_MASK 0x20U
#define NPTXFE_OFFSET 5
#define NPTXFE_START_BIT 5
#define NPTXFE_WIDTH 1



#define WRITE_NPTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ NPTXFE_MASK) | ((val << NPTXFE_START_BIT) & NPTXFE_MASK )); \
   } 

#define ENABLE_NPTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  NPTXFE_MASK ); \
   }

#define DISABLE_NPTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~NPTXFE_MASK ); \
   } 

#define READ_NPTXFE() \
   ((READ_REGISTER_ULONG(0x14) & NPTXFE_MASK)  >> NPTXFE_START_BIT)

#define WHEN_NPTXFE_HIGH() \
     if ( READ_NPTXFE() )


#define UNLESS_NPTXFE_HIGH() \
     if (! READ_NPTXFE() )


#define WAIT_NPTXFE_LOW() \
    while ( READ_NPTXFE() );


#define WAIT_NPTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NPTXFE() && (--___t___ > 0)); }


#define WAIT_NPTXFE_HIGH() \
    while (! READ_NPTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RxFIFO nonempty 
    // 
#define RXFLVL_MASK 0x10U
#define RXFLVL_OFFSET 4
#define RXFLVL_START_BIT 4
#define RXFLVL_WIDTH 1



#define WRITE_RXFLVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RXFLVL_MASK) | ((val << RXFLVL_START_BIT) & RXFLVL_MASK )); \
   } 

#define ENABLE_RXFLVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RXFLVL_MASK ); \
   }

#define DISABLE_RXFLVL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RXFLVL_MASK ); \
   } 

#define READ_RXFLVL() \
   ((READ_REGISTER_ULONG(0x14) & RXFLVL_MASK)  >> RXFLVL_START_BIT)

#define WHEN_RXFLVL_HIGH() \
     if ( READ_RXFLVL() )


#define UNLESS_RXFLVL_HIGH() \
     if (! READ_RXFLVL() )


#define WAIT_RXFLVL_LOW() \
    while ( READ_RXFLVL() );


#define WAIT_RXFLVL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFLVL() && (--___t___ > 0)); }


#define WAIT_RXFLVL_HIGH() \
    while (! READ_RXFLVL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start of frame 
    // 
#define SOF_MASK 0x8U
#define SOF_OFFSET 3
#define SOF_START_BIT 3
#define SOF_WIDTH 1



#define WRITE_SOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ SOF_MASK) | ((val << SOF_START_BIT) & SOF_MASK )); \
   } 

#define ENABLE_SOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  SOF_MASK ); \
   }

#define DISABLE_SOF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~SOF_MASK ); \
   } 

#define READ_SOF() \
   ((READ_REGISTER_ULONG(0x14) & SOF_MASK)  >> SOF_START_BIT)

#define WHEN_SOF_HIGH() \
     if ( READ_SOF() )


#define UNLESS_SOF_HIGH() \
     if (! READ_SOF() )


#define WAIT_SOF_LOW() \
    while ( READ_SOF() );


#define WAIT_SOF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SOF() && (--___t___ > 0)); }


#define WAIT_SOF_HIGH() \
    while (! READ_SOF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTG interrupt 
    // 
#define OTGINT_MASK 0x4U
#define OTGINT_OFFSET 2
#define OTGINT_START_BIT 2
#define OTGINT_WIDTH 1



#define WRITE_OTGINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OTGINT_MASK) | ((val << OTGINT_START_BIT) & OTGINT_MASK )); \
   } 

#define ENABLE_OTGINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OTGINT_MASK ); \
   }

#define DISABLE_OTGINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OTGINT_MASK ); \
   } 

#define READ_OTGINT() \
   ((READ_REGISTER_ULONG(0x14) & OTGINT_MASK)  >> OTGINT_START_BIT)

#define WHEN_OTGINT_HIGH() \
     if ( READ_OTGINT() )


#define UNLESS_OTGINT_HIGH() \
     if (! READ_OTGINT() )


#define WAIT_OTGINT_LOW() \
    while ( READ_OTGINT() );


#define WAIT_OTGINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGINT() && (--___t___ > 0)); }


#define WAIT_OTGINT_HIGH() \
    while (! READ_OTGINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mode mismatch interrupt 
    // 
#define MMIS_MASK 0x2U
#define MMIS_OFFSET 1
#define MMIS_START_BIT 1
#define MMIS_WIDTH 1



#define WRITE_MMIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ MMIS_MASK) | ((val << MMIS_START_BIT) & MMIS_MASK )); \
   } 

#define ENABLE_MMIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  MMIS_MASK ); \
   }

#define DISABLE_MMIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~MMIS_MASK ); \
   } 

#define READ_MMIS() \
   ((READ_REGISTER_ULONG(0x14) & MMIS_MASK)  >> MMIS_START_BIT)

#define WHEN_MMIS_HIGH() \
     if ( READ_MMIS() )


#define UNLESS_MMIS_HIGH() \
     if (! READ_MMIS() )


#define WAIT_MMIS_LOW() \
    while ( READ_MMIS() );


#define WAIT_MMIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MMIS() && (--___t___ > 0)); }


#define WAIT_MMIS_HIGH() \
    while (! READ_MMIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintsts
//
// Return the value of register OTG_HS_GINTSTS
//
// Notes : Register OTG_HS core interrupt register (OTG_HS_GINTSTS) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current mode of operation 
    // 
#define CMOD_MASK 0x1U
#define CMOD_OFFSET 0
#define CMOD_START_BIT 0
#define CMOD_WIDTH 1



#define WRITE_CMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CMOD_MASK) | ((val << CMOD_START_BIT) & CMOD_MASK )); \
   } 

#define ENABLE_CMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  CMOD_MASK ); \
   }

#define DISABLE_CMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~CMOD_MASK ); \
   } 

#define READ_CMOD() \
   ((READ_REGISTER_ULONG(0x14) & CMOD_MASK)  >> CMOD_START_BIT)

#define WHEN_CMOD_HIGH() \
     if ( READ_CMOD() )


#define UNLESS_CMOD_HIGH() \
     if (! READ_CMOD() )


#define WAIT_CMOD_LOW() \
    while ( READ_CMOD() );


#define WAIT_CMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CMOD() && (--___t___ > 0)); }


#define WAIT_CMOD_HIGH() \
    while (! READ_CMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OtgHsGintmsk at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM interrupt mask 
    // 
#define LPMINTM_MASK 0x8000000U
#define LPMINTM_OFFSET 27
#define LPMINTM_START_BIT 27
#define LPMINTM_WIDTH 1


#define OTG_HS_GINTMSK_REG 0x18

typedef enum lpmintm {
    LPMINTM_0,
    LPMINTM_1
} LPMINTM_T ;
#define WRITE_LPMINTM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ LPMINTM_MASK) | ((val << LPMINTM_START_BIT) & LPMINTM_MASK )); \
   } 

#define ENABLE_LPMINTM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  LPMINTM_MASK ); \
   }

#define DISABLE_LPMINTM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~LPMINTM_MASK ); \
   } 

#define READ_LPMINTM() \
   ((READ_REGISTER_ULONG(0x18) & LPMINTM_MASK)  >> LPMINTM_START_BIT)

#define WHEN_LPMINTM_HIGH() \
     if ( READ_LPMINTM() )


#define UNLESS_LPMINTM_HIGH() \
     if (! READ_LPMINTM() )


#define WAIT_LPMINTM_LOW() \
    while ( READ_LPMINTM() );


#define WAIT_LPMINTM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPMINTM() && (--___t___ > 0)); }


#define WAIT_LPMINTM_HIGH() \
    while (! READ_LPMINTM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Reset detected interrupt mask 
    // 
#define RSTDE_MASK 0x800000U
#define RSTDE_OFFSET 23
#define RSTDE_START_BIT 23
#define RSTDE_WIDTH 1



typedef enum rstde {
    RSTDE_0,
    RSTDE_1
} RSTDE_T ;
#define WRITE_RSTDE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ RSTDE_MASK) | ((val << RSTDE_START_BIT) & RSTDE_MASK )); \
   } 

#define ENABLE_RSTDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  RSTDE_MASK ); \
   }

#define DISABLE_RSTDE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~RSTDE_MASK ); \
   } 

#define READ_RSTDE() \
   ((READ_REGISTER_ULONG(0x18) & RSTDE_MASK)  >> RSTDE_START_BIT)

#define WHEN_RSTDE_HIGH() \
     if ( READ_RSTDE() )


#define UNLESS_RSTDE_HIGH() \
     if (! READ_RSTDE() )


#define WAIT_RSTDE_LOW() \
    while ( READ_RSTDE() );


#define WAIT_RSTDE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RSTDE() && (--___t___ > 0)); }


#define WAIT_RSTDE_HIGH() \
    while (! READ_RSTDE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Resume/remote wakeup detected interrupt mask 
    // 
#define WUIM_MASK 0x80000000U
#define WUIM_OFFSET 31
#define WUIM_START_BIT 31
#define WUIM_WIDTH 1



#define WRITE_WUIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ WUIM_MASK) | ((val << WUIM_START_BIT) & WUIM_MASK )); \
   } 

#define ENABLE_WUIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  WUIM_MASK ); \
   }

#define DISABLE_WUIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~WUIM_MASK ); \
   } 

#define READ_WUIM() \
   ((READ_REGISTER_ULONG(0x18) & WUIM_MASK)  >> WUIM_START_BIT)

#define WHEN_WUIM_HIGH() \
     if ( READ_WUIM() )


#define UNLESS_WUIM_HIGH() \
     if (! READ_WUIM() )


#define WAIT_WUIM_LOW() \
    while ( READ_WUIM() );


#define WAIT_WUIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUIM() && (--___t___ > 0)); }


#define WAIT_WUIM_HIGH() \
    while (! READ_WUIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request/new session detected interrupt mask 
    // 
#define SRQIM_MASK 0x40000000U
#define SRQIM_OFFSET 30
#define SRQIM_START_BIT 30
#define SRQIM_WIDTH 1



#define WRITE_SRQIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ SRQIM_MASK) | ((val << SRQIM_START_BIT) & SRQIM_MASK )); \
   } 

#define ENABLE_SRQIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  SRQIM_MASK ); \
   }

#define DISABLE_SRQIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~SRQIM_MASK ); \
   } 

#define READ_SRQIM() \
   ((READ_REGISTER_ULONG(0x18) & SRQIM_MASK)  >> SRQIM_START_BIT)

#define WHEN_SRQIM_HIGH() \
     if ( READ_SRQIM() )


#define UNLESS_SRQIM_HIGH() \
     if (! READ_SRQIM() )


#define WAIT_SRQIM_LOW() \
    while ( READ_SRQIM() );


#define WAIT_SRQIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SRQIM() && (--___t___ > 0)); }


#define WAIT_SRQIM_HIGH() \
    while (! READ_SRQIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Disconnect detected interrupt mask 
    // 
#define DISCINT_MASK 0x20000000U
#define DISCINT_OFFSET 29
#define DISCINT_START_BIT 29
#define DISCINT_WIDTH 1



#define WRITE_DISCINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ DISCINT_MASK) | ((val << DISCINT_START_BIT) & DISCINT_MASK )); \
   } 

#define ENABLE_DISCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  DISCINT_MASK ); \
   }

#define DISABLE_DISCINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~DISCINT_MASK ); \
   } 

#define READ_DISCINT() \
   ((READ_REGISTER_ULONG(0x18) & DISCINT_MASK)  >> DISCINT_START_BIT)

#define WHEN_DISCINT_HIGH() \
     if ( READ_DISCINT() )


#define UNLESS_DISCINT_HIGH() \
     if (! READ_DISCINT() )


#define WAIT_DISCINT_LOW() \
    while ( READ_DISCINT() );


#define WAIT_DISCINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DISCINT() && (--___t___ > 0)); }


#define WAIT_DISCINT_HIGH() \
    while (! READ_DISCINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Connector ID status change mask 
    // 
#define CIDSCHGM_MASK 0x10000000U
#define CIDSCHGM_OFFSET 28
#define CIDSCHGM_START_BIT 28
#define CIDSCHGM_WIDTH 1



#define WRITE_CIDSCHGM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CIDSCHGM_MASK) | ((val << CIDSCHGM_START_BIT) & CIDSCHGM_MASK )); \
   } 

#define ENABLE_CIDSCHGM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  CIDSCHGM_MASK ); \
   }

#define DISABLE_CIDSCHGM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~CIDSCHGM_MASK ); \
   } 

#define READ_CIDSCHGM() \
   ((READ_REGISTER_ULONG(0x18) & CIDSCHGM_MASK)  >> CIDSCHGM_START_BIT)

#define WHEN_CIDSCHGM_HIGH() \
     if ( READ_CIDSCHGM() )


#define UNLESS_CIDSCHGM_HIGH() \
     if (! READ_CIDSCHGM() )


#define WAIT_CIDSCHGM_LOW() \
    while ( READ_CIDSCHGM() );


#define WAIT_CIDSCHGM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIDSCHGM() && (--___t___ > 0)); }


#define WAIT_CIDSCHGM_HIGH() \
    while (! READ_CIDSCHGM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic TxFIFO empty mask 
    // 
#define PTXFEM_MASK 0x4000000U
#define PTXFEM_OFFSET 26
#define PTXFEM_START_BIT 26
#define PTXFEM_WIDTH 1



#define WRITE_PTXFEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ PTXFEM_MASK) | ((val << PTXFEM_START_BIT) & PTXFEM_MASK )); \
   } 

#define ENABLE_PTXFEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  PTXFEM_MASK ); \
   }

#define DISABLE_PTXFEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~PTXFEM_MASK ); \
   } 

#define READ_PTXFEM() \
   ((READ_REGISTER_ULONG(0x18) & PTXFEM_MASK)  >> PTXFEM_START_BIT)

#define WHEN_PTXFEM_HIGH() \
     if ( READ_PTXFEM() )


#define UNLESS_PTXFEM_HIGH() \
     if (! READ_PTXFEM() )


#define WAIT_PTXFEM_LOW() \
    while ( READ_PTXFEM() );


#define WAIT_PTXFEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PTXFEM() && (--___t___ > 0)); }


#define WAIT_PTXFEM_HIGH() \
    while (! READ_PTXFEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host channels interrupt mask 
    // 
#define HCIM_MASK 0x2000000U
#define HCIM_OFFSET 25
#define HCIM_START_BIT 25
#define HCIM_WIDTH 1



#define WRITE_HCIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ HCIM_MASK) | ((val << HCIM_START_BIT) & HCIM_MASK )); \
   } 

#define ENABLE_HCIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  HCIM_MASK ); \
   }

#define DISABLE_HCIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~HCIM_MASK ); \
   } 

#define READ_HCIM() \
   ((READ_REGISTER_ULONG(0x18) & HCIM_MASK)  >> HCIM_START_BIT)

#define WHEN_HCIM_HIGH() \
     if ( READ_HCIM() )


#define UNLESS_HCIM_HIGH() \
     if (! READ_HCIM() )


#define WAIT_HCIM_LOW() \
    while ( READ_HCIM() );


#define WAIT_HCIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HCIM() && (--___t___ > 0)); }


#define WAIT_HCIM_HIGH() \
    while (! READ_HCIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host port interrupt mask 
    // 
#define PRTIM_MASK 0x1000000U
#define PRTIM_OFFSET 24
#define PRTIM_START_BIT 24
#define PRTIM_WIDTH 1



#define WRITE_PRTIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ PRTIM_MASK) | ((val << PRTIM_START_BIT) & PRTIM_MASK )); \
   } 

#define ENABLE_PRTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  PRTIM_MASK ); \
   }

#define DISABLE_PRTIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~PRTIM_MASK ); \
   } 

#define READ_PRTIM() \
   ((READ_REGISTER_ULONG(0x18) & PRTIM_MASK)  >> PRTIM_START_BIT)

#define WHEN_PRTIM_HIGH() \
     if ( READ_PRTIM() )


#define UNLESS_PRTIM_HIGH() \
     if (! READ_PRTIM() )


#define WAIT_PRTIM_LOW() \
    while ( READ_PRTIM() );


#define WAIT_PRTIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PRTIM() && (--___t___ > 0)); }


#define WAIT_PRTIM_HIGH() \
    while (! READ_PRTIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data fetch suspended mask 
    // 
#define FSUSPM_MASK 0x400000U
#define FSUSPM_OFFSET 22
#define FSUSPM_START_BIT 22
#define FSUSPM_WIDTH 1



typedef enum fsuspm {
    FSUSPM_0,
    FSUSPM_1
} FSUSPM_T ;
#define WRITE_FSUSPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FSUSPM_MASK) | ((val << FSUSPM_START_BIT) & FSUSPM_MASK )); \
   } 

#define ENABLE_FSUSPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FSUSPM_MASK ); \
   }

#define DISABLE_FSUSPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FSUSPM_MASK ); \
   } 

#define READ_FSUSPM() \
   ((READ_REGISTER_ULONG(0x18) & FSUSPM_MASK)  >> FSUSPM_START_BIT)

#define WHEN_FSUSPM_HIGH() \
     if ( READ_FSUSPM() )


#define UNLESS_FSUSPM_HIGH() \
     if (! READ_FSUSPM() )


#define WAIT_FSUSPM_LOW() \
    while ( READ_FSUSPM() );


#define WAIT_FSUSPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FSUSPM() && (--___t___ > 0)); }


#define WAIT_FSUSPM_HIGH() \
    while (! READ_FSUSPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete periodic transfer mask 
    // 
#define PXFRM_IISOOXFRM_MASK 0x200000U
#define PXFRM_IISOOXFRM_OFFSET 21
#define PXFRM_IISOOXFRM_START_BIT 21
#define PXFRM_IISOOXFRM_WIDTH 1



typedef enum pxfrm_iisooxfrm {
    PXFRM_IISOOXFRM_0,
    PXFRM_IISOOXFRM_1
} PXFRM_IISOOXFRM_T ;
#define WRITE_PXFRM_IISOOXFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ PXFRM_IISOOXFRM_MASK) | ((val << PXFRM_IISOOXFRM_START_BIT) & PXFRM_IISOOXFRM_MASK )); \
   } 

#define ENABLE_PXFRM_IISOOXFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  PXFRM_IISOOXFRM_MASK ); \
   }

#define DISABLE_PXFRM_IISOOXFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~PXFRM_IISOOXFRM_MASK ); \
   } 

#define READ_PXFRM_IISOOXFRM() \
   ((READ_REGISTER_ULONG(0x18) & PXFRM_IISOOXFRM_MASK)  >> PXFRM_IISOOXFRM_START_BIT)

#define WHEN_PXFRM_IISOOXFRM_HIGH() \
     if ( READ_PXFRM_IISOOXFRM() )


#define UNLESS_PXFRM_IISOOXFRM_HIGH() \
     if (! READ_PXFRM_IISOOXFRM() )


#define WAIT_PXFRM_IISOOXFRM_LOW() \
    while ( READ_PXFRM_IISOOXFRM() );


#define WAIT_PXFRM_IISOOXFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PXFRM_IISOOXFRM() && (--___t___ > 0)); }


#define WAIT_PXFRM_IISOOXFRM_HIGH() \
    while (! READ_PXFRM_IISOOXFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete isochronous IN transfer mask 
    // 
#define IISOIXFRM_MASK 0x100000U
#define IISOIXFRM_OFFSET 20
#define IISOIXFRM_START_BIT 20
#define IISOIXFRM_WIDTH 1



#define WRITE_IISOIXFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IISOIXFRM_MASK) | ((val << IISOIXFRM_START_BIT) & IISOIXFRM_MASK )); \
   } 

#define ENABLE_IISOIXFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  IISOIXFRM_MASK ); \
   }

#define DISABLE_IISOIXFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~IISOIXFRM_MASK ); \
   } 

#define READ_IISOIXFRM() \
   ((READ_REGISTER_ULONG(0x18) & IISOIXFRM_MASK)  >> IISOIXFRM_START_BIT)

#define WHEN_IISOIXFRM_HIGH() \
     if ( READ_IISOIXFRM() )


#define UNLESS_IISOIXFRM_HIGH() \
     if (! READ_IISOIXFRM() )


#define WAIT_IISOIXFRM_LOW() \
    while ( READ_IISOIXFRM() );


#define WAIT_IISOIXFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IISOIXFRM() && (--___t___ > 0)); }


#define WAIT_IISOIXFRM_HIGH() \
    while (! READ_IISOIXFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoints interrupt mask 
    // 
#define OEPINT_MASK 0x80000U
#define OEPINT_OFFSET 19
#define OEPINT_START_BIT 19
#define OEPINT_WIDTH 1



#define WRITE_OEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OEPINT_MASK) | ((val << OEPINT_START_BIT) & OEPINT_MASK )); \
   } 

#define ENABLE_OEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OEPINT_MASK ); \
   }

#define DISABLE_OEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OEPINT_MASK ); \
   } 

#define READ_OEPINT() \
   ((READ_REGISTER_ULONG(0x18) & OEPINT_MASK)  >> OEPINT_START_BIT)

#define WHEN_OEPINT_HIGH() \
     if ( READ_OEPINT() )


#define UNLESS_OEPINT_HIGH() \
     if (! READ_OEPINT() )


#define WAIT_OEPINT_LOW() \
    while ( READ_OEPINT() );


#define WAIT_OEPINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OEPINT() && (--___t___ > 0)); }


#define WAIT_OEPINT_HIGH() \
    while (! READ_OEPINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoints interrupt mask 
    // 
#define IEPINT_MASK 0x40000U
#define IEPINT_OFFSET 18
#define IEPINT_START_BIT 18
#define IEPINT_WIDTH 1



#define WRITE_IEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IEPINT_MASK) | ((val << IEPINT_START_BIT) & IEPINT_MASK )); \
   } 

#define ENABLE_IEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  IEPINT_MASK ); \
   }

#define DISABLE_IEPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~IEPINT_MASK ); \
   } 

#define READ_IEPINT() \
   ((READ_REGISTER_ULONG(0x18) & IEPINT_MASK)  >> IEPINT_START_BIT)

#define WHEN_IEPINT_HIGH() \
     if ( READ_IEPINT() )


#define UNLESS_IEPINT_HIGH() \
     if (! READ_IEPINT() )


#define WAIT_IEPINT_LOW() \
    while ( READ_IEPINT() );


#define WAIT_IEPINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IEPINT() && (--___t___ > 0)); }


#define WAIT_IEPINT_HIGH() \
    while (! READ_IEPINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of periodic frame interrupt mask 
    // 
#define EOPFM_MASK 0x8000U
#define EOPFM_OFFSET 15
#define EOPFM_START_BIT 15
#define EOPFM_WIDTH 1



#define WRITE_EOPFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ EOPFM_MASK) | ((val << EOPFM_START_BIT) & EOPFM_MASK )); \
   } 

#define ENABLE_EOPFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  EOPFM_MASK ); \
   }

#define DISABLE_EOPFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~EOPFM_MASK ); \
   } 

#define READ_EOPFM() \
   ((READ_REGISTER_ULONG(0x18) & EOPFM_MASK)  >> EOPFM_START_BIT)

#define WHEN_EOPFM_HIGH() \
     if ( READ_EOPFM() )


#define UNLESS_EOPFM_HIGH() \
     if (! READ_EOPFM() )


#define WAIT_EOPFM_LOW() \
    while ( READ_EOPFM() );


#define WAIT_EOPFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOPFM() && (--___t___ > 0)); }


#define WAIT_EOPFM_HIGH() \
    while (! READ_EOPFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Isochronous OUT packet dropped interrupt mask 
    // 
#define ISOODRPM_MASK 0x4000U
#define ISOODRPM_OFFSET 14
#define ISOODRPM_START_BIT 14
#define ISOODRPM_WIDTH 1



#define WRITE_ISOODRPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ISOODRPM_MASK) | ((val << ISOODRPM_START_BIT) & ISOODRPM_MASK )); \
   } 

#define ENABLE_ISOODRPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  ISOODRPM_MASK ); \
   }

#define DISABLE_ISOODRPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~ISOODRPM_MASK ); \
   } 

#define READ_ISOODRPM() \
   ((READ_REGISTER_ULONG(0x18) & ISOODRPM_MASK)  >> ISOODRPM_START_BIT)

#define WHEN_ISOODRPM_HIGH() \
     if ( READ_ISOODRPM() )


#define UNLESS_ISOODRPM_HIGH() \
     if (! READ_ISOODRPM() )


#define WAIT_ISOODRPM_LOW() \
    while ( READ_ISOODRPM() );


#define WAIT_ISOODRPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ISOODRPM() && (--___t___ > 0)); }


#define WAIT_ISOODRPM_HIGH() \
    while (! READ_ISOODRPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enumeration done mask 
    // 
#define ENUMDNEM_MASK 0x2000U
#define ENUMDNEM_OFFSET 13
#define ENUMDNEM_START_BIT 13
#define ENUMDNEM_WIDTH 1



#define WRITE_ENUMDNEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ENUMDNEM_MASK) | ((val << ENUMDNEM_START_BIT) & ENUMDNEM_MASK )); \
   } 

#define ENABLE_ENUMDNEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  ENUMDNEM_MASK ); \
   }

#define DISABLE_ENUMDNEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~ENUMDNEM_MASK ); \
   } 

#define READ_ENUMDNEM() \
   ((READ_REGISTER_ULONG(0x18) & ENUMDNEM_MASK)  >> ENUMDNEM_START_BIT)

#define WHEN_ENUMDNEM_HIGH() \
     if ( READ_ENUMDNEM() )


#define UNLESS_ENUMDNEM_HIGH() \
     if (! READ_ENUMDNEM() )


#define WAIT_ENUMDNEM_LOW() \
    while ( READ_ENUMDNEM() );


#define WAIT_ENUMDNEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENUMDNEM() && (--___t___ > 0)); }


#define WAIT_ENUMDNEM_HIGH() \
    while (! READ_ENUMDNEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB reset mask 
    // 
#define USBRST_MASK 0x1000U
#define USBRST_OFFSET 12
#define USBRST_START_BIT 12
#define USBRST_WIDTH 1



#define WRITE_USBRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ USBRST_MASK) | ((val << USBRST_START_BIT) & USBRST_MASK )); \
   } 

#define ENABLE_USBRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  USBRST_MASK ); \
   }

#define DISABLE_USBRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~USBRST_MASK ); \
   } 

#define READ_USBRST() \
   ((READ_REGISTER_ULONG(0x18) & USBRST_MASK)  >> USBRST_START_BIT)

#define WHEN_USBRST_HIGH() \
     if ( READ_USBRST() )


#define UNLESS_USBRST_HIGH() \
     if (! READ_USBRST() )


#define WAIT_USBRST_LOW() \
    while ( READ_USBRST() );


#define WAIT_USBRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBRST() && (--___t___ > 0)); }


#define WAIT_USBRST_HIGH() \
    while (! READ_USBRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB suspend mask 
    // 
#define USBSUSPM_MASK 0x800U
#define USBSUSPM_OFFSET 11
#define USBSUSPM_START_BIT 11
#define USBSUSPM_WIDTH 1



#define WRITE_USBSUSPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ USBSUSPM_MASK) | ((val << USBSUSPM_START_BIT) & USBSUSPM_MASK )); \
   } 

#define ENABLE_USBSUSPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  USBSUSPM_MASK ); \
   }

#define DISABLE_USBSUSPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~USBSUSPM_MASK ); \
   } 

#define READ_USBSUSPM() \
   ((READ_REGISTER_ULONG(0x18) & USBSUSPM_MASK)  >> USBSUSPM_START_BIT)

#define WHEN_USBSUSPM_HIGH() \
     if ( READ_USBSUSPM() )


#define UNLESS_USBSUSPM_HIGH() \
     if (! READ_USBSUSPM() )


#define WAIT_USBSUSPM_LOW() \
    while ( READ_USBSUSPM() );


#define WAIT_USBSUSPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBSUSPM() && (--___t___ > 0)); }


#define WAIT_USBSUSPM_HIGH() \
    while (! READ_USBSUSPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Early suspend mask 
    // 
#define ESUSPM_MASK 0x400U
#define ESUSPM_OFFSET 10
#define ESUSPM_START_BIT 10
#define ESUSPM_WIDTH 1



#define WRITE_ESUSPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ESUSPM_MASK) | ((val << ESUSPM_START_BIT) & ESUSPM_MASK )); \
   } 

#define ENABLE_ESUSPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  ESUSPM_MASK ); \
   }

#define DISABLE_ESUSPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~ESUSPM_MASK ); \
   } 

#define READ_ESUSPM() \
   ((READ_REGISTER_ULONG(0x18) & ESUSPM_MASK)  >> ESUSPM_START_BIT)

#define WHEN_ESUSPM_HIGH() \
     if ( READ_ESUSPM() )


#define UNLESS_ESUSPM_HIGH() \
     if (! READ_ESUSPM() )


#define WAIT_ESUSPM_LOW() \
    while ( READ_ESUSPM() );


#define WAIT_ESUSPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ESUSPM() && (--___t___ > 0)); }


#define WAIT_ESUSPM_HIGH() \
    while (! READ_ESUSPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global OUT NAK effective mask 
    // 
#define GONAKEFFM_MASK 0x80U
#define GONAKEFFM_OFFSET 7
#define GONAKEFFM_START_BIT 7
#define GONAKEFFM_WIDTH 1



#define WRITE_GONAKEFFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ GONAKEFFM_MASK) | ((val << GONAKEFFM_START_BIT) & GONAKEFFM_MASK )); \
   } 

#define ENABLE_GONAKEFFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  GONAKEFFM_MASK ); \
   }

#define DISABLE_GONAKEFFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~GONAKEFFM_MASK ); \
   } 

#define READ_GONAKEFFM() \
   ((READ_REGISTER_ULONG(0x18) & GONAKEFFM_MASK)  >> GONAKEFFM_START_BIT)

#define WHEN_GONAKEFFM_HIGH() \
     if ( READ_GONAKEFFM() )


#define UNLESS_GONAKEFFM_HIGH() \
     if (! READ_GONAKEFFM() )


#define WAIT_GONAKEFFM_LOW() \
    while ( READ_GONAKEFFM() );


#define WAIT_GONAKEFFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GONAKEFFM() && (--___t___ > 0)); }


#define WAIT_GONAKEFFM_HIGH() \
    while (! READ_GONAKEFFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global nonperiodic IN NAK effective mask 
    // 
#define GINAKEFFM_MASK 0x40U
#define GINAKEFFM_OFFSET 6
#define GINAKEFFM_START_BIT 6
#define GINAKEFFM_WIDTH 1



#define WRITE_GINAKEFFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ GINAKEFFM_MASK) | ((val << GINAKEFFM_START_BIT) & GINAKEFFM_MASK )); \
   } 

#define ENABLE_GINAKEFFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  GINAKEFFM_MASK ); \
   }

#define DISABLE_GINAKEFFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~GINAKEFFM_MASK ); \
   } 

#define READ_GINAKEFFM() \
   ((READ_REGISTER_ULONG(0x18) & GINAKEFFM_MASK)  >> GINAKEFFM_START_BIT)

#define WHEN_GINAKEFFM_HIGH() \
     if ( READ_GINAKEFFM() )


#define UNLESS_GINAKEFFM_HIGH() \
     if (! READ_GINAKEFFM() )


#define WAIT_GINAKEFFM_LOW() \
    while ( READ_GINAKEFFM() );


#define WAIT_GINAKEFFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GINAKEFFM() && (--___t___ > 0)); }


#define WAIT_GINAKEFFM_HIGH() \
    while (! READ_GINAKEFFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonperiodic TxFIFO empty mask 
    // 
#define NPTXFEM_MASK 0x20U
#define NPTXFEM_OFFSET 5
#define NPTXFEM_START_BIT 5
#define NPTXFEM_WIDTH 1



#define WRITE_NPTXFEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ NPTXFEM_MASK) | ((val << NPTXFEM_START_BIT) & NPTXFEM_MASK )); \
   } 

#define ENABLE_NPTXFEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  NPTXFEM_MASK ); \
   }

#define DISABLE_NPTXFEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~NPTXFEM_MASK ); \
   } 

#define READ_NPTXFEM() \
   ((READ_REGISTER_ULONG(0x18) & NPTXFEM_MASK)  >> NPTXFEM_START_BIT)

#define WHEN_NPTXFEM_HIGH() \
     if ( READ_NPTXFEM() )


#define UNLESS_NPTXFEM_HIGH() \
     if (! READ_NPTXFEM() )


#define WAIT_NPTXFEM_LOW() \
    while ( READ_NPTXFEM() );


#define WAIT_NPTXFEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NPTXFEM() && (--___t___ > 0)); }


#define WAIT_NPTXFEM_HIGH() \
    while (! READ_NPTXFEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive FIFO nonempty mask 
    // 
#define RXFLVLM_MASK 0x10U
#define RXFLVLM_OFFSET 4
#define RXFLVLM_START_BIT 4
#define RXFLVLM_WIDTH 1



#define WRITE_RXFLVLM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ RXFLVLM_MASK) | ((val << RXFLVLM_START_BIT) & RXFLVLM_MASK )); \
   } 

#define ENABLE_RXFLVLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  RXFLVLM_MASK ); \
   }

#define DISABLE_RXFLVLM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~RXFLVLM_MASK ); \
   } 

#define READ_RXFLVLM() \
   ((READ_REGISTER_ULONG(0x18) & RXFLVLM_MASK)  >> RXFLVLM_START_BIT)

#define WHEN_RXFLVLM_HIGH() \
     if ( READ_RXFLVLM() )


#define UNLESS_RXFLVLM_HIGH() \
     if (! READ_RXFLVLM() )


#define WAIT_RXFLVLM_LOW() \
    while ( READ_RXFLVLM() );


#define WAIT_RXFLVLM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXFLVLM() && (--___t___ > 0)); }


#define WAIT_RXFLVLM_HIGH() \
    while (! READ_RXFLVLM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start of frame mask 
    // 
#define SOFM_MASK 0x8U
#define SOFM_OFFSET 3
#define SOFM_START_BIT 3
#define SOFM_WIDTH 1



#define WRITE_SOFM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ SOFM_MASK) | ((val << SOFM_START_BIT) & SOFM_MASK )); \
   } 

#define ENABLE_SOFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  SOFM_MASK ); \
   }

#define DISABLE_SOFM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~SOFM_MASK ); \
   } 

#define READ_SOFM() \
   ((READ_REGISTER_ULONG(0x18) & SOFM_MASK)  >> SOFM_START_BIT)

#define WHEN_SOFM_HIGH() \
     if ( READ_SOFM() )


#define UNLESS_SOFM_HIGH() \
     if (! READ_SOFM() )


#define WAIT_SOFM_LOW() \
    while ( READ_SOFM() );


#define WAIT_SOFM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SOFM() && (--___t___ > 0)); }


#define WAIT_SOFM_HIGH() \
    while (! READ_SOFM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTG interrupt mask 
    // 
#define OTGINT_MASK 0x4U
#define OTGINT_OFFSET 2
#define OTGINT_START_BIT 2
#define OTGINT_WIDTH 1



#define WRITE_OTGINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OTGINT_MASK) | ((val << OTGINT_START_BIT) & OTGINT_MASK )); \
   } 

#define ENABLE_OTGINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  OTGINT_MASK ); \
   }

#define DISABLE_OTGINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~OTGINT_MASK ); \
   } 

#define READ_OTGINT() \
   ((READ_REGISTER_ULONG(0x18) & OTGINT_MASK)  >> OTGINT_START_BIT)

#define WHEN_OTGINT_HIGH() \
     if ( READ_OTGINT() )


#define UNLESS_OTGINT_HIGH() \
     if (! READ_OTGINT() )


#define WAIT_OTGINT_LOW() \
    while ( READ_OTGINT() );


#define WAIT_OTGINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGINT() && (--___t___ > 0)); }


#define WAIT_OTGINT_HIGH() \
    while (! READ_OTGINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGintmsk
//
// Return the value of register OTG_HS_GINTMSK
//
// Notes : Register OTG_HS interrupt mask register (OTG_HS_GINTMSK) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mode mismatch interrupt mask 
    // 
#define MMISM_MASK 0x2U
#define MMISM_OFFSET 1
#define MMISM_START_BIT 1
#define MMISM_WIDTH 1



#define WRITE_MMISM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ MMISM_MASK) | ((val << MMISM_START_BIT) & MMISM_MASK )); \
   } 

#define ENABLE_MMISM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  MMISM_MASK ); \
   }

#define DISABLE_MMISM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~MMISM_MASK ); \
   } 

#define READ_MMISM() \
   ((READ_REGISTER_ULONG(0x18) & MMISM_MASK)  >> MMISM_START_BIT)

#define WHEN_MMISM_HIGH() \
     if ( READ_MMISM() )


#define UNLESS_MMISM_HIGH() \
     if (! READ_MMISM() )


#define WAIT_MMISM_LOW() \
    while ( READ_MMISM() );


#define WAIT_MMISM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MMISM() && (--___t___ > 0)); }


#define WAIT_MMISM_HIGH() \
    while (! READ_MMISM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrDevice
//
// Return the value of register OTG_HS_GRXSTSR_DEVICE
//
// Notes : Register OtgHsGrxstsrDevice at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_GRXSTSR_DEVICE() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrDevice
//
// Return the value of register OTG_HS_GRXSTSR_DEVICE
//
// Notes : Register OTG_HS Receive status debug read register (peripheral mode mode) (OTG_HS_GRXSTSR_Device) at the offset 0x1C, Bits 21:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number 
    // 
#define FRMNUM_MASK 0x1E00000U
#define FRMNUM_OFFSET 24
#define FRMNUM_START_BIT 21
#define FRMNUM_WIDTH 4


#define OTG_HS_GRXSTSR_DEVICE_REG 0x1C

#define READ_FRMNUM() \
   ((READ_REGISTER_ULONG(0x1C) & FRMNUM_MASK)  >> FRMNUM_START_BIT)

#define WRITE_FRMNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ FRMNUM_MASK) | ((val << FRMNUM_START_BIT) & FRMNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrDevice
//
// Return the value of register OTG_HS_GRXSTSR_DEVICE
//
// Notes : Register OTG_HS Receive status debug read register (peripheral mode mode) (OTG_HS_GRXSTSR_Device) at the offset 0x1C, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet status 
    // 
#define PKTSTS_MASK 0x1E0000U
#define PKTSTS_OFFSET 20
#define PKTSTS_START_BIT 17
#define PKTSTS_WIDTH 4



#define READ_PKTSTS() \
   ((READ_REGISTER_ULONG(0x1C) & PKTSTS_MASK)  >> PKTSTS_START_BIT)

#define WRITE_PKTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ PKTSTS_MASK) | ((val << PKTSTS_START_BIT) & PKTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrDevice
//
// Return the value of register OTG_HS_GRXSTSR_DEVICE
//
// Notes : Register OTG_HS Receive status debug read register (peripheral mode mode) (OTG_HS_GRXSTSR_Device) at the offset 0x1C, Bits 15:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x18000U
#define DPID_OFFSET 16
#define DPID_START_BIT 15
#define DPID_WIDTH 2



#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1C) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrDevice
//
// Return the value of register OTG_HS_GRXSTSR_DEVICE
//
// Notes : Register OTG_HS Receive status debug read register (peripheral mode mode) (OTG_HS_GRXSTSR_Device) at the offset 0x1C, Bits 4:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Byte count 
    // 
#define BCNT_MASK 0x7FF0U
#define BCNT_OFFSET 14
#define BCNT_START_BIT 4
#define BCNT_WIDTH 11



#define READ_BCNT() \
   ((READ_REGISTER_ULONG(0x1C) & BCNT_MASK)  >> BCNT_START_BIT)

#define WRITE_BCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ BCNT_MASK) | ((val << BCNT_START_BIT) & BCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrDevice
//
// Return the value of register OTG_HS_GRXSTSR_DEVICE
//
// Notes : Register OTG_HS Receive status debug read register (peripheral mode mode) (OTG_HS_GRXSTSR_Device) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0xFU
#define EPNUM_OFFSET 3
#define EPNUM_START_BIT 0
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x1C) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrHost
//
// Return the value of register OTG_HS_GRXSTSR_HOST
//
// Notes : Register OtgHsGrxstsrHost at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_GRXSTSR_HOST() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrHost
//
// Return the value of register OTG_HS_GRXSTSR_HOST
//
// Notes : Register OTG_HS Receive status debug read register (host mode) (OTG_HS_GRXSTSR_Host) at the offset 0x1C, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet status 
    // 
#define PKTSTS_MASK 0x1E0000U
#define PKTSTS_OFFSET 20
#define PKTSTS_START_BIT 17
#define PKTSTS_WIDTH 4


#define OTG_HS_GRXSTSR_HOST_REG 0x1C

#define READ_PKTSTS() \
   ((READ_REGISTER_ULONG(0x1C) & PKTSTS_MASK)  >> PKTSTS_START_BIT)

#define WRITE_PKTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ PKTSTS_MASK) | ((val << PKTSTS_START_BIT) & PKTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrHost
//
// Return the value of register OTG_HS_GRXSTSR_HOST
//
// Notes : Register OTG_HS Receive status debug read register (host mode) (OTG_HS_GRXSTSR_Host) at the offset 0x1C, Bits 15:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x18000U
#define DPID_OFFSET 16
#define DPID_START_BIT 15
#define DPID_WIDTH 2



#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1C) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrHost
//
// Return the value of register OTG_HS_GRXSTSR_HOST
//
// Notes : Register OTG_HS Receive status debug read register (host mode) (OTG_HS_GRXSTSR_Host) at the offset 0x1C, Bits 4:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Byte count 
    // 
#define BCNT_MASK 0x7FF0U
#define BCNT_OFFSET 14
#define BCNT_START_BIT 4
#define BCNT_WIDTH 11



#define READ_BCNT() \
   ((READ_REGISTER_ULONG(0x1C) & BCNT_MASK)  >> BCNT_START_BIT)

#define WRITE_BCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ BCNT_MASK) | ((val << BCNT_START_BIT) & BCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstsrHost
//
// Return the value of register OTG_HS_GRXSTSR_HOST
//
// Notes : Register OTG_HS Receive status debug read register (host mode) (OTG_HS_GRXSTSR_Host) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel number 
    // 
#define CHNUM_MASK 0xFU
#define CHNUM_OFFSET 3
#define CHNUM_START_BIT 0
#define CHNUM_WIDTH 4



#define READ_CHNUM() \
   ((READ_REGISTER_ULONG(0x1C) & CHNUM_MASK)  >> CHNUM_START_BIT)

#define WRITE_CHNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CHNUM_MASK) | ((val << CHNUM_START_BIT) & CHNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspDevice
//
// Return the value of register OTG_HS_GRXSTSP_DEVICE
//
// Notes : Register OtgHsGrxstspDevice at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_GRXSTSP_DEVICE() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspDevice
//
// Return the value of register OTG_HS_GRXSTSP_DEVICE
//
// Notes : Register OTG_HS status read and pop register (peripheral mode) (OTG_HS_GRXSTSP_Device) at the offset 0x20, Bits 21:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number 
    // 
#define FRMNUM_MASK 0x1E00000U
#define FRMNUM_OFFSET 24
#define FRMNUM_START_BIT 21
#define FRMNUM_WIDTH 4


#define OTG_HS_GRXSTSP_DEVICE_REG 0x20

#define READ_FRMNUM() \
   ((READ_REGISTER_ULONG(0x20) & FRMNUM_MASK)  >> FRMNUM_START_BIT)

#define WRITE_FRMNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ FRMNUM_MASK) | ((val << FRMNUM_START_BIT) & FRMNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspDevice
//
// Return the value of register OTG_HS_GRXSTSP_DEVICE
//
// Notes : Register OTG_HS status read and pop register (peripheral mode) (OTG_HS_GRXSTSP_Device) at the offset 0x20, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet status 
    // 
#define PKTSTS_MASK 0x1E0000U
#define PKTSTS_OFFSET 20
#define PKTSTS_START_BIT 17
#define PKTSTS_WIDTH 4



#define READ_PKTSTS() \
   ((READ_REGISTER_ULONG(0x20) & PKTSTS_MASK)  >> PKTSTS_START_BIT)

#define WRITE_PKTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ PKTSTS_MASK) | ((val << PKTSTS_START_BIT) & PKTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspDevice
//
// Return the value of register OTG_HS_GRXSTSP_DEVICE
//
// Notes : Register OTG_HS status read and pop register (peripheral mode) (OTG_HS_GRXSTSP_Device) at the offset 0x20, Bits 15:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x18000U
#define DPID_OFFSET 16
#define DPID_START_BIT 15
#define DPID_WIDTH 2



#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x20) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspDevice
//
// Return the value of register OTG_HS_GRXSTSP_DEVICE
//
// Notes : Register OTG_HS status read and pop register (peripheral mode) (OTG_HS_GRXSTSP_Device) at the offset 0x20, Bits 4:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Byte count 
    // 
#define BCNT_MASK 0x7FF0U
#define BCNT_OFFSET 14
#define BCNT_START_BIT 4
#define BCNT_WIDTH 11



#define READ_BCNT() \
   ((READ_REGISTER_ULONG(0x20) & BCNT_MASK)  >> BCNT_START_BIT)

#define WRITE_BCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ BCNT_MASK) | ((val << BCNT_START_BIT) & BCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspDevice
//
// Return the value of register OTG_HS_GRXSTSP_DEVICE
//
// Notes : Register OTG_HS status read and pop register (peripheral mode) (OTG_HS_GRXSTSP_Device) at the offset 0x20, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0xFU
#define EPNUM_OFFSET 3
#define EPNUM_START_BIT 0
#define EPNUM_WIDTH 4



#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x20) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspHost
//
// Return the value of register OTG_HS_GRXSTSP_HOST
//
// Notes : Register OtgHsGrxstspHost at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_GRXSTSP_HOST() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspHost
//
// Return the value of register OTG_HS_GRXSTSP_HOST
//
// Notes : Register OTG_HS status read and pop register (host mode) (OTG_HS_GRXSTSP_Host) at the offset 0x20, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet status 
    // 
#define PKTSTS_MASK 0x1E0000U
#define PKTSTS_OFFSET 20
#define PKTSTS_START_BIT 17
#define PKTSTS_WIDTH 4


#define OTG_HS_GRXSTSP_HOST_REG 0x20

#define READ_PKTSTS() \
   ((READ_REGISTER_ULONG(0x20) & PKTSTS_MASK)  >> PKTSTS_START_BIT)

#define WRITE_PKTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ PKTSTS_MASK) | ((val << PKTSTS_START_BIT) & PKTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspHost
//
// Return the value of register OTG_HS_GRXSTSP_HOST
//
// Notes : Register OTG_HS status read and pop register (host mode) (OTG_HS_GRXSTSP_Host) at the offset 0x20, Bits 15:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x18000U
#define DPID_OFFSET 16
#define DPID_START_BIT 15
#define DPID_WIDTH 2



#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x20) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspHost
//
// Return the value of register OTG_HS_GRXSTSP_HOST
//
// Notes : Register OTG_HS status read and pop register (host mode) (OTG_HS_GRXSTSP_Host) at the offset 0x20, Bits 4:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Byte count 
    // 
#define BCNT_MASK 0x7FF0U
#define BCNT_OFFSET 14
#define BCNT_START_BIT 4
#define BCNT_WIDTH 11



#define READ_BCNT() \
   ((READ_REGISTER_ULONG(0x20) & BCNT_MASK)  >> BCNT_START_BIT)

#define WRITE_BCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ BCNT_MASK) | ((val << BCNT_START_BIT) & BCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxstspHost
//
// Return the value of register OTG_HS_GRXSTSP_HOST
//
// Notes : Register OTG_HS status read and pop register (host mode) (OTG_HS_GRXSTSP_Host) at the offset 0x20, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel number 
    // 
#define CHNUM_MASK 0xFU
#define CHNUM_OFFSET 3
#define CHNUM_START_BIT 0
#define CHNUM_WIDTH 4



#define READ_CHNUM() \
   ((READ_REGISTER_ULONG(0x20) & CHNUM_MASK)  >> CHNUM_START_BIT)

#define WRITE_CHNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ CHNUM_MASK) | ((val << CHNUM_START_BIT) & CHNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxfsiz
//
// Return the value of register OTG_HS_GRXFSIZ
//
// Notes : Register OtgHsGrxfsiz at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_GRXFSIZ( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_OTG_HS_GRXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_GRXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_GRXFSIZ() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGrxfsiz
//
// Return the value of register OTG_HS_GRXFSIZ
//
// Notes : Register OTG_HS Receive FIFO size register (OTG_HS_GRXFSIZ) at the offset 0x24, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RxFIFO depth 
    // 
#define RXFD_MASK 0xFFFFU
#define RXFD_OFFSET 15
#define RXFD_START_BIT 0
#define RXFD_WIDTH 16


#define OTG_HS_GRXFSIZ_REG 0x24

#define READ_RXFD() \
   ((READ_REGISTER_ULONG(0x24) & RXFD_MASK)  >> RXFD_START_BIT)

#define WRITE_RXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ RXFD_MASK) | ((val << RXFD_START_BIT) & RXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHnptxfsizHost
//
// Return the value of register OTG_HS_HNPTXFSIZ_HOST
//
// Notes : Register OtgHsHnptxfsizHost at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HNPTXFSIZ_HOST( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_OTG_HS_HNPTXFSIZ_HOST(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HNPTXFSIZ_HOST(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HNPTXFSIZ_HOST() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHnptxfsizHost
//
// Return the value of register OTG_HS_HNPTXFSIZ_HOST
//
// Notes : Register OTG_HS nonperiodic transmit FIFO size register (host mode) (OTG_HS_HNPTXFSIZ_Host) at the offset 0x28, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonperiodic TxFIFO depth 
    // 
#define NPTXFD_MASK 0xFFFF0000U
#define NPTXFD_OFFSET 31
#define NPTXFD_START_BIT 16
#define NPTXFD_WIDTH 16


#define OTG_HS_HNPTXFSIZ_HOST_REG 0x28

#define READ_NPTXFD() \
   ((READ_REGISTER_ULONG(0x28) & NPTXFD_MASK)  >> NPTXFD_START_BIT)

#define WRITE_NPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ NPTXFD_MASK) | ((val << NPTXFD_START_BIT) & NPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHnptxfsizHost
//
// Return the value of register OTG_HS_HNPTXFSIZ_HOST
//
// Notes : Register OTG_HS nonperiodic transmit FIFO size register (host mode) (OTG_HS_HNPTXFSIZ_Host) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonperiodic transmit RAM start address 
    // 
#define NPTXFSA_MASK 0xFFFFU
#define NPTXFSA_OFFSET 15
#define NPTXFSA_START_BIT 0
#define NPTXFSA_WIDTH 16



#define READ_NPTXFSA() \
   ((READ_REGISTER_ULONG(0x28) & NPTXFSA_MASK)  >> NPTXFSA_START_BIT)

#define WRITE_NPTXFSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ NPTXFSA_MASK) | ((val << NPTXFSA_START_BIT) & NPTXFSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf0Device
//
// Return the value of register OTG_HS_DIEPTXF0_DEVICE
//
// Notes : Register OtgHsDieptxf0Device at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_0_DEVICE( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_OTG_HS_DIEPTXF_0_DEVICE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_0_DEVICE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_0_DEVICE() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf0Device
//
// Return the value of register OTG_HS_DIEPTXF_0_DEVICE
//
// Notes : Register Endpoint 0 transmit FIFO size (peripheral mode) (OTG_HS_DIEPTXF0_Device) at the offset 0x28, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint 0 TxFIFO depth 
    // 
#define TX0FD_MASK 0xFFFF0000U
#define TX0FD_OFFSET 31
#define TX0FD_START_BIT 16
#define TX0FD_WIDTH 16


#define OTG_HS_DIEPTXF_0_DEVICE_REG 0x28

#define READ_TX0FD() \
   ((READ_REGISTER_ULONG(0x28) & TX0FD_MASK)  >> TX0FD_START_BIT)

#define WRITE_TX0FD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ TX0FD_MASK) | ((val << TX0FD_START_BIT) & TX0FD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf0Device
//
// Return the value of register OTG_HS_DIEPTXF_0_DEVICE
//
// Notes : Register Endpoint 0 transmit FIFO size (peripheral mode) (OTG_HS_DIEPTXF0_Device) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint 0 transmit RAM start address 
    // 
#define TX0FSA_MASK 0xFFFFU
#define TX0FSA_OFFSET 15
#define TX0FSA_START_BIT 0
#define TX0FSA_WIDTH 16



#define READ_TX0FSA() \
   ((READ_REGISTER_ULONG(0x28) & TX0FSA_MASK)  >> TX0FSA_START_BIT)

#define WRITE_TX0FSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ TX0FSA_MASK) | ((val << TX0FSA_START_BIT) & TX0FSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGnptxsts
//
// Return the value of register OTG_HS_GNPTXSTS
//
// Notes : Register OtgHsGnptxsts at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_GNPTXSTS() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGnptxsts
//
// Return the value of register OTG_HS_GNPTXSTS
//
// Notes : Register OTG_HS nonperiodic transmit FIFO/queue status register (OTG_HS_GNPTXSTS) at the offset 0x2C, Bits 24:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Top of the nonperiodic transmit request queue 
    // 
#define NPTXQTOP_MASK 0x7F000000U
#define NPTXQTOP_OFFSET 30
#define NPTXQTOP_START_BIT 24
#define NPTXQTOP_WIDTH 7


#define OTG_HS_GNPTXSTS_REG 0x2C

#define READ_NPTXQTOP() \
   ((READ_REGISTER_ULONG(0x2C) & NPTXQTOP_MASK)  >> NPTXQTOP_START_BIT)

#define WRITE_NPTXQTOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ NPTXQTOP_MASK) | ((val << NPTXQTOP_START_BIT) & NPTXQTOP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGnptxsts
//
// Return the value of register OTG_HS_GNPTXSTS
//
// Notes : Register OTG_HS nonperiodic transmit FIFO/queue status register (OTG_HS_GNPTXSTS) at the offset 0x2C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonperiodic transmit request queue space available 
    // 
#define NPTQXSAV_MASK 0xFF0000U
#define NPTQXSAV_OFFSET 23
#define NPTQXSAV_START_BIT 16
#define NPTQXSAV_WIDTH 8



#define READ_NPTQXSAV() \
   ((READ_REGISTER_ULONG(0x2C) & NPTQXSAV_MASK)  >> NPTQXSAV_START_BIT)

#define WRITE_NPTQXSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ NPTQXSAV_MASK) | ((val << NPTQXSAV_START_BIT) & NPTQXSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGnptxsts
//
// Return the value of register OTG_HS_GNPTXSTS
//
// Notes : Register OTG_HS nonperiodic transmit FIFO/queue status register (OTG_HS_GNPTXSTS) at the offset 0x2C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonperiodic TxFIFO space available 
    // 
#define NPTXFSAV_MASK 0xFFFFU
#define NPTXFSAV_OFFSET 15
#define NPTXFSAV_START_BIT 0
#define NPTXFSAV_WIDTH 16



#define READ_NPTXFSAV() \
   ((READ_REGISTER_ULONG(0x2C) & NPTXFSAV_MASK)  >> NPTXFSAV_START_BIT)

#define WRITE_NPTXFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ NPTXFSAV_MASK) | ((val << NPTXFSAV_START_BIT) & NPTXFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OtgHsGccfg at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_GCCFG( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_OTG_HS_GCCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_GCCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_GCCFG() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DM pull-up detection status 
    // 
#define PS2DET_MASK 0x8U
#define PS2DET_OFFSET 3
#define PS2DET_START_BIT 3
#define PS2DET_WIDTH 1


#define OTG_HS_GCCFG_REG 0x38

#define WRITE_PS2DET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ PS2DET_MASK) | ((val << PS2DET_START_BIT) & PS2DET_MASK )); \
   } 

#define ENABLE_PS2DET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  PS2DET_MASK ); \
   }

#define DISABLE_PS2DET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~PS2DET_MASK ); \
   } 

#define READ_PS2DET() \
   ((READ_REGISTER_ULONG(0x38) & PS2DET_MASK)  >> PS2DET_START_BIT)

#define WHEN_PS2DET_HIGH() \
     if ( READ_PS2DET() )


#define UNLESS_PS2DET_HIGH() \
     if (! READ_PS2DET() )


#define WAIT_PS2DET_LOW() \
    while ( READ_PS2DET() );


#define WAIT_PS2DET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PS2DET() && (--___t___ > 0)); }


#define WAIT_PS2DET_HIGH() \
    while (! READ_PS2DET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Secondary detection (SD) status 
    // 
#define SDET_MASK 0x4U
#define SDET_OFFSET 2
#define SDET_START_BIT 2
#define SDET_WIDTH 1



#define WRITE_SDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ SDET_MASK) | ((val << SDET_START_BIT) & SDET_MASK )); \
   } 

#define ENABLE_SDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  SDET_MASK ); \
   }

#define DISABLE_SDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~SDET_MASK ); \
   } 

#define READ_SDET() \
   ((READ_REGISTER_ULONG(0x38) & SDET_MASK)  >> SDET_START_BIT)

#define WHEN_SDET_HIGH() \
     if ( READ_SDET() )


#define UNLESS_SDET_HIGH() \
     if (! READ_SDET() )


#define WAIT_SDET_LOW() \
    while ( READ_SDET() );


#define WAIT_SDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDET() && (--___t___ > 0)); }


#define WAIT_SDET_HIGH() \
    while (! READ_SDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Primary detection (PD) status 
    // 
#define PDET_MASK 0x2U
#define PDET_OFFSET 1
#define PDET_START_BIT 1
#define PDET_WIDTH 1



#define WRITE_PDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ PDET_MASK) | ((val << PDET_START_BIT) & PDET_MASK )); \
   } 

#define ENABLE_PDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  PDET_MASK ); \
   }

#define DISABLE_PDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~PDET_MASK ); \
   } 

#define READ_PDET() \
   ((READ_REGISTER_ULONG(0x38) & PDET_MASK)  >> PDET_START_BIT)

#define WHEN_PDET_HIGH() \
     if ( READ_PDET() )


#define UNLESS_PDET_HIGH() \
     if (! READ_PDET() )


#define WAIT_PDET_LOW() \
    while ( READ_PDET() );


#define WAIT_PDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PDET() && (--___t___ > 0)); }


#define WAIT_PDET_HIGH() \
    while (! READ_PDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data contact detection (DCD) status 
    // 
#define DCDET_MASK 0x1U
#define DCDET_OFFSET 0
#define DCDET_START_BIT 0
#define DCDET_WIDTH 1



#define WRITE_DCDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ DCDET_MASK) | ((val << DCDET_START_BIT) & DCDET_MASK )); \
   } 

#define ENABLE_DCDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  DCDET_MASK ); \
   }

#define DISABLE_DCDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~DCDET_MASK ); \
   } 

#define READ_DCDET() \
   ((READ_REGISTER_ULONG(0x38) & DCDET_MASK)  >> DCDET_START_BIT)

#define WHEN_DCDET_HIGH() \
     if ( READ_DCDET() )


#define UNLESS_DCDET_HIGH() \
     if (! READ_DCDET() )


#define WAIT_DCDET_LOW() \
    while ( READ_DCDET() );


#define WAIT_DCDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCDET() && (--___t___ > 0)); }


#define WAIT_DCDET_HIGH() \
    while (! READ_DCDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB VBUS detection enable 
    // 
#define VBDEN_MASK 0x200000U
#define VBDEN_OFFSET 21
#define VBDEN_START_BIT 21
#define VBDEN_WIDTH 1



#define WRITE_VBDEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ VBDEN_MASK) | ((val << VBDEN_START_BIT) & VBDEN_MASK )); \
   } 

#define ENABLE_VBDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  VBDEN_MASK ); \
   }

#define DISABLE_VBDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~VBDEN_MASK ); \
   } 

#define READ_VBDEN() \
   ((READ_REGISTER_ULONG(0x38) & VBDEN_MASK)  >> VBDEN_START_BIT)

#define WHEN_VBDEN_HIGH() \
     if ( READ_VBDEN() )


#define UNLESS_VBDEN_HIGH() \
     if (! READ_VBDEN() )


#define WAIT_VBDEN_LOW() \
    while ( READ_VBDEN() );


#define WAIT_VBDEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VBDEN() && (--___t___ > 0)); }


#define WAIT_VBDEN_HIGH() \
    while (! READ_VBDEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Secondary detection (SD) mode enable 
    // 
#define SDEN_MASK 0x100000U
#define SDEN_OFFSET 20
#define SDEN_START_BIT 20
#define SDEN_WIDTH 1



#define WRITE_SDEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ SDEN_MASK) | ((val << SDEN_START_BIT) & SDEN_MASK )); \
   } 

#define ENABLE_SDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  SDEN_MASK ); \
   }

#define DISABLE_SDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~SDEN_MASK ); \
   } 

#define READ_SDEN() \
   ((READ_REGISTER_ULONG(0x38) & SDEN_MASK)  >> SDEN_START_BIT)

#define WHEN_SDEN_HIGH() \
     if ( READ_SDEN() )


#define UNLESS_SDEN_HIGH() \
     if (! READ_SDEN() )


#define WAIT_SDEN_LOW() \
    while ( READ_SDEN() );


#define WAIT_SDEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDEN() && (--___t___ > 0)); }


#define WAIT_SDEN_HIGH() \
    while (! READ_SDEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Primary detection (PD) mode enable 
    // 
#define PDEN_MASK 0x80000U
#define PDEN_OFFSET 19
#define PDEN_START_BIT 19
#define PDEN_WIDTH 1



#define WRITE_PDEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ PDEN_MASK) | ((val << PDEN_START_BIT) & PDEN_MASK )); \
   } 

#define ENABLE_PDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  PDEN_MASK ); \
   }

#define DISABLE_PDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~PDEN_MASK ); \
   } 

#define READ_PDEN() \
   ((READ_REGISTER_ULONG(0x38) & PDEN_MASK)  >> PDEN_START_BIT)

#define WHEN_PDEN_HIGH() \
     if ( READ_PDEN() )


#define UNLESS_PDEN_HIGH() \
     if (! READ_PDEN() )


#define WAIT_PDEN_LOW() \
    while ( READ_PDEN() );


#define WAIT_PDEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PDEN() && (--___t___ > 0)); }


#define WAIT_PDEN_HIGH() \
    while (! READ_PDEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data contact detection (DCD) mode enable 
    // 
#define DCDEN_MASK 0x40000U
#define DCDEN_OFFSET 18
#define DCDEN_START_BIT 18
#define DCDEN_WIDTH 1



#define WRITE_DCDEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ DCDEN_MASK) | ((val << DCDEN_START_BIT) & DCDEN_MASK )); \
   } 

#define ENABLE_DCDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  DCDEN_MASK ); \
   }

#define DISABLE_DCDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~DCDEN_MASK ); \
   } 

#define READ_DCDEN() \
   ((READ_REGISTER_ULONG(0x38) & DCDEN_MASK)  >> DCDEN_START_BIT)

#define WHEN_DCDEN_HIGH() \
     if ( READ_DCDEN() )


#define UNLESS_DCDEN_HIGH() \
     if (! READ_DCDEN() )


#define WAIT_DCDEN_LOW() \
    while ( READ_DCDEN() );


#define WAIT_DCDEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DCDEN() && (--___t___ > 0)); }


#define WAIT_DCDEN_HIGH() \
    while (! READ_DCDEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Battery charging detector (BCD) enable 
    // 
#define BCDEN_MASK 0x20000U
#define BCDEN_OFFSET 17
#define BCDEN_START_BIT 17
#define BCDEN_WIDTH 1



#define WRITE_BCDEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ BCDEN_MASK) | ((val << BCDEN_START_BIT) & BCDEN_MASK )); \
   } 

#define ENABLE_BCDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  BCDEN_MASK ); \
   }

#define DISABLE_BCDEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~BCDEN_MASK ); \
   } 

#define READ_BCDEN() \
   ((READ_REGISTER_ULONG(0x38) & BCDEN_MASK)  >> BCDEN_START_BIT)

#define WHEN_BCDEN_HIGH() \
     if ( READ_BCDEN() )


#define UNLESS_BCDEN_HIGH() \
     if (! READ_BCDEN() )


#define WAIT_BCDEN_LOW() \
    while ( READ_BCDEN() );


#define WAIT_BCDEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BCDEN() && (--___t___ > 0)); }


#define WAIT_BCDEN_HIGH() \
    while (! READ_BCDEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGccfg
//
// Return the value of register OTG_HS_GCCFG
//
// Notes : Register OTG_HS general core configuration register (OTG_HS_GCCFG) at the offset 0x38, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power down 
    // 
#define PWRDWN_MASK 0x10000U
#define PWRDWN_OFFSET 16
#define PWRDWN_START_BIT 16
#define PWRDWN_WIDTH 1



#define WRITE_PWRDWN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ PWRDWN_MASK) | ((val << PWRDWN_START_BIT) & PWRDWN_MASK )); \
   } 

#define ENABLE_PWRDWN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  PWRDWN_MASK ); \
   }

#define DISABLE_PWRDWN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~PWRDWN_MASK ); \
   } 

#define READ_PWRDWN() \
   ((READ_REGISTER_ULONG(0x38) & PWRDWN_MASK)  >> PWRDWN_START_BIT)

#define WHEN_PWRDWN_HIGH() \
     if ( READ_PWRDWN() )


#define UNLESS_PWRDWN_HIGH() \
     if (! READ_PWRDWN() )


#define WAIT_PWRDWN_LOW() \
    while ( READ_PWRDWN() );


#define WAIT_PWRDWN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWRDWN() && (--___t___ > 0)); }


#define WAIT_PWRDWN_HIGH() \
    while (! READ_PWRDWN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsCid
//
// Return the value of register OTG_HS_CID
//
// Notes : Register OtgHsCid at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_CID( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_OTG_HS_CID(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_CID(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_CID() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsCid
//
// Return the value of register OTG_HS_CID
//
// Notes : Register OTG_HS core ID register (OTG_HS_CID) at the offset 0x3C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Product ID field 
    // 
#define PRODUCT_ID_MASK 0xFFFFFFFFU
#define PRODUCT_ID_OFFSET 31
#define PRODUCT_ID_START_BIT 0
#define PRODUCT_ID_WIDTH 32


#define OTG_HS_CID_REG 0x3C

#define READ_PRODUCT_ID() \
   ((READ_REGISTER_ULONG(0x3C) & PRODUCT_ID_MASK)  >> PRODUCT_ID_START_BIT)

#define WRITE_PRODUCT_ID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ PRODUCT_ID_MASK) | ((val << PRODUCT_ID_START_BIT) & PRODUCT_ID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OtgHsGlpmcfg at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable best effort service latency 
    // 
#define ENBESL_MASK 0x10000000U
#define ENBESL_OFFSET 28
#define ENBESL_START_BIT 28
#define ENBESL_WIDTH 1


#define OTG_HS_GLPMCFG_REG 0x54

#define WRITE_ENBESL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ ENBESL_MASK) | ((val << ENBESL_START_BIT) & ENBESL_MASK )); \
   } 

#define ENABLE_ENBESL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  ENBESL_MASK ); \
   }

#define DISABLE_ENBESL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~ENBESL_MASK ); \
   } 

#define READ_ENBESL() \
   ((READ_REGISTER_ULONG(0x54) & ENBESL_MASK)  >> ENBESL_START_BIT)

#define WHEN_ENBESL_HIGH() \
     if ( READ_ENBESL() )


#define UNLESS_ENBESL_HIGH() \
     if (! READ_ENBESL() )


#define WAIT_ENBESL_LOW() \
    while ( READ_ENBESL() );


#define WAIT_ENBESL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENBESL() && (--___t___ > 0)); }


#define WAIT_ENBESL_HIGH() \
    while (! READ_ENBESL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM retry count status 
    // 
#define LPMRCNTSTS_MASK 0xE000000U
#define LPMRCNTSTS_OFFSET 27
#define LPMRCNTSTS_START_BIT 25
#define LPMRCNTSTS_WIDTH 3



#define READ_LPMRCNTSTS() \
   ((READ_REGISTER_ULONG(0x54) & LPMRCNTSTS_MASK)  >> LPMRCNTSTS_START_BIT)

#define WRITE_LPMRCNTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMRCNTSTS_MASK) | ((val << LPMRCNTSTS_START_BIT) & LPMRCNTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Send LPM transaction 
    // 
#define SNDLPM_MASK 0x1000000U
#define SNDLPM_OFFSET 24
#define SNDLPM_START_BIT 24
#define SNDLPM_WIDTH 1



#define WRITE_SNDLPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ SNDLPM_MASK) | ((val << SNDLPM_START_BIT) & SNDLPM_MASK )); \
   } 

#define ENABLE_SNDLPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  SNDLPM_MASK ); \
   }

#define DISABLE_SNDLPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~SNDLPM_MASK ); \
   } 

#define READ_SNDLPM() \
   ((READ_REGISTER_ULONG(0x54) & SNDLPM_MASK)  >> SNDLPM_START_BIT)

#define WHEN_SNDLPM_HIGH() \
     if ( READ_SNDLPM() )


#define UNLESS_SNDLPM_HIGH() \
     if (! READ_SNDLPM() )


#define WAIT_SNDLPM_LOW() \
    while ( READ_SNDLPM() );


#define WAIT_SNDLPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNDLPM() && (--___t___ > 0)); }


#define WAIT_SNDLPM_HIGH() \
    while (! READ_SNDLPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 21:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM retry count 
    // 
#define LPMRCNT_MASK 0xE00000U
#define LPMRCNT_OFFSET 23
#define LPMRCNT_START_BIT 21
#define LPMRCNT_WIDTH 3



#define READ_LPMRCNT() \
   ((READ_REGISTER_ULONG(0x54) & LPMRCNT_MASK)  >> LPMRCNT_START_BIT)

#define WRITE_LPMRCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMRCNT_MASK) | ((val << LPMRCNT_START_BIT) & LPMRCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM Channel Index 
    // 
#define LPMCHIDX_MASK 0x1E0000U
#define LPMCHIDX_OFFSET 20
#define LPMCHIDX_START_BIT 17
#define LPMCHIDX_WIDTH 4



#define READ_LPMCHIDX() \
   ((READ_REGISTER_ULONG(0x54) & LPMCHIDX_MASK)  >> LPMCHIDX_START_BIT)

#define WRITE_LPMCHIDX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMCHIDX_MASK) | ((val << LPMCHIDX_START_BIT) & LPMCHIDX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sleep State Resume OK 
    // 
#define L1RSMOK_MASK 0x10000U
#define L1RSMOK_OFFSET 16
#define L1RSMOK_START_BIT 16
#define L1RSMOK_WIDTH 1



#define WRITE_L1RSMOK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ L1RSMOK_MASK) | ((val << L1RSMOK_START_BIT) & L1RSMOK_MASK )); \
   } 

#define ENABLE_L1RSMOK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  L1RSMOK_MASK ); \
   }

#define DISABLE_L1RSMOK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~L1RSMOK_MASK ); \
   } 

#define READ_L1RSMOK() \
   ((READ_REGISTER_ULONG(0x54) & L1RSMOK_MASK)  >> L1RSMOK_START_BIT)

#define WHEN_L1RSMOK_HIGH() \
     if ( READ_L1RSMOK() )


#define UNLESS_L1RSMOK_HIGH() \
     if (! READ_L1RSMOK() )


#define WAIT_L1RSMOK_LOW() \
    while ( READ_L1RSMOK() );


#define WAIT_L1RSMOK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_L1RSMOK() && (--___t___ > 0)); }


#define WAIT_L1RSMOK_HIGH() \
    while (! READ_L1RSMOK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port sleep status 
    // 
#define SLPSTS_MASK 0x8000U
#define SLPSTS_OFFSET 15
#define SLPSTS_START_BIT 15
#define SLPSTS_WIDTH 1



#define WRITE_SLPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ SLPSTS_MASK) | ((val << SLPSTS_START_BIT) & SLPSTS_MASK )); \
   } 

#define ENABLE_SLPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  SLPSTS_MASK ); \
   }

#define DISABLE_SLPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~SLPSTS_MASK ); \
   } 

#define READ_SLPSTS() \
   ((READ_REGISTER_ULONG(0x54) & SLPSTS_MASK)  >> SLPSTS_START_BIT)

#define WHEN_SLPSTS_HIGH() \
     if ( READ_SLPSTS() )


#define UNLESS_SLPSTS_HIGH() \
     if (! READ_SLPSTS() )


#define WAIT_SLPSTS_LOW() \
    while ( READ_SLPSTS() );


#define WAIT_SLPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SLPSTS() && (--___t___ > 0)); }


#define WAIT_SLPSTS_HIGH() \
    while (! READ_SLPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM response 
    // 
#define LPMRST_MASK 0x6000U
#define LPMRST_OFFSET 14
#define LPMRST_START_BIT 13
#define LPMRST_WIDTH 2



#define READ_LPMRST() \
   ((READ_REGISTER_ULONG(0x54) & LPMRST_MASK)  >> LPMRST_START_BIT)

#define WRITE_LPMRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMRST_MASK) | ((val << LPMRST_START_BIT) & LPMRST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // L1 deep sleep enable 
    // 
#define L1DSEN_MASK 0x1000U
#define L1DSEN_OFFSET 12
#define L1DSEN_START_BIT 12
#define L1DSEN_WIDTH 1



#define WRITE_L1DSEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ L1DSEN_MASK) | ((val << L1DSEN_START_BIT) & L1DSEN_MASK )); \
   } 

#define ENABLE_L1DSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  L1DSEN_MASK ); \
   }

#define DISABLE_L1DSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~L1DSEN_MASK ); \
   } 

#define READ_L1DSEN() \
   ((READ_REGISTER_ULONG(0x54) & L1DSEN_MASK)  >> L1DSEN_START_BIT)

#define WHEN_L1DSEN_HIGH() \
     if ( READ_L1DSEN() )


#define UNLESS_L1DSEN_HIGH() \
     if (! READ_L1DSEN() )


#define WAIT_L1DSEN_LOW() \
    while ( READ_L1DSEN() );


#define WAIT_L1DSEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_L1DSEN() && (--___t___ > 0)); }


#define WAIT_L1DSEN_HIGH() \
    while (! READ_L1DSEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BESL threshold 
    // 
#define BESLTHRS_MASK 0xF00U
#define BESLTHRS_OFFSET 11
#define BESLTHRS_START_BIT 8
#define BESLTHRS_WIDTH 4



#define READ_BESLTHRS() \
   ((READ_REGISTER_ULONG(0x54) & BESLTHRS_MASK)  >> BESLTHRS_START_BIT)

#define WRITE_BESLTHRS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ BESLTHRS_MASK) | ((val << BESLTHRS_START_BIT) & BESLTHRS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // L1 Shallow Sleep enable 
    // 
#define L1SSEN_MASK 0x80U
#define L1SSEN_OFFSET 7
#define L1SSEN_START_BIT 7
#define L1SSEN_WIDTH 1



#define WRITE_L1SSEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ L1SSEN_MASK) | ((val << L1SSEN_START_BIT) & L1SSEN_MASK )); \
   } 

#define ENABLE_L1SSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  L1SSEN_MASK ); \
   }

#define DISABLE_L1SSEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~L1SSEN_MASK ); \
   } 

#define READ_L1SSEN() \
   ((READ_REGISTER_ULONG(0x54) & L1SSEN_MASK)  >> L1SSEN_START_BIT)

#define WHEN_L1SSEN_HIGH() \
     if ( READ_L1SSEN() )


#define UNLESS_L1SSEN_HIGH() \
     if (! READ_L1SSEN() )


#define WAIT_L1SSEN_LOW() \
    while ( READ_L1SSEN() );


#define WAIT_L1SSEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_L1SSEN() && (--___t___ > 0)); }


#define WAIT_L1SSEN_HIGH() \
    while (! READ_L1SSEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bRemoteWake value 
    // 
#define REMWAKE_MASK 0x40U
#define REMWAKE_OFFSET 6
#define REMWAKE_START_BIT 6
#define REMWAKE_WIDTH 1



#define WRITE_REMWAKE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ REMWAKE_MASK) | ((val << REMWAKE_START_BIT) & REMWAKE_MASK )); \
   } 

#define ENABLE_REMWAKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  REMWAKE_MASK ); \
   }

#define DISABLE_REMWAKE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~REMWAKE_MASK ); \
   } 

#define READ_REMWAKE() \
   ((READ_REGISTER_ULONG(0x54) & REMWAKE_MASK)  >> REMWAKE_START_BIT)

#define WHEN_REMWAKE_HIGH() \
     if ( READ_REMWAKE() )


#define UNLESS_REMWAKE_HIGH() \
     if (! READ_REMWAKE() )


#define WAIT_REMWAKE_LOW() \
    while ( READ_REMWAKE() );


#define WAIT_REMWAKE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_REMWAKE() && (--___t___ > 0)); }


#define WAIT_REMWAKE_HIGH() \
    while (! READ_REMWAKE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 2:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Best effort service latency 
    // 
#define BESL_MASK 0x3CU
#define BESL_OFFSET 5
#define BESL_START_BIT 2
#define BESL_WIDTH 4



#define READ_BESL() \
   ((READ_REGISTER_ULONG(0x54) & BESL_MASK)  >> BESL_START_BIT)

#define WRITE_BESL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ BESL_MASK) | ((val << BESL_START_BIT) & BESL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM token acknowledge enable 
    // 
#define LPMACK_MASK 0x2U
#define LPMACK_OFFSET 1
#define LPMACK_START_BIT 1
#define LPMACK_WIDTH 1



#define WRITE_LPMACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMACK_MASK) | ((val << LPMACK_START_BIT) & LPMACK_MASK )); \
   } 

#define ENABLE_LPMACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  LPMACK_MASK ); \
   }

#define DISABLE_LPMACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~LPMACK_MASK ); \
   } 

#define READ_LPMACK() \
   ((READ_REGISTER_ULONG(0x54) & LPMACK_MASK)  >> LPMACK_START_BIT)

#define WHEN_LPMACK_HIGH() \
     if ( READ_LPMACK() )


#define UNLESS_LPMACK_HIGH() \
     if (! READ_LPMACK() )


#define WAIT_LPMACK_LOW() \
    while ( READ_LPMACK() );


#define WAIT_LPMACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPMACK() && (--___t___ > 0)); }


#define WAIT_LPMACK_HIGH() \
    while (! READ_LPMACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsGlpmcfg
//
// Return the value of register OTG_HS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_HS_GLPMCFG) at the offset 0x54, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM support enable 
    // 
#define LPMEN_MASK 0x1U
#define LPMEN_OFFSET 0
#define LPMEN_START_BIT 0
#define LPMEN_WIDTH 1



#define WRITE_LPMEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMEN_MASK) | ((val << LPMEN_START_BIT) & LPMEN_MASK )); \
   } 

#define ENABLE_LPMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  LPMEN_MASK ); \
   }

#define DISABLE_LPMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG(0x54, val & ~LPMEN_MASK ); \
   } 

#define READ_LPMEN() \
   ((READ_REGISTER_ULONG(0x54) & LPMEN_MASK)  >> LPMEN_START_BIT)

#define WHEN_LPMEN_HIGH() \
     if ( READ_LPMEN() )


#define UNLESS_LPMEN_HIGH() \
     if (! READ_LPMEN() )


#define WAIT_LPMEN_LOW() \
    while ( READ_LPMEN() );


#define WAIT_LPMEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPMEN() && (--___t___ > 0)); }


#define WAIT_LPMEN_HIGH() \
    while (! READ_LPMEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxfsiz
//
// Return the value of register OTG_HS_HPTXFSIZ
//
// Notes : Register OtgHsHptxfsiz at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_HPTXFSIZ( y) \
     WRITE_REGISTER_ULONG( 0x100 , y)

#define SET_BITS_OTG_HS_HPTXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_HPTXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_HPTXFSIZ() \
     READ_REGISTER_ULONG(0x100)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxfsiz
//
// Return the value of register OTG_HS_HPTXFSIZ
//
// Notes : Register OTG_HS Host periodic transmit FIFO size register (OTG_HS_HPTXFSIZ) at the offset 0x100, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host periodic TxFIFO depth 
    // 
#define PTXFD_MASK 0xFFFF0000U
#define PTXFD_OFFSET 31
#define PTXFD_START_BIT 16
#define PTXFD_WIDTH 16


#define OTG_HS_HPTXFSIZ_REG 0x100

typedef enum ptxfd {
    PTXFD_0,
    PTXFD_1
} PTXFD_T ;
#define READ_PTXFD() \
   ((READ_REGISTER_ULONG(0x100) & PTXFD_MASK)  >> PTXFD_START_BIT)

#define WRITE_PTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ PTXFD_MASK) | ((val << PTXFD_START_BIT) & PTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsHptxfsiz
//
// Return the value of register OTG_HS_HPTXFSIZ
//
// Notes : Register OTG_HS Host periodic transmit FIFO size register (OTG_HS_HPTXFSIZ) at the offset 0x100, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host periodic TxFIFO start address 
    // 
#define PTXSA_MASK 0xFFFFU
#define PTXSA_OFFSET 15
#define PTXSA_START_BIT 0
#define PTXSA_WIDTH 16



#define READ_PTXSA() \
   ((READ_REGISTER_ULONG(0x100) & PTXSA_MASK)  >> PTXSA_START_BIT)

#define WRITE_PTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ PTXSA_MASK) | ((val << PTXSA_START_BIT) & PTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf1
//
// Return the value of register OTG_HS_DIEPTXF1
//
// Notes : Register OtgHsDieptxf1 at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_1( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_OTG_HS_DIEPTXF_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_1() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf1
//
// Return the value of register OTG_HS_DIEPTXF_1
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF1) at the offset 0x104, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_1_REG 0x104

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x104) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf1
//
// Return the value of register OTG_HS_DIEPTXF_1
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF1) at the offset 0x104, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x104) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf2
//
// Return the value of register OTG_HS_DIEPTXF2
//
// Notes : Register OtgHsDieptxf2 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_2( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_OTG_HS_DIEPTXF_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_2() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf2
//
// Return the value of register OTG_HS_DIEPTXF_2
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF2) at the offset 0x108, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_2_REG 0x108

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x108) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf2
//
// Return the value of register OTG_HS_DIEPTXF_2
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF2) at the offset 0x108, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x108) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf3
//
// Return the value of register OTG_HS_DIEPTXF3
//
// Notes : Register OtgHsDieptxf3 at offset 0x11C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_3( y) \
     WRITE_REGISTER_ULONG( 0x11C , y)

#define SET_BITS_OTG_HS_DIEPTXF_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_3() \
     READ_REGISTER_ULONG(0x11C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf3
//
// Return the value of register OTG_HS_DIEPTXF_3
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF3) at the offset 0x11C, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_3_REG 0x11C

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x11C) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf3
//
// Return the value of register OTG_HS_DIEPTXF_3
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF3) at the offset 0x11C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x11C) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf4
//
// Return the value of register OTG_HS_DIEPTXF4
//
// Notes : Register OtgHsDieptxf4 at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_4( y) \
     WRITE_REGISTER_ULONG( 0x120 , y)

#define SET_BITS_OTG_HS_DIEPTXF_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_4() \
     READ_REGISTER_ULONG(0x120)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf4
//
// Return the value of register OTG_HS_DIEPTXF_4
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF4) at the offset 0x120, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_4_REG 0x120

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x120) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf4
//
// Return the value of register OTG_HS_DIEPTXF_4
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF4) at the offset 0x120, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x120) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf5
//
// Return the value of register OTG_HS_DIEPTXF5
//
// Notes : Register OtgHsDieptxf5 at offset 0x124
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_5( y) \
     WRITE_REGISTER_ULONG( 0x124 , y)

#define SET_BITS_OTG_HS_DIEPTXF_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x124); \
     WRITE_REGISTER_ULONG( 0x124 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_5() \
     READ_REGISTER_ULONG(0x124)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf5
//
// Return the value of register OTG_HS_DIEPTXF_5
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF5) at the offset 0x124, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_5_REG 0x124

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x124) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf5
//
// Return the value of register OTG_HS_DIEPTXF_5
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF5) at the offset 0x124, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x124) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x124); \
     WRITE_REGISTER_ULONG(0x124, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf6
//
// Return the value of register OTG_HS_DIEPTXF6
//
// Notes : Register OtgHsDieptxf6 at offset 0x128
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_6( y) \
     WRITE_REGISTER_ULONG( 0x128 , y)

#define SET_BITS_OTG_HS_DIEPTXF_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_6() \
     READ_REGISTER_ULONG(0x128)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf6
//
// Return the value of register OTG_HS_DIEPTXF_6
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF6) at the offset 0x128, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_6_REG 0x128

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x128) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf6
//
// Return the value of register OTG_HS_DIEPTXF_6
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF6) at the offset 0x128, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x128) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf7
//
// Return the value of register OTG_HS_DIEPTXF7
//
// Notes : Register OtgHsDieptxf7 at offset 0x12C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTXF_7( y) \
     WRITE_REGISTER_ULONG( 0x12C , y)

#define SET_BITS_OTG_HS_DIEPTXF_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTXF_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x12C); \
     WRITE_REGISTER_ULONG( 0x12C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTXF_7() \
     READ_REGISTER_ULONG(0x12C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf7
//
// Return the value of register OTG_HS_DIEPTXF_7
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF7) at the offset 0x12C, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_HS_DIEPTXF_7_REG 0x12C

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x12C) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptxf7
//
// Return the value of register OTG_HS_DIEPTXF_7
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO size register (OTG_HS_DIEPTXF7) at the offset 0x12C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFOx transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x12C) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x12C); \
     WRITE_REGISTER_ULONG(0x12C, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

