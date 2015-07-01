/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/fmc.h
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
 
#define FMC 0xA0000000
/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr1
//
// Return the value of register BCR1
//
// Notes : Register Bcr1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCR_1( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_BCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_BCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_BCR_1() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : MBKEN
//
// Return the value of register Bcr1
//
// Notes : MBKEN 
//        (BCR1) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MBKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MBKEN_MASK) | ((val << MBKEN_START_BIT) & MBKEN_MASK )); \
   } 

#define ENABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MBKEN_MASK ); \
   }

#define DISABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MBKEN_MASK ); \
   } 

#define READ_MBKEN() \
   ((READ_REGISTER_ULONG(0x0) & MBKEN_MASK)  >> MBKEN_START_BIT)

#define WHEN_MBKEN_HIGH() \
     if ( READ_MBKEN() )


#define UNLESS_MBKEN_HIGH() \
     if (! READ_MBKEN() )


#define WAIT_MBKEN_LOW() \
    while ( READ_MBKEN() );


#define WAIT_MBKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MBKEN() && (--___t___ > 0)); }


#define WAIT_MBKEN_HIGH() \
    while (! READ_MBKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MUXEN
//
// Return the value of register Bcr1
//
// Notes : MUXEN 
//        (BCR1) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MUXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MUXEN_MASK) | ((val << MUXEN_START_BIT) & MUXEN_MASK )); \
   } 

#define ENABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MUXEN_MASK ); \
   }

#define DISABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MUXEN_MASK ); \
   } 

#define READ_MUXEN() \
   ((READ_REGISTER_ULONG(0x0) & MUXEN_MASK)  >> MUXEN_START_BIT)

#define WHEN_MUXEN_HIGH() \
     if ( READ_MUXEN() )


#define UNLESS_MUXEN_HIGH() \
     if (! READ_MUXEN() )


#define WAIT_MUXEN_LOW() \
    while ( READ_MUXEN() );


#define WAIT_MUXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MUXEN() && (--___t___ > 0)); }


#define WAIT_MUXEN_HIGH() \
    while (! READ_MUXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MTYP
//
// Return the value of register Bcr1
//
// Notes : MTYP 
//        (BCR1) at the offset 0x0, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_MTYP() \
   ((READ_REGISTER_ULONG(0x0) & MTYP_MASK)  >> MTYP_START_BIT)

#define WRITE_MTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MTYP_MASK) | ((val << MTYP_START_BIT) & MTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MWID
//
// Return the value of register Bcr1
//
// Notes : MWID 
//        (BCR1) at the offset 0x0, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_MWID() \
   ((READ_REGISTER_ULONG(0x0) & MWID_MASK)  >> MWID_START_BIT)

#define WRITE_MWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MWID_MASK) | ((val << MWID_START_BIT) & MWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : FACCEN
//
// Return the value of register Bcr1
//
// Notes : FACCEN 
//        (BCR1) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FACCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ FACCEN_MASK) | ((val << FACCEN_START_BIT) & FACCEN_MASK )); \
   } 

#define ENABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  FACCEN_MASK ); \
   }

#define DISABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~FACCEN_MASK ); \
   } 

#define READ_FACCEN() \
   ((READ_REGISTER_ULONG(0x0) & FACCEN_MASK)  >> FACCEN_START_BIT)

#define WHEN_FACCEN_HIGH() \
     if ( READ_FACCEN() )


#define UNLESS_FACCEN_HIGH() \
     if (! READ_FACCEN() )


#define WAIT_FACCEN_LOW() \
    while ( READ_FACCEN() );


#define WAIT_FACCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FACCEN() && (--___t___ > 0)); }


#define WAIT_FACCEN_HIGH() \
    while (! READ_FACCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BURSTEN
//
// Return the value of register Bcr1
//
// Notes : BURSTEN 
//        (BCR1) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BURSTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ BURSTEN_MASK) | ((val << BURSTEN_START_BIT) & BURSTEN_MASK )); \
   } 

#define ENABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  BURSTEN_MASK ); \
   }

#define DISABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~BURSTEN_MASK ); \
   } 

#define READ_BURSTEN() \
   ((READ_REGISTER_ULONG(0x0) & BURSTEN_MASK)  >> BURSTEN_START_BIT)

#define WHEN_BURSTEN_HIGH() \
     if ( READ_BURSTEN() )


#define UNLESS_BURSTEN_HIGH() \
     if (! READ_BURSTEN() )


#define WAIT_BURSTEN_LOW() \
    while ( READ_BURSTEN() );


#define WAIT_BURSTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BURSTEN() && (--___t___ > 0)); }


#define WAIT_BURSTEN_HIGH() \
    while (! READ_BURSTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WAITPOL
//
// Return the value of register Bcr1
//
// Notes : WAITPOL 
//        (BCR1) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WAITPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WAITPOL_MASK) | ((val << WAITPOL_START_BIT) & WAITPOL_MASK )); \
   } 

#define ENABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WAITPOL_MASK ); \
   }

#define DISABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WAITPOL_MASK ); \
   } 

#define READ_WAITPOL() \
   ((READ_REGISTER_ULONG(0x0) & WAITPOL_MASK)  >> WAITPOL_START_BIT)

#define WHEN_WAITPOL_HIGH() \
     if ( READ_WAITPOL() )


#define UNLESS_WAITPOL_HIGH() \
     if (! READ_WAITPOL() )


#define WAIT_WAITPOL_LOW() \
    while ( READ_WAITPOL() );


#define WAIT_WAITPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITPOL() && (--___t___ > 0)); }


#define WAIT_WAITPOL_HIGH() \
    while (! READ_WAITPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WAITCFG
//
// Return the value of register Bcr1
//
// Notes : WAITCFG 
//        (BCR1) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WAITCFG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WAITCFG_MASK) | ((val << WAITCFG_START_BIT) & WAITCFG_MASK )); \
   } 

#define ENABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WAITCFG_MASK ); \
   }

#define DISABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WAITCFG_MASK ); \
   } 

#define READ_WAITCFG() \
   ((READ_REGISTER_ULONG(0x0) & WAITCFG_MASK)  >> WAITCFG_START_BIT)

#define WHEN_WAITCFG_HIGH() \
     if ( READ_WAITCFG() )


#define UNLESS_WAITCFG_HIGH() \
     if (! READ_WAITCFG() )


#define WAIT_WAITCFG_LOW() \
    while ( READ_WAITCFG() );


#define WAIT_WAITCFG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITCFG() && (--___t___ > 0)); }


#define WAIT_WAITCFG_HIGH() \
    while (! READ_WAITCFG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WREN
//
// Return the value of register Bcr1
//
// Notes : WREN 
//        (BCR1) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WREN_MASK) | ((val << WREN_START_BIT) & WREN_MASK )); \
   } 

#define ENABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WREN_MASK ); \
   }

#define DISABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WREN_MASK ); \
   } 

#define READ_WREN() \
   ((READ_REGISTER_ULONG(0x0) & WREN_MASK)  >> WREN_START_BIT)

#define WHEN_WREN_HIGH() \
     if ( READ_WREN() )


#define UNLESS_WREN_HIGH() \
     if (! READ_WREN() )


#define WAIT_WREN_LOW() \
    while ( READ_WREN() );


#define WAIT_WREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WREN() && (--___t___ > 0)); }


#define WAIT_WREN_HIGH() \
    while (! READ_WREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WAITEN
//
// Return the value of register Bcr1
//
// Notes : WAITEN 
//        (BCR1) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WAITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ WAITEN_MASK) | ((val << WAITEN_START_BIT) & WAITEN_MASK )); \
   } 

#define ENABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  WAITEN_MASK ); \
   }

#define DISABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~WAITEN_MASK ); \
   } 

#define READ_WAITEN() \
   ((READ_REGISTER_ULONG(0x0) & WAITEN_MASK)  >> WAITEN_START_BIT)

#define WHEN_WAITEN_HIGH() \
     if ( READ_WAITEN() )


#define UNLESS_WAITEN_HIGH() \
     if (! READ_WAITEN() )


#define WAIT_WAITEN_LOW() \
    while ( READ_WAITEN() );


#define WAIT_WAITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITEN() && (--___t___ > 0)); }


#define WAIT_WAITEN_HIGH() \
    while (! READ_WAITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EXTMOD
//
// Return the value of register Bcr1
//
// Notes : EXTMOD 
//        (BCR1) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EXTMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EXTMOD_MASK) | ((val << EXTMOD_START_BIT) & EXTMOD_MASK )); \
   } 

#define ENABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EXTMOD_MASK ); \
   }

#define DISABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EXTMOD_MASK ); \
   } 

#define READ_EXTMOD() \
   ((READ_REGISTER_ULONG(0x0) & EXTMOD_MASK)  >> EXTMOD_START_BIT)

#define WHEN_EXTMOD_HIGH() \
     if ( READ_EXTMOD() )


#define UNLESS_EXTMOD_HIGH() \
     if (! READ_EXTMOD() )


#define WAIT_EXTMOD_LOW() \
    while ( READ_EXTMOD() );


#define WAIT_EXTMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTMOD() && (--___t___ > 0)); }


#define WAIT_EXTMOD_HIGH() \
    while (! READ_EXTMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ASYNCWAIT
//
// Return the value of register Bcr1
//
// Notes : ASYNCWAIT 
//        (BCR1) at the offset 0x0, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ASYNCWAIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ASYNCWAIT_MASK) | ((val << ASYNCWAIT_START_BIT) & ASYNCWAIT_MASK )); \
   } 

#define ENABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ASYNCWAIT_MASK ); \
   }

#define DISABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ASYNCWAIT_MASK ); \
   } 

#define READ_ASYNCWAIT() \
   ((READ_REGISTER_ULONG(0x0) & ASYNCWAIT_MASK)  >> ASYNCWAIT_START_BIT)

#define WHEN_ASYNCWAIT_HIGH() \
     if ( READ_ASYNCWAIT() )


#define UNLESS_ASYNCWAIT_HIGH() \
     if (! READ_ASYNCWAIT() )


#define WAIT_ASYNCWAIT_LOW() \
    while ( READ_ASYNCWAIT() );


#define WAIT_ASYNCWAIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ASYNCWAIT() && (--___t___ > 0)); }


#define WAIT_ASYNCWAIT_HIGH() \
    while (! READ_ASYNCWAIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CBURSTRW
//
// Return the value of register Bcr1
//
// Notes : CBURSTRW 
//        (BCR1) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CBURSTRW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CBURSTRW_MASK) | ((val << CBURSTRW_START_BIT) & CBURSTRW_MASK )); \
   } 

#define ENABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CBURSTRW_MASK ); \
   }

#define DISABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CBURSTRW_MASK ); \
   } 

#define READ_CBURSTRW() \
   ((READ_REGISTER_ULONG(0x0) & CBURSTRW_MASK)  >> CBURSTRW_START_BIT)

#define WHEN_CBURSTRW_HIGH() \
     if ( READ_CBURSTRW() )


#define UNLESS_CBURSTRW_HIGH() \
     if (! READ_CBURSTRW() )


#define WAIT_CBURSTRW_LOW() \
    while ( READ_CBURSTRW() );


#define WAIT_CBURSTRW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CBURSTRW() && (--___t___ > 0)); }


#define WAIT_CBURSTRW_HIGH() \
    while (! READ_CBURSTRW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CCLKEN
//
// Return the value of register Bcr1
//
// Notes : CCLKEN 
//        (BCR1) at the offset 0x0, Bits 20:20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CCLKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CCLKEN_MASK) | ((val << CCLKEN_START_BIT) & CCLKEN_MASK )); \
   } 

#define ENABLE_CCLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CCLKEN_MASK ); \
   }

#define DISABLE_CCLKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CCLKEN_MASK ); \
   } 

#define READ_CCLKEN() \
   ((READ_REGISTER_ULONG(0x0) & CCLKEN_MASK)  >> CCLKEN_START_BIT)

#define WHEN_CCLKEN_HIGH() \
     if ( READ_CCLKEN() )


#define UNLESS_CCLKEN_HIGH() \
     if (! READ_CCLKEN() )


#define WAIT_CCLKEN_LOW() \
    while ( READ_CCLKEN() );


#define WAIT_CCLKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCLKEN() && (--___t___ > 0)); }


#define WAIT_CCLKEN_HIGH() \
    while (! READ_CCLKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR1
//
// Notes : Register Btr1 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BTR_1( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_BTR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_BTR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_BTR_1() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BTR_1_REG 0x4

typedef enum addset {
    ADDSET_0,
    ADDSET_1
} ADDSET_T ;
#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x4) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



typedef enum addhld {
    ADDHLD_0,
    ADDHLD_1
} ADDHLD_T ;
#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x4) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



typedef enum datast {
    DATAST_0,
    DATAST_1
} DATAST_T ;
#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x4) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BUSTURN 
    // 
#define BUSTURN_MASK 0xF0000U
#define BUSTURN_OFFSET 19
#define BUSTURN_START_BIT 16
#define BUSTURN_WIDTH 4



typedef enum busturn {
    BUSTURN_0,
    BUSTURN_1
} BUSTURN_T ;
#define READ_BUSTURN() \
   ((READ_REGISTER_ULONG(0x4) & BUSTURN_MASK)  >> BUSTURN_START_BIT)

#define WRITE_BUSTURN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ BUSTURN_MASK) | ((val << BUSTURN_START_BIT) & BUSTURN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



typedef enum clkdiv {
    CLKDIV_0,
    CLKDIV_1
} CLKDIV_T ;
#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x4) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



typedef enum datlat {
    DATLAT_0,
    DATLAT_1
} DATLAT_T ;
#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x4) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr1
//
// Return the value of register BTR_1
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 1 (BTR1) at the offset 0x4, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



typedef enum accmod {
    ACCMOD_0,
    ACCMOD_1
} ACCMOD_T ;
#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x4) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr2
//
// Return the value of register BCR2
//
// Notes : Register Bcr2 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCR_2( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_BCR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_BCR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_BCR_2() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : MBKEN
//
// Return the value of register Bcr2
//
// Notes : MBKEN 
//        (BCR2) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MBKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MBKEN_MASK) | ((val << MBKEN_START_BIT) & MBKEN_MASK )); \
   } 

#define ENABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  MBKEN_MASK ); \
   }

#define DISABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~MBKEN_MASK ); \
   } 

#define READ_MBKEN() \
   ((READ_REGISTER_ULONG(0x8) & MBKEN_MASK)  >> MBKEN_START_BIT)

#define WHEN_MBKEN_HIGH() \
     if ( READ_MBKEN() )


#define UNLESS_MBKEN_HIGH() \
     if (! READ_MBKEN() )


#define WAIT_MBKEN_LOW() \
    while ( READ_MBKEN() );


#define WAIT_MBKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MBKEN() && (--___t___ > 0)); }


#define WAIT_MBKEN_HIGH() \
    while (! READ_MBKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MUXEN
//
// Return the value of register Bcr2
//
// Notes : MUXEN 
//        (BCR2) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MUXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MUXEN_MASK) | ((val << MUXEN_START_BIT) & MUXEN_MASK )); \
   } 

