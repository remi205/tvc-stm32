/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/dbg.h
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
 
#define DBG 0xE0042000
/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuIdcode
//
// Return the value of register DBGMCU_IDCODE
//
// Notes : Register DbgmcuIdcode at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DBGMCU_IDCODE() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuIdcode
//
// Return the value of register DBGMCU_IDCODE
//
// Notes : Register IDCODE (DBGMCU_IDCODE) at the offset 0x0, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // REV_ID 
    // 
#define REV_ID_MASK 0xFFFF0000U
#define REV_ID_OFFSET 31
#define REV_ID_START_BIT 16
#define REV_ID_WIDTH 16


#define DBGMCU_IDCODE_REG 0x0

typedef enum rev_id {
    REV_ID_0,
    REV_ID_1
} REV_ID_T ;
#define READ_REV_ID() \
   ((READ_REGISTER_ULONG(0x0) & REV_ID_MASK)  >> REV_ID_START_BIT)

#define WRITE_REV_ID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ REV_ID_MASK) | ((val << REV_ID_START_BIT) & REV_ID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuIdcode
//
// Return the value of register DBGMCU_IDCODE
//
// Notes : Register IDCODE (DBGMCU_IDCODE) at the offset 0x0, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEV_ID 
    // 
#define DEV_ID_MASK 0xFFFU
#define DEV_ID_OFFSET 11
#define DEV_ID_START_BIT 0
#define DEV_ID_WIDTH 12



typedef enum dev_id {
    DEV_ID_0,
    DEV_ID_1
} DEV_ID_T ;
#define READ_DEV_ID() \
   ((READ_REGISTER_ULONG(0x0) & DEV_ID_MASK)  >> DEV_ID_START_BIT)

#define WRITE_DEV_ID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ DEV_ID_MASK) | ((val << DEV_ID_START_BIT) & DEV_ID_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuCr
//
// Return the value of register DBGMCU_CR
//
// Notes : Register DbgmcuCr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DBGMCU_CR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_DBGMCU_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_DBGMCU_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_DBGMCU_CR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuCr
//
// Return the value of register DBGMCU_CR
//
// Notes : Register Control Register (DBGMCU_CR) at the offset 0x4, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TRACE_MODE 
    // 
#define TRACE_MODE_MASK 0xC0U
#define TRACE_MODE_OFFSET 7
#define TRACE_MODE_START_BIT 6
#define TRACE_MODE_WIDTH 2


#define DBGMCU_CR_REG 0x4

typedef enum trace_mode {
    TRACE_MODE_0,
    TRACE_MODE_1
} TRACE_MODE_T ;
#define READ_TRACE_MODE() \
   ((READ_REGISTER_ULONG(0x4) & TRACE_MODE_MASK)  >> TRACE_MODE_START_BIT)

#define WRITE_TRACE_MODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TRACE_MODE_MASK) | ((val << TRACE_MODE_START_BIT) & TRACE_MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuCr
//
// Return the value of register DBGMCU_CR
//
// Notes : Register Control Register (DBGMCU_CR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TRACE_IOEN 
    // 
#define TRACE_IOEN_MASK 0x20U
#define TRACE_IOEN_OFFSET 5
#define TRACE_IOEN_START_BIT 5
#define TRACE_IOEN_WIDTH 1



typedef enum trace_ioen {
    TRACE_IOEN_0,
    TRACE_IOEN_1
} TRACE_IOEN_T ;
#define WRITE_TRACE_IOEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TRACE_IOEN_MASK) | ((val << TRACE_IOEN_START_BIT) & TRACE_IOEN_MASK )); \
   } 

#define ENABLE_TRACE_IOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  TRACE_IOEN_MASK ); \
   }

#define DISABLE_TRACE_IOEN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~TRACE_IOEN_MASK ); \
   } 

#define READ_TRACE_IOEN() \
   ((READ_REGISTER_ULONG(0x4) & TRACE_IOEN_MASK)  >> TRACE_IOEN_START_BIT)

#define WHEN_TRACE_IOEN_HIGH() \
     if ( READ_TRACE_IOEN() )


#define UNLESS_TRACE_IOEN_HIGH() \
     if (! READ_TRACE_IOEN() )


#define WAIT_TRACE_IOEN_LOW() \
    while ( READ_TRACE_IOEN() );


#define WAIT_TRACE_IOEN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TRACE_IOEN() && (--___t___ > 0)); }


#define WAIT_TRACE_IOEN_HIGH() \
    while (! READ_TRACE_IOEN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuCr
//
// Return the value of register DBGMCU_CR
//
// Notes : Register Control Register (DBGMCU_CR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_STANDBY 
    // 
#define DBG_STANDBY_MASK 0x4U
#define DBG_STANDBY_OFFSET 2
#define DBG_STANDBY_START_BIT 2
#define DBG_STANDBY_WIDTH 1



typedef enum dbg_standby {
    DBG_STANDBY_0,
    DBG_STANDBY_1
} DBG_STANDBY_T ;
#define WRITE_DBG_STANDBY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DBG_STANDBY_MASK) | ((val << DBG_STANDBY_START_BIT) & DBG_STANDBY_MASK )); \
   } 

#define ENABLE_DBG_STANDBY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DBG_STANDBY_MASK ); \
   }

#define DISABLE_DBG_STANDBY() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DBG_STANDBY_MASK ); \
   } 

