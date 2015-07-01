/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/iwdg.h
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
 
#define IWDG 0x40003000
/////////////////////////////////////////////////////////////////////////
//
// Function : Kr
//
// Return the value of register KR
//
// Notes : Register Kr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_KR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Kr
//
// Return the value of register KR
//
// Notes : Register Key register (KR) at the offset 0x0, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Key value (write only, read 0000h) 
    // 
#define KEY_MASK 0xFFFFU
#define KEY_OFFSET 15
#define KEY_START_BIT 0
#define KEY_WIDTH 16


#define KR_REG 0x0

#define READ_KEY() \
   ((READ_REGISTER_ULONG(0x0) & KEY_MASK)  >> KEY_START_BIT)

#define WRITE_KEY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ KEY_MASK) | ((val << KEY_START_BIT) & KEY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_PR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_PR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_PR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : PR
//
// Return the value of register Pr
//
// Notes : Prescaler divider 
//        (PR) at the offset 0x4, Bits 0:2
//
/////////////////////////////////////////////////////////////////////////
#define READ_PR() \
   ((READ_REGISTER_ULONG(0x4) & PR_MASK)  >> PR_START_BIT)

#define WRITE_PR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ PR_MASK) | ((val << PR_START_BIT) & PR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rlr
//
// Return the value of register RLR
//
// Notes : Register Rlr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RLR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_RLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_RLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_RLR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Rlr
//
// Return the value of register RLR
//
// Notes : Register Reload register (RLR) at the offset 0x8, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Watchdog counter reload value 
    // 
#define RL_MASK 0xFFFU
#define RL_OFFSET 11
#define RL_START_BIT 0
#define RL_WIDTH 12


#define RLR_REG 0x8

typedef enum rl {
    RL_0,
    RL_1
} RL_T ;
#define READ_RL() \
   ((READ_REGISTER_ULONG(0x8) & RL_MASK)  >> RL_START_BIT)

#define WRITE_RL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ RL_MASK) | ((val << RL_START_BIT) & RL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_SR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : PVU
//
// Return the value of register Sr
//
// Notes : Watchdog prescaler value update 
//        (SR) at the offset 0xC, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PVU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ PVU_MASK) | ((val << PVU_START_BIT) & PVU_MASK )); \
   } 

#define ENABLE_PVU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  PVU_MASK ); \
   }

#define DISABLE_PVU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~PVU_MASK ); \
   } 

#define READ_PVU() \
   ((READ_REGISTER_ULONG(0xC) & PVU_MASK)  >> PVU_START_BIT)

#define WHEN_PVU_HIGH() \
     if ( READ_PVU() )


#define UNLESS_PVU_HIGH() \
     if (! READ_PVU() )


#define WAIT_PVU_LOW() \
    while ( READ_PVU() );


#define WAIT_PVU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PVU() && (--___t___ > 0)); }


#define WAIT_PVU_HIGH() \
    while (! READ_PVU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RVU
//
// Return the value of register Sr
//
// Notes : Watchdog counter reload value update 
//        (SR) at the offset 0xC, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RVU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RVU_MASK) | ((val << RVU_START_BIT) & RVU_MASK )); \
   } 

#define ENABLE_RVU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  RVU_MASK ); \
   }

#define DISABLE_RVU() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~RVU_MASK ); \
   } 

#define READ_RVU() \
   ((READ_REGISTER_ULONG(0xC) & RVU_MASK)  >> RVU_START_BIT)

#define WHEN_RVU_HIGH() \
     if ( READ_RVU() )


#define UNLESS_RVU_HIGH() \
     if (! READ_RVU() )


#define WAIT_RVU_LOW() \
    while ( READ_RVU() );


#define WAIT_RVU_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RVU() && (--___t___ > 0)); }


#define WAIT_RVU_HIGH() \
    while (! READ_RVU() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Winr
//
// Return the value of register WINR
//
// Notes : Register Winr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_WINR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_WINR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_WINR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_WINR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Winr
//
// Return the value of register WINR
//
// Notes : Register Window register (WINR) at the offset 0x10, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Watchdog counter window value 
    // 
#define WIN_MASK 0xFFFU
#define WIN_OFFSET 11
#define WIN_START_BIT 0
#define WIN_WIDTH 12


#define WINR_REG 0x10

typedef enum win {
    WIN_0,
    WIN_1
} WIN_T ;
#define READ_WIN() \
   ((READ_REGISTER_ULONG(0x10) & WIN_MASK)  >> WIN_START_BIT)

#define WRITE_WIN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ WIN_MASK) | ((val << WIN_START_BIT) & WIN_MASK )); \
   } 