#define ENABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  MUXEN_MASK ); \
   }

#define DISABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~MUXEN_MASK ); \
   } 

#define READ_MUXEN() \
   ((READ_REGISTER_ULONG(0x8) & MUXEN_MASK)  >> MUXEN_START_BIT)

#define WHEN_MUXEN_HIGH() \
     if ( READ_MUXEN() )


#define UNLESS_MUXEN_HIGH() \
     if (! READ_MUXEN() )


#define WAIT_MUXEN_LOW() \
    while ( READ_MUXEN() );


#define WAIT_MUXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MUXEN() && (--___t___ > 0)); }


#define WAIT_MUXEN_HIGH() \
    while (! READ_MUXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MTYP
//
// Return the value of register Bcr2
//
// Notes : MTYP 
//        (BCR2) at the offset 0x8, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_MTYP() \
   ((READ_REGISTER_ULONG(0x8) & MTYP_MASK)  >> MTYP_START_BIT)

#define WRITE_MTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MTYP_MASK) | ((val << MTYP_START_BIT) & MTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MWID
//
// Return the value of register Bcr2
//
// Notes : MWID 
//        (BCR2) at the offset 0x8, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_MWID() \
   ((READ_REGISTER_ULONG(0x8) & MWID_MASK)  >> MWID_START_BIT)

#define WRITE_MWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ MWID_MASK) | ((val << MWID_START_BIT) & MWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : FACCEN
//
// Return the value of register Bcr2
//
// Notes : FACCEN 
//        (BCR2) at the offset 0x8, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FACCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FACCEN_MASK) | ((val << FACCEN_START_BIT) & FACCEN_MASK )); \
   } 

#define ENABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  FACCEN_MASK ); \
   }

#define DISABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~FACCEN_MASK ); \
   } 

#define READ_FACCEN() \
   ((READ_REGISTER_ULONG(0x8) & FACCEN_MASK)  >> FACCEN_START_BIT)

#define WHEN_FACCEN_HIGH() \
     if ( READ_FACCEN() )


#define UNLESS_FACCEN_HIGH() \
     if (! READ_FACCEN() )


#define WAIT_FACCEN_LOW() \
    while ( READ_FACCEN() );


#define WAIT_FACCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FACCEN() && (--___t___ > 0)); }


#define WAIT_FACCEN_HIGH() \
    while (! READ_FACCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BURSTEN
//
// Return the value of register Bcr2
//
// Notes : BURSTEN 
//        (BCR2) at the offset 0x8, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BURSTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ BURSTEN_MASK) | ((val << BURSTEN_START_BIT) & BURSTEN_MASK )); \
   } 

#define ENABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  BURSTEN_MASK ); \
   }

#define DISABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~BURSTEN_MASK ); \
   } 

#define READ_BURSTEN() \
   ((READ_REGISTER_ULONG(0x8) & BURSTEN_MASK)  >> BURSTEN_START_BIT)

#define WHEN_BURSTEN_HIGH() \
     if ( READ_BURSTEN() )


#define UNLESS_BURSTEN_HIGH() \
     if (! READ_BURSTEN() )


#define WAIT_BURSTEN_LOW() \
    while ( READ_BURSTEN() );


#define WAIT_BURSTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BURSTEN() && (--___t___ > 0)); }


#define WAIT_BURSTEN_HIGH() \
    while (! READ_BURSTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WAITPOL
//
// Return the value of register Bcr2
//
// Notes : WAITPOL 
//        (BCR2) at the offset 0x8, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WAITPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WAITPOL_MASK) | ((val << WAITPOL_START_BIT) & WAITPOL_MASK )); \
   } 

#define ENABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WAITPOL_MASK ); \
   }

#define DISABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WAITPOL_MASK ); \
   } 

#define READ_WAITPOL() \
   ((READ_REGISTER_ULONG(0x8) & WAITPOL_MASK)  >> WAITPOL_START_BIT)

#define WHEN_WAITPOL_HIGH() \
     if ( READ_WAITPOL() )


#define UNLESS_WAITPOL_HIGH() \
     if (! READ_WAITPOL() )


#define WAIT_WAITPOL_LOW() \
    while ( READ_WAITPOL() );


#define WAIT_WAITPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITPOL() && (--___t___ > 0)); }


#define WAIT_WAITPOL_HIGH() \
    while (! READ_WAITPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WRAPMOD
//
// Return the value of register Bcr2
//
// Notes : WRAPMOD 
//        (BCR2) at the offset 0x8, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WRAPMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WRAPMOD_MASK) | ((val << WRAPMOD_START_BIT) & WRAPMOD_MASK )); \
   } 

#define ENABLE_WRAPMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WRAPMOD_MASK ); \
   }

#define DISABLE_WRAPMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WRAPMOD_MASK ); \
   } 

#define READ_WRAPMOD() \
   ((READ_REGISTER_ULONG(0x8) & WRAPMOD_MASK)  >> WRAPMOD_START_BIT)

#define WHEN_WRAPMOD_HIGH() \
     if ( READ_WRAPMOD() )


#define UNLESS_WRAPMOD_HIGH() \
     if (! READ_WRAPMOD() )


#define WAIT_WRAPMOD_LOW() \
    while ( READ_WRAPMOD() );


#define WAIT_WRAPMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WRAPMOD() && (--___t___ > 0)); }


#define WAIT_WRAPMOD_HIGH() \
    while (! READ_WRAPMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WAITCFG
//
// Return the value of register Bcr2
//
// Notes : WAITCFG 
//        (BCR2) at the offset 0x8, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WAITCFG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WAITCFG_MASK) | ((val << WAITCFG_START_BIT) & WAITCFG_MASK )); \
   } 

#define ENABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WAITCFG_MASK ); \
   }

#define DISABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WAITCFG_MASK ); \
   } 

#define READ_WAITCFG() \
   ((READ_REGISTER_ULONG(0x8) & WAITCFG_MASK)  >> WAITCFG_START_BIT)

#define WHEN_WAITCFG_HIGH() \
     if ( READ_WAITCFG() )


#define UNLESS_WAITCFG_HIGH() \
     if (! READ_WAITCFG() )


#define WAIT_WAITCFG_LOW() \
    while ( READ_WAITCFG() );


#define WAIT_WAITCFG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITCFG() && (--___t___ > 0)); }


#define WAIT_WAITCFG_HIGH() \
    while (! READ_WAITCFG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WREN
//
// Return the value of register Bcr2
//
// Notes : WREN 
//        (BCR2) at the offset 0x8, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WREN_MASK) | ((val << WREN_START_BIT) & WREN_MASK )); \
   } 

#define ENABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WREN_MASK ); \
   }

#define DISABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WREN_MASK ); \
   } 

#define READ_WREN() \
   ((READ_REGISTER_ULONG(0x8) & WREN_MASK)  >> WREN_START_BIT)

#define WHEN_WREN_HIGH() \
     if ( READ_WREN() )


#define UNLESS_WREN_HIGH() \
     if (! READ_WREN() )


#define WAIT_WREN_LOW() \
    while ( READ_WREN() );


#define WAIT_WREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WREN() && (--___t___ > 0)); }


#define WAIT_WREN_HIGH() \
    while (! READ_WREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WAITEN
//
// Return the value of register Bcr2
//
// Notes : WAITEN 
//        (BCR2) at the offset 0x8, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WAITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WAITEN_MASK) | ((val << WAITEN_START_BIT) & WAITEN_MASK )); \
   } 

#define ENABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WAITEN_MASK ); \
   }

#define DISABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WAITEN_MASK ); \
   } 

#define READ_WAITEN() \
   ((READ_REGISTER_ULONG(0x8) & WAITEN_MASK)  >> WAITEN_START_BIT)

#define WHEN_WAITEN_HIGH() \
     if ( READ_WAITEN() )


#define UNLESS_WAITEN_HIGH() \
     if (! READ_WAITEN() )


#define WAIT_WAITEN_LOW() \
    while ( READ_WAITEN() );


#define WAIT_WAITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITEN() && (--___t___ > 0)); }


#define WAIT_WAITEN_HIGH() \
    while (! READ_WAITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EXTMOD
//
// Return the value of register Bcr2
//
// Notes : EXTMOD 
//        (BCR2) at the offset 0x8, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EXTMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ EXTMOD_MASK) | ((val << EXTMOD_START_BIT) & EXTMOD_MASK )); \
   } 

#define ENABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  EXTMOD_MASK ); \
   }

#define DISABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~EXTMOD_MASK ); \
   } 

#define READ_EXTMOD() \
   ((READ_REGISTER_ULONG(0x8) & EXTMOD_MASK)  >> EXTMOD_START_BIT)

#define WHEN_EXTMOD_HIGH() \
     if ( READ_EXTMOD() )


#define UNLESS_EXTMOD_HIGH() \
     if (! READ_EXTMOD() )


#define WAIT_EXTMOD_LOW() \
    while ( READ_EXTMOD() );


#define WAIT_EXTMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTMOD() && (--___t___ > 0)); }


#define WAIT_EXTMOD_HIGH() \
    while (! READ_EXTMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ASYNCWAIT
//
// Return the value of register Bcr2
//
// Notes : ASYNCWAIT 
//        (BCR2) at the offset 0x8, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ASYNCWAIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ASYNCWAIT_MASK) | ((val << ASYNCWAIT_START_BIT) & ASYNCWAIT_MASK )); \
   } 

#define ENABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ASYNCWAIT_MASK ); \
   }

#define DISABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ASYNCWAIT_MASK ); \
   } 

#define READ_ASYNCWAIT() \
   ((READ_REGISTER_ULONG(0x8) & ASYNCWAIT_MASK)  >> ASYNCWAIT_START_BIT)

#define WHEN_ASYNCWAIT_HIGH() \
     if ( READ_ASYNCWAIT() )


#define UNLESS_ASYNCWAIT_HIGH() \
     if (! READ_ASYNCWAIT() )


#define WAIT_ASYNCWAIT_LOW() \
    while ( READ_ASYNCWAIT() );


#define WAIT_ASYNCWAIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ASYNCWAIT() && (--___t___ > 0)); }


#define WAIT_ASYNCWAIT_HIGH() \
    while (! READ_ASYNCWAIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CBURSTRW
//
// Return the value of register Bcr2
//
// Notes : CBURSTRW 
//        (BCR2) at the offset 0x8, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CBURSTRW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CBURSTRW_MASK) | ((val << CBURSTRW_START_BIT) & CBURSTRW_MASK )); \
   } 

#define ENABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CBURSTRW_MASK ); \
   }

#define DISABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CBURSTRW_MASK ); \
   } 

#define READ_CBURSTRW() \
   ((READ_REGISTER_ULONG(0x8) & CBURSTRW_MASK)  >> CBURSTRW_START_BIT)

#define WHEN_CBURSTRW_HIGH() \
     if ( READ_CBURSTRW() )


#define UNLESS_CBURSTRW_HIGH() \
     if (! READ_CBURSTRW() )


#define WAIT_CBURSTRW_LOW() \
    while ( READ_CBURSTRW() );


#define WAIT_CBURSTRW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CBURSTRW() && (--___t___ > 0)); }


#define WAIT_CBURSTRW_HIGH() \
    while (! READ_CBURSTRW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR2
//
// Notes : Register Btr2 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BTR_2( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_BTR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_BTR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_BTR_2() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BTR_2_REG 0xC

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0xC) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0xC) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0xC) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BUSTURN 
    // 
#define BUSTURN_MASK 0xF0000U
#define BUSTURN_OFFSET 19
#define BUSTURN_START_BIT 16
#define BUSTURN_WIDTH 4



#define READ_BUSTURN() \
   ((READ_REGISTER_ULONG(0xC) & BUSTURN_MASK)  >> BUSTURN_START_BIT)

#define WRITE_BUSTURN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ BUSTURN_MASK) | ((val << BUSTURN_START_BIT) & BUSTURN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0xC) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0xC) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr2
//
// Return the value of register BTR_2
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 2 (BTR2) at the offset 0xC, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0xC) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR3
//
// Notes : Register Bcr3 at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCR_3( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_BCR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_BCR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_BCR_3() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MBKEN 
    // 
#define MBKEN_MASK 0x1U
#define MBKEN_OFFSET 0
#define MBKEN_START_BIT 0
#define MBKEN_WIDTH 1


#define BCR_3_REG 0x10

typedef enum mbken {
    MBKEN_0,
    MBKEN_1
} MBKEN_T ;
#define WRITE_MBKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MBKEN_MASK) | ((val << MBKEN_START_BIT) & MBKEN_MASK )); \
   } 

#define ENABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  MBKEN_MASK ); \
   }

#define DISABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~MBKEN_MASK ); \
   } 

#define READ_MBKEN() \
   ((READ_REGISTER_ULONG(0x10) & MBKEN_MASK)  >> MBKEN_START_BIT)

#define WHEN_MBKEN_HIGH() \
     if ( READ_MBKEN() )


#define UNLESS_MBKEN_HIGH() \
     if (! READ_MBKEN() )


#define WAIT_MBKEN_LOW() \
    while ( READ_MBKEN() );


#define WAIT_MBKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MBKEN() && (--___t___ > 0)); }


#define WAIT_MBKEN_HIGH() \
    while (! READ_MBKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MUXEN 
    // 
#define MUXEN_MASK 0x2U
#define MUXEN_OFFSET 1
#define MUXEN_START_BIT 1
#define MUXEN_WIDTH 1



typedef enum muxen {
    MUXEN_0,
    MUXEN_1
} MUXEN_T ;
#define WRITE_MUXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MUXEN_MASK) | ((val << MUXEN_START_BIT) & MUXEN_MASK )); \
   } 

#define ENABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  MUXEN_MASK ); \
   }

#define DISABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~MUXEN_MASK ); \
   } 

#define READ_MUXEN() \
   ((READ_REGISTER_ULONG(0x10) & MUXEN_MASK)  >> MUXEN_START_BIT)

#define WHEN_MUXEN_HIGH() \
     if ( READ_MUXEN() )


#define UNLESS_MUXEN_HIGH() \
     if (! READ_MUXEN() )


#define WAIT_MUXEN_LOW() \
    while ( READ_MUXEN() );


#define WAIT_MUXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MUXEN() && (--___t___ > 0)); }


