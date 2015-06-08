/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Stm32/Stm32Random/macro-c/Stm32Random.h
// 
//
// Generated on the 06/09/2012 18:22 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by Remi PRUD'HOMME
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht ST Ericsson  2012
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
/////////////////////////////////////////////////////////////////////////
//
// Function : Control
//
// Return the value of register CONTROL
//
// Notes : Register RNG control register at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RGN_CONTROL( y) \
     WRITE_REGISTER_ULONG( 0x50060800 , y)

#define SET_BITS_RGN_CONTROL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060800); \
     WRITE_REGISTER_ULONG( 0x50060800 , val |  mask ); \
   }

#define CLEAR_BITS_RGN_CONTROL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060800); \
     WRITE_REGISTER_ULONG( 0x50060800 , val & ~mask ); \
   }

#define READ_REGISTER_RGN_CONTROL() \
     READ_REGISTER_ULONG(0x50060800)

/////////////////////////////////////////////////////////////////////////
//
// Function : GENERATOR
//
// Return the value of register Control
//
// Notes : Register RNG control register (RNG_CR) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define GENERATOR_MASK 0x4U
#define GENERATOR_OFFSET 2
#define GENERATOR_STOP_BIT 2
#define GENERATOR_START_BIT 2
#define GENERATOR_WIDTH 1

#define WRITE_RGN_GENERATOR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060800); \
     WRITE_REGISTER_ULONG(0x50060800, (OldValue & ~ GENERATOR_MASK) | ((val << GENERATOR_START_BIT) & GENERATOR_MASK )); \
   } 

#define  ENABLE_RGN_GENERATOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060800); \
     WRITE_REGISTER_ULONG( 0x50060800 , val |  GENERATOR_MASK ); \
   }

#define DISABLE_RGN_GENERATOR() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060800); \
     WRITE_REGISTER_ULONG(0x50060800, val & ~GENERATOR_MASK ); \
   } 

#define READ_RGN_GENERATOR() \
   ((READ_REGISTER_ULONG(0x50060800) & GENERATOR_MASK)  >> GENERATOR_START_BIT)

#define WHEN_RGN_GENERATOR_HIGH(x) \
     if ( READ_RGN_GENERATOR() )


#define UNLESS_RGN_GENERATOR_HIGH() \
     if (! READ_RGN_GENERATOR() )


#define WAIT_RGN_GENERATOR_LOW() \
    while ( READ_RGN_GENERATOR() );


#define WAIT_RGN_GENERATOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_GENERATOR() && (--___t___ > 0)); }


#define WAIT_RGN_GENERATOR_HIGH() \
    while (! READ_RGN_GENERATOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : INTERRUPT
//
// Return the value of register Control
//
// Notes : Register RNG control register (RNG_CR) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define INTERRUPT_MASK 0x8U
#define INTERRUPT_OFFSET 3
#define INTERRUPT_STOP_BIT 3
#define INTERRUPT_START_BIT 3
#define INTERRUPT_WIDTH 1

#define WRITE_RGN_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060800); \
     WRITE_REGISTER_ULONG(0x50060800, (OldValue & ~ INTERRUPT_MASK) | ((val << INTERRUPT_START_BIT) & INTERRUPT_MASK )); \
   } 

#define  ENABLE_RGN_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060800); \
     WRITE_REGISTER_ULONG( 0x50060800 , val |  INTERRUPT_MASK ); \
   }

#define DISABLE_RGN_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060800); \
     WRITE_REGISTER_ULONG(0x50060800, val & ~INTERRUPT_MASK ); \
   } 

#define READ_RGN_INTERRUPT() \
   ((READ_REGISTER_ULONG(0x50060800) & INTERRUPT_MASK)  >> INTERRUPT_START_BIT)

#define WHEN_RGN_INTERRUPT_HIGH(x) \
     if ( READ_RGN_INTERRUPT() )


#define UNLESS_RGN_INTERRUPT_HIGH() \
     if (! READ_RGN_INTERRUPT() )


#define WAIT_RGN_INTERRUPT_LOW() \
    while ( READ_RGN_INTERRUPT() );


#define WAIT_RGN_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_RGN_INTERRUPT_HIGH() \
    while (! READ_RGN_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register RNG control register at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RGN_STATUS( y) \
     WRITE_REGISTER_ULONG( 0x50060804 , y)

#define SET_BITS_RGN_STATUS(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val |  mask ); \
   }

#define CLEAR_BITS_RGN_STATUS(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val & ~mask ); \
   }

#define READ_REGISTER_RGN_STATUS() \
     READ_REGISTER_ULONG(0x50060804)

/////////////////////////////////////////////////////////////////////////
//
// Function : CLOCK_ERROR_INTERRUPT
//
// Return the value of register Status
//
// Notes : Register RNG control register (RNG_SR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define CLOCK_ERROR_INTERRUPT_MASK 0x1U
#define CLOCK_ERROR_INTERRUPT_OFFSET 0
#define CLOCK_ERROR_INTERRUPT_STOP_BIT 0
#define CLOCK_ERROR_INTERRUPT_START_BIT 0
#define CLOCK_ERROR_INTERRUPT_WIDTH 1

