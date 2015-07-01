/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_hs_device.h
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
 
#define OTG_HS_DEVICE 0x40040800
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDcfg
//
// Return the value of register OTG_HS_DCFG
//
// Notes : Register OtgHsDcfg at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DCFG( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_OTG_HS_DCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DCFG() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDcfg
//
// Return the value of register OTG_HS_DCFG
//
// Notes : Register OTG_HS device configuration register (OTG_HS_DCFG) at the offset 0x0, Bits 24:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic scheduling interval 
    // 
#define PERSCHIVL_MASK 0x3000000U
#define PERSCHIVL_OFFSET 25
#define PERSCHIVL_START_BIT 24
#define PERSCHIVL_WIDTH 2


#define OTG_HS_DCFG_REG 0x0

typedef enum perschivl {
    PERSCHIVL_0,
    PERSCHIVL_1
} PERSCHIVL_T ;
#define READ_PERSCHIVL() \
   ((READ_REGISTER_ULONG(0x0) & PERSCHIVL_MASK)  >> PERSCHIVL_START_BIT)

#define WRITE_PERSCHIVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PERSCHIVL_MASK) | ((val << PERSCHIVL_START_BIT) & PERSCHIVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDcfg
//
// Return the value of register OTG_HS_DCFG
//
// Notes : Register OTG_HS device configuration register (OTG_HS_DCFG) at the offset 0x0, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic (micro)frame interval 
    // 
#define PFIVL_MASK 0x1800U
#define PFIVL_OFFSET 12
#define PFIVL_START_BIT 11
#define PFIVL_WIDTH 2



#define READ_PFIVL() \
   ((READ_REGISTER_ULONG(0x0) & PFIVL_MASK)  >> PFIVL_START_BIT)

#define WRITE_PFIVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PFIVL_MASK) | ((val << PFIVL_START_BIT) & PFIVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDcfg
//
// Return the value of register OTG_HS_DCFG
//
// Notes : Register OTG_HS device configuration register (OTG_HS_DCFG) at the offset 0x0, Bits 4:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x7F0U
#define DAD_OFFSET 10
#define DAD_START_BIT 4
#define DAD_WIDTH 7



#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x0) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDcfg
//
// Return the value of register OTG_HS_DCFG
//
// Notes : Register OTG_HS device configuration register (OTG_HS_DCFG) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonzero-length status OUT handshake 
    // 
#define NZLSOHSK_MASK 0x4U
#define NZLSOHSK_OFFSET 2
#define NZLSOHSK_START_BIT 2
#define NZLSOHSK_WIDTH 1



#define WRITE_NZLSOHSK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ NZLSOHSK_MASK) | ((val << NZLSOHSK_START_BIT) & NZLSOHSK_MASK )); \
   } 

#define ENABLE_NZLSOHSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  NZLSOHSK_MASK ); \
   }

#define DISABLE_NZLSOHSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~NZLSOHSK_MASK ); \
   } 

#define READ_NZLSOHSK() \
   ((READ_REGISTER_ULONG(0x0) & NZLSOHSK_MASK)  >> NZLSOHSK_START_BIT)

#define WHEN_NZLSOHSK_HIGH() \
     if ( READ_NZLSOHSK() )


#define UNLESS_NZLSOHSK_HIGH() \
     if (! READ_NZLSOHSK() )


#define WAIT_NZLSOHSK_LOW() \
    while ( READ_NZLSOHSK() );


#define WAIT_NZLSOHSK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NZLSOHSK() && (--___t___ > 0)); }


#define WAIT_NZLSOHSK_HIGH() \
    while (! READ_NZLSOHSK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDcfg
//
// Return the value of register OTG_HS_DCFG
//
// Notes : Register OTG_HS device configuration register (OTG_HS_DCFG) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device speed 
    // 
#define DSPD_MASK 0x3U
#define DSPD_OFFSET 1
#define DSPD_START_BIT 0
#define DSPD_WIDTH 2



#define READ_DSPD() \
   ((READ_REGISTER_ULONG(0x0) & DSPD_MASK)  >> DSPD_START_BIT)

#define WRITE_DSPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DSPD_MASK) | ((val << DSPD_START_BIT) & DSPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OtgHsDctl at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power-on programming done 
    // 
#define POPRGDNE_MASK 0x800U
#define POPRGDNE_OFFSET 11
#define POPRGDNE_START_BIT 11
#define POPRGDNE_WIDTH 1


#define OTG_HS_DCTL_REG 0x4

#define WRITE_POPRGDNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ POPRGDNE_MASK) | ((val << POPRGDNE_START_BIT) & POPRGDNE_MASK )); \
   } 

#define ENABLE_POPRGDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  POPRGDNE_MASK ); \
   }

#define DISABLE_POPRGDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~POPRGDNE_MASK ); \
   } 

#define READ_POPRGDNE() \
   ((READ_REGISTER_ULONG(0x4) & POPRGDNE_MASK)  >> POPRGDNE_START_BIT)

#define WHEN_POPRGDNE_HIGH() \
     if ( READ_POPRGDNE() )


#define UNLESS_POPRGDNE_HIGH() \
     if (! READ_POPRGDNE() )


#define WAIT_POPRGDNE_LOW() \
    while ( READ_POPRGDNE() );


#define WAIT_POPRGDNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_POPRGDNE() && (--___t___ > 0)); }


#define WAIT_POPRGDNE_HIGH() \
    while (! READ_POPRGDNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear global OUT NAK 
    // 
#define CGONAK_MASK 0x400U
#define CGONAK_OFFSET 10
#define CGONAK_START_BIT 10
#define CGONAK_WIDTH 1



#define WRITE_CGONAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CGONAK_MASK) | ((val << CGONAK_START_BIT) & CGONAK_MASK )); \
   } 

#define ENABLE_CGONAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CGONAK_MASK ); \
   }

#define DISABLE_CGONAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CGONAK_MASK ); \
   } 

#define READ_CGONAK() \
   ((READ_REGISTER_ULONG(0x4) & CGONAK_MASK)  >> CGONAK_START_BIT)

#define WHEN_CGONAK_HIGH() \
     if ( READ_CGONAK() )


#define UNLESS_CGONAK_HIGH() \
     if (! READ_CGONAK() )


#define WAIT_CGONAK_LOW() \
    while ( READ_CGONAK() );


#define WAIT_CGONAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CGONAK() && (--___t___ > 0)); }


#define WAIT_CGONAK_HIGH() \
    while (! READ_CGONAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set global OUT NAK 
    // 
#define SGONAK_MASK 0x200U
#define SGONAK_OFFSET 9
#define SGONAK_START_BIT 9
#define SGONAK_WIDTH 1



#define WRITE_SGONAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SGONAK_MASK) | ((val << SGONAK_START_BIT) & SGONAK_MASK )); \
   } 

#define ENABLE_SGONAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SGONAK_MASK ); \
   }

#define DISABLE_SGONAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SGONAK_MASK ); \
   } 

#define READ_SGONAK() \
   ((READ_REGISTER_ULONG(0x4) & SGONAK_MASK)  >> SGONAK_START_BIT)

#define WHEN_SGONAK_HIGH() \
     if ( READ_SGONAK() )


#define UNLESS_SGONAK_HIGH() \
     if (! READ_SGONAK() )


#define WAIT_SGONAK_LOW() \
    while ( READ_SGONAK() );


#define WAIT_SGONAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SGONAK() && (--___t___ > 0)); }


#define WAIT_SGONAK_HIGH() \
    while (! READ_SGONAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear global IN NAK 
    // 
#define CGINAK_MASK 0x100U
#define CGINAK_OFFSET 8
#define CGINAK_START_BIT 8
#define CGINAK_WIDTH 1



#define WRITE_CGINAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CGINAK_MASK) | ((val << CGINAK_START_BIT) & CGINAK_MASK )); \
   } 

#define ENABLE_CGINAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CGINAK_MASK ); \
   }

#define DISABLE_CGINAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CGINAK_MASK ); \
   } 

#define READ_CGINAK() \
   ((READ_REGISTER_ULONG(0x4) & CGINAK_MASK)  >> CGINAK_START_BIT)

#define WHEN_CGINAK_HIGH() \
     if ( READ_CGINAK() )


#define UNLESS_CGINAK_HIGH() \
     if (! READ_CGINAK() )


#define WAIT_CGINAK_LOW() \
    while ( READ_CGINAK() );


#define WAIT_CGINAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CGINAK() && (--___t___ > 0)); }


#define WAIT_CGINAK_HIGH() \
    while (! READ_CGINAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set global IN NAK 
    // 
#define SGINAK_MASK 0x80U
#define SGINAK_OFFSET 7
#define SGINAK_START_BIT 7
#define SGINAK_WIDTH 1



#define WRITE_SGINAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SGINAK_MASK) | ((val << SGINAK_START_BIT) & SGINAK_MASK )); \
   } 

#define ENABLE_SGINAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SGINAK_MASK ); \
   }

#define DISABLE_SGINAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SGINAK_MASK ); \
   } 

#define READ_SGINAK() \
   ((READ_REGISTER_ULONG(0x4) & SGINAK_MASK)  >> SGINAK_START_BIT)

#define WHEN_SGINAK_HIGH() \
     if ( READ_SGINAK() )


#define UNLESS_SGINAK_HIGH() \
     if (! READ_SGINAK() )


#define WAIT_SGINAK_LOW() \
    while ( READ_SGINAK() );


#define WAIT_SGINAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SGINAK() && (--___t___ > 0)); }


#define WAIT_SGINAK_HIGH() \
    while (! READ_SGINAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Test control 
    // 
#define TCTL_MASK 0x70U
#define TCTL_OFFSET 6
#define TCTL_START_BIT 4
#define TCTL_WIDTH 3



#define READ_TCTL() \
   ((READ_REGISTER_ULONG(0x4) & TCTL_MASK)  >> TCTL_START_BIT)

#define WRITE_TCTL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TCTL_MASK) | ((val << TCTL_START_BIT) & TCTL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global OUT NAK status 
    // 
#define GONSTS_MASK 0x8U
#define GONSTS_OFFSET 3
#define GONSTS_START_BIT 3
#define GONSTS_WIDTH 1



#define WRITE_GONSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ GONSTS_MASK) | ((val << GONSTS_START_BIT) & GONSTS_MASK )); \
   } 

#define ENABLE_GONSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  GONSTS_MASK ); \
   }

#define DISABLE_GONSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~GONSTS_MASK ); \
   } 

#define READ_GONSTS() \
   ((READ_REGISTER_ULONG(0x4) & GONSTS_MASK)  >> GONSTS_START_BIT)

#define WHEN_GONSTS_HIGH() \
     if ( READ_GONSTS() )


#define UNLESS_GONSTS_HIGH() \
     if (! READ_GONSTS() )


#define WAIT_GONSTS_LOW() \
    while ( READ_GONSTS() );


#define WAIT_GONSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GONSTS() && (--___t___ > 0)); }


#define WAIT_GONSTS_HIGH() \
    while (! READ_GONSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global IN NAK status 
    // 
#define GINSTS_MASK 0x4U
#define GINSTS_OFFSET 2
#define GINSTS_START_BIT 2
#define GINSTS_WIDTH 1



#define WRITE_GINSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ GINSTS_MASK) | ((val << GINSTS_START_BIT) & GINSTS_MASK )); \
   } 

#define ENABLE_GINSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  GINSTS_MASK ); \
   }

#define DISABLE_GINSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~GINSTS_MASK ); \
   } 

#define READ_GINSTS() \
   ((READ_REGISTER_ULONG(0x4) & GINSTS_MASK)  >> GINSTS_START_BIT)

#define WHEN_GINSTS_HIGH() \
     if ( READ_GINSTS() )


#define UNLESS_GINSTS_HIGH() \
     if (! READ_GINSTS() )


#define WAIT_GINSTS_LOW() \
    while ( READ_GINSTS() );


#define WAIT_GINSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GINSTS() && (--___t___ > 0)); }


#define WAIT_GINSTS_HIGH() \
    while (! READ_GINSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Soft disconnect 
    // 
#define SDIS_MASK 0x2U
#define SDIS_OFFSET 1
#define SDIS_START_BIT 1
#define SDIS_WIDTH 1



#define WRITE_SDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ SDIS_MASK) | ((val << SDIS_START_BIT) & SDIS_MASK )); \
   } 

#define ENABLE_SDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  SDIS_MASK ); \
   }

#define DISABLE_SDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~SDIS_MASK ); \
   } 

#define READ_SDIS() \
   ((READ_REGISTER_ULONG(0x4) & SDIS_MASK)  >> SDIS_START_BIT)

#define WHEN_SDIS_HIGH() \
     if ( READ_SDIS() )


#define UNLESS_SDIS_HIGH() \
     if (! READ_SDIS() )


#define WAIT_SDIS_LOW() \
    while ( READ_SDIS() );


#define WAIT_SDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SDIS() && (--___t___ > 0)); }


#define WAIT_SDIS_HIGH() \
    while (! READ_SDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDctl
//
// Return the value of register OTG_HS_DCTL
//
// Notes : Register OTG_HS device control register (OTG_HS_DCTL) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Remote wakeup signaling 
    // 
#define RWUSIG_MASK 0x1U
#define RWUSIG_OFFSET 0
#define RWUSIG_START_BIT 0
#define RWUSIG_WIDTH 1



#define WRITE_RWUSIG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ RWUSIG_MASK) | ((val << RWUSIG_START_BIT) & RWUSIG_MASK )); \
   } 

#define ENABLE_RWUSIG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  RWUSIG_MASK ); \
   }

#define DISABLE_RWUSIG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~RWUSIG_MASK ); \
   } 

#define READ_RWUSIG() \
   ((READ_REGISTER_ULONG(0x4) & RWUSIG_MASK)  >> RWUSIG_START_BIT)

#define WHEN_RWUSIG_HIGH() \
     if ( READ_RWUSIG() )


#define UNLESS_RWUSIG_HIGH() \
     if (! READ_RWUSIG() )


#define WAIT_RWUSIG_LOW() \
    while ( READ_RWUSIG() );


#define WAIT_RWUSIG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RWUSIG() && (--___t___ > 0)); }


#define WAIT_RWUSIG_HIGH() \
    while (! READ_RWUSIG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDsts
//
// Return the value of register OTG_HS_DSTS
//
// Notes : Register OtgHsDsts at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DSTS() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDsts
//
// Return the value of register OTG_HS_DSTS
//
// Notes : Register OTG_HS device status register (OTG_HS_DSTS) at the offset 0x8, Bits 8:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number of the received SOF 
    // 
#define FNSOF_MASK 0x3FFF00U
#define FNSOF_OFFSET 21
#define FNSOF_START_BIT 8
#define FNSOF_WIDTH 14


#define OTG_HS_DSTS_REG 0x8

#define READ_FNSOF() \
   ((READ_REGISTER_ULONG(0x8) & FNSOF_MASK)  >> FNSOF_START_BIT)

#define WRITE_FNSOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FNSOF_MASK) | ((val << FNSOF_START_BIT) & FNSOF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDsts
//
// Return the value of register OTG_HS_DSTS
//
// Notes : Register OTG_HS device status register (OTG_HS_DSTS) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Erratic error 
    // 
#define EERR_MASK 0x8U
#define EERR_OFFSET 3
#define EERR_START_BIT 3
#define EERR_WIDTH 1



#define WRITE_EERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EERR_MASK) | ((val << EERR_START_BIT) & EERR_MASK )); \
   } 