#define WAIT_MUXEN_HIGH() \
    while (! READ_MUXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MTYP 
    // 
#define MTYP_MASK 0xCU
#define MTYP_OFFSET 3
#define MTYP_START_BIT 2
#define MTYP_WIDTH 2



typedef enum mtyp {
    MTYP_0,
    MTYP_1
} MTYP_T ;
#define READ_MTYP() \
   ((READ_REGISTER_ULONG(0x10) & MTYP_MASK)  >> MTYP_START_BIT)

#define WRITE_MTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MTYP_MASK) | ((val << MTYP_START_BIT) & MTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MWID 
    // 
#define MWID_MASK 0x30U
#define MWID_OFFSET 5
#define MWID_START_BIT 4
#define MWID_WIDTH 2



typedef enum mwid {
    MWID_0,
    MWID_1
} MWID_T ;
#define READ_MWID() \
   ((READ_REGISTER_ULONG(0x10) & MWID_MASK)  >> MWID_START_BIT)

#define WRITE_MWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ MWID_MASK) | ((val << MWID_START_BIT) & MWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FACCEN 
    // 
#define FACCEN_MASK 0x40U
#define FACCEN_OFFSET 6
#define FACCEN_START_BIT 6
#define FACCEN_WIDTH 1



typedef enum faccen {
    FACCEN_0,
    FACCEN_1
} FACCEN_T ;
#define WRITE_FACCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ FACCEN_MASK) | ((val << FACCEN_START_BIT) & FACCEN_MASK )); \
   } 

#define ENABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  FACCEN_MASK ); \
   }

#define DISABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~FACCEN_MASK ); \
   } 

#define READ_FACCEN() \
   ((READ_REGISTER_ULONG(0x10) & FACCEN_MASK)  >> FACCEN_START_BIT)

#define WHEN_FACCEN_HIGH() \
     if ( READ_FACCEN() )


#define UNLESS_FACCEN_HIGH() \
     if (! READ_FACCEN() )


#define WAIT_FACCEN_LOW() \
    while ( READ_FACCEN() );


#define WAIT_FACCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FACCEN() && (--___t___ > 0)); }


#define WAIT_FACCEN_HIGH() \
    while (! READ_FACCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BURSTEN 
    // 
#define BURSTEN_MASK 0x100U
#define BURSTEN_OFFSET 8
#define BURSTEN_START_BIT 8
#define BURSTEN_WIDTH 1



typedef enum bursten {
    BURSTEN_0,
    BURSTEN_1
} BURSTEN_T ;
#define WRITE_BURSTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ BURSTEN_MASK) | ((val << BURSTEN_START_BIT) & BURSTEN_MASK )); \
   } 

#define ENABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  BURSTEN_MASK ); \
   }

#define DISABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~BURSTEN_MASK ); \
   } 

#define READ_BURSTEN() \
   ((READ_REGISTER_ULONG(0x10) & BURSTEN_MASK)  >> BURSTEN_START_BIT)

#define WHEN_BURSTEN_HIGH() \
     if ( READ_BURSTEN() )


#define UNLESS_BURSTEN_HIGH() \
     if (! READ_BURSTEN() )


#define WAIT_BURSTEN_LOW() \
    while ( READ_BURSTEN() );


#define WAIT_BURSTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BURSTEN() && (--___t___ > 0)); }


#define WAIT_BURSTEN_HIGH() \
    while (! READ_BURSTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WAITPOL 
    // 
#define WAITPOL_MASK 0x200U
#define WAITPOL_OFFSET 9
#define WAITPOL_START_BIT 9
#define WAITPOL_WIDTH 1



typedef enum waitpol {
    WAITPOL_0,
    WAITPOL_1
} WAITPOL_T ;
#define WRITE_WAITPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ WAITPOL_MASK) | ((val << WAITPOL_START_BIT) & WAITPOL_MASK )); \
   } 

#define ENABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  WAITPOL_MASK ); \
   }

#define DISABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~WAITPOL_MASK ); \
   } 

#define READ_WAITPOL() \
   ((READ_REGISTER_ULONG(0x10) & WAITPOL_MASK)  >> WAITPOL_START_BIT)

#define WHEN_WAITPOL_HIGH() \
     if ( READ_WAITPOL() )


#define UNLESS_WAITPOL_HIGH() \
     if (! READ_WAITPOL() )


#define WAIT_WAITPOL_LOW() \
    while ( READ_WAITPOL() );


#define WAIT_WAITPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITPOL() && (--___t___ > 0)); }


#define WAIT_WAITPOL_HIGH() \
    while (! READ_WAITPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WRAPMOD 
    // 
#define WRAPMOD_MASK 0x400U
#define WRAPMOD_OFFSET 10
#define WRAPMOD_START_BIT 10
#define WRAPMOD_WIDTH 1



typedef enum wrapmod {
    WRAPMOD_0,
    WRAPMOD_1
} WRAPMOD_T ;
#define WRITE_WRAPMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ WRAPMOD_MASK) | ((val << WRAPMOD_START_BIT) & WRAPMOD_MASK )); \
   } 

#define ENABLE_WRAPMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  WRAPMOD_MASK ); \
   }

#define DISABLE_WRAPMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~WRAPMOD_MASK ); \
   } 

#define READ_WRAPMOD() \
   ((READ_REGISTER_ULONG(0x10) & WRAPMOD_MASK)  >> WRAPMOD_START_BIT)

#define WHEN_WRAPMOD_HIGH() \
     if ( READ_WRAPMOD() )


#define UNLESS_WRAPMOD_HIGH() \
     if (! READ_WRAPMOD() )


#define WAIT_WRAPMOD_LOW() \
    while ( READ_WRAPMOD() );


#define WAIT_WRAPMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WRAPMOD() && (--___t___ > 0)); }


#define WAIT_WRAPMOD_HIGH() \
    while (! READ_WRAPMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WAITCFG 
    // 
#define WAITCFG_MASK 0x800U
#define WAITCFG_OFFSET 11
#define WAITCFG_START_BIT 11
#define WAITCFG_WIDTH 1



typedef enum waitcfg {
    WAITCFG_0,
    WAITCFG_1
} WAITCFG_T ;
#define WRITE_WAITCFG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ WAITCFG_MASK) | ((val << WAITCFG_START_BIT) & WAITCFG_MASK )); \
   } 

#define ENABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  WAITCFG_MASK ); \
   }

#define DISABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~WAITCFG_MASK ); \
   } 

#define READ_WAITCFG() \
   ((READ_REGISTER_ULONG(0x10) & WAITCFG_MASK)  >> WAITCFG_START_BIT)

#define WHEN_WAITCFG_HIGH() \
     if ( READ_WAITCFG() )


#define UNLESS_WAITCFG_HIGH() \
     if (! READ_WAITCFG() )


#define WAIT_WAITCFG_LOW() \
    while ( READ_WAITCFG() );


#define WAIT_WAITCFG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITCFG() && (--___t___ > 0)); }


#define WAIT_WAITCFG_HIGH() \
    while (! READ_WAITCFG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WREN 
    // 
#define WREN_MASK 0x1000U
#define WREN_OFFSET 12
#define WREN_START_BIT 12
#define WREN_WIDTH 1



typedef enum wren {
    WREN_0,
    WREN_1
} WREN_T ;
#define WRITE_WREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ WREN_MASK) | ((val << WREN_START_BIT) & WREN_MASK )); \
   } 

#define ENABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  WREN_MASK ); \
   }

#define DISABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~WREN_MASK ); \
   } 

#define READ_WREN() \
   ((READ_REGISTER_ULONG(0x10) & WREN_MASK)  >> WREN_START_BIT)

#define WHEN_WREN_HIGH() \
     if ( READ_WREN() )


#define UNLESS_WREN_HIGH() \
     if (! READ_WREN() )


#define WAIT_WREN_LOW() \
    while ( READ_WREN() );


#define WAIT_WREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WREN() && (--___t___ > 0)); }


#define WAIT_WREN_HIGH() \
    while (! READ_WREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WAITEN 
    // 
#define WAITEN_MASK 0x2000U
#define WAITEN_OFFSET 13
#define WAITEN_START_BIT 13
#define WAITEN_WIDTH 1



typedef enum waiten {
    WAITEN_0,
    WAITEN_1
} WAITEN_T ;
#define WRITE_WAITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ WAITEN_MASK) | ((val << WAITEN_START_BIT) & WAITEN_MASK )); \
   } 

#define ENABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  WAITEN_MASK ); \
   }

#define DISABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~WAITEN_MASK ); \
   } 

#define READ_WAITEN() \
   ((READ_REGISTER_ULONG(0x10) & WAITEN_MASK)  >> WAITEN_START_BIT)

#define WHEN_WAITEN_HIGH() \
     if ( READ_WAITEN() )


#define UNLESS_WAITEN_HIGH() \
     if (! READ_WAITEN() )


#define WAIT_WAITEN_LOW() \
    while ( READ_WAITEN() );


#define WAIT_WAITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITEN() && (--___t___ > 0)); }


#define WAIT_WAITEN_HIGH() \
    while (! READ_WAITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTMOD 
    // 
#define EXTMOD_MASK 0x4000U
#define EXTMOD_OFFSET 14
#define EXTMOD_START_BIT 14
#define EXTMOD_WIDTH 1



typedef enum extmod {
    EXTMOD_0,
    EXTMOD_1
} EXTMOD_T ;
#define WRITE_EXTMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ EXTMOD_MASK) | ((val << EXTMOD_START_BIT) & EXTMOD_MASK )); \
   } 

#define ENABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  EXTMOD_MASK ); \
   }

#define DISABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~EXTMOD_MASK ); \
   } 

#define READ_EXTMOD() \
   ((READ_REGISTER_ULONG(0x10) & EXTMOD_MASK)  >> EXTMOD_START_BIT)

#define WHEN_EXTMOD_HIGH() \
     if ( READ_EXTMOD() )


#define UNLESS_EXTMOD_HIGH() \
     if (! READ_EXTMOD() )


#define WAIT_EXTMOD_LOW() \
    while ( READ_EXTMOD() );


#define WAIT_EXTMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTMOD() && (--___t___ > 0)); }


#define WAIT_EXTMOD_HIGH() \
    while (! READ_EXTMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ASYNCWAIT 
    // 
#define ASYNCWAIT_MASK 0x8000U
#define ASYNCWAIT_OFFSET 15
#define ASYNCWAIT_START_BIT 15
#define ASYNCWAIT_WIDTH 1



typedef enum asyncwait {
    ASYNCWAIT_0,
    ASYNCWAIT_1
} ASYNCWAIT_T ;
#define WRITE_ASYNCWAIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ ASYNCWAIT_MASK) | ((val << ASYNCWAIT_START_BIT) & ASYNCWAIT_MASK )); \
   } 

#define ENABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  ASYNCWAIT_MASK ); \
   }

#define DISABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~ASYNCWAIT_MASK ); \
   } 

#define READ_ASYNCWAIT() \
   ((READ_REGISTER_ULONG(0x10) & ASYNCWAIT_MASK)  >> ASYNCWAIT_START_BIT)

#define WHEN_ASYNCWAIT_HIGH() \
     if ( READ_ASYNCWAIT() )


#define UNLESS_ASYNCWAIT_HIGH() \
     if (! READ_ASYNCWAIT() )


#define WAIT_ASYNCWAIT_LOW() \
    while ( READ_ASYNCWAIT() );


#define WAIT_ASYNCWAIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ASYNCWAIT() && (--___t___ > 0)); }


#define WAIT_ASYNCWAIT_HIGH() \
    while (! READ_ASYNCWAIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr3
//
// Return the value of register BCR_3
//
// Notes : Register SRAM/NOR-Flash chip-select control register 3 (BCR3) at the offset 0x10, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CBURSTRW 
    // 
#define CBURSTRW_MASK 0x80000U
#define CBURSTRW_OFFSET 19
#define CBURSTRW_START_BIT 19
#define CBURSTRW_WIDTH 1



typedef enum cburstrw {
    CBURSTRW_0,
    CBURSTRW_1
} CBURSTRW_T ;
#define WRITE_CBURSTRW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ CBURSTRW_MASK) | ((val << CBURSTRW_START_BIT) & CBURSTRW_MASK )); \
   } 

#define ENABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  CBURSTRW_MASK ); \
   }

#define DISABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~CBURSTRW_MASK ); \
   } 

#define READ_CBURSTRW() \
   ((READ_REGISTER_ULONG(0x10) & CBURSTRW_MASK)  >> CBURSTRW_START_BIT)

#define WHEN_CBURSTRW_HIGH() \
     if ( READ_CBURSTRW() )


#define UNLESS_CBURSTRW_HIGH() \
     if (! READ_CBURSTRW() )


#define WAIT_CBURSTRW_LOW() \
    while ( READ_CBURSTRW() );


#define WAIT_CBURSTRW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CBURSTRW() && (--___t___ > 0)); }


#define WAIT_CBURSTRW_HIGH() \
    while (! READ_CBURSTRW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR3
//
// Notes : Register Btr3 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BTR_3( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_BTR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_BTR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_BTR_3() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BTR_3_REG 0x14

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x14) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x14) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x14) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BUSTURN 
    // 
#define BUSTURN_MASK 0xF0000U
#define BUSTURN_OFFSET 19
#define BUSTURN_START_BIT 16
#define BUSTURN_WIDTH 4



#define READ_BUSTURN() \
   ((READ_REGISTER_ULONG(0x14) & BUSTURN_MASK)  >> BUSTURN_START_BIT)

#define WRITE_BUSTURN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ BUSTURN_MASK) | ((val << BUSTURN_START_BIT) & BUSTURN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x14) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x14) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr3
//
// Return the value of register BTR_3
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 3 (BTR3) at the offset 0x14, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x14) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR4
//
// Notes : Register Bcr4 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BCR_4( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_BCR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_BCR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_BCR_4() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MBKEN 
    // 
#define MBKEN_MASK 0x1U
#define MBKEN_OFFSET 0
#define MBKEN_START_BIT 0
#define MBKEN_WIDTH 1


#define BCR_4_REG 0x18

#define WRITE_MBKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ MBKEN_MASK) | ((val << MBKEN_START_BIT) & MBKEN_MASK )); \
   } 

#define ENABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  MBKEN_MASK ); \
   }

#define DISABLE_MBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~MBKEN_MASK ); \
   } 

#define READ_MBKEN() \
   ((READ_REGISTER_ULONG(0x18) & MBKEN_MASK)  >> MBKEN_START_BIT)

#define WHEN_MBKEN_HIGH() \
     if ( READ_MBKEN() )


#define UNLESS_MBKEN_HIGH() \
     if (! READ_MBKEN() )


#define WAIT_MBKEN_LOW() \
    while ( READ_MBKEN() );


#define WAIT_MBKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MBKEN() && (--___t___ > 0)); }


#define WAIT_MBKEN_HIGH() \
    while (! READ_MBKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MUXEN 
    // 
#define MUXEN_MASK 0x2U
#define MUXEN_OFFSET 1
#define MUXEN_START_BIT 1
#define MUXEN_WIDTH 1



#define WRITE_MUXEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ MUXEN_MASK) | ((val << MUXEN_START_BIT) & MUXEN_MASK )); \
   } 

#define ENABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  MUXEN_MASK ); \
   }

#define DISABLE_MUXEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~MUXEN_MASK ); \
   } 

#define READ_MUXEN() \
   ((READ_REGISTER_ULONG(0x18) & MUXEN_MASK)  >> MUXEN_START_BIT)

#define WHEN_MUXEN_HIGH() \
     if ( READ_MUXEN() )


#define UNLESS_MUXEN_HIGH() \
     if (! READ_MUXEN() )


