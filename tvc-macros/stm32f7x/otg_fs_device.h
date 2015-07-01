/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_fs_device.h
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
 
#define OTG_FS_DEVICE 0x50000800
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDcfg
//
// Return the value of register OTG_FS_DCFG
//
// Notes : Register OtgFsDcfg at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DCFG( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_OTG_FS_DCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DCFG() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDcfg
//
// Return the value of register OTG_FS_DCFG
//
// Notes : Register OTG_FS device configuration register (OTG_FS_DCFG) (OTG_FS_DCFG) at the offset 0x0, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic frame interval 
    // 
#define PFIVL_MASK 0x1800U
#define PFIVL_OFFSET 12
#define PFIVL_START_BIT 11
#define PFIVL_WIDTH 2


#define OTG_FS_DCFG_REG 0x0

typedef enum pfivl {
    PFIVL_0,
    PFIVL_1
} PFIVL_T ;
#define READ_PFIVL() \
   ((READ_REGISTER_ULONG(0x0) & PFIVL_MASK)  >> PFIVL_START_BIT)

#define WRITE_PFIVL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PFIVL_MASK) | ((val << PFIVL_START_BIT) & PFIVL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDcfg
//
// Return the value of register OTG_FS_DCFG
//
// Notes : Register OTG_FS device configuration register (OTG_FS_DCFG) (OTG_FS_DCFG) at the offset 0x0, Bits 4:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device address 
    // 
#define DAD_MASK 0x7F0U
#define DAD_OFFSET 10
#define DAD_START_BIT 4
#define DAD_WIDTH 7



typedef enum dad {
    DAD_0,
    DAD_1
} DAD_T ;
#define READ_DAD() \
   ((READ_REGISTER_ULONG(0x0) & DAD_MASK)  >> DAD_START_BIT)

#define WRITE_DAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DAD_MASK) | ((val << DAD_START_BIT) & DAD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDcfg
//
// Return the value of register OTG_FS_DCFG
//
// Notes : Register OTG_FS device configuration register (OTG_FS_DCFG) (OTG_FS_DCFG) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-zero-length status OUT handshake 
    // 
#define NZLSOHSK_MASK 0x4U
#define NZLSOHSK_OFFSET 2
#define NZLSOHSK_START_BIT 2
#define NZLSOHSK_WIDTH 1



typedef enum nzlsohsk {
    NZLSOHSK_0,
    NZLSOHSK_1
} NZLSOHSK_T ;
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
// Function : OtgFsDcfg
//
// Return the value of register OTG_FS_DCFG
//
// Notes : Register OTG_FS device configuration register (OTG_FS_DCFG) (OTG_FS_DCFG) at the offset 0x0, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device speed 
    // 
#define DSPD_MASK 0x3U
#define DSPD_OFFSET 1
#define DSPD_START_BIT 0
#define DSPD_WIDTH 2



typedef enum dspd {
    DSPD_0,
    DSPD_1
} DSPD_T ;
#define READ_DSPD() \
   ((READ_REGISTER_ULONG(0x0) & DSPD_MASK)  >> DSPD_START_BIT)

#define WRITE_DSPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DSPD_MASK) | ((val << DSPD_START_BIT) & DSPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OtgFsDctl at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power-on programming done 
    // 
#define POPRGDNE_MASK 0x800U
#define POPRGDNE_OFFSET 11
#define POPRGDNE_START_BIT 11
#define POPRGDNE_WIDTH 1


#define OTG_FS_DCTL_REG 0x4

typedef enum poprgdne {
    POPRGDNE_0,
    POPRGDNE_1
} POPRGDNE_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear global OUT NAK 
    // 
#define CGONAK_MASK 0x400U
#define CGONAK_OFFSET 10
#define CGONAK_START_BIT 10
#define CGONAK_WIDTH 1



typedef enum cgonak {
    CGONAK_0,
    CGONAK_1
} CGONAK_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set global OUT NAK 
    // 
#define SGONAK_MASK 0x200U
#define SGONAK_OFFSET 9
#define SGONAK_START_BIT 9
#define SGONAK_WIDTH 1



typedef enum sgonak {
    SGONAK_0,
    SGONAK_1
} SGONAK_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear global IN NAK 
    // 
#define CGINAK_MASK 0x100U
#define CGINAK_OFFSET 8
#define CGINAK_START_BIT 8
#define CGINAK_WIDTH 1



typedef enum cginak {
    CGINAK_0,
    CGINAK_1
} CGINAK_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set global IN NAK 
    // 
#define SGINAK_MASK 0x80U
#define SGINAK_OFFSET 7
#define SGINAK_START_BIT 7
#define SGINAK_WIDTH 1



typedef enum sginak {
    SGINAK_0,
    SGINAK_1
} SGINAK_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Test control 
    // 
#define TCTL_MASK 0x70U
#define TCTL_OFFSET 6
#define TCTL_START_BIT 4
#define TCTL_WIDTH 3



typedef enum tctl {
    TCTL_0,
    TCTL_1
} TCTL_T ;
#define READ_TCTL() \
   ((READ_REGISTER_ULONG(0x4) & TCTL_MASK)  >> TCTL_START_BIT)

#define WRITE_TCTL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TCTL_MASK) | ((val << TCTL_START_BIT) & TCTL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global OUT NAK status 
    // 
#define GONSTS_MASK 0x8U
#define GONSTS_OFFSET 3
#define GONSTS_START_BIT 3
#define GONSTS_WIDTH 1



typedef enum gonsts {
    GONSTS_0,
    GONSTS_1
} GONSTS_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global IN NAK status 
    // 
#define GINSTS_MASK 0x4U
#define GINSTS_OFFSET 2
#define GINSTS_START_BIT 2
#define GINSTS_WIDTH 1



typedef enum ginsts {
    GINSTS_0,
    GINSTS_1
} GINSTS_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Soft disconnect 
    // 
#define SDIS_MASK 0x2U
#define SDIS_OFFSET 1
#define SDIS_START_BIT 1
#define SDIS_WIDTH 1



typedef enum sdis {
    SDIS_0,
    SDIS_1
} SDIS_T ;
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
// Function : OtgFsDctl
//
// Return the value of register OTG_FS_DCTL
//
// Notes : Register OTG_FS device control register (OTG_FS_DCTL) (OTG_FS_DCTL) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Remote wakeup signaling 
    // 
#define RWUSIG_MASK 0x1U
#define RWUSIG_OFFSET 0
#define RWUSIG_START_BIT 0
#define RWUSIG_WIDTH 1



typedef enum rwusig {
    RWUSIG_0,
    RWUSIG_1
} RWUSIG_T ;
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
// Function : OtgFsDsts
//
// Return the value of register OTG_FS_DSTS
//
// Notes : Register OtgFsDsts at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_DSTS() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDsts
//
// Return the value of register OTG_FS_DSTS
//
// Notes : Register OTG_FS device status register (OTG_FS_DSTS) (OTG_FS_DSTS) at the offset 0x8, Bits 8:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number of the received SOF 
    // 
#define FNSOF_MASK 0x3FFF00U
#define FNSOF_OFFSET 21
#define FNSOF_START_BIT 8
#define FNSOF_WIDTH 14


#define OTG_FS_DSTS_REG 0x8

typedef enum fnsof {
    FNSOF_0,
    FNSOF_1
} FNSOF_T ;
#define READ_FNSOF() \
   ((READ_REGISTER_ULONG(0x8) & FNSOF_MASK)  >> FNSOF_START_BIT)

#define WRITE_FNSOF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FNSOF_MASK) | ((val << FNSOF_START_BIT) & FNSOF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDsts
//
// Return the value of register OTG_FS_DSTS
//
// Notes : Register OTG_FS device status register (OTG_FS_DSTS) (OTG_FS_DSTS) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Erratic error 
    // 
#define EERR_MASK 0x8U
#define EERR_OFFSET 3
#define EERR_START_BIT 3
#define EERR_WIDTH 1



typedef enum eerr {
    EERR_0,
    EERR_1
} EERR_T ;
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
// Function : OtgFsDsts
//
// Return the value of register OTG_FS_DSTS
//
// Notes : Register OTG_FS device status register (OTG_FS_DSTS) (OTG_FS_DSTS) at the offset 0x8, Bits 1:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enumerated speed 
    // 
#define ENUMSPD_MASK 0x6U
#define ENUMSPD_OFFSET 2
#define ENUMSPD_START_BIT 1
#define ENUMSPD_WIDTH 2



typedef enum enumspd {
    ENUMSPD_0,
    ENUMSPD_1
} ENUMSPD_T ;
#define READ_ENUMSPD() \
   ((READ_REGISTER_ULONG(0x8) & ENUMSPD_MASK)  >> ENUMSPD_START_BIT)

#define WRITE_ENUMSPD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ENUMSPD_MASK) | ((val << ENUMSPD_START_BIT) & ENUMSPD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDsts
//
// Return the value of register OTG_FS_DSTS
//
// Notes : Register OTG_FS device status register (OTG_FS_DSTS) (OTG_FS_DSTS) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Suspend status 
    // 
#define SUSPSTS_MASK 0x1U
#define SUSPSTS_OFFSET 0
#define SUSPSTS_START_BIT 0
#define SUSPSTS_WIDTH 1



typedef enum suspsts {
    SUSPSTS_0,
    SUSPSTS_1
} SUSPSTS_T ;
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
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OtgFsDiepmsk at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPMSK( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_OTG_FS_DIEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPMSK() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) (OTG_FS_DIEPMSK) at the offset 0x10, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint NAK effective mask 
    // 
#define INEPNEM_MASK 0x40U
#define INEPNEM_OFFSET 6
#define INEPNEM_START_BIT 6
#define INEPNEM_WIDTH 1