#define READ_DBG_STANDBY() \
   ((READ_REGISTER_ULONG(0x4) & DBG_STANDBY_MASK)  >> DBG_STANDBY_START_BIT)

#define WHEN_DBG_STANDBY_HIGH() \
     if ( READ_DBG_STANDBY() )


#define UNLESS_DBG_STANDBY_HIGH() \
     if (! READ_DBG_STANDBY() )


#define WAIT_DBG_STANDBY_LOW() \
    while ( READ_DBG_STANDBY() );


#define WAIT_DBG_STANDBY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_STANDBY() && (--___t___ > 0)); }


#define WAIT_DBG_STANDBY_HIGH() \
    while (! READ_DBG_STANDBY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuCr
//
// Return the value of register DBGMCU_CR
//
// Notes : Register Control Register (DBGMCU_CR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_STOP 
    // 
#define DBG_STOP_MASK 0x2U
#define DBG_STOP_OFFSET 1
#define DBG_STOP_START_BIT 1
#define DBG_STOP_WIDTH 1



typedef enum dbg_stop {
    DBG_STOP_0,
    DBG_STOP_1
} DBG_STOP_T ;
#define WRITE_DBG_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DBG_STOP_MASK) | ((val << DBG_STOP_START_BIT) & DBG_STOP_MASK )); \
   } 

#define ENABLE_DBG_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DBG_STOP_MASK ); \
   }

#define DISABLE_DBG_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DBG_STOP_MASK ); \
   } 

#define READ_DBG_STOP() \
   ((READ_REGISTER_ULONG(0x4) & DBG_STOP_MASK)  >> DBG_STOP_START_BIT)

#define WHEN_DBG_STOP_HIGH() \
     if ( READ_DBG_STOP() )


#define UNLESS_DBG_STOP_HIGH() \
     if (! READ_DBG_STOP() )


#define WAIT_DBG_STOP_LOW() \
    while ( READ_DBG_STOP() );


#define WAIT_DBG_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_STOP_HIGH() \
    while (! READ_DBG_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuCr
//
// Return the value of register DBGMCU_CR
//
// Notes : Register Control Register (DBGMCU_CR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_SLEEP 
    // 
#define DBG_SLEEP_MASK 0x1U
#define DBG_SLEEP_OFFSET 0
#define DBG_SLEEP_START_BIT 0
#define DBG_SLEEP_WIDTH 1



typedef enum dbg_sleep {
    DBG_SLEEP_0,
    DBG_SLEEP_1
} DBG_SLEEP_T ;
#define WRITE_DBG_SLEEP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DBG_SLEEP_MASK) | ((val << DBG_SLEEP_START_BIT) & DBG_SLEEP_MASK )); \
   } 

#define ENABLE_DBG_SLEEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DBG_SLEEP_MASK ); \
   }

#define DISABLE_DBG_SLEEP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DBG_SLEEP_MASK ); \
   } 

#define READ_DBG_SLEEP() \
   ((READ_REGISTER_ULONG(0x4) & DBG_SLEEP_MASK)  >> DBG_SLEEP_START_BIT)

#define WHEN_DBG_SLEEP_HIGH() \
     if ( READ_DBG_SLEEP() )


#define UNLESS_DBG_SLEEP_HIGH() \
     if (! READ_DBG_SLEEP() )


#define WAIT_DBG_SLEEP_LOW() \
    while ( READ_DBG_SLEEP() );


#define WAIT_DBG_SLEEP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_SLEEP() && (--___t___ > 0)); }


#define WAIT_DBG_SLEEP_HIGH() \
    while (! READ_DBG_SLEEP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB1_FZ
//
// Notes : Register DbgmcuApb1Fz at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DBGMCU_APB_1_FZ( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_DBGMCU_APB_1_FZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_DBGMCU_APB_1_FZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_DBGMCU_APB_1_FZ() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_CAN2_STOP 
    // 
#define DBG_CAN2_STOP_MASK 0x4000000U
#define DBG_CAN2_STOP_OFFSET 26
#define DBG_CAN2_STOP_START_BIT 26
#define DBG_CAN2_STOP_WIDTH 1


#define DBGMCU_APB_1_FZ_REG 0x8

typedef enum dbg_can2_stop {
    DBG_CAN_2_STOP_0,
    DBG_CAN_2_STOP_1
} DBG_CAN_2_STOP_T ;
#define WRITE_DBG_CAN2_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_CAN2_STOP_MASK) | ((val << DBG_CAN2_STOP_START_BIT) & DBG_CAN2_STOP_MASK )); \
   } 

#define ENABLE_DBG_CAN2_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_CAN2_STOP_MASK ); \
   }

#define DISABLE_DBG_CAN2_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_CAN2_STOP_MASK ); \
   } 

#define READ_DBG_CAN2_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_CAN2_STOP_MASK)  >> DBG_CAN2_STOP_START_BIT)

#define WHEN_DBG_CAN2_STOP_HIGH() \
     if ( READ_DBG_CAN2_STOP() )


#define UNLESS_DBG_CAN2_STOP_HIGH() \
     if (! READ_DBG_CAN2_STOP() )


#define WAIT_DBG_CAN2_STOP_LOW() \
    while ( READ_DBG_CAN2_STOP() );