#define WAIT_MUXEN_LOW() \
    while ( READ_MUXEN() );


#define WAIT_MUXEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MUXEN() && (--___t___ > 0)); }


#define WAIT_MUXEN_HIGH() \
    while (! READ_MUXEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MTYP 
    // 
#define MTYP_MASK 0xCU
#define MTYP_OFFSET 3
#define MTYP_START_BIT 2
#define MTYP_WIDTH 2



#define READ_MTYP() \
   ((READ_REGISTER_ULONG(0x18) & MTYP_MASK)  >> MTYP_START_BIT)

#define WRITE_MTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ MTYP_MASK) | ((val << MTYP_START_BIT) & MTYP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MWID 
    // 
#define MWID_MASK 0x30U
#define MWID_OFFSET 5
#define MWID_START_BIT 4
#define MWID_WIDTH 2



#define READ_MWID() \
   ((READ_REGISTER_ULONG(0x18) & MWID_MASK)  >> MWID_START_BIT)

#define WRITE_MWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ MWID_MASK) | ((val << MWID_START_BIT) & MWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FACCEN 
    // 
#define FACCEN_MASK 0x40U
#define FACCEN_OFFSET 6
#define FACCEN_START_BIT 6
#define FACCEN_WIDTH 1



#define WRITE_FACCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ FACCEN_MASK) | ((val << FACCEN_START_BIT) & FACCEN_MASK )); \
   } 

#define ENABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  FACCEN_MASK ); \
   }

#define DISABLE_FACCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~FACCEN_MASK ); \
   } 

#define READ_FACCEN() \
   ((READ_REGISTER_ULONG(0x18) & FACCEN_MASK)  >> FACCEN_START_BIT)

#define WHEN_FACCEN_HIGH() \
     if ( READ_FACCEN() )


#define UNLESS_FACCEN_HIGH() \
     if (! READ_FACCEN() )


#define WAIT_FACCEN_LOW() \
    while ( READ_FACCEN() );


#define WAIT_FACCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FACCEN() && (--___t___ > 0)); }


#define WAIT_FACCEN_HIGH() \
    while (! READ_FACCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BURSTEN 
    // 
#define BURSTEN_MASK 0x100U
#define BURSTEN_OFFSET 8
#define BURSTEN_START_BIT 8
#define BURSTEN_WIDTH 1



#define WRITE_BURSTEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ BURSTEN_MASK) | ((val << BURSTEN_START_BIT) & BURSTEN_MASK )); \
   } 

#define ENABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  BURSTEN_MASK ); \
   }

#define DISABLE_BURSTEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~BURSTEN_MASK ); \
   } 

#define READ_BURSTEN() \
   ((READ_REGISTER_ULONG(0x18) & BURSTEN_MASK)  >> BURSTEN_START_BIT)

#define WHEN_BURSTEN_HIGH() \
     if ( READ_BURSTEN() )


#define UNLESS_BURSTEN_HIGH() \
     if (! READ_BURSTEN() )


#define WAIT_BURSTEN_LOW() \
    while ( READ_BURSTEN() );


#define WAIT_BURSTEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BURSTEN() && (--___t___ > 0)); }


#define WAIT_BURSTEN_HIGH() \
    while (! READ_BURSTEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WAITPOL 
    // 
#define WAITPOL_MASK 0x200U
#define WAITPOL_OFFSET 9
#define WAITPOL_START_BIT 9
#define WAITPOL_WIDTH 1



#define WRITE_WAITPOL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ WAITPOL_MASK) | ((val << WAITPOL_START_BIT) & WAITPOL_MASK )); \
   } 

#define ENABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  WAITPOL_MASK ); \
   }

#define DISABLE_WAITPOL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~WAITPOL_MASK ); \
   } 

#define READ_WAITPOL() \
   ((READ_REGISTER_ULONG(0x18) & WAITPOL_MASK)  >> WAITPOL_START_BIT)

#define WHEN_WAITPOL_HIGH() \
     if ( READ_WAITPOL() )


#define UNLESS_WAITPOL_HIGH() \
     if (! READ_WAITPOL() )


#define WAIT_WAITPOL_LOW() \
    while ( READ_WAITPOL() );


#define WAIT_WAITPOL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITPOL() && (--___t___ > 0)); }


#define WAIT_WAITPOL_HIGH() \
    while (! READ_WAITPOL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WRAPMOD 
    // 
#define WRAPMOD_MASK 0x400U
#define WRAPMOD_OFFSET 10
#define WRAPMOD_START_BIT 10
#define WRAPMOD_WIDTH 1



#define WRITE_WRAPMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ WRAPMOD_MASK) | ((val << WRAPMOD_START_BIT) & WRAPMOD_MASK )); \
   } 

#define ENABLE_WRAPMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  WRAPMOD_MASK ); \
   }

#define DISABLE_WRAPMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~WRAPMOD_MASK ); \
   } 

#define READ_WRAPMOD() \
   ((READ_REGISTER_ULONG(0x18) & WRAPMOD_MASK)  >> WRAPMOD_START_BIT)

#define WHEN_WRAPMOD_HIGH() \
     if ( READ_WRAPMOD() )


#define UNLESS_WRAPMOD_HIGH() \
     if (! READ_WRAPMOD() )


#define WAIT_WRAPMOD_LOW() \
    while ( READ_WRAPMOD() );


#define WAIT_WRAPMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WRAPMOD() && (--___t___ > 0)); }


#define WAIT_WRAPMOD_HIGH() \
    while (! READ_WRAPMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WAITCFG 
    // 
#define WAITCFG_MASK 0x800U
#define WAITCFG_OFFSET 11
#define WAITCFG_START_BIT 11
#define WAITCFG_WIDTH 1



#define WRITE_WAITCFG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ WAITCFG_MASK) | ((val << WAITCFG_START_BIT) & WAITCFG_MASK )); \
   } 

#define ENABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  WAITCFG_MASK ); \
   }

#define DISABLE_WAITCFG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~WAITCFG_MASK ); \
   } 

#define READ_WAITCFG() \
   ((READ_REGISTER_ULONG(0x18) & WAITCFG_MASK)  >> WAITCFG_START_BIT)

#define WHEN_WAITCFG_HIGH() \
     if ( READ_WAITCFG() )


#define UNLESS_WAITCFG_HIGH() \
     if (! READ_WAITCFG() )


#define WAIT_WAITCFG_LOW() \
    while ( READ_WAITCFG() );


#define WAIT_WAITCFG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITCFG() && (--___t___ > 0)); }


#define WAIT_WAITCFG_HIGH() \
    while (! READ_WAITCFG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WREN 
    // 
#define WREN_MASK 0x1000U
#define WREN_OFFSET 12
#define WREN_START_BIT 12
#define WREN_WIDTH 1



#define WRITE_WREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ WREN_MASK) | ((val << WREN_START_BIT) & WREN_MASK )); \
   } 

#define ENABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  WREN_MASK ); \
   }

#define DISABLE_WREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~WREN_MASK ); \
   } 

#define READ_WREN() \
   ((READ_REGISTER_ULONG(0x18) & WREN_MASK)  >> WREN_START_BIT)

#define WHEN_WREN_HIGH() \
     if ( READ_WREN() )


#define UNLESS_WREN_HIGH() \
     if (! READ_WREN() )


#define WAIT_WREN_LOW() \
    while ( READ_WREN() );


#define WAIT_WREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WREN() && (--___t___ > 0)); }


#define WAIT_WREN_HIGH() \
    while (! READ_WREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WAITEN 
    // 
#define WAITEN_MASK 0x2000U
#define WAITEN_OFFSET 13
#define WAITEN_START_BIT 13
#define WAITEN_WIDTH 1



#define WRITE_WAITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ WAITEN_MASK) | ((val << WAITEN_START_BIT) & WAITEN_MASK )); \
   } 

#define ENABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  WAITEN_MASK ); \
   }

#define DISABLE_WAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~WAITEN_MASK ); \
   } 

#define READ_WAITEN() \
   ((READ_REGISTER_ULONG(0x18) & WAITEN_MASK)  >> WAITEN_START_BIT)

#define WHEN_WAITEN_HIGH() \
     if ( READ_WAITEN() )


#define UNLESS_WAITEN_HIGH() \
     if (! READ_WAITEN() )


#define WAIT_WAITEN_LOW() \
    while ( READ_WAITEN() );


#define WAIT_WAITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WAITEN() && (--___t___ > 0)); }


#define WAIT_WAITEN_HIGH() \
    while (! READ_WAITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EXTMOD 
    // 
#define EXTMOD_MASK 0x4000U
#define EXTMOD_OFFSET 14
#define EXTMOD_START_BIT 14
#define EXTMOD_WIDTH 1



#define WRITE_EXTMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ EXTMOD_MASK) | ((val << EXTMOD_START_BIT) & EXTMOD_MASK )); \
   } 

#define ENABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  EXTMOD_MASK ); \
   }

#define DISABLE_EXTMOD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~EXTMOD_MASK ); \
   } 

#define READ_EXTMOD() \
   ((READ_REGISTER_ULONG(0x18) & EXTMOD_MASK)  >> EXTMOD_START_BIT)

#define WHEN_EXTMOD_HIGH() \
     if ( READ_EXTMOD() )


#define UNLESS_EXTMOD_HIGH() \
     if (! READ_EXTMOD() )


#define WAIT_EXTMOD_LOW() \
    while ( READ_EXTMOD() );


#define WAIT_EXTMOD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EXTMOD() && (--___t___ > 0)); }


#define WAIT_EXTMOD_HIGH() \
    while (! READ_EXTMOD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ASYNCWAIT 
    // 
#define ASYNCWAIT_MASK 0x8000U
#define ASYNCWAIT_OFFSET 15
#define ASYNCWAIT_START_BIT 15
#define ASYNCWAIT_WIDTH 1



#define WRITE_ASYNCWAIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ ASYNCWAIT_MASK) | ((val << ASYNCWAIT_START_BIT) & ASYNCWAIT_MASK )); \
   } 

#define ENABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  ASYNCWAIT_MASK ); \
   }

#define DISABLE_ASYNCWAIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~ASYNCWAIT_MASK ); \
   } 

#define READ_ASYNCWAIT() \
   ((READ_REGISTER_ULONG(0x18) & ASYNCWAIT_MASK)  >> ASYNCWAIT_START_BIT)

#define WHEN_ASYNCWAIT_HIGH() \
     if ( READ_ASYNCWAIT() )


#define UNLESS_ASYNCWAIT_HIGH() \
     if (! READ_ASYNCWAIT() )


#define WAIT_ASYNCWAIT_LOW() \
    while ( READ_ASYNCWAIT() );


#define WAIT_ASYNCWAIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ASYNCWAIT() && (--___t___ > 0)); }


#define WAIT_ASYNCWAIT_HIGH() \
    while (! READ_ASYNCWAIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bcr4
//
// Return the value of register BCR_4
//
// Notes : Register SRAM/NOR-Flash chip-select control register 4 (BCR4) at the offset 0x18, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CBURSTRW 
    // 
#define CBURSTRW_MASK 0x80000U
#define CBURSTRW_OFFSET 19
#define CBURSTRW_START_BIT 19
#define CBURSTRW_WIDTH 1



#define WRITE_CBURSTRW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ CBURSTRW_MASK) | ((val << CBURSTRW_START_BIT) & CBURSTRW_MASK )); \
   } 

#define ENABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  CBURSTRW_MASK ); \
   }

#define DISABLE_CBURSTRW() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG(0x18, val & ~CBURSTRW_MASK ); \
   } 

#define READ_CBURSTRW() \
   ((READ_REGISTER_ULONG(0x18) & CBURSTRW_MASK)  >> CBURSTRW_START_BIT)

#define WHEN_CBURSTRW_HIGH() \
     if ( READ_CBURSTRW() )


#define UNLESS_CBURSTRW_HIGH() \
     if (! READ_CBURSTRW() )


#define WAIT_CBURSTRW_LOW() \
    while ( READ_CBURSTRW() );


#define WAIT_CBURSTRW_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CBURSTRW() && (--___t___ > 0)); }


#define WAIT_CBURSTRW_HIGH() \
    while (! READ_CBURSTRW() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR4
//
// Notes : Register Btr4 at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BTR_4( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_BTR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_BTR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_BTR_4() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BTR_4_REG 0x1C

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x1C) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x1C) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x1C) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BUSTURN 
    // 
#define BUSTURN_MASK 0xF0000U
#define BUSTURN_OFFSET 19
#define BUSTURN_START_BIT 16
#define BUSTURN_WIDTH 4



#define READ_BUSTURN() \
   ((READ_REGISTER_ULONG(0x1C) & BUSTURN_MASK)  >> BUSTURN_START_BIT)

#define WRITE_BUSTURN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ BUSTURN_MASK) | ((val << BUSTURN_START_BIT) & BUSTURN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x1C) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x1C) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Btr4
//
// Return the value of register BTR_4
//
// Notes : Register SRAM/NOR-Flash chip-select timing register 4 (BTR4) at the offset 0x1C, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x1C) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register Pcr at offset 0x80
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PCR( y) \
     WRITE_REGISTER_ULONG( 0x80 , y)

#define SET_BITS_PCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  mask ); \
   }

#define CLEAR_BITS_PCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val & ~mask ); \
   }

#define READ_REGISTER_PCR() \
     READ_REGISTER_ULONG(0x80)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PWAITEN 
    // 
#define PWAITEN_MASK 0x2U
#define PWAITEN_OFFSET 1
#define PWAITEN_START_BIT 1
#define PWAITEN_WIDTH 1


#define PCR_REG 0x80

typedef enum pwaiten {
    PWAITEN_0,
    PWAITEN_1
} PWAITEN_T ;
#define WRITE_PWAITEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ PWAITEN_MASK) | ((val << PWAITEN_START_BIT) & PWAITEN_MASK )); \
   } 

#define ENABLE_PWAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  PWAITEN_MASK ); \
   }

#define DISABLE_PWAITEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG(0x80, val & ~PWAITEN_MASK ); \
   } 

#define READ_PWAITEN() \
   ((READ_REGISTER_ULONG(0x80) & PWAITEN_MASK)  >> PWAITEN_START_BIT)

#define WHEN_PWAITEN_HIGH() \
     if ( READ_PWAITEN() )


#define UNLESS_PWAITEN_HIGH() \
     if (! READ_PWAITEN() )


#define WAIT_PWAITEN_LOW() \
    while ( READ_PWAITEN() );


#define WAIT_PWAITEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PWAITEN() && (--___t___ > 0)); }


#define WAIT_PWAITEN_HIGH() \
    while (! READ_PWAITEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PBKEN 
    // 
#define PBKEN_MASK 0x4U
#define PBKEN_OFFSET 2
#define PBKEN_START_BIT 2
#define PBKEN_WIDTH 1



typedef enum pbken {
    PBKEN_0,
    PBKEN_1
} PBKEN_T ;
#define WRITE_PBKEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ PBKEN_MASK) | ((val << PBKEN_START_BIT) & PBKEN_MASK )); \
   } 