#define ENABLE_EERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  EERR_MASK ); \
   }

#define DISABLE_EERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~EERR_MASK ); \
   } 

#define READ_EERR() \
   ((READ_REGISTER_ULONG(0x8) & EERR_MASK)  >> EERR_START_BIT)

#define WHEN_EERR_HIGH() \
     if ( READ_EERR() )


#define UNLESS_EERR_HIGH() \
     if (! READ_EERR() )


#define WAIT_EERR_LOW() \
    while ( READ_EERR() );


#define WAIT_EERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EERR() && (--___t___ > 0)); }


#define WAIT_EERR_HIGH() \
    while (! READ_EERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDsts
//
// Return the value of register OTG_HS_DSTS
//
// Notes : Register OTG_HS device status register (OTG_HS_DSTS) at the offset 0x8, Bits 1:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enumerated speed 
    // 
#define ENUMSPD_MASK 0x6U
#define ENUMSPD_OFFSET 2
#define ENUMSPD_START_BIT 1
#define ENUMSPD_WIDTH 2



#define READ_ENUMSPD() \
   ((READ_REGISTER_ULONG(0x8) & ENUMSPD_MASK)  >> ENUMSPD_START_BIT)

#define WRITE_ENUMSPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ENUMSPD_MASK) | ((val << ENUMSPD_START_BIT) & ENUMSPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDsts
//
// Return the value of register OTG_HS_DSTS
//
// Notes : Register OTG_HS device status register (OTG_HS_DSTS) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Suspend status 
    // 
#define SUSPSTS_MASK 0x1U
#define SUSPSTS_OFFSET 0
#define SUSPSTS_START_BIT 0
#define SUSPSTS_WIDTH 1



#define WRITE_SUSPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SUSPSTS_MASK) | ((val << SUSPSTS_START_BIT) & SUSPSTS_MASK )); \
   } 

#define ENABLE_SUSPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SUSPSTS_MASK ); \
   }

#define DISABLE_SUSPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SUSPSTS_MASK ); \
   } 

#define READ_SUSPSTS() \
   ((READ_REGISTER_ULONG(0x8) & SUSPSTS_MASK)  >> SUSPSTS_START_BIT)

#define WHEN_SUSPSTS_HIGH() \
     if ( READ_SUSPSTS() )


#define UNLESS_SUSPSTS_HIGH() \
     if (! READ_SUSPSTS() )


#define WAIT_SUSPSTS_LOW() \
    while ( READ_SUSPSTS() );


#define WAIT_SUSPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SUSPSTS() && (--___t___ > 0)); }


#define WAIT_SUSPSTS_HIGH() \
    while (! READ_SUSPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OtgHsDiepmsk at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPMSK( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_OTG_HS_DIEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPMSK() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BNA interrupt mask 
    // 
#define BIM_MASK 0x200U
#define BIM_OFFSET 9
#define BIM_START_BIT 9
#define BIM_WIDTH 1


#define OTG_HS_DIEPMSK_REG 0x10

typedef enum bim {
    BIM_0,
    BIM_1
} BIM_T ;
#define WRITE_BIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ BIM_MASK) | ((val << BIM_START_BIT) & BIM_MASK )); \
   } 

#define ENABLE_BIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  BIM_MASK ); \
   }

#define DISABLE_BIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~BIM_MASK ); \
   } 

#define READ_BIM() \
   ((READ_REGISTER_ULONG(0x10) & BIM_MASK)  >> BIM_START_BIT)

#define WHEN_BIM_HIGH() \
     if ( READ_BIM() )


#define UNLESS_BIM_HIGH() \
     if (! READ_BIM() )


#define WAIT_BIM_LOW() \
    while ( READ_BIM() );


#define WAIT_BIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BIM() && (--___t___ > 0)); }


#define WAIT_BIM_HIGH() \
    while (! READ_BIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO underrun mask 
    // 
#define TXFURM_MASK 0x100U
#define TXFURM_OFFSET 8
#define TXFURM_START_BIT 8
#define TXFURM_WIDTH 1



typedef enum txfurm {
    TXFURM_0,
    TXFURM_1
} TXFURM_T ;
#define WRITE_TXFURM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXFURM_MASK) | ((val << TXFURM_START_BIT) & TXFURM_MASK )); \
   } 

#define ENABLE_TXFURM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TXFURM_MASK ); \
   }

#define DISABLE_TXFURM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TXFURM_MASK ); \
   } 

#define READ_TXFURM() \
   ((READ_REGISTER_ULONG(0x10) & TXFURM_MASK)  >> TXFURM_START_BIT)

#define WHEN_TXFURM_HIGH() \
     if ( READ_TXFURM() )


#define UNLESS_TXFURM_HIGH() \
     if (! READ_TXFURM() )


#define WAIT_TXFURM_LOW() \
    while ( READ_TXFURM() );


#define WAIT_TXFURM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFURM() && (--___t___ > 0)); }


#define WAIT_TXFURM_HIGH() \
    while (! READ_TXFURM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective mask 
    // 
#define INEPNEM_MASK 0x40U
#define INEPNEM_OFFSET 6
#define INEPNEM_START_BIT 6
#define INEPNEM_WIDTH 1



#define WRITE_INEPNEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ INEPNEM_MASK) | ((val << INEPNEM_START_BIT) & INEPNEM_MASK )); \
   } 

#define ENABLE_INEPNEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  INEPNEM_MASK ); \
   }

#define DISABLE_INEPNEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~INEPNEM_MASK ); \
   } 

#define READ_INEPNEM() \
   ((READ_REGISTER_ULONG(0x10) & INEPNEM_MASK)  >> INEPNEM_START_BIT)

#define WHEN_INEPNEM_HIGH() \
     if ( READ_INEPNEM() )


#define UNLESS_INEPNEM_HIGH() \
     if (! READ_INEPNEM() )


#define WAIT_INEPNEM_LOW() \
    while ( READ_INEPNEM() );


#define WAIT_INEPNEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNEM() && (--___t___ > 0)); }


#define WAIT_INEPNEM_HIGH() \
    while (! READ_INEPNEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received with EP mismatch mask 
    // 
#define INEPNMM_MASK 0x20U
#define INEPNMM_OFFSET 5
#define INEPNMM_START_BIT 5
#define INEPNMM_WIDTH 1



#define WRITE_INEPNMM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ INEPNMM_MASK) | ((val << INEPNMM_START_BIT) & INEPNMM_MASK )); \
   } 

#define ENABLE_INEPNMM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  INEPNMM_MASK ); \
   }

#define DISABLE_INEPNMM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~INEPNMM_MASK ); \
   } 

#define READ_INEPNMM() \
   ((READ_REGISTER_ULONG(0x10) & INEPNMM_MASK)  >> INEPNMM_START_BIT)

#define WHEN_INEPNMM_HIGH() \
     if ( READ_INEPNMM() )


#define UNLESS_INEPNMM_HIGH() \
     if (! READ_INEPNMM() )


#define WAIT_INEPNMM_LOW() \
    while ( READ_INEPNMM() );


#define WAIT_INEPNMM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNMM() && (--___t___ > 0)); }


#define WAIT_INEPNMM_HIGH() \
    while (! READ_INEPNMM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO empty mask 
    // 
#define ITTXFEMSK_MASK 0x10U
#define ITTXFEMSK_OFFSET 4
#define ITTXFEMSK_START_BIT 4
#define ITTXFEMSK_WIDTH 1



#define WRITE_ITTXFEMSK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ITTXFEMSK_MASK) | ((val << ITTXFEMSK_START_BIT) & ITTXFEMSK_MASK )); \
   } 

#define ENABLE_ITTXFEMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ITTXFEMSK_MASK ); \
   }

#define DISABLE_ITTXFEMSK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ITTXFEMSK_MASK ); \
   } 

#define READ_ITTXFEMSK() \
   ((READ_REGISTER_ULONG(0x10) & ITTXFEMSK_MASK)  >> ITTXFEMSK_START_BIT)

#define WHEN_ITTXFEMSK_HIGH() \
     if ( READ_ITTXFEMSK() )


#define UNLESS_ITTXFEMSK_HIGH() \
     if (! READ_ITTXFEMSK() )


#define WAIT_ITTXFEMSK_LOW() \
    while ( READ_ITTXFEMSK() );


#define WAIT_ITTXFEMSK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFEMSK() && (--___t___ > 0)); }


#define WAIT_ITTXFEMSK_HIGH() \
    while (! READ_ITTXFEMSK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition mask (nonisochronous endpoints) 
    // 
#define TOM_MASK 0x8U
#define TOM_OFFSET 3
#define TOM_START_BIT 3
#define TOM_WIDTH 1



#define WRITE_TOM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TOM_MASK) | ((val << TOM_START_BIT) & TOM_MASK )); \
   } 

#define ENABLE_TOM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  TOM_MASK ); \
   }

#define DISABLE_TOM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~TOM_MASK ); \
   } 

#define READ_TOM() \
   ((READ_REGISTER_ULONG(0x10) & TOM_MASK)  >> TOM_START_BIT)

#define WHEN_TOM_HIGH() \
     if ( READ_TOM() )


#define UNLESS_TOM_HIGH() \
     if (! READ_TOM() )


#define WAIT_TOM_LOW() \
    while ( READ_TOM() );


#define WAIT_TOM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOM() && (--___t___ > 0)); }


#define WAIT_TOM_HIGH() \
    while (! READ_TOM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt mask 
    // 
#define EPDM_MASK 0x2U
#define EPDM_OFFSET 1
#define EPDM_START_BIT 1
#define EPDM_WIDTH 1



#define WRITE_EPDM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EPDM_MASK) | ((val << EPDM_START_BIT) & EPDM_MASK )); \
   } 

#define ENABLE_EPDM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  EPDM_MASK ); \
   }

#define DISABLE_EPDM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~EPDM_MASK ); \
   } 

#define READ_EPDM() \
   ((READ_REGISTER_ULONG(0x10) & EPDM_MASK)  >> EPDM_START_BIT)

#define WHEN_EPDM_HIGH() \
     if ( READ_EPDM() )


#define UNLESS_EPDM_HIGH() \
     if (! READ_EPDM() )


#define WAIT_EPDM_LOW() \
    while ( READ_EPDM() );


#define WAIT_EPDM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDM() && (--___t___ > 0)); }


#define WAIT_EPDM_HIGH() \
    while (! READ_EPDM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepmsk
//
// Return the value of register OTG_HS_DIEPMSK
//
// Notes : Register OTG_HS device IN endpoint common interrupt mask register (OTG_HS_DIEPMSK) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x10) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OtgHsDoepmsk at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPMSK( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_OTG_HS_DOEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPMSK() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BNA interrupt mask 
    // 
#define BOIM_MASK 0x200U
#define BOIM_OFFSET 9
#define BOIM_START_BIT 9
#define BOIM_WIDTH 1


#define OTG_HS_DOEPMSK_REG 0x14

typedef enum boim {
    BOIM_0,
    BOIM_1
} BOIM_T ;
#define WRITE_BOIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ BOIM_MASK) | ((val << BOIM_START_BIT) & BOIM_MASK )); \
   } 

#define ENABLE_BOIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  BOIM_MASK ); \
   }

#define DISABLE_BOIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~BOIM_MASK ); \
   } 

#define READ_BOIM() \
   ((READ_REGISTER_ULONG(0x14) & BOIM_MASK)  >> BOIM_START_BIT)

#define WHEN_BOIM_HIGH() \
     if ( READ_BOIM() )


#define UNLESS_BOIM_HIGH() \
     if (! READ_BOIM() )


#define WAIT_BOIM_LOW() \
    while ( READ_BOIM() );


#define WAIT_BOIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BOIM() && (--___t___ > 0)); }


#define WAIT_BOIM_HIGH() \
    while (! READ_BOIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT packet error mask 
    // 
#define OPEM_MASK 0x100U
#define OPEM_OFFSET 8
#define OPEM_START_BIT 8
#define OPEM_WIDTH 1



typedef enum opem {
    OPEM_0,
    OPEM_1
} OPEM_T ;
#define WRITE_OPEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OPEM_MASK) | ((val << OPEM_START_BIT) & OPEM_MASK )); \
   } 

#define ENABLE_OPEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OPEM_MASK ); \
   }

#define DISABLE_OPEM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OPEM_MASK ); \
   } 

#define READ_OPEM() \
   ((READ_REGISTER_ULONG(0x14) & OPEM_MASK)  >> OPEM_START_BIT)

#define WHEN_OPEM_HIGH() \
     if ( READ_OPEM() )


#define UNLESS_OPEM_HIGH() \
     if (! READ_OPEM() )


#define WAIT_OPEM_LOW() \
    while ( READ_OPEM() );


#define WAIT_OPEM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OPEM() && (--___t___ > 0)); }


#define WAIT_OPEM_HIGH() \
    while (! READ_OPEM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received mask 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x14) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled mask 
    // 
#define OTEPDM_MASK 0x10U
#define OTEPDM_OFFSET 4
#define OTEPDM_START_BIT 4
#define OTEPDM_WIDTH 1



#define WRITE_OTEPDM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ OTEPDM_MASK) | ((val << OTEPDM_START_BIT) & OTEPDM_MASK )); \
   } 

#define ENABLE_OTEPDM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  OTEPDM_MASK ); \
   }

#define DISABLE_OTEPDM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~OTEPDM_MASK ); \
   } 

#define READ_OTEPDM() \
   ((READ_REGISTER_ULONG(0x14) & OTEPDM_MASK)  >> OTEPDM_START_BIT)

#define WHEN_OTEPDM_HIGH() \
     if ( READ_OTEPDM() )


#define UNLESS_OTEPDM_HIGH() \
     if (! READ_OTEPDM() )


#define WAIT_OTEPDM_LOW() \
    while ( READ_OTEPDM() );


#define WAIT_OTEPDM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDM() && (--___t___ > 0)); }


#define WAIT_OTEPDM_HIGH() \
    while (! READ_OTEPDM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done mask 
    // 
#define STUPM_MASK 0x8U
#define STUPM_OFFSET 3
#define STUPM_START_BIT 3
#define STUPM_WIDTH 1



#define WRITE_STUPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ STUPM_MASK) | ((val << STUPM_START_BIT) & STUPM_MASK )); \
   } 

#define ENABLE_STUPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  STUPM_MASK ); \
   }

#define DISABLE_STUPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~STUPM_MASK ); \
   } 

#define READ_STUPM() \
   ((READ_REGISTER_ULONG(0x14) & STUPM_MASK)  >> STUPM_START_BIT)

#define WHEN_STUPM_HIGH() \
     if ( READ_STUPM() )


