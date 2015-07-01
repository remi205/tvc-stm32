/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/otg_fs_global.h
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
 
#define OTG_FS_GLOBAL 0x50000000
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OtgFsGotgctl at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTG version 
    // 
#define OTGVER_MASK 0x100000U
#define OTGVER_OFFSET 20
#define OTGVER_START_BIT 20
#define OTGVER_WIDTH 1


#define OTG_FS_GOTGCTL_REG 0x0

typedef enum otgver {
    OTGVER_0,
    OTGVER_1
} OTGVER_T ;
#define WRITE_OTGVER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ OTGVER_MASK) | ((val << OTGVER_START_BIT) & OTGVER_MASK )); \
   } 

#define ENABLE_OTGVER() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  OTGVER_MASK ); \
   }

#define DISABLE_OTGVER() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~OTGVER_MASK ); \
   } 

#define READ_OTGVER() \
   ((READ_REGISTER_ULONG(0x0) & OTGVER_MASK)  >> OTGVER_START_BIT)

#define WHEN_OTGVER_HIGH() \
     if ( READ_OTGVER() )


#define UNLESS_OTGVER_HIGH() \
     if (! READ_OTGVER() )


#define WAIT_OTGVER_LOW() \
    while ( READ_OTGVER() );


#define WAIT_OTGVER_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OTGVER() && (--___t___ > 0)); }


#define WAIT_OTGVER_HIGH() \
    while (! READ_OTGVER() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Embedded host enable 
    // 
#define EHEN_MASK 0x1000U
#define EHEN_OFFSET 12
#define EHEN_START_BIT 12
#define EHEN_WIDTH 1



typedef enum ehen {
    EHEN_0,
    EHEN_1
} EHEN_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B-peripheral session valid override value 
    // 
#define BVALOVAL_MASK 0x80U
#define BVALOVAL_OFFSET 7
#define BVALOVAL_START_BIT 7
#define BVALOVAL_WIDTH 1



typedef enum bvaloval {
    BVALOVAL_0,
    BVALOVAL_1
} BVALOVAL_T ;
#define WRITE_BVALOVAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BVALOVAL_MASK) | ((val << BVALOVAL_START_BIT) & BVALOVAL_MASK )); \
   } 

#define ENABLE_BVALOVAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  BVALOVAL_MASK ); \
   }

#define DISABLE_BVALOVAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~BVALOVAL_MASK ); \
   } 

#define READ_BVALOVAL() \
   ((READ_REGISTER_ULONG(0x0) & BVALOVAL_MASK)  >> BVALOVAL_START_BIT)

#define WHEN_BVALOVAL_HIGH() \
     if ( READ_BVALOVAL() )


#define UNLESS_BVALOVAL_HIGH() \
     if (! READ_BVALOVAL() )


#define WAIT_BVALOVAL_LOW() \
    while ( READ_BVALOVAL() );


#define WAIT_BVALOVAL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BVALOVAL() && (--___t___ > 0)); }


#define WAIT_BVALOVAL_HIGH() \
    while (! READ_BVALOVAL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B-peripheral session valid override enable 
    // 
#define BVALOEN_MASK 0x40U
#define BVALOEN_OFFSET 6
#define BVALOEN_START_BIT 6
#define BVALOEN_WIDTH 1



typedef enum bvaloen {
    BVALOEN_0,
    BVALOEN_1
} BVALOEN_T ;
#define WRITE_BVALOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BVALOEN_MASK) | ((val << BVALOEN_START_BIT) & BVALOEN_MASK )); \
   } 

#define ENABLE_BVALOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  BVALOEN_MASK ); \
   }

#define DISABLE_BVALOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~BVALOEN_MASK ); \
   } 

#define READ_BVALOEN() \
   ((READ_REGISTER_ULONG(0x0) & BVALOEN_MASK)  >> BVALOEN_START_BIT)

#define WHEN_BVALOEN_HIGH() \
     if ( READ_BVALOEN() )


#define UNLESS_BVALOEN_HIGH() \
     if (! READ_BVALOEN() )


#define WAIT_BVALOEN_LOW() \
    while ( READ_BVALOEN() );


#define WAIT_BVALOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BVALOEN() && (--___t___ > 0)); }


#define WAIT_BVALOEN_HIGH() \
    while (! READ_BVALOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // A-peripheral session valid override value 
    // 
#define AVALOVAL_MASK 0x20U
#define AVALOVAL_OFFSET 5
#define AVALOVAL_START_BIT 5
#define AVALOVAL_WIDTH 1



typedef enum avaloval {
    AVALOVAL_0,
    AVALOVAL_1
} AVALOVAL_T ;
#define WRITE_AVALOVAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ AVALOVAL_MASK) | ((val << AVALOVAL_START_BIT) & AVALOVAL_MASK )); \
   } 

#define ENABLE_AVALOVAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  AVALOVAL_MASK ); \
   }

#define DISABLE_AVALOVAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~AVALOVAL_MASK ); \
   } 

#define READ_AVALOVAL() \
   ((READ_REGISTER_ULONG(0x0) & AVALOVAL_MASK)  >> AVALOVAL_START_BIT)

#define WHEN_AVALOVAL_HIGH() \
     if ( READ_AVALOVAL() )


#define UNLESS_AVALOVAL_HIGH() \
     if (! READ_AVALOVAL() )


#define WAIT_AVALOVAL_LOW() \
    while ( READ_AVALOVAL() );


#define WAIT_AVALOVAL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AVALOVAL() && (--___t___ > 0)); }


#define WAIT_AVALOVAL_HIGH() \
    while (! READ_AVALOVAL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // A-peripheral session valid override enable 
    // 
#define AVALOEN_MASK 0x10U
#define AVALOEN_OFFSET 4
#define AVALOEN_START_BIT 4
#define AVALOEN_WIDTH 1



typedef enum avaloen {
    AVALOEN_0,
    AVALOEN_1
} AVALOEN_T ;
#define WRITE_AVALOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ AVALOEN_MASK) | ((val << AVALOEN_START_BIT) & AVALOEN_MASK )); \
   } 

#define ENABLE_AVALOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  AVALOEN_MASK ); \
   }

#define DISABLE_AVALOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~AVALOEN_MASK ); \
   } 

#define READ_AVALOEN() \
   ((READ_REGISTER_ULONG(0x0) & AVALOEN_MASK)  >> AVALOEN_START_BIT)

#define WHEN_AVALOEN_HIGH() \
     if ( READ_AVALOEN() )


#define UNLESS_AVALOEN_HIGH() \
     if (! READ_AVALOEN() )


#define WAIT_AVALOEN_LOW() \
    while ( READ_AVALOEN() );


#define WAIT_AVALOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AVALOEN() && (--___t___ > 0)); }


#define WAIT_AVALOEN_HIGH() \
    while (! READ_AVALOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // VBUS valid override value 
    // 
#define VBVALOVAL_MASK 0x8U
#define VBVALOVAL_OFFSET 3
#define VBVALOVAL_START_BIT 3
#define VBVALOVAL_WIDTH 1



typedef enum vbvaloval {
    VBVALOVAL_0,
    VBVALOVAL_1
} VBVALOVAL_T ;
#define WRITE_VBVALOVAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ VBVALOVAL_MASK) | ((val << VBVALOVAL_START_BIT) & VBVALOVAL_MASK )); \
   } 

#define ENABLE_VBVALOVAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  VBVALOVAL_MASK ); \
   }

#define DISABLE_VBVALOVAL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~VBVALOVAL_MASK ); \
   } 

#define READ_VBVALOVAL() \
   ((READ_REGISTER_ULONG(0x0) & VBVALOVAL_MASK)  >> VBVALOVAL_START_BIT)

#define WHEN_VBVALOVAL_HIGH() \
     if ( READ_VBVALOVAL() )


#define UNLESS_VBVALOVAL_HIGH() \
     if (! READ_VBVALOVAL() )


#define WAIT_VBVALOVAL_LOW() \
    while ( READ_VBVALOVAL() );


#define WAIT_VBVALOVAL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VBVALOVAL() && (--___t___ > 0)); }


#define WAIT_VBVALOVAL_HIGH() \
    while (! READ_VBVALOVAL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // VBUS valid override enable 
    // 
#define VBVALOEN_MASK 0x4U
#define VBVALOEN_OFFSET 2
#define VBVALOEN_START_BIT 2
#define VBVALOEN_WIDTH 1



typedef enum vbvaloen {
    VBVALOEN_0,
    VBVALOEN_1
} VBVALOEN_T ;
#define WRITE_VBVALOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ VBVALOEN_MASK) | ((val << VBVALOEN_START_BIT) & VBVALOEN_MASK )); \
   } 

#define ENABLE_VBVALOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  VBVALOEN_MASK ); \
   }

#define DISABLE_VBVALOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~VBVALOEN_MASK ); \
   } 

#define READ_VBVALOEN() \
   ((READ_REGISTER_ULONG(0x0) & VBVALOEN_MASK)  >> VBVALOEN_START_BIT)

#define WHEN_VBVALOEN_HIGH() \
     if ( READ_VBVALOEN() )


#define UNLESS_VBVALOEN_HIGH() \
     if (! READ_VBVALOEN() )


#define WAIT_VBVALOEN_LOW() \
    while ( READ_VBVALOEN() );


#define WAIT_VBVALOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VBVALOEN() && (--___t___ > 0)); }