#define WAIT_DBG_CAN2_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_CAN2_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_CAN2_STOP_HIGH() \
    while (! READ_DBG_CAN2_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_CAN1_STOP 
    // 
#define DBG_CAN1_STOP_MASK 0x2000000U
#define DBG_CAN1_STOP_OFFSET 25
#define DBG_CAN1_STOP_START_BIT 25
#define DBG_CAN1_STOP_WIDTH 1



typedef enum dbg_can1_stop {
    DBG_CAN_1_STOP_0,
    DBG_CAN_1_STOP_1
} DBG_CAN_1_STOP_T ;
#define WRITE_DBG_CAN1_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_CAN1_STOP_MASK) | ((val << DBG_CAN1_STOP_START_BIT) & DBG_CAN1_STOP_MASK )); \
   } 

#define ENABLE_DBG_CAN1_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_CAN1_STOP_MASK ); \
   }

#define DISABLE_DBG_CAN1_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_CAN1_STOP_MASK ); \
   } 

#define READ_DBG_CAN1_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_CAN1_STOP_MASK)  >> DBG_CAN1_STOP_START_BIT)

#define WHEN_DBG_CAN1_STOP_HIGH() \
     if ( READ_DBG_CAN1_STOP() )


#define UNLESS_DBG_CAN1_STOP_HIGH() \
     if (! READ_DBG_CAN1_STOP() )


#define WAIT_DBG_CAN1_STOP_LOW() \
    while ( READ_DBG_CAN1_STOP() );


#define WAIT_DBG_CAN1_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_CAN1_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_CAN1_STOP_HIGH() \
    while (! READ_DBG_CAN1_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_J2C3SMBUS_TIMEOUT 
    // 
#define DBG_J2C3SMBUS_TIMEOUT_MASK 0x800000U
#define DBG_J2C3SMBUS_TIMEOUT_OFFSET 23
#define DBG_J2C3SMBUS_TIMEOUT_START_BIT 23
#define DBG_J2C3SMBUS_TIMEOUT_WIDTH 1



typedef enum dbg_j2c3smbus_timeout {
    DBG_J_2C_3SMBUS_TIMEOUT_0,
    DBG_J_2C_3SMBUS_TIMEOUT_1
} DBG_J_2C_3SMBUS_TIMEOUT_T ;
#define WRITE_DBG_J2C3SMBUS_TIMEOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_J2C3SMBUS_TIMEOUT_MASK) | ((val << DBG_J2C3SMBUS_TIMEOUT_START_BIT) & DBG_J2C3SMBUS_TIMEOUT_MASK )); \
   } 

#define ENABLE_DBG_J2C3SMBUS_TIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_J2C3SMBUS_TIMEOUT_MASK ); \
   }

#define DISABLE_DBG_J2C3SMBUS_TIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_J2C3SMBUS_TIMEOUT_MASK ); \
   } 

#define READ_DBG_J2C3SMBUS_TIMEOUT() \
   ((READ_REGISTER_ULONG(0x8) & DBG_J2C3SMBUS_TIMEOUT_MASK)  >> DBG_J2C3SMBUS_TIMEOUT_START_BIT)

#define WHEN_DBG_J2C3SMBUS_TIMEOUT_HIGH() \
     if ( READ_DBG_J2C3SMBUS_TIMEOUT() )


#define UNLESS_DBG_J2C3SMBUS_TIMEOUT_HIGH() \
     if (! READ_DBG_J2C3SMBUS_TIMEOUT() )


#define WAIT_DBG_J2C3SMBUS_TIMEOUT_LOW() \
    while ( READ_DBG_J2C3SMBUS_TIMEOUT() );


#define WAIT_DBG_J2C3SMBUS_TIMEOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_J2C3SMBUS_TIMEOUT() && (--___t___ > 0)); }


#define WAIT_DBG_J2C3SMBUS_TIMEOUT_HIGH() \
    while (! READ_DBG_J2C3SMBUS_TIMEOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_J2C2_SMBUS_TIMEOUT 
    // 
#define DBG_J2C2_SMBUS_TIMEOUT_MASK 0x400000U
#define DBG_J2C2_SMBUS_TIMEOUT_OFFSET 22
#define DBG_J2C2_SMBUS_TIMEOUT_START_BIT 22
#define DBG_J2C2_SMBUS_TIMEOUT_WIDTH 1



typedef enum dbg_j2c2_smbus_timeout {
    DBG_J_2C_2_SMBUS_TIMEOUT_0,
    DBG_J_2C_2_SMBUS_TIMEOUT_1
} DBG_J_2C_2_SMBUS_TIMEOUT_T ;
#define WRITE_DBG_J2C2_SMBUS_TIMEOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_J2C2_SMBUS_TIMEOUT_MASK) | ((val << DBG_J2C2_SMBUS_TIMEOUT_START_BIT) & DBG_J2C2_SMBUS_TIMEOUT_MASK )); \
   } 

#define ENABLE_DBG_J2C2_SMBUS_TIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_J2C2_SMBUS_TIMEOUT_MASK ); \
   }

#define DISABLE_DBG_J2C2_SMBUS_TIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_J2C2_SMBUS_TIMEOUT_MASK ); \
   } 

#define READ_DBG_J2C2_SMBUS_TIMEOUT() \
   ((READ_REGISTER_ULONG(0x8) & DBG_J2C2_SMBUS_TIMEOUT_MASK)  >> DBG_J2C2_SMBUS_TIMEOUT_START_BIT)

#define WHEN_DBG_J2C2_SMBUS_TIMEOUT_HIGH() \
     if ( READ_DBG_J2C2_SMBUS_TIMEOUT() )