#define ENABLE_PBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  PBKEN_MASK ); \
   }

#define DISABLE_PBKEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG(0x80, val & ~PBKEN_MASK ); \
   } 

#define READ_PBKEN() \
   ((READ_REGISTER_ULONG(0x80) & PBKEN_MASK)  >> PBKEN_START_BIT)

#define WHEN_PBKEN_HIGH() \
     if ( READ_PBKEN() )


#define UNLESS_PBKEN_HIGH() \
     if (! READ_PBKEN() )


#define WAIT_PBKEN_LOW() \
    while ( READ_PBKEN() );


#define WAIT_PBKEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PBKEN() && (--___t___ > 0)); }


#define WAIT_PBKEN_HIGH() \
    while (! READ_PBKEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PTYP 
    // 
#define PTYP_MASK 0x8U
#define PTYP_OFFSET 3
#define PTYP_START_BIT 3
#define PTYP_WIDTH 1



typedef enum ptyp {
    PTYP_0,
    PTYP_1
} PTYP_T ;
#define WRITE_PTYP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ PTYP_MASK) | ((val << PTYP_START_BIT) & PTYP_MASK )); \
   } 

#define ENABLE_PTYP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  PTYP_MASK ); \
   }

#define DISABLE_PTYP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG(0x80, val & ~PTYP_MASK ); \
   } 

#define READ_PTYP() \
   ((READ_REGISTER_ULONG(0x80) & PTYP_MASK)  >> PTYP_START_BIT)

#define WHEN_PTYP_HIGH() \
     if ( READ_PTYP() )


#define UNLESS_PTYP_HIGH() \
     if (! READ_PTYP() )


#define WAIT_PTYP_LOW() \
    while ( READ_PTYP() );


#define WAIT_PTYP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PTYP() && (--___t___ > 0)); }


#define WAIT_PTYP_HIGH() \
    while (! READ_PTYP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PWID 
    // 
#define PWID_MASK 0x30U
#define PWID_OFFSET 5
#define PWID_START_BIT 4
#define PWID_WIDTH 2



typedef enum pwid {
    PWID_0,
    PWID_1
} PWID_T ;
#define READ_PWID() \
   ((READ_REGISTER_ULONG(0x80) & PWID_MASK)  >> PWID_START_BIT)

#define WRITE_PWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ PWID_MASK) | ((val << PWID_START_BIT) & PWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ECCEN 
    // 
#define ECCEN_MASK 0x40U
#define ECCEN_OFFSET 6
#define ECCEN_START_BIT 6
#define ECCEN_WIDTH 1



typedef enum eccen {
    ECCEN_0,
    ECCEN_1
} ECCEN_T ;
#define WRITE_ECCEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ ECCEN_MASK) | ((val << ECCEN_START_BIT) & ECCEN_MASK )); \
   } 

#define ENABLE_ECCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  ECCEN_MASK ); \
   }

#define DISABLE_ECCEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG(0x80, val & ~ECCEN_MASK ); \
   } 

#define READ_ECCEN() \
   ((READ_REGISTER_ULONG(0x80) & ECCEN_MASK)  >> ECCEN_START_BIT)

#define WHEN_ECCEN_HIGH() \
     if ( READ_ECCEN() )


#define UNLESS_ECCEN_HIGH() \
     if (! READ_ECCEN() )


#define WAIT_ECCEN_LOW() \
    while ( READ_ECCEN() );


#define WAIT_ECCEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ECCEN() && (--___t___ > 0)); }


#define WAIT_ECCEN_HIGH() \
    while (! READ_ECCEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 9:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TCLR 
    // 
#define TCLR_MASK 0x1E00U
#define TCLR_OFFSET 12
#define TCLR_START_BIT 9
#define TCLR_WIDTH 4



typedef enum tclr {
    TCLR_0,
    TCLR_1
} TCLR_T ;
#define READ_TCLR() \
   ((READ_REGISTER_ULONG(0x80) & TCLR_MASK)  >> TCLR_START_BIT)

#define WRITE_TCLR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ TCLR_MASK) | ((val << TCLR_START_BIT) & TCLR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 13:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TAR 
    // 
#define TAR_MASK 0x1E000U
#define TAR_OFFSET 16
#define TAR_START_BIT 13
#define TAR_WIDTH 4



typedef enum tar {
    TAR_0,
    TAR_1
} TAR_T ;
#define READ_TAR() \
   ((READ_REGISTER_ULONG(0x80) & TAR_MASK)  >> TAR_START_BIT)

#define WRITE_TAR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ TAR_MASK) | ((val << TAR_START_BIT) & TAR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pcr
//
// Return the value of register PCR
//
// Notes : Register PC Card/NAND Flash control register (PCR) at the offset 0x80, Bits 17:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ECCPS 
    // 
#define ECCPS_MASK 0xE0000U
#define ECCPS_OFFSET 19
#define ECCPS_START_BIT 17
#define ECCPS_WIDTH 3



typedef enum eccps {
    ECCPS_0,
    ECCPS_1
} ECCPS_T ;
#define READ_ECCPS() \
   ((READ_REGISTER_ULONG(0x80) & ECCPS_MASK)  >> ECCPS_START_BIT)

#define WRITE_ECCPS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ ECCPS_MASK) | ((val << ECCPS_START_BIT) & ECCPS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x84
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : IRS
//
// Return the value of register Sr
//
// Notes : IRS 
//        (SR) at the offset 0x84, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IRS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ IRS_MASK) | ((val << IRS_START_BIT) & IRS_MASK )); \
   } 

#define ENABLE_IRS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  IRS_MASK ); \
   }

#define DISABLE_IRS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~IRS_MASK ); \
   } 

#define READ_IRS() \
   ((READ_REGISTER_ULONG(0x84) & IRS_MASK)  >> IRS_START_BIT)

#define WHEN_IRS_HIGH() \
     if ( READ_IRS() )


#define UNLESS_IRS_HIGH() \
     if (! READ_IRS() )


#define WAIT_IRS_LOW() \
    while ( READ_IRS() );


#define WAIT_IRS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IRS() && (--___t___ > 0)); }


#define WAIT_IRS_HIGH() \
    while (! READ_IRS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ILS
//
// Return the value of register Sr
//
// Notes : ILS 
//        (SR) at the offset 0x84, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ILS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ ILS_MASK) | ((val << ILS_START_BIT) & ILS_MASK )); \
   } 

#define ENABLE_ILS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  ILS_MASK ); \
   }

#define DISABLE_ILS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~ILS_MASK ); \
   } 

#define READ_ILS() \
   ((READ_REGISTER_ULONG(0x84) & ILS_MASK)  >> ILS_START_BIT)

#define WHEN_ILS_HIGH() \
     if ( READ_ILS() )


#define UNLESS_ILS_HIGH() \
     if (! READ_ILS() )


#define WAIT_ILS_LOW() \
    while ( READ_ILS() );


#define WAIT_ILS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ILS() && (--___t___ > 0)); }


#define WAIT_ILS_HIGH() \
    while (! READ_ILS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IFS
//
// Return the value of register Sr
//
// Notes : IFS 
//        (SR) at the offset 0x84, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IFS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ IFS_MASK) | ((val << IFS_START_BIT) & IFS_MASK )); \
   } 

#define ENABLE_IFS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  IFS_MASK ); \
   }

#define DISABLE_IFS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~IFS_MASK ); \
   } 

#define READ_IFS() \
   ((READ_REGISTER_ULONG(0x84) & IFS_MASK)  >> IFS_START_BIT)

#define WHEN_IFS_HIGH() \
     if ( READ_IFS() )


#define UNLESS_IFS_HIGH() \
     if (! READ_IFS() )


#define WAIT_IFS_LOW() \
    while ( READ_IFS() );


#define WAIT_IFS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IFS() && (--___t___ > 0)); }


#define WAIT_IFS_HIGH() \
    while (! READ_IFS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IREN
//
// Return the value of register Sr
//
// Notes : IREN 
//        (SR) at the offset 0x84, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IREN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ IREN_MASK) | ((val << IREN_START_BIT) & IREN_MASK )); \
   } 

#define ENABLE_IREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  IREN_MASK ); \
   }

#define DISABLE_IREN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~IREN_MASK ); \
   } 

#define READ_IREN() \
   ((READ_REGISTER_ULONG(0x84) & IREN_MASK)  >> IREN_START_BIT)

#define WHEN_IREN_HIGH() \
     if ( READ_IREN() )


#define UNLESS_IREN_HIGH() \
     if (! READ_IREN() )


#define WAIT_IREN_LOW() \
    while ( READ_IREN() );


#define WAIT_IREN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IREN() && (--___t___ > 0)); }


#define WAIT_IREN_HIGH() \
    while (! READ_IREN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ILEN
//
// Return the value of register Sr
//
// Notes : ILEN 
//        (SR) at the offset 0x84, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ILEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ ILEN_MASK) | ((val << ILEN_START_BIT) & ILEN_MASK )); \
   } 

#define ENABLE_ILEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  ILEN_MASK ); \
   }

#define DISABLE_ILEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~ILEN_MASK ); \
   } 

#define READ_ILEN() \
   ((READ_REGISTER_ULONG(0x84) & ILEN_MASK)  >> ILEN_START_BIT)

#define WHEN_ILEN_HIGH() \
     if ( READ_ILEN() )


#define UNLESS_ILEN_HIGH() \
     if (! READ_ILEN() )


#define WAIT_ILEN_LOW() \
    while ( READ_ILEN() );


#define WAIT_ILEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ILEN() && (--___t___ > 0)); }


#define WAIT_ILEN_HIGH() \
    while (! READ_ILEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IFEN
//
// Return the value of register Sr
//
// Notes : IFEN 
//        (SR) at the offset 0x84, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IFEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ IFEN_MASK) | ((val << IFEN_START_BIT) & IFEN_MASK )); \
   } 

#define ENABLE_IFEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  IFEN_MASK ); \
   }

#define DISABLE_IFEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~IFEN_MASK ); \
   } 

#define READ_IFEN() \
   ((READ_REGISTER_ULONG(0x84) & IFEN_MASK)  >> IFEN_START_BIT)

#define WHEN_IFEN_HIGH() \
     if ( READ_IFEN() )


#define UNLESS_IFEN_HIGH() \
     if (! READ_IFEN() )


#define WAIT_IFEN_LOW() \
    while ( READ_IFEN() );


#define WAIT_IFEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IFEN() && (--___t___ > 0)); }


#define WAIT_IFEN_HIGH() \
    while (! READ_IFEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : FEMPT
//
// Return the value of register Sr
//
// Notes : FEMPT 
//        (SR) at the offset 0x84, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FEMPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ FEMPT_MASK) | ((val << FEMPT_START_BIT) & FEMPT_MASK )); \
   } 

#define ENABLE_FEMPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  FEMPT_MASK ); \
   }

#define DISABLE_FEMPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG(0x84, val & ~FEMPT_MASK ); \
   } 

#define READ_FEMPT() \
   ((READ_REGISTER_ULONG(0x84) & FEMPT_MASK)  >> FEMPT_START_BIT)

#define WHEN_FEMPT_HIGH() \
     if ( READ_FEMPT() )


#define UNLESS_FEMPT_HIGH() \
     if (! READ_FEMPT() )


#define WAIT_FEMPT_LOW() \
    while ( READ_FEMPT() );


#define WAIT_FEMPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEMPT() && (--___t___ > 0)); }


#define WAIT_FEMPT_HIGH() \
    while (! READ_FEMPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pmem
//
// Return the value of register PMEM
//
// Notes : Register Pmem at offset 0x88
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PMEM( y) \
     WRITE_REGISTER_ULONG( 0x88 , y)

#define SET_BITS_PMEM(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val |  mask ); \
   }

#define CLEAR_BITS_PMEM(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val & ~mask ); \
   }

#define READ_REGISTER_PMEM() \
     READ_REGISTER_ULONG(0x88)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pmem
//
// Return the value of register PMEM
//
// Notes : Register Common memory space timing register (PMEM) at the offset 0x88, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MEMSETx 
    // 
#define MEMSETX_MASK 0xFFU
#define MEMSETX_OFFSET 7
#define MEMSETX_START_BIT 0
#define MEMSETX_WIDTH 8


#define PMEM_REG 0x88

typedef enum memsetx {
    MEMSETX_0,
    MEMSETX_1
} MEMSETX_T ;
#define READ_MEMSETX() \
   ((READ_REGISTER_ULONG(0x88) & MEMSETX_MASK)  >> MEMSETX_START_BIT)

#define WRITE_MEMSETX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ MEMSETX_MASK) | ((val << MEMSETX_START_BIT) & MEMSETX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pmem
//
// Return the value of register PMEM
//
// Notes : Register Common memory space timing register (PMEM) at the offset 0x88, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MEMWAITx 
    // 
#define MEMWAITX_MASK 0xFF00U
#define MEMWAITX_OFFSET 15
#define MEMWAITX_START_BIT 8
#define MEMWAITX_WIDTH 8



typedef enum memwaitx {
    MEMWAITX_0,
    MEMWAITX_1
} MEMWAITX_T ;
#define READ_MEMWAITX() \
   ((READ_REGISTER_ULONG(0x88) & MEMWAITX_MASK)  >> MEMWAITX_START_BIT)

#define WRITE_MEMWAITX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ MEMWAITX_MASK) | ((val << MEMWAITX_START_BIT) & MEMWAITX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pmem
//
// Return the value of register PMEM
//
// Notes : Register Common memory space timing register (PMEM) at the offset 0x88, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MEMHOLDx 
    // 
#define MEMHOLDX_MASK 0xFF0000U
#define MEMHOLDX_OFFSET 23
#define MEMHOLDX_START_BIT 16
#define MEMHOLDX_WIDTH 8



typedef enum memholdx {
    MEMHOLDX_0,
    MEMHOLDX_1
} MEMHOLDX_T ;
#define READ_MEMHOLDX() \
   ((READ_REGISTER_ULONG(0x88) & MEMHOLDX_MASK)  >> MEMHOLDX_START_BIT)

#define WRITE_MEMHOLDX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ MEMHOLDX_MASK) | ((val << MEMHOLDX_START_BIT) & MEMHOLDX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pmem
//
// Return the value of register PMEM
//
// Notes : Register Common memory space timing register (PMEM) at the offset 0x88, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // MEMHIZx 
    // 
#define MEMHIZX_MASK 0xFF000000U
#define MEMHIZX_OFFSET 31
#define MEMHIZX_START_BIT 24
#define MEMHIZX_WIDTH 8



typedef enum memhizx {
    MEMHIZX_0,
    MEMHIZX_1
} MEMHIZX_T ;
#define READ_MEMHIZX() \
   ((READ_REGISTER_ULONG(0x88) & MEMHIZX_MASK)  >> MEMHIZX_START_BIT)

#define WRITE_MEMHIZX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ MEMHIZX_MASK) | ((val << MEMHIZX_START_BIT) & MEMHIZX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Patt
//
// Return the value of register PATT
//
// Notes : Register Patt at offset 0x8C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PATT( y) \
     WRITE_REGISTER_ULONG( 0x8C , y)