#define UNLESS_STUPM_HIGH() \
     if (! READ_STUPM() )


#define WAIT_STUPM_LOW() \
    while ( READ_STUPM() );


#define WAIT_STUPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUPM() && (--___t___ > 0)); }


#define WAIT_STUPM_HIGH() \
    while (! READ_STUPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt mask 
    // 
#define EPDM_MASK 0x2U
#define EPDM_OFFSET 1
#define EPDM_START_BIT 1
#define EPDM_WIDTH 1



#define WRITE_EPDM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ EPDM_MASK) | ((val << EPDM_START_BIT) & EPDM_MASK )); \
   } 

#define ENABLE_EPDM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  EPDM_MASK ); \
   }

#define DISABLE_EPDM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~EPDM_MASK ); \
   } 

#define READ_EPDM() \
   ((READ_REGISTER_ULONG(0x14) & EPDM_MASK)  >> EPDM_START_BIT)

#define WHEN_EPDM_HIGH() \
     if ( READ_EPDM() )


#define UNLESS_EPDM_HIGH() \
     if (! READ_EPDM() )


#define WAIT_EPDM_LOW() \
    while ( READ_EPDM() );


#define WAIT_EPDM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDM() && (--___t___ > 0)); }


#define WAIT_EPDM_HIGH() \
    while (! READ_EPDM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepmsk
//
// Return the value of register OTG_HS_DOEPMSK
//
// Notes : Register OTG_HS device OUT endpoint common interrupt mask register (OTG_HS_DOEPMSK) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



#define WRITE_XFRCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ XFRCM_MASK) | ((val << XFRCM_START_BIT) & XFRCM_MASK )); \
   } 

#define ENABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  XFRCM_MASK ); \
   }

#define DISABLE_XFRCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~XFRCM_MASK ); \
   } 

#define READ_XFRCM() \
   ((READ_REGISTER_ULONG(0x14) & XFRCM_MASK)  >> XFRCM_START_BIT)

#define WHEN_XFRCM_HIGH() \
     if ( READ_XFRCM() )


#define UNLESS_XFRCM_HIGH() \
     if (! READ_XFRCM() )


#define WAIT_XFRCM_LOW() \
    while ( READ_XFRCM() );


#define WAIT_XFRCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRCM() && (--___t___ > 0)); }


#define WAIT_XFRCM_HIGH() \
    while (! READ_XFRCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDaint
//
// Return the value of register OTG_HS_DAINT
//
// Notes : Register OtgHsDaint at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DAINT() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDaint
//
// Return the value of register OTG_HS_DAINT
//
// Notes : Register OTG_HS device all endpoints interrupt register (OTG_HS_DAINT) at the offset 0x18, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoint interrupt bits 
    // 
#define OEPINT_MASK 0xFFFF0000U
#define OEPINT_OFFSET 31
#define OEPINT_START_BIT 16
#define OEPINT_WIDTH 16


#define OTG_HS_DAINT_REG 0x18

#define READ_OEPINT() \
   ((READ_REGISTER_ULONG(0x18) & OEPINT_MASK)  >> OEPINT_START_BIT)

#define WRITE_OEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OEPINT_MASK) | ((val << OEPINT_START_BIT) & OEPINT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDaint
//
// Return the value of register OTG_HS_DAINT
//
// Notes : Register OTG_HS device all endpoints interrupt register (OTG_HS_DAINT) at the offset 0x18, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint interrupt bits 
    // 
#define IEPINT_MASK 0xFFFFU
#define IEPINT_OFFSET 15
#define IEPINT_START_BIT 0
#define IEPINT_WIDTH 16



#define READ_IEPINT() \
   ((READ_REGISTER_ULONG(0x18) & IEPINT_MASK)  >> IEPINT_START_BIT)

#define WRITE_IEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IEPINT_MASK) | ((val << IEPINT_START_BIT) & IEPINT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDaintmsk
//
// Return the value of register OTG_HS_DAINTMSK
//
// Notes : Register OtgHsDaintmsk at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DAINTMSK( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_OTG_HS_DAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DAINTMSK() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDaintmsk
//
// Return the value of register OTG_HS_DAINTMSK
//
// Notes : Register OTG_HS all endpoints interrupt mask register (OTG_HS_DAINTMSK) at the offset 0x1C, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT EP interrupt mask bits 
    // 
#define OEPM_MASK 0xFFFF0000U
#define OEPM_OFFSET 31
#define OEPM_START_BIT 16
#define OEPM_WIDTH 16


#define OTG_HS_DAINTMSK_REG 0x1C

typedef enum oepm {
    OEPM_0,
    OEPM_1
} OEPM_T ;
#define READ_OEPM() \
   ((READ_REGISTER_ULONG(0x1C) & OEPM_MASK)  >> OEPM_START_BIT)

#define WRITE_OEPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OEPM_MASK) | ((val << OEPM_START_BIT) & OEPM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDaintmsk
//
// Return the value of register OTG_HS_DAINTMSK
//
// Notes : Register OTG_HS all endpoints interrupt mask register (OTG_HS_DAINTMSK) at the offset 0x1C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN EP interrupt mask bits 
    // 
#define IEPM_MASK 0xFFFFU
#define IEPM_OFFSET 15
#define IEPM_START_BIT 0
#define IEPM_WIDTH 16



#define READ_IEPM() \
   ((READ_REGISTER_ULONG(0x1C) & IEPM_MASK)  >> IEPM_START_BIT)

#define WRITE_IEPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ IEPM_MASK) | ((val << IEPM_START_BIT) & IEPM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDvbusdis
//
// Return the value of register OTG_HS_DVBUSDIS
//
// Notes : Register OtgHsDvbusdis at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DVBUSDIS( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_OTG_HS_DVBUSDIS(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DVBUSDIS(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DVBUSDIS() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDvbusdis
//
// Return the value of register OTG_HS_DVBUSDIS
//
// Notes : Register OTG_HS device VBUS discharge time register (OTG_HS_DVBUSDIS) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device VBUS discharge time 
    // 
#define VBUSDT_MASK 0xFFFFU
#define VBUSDT_OFFSET 15
#define VBUSDT_START_BIT 0
#define VBUSDT_WIDTH 16


#define OTG_HS_DVBUSDIS_REG 0x28

#define READ_VBUSDT() \
   ((READ_REGISTER_ULONG(0x28) & VBUSDT_MASK)  >> VBUSDT_START_BIT)

#define WRITE_VBUSDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ VBUSDT_MASK) | ((val << VBUSDT_START_BIT) & VBUSDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDvbuspulse
//
// Return the value of register OTG_HS_DVBUSPULSE
//
// Notes : Register OtgHsDvbuspulse at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DVBUSPULSE( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_OTG_HS_DVBUSPULSE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DVBUSPULSE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DVBUSPULSE() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDvbuspulse
//
// Return the value of register OTG_HS_DVBUSPULSE
//
// Notes : Register OTG_HS device VBUS pulsing time register (OTG_HS_DVBUSPULSE) at the offset 0x2C, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device VBUS pulsing time 
    // 
#define DVBUSP_MASK 0xFFFU
#define DVBUSP_OFFSET 11
#define DVBUSP_START_BIT 0
#define DVBUSP_WIDTH 12


#define OTG_HS_DVBUSPULSE_REG 0x2C

#define READ_DVBUSP() \
   ((READ_REGISTER_ULONG(0x2C) & DVBUSP_MASK)  >> DVBUSP_START_BIT)

#define WRITE_DVBUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DVBUSP_MASK) | ((val << DVBUSP_START_BIT) & DVBUSP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OtgHsDthrctl at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DTHRCTL( y) \
     WRITE_REGISTER_ULONG( 0x30 , y)

#define SET_BITS_OTG_HS_DTHRCTL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DTHRCTL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DTHRCTL() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OTG_HS Device threshold control register (OTG_HS_DTHRCTL) at the offset 0x30, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Arbiter parking enable 
    // 
#define ARPEN_MASK 0x8000000U
#define ARPEN_OFFSET 27
#define ARPEN_START_BIT 27
#define ARPEN_WIDTH 1


#define OTG_HS_DTHRCTL_REG 0x30

typedef enum arpen {
    ARPEN_0,
    ARPEN_1
} ARPEN_T ;
#define WRITE_ARPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ARPEN_MASK) | ((val << ARPEN_START_BIT) & ARPEN_MASK )); \
   } 

#define ENABLE_ARPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ARPEN_MASK ); \
   }

#define DISABLE_ARPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ARPEN_MASK ); \
   } 

#define READ_ARPEN() \
   ((READ_REGISTER_ULONG(0x30) & ARPEN_MASK)  >> ARPEN_START_BIT)

#define WHEN_ARPEN_HIGH() \
     if ( READ_ARPEN() )


#define UNLESS_ARPEN_HIGH() \
     if (! READ_ARPEN() )


#define WAIT_ARPEN_LOW() \
    while ( READ_ARPEN() );


#define WAIT_ARPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ARPEN() && (--___t___ > 0)); }


#define WAIT_ARPEN_HIGH() \
    while (! READ_ARPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OTG_HS Device threshold control register (OTG_HS_DTHRCTL) at the offset 0x30, Bits 17:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive threshold length 
    // 
#define RXTHRLEN_MASK 0x3FE0000U
#define RXTHRLEN_OFFSET 25
#define RXTHRLEN_START_BIT 17
#define RXTHRLEN_WIDTH 9



typedef enum rxthrlen {
    RXTHRLEN_0,
    RXTHRLEN_1
} RXTHRLEN_T ;
#define READ_RXTHRLEN() \
   ((READ_REGISTER_ULONG(0x30) & RXTHRLEN_MASK)  >> RXTHRLEN_START_BIT)

#define WRITE_RXTHRLEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ RXTHRLEN_MASK) | ((val << RXTHRLEN_START_BIT) & RXTHRLEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OTG_HS Device threshold control register (OTG_HS_DTHRCTL) at the offset 0x30, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive threshold enable 
    // 
#define RXTHREN_MASK 0x10000U
#define RXTHREN_OFFSET 16
#define RXTHREN_START_BIT 16
#define RXTHREN_WIDTH 1



typedef enum rxthren {
    RXTHREN_0,
    RXTHREN_1
} RXTHREN_T ;
#define WRITE_RXTHREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ RXTHREN_MASK) | ((val << RXTHREN_START_BIT) & RXTHREN_MASK )); \
   } 

#define ENABLE_RXTHREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  RXTHREN_MASK ); \
   }

#define DISABLE_RXTHREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~RXTHREN_MASK ); \
   } 

#define READ_RXTHREN() \
   ((READ_REGISTER_ULONG(0x30) & RXTHREN_MASK)  >> RXTHREN_START_BIT)

#define WHEN_RXTHREN_HIGH() \
     if ( READ_RXTHREN() )


#define UNLESS_RXTHREN_HIGH() \
     if (! READ_RXTHREN() )


#define WAIT_RXTHREN_LOW() \
    while ( READ_RXTHREN() );


#define WAIT_RXTHREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RXTHREN() && (--___t___ > 0)); }


#define WAIT_RXTHREN_HIGH() \
    while (! READ_RXTHREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OTG_HS Device threshold control register (OTG_HS_DTHRCTL) at the offset 0x30, Bits 2:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit threshold length 
    // 
#define TXTHRLEN_MASK 0x7FCU
#define TXTHRLEN_OFFSET 10
#define TXTHRLEN_START_BIT 2
#define TXTHRLEN_WIDTH 9



typedef enum txthrlen {
    TXTHRLEN_0,
    TXTHRLEN_1
} TXTHRLEN_T ;
#define READ_TXTHRLEN() \
   ((READ_REGISTER_ULONG(0x30) & TXTHRLEN_MASK)  >> TXTHRLEN_START_BIT)

#define WRITE_TXTHRLEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ TXTHRLEN_MASK) | ((val << TXTHRLEN_START_BIT) & TXTHRLEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OTG_HS Device threshold control register (OTG_HS_DTHRCTL) at the offset 0x30, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ISO IN endpoint threshold enable 
    // 
#define ISOTHREN_MASK 0x2U
#define ISOTHREN_OFFSET 1
#define ISOTHREN_START_BIT 1
#define ISOTHREN_WIDTH 1



typedef enum isothren {
    ISOTHREN_0,
    ISOTHREN_1
} ISOTHREN_T ;
#define WRITE_ISOTHREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ISOTHREN_MASK) | ((val << ISOTHREN_START_BIT) & ISOTHREN_MASK )); \
   } 

#define ENABLE_ISOTHREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ISOTHREN_MASK ); \
   }

#define DISABLE_ISOTHREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ISOTHREN_MASK ); \
   } 

#define READ_ISOTHREN() \
   ((READ_REGISTER_ULONG(0x30) & ISOTHREN_MASK)  >> ISOTHREN_START_BIT)

#define WHEN_ISOTHREN_HIGH() \
     if ( READ_ISOTHREN() )


#define UNLESS_ISOTHREN_HIGH() \
     if (! READ_ISOTHREN() )


#define WAIT_ISOTHREN_LOW() \
    while ( READ_ISOTHREN() );


#define WAIT_ISOTHREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ISOTHREN() && (--___t___ > 0)); }


#define WAIT_ISOTHREN_HIGH() \
    while (! READ_ISOTHREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDthrctl
//
// Return the value of register OTG_HS_DTHRCTL
//
// Notes : Register OTG_HS Device threshold control register (OTG_HS_DTHRCTL) at the offset 0x30, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Nonisochronous IN endpoints threshold enable 
    // 
#define NONISOTHREN_MASK 0x1U
#define NONISOTHREN_OFFSET 0
#define NONISOTHREN_START_BIT 0
#define NONISOTHREN_WIDTH 1



typedef enum nonisothren {
    NONISOTHREN_0,
    NONISOTHREN_1
} NONISOTHREN_T ;
#define WRITE_NONISOTHREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ NONISOTHREN_MASK) | ((val << NONISOTHREN_START_BIT) & NONISOTHREN_MASK )); \
   } 

#define ENABLE_NONISOTHREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  NONISOTHREN_MASK ); \
   }

#define DISABLE_NONISOTHREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~NONISOTHREN_MASK ); \
   } 

#define READ_NONISOTHREN() \
   ((READ_REGISTER_ULONG(0x30) & NONISOTHREN_MASK)  >> NONISOTHREN_START_BIT)

#define WHEN_NONISOTHREN_HIGH() \
     if ( READ_NONISOTHREN() )


#define UNLESS_NONISOTHREN_HIGH() \
     if (! READ_NONISOTHREN() )


#define WAIT_NONISOTHREN_LOW() \
    while ( READ_NONISOTHREN() );


#define WAIT_NONISOTHREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NONISOTHREN() && (--___t___ > 0)); }