#define UNLESS_DBG_J2C2_SMBUS_TIMEOUT_HIGH() \
     if (! READ_DBG_J2C2_SMBUS_TIMEOUT() )


#define WAIT_DBG_J2C2_SMBUS_TIMEOUT_LOW() \
    while ( READ_DBG_J2C2_SMBUS_TIMEOUT() );


#define WAIT_DBG_J2C2_SMBUS_TIMEOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_J2C2_SMBUS_TIMEOUT() && (--___t___ > 0)); }


#define WAIT_DBG_J2C2_SMBUS_TIMEOUT_HIGH() \
    while (! READ_DBG_J2C2_SMBUS_TIMEOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_J2C1_SMBUS_TIMEOUT 
    // 
#define DBG_J2C1_SMBUS_TIMEOUT_MASK 0x200000U
#define DBG_J2C1_SMBUS_TIMEOUT_OFFSET 21
#define DBG_J2C1_SMBUS_TIMEOUT_START_BIT 21
#define DBG_J2C1_SMBUS_TIMEOUT_WIDTH 1



typedef enum dbg_j2c1_smbus_timeout {
    DBG_J_2C_1_SMBUS_TIMEOUT_0,
    DBG_J_2C_1_SMBUS_TIMEOUT_1
} DBG_J_2C_1_SMBUS_TIMEOUT_T ;
#define WRITE_DBG_J2C1_SMBUS_TIMEOUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_J2C1_SMBUS_TIMEOUT_MASK) | ((val << DBG_J2C1_SMBUS_TIMEOUT_START_BIT) & DBG_J2C1_SMBUS_TIMEOUT_MASK )); \
   } 

#define ENABLE_DBG_J2C1_SMBUS_TIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_J2C1_SMBUS_TIMEOUT_MASK ); \
   }

#define DISABLE_DBG_J2C1_SMBUS_TIMEOUT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_J2C1_SMBUS_TIMEOUT_MASK ); \
   } 

#define READ_DBG_J2C1_SMBUS_TIMEOUT() \
   ((READ_REGISTER_ULONG(0x8) & DBG_J2C1_SMBUS_TIMEOUT_MASK)  >> DBG_J2C1_SMBUS_TIMEOUT_START_BIT)

#define WHEN_DBG_J2C1_SMBUS_TIMEOUT_HIGH() \
     if ( READ_DBG_J2C1_SMBUS_TIMEOUT() )


#define UNLESS_DBG_J2C1_SMBUS_TIMEOUT_HIGH() \
     if (! READ_DBG_J2C1_SMBUS_TIMEOUT() )


#define WAIT_DBG_J2C1_SMBUS_TIMEOUT_LOW() \
    while ( READ_DBG_J2C1_SMBUS_TIMEOUT() );


#define WAIT_DBG_J2C1_SMBUS_TIMEOUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_J2C1_SMBUS_TIMEOUT() && (--___t___ > 0)); }


#define WAIT_DBG_J2C1_SMBUS_TIMEOUT_HIGH() \
    while (! READ_DBG_J2C1_SMBUS_TIMEOUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_IWDEG_STOP 
    // 
#define DBG_IWDEG_STOP_MASK 0x1000U
#define DBG_IWDEG_STOP_OFFSET 12
#define DBG_IWDEG_STOP_START_BIT 12
#define DBG_IWDEG_STOP_WIDTH 1



typedef enum dbg_iwdeg_stop {
    DBG_IWDEG_STOP_0,
    DBG_IWDEG_STOP_1
} DBG_IWDEG_STOP_T ;
#define WRITE_DBG_IWDEG_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_IWDEG_STOP_MASK) | ((val << DBG_IWDEG_STOP_START_BIT) & DBG_IWDEG_STOP_MASK )); \
   } 

#define ENABLE_DBG_IWDEG_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_IWDEG_STOP_MASK ); \
   }

#define DISABLE_DBG_IWDEG_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_IWDEG_STOP_MASK ); \
   } 

#define READ_DBG_IWDEG_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_IWDEG_STOP_MASK)  >> DBG_IWDEG_STOP_START_BIT)

#define WHEN_DBG_IWDEG_STOP_HIGH() \
     if ( READ_DBG_IWDEG_STOP() )


#define UNLESS_DBG_IWDEG_STOP_HIGH() \
     if (! READ_DBG_IWDEG_STOP() )


#define WAIT_DBG_IWDEG_STOP_LOW() \
    while ( READ_DBG_IWDEG_STOP() );


#define WAIT_DBG_IWDEG_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_IWDEG_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_IWDEG_STOP_HIGH() \
    while (! READ_DBG_IWDEG_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_WWDG_STOP 
    // 
#define DBG_WWDG_STOP_MASK 0x800U
#define DBG_WWDG_STOP_OFFSET 11
#define DBG_WWDG_STOP_START_BIT 11
#define DBG_WWDG_STOP_WIDTH 1



typedef enum dbg_wwdg_stop {
    DBG_WWDG_STOP_0,
    DBG_WWDG_STOP_1
} DBG_WWDG_STOP_T ;
#define WRITE_DBG_WWDG_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_WWDG_STOP_MASK) | ((val << DBG_WWDG_STOP_START_BIT) & DBG_WWDG_STOP_MASK )); \
   } 

#define ENABLE_DBG_WWDG_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_WWDG_STOP_MASK ); \
   }