#define WAIT_VBVALOEN_HIGH() \
    while (! READ_VBVALOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // B-session valid 
    // 
#define BSVLD_MASK 0x80000U
#define BSVLD_OFFSET 19
#define BSVLD_START_BIT 19
#define BSVLD_WIDTH 1



typedef enum bsvld {
    BSVLD_0,
    BSVLD_1
} BSVLD_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // A-session valid 
    // 
#define ASVLD_MASK 0x40000U
#define ASVLD_OFFSET 18
#define ASVLD_START_BIT 18
#define ASVLD_WIDTH 1



typedef enum asvld {
    ASVLD_0,
    ASVLD_1
} ASVLD_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Long/short debounce time 
    // 
#define DBCT_MASK 0x20000U
#define DBCT_OFFSET 17
#define DBCT_START_BIT 17
#define DBCT_WIDTH 1



typedef enum dbct {
    DBCT_0,
    DBCT_1
} DBCT_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Connector ID status 
    // 
#define CIDSTS_MASK 0x10000U
#define CIDSTS_OFFSET 16
#define CIDSTS_START_BIT 16
#define CIDSTS_WIDTH 1



typedef enum cidsts {
    CIDSTS_0,
    CIDSTS_1
} CIDSTS_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Device HNP enabled 
    // 
#define DHNPEN_MASK 0x800U
#define DHNPEN_OFFSET 11
#define DHNPEN_START_BIT 11
#define DHNPEN_WIDTH 1



typedef enum dhnpen {
    DHNPEN_0,
    DHNPEN_1
} DHNPEN_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host set HNP enable 
    // 
#define HSHNPEN_MASK 0x400U
#define HSHNPEN_OFFSET 10
#define HSHNPEN_START_BIT 10
#define HSHNPEN_WIDTH 1



typedef enum hshnpen {
    HSHNPEN_0,
    HSHNPEN_1
} HSHNPEN_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HNP request 
    // 
#define HNPRQ_MASK 0x200U
#define HNPRQ_OFFSET 9
#define HNPRQ_START_BIT 9
#define HNPRQ_WIDTH 1



typedef enum hnprq {
    HNPRQ_0,
    HNPRQ_1
} HNPRQ_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host negotiation success 
    // 
#define HNGSCS_MASK 0x100U
#define HNGSCS_OFFSET 8
#define HNGSCS_START_BIT 8
#define HNGSCS_WIDTH 1



typedef enum hngscs {
    HNGSCS_0,
    HNGSCS_1
} HNGSCS_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request 
    // 
#define SRQ_MASK 0x2U
#define SRQ_OFFSET 1
#define SRQ_START_BIT 1
#define SRQ_WIDTH 1



typedef enum srq {
    SRQ_0,
    SRQ_1
} SRQ_T ;
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
// Function : OtgFsGotgctl
//
// Return the value of register OTG_FS_GOTGCTL
//
// Notes : Register OTG_FS control and status register (OTG_FS_GOTGCTL) (OTG_FS_GOTGCTL) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request success 
    // 
#define SRQSCS_MASK 0x1U
#define SRQSCS_OFFSET 0
#define SRQSCS_START_BIT 0
#define SRQSCS_WIDTH 1



typedef enum srqscs {
    SRQSCS_0,
    SRQSCS_1
} SRQSCS_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OtgFsGotgint at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_GOTGINT( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_OTG_FS_GOTGINT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_GOTGINT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_GOTGINT() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ID input pin changed 
    // 
#define IDCHNG_MASK 0x100000U
#define IDCHNG_OFFSET 20
#define IDCHNG_START_BIT 20
#define IDCHNG_WIDTH 1


#define OTG_FS_GOTGINT_REG 0x4

typedef enum idchng {
    IDCHNG_0,
    IDCHNG_1
} IDCHNG_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Debounce done 
    // 
#define DBCDNE_MASK 0x80000U
#define DBCDNE_OFFSET 19
#define DBCDNE_START_BIT 19
#define DBCDNE_WIDTH 1



typedef enum dbcdne {
    DBCDNE_0,
    DBCDNE_1
} DBCDNE_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // A-device timeout change 
    // 
#define ADTOCHG_MASK 0x40000U
#define ADTOCHG_OFFSET 18
#define ADTOCHG_START_BIT 18
#define ADTOCHG_WIDTH 1



typedef enum adtochg {
    ADTOCHG_0,
    ADTOCHG_1
} ADTOCHG_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host negotiation detected 
    // 
#define HNGDET_MASK 0x20000U
#define HNGDET_OFFSET 17
#define HNGDET_START_BIT 17
#define HNGDET_WIDTH 1



typedef enum hngdet {
    HNGDET_0,
    HNGDET_1
} HNGDET_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host negotiation success status change 
    // 
#define HNSSCHG_MASK 0x200U
#define HNSSCHG_OFFSET 9
#define HNSSCHG_START_BIT 9
#define HNSSCHG_WIDTH 1



typedef enum hnsschg {
    HNSSCHG_0,
    HNSSCHG_1
} HNSSCHG_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request success status change 
    // 
#define SRSSCHG_MASK 0x100U
#define SRSSCHG_OFFSET 8
#define SRSSCHG_START_BIT 8
#define SRSSCHG_WIDTH 1



typedef enum srsschg {
    SRSSCHG_0,
    SRSSCHG_1
} SRSSCHG_T ;
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
// Function : OtgFsGotgint
//
// Return the value of register OTG_FS_GOTGINT
//
// Notes : Register OTG_FS interrupt register (OTG_FS_GOTGINT) (OTG_FS_GOTGINT) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session end detected 
    // 
#define SEDET_MASK 0x4U
#define SEDET_OFFSET 2
#define SEDET_START_BIT 2
#define SEDET_WIDTH 1



typedef enum sedet {
    SEDET_0,
    SEDET_1
} SEDET_T ;
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
// Function : OtgFsGahbcfg
//
// Return the value of register OTG_FS_GAHBCFG
//
// Notes : Register OtgFsGahbcfg at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_GAHBCFG( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_OTG_FS_GAHBCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_GAHBCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_GAHBCFG() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGahbcfg
//
// Return the value of register OTG_FS_GAHBCFG
//
// Notes : Register OTG_FS AHB configuration register (OTG_FS_GAHBCFG) (OTG_FS_GAHBCFG) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic TxFIFO empty level 
    // 
#define PTXFELVL_MASK 0x100U
#define PTXFELVL_OFFSET 8
#define PTXFELVL_START_BIT 8
#define PTXFELVL_WIDTH 1


#define OTG_FS_GAHBCFG_REG 0x8

typedef enum ptxfelvl {
    PTXFELVL_0,
    PTXFELVL_1
} PTXFELVL_T ;
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
// Function : OtgFsGahbcfg
//
// Return the value of register OTG_FS_GAHBCFG
//
// Notes : Register OTG_FS AHB configuration register (OTG_FS_GAHBCFG) (OTG_FS_GAHBCFG) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO empty level 
    // 
#define TXFELVL_MASK 0x80U
#define TXFELVL_OFFSET 7
#define TXFELVL_START_BIT 7
#define TXFELVL_WIDTH 1



typedef enum txfelvl {
    TXFELVL_0,
    TXFELVL_1
} TXFELVL_T ;
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
// Function : OtgFsGahbcfg
//
// Return the value of register OTG_FS_GAHBCFG
//
// Notes : Register OTG_FS AHB configuration register (OTG_FS_GAHBCFG) (OTG_FS_GAHBCFG) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global interrupt mask 
    // 
#define GINT_MASK 0x1U
#define GINT_OFFSET 0
#define GINT_START_BIT 0
#define GINT_WIDTH 1



typedef enum gint {
    GINT_0,
    GINT_1
} GINT_T ;
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
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OtgFsGusbcfg at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Force device mode 
    // 
#define FDMOD_MASK 0x40000000U
#define FDMOD_OFFSET 30
#define FDMOD_START_BIT 30
#define FDMOD_WIDTH 1


#define OTG_FS_GUSBCFG_REG 0xC

typedef enum fdmod {
    FDMOD_0,
    FDMOD_1
} FDMOD_T ;
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
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Force host mode 
    // 
#define FHMOD_MASK 0x20000000U
#define FHMOD_OFFSET 29
#define FHMOD_START_BIT 29
#define FHMOD_WIDTH 1



typedef enum fhmod {
    FHMOD_0,
    FHMOD_1
} FHMOD_T ;
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
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 10:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB turnaround time 
    // 
#define TRDT_MASK 0x3C00U
#define TRDT_OFFSET 13
#define TRDT_START_BIT 10
#define TRDT_WIDTH 4



typedef enum trdt {
    TRDT_0,
    TRDT_1
} TRDT_T ;
#define READ_TRDT() \
   ((READ_REGISTER_ULONG(0xC) & TRDT_MASK)  >> TRDT_START_BIT)

#define WRITE_TRDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TRDT_MASK) | ((val << TRDT_START_BIT) & TRDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HNP-capable 
    // 
#define HNPCAP_MASK 0x200U
#define HNPCAP_OFFSET 9
#define HNPCAP_START_BIT 9
#define HNPCAP_WIDTH 1



typedef enum hnpcap {
    HNPCAP_0,
    HNPCAP_1
} HNPCAP_T ;
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
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SRP-capable 
    // 
#define SRPCAP_MASK 0x100U
#define SRPCAP_OFFSET 8
#define SRPCAP_START_BIT 8
#define SRPCAP_WIDTH 1



typedef enum srpcap {
    SRPCAP_0,
    SRPCAP_1
} SRPCAP_T ;
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
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Full Speed serial transceiver select 
    // 
#define PHYSEL_MASK 0x40U
#define PHYSEL_OFFSET 6
#define PHYSEL_START_BIT 6
#define PHYSEL_WIDTH 1



typedef enum physel {
    PHYSEL_0,
    PHYSEL_1
} PHYSEL_T ;
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
// Function : OtgFsGusbcfg
//
// Return the value of register OTG_FS_GUSBCFG
//
// Notes : Register OTG_FS USB configuration register (OTG_FS_GUSBCFG) (OTG_FS_GUSBCFG) at the offset 0xC, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FS timeout calibration 
    // 
#define TOCAL_MASK 0x7U
#define TOCAL_OFFSET 2
#define TOCAL_START_BIT 0
#define TOCAL_WIDTH 3



typedef enum tocal {
    TOCAL_0,
    TOCAL_1
} TOCAL_T ;
#define READ_TOCAL() \
   ((READ_REGISTER_ULONG(0xC) & TOCAL_MASK)  >> TOCAL_START_BIT)

#define WRITE_TOCAL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TOCAL_MASK) | ((val << TOCAL_START_BIT) & TOCAL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OtgFsGrstctl at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AHB master idle 
    // 
#define AHBIDL_MASK 0x80000000U
#define AHBIDL_OFFSET 31
#define AHBIDL_START_BIT 31
#define AHBIDL_WIDTH 1


#define OTG_FS_GRSTCTL_REG 0x10

typedef enum ahbidl {
    AHBIDL_0,
    AHBIDL_1
} AHBIDL_T ;
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
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 6:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO number 
    // 
#define TXFNUM_MASK 0x7C0U
#define TXFNUM_OFFSET 10
#define TXFNUM_START_BIT 6
#define TXFNUM_WIDTH 5



typedef enum txfnum {
    TXFNUM_0,
    TXFNUM_1
} TXFNUM_T ;
#define READ_TXFNUM() \
   ((READ_REGISTER_ULONG(0x10) & TXFNUM_MASK)  >> TXFNUM_START_BIT)

#define WRITE_TXFNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ TXFNUM_MASK) | ((val << TXFNUM_START_BIT) & TXFNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TxFIFO flush 
    // 
#define TXFFLSH_MASK 0x20U
#define TXFFLSH_OFFSET 5
#define TXFFLSH_START_BIT 5
#define TXFFLSH_WIDTH 1



typedef enum txfflsh {
    TXFFLSH_0,
    TXFFLSH_1
} TXFFLSH_T ;
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
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RxFIFO flush 
    // 
#define RXFFLSH_MASK 0x10U
#define RXFFLSH_OFFSET 4
#define RXFFLSH_START_BIT 4
#define RXFFLSH_WIDTH 1



typedef enum rxfflsh {
    RXFFLSH_0,
    RXFFLSH_1
} RXFFLSH_T ;
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
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host frame counter reset 
    // 
#define FCRST_MASK 0x4U
#define FCRST_OFFSET 2
#define FCRST_START_BIT 2
#define FCRST_WIDTH 1



typedef enum fcrst {
    FCRST_0,
    FCRST_1
} FCRST_T ;
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
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // HCLK soft reset 
    // 
#define HSRST_MASK 0x2U
#define HSRST_OFFSET 1
#define HSRST_START_BIT 1
#define HSRST_WIDTH 1



typedef enum hsrst {
    HSRST_0,
    HSRST_1
} HSRST_T ;
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
// Function : OtgFsGrstctl
//
// Return the value of register OTG_FS_GRSTCTL
//
// Notes : Register OTG_FS reset register (OTG_FS_GRSTCTL) (OTG_FS_GRSTCTL) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Core soft reset 
    // 
#define CSRST_MASK 0x1U
#define CSRST_OFFSET 0
#define CSRST_START_BIT 0
#define CSRST_WIDTH 1



typedef enum csrst {
    CSRST_0,
    CSRST_1
} CSRST_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OtgFsGintsts at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Reset detected interrupt 
    // 
#define RSTDET_MASK 0x800000U
#define RSTDET_OFFSET 23
#define RSTDET_START_BIT 23
#define RSTDET_WIDTH 1


#define OTG_FS_GINTSTS_REG 0x14

typedef enum rstdet {
    RSTDET_0,
    RSTDET_1
} RSTDET_T ;
#define WRITE_RSTDET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ RSTDET_MASK) | ((val << RSTDET_START_BIT) & RSTDET_MASK )); \
   } 

#define ENABLE_RSTDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  RSTDET_MASK ); \
   }

#define DISABLE_RSTDET() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~RSTDET_MASK ); \
   } 

#define READ_RSTDET() \
   ((READ_REGISTER_ULONG(0x14) & RSTDET_MASK)  >> RSTDET_START_BIT)

#define WHEN_RSTDET_HIGH() \
     if ( READ_RSTDET() )


#define UNLESS_RSTDET_HIGH() \
     if (! READ_RSTDET() )


#define WAIT_RSTDET_LOW() \
    while ( READ_RSTDET() );


#define WAIT_RSTDET_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RSTDET() && (--___t___ > 0)); }


#define WAIT_RSTDET_HIGH() \
    while (! READ_RSTDET() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Resume/remote wakeup detected interrupt 
    // 
#define WKUPINT_MASK 0x80000000U
#define WKUPINT_OFFSET 31
#define WKUPINT_START_BIT 31
#define WKUPINT_WIDTH 1



typedef enum wkupint {
    WKUPINT_0,
    WKUPINT_1
} WKUPINT_T ;
#define WRITE_WKUPINT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ WKUPINT_MASK) | ((val << WKUPINT_START_BIT) & WKUPINT_MASK )); \
   } 

#define ENABLE_WKUPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  WKUPINT_MASK ); \
   }

#define DISABLE_WKUPINT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~WKUPINT_MASK ); \
   } 

#define READ_WKUPINT() \
   ((READ_REGISTER_ULONG(0x14) & WKUPINT_MASK)  >> WKUPINT_START_BIT)

#define WHEN_WKUPINT_HIGH() \
     if ( READ_WKUPINT() )


#define UNLESS_WKUPINT_HIGH() \
     if (! READ_WKUPINT() )


#define WAIT_WKUPINT_LOW() \
    while ( READ_WKUPINT() );


#define WAIT_WKUPINT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WKUPINT() && (--___t___ > 0)); }


#define WAIT_WKUPINT_HIGH() \
    while (! READ_WKUPINT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request/new session detected interrupt 
    // 
#define SRQINT_MASK 0x40000000U
#define SRQINT_OFFSET 30
#define SRQINT_START_BIT 30
#define SRQINT_WIDTH 1



typedef enum srqint {
    SRQINT_0,
    SRQINT_1
} SRQINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 29:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Disconnect detected interrupt 
    // 
#define DISCINT_MASK 0x20000000U
#define DISCINT_OFFSET 29
#define DISCINT_START_BIT 29
#define DISCINT_WIDTH 1



typedef enum discint {
    DISCINT_0,
    DISCINT_1
} DISCINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Connector ID status change 
    // 
#define CIDSCHG_MASK 0x10000000U
#define CIDSCHG_OFFSET 28
#define CIDSCHG_START_BIT 28
#define CIDSCHG_WIDTH 1



typedef enum cidschg {
    CIDSCHG_0,
    CIDSCHG_1
} CIDSCHG_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic TxFIFO empty 
    // 
#define PTXFE_MASK 0x4000000U
#define PTXFE_OFFSET 26
#define PTXFE_START_BIT 26
#define PTXFE_WIDTH 1



typedef enum ptxfe {
    PTXFE_0,
    PTXFE_1
} PTXFE_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host channels interrupt 
    // 
#define HCINT_MASK 0x2000000U
#define HCINT_OFFSET 25
#define HCINT_START_BIT 25
#define HCINT_WIDTH 1



typedef enum hcint {
    HCINT_0,
    HCINT_1
} HCINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host port interrupt 
    // 
#define HPRTINT_MASK 0x1000000U
#define HPRTINT_OFFSET 24
#define HPRTINT_START_BIT 24
#define HPRTINT_WIDTH 1



typedef enum hprtint {
    HPRTINT_0,
    HPRTINT_1
} HPRTINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete periodic transfer(Host mode)/Incomplete 
    // isochronous OUT transfer(Device mode) 
    // 
#define IPXFR_INCOMPISOOUT_MASK 0x200000U
#define IPXFR_INCOMPISOOUT_OFFSET 21
#define IPXFR_INCOMPISOOUT_START_BIT 21
#define IPXFR_INCOMPISOOUT_WIDTH 1



typedef enum ipxfr_incompisoout {
    IPXFR_INCOMPISOOUT_0,
    IPXFR_INCOMPISOOUT_1
} IPXFR_INCOMPISOOUT_T ;
#define WRITE_IPXFR_INCOMPISOOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ IPXFR_INCOMPISOOUT_MASK) | ((val << IPXFR_INCOMPISOOUT_START_BIT) & IPXFR_INCOMPISOOUT_MASK )); \
   } 