#define SET_BITS_PATT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val |  mask ); \
   }

#define CLEAR_BITS_PATT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val & ~mask ); \
   }

#define READ_REGISTER_PATT() \
     READ_REGISTER_ULONG(0x8C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Patt
//
// Return the value of register PATT
//
// Notes : Register Attribute memory space timing register (PATT) at the offset 0x8C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ATTSETx 
    // 
#define ATTSETX_MASK 0xFFU
#define ATTSETX_OFFSET 7
#define ATTSETX_START_BIT 0
#define ATTSETX_WIDTH 8


#define PATT_REG 0x8C

typedef enum attsetx {
    ATTSETX_0,
    ATTSETX_1
} ATTSETX_T ;
#define READ_ATTSETX() \
   ((READ_REGISTER_ULONG(0x8C) & ATTSETX_MASK)  >> ATTSETX_START_BIT)

#define WRITE_ATTSETX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ ATTSETX_MASK) | ((val << ATTSETX_START_BIT) & ATTSETX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Patt
//
// Return the value of register PATT
//
// Notes : Register Attribute memory space timing register (PATT) at the offset 0x8C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ATTWAITx 
    // 
#define ATTWAITX_MASK 0xFF00U
#define ATTWAITX_OFFSET 15
#define ATTWAITX_START_BIT 8
#define ATTWAITX_WIDTH 8



typedef enum attwaitx {
    ATTWAITX_0,
    ATTWAITX_1
} ATTWAITX_T ;
#define READ_ATTWAITX() \
   ((READ_REGISTER_ULONG(0x8C) & ATTWAITX_MASK)  >> ATTWAITX_START_BIT)

#define WRITE_ATTWAITX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ ATTWAITX_MASK) | ((val << ATTWAITX_START_BIT) & ATTWAITX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Patt
//
// Return the value of register PATT
//
// Notes : Register Attribute memory space timing register (PATT) at the offset 0x8C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ATTHOLDx 
    // 
#define ATTHOLDX_MASK 0xFF0000U
#define ATTHOLDX_OFFSET 23
#define ATTHOLDX_START_BIT 16
#define ATTHOLDX_WIDTH 8



typedef enum attholdx {
    ATTHOLDX_0,
    ATTHOLDX_1
} ATTHOLDX_T ;
#define READ_ATTHOLDX() \
   ((READ_REGISTER_ULONG(0x8C) & ATTHOLDX_MASK)  >> ATTHOLDX_START_BIT)

#define WRITE_ATTHOLDX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ ATTHOLDX_MASK) | ((val << ATTHOLDX_START_BIT) & ATTHOLDX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Patt
//
// Return the value of register PATT
//
// Notes : Register Attribute memory space timing register (PATT) at the offset 0x8C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ATTHIZx 
    // 
#define ATTHIZX_MASK 0xFF000000U
#define ATTHIZX_OFFSET 31
#define ATTHIZX_START_BIT 24
#define ATTHIZX_WIDTH 8



typedef enum atthizx {
    ATTHIZX_0,
    ATTHIZX_1
} ATTHIZX_T ;
#define READ_ATTHIZX() \
   ((READ_REGISTER_ULONG(0x8C) & ATTHIZX_MASK)  >> ATTHIZX_START_BIT)

#define WRITE_ATTHIZX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ ATTHIZX_MASK) | ((val << ATTHIZX_START_BIT) & ATTHIZX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Eccr
//
// Return the value of register ECCR
//
// Notes : Register Eccr at offset 0x94
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ECCR() \
     READ_REGISTER_ULONG(0x94)

/////////////////////////////////////////////////////////////////////////
//
// Function : Eccr
//
// Return the value of register ECCR
//
// Notes : Register ECC result register (ECCR) at the offset 0x94, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ECCx 
    // 
#define ECCX_MASK 0xFFFFFFFFU
#define ECCX_OFFSET 31
#define ECCX_START_BIT 0
#define ECCX_WIDTH 32


#define ECCR_REG 0x94

typedef enum eccx {
    ECCX_0,
    ECCX_1
} ECCX_T ;
#define READ_ECCX() \
   ((READ_REGISTER_ULONG(0x94) & ECCX_MASK)  >> ECCX_START_BIT)

#define WRITE_ECCX(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x94); \
     WRITE_REGISTER_ULONG(0x94, (OldValue & ~ ECCX_MASK) | ((val << ECCX_START_BIT) & ECCX_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR1
//
// Notes : Register Bwtr1 at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BWTR_1( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_BWTR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_BWTR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_BWTR_1() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR_1
//
// Notes : Register SRAM/NOR-Flash write timing registers 1 (BWTR1) at the offset 0x104, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BWTR_1_REG 0x104

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x104) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR_1
//
// Notes : Register SRAM/NOR-Flash write timing registers 1 (BWTR1) at the offset 0x104, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x104) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR_1
//
// Notes : Register SRAM/NOR-Flash write timing registers 1 (BWTR1) at the offset 0x104, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x104) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR_1
//
// Notes : Register SRAM/NOR-Flash write timing registers 1 (BWTR1) at the offset 0x104, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x104) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR_1
//
// Notes : Register SRAM/NOR-Flash write timing registers 1 (BWTR1) at the offset 0x104, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x104) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr1
//
// Return the value of register BWTR_1
//
// Notes : Register SRAM/NOR-Flash write timing registers 1 (BWTR1) at the offset 0x104, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x104) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR2
//
// Notes : Register Bwtr2 at offset 0x10C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BWTR_2( y) \
     WRITE_REGISTER_ULONG( 0x10C , y)

#define SET_BITS_BWTR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val |  mask ); \
   }

#define CLEAR_BITS_BWTR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10C); \
     WRITE_REGISTER_ULONG( 0x10C , val & ~mask ); \
   }

#define READ_REGISTER_BWTR_2() \
     READ_REGISTER_ULONG(0x10C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR_2
//
// Notes : Register SRAM/NOR-Flash write timing registers 2 (BWTR2) at the offset 0x10C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BWTR_2_REG 0x10C

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x10C) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR_2
//
// Notes : Register SRAM/NOR-Flash write timing registers 2 (BWTR2) at the offset 0x10C, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x10C) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR_2
//
// Notes : Register SRAM/NOR-Flash write timing registers 2 (BWTR2) at the offset 0x10C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x10C) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR_2
//
// Notes : Register SRAM/NOR-Flash write timing registers 2 (BWTR2) at the offset 0x10C, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x10C) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR_2
//
// Notes : Register SRAM/NOR-Flash write timing registers 2 (BWTR2) at the offset 0x10C, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x10C) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr2
//
// Return the value of register BWTR_2
//
// Notes : Register SRAM/NOR-Flash write timing registers 2 (BWTR2) at the offset 0x10C, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x10C) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10C); \
     WRITE_REGISTER_ULONG(0x10C, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR3
//
// Notes : Register Bwtr3 at offset 0x114
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BWTR_3( y) \
     WRITE_REGISTER_ULONG( 0x114 , y)

#define SET_BITS_BWTR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val |  mask ); \
   }

#define CLEAR_BITS_BWTR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x114); \
     WRITE_REGISTER_ULONG( 0x114 , val & ~mask ); \
   }

#define READ_REGISTER_BWTR_3() \
     READ_REGISTER_ULONG(0x114)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR_3
//
// Notes : Register SRAM/NOR-Flash write timing registers 3 (BWTR3) at the offset 0x114, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BWTR_3_REG 0x114

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x114) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR_3
//
// Notes : Register SRAM/NOR-Flash write timing registers 3 (BWTR3) at the offset 0x114, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x114) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR_3
//
// Notes : Register SRAM/NOR-Flash write timing registers 3 (BWTR3) at the offset 0x114, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x114) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR_3
//
// Notes : Register SRAM/NOR-Flash write timing registers 3 (BWTR3) at the offset 0x114, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x114) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR_3
//
// Notes : Register SRAM/NOR-Flash write timing registers 3 (BWTR3) at the offset 0x114, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x114) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr3
//
// Return the value of register BWTR_3
//
// Notes : Register SRAM/NOR-Flash write timing registers 3 (BWTR3) at the offset 0x114, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x114) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x114); \
     WRITE_REGISTER_ULONG(0x114, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR4
//
// Notes : Register Bwtr4 at offset 0x11C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BWTR_4( y) \
     WRITE_REGISTER_ULONG( 0x11C , y)

#define SET_BITS_BWTR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val |  mask ); \
   }

#define CLEAR_BITS_BWTR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x11C); \
     WRITE_REGISTER_ULONG( 0x11C , val & ~mask ); \
   }

#define READ_REGISTER_BWTR_4() \
     READ_REGISTER_ULONG(0x11C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR_4
//
// Notes : Register SRAM/NOR-Flash write timing registers 4 (BWTR4) at the offset 0x11C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDSET 
    // 
#define ADDSET_MASK 0xFU
#define ADDSET_OFFSET 3
#define ADDSET_START_BIT 0
#define ADDSET_WIDTH 4


#define BWTR_4_REG 0x11C

#define READ_ADDSET() \
   ((READ_REGISTER_ULONG(0x11C) & ADDSET_MASK)  >> ADDSET_START_BIT)

#define WRITE_ADDSET(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ ADDSET_MASK) | ((val << ADDSET_START_BIT) & ADDSET_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR_4
//
// Notes : Register SRAM/NOR-Flash write timing registers 4 (BWTR4) at the offset 0x11C, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ADDHLD 
    // 
#define ADDHLD_MASK 0xF0U
#define ADDHLD_OFFSET 7
#define ADDHLD_START_BIT 4
#define ADDHLD_WIDTH 4



#define READ_ADDHLD() \
   ((READ_REGISTER_ULONG(0x11C) & ADDHLD_MASK)  >> ADDHLD_START_BIT)

#define WRITE_ADDHLD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ ADDHLD_MASK) | ((val << ADDHLD_START_BIT) & ADDHLD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR_4
//
// Notes : Register SRAM/NOR-Flash write timing registers 4 (BWTR4) at the offset 0x11C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATAST 
    // 
#define DATAST_MASK 0xFF00U
#define DATAST_OFFSET 15
#define DATAST_START_BIT 8
#define DATAST_WIDTH 8



#define READ_DATAST() \
   ((READ_REGISTER_ULONG(0x11C) & DATAST_MASK)  >> DATAST_START_BIT)

#define WRITE_DATAST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ DATAST_MASK) | ((val << DATAST_START_BIT) & DATAST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR_4
//
// Notes : Register SRAM/NOR-Flash write timing registers 4 (BWTR4) at the offset 0x11C, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLKDIV 
    // 
#define CLKDIV_MASK 0xF00000U
#define CLKDIV_OFFSET 23
#define CLKDIV_START_BIT 20
#define CLKDIV_WIDTH 4



#define READ_CLKDIV() \
   ((READ_REGISTER_ULONG(0x11C) & CLKDIV_MASK)  >> CLKDIV_START_BIT)

#define WRITE_CLKDIV(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ CLKDIV_MASK) | ((val << CLKDIV_START_BIT) & CLKDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR_4
//
// Notes : Register SRAM/NOR-Flash write timing registers 4 (BWTR4) at the offset 0x11C, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DATLAT 
    // 
#define DATLAT_MASK 0xF000000U
#define DATLAT_OFFSET 27
#define DATLAT_START_BIT 24
#define DATLAT_WIDTH 4



#define READ_DATLAT() \
   ((READ_REGISTER_ULONG(0x11C) & DATLAT_MASK)  >> DATLAT_START_BIT)

#define WRITE_DATLAT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ DATLAT_MASK) | ((val << DATLAT_START_BIT) & DATLAT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bwtr4
//
// Return the value of register BWTR_4
//
// Notes : Register SRAM/NOR-Flash write timing registers 4 (BWTR4) at the offset 0x11C, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACCMOD 
    // 
#define ACCMOD_MASK 0x30000000U
#define ACCMOD_OFFSET 29
#define ACCMOD_START_BIT 28
#define ACCMOD_WIDTH 2



#define READ_ACCMOD() \
   ((READ_REGISTER_ULONG(0x11C) & ACCMOD_MASK)  >> ACCMOD_START_BIT)

#define WRITE_ACCMOD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x11C); \
     WRITE_REGISTER_ULONG(0x11C, (OldValue & ~ ACCMOD_MASK) | ((val << ACCMOD_START_BIT) & ACCMOD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR1
//
// Notes : Register Sdcr1 at offset 0x140
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SDCR_1( y) \
     WRITE_REGISTER_ULONG( 0x140 , y)

#define SET_BITS_SDCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  mask ); \
   }

#define CLEAR_BITS_SDCR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val & ~mask ); \
   }

#define READ_REGISTER_SDCR_1() \
     READ_REGISTER_ULONG(0x140)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read pipe 
    // 
#define RPIPE_MASK 0x6000U
#define RPIPE_OFFSET 14
#define RPIPE_START_BIT 13
#define RPIPE_WIDTH 2


#define SDCR_1_REG 0x140

typedef enum rpipe {
    RPIPE_0,
    RPIPE_1
} RPIPE_T ;
#define READ_RPIPE() \
   ((READ_REGISTER_ULONG(0x140) & RPIPE_MASK)  >> RPIPE_START_BIT)

#define WRITE_RPIPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ RPIPE_MASK) | ((val << RPIPE_START_BIT) & RPIPE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Burst read 
    // 
#define RBURST_MASK 0x1000U
#define RBURST_OFFSET 12
#define RBURST_START_BIT 12
#define RBURST_WIDTH 1



typedef enum rburst {
    RBURST_0,
    RBURST_1
} RBURST_T ;
#define WRITE_RBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ RBURST_MASK) | ((val << RBURST_START_BIT) & RBURST_MASK )); \
   } 

#define ENABLE_RBURST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  RBURST_MASK ); \
   }

#define DISABLE_RBURST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~RBURST_MASK ); \
   } 

#define READ_RBURST() \
   ((READ_REGISTER_ULONG(0x140) & RBURST_MASK)  >> RBURST_START_BIT)

#define WHEN_RBURST_HIGH() \
     if ( READ_RBURST() )


#define UNLESS_RBURST_HIGH() \
     if (! READ_RBURST() )


#define WAIT_RBURST_LOW() \
    while ( READ_RBURST() );


#define WAIT_RBURST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RBURST() && (--___t___ > 0)); }


#define WAIT_RBURST_HIGH() \
    while (! READ_RBURST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDRAM clock configuration 
    // 
#define SDCLK_MASK 0xC00U
#define SDCLK_OFFSET 11
#define SDCLK_START_BIT 10
#define SDCLK_WIDTH 2



typedef enum sdclk {
    SDCLK_0,
    SDCLK_1
} SDCLK_T ;
#define READ_SDCLK() \
   ((READ_REGISTER_ULONG(0x140) & SDCLK_MASK)  >> SDCLK_START_BIT)

#define WRITE_SDCLK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ SDCLK_MASK) | ((val << SDCLK_START_BIT) & SDCLK_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Write protection 
    // 
#define WP_MASK 0x200U
#define WP_OFFSET 9
#define WP_START_BIT 9
#define WP_WIDTH 1



typedef enum wp {
    WP_0,
    WP_1
} WP_T ;
#define WRITE_WP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ WP_MASK) | ((val << WP_START_BIT) & WP_MASK )); \
   } 