#define DISABLE_DBG_WWDG_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_WWDG_STOP_MASK ); \
   } 

#define READ_DBG_WWDG_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_WWDG_STOP_MASK)  >> DBG_WWDG_STOP_START_BIT)

#define WHEN_DBG_WWDG_STOP_HIGH() \
     if ( READ_DBG_WWDG_STOP() )


#define UNLESS_DBG_WWDG_STOP_HIGH() \
     if (! READ_DBG_WWDG_STOP() )


#define WAIT_DBG_WWDG_STOP_LOW() \
    while ( READ_DBG_WWDG_STOP() );


#define WAIT_DBG_WWDG_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_WWDG_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_WWDG_STOP_HIGH() \
    while (! READ_DBG_WWDG_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM14_STOP 
    // 
#define DBG_TIM14_STOP_MASK 0x100U
#define DBG_TIM14_STOP_OFFSET 8
#define DBG_TIM14_STOP_START_BIT 8
#define DBG_TIM14_STOP_WIDTH 1



typedef enum dbg_tim14_stop {
    DBG_TIM_1_4_STOP_0,
    DBG_TIM_1_4_STOP_1
} DBG_TIM_14_STOP_T ;
#define WRITE_DBG_TIM14_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM14_STOP_MASK) | ((val << DBG_TIM14_STOP_START_BIT) & DBG_TIM14_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM14_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM14_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM14_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM14_STOP_MASK ); \
   } 

#define READ_DBG_TIM14_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM14_STOP_MASK)  >> DBG_TIM14_STOP_START_BIT)

#define WHEN_DBG_TIM14_STOP_HIGH() \
     if ( READ_DBG_TIM14_STOP() )


#define UNLESS_DBG_TIM14_STOP_HIGH() \
     if (! READ_DBG_TIM14_STOP() )


#define WAIT_DBG_TIM14_STOP_LOW() \
    while ( READ_DBG_TIM14_STOP() );


#define WAIT_DBG_TIM14_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM14_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM14_STOP_HIGH() \
    while (! READ_DBG_TIM14_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM13_STOP 
    // 
#define DBG_TIM13_STOP_MASK 0x80U
#define DBG_TIM13_STOP_OFFSET 7
#define DBG_TIM13_STOP_START_BIT 7
#define DBG_TIM13_STOP_WIDTH 1



typedef enum dbg_tim13_stop {
    DBG_TIM_1_3_STOP_0,
    DBG_TIM_1_3_STOP_1
} DBG_TIM_13_STOP_T ;
#define WRITE_DBG_TIM13_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM13_STOP_MASK) | ((val << DBG_TIM13_STOP_START_BIT) & DBG_TIM13_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM13_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM13_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM13_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM13_STOP_MASK ); \
   } 

#define READ_DBG_TIM13_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM13_STOP_MASK)  >> DBG_TIM13_STOP_START_BIT)

#define WHEN_DBG_TIM13_STOP_HIGH() \
     if ( READ_DBG_TIM13_STOP() )


#define UNLESS_DBG_TIM13_STOP_HIGH() \
     if (! READ_DBG_TIM13_STOP() )


#define WAIT_DBG_TIM13_STOP_LOW() \
    while ( READ_DBG_TIM13_STOP() );


#define WAIT_DBG_TIM13_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM13_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM13_STOP_HIGH() \
    while (! READ_DBG_TIM13_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM12_STOP 
    // 
#define DBG_TIM12_STOP_MASK 0x40U
#define DBG_TIM12_STOP_OFFSET 6
#define DBG_TIM12_STOP_START_BIT 6
#define DBG_TIM12_STOP_WIDTH 1



typedef enum dbg_tim12_stop {
    DBG_TIM_1_2_STOP_0,
    DBG_TIM_1_2_STOP_1
} DBG_TIM_12_STOP_T ;
#define WRITE_DBG_TIM12_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM12_STOP_MASK) | ((val << DBG_TIM12_STOP_START_BIT) & DBG_TIM12_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM12_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM12_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM12_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM12_STOP_MASK ); \
   } 

#define READ_DBG_TIM12_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM12_STOP_MASK)  >> DBG_TIM12_STOP_START_BIT)

#define WHEN_DBG_TIM12_STOP_HIGH() \
     if ( READ_DBG_TIM12_STOP() )


#define UNLESS_DBG_TIM12_STOP_HIGH() \
     if (! READ_DBG_TIM12_STOP() )


#define WAIT_DBG_TIM12_STOP_LOW() \
    while ( READ_DBG_TIM12_STOP() );


#define WAIT_DBG_TIM12_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM12_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM12_STOP_HIGH() \
    while (! READ_DBG_TIM12_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM7_STOP 
    // 
#define DBG_TIM7_STOP_MASK 0x20U
#define DBG_TIM7_STOP_OFFSET 5
#define DBG_TIM7_STOP_START_BIT 5
#define DBG_TIM7_STOP_WIDTH 1



typedef enum dbg_tim7_stop {
    DBG_TIM_7_STOP_0,
    DBG_TIM_7_STOP_1
} DBG_TIM_7_STOP_T ;
#define WRITE_DBG_TIM7_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM7_STOP_MASK) | ((val << DBG_TIM7_STOP_START_BIT) & DBG_TIM7_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM7_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM7_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM7_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM7_STOP_MASK ); \
   } 

#define READ_DBG_TIM7_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM7_STOP_MASK)  >> DBG_TIM7_STOP_START_BIT)