#define OTG_FS_DIEPMSK_REG 0x10

typedef enum inepnem {
    INEPNEM_0,
    INEPNEM_1
} INEPNEM_T ;
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
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) (OTG_FS_DIEPMSK) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received with EP mismatch mask 
    // 
#define INEPNMM_MASK 0x20U
#define INEPNMM_OFFSET 5
#define INEPNMM_START_BIT 5
#define INEPNMM_WIDTH 1



typedef enum inepnmm {
    INEPNMM_0,
    INEPNMM_1
} INEPNMM_T ;
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
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) (OTG_FS_DIEPMSK) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN token received when TxFIFO empty mask 
    // 
#define ITTXFEMSK_MASK 0x10U
#define ITTXFEMSK_OFFSET 4
#define ITTXFEMSK_START_BIT 4
#define ITTXFEMSK_WIDTH 1



typedef enum ittxfemsk {
    ITTXFEMSK_0,
    ITTXFEMSK_1
} ITTXFEMSK_T ;
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
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) (OTG_FS_DIEPMSK) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timeout condition mask (Non-isochronous endpoints) 
    // 
#define TOM_MASK 0x8U
#define TOM_OFFSET 3
#define TOM_START_BIT 3
#define TOM_WIDTH 1



typedef enum tom {
    TOM_0,
    TOM_1
} TOM_T ;
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
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) (OTG_FS_DIEPMSK) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disabled interrupt mask 
    // 
#define EPDM_MASK 0x2U
#define EPDM_OFFSET 1
#define EPDM_START_BIT 1
#define EPDM_WIDTH 1



typedef enum epdm {
    EPDM_0,
    EPDM_1
} EPDM_T ;
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
// Function : OtgFsDiepmsk
//
// Return the value of register OTG_FS_DIEPMSK
//
// Notes : Register OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) (OTG_FS_DIEPMSK) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer completed interrupt mask 
    // 
#define XFRCM_MASK 0x1U
#define XFRCM_OFFSET 0
#define XFRCM_START_BIT 0
#define XFRCM_WIDTH 1



typedef enum xfrcm {
    XFRCM_0,
    XFRCM_1
} XFRCM_T ;
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
// Function : OtgFsDoepmsk
//
// Return the value of register OTG_FS_DOEPMSK
//
// Notes : Register OtgFsDoepmsk at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPMSK( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_OTG_FS_DOEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPMSK() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepmsk
//
// Return the value of register OTG_FS_DOEPMSK
//
// Notes : Register OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) (OTG_FS_DOEPMSK) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT token received when endpoint disabled mask 
    // 
#define OTEPDM_MASK 0x10U
#define OTEPDM_OFFSET 4
#define OTEPDM_START_BIT 4
#define OTEPDM_WIDTH 1


#define OTG_FS_DOEPMSK_REG 0x14

typedef enum otepdm {
    OTEPDM_0,
    OTEPDM_1
} OTEPDM_T ;
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
// Function : OtgFsDoepmsk
//
// Return the value of register OTG_FS_DOEPMSK
//
// Notes : Register OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) (OTG_FS_DOEPMSK) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP phase done mask 
    // 
#define STUPM_MASK 0x8U
#define STUPM_OFFSET 3
#define STUPM_START_BIT 3
#define STUPM_WIDTH 1



typedef enum stupm {
    STUPM_0,
    STUPM_1
} STUPM_T ;
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
// Function : OtgFsDoepmsk
//
// Return the value of register OTG_FS_DOEPMSK
//
// Notes : Register OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) (OTG_FS_DOEPMSK) at the offset 0x14, Bits 1:1

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
// Function : OtgFsDoepmsk
//
// Return the value of register OTG_FS_DOEPMSK
//
// Notes : Register OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) (OTG_FS_DOEPMSK) at the offset 0x14, Bits 0:0

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
// Function : OtgFsDaint
//
// Return the value of register OTG_FS_DAINT
//
// Notes : Register OtgFsDaint at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_DAINT() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDaint
//
// Return the value of register OTG_FS_DAINT
//
// Notes : Register OTG_FS device all endpoints interrupt register (OTG_FS_DAINT) (OTG_FS_DAINT) at the offset 0x18, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoint interrupt bits 
    // 
#define OEPINT_MASK 0xFFFF0000U
#define OEPINT_OFFSET 31
#define OEPINT_START_BIT 16
#define OEPINT_WIDTH 16


#define OTG_FS_DAINT_REG 0x18

#define READ_OEPINT() \
   ((READ_REGISTER_ULONG(0x18) & OEPINT_MASK)  >> OEPINT_START_BIT)

#define WRITE_OEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ OEPINT_MASK) | ((val << OEPINT_START_BIT) & OEPINT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDaint
//
// Return the value of register OTG_FS_DAINT
//
// Notes : Register OTG_FS device all endpoints interrupt register (OTG_FS_DAINT) (OTG_FS_DAINT) at the offset 0x18, Bits 0:15

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
// Function : OtgFsDaintmsk
//
// Return the value of register OTG_FS_DAINTMSK
//
// Notes : Register OtgFsDaintmsk at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DAINTMSK( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_OTG_FS_DAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DAINTMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DAINTMSK() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDaintmsk
//
// Return the value of register OTG_FS_DAINTMSK
//
// Notes : Register OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK) (OTG_FS_DAINTMSK) at the offset 0x1C, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoint interrupt bits 
    // 
#define OEPINT_MASK 0xFFFF0000U
#define OEPINT_OFFSET 31
#define OEPINT_START_BIT 16
#define OEPINT_WIDTH 16


#define OTG_FS_DAINTMSK_REG 0x1C

#define READ_OEPINT() \
   ((READ_REGISTER_ULONG(0x1C) & OEPINT_MASK)  >> OEPINT_START_BIT)

#define WRITE_OEPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ OEPINT_MASK) | ((val << OEPINT_START_BIT) & OEPINT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDaintmsk
//
// Return the value of register OTG_FS_DAINTMSK
//
// Notes : Register OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK) (OTG_FS_DAINTMSK) at the offset 0x1C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN EP interrupt mask bits 
    // 
#define IEPM_MASK 0xFFFFU
#define IEPM_OFFSET 15
#define IEPM_START_BIT 0
#define IEPM_WIDTH 16



typedef enum iepm {
    IEPM_0,
    IEPM_1
} IEPM_T ;
#define READ_IEPM() \
   ((READ_REGISTER_ULONG(0x1C) & IEPM_MASK)  >> IEPM_START_BIT)

#define WRITE_IEPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ IEPM_MASK) | ((val << IEPM_START_BIT) & IEPM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDvbusdis
//
// Return the value of register OTG_FS_DVBUSDIS
//
// Notes : Register OtgFsDvbusdis at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DVBUSDIS( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_OTG_FS_DVBUSDIS(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DVBUSDIS(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DVBUSDIS() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDvbusdis
//
// Return the value of register OTG_FS_DVBUSDIS
//
// Notes : Register OTG_FS device VBUS discharge time register (OTG_FS_DVBUSDIS) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device VBUS discharge time 
    // 
#define VBUSDT_MASK 0xFFFFU
#define VBUSDT_OFFSET 15
#define VBUSDT_START_BIT 0
#define VBUSDT_WIDTH 16


#define OTG_FS_DVBUSDIS_REG 0x28

typedef enum vbusdt {
    VBUSDT_0,
    VBUSDT_1
} VBUSDT_T ;
#define READ_VBUSDT() \
   ((READ_REGISTER_ULONG(0x28) & VBUSDT_MASK)  >> VBUSDT_START_BIT)

#define WRITE_VBUSDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ VBUSDT_MASK) | ((val << VBUSDT_START_BIT) & VBUSDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDvbuspulse
//
// Return the value of register OTG_FS_DVBUSPULSE
//
// Notes : Register OtgFsDvbuspulse at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DVBUSPULSE( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_OTG_FS_DVBUSPULSE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DVBUSPULSE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DVBUSPULSE() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDvbuspulse
//
// Return the value of register OTG_FS_DVBUSPULSE
//
// Notes : Register OTG_FS device VBUS pulsing time register (OTG_FS_DVBUSPULSE) at the offset 0x2C, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device VBUS pulsing time 
    // 
#define DVBUSP_MASK 0xFFFU
#define DVBUSP_OFFSET 11
#define DVBUSP_START_BIT 0
#define DVBUSP_WIDTH 12


#define OTG_FS_DVBUSPULSE_REG 0x2C

typedef enum dvbusp {
    DVBUSP_0,
    DVBUSP_1
} DVBUSP_T ;
#define READ_DVBUSP() \
   ((READ_REGISTER_ULONG(0x2C) & DVBUSP_MASK)  >> DVBUSP_START_BIT)

#define WRITE_DVBUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ DVBUSP_MASK) | ((val << DVBUSP_START_BIT) & DVBUSP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepempmsk
//
// Return the value of register OTG_FS_DIEPEMPMSK
//
// Notes : Register OtgFsDiepempmsk at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPEMPMSK( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_OTG_FS_DIEPEMPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPEMPMSK(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPEMPMSK() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepempmsk
//
// Return the value of register OTG_FS_DIEPEMPMSK
//
// Notes : Register OTG_FS device IN endpoint FIFO empty interrupt mask register (OTG_FS_DIEPEMPMSK) at the offset 0x34, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN EP Tx FIFO empty interrupt mask bits 
    // 
#define INEPTXFEM_MASK 0xFFFFU
#define INEPTXFEM_OFFSET 15
#define INEPTXFEM_START_BIT 0
#define INEPTXFEM_WIDTH 16


#define OTG_FS_DIEPEMPMSK_REG 0x34