#define ENABLE_WP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  WP_MASK ); \
   }

#define DISABLE_WP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~WP_MASK ); \
   } 

#define READ_WP() \
   ((READ_REGISTER_ULONG(0x140) & WP_MASK)  >> WP_START_BIT)

#define WHEN_WP_HIGH() \
     if ( READ_WP() )


#define UNLESS_WP_HIGH() \
     if (! READ_WP() )


#define WAIT_WP_LOW() \
    while ( READ_WP() );


#define WAIT_WP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WP() && (--___t___ > 0)); }


#define WAIT_WP_HIGH() \
    while (! READ_WP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 7:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAS latency 
    // 
#define CAS_MASK 0x180U
#define CAS_OFFSET 8
#define CAS_START_BIT 7
#define CAS_WIDTH 2



typedef enum cas {
    CAS_0,
    CAS_1
} CAS_T ;
#define READ_CAS() \
   ((READ_REGISTER_ULONG(0x140) & CAS_MASK)  >> CAS_START_BIT)

#define WRITE_CAS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ CAS_MASK) | ((val << CAS_START_BIT) & CAS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of internal banks 
    // 
#define NB_MASK 0x40U
#define NB_OFFSET 6
#define NB_START_BIT 6
#define NB_WIDTH 1



typedef enum nb {
    NB_0,
    NB_1
} NB_T ;
#define WRITE_NB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ NB_MASK) | ((val << NB_START_BIT) & NB_MASK )); \
   } 

#define ENABLE_NB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG( 0x140 , val |  NB_MASK ); \
   }

#define DISABLE_NB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x140); \
     WRITE_REGISTER_ULONG(0x140, val & ~NB_MASK ); \
   } 

#define READ_NB() \
   ((READ_REGISTER_ULONG(0x140) & NB_MASK)  >> NB_START_BIT)

#define WHEN_NB_HIGH() \
     if ( READ_NB() )


#define UNLESS_NB_HIGH() \
     if (! READ_NB() )


#define WAIT_NB_LOW() \
    while ( READ_NB() );


#define WAIT_NB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NB() && (--___t___ > 0)); }


#define WAIT_NB_HIGH() \
    while (! READ_NB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data bus width 
    // 
#define MWID_MASK 0x30U
#define MWID_OFFSET 5
#define MWID_START_BIT 4
#define MWID_WIDTH 2



#define READ_MWID() \
   ((READ_REGISTER_ULONG(0x140) & MWID_MASK)  >> MWID_START_BIT)

#define WRITE_MWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ MWID_MASK) | ((val << MWID_START_BIT) & MWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of row address bits 
    // 
#define NR_MASK 0xCU
#define NR_OFFSET 3
#define NR_START_BIT 2
#define NR_WIDTH 2



typedef enum nr {
    NR_0,
    NR_1
} NR_T ;
#define READ_NR() \
   ((READ_REGISTER_ULONG(0x140) & NR_MASK)  >> NR_START_BIT)

#define WRITE_NR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ NR_MASK) | ((val << NR_START_BIT) & NR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr1
//
// Return the value of register SDCR_1
//
// Notes : Register SDRAM Control Register 1 (SDCR1) at the offset 0x140, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of column address bits 
    // 
#define NC_MASK 0x3U
#define NC_OFFSET 1
#define NC_START_BIT 0
#define NC_WIDTH 2



typedef enum nc {
    NC_0,
    NC_1
} NC_T ;
#define READ_NC() \
   ((READ_REGISTER_ULONG(0x140) & NC_MASK)  >> NC_START_BIT)

#define WRITE_NC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x140); \
     WRITE_REGISTER_ULONG(0x140, (OldValue & ~ NC_MASK) | ((val << NC_START_BIT) & NC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR2
//
// Notes : Register Sdcr2 at offset 0x144
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SDCR_2( y) \
     WRITE_REGISTER_ULONG( 0x144 , y)

#define SET_BITS_SDCR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  mask ); \
   }

#define CLEAR_BITS_SDCR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val & ~mask ); \
   }

#define READ_REGISTER_SDCR_2() \
     READ_REGISTER_ULONG(0x144)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Read pipe 
    // 
#define RPIPE_MASK 0x6000U
#define RPIPE_OFFSET 14
#define RPIPE_START_BIT 13
#define RPIPE_WIDTH 2


#define SDCR_2_REG 0x144

#define READ_RPIPE() \
   ((READ_REGISTER_ULONG(0x144) & RPIPE_MASK)  >> RPIPE_START_BIT)

#define WRITE_RPIPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ RPIPE_MASK) | ((val << RPIPE_START_BIT) & RPIPE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Burst read 
    // 
#define RBURST_MASK 0x1000U
#define RBURST_OFFSET 12
#define RBURST_START_BIT 12
#define RBURST_WIDTH 1



#define WRITE_RBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ RBURST_MASK) | ((val << RBURST_START_BIT) & RBURST_MASK )); \
   } 

#define ENABLE_RBURST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  RBURST_MASK ); \
   }

#define DISABLE_RBURST() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG(0x144, val & ~RBURST_MASK ); \
   } 

#define READ_RBURST() \
   ((READ_REGISTER_ULONG(0x144) & RBURST_MASK)  >> RBURST_START_BIT)

#define WHEN_RBURST_HIGH() \
     if ( READ_RBURST() )


#define UNLESS_RBURST_HIGH() \
     if (! READ_RBURST() )


#define WAIT_RBURST_LOW() \
    while ( READ_RBURST() );


#define WAIT_RBURST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RBURST() && (--___t___ > 0)); }


#define WAIT_RBURST_HIGH() \
    while (! READ_RBURST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 10:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SDRAM clock configuration 
    // 
#define SDCLK_MASK 0xC00U
#define SDCLK_OFFSET 11
#define SDCLK_START_BIT 10
#define SDCLK_WIDTH 2



#define READ_SDCLK() \
   ((READ_REGISTER_ULONG(0x144) & SDCLK_MASK)  >> SDCLK_START_BIT)

#define WRITE_SDCLK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ SDCLK_MASK) | ((val << SDCLK_START_BIT) & SDCLK_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Write protection 
    // 
#define WP_MASK 0x200U
#define WP_OFFSET 9
#define WP_START_BIT 9
#define WP_WIDTH 1



#define WRITE_WP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ WP_MASK) | ((val << WP_START_BIT) & WP_MASK )); \
   } 

#define ENABLE_WP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  WP_MASK ); \
   }

#define DISABLE_WP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG(0x144, val & ~WP_MASK ); \
   } 

#define READ_WP() \
   ((READ_REGISTER_ULONG(0x144) & WP_MASK)  >> WP_START_BIT)

#define WHEN_WP_HIGH() \
     if ( READ_WP() )


#define UNLESS_WP_HIGH() \
     if (! READ_WP() )


#define WAIT_WP_LOW() \
    while ( READ_WP() );


#define WAIT_WP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WP() && (--___t___ > 0)); }


#define WAIT_WP_HIGH() \
    while (! READ_WP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 7:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CAS latency 
    // 
#define CAS_MASK 0x180U
#define CAS_OFFSET 8
#define CAS_START_BIT 7
#define CAS_WIDTH 2



#define READ_CAS() \
   ((READ_REGISTER_ULONG(0x144) & CAS_MASK)  >> CAS_START_BIT)

#define WRITE_CAS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ CAS_MASK) | ((val << CAS_START_BIT) & CAS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of internal banks 
    // 
#define NB_MASK 0x40U
#define NB_OFFSET 6
#define NB_START_BIT 6
#define NB_WIDTH 1



#define WRITE_NB(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ NB_MASK) | ((val << NB_START_BIT) & NB_MASK )); \
   } 

#define ENABLE_NB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG( 0x144 , val |  NB_MASK ); \
   }

#define DISABLE_NB() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x144); \
     WRITE_REGISTER_ULONG(0x144, val & ~NB_MASK ); \
   } 

#define READ_NB() \
   ((READ_REGISTER_ULONG(0x144) & NB_MASK)  >> NB_START_BIT)

#define WHEN_NB_HIGH() \
     if ( READ_NB() )


#define UNLESS_NB_HIGH() \
     if (! READ_NB() )


#define WAIT_NB_LOW() \
    while ( READ_NB() );


#define WAIT_NB_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_NB() && (--___t___ > 0)); }


#define WAIT_NB_HIGH() \
    while (! READ_NB() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data bus width 
    // 
#define MWID_MASK 0x30U
#define MWID_OFFSET 5
#define MWID_START_BIT 4
#define MWID_WIDTH 2



#define READ_MWID() \
   ((READ_REGISTER_ULONG(0x144) & MWID_MASK)  >> MWID_START_BIT)

#define WRITE_MWID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ MWID_MASK) | ((val << MWID_START_BIT) & MWID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 2:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of row address bits 
    // 
#define NR_MASK 0xCU
#define NR_OFFSET 3
#define NR_START_BIT 2
#define NR_WIDTH 2



#define READ_NR() \
   ((READ_REGISTER_ULONG(0x144) & NR_MASK)  >> NR_START_BIT)

#define WRITE_NR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ NR_MASK) | ((val << NR_START_BIT) & NR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcr2
//
// Return the value of register SDCR_2
//
// Notes : Register SDRAM Control Register 2 (SDCR2) at the offset 0x144, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of column address bits 
    // 
#define NC_MASK 0x3U
#define NC_OFFSET 1
#define NC_START_BIT 0
#define NC_WIDTH 2



#define READ_NC() \
   ((READ_REGISTER_ULONG(0x144) & NC_MASK)  >> NC_START_BIT)

#define WRITE_NC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x144); \
     WRITE_REGISTER_ULONG(0x144, (OldValue & ~ NC_MASK) | ((val << NC_START_BIT) & NC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR1
//
// Notes : Register Sdtr1 at offset 0x148
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SDTR_1( y) \
     WRITE_REGISTER_ULONG( 0x148 , y)

#define SET_BITS_SDTR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val |  mask ); \
   }

#define CLEAR_BITS_SDTR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x148); \
     WRITE_REGISTER_ULONG( 0x148 , val & ~mask ); \
   }

#define READ_REGISTER_SDTR_1() \
     READ_REGISTER_ULONG(0x148)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Row to column delay 
    // 
#define TRCD_MASK 0xF000000U
#define TRCD_OFFSET 27
#define TRCD_START_BIT 24
#define TRCD_WIDTH 4


#define SDTR_1_REG 0x148

typedef enum trcd {
    TRCD_0,
    TRCD_1
} TRCD_T ;
#define READ_TRCD() \
   ((READ_REGISTER_ULONG(0x148) & TRCD_MASK)  >> TRCD_START_BIT)

#define WRITE_TRCD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TRCD_MASK) | ((val << TRCD_START_BIT) & TRCD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Row precharge delay 
    // 
#define TRP_MASK 0xF00000U
#define TRP_OFFSET 23
#define TRP_START_BIT 20
#define TRP_WIDTH 4



typedef enum trp {
    TRP_0,
    TRP_1
} TRP_T ;
#define READ_TRP() \
   ((READ_REGISTER_ULONG(0x148) & TRP_MASK)  >> TRP_START_BIT)

#define WRITE_TRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TRP_MASK) | ((val << TRP_START_BIT) & TRP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Recovery delay 
    // 
#define TWR_MASK 0xF0000U
#define TWR_OFFSET 19
#define TWR_START_BIT 16
#define TWR_WIDTH 4



typedef enum twr {
    TWR_0,
    TWR_1
} TWR_T ;
#define READ_TWR() \
   ((READ_REGISTER_ULONG(0x148) & TWR_MASK)  >> TWR_START_BIT)

#define WRITE_TWR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TWR_MASK) | ((val << TWR_START_BIT) & TWR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Row cycle delay 
    // 
#define TRC_MASK 0xF000U
#define TRC_OFFSET 15
#define TRC_START_BIT 12
#define TRC_WIDTH 4



typedef enum trc {
    TRC_0,
    TRC_1
} TRC_T ;
#define READ_TRC() \
   ((READ_REGISTER_ULONG(0x148) & TRC_MASK)  >> TRC_START_BIT)

#define WRITE_TRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TRC_MASK) | ((val << TRC_START_BIT) & TRC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Self refresh time 
    // 
#define TRAS_MASK 0xF00U
#define TRAS_OFFSET 11
#define TRAS_START_BIT 8
#define TRAS_WIDTH 4



typedef enum tras {
    TRAS_0,
    TRAS_1
} TRAS_T ;
#define READ_TRAS() \
   ((READ_REGISTER_ULONG(0x148) & TRAS_MASK)  >> TRAS_START_BIT)

#define WRITE_TRAS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TRAS_MASK) | ((val << TRAS_START_BIT) & TRAS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Exit self-refresh delay 
    // 
#define TXSR_MASK 0xF0U
#define TXSR_OFFSET 7
#define TXSR_START_BIT 4
#define TXSR_WIDTH 4



typedef enum txsr {
    TXSR_0,
    TXSR_1
} TXSR_T ;
#define READ_TXSR() \
   ((READ_REGISTER_ULONG(0x148) & TXSR_MASK)  >> TXSR_START_BIT)

#define WRITE_TXSR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TXSR_MASK) | ((val << TXSR_START_BIT) & TXSR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr1
//
// Return the value of register SDTR_1
//
// Notes : Register SDRAM Timing register 1 (SDTR1) at the offset 0x148, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Load Mode Register to Active 
    // 
#define TMRD_MASK 0xFU
#define TMRD_OFFSET 3
#define TMRD_START_BIT 0
#define TMRD_WIDTH 4



typedef enum tmrd {
    TMRD_0,
    TMRD_1
} TMRD_T ;
#define READ_TMRD() \
   ((READ_REGISTER_ULONG(0x148) & TMRD_MASK)  >> TMRD_START_BIT)

#define WRITE_TMRD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x148); \
     WRITE_REGISTER_ULONG(0x148, (OldValue & ~ TMRD_MASK) | ((val << TMRD_START_BIT) & TMRD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR2
//
// Notes : Register Sdtr2 at offset 0x14C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SDTR_2( y) \
     WRITE_REGISTER_ULONG( 0x14C , y)

#define SET_BITS_SDTR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val |  mask ); \
   }

#define CLEAR_BITS_SDTR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14C); \
     WRITE_REGISTER_ULONG( 0x14C , val & ~mask ); \
   }

#define READ_REGISTER_SDTR_2() \
     READ_REGISTER_ULONG(0x14C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Row to column delay 
    // 
#define TRCD_MASK 0xF000000U
#define TRCD_OFFSET 27
#define TRCD_START_BIT 24
#define TRCD_WIDTH 4


#define SDTR_2_REG 0x14C

#define READ_TRCD() \
   ((READ_REGISTER_ULONG(0x14C) & TRCD_MASK)  >> TRCD_START_BIT)

#define WRITE_TRCD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TRCD_MASK) | ((val << TRCD_START_BIT) & TRCD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Row precharge delay 
    // 
#define TRP_MASK 0xF00000U
#define TRP_OFFSET 23
#define TRP_START_BIT 20
#define TRP_WIDTH 4



#define READ_TRP() \
   ((READ_REGISTER_ULONG(0x14C) & TRP_MASK)  >> TRP_START_BIT)

#define WRITE_TRP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TRP_MASK) | ((val << TRP_START_BIT) & TRP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Recovery delay 
    // 
#define TWR_MASK 0xF0000U
#define TWR_OFFSET 19
#define TWR_START_BIT 16
#define TWR_WIDTH 4



#define READ_TWR() \
   ((READ_REGISTER_ULONG(0x14C) & TWR_MASK)  >> TWR_START_BIT)

#define WRITE_TWR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TWR_MASK) | ((val << TWR_START_BIT) & TWR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 12:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Row cycle delay 
    // 
#define TRC_MASK 0xF000U
#define TRC_OFFSET 15
#define TRC_START_BIT 12
#define TRC_WIDTH 4



#define READ_TRC() \
   ((READ_REGISTER_ULONG(0x14C) & TRC_MASK)  >> TRC_START_BIT)

#define WRITE_TRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TRC_MASK) | ((val << TRC_START_BIT) & TRC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Self refresh time 
    // 
#define TRAS_MASK 0xF00U
#define TRAS_OFFSET 11
#define TRAS_START_BIT 8
#define TRAS_WIDTH 4



#define READ_TRAS() \
   ((READ_REGISTER_ULONG(0x14C) & TRAS_MASK)  >> TRAS_START_BIT)

#define WRITE_TRAS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TRAS_MASK) | ((val << TRAS_START_BIT) & TRAS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 4:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Exit self-refresh delay 
    // 
#define TXSR_MASK 0xF0U
#define TXSR_OFFSET 7
#define TXSR_START_BIT 4
#define TXSR_WIDTH 4



#define READ_TXSR() \
   ((READ_REGISTER_ULONG(0x14C) & TXSR_MASK)  >> TXSR_START_BIT)

#define WRITE_TXSR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TXSR_MASK) | ((val << TXSR_START_BIT) & TXSR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdtr2
//
// Return the value of register SDTR_2
//
// Notes : Register SDRAM Timing register 2 (SDTR2) at the offset 0x14C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Load Mode Register to Active 
    // 
#define TMRD_MASK 0xFU
#define TMRD_OFFSET 3
#define TMRD_START_BIT 0
#define TMRD_WIDTH 4



#define READ_TMRD() \
   ((READ_REGISTER_ULONG(0x14C) & TMRD_MASK)  >> TMRD_START_BIT)

#define WRITE_TMRD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14C); \
     WRITE_REGISTER_ULONG(0x14C, (OldValue & ~ TMRD_MASK) | ((val << TMRD_START_BIT) & TMRD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcmr
//
// Return the value of register SDCMR
//
// Notes : Register Sdcmr at offset 0x150
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcmr
//
// Return the value of register SDCMR
//
// Notes : Register SDRAM Command Mode register (SDCMR) at the offset 0x150, Bits 9:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mode Register definition 
    // 
#define MRD_MASK 0x3FFE00U
#define MRD_OFFSET 21
#define MRD_START_BIT 9
#define MRD_WIDTH 13


#define SDCMR_REG 0x150

typedef enum mrd {
    MRD_0,
    MRD_1
} MRD_T ;
#define READ_MRD() \
   ((READ_REGISTER_ULONG(0x150) & MRD_MASK)  >> MRD_START_BIT)

#define WRITE_MRD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ MRD_MASK) | ((val << MRD_START_BIT) & MRD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcmr
//
// Return the value of register SDCMR
//
// Notes : Register SDRAM Command Mode register (SDCMR) at the offset 0x150, Bits 5:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of Auto-refresh 
    // 
#define NRFS_MASK 0x1E0U
#define NRFS_OFFSET 8
#define NRFS_START_BIT 5
#define NRFS_WIDTH 4



typedef enum nrfs {
    NRFS_0,
    NRFS_1
} NRFS_T ;
#define READ_NRFS() \
   ((READ_REGISTER_ULONG(0x150) & NRFS_MASK)  >> NRFS_START_BIT)

#define WRITE_NRFS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ NRFS_MASK) | ((val << NRFS_START_BIT) & NRFS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcmr
//
// Return the value of register SDCMR
//
// Notes : Register SDRAM Command Mode register (SDCMR) at the offset 0x150, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command target bank 1 
    // 
#define CTB1_MASK 0x10U
#define CTB1_OFFSET 4
#define CTB1_START_BIT 4
#define CTB1_WIDTH 1



typedef enum ctb1 {
    CTB_1_0,
    CTB_1_1
} CTB_1_T ;
#define WRITE_CTB1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ CTB1_MASK) | ((val << CTB1_START_BIT) & CTB1_MASK )); \
   } 

#define ENABLE_CTB1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  CTB1_MASK ); \
   }

#define DISABLE_CTB1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG(0x150, val & ~CTB1_MASK ); \
   } 

#define READ_CTB1() \
   ((READ_REGISTER_ULONG(0x150) & CTB1_MASK)  >> CTB1_START_BIT)

#define WHEN_CTB1_HIGH() \
     if ( READ_CTB1() )


#define UNLESS_CTB1_HIGH() \
     if (! READ_CTB1() )


#define WAIT_CTB1_LOW() \
    while ( READ_CTB1() );


#define WAIT_CTB1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTB1() && (--___t___ > 0)); }


#define WAIT_CTB1_HIGH() \
    while (! READ_CTB1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcmr
//
// Return the value of register SDCMR
//
// Notes : Register SDRAM Command Mode register (SDCMR) at the offset 0x150, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command target bank 2 
    // 
#define CTB2_MASK 0x8U
#define CTB2_OFFSET 3
#define CTB2_START_BIT 3
#define CTB2_WIDTH 1



typedef enum ctb2 {
    CTB_2_0,
    CTB_2_1
} CTB_2_T ;
#define WRITE_CTB2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ CTB2_MASK) | ((val << CTB2_START_BIT) & CTB2_MASK )); \
   } 

#define ENABLE_CTB2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG( 0x150 , val |  CTB2_MASK ); \
   }