#define WAIT_NONISOTHREN_HIGH() \
    while (! READ_NONISOTHREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepempmsk
//
// Return the value of register OTG_HS_DIEPEMPMSK
//
// Notes : Register OtgHsDiepempmsk at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPEMPMSK( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_OTG_HS_DIEPEMPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPEMPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPEMPMSK() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepempmsk
//
// Return the value of register OTG_HS_DIEPEMPMSK
//
// Notes : Register OTG_HS device IN endpoint FIFO empty interrupt mask register (OTG_HS_DIEPEMPMSK) at the offset 0x34, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN EP Tx FIFO empty interrupt mask bits 
    // 
#define INEPTXFEM_MASK 0xFFFFU
#define INEPTXFEM_OFFSET 15
#define INEPTXFEM_START_BIT 0
#define INEPTXFEM_WIDTH 16


#define OTG_HS_DIEPEMPMSK_REG 0x34

#define READ_INEPTXFEM() \
   ((READ_REGISTER_ULONG(0x34) & INEPTXFEM_MASK)  >> INEPTXFEM_START_BIT)

#define WRITE_INEPTXFEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ INEPTXFEM_MASK) | ((val << INEPTXFEM_START_BIT) & INEPTXFEM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDeachint
//
// Return the value of register OTG_HS_DEACHINT
//
// Notes : Register OtgHsDeachint at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DEACHINT( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_OTG_HS_DEACHINT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DEACHINT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DEACHINT() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDeachint
//
// Return the value of register OTG_HS_DEACHINT
//
// Notes : Register OTG_HS device each endpoint interrupt register (OTG_HS_DEACHINT) at the offset 0x38, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoint 1 interrupt bit 
    // 
#define OEP1INT_MASK 0x20000U
#define OEP1INT_OFFSET 17
#define OEP1INT_START_BIT 17
#define OEP1INT_WIDTH 1


#define OTG_HS_DEACHINT_REG 0x38

typedef enum oep1int {
    OEP_1INT_0,
    OEP_1INT_1
} OEP_1INT_T ;
#define WRITE_OEP1INT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ OEP1INT_MASK) | ((val << OEP1INT_START_BIT) & OEP1INT_MASK )); \
   } 

#define ENABLE_OEP1INT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  OEP1INT_MASK ); \
   }

#define DISABLE_OEP1INT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~OEP1INT_MASK ); \
   } 

#define READ_OEP1INT() \
   ((READ_REGISTER_ULONG(0x38) & OEP1INT_MASK)  >> OEP1INT_START_BIT)

#define WHEN_OEP1INT_HIGH() \
     if ( READ_OEP1INT() )


#define UNLESS_OEP1INT_HIGH() \
     if (! READ_OEP1INT() )


#define WAIT_OEP1INT_LOW() \
    while ( READ_OEP1INT() );


#define WAIT_OEP1INT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OEP1INT() && (--___t___ > 0)); }


#define WAIT_OEP1INT_HIGH() \
    while (! READ_OEP1INT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDeachint
//
// Return the value of register OTG_HS_DEACHINT
//
// Notes : Register OTG_HS device each endpoint interrupt register (OTG_HS_DEACHINT) at the offset 0x38, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint 1interrupt bit 
    // 
#define IEP1INT_MASK 0x2U
#define IEP1INT_OFFSET 1
#define IEP1INT_START_BIT 1
#define IEP1INT_WIDTH 1



typedef enum iep1int {
    IEP_1INT_0,
    IEP_1INT_1
} IEP_1INT_T ;
#define WRITE_IEP1INT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ IEP1INT_MASK) | ((val << IEP1INT_START_BIT) & IEP1INT_MASK )); \
   } 

#define ENABLE_IEP1INT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  IEP1INT_MASK ); \
   }

#define DISABLE_IEP1INT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG(0x38, val & ~IEP1INT_MASK ); \
   } 

#define READ_IEP1INT() \
   ((READ_REGISTER_ULONG(0x38) & IEP1INT_MASK)  >> IEP1INT_START_BIT)

#define WHEN_IEP1INT_HIGH() \
     if ( READ_IEP1INT() )


#define UNLESS_IEP1INT_HIGH() \
     if (! READ_IEP1INT() )


#define WAIT_IEP1INT_LOW() \
    while ( READ_IEP1INT() );


#define WAIT_IEP1INT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IEP1INT() && (--___t___ > 0)); }


#define WAIT_IEP1INT_HIGH() \
    while (! READ_IEP1INT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDeachintmsk
//
// Return the value of register OTG_HS_DEACHINTMSK
//
// Notes : Register OtgHsDeachintmsk at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DEACHINTMSK( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_OTG_HS_DEACHINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DEACHINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DEACHINTMSK() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDeachintmsk
//
// Return the value of register OTG_HS_DEACHINTMSK
//
// Notes : Register OTG_HS device each endpoint interrupt register mask (OTG_HS_DEACHINTMSK) at the offset 0x3C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT Endpoint 1 interrupt mask bit 
    // 
#define OEP1INTM_MASK 0x20000U
#define OEP1INTM_OFFSET 17
#define OEP1INTM_START_BIT 17
#define OEP1INTM_WIDTH 1


#define OTG_HS_DEACHINTMSK_REG 0x3C

typedef enum oep1intm {
    OEP_1INTM_0,
    OEP_1INTM_1
} OEP_1INTM_T ;
#define WRITE_OEP1INTM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ OEP1INTM_MASK) | ((val << OEP1INTM_START_BIT) & OEP1INTM_MASK )); \
   } 

#define ENABLE_OEP1INTM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  OEP1INTM_MASK ); \
   }

#define DISABLE_OEP1INTM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~OEP1INTM_MASK ); \
   } 

#define READ_OEP1INTM() \
   ((READ_REGISTER_ULONG(0x3C) & OEP1INTM_MASK)  >> OEP1INTM_START_BIT)

#define WHEN_OEP1INTM_HIGH() \
     if ( READ_OEP1INTM() )


#define UNLESS_OEP1INTM_HIGH() \
     if (! READ_OEP1INTM() )


#define WAIT_OEP1INTM_LOW() \
    while ( READ_OEP1INTM() );


#define WAIT_OEP1INTM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OEP1INTM() && (--___t___ > 0)); }


#define WAIT_OEP1INTM_HIGH() \
    while (! READ_OEP1INTM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDeachintmsk
//
// Return the value of register OTG_HS_DEACHINTMSK
//
// Notes : Register OTG_HS device each endpoint interrupt register mask (OTG_HS_DEACHINTMSK) at the offset 0x3C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN Endpoint 1 interrupt mask bit 
    // 
#define IEP1INTM_MASK 0x2U
#define IEP1INTM_OFFSET 1
#define IEP1INTM_START_BIT 1
#define IEP1INTM_WIDTH 1



typedef enum iep1intm {
    IEP_1INTM_0,
    IEP_1INTM_1
} IEP_1INTM_T ;
#define WRITE_IEP1INTM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ IEP1INTM_MASK) | ((val << IEP1INTM_START_BIT) & IEP1INTM_MASK )); \
   } 

#define ENABLE_IEP1INTM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  IEP1INTM_MASK ); \
   }

#define DISABLE_IEP1INTM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~IEP1INTM_MASK ); \
   } 

#define READ_IEP1INTM() \
   ((READ_REGISTER_ULONG(0x3C) & IEP1INTM_MASK)  >> IEP1INTM_START_BIT)

#define WHEN_IEP1INTM_HIGH() \
     if ( READ_IEP1INTM() )


#define UNLESS_IEP1INTM_HIGH() \
     if (! READ_IEP1INTM() )


#define WAIT_IEP1INTM_LOW() \
    while ( READ_IEP1INTM() );


#define WAIT_IEP1INTM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IEP1INTM() && (--___t___ > 0)); }


#define WAIT_IEP1INTM_HIGH() \
    while (! READ_IEP1INTM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL0
//
// Notes : Register OtgHsDiepctl0 at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_0_REG 0x100

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x100) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x100) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x100) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x100) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x100) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x100) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x100) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x100) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x100) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x100) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x100) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG(0x100, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x100) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl0
//
// Return the value of register OTG_HS_DIEPCTL_0
//
// Notes : Register OTG device endpoint-0 control register (OTG_HS_DIEPCTL0) at the offset 0x100, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x100) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT0
//
// Notes : Register OtgHsDiepint0 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_0_REG 0x108

typedef enum nak {
    NAK_0,
    NAK_1
} NAK_T ;
#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x108) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



typedef enum berr {
    BERR_0,
    BERR_1
} BERR_T ;
#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x108) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



typedef enum pktdrpsts {
    PKTDRPSTS_0,
    PKTDRPSTS_1
} PKTDRPSTS_T ;
#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x108) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



typedef enum bna {
    BNA_0,
    BNA_1
} BNA_T ;
#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x108) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



typedef enum txfifoudrn {
    TXFIFOUDRN_0,
    TXFIFOUDRN_1
} TXFIFOUDRN_T ;
#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x108) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x108) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x108) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x108) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x108) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x108) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint0
//
// Return the value of register OTG_HS_DIEPINT_0
//
// Notes : Register OTG device endpoint-0 interrupt register (OTG_HS_DIEPINT0) at the offset 0x108, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG(0x108, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x108) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz0
//
// Return the value of register OTG_HS_DIEPTSIZ0
//
// Notes : Register OtgHsDieptsiz0 at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_0( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_0() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz0
//
// Return the value of register OTG_HS_DIEPTSIZ_0
//
// Notes : Register OTG_HS device IN endpoint 0 transfer size register (OTG_HS_DIEPTSIZ0) at the offset 0x110, Bits 19:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x180000U
#define PKTCNT_OFFSET 20
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_0_REG 0x110

#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x110) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz0
//
// Return the value of register OTG_HS_DIEPTSIZ_0
//
// Notes : Register OTG_HS device IN endpoint 0 transfer size register (OTG_HS_DIEPTSIZ0) at the offset 0x110, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FU
#define XFRSIZ_OFFSET 6
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 7



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x110) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma1
//
// Return the value of register OTG_HS_DIEPDMA1
//
// Notes : Register OtgHsDiepdma1 at offset 0x114
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPDMA_1( y) \
     WRITE_REGISTER_ULONG( 0x114 , y)

#define SET_BITS_OTG_HS_DIEPDMA_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPDMA_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPDMA_1() \
     READ_REGISTER_ULONG(0x114)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma1
//
// Return the value of register OTG_HS_DIEPDMA_1
//
// Notes : Register OTG_HS device endpoint-1 DMA address register (OTG_HS_DIEPDMA1) at the offset 0x114, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_DIEPDMA_1_REG 0x114

typedef enum dmaaddr {
    DMAADDR_0,
    DMAADDR_1
} DMAADDR_T ;
#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x114) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts0
//
// Return the value of register OTG_HS_DTXFSTS0
//
// Notes : Register OtgHsDtxfsts0 at offset 0x118
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DTXFSTS_0() \
     READ_REGISTER_ULONG(0x118)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts0
//
// Return the value of register OTG_HS_DTXFSTS_0
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS0) at the offset 0x118, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_0_REG 0x118

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x118) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x118); \
     WRITE_REGISTER_ULONG(0x118, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL1
//
// Notes : Register OtgHsDiepctl1 at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_1_REG 0x120

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x120) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x120) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x120) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x120) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x120) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x120) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x120) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x120) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x120) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x120) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x120) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x120) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl1
//
// Return the value of register OTG_HS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DIEPCTL1) at the offset 0x120, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x120) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT1
//
// Notes : Register OtgHsDiepint1 at offset 0x128
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_1_REG 0x128

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x128) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x128) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x128) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x128) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x128) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x128) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x128) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x128) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x128) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x128) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint1
//
// Return the value of register OTG_HS_DIEPINT_1
//
// Notes : Register OTG device endpoint-1 interrupt register (OTG_HS_DIEPINT1) at the offset 0x128, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x128); \
     WRITE_REGISTER_ULONG(0x128, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG( 0x128 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x128); \
     WRITE_REGISTER_ULONG(0x128, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x128) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz1
//
// Return the value of register OTG_HS_DIEPTSIZ1
//
// Notes : Register OtgHsDieptsiz1 at offset 0x130
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_1( y) \
     WRITE_REGISTER_ULONG( 0x130 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_1() \
     READ_REGISTER_ULONG(0x130)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz1
//
// Return the value of register OTG_HS_DIEPTSIZ_1
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ1) at the offset 0x130, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_1_REG 0x130

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x130) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz1
//
// Return the value of register OTG_HS_DIEPTSIZ_1
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ1) at the offset 0x130, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x130) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz1
//
// Return the value of register OTG_HS_DIEPTSIZ_1
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ1) at the offset 0x130, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x130) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma2
//
// Return the value of register OTG_HS_DIEPDMA2
//
// Notes : Register OtgHsDiepdma2 at offset 0x134
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPDMA_2( y) \
     WRITE_REGISTER_ULONG( 0x134 , y)

#define SET_BITS_OTG_HS_DIEPDMA_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPDMA_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x134); \
     WRITE_REGISTER_ULONG( 0x134 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPDMA_2() \
     READ_REGISTER_ULONG(0x134)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma2
//
// Return the value of register OTG_HS_DIEPDMA_2
//
// Notes : Register OTG_HS device endpoint-2 DMA address register (OTG_HS_DIEPDMA2) at the offset 0x134, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_DIEPDMA_2_REG 0x134

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x134) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x134); \
     WRITE_REGISTER_ULONG(0x134, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts1
//
// Return the value of register OTG_HS_DTXFSTS1
//
// Notes : Register OtgHsDtxfsts1 at offset 0x138
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DTXFSTS_1() \
     READ_REGISTER_ULONG(0x138)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts1
//
// Return the value of register OTG_HS_DTXFSTS_1
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS1) at the offset 0x138, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_1_REG 0x138

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x138) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x138); \
     WRITE_REGISTER_ULONG(0x138, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL2
//
// Notes : Register OtgHsDiepctl2 at offset 0x140
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_2_REG 0x140

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x140) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x140) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x140) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x140) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x140) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x140) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x140) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x140) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x140) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x140) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x140) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x140) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl2
//
// Return the value of register OTG_HS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DIEPCTL2) at the offset 0x140, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x140) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT2
//
// Notes : Register OtgHsDiepint2 at offset 0x148
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_2_REG 0x148

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x148) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x148) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x148) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x148) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x148) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x148) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x148) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x148) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x148) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x148) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint2
//
// Return the value of register OTG_HS_DIEPINT_2
//
// Notes : Register OTG device endpoint-2 interrupt register (OTG_HS_DIEPINT2) at the offset 0x148, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG(0x148, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x148) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz2
//
// Return the value of register OTG_HS_DIEPTSIZ2
//
// Notes : Register OtgHsDieptsiz2 at offset 0x150
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_2( y) \
     WRITE_REGISTER_ULONG( 0x150 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_2() \
     READ_REGISTER_ULONG(0x150)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz2
//
// Return the value of register OTG_HS_DIEPTSIZ_2
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ2) at the offset 0x150, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_2_REG 0x150

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x150) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz2
//
// Return the value of register OTG_HS_DIEPTSIZ_2
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ2) at the offset 0x150, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x150) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz2
//
// Return the value of register OTG_HS_DIEPTSIZ_2
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ2) at the offset 0x150, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x150) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma3
//
// Return the value of register OTG_HS_DIEPDMA3
//
// Notes : Register OtgHsDiepdma3 at offset 0x154
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPDMA_3( y) \
     WRITE_REGISTER_ULONG( 0x154 , y)