typedef enum ineptxfem {
    INEPTXFEM_0,
    INEPTXFEM_1
} INEPTXFEM_T ;
#define READ_INEPTXFEM() \
   ((READ_REGISTER_ULONG(0x34) & INEPTXFEM_MASK)  >> INEPTXFEM_START_BIT)

#define WRITE_INEPTXFEM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ INEPTXFEM_MASK) | ((val << INEPTXFEM_START_BIT) & INEPTXFEM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL0
//
// Notes : Register OtgFsDiepctl0 at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint enable 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1


#define OTG_FS_DIEPCTL_0_REG 0x100

typedef enum epena {
    EPENA_0,
    EPENA_1
} EPENA_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint disable 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



typedef enum epdis {
    EPDIS_0,
    EPDIS_1
} EPDIS_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Set NAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



typedef enum snak {
    SNAK_0,
    SNAK_1
} SNAK_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear NAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



typedef enum cnak {
    CNAK_0,
    CNAK_1
} CNAK_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 22:25

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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STALL handshake 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



typedef enum stall {
    STALL_0,
    STALL_1
} STALL_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint type 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



typedef enum eptyp {
    EPTYP_0,
    EPTYP_1
} EPTYP_T ;
#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x100) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAK status 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



typedef enum naksts {
    NAKSTS_0,
    NAKSTS_1
} NAKSTS_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB active endpoint 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



typedef enum usbaep {
    USBAEP_0,
    USBAEP_1
} USBAEP_T ;
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
// Function : OtgFsDiepctl0
//
// Return the value of register OTG_FS_DIEPCTL_0
//
// Notes : Register OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) (OTG_FS_DIEPCTL0) at the offset 0x100, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Maximum packet size 
    // 
#define MPSIZ_MASK 0x3U
#define MPSIZ_OFFSET 1
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 2



typedef enum mpsiz {
    MPSIZ_0,
    MPSIZ_1
} MPSIZ_T ;
#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x100) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT0
//
// Notes : Register OtgFsDiepint0 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT_0
//
// Notes : Register device endpoint-x interrupt register (OTG_FS_DIEPINT0) at the offset 0x108, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DIEPINT_0_REG 0x108

typedef enum xfrc {
    XFRC_0,
    XFRC_1
} XFRC_T ;
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
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT_0
//
// Notes : Register device endpoint-x interrupt register (OTG_FS_DIEPINT0) at the offset 0x108, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



typedef enum epdisd {
    EPDISD_0,
    EPDISD_1
} EPDISD_T ;
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
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT_0
//
// Notes : Register device endpoint-x interrupt register (OTG_FS_DIEPINT0) at the offset 0x108, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TOC 
    // 
#define TOC_MASK 0x8U
#define TOC_OFFSET 3
#define TOC_START_BIT 3
#define TOC_WIDTH 1



typedef enum toc {
    TOC_0,
    TOC_1
} TOC_T ;
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
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT_0
//
// Notes : Register device endpoint-x interrupt register (OTG_FS_DIEPINT0) at the offset 0x108, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ITTXFE 
    // 
#define ITTXFE_MASK 0x10U
#define ITTXFE_OFFSET 4
#define ITTXFE_START_BIT 4
#define ITTXFE_WIDTH 1



typedef enum ittxfe {
    ITTXFE_0,
    ITTXFE_1
} ITTXFE_T ;
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
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT_0
//
// Notes : Register device endpoint-x interrupt register (OTG_FS_DIEPINT0) at the offset 0x108, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // INEPNE 
    // 
#define INEPNE_MASK 0x40U
#define INEPNE_OFFSET 6
#define INEPNE_START_BIT 6
#define INEPNE_WIDTH 1



typedef enum inepne {
    INEPNE_0,
    INEPNE_1
} INEPNE_T ;
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
// Function : OtgFsDiepint0
//
// Return the value of register OTG_FS_DIEPINT_0
//
// Notes : Register device endpoint-x interrupt register (OTG_FS_DIEPINT0) at the offset 0x108, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFE 
    // 
#define TXFE_MASK 0x80U
#define TXFE_OFFSET 7
#define TXFE_START_BIT 7
#define TXFE_WIDTH 1



typedef enum txfe {
    TXFE_0,
    TXFE_1
} TXFE_T ;
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
// Function : OtgFsDieptsiz0
//
// Return the value of register OTG_FS_DIEPTSIZ0
//
// Notes : Register OtgFsDieptsiz0 at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTSIZ_0( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_OTG_FS_DIEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTSIZ_0() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz0
//
// Return the value of register OTG_FS_DIEPTSIZ_0
//
// Notes : Register device endpoint-0 transfer size register (OTG_FS_DIEPTSIZ0) at the offset 0x110, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FU
#define XFRSIZ_OFFSET 6
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 7


#define OTG_FS_DIEPTSIZ_0_REG 0x110

typedef enum xfrsiz {
    XFRSIZ_0,
    XFRSIZ_1
} XFRSIZ_T ;
#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x110) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz0
//
// Return the value of register OTG_FS_DIEPTSIZ_0
//
// Notes : Register device endpoint-0 transfer size register (OTG_FS_DIEPTSIZ0) at the offset 0x110, Bits 19:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet count 
    // 
#define PKTCNT_MASK 0x180000U
#define PKTCNT_OFFSET 20
#define PKTCNT_START_BIT 19
#define PKTCNT_WIDTH 2



typedef enum pktcnt {
    PKTCNT_0,
    PKTCNT_1
} PKTCNT_T ;
#define READ_PKTCNT() \
   ((READ_REGISTER_ULONG(0x110) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts0
//
// Return the value of register OTG_FS_DTXFSTS0
//
// Notes : Register OtgFsDtxfsts0 at offset 0x118
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_DTXFSTS_0() \
     READ_REGISTER_ULONG(0x118)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts0
//
// Return the value of register OTG_FS_DTXFSTS_0
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO status register (OTG_FS_DTXFSTS0) at the offset 0x118, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space available 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_FS_DTXFSTS_0_REG 0x118

typedef enum ineptfsav {
    INEPTFSAV_0,
    INEPTFSAV_1
} INEPTFSAV_T ;
#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x118) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x118); \
     WRITE_REGISTER_ULONG(0x118, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL1
//
// Notes : Register OtgFsDiepctl1 at offset 0x120
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DIEPCTL_1_REG 0x120

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x120) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



typedef enum eonum_dpid {
    EONUM_DPID_0,
    EONUM_DPID_1
} EONUM_DPID_T ;
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFNUM 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



typedef enum sd0pid_sevnfrm {
    SD_0PID_SEVNFRM_0,
    SD_0PID_SEVNFRM_1
} SD_0PID_SEVNFRM_T ;
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM/SD1PID 
    // 
#define SODDFRM_SD1PID_MASK 0x20000000U
#define SODDFRM_SD1PID_OFFSET 29
#define SODDFRM_SD1PID_START_BIT 29
#define SODDFRM_SD1PID_WIDTH 1



typedef enum soddfrm_sd1pid {
    SODDFRM_SD_1PID_0,
    SODDFRM_SD_1PID_1
} SODDFRM_SD_1PID_T ;
#define WRITE_SODDFRM_SD1PID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x120); \
     WRITE_REGISTER_ULONG(0x120, (OldValue & ~ SODDFRM_SD1PID_MASK) | ((val << SODDFRM_SD1PID_START_BIT) & SODDFRM_SD1PID_MASK )); \
   } 

#define ENABLE_SODDFRM_SD1PID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG( 0x120 , val |  SODDFRM_SD1PID_MASK ); \
   }

#define DISABLE_SODDFRM_SD1PID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x120); \
     WRITE_REGISTER_ULONG(0x120, val & ~SODDFRM_SD1PID_MASK ); \
   } 

#define READ_SODDFRM_SD1PID() \
   ((READ_REGISTER_ULONG(0x120) & SODDFRM_SD1PID_MASK)  >> SODDFRM_SD1PID_START_BIT)

#define WHEN_SODDFRM_SD1PID_HIGH() \
     if ( READ_SODDFRM_SD1PID() )


#define UNLESS_SODDFRM_SD1PID_HIGH() \
     if (! READ_SODDFRM_SD1PID() )


#define WAIT_SODDFRM_SD1PID_LOW() \
    while ( READ_SODDFRM_SD1PID() );


#define WAIT_SODDFRM_SD1PID_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SODDFRM_SD1PID() && (--___t___ > 0)); }


#define WAIT_SODDFRM_SD1PID_HIGH() \
    while (! READ_SODDFRM_SD1PID() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDiepctl1
//
// Return the value of register OTG_FS_DIEPCTL_1
//
// Notes : Register OTG device endpoint-1 control register (OTG_FS_DIEPCTL1) at the offset 0x120, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT1
//
// Notes : Register OtgFsDiepint1 at offset 0x128
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DIEPINT1) at the offset 0x128, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DIEPINT_1_REG 0x128

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
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DIEPINT1) at the offset 0x128, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DIEPINT1) at the offset 0x128, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TOC 
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
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DIEPINT1) at the offset 0x128, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ITTXFE 
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
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DIEPINT1) at the offset 0x128, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // INEPNE 
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
// Function : OtgFsDiepint1
//
// Return the value of register OTG_FS_DIEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DIEPINT1) at the offset 0x128, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFE 
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
// Function : OtgFsDieptsiz1
//
// Return the value of register OTG_FS_DIEPTSIZ1
//
// Notes : Register OtgFsDieptsiz1 at offset 0x130
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTSIZ_1( y) \
     WRITE_REGISTER_ULONG( 0x130 , y)