#define ENABLE_IPXFR_INCOMPISOOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  IPXFR_INCOMPISOOUT_MASK ); \
   }

#define DISABLE_IPXFR_INCOMPISOOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~IPXFR_INCOMPISOOUT_MASK ); \
   } 

#define READ_IPXFR_INCOMPISOOUT() \
   ((READ_REGISTER_ULONG(0x14) & IPXFR_INCOMPISOOUT_MASK)  >> IPXFR_INCOMPISOOUT_START_BIT)

#define WHEN_IPXFR_INCOMPISOOUT_HIGH() \
     if ( READ_IPXFR_INCOMPISOOUT() )


#define UNLESS_IPXFR_INCOMPISOOUT_HIGH() \
     if (! READ_IPXFR_INCOMPISOOUT() )


#define WAIT_IPXFR_INCOMPISOOUT_LOW() \
    while ( READ_IPXFR_INCOMPISOOUT() );


#define WAIT_IPXFR_INCOMPISOOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IPXFR_INCOMPISOOUT() && (--___t___ > 0)); }


#define WAIT_IPXFR_INCOMPISOOUT_HIGH() \
    while (! READ_IPXFR_INCOMPISOOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete isochronous IN transfer 
    // 
#define IISOIXFR_MASK 0x100000U
#define IISOIXFR_OFFSET 20
#define IISOIXFR_START_BIT 20
#define IISOIXFR_WIDTH 1



typedef enum iisoixfr {
    IISOIXFR_0,
    IISOIXFR_1
} IISOIXFR_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OUT endpoint interrupt 
    // 
#define OEPINT_MASK 0x80000U
#define OEPINT_OFFSET 19
#define OEPINT_START_BIT 19
#define OEPINT_WIDTH 1



typedef enum oepint {
    OEPINT_0,
    OEPINT_1
} OEPINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint interrupt 
    // 
#define IEPINT_MASK 0x40000U
#define IEPINT_OFFSET 18
#define IEPINT_START_BIT 18
#define IEPINT_WIDTH 1



typedef enum iepint {
    IEPINT_0,
    IEPINT_1
} IEPINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of periodic frame interrupt 
    // 
#define EOPF_MASK 0x8000U
#define EOPF_OFFSET 15
#define EOPF_START_BIT 15
#define EOPF_WIDTH 1



typedef enum eopf {
    EOPF_0,
    EOPF_1
} EOPF_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Isochronous OUT packet dropped interrupt 
    // 
#define ISOODRP_MASK 0x4000U
#define ISOODRP_OFFSET 14
#define ISOODRP_START_BIT 14
#define ISOODRP_WIDTH 1



typedef enum isoodrp {
    ISOODRP_0,
    ISOODRP_1
} ISOODRP_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enumeration done 
    // 
#define ENUMDNE_MASK 0x2000U
#define ENUMDNE_OFFSET 13
#define ENUMDNE_START_BIT 13
#define ENUMDNE_WIDTH 1



typedef enum enumdne {
    ENUMDNE_0,
    ENUMDNE_1
} ENUMDNE_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB reset 
    // 
#define USBRST_MASK 0x1000U
#define USBRST_OFFSET 12
#define USBRST_START_BIT 12
#define USBRST_WIDTH 1



typedef enum usbrst {
    USBRST_0,
    USBRST_1
} USBRST_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB suspend 
    // 
#define USBSUSP_MASK 0x800U
#define USBSUSP_OFFSET 11
#define USBSUSP_START_BIT 11
#define USBSUSP_WIDTH 1



typedef enum usbsusp {
    USBSUSP_0,
    USBSUSP_1
} USBSUSP_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Early suspend 
    // 
#define ESUSP_MASK 0x400U
#define ESUSP_OFFSET 10
#define ESUSP_START_BIT 10
#define ESUSP_WIDTH 1



typedef enum esusp {
    ESUSP_0,
    ESUSP_1
} ESUSP_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global OUT NAK effective 
    // 
#define GOUTNAKEFF_MASK 0x80U
#define GOUTNAKEFF_OFFSET 7
#define GOUTNAKEFF_START_BIT 7
#define GOUTNAKEFF_WIDTH 1



typedef enum goutnakeff {
    GOUTNAKEFF_0,
    GOUTNAKEFF_1
} GOUTNAKEFF_T ;
#define WRITE_GOUTNAKEFF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ GOUTNAKEFF_MASK) | ((val << GOUTNAKEFF_START_BIT) & GOUTNAKEFF_MASK )); \
   } 

#define ENABLE_GOUTNAKEFF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  GOUTNAKEFF_MASK ); \
   }

#define DISABLE_GOUTNAKEFF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~GOUTNAKEFF_MASK ); \
   } 

#define READ_GOUTNAKEFF() \
   ((READ_REGISTER_ULONG(0x14) & GOUTNAKEFF_MASK)  >> GOUTNAKEFF_START_BIT)

#define WHEN_GOUTNAKEFF_HIGH() \
     if ( READ_GOUTNAKEFF() )


#define UNLESS_GOUTNAKEFF_HIGH() \
     if (! READ_GOUTNAKEFF() )


#define WAIT_GOUTNAKEFF_LOW() \
    while ( READ_GOUTNAKEFF() );


#define WAIT_GOUTNAKEFF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_GOUTNAKEFF() && (--___t___ > 0)); }


#define WAIT_GOUTNAKEFF_HIGH() \
    while (! READ_GOUTNAKEFF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global IN non-periodic NAK effective 
    // 
#define GINAKEFF_MASK 0x40U
#define GINAKEFF_OFFSET 6
#define GINAKEFF_START_BIT 6
#define GINAKEFF_WIDTH 1



typedef enum ginakeff {
    GINAKEFF_0,
    GINAKEFF_1
} GINAKEFF_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-periodic TxFIFO empty 
    // 
#define NPTXFE_MASK 0x20U
#define NPTXFE_OFFSET 5
#define NPTXFE_START_BIT 5
#define NPTXFE_WIDTH 1



typedef enum nptxfe {
    NPTXFE_0,
    NPTXFE_1
} NPTXFE_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RxFIFO non-empty 
    // 
#define RXFLVL_MASK 0x10U
#define RXFLVL_OFFSET 4
#define RXFLVL_START_BIT 4
#define RXFLVL_WIDTH 1



typedef enum rxflvl {
    RXFLVL_0,
    RXFLVL_1
} RXFLVL_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start of frame 
    // 
#define SOF_MASK 0x8U
#define SOF_OFFSET 3
#define SOF_START_BIT 3
#define SOF_WIDTH 1



typedef enum sof {
    SOF_0,
    SOF_1
} SOF_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // OTG interrupt 
    // 
#define OTGINT_MASK 0x4U
#define OTGINT_OFFSET 2
#define OTGINT_START_BIT 2
#define OTGINT_WIDTH 1



typedef enum otgint {
    OTGINT_0,
    OTGINT_1
} OTGINT_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mode mismatch interrupt 
    // 
#define MMIS_MASK 0x2U
#define MMIS_OFFSET 1
#define MMIS_START_BIT 1
#define MMIS_WIDTH 1



typedef enum mmis {
    MMIS_0,
    MMIS_1
} MMIS_T ;
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
// Function : OtgFsGintsts
//
// Return the value of register OTG_FS_GINTSTS
//
// Notes : Register OTG_FS core interrupt register (OTG_FS_GINTSTS) (OTG_FS_GINTSTS) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current mode of operation 
    // 
#define CMOD_MASK 0x1U
#define CMOD_OFFSET 0
#define CMOD_START_BIT 0
#define CMOD_WIDTH 1



typedef enum cmod {
    CMOD_0,
    CMOD_1
} CMOD_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OtgFsGintmsk at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM interrupt mask 
    // 
#define LPMIN_MASK 0x8000000U
#define LPMIN_OFFSET 27
#define LPMIN_START_BIT 27
#define LPMIN_WIDTH 1


#define OTG_FS_GINTMSK_REG 0x18

typedef enum lpmin {
    LPMIN_0,
    LPMIN_1
} LPMIN_T ;
#define WRITE_LPMIN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ LPMIN_MASK) | ((val << LPMIN_START_BIT) & LPMIN_MASK )); \
   } 

#define ENABLE_LPMIN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  LPMIN_MASK ); \
   }

#define DISABLE_LPMIN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~LPMIN_MASK ); \
   } 

#define READ_LPMIN() \
   ((READ_REGISTER_ULONG(0x18) & LPMIN_MASK)  >> LPMIN_START_BIT)

#define WHEN_LPMIN_HIGH() \
     if ( READ_LPMIN() )


#define UNLESS_LPMIN_HIGH() \
     if (! READ_LPMIN() )


#define WAIT_LPMIN_LOW() \
    while ( READ_LPMIN() );


#define WAIT_LPMIN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LPMIN() && (--___t___ > 0)); }


#define WAIT_LPMIN_HIGH() \
    while (! READ_LPMIN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Reset detected interrupt mask 
    // 
#define RSTDETM_MASK 0x800000U
#define RSTDETM_OFFSET 23
#define RSTDETM_START_BIT 23
#define RSTDETM_WIDTH 1



typedef enum rstdetm {
    RSTDETM_0,
    RSTDETM_1
} RSTDETM_T ;
#define WRITE_RSTDETM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ RSTDETM_MASK) | ((val << RSTDETM_START_BIT) & RSTDETM_MASK )); \
   } 

#define ENABLE_RSTDETM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  RSTDETM_MASK ); \
   }

#define DISABLE_RSTDETM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~RSTDETM_MASK ); \
   } 

#define READ_RSTDETM() \
   ((READ_REGISTER_ULONG(0x18) & RSTDETM_MASK)  >> RSTDETM_START_BIT)

#define WHEN_RSTDETM_HIGH() \
     if ( READ_RSTDETM() )


#define UNLESS_RSTDETM_HIGH() \
     if (! READ_RSTDETM() )


#define WAIT_RSTDETM_LOW() \
    while ( READ_RSTDETM() );


#define WAIT_RSTDETM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RSTDETM() && (--___t___ > 0)); }


#define WAIT_RSTDETM_HIGH() \
    while (! READ_RSTDETM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Resume/remote wakeup detected interrupt mask 
    // 
#define WUIM_MASK 0x80000000U
#define WUIM_OFFSET 31
#define WUIM_START_BIT 31
#define WUIM_WIDTH 1



typedef enum wuim {
    WUIM_0,
    WUIM_1
} WUIM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Session request/new session detected interrupt mask 
    // 
#define SRQIM_MASK 0x40000000U
#define SRQIM_OFFSET 30
#define SRQIM_START_BIT 30
#define SRQIM_WIDTH 1



typedef enum srqim {
    SRQIM_0,
    SRQIM_1
} SRQIM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 29:29

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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Connector ID status change mask 
    // 
#define CIDSCHGM_MASK 0x10000000U
#define CIDSCHGM_OFFSET 28
#define CIDSCHGM_START_BIT 28
#define CIDSCHGM_WIDTH 1



typedef enum cidschgm {
    CIDSCHGM_0,
    CIDSCHGM_1
} CIDSCHGM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Periodic TxFIFO empty mask 
    // 
#define PTXFEM_MASK 0x4000000U
#define PTXFEM_OFFSET 26
#define PTXFEM_START_BIT 26
#define PTXFEM_WIDTH 1



typedef enum ptxfem {
    PTXFEM_0,
    PTXFEM_1
} PTXFEM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host channels interrupt mask 
    // 
#define HCIM_MASK 0x2000000U
#define HCIM_OFFSET 25
#define HCIM_START_BIT 25
#define HCIM_WIDTH 1



typedef enum hcim {
    HCIM_0,
    HCIM_1
} HCIM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host port interrupt mask 
    // 
#define PRTIM_MASK 0x1000000U
#define PRTIM_OFFSET 24
#define PRTIM_START_BIT 24
#define PRTIM_WIDTH 1



typedef enum prtim {
    PRTIM_0,
    PRTIM_1
} PRTIM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete periodic transfer mask(Host mode)/Incomplete 
    // isochronous OUT transfer mask(Device mode) 
    // 
#define IPXFRM_IISOOXFRM_MASK 0x200000U
#define IPXFRM_IISOOXFRM_OFFSET 21
#define IPXFRM_IISOOXFRM_START_BIT 21
#define IPXFRM_IISOOXFRM_WIDTH 1



typedef enum ipxfrm_iisooxfrm {
    IPXFRM_IISOOXFRM_0,
    IPXFRM_IISOOXFRM_1
} IPXFRM_IISOOXFRM_T ;
#define WRITE_IPXFRM_IISOOXFRM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ IPXFRM_IISOOXFRM_MASK) | ((val << IPXFRM_IISOOXFRM_START_BIT) & IPXFRM_IISOOXFRM_MASK )); \
   } 

#define ENABLE_IPXFRM_IISOOXFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  IPXFRM_IISOOXFRM_MASK ); \
   }

#define DISABLE_IPXFRM_IISOOXFRM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~IPXFRM_IISOOXFRM_MASK ); \
   } 

#define READ_IPXFRM_IISOOXFRM() \
   ((READ_REGISTER_ULONG(0x18) & IPXFRM_IISOOXFRM_MASK)  >> IPXFRM_IISOOXFRM_START_BIT)