#define WHEN_DBG_TIM7_STOP_HIGH() \
     if ( READ_DBG_TIM7_STOP() )


#define UNLESS_DBG_TIM7_STOP_HIGH() \
     if (! READ_DBG_TIM7_STOP() )


#define WAIT_DBG_TIM7_STOP_LOW() \
    while ( READ_DBG_TIM7_STOP() );


#define WAIT_DBG_TIM7_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM7_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM7_STOP_HIGH() \
    while (! READ_DBG_TIM7_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM6_STOP 
    // 
#define DBG_TIM6_STOP_MASK 0x10U
#define DBG_TIM6_STOP_OFFSET 4
#define DBG_TIM6_STOP_START_BIT 4
#define DBG_TIM6_STOP_WIDTH 1



typedef enum dbg_tim6_stop {
    DBG_TIM_6_STOP_0,
    DBG_TIM_6_STOP_1
} DBG_TIM_6_STOP_T ;
#define WRITE_DBG_TIM6_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM6_STOP_MASK) | ((val << DBG_TIM6_STOP_START_BIT) & DBG_TIM6_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM6_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM6_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM6_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM6_STOP_MASK ); \
   } 

#define READ_DBG_TIM6_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM6_STOP_MASK)  >> DBG_TIM6_STOP_START_BIT)

#define WHEN_DBG_TIM6_STOP_HIGH() \
     if ( READ_DBG_TIM6_STOP() )


#define UNLESS_DBG_TIM6_STOP_HIGH() \
     if (! READ_DBG_TIM6_STOP() )


#define WAIT_DBG_TIM6_STOP_LOW() \
    while ( READ_DBG_TIM6_STOP() );


#define WAIT_DBG_TIM6_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM6_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM6_STOP_HIGH() \
    while (! READ_DBG_TIM6_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM5_STOP 
    // 
#define DBG_TIM5_STOP_MASK 0x8U
#define DBG_TIM5_STOP_OFFSET 3
#define DBG_TIM5_STOP_START_BIT 3
#define DBG_TIM5_STOP_WIDTH 1



typedef enum dbg_tim5_stop {
    DBG_TIM_5_STOP_0,
    DBG_TIM_5_STOP_1
} DBG_TIM_5_STOP_T ;
#define WRITE_DBG_TIM5_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM5_STOP_MASK) | ((val << DBG_TIM5_STOP_START_BIT) & DBG_TIM5_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM5_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM5_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM5_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM5_STOP_MASK ); \
   } 

#define READ_DBG_TIM5_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM5_STOP_MASK)  >> DBG_TIM5_STOP_START_BIT)

#define WHEN_DBG_TIM5_STOP_HIGH() \
     if ( READ_DBG_TIM5_STOP() )


#define UNLESS_DBG_TIM5_STOP_HIGH() \
     if (! READ_DBG_TIM5_STOP() )


#define WAIT_DBG_TIM5_STOP_LOW() \
    while ( READ_DBG_TIM5_STOP() );


#define WAIT_DBG_TIM5_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM5_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM5_STOP_HIGH() \
    while (! READ_DBG_TIM5_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM4_STOP 
    // 
#define DBG_TIM4_STOP_MASK 0x4U
#define DBG_TIM4_STOP_OFFSET 2
#define DBG_TIM4_STOP_START_BIT 2
#define DBG_TIM4_STOP_WIDTH 1



typedef enum dbg_tim4_stop {
    DBG_TIM_4_STOP_0,
    DBG_TIM_4_STOP_1
} DBG_TIM_4_STOP_T ;
#define WRITE_DBG_TIM4_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM4_STOP_MASK) | ((val << DBG_TIM4_STOP_START_BIT) & DBG_TIM4_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM4_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM4_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM4_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM4_STOP_MASK ); \
   } 

#define READ_DBG_TIM4_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM4_STOP_MASK)  >> DBG_TIM4_STOP_START_BIT)

#define WHEN_DBG_TIM4_STOP_HIGH() \
     if ( READ_DBG_TIM4_STOP() )


#define UNLESS_DBG_TIM4_STOP_HIGH() \
     if (! READ_DBG_TIM4_STOP() )


#define WAIT_DBG_TIM4_STOP_LOW() \
    while ( READ_DBG_TIM4_STOP() );


#define WAIT_DBG_TIM4_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM4_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM4_STOP_HIGH() \
    while (! READ_DBG_TIM4_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM3 _STOP 
    // 
#define DBG_TIM3_STOP_MASK 0x2U
#define DBG_TIM3_STOP_OFFSET 1
#define DBG_TIM3_STOP_START_BIT 1
#define DBG_TIM3_STOP_WIDTH 1



typedef enum dbg_tim3_stop {
    DBG_TIM_3_STOP_0,
    DBG_TIM_3_STOP_1
} DBG_TIM_3_STOP_T ;
#define WRITE_DBG_TIM3_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM3_STOP_MASK) | ((val << DBG_TIM3_STOP_START_BIT) & DBG_TIM3_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM3_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM3_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM3_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM3_STOP_MASK ); \
   } 

#define READ_DBG_TIM3_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM3_STOP_MASK)  >> DBG_TIM3_STOP_START_BIT)

#define WHEN_DBG_TIM3_STOP_HIGH() \
     if ( READ_DBG_TIM3_STOP() )


#define UNLESS_DBG_TIM3_STOP_HIGH() \
     if (! READ_DBG_TIM3_STOP() )