#define SET_BITS_OTG_FS_DIEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x130); \
     WRITE_REGISTER_ULONG( 0x130 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTSIZ_1() \
     READ_REGISTER_ULONG(0x130)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz1
//
// Return the value of register OTG_FS_DIEPTSIZ_1
//
// Notes : Register device endpoint-1 transfer size register (OTG_FS_DIEPTSIZ1) at the offset 0x130, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DIEPTSIZ_1_REG 0x130

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x130) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz1
//
// Return the value of register OTG_FS_DIEPTSIZ_1
//
// Notes : Register device endpoint-1 transfer size register (OTG_FS_DIEPTSIZ1) at the offset 0x130, Bits 19:28

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
// Function : OtgFsDieptsiz1
//
// Return the value of register OTG_FS_DIEPTSIZ_1
//
// Notes : Register device endpoint-1 transfer size register (OTG_FS_DIEPTSIZ1) at the offset 0x130, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2



typedef enum mcnt {
    MCNT_0,
    MCNT_1
} MCNT_T ;
#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x130) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x130); \
     WRITE_REGISTER_ULONG(0x130, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts1
//
// Return the value of register OTG_FS_DTXFSTS1
//
// Notes : Register OtgFsDtxfsts1 at offset 0x138
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_DTXFSTS_1() \
     READ_REGISTER_ULONG(0x138)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts1
//
// Return the value of register OTG_FS_DTXFSTS_1
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO status register (OTG_FS_DTXFSTS1) at the offset 0x138, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space available 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_FS_DTXFSTS_1_REG 0x138

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x138) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x138); \
     WRITE_REGISTER_ULONG(0x138, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL2
//
// Notes : Register OtgFsDiepctl2 at offset 0x140
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DIEPCTL_2_REG 0x140

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x140) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFNUM 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



typedef enum soddfrm {
    SODDFRM_0,
    SODDFRM_1
} SODDFRM_T ;
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDiepctl2
//
// Return the value of register OTG_FS_DIEPCTL_2
//
// Notes : Register OTG device endpoint-2 control register (OTG_FS_DIEPCTL2) at the offset 0x140, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT2
//
// Notes : Register OtgFsDiepint2 at offset 0x148
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DIEPINT2) at the offset 0x148, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DIEPINT_2_REG 0x148

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
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DIEPINT2) at the offset 0x148, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DIEPINT2) at the offset 0x148, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TOC 
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
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DIEPINT2) at the offset 0x148, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ITTXFE 
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
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DIEPINT2) at the offset 0x148, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // INEPNE 
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
// Function : OtgFsDiepint2
//
// Return the value of register OTG_FS_DIEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DIEPINT2) at the offset 0x148, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFE 
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
// Function : OtgFsDieptsiz2
//
// Return the value of register OTG_FS_DIEPTSIZ2
//
// Notes : Register OtgFsDieptsiz2 at offset 0x150
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTSIZ_2( y) \
     WRITE_REGISTER_ULONG( 0x150 , y)

#define SET_BITS_OTG_FS_DIEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTSIZ_2() \
     READ_REGISTER_ULONG(0x150)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz2
//
// Return the value of register OTG_FS_DIEPTSIZ_2
//
// Notes : Register device endpoint-2 transfer size register (OTG_FS_DIEPTSIZ2) at the offset 0x150, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DIEPTSIZ_2_REG 0x150

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x150) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz2
//
// Return the value of register OTG_FS_DIEPTSIZ_2
//
// Notes : Register device endpoint-2 transfer size register (OTG_FS_DIEPTSIZ2) at the offset 0x150, Bits 19:28

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
// Function : OtgFsDieptsiz2
//
// Return the value of register OTG_FS_DIEPTSIZ_2
//
// Notes : Register device endpoint-2 transfer size register (OTG_FS_DIEPTSIZ2) at the offset 0x150, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x150) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts2
//
// Return the value of register OTG_FS_DTXFSTS2
//
// Notes : Register OtgFsDtxfsts2 at offset 0x158
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_DTXFSTS_2() \
     READ_REGISTER_ULONG(0x158)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts2
//
// Return the value of register OTG_FS_DTXFSTS_2
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO status register (OTG_FS_DTXFSTS2) at the offset 0x158, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space available 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_FS_DTXFSTS_2_REG 0x158

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x158) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL3
//
// Notes : Register OtgFsDiepctl3 at offset 0x160
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DIEPCTL_3_REG 0x160

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x160) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x160); \
     WRITE_REGISTER_ULONG(0x160, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFNUM 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDiepctl3
//
// Return the value of register OTG_FS_DIEPCTL_3
//
// Notes : Register OTG device endpoint-3 control register (OTG_FS_DIEPCTL3) at the offset 0x160, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT3
//
// Notes : Register OtgFsDiepint3 at offset 0x168
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DIEPINT3) at the offset 0x168, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DIEPINT_3_REG 0x168

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
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DIEPINT3) at the offset 0x168, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DIEPINT3) at the offset 0x168, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TOC 
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
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DIEPINT3) at the offset 0x168, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ITTXFE 
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
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DIEPINT3) at the offset 0x168, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // INEPNE 
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
// Function : OtgFsDiepint3
//
// Return the value of register OTG_FS_DIEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DIEPINT3) at the offset 0x168, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFE 
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
// Function : OtgFsDieptsiz3
//
// Return the value of register OTG_FS_DIEPTSIZ3
//
// Notes : Register OtgFsDieptsiz3 at offset 0x170
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTSIZ_3( y) \
     WRITE_REGISTER_ULONG( 0x170 , y)

#define SET_BITS_OTG_FS_DIEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x170); \
     WRITE_REGISTER_ULONG( 0x170 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTSIZ_3() \
     READ_REGISTER_ULONG(0x170)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz3
//
// Return the value of register OTG_FS_DIEPTSIZ_3
//
// Notes : Register device endpoint-3 transfer size register (OTG_FS_DIEPTSIZ3) at the offset 0x170, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DIEPTSIZ_3_REG 0x170

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x170) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz3
//
// Return the value of register OTG_FS_DIEPTSIZ_3
//
// Notes : Register device endpoint-3 transfer size register (OTG_FS_DIEPTSIZ3) at the offset 0x170, Bits 19:28

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
// Function : OtgFsDieptsiz3
//
// Return the value of register OTG_FS_DIEPTSIZ_3
//
// Notes : Register device endpoint-3 transfer size register (OTG_FS_DIEPTSIZ3) at the offset 0x170, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x170) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x170); \
     WRITE_REGISTER_ULONG(0x170, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts3
//
// Return the value of register OTG_FS_DTXFSTS3
//
// Notes : Register OtgFsDtxfsts3 at offset 0x178
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_DTXFSTS_3() \
     READ_REGISTER_ULONG(0x178)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts3
//
// Return the value of register OTG_FS_DTXFSTS_3
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO status register (OTG_FS_DTXFSTS3) at the offset 0x178, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space available 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_FS_DTXFSTS_3_REG 0x178

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x178) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x178); \
     WRITE_REGISTER_ULONG(0x178, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL4
//
// Notes : Register OtgFsDiepctl4 at offset 0x180
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DIEPCTL_4_REG 0x180

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x180) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFNUM 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDiepctl4
//
// Return the value of register OTG_FS_DIEPCTL_4
//
// Notes : Register OTG device endpoint-4 control register (OTG_FS_DIEPCTL4) at the offset 0x180, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT4
//
// Notes : Register OtgFsDiepint4 at offset 0x188
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DIEPINT4) at the offset 0x188, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DIEPINT_4_REG 0x188

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
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DIEPINT4) at the offset 0x188, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DIEPINT4) at the offset 0x188, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TOC 
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
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DIEPINT4) at the offset 0x188, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ITTXFE 
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
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DIEPINT4) at the offset 0x188, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // INEPNE 
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
// Function : OtgFsDiepint4
//
// Return the value of register OTG_FS_DIEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DIEPINT4) at the offset 0x188, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFE 
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
// Function : OtgFsDieptsiz4
//
// Return the value of register OTG_FS_DIEPTSIZ4
//
// Notes : Register OtgFsDieptsiz4 at offset 0x194
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTSIZ_4( y) \
     WRITE_REGISTER_ULONG( 0x194 , y)

#define SET_BITS_OTG_FS_DIEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x194); \
     WRITE_REGISTER_ULONG( 0x194 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTSIZ_4() \
     READ_REGISTER_ULONG(0x194)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz4
//
// Return the value of register OTG_FS_DIEPTSIZ_4
//
// Notes : Register device endpoint-4 transfer size register (OTG_FS_DIEPTSIZ4) at the offset 0x194, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DIEPTSIZ_4_REG 0x194

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x194) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x194); \
     WRITE_REGISTER_ULONG(0x194, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz4
//
// Return the value of register OTG_FS_DIEPTSIZ_4
//
// Notes : Register device endpoint-4 transfer size register (OTG_FS_DIEPTSIZ4) at the offset 0x194, Bits 19:28

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
   ((READ_REGISTER_ULONG(0x194) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x194); \
     WRITE_REGISTER_ULONG(0x194, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz4
//
// Return the value of register OTG_FS_DIEPTSIZ_4
//
// Notes : Register device endpoint-4 transfer size register (OTG_FS_DIEPTSIZ4) at the offset 0x194, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x194) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x194); \
     WRITE_REGISTER_ULONG(0x194, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts4
//
// Return the value of register OTG_FS_DTXFSTS4
//
// Notes : Register OtgFsDtxfsts4 at offset 0x19C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DTXFSTS_4( y) \
     WRITE_REGISTER_ULONG( 0x19C , y)

#define SET_BITS_OTG_FS_DTXFSTS_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x19C); \
     WRITE_REGISTER_ULONG( 0x19C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DTXFSTS_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x19C); \
     WRITE_REGISTER_ULONG( 0x19C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DTXFSTS_4() \
     READ_REGISTER_ULONG(0x19C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts4
//
// Return the value of register OTG_FS_DTXFSTS_4
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO status register (OTG_FS_DTXFSTS4) at the offset 0x19C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space available 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_FS_DTXFSTS_4_REG 0x19C

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x19C) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x19C); \
     WRITE_REGISTER_ULONG(0x19C, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL5
//
// Notes : Register OtgFsDiepctl5 at offset 0x1A0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DIEPCTL_5_REG 0x1A0

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x1A0) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1A0); \
     WRITE_REGISTER_ULONG(0x1A0, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 22:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFNUM 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDiepctl5
//
// Return the value of register OTG_FS_DIEPCTL_5
//
// Notes : Register OTG device endpoint-5 control register (OTG_FS_DIEPCTL5) at the offset 0x1A0, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT5
//
// Notes : Register OtgFsDiepint5 at offset 0x1A8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DIEPINT5) at the offset 0x1A8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DIEPINT_5_REG 0x1A8

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
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DIEPINT5) at the offset 0x1A8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DIEPINT5) at the offset 0x1A8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TOC 
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
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DIEPINT5) at the offset 0x1A8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ITTXFE 
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
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DIEPINT5) at the offset 0x1A8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // INEPNE 
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
// Function : OtgFsDiepint5
//
// Return the value of register OTG_FS_DIEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DIEPINT5) at the offset 0x1A8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXFE 
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
// Function : OtgFsDieptsiz55
//
// Return the value of register OTG_FS_DIEPTSIZ55
//
// Notes : Register OtgFsDieptsiz55 at offset 0x1B0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTSIZ_5_5( y) \
     WRITE_REGISTER_ULONG( 0x1B0 , y)