#define WHEN_IPXFRM_IISOOXFRM_HIGH() \
     if ( READ_IPXFRM_IISOOXFRM() )


#define UNLESS_IPXFRM_IISOOXFRM_HIGH() \
     if (! READ_IPXFRM_IISOOXFRM() )


#define WAIT_IPXFRM_IISOOXFRM_LOW() \
    while ( READ_IPXFRM_IISOOXFRM() );


#define WAIT_IPXFRM_IISOOXFRM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IPXFRM_IISOOXFRM() && (--___t___ > 0)); }


#define WAIT_IPXFRM_IISOOXFRM_HIGH() \
    while (! READ_IPXFRM_IISOOXFRM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Incomplete isochronous IN transfer mask 
    // 
#define IISOIXFRM_MASK 0x100000U
#define IISOIXFRM_OFFSET 20
#define IISOIXFRM_START_BIT 20
#define IISOIXFRM_WIDTH 1



typedef enum iisoixfrm {
    IISOIXFRM_0,
    IISOIXFRM_1
} IISOIXFRM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 19:19

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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 18:18

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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of periodic frame interrupt mask 
    // 
#define EOPFM_MASK 0x8000U
#define EOPFM_OFFSET 15
#define EOPFM_START_BIT 15
#define EOPFM_WIDTH 1



typedef enum eopfm {
    EOPFM_0,
    EOPFM_1
} EOPFM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Isochronous OUT packet dropped interrupt mask 
    // 
#define ISOODRPM_MASK 0x4000U
#define ISOODRPM_OFFSET 14
#define ISOODRPM_START_BIT 14
#define ISOODRPM_WIDTH 1



typedef enum isoodrpm {
    ISOODRPM_0,
    ISOODRPM_1
} ISOODRPM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enumeration done mask 
    // 
#define ENUMDNEM_MASK 0x2000U
#define ENUMDNEM_OFFSET 13
#define ENUMDNEM_START_BIT 13
#define ENUMDNEM_WIDTH 1



typedef enum enumdnem {
    ENUMDNEM_0,
    ENUMDNEM_1
} ENUMDNEM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 12:12

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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB suspend mask 
    // 
#define USBSUSPM_MASK 0x800U
#define USBSUSPM_OFFSET 11
#define USBSUSPM_START_BIT 11
#define USBSUSPM_WIDTH 1



typedef enum usbsuspm {
    USBSUSPM_0,
    USBSUSPM_1
} USBSUSPM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Early suspend mask 
    // 
#define ESUSPM_MASK 0x400U
#define ESUSPM_OFFSET 10
#define ESUSPM_START_BIT 10
#define ESUSPM_WIDTH 1



typedef enum esuspm {
    ESUSPM_0,
    ESUSPM_1
} ESUSPM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global OUT NAK effective mask 
    // 
#define GONAKEFFM_MASK 0x80U
#define GONAKEFFM_OFFSET 7
#define GONAKEFFM_START_BIT 7
#define GONAKEFFM_WIDTH 1



typedef enum gonakeffm {
    GONAKEFFM_0,
    GONAKEFFM_1
} GONAKEFFM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Global non-periodic IN NAK effective mask 
    // 
#define GINAKEFFM_MASK 0x40U
#define GINAKEFFM_OFFSET 6
#define GINAKEFFM_START_BIT 6
#define GINAKEFFM_WIDTH 1



typedef enum ginakeffm {
    GINAKEFFM_0,
    GINAKEFFM_1
} GINAKEFFM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-periodic TxFIFO empty mask 
    // 
#define NPTXFEM_MASK 0x20U
#define NPTXFEM_OFFSET 5
#define NPTXFEM_START_BIT 5
#define NPTXFEM_WIDTH 1



typedef enum nptxfem {
    NPTXFEM_0,
    NPTXFEM_1
} NPTXFEM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive FIFO non-empty mask 
    // 
#define RXFLVLM_MASK 0x10U
#define RXFLVLM_OFFSET 4
#define RXFLVLM_START_BIT 4
#define RXFLVLM_WIDTH 1



typedef enum rxflvlm {
    RXFLVLM_0,
    RXFLVLM_1
} RXFLVLM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start of frame mask 
    // 
#define SOFM_MASK 0x8U
#define SOFM_OFFSET 3
#define SOFM_START_BIT 3
#define SOFM_WIDTH 1



typedef enum sofm {
    SOFM_0,
    SOFM_1
} SOFM_T ;
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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 2:2

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
// Function : OtgFsGintmsk
//
// Return the value of register OTG_FS_GINTMSK
//
// Notes : Register OTG_FS interrupt mask register (OTG_FS_GINTMSK) (OTG_FS_GINTMSK) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mode mismatch interrupt mask 
    // 
#define MMISM_MASK 0x2U
#define MMISM_OFFSET 1
#define MMISM_START_BIT 1
#define MMISM_WIDTH 1



typedef enum mmism {
    MMISM_0,
    MMISM_1
} MMISM_T ;
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
// Function : OtgFsGrxstsrHost
//
// Return the value of register OTG_FS_GRXSTSR_HOST
//
// Notes : Register OtgFsGrxstsrHost at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_GRXSTSR_HOST() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrHost
//
// Return the value of register OTG_FS_GRXSTSR_HOST
//
// Notes : Register OTG_FS Receive status debug read(Host mode) (OTG_FS_GRXSTSR_Host) at the offset 0x1C, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet status 
    // 
#define PKTSTS_MASK 0x1E0000U
#define PKTSTS_OFFSET 20
#define PKTSTS_START_BIT 17
#define PKTSTS_WIDTH 4


#define OTG_FS_GRXSTSR_HOST_REG 0x1C

typedef enum pktsts {
    PKTSTS_0,
    PKTSTS_1
} PKTSTS_T ;
#define READ_PKTSTS() \
   ((READ_REGISTER_ULONG(0x1C) & PKTSTS_MASK)  >> PKTSTS_START_BIT)

#define WRITE_PKTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ PKTSTS_MASK) | ((val << PKTSTS_START_BIT) & PKTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrHost
//
// Return the value of register OTG_FS_GRXSTSR_HOST
//
// Notes : Register OTG_FS Receive status debug read(Host mode) (OTG_FS_GRXSTSR_Host) at the offset 0x1C, Bits 15:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data PID 
    // 
#define DPID_MASK 0x18000U
#define DPID_OFFSET 16
#define DPID_START_BIT 15
#define DPID_WIDTH 2



typedef enum dpid {
    DPID_0,
    DPID_1
} DPID_T ;
#define READ_DPID() \
   ((READ_REGISTER_ULONG(0x1C) & DPID_MASK)  >> DPID_START_BIT)

#define WRITE_DPID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DPID_MASK) | ((val << DPID_START_BIT) & DPID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrHost
//
// Return the value of register OTG_FS_GRXSTSR_HOST
//
// Notes : Register OTG_FS Receive status debug read(Host mode) (OTG_FS_GRXSTSR_Host) at the offset 0x1C, Bits 4:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Byte count 
    // 
#define BCNT_MASK 0x7FF0U
#define BCNT_OFFSET 14
#define BCNT_START_BIT 4
#define BCNT_WIDTH 11



typedef enum bcnt {
    BCNT_0,
    BCNT_1
} BCNT_T ;
#define READ_BCNT() \
   ((READ_REGISTER_ULONG(0x1C) & BCNT_MASK)  >> BCNT_START_BIT)

#define WRITE_BCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ BCNT_MASK) | ((val << BCNT_START_BIT) & BCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrHost
//
// Return the value of register OTG_FS_GRXSTSR_HOST
//
// Notes : Register OTG_FS Receive status debug read(Host mode) (OTG_FS_GRXSTSR_Host) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define CHNUM_MASK 0xFU
#define CHNUM_OFFSET 3
#define CHNUM_START_BIT 0
#define CHNUM_WIDTH 4



typedef enum chnum {
    CHNUM_0,
    CHNUM_1
} CHNUM_T ;
#define READ_CHNUM() \
   ((READ_REGISTER_ULONG(0x1C) & CHNUM_MASK)  >> CHNUM_START_BIT)

#define WRITE_CHNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CHNUM_MASK) | ((val << CHNUM_START_BIT) & CHNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrDevice
//
// Return the value of register OTG_FS_GRXSTSR_DEVICE
//
// Notes : Register OtgFsGrxstsrDevice at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_GRXSTSR_DEVICE() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrDevice
//
// Return the value of register OTG_FS_GRXSTSR_DEVICE
//
// Notes : Register OTG_FS Receive status debug read(Device mode) (OTG_FS_GRXSTSR_Device) at the offset 0x1C, Bits 21:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number 
    // 
#define FRMNUM_MASK 0x1E00000U
#define FRMNUM_OFFSET 24
#define FRMNUM_START_BIT 21
#define FRMNUM_WIDTH 4


#define OTG_FS_GRXSTSR_DEVICE_REG 0x1C

typedef enum frmnum {
    FRMNUM_0,
    FRMNUM_1
} FRMNUM_T ;
#define READ_FRMNUM() \
   ((READ_REGISTER_ULONG(0x1C) & FRMNUM_MASK)  >> FRMNUM_START_BIT)

#define WRITE_FRMNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ FRMNUM_MASK) | ((val << FRMNUM_START_BIT) & FRMNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstsrDevice
//
// Return the value of register OTG_FS_GRXSTSR_DEVICE
//
// Notes : Register OTG_FS Receive status debug read(Device mode) (OTG_FS_GRXSTSR_Device) at the offset 0x1C, Bits 17:20

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
// Function : OtgFsGrxstsrDevice
//
// Return the value of register OTG_FS_GRXSTSR_DEVICE
//
// Notes : Register OTG_FS Receive status debug read(Device mode) (OTG_FS_GRXSTSR_Device) at the offset 0x1C, Bits 15:16

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
// Function : OtgFsGrxstsrDevice
//
// Return the value of register OTG_FS_GRXSTSR_DEVICE
//
// Notes : Register OTG_FS Receive status debug read(Device mode) (OTG_FS_GRXSTSR_Device) at the offset 0x1C, Bits 4:14

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
// Function : OtgFsGrxstsrDevice
//
// Return the value of register OTG_FS_GRXSTSR_DEVICE
//
// Notes : Register OTG_FS Receive status debug read(Device mode) (OTG_FS_GRXSTSR_Device) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint number 
    // 
#define EPNUM_MASK 0xFU
#define EPNUM_OFFSET 3
#define EPNUM_START_BIT 0
#define EPNUM_WIDTH 4



typedef enum epnum {
    EPNUM_0,
    EPNUM_1
} EPNUM_T ;
#define READ_EPNUM() \
   ((READ_REGISTER_ULONG(0x1C) & EPNUM_MASK)  >> EPNUM_START_BIT)

#define WRITE_EPNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ EPNUM_MASK) | ((val << EPNUM_START_BIT) & EPNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstspHost
//
// Return the value of register OTG_FS_GRXSTSP_HOST
//
// Notes : Register OtgFsGrxstspHost at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_GRXSTSP_HOST() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstspHost
//
// Return the value of register OTG_FS_GRXSTSP_HOST
//
// Notes : Register OTG status read and pop register (Host mode) (OTG_FS_GRXSTSP_Host) at the offset 0x20, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet status 
    // 
#define PKTSTS_MASK 0x1E0000U
#define PKTSTS_OFFSET 20
#define PKTSTS_START_BIT 17
#define PKTSTS_WIDTH 4


#define OTG_FS_GRXSTSP_HOST_REG 0x20

#define READ_PKTSTS() \
   ((READ_REGISTER_ULONG(0x20) & PKTSTS_MASK)  >> PKTSTS_START_BIT)

#define WRITE_PKTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ PKTSTS_MASK) | ((val << PKTSTS_START_BIT) & PKTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstspHost
//
// Return the value of register OTG_FS_GRXSTSP_HOST
//
// Notes : Register OTG status read and pop register (Host mode) (OTG_FS_GRXSTSP_Host) at the offset 0x20, Bits 15:16

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
// Function : OtgFsGrxstspHost
//
// Return the value of register OTG_FS_GRXSTSP_HOST
//
// Notes : Register OTG status read and pop register (Host mode) (OTG_FS_GRXSTSP_Host) at the offset 0x20, Bits 4:14

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
// Function : OtgFsGrxstspHost
//
// Return the value of register OTG_FS_GRXSTSP_HOST
//
// Notes : Register OTG status read and pop register (Host mode) (OTG_FS_GRXSTSP_Host) at the offset 0x20, Bits 0:3

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
// Function : OtgFsGrxstspDevice
//
// Return the value of register OTG_FS_GRXSTSP_DEVICE
//
// Notes : Register OtgFsGrxstspDevice at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_GRXSTSP_DEVICE() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstspDevice
//
// Return the value of register OTG_FS_GRXSTSP_DEVICE
//
// Notes : Register OTG status read and pop register (Device mode) (OTG_FS_GRXSTSP_Device) at the offset 0x20, Bits 21:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Frame number 
    // 
#define FRMNUM_MASK 0x1E00000U
#define FRMNUM_OFFSET 24
#define FRMNUM_START_BIT 21
#define FRMNUM_WIDTH 4


#define OTG_FS_GRXSTSP_DEVICE_REG 0x20

#define READ_FRMNUM() \
   ((READ_REGISTER_ULONG(0x20) & FRMNUM_MASK)  >> FRMNUM_START_BIT)

#define WRITE_FRMNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ FRMNUM_MASK) | ((val << FRMNUM_START_BIT) & FRMNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxstspDevice
//
// Return the value of register OTG_FS_GRXSTSP_DEVICE
//
// Notes : Register OTG status read and pop register (Device mode) (OTG_FS_GRXSTSP_Device) at the offset 0x20, Bits 17:20

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
// Function : OtgFsGrxstspDevice
//
// Return the value of register OTG_FS_GRXSTSP_DEVICE
//
// Notes : Register OTG status read and pop register (Device mode) (OTG_FS_GRXSTSP_Device) at the offset 0x20, Bits 15:16

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
// Function : OtgFsGrxstspDevice
//
// Return the value of register OTG_FS_GRXSTSP_DEVICE
//
// Notes : Register OTG status read and pop register (Device mode) (OTG_FS_GRXSTSP_Device) at the offset 0x20, Bits 4:14

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
// Function : OtgFsGrxstspDevice
//
// Return the value of register OTG_FS_GRXSTSP_DEVICE
//
// Notes : Register OTG status read and pop register (Device mode) (OTG_FS_GRXSTSP_Device) at the offset 0x20, Bits 0:3

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
// Function : OtgFsGrxfsiz
//
// Return the value of register OTG_FS_GRXFSIZ
//
// Notes : Register OtgFsGrxfsiz at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_GRXFSIZ( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_OTG_FS_GRXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_GRXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_GRXFSIZ() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGrxfsiz
//
// Return the value of register OTG_FS_GRXFSIZ
//
// Notes : Register OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ) (OTG_FS_GRXFSIZ) at the offset 0x24, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RxFIFO depth 
    // 
#define RXFD_MASK 0xFFFFU
#define RXFD_OFFSET 15
#define RXFD_START_BIT 0
#define RXFD_WIDTH 16


#define OTG_FS_GRXFSIZ_REG 0x24

typedef enum rxfd {
    RXFD_0,
    RXFD_1
} RXFD_T ;
#define READ_RXFD() \
   ((READ_REGISTER_ULONG(0x24) & RXFD_MASK)  >> RXFD_START_BIT)

#define WRITE_RXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ RXFD_MASK) | ((val << RXFD_START_BIT) & RXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf0Device
//
// Return the value of register OTG_FS_DIEPTXF0_DEVICE
//
// Notes : Register OtgFsDieptxf0Device at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTXF_0_DEVICE( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_OTG_FS_DIEPTXF_0_DEVICE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTXF_0_DEVICE(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTXF_0_DEVICE() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf0Device
//
// Return the value of register OTG_FS_DIEPTXF_0_DEVICE
//
// Notes : Register OTG_FS Endpoint 0 Transmit FIFO size (OTG_FS_DIEPTXF0_Device) at the offset 0x28, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint 0 TxFIFO depth 
    // 
#define TX0FD_MASK 0xFFFF0000U
#define TX0FD_OFFSET 31
#define TX0FD_START_BIT 16
#define TX0FD_WIDTH 16


#define OTG_FS_DIEPTXF_0_DEVICE_REG 0x28

typedef enum tx0fd {
    TX_0FD_0,
    TX_0FD_1
} TX_0FD_T ;
#define READ_TX0FD() \
   ((READ_REGISTER_ULONG(0x28) & TX0FD_MASK)  >> TX0FD_START_BIT)

#define WRITE_TX0FD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ TX0FD_MASK) | ((val << TX0FD_START_BIT) & TX0FD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf0Device
//
// Return the value of register OTG_FS_DIEPTXF_0_DEVICE
//
// Notes : Register OTG_FS Endpoint 0 Transmit FIFO size (OTG_FS_DIEPTXF0_Device) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Endpoint 0 transmit RAM start address 
    // 
#define TX0FSA_MASK 0xFFFFU
#define TX0FSA_OFFSET 15
#define TX0FSA_START_BIT 0
#define TX0FSA_WIDTH 16



typedef enum tx0fsa {
    TX_0FSA_0,
    TX_0FSA_1
} TX_0FSA_T ;
#define READ_TX0FSA() \
   ((READ_REGISTER_ULONG(0x28) & TX0FSA_MASK)  >> TX0FSA_START_BIT)

#define WRITE_TX0FSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ TX0FSA_MASK) | ((val << TX0FSA_START_BIT) & TX0FSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxfsizHost
//
// Return the value of register OTG_FS_HNPTXFSIZ_HOST
//
// Notes : Register OtgFsHnptxfsizHost at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HNPTXFSIZ_HOST( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_OTG_FS_HNPTXFSIZ_HOST(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HNPTXFSIZ_HOST(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HNPTXFSIZ_HOST() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxfsizHost
//
// Return the value of register OTG_FS_HNPTXFSIZ_HOST
//
// Notes : Register OTG_FS Host non-periodic transmit FIFO size register (OTG_FS_HNPTXFSIZ_Host) at the offset 0x28, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-periodic TxFIFO depth 
    // 
#define NPTXFD_MASK 0xFFFF0000U
#define NPTXFD_OFFSET 31
#define NPTXFD_START_BIT 16
#define NPTXFD_WIDTH 16


#define OTG_FS_HNPTXFSIZ_HOST_REG 0x28

typedef enum nptxfd {
    NPTXFD_0,
    NPTXFD_1
} NPTXFD_T ;
#define READ_NPTXFD() \
   ((READ_REGISTER_ULONG(0x28) & NPTXFD_MASK)  >> NPTXFD_START_BIT)

#define WRITE_NPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ NPTXFD_MASK) | ((val << NPTXFD_START_BIT) & NPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxfsizHost
//
// Return the value of register OTG_FS_HNPTXFSIZ_HOST
//
// Notes : Register OTG_FS Host non-periodic transmit FIFO size register (OTG_FS_HNPTXFSIZ_Host) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-periodic transmit RAM start address 
    // 
#define NPTXFSA_MASK 0xFFFFU
#define NPTXFSA_OFFSET 15
#define NPTXFSA_START_BIT 0
#define NPTXFSA_WIDTH 16



typedef enum nptxfsa {
    NPTXFSA_0,
    NPTXFSA_1
} NPTXFSA_T ;
#define READ_NPTXFSA() \
   ((READ_REGISTER_ULONG(0x28) & NPTXFSA_MASK)  >> NPTXFSA_START_BIT)

#define WRITE_NPTXFSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ NPTXFSA_MASK) | ((val << NPTXFSA_START_BIT) & NPTXFSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxsts
//
// Return the value of register OTG_FS_HNPTXSTS
//
// Notes : Register OtgFsHnptxsts at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_OTG_FS_HNPTXSTS() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxsts
//
// Return the value of register OTG_FS_HNPTXSTS
//
// Notes : Register OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS) (OTG_FS_HNPTXSTS) at the offset 0x2C, Bits 24:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Top of the non-periodic transmit request queue 
    // 
#define NPTXQTOP_MASK 0x7F000000U
#define NPTXQTOP_OFFSET 30
#define NPTXQTOP_START_BIT 24
#define NPTXQTOP_WIDTH 7


#define OTG_FS_HNPTXSTS_REG 0x2C

typedef enum nptxqtop {
    NPTXQTOP_0,
    NPTXQTOP_1
} NPTXQTOP_T ;
#define READ_NPTXQTOP() \
   ((READ_REGISTER_ULONG(0x2C) & NPTXQTOP_MASK)  >> NPTXQTOP_START_BIT)

#define WRITE_NPTXQTOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ NPTXQTOP_MASK) | ((val << NPTXQTOP_START_BIT) & NPTXQTOP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxsts
//
// Return the value of register OTG_FS_HNPTXSTS
//
// Notes : Register OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS) (OTG_FS_HNPTXSTS) at the offset 0x2C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-periodic transmit request queue space available 
    // 
#define NPTQXSAV_MASK 0xFF0000U
#define NPTQXSAV_OFFSET 23
#define NPTQXSAV_START_BIT 16
#define NPTQXSAV_WIDTH 8



typedef enum nptqxsav {
    NPTQXSAV_0,
    NPTQXSAV_1
} NPTQXSAV_T ;
#define READ_NPTQXSAV() \
   ((READ_REGISTER_ULONG(0x2C) & NPTQXSAV_MASK)  >> NPTQXSAV_START_BIT)

#define WRITE_NPTQXSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ NPTQXSAV_MASK) | ((val << NPTQXSAV_START_BIT) & NPTQXSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHnptxsts
//
// Return the value of register OTG_FS_HNPTXSTS
//
// Notes : Register OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS) (OTG_FS_HNPTXSTS) at the offset 0x2C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Non-periodic TxFIFO space available 
    // 
#define NPTXFSAV_MASK 0xFFFFU
#define NPTXFSAV_OFFSET 15
#define NPTXFSAV_START_BIT 0
#define NPTXFSAV_WIDTH 16



typedef enum nptxfsav {
    NPTXFSAV_0,
    NPTXFSAV_1
} NPTXFSAV_T ;
#define READ_NPTXFSAV() \
   ((READ_REGISTER_ULONG(0x2C) & NPTXFSAV_MASK)  >> NPTXFSAV_START_BIT)

#define WRITE_NPTXFSAV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ NPTXFSAV_MASK) | ((val << NPTXFSAV_START_BIT) & NPTXFSAV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI2CCTL
//
// Notes : Register OtgFsGi2cctl at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_GI_2CCTL( y) \
     WRITE_REGISTER_ULONG( 0x30 , y)

#define SET_BITS_OTG_FS_GI_2CCTL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_GI_2CCTL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_GI_2CCTL() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C Busy/Done 
    // 
#define BSYDNE_MASK 0x80000000U
#define BSYDNE_OFFSET 31
#define BSYDNE_START_BIT 31
#define BSYDNE_WIDTH 1


#define OTG_FS_GI_2CCTL_REG 0x30

typedef enum bsydne {
    BSYDNE_0,
    BSYDNE_1
} BSYDNE_T ;
#define WRITE_BSYDNE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ BSYDNE_MASK) | ((val << BSYDNE_START_BIT) & BSYDNE_MASK )); \
   } 