#define WRITE_RGN_CLOCK_ERROR_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, (OldValue & ~ CLOCK_ERROR_INTERRUPT_MASK) | ((val << CLOCK_ERROR_INTERRUPT_START_BIT) & CLOCK_ERROR_INTERRUPT_MASK )); \
   } 

#define ENABLE_RGN_CLOCK_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val |  CLOCK_ERROR_INTERRUPT_MASK ); \
   }

#define DISABLE_RGN_CLOCK_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, val & ~CLOCK_ERROR_INTERRUPT_MASK ); \
   } 

#define READ_RGN_CLOCK_ERROR_INTERRUPT() \
   ((READ_REGISTER_ULONG(0x50060804) & CLOCK_ERROR_INTERRUPT_MASK)  >> CLOCK_ERROR_INTERRUPT_START_BIT)

#define WHEN_RGN_CLOCK_ERROR_INTERRUPT_HIGH(x) \
     if ( READ_RGN_CLOCK_ERROR_INTERRUPT() )


#define UNLESS_RGN_CLOCK_ERROR_INTERRUPT_HIGH() \
     if (! READ_RGN_CLOCK_ERROR_INTERRUPT() )


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_LOW() \
    while ( READ_RGN_CLOCK_ERROR_INTERRUPT() );


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_CLOCK_ERROR_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_HIGH() \
    while (! READ_RGN_CLOCK_ERROR_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CLOCK_ERROR_INTERRUPT
//
// Return the value of register Status
//
// Notes : Register RNG control register (RNG_SR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define CLOCK_ERROR_INTERRUPT_MASK 0x2U
#define CLOCK_ERROR_INTERRUPT_OFFSET 1
#define CLOCK_ERROR_INTERRUPT_STOP_BIT 1
#define CLOCK_ERROR_INTERRUPT_START_BIT 1
#define CLOCK_ERROR_INTERRUPT_WIDTH 1

#define WRITE_RGN_CLOCK_ERROR_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, (OldValue & ~ CLOCK_ERROR_INTERRUPT_MASK) | ((val << CLOCK_ERROR_INTERRUPT_START_BIT) & CLOCK_ERROR_INTERRUPT_MASK )); \
   } 

#define ENABLE_RGN_CLOCK_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val |  CLOCK_ERROR_INTERRUPT_MASK ); \
   }

#define DISABLE_RGN_CLOCK_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, val & ~CLOCK_ERROR_INTERRUPT_MASK ); \
   } 

#define READ_RGN_CLOCK_ERROR_INTERRUPT() \
   ((READ_REGISTER_ULONG(0x50060804) & CLOCK_ERROR_INTERRUPT_MASK)  >> CLOCK_ERROR_INTERRUPT_START_BIT)

#define WHEN_RGN_CLOCK_ERROR_INTERRUPT_HIGH(x) \
     if ( READ_RGN_CLOCK_ERROR_INTERRUPT() )


#define UNLESS_RGN_CLOCK_ERROR_INTERRUPT_HIGH() \
     if (! READ_RGN_CLOCK_ERROR_INTERRUPT() )


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_LOW() \
    while ( READ_RGN_CLOCK_ERROR_INTERRUPT() );


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_CLOCK_ERROR_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_HIGH() \
    while (! READ_RGN_CLOCK_ERROR_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SEED_ERROR_INTERRUPT
//
// Return the value of register Status
//
// Notes : Register RNG control register (RNG_SR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define SEED_ERROR_INTERRUPT_MASK 0x4U
#define SEED_ERROR_INTERRUPT_OFFSET 2
#define SEED_ERROR_INTERRUPT_STOP_BIT 2
#define SEED_ERROR_INTERRUPT_START_BIT 2
#define SEED_ERROR_INTERRUPT_WIDTH 1

#define WRITE_RGN_SEED_ERROR_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, (OldValue & ~ SEED_ERROR_INTERRUPT_MASK) | ((val << SEED_ERROR_INTERRUPT_START_BIT) & SEED_ERROR_INTERRUPT_MASK )); \
   } 

#define ENABLE_RGN_SEED_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val |  SEED_ERROR_INTERRUPT_MASK ); \
   }

#define DISABLE_RGN_SEED_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, val & ~SEED_ERROR_INTERRUPT_MASK ); \
   } 

#define READ_RGN_SEED_ERROR_INTERRUPT() \
   ((READ_REGISTER_ULONG(0x50060804) & SEED_ERROR_INTERRUPT_MASK)  >> SEED_ERROR_INTERRUPT_START_BIT)

#define WHEN_RGN_SEED_ERROR_INTERRUPT_HIGH(x) \
     if ( READ_RGN_SEED_ERROR_INTERRUPT() )


#define UNLESS_RGN_SEED_ERROR_INTERRUPT_HIGH() \
     if (! READ_RGN_SEED_ERROR_INTERRUPT() )