#define SET_BITS_OTG_FS_DIEPTSIZ_5_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTSIZ_5_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B0); \
     WRITE_REGISTER_ULONG( 0x1B0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTSIZ_5_5() \
     READ_REGISTER_ULONG(0x1B0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz55
//
// Return the value of register OTG_FS_DIEPTSIZ_5_5
//
// Notes : Register device endpoint-5 transfer size register (OTG_FS_DIEPTSIZ55) at the offset 0x1B0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DIEPTSIZ_55_REG 0x1B0

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x1B0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptsiz55
//
// Return the value of register OTG_FS_DIEPTSIZ_5_5
//
// Notes : Register device endpoint-5 transfer size register (OTG_FS_DIEPTSIZ55) at the offset 0x1B0, Bits 19:28

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
// Function : OtgFsDieptsiz55
//
// Return the value of register OTG_FS_DIEPTSIZ_5_5
//
// Notes : Register device endpoint-5 transfer size register (OTG_FS_DIEPTSIZ55) at the offset 0x1B0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Multi count 
    // 
#define MCNT_MASK 0x60000000U
#define MCNT_OFFSET 30
#define MCNT_START_BIT 29
#define MCNT_WIDTH 2



#define READ_MCNT() \
   ((READ_REGISTER_ULONG(0x1B0) & MCNT_MASK)  >> MCNT_START_BIT)

#define WRITE_MCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B0); \
     WRITE_REGISTER_ULONG(0x1B0, (OldValue & ~ MCNT_MASK) | ((val << MCNT_START_BIT) & MCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts55
//
// Return the value of register OTG_FS_DTXFSTS55
//
// Notes : Register OtgFsDtxfsts55 at offset 0x1B8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DTXFSTS_5_5( y) \
     WRITE_REGISTER_ULONG( 0x1B8 , y)

#define SET_BITS_OTG_FS_DTXFSTS_5_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B8); \
     WRITE_REGISTER_ULONG( 0x1B8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DTXFSTS_5_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1B8); \
     WRITE_REGISTER_ULONG( 0x1B8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DTXFSTS_5_5() \
     READ_REGISTER_ULONG(0x1B8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDtxfsts55
//
// Return the value of register OTG_FS_DTXFSTS_5_5
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO status register (OTG_FS_DTXFSTS55) at the offset 0x1B8, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO space available 
    // 
#define INEPTFSAV_MASK 0xFFFFU
#define INEPTFSAV_OFFSET 15
#define INEPTFSAV_START_BIT 0
#define INEPTFSAV_WIDTH 16


#define OTG_FS_DTXFSTS_55_REG 0x1B8

#define READ_INEPTFSAV() \
   ((READ_REGISTER_ULONG(0x1B8) & INEPTFSAV_MASK)  >> INEPTFSAV_START_BIT)

#define WRITE_INEPTFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1B8); \
     WRITE_REGISTER_ULONG(0x1B8, (OldValue & ~ INEPTFSAV_MASK) | ((val << INEPTFSAV_START_BIT) & INEPTFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL0
//
// Notes : Register OtgFsDoepctl0 at offset 0x300
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x3U
#define MPSIZ_OFFSET 1
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 2


#define OTG_FS_DOEPCTL_0_REG 0x300

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x300) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNPM 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



typedef enum snpm {
    SNPM_0,
    SNPM_1
} SNPM_T ;
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDoepctl0
//
// Return the value of register OTG_FS_DOEPCTL_0
//
// Notes : Register device endpoint-0 control register (OTG_FS_DOEPCTL0) at the offset 0x300, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDoepint0
//
// Return the value of register OTG_FS_DOEPINT0
//
// Notes : Register OtgFsDoepint0 at offset 0x308
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPINT_0( y) \
     WRITE_REGISTER_ULONG( 0x308 , y)

#define SET_BITS_OTG_FS_DOEPINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPINT_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x308); \
     WRITE_REGISTER_ULONG( 0x308 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPINT_0() \
     READ_REGISTER_ULONG(0x308)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepint0
//
// Return the value of register OTG_FS_DOEPINT_0
//
// Notes : Register device endpoint-0 interrupt register (OTG_FS_DOEPINT0) at the offset 0x308, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DOEPINT_0_REG 0x308

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
// Function : OtgFsDoepint0
//
// Return the value of register OTG_FS_DOEPINT_0
//
// Notes : Register device endpoint-0 interrupt register (OTG_FS_DOEPINT0) at the offset 0x308, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDoepint0
//
// Return the value of register OTG_FS_DOEPINT_0
//
// Notes : Register device endpoint-0 interrupt register (OTG_FS_DOEPINT0) at the offset 0x308, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STUP 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



typedef enum stup {
    STUP_0,
    STUP_1
} STUP_T ;
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
// Function : OtgFsDoepint0
//
// Return the value of register OTG_FS_DOEPINT_0
//
// Notes : Register device endpoint-0 interrupt register (OTG_FS_DOEPINT0) at the offset 0x308, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTEPDIS 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



typedef enum otepdis {
    OTEPDIS_0,
    OTEPDIS_1
} OTEPDIS_T ;
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
// Function : OtgFsDoepint0
//
// Return the value of register OTG_FS_DOEPINT_0
//
// Notes : Register device endpoint-0 interrupt register (OTG_FS_DOEPINT0) at the offset 0x308, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B2BSTUP 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



typedef enum b2bstup {
    B_2BSTUP_0,
    B_2BSTUP_1
} B_2BSTUP_T ;
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
// Function : OtgFsDoeptsiz0
//
// Return the value of register OTG_FS_DOEPTSIZ0
//
// Notes : Register OtgFsDoeptsiz0 at offset 0x310
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPTSIZ_0( y) \
     WRITE_REGISTER_ULONG( 0x310 , y)

#define SET_BITS_OTG_FS_DOEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x310); \
     WRITE_REGISTER_ULONG( 0x310 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPTSIZ_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x310); \
     WRITE_REGISTER_ULONG( 0x310 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPTSIZ_0() \
     READ_REGISTER_ULONG(0x310)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz0
//
// Return the value of register OTG_FS_DOEPTSIZ_0
//
// Notes : Register device OUT endpoint-0 transfer size register (OTG_FS_DOEPTSIZ0) at the offset 0x310, Bits 0:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FU
#define XFRSIZ_OFFSET 6
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 7


#define OTG_FS_DOEPTSIZ_0_REG 0x310

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x310) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x310); \
     WRITE_REGISTER_ULONG(0x310, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz0
//
// Return the value of register OTG_FS_DOEPTSIZ_0
//
// Notes : Register device OUT endpoint-0 transfer size register (OTG_FS_DOEPTSIZ0) at the offset 0x310, Bits 19:19

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
// Function : OtgFsDoeptsiz0
//
// Return the value of register OTG_FS_DOEPTSIZ_0
//
// Notes : Register device OUT endpoint-0 transfer size register (OTG_FS_DOEPTSIZ0) at the offset 0x310, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETUP packet count 
    // 
#define STUPCNT_MASK 0x60000000U
#define STUPCNT_OFFSET 30
#define STUPCNT_START_BIT 29
#define STUPCNT_WIDTH 2



typedef enum stupcnt {
    STUPCNT_0,
    STUPCNT_1
} STUPCNT_T ;
#define READ_STUPCNT() \
   ((READ_REGISTER_ULONG(0x310) & STUPCNT_MASK)  >> STUPCNT_START_BIT)

#define WRITE_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x310); \
     WRITE_REGISTER_ULONG(0x310, (OldValue & ~ STUPCNT_MASK) | ((val << STUPCNT_START_BIT) & STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL1
//
// Notes : Register OtgFsDoepctl1 at offset 0x320
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DOEPCTL_1_REG 0x320

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x320) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x320); \
     WRITE_REGISTER_ULONG(0x320, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNPM 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDoepctl1
//
// Return the value of register OTG_FS_DOEPCTL_1
//
// Notes : Register device endpoint-1 control register (OTG_FS_DOEPCTL1) at the offset 0x320, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDoepint1
//
// Return the value of register OTG_FS_DOEPINT1
//
// Notes : Register OtgFsDoepint1 at offset 0x328
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPINT_1( y) \
     WRITE_REGISTER_ULONG( 0x328 , y)

#define SET_BITS_OTG_FS_DOEPINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPINT_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x328); \
     WRITE_REGISTER_ULONG( 0x328 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPINT_1() \
     READ_REGISTER_ULONG(0x328)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepint1
//
// Return the value of register OTG_FS_DOEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DOEPINT1) at the offset 0x328, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DOEPINT_1_REG 0x328

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
// Function : OtgFsDoepint1
//
// Return the value of register OTG_FS_DOEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DOEPINT1) at the offset 0x328, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDoepint1
//
// Return the value of register OTG_FS_DOEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DOEPINT1) at the offset 0x328, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STUP 
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
// Function : OtgFsDoepint1
//
// Return the value of register OTG_FS_DOEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DOEPINT1) at the offset 0x328, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTEPDIS 
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
// Function : OtgFsDoepint1
//
// Return the value of register OTG_FS_DOEPINT_1
//
// Notes : Register device endpoint-1 interrupt register (OTG_FS_DOEPINT1) at the offset 0x328, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B2BSTUP 
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
// Function : OtgFsDoeptsiz1
//
// Return the value of register OTG_FS_DOEPTSIZ1
//
// Notes : Register OtgFsDoeptsiz1 at offset 0x330
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPTSIZ_1( y) \
     WRITE_REGISTER_ULONG( 0x330 , y)

#define SET_BITS_OTG_FS_DOEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x330); \
     WRITE_REGISTER_ULONG( 0x330 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPTSIZ_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x330); \
     WRITE_REGISTER_ULONG( 0x330 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPTSIZ_1() \
     READ_REGISTER_ULONG(0x330)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz1
//
// Return the value of register OTG_FS_DOEPTSIZ_1
//
// Notes : Register device OUT endpoint-1 transfer size register (OTG_FS_DOEPTSIZ1) at the offset 0x330, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DOEPTSIZ_1_REG 0x330

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x330) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x330); \
     WRITE_REGISTER_ULONG(0x330, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz1
//
// Return the value of register OTG_FS_DOEPTSIZ_1
//
// Notes : Register device OUT endpoint-1 transfer size register (OTG_FS_DOEPTSIZ1) at the offset 0x330, Bits 19:28

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
// Function : OtgFsDoeptsiz1
//
// Return the value of register OTG_FS_DOEPTSIZ_1
//
// Notes : Register device OUT endpoint-1 transfer size register (OTG_FS_DOEPTSIZ1) at the offset 0x330, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2



typedef enum rxdpid_stupcnt {
    RXDPID_STUPCNT_0,
    RXDPID_STUPCNT_1
} RXDPID_STUPCNT_T ;
#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x330) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x330); \
     WRITE_REGISTER_ULONG(0x330, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL2
//
// Notes : Register OtgFsDoepctl2 at offset 0x340
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DOEPCTL_2_REG 0x340

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x340) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x340); \
     WRITE_REGISTER_ULONG(0x340, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNPM 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDoepctl2
//
// Return the value of register OTG_FS_DOEPCTL_2
//
// Notes : Register device endpoint-2 control register (OTG_FS_DOEPCTL2) at the offset 0x340, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDoepint2
//
// Return the value of register OTG_FS_DOEPINT2
//
// Notes : Register OtgFsDoepint2 at offset 0x348
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPINT_2( y) \
     WRITE_REGISTER_ULONG( 0x348 , y)

#define SET_BITS_OTG_FS_DOEPINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPINT_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x348); \
     WRITE_REGISTER_ULONG( 0x348 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPINT_2() \
     READ_REGISTER_ULONG(0x348)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepint2
//
// Return the value of register OTG_FS_DOEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DOEPINT2) at the offset 0x348, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DOEPINT_2_REG 0x348

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
// Function : OtgFsDoepint2
//
// Return the value of register OTG_FS_DOEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DOEPINT2) at the offset 0x348, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDoepint2
//
// Return the value of register OTG_FS_DOEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DOEPINT2) at the offset 0x348, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STUP 
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
// Function : OtgFsDoepint2
//
// Return the value of register OTG_FS_DOEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DOEPINT2) at the offset 0x348, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTEPDIS 
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
// Function : OtgFsDoepint2
//
// Return the value of register OTG_FS_DOEPINT_2
//
// Notes : Register device endpoint-2 interrupt register (OTG_FS_DOEPINT2) at the offset 0x348, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B2BSTUP 
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
// Function : OtgFsDoeptsiz2
//
// Return the value of register OTG_FS_DOEPTSIZ2
//
// Notes : Register OtgFsDoeptsiz2 at offset 0x350
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPTSIZ_2( y) \
     WRITE_REGISTER_ULONG( 0x350 , y)

#define SET_BITS_OTG_FS_DOEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x350); \
     WRITE_REGISTER_ULONG( 0x350 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPTSIZ_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x350); \
     WRITE_REGISTER_ULONG( 0x350 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPTSIZ_2() \
     READ_REGISTER_ULONG(0x350)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz2
//
// Return the value of register OTG_FS_DOEPTSIZ_2
//
// Notes : Register device OUT endpoint-2 transfer size register (OTG_FS_DOEPTSIZ2) at the offset 0x350, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DOEPTSIZ_2_REG 0x350

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x350) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x350); \
     WRITE_REGISTER_ULONG(0x350, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz2
//
// Return the value of register OTG_FS_DOEPTSIZ_2
//
// Notes : Register device OUT endpoint-2 transfer size register (OTG_FS_DOEPTSIZ2) at the offset 0x350, Bits 19:28

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
// Function : OtgFsDoeptsiz2
//
// Return the value of register OTG_FS_DOEPTSIZ_2
//
// Notes : Register device OUT endpoint-2 transfer size register (OTG_FS_DOEPTSIZ2) at the offset 0x350, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2



#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x350) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x350); \
     WRITE_REGISTER_ULONG(0x350, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL3
//
// Notes : Register OtgFsDoepctl3 at offset 0x360
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DOEPCTL_3_REG 0x360

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x360) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x360); \
     WRITE_REGISTER_ULONG(0x360, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNPM 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
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
// Function : OtgFsDoepctl3
//
// Return the value of register OTG_FS_DOEPCTL_3
//
// Notes : Register device endpoint-3 control register (OTG_FS_DOEPCTL3) at the offset 0x360, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



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
// Function : OtgFsDoepint3
//
// Return the value of register OTG_FS_DOEPINT3
//
// Notes : Register OtgFsDoepint3 at offset 0x368
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPINT_3( y) \
     WRITE_REGISTER_ULONG( 0x368 , y)

#define SET_BITS_OTG_FS_DOEPINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPINT_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x368); \
     WRITE_REGISTER_ULONG( 0x368 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPINT_3() \
     READ_REGISTER_ULONG(0x368)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepint3
//
// Return the value of register OTG_FS_DOEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DOEPINT3) at the offset 0x368, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DOEPINT_3_REG 0x368

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
// Function : OtgFsDoepint3
//
// Return the value of register OTG_FS_DOEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DOEPINT3) at the offset 0x368, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
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
// Function : OtgFsDoepint3
//
// Return the value of register OTG_FS_DOEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DOEPINT3) at the offset 0x368, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STUP 
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
// Function : OtgFsDoepint3
//
// Return the value of register OTG_FS_DOEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DOEPINT3) at the offset 0x368, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTEPDIS 
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
// Function : OtgFsDoepint3
//
// Return the value of register OTG_FS_DOEPINT_3
//
// Notes : Register device endpoint-3 interrupt register (OTG_FS_DOEPINT3) at the offset 0x368, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B2BSTUP 
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
// Function : OtgFsDoeptsiz3
//
// Return the value of register OTG_FS_DOEPTSIZ3
//
// Notes : Register OtgFsDoeptsiz3 at offset 0x370
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPTSIZ_3( y) \
     WRITE_REGISTER_ULONG( 0x370 , y)

#define SET_BITS_OTG_FS_DOEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x370); \
     WRITE_REGISTER_ULONG( 0x370 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPTSIZ_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x370); \
     WRITE_REGISTER_ULONG( 0x370 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPTSIZ_3() \
     READ_REGISTER_ULONG(0x370)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz3
//
// Return the value of register OTG_FS_DOEPTSIZ_3
//
// Notes : Register device OUT endpoint-3 transfer size register (OTG_FS_DOEPTSIZ3) at the offset 0x370, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DOEPTSIZ_3_REG 0x370

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x370) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x370); \
     WRITE_REGISTER_ULONG(0x370, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz3
//
// Return the value of register OTG_FS_DOEPTSIZ_3
//
// Notes : Register device OUT endpoint-3 transfer size register (OTG_FS_DOEPTSIZ3) at the offset 0x370, Bits 19:28

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
// Function : OtgFsDoeptsiz3
//
// Return the value of register OTG_FS_DOEPTSIZ_3
//
// Notes : Register device OUT endpoint-3 transfer size register (OTG_FS_DOEPTSIZ3) at the offset 0x370, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2



#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x370) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x370); \
     WRITE_REGISTER_ULONG(0x370, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL4
//
// Notes : Register OtgFsDoepctl4 at offset 0x378
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DOEPCTL_4_REG 0x378

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x378) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x378) & USBAEP_MASK)  >> USBAEP_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x378) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x378) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x378) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNPM 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x378) & SNPM_MASK)  >> SNPM_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x378) & STALL_MASK)  >> STALL_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x378) & CNAK_MASK)  >> CNAK_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x378) & SNAK_MASK)  >> SNAK_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x378) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x378) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x378) & EPDIS_MASK)  >> EPDIS_START_BIT)

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
// Function : OtgFsDoepctl4
//
// Return the value of register OTG_FS_DOEPCTL_4
//
// Notes : Register device endpoint-4 control register (OTG_FS_DOEPCTL4) at the offset 0x378, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x378); \
     WRITE_REGISTER_ULONG(0x378, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG( 0x378 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x378); \
     WRITE_REGISTER_ULONG(0x378, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x378) & EPENA_MASK)  >> EPENA_START_BIT)

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
// Function : OtgFsDoepint4
//
// Return the value of register OTG_FS_DOEPINT4
//
// Notes : Register OtgFsDoepint4 at offset 0x380
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPINT_4( y) \
     WRITE_REGISTER_ULONG( 0x380 , y)