#define ENABLE_BSYDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  BSYDNE_MASK ); \
   }

#define DISABLE_BSYDNE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~BSYDNE_MASK ); \
   } 

#define READ_BSYDNE() \
   ((READ_REGISTER_ULONG(0x30) & BSYDNE_MASK)  >> BSYDNE_START_BIT)

#define WHEN_BSYDNE_HIGH() \
     if ( READ_BSYDNE() )


#define UNLESS_BSYDNE_HIGH() \
     if (! READ_BSYDNE() )


#define WAIT_BSYDNE_LOW() \
    while ( READ_BSYDNE() );


#define WAIT_BSYDNE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BSYDNE() && (--___t___ > 0)); }


#define WAIT_BSYDNE_HIGH() \
    while (! READ_BSYDNE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read/Write Indicator 
    // 
#define RW_MASK 0x40000000U
#define RW_OFFSET 30
#define RW_START_BIT 30
#define RW_WIDTH 1



typedef enum rw {
    RW_0,
    RW_1
} RW_T ;
#define WRITE_RW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ RW_MASK) | ((val << RW_START_BIT) & RW_MASK )); \
   } 

#define ENABLE_RW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  RW_MASK ); \
   }

#define DISABLE_RW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~RW_MASK ); \
   } 

#define READ_RW() \
   ((READ_REGISTER_ULONG(0x30) & RW_MASK)  >> RW_START_BIT)

#define WHEN_RW_HIGH() \
     if ( READ_RW() )


#define UNLESS_RW_HIGH() \
     if (! READ_RW() )


#define WAIT_RW_LOW() \
    while ( READ_RW() );


#define WAIT_RW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RW() && (--___t___ > 0)); }


#define WAIT_RW_HIGH() \
    while (! READ_RW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C DatSe0 USB mode 
    // 
#define I2CDATSE0_MASK 0x10000000U
#define I2CDATSE0_OFFSET 28
#define I2CDATSE0_START_BIT 28
#define I2CDATSE0_WIDTH 1



typedef enum i2cdatse0 {
    I_2CDATSE_0_0,
    I_2CDATSE_0_1
} I_2CDATSE_0_T ;
#define WRITE_I2CDATSE0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ I2CDATSE0_MASK) | ((val << I2CDATSE0_START_BIT) & I2CDATSE0_MASK )); \
   } 

#define ENABLE_I2CDATSE0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  I2CDATSE0_MASK ); \
   }

#define DISABLE_I2CDATSE0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~I2CDATSE0_MASK ); \
   } 

#define READ_I2CDATSE0() \
   ((READ_REGISTER_ULONG(0x30) & I2CDATSE0_MASK)  >> I2CDATSE0_START_BIT)

#define WHEN_I2CDATSE0_HIGH() \
     if ( READ_I2CDATSE0() )


#define UNLESS_I2CDATSE0_HIGH() \
     if (! READ_I2CDATSE0() )


#define WAIT_I2CDATSE0_LOW() \
    while ( READ_I2CDATSE0() );


#define WAIT_I2CDATSE0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2CDATSE0() && (--___t___ > 0)); }