#define SET_BITS_OTG_HS_DIEPDMA_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPDMA_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPDMA_3() \
     READ_REGISTER_ULONG(0x154)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma3
//
// Return the value of register OTG_HS_DIEPDMA_3
//
// Notes : Register OTG_HS device endpoint-3 DMA address register (OTG_HS_DIEPDMA3) at the offset 0x154, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_DIEPDMA_3_REG 0x154

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x154) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x154); \
     WRITE_REGISTER_ULONG(0x154, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts2
//
// Return the value of register OTG_HS_DTXFSTS2
//
// Notes : Register OtgHsDtxfsts2 at offset 0x158
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DTXFSTS_2() \
     READ_REGISTER_ULONG(0x158)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts2
//
// Return the value of register OTG_HS_DTXFSTS_2
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS2) at the offset 0x158, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_2_REG 0x158

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x158) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL3
//
// Notes : Register OtgHsDiepctl3 at offset 0x160
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_3_REG 0x160

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x160) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x160) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x160) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x160) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x160) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x160) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x160) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x160) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x160) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x160) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x160) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG( 0x160 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x160); \
     WRITE_REGISTER_ULONG(0x160, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x160) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl3
//
// Return the value of register OTG_HS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DIEPCTL3) at the offset 0x160, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x160) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT3
//
// Notes : Register OtgHsDiepint3 at offset 0x168
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_3_REG 0x168

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x168) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x168) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x168) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x168) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x168) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x168) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x168) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x168) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x168) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x168) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint3
//
// Return the value of register OTG_HS_DIEPINT_3
//
// Notes : Register OTG device endpoint-3 interrupt register (OTG_HS_DIEPINT3) at the offset 0x168, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x168); \
     WRITE_REGISTER_ULONG(0x168, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG( 0x168 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x168); \
     WRITE_REGISTER_ULONG(0x168, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x168) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz3
//
// Return the value of register OTG_HS_DIEPTSIZ3
//
// Notes : Register OtgHsDieptsiz3 at offset 0x170
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_3( y) \
     WRITE_REGISTER_ULONG( 0x170 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_3() \
     READ_REGISTER_ULONG(0x170)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz3
//
// Return the value of register OTG_HS_DIEPTSIZ_3
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ3) at the offset 0x170, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_3_REG 0x170

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x170) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz3
//
// Return the value of register OTG_HS_DIEPTSIZ_3
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ3) at the offset 0x170, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x170) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz3
//
// Return the value of register OTG_HS_DIEPTSIZ_3
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ3) at the offset 0x170, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x170) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma4
//
// Return the value of register OTG_HS_DIEPDMA4
//
// Notes : Register OtgHsDiepdma4 at offset 0x174
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPDMA_4( y) \
     WRITE_REGISTER_ULONG( 0x174 , y)

#define SET_BITS_OTG_HS_DIEPDMA_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x174); \
     WRITE_REGISTER_ULONG( 0x174 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPDMA_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x174); \
     WRITE_REGISTER_ULONG( 0x174 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPDMA_4() \
     READ_REGISTER_ULONG(0x174)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma4
//
// Return the value of register OTG_HS_DIEPDMA_4
//
// Notes : Register OTG_HS device endpoint-4 DMA address register (OTG_HS_DIEPDMA4) at the offset 0x174, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_DIEPDMA_4_REG 0x174

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x174) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x174); \
     WRITE_REGISTER_ULONG(0x174, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts3
//
// Return the value of register OTG_HS_DTXFSTS3
//
// Notes : Register OtgHsDtxfsts3 at offset 0x178
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DTXFSTS_3() \
     READ_REGISTER_ULONG(0x178)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts3
//
// Return the value of register OTG_HS_DTXFSTS_3
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS3) at the offset 0x178, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_3_REG 0x178

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x178) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x178); \
     WRITE_REGISTER_ULONG(0x178, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL4
//
// Notes : Register OtgHsDiepctl4 at offset 0x180
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_4_REG 0x180

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x180) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x180) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x180) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x180) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x180) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x180) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x180) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x180) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x180) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x180) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x180) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG(0x180, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x180) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl4
//
// Return the value of register OTG_HS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DIEPCTL4) at the offset 0x180, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x180) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT4
//
// Notes : Register OtgHsDiepint4 at offset 0x188
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_4_REG 0x188

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x188) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x188) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x188) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x188) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x188) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x188) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x188) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x188) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x188) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x188) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint4
//
// Return the value of register OTG_HS_DIEPINT_4
//
// Notes : Register OTG device endpoint-4 interrupt register (OTG_HS_DIEPINT4) at the offset 0x188, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG(0x188, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x188) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz4
//
// Return the value of register OTG_HS_DIEPTSIZ4
//
// Notes : Register OtgHsDieptsiz4 at offset 0x190
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_4( y) \
     WRITE_REGISTER_ULONG( 0x190 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x190); \
     WRITE_REGISTER_ULONG( 0x190 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_4() \
     READ_REGISTER_ULONG(0x190)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz4
//
// Return the value of register OTG_HS_DIEPTSIZ_4
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ4) at the offset 0x190, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_4_REG 0x190

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x190) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz4
//
// Return the value of register OTG_HS_DIEPTSIZ_4
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ4) at the offset 0x190, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x190) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz4
//
// Return the value of register OTG_HS_DIEPTSIZ_4
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ4) at the offset 0x190, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x190) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x190); \
     WRITE_REGISTER_ULONG(0x190, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma5
//
// Return the value of register OTG_HS_DIEPDMA5
//
// Notes : Register OtgHsDiepdma5 at offset 0x194
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPDMA_5( y) \
     WRITE_REGISTER_ULONG( 0x194 , y)

#define SET_BITS_OTG_HS_DIEPDMA_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPDMA_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPDMA_5() \
     READ_REGISTER_ULONG(0x194)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepdma5
//
// Return the value of register OTG_HS_DIEPDMA_5
//
// Notes : Register OTG_HS device endpoint-5 DMA address register (OTG_HS_DIEPDMA5) at the offset 0x194, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA address 
    // 
#define DMAADDR_MASK 0xFFFFFFFFU
#define DMAADDR_OFFSET 31
#define DMAADDR_START_BIT 0
#define DMAADDR_WIDTH 32


#define OTG_HS_DIEPDMA_5_REG 0x194

#define READ_DMAADDR() \
   ((READ_REGISTER_ULONG(0x194) & DMAADDR_MASK)  >> DMAADDR_START_BIT)

#define WRITE_DMAADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x194); \
     WRITE_REGISTER_ULONG(0x194, (OldValue & ~ DMAADDR_MASK) | ((val << DMAADDR_START_BIT) & DMAADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts4
//
// Return the value of register OTG_HS_DTXFSTS4
//
// Notes : Register OtgHsDtxfsts4 at offset 0x198
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DTXFSTS_4() \
     READ_REGISTER_ULONG(0x198)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts4
//
// Return the value of register OTG_HS_DTXFSTS_4
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS4) at the offset 0x198, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_4_REG 0x198

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x198) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x198); \
     WRITE_REGISTER_ULONG(0x198, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz6
//
// Return the value of register OTG_HS_DIEPTSIZ6
//
// Notes : Register OtgHsDieptsiz6 at offset 0x1A0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_6( y) \
     WRITE_REGISTER_ULONG( 0x1A0 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_6() \
     READ_REGISTER_ULONG(0x1A0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz6
//
// Return the value of register OTG_HS_DIEPTSIZ_6
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ6) at the offset 0x1A0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_6_REG 0x1A0

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1A0) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz6
//
// Return the value of register OTG_HS_DIEPTSIZ_6
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ6) at the offset 0x1A0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x1A0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz6
//
// Return the value of register OTG_HS_DIEPTSIZ_6
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ6) at the offset 0x1A0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1A0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL5
//
// Notes : Register OtgHsDiepctl5 at offset 0x1A0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_5_REG 0x1A0

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x1A0) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x1A0) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x1A0) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x1A0) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x1A0) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x1A0) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x1A0) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1A0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x1A0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x1A0) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x1A0) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG( 0x1A0 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x1A0) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl5
//
// Return the value of register OTG_HS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DIEPCTL5) at the offset 0x1A0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1A0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts6
//
// Return the value of register OTG_HS_DTXFSTS6
//
// Notes : Register OtgHsDtxfsts6 at offset 0x1A4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DTXFSTS_6( y) \
     WRITE_REGISTER_ULONG( 0x1A4 , y)

#define SET_BITS_OTG_HS_DTXFSTS_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DTXFSTS_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A4); \
     WRITE_REGISTER_ULONG( 0x1A4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DTXFSTS_6() \
     READ_REGISTER_ULONG(0x1A4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts6
//
// Return the value of register OTG_HS_DTXFSTS_6
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS6) at the offset 0x1A4, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_6_REG 0x1A4

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x1A4) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A4); \
     WRITE_REGISTER_ULONG(0x1A4, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT5
//
// Notes : Register OtgHsDiepint5 at offset 0x1A8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_5_REG 0x1A8

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1A8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x1A8) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x1A8) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x1A8) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x1A8) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x1A8) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x1A8) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x1A8) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x1A8) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x1A8) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint5
//
// Return the value of register OTG_HS_DIEPINT_5
//
// Notes : Register OTG device endpoint-5 interrupt register (OTG_HS_DIEPINT5) at the offset 0x1A8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1A8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz7
//
// Return the value of register OTG_HS_DIEPTSIZ7
//
// Notes : Register OtgHsDieptsiz7 at offset 0x1A8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_7( y) \
     WRITE_REGISTER_ULONG( 0x1A8 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1A8); \
     WRITE_REGISTER_ULONG( 0x1A8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_7() \
     READ_REGISTER_ULONG(0x1A8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz7
//
// Return the value of register OTG_HS_DIEPTSIZ_7
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ7) at the offset 0x1A8, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_7_REG 0x1A8

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1A8) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz7
//
// Return the value of register OTG_HS_DIEPTSIZ_7
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ7) at the offset 0x1A8, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x1A8) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz7
//
// Return the value of register OTG_HS_DIEPTSIZ_7
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ7) at the offset 0x1A8, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1A8) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A8); \
     WRITE_REGISTER_ULONG(0x1A8, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts7
//
// Return the value of register OTG_HS_DTXFSTS7
//
// Notes : Register OtgHsDtxfsts7 at offset 0x1AC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DTXFSTS_7( y) \
     WRITE_REGISTER_ULONG( 0x1AC , y)

#define SET_BITS_OTG_HS_DTXFSTS_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DTXFSTS_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1AC); \
     WRITE_REGISTER_ULONG( 0x1AC , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DTXFSTS_7() \
     READ_REGISTER_ULONG(0x1AC)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts7
//
// Return the value of register OTG_HS_DTXFSTS_7
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS7) at the offset 0x1AC, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_7_REG 0x1AC

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x1AC) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1AC); \
     WRITE_REGISTER_ULONG(0x1AC, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz5
//
// Return the value of register OTG_HS_DIEPTSIZ5
//
// Notes : Register OtgHsDieptsiz5 at offset 0x1B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DIEPTSIZ_5( y) \
     WRITE_REGISTER_ULONG( 0x1B0 , y)

#define SET_BITS_OTG_HS_DIEPTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DIEPTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DIEPTSIZ_5() \
     READ_REGISTER_ULONG(0x1B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz5
//
// Return the value of register OTG_HS_DIEPTSIZ_5
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ5) at the offset 0x1B0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2


#define OTG_HS_DIEPTSIZ_5_REG 0x1B0

#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1B0) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz5
//
// Return the value of register OTG_HS_DIEPTSIZ_5
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ5) at the offset 0x1B0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x1B0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDieptsiz5
//
// Return the value of register OTG_HS_DIEPTSIZ_5
//
// Notes : Register OTG_HS device endpoint transfer size register (OTG_HS_DIEPTSIZ5) at the offset 0x1B0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1B0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts5
//
// Return the value of register OTG_HS_DTXFSTS5
//
// Notes : Register OtgHsDtxfsts5 at offset 0x1B8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_HS_DTXFSTS_5() \
     READ_REGISTER_ULONG(0x1B8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDtxfsts5
//
// Return the value of register OTG_HS_DTXFSTS_5
//
// Notes : Register OTG_HS device IN endpoint transmit FIFO status register (OTG_HS_DTXFSTS5) at the offset 0x1B8, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space avail 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_HS_DTXFSTS_5_REG 0x1B8

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x1B8) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B8); \
     WRITE_REGISTER_ULONG(0x1B8, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL6
//
// Notes : Register OtgHsDiepctl6 at offset 0x1C0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_6_REG 0x1C0

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x1C0) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x1C0) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x1C0) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x1C0) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x1C0) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x1C0) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x1C0) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1C0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x1C0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x1C0) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x1C0) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG( 0x1C0 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x1C0) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl6
//
// Return the value of register OTG_HS_DIEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DIEPCTL6) at the offset 0x1C0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1C0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C0); \
     WRITE_REGISTER_ULONG(0x1C0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT6
//
// Notes : Register OtgHsDiepint6 at offset 0x1C8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_6_REG 0x1C8

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1C8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x1C8) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x1C8) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x1C8) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x1C8) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x1C8) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x1C8) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x1C8) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x1C8) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x1C8) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint6
//
// Return the value of register OTG_HS_DIEPINT_6
//
// Notes : Register OTG device endpoint-6 interrupt register (OTG_HS_DIEPINT6) at the offset 0x1C8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG( 0x1C8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C8); \
     WRITE_REGISTER_ULONG(0x1C8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1C8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL7
//
// Notes : Register OtgHsDiepctl7 at offset 0x1E0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DIEPCTL_7_REG 0x1E0

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x1E0) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x1E0) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x1E0) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x1E0) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x1E0) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x1E0) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x3C00000U
#define TXFNUM_OFFSET 25
#define TXFNUM_START_BIT 22
#define TXFNUM_WIDTH 4



#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x1E0) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x1E0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x1E0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x1E0) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even/odd frame 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x1E0) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG( 0x1E0 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x1E0) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepctl7
//
// Return the value of register OTG_HS_DIEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DIEPCTL7) at the offset 0x1E0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1E0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E0); \
     WRITE_REGISTER_ULONG(0x1E0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT7
//
// Notes : Register OtgHsDiepint7 at offset 0x1E8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK interrupt 
    // 
#define NAK_MASK 0x2000U
#define NAK_OFFSET 13
#define NAK_START_BIT 13
#define NAK_WIDTH 1


#define OTG_HS_DIEPINT_7_REG 0x1E8

#define WRITE_NAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ NAK_MASK) | ((val << NAK_START_BIT) & NAK_MASK )); \
   } 

#define ENABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  NAK_MASK ); \
   }

#define DISABLE_NAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~NAK_MASK ); \
   } 