#define SET_BITS_OTG_FS_DOEPINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPINT_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPINT_4() \
     READ_REGISTER_ULONG(0x380)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepint4
//
// Return the value of register OTG_FS_DOEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DOEPINT4) at the offset 0x380, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DOEPINT_4_REG 0x380

#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x380) & XFRC_MASK)  >> XFRC_START_BIT)

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
// Function : OtgFsDoepint4
//
// Return the value of register OTG_FS_DOEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DOEPINT4) at the offset 0x380, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x380) & EPDISD_MASK)  >> EPDISD_START_BIT)

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
// Function : OtgFsDoepint4
//
// Return the value of register OTG_FS_DOEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DOEPINT4) at the offset 0x380, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STUP 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x380) & STUP_MASK)  >> STUP_START_BIT)

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
// Function : OtgFsDoepint4
//
// Return the value of register OTG_FS_DOEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DOEPINT4) at the offset 0x380, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTEPDIS 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x380) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

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
// Function : OtgFsDoepint4
//
// Return the value of register OTG_FS_DOEPINT_4
//
// Notes : Register device endpoint-4 interrupt register (OTG_FS_DOEPINT4) at the offset 0x380, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B2BSTUP 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x380); \
     WRITE_REGISTER_ULONG(0x380, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG( 0x380 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x380); \
     WRITE_REGISTER_ULONG(0x380, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x380) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

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
// Function : OtgFsDoeptsiz4
//
// Return the value of register OTG_FS_DOEPTSIZ4
//
// Notes : Register OtgFsDoeptsiz4 at offset 0x388
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPTSIZ_4( y) \
     WRITE_REGISTER_ULONG( 0x388 , y)

#define SET_BITS_OTG_FS_DOEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPTSIZ_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x388); \
     WRITE_REGISTER_ULONG( 0x388 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPTSIZ_4() \
     READ_REGISTER_ULONG(0x388)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz4
//
// Return the value of register OTG_FS_DOEPTSIZ_4
//
// Notes : Register device OUT endpoint-4 transfer size register (OTG_FS_DOEPTSIZ4) at the offset 0x388, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DOEPTSIZ_4_REG 0x388

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x388) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz4
//
// Return the value of register OTG_FS_DOEPTSIZ_4
//
// Notes : Register device OUT endpoint-4 transfer size register (OTG_FS_DOEPTSIZ4) at the offset 0x388, Bits 19:28

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
   ((READ_REGISTER_ULONG(0x388) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz4
//
// Return the value of register OTG_FS_DOEPTSIZ_4
//
// Notes : Register device OUT endpoint-4 transfer size register (OTG_FS_DOEPTSIZ4) at the offset 0x388, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2



#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x388) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x388); \
     WRITE_REGISTER_ULONG(0x388, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL5
//
// Notes : Register OtgFsDoepctl5 at offset 0x390
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 0:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MPSIZ 
    // 
#define MPSIZ_MASK 0x7FFU
#define MPSIZ_OFFSET 10
#define MPSIZ_START_BIT 0
#define MPSIZ_WIDTH 11


#define OTG_FS_DOEPCTL_5_REG 0x390

#define READ_MPSIZ() \
   ((READ_REGISTER_ULONG(0x390) & MPSIZ_MASK)  >> MPSIZ_START_BIT)

#define WRITE_MPSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ MPSIZ_MASK) | ((val << MPSIZ_START_BIT) & MPSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USBAEP 
    // 
#define USBAEP_MASK 0x8000U
#define USBAEP_OFFSET 15
#define USBAEP_START_BIT 15
#define USBAEP_WIDTH 1



#define WRITE_USBAEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ USBAEP_MASK) | ((val << USBAEP_START_BIT) & USBAEP_MASK )); \
   } 

#define ENABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  USBAEP_MASK ); \
   }

#define DISABLE_USBAEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~USBAEP_MASK ); \
   } 

#define READ_USBAEP() \
   ((READ_REGISTER_ULONG(0x390) & USBAEP_MASK)  >> USBAEP_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EONUM/DPID 
    // 
#define EONUM_DPID_MASK 0x10000U
#define EONUM_DPID_OFFSET 16
#define EONUM_DPID_START_BIT 16
#define EONUM_DPID_WIDTH 1



#define WRITE_EONUM_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ EONUM_DPID_MASK) | ((val << EONUM_DPID_START_BIT) & EONUM_DPID_MASK )); \
   } 

#define ENABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  EONUM_DPID_MASK ); \
   }