#define WAIT_I2CDATSE0_HIGH() \
    while (! READ_I2CDATSE0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 26:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C Device Address 
    // 
#define I2CDEVADR_MASK 0xC000000U
#define I2CDEVADR_OFFSET 27
#define I2CDEVADR_START_BIT 26
#define I2CDEVADR_WIDTH 2



typedef enum i2cdevadr {
    I_2CDEVADR_0,
    I_2CDEVADR_1
} I_2CDEVADR_T ;
#define READ_I2CDEVADR() \
   ((READ_REGISTER_ULONG(0x30) & I2CDEVADR_MASK)  >> I2CDEVADR_START_BIT)

#define WRITE_I2CDEVADR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ I2CDEVADR_MASK) | ((val << I2CDEVADR_START_BIT) & I2CDEVADR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C ACK 
    // 
#define ACK_MASK 0x1000000U
#define ACK_OFFSET 24
#define ACK_START_BIT 24
#define ACK_WIDTH 1



typedef enum ack {
    ACK_0,
    ACK_1
} ACK_T ;
#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x30) & ACK_MASK)  >> ACK_START_BIT)

#define WHEN_ACK_HIGH() \
     if ( READ_ACK() )


#define UNLESS_ACK_HIGH() \
     if (! READ_ACK() )


#define WAIT_ACK_LOW() \
    while ( READ_ACK() );


#define WAIT_ACK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ACK() && (--___t___ > 0)); }


#define WAIT_ACK_HIGH() \
    while (! READ_ACK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C Enable 
    // 
#define I2CEN_MASK 0x800000U
#define I2CEN_OFFSET 23
#define I2CEN_START_BIT 23
#define I2CEN_WIDTH 1



typedef enum i2cen {
    I_2CEN_0,
    I_2CEN_1
} I_2CEN_T ;
#define WRITE_I2CEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ I2CEN_MASK) | ((val << I2CEN_START_BIT) & I2CEN_MASK )); \
   } 

#define ENABLE_I2CEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  I2CEN_MASK ); \
   }

#define DISABLE_I2CEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~I2CEN_MASK ); \
   } 

#define READ_I2CEN() \
   ((READ_REGISTER_ULONG(0x30) & I2CEN_MASK)  >> I2CEN_START_BIT)

#define WHEN_I2CEN_HIGH() \
     if ( READ_I2CEN() )


#define UNLESS_I2CEN_HIGH() \
     if (! READ_I2CEN() )


#define WAIT_I2CEN_LOW() \
    while ( READ_I2CEN() );


#define WAIT_I2CEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_I2CEN() && (--___t___ > 0)); }


#define WAIT_I2CEN_HIGH() \
    while (! READ_I2CEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 16:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C Address 
    // 
#define ADDR_MASK 0x7F0000U
#define ADDR_OFFSET 22
#define ADDR_START_BIT 16
#define ADDR_WIDTH 7



typedef enum addr {
    ADDR_0,
    ADDR_1
} ADDR_T ;
#define READ_ADDR() \
   ((READ_REGISTER_ULONG(0x30) & ADDR_MASK)  >> ADDR_START_BIT)

#define WRITE_ADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ADDR_MASK) | ((val << ADDR_START_BIT) & ADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C Register Address 
    // 
#define REGADDR_MASK 0xFF00U
#define REGADDR_OFFSET 15
#define REGADDR_START_BIT 8
#define REGADDR_WIDTH 8



typedef enum regaddr {
    REGADDR_0,
    REGADDR_1
} REGADDR_T ;
#define READ_REGADDR() \
   ((READ_REGISTER_ULONG(0x30) & REGADDR_MASK)  >> REGADDR_START_BIT)

#define WRITE_REGADDR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ REGADDR_MASK) | ((val << REGADDR_START_BIT) & REGADDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGi2cctl
//
// Return the value of register OTG_FS_GI_2CCTL
//
// Notes : Register OTG I2C access register (OTG_FS_GI2CCTL) at the offset 0x30, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2C Read/Write Data 
    // 
#define RWDATA_MASK 0xFFU
#define RWDATA_OFFSET 7
#define RWDATA_START_BIT 0
#define RWDATA_WIDTH 8



typedef enum rwdata {
    RWDATA_0,
    RWDATA_1
} RWDATA_T ;
#define READ_RWDATA() \
   ((READ_REGISTER_ULONG(0x30) & RWDATA_MASK)  >> RWDATA_START_BIT)

#define WRITE_RWDATA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ RWDATA_MASK) | ((val << RWDATA_START_BIT) & RWDATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OtgFsGccfg at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_GCCFG( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_OTG_FS_GCCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_GCCFG(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_GCCFG() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DM pull-up detection status 
    // 
#define PS2DET_MASK 0x8U
#define PS2DET_OFFSET 3
#define PS2DET_START_BIT 3
#define PS2DET_WIDTH 1


#define OTG_FS_GCCFG_REG 0x38

typedef enum ps2det {
    PS_2DET_0,
    PS_2DET_1
} PS_2DET_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Secondary detection (SD) status 
    // 
#define SDET_MASK 0x4U
#define SDET_OFFSET 2
#define SDET_START_BIT 2
#define SDET_WIDTH 1



typedef enum sdet {
    SDET_0,
    SDET_1
} SDET_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Primary detection (PD) status 
    // 
#define PDET_MASK 0x2U
#define PDET_OFFSET 1
#define PDET_START_BIT 1
#define PDET_WIDTH 1



typedef enum pdet {
    PDET_0,
    PDET_1
} PDET_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data contact detection (DCD) status 
    // 
#define DCDET_MASK 0x1U
#define DCDET_OFFSET 0
#define DCDET_START_BIT 0
#define DCDET_WIDTH 1



typedef enum dcdet {
    DCDET_0,
    DCDET_1
} DCDET_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USB VBUS detection enable 
    // 
#define VBDEN_MASK 0x200000U
#define VBDEN_OFFSET 21
#define VBDEN_START_BIT 21
#define VBDEN_WIDTH 1



typedef enum vbden {
    VBDEN_0,
    VBDEN_1
} VBDEN_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Secondary detection (SD) mode enable 
    // 
#define SDEN_MASK 0x100000U
#define SDEN_OFFSET 20
#define SDEN_START_BIT 20
#define SDEN_WIDTH 1



typedef enum sden {
    SDEN_0,
    SDEN_1
} SDEN_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Primary detection (PD) mode enable 
    // 
#define PDEN_MASK 0x80000U
#define PDEN_OFFSET 19
#define PDEN_START_BIT 19
#define PDEN_WIDTH 1



typedef enum pden {
    PDEN_0,
    PDEN_1
} PDEN_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data contact detection (DCD) mode enable 
    // 
#define DCDEN_MASK 0x40000U
#define DCDEN_OFFSET 18
#define DCDEN_START_BIT 18
#define DCDEN_WIDTH 1



typedef enum dcden {
    DCDEN_0,
    DCDEN_1
} DCDEN_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Battery charging detector (BCD) enable 
    // 
#define BCDEN_MASK 0x20000U
#define BCDEN_OFFSET 17
#define BCDEN_START_BIT 17
#define BCDEN_WIDTH 1



typedef enum bcden {
    BCDEN_0,
    BCDEN_1
} BCDEN_T ;
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
// Function : OtgFsGccfg
//
// Return the value of register OTG_FS_GCCFG
//
// Notes : Register OTG_FS general core configuration register (OTG_FS_GCCFG) (OTG_FS_GCCFG) at the offset 0x38, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Power down 
    // 
#define PWRDWN_MASK 0x10000U
#define PWRDWN_OFFSET 16
#define PWRDWN_START_BIT 16
#define PWRDWN_WIDTH 1



typedef enum pwrdwn {
    PWRDWN_0,
    PWRDWN_1
} PWRDWN_T ;
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
// Function : OtgFsCid
//
// Return the value of register OTG_FS_CID
//
// Notes : Register OtgFsCid at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_CID( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_OTG_FS_CID(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_CID(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_CID() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsCid
//
// Return the value of register OTG_FS_CID
//
// Notes : Register core ID register (OTG_FS_CID) at the offset 0x3C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Product ID field 
    // 
#define PRODUCT_ID_MASK 0xFFFFFFFFU
#define PRODUCT_ID_OFFSET 31
#define PRODUCT_ID_START_BIT 0
#define PRODUCT_ID_WIDTH 32


#define OTG_FS_CID_REG 0x3C

typedef enum product_id {
    PRODUCT_ID_0,
    PRODUCT_ID_1
} PRODUCT_ID_T ;
#define READ_PRODUCT_ID() \
   ((READ_REGISTER_ULONG(0x3C) & PRODUCT_ID_MASK)  >> PRODUCT_ID_START_BIT)

#define WRITE_PRODUCT_ID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ PRODUCT_ID_MASK) | ((val << PRODUCT_ID_START_BIT) & PRODUCT_ID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OtgFsGlpmcfg at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable best effort service latency 
    // 
#define ENBESL_MASK 0x10000000U
#define ENBESL_OFFSET 28
#define ENBESL_START_BIT 28
#define ENBESL_WIDTH 1


#define OTG_FS_GLPMCFG_REG 0x54

typedef enum enbesl {
    ENBESL_0,
    ENBESL_1
} ENBESL_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM retry count status 
    // 
#define LPMRCNTSTS_MASK 0xE000000U
#define LPMRCNTSTS_OFFSET 27
#define LPMRCNTSTS_START_BIT 25
#define LPMRCNTSTS_WIDTH 3



typedef enum lpmrcntsts {
    LPMRCNTSTS_0,
    LPMRCNTSTS_1
} LPMRCNTSTS_T ;
#define READ_LPMRCNTSTS() \
   ((READ_REGISTER_ULONG(0x54) & LPMRCNTSTS_MASK)  >> LPMRCNTSTS_START_BIT)

#define WRITE_LPMRCNTSTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMRCNTSTS_MASK) | ((val << LPMRCNTSTS_START_BIT) & LPMRCNTSTS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Send LPM transaction 
    // 
#define SNDLPM_MASK 0x1000000U
#define SNDLPM_OFFSET 24
#define SNDLPM_START_BIT 24
#define SNDLPM_WIDTH 1



typedef enum sndlpm {
    SNDLPM_0,
    SNDLPM_1
} SNDLPM_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 21:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM retry count 
    // 
#define LPMRCNT_MASK 0xE00000U
#define LPMRCNT_OFFSET 23
#define LPMRCNT_START_BIT 21
#define LPMRCNT_WIDTH 3



typedef enum lpmrcnt {
    LPMRCNT_0,
    LPMRCNT_1
} LPMRCNT_T ;
#define READ_LPMRCNT() \
   ((READ_REGISTER_ULONG(0x54) & LPMRCNT_MASK)  >> LPMRCNT_START_BIT)

#define WRITE_LPMRCNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMRCNT_MASK) | ((val << LPMRCNT_START_BIT) & LPMRCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 17:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM Channel Index 
    // 
#define LPMCHIDX_MASK 0x1E0000U
#define LPMCHIDX_OFFSET 20
#define LPMCHIDX_START_BIT 17
#define LPMCHIDX_WIDTH 4



typedef enum lpmchidx {
    LPMCHIDX_0,
    LPMCHIDX_1
} LPMCHIDX_T ;
#define READ_LPMCHIDX() \
   ((READ_REGISTER_ULONG(0x54) & LPMCHIDX_MASK)  >> LPMCHIDX_START_BIT)

#define WRITE_LPMCHIDX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMCHIDX_MASK) | ((val << LPMCHIDX_START_BIT) & LPMCHIDX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sleep State Resume OK 
    // 
#define L1RSMOK_MASK 0x10000U
#define L1RSMOK_OFFSET 16
#define L1RSMOK_START_BIT 16
#define L1RSMOK_WIDTH 1



typedef enum l1rsmok {
    L_1RSMOK_0,
    L_1RSMOK_1
} L_1RSMOK_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Port sleep status 
    // 
#define SLPSTS_MASK 0x8000U
#define SLPSTS_OFFSET 15
#define SLPSTS_START_BIT 15
#define SLPSTS_WIDTH 1



typedef enum slpsts {
    SLPSTS_0,
    SLPSTS_1
} SLPSTS_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM response 
    // 
#define LPMRST_MASK 0x6000U
#define LPMRST_OFFSET 14
#define LPMRST_START_BIT 13
#define LPMRST_WIDTH 2



typedef enum lpmrst {
    LPMRST_0,
    LPMRST_1
} LPMRST_T ;
#define READ_LPMRST() \
   ((READ_REGISTER_ULONG(0x54) & LPMRST_MASK)  >> LPMRST_START_BIT)

#define WRITE_LPMRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ LPMRST_MASK) | ((val << LPMRST_START_BIT) & LPMRST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // L1 deep sleep enable 
    // 
#define L1DSEN_MASK 0x1000U
#define L1DSEN_OFFSET 12
#define L1DSEN_START_BIT 12
#define L1DSEN_WIDTH 1



typedef enum l1dsen {
    L_1DSEN_0,
    L_1DSEN_1
} L_1DSEN_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BESL threshold 
    // 
#define BESLTHRS_MASK 0xF00U
#define BESLTHRS_OFFSET 11
#define BESLTHRS_START_BIT 8
#define BESLTHRS_WIDTH 4



typedef enum beslthrs {
    BESLTHRS_0,
    BESLTHRS_1
} BESLTHRS_T ;
#define READ_BESLTHRS() \
   ((READ_REGISTER_ULONG(0x54) & BESLTHRS_MASK)  >> BESLTHRS_START_BIT)

#define WRITE_BESLTHRS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ BESLTHRS_MASK) | ((val << BESLTHRS_START_BIT) & BESLTHRS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // L1 Shallow Sleep enable 
    // 
#define L1SSEN_MASK 0x80U
#define L1SSEN_OFFSET 7
#define L1SSEN_START_BIT 7
#define L1SSEN_WIDTH 1



typedef enum l1ssen {
    L_1SSEN_0,
    L_1SSEN_1
} L_1SSEN_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bRemoteWake value 
    // 
#define REMWAKE_MASK 0x40U
#define REMWAKE_OFFSET 6
#define REMWAKE_START_BIT 6
#define REMWAKE_WIDTH 1



typedef enum remwake {
    REMWAKE_0,
    REMWAKE_1
} REMWAKE_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 2:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Best effort service latency 
    // 
#define BESL_MASK 0x3CU
#define BESL_OFFSET 5
#define BESL_START_BIT 2
#define BESL_WIDTH 4



typedef enum besl {
    BESL_0,
    BESL_1
} BESL_T ;
#define READ_BESL() \
   ((READ_REGISTER_ULONG(0x54) & BESL_MASK)  >> BESL_START_BIT)

#define WRITE_BESL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ BESL_MASK) | ((val << BESL_START_BIT) & BESL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM token acknowledge enable 
    // 
#define LPMACK_MASK 0x2U
#define LPMACK_OFFSET 1
#define LPMACK_START_BIT 1
#define LPMACK_WIDTH 1



typedef enum lpmack {
    LPMACK_0,
    LPMACK_1
} LPMACK_T ;
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
// Function : OtgFsGlpmcfg
//
// Return the value of register OTG_FS_GLPMCFG
//
// Notes : Register OTG core LPM configuration register (OTG_FS_GLPMCFG) at the offset 0x54, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LPM support enable 
    // 
#define LPMEN_MASK 0x1U
#define LPMEN_OFFSET 0
#define LPMEN_START_BIT 0
#define LPMEN_WIDTH 1



typedef enum lpmen {
    LPMEN_0,
    LPMEN_1
} LPMEN_T ;
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
// Function : OtgFsGpwrdn
//
// Return the value of register OTG_FS_GPWRDN
//
// Notes : Register OtgFsGpwrdn at offset 0x58
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_GPWRDN( y) \
     WRITE_REGISTER_ULONG( 0x58 , y)

#define SET_BITS_OTG_FS_GPWRDN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_GPWRDN(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_GPWRDN() \
     READ_REGISTER_ULONG(0x58)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGpwrdn
//
// Return the value of register OTG_FS_GPWRDN
//
// Notes : Register OTG power down register (OTG_FS_GPWRDN) at the offset 0x58, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP interrupt flag 
    // 
#define ADPIF_MASK 0x800000U
#define ADPIF_OFFSET 23
#define ADPIF_START_BIT 23
#define ADPIF_WIDTH 1


#define OTG_FS_GPWRDN_REG 0x58

typedef enum adpif {
    ADPIF_0,
    ADPIF_1
} ADPIF_T ;
#define WRITE_ADPIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ ADPIF_MASK) | ((val << ADPIF_START_BIT) & ADPIF_MASK )); \
   } 