#define DISABLE_CTB2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x150); \
     WRITE_REGISTER_ULONG(0x150, val & ~CTB2_MASK ); \
   } 

#define READ_CTB2() \
   ((READ_REGISTER_ULONG(0x150) & CTB2_MASK)  >> CTB2_START_BIT)

#define WHEN_CTB2_HIGH() \
     if ( READ_CTB2() )


#define UNLESS_CTB2_HIGH() \
     if (! READ_CTB2() )


#define WAIT_CTB2_LOW() \
    while ( READ_CTB2() );


#define WAIT_CTB2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTB2() && (--___t___ > 0)); }


#define WAIT_CTB2_HIGH() \
    while (! READ_CTB2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdcmr
//
// Return the value of register SDCMR
//
// Notes : Register SDRAM Command Mode register (SDCMR) at the offset 0x150, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Command mode 
    // 
#define MODE_MASK 0x7U
#define MODE_OFFSET 2
#define MODE_START_BIT 0
#define MODE_WIDTH 3



typedef enum mode {
    MODE_0,
    MODE_1
} MODE_T ;
#define READ_MODE() \
   ((READ_REGISTER_ULONG(0x150) & MODE_MASK)  >> MODE_START_BIT)

#define WRITE_MODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x150); \
     WRITE_REGISTER_ULONG(0x150, (OldValue & ~ MODE_MASK) | ((val << MODE_START_BIT) & MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdrtr
//
// Return the value of register SDRTR
//
// Notes : Register Sdrtr at offset 0x154
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : Sdrtr
//
// Return the value of register SDRTR
//
// Notes : Register SDRAM Refresh Timer register (SDRTR) at the offset 0x154, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RES Interrupt Enable 
    // 
#define REIE_MASK 0x4000U
#define REIE_OFFSET 14
#define REIE_START_BIT 14
#define REIE_WIDTH 1


#define SDRTR_REG 0x154

typedef enum reie {
    REIE_0,
    REIE_1
} REIE_T ;
#define WRITE_REIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x154); \
     WRITE_REGISTER_ULONG(0x154, (OldValue & ~ REIE_MASK) | ((val << REIE_START_BIT) & REIE_MASK )); \
   } 

#define ENABLE_REIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val |  REIE_MASK ); \
   }

#define DISABLE_REIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG(0x154, val & ~REIE_MASK ); \
   } 

#define READ_REIE() \
   ((READ_REGISTER_ULONG(0x154) & REIE_MASK)  >> REIE_START_BIT)

#define WHEN_REIE_HIGH() \
     if ( READ_REIE() )


#define UNLESS_REIE_HIGH() \
     if (! READ_REIE() )


#define WAIT_REIE_LOW() \
    while ( READ_REIE() );


#define WAIT_REIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_REIE() && (--___t___ > 0)); }


#define WAIT_REIE_HIGH() \
    while (! READ_REIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdrtr
//
// Return the value of register SDRTR
//
// Notes : Register SDRAM Refresh Timer register (SDRTR) at the offset 0x154, Bits 1:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Refresh Timer Count 
    // 
#define COUNT_MASK 0x3FFEU
#define COUNT_OFFSET 13
#define COUNT_START_BIT 1
#define COUNT_WIDTH 13



typedef enum count {
    COUNT_0,
    COUNT_1
} COUNT_T ;
#define READ_COUNT() \
   ((READ_REGISTER_ULONG(0x154) & COUNT_MASK)  >> COUNT_START_BIT)

#define WRITE_COUNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x154); \
     WRITE_REGISTER_ULONG(0x154, (OldValue & ~ COUNT_MASK) | ((val << COUNT_START_BIT) & COUNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdrtr
//
// Return the value of register SDRTR
//
// Notes : Register SDRAM Refresh Timer register (SDRTR) at the offset 0x154, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clear Refresh error flag 
    // 
#define CRE_MASK 0x1U
#define CRE_OFFSET 0
#define CRE_START_BIT 0
#define CRE_WIDTH 1



typedef enum cre {
    CRE_0,
    CRE_1
} CRE_T ;
#define WRITE_CRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x154); \
     WRITE_REGISTER_ULONG(0x154, (OldValue & ~ CRE_MASK) | ((val << CRE_START_BIT) & CRE_MASK )); \
   } 

#define ENABLE_CRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG( 0x154 , val |  CRE_MASK ); \
   }

#define DISABLE_CRE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x154); \
     WRITE_REGISTER_ULONG(0x154, val & ~CRE_MASK ); \
   } 

#define READ_CRE() \
   ((READ_REGISTER_ULONG(0x154) & CRE_MASK)  >> CRE_START_BIT)

#define WHEN_CRE_HIGH() \
     if ( READ_CRE() )


#define UNLESS_CRE_HIGH() \
     if (! READ_CRE() )


#define WAIT_CRE_LOW() \
    while ( READ_CRE() );


#define WAIT_CRE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CRE() && (--___t___ > 0)); }


#define WAIT_CRE_HIGH() \
    while (! READ_CRE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdsr
//
// Return the value of register SDSR
//
// Notes : Register Sdsr at offset 0x158
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_SDSR() \
     READ_REGISTER_ULONG(0x158)

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdsr
//
// Return the value of register SDSR
//
// Notes : Register SDRAM Status register (SDSR) at the offset 0x158, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Busy status 
    // 
#define BUSY_MASK 0x20U
#define BUSY_OFFSET 5
#define BUSY_START_BIT 5
#define BUSY_WIDTH 1


#define SDSR_REG 0x158

typedef enum busy {
    BUSY_0,
    BUSY_1
} BUSY_T ;
#define WRITE_BUSY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x158); \
     WRITE_REGISTER_ULONG( 0x158 , val |  BUSY_MASK ); \
   }

#define DISABLE_BUSY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x158); \
     WRITE_REGISTER_ULONG(0x158, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY() \
   ((READ_REGISTER_ULONG(0x158) & BUSY_MASK)  >> BUSY_START_BIT)

#define WHEN_BUSY_HIGH() \
     if ( READ_BUSY() )


#define UNLESS_BUSY_HIGH() \
     if (! READ_BUSY() )


#define WAIT_BUSY_LOW() \
    while ( READ_BUSY() );


#define WAIT_BUSY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BUSY() && (--___t___ > 0)); }


#define WAIT_BUSY_HIGH() \
    while (! READ_BUSY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sdsr
//
// Return the value of register SDSR
//
// Notes : Register SDRAM Status register (SDSR) at the offset 0x158, Bits 3:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Status Mode for Bank 2 
    // 
#define MODES2_MASK 0x18U
#define MODES2_OFFSET 4
#define MODES2_START_BIT 3
#define MODES2_WIDTH 2



typedef enum modes2 {
    MODES_2_0,
    MODES_2_1
} MODES_2_T ;
#define READ_MODES2() \
   ((READ_REGISTER_ULONG(0x158) & MODES2_MASK)  >> MODES2_START_BIT)

#define WRITE_MODES2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ MODES2_MASK) | ((val << MODES2_START_BIT) & MODES2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdsr
//
// Return the value of register SDSR
//
// Notes : Register SDRAM Status register (SDSR) at the offset 0x158, Bits 1:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Status Mode for Bank 1 
    // 
#define MODES1_MASK 0x6U
#define MODES1_OFFSET 2
#define MODES1_START_BIT 1
#define MODES1_WIDTH 2



typedef enum modes1 {
    MODES_1_0,
    MODES_1_1
} MODES_1_T ;
#define READ_MODES1() \
   ((READ_REGISTER_ULONG(0x158) & MODES1_MASK)  >> MODES1_START_BIT)

#define WRITE_MODES1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ MODES1_MASK) | ((val << MODES1_START_BIT) & MODES1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sdsr
//
// Return the value of register SDSR
//
// Notes : Register SDRAM Status register (SDSR) at the offset 0x158, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Refresh error flag 
    // 
#define RE_MASK 0x1U
#define RE_OFFSET 0
#define RE_START_BIT 0
#define RE_WIDTH 1



#define WRITE_RE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x158); \
     WRITE_REGISTER_ULONG(0x158, (OldValue & ~ RE_MASK) | ((val << RE_START_BIT) & RE_MASK )); \
   } 

#define ENABLE_RE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x158); \
     WRITE_REGISTER_ULONG( 0x158 , val |  RE_MASK ); \
   }

#define DISABLE_RE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x158); \
     WRITE_REGISTER_ULONG(0x158, val & ~RE_MASK ); \
   } 

#define READ_RE() \
   ((READ_REGISTER_ULONG(0x158) & RE_MASK)  >> RE_START_BIT)

#define WHEN_RE_HIGH() \
     if ( READ_RE() )


#define UNLESS_RE_HIGH() \
     if (! READ_RE() )


#define WAIT_RE_LOW() \
    while ( READ_RE() );


#define WAIT_RE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RE() && (--___t___ > 0)); }


#define WAIT_RE_HIGH() \
    while (! READ_RE() );