#define DISABLE_EONUM_DPID() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~EONUM_DPID_MASK ); \
   } 

#define READ_EONUM_DPID() \
   ((READ_REGISTER_ULONG(0x390) & EONUM_DPID_MASK)  >> EONUM_DPID_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NAKSTS 
    // 
#define NAKSTS_MASK 0x20000U
#define NAKSTS_OFFSET 17
#define NAKSTS_START_BIT 17
#define NAKSTS_WIDTH 1



#define WRITE_NAKSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ NAKSTS_MASK) | ((val << NAKSTS_START_BIT) & NAKSTS_MASK )); \
   } 

#define ENABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  NAKSTS_MASK ); \
   }

#define DISABLE_NAKSTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~NAKSTS_MASK ); \
   } 

#define READ_NAKSTS() \
   ((READ_REGISTER_ULONG(0x390) & NAKSTS_MASK)  >> NAKSTS_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 18:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPTYP 
    // 
#define EPTYP_MASK 0xC0000U
#define EPTYP_OFFSET 19
#define EPTYP_START_BIT 18
#define EPTYP_WIDTH 2



#define READ_EPTYP() \
   ((READ_REGISTER_ULONG(0x390) & EPTYP_MASK)  >> EPTYP_START_BIT)

#define WRITE_EPTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ EPTYP_MASK) | ((val << EPTYP_START_BIT) & EPTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNPM 
    // 
#define SNPM_MASK 0x100000U
#define SNPM_OFFSET 20
#define SNPM_START_BIT 20
#define SNPM_WIDTH 1



#define WRITE_SNPM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ SNPM_MASK) | ((val << SNPM_START_BIT) & SNPM_MASK )); \
   } 

#define ENABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  SNPM_MASK ); \
   }

#define DISABLE_SNPM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~SNPM_MASK ); \
   } 

#define READ_SNPM() \
   ((READ_REGISTER_ULONG(0x390) & SNPM_MASK)  >> SNPM_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stall 
    // 
#define STALL_MASK 0x200000U
#define STALL_OFFSET 21
#define STALL_START_BIT 21
#define STALL_WIDTH 1



#define WRITE_STALL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ STALL_MASK) | ((val << STALL_START_BIT) & STALL_MASK )); \
   } 

#define ENABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  STALL_MASK ); \
   }

#define DISABLE_STALL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~STALL_MASK ); \
   } 

#define READ_STALL() \
   ((READ_REGISTER_ULONG(0x390) & STALL_MASK)  >> STALL_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CNAK 
    // 
#define CNAK_MASK 0x4000000U
#define CNAK_OFFSET 26
#define CNAK_START_BIT 26
#define CNAK_WIDTH 1



#define WRITE_CNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ CNAK_MASK) | ((val << CNAK_START_BIT) & CNAK_MASK )); \
   } 

#define ENABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  CNAK_MASK ); \
   }

#define DISABLE_CNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~CNAK_MASK ); \
   } 

#define READ_CNAK() \
   ((READ_REGISTER_ULONG(0x390) & CNAK_MASK)  >> CNAK_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SNAK 
    // 
#define SNAK_MASK 0x8000000U
#define SNAK_OFFSET 27
#define SNAK_START_BIT 27
#define SNAK_WIDTH 1



#define WRITE_SNAK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ SNAK_MASK) | ((val << SNAK_START_BIT) & SNAK_MASK )); \
   } 

#define ENABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  SNAK_MASK ); \
   }

#define DISABLE_SNAK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~SNAK_MASK ); \
   } 

#define READ_SNAK() \
   ((READ_REGISTER_ULONG(0x390) & SNAK_MASK)  >> SNAK_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SD0PID/SEVNFRM 
    // 
#define SD0PID_SEVNFRM_MASK 0x10000000U
#define SD0PID_SEVNFRM_OFFSET 28
#define SD0PID_SEVNFRM_START_BIT 28
#define SD0PID_SEVNFRM_WIDTH 1



#define WRITE_SD0PID_SEVNFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ SD0PID_SEVNFRM_MASK) | ((val << SD0PID_SEVNFRM_START_BIT) & SD0PID_SEVNFRM_MASK )); \
   } 

#define ENABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  SD0PID_SEVNFRM_MASK ); \
   }

#define DISABLE_SD0PID_SEVNFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~SD0PID_SEVNFRM_MASK ); \
   } 

#define READ_SD0PID_SEVNFRM() \
   ((READ_REGISTER_ULONG(0x390) & SD0PID_SEVNFRM_MASK)  >> SD0PID_SEVNFRM_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SODDFRM 
    // 
#define SODDFRM_MASK 0x20000000U
#define SODDFRM_OFFSET 29
#define SODDFRM_START_BIT 29
#define SODDFRM_WIDTH 1



#define WRITE_SODDFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ SODDFRM_MASK) | ((val << SODDFRM_START_BIT) & SODDFRM_MASK )); \
   } 