#define ENABLE_ADPIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  ADPIF_MASK ); \
   }

#define DISABLE_ADPIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG(0x58, val & ~ADPIF_MASK ); \
   } 

#define READ_ADPIF() \
   ((READ_REGISTER_ULONG(0x58) & ADPIF_MASK)  >> ADPIF_START_BIT)

#define WHEN_ADPIF_HIGH() \
     if ( READ_ADPIF() )


#define UNLESS_ADPIF_HIGH() \
     if (! READ_ADPIF() )


#define WAIT_ADPIF_LOW() \
    while ( READ_ADPIF() );


#define WAIT_ADPIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPIF() && (--___t___ > 0)); }


#define WAIT_ADPIF_HIGH() \
    while (! READ_ADPIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGpwrdn
//
// Return the value of register OTG_FS_GPWRDN
//
// Notes : Register OTG power down register (OTG_FS_GPWRDN) at the offset 0x58, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP module enable 
    // 
#define ADPMEN_MASK 0x1U
#define ADPMEN_OFFSET 0
#define ADPMEN_START_BIT 0
#define ADPMEN_WIDTH 1



typedef enum adpmen {
    ADPMEN_0,
    ADPMEN_1
} ADPMEN_T ;
#define WRITE_ADPMEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ ADPMEN_MASK) | ((val << ADPMEN_START_BIT) & ADPMEN_MASK )); \
   } 

#define ENABLE_ADPMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  ADPMEN_MASK ); \
   }

#define DISABLE_ADPMEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG(0x58, val & ~ADPMEN_MASK ); \
   } 

#define READ_ADPMEN() \
   ((READ_REGISTER_ULONG(0x58) & ADPMEN_MASK)  >> ADPMEN_START_BIT)

#define WHEN_ADPMEN_HIGH() \
     if ( READ_ADPMEN() )


#define UNLESS_ADPMEN_HIGH() \
     if (! READ_ADPMEN() )


#define WAIT_ADPMEN_LOW() \
    while ( READ_ADPMEN() );


#define WAIT_ADPMEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPMEN() && (--___t___ > 0)); }


#define WAIT_ADPMEN_HIGH() \
    while (! READ_ADPMEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OtgFsGadpctl at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 27:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Access request 
    // 
#define AR_MASK 0x18000000U
#define AR_OFFSET 28
#define AR_START_BIT 27
#define AR_WIDTH 2


#define OTG_FS_GADPCTL_REG 0x60

typedef enum ar {
    AR_0,
    AR_1
} AR_T ;
#define READ_AR() \
   ((READ_REGISTER_ULONG(0x60) & AR_MASK)  >> AR_START_BIT)

#define WRITE_AR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ AR_MASK) | ((val << AR_START_BIT) & AR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP timeout interrupt mask 
    // 
#define ADPTOIM_MASK 0x4000000U
#define ADPTOIM_OFFSET 26
#define ADPTOIM_START_BIT 26
#define ADPTOIM_WIDTH 1



typedef enum adptoim {
    ADPTOIM_0,
    ADPTOIM_1
} ADPTOIM_T ;
#define WRITE_ADPTOIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPTOIM_MASK) | ((val << ADPTOIM_START_BIT) & ADPTOIM_MASK )); \
   } 

#define ENABLE_ADPTOIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPTOIM_MASK ); \
   }

#define DISABLE_ADPTOIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPTOIM_MASK ); \
   } 

#define READ_ADPTOIM() \
   ((READ_REGISTER_ULONG(0x60) & ADPTOIM_MASK)  >> ADPTOIM_START_BIT)

#define WHEN_ADPTOIM_HIGH() \
     if ( READ_ADPTOIM() )


#define UNLESS_ADPTOIM_HIGH() \
     if (! READ_ADPTOIM() )


#define WAIT_ADPTOIM_LOW() \
    while ( READ_ADPTOIM() );


#define WAIT_ADPTOIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPTOIM() && (--___t___ > 0)); }


#define WAIT_ADPTOIM_HIGH() \
    while (! READ_ADPTOIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP sense interrupt mask 
    // 
#define ADPSNSIM_MASK 0x2000000U
#define ADPSNSIM_OFFSET 25
#define ADPSNSIM_START_BIT 25
#define ADPSNSIM_WIDTH 1



typedef enum adpsnsim {
    ADPSNSIM_0,
    ADPSNSIM_1
} ADPSNSIM_T ;
#define WRITE_ADPSNSIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPSNSIM_MASK) | ((val << ADPSNSIM_START_BIT) & ADPSNSIM_MASK )); \
   } 

#define ENABLE_ADPSNSIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPSNSIM_MASK ); \
   }

#define DISABLE_ADPSNSIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPSNSIM_MASK ); \
   } 

#define READ_ADPSNSIM() \
   ((READ_REGISTER_ULONG(0x60) & ADPSNSIM_MASK)  >> ADPSNSIM_START_BIT)

#define WHEN_ADPSNSIM_HIGH() \
     if ( READ_ADPSNSIM() )


#define UNLESS_ADPSNSIM_HIGH() \
     if (! READ_ADPSNSIM() )


#define WAIT_ADPSNSIM_LOW() \
    while ( READ_ADPSNSIM() );


#define WAIT_ADPSNSIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPSNSIM() && (--___t___ > 0)); }


#define WAIT_ADPSNSIM_HIGH() \
    while (! READ_ADPSNSIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP probe interrupt mask 
    // 
#define ADPPRBIM_MASK 0x1000000U
#define ADPPRBIM_OFFSET 24
#define ADPPRBIM_START_BIT 24
#define ADPPRBIM_WIDTH 1



typedef enum adpprbim {
    ADPPRBIM_0,
    ADPPRBIM_1
} ADPPRBIM_T ;
#define WRITE_ADPPRBIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPPRBIM_MASK) | ((val << ADPPRBIM_START_BIT) & ADPPRBIM_MASK )); \
   } 

#define ENABLE_ADPPRBIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPPRBIM_MASK ); \
   }

#define DISABLE_ADPPRBIM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPPRBIM_MASK ); \
   } 

#define READ_ADPPRBIM() \
   ((READ_REGISTER_ULONG(0x60) & ADPPRBIM_MASK)  >> ADPPRBIM_START_BIT)

#define WHEN_ADPPRBIM_HIGH() \
     if ( READ_ADPPRBIM() )


#define UNLESS_ADPPRBIM_HIGH() \
     if (! READ_ADPPRBIM() )


#define WAIT_ADPPRBIM_LOW() \
    while ( READ_ADPPRBIM() );


#define WAIT_ADPPRBIM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPPRBIM() && (--___t___ > 0)); }


#define WAIT_ADPPRBIM_HIGH() \
    while (! READ_ADPPRBIM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP timeout interrupt flag 
    // 
#define ADPTOIF_MASK 0x800000U
#define ADPTOIF_OFFSET 23
#define ADPTOIF_START_BIT 23
#define ADPTOIF_WIDTH 1



typedef enum adptoif {
    ADPTOIF_0,
    ADPTOIF_1
} ADPTOIF_T ;
#define WRITE_ADPTOIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPTOIF_MASK) | ((val << ADPTOIF_START_BIT) & ADPTOIF_MASK )); \
   } 

#define ENABLE_ADPTOIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPTOIF_MASK ); \
   }

#define DISABLE_ADPTOIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPTOIF_MASK ); \
   } 

#define READ_ADPTOIF() \
   ((READ_REGISTER_ULONG(0x60) & ADPTOIF_MASK)  >> ADPTOIF_START_BIT)

#define WHEN_ADPTOIF_HIGH() \
     if ( READ_ADPTOIF() )


#define UNLESS_ADPTOIF_HIGH() \
     if (! READ_ADPTOIF() )


#define WAIT_ADPTOIF_LOW() \
    while ( READ_ADPTOIF() );


#define WAIT_ADPTOIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPTOIF() && (--___t___ > 0)); }


#define WAIT_ADPTOIF_HIGH() \
    while (! READ_ADPTOIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP sense interrupt flag 
    // 
#define ADPSNSIF_MASK 0x400000U
#define ADPSNSIF_OFFSET 22
#define ADPSNSIF_START_BIT 22
#define ADPSNSIF_WIDTH 1



typedef enum adpsnsif {
    ADPSNSIF_0,
    ADPSNSIF_1
} ADPSNSIF_T ;
#define WRITE_ADPSNSIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPSNSIF_MASK) | ((val << ADPSNSIF_START_BIT) & ADPSNSIF_MASK )); \
   } 

#define ENABLE_ADPSNSIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPSNSIF_MASK ); \
   }

#define DISABLE_ADPSNSIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPSNSIF_MASK ); \
   } 

#define READ_ADPSNSIF() \
   ((READ_REGISTER_ULONG(0x60) & ADPSNSIF_MASK)  >> ADPSNSIF_START_BIT)

#define WHEN_ADPSNSIF_HIGH() \
     if ( READ_ADPSNSIF() )


#define UNLESS_ADPSNSIF_HIGH() \
     if (! READ_ADPSNSIF() )


#define WAIT_ADPSNSIF_LOW() \
    while ( READ_ADPSNSIF() );


#define WAIT_ADPSNSIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPSNSIF() && (--___t___ > 0)); }


#define WAIT_ADPSNSIF_HIGH() \
    while (! READ_ADPSNSIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP probe interrupt flag 
    // 
#define ADPPRBIF_MASK 0x200000U
#define ADPPRBIF_OFFSET 21
#define ADPPRBIF_START_BIT 21
#define ADPPRBIF_WIDTH 1



typedef enum adpprbif {
    ADPPRBIF_0,
    ADPPRBIF_1
} ADPPRBIF_T ;
#define WRITE_ADPPRBIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPPRBIF_MASK) | ((val << ADPPRBIF_START_BIT) & ADPPRBIF_MASK )); \
   } 

#define ENABLE_ADPPRBIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPPRBIF_MASK ); \
   }

#define DISABLE_ADPPRBIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPPRBIF_MASK ); \
   } 

#define READ_ADPPRBIF() \
   ((READ_REGISTER_ULONG(0x60) & ADPPRBIF_MASK)  >> ADPPRBIF_START_BIT)

#define WHEN_ADPPRBIF_HIGH() \
     if ( READ_ADPPRBIF() )


#define UNLESS_ADPPRBIF_HIGH() \
     if (! READ_ADPPRBIF() )


#define WAIT_ADPPRBIF_LOW() \
    while ( READ_ADPPRBIF() );


#define WAIT_ADPPRBIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPPRBIF() && (--___t___ > 0)); }


#define WAIT_ADPPRBIF_HIGH() \
    while (! READ_ADPPRBIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP enable 
    // 
#define ADPEN_MASK 0x100000U
#define ADPEN_OFFSET 20
#define ADPEN_START_BIT 20
#define ADPEN_WIDTH 1



typedef enum adpen {
    ADPEN_0,
    ADPEN_1
} ADPEN_T ;
#define WRITE_ADPEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPEN_MASK) | ((val << ADPEN_START_BIT) & ADPEN_MASK )); \
   } 

#define ENABLE_ADPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPEN_MASK ); \
   }

#define DISABLE_ADPEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPEN_MASK ); \
   } 

#define READ_ADPEN() \
   ((READ_REGISTER_ULONG(0x60) & ADPEN_MASK)  >> ADPEN_START_BIT)

#define WHEN_ADPEN_HIGH() \
     if ( READ_ADPEN() )


#define UNLESS_ADPEN_HIGH() \
     if (! READ_ADPEN() )


#define WAIT_ADPEN_LOW() \
    while ( READ_ADPEN() );