#define WAIT_DBG_TIM3_STOP_LOW() \
    while ( READ_DBG_TIM3_STOP() );


#define WAIT_DBG_TIM3_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM3_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM3_STOP_HIGH() \
    while (! READ_DBG_TIM3_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb1Fz
//
// Return the value of register DBGMCU_APB_1_FZ
//
// Notes : Register Debug MCU APB1 Freeze registe (DBGMCU_APB1_FZ) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DBG_TIM2_STOP 
    // 
#define DBG_TIM2_STOP_MASK 0x1U
#define DBG_TIM2_STOP_OFFSET 0
#define DBG_TIM2_STOP_START_BIT 0
#define DBG_TIM2_STOP_WIDTH 1



typedef enum dbg_tim2_stop {
    DBG_TIM_2_STOP_0,
    DBG_TIM_2_STOP_1
} DBG_TIM_2_STOP_T ;
#define WRITE_DBG_TIM2_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DBG_TIM2_STOP_MASK) | ((val << DBG_TIM2_STOP_START_BIT) & DBG_TIM2_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM2_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  DBG_TIM2_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM2_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~DBG_TIM2_STOP_MASK ); \
   } 

#define READ_DBG_TIM2_STOP() \
   ((READ_REGISTER_ULONG(0x8) & DBG_TIM2_STOP_MASK)  >> DBG_TIM2_STOP_START_BIT)

#define WHEN_DBG_TIM2_STOP_HIGH() \
     if ( READ_DBG_TIM2_STOP() )


#define UNLESS_DBG_TIM2_STOP_HIGH() \
     if (! READ_DBG_TIM2_STOP() )


#define WAIT_DBG_TIM2_STOP_LOW() \
    while ( READ_DBG_TIM2_STOP() );


#define WAIT_DBG_TIM2_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM2_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM2_STOP_HIGH() \
    while (! READ_DBG_TIM2_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb2Fz
//
// Return the value of register DBGMCU_APB2_FZ
//
// Notes : Register DbgmcuApb2Fz at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DBGMCU_APB_2_FZ( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_DBGMCU_APB_2_FZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_DBGMCU_APB_2_FZ(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_DBGMCU_APB_2_FZ() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb2Fz
//
// Return the value of register DBGMCU_APB_2_FZ
//
// Notes : Register Debug MCU APB2 Freeze registe (DBGMCU_APB2_FZ) at the offset 0xC, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM11 counter stopped when core is halted 
    // 
#define DBG_TIM11_STOP_MASK 0x40000U
#define DBG_TIM11_STOP_OFFSET 18
#define DBG_TIM11_STOP_START_BIT 18
#define DBG_TIM11_STOP_WIDTH 1


#define DBGMCU_APB_2_FZ_REG 0xC

typedef enum dbg_tim11_stop {
    DBG_TIM_1_1_STOP_0,
    DBG_TIM_1_1_STOP_1
} DBG_TIM_11_STOP_T ;
#define WRITE_DBG_TIM11_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DBG_TIM11_STOP_MASK) | ((val << DBG_TIM11_STOP_START_BIT) & DBG_TIM11_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM11_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  DBG_TIM11_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM11_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~DBG_TIM11_STOP_MASK ); \
   } 

#define READ_DBG_TIM11_STOP() \
   ((READ_REGISTER_ULONG(0xC) & DBG_TIM11_STOP_MASK)  >> DBG_TIM11_STOP_START_BIT)

#define WHEN_DBG_TIM11_STOP_HIGH() \
     if ( READ_DBG_TIM11_STOP() )


#define UNLESS_DBG_TIM11_STOP_HIGH() \
     if (! READ_DBG_TIM11_STOP() )


#define WAIT_DBG_TIM11_STOP_LOW() \
    while ( READ_DBG_TIM11_STOP() );


#define WAIT_DBG_TIM11_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM11_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM11_STOP_HIGH() \
    while (! READ_DBG_TIM11_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb2Fz
//
// Return the value of register DBGMCU_APB_2_FZ
//
// Notes : Register Debug MCU APB2 Freeze registe (DBGMCU_APB2_FZ) at the offset 0xC, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM10 counter stopped when core is halted 
    // 
#define DBG_TIM10_STOP_MASK 0x20000U
#define DBG_TIM10_STOP_OFFSET 17
#define DBG_TIM10_STOP_START_BIT 17
#define DBG_TIM10_STOP_WIDTH 1



typedef enum dbg_tim10_stop {
    DBG_TIM_1_0_STOP_0,
    DBG_TIM_1_0_STOP_1
} DBG_TIM_10_STOP_T ;
#define WRITE_DBG_TIM10_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DBG_TIM10_STOP_MASK) | ((val << DBG_TIM10_STOP_START_BIT) & DBG_TIM10_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM10_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  DBG_TIM10_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM10_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~DBG_TIM10_STOP_MASK ); \
   } 

#define READ_DBG_TIM10_STOP() \
   ((READ_REGISTER_ULONG(0xC) & DBG_TIM10_STOP_MASK)  >> DBG_TIM10_STOP_START_BIT)

#define WHEN_DBG_TIM10_STOP_HIGH() \
     if ( READ_DBG_TIM10_STOP() )


#define UNLESS_DBG_TIM10_STOP_HIGH() \
     if (! READ_DBG_TIM10_STOP() )


#define WAIT_DBG_TIM10_STOP_LOW() \
    while ( READ_DBG_TIM10_STOP() );