#define READ_NAK() \
   ((READ_REGISTER_ULONG(0x1E8) & NAK_MASK)  >> NAK_START_BIT)

#define WHEN_NAK_HIGH() \
     if ( READ_NAK() )


#define UNLESS_NAK_HIGH() \
     if (! READ_NAK() )


#define WAIT_NAK_LOW() \
    while ( READ_NAK() );


#define WAIT_NAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAK() && (--___t___ > 0)); }


#define WAIT_NAK_HIGH() \
    while (! READ_NAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Babble error interrupt 
    // 
#define BERR_MASK 0x1000U
#define BERR_OFFSET 12
#define BERR_START_BIT 12
#define BERR_WIDTH 1



#define WRITE_BERR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  BERR_MASK ); \
   }

#define DISABLE_BERR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~BERR_MASK ); \
   } 

#define READ_BERR() \
   ((READ_REGISTER_ULONG(0x1E8) & BERR_MASK)  >> BERR_START_BIT)

#define WHEN_BERR_HIGH() \
     if ( READ_BERR() )


#define UNLESS_BERR_HIGH() \
     if (! READ_BERR() )


#define WAIT_BERR_LOW() \
    while ( READ_BERR() );


#define WAIT_BERR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BERR() && (--___t___ > 0)); }


#define WAIT_BERR_HIGH() \
    while (! READ_BERR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet dropped status 
    // 
#define PKTDRPSTS_MASK 0x800U
#define PKTDRPSTS_OFFSET 11
#define PKTDRPSTS_START_BIT 11
#define PKTDRPSTS_WIDTH 1



#define WRITE_PKTDRPSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ PKTDRPSTS_MASK) | ((val << PKTDRPSTS_START_BIT) & PKTDRPSTS_MASK )); \
   } 

#define ENABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  PKTDRPSTS_MASK ); \
   }

#define DISABLE_PKTDRPSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~PKTDRPSTS_MASK ); \
   } 

#define READ_PKTDRPSTS() \
   ((READ_REGISTER_ULONG(0x1E8) & PKTDRPSTS_MASK)  >> PKTDRPSTS_START_BIT)

#define WHEN_PKTDRPSTS_HIGH() \
     if ( READ_PKTDRPSTS() )


#define UNLESS_PKTDRPSTS_HIGH() \
     if (! READ_PKTDRPSTS() )


#define WAIT_PKTDRPSTS_LOW() \
    while ( READ_PKTDRPSTS() );


#define WAIT_PKTDRPSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTDRPSTS() && (--___t___ > 0)); }


#define WAIT_PKTDRPSTS_HIGH() \
    while (! READ_PKTDRPSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Buffer not available interrupt 
    // 
#define BNA_MASK 0x200U
#define BNA_OFFSET 9
#define BNA_START_BIT 9
#define BNA_WIDTH 1



#define WRITE_BNA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ BNA_MASK) | ((val << BNA_START_BIT) & BNA_MASK )); \
   } 

#define ENABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  BNA_MASK ); \
   }

#define DISABLE_BNA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~BNA_MASK ); \
   } 

#define READ_BNA() \
   ((READ_REGISTER_ULONG(0x1E8) & BNA_MASK)  >> BNA_START_BIT)

#define WHEN_BNA_HIGH() \
     if ( READ_BNA() )


#define UNLESS_BNA_HIGH() \
     if (! READ_BNA() )


#define WAIT_BNA_LOW() \
    while ( READ_BNA() );


#define WAIT_BNA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BNA() && (--___t___ > 0)); }


#define WAIT_BNA_HIGH() \
    while (! READ_BNA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit Fifo Underrun 
    // 
#define TXFIFOUDRN_MASK 0x100U
#define TXFIFOUDRN_OFFSET 8
#define TXFIFOUDRN_START_BIT 8
#define TXFIFOUDRN_WIDTH 1



#define WRITE_TXFIFOUDRN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ TXFIFOUDRN_MASK) | ((val << TXFIFOUDRN_START_BIT) & TXFIFOUDRN_MASK )); \
   } 

#define ENABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  TXFIFOUDRN_MASK ); \
   }

#define DISABLE_TXFIFOUDRN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~TXFIFOUDRN_MASK ); \
   } 

#define READ_TXFIFOUDRN() \
   ((READ_REGISTER_ULONG(0x1E8) & TXFIFOUDRN_MASK)  >> TXFIFOUDRN_START_BIT)

#define WHEN_TXFIFOUDRN_HIGH() \
     if ( READ_TXFIFOUDRN() )


#define UNLESS_TXFIFOUDRN_HIGH() \
     if (! READ_TXFIFOUDRN() )


#define WAIT_TXFIFOUDRN_LOW() \
    while ( READ_TXFIFOUDRN() );


#define WAIT_TXFIFOUDRN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFIFOUDRN() && (--___t___ > 0)); }


#define WAIT_TXFIFOUDRN_HIGH() \
    while (! READ_TXFIFOUDRN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit FIFO empty 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



#define WRITE_TXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ TXFE_MASK) | ((val << TXFE_START_BIT) & TXFE_MASK )); \
   } 

#define ENABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  TXFE_MASK ); \
   }

#define DISABLE_TXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~TXFE_MASK ); \
   } 

#define READ_TXFE() \
   ((READ_REGISTER_ULONG(0x1E8) & TXFE_MASK)  >> TXFE_START_BIT)

#define WHEN_TXFE_HIGH() \
     if ( READ_TXFE() )


#define UNLESS_TXFE_HIGH() \
     if (! READ_TXFE() )


#define WAIT_TXFE_LOW() \
    while ( READ_TXFE() );


#define WAIT_TXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TXFE() && (--___t___ > 0)); }


#define WAIT_TXFE_HIGH() \
    while (! READ_TXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



#define WRITE_INEPNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ INEPNE_MASK) | ((val << INEPNE_START_BIT) & INEPNE_MASK )); \
   } 

#define ENABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  INEPNE_MASK ); \
   }

#define DISABLE_INEPNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~INEPNE_MASK ); \
   } 

#define READ_INEPNE() \
   ((READ_REGISTER_ULONG(0x1E8) & INEPNE_MASK)  >> INEPNE_START_BIT)

#define WHEN_INEPNE_HIGH() \
     if ( READ_INEPNE() )


#define UNLESS_INEPNE_HIGH() \
     if (! READ_INEPNE() )


#define WAIT_INEPNE_LOW() \
    while ( READ_INEPNE() );


#define WAIT_INEPNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INEPNE() && (--___t___ > 0)); }


#define WAIT_INEPNE_HIGH() \
    while (! READ_INEPNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO is empty 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



#define WRITE_ITTXFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ ITTXFE_MASK) | ((val << ITTXFE_START_BIT) & ITTXFE_MASK )); \
   } 

#define ENABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  ITTXFE_MASK ); \
   }

#define DISABLE_ITTXFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~ITTXFE_MASK ); \
   } 

#define READ_ITTXFE() \
   ((READ_REGISTER_ULONG(0x1E8) & ITTXFE_MASK)  >> ITTXFE_START_BIT)

#define WHEN_ITTXFE_HIGH() \
     if ( READ_ITTXFE() )


#define UNLESS_ITTXFE_HIGH() \
     if (! READ_ITTXFE() )


#define WAIT_ITTXFE_LOW() \
    while ( READ_ITTXFE() );


#define WAIT_ITTXFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITTXFE() && (--___t___ > 0)); }


#define WAIT_ITTXFE_HIGH() \
    while (! READ_ITTXFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



#define WRITE_TOC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ TOC_MASK) | ((val << TOC_START_BIT) & TOC_MASK )); \
   } 

#define ENABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  TOC_MASK ); \
   }

#define DISABLE_TOC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~TOC_MASK ); \
   } 

#define READ_TOC() \
   ((READ_REGISTER_ULONG(0x1E8) & TOC_MASK)  >> TOC_START_BIT)

#define WHEN_TOC_HIGH() \
     if ( READ_TOC() )


#define UNLESS_TOC_HIGH() \
     if (! READ_TOC() )


#define WAIT_TOC_LOW() \
    while ( READ_TOC() );


#define WAIT_TOC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TOC() && (--___t___ > 0)); }


#define WAIT_TOC_HIGH() \
    while (! READ_TOC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x1E8) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDiepint7
//
// Return the value of register OTG_HS_DIEPINT_7
//
// Notes : Register OTG device endpoint-7 interrupt register (OTG_HS_DIEPINT7) at the offset 0x1E8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG( 0x1E8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1E8); \
     WRITE_REGISTER_ULONG(0x1E8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x1E8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL0
//
// Notes : Register OtgHsDoepctl0 at offset 0x300
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_0_REG 0x300

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x300) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x300) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x300) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x300) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x300) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x300) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x300) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x300) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG( 0x300 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x300); \
     WRITE_REGISTER_ULONG(0x300, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x300) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl0
//
// Return the value of register OTG_HS_DOEPCTL_0
//
// Notes : Register OTG_HS device control OUT endpoint 0 control register (OTG_HS_DOEPCTL0) at the offset 0x300, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x3U
#define MPSIZ_OFFSET 1
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 2



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x300) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT0
//
// Notes : Register OtgHsDoepint0 at offset 0x308
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_0( y) \
     WRITE_REGISTER_ULONG( 0x308 , y)

#define SET_BITS_OTG_HS_DOEPINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_0() \
     READ_REGISTER_ULONG(0x308)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT_0
//
// Notes : Register OTG_HS device endpoint-0 interrupt register (OTG_HS_DOEPINT0) at the offset 0x308, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_0_REG 0x308

typedef enum nyet {
    NYET_0,
    NYET_1
} NYET_T ;
#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG(0x308, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x308) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT_0
//
// Notes : Register OTG_HS device endpoint-0 interrupt register (OTG_HS_DOEPINT0) at the offset 0x308, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG(0x308, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x308) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT_0
//
// Notes : Register OTG_HS device endpoint-0 interrupt register (OTG_HS_DOEPINT0) at the offset 0x308, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG(0x308, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x308) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT_0
//
// Notes : Register OTG_HS device endpoint-0 interrupt register (OTG_HS_DOEPINT0) at the offset 0x308, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG(0x308, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x308) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT_0
//
// Notes : Register OTG_HS device endpoint-0 interrupt register (OTG_HS_DOEPINT0) at the offset 0x308, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG(0x308, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x308) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint0
//
// Return the value of register OTG_HS_DOEPINT_0
//
// Notes : Register OTG_HS device endpoint-0 interrupt register (OTG_HS_DOEPINT0) at the offset 0x308, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG(0x308, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x308) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz0
//
// Return the value of register OTG_HS_DOEPTSIZ0
//
// Notes : Register OtgHsDoeptsiz0 at offset 0x310
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_0( y) \
     WRITE_REGISTER_ULONG( 0x310 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x310); \
     WRITE_REGISTER_ULONG( 0x310 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x310); \
     WRITE_REGISTER_ULONG( 0x310 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_0() \
     READ_REGISTER_ULONG(0x310)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz0
//
// Return the value of register OTG_HS_DOEPTSIZ_0
//
// Notes : Register OTG_HS device endpoint-0 transfer size register (OTG_HS_DOEPTSIZ0) at the offset 0x310, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP packet count 
    // 
#define STUPCNT_MASK 0x60000000U
#define STUPCNT_OFFSET 30
#define STUPCNT_START_BIT 29
#define STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_0_REG 0x310

#define READ_STUPCNT() \
   ((READ_REGISTER_ULONG(0x310) & STUPCNT_MASK)  >> STUPCNT_START_BIT)

#define WRITE_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x310); \
     WRITE_REGISTER_ULONG(0x310, (OldValue & ~ STUPCNT_MASK) | ((val << STUPCNT_START_BIT) & STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz0
//
// Return the value of register OTG_HS_DOEPTSIZ_0
//
// Notes : Register OTG_HS device endpoint-0 transfer size register (OTG_HS_DOEPTSIZ0) at the offset 0x310, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x80000U
#define PKTCNT_OFFSET 19
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 1



#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x310); \
     WRITE_REGISTER_ULONG(0x310, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

#define ENABLE_PKTCNT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x310); \
     WRITE_REGISTER_ULONG( 0x310 , val |  PKTCNT_MASK ); \
   }

#define DISABLE_PKTCNT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x310); \
     WRITE_REGISTER_ULONG(0x310, val & ~PKTCNT_MASK ); \
   } 

#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x310) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WHEN_PKTCNT_HIGH() \
     if ( READ_PKTCNT() )


#define UNLESS_PKTCNT_HIGH() \
     if (! READ_PKTCNT() )


#define WAIT_PKTCNT_LOW() \
    while ( READ_PKTCNT() );


#define WAIT_PKTCNT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PKTCNT() && (--___t___ > 0)); }


#define WAIT_PKTCNT_HIGH() \
    while (! READ_PKTCNT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz0
//
// Return the value of register OTG_HS_DOEPTSIZ_0
//
// Notes : Register OTG_HS device endpoint-0 transfer size register (OTG_HS_DOEPTSIZ0) at the offset 0x310, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FU
#define XFRSIZ_OFFSET 6
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 7



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x310) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x310); \
     WRITE_REGISTER_ULONG(0x310, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL1
//
// Notes : Register OtgHsDoepctl1 at offset 0x320
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_1_REG 0x320

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x320) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x320) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x320) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x320) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x320) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x320) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x320) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x320) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x320) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x320) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x320) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG( 0x320 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x320); \
     WRITE_REGISTER_ULONG(0x320, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x320) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl1
//
// Return the value of register OTG_HS_DOEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_HS_DOEPCTL1) at the offset 0x320, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x320) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT1
//
// Notes : Register OtgHsDoepint1 at offset 0x328
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_1( y) \
     WRITE_REGISTER_ULONG( 0x328 , y)

#define SET_BITS_OTG_HS_DOEPINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_1() \
     READ_REGISTER_ULONG(0x328)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT_1