#define WAIT_ADPEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPEN() && (--___t___ > 0)); }


#define WAIT_ADPEN_HIGH() \
    while (! READ_ADPEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADP reset 
    // 
#define ADPRST_MASK 0x80000U
#define ADPRST_OFFSET 19
#define ADPRST_START_BIT 19
#define ADPRST_WIDTH 1



typedef enum adprst {
    ADPRST_0,
    ADPRST_1
} ADPRST_T ;
#define WRITE_ADPRST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ADPRST_MASK) | ((val << ADPRST_START_BIT) & ADPRST_MASK )); \
   } 

#define ENABLE_ADPRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ADPRST_MASK ); \
   }

#define DISABLE_ADPRST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ADPRST_MASK ); \
   } 

#define READ_ADPRST() \
   ((READ_REGISTER_ULONG(0x60) & ADPRST_MASK)  >> ADPRST_START_BIT)

#define WHEN_ADPRST_HIGH() \
     if ( READ_ADPRST() )


#define UNLESS_ADPRST_HIGH() \
     if (! READ_ADPRST() )


#define WAIT_ADPRST_LOW() \
    while ( READ_ADPRST() );


#define WAIT_ADPRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADPRST() && (--___t___ > 0)); }


#define WAIT_ADPRST_HIGH() \
    while (! READ_ADPRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable sense 
    // 
#define ENASNS_MASK 0x40000U
#define ENASNS_OFFSET 18
#define ENASNS_START_BIT 18
#define ENASNS_WIDTH 1



typedef enum enasns {
    ENASNS_0,
    ENASNS_1
} ENASNS_T ;
#define WRITE_ENASNS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ENASNS_MASK) | ((val << ENASNS_START_BIT) & ENASNS_MASK )); \
   } 

#define ENABLE_ENASNS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ENASNS_MASK ); \
   }

#define DISABLE_ENASNS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ENASNS_MASK ); \
   } 

#define READ_ENASNS() \
   ((READ_REGISTER_ULONG(0x60) & ENASNS_MASK)  >> ENASNS_START_BIT)

#define WHEN_ENASNS_HIGH() \
     if ( READ_ENASNS() )


#define UNLESS_ENASNS_HIGH() \
     if (! READ_ENASNS() )


#define WAIT_ENASNS_LOW() \
    while ( READ_ENASNS() );


#define WAIT_ENASNS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENASNS() && (--___t___ > 0)); }


#define WAIT_ENASNS_HIGH() \
    while (! READ_ENASNS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable probe 
    // 
#define ENAPRB_MASK 0x20000U
#define ENAPRB_OFFSET 17
#define ENAPRB_START_BIT 17
#define ENAPRB_WIDTH 1



typedef enum enaprb {
    ENAPRB_0,
    ENAPRB_1
} ENAPRB_T ;
#define WRITE_ENAPRB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ ENAPRB_MASK) | ((val << ENAPRB_START_BIT) & ENAPRB_MASK )); \
   } 

#define ENABLE_ENAPRB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  ENAPRB_MASK ); \
   }

#define DISABLE_ENAPRB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG(0x60, val & ~ENAPRB_MASK ); \
   } 

#define READ_ENAPRB() \
   ((READ_REGISTER_ULONG(0x60) & ENAPRB_MASK)  >> ENAPRB_START_BIT)

#define WHEN_ENAPRB_HIGH() \
     if ( READ_ENAPRB() )


#define UNLESS_ENAPRB_HIGH() \
     if (! READ_ENAPRB() )


#define WAIT_ENAPRB_LOW() \
    while ( READ_ENAPRB() );


#define WAIT_ENAPRB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ENAPRB() && (--___t___ > 0)); }


#define WAIT_ENAPRB_HIGH() \
    while (! READ_ENAPRB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 6:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ramp time 
    // 
#define RTIM_MASK 0x1FFC0U
#define RTIM_OFFSET 16
#define RTIM_START_BIT 6
#define RTIM_WIDTH 11



typedef enum rtim {
    RTIM_0,
    RTIM_1
} RTIM_T ;
#define READ_RTIM() \
   ((READ_REGISTER_ULONG(0x60) & RTIM_MASK)  >> RTIM_START_BIT)

#define WRITE_RTIM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ RTIM_MASK) | ((val << RTIM_START_BIT) & RTIM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Probe period 
    // 
#define PRBPER_MASK 0x30U
#define PRBPER_OFFSET 5
#define PRBPER_START_BIT 4
#define PRBPER_WIDTH 2



typedef enum prbper {
    PRBPER_0,
    PRBPER_1
} PRBPER_T ;
#define READ_PRBPER() \
   ((READ_REGISTER_ULONG(0x60) & PRBPER_MASK)  >> PRBPER_START_BIT)

#define WRITE_PRBPER(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ PRBPER_MASK) | ((val << PRBPER_START_BIT) & PRBPER_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Probe delta 
    // 
#define PRBDELTA_MASK 0xCU
#define PRBDELTA_OFFSET 3
#define PRBDELTA_START_BIT 2
#define PRBDELTA_WIDTH 2



typedef enum prbdelta {
    PRBDELTA_0,
    PRBDELTA_1
} PRBDELTA_T ;
#define READ_PRBDELTA() \
   ((READ_REGISTER_ULONG(0x60) & PRBDELTA_MASK)  >> PRBDELTA_START_BIT)

#define WRITE_PRBDELTA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ PRBDELTA_MASK) | ((val << PRBDELTA_START_BIT) & PRBDELTA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsGadpctl
//
// Return the value of register OTG_FS_GADPCTL
//
// Notes : Register OTG ADP timer, control and status register (OTG_FS_GADPCTL) at the offset 0x60, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Probe discharge 
    // 
#define PRBDSCHG_MASK 0x3U
#define PRBDSCHG_OFFSET 1
#define PRBDSCHG_START_BIT 0
#define PRBDSCHG_WIDTH 2



typedef enum prbdschg {
    PRBDSCHG_0,
    PRBDSCHG_1
} PRBDSCHG_T ;
#define READ_PRBDSCHG() \
   ((READ_REGISTER_ULONG(0x60) & PRBDSCHG_MASK)  >> PRBDSCHG_START_BIT)

#define WRITE_PRBDSCHG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ PRBDSCHG_MASK) | ((val << PRBDSCHG_START_BIT) & PRBDSCHG_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxfsiz
//
// Return the value of register OTG_FS_HPTXFSIZ
//
// Notes : Register OtgFsHptxfsiz at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_HPTXFSIZ( y) \
     WRITE_REGISTER_ULONG( 0x100 , y)

#define SET_BITS_OTG_FS_HPTXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_HPTXFSIZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_HPTXFSIZ() \
     READ_REGISTER_ULONG(0x100)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxfsiz
//
// Return the value of register OTG_FS_HPTXFSIZ
//
// Notes : Register OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ) (OTG_FS_HPTXFSIZ) at the offset 0x100, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host periodic TxFIFO depth 
    // 
#define PTXFSIZ_MASK 0xFFFF0000U
#define PTXFSIZ_OFFSET 31
#define PTXFSIZ_START_BIT 16
#define PTXFSIZ_WIDTH 16


#define OTG_FS_HPTXFSIZ_REG 0x100

typedef enum ptxfsiz {
    PTXFSIZ_0,
    PTXFSIZ_1
} PTXFSIZ_T ;
#define READ_PTXFSIZ() \
   ((READ_REGISTER_ULONG(0x100) & PTXFSIZ_MASK)  >> PTXFSIZ_START_BIT)

#define WRITE_PTXFSIZ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ PTXFSIZ_MASK) | ((val << PTXFSIZ_START_BIT) & PTXFSIZ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsHptxfsiz
//
// Return the value of register OTG_FS_HPTXFSIZ
//
// Notes : Register OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ) (OTG_FS_HPTXFSIZ) at the offset 0x100, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Host periodic TxFIFO start address 
    // 
#define PTXSA_MASK 0xFFFFU
#define PTXSA_OFFSET 15
#define PTXSA_START_BIT 0
#define PTXSA_WIDTH 16



typedef enum ptxsa {
    PTXSA_0,
    PTXSA_1
} PTXSA_T ;
#define READ_PTXSA() \
   ((READ_REGISTER_ULONG(0x100) & PTXSA_MASK)  >> PTXSA_START_BIT)

#define WRITE_PTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ PTXSA_MASK) | ((val << PTXSA_START_BIT) & PTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf1
//
// Return the value of register OTG_FS_DIEPTXF1
//
// Notes : Register OtgFsDieptxf1 at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTXF_1( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_OTG_FS_DIEPTXF_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTXF_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTXF_1() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf1
//
// Return the value of register OTG_FS_DIEPTXF_1
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1) (OTG_FS_DIEPTXF1) at the offset 0x104, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_FS_DIEPTXF_1_REG 0x104

typedef enum ineptxfd {
    INEPTXFD_0,
    INEPTXFD_1
} INEPTXFD_T ;
#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x104) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf1
//
// Return the value of register OTG_FS_DIEPTXF_1
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1) (OTG_FS_DIEPTXF1) at the offset 0x104, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFO2 transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



typedef enum ineptxsa {
    INEPTXSA_0,
    INEPTXSA_1
} INEPTXSA_T ;
#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x104) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf2
//
// Return the value of register OTG_FS_DIEPTXF2
//
// Notes : Register OtgFsDieptxf2 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTXF_2( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_OTG_FS_DIEPTXF_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTXF_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTXF_2() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf2
//
// Return the value of register OTG_FS_DIEPTXF_2
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2) (OTG_FS_DIEPTXF2) at the offset 0x108, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_FS_DIEPTXF_2_REG 0x108

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x108) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf2
//
// Return the value of register OTG_FS_DIEPTXF_2
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2) (OTG_FS_DIEPTXF2) at the offset 0x108, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFO3 transmit RAM start address 
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
// Function : OtgFsDieptxf3
//
// Return the value of register OTG_FS_DIEPTXF3
//
// Notes : Register OtgFsDieptxf3 at offset 0x10C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTXF_3( y) \
     WRITE_REGISTER_ULONG( 0x10C , y)

#define SET_BITS_OTG_FS_DIEPTXF_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTXF_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTXF_3() \
     READ_REGISTER_ULONG(0x10C)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf3
//
// Return the value of register OTG_FS_DIEPTXF_3
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3) (OTG_FS_DIEPTXF3) at the offset 0x10C, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint TxFIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_FS_DIEPTXF_3_REG 0x10C

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x10C) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf3
//
// Return the value of register OTG_FS_DIEPTXF_3
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3) (OTG_FS_DIEPTXF3) at the offset 0x10C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint FIFO4 transmit RAM start address 
    // 
#define INEPTXSA_MASK 0xFFFFU
#define INEPTXSA_OFFSET 15
#define INEPTXSA_START_BIT 0
#define INEPTXSA_WIDTH 16



#define READ_INEPTXSA() \
   ((READ_REGISTER_ULONG(0x10C) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf4
//
// Return the value of register OTG_FS_DIEPTXF4
//
// Notes : Register OtgFsDieptxf4 at offset 0x110
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTXF_4( y) \
     WRITE_REGISTER_ULONG( 0x110 , y)

#define SET_BITS_OTG_FS_DIEPTXF_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTXF_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x110); \
     WRITE_REGISTER_ULONG( 0x110 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTXF_4() \
     READ_REGISTER_ULONG(0x110)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf4
//
// Return the value of register OTG_FS_DIEPTXF_4
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4) (OTG_FS_DIEPTXF4) at the offset 0x110, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint Tx FIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_FS_DIEPTXF_4_REG 0x110

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x110) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf4
//
// Return the value of register OTG_FS_DIEPTXF_4
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4) (OTG_FS_DIEPTXF4) at the offset 0x110, Bits 0:15

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
   ((READ_REGISTER_ULONG(0x110) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x110); \
     WRITE_REGISTER_ULONG(0x110, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf5
//
// Return the value of register OTG_FS_DIEPTXF5
//
// Notes : Register OtgFsDieptxf5 at offset 0x114
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTG_FS_DIEPTXF_5( y) \
     WRITE_REGISTER_ULONG( 0x114 , y)

#define SET_BITS_OTG_FS_DIEPTXF_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val |  mask ); \
   }

#define CLEAR_BITS_OTG_FS_DIEPTXF_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val & ~mask ); \
   }

#define READ_REGISTER_OTG_FS_DIEPTXF_5() \
     READ_REGISTER_ULONG(0x114)

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf5
//
// Return the value of register OTG_FS_DIEPTXF_5
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5) (OTG_FS_DIEPTXF5) at the offset 0x114, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IN endpoint Tx FIFO depth 
    // 
#define INEPTXFD_MASK 0xFFFF0000U
#define INEPTXFD_OFFSET 31
#define INEPTXFD_START_BIT 16
#define INEPTXFD_WIDTH 16


#define OTG_FS_DIEPTXF_5_REG 0x114

#define READ_INEPTXFD() \
   ((READ_REGISTER_ULONG(0x114) & INEPTXFD_MASK)  >> INEPTXFD_START_BIT)

#define WRITE_INEPTXFD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ INEPTXFD_MASK) | ((val << INEPTXFD_START_BIT) & INEPTXFD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OtgFsDieptxf5
//
// Return the value of register OTG_FS_DIEPTXF_5
//
// Notes : Register OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5) (OTG_FS_DIEPTXF5) at the offset 0x114, Bits 0:15

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
   ((READ_REGISTER_ULONG(0x114) & INEPTXSA_MASK)  >> INEPTXSA_START_BIT)

#define WRITE_INEPTXSA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ INEPTXSA_MASK) | ((val << INEPTXSA_START_BIT) & INEPTXSA_MASK )); \
   } 