#define WAIT_RGN_SEED_ERROR_INTERRUPT_LOW() \
    while ( READ_RGN_SEED_ERROR_INTERRUPT() );


#define WAIT_RGN_SEED_ERROR_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_SEED_ERROR_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_RGN_SEED_ERROR_INTERRUPT_HIGH() \
    while (! READ_RGN_SEED_ERROR_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CLOCK_ERROR_INTERRUPT
//
// Return the value of register Status
//
// Notes : Register RNG control register (RNG_SR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////
#define CLOCK_ERROR_INTERRUPT_MASK 0x20U
#define CLOCK_ERROR_INTERRUPT_OFFSET 5
#define CLOCK_ERROR_INTERRUPT_STOP_BIT 5
#define CLOCK_ERROR_INTERRUPT_START_BIT 5
#define CLOCK_ERROR_INTERRUPT_WIDTH 1

#define WRITE_RGN_CLOCK_ERROR_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, (OldValue & ~ CLOCK_ERROR_INTERRUPT_MASK) | ((val << CLOCK_ERROR_INTERRUPT_START_BIT) & CLOCK_ERROR_INTERRUPT_MASK )); \
   } 

#define ENABLE_RGN_CLOCK_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val |  CLOCK_ERROR_INTERRUPT_MASK ); \
   }

#define DISABLE_RGN_CLOCK_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, val & ~CLOCK_ERROR_INTERRUPT_MASK ); \
   } 

#define READ_RGN_CLOCK_ERROR_INTERRUPT() \
   ((READ_REGISTER_ULONG(0x50060804) & CLOCK_ERROR_INTERRUPT_MASK)  >> CLOCK_ERROR_INTERRUPT_START_BIT)

#define WHEN_RGN_CLOCK_ERROR_INTERRUPT_HIGH(x) \
     if ( READ_RGN_CLOCK_ERROR_INTERRUPT() )


#define UNLESS_RGN_CLOCK_ERROR_INTERRUPT_HIGH() \
     if (! READ_RGN_CLOCK_ERROR_INTERRUPT() )


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_LOW() \
    while ( READ_RGN_CLOCK_ERROR_INTERRUPT() );


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_CLOCK_ERROR_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_RGN_CLOCK_ERROR_INTERRUPT_HIGH() \
    while (! READ_RGN_CLOCK_ERROR_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SEED_ERROR_INTERRUPT
//
// Return the value of register Status
//
// Notes : Register RNG control register (RNG_SR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define SEED_ERROR_INTERRUPT_MASK 0x40U
#define SEED_ERROR_INTERRUPT_OFFSET 6
#define SEED_ERROR_INTERRUPT_STOP_BIT 6
#define SEED_ERROR_INTERRUPT_START_BIT 6
#define SEED_ERROR_INTERRUPT_WIDTH 1

#define WRITE_RGN_SEED_ERROR_INTERRUPT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, (OldValue & ~ SEED_ERROR_INTERRUPT_MASK) | ((val << SEED_ERROR_INTERRUPT_START_BIT) & SEED_ERROR_INTERRUPT_MASK )); \
   } 

#define ENABLE_RGN_SEED_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG( 0x50060804 , val |  SEED_ERROR_INTERRUPT_MASK ); \
   }

#define DISABLE_RGN_SEED_ERROR_INTERRUPT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060804); \
     WRITE_REGISTER_ULONG(0x50060804, val & ~SEED_ERROR_INTERRUPT_MASK ); \
   } 

#define READ_RGN_SEED_ERROR_INTERRUPT() \
   ((READ_REGISTER_ULONG(0x50060804) & SEED_ERROR_INTERRUPT_MASK)  >> SEED_ERROR_INTERRUPT_START_BIT)

#define WHEN_RGN_SEED_ERROR_INTERRUPT_HIGH(x) \
     if ( READ_RGN_SEED_ERROR_INTERRUPT() )


#define UNLESS_RGN_SEED_ERROR_INTERRUPT_HIGH() \
     if (! READ_RGN_SEED_ERROR_INTERRUPT() )


#define WAIT_RGN_SEED_ERROR_INTERRUPT_LOW() \
    while ( READ_RGN_SEED_ERROR_INTERRUPT() );


#define WAIT_RGN_SEED_ERROR_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RGN_SEED_ERROR_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_RGN_SEED_ERROR_INTERRUPT_HIGH() \
    while (! READ_RGN_SEED_ERROR_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Data
//
// Return the value of register DATA
//
// Notes : Register RNG data register at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RGN_DATA( y) \
     WRITE_REGISTER_ULONG( 0x50060808 , y)

#define SET_BITS_RGN_DATA(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060808); \
     WRITE_REGISTER_ULONG( 0x50060808 , val |  mask ); \
   }

#define CLEAR_BITS_RGN_DATA(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50060808); \
     WRITE_REGISTER_ULONG( 0x50060808 , val & ~mask ); \
   }

#define READ_REGISTER_RGN_DATA() \
     READ_REGISTER_ULONG(0x50060808)