//
// Notes : Register OTG_HS device endpoint-1 interrupt register (OTG_HS_DOEPINT1) at the offset 0x328, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_1_REG 0x328

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG(0x328, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x328) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT_1
//
// Notes : Register OTG_HS device endpoint-1 interrupt register (OTG_HS_DOEPINT1) at the offset 0x328, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG(0x328, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x328) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT_1
//
// Notes : Register OTG_HS device endpoint-1 interrupt register (OTG_HS_DOEPINT1) at the offset 0x328, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG(0x328, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x328) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT_1
//
// Notes : Register OTG_HS device endpoint-1 interrupt register (OTG_HS_DOEPINT1) at the offset 0x328, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG(0x328, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x328) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT_1
//
// Notes : Register OTG_HS device endpoint-1 interrupt register (OTG_HS_DOEPINT1) at the offset 0x328, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG(0x328, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x328) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint1
//
// Return the value of register OTG_HS_DOEPINT_1
//
// Notes : Register OTG_HS device endpoint-1 interrupt register (OTG_HS_DOEPINT1) at the offset 0x328, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x328); \
     WRITE_REGISTER_ULONG(0x328, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG(0x328, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x328) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz1
//
// Return the value of register OTG_HS_DOEPTSIZ1
//
// Notes : Register OtgHsDoeptsiz1 at offset 0x330
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_1( y) \
     WRITE_REGISTER_ULONG( 0x330 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x330); \
     WRITE_REGISTER_ULONG( 0x330 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x330); \
     WRITE_REGISTER_ULONG( 0x330 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_1() \
     READ_REGISTER_ULONG(0x330)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz1
//
// Return the value of register OTG_HS_DOEPTSIZ_1
//
// Notes : Register OTG_HS device endpoint-1 transfer size register (OTG_HS_DOEPTSIZ1) at the offset 0x330, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_1_REG 0x330

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x330) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x330); \
     WRITE_REGISTER_ULONG(0x330, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz1
//
// Return the value of register OTG_HS_DOEPTSIZ_1
//
// Notes : Register OTG_HS device endpoint-1 transfer size register (OTG_HS_DOEPTSIZ1) at the offset 0x330, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x330) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x330); \
     WRITE_REGISTER_ULONG(0x330, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz1
//
// Return the value of register OTG_HS_DOEPTSIZ_1
//
// Notes : Register OTG_HS device endpoint-1 transfer size register (OTG_HS_DOEPTSIZ1) at the offset 0x330, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x330) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x330); \
     WRITE_REGISTER_ULONG(0x330, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL2
//
// Notes : Register OtgHsDoepctl2 at offset 0x340
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_2_REG 0x340

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x340) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x340) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x340) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x340) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x340) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x340) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x340) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x340) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x340) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x340) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x340) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG( 0x340 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x340); \
     WRITE_REGISTER_ULONG(0x340, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x340) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl2
//
// Return the value of register OTG_HS_DOEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_HS_DOEPCTL2) at the offset 0x340, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x340) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT2
//
// Notes : Register OtgHsDoepint2 at offset 0x348
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_2( y) \
     WRITE_REGISTER_ULONG( 0x348 , y)

#define SET_BITS_OTG_HS_DOEPINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_2() \
     READ_REGISTER_ULONG(0x348)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT_2
//
// Notes : Register OTG_HS device endpoint-2 interrupt register (OTG_HS_DOEPINT2) at the offset 0x348, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_2_REG 0x348

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x348); \
     WRITE_REGISTER_ULONG(0x348, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG(0x348, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x348) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT_2
//
// Notes : Register OTG_HS device endpoint-2 interrupt register (OTG_HS_DOEPINT2) at the offset 0x348, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x348); \
     WRITE_REGISTER_ULONG(0x348, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG(0x348, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x348) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT_2
//
// Notes : Register OTG_HS device endpoint-2 interrupt register (OTG_HS_DOEPINT2) at the offset 0x348, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x348); \
     WRITE_REGISTER_ULONG(0x348, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG(0x348, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x348) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT_2
//
// Notes : Register OTG_HS device endpoint-2 interrupt register (OTG_HS_DOEPINT2) at the offset 0x348, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x348); \
     WRITE_REGISTER_ULONG(0x348, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG(0x348, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x348) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT_2
//
// Notes : Register OTG_HS device endpoint-2 interrupt register (OTG_HS_DOEPINT2) at the offset 0x348, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x348); \
     WRITE_REGISTER_ULONG(0x348, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG(0x348, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x348) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint2
//
// Return the value of register OTG_HS_DOEPINT_2
//
// Notes : Register OTG_HS device endpoint-2 interrupt register (OTG_HS_DOEPINT2) at the offset 0x348, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x348); \
     WRITE_REGISTER_ULONG(0x348, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG(0x348, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x348) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz2
//
// Return the value of register OTG_HS_DOEPTSIZ2
//
// Notes : Register OtgHsDoeptsiz2 at offset 0x350
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_2( y) \
     WRITE_REGISTER_ULONG( 0x350 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x350); \
     WRITE_REGISTER_ULONG( 0x350 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x350); \
     WRITE_REGISTER_ULONG( 0x350 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_2() \
     READ_REGISTER_ULONG(0x350)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz2
//
// Return the value of register OTG_HS_DOEPTSIZ_2
//
// Notes : Register OTG_HS device endpoint-2 transfer size register (OTG_HS_DOEPTSIZ2) at the offset 0x350, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_2_REG 0x350

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x350) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x350); \
     WRITE_REGISTER_ULONG(0x350, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz2
//
// Return the value of register OTG_HS_DOEPTSIZ_2
//
// Notes : Register OTG_HS device endpoint-2 transfer size register (OTG_HS_DOEPTSIZ2) at the offset 0x350, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x350) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x350); \
     WRITE_REGISTER_ULONG(0x350, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz2
//
// Return the value of register OTG_HS_DOEPTSIZ_2
//
// Notes : Register OTG_HS device endpoint-2 transfer size register (OTG_HS_DOEPTSIZ2) at the offset 0x350, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x350) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x350); \
     WRITE_REGISTER_ULONG(0x350, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL3
//
// Notes : Register OtgHsDoepctl3 at offset 0x360
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_3_REG 0x360

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x360) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x360) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x360) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x360) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x360) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x360) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x360) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x360) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x360) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x360) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x360) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG( 0x360 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x360); \
     WRITE_REGISTER_ULONG(0x360, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x360) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl3
//
// Return the value of register OTG_HS_DOEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_HS_DOEPCTL3) at the offset 0x360, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x360) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT3
//
// Notes : Register OtgHsDoepint3 at offset 0x368
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_3( y) \
     WRITE_REGISTER_ULONG( 0x368 , y)

#define SET_BITS_OTG_HS_DOEPINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_3() \
     READ_REGISTER_ULONG(0x368)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT_3
//
// Notes : Register OTG_HS device endpoint-3 interrupt register (OTG_HS_DOEPINT3) at the offset 0x368, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_3_REG 0x368

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x368); \
     WRITE_REGISTER_ULONG(0x368, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG(0x368, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x368) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT_3
//
// Notes : Register OTG_HS device endpoint-3 interrupt register (OTG_HS_DOEPINT3) at the offset 0x368, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x368); \
     WRITE_REGISTER_ULONG(0x368, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG(0x368, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x368) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT_3
//
// Notes : Register OTG_HS device endpoint-3 interrupt register (OTG_HS_DOEPINT3) at the offset 0x368, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x368); \
     WRITE_REGISTER_ULONG(0x368, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG(0x368, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x368) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT_3
//
// Notes : Register OTG_HS device endpoint-3 interrupt register (OTG_HS_DOEPINT3) at the offset 0x368, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x368); \
     WRITE_REGISTER_ULONG(0x368, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG(0x368, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x368) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT_3
//
// Notes : Register OTG_HS device endpoint-3 interrupt register (OTG_HS_DOEPINT3) at the offset 0x368, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x368); \
     WRITE_REGISTER_ULONG(0x368, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG(0x368, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x368) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint3
//
// Return the value of register OTG_HS_DOEPINT_3
//
// Notes : Register OTG_HS device endpoint-3 interrupt register (OTG_HS_DOEPINT3) at the offset 0x368, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x368); \
     WRITE_REGISTER_ULONG(0x368, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG(0x368, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x368) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz3
//
// Return the value of register OTG_HS_DOEPTSIZ3
//
// Notes : Register OtgHsDoeptsiz3 at offset 0x370
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_3( y) \
     WRITE_REGISTER_ULONG( 0x370 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x370); \
     WRITE_REGISTER_ULONG( 0x370 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x370); \
     WRITE_REGISTER_ULONG( 0x370 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_3() \
     READ_REGISTER_ULONG(0x370)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz3
//
// Return the value of register OTG_HS_DOEPTSIZ_3
//
// Notes : Register OTG_HS device endpoint-3 transfer size register (OTG_HS_DOEPTSIZ3) at the offset 0x370, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_3_REG 0x370

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x370) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x370); \
     WRITE_REGISTER_ULONG(0x370, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz3
//
// Return the value of register OTG_HS_DOEPTSIZ_3
//
// Notes : Register OTG_HS device endpoint-3 transfer size register (OTG_HS_DOEPTSIZ3) at the offset 0x370, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x370) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x370); \
     WRITE_REGISTER_ULONG(0x370, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz3
//
// Return the value of register OTG_HS_DOEPTSIZ_3
//
// Notes : Register OTG_HS device endpoint-3 transfer size register (OTG_HS_DOEPTSIZ3) at the offset 0x370, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x370) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x370); \
     WRITE_REGISTER_ULONG(0x370, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL4
//
// Notes : Register OtgHsDoepctl4 at offset 0x380
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_4_REG 0x380

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x380) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x380) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x380) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x380) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x380) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x380) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x380) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x380) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x380) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x380) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x380) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x380) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl4
//
// Return the value of register OTG_HS_DOEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_HS_DOEPCTL4) at the offset 0x380, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x380) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT4
//
// Notes : Register OtgHsDoepint4 at offset 0x388
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_4( y) \
     WRITE_REGISTER_ULONG( 0x388 , y)

#define SET_BITS_OTG_HS_DOEPINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_4() \
     READ_REGISTER_ULONG(0x388)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT_4
//
// Notes : Register OTG_HS device endpoint-4 interrupt register (OTG_HS_DOEPINT4) at the offset 0x388, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_4_REG 0x388

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG(0x388, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x388) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT_4
//
// Notes : Register OTG_HS device endpoint-4 interrupt register (OTG_HS_DOEPINT4) at the offset 0x388, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG(0x388, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x388) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT_4
//
// Notes : Register OTG_HS device endpoint-4 interrupt register (OTG_HS_DOEPINT4) at the offset 0x388, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG(0x388, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x388) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT_4
//
// Notes : Register OTG_HS device endpoint-4 interrupt register (OTG_HS_DOEPINT4) at the offset 0x388, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG(0x388, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x388) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT_4
//
// Notes : Register OTG_HS device endpoint-4 interrupt register (OTG_HS_DOEPINT4) at the offset 0x388, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG(0x388, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x388) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint4
//
// Return the value of register OTG_HS_DOEPINT_4
//
// Notes : Register OTG_HS device endpoint-4 interrupt register (OTG_HS_DOEPINT4) at the offset 0x388, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG(0x388, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x388) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz4
//
// Return the value of register OTG_HS_DOEPTSIZ4
//
// Notes : Register OtgHsDoeptsiz4 at offset 0x390
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_4( y) \
     WRITE_REGISTER_ULONG( 0x390 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_4() \
     READ_REGISTER_ULONG(0x390)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz4
//
// Return the value of register OTG_HS_DOEPTSIZ_4
//
// Notes : Register OTG_HS device endpoint-4 transfer size register (OTG_HS_DOEPTSIZ4) at the offset 0x390, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_4_REG 0x390

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x390) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz4
//
// Return the value of register OTG_HS_DOEPTSIZ_4
//
// Notes : Register OTG_HS device endpoint-4 transfer size register (OTG_HS_DOEPTSIZ4) at the offset 0x390, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x390) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz4
//
// Return the value of register OTG_HS_DOEPTSIZ_4
//
// Notes : Register OTG_HS device endpoint-4 transfer size register (OTG_HS_DOEPTSIZ4) at the offset 0x390, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x390) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL5
//
// Notes : Register OtgHsDoepctl5 at offset 0x3A0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_5_REG 0x3A0

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x3A0) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x3A0) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x3A0) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x3A0) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x3A0) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x3A0) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x3A0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x3A0) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x3A0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x3A0) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x3A0) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x3A0) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl5
//
// Return the value of register OTG_HS_DOEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_HS_DOEPCTL5) at the offset 0x3A0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x3A0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT5
//
// Notes : Register OtgHsDoepint5 at offset 0x3A8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_5( y) \
     WRITE_REGISTER_ULONG( 0x3A8 , y)