#define ENABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  SODDFRM_MASK ); \
   }

#define DISABLE_SODDFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~SODDFRM_MASK ); \
   } 

#define READ_SODDFRM() \
   ((READ_REGISTER_ULONG(0x390) & SODDFRM_MASK)  >> SODDFRM_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDIS 
    // 
#define EPDIS_MASK 0x40000000U
#define EPDIS_OFFSET 30
#define EPDIS_START_BIT 30
#define EPDIS_WIDTH 1



#define WRITE_EPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ EPDIS_MASK) | ((val << EPDIS_START_BIT) & EPDIS_MASK )); \
   } 

#define ENABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  EPDIS_MASK ); \
   }

#define DISABLE_EPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~EPDIS_MASK ); \
   } 

#define READ_EPDIS() \
   ((READ_REGISTER_ULONG(0x390) & EPDIS_MASK)  >> EPDIS_START_BIT)

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
// Function : OtgFsDoepctl5
//
// Return the value of register OTG_FS_DOEPCTL_5
//
// Notes : Register device endpoint-5 control register (OTG_FS_DOEPCTL5) at the offset 0x390, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPENA 
    // 
#define EPENA_MASK 0x80000000U
#define EPENA_OFFSET 31
#define EPENA_START_BIT 31
#define EPENA_WIDTH 1



#define WRITE_EPENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x390); \
     WRITE_REGISTER_ULONG(0x390, (OldValue & ~ EPENA_MASK) | ((val << EPENA_START_BIT) & EPENA_MASK )); \
   } 

#define ENABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG( 0x390 , val |  EPENA_MASK ); \
   }

#define DISABLE_EPENA() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x390); \
     WRITE_REGISTER_ULONG(0x390, val & ~EPENA_MASK ); \
   } 

#define READ_EPENA() \
   ((READ_REGISTER_ULONG(0x390) & EPENA_MASK)  >> EPENA_START_BIT)

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
// Function : OtgFsDoepint5
//
// Return the value of register OTG_FS_DOEPINT5
//
// Notes : Register OtgFsDoepint5 at offset 0x398
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPINT_5( y) \
     WRITE_REGISTER_ULONG( 0x398 , y)

#define SET_BITS_OTG_FS_DOEPINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPINT_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPINT_5() \
     READ_REGISTER_ULONG(0x398)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoepint5
//
// Return the value of register OTG_FS_DOEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DOEPINT5) at the offset 0x398, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // XFRC 
    // 
#define XFRC_MASK 0x1U
#define XFRC_OFFSET 0
#define XFRC_START_BIT 0
#define XFRC_WIDTH 1


#define OTG_FS_DOEPINT_5_REG 0x398

#define WRITE_XFRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x398); \
     WRITE_REGISTER_ULONG(0x398, (OldValue & ~ XFRC_MASK) | ((val << XFRC_START_BIT) & XFRC_MASK )); \
   } 

#define ENABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val |  XFRC_MASK ); \
   }

#define DISABLE_XFRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG(0x398, val & ~XFRC_MASK ); \
   } 

#define READ_XFRC() \
   ((READ_REGISTER_ULONG(0x398) & XFRC_MASK)  >> XFRC_START_BIT)

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
// Function : OtgFsDoepint5
//
// Return the value of register OTG_FS_DOEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DOEPINT5) at the offset 0x398, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EPDISD 
    // 
#define EPDISD_MASK 0x2U
#define EPDISD_OFFSET 1
#define EPDISD_START_BIT 1
#define EPDISD_WIDTH 1



#define WRITE_EPDISD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x398); \
     WRITE_REGISTER_ULONG(0x398, (OldValue & ~ EPDISD_MASK) | ((val << EPDISD_START_BIT) & EPDISD_MASK )); \
   } 

#define ENABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val |  EPDISD_MASK ); \
   }

#define DISABLE_EPDISD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG(0x398, val & ~EPDISD_MASK ); \
   } 

#define READ_EPDISD() \
   ((READ_REGISTER_ULONG(0x398) & EPDISD_MASK)  >> EPDISD_START_BIT)

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
// Function : OtgFsDoepint5
//
// Return the value of register OTG_FS_DOEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DOEPINT5) at the offset 0x398, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STUP 
    // 
#define STUP_MASK 0x8U
#define STUP_OFFSET 3
#define STUP_START_BIT 3
#define STUP_WIDTH 1



#define WRITE_STUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x398); \
     WRITE_REGISTER_ULONG(0x398, (OldValue & ~ STUP_MASK) | ((val << STUP_START_BIT) & STUP_MASK )); \
   } 

#define ENABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val |  STUP_MASK ); \
   }

#define DISABLE_STUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG(0x398, val & ~STUP_MASK ); \
   } 

#define READ_STUP() \
   ((READ_REGISTER_ULONG(0x398) & STUP_MASK)  >> STUP_START_BIT)

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
// Function : OtgFsDoepint5
//
// Return the value of register OTG_FS_DOEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DOEPINT5) at the offset 0x398, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTEPDIS 
    // 
#define OTEPDIS_MASK 0x10U
#define OTEPDIS_OFFSET 4
#define OTEPDIS_START_BIT 4
#define OTEPDIS_WIDTH 1



#define WRITE_OTEPDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x398); \
     WRITE_REGISTER_ULONG(0x398, (OldValue & ~ OTEPDIS_MASK) | ((val << OTEPDIS_START_BIT) & OTEPDIS_MASK )); \
   } 

#define ENABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val |  OTEPDIS_MASK ); \
   }

#define DISABLE_OTEPDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG(0x398, val & ~OTEPDIS_MASK ); \
   } 

#define READ_OTEPDIS() \
   ((READ_REGISTER_ULONG(0x398) & OTEPDIS_MASK)  >> OTEPDIS_START_BIT)

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
// Function : OtgFsDoepint5
//
// Return the value of register OTG_FS_DOEPINT_5
//
// Notes : Register device endpoint-5 interrupt register (OTG_FS_DOEPINT5) at the offset 0x398, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B2BSTUP 
    // 
#define B2BSTUP_MASK 0x40U
#define B2BSTUP_OFFSET 6
#define B2BSTUP_START_BIT 6
#define B2BSTUP_WIDTH 1



#define WRITE_B2BSTUP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x398); \
     WRITE_REGISTER_ULONG(0x398, (OldValue & ~ B2BSTUP_MASK) | ((val << B2BSTUP_START_BIT) & B2BSTUP_MASK )); \
   } 

#define ENABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG( 0x398 , val |  B2BSTUP_MASK ); \
   }

#define DISABLE_B2BSTUP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x398); \
     WRITE_REGISTER_ULONG(0x398, val & ~B2BSTUP_MASK ); \
   } 

#define READ_B2BSTUP() \
   ((READ_REGISTER_ULONG(0x398) & B2BSTUP_MASK)  >> B2BSTUP_START_BIT)

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
// Function : OtgFsDoeptsiz5
//
// Return the value of register OTG_FS_DOEPTSIZ5
//
// Notes : Register OtgFsDoeptsiz5 at offset 0x3A0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DOEPTSIZ_5( y) \
     WRITE_REGISTER_ULONG( 0x3A0 , y)

#define SET_BITS_OTG_FS_DOEPTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DOEPTSIZ_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3A0); \
     WRITE_REGISTER_ULONG( 0x3A0 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DOEPTSIZ_5() \
     READ_REGISTER_ULONG(0x3A0)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz5
//
// Return the value of register OTG_FS_DOEPTSIZ_5
//
// Notes : Register device OUT endpoint-5 transfer size register (OTG_FS_DOEPTSIZ5) at the offset 0x3A0, Bits 0:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer size 
    // 
#define XFRSIZ_MASK 0x7FFFFU
#define XFRSIZ_OFFSET 18
#define XFRSIZ_START_BIT 0
#define XFRSIZ_WIDTH 19


#define OTG_FS_DOEPTSIZ_5_REG 0x3A0

#define READ_XFRSIZ() \
   ((READ_REGISTER_ULONG(0x3A0) & XFRSIZ_MASK)  >> XFRSIZ_START_BIT)

#define WRITE_XFRSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ XFRSIZ_MASK) | ((val << XFRSIZ_START_BIT) & XFRSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz5
//
// Return the value of register OTG_FS_DOEPTSIZ_5
//
// Notes : Register device OUT endpoint-5 transfer size register (OTG_FS_DOEPTSIZ5) at the offset 0x3A0, Bits 19:28

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
   ((READ_REGISTER_ULONG(0x3A0) & PKTCNT_MASK)  >> PKTCNT_START_BIT)

#define WRITE_PKTCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ PKTCNT_MASK) | ((val << PKTCNT_START_BIT) & PKTCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDoeptsiz5
//
// Return the value of register OTG_FS_DOEPTSIZ_5
//
// Notes : Register device OUT endpoint-5 transfer size register (OTG_FS_DOEPTSIZ5) at the offset 0x3A0, Bits 29:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Received data PID/SETUP packet count 
    // 
#define RXDPID_STUPCNT_MASK 0x60000000U
#define RXDPID_STUPCNT_OFFSET 30
#define RXDPID_STUPCNT_START_BIT 29
#define RXDPID_STUPCNT_WIDTH 2



#define READ_RXDPID_STUPCNT() \
   ((READ_REGISTER_ULONG(0x3A0) & RXDPID_STUPCNT_MASK)  >> RXDPID_STUPCNT_START_BIT)

#define WRITE_RXDPID_STUPCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3A0); \
     WRITE_REGISTER_ULONG(0x3A0, (OldValue & ~ RXDPID_STUPCNT_MASK) | ((val << RXDPID_STUPCNT_START_BIT) & RXDPID_STUPCNT_MASK )); \
   } 