#define WAIT_DBG_TIM10_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM10_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM10_STOP_HIGH() \
    while (! READ_DBG_TIM10_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb2Fz
//
// Return the value of register DBGMCU_APB_2_FZ
//
// Notes : Register Debug MCU APB2 Freeze registe (DBGMCU_APB2_FZ) at the offset 0xC, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM9 counter stopped when core is halted 
    // 
#define DBG_TIM9_STOP_MASK 0x10000U
#define DBG_TIM9_STOP_OFFSET 16
#define DBG_TIM9_STOP_START_BIT 16
#define DBG_TIM9_STOP_WIDTH 1



typedef enum dbg_tim9_stop {
    DBG_TIM_9_STOP_0,
    DBG_TIM_9_STOP_1
} DBG_TIM_9_STOP_T ;
#define WRITE_DBG_TIM9_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DBG_TIM9_STOP_MASK) | ((val << DBG_TIM9_STOP_START_BIT) & DBG_TIM9_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM9_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  DBG_TIM9_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM9_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~DBG_TIM9_STOP_MASK ); \
   } 

#define READ_DBG_TIM9_STOP() \
   ((READ_REGISTER_ULONG(0xC) & DBG_TIM9_STOP_MASK)  >> DBG_TIM9_STOP_START_BIT)

#define WHEN_DBG_TIM9_STOP_HIGH() \
     if ( READ_DBG_TIM9_STOP() )


#define UNLESS_DBG_TIM9_STOP_HIGH() \
     if (! READ_DBG_TIM9_STOP() )


#define WAIT_DBG_TIM9_STOP_LOW() \
    while ( READ_DBG_TIM9_STOP() );


#define WAIT_DBG_TIM9_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM9_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM9_STOP_HIGH() \
    while (! READ_DBG_TIM9_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb2Fz
//
// Return the value of register DBGMCU_APB_2_FZ
//
// Notes : Register Debug MCU APB2 Freeze registe (DBGMCU_APB2_FZ) at the offset 0xC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM8 counter stopped when core is halted 
    // 
#define DBG_TIM8_STOP_MASK 0x2U
#define DBG_TIM8_STOP_OFFSET 1
#define DBG_TIM8_STOP_START_BIT 1
#define DBG_TIM8_STOP_WIDTH 1



typedef enum dbg_tim8_stop {
    DBG_TIM_8_STOP_0,
    DBG_TIM_8_STOP_1
} DBG_TIM_8_STOP_T ;
#define WRITE_DBG_TIM8_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DBG_TIM8_STOP_MASK) | ((val << DBG_TIM8_STOP_START_BIT) & DBG_TIM8_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM8_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  DBG_TIM8_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM8_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~DBG_TIM8_STOP_MASK ); \
   } 

#define READ_DBG_TIM8_STOP() \
   ((READ_REGISTER_ULONG(0xC) & DBG_TIM8_STOP_MASK)  >> DBG_TIM8_STOP_START_BIT)

#define WHEN_DBG_TIM8_STOP_HIGH() \
     if ( READ_DBG_TIM8_STOP() )


#define UNLESS_DBG_TIM8_STOP_HIGH() \
     if (! READ_DBG_TIM8_STOP() )


#define WAIT_DBG_TIM8_STOP_LOW() \
    while ( READ_DBG_TIM8_STOP() );


#define WAIT_DBG_TIM8_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM8_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM8_STOP_HIGH() \
    while (! READ_DBG_TIM8_STOP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DbgmcuApb2Fz
//
// Return the value of register DBGMCU_APB_2_FZ
//
// Notes : Register Debug MCU APB2 Freeze registe (DBGMCU_APB2_FZ) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TIM1 counter stopped when core is halted 
    // 
#define DBG_TIM1_STOP_MASK 0x1U
#define DBG_TIM1_STOP_OFFSET 0
#define DBG_TIM1_STOP_START_BIT 0
#define DBG_TIM1_STOP_WIDTH 1



typedef enum dbg_tim1_stop {
    DBG_TIM_1_STOP_0,
    DBG_TIM_1_STOP_1
} DBG_TIM_1_STOP_T ;
#define WRITE_DBG_TIM1_STOP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ DBG_TIM1_STOP_MASK) | ((val << DBG_TIM1_STOP_START_BIT) & DBG_TIM1_STOP_MASK )); \
   } 

#define ENABLE_DBG_TIM1_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  DBG_TIM1_STOP_MASK ); \
   }

#define DISABLE_DBG_TIM1_STOP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~DBG_TIM1_STOP_MASK ); \
   } 

#define READ_DBG_TIM1_STOP() \
   ((READ_REGISTER_ULONG(0xC) & DBG_TIM1_STOP_MASK)  >> DBG_TIM1_STOP_START_BIT)

#define WHEN_DBG_TIM1_STOP_HIGH() \
     if ( READ_DBG_TIM1_STOP() )


#define UNLESS_DBG_TIM1_STOP_HIGH() \
     if (! READ_DBG_TIM1_STOP() )


#define WAIT_DBG_TIM1_STOP_LOW() \
    while ( READ_DBG_TIM1_STOP() );


#define WAIT_DBG_TIM1_STOP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBG_TIM1_STOP() && (--___t___ > 0)); }


#define WAIT_DBG_TIM1_STOP_HIGH() \
    while (! READ_DBG_TIM1_STOP() );