#define SET_BITS_OTG_HS_DOEPINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_5() \
     READ_REGISTER_ULONG(0x3A8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT_5
//
// Notes : Register OTG_HS device endpoint-5 interrupt register (OTG_HS_DOEPINT5) at the offset 0x3A8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_5_REG 0x3A8

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x3A8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT_5
//
// Notes : Register OTG_HS device endpoint-5 interrupt register (OTG_HS_DOEPINT5) at the offset 0x3A8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x3A8) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT_5
//
// Notes : Register OTG_HS device endpoint-5 interrupt register (OTG_HS_DOEPINT5) at the offset 0x3A8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x3A8) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT_5
//
// Notes : Register OTG_HS device endpoint-5 interrupt register (OTG_HS_DOEPINT5) at the offset 0x3A8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x3A8) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT_5
//
// Notes : Register OTG_HS device endpoint-5 interrupt register (OTG_HS_DOEPINT5) at the offset 0x3A8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x3A8) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint5
//
// Return the value of register OTG_HS_DOEPINT_5
//
// Notes : Register OTG_HS device endpoint-5 interrupt register (OTG_HS_DOEPINT5) at the offset 0x3A8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG( 0x3A8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A8); \
     WRITE_REGISTER_ULONG(0x3A8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x3A8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz5
//
// Return the value of register OTG_HS_DOEPTSIZ5
//
// Notes : Register OtgHsDoeptsiz5 at offset 0x3B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_5( y) \
     WRITE_REGISTER_ULONG( 0x3B0 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3B0); \
     WRITE_REGISTER_ULONG( 0x3B0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3B0); \
     WRITE_REGISTER_ULONG( 0x3B0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_5() \
     READ_REGISTER_ULONG(0x3B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz5
//
// Return the value of register OTG_HS_DOEPTSIZ_5
//
// Notes : Register OTG_HS device endpoint-5 transfer size register (OTG_HS_DOEPTSIZ5) at the offset 0x3B0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_5_REG 0x3B0

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x3B0) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3B0); \
     WRITE_REGISTER_ULONG(0x3B0, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz5
//
// Return the value of register OTG_HS_DOEPTSIZ_5
//
// Notes : Register OTG_HS device endpoint-5 transfer size register (OTG_HS_DOEPTSIZ5) at the offset 0x3B0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x3B0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3B0); \
     WRITE_REGISTER_ULONG(0x3B0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz5
//
// Return the value of register OTG_HS_DOEPTSIZ_5
//
// Notes : Register OTG_HS device endpoint-5 transfer size register (OTG_HS_DOEPTSIZ5) at the offset 0x3B0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x3B0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3B0); \
     WRITE_REGISTER_ULONG(0x3B0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL6
//
// Notes : Register OtgHsDoepctl6 at offset 0x3C0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_6_REG 0x3C0

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x3C0) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x3C0) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x3C0) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x3C0) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x3C0) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x3C0) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x3C0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x3C0) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x3C0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x3C0) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x3C0) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG( 0x3C0 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x3C0) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl6
//
// Return the value of register OTG_HS_DOEPCTL_6
//
// Notes : Register OTG device endpoint-6 control register (OTG_HS_DOEPCTL6) at the offset 0x3C0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x3C0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C0); \
     WRITE_REGISTER_ULONG(0x3C0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT6
//
// Notes : Register OtgHsDoepint6 at offset 0x3C8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_6( y) \
     WRITE_REGISTER_ULONG( 0x3C8 , y)

#define SET_BITS_OTG_HS_DOEPINT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_6() \
     READ_REGISTER_ULONG(0x3C8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT_6
//
// Notes : Register OTG_HS device endpoint-6 interrupt register (OTG_HS_DOEPINT6) at the offset 0x3C8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_6_REG 0x3C8

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x3C8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT_6
//
// Notes : Register OTG_HS device endpoint-6 interrupt register (OTG_HS_DOEPINT6) at the offset 0x3C8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x3C8) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT_6
//
// Notes : Register OTG_HS device endpoint-6 interrupt register (OTG_HS_DOEPINT6) at the offset 0x3C8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x3C8) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT_6
//
// Notes : Register OTG_HS device endpoint-6 interrupt register (OTG_HS_DOEPINT6) at the offset 0x3C8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x3C8) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT_6
//
// Notes : Register OTG_HS device endpoint-6 interrupt register (OTG_HS_DOEPINT6) at the offset 0x3C8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x3C8) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint6
//
// Return the value of register OTG_HS_DOEPINT_6
//
// Notes : Register OTG_HS device endpoint-6 interrupt register (OTG_HS_DOEPINT6) at the offset 0x3C8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG( 0x3C8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C8); \
     WRITE_REGISTER_ULONG(0x3C8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x3C8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz6
//
// Return the value of register OTG_HS_DOEPTSIZ6
//
// Notes : Register OtgHsDoeptsiz6 at offset 0x3D0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_6( y) \
     WRITE_REGISTER_ULONG( 0x3D0 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3D0); \
     WRITE_REGISTER_ULONG( 0x3D0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3D0); \
     WRITE_REGISTER_ULONG( 0x3D0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_6() \
     READ_REGISTER_ULONG(0x3D0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz6
//
// Return the value of register OTG_HS_DOEPTSIZ_6
//
// Notes : Register OTG_HS device endpoint-6 transfer size register (OTG_HS_DOEPTSIZ6) at the offset 0x3D0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_6_REG 0x3D0

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x3D0) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3D0); \
     WRITE_REGISTER_ULONG(0x3D0, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz6
//
// Return the value of register OTG_HS_DOEPTSIZ_6
//
// Notes : Register OTG_HS device endpoint-6 transfer size register (OTG_HS_DOEPTSIZ6) at the offset 0x3D0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x3D0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3D0); \
     WRITE_REGISTER_ULONG(0x3D0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz6
//
// Return the value of register OTG_HS_DOEPTSIZ_6
//
// Notes : Register OTG_HS device endpoint-6 transfer size register (OTG_HS_DOEPTSIZ6) at the offset 0x3D0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x3D0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3D0); \
     WRITE_REGISTER_ULONG(0x3D0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL7
//
// Notes : Register OtgHsDoepctl7 at offset 0x3E0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_HS_DOEPCTL_7_REG 0x3E0

#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x3E0) & EPENA_MASK)  >> EPENA_START_BIT)

#define WHEN_EPENA_HIGH() \
     if ( READ_EPENA() )


#define UNLESS_EPENA_HIGH() \
     if (! READ_EPENA() )


#define WAIT_EPENA_LOW() \
    while ( READ_EPENA() );


#define WAIT_EPENA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPENA() && (--___t___ > 0)); }


#define WAIT_EPENA_HIGH() \
    while (! READ_EPENA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x3E0) & EPDIS_MASK)  >> EPDIS_START_BIT)

#define WHEN_EPDIS_HIGH() \
     if ( READ_EPDIS() )


#define UNLESS_EPDIS_HIGH() \
     if (! READ_EPDIS() )


#define WAIT_EPDIS_LOW() \
    while ( READ_EPDIS() );


#define WAIT_EPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDIS() && (--___t___ > 0)); }


#define WAIT_EPDIS_HIGH() \
    while (! READ_EPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set odd frame 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x3E0) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

#define WHEN_SODDFRM_HIGH() \
     if ( READ_SODDFRM() )


#define UNLESS_SODDFRM_HIGH() \
     if (! READ_SODDFRM() )


#define WAIT_SODDFRM_LOW() \
    while ( READ_SODDFRM() );


#define WAIT_SODDFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM() && (--___t___ > 0)); }


#define WAIT_SODDFRM_HIGH() \
    while (! READ_SODDFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set DATA0 PID/Set even frame 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x3E0) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

#define WHEN_SD0PID_SEVNFRM_HIGH() \
     if ( READ_SD0PID_SEVNFRM() )


#define UNLESS_SD0PID_SEVNFRM_HIGH() \
     if (! READ_SD0PID_SEVNFRM() )


#define WAIT_SD0PID_SEVNFRM_LOW() \
    while ( READ_SD0PID_SEVNFRM() );


#define WAIT_SD0PID_SEVNFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SD0PID_SEVNFRM() && (--___t___ > 0)); }


#define WAIT_SD0PID_SEVNFRM_HIGH() \
    while (! READ_SD0PID_SEVNFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x3E0) & SNAK_MASK)  >> SNAK_START_BIT)

#define WHEN_SNAK_HIGH() \
     if ( READ_SNAK() )


#define UNLESS_SNAK_HIGH() \
     if (! READ_SNAK() )


#define WAIT_SNAK_LOW() \
    while ( READ_SNAK() );


#define WAIT_SNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNAK() && (--___t___ > 0)); }


#define WAIT_SNAK_HIGH() \
    while (! READ_SNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x3E0) & CNAK_MASK)  >> CNAK_START_BIT)

#define WHEN_CNAK_HIGH() \
     if ( READ_CNAK() )


#define UNLESS_CNAK_HIGH() \
     if (! READ_CNAK() )


#define WAIT_CNAK_LOW() \
    while ( READ_CNAK() );


#define WAIT_CNAK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CNAK() && (--___t___ > 0)); }


#define WAIT_CNAK_HIGH() \
    while (! READ_CNAK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x3E0) & STALL_MASK)  >> STALL_START_BIT)

#define WHEN_STALL_HIGH() \
     if ( READ_STALL() )


#define UNLESS_STALL_HIGH() \
     if (! READ_STALL() )


#define WAIT_STALL_LOW() \
    while ( READ_STALL() );


#define WAIT_STALL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STALL() && (--___t___ > 0)); }


#define WAIT_STALL_HIGH() \
    while (! READ_STALL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Snoop mode 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x3E0) & SNPM_MASK)  >> SNPM_START_BIT)

#define WHEN_SNPM_HIGH() \
     if ( READ_SNPM() )


#define UNLESS_SNPM_HIGH() \
     if (! READ_SNPM() )


#define WAIT_SNPM_LOW() \
    while ( READ_SNPM() );


#define WAIT_SNPM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SNPM() && (--___t___ > 0)); }


#define WAIT_SNPM_HIGH() \
    while (! READ_SNPM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x3E0) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x3E0) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

#define WHEN_NAKSTS_HIGH() \
     if ( READ_NAKSTS() )


#define UNLESS_NAKSTS_HIGH() \
     if (! READ_NAKSTS() )


#define WAIT_NAKSTS_LOW() \
    while ( READ_NAKSTS() );


#define WAIT_NAKSTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NAKSTS() && (--___t___ > 0)); }


#define WAIT_NAKSTS_HIGH() \
    while (! READ_NAKSTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Even odd frame/Endpoint data PID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x3E0) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

#define WHEN_EONUM_DPID_HIGH() \
     if ( READ_EONUM_DPID() )


#define UNLESS_EONUM_DPID_HIGH() \
     if (! READ_EONUM_DPID() )


#define WAIT_EONUM_DPID_LOW() \
    while ( READ_EONUM_DPID() );


#define WAIT_EONUM_DPID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EONUM_DPID() && (--___t___ > 0)); }


#define WAIT_EONUM_DPID_HIGH() \
    while (! READ_EONUM_DPID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG( 0x3E0 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x3E0) & USBAEP_MASK)  >> USBAEP_START_BIT)

#define WHEN_USBAEP_HIGH() \
     if ( READ_USBAEP() )


#define UNLESS_USBAEP_HIGH() \
     if (! READ_USBAEP() )


#define WAIT_USBAEP_LOW() \
    while ( READ_USBAEP() );


#define WAIT_USBAEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_USBAEP() && (--___t___ > 0)); }


#define WAIT_USBAEP_HIGH() \
    while (! READ_USBAEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepctl7
//
// Return the value of register OTG_HS_DOEPCTL_7
//
// Notes : Register OTG device endpoint-7 control register (OTG_HS_DOEPCTL7) at the offset 0x3E0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11



#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x3E0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E0); \
     WRITE_REGISTER_ULONG(0x3E0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT7
//
// Notes : Register OtgHsDoepint7 at offset 0x3E8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPINT_7( y) \
     WRITE_REGISTER_ULONG( 0x3E8 , y)

#define SET_BITS_OTG_HS_DOEPINT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPINT_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPINT_7() \
     READ_REGISTER_ULONG(0x3E8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT_7
//
// Notes : Register OTG_HS device endpoint-7 interrupt register (OTG_HS_DOEPINT7) at the offset 0x3E8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NYET interrupt 
    // 
#define NYET_MASK 0x4000U
#define NYET_OFFSET 14
#define NYET_START_BIT 14
#define NYET_WIDTH 1


#define OTG_HS_DOEPINT_7_REG 0x3E8

#define WRITE_NYET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, (OldValue & ~ NYET_MASK) | ((val << NYET_START_BIT) & NYET_MASK )); \
   } 

#define ENABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  NYET_MASK ); \
   }

#define DISABLE_NYET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, val & ~NYET_MASK ); \
   } 

#define READ_NYET() \
   ((READ_REGISTER_ULONG(0x3E8) & NYET_MASK)  >> NYET_START_BIT)

#define WHEN_NYET_HIGH() \
     if ( READ_NYET() )


#define UNLESS_NYET_HIGH() \
     if (! READ_NYET() )


#define WAIT_NYET_LOW() \
    while ( READ_NYET() );


#define WAIT_NYET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NYET() && (--___t___ > 0)); }


#define WAIT_NYET_HIGH() \
    while (! READ_NYET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT_7
//
// Notes : Register OTG_HS device endpoint-7 interrupt register (OTG_HS_DOEPINT7) at the offset 0x3E8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Back-to-back SETUP packets received 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x3E8) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

#define WHEN_B2BSTUP_HIGH() \
     if ( READ_B2BSTUP() )


#define UNLESS_B2BSTUP_HIGH() \
     if (! READ_B2BSTUP() )


#define WAIT_B2BSTUP_LOW() \
    while ( READ_B2BSTUP() );


#define WAIT_B2BSTUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_B2BSTUP() && (--___t___ > 0)); }


#define WAIT_B2BSTUP_HIGH() \
    while (! READ_B2BSTUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT_7
//
// Notes : Register OTG_HS device endpoint-7 interrupt register (OTG_HS_DOEPINT7) at the offset 0x3E8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x3E8) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

#define WHEN_OTEPDIS_HIGH() \
     if ( READ_OTEPDIS() )


#define UNLESS_OTEPDIS_HIGH() \
     if (! READ_OTEPDIS() )


#define WAIT_OTEPDIS_LOW() \
    while ( READ_OTEPDIS() );


#define WAIT_OTEPDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTEPDIS() && (--___t___ > 0)); }


#define WAIT_OTEPDIS_HIGH() \
    while (! READ_OTEPDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT_7
//
// Notes : Register OTG_HS device endpoint-7 interrupt register (OTG_HS_DOEPINT7) at the offset 0x3E8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x3E8) & STUP_MASK)  >> STUP_START_BIT)

#define WHEN_STUP_HIGH() \
     if ( READ_STUP() )


#define UNLESS_STUP_HIGH() \
     if (! READ_STUP() )


#define WAIT_STUP_LOW() \
    while ( READ_STUP() );


#define WAIT_STUP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STUP() && (--___t___ > 0)); }


#define WAIT_STUP_HIGH() \
    while (! READ_STUP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT_7
//
// Notes : Register OTG_HS device endpoint-7 interrupt register (OTG_HS_DOEPINT7) at the offset 0x3E8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x3E8) & EPDISD_MASK)  >> EPDISD_START_BIT)

#define WHEN_EPDISD_HIGH() \
     if ( READ_EPDISD() )


#define UNLESS_EPDISD_HIGH() \
     if (! READ_EPDISD() )


#define WAIT_EPDISD_LOW() \
    while ( READ_EPDISD() );


#define WAIT_EPDISD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EPDISD() && (--___t___ > 0)); }


#define WAIT_EPDISD_HIGH() \
    while (! READ_EPDISD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoepint7
//
// Return the value of register OTG_HS_DOEPINT_7
//
// Notes : Register OTG_HS device endpoint-7 interrupt register (OTG_HS_DOEPINT7) at the offset 0x3E8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1



#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG( 0x3E8 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3E8); \
     WRITE_REGISTER_ULONG(0x3E8, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x3E8) & XFRC_MASK)  >> XFRC_START_BIT)

#define WHEN_XFRC_HIGH() \
     if ( READ_XFRC() )


#define UNLESS_XFRC_HIGH() \
     if (! READ_XFRC() )


#define WAIT_XFRC_LOW() \
    while ( READ_XFRC() );


#define WAIT_XFRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_XFRC() && (--___t___ > 0)); }


#define WAIT_XFRC_HIGH() \
    while (! READ_XFRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz7
//
// Return the value of register OTG_HS_DOEPTSIZ7
//
// Notes : Register OtgHsDoeptsiz7 at offset 0x3F0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_HS_DOEPTSIZ_7( y) \
     WRITE_REGISTER_ULONG( 0x3F0 , y)

#define SET_BITS_OTG_HS_DOEPTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3F0); \
     WRITE_REGISTER_ULONG( 0x3F0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_HS_DOEPTSIZ_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3F0); \
     WRITE_REGISTER_ULONG( 0x3F0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_HS_DOEPTSIZ_7() \
     READ_REGISTER_ULONG(0x3F0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz7
//
// Return the value of register OTG_HS_DOEPTSIZ_7
//
// Notes : Register OTG_HS device endpoint-7 transfer size register (OTG_HS_DOEPTSIZ7) at the offset 0x3F0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2


#define OTG_HS_DOEPTSIZ_7_REG 0x3F0

#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x3F0) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3F0); \
     WRITE_REGISTER_ULONG(0x3F0, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz7
//
// Return the value of register OTG_HS_DOEPTSIZ_7
//
// Notes : Register OTG_HS device endpoint-7 transfer size register (OTG_HS_DOEPTSIZ7) at the offset 0x3F0, Bits 19:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x1FF80000U
#define PKTCNT_OFFSET 28
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 10



#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x3F0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3F0); \
     WRITE_REGISTER_ULONG(0x3F0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgHsDoeptsiz7
//
// Return the value of register OTG_HS_DOEPTSIZ_7
//
// Notes : Register OTG_HS device endpoint-7 transfer size register (OTG_HS_DOEPTSIZ7) at the offset 0x3F0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19



#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x3F0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3F0); \
     WRITE_REGISTER_ULONG(0x3F0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

