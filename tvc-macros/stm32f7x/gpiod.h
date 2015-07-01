/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/gpiod.h
// 
//
// Generated on the 26/06/2015 21:10 by the 'super-cool' code generator 
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
 
/////////////////////////////////////////////////////////////////////////
//
// Function : Otyper
//
// Return the value of register OTYPER
//
// Notes : Register Otyper at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OTYPER( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_OTYPER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_OTYPER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_OTYPER() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : OT0
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT0_MASK) | ((val << OT0_START_BIT) & OT0_MASK )); \
   } 

#define ENABLE_OT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT0_MASK ); \
   }

#define DISABLE_OT0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT0_MASK ); \
   } 

#define READ_OT0() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT0_MASK)  >> OT0_START_BIT)

#define WHEN_OT0_HIGH() \
     if ( READ_OT0() )


#define UNLESS_OT0_HIGH() \
     if (! READ_OT0() )


#define WAIT_OT0_LOW() \
    while ( READ_OT0() );


#define WAIT_OT0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT0() && (--___t___ > 0)); }


#define WAIT_OT0_HIGH() \
    while (! READ_OT0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT1
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT1_MASK) | ((val << OT1_START_BIT) & OT1_MASK )); \
   } 

#define ENABLE_OT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT1_MASK ); \
   }

#define DISABLE_OT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT1_MASK ); \
   } 

#define READ_OT1() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT1_MASK)  >> OT1_START_BIT)

#define WHEN_OT1_HIGH() \
     if ( READ_OT1() )


#define UNLESS_OT1_HIGH() \
     if (! READ_OT1() )


#define WAIT_OT1_LOW() \
    while ( READ_OT1() );


#define WAIT_OT1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT1() && (--___t___ > 0)); }


#define WAIT_OT1_HIGH() \
    while (! READ_OT1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT2
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT2_MASK) | ((val << OT2_START_BIT) & OT2_MASK )); \
   } 

#define ENABLE_OT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT2_MASK ); \
   }

#define DISABLE_OT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT2_MASK ); \
   } 

#define READ_OT2() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT2_MASK)  >> OT2_START_BIT)

#define WHEN_OT2_HIGH() \
     if ( READ_OT2() )


#define UNLESS_OT2_HIGH() \
     if (! READ_OT2() )


#define WAIT_OT2_LOW() \
    while ( READ_OT2() );


#define WAIT_OT2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT2() && (--___t___ > 0)); }


#define WAIT_OT2_HIGH() \
    while (! READ_OT2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT3
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT3_MASK) | ((val << OT3_START_BIT) & OT3_MASK )); \
   } 

#define ENABLE_OT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT3_MASK ); \
   }

#define DISABLE_OT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT3_MASK ); \
   } 

#define READ_OT3() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT3_MASK)  >> OT3_START_BIT)

#define WHEN_OT3_HIGH() \
     if ( READ_OT3() )


#define UNLESS_OT3_HIGH() \
     if (! READ_OT3() )


#define WAIT_OT3_LOW() \
    while ( READ_OT3() );


#define WAIT_OT3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT3() && (--___t___ > 0)); }


#define WAIT_OT3_HIGH() \
    while (! READ_OT3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT4
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT4_MASK) | ((val << OT4_START_BIT) & OT4_MASK )); \
   } 

#define ENABLE_OT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT4_MASK ); \
   }

#define DISABLE_OT4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT4_MASK ); \
   } 

#define READ_OT4() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT4_MASK)  >> OT4_START_BIT)

#define WHEN_OT4_HIGH() \
     if ( READ_OT4() )


#define UNLESS_OT4_HIGH() \
     if (! READ_OT4() )


#define WAIT_OT4_LOW() \
    while ( READ_OT4() );


#define WAIT_OT4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT4() && (--___t___ > 0)); }


#define WAIT_OT4_HIGH() \
    while (! READ_OT4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT5
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT5_MASK) | ((val << OT5_START_BIT) & OT5_MASK )); \
   } 

#define ENABLE_OT5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT5_MASK ); \
   }

#define DISABLE_OT5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT5_MASK ); \
   } 

#define READ_OT5() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT5_MASK)  >> OT5_START_BIT)

#define WHEN_OT5_HIGH() \
     if ( READ_OT5() )


#define UNLESS_OT5_HIGH() \
     if (! READ_OT5() )


#define WAIT_OT5_LOW() \
    while ( READ_OT5() );


#define WAIT_OT5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT5() && (--___t___ > 0)); }


#define WAIT_OT5_HIGH() \
    while (! READ_OT5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT6
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT6_MASK) | ((val << OT6_START_BIT) & OT6_MASK )); \
   } 

#define ENABLE_OT6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT6_MASK ); \
   }

#define DISABLE_OT6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT6_MASK ); \
   } 

#define READ_OT6() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT6_MASK)  >> OT6_START_BIT)

#define WHEN_OT6_HIGH() \
     if ( READ_OT6() )


#define UNLESS_OT6_HIGH() \
     if (! READ_OT6() )


#define WAIT_OT6_LOW() \
    while ( READ_OT6() );


#define WAIT_OT6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT6() && (--___t___ > 0)); }


#define WAIT_OT6_HIGH() \
    while (! READ_OT6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT7
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT7_MASK) | ((val << OT7_START_BIT) & OT7_MASK )); \
   } 

#define ENABLE_OT7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT7_MASK ); \
   }

#define DISABLE_OT7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT7_MASK ); \
   } 

#define READ_OT7() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT7_MASK)  >> OT7_START_BIT)

#define WHEN_OT7_HIGH() \
     if ( READ_OT7() )


#define UNLESS_OT7_HIGH() \
     if (! READ_OT7() )


#define WAIT_OT7_LOW() \
    while ( READ_OT7() );


#define WAIT_OT7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT7() && (--___t___ > 0)); }


#define WAIT_OT7_HIGH() \
    while (! READ_OT7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT8
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT8_MASK) | ((val << OT8_START_BIT) & OT8_MASK )); \
   } 

#define ENABLE_OT8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT8_MASK ); \
   }

#define DISABLE_OT8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT8_MASK ); \
   } 

#define READ_OT8() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT8_MASK)  >> OT8_START_BIT)

#define WHEN_OT8_HIGH() \
     if ( READ_OT8() )


#define UNLESS_OT8_HIGH() \
     if (! READ_OT8() )


#define WAIT_OT8_LOW() \
    while ( READ_OT8() );


#define WAIT_OT8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT8() && (--___t___ > 0)); }


#define WAIT_OT8_HIGH() \
    while (! READ_OT8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT9
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT9_MASK) | ((val << OT9_START_BIT) & OT9_MASK )); \
   } 

#define ENABLE_OT9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT9_MASK ); \
   }

#define DISABLE_OT9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT9_MASK ); \
   } 

#define READ_OT9() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT9_MASK)  >> OT9_START_BIT)

#define WHEN_OT9_HIGH() \
     if ( READ_OT9() )


#define UNLESS_OT9_HIGH() \
     if (! READ_OT9() )


#define WAIT_OT9_LOW() \
    while ( READ_OT9() );


#define WAIT_OT9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT9() && (--___t___ > 0)); }


#define WAIT_OT9_HIGH() \
    while (! READ_OT9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT10
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT10_MASK) | ((val << OT10_START_BIT) & OT10_MASK )); \
   } 

#define ENABLE_OT10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT10_MASK ); \
   }

#define DISABLE_OT10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT10_MASK ); \
   } 

#define READ_OT10() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT10_MASK)  >> OT10_START_BIT)

#define WHEN_OT10_HIGH() \
     if ( READ_OT10() )


#define UNLESS_OT10_HIGH() \
     if (! READ_OT10() )


#define WAIT_OT10_LOW() \
    while ( READ_OT10() );


#define WAIT_OT10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT10() && (--___t___ > 0)); }


#define WAIT_OT10_HIGH() \
    while (! READ_OT10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT11
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT11_MASK) | ((val << OT11_START_BIT) & OT11_MASK )); \
   } 

#define ENABLE_OT11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT11_MASK ); \
   }

#define DISABLE_OT11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT11_MASK ); \
   } 

#define READ_OT11() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT11_MASK)  >> OT11_START_BIT)

#define WHEN_OT11_HIGH() \
     if ( READ_OT11() )


#define UNLESS_OT11_HIGH() \
     if (! READ_OT11() )


#define WAIT_OT11_LOW() \
    while ( READ_OT11() );


#define WAIT_OT11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT11() && (--___t___ > 0)); }


#define WAIT_OT11_HIGH() \
    while (! READ_OT11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT12
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT12_MASK) | ((val << OT12_START_BIT) & OT12_MASK )); \
   } 

#define ENABLE_OT12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT12_MASK ); \
   }

#define DISABLE_OT12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT12_MASK ); \
   } 

#define READ_OT12() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT12_MASK)  >> OT12_START_BIT)

#define WHEN_OT12_HIGH() \
     if ( READ_OT12() )


#define UNLESS_OT12_HIGH() \
     if (! READ_OT12() )


#define WAIT_OT12_LOW() \
    while ( READ_OT12() );


#define WAIT_OT12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT12() && (--___t___ > 0)); }


#define WAIT_OT12_HIGH() \
    while (! READ_OT12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT13
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT13_MASK) | ((val << OT13_START_BIT) & OT13_MASK )); \
   } 

#define ENABLE_OT13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT13_MASK ); \
   }

#define DISABLE_OT13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT13_MASK ); \
   } 

#define READ_OT13() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT13_MASK)  >> OT13_START_BIT)

#define WHEN_OT13_HIGH() \
     if ( READ_OT13() )


#define UNLESS_OT13_HIGH() \
     if (! READ_OT13() )


#define WAIT_OT13_LOW() \
    while ( READ_OT13() );


#define WAIT_OT13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT13() && (--___t___ > 0)); }


#define WAIT_OT13_HIGH() \
    while (! READ_OT13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT14
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT14_MASK) | ((val << OT14_START_BIT) & OT14_MASK )); \
   } 

#define ENABLE_OT14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT14_MASK ); \
   }

#define DISABLE_OT14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT14_MASK ); \
   } 

#define READ_OT14() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT14_MASK)  >> OT14_START_BIT)

#define WHEN_OT14_HIGH() \
     if ( READ_OT14() )


#define UNLESS_OT14_HIGH() \
     if (! READ_OT14() )


#define WAIT_OT14_LOW() \
    while ( READ_OT14() );


#define WAIT_OT14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT14() && (--___t___ > 0)); }


#define WAIT_OT14_HIGH() \
    while (! READ_OT14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OT15
//
// Return the value of register Otyper
//
// Notes : Port x configuration bits (y = 0..15) 
//        (OTYPER) at the offset 0x40020C00, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OT15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OT15_MASK) | ((val << OT15_START_BIT) & OT15_MASK )); \
   } 

#define ENABLE_OT15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  OT15_MASK ); \
   }

#define DISABLE_OT15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~OT15_MASK ); \
   } 

#define READ_OT15() \
   ((READ_REGISTER_ULONG(0x40020C00) & OT15_MASK)  >> OT15_START_BIT)

#define WHEN_OT15_HIGH() \
     if ( READ_OT15() )


#define UNLESS_OT15_HIGH() \
     if (! READ_OT15() )


#define WAIT_OT15_LOW() \
    while ( READ_OT15() );


#define WAIT_OT15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OT15() && (--___t___ > 0)); }


#define WAIT_OT15_HIGH() \
    while (! READ_OT15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Idr
//
// Return the value of register IDR
//
// Notes : Register Idr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_IDR() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : IDR0
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR0_MASK) | ((val << IDR0_START_BIT) & IDR0_MASK )); \
   } 

#define ENABLE_IDR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR0_MASK ); \
   }

#define DISABLE_IDR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR0_MASK ); \
   } 

#define READ_IDR0() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR0_MASK)  >> IDR0_START_BIT)

#define WHEN_IDR0_HIGH() \
     if ( READ_IDR0() )


#define UNLESS_IDR0_HIGH() \
     if (! READ_IDR0() )


#define WAIT_IDR0_LOW() \
    while ( READ_IDR0() );


#define WAIT_IDR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR0() && (--___t___ > 0)); }


#define WAIT_IDR0_HIGH() \
    while (! READ_IDR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR1
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR1_MASK) | ((val << IDR1_START_BIT) & IDR1_MASK )); \
   } 

#define ENABLE_IDR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR1_MASK ); \
   }

#define DISABLE_IDR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR1_MASK ); \
   } 

#define READ_IDR1() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR1_MASK)  >> IDR1_START_BIT)

#define WHEN_IDR1_HIGH() \
     if ( READ_IDR1() )


#define UNLESS_IDR1_HIGH() \
     if (! READ_IDR1() )


#define WAIT_IDR1_LOW() \
    while ( READ_IDR1() );


#define WAIT_IDR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR1() && (--___t___ > 0)); }


#define WAIT_IDR1_HIGH() \
    while (! READ_IDR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR2
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR2_MASK) | ((val << IDR2_START_BIT) & IDR2_MASK )); \
   } 

#define ENABLE_IDR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR2_MASK ); \
   }

#define DISABLE_IDR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR2_MASK ); \
   } 

#define READ_IDR2() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR2_MASK)  >> IDR2_START_BIT)

#define WHEN_IDR2_HIGH() \
     if ( READ_IDR2() )


#define UNLESS_IDR2_HIGH() \
     if (! READ_IDR2() )


#define WAIT_IDR2_LOW() \
    while ( READ_IDR2() );


#define WAIT_IDR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR2() && (--___t___ > 0)); }


#define WAIT_IDR2_HIGH() \
    while (! READ_IDR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR3
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR3_MASK) | ((val << IDR3_START_BIT) & IDR3_MASK )); \
   } 

#define ENABLE_IDR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR3_MASK ); \
   }

#define DISABLE_IDR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR3_MASK ); \
   } 

#define READ_IDR3() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR3_MASK)  >> IDR3_START_BIT)

#define WHEN_IDR3_HIGH() \
     if ( READ_IDR3() )


#define UNLESS_IDR3_HIGH() \
     if (! READ_IDR3() )


#define WAIT_IDR3_LOW() \
    while ( READ_IDR3() );


#define WAIT_IDR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR3() && (--___t___ > 0)); }


#define WAIT_IDR3_HIGH() \
    while (! READ_IDR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR4
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR4_MASK) | ((val << IDR4_START_BIT) & IDR4_MASK )); \
   } 

#define ENABLE_IDR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR4_MASK ); \
   }

#define DISABLE_IDR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR4_MASK ); \
   } 

#define READ_IDR4() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR4_MASK)  >> IDR4_START_BIT)

#define WHEN_IDR4_HIGH() \
     if ( READ_IDR4() )


#define UNLESS_IDR4_HIGH() \
     if (! READ_IDR4() )


#define WAIT_IDR4_LOW() \
    while ( READ_IDR4() );


#define WAIT_IDR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR4() && (--___t___ > 0)); }


#define WAIT_IDR4_HIGH() \
    while (! READ_IDR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR5
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR5_MASK) | ((val << IDR5_START_BIT) & IDR5_MASK )); \
   } 

#define ENABLE_IDR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR5_MASK ); \
   }

#define DISABLE_IDR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR5_MASK ); \
   } 

#define READ_IDR5() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR5_MASK)  >> IDR5_START_BIT)

#define WHEN_IDR5_HIGH() \
     if ( READ_IDR5() )


#define UNLESS_IDR5_HIGH() \
     if (! READ_IDR5() )


#define WAIT_IDR5_LOW() \
    while ( READ_IDR5() );


#define WAIT_IDR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR5() && (--___t___ > 0)); }


#define WAIT_IDR5_HIGH() \
    while (! READ_IDR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR6
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR6_MASK) | ((val << IDR6_START_BIT) & IDR6_MASK )); \
   } 

#define ENABLE_IDR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR6_MASK ); \
   }

#define DISABLE_IDR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR6_MASK ); \
   } 

#define READ_IDR6() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR6_MASK)  >> IDR6_START_BIT)

#define WHEN_IDR6_HIGH() \
     if ( READ_IDR6() )


#define UNLESS_IDR6_HIGH() \
     if (! READ_IDR6() )


#define WAIT_IDR6_LOW() \
    while ( READ_IDR6() );


#define WAIT_IDR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR6() && (--___t___ > 0)); }


#define WAIT_IDR6_HIGH() \
    while (! READ_IDR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR7
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR7_MASK) | ((val << IDR7_START_BIT) & IDR7_MASK )); \
   } 

#define ENABLE_IDR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR7_MASK ); \
   }

#define DISABLE_IDR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR7_MASK ); \
   } 

#define READ_IDR7() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR7_MASK)  >> IDR7_START_BIT)

#define WHEN_IDR7_HIGH() \
     if ( READ_IDR7() )


#define UNLESS_IDR7_HIGH() \
     if (! READ_IDR7() )


#define WAIT_IDR7_LOW() \
    while ( READ_IDR7() );


#define WAIT_IDR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR7() && (--___t___ > 0)); }


#define WAIT_IDR7_HIGH() \
    while (! READ_IDR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR8
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR8_MASK) | ((val << IDR8_START_BIT) & IDR8_MASK )); \
   } 

#define ENABLE_IDR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR8_MASK ); \
   }

#define DISABLE_IDR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR8_MASK ); \
   } 

#define READ_IDR8() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR8_MASK)  >> IDR8_START_BIT)

#define WHEN_IDR8_HIGH() \
     if ( READ_IDR8() )


#define UNLESS_IDR8_HIGH() \
     if (! READ_IDR8() )


#define WAIT_IDR8_LOW() \
    while ( READ_IDR8() );


#define WAIT_IDR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR8() && (--___t___ > 0)); }


#define WAIT_IDR8_HIGH() \
    while (! READ_IDR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR9
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR9_MASK) | ((val << IDR9_START_BIT) & IDR9_MASK )); \
   } 

#define ENABLE_IDR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR9_MASK ); \
   }

#define DISABLE_IDR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR9_MASK ); \
   } 

#define READ_IDR9() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR9_MASK)  >> IDR9_START_BIT)

#define WHEN_IDR9_HIGH() \
     if ( READ_IDR9() )


#define UNLESS_IDR9_HIGH() \
     if (! READ_IDR9() )


#define WAIT_IDR9_LOW() \
    while ( READ_IDR9() );


#define WAIT_IDR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR9() && (--___t___ > 0)); }


#define WAIT_IDR9_HIGH() \
    while (! READ_IDR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR10
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR10_MASK) | ((val << IDR10_START_BIT) & IDR10_MASK )); \
   } 

#define ENABLE_IDR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR10_MASK ); \
   }

#define DISABLE_IDR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR10_MASK ); \
   } 

#define READ_IDR10() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR10_MASK)  >> IDR10_START_BIT)

#define WHEN_IDR10_HIGH() \
     if ( READ_IDR10() )


#define UNLESS_IDR10_HIGH() \
     if (! READ_IDR10() )


#define WAIT_IDR10_LOW() \
    while ( READ_IDR10() );


#define WAIT_IDR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR10() && (--___t___ > 0)); }


#define WAIT_IDR10_HIGH() \
    while (! READ_IDR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR11
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR11_MASK) | ((val << IDR11_START_BIT) & IDR11_MASK )); \
   } 

#define ENABLE_IDR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR11_MASK ); \
   }

#define DISABLE_IDR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR11_MASK ); \
   } 

#define READ_IDR11() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR11_MASK)  >> IDR11_START_BIT)

#define WHEN_IDR11_HIGH() \
     if ( READ_IDR11() )


#define UNLESS_IDR11_HIGH() \
     if (! READ_IDR11() )


#define WAIT_IDR11_LOW() \
    while ( READ_IDR11() );


#define WAIT_IDR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR11() && (--___t___ > 0)); }


#define WAIT_IDR11_HIGH() \
    while (! READ_IDR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR12
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR12_MASK) | ((val << IDR12_START_BIT) & IDR12_MASK )); \
   } 

#define ENABLE_IDR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR12_MASK ); \
   }

#define DISABLE_IDR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR12_MASK ); \
   } 

#define READ_IDR12() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR12_MASK)  >> IDR12_START_BIT)

#define WHEN_IDR12_HIGH() \
     if ( READ_IDR12() )


#define UNLESS_IDR12_HIGH() \
     if (! READ_IDR12() )


#define WAIT_IDR12_LOW() \
    while ( READ_IDR12() );


#define WAIT_IDR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR12() && (--___t___ > 0)); }


#define WAIT_IDR12_HIGH() \
    while (! READ_IDR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR13
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR13_MASK) | ((val << IDR13_START_BIT) & IDR13_MASK )); \
   } 

#define ENABLE_IDR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR13_MASK ); \
   }

#define DISABLE_IDR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR13_MASK ); \
   } 

#define READ_IDR13() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR13_MASK)  >> IDR13_START_BIT)

#define WHEN_IDR13_HIGH() \
     if ( READ_IDR13() )


#define UNLESS_IDR13_HIGH() \
     if (! READ_IDR13() )


#define WAIT_IDR13_LOW() \
    while ( READ_IDR13() );


#define WAIT_IDR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR13() && (--___t___ > 0)); }


#define WAIT_IDR13_HIGH() \
    while (! READ_IDR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR14
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR14_MASK) | ((val << IDR14_START_BIT) & IDR14_MASK )); \
   } 

#define ENABLE_IDR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR14_MASK ); \
   }

#define DISABLE_IDR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR14_MASK ); \
   } 

#define READ_IDR14() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR14_MASK)  >> IDR14_START_BIT)

#define WHEN_IDR14_HIGH() \
     if ( READ_IDR14() )


#define UNLESS_IDR14_HIGH() \
     if (! READ_IDR14() )


#define WAIT_IDR14_LOW() \
    while ( READ_IDR14() );


#define WAIT_IDR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR14() && (--___t___ > 0)); }


#define WAIT_IDR14_HIGH() \
    while (! READ_IDR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : IDR15
//
// Return the value of register Idr
//
// Notes : Port input data (y = 0..15) 
//        (IDR) at the offset 0x40020C00, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_IDR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ IDR15_MASK) | ((val << IDR15_START_BIT) & IDR15_MASK )); \
   } 

#define ENABLE_IDR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  IDR15_MASK ); \
   }

#define DISABLE_IDR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~IDR15_MASK ); \
   } 

#define READ_IDR15() \
   ((READ_REGISTER_ULONG(0x40020C00) & IDR15_MASK)  >> IDR15_START_BIT)

#define WHEN_IDR15_HIGH() \
     if ( READ_IDR15() )


#define UNLESS_IDR15_HIGH() \
     if (! READ_IDR15() )


#define WAIT_IDR15_LOW() \
    while ( READ_IDR15() );


#define WAIT_IDR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_IDR15() && (--___t___ > 0)); }


#define WAIT_IDR15_HIGH() \
    while (! READ_IDR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Odr
//
// Return the value of register ODR
//
// Notes : Register Odr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ODR( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_ODR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_ODR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_ODR() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : ODR0
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR0_MASK) | ((val << ODR0_START_BIT) & ODR0_MASK )); \
   } 

#define ENABLE_ODR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR0_MASK ); \
   }

#define DISABLE_ODR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR0_MASK ); \
   } 

#define READ_ODR0() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR0_MASK)  >> ODR0_START_BIT)

#define WHEN_ODR0_HIGH() \
     if ( READ_ODR0() )


#define UNLESS_ODR0_HIGH() \
     if (! READ_ODR0() )


#define WAIT_ODR0_LOW() \
    while ( READ_ODR0() );


#define WAIT_ODR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR0() && (--___t___ > 0)); }


#define WAIT_ODR0_HIGH() \
    while (! READ_ODR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR1
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR1_MASK) | ((val << ODR1_START_BIT) & ODR1_MASK )); \
   } 

#define ENABLE_ODR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR1_MASK ); \
   }

#define DISABLE_ODR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR1_MASK ); \
   } 

#define READ_ODR1() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR1_MASK)  >> ODR1_START_BIT)

#define WHEN_ODR1_HIGH() \
     if ( READ_ODR1() )


#define UNLESS_ODR1_HIGH() \
     if (! READ_ODR1() )


#define WAIT_ODR1_LOW() \
    while ( READ_ODR1() );


#define WAIT_ODR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR1() && (--___t___ > 0)); }


#define WAIT_ODR1_HIGH() \
    while (! READ_ODR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR2
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR2_MASK) | ((val << ODR2_START_BIT) & ODR2_MASK )); \
   } 

#define ENABLE_ODR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR2_MASK ); \
   }

#define DISABLE_ODR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR2_MASK ); \
   } 

#define READ_ODR2() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR2_MASK)  >> ODR2_START_BIT)

#define WHEN_ODR2_HIGH() \
     if ( READ_ODR2() )


#define UNLESS_ODR2_HIGH() \
     if (! READ_ODR2() )


#define WAIT_ODR2_LOW() \
    while ( READ_ODR2() );


#define WAIT_ODR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR2() && (--___t___ > 0)); }


#define WAIT_ODR2_HIGH() \
    while (! READ_ODR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR3
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR3_MASK) | ((val << ODR3_START_BIT) & ODR3_MASK )); \
   } 

#define ENABLE_ODR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR3_MASK ); \
   }

#define DISABLE_ODR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR3_MASK ); \
   } 

#define READ_ODR3() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR3_MASK)  >> ODR3_START_BIT)

#define WHEN_ODR3_HIGH() \
     if ( READ_ODR3() )


#define UNLESS_ODR3_HIGH() \
     if (! READ_ODR3() )


#define WAIT_ODR3_LOW() \
    while ( READ_ODR3() );


#define WAIT_ODR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR3() && (--___t___ > 0)); }


#define WAIT_ODR3_HIGH() \
    while (! READ_ODR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR4
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR4_MASK) | ((val << ODR4_START_BIT) & ODR4_MASK )); \
   } 

#define ENABLE_ODR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR4_MASK ); \
   }

#define DISABLE_ODR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR4_MASK ); \
   } 

#define READ_ODR4() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR4_MASK)  >> ODR4_START_BIT)

#define WHEN_ODR4_HIGH() \
     if ( READ_ODR4() )


#define UNLESS_ODR4_HIGH() \
     if (! READ_ODR4() )


#define WAIT_ODR4_LOW() \
    while ( READ_ODR4() );


#define WAIT_ODR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR4() && (--___t___ > 0)); }


#define WAIT_ODR4_HIGH() \
    while (! READ_ODR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR5
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR5_MASK) | ((val << ODR5_START_BIT) & ODR5_MASK )); \
   } 

#define ENABLE_ODR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR5_MASK ); \
   }

#define DISABLE_ODR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR5_MASK ); \
   } 

#define READ_ODR5() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR5_MASK)  >> ODR5_START_BIT)

#define WHEN_ODR5_HIGH() \
     if ( READ_ODR5() )


#define UNLESS_ODR5_HIGH() \
     if (! READ_ODR5() )


#define WAIT_ODR5_LOW() \
    while ( READ_ODR5() );


#define WAIT_ODR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR5() && (--___t___ > 0)); }


#define WAIT_ODR5_HIGH() \
    while (! READ_ODR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR6
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR6_MASK) | ((val << ODR6_START_BIT) & ODR6_MASK )); \
   } 

#define ENABLE_ODR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR6_MASK ); \
   }

#define DISABLE_ODR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR6_MASK ); \
   } 

#define READ_ODR6() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR6_MASK)  >> ODR6_START_BIT)

#define WHEN_ODR6_HIGH() \
     if ( READ_ODR6() )


#define UNLESS_ODR6_HIGH() \
     if (! READ_ODR6() )


#define WAIT_ODR6_LOW() \
    while ( READ_ODR6() );


#define WAIT_ODR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR6() && (--___t___ > 0)); }


#define WAIT_ODR6_HIGH() \
    while (! READ_ODR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR7
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR7_MASK) | ((val << ODR7_START_BIT) & ODR7_MASK )); \
   } 

#define ENABLE_ODR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR7_MASK ); \
   }

#define DISABLE_ODR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR7_MASK ); \
   } 

#define READ_ODR7() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR7_MASK)  >> ODR7_START_BIT)

#define WHEN_ODR7_HIGH() \
     if ( READ_ODR7() )


#define UNLESS_ODR7_HIGH() \
     if (! READ_ODR7() )


#define WAIT_ODR7_LOW() \
    while ( READ_ODR7() );


#define WAIT_ODR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR7() && (--___t___ > 0)); }


#define WAIT_ODR7_HIGH() \
    while (! READ_ODR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR8
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR8_MASK) | ((val << ODR8_START_BIT) & ODR8_MASK )); \
   } 

#define ENABLE_ODR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR8_MASK ); \
   }

#define DISABLE_ODR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR8_MASK ); \
   } 

#define READ_ODR8() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR8_MASK)  >> ODR8_START_BIT)

#define WHEN_ODR8_HIGH() \
     if ( READ_ODR8() )


#define UNLESS_ODR8_HIGH() \
     if (! READ_ODR8() )


#define WAIT_ODR8_LOW() \
    while ( READ_ODR8() );


#define WAIT_ODR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR8() && (--___t___ > 0)); }


#define WAIT_ODR8_HIGH() \
    while (! READ_ODR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR9
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR9_MASK) | ((val << ODR9_START_BIT) & ODR9_MASK )); \
   } 

#define ENABLE_ODR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR9_MASK ); \
   }

#define DISABLE_ODR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR9_MASK ); \
   } 

#define READ_ODR9() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR9_MASK)  >> ODR9_START_BIT)

#define WHEN_ODR9_HIGH() \
     if ( READ_ODR9() )


#define UNLESS_ODR9_HIGH() \
     if (! READ_ODR9() )


#define WAIT_ODR9_LOW() \
    while ( READ_ODR9() );


#define WAIT_ODR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR9() && (--___t___ > 0)); }


#define WAIT_ODR9_HIGH() \
    while (! READ_ODR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR10
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR10_MASK) | ((val << ODR10_START_BIT) & ODR10_MASK )); \
   } 

#define ENABLE_ODR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR10_MASK ); \
   }

#define DISABLE_ODR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR10_MASK ); \
   } 

#define READ_ODR10() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR10_MASK)  >> ODR10_START_BIT)

#define WHEN_ODR10_HIGH() \
     if ( READ_ODR10() )


#define UNLESS_ODR10_HIGH() \
     if (! READ_ODR10() )


#define WAIT_ODR10_LOW() \
    while ( READ_ODR10() );


#define WAIT_ODR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR10() && (--___t___ > 0)); }


#define WAIT_ODR10_HIGH() \
    while (! READ_ODR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR11
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR11_MASK) | ((val << ODR11_START_BIT) & ODR11_MASK )); \
   } 

#define ENABLE_ODR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR11_MASK ); \
   }

#define DISABLE_ODR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR11_MASK ); \
   } 

#define READ_ODR11() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR11_MASK)  >> ODR11_START_BIT)

#define WHEN_ODR11_HIGH() \
     if ( READ_ODR11() )


#define UNLESS_ODR11_HIGH() \
     if (! READ_ODR11() )


#define WAIT_ODR11_LOW() \
    while ( READ_ODR11() );


#define WAIT_ODR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR11() && (--___t___ > 0)); }


#define WAIT_ODR11_HIGH() \
    while (! READ_ODR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR12
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR12_MASK) | ((val << ODR12_START_BIT) & ODR12_MASK )); \
   } 

#define ENABLE_ODR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR12_MASK ); \
   }

#define DISABLE_ODR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR12_MASK ); \
   } 

#define READ_ODR12() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR12_MASK)  >> ODR12_START_BIT)

#define WHEN_ODR12_HIGH() \
     if ( READ_ODR12() )


#define UNLESS_ODR12_HIGH() \
     if (! READ_ODR12() )


#define WAIT_ODR12_LOW() \
    while ( READ_ODR12() );


#define WAIT_ODR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR12() && (--___t___ > 0)); }


#define WAIT_ODR12_HIGH() \
    while (! READ_ODR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR13
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR13_MASK) | ((val << ODR13_START_BIT) & ODR13_MASK )); \
   } 

#define ENABLE_ODR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR13_MASK ); \
   }

#define DISABLE_ODR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR13_MASK ); \
   } 

#define READ_ODR13() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR13_MASK)  >> ODR13_START_BIT)

#define WHEN_ODR13_HIGH() \
     if ( READ_ODR13() )


#define UNLESS_ODR13_HIGH() \
     if (! READ_ODR13() )


#define WAIT_ODR13_LOW() \
    while ( READ_ODR13() );


#define WAIT_ODR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR13() && (--___t___ > 0)); }


#define WAIT_ODR13_HIGH() \
    while (! READ_ODR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR14
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR14_MASK) | ((val << ODR14_START_BIT) & ODR14_MASK )); \
   } 

#define ENABLE_ODR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR14_MASK ); \
   }

#define DISABLE_ODR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR14_MASK ); \
   } 

#define READ_ODR14() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR14_MASK)  >> ODR14_START_BIT)

#define WHEN_ODR14_HIGH() \
     if ( READ_ODR14() )


#define UNLESS_ODR14_HIGH() \
     if (! READ_ODR14() )


#define WAIT_ODR14_LOW() \
    while ( READ_ODR14() );


#define WAIT_ODR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR14() && (--___t___ > 0)); }


#define WAIT_ODR14_HIGH() \
    while (! READ_ODR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ODR15
//
// Return the value of register Odr
//
// Notes : Port output data (y = 0..15) 
//        (ODR) at the offset 0x40020C00, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ODR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ ODR15_MASK) | ((val << ODR15_START_BIT) & ODR15_MASK )); \
   } 

#define ENABLE_ODR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  ODR15_MASK ); \
   }

#define DISABLE_ODR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~ODR15_MASK ); \
   } 

#define READ_ODR15() \
   ((READ_REGISTER_ULONG(0x40020C00) & ODR15_MASK)  >> ODR15_START_BIT)

#define WHEN_ODR15_HIGH() \
     if ( READ_ODR15() )


#define UNLESS_ODR15_HIGH() \
     if (! READ_ODR15() )


#define WAIT_ODR15_LOW() \
    while ( READ_ODR15() );


#define WAIT_ODR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ODR15() && (--___t___ > 0)); }


#define WAIT_ODR15_HIGH() \
    while (! READ_ODR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Afrl
//
// Return the value of register AFRL
//
// Notes : Register Afrl at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFRL( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_AFRL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_AFRL(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_AFRL() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL0
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 0:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL0() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL0_MASK)  >> AFRL0_START_BIT)

#define WRITE_AFRL0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL0_MASK) | ((val << AFRL0_START_BIT) & AFRL0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL1
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 4:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL1() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL1_MASK)  >> AFRL1_START_BIT)

#define WRITE_AFRL1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL1_MASK) | ((val << AFRL1_START_BIT) & AFRL1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL2
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL2() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL2_MASK)  >> AFRL2_START_BIT)

#define WRITE_AFRL2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL2_MASK) | ((val << AFRL2_START_BIT) & AFRL2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL3
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 12:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL3() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL3_MASK)  >> AFRL3_START_BIT)

#define WRITE_AFRL3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL3_MASK) | ((val << AFRL3_START_BIT) & AFRL3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL4
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 16:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL4() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL4_MASK)  >> AFRL4_START_BIT)

#define WRITE_AFRL4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL4_MASK) | ((val << AFRL4_START_BIT) & AFRL4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL5
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 20:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL5() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL5_MASK)  >> AFRL5_START_BIT)

#define WRITE_AFRL5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL5_MASK) | ((val << AFRL5_START_BIT) & AFRL5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL6
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 24:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL6() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL6_MASK)  >> AFRL6_START_BIT)

#define WRITE_AFRL6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL6_MASK) | ((val << AFRL6_START_BIT) & AFRL6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRL7
//
// Return the value of register Afrl
//
// Notes : Alternate function selection for port x bit y (y = 0..7) 
//        (AFRL) at the offset 0x40020C00, Bits 28:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRL7() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRL7_MASK)  >> AFRL7_START_BIT)

#define WRITE_AFRL7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRL7_MASK) | ((val << AFRL7_START_BIT) & AFRL7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : GpiobOspeedr
//
// Return the value of register GPIOB_OSPEEDR
//
// Notes : Register GpiobOspeedr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GPIOB_OSPEEDR( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_GPIOB_OSPEEDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_GPIOB_OSPEEDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_GPIOB_OSPEEDR() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR0
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR0() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR0_MASK)  >> OSPEEDR0_START_BIT)

#define WRITE_OSPEEDR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR0_MASK) | ((val << OSPEEDR0_START_BIT) & OSPEEDR0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR1
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR1() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR1_MASK)  >> OSPEEDR1_START_BIT)

#define WRITE_OSPEEDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR1_MASK) | ((val << OSPEEDR1_START_BIT) & OSPEEDR1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR2
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR2() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR2_MASK)  >> OSPEEDR2_START_BIT)

#define WRITE_OSPEEDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR2_MASK) | ((val << OSPEEDR2_START_BIT) & OSPEEDR2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR3
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 6:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR3() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR3_MASK)  >> OSPEEDR3_START_BIT)

#define WRITE_OSPEEDR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR3_MASK) | ((val << OSPEEDR3_START_BIT) & OSPEEDR3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR4
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR4() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR4_MASK)  >> OSPEEDR4_START_BIT)

#define WRITE_OSPEEDR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR4_MASK) | ((val << OSPEEDR4_START_BIT) & OSPEEDR4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR5
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 10:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR5() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR5_MASK)  >> OSPEEDR5_START_BIT)

#define WRITE_OSPEEDR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR5_MASK) | ((val << OSPEEDR5_START_BIT) & OSPEEDR5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR6
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 12:13
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR6() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR6_MASK)  >> OSPEEDR6_START_BIT)

#define WRITE_OSPEEDR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR6_MASK) | ((val << OSPEEDR6_START_BIT) & OSPEEDR6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR7
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 14:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR7() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR7_MASK)  >> OSPEEDR7_START_BIT)

#define WRITE_OSPEEDR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR7_MASK) | ((val << OSPEEDR7_START_BIT) & OSPEEDR7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR8
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 16:17
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR8() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR8_MASK)  >> OSPEEDR8_START_BIT)

#define WRITE_OSPEEDR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR8_MASK) | ((val << OSPEEDR8_START_BIT) & OSPEEDR8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR9
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 18:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR9() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR9_MASK)  >> OSPEEDR9_START_BIT)

#define WRITE_OSPEEDR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR9_MASK) | ((val << OSPEEDR9_START_BIT) & OSPEEDR9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR10
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 20:21
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR10() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR10_MASK)  >> OSPEEDR10_START_BIT)

#define WRITE_OSPEEDR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR10_MASK) | ((val << OSPEEDR10_START_BIT) & OSPEEDR10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR11
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 22:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR11() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR11_MASK)  >> OSPEEDR11_START_BIT)

#define WRITE_OSPEEDR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR11_MASK) | ((val << OSPEEDR11_START_BIT) & OSPEEDR11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR12
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 24:25
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR12() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR12_MASK)  >> OSPEEDR12_START_BIT)

#define WRITE_OSPEEDR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR12_MASK) | ((val << OSPEEDR12_START_BIT) & OSPEEDR12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR13
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 26:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR13() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR13_MASK)  >> OSPEEDR13_START_BIT)

#define WRITE_OSPEEDR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR13_MASK) | ((val << OSPEEDR13_START_BIT) & OSPEEDR13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR14
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 28:29
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR14() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR14_MASK)  >> OSPEEDR14_START_BIT)

#define WRITE_OSPEEDR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR14_MASK) | ((val << OSPEEDR14_START_BIT) & OSPEEDR14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OSPEEDR15
//
// Return the value of register GpiobOspeedr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (GPIOB_OSPEEDR) at the offset 0x40020C00, Bits 30:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_OSPEEDR15() \
   ((READ_REGISTER_ULONG(0x40020C00) & OSPEEDR15_MASK)  >> OSPEEDR15_START_BIT)

#define WRITE_OSPEEDR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ OSPEEDR15_MASK) | ((val << OSPEEDR15_START_BIT) & OSPEEDR15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bsrr
//
// Return the value of register BSRR
//
// Notes : Register Bsrr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BSRR( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : BS0
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS0_MASK) | ((val << BS0_START_BIT) & BS0_MASK )); \
   } 

#define ENABLE_BS0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS0_MASK ); \
   }

#define DISABLE_BS0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS0_MASK ); \
   } 

#define READ_BS0() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS0_MASK)  >> BS0_START_BIT)

#define WHEN_BS0_HIGH() \
     if ( READ_BS0() )


#define UNLESS_BS0_HIGH() \
     if (! READ_BS0() )


#define WAIT_BS0_LOW() \
    while ( READ_BS0() );


#define WAIT_BS0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS0() && (--___t___ > 0)); }


#define WAIT_BS0_HIGH() \
    while (! READ_BS0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS1
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS1_MASK) | ((val << BS1_START_BIT) & BS1_MASK )); \
   } 

#define ENABLE_BS1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS1_MASK ); \
   }

#define DISABLE_BS1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS1_MASK ); \
   } 

#define READ_BS1() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS1_MASK)  >> BS1_START_BIT)

#define WHEN_BS1_HIGH() \
     if ( READ_BS1() )


#define UNLESS_BS1_HIGH() \
     if (! READ_BS1() )


#define WAIT_BS1_LOW() \
    while ( READ_BS1() );


#define WAIT_BS1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS1() && (--___t___ > 0)); }


#define WAIT_BS1_HIGH() \
    while (! READ_BS1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS2
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS2_MASK) | ((val << BS2_START_BIT) & BS2_MASK )); \
   } 

#define ENABLE_BS2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS2_MASK ); \
   }

#define DISABLE_BS2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS2_MASK ); \
   } 

#define READ_BS2() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS2_MASK)  >> BS2_START_BIT)

#define WHEN_BS2_HIGH() \
     if ( READ_BS2() )


#define UNLESS_BS2_HIGH() \
     if (! READ_BS2() )


#define WAIT_BS2_LOW() \
    while ( READ_BS2() );


#define WAIT_BS2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS2() && (--___t___ > 0)); }


#define WAIT_BS2_HIGH() \
    while (! READ_BS2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS3
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS3_MASK) | ((val << BS3_START_BIT) & BS3_MASK )); \
   } 

#define ENABLE_BS3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS3_MASK ); \
   }

#define DISABLE_BS3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS3_MASK ); \
   } 

#define READ_BS3() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS3_MASK)  >> BS3_START_BIT)

#define WHEN_BS3_HIGH() \
     if ( READ_BS3() )


#define UNLESS_BS3_HIGH() \
     if (! READ_BS3() )


#define WAIT_BS3_LOW() \
    while ( READ_BS3() );


#define WAIT_BS3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS3() && (--___t___ > 0)); }


#define WAIT_BS3_HIGH() \
    while (! READ_BS3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS4
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS4_MASK) | ((val << BS4_START_BIT) & BS4_MASK )); \
   } 

#define ENABLE_BS4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS4_MASK ); \
   }

#define DISABLE_BS4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS4_MASK ); \
   } 

#define READ_BS4() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS4_MASK)  >> BS4_START_BIT)

#define WHEN_BS4_HIGH() \
     if ( READ_BS4() )


#define UNLESS_BS4_HIGH() \
     if (! READ_BS4() )


#define WAIT_BS4_LOW() \
    while ( READ_BS4() );


#define WAIT_BS4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS4() && (--___t___ > 0)); }


#define WAIT_BS4_HIGH() \
    while (! READ_BS4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS5
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS5_MASK) | ((val << BS5_START_BIT) & BS5_MASK )); \
   } 

#define ENABLE_BS5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS5_MASK ); \
   }

#define DISABLE_BS5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS5_MASK ); \
   } 

#define READ_BS5() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS5_MASK)  >> BS5_START_BIT)

#define WHEN_BS5_HIGH() \
     if ( READ_BS5() )


#define UNLESS_BS5_HIGH() \
     if (! READ_BS5() )


#define WAIT_BS5_LOW() \
    while ( READ_BS5() );


#define WAIT_BS5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS5() && (--___t___ > 0)); }


#define WAIT_BS5_HIGH() \
    while (! READ_BS5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS6
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS6_MASK) | ((val << BS6_START_BIT) & BS6_MASK )); \
   } 

#define ENABLE_BS6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS6_MASK ); \
   }

#define DISABLE_BS6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS6_MASK ); \
   } 

#define READ_BS6() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS6_MASK)  >> BS6_START_BIT)

#define WHEN_BS6_HIGH() \
     if ( READ_BS6() )


#define UNLESS_BS6_HIGH() \
     if (! READ_BS6() )


#define WAIT_BS6_LOW() \
    while ( READ_BS6() );


#define WAIT_BS6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS6() && (--___t___ > 0)); }


#define WAIT_BS6_HIGH() \
    while (! READ_BS6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS7
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS7_MASK) | ((val << BS7_START_BIT) & BS7_MASK )); \
   } 

#define ENABLE_BS7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS7_MASK ); \
   }

#define DISABLE_BS7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS7_MASK ); \
   } 

#define READ_BS7() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS7_MASK)  >> BS7_START_BIT)

#define WHEN_BS7_HIGH() \
     if ( READ_BS7() )


#define UNLESS_BS7_HIGH() \
     if (! READ_BS7() )


#define WAIT_BS7_LOW() \
    while ( READ_BS7() );


#define WAIT_BS7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS7() && (--___t___ > 0)); }


#define WAIT_BS7_HIGH() \
    while (! READ_BS7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS8
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS8_MASK) | ((val << BS8_START_BIT) & BS8_MASK )); \
   } 

#define ENABLE_BS8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS8_MASK ); \
   }

#define DISABLE_BS8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS8_MASK ); \
   } 

#define READ_BS8() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS8_MASK)  >> BS8_START_BIT)

#define WHEN_BS8_HIGH() \
     if ( READ_BS8() )


#define UNLESS_BS8_HIGH() \
     if (! READ_BS8() )


#define WAIT_BS8_LOW() \
    while ( READ_BS8() );


#define WAIT_BS8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS8() && (--___t___ > 0)); }


#define WAIT_BS8_HIGH() \
    while (! READ_BS8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS9
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS9_MASK) | ((val << BS9_START_BIT) & BS9_MASK )); \
   } 

#define ENABLE_BS9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS9_MASK ); \
   }

#define DISABLE_BS9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS9_MASK ); \
   } 

#define READ_BS9() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS9_MASK)  >> BS9_START_BIT)

#define WHEN_BS9_HIGH() \
     if ( READ_BS9() )


#define UNLESS_BS9_HIGH() \
     if (! READ_BS9() )


#define WAIT_BS9_LOW() \
    while ( READ_BS9() );


#define WAIT_BS9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS9() && (--___t___ > 0)); }


#define WAIT_BS9_HIGH() \
    while (! READ_BS9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS10
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS10_MASK) | ((val << BS10_START_BIT) & BS10_MASK )); \
   } 

#define ENABLE_BS10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS10_MASK ); \
   }

#define DISABLE_BS10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS10_MASK ); \
   } 

#define READ_BS10() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS10_MASK)  >> BS10_START_BIT)

#define WHEN_BS10_HIGH() \
     if ( READ_BS10() )


#define UNLESS_BS10_HIGH() \
     if (! READ_BS10() )


#define WAIT_BS10_LOW() \
    while ( READ_BS10() );


#define WAIT_BS10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS10() && (--___t___ > 0)); }


#define WAIT_BS10_HIGH() \
    while (! READ_BS10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS11
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS11_MASK) | ((val << BS11_START_BIT) & BS11_MASK )); \
   } 

#define ENABLE_BS11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS11_MASK ); \
   }

#define DISABLE_BS11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS11_MASK ); \
   } 

#define READ_BS11() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS11_MASK)  >> BS11_START_BIT)

#define WHEN_BS11_HIGH() \
     if ( READ_BS11() )


#define UNLESS_BS11_HIGH() \
     if (! READ_BS11() )


#define WAIT_BS11_LOW() \
    while ( READ_BS11() );


#define WAIT_BS11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS11() && (--___t___ > 0)); }


#define WAIT_BS11_HIGH() \
    while (! READ_BS11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS12
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS12_MASK) | ((val << BS12_START_BIT) & BS12_MASK )); \
   } 

#define ENABLE_BS12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS12_MASK ); \
   }

#define DISABLE_BS12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS12_MASK ); \
   } 

#define READ_BS12() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS12_MASK)  >> BS12_START_BIT)

#define WHEN_BS12_HIGH() \
     if ( READ_BS12() )


#define UNLESS_BS12_HIGH() \
     if (! READ_BS12() )


#define WAIT_BS12_LOW() \
    while ( READ_BS12() );


#define WAIT_BS12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS12() && (--___t___ > 0)); }


#define WAIT_BS12_HIGH() \
    while (! READ_BS12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS13
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS13_MASK) | ((val << BS13_START_BIT) & BS13_MASK )); \
   } 

#define ENABLE_BS13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS13_MASK ); \
   }

#define DISABLE_BS13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS13_MASK ); \
   } 

#define READ_BS13() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS13_MASK)  >> BS13_START_BIT)

#define WHEN_BS13_HIGH() \
     if ( READ_BS13() )


#define UNLESS_BS13_HIGH() \
     if (! READ_BS13() )


#define WAIT_BS13_LOW() \
    while ( READ_BS13() );


#define WAIT_BS13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS13() && (--___t___ > 0)); }


#define WAIT_BS13_HIGH() \
    while (! READ_BS13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS14
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS14_MASK) | ((val << BS14_START_BIT) & BS14_MASK )); \
   } 

#define ENABLE_BS14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS14_MASK ); \
   }

#define DISABLE_BS14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS14_MASK ); \
   } 

#define READ_BS14() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS14_MASK)  >> BS14_START_BIT)

#define WHEN_BS14_HIGH() \
     if ( READ_BS14() )


#define UNLESS_BS14_HIGH() \
     if (! READ_BS14() )


#define WAIT_BS14_LOW() \
    while ( READ_BS14() );


#define WAIT_BS14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS14() && (--___t___ > 0)); }


#define WAIT_BS14_HIGH() \
    while (! READ_BS14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BS15
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BS15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BS15_MASK) | ((val << BS15_START_BIT) & BS15_MASK )); \
   } 

#define ENABLE_BS15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BS15_MASK ); \
   }

#define DISABLE_BS15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BS15_MASK ); \
   } 

#define READ_BS15() \
   ((READ_REGISTER_ULONG(0x40020C00) & BS15_MASK)  >> BS15_START_BIT)

#define WHEN_BS15_HIGH() \
     if ( READ_BS15() )


#define UNLESS_BS15_HIGH() \
     if (! READ_BS15() )


#define WAIT_BS15_LOW() \
    while ( READ_BS15() );


#define WAIT_BS15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BS15() && (--___t___ > 0)); }


#define WAIT_BS15_HIGH() \
    while (! READ_BS15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR0
//
// Return the value of register Bsrr
//
// Notes : Port x set bit y (y= 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR0_MASK) | ((val << BR0_START_BIT) & BR0_MASK )); \
   } 

#define ENABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR0_MASK ); \
   }

#define DISABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR0_MASK ); \
   } 

#define READ_BR0() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR0_MASK)  >> BR0_START_BIT)

#define WHEN_BR0_HIGH() \
     if ( READ_BR0() )


#define UNLESS_BR0_HIGH() \
     if (! READ_BR0() )


#define WAIT_BR0_LOW() \
    while ( READ_BR0() );


#define WAIT_BR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR0() && (--___t___ > 0)); }


#define WAIT_BR0_HIGH() \
    while (! READ_BR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR1
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR1_MASK) | ((val << BR1_START_BIT) & BR1_MASK )); \
   } 

#define ENABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR1_MASK ); \
   }

#define DISABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR1_MASK ); \
   } 

#define READ_BR1() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR1_MASK)  >> BR1_START_BIT)

#define WHEN_BR1_HIGH() \
     if ( READ_BR1() )


#define UNLESS_BR1_HIGH() \
     if (! READ_BR1() )


#define WAIT_BR1_LOW() \
    while ( READ_BR1() );


#define WAIT_BR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR1() && (--___t___ > 0)); }


#define WAIT_BR1_HIGH() \
    while (! READ_BR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR2
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR2_MASK) | ((val << BR2_START_BIT) & BR2_MASK )); \
   } 

#define ENABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR2_MASK ); \
   }

#define DISABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR2_MASK ); \
   } 

#define READ_BR2() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR2_MASK)  >> BR2_START_BIT)

#define WHEN_BR2_HIGH() \
     if ( READ_BR2() )


#define UNLESS_BR2_HIGH() \
     if (! READ_BR2() )


#define WAIT_BR2_LOW() \
    while ( READ_BR2() );


#define WAIT_BR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR2() && (--___t___ > 0)); }


#define WAIT_BR2_HIGH() \
    while (! READ_BR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR3
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR3_MASK) | ((val << BR3_START_BIT) & BR3_MASK )); \
   } 

#define ENABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR3_MASK ); \
   }

#define DISABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR3_MASK ); \
   } 

#define READ_BR3() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR3_MASK)  >> BR3_START_BIT)

#define WHEN_BR3_HIGH() \
     if ( READ_BR3() )


#define UNLESS_BR3_HIGH() \
     if (! READ_BR3() )


#define WAIT_BR3_LOW() \
    while ( READ_BR3() );


#define WAIT_BR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR3() && (--___t___ > 0)); }


#define WAIT_BR3_HIGH() \
    while (! READ_BR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR4
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 20:20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR4_MASK) | ((val << BR4_START_BIT) & BR4_MASK )); \
   } 

#define ENABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR4_MASK ); \
   }

#define DISABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR4_MASK ); \
   } 

#define READ_BR4() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR4_MASK)  >> BR4_START_BIT)

#define WHEN_BR4_HIGH() \
     if ( READ_BR4() )


#define UNLESS_BR4_HIGH() \
     if (! READ_BR4() )


#define WAIT_BR4_LOW() \
    while ( READ_BR4() );


#define WAIT_BR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR4() && (--___t___ > 0)); }


#define WAIT_BR4_HIGH() \
    while (! READ_BR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR5
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 21:21
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR5_MASK) | ((val << BR5_START_BIT) & BR5_MASK )); \
   } 

#define ENABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR5_MASK ); \
   }

#define DISABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR5_MASK ); \
   } 

#define READ_BR5() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR5_MASK)  >> BR5_START_BIT)

#define WHEN_BR5_HIGH() \
     if ( READ_BR5() )


#define UNLESS_BR5_HIGH() \
     if (! READ_BR5() )


#define WAIT_BR5_LOW() \
    while ( READ_BR5() );


#define WAIT_BR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR5() && (--___t___ > 0)); }


#define WAIT_BR5_HIGH() \
    while (! READ_BR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR6
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR6_MASK) | ((val << BR6_START_BIT) & BR6_MASK )); \
   } 

#define ENABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR6_MASK ); \
   }

#define DISABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR6_MASK ); \
   } 

#define READ_BR6() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR6_MASK)  >> BR6_START_BIT)

#define WHEN_BR6_HIGH() \
     if ( READ_BR6() )


#define UNLESS_BR6_HIGH() \
     if (! READ_BR6() )


#define WAIT_BR6_LOW() \
    while ( READ_BR6() );


#define WAIT_BR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR6() && (--___t___ > 0)); }


#define WAIT_BR6_HIGH() \
    while (! READ_BR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR7
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR7_MASK) | ((val << BR7_START_BIT) & BR7_MASK )); \
   } 

#define ENABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR7_MASK ); \
   }

#define DISABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR7_MASK ); \
   } 

#define READ_BR7() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR7_MASK)  >> BR7_START_BIT)

#define WHEN_BR7_HIGH() \
     if ( READ_BR7() )


#define UNLESS_BR7_HIGH() \
     if (! READ_BR7() )


#define WAIT_BR7_LOW() \
    while ( READ_BR7() );


#define WAIT_BR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR7() && (--___t___ > 0)); }


#define WAIT_BR7_HIGH() \
    while (! READ_BR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR8
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 24:24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR8_MASK) | ((val << BR8_START_BIT) & BR8_MASK )); \
   } 

#define ENABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR8_MASK ); \
   }

#define DISABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR8_MASK ); \
   } 

#define READ_BR8() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR8_MASK)  >> BR8_START_BIT)

#define WHEN_BR8_HIGH() \
     if ( READ_BR8() )


#define UNLESS_BR8_HIGH() \
     if (! READ_BR8() )


#define WAIT_BR8_LOW() \
    while ( READ_BR8() );


#define WAIT_BR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR8() && (--___t___ > 0)); }


#define WAIT_BR8_HIGH() \
    while (! READ_BR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR9
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 25:25
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR9_MASK) | ((val << BR9_START_BIT) & BR9_MASK )); \
   } 

#define ENABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR9_MASK ); \
   }

#define DISABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR9_MASK ); \
   } 

#define READ_BR9() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR9_MASK)  >> BR9_START_BIT)

#define WHEN_BR9_HIGH() \
     if ( READ_BR9() )


#define UNLESS_BR9_HIGH() \
     if (! READ_BR9() )


#define WAIT_BR9_LOW() \
    while ( READ_BR9() );


#define WAIT_BR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR9() && (--___t___ > 0)); }


#define WAIT_BR9_HIGH() \
    while (! READ_BR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR10
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 26:26
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR10_MASK) | ((val << BR10_START_BIT) & BR10_MASK )); \
   } 

#define ENABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR10_MASK ); \
   }

#define DISABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR10_MASK ); \
   } 

#define READ_BR10() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR10_MASK)  >> BR10_START_BIT)

#define WHEN_BR10_HIGH() \
     if ( READ_BR10() )


#define UNLESS_BR10_HIGH() \
     if (! READ_BR10() )


#define WAIT_BR10_LOW() \
    while ( READ_BR10() );


#define WAIT_BR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR10() && (--___t___ > 0)); }


#define WAIT_BR10_HIGH() \
    while (! READ_BR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR11
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 27:27
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR11_MASK) | ((val << BR11_START_BIT) & BR11_MASK )); \
   } 

#define ENABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR11_MASK ); \
   }

#define DISABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR11_MASK ); \
   } 

#define READ_BR11() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR11_MASK)  >> BR11_START_BIT)

#define WHEN_BR11_HIGH() \
     if ( READ_BR11() )


#define UNLESS_BR11_HIGH() \
     if (! READ_BR11() )


#define WAIT_BR11_LOW() \
    while ( READ_BR11() );


#define WAIT_BR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR11() && (--___t___ > 0)); }


#define WAIT_BR11_HIGH() \
    while (! READ_BR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR12
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 28:28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR12_MASK) | ((val << BR12_START_BIT) & BR12_MASK )); \
   } 

#define ENABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR12_MASK ); \
   }

#define DISABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR12_MASK ); \
   } 

#define READ_BR12() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR12_MASK)  >> BR12_START_BIT)

#define WHEN_BR12_HIGH() \
     if ( READ_BR12() )


#define UNLESS_BR12_HIGH() \
     if (! READ_BR12() )


#define WAIT_BR12_LOW() \
    while ( READ_BR12() );


#define WAIT_BR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR12() && (--___t___ > 0)); }


#define WAIT_BR12_HIGH() \
    while (! READ_BR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR13
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 29:29
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR13_MASK) | ((val << BR13_START_BIT) & BR13_MASK )); \
   } 

#define ENABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR13_MASK ); \
   }

#define DISABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR13_MASK ); \
   } 

#define READ_BR13() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR13_MASK)  >> BR13_START_BIT)

#define WHEN_BR13_HIGH() \
     if ( READ_BR13() )


#define UNLESS_BR13_HIGH() \
     if (! READ_BR13() )


#define WAIT_BR13_LOW() \
    while ( READ_BR13() );


#define WAIT_BR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR13() && (--___t___ > 0)); }


#define WAIT_BR13_HIGH() \
    while (! READ_BR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR14
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 30:30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR14_MASK) | ((val << BR14_START_BIT) & BR14_MASK )); \
   } 

#define ENABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR14_MASK ); \
   }

#define DISABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR14_MASK ); \
   } 

#define READ_BR14() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR14_MASK)  >> BR14_START_BIT)

#define WHEN_BR14_HIGH() \
     if ( READ_BR14() )


#define UNLESS_BR14_HIGH() \
     if (! READ_BR14() )


#define WAIT_BR14_LOW() \
    while ( READ_BR14() );


#define WAIT_BR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR14() && (--___t___ > 0)); }


#define WAIT_BR14_HIGH() \
    while (! READ_BR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR15
//
// Return the value of register Bsrr
//
// Notes : Port x reset bit y (y = 0..15) 
//        (BSRR) at the offset 0x40020C00, Bits 31:31
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR15_MASK) | ((val << BR15_START_BIT) & BR15_MASK )); \
   } 

#define ENABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR15_MASK ); \
   }

#define DISABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR15_MASK ); \
   } 

#define READ_BR15() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR15_MASK)  >> BR15_START_BIT)

#define WHEN_BR15_HIGH() \
     if ( READ_BR15() )


#define UNLESS_BR15_HIGH() \
     if (! READ_BR15() )


#define WAIT_BR15_LOW() \
    while ( READ_BR15() );


#define WAIT_BR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR15() && (--___t___ > 0)); }


#define WAIT_BR15_HIGH() \
    while (! READ_BR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Brr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : BR15
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 15 
//        (BRR) at the offset 0x40020C00, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR15_MASK) | ((val << BR15_START_BIT) & BR15_MASK )); \
   } 

#define ENABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR15_MASK ); \
   }

#define DISABLE_BR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR15_MASK ); \
   } 

#define READ_BR15() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR15_MASK)  >> BR15_START_BIT)

#define WHEN_BR15_HIGH() \
     if ( READ_BR15() )


#define UNLESS_BR15_HIGH() \
     if (! READ_BR15() )


#define WAIT_BR15_LOW() \
    while ( READ_BR15() );


#define WAIT_BR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR15() && (--___t___ > 0)); }


#define WAIT_BR15_HIGH() \
    while (! READ_BR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR14
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 14 
//        (BRR) at the offset 0x40020C00, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR14_MASK) | ((val << BR14_START_BIT) & BR14_MASK )); \
   } 

#define ENABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR14_MASK ); \
   }

#define DISABLE_BR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR14_MASK ); \
   } 

#define READ_BR14() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR14_MASK)  >> BR14_START_BIT)

#define WHEN_BR14_HIGH() \
     if ( READ_BR14() )


#define UNLESS_BR14_HIGH() \
     if (! READ_BR14() )


#define WAIT_BR14_LOW() \
    while ( READ_BR14() );


#define WAIT_BR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR14() && (--___t___ > 0)); }


#define WAIT_BR14_HIGH() \
    while (! READ_BR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR13
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 13 
//        (BRR) at the offset 0x40020C00, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR13_MASK) | ((val << BR13_START_BIT) & BR13_MASK )); \
   } 

#define ENABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR13_MASK ); \
   }

#define DISABLE_BR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR13_MASK ); \
   } 

#define READ_BR13() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR13_MASK)  >> BR13_START_BIT)

#define WHEN_BR13_HIGH() \
     if ( READ_BR13() )


#define UNLESS_BR13_HIGH() \
     if (! READ_BR13() )


#define WAIT_BR13_LOW() \
    while ( READ_BR13() );


#define WAIT_BR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR13() && (--___t___ > 0)); }


#define WAIT_BR13_HIGH() \
    while (! READ_BR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR12
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 12 
//        (BRR) at the offset 0x40020C00, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR12_MASK) | ((val << BR12_START_BIT) & BR12_MASK )); \
   } 

#define ENABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR12_MASK ); \
   }

#define DISABLE_BR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR12_MASK ); \
   } 

#define READ_BR12() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR12_MASK)  >> BR12_START_BIT)

#define WHEN_BR12_HIGH() \
     if ( READ_BR12() )


#define UNLESS_BR12_HIGH() \
     if (! READ_BR12() )


#define WAIT_BR12_LOW() \
    while ( READ_BR12() );


#define WAIT_BR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR12() && (--___t___ > 0)); }


#define WAIT_BR12_HIGH() \
    while (! READ_BR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR11
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 11 
//        (BRR) at the offset 0x40020C00, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR11_MASK) | ((val << BR11_START_BIT) & BR11_MASK )); \
   } 

#define ENABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR11_MASK ); \
   }

#define DISABLE_BR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR11_MASK ); \
   } 

#define READ_BR11() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR11_MASK)  >> BR11_START_BIT)

#define WHEN_BR11_HIGH() \
     if ( READ_BR11() )


#define UNLESS_BR11_HIGH() \
     if (! READ_BR11() )


#define WAIT_BR11_LOW() \
    while ( READ_BR11() );


#define WAIT_BR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR11() && (--___t___ > 0)); }


#define WAIT_BR11_HIGH() \
    while (! READ_BR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR10
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 10 
//        (BRR) at the offset 0x40020C00, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR10_MASK) | ((val << BR10_START_BIT) & BR10_MASK )); \
   } 

#define ENABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR10_MASK ); \
   }

#define DISABLE_BR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR10_MASK ); \
   } 

#define READ_BR10() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR10_MASK)  >> BR10_START_BIT)

#define WHEN_BR10_HIGH() \
     if ( READ_BR10() )


#define UNLESS_BR10_HIGH() \
     if (! READ_BR10() )


#define WAIT_BR10_LOW() \
    while ( READ_BR10() );


#define WAIT_BR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR10() && (--___t___ > 0)); }


#define WAIT_BR10_HIGH() \
    while (! READ_BR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR9
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 9 
//        (BRR) at the offset 0x40020C00, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR9_MASK) | ((val << BR9_START_BIT) & BR9_MASK )); \
   } 

#define ENABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR9_MASK ); \
   }

#define DISABLE_BR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR9_MASK ); \
   } 

#define READ_BR9() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR9_MASK)  >> BR9_START_BIT)

#define WHEN_BR9_HIGH() \
     if ( READ_BR9() )


#define UNLESS_BR9_HIGH() \
     if (! READ_BR9() )


#define WAIT_BR9_LOW() \
    while ( READ_BR9() );


#define WAIT_BR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR9() && (--___t___ > 0)); }


#define WAIT_BR9_HIGH() \
    while (! READ_BR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR8
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 8 
//        (BRR) at the offset 0x40020C00, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR8_MASK) | ((val << BR8_START_BIT) & BR8_MASK )); \
   } 

#define ENABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR8_MASK ); \
   }

#define DISABLE_BR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR8_MASK ); \
   } 

#define READ_BR8() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR8_MASK)  >> BR8_START_BIT)

#define WHEN_BR8_HIGH() \
     if ( READ_BR8() )


#define UNLESS_BR8_HIGH() \
     if (! READ_BR8() )


#define WAIT_BR8_LOW() \
    while ( READ_BR8() );


#define WAIT_BR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR8() && (--___t___ > 0)); }


#define WAIT_BR8_HIGH() \
    while (! READ_BR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR7
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 7 
//        (BRR) at the offset 0x40020C00, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR7_MASK) | ((val << BR7_START_BIT) & BR7_MASK )); \
   } 

#define ENABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR7_MASK ); \
   }

#define DISABLE_BR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR7_MASK ); \
   } 

#define READ_BR7() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR7_MASK)  >> BR7_START_BIT)

#define WHEN_BR7_HIGH() \
     if ( READ_BR7() )


#define UNLESS_BR7_HIGH() \
     if (! READ_BR7() )


#define WAIT_BR7_LOW() \
    while ( READ_BR7() );


#define WAIT_BR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR7() && (--___t___ > 0)); }


#define WAIT_BR7_HIGH() \
    while (! READ_BR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR6
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 6 
//        (BRR) at the offset 0x40020C00, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR6_MASK) | ((val << BR6_START_BIT) & BR6_MASK )); \
   } 

#define ENABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR6_MASK ); \
   }

#define DISABLE_BR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR6_MASK ); \
   } 

#define READ_BR6() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR6_MASK)  >> BR6_START_BIT)

#define WHEN_BR6_HIGH() \
     if ( READ_BR6() )


#define UNLESS_BR6_HIGH() \
     if (! READ_BR6() )


#define WAIT_BR6_LOW() \
    while ( READ_BR6() );


#define WAIT_BR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR6() && (--___t___ > 0)); }


#define WAIT_BR6_HIGH() \
    while (! READ_BR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR5
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 5 
//        (BRR) at the offset 0x40020C00, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR5_MASK) | ((val << BR5_START_BIT) & BR5_MASK )); \
   } 

#define ENABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR5_MASK ); \
   }

#define DISABLE_BR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR5_MASK ); \
   } 

#define READ_BR5() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR5_MASK)  >> BR5_START_BIT)

#define WHEN_BR5_HIGH() \
     if ( READ_BR5() )


#define UNLESS_BR5_HIGH() \
     if (! READ_BR5() )


#define WAIT_BR5_LOW() \
    while ( READ_BR5() );


#define WAIT_BR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR5() && (--___t___ > 0)); }


#define WAIT_BR5_HIGH() \
    while (! READ_BR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR4
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 4 
//        (BRR) at the offset 0x40020C00, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR4_MASK) | ((val << BR4_START_BIT) & BR4_MASK )); \
   } 

#define ENABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR4_MASK ); \
   }

#define DISABLE_BR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR4_MASK ); \
   } 

#define READ_BR4() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR4_MASK)  >> BR4_START_BIT)

#define WHEN_BR4_HIGH() \
     if ( READ_BR4() )


#define UNLESS_BR4_HIGH() \
     if (! READ_BR4() )


#define WAIT_BR4_LOW() \
    while ( READ_BR4() );


#define WAIT_BR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR4() && (--___t___ > 0)); }


#define WAIT_BR4_HIGH() \
    while (! READ_BR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR3
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 3 
//        (BRR) at the offset 0x40020C00, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR3_MASK) | ((val << BR3_START_BIT) & BR3_MASK )); \
   } 

#define ENABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR3_MASK ); \
   }

#define DISABLE_BR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR3_MASK ); \
   } 

#define READ_BR3() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR3_MASK)  >> BR3_START_BIT)

#define WHEN_BR3_HIGH() \
     if ( READ_BR3() )


#define UNLESS_BR3_HIGH() \
     if (! READ_BR3() )


#define WAIT_BR3_LOW() \
    while ( READ_BR3() );


#define WAIT_BR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR3() && (--___t___ > 0)); }


#define WAIT_BR3_HIGH() \
    while (! READ_BR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR2
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 2 
//        (BRR) at the offset 0x40020C00, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR2_MASK) | ((val << BR2_START_BIT) & BR2_MASK )); \
   } 

#define ENABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR2_MASK ); \
   }

#define DISABLE_BR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR2_MASK ); \
   } 

#define READ_BR2() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR2_MASK)  >> BR2_START_BIT)

#define WHEN_BR2_HIGH() \
     if ( READ_BR2() )


#define UNLESS_BR2_HIGH() \
     if (! READ_BR2() )


#define WAIT_BR2_LOW() \
    while ( READ_BR2() );


#define WAIT_BR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR2() && (--___t___ > 0)); }


#define WAIT_BR2_HIGH() \
    while (! READ_BR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR1
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 1 
//        (BRR) at the offset 0x40020C00, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR1_MASK) | ((val << BR1_START_BIT) & BR1_MASK )); \
   } 

#define ENABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR1_MASK ); \
   }

#define DISABLE_BR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR1_MASK ); \
   } 

#define READ_BR1() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR1_MASK)  >> BR1_START_BIT)

#define WHEN_BR1_HIGH() \
     if ( READ_BR1() )


#define UNLESS_BR1_HIGH() \
     if (! READ_BR1() )


#define WAIT_BR1_LOW() \
    while ( READ_BR1() );


#define WAIT_BR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR1() && (--___t___ > 0)); }


#define WAIT_BR1_HIGH() \
    while (! READ_BR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR0
//
// Return the value of register Brr
//
// Notes : Port D Reset bit 0 
//        (BRR) at the offset 0x40020C00, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ BR0_MASK) | ((val << BR0_START_BIT) & BR0_MASK )); \
   } 

#define ENABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  BR0_MASK ); \
   }

#define DISABLE_BR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~BR0_MASK ); \
   } 

#define READ_BR0() \
   ((READ_REGISTER_ULONG(0x40020C00) & BR0_MASK)  >> BR0_START_BIT)

#define WHEN_BR0_HIGH() \
     if ( READ_BR0() )


#define UNLESS_BR0_HIGH() \
     if (! READ_BR0() )


#define WAIT_BR0_LOW() \
    while ( READ_BR0() );


#define WAIT_BR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BR0() && (--___t___ > 0)); }


#define WAIT_BR0_HIGH() \
    while (! READ_BR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lckr
//
// Return the value of register LCKR
//
// Notes : Register Lckr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LCKR( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_LCKR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_LCKR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_LCKR() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : LCK0
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK0_MASK) | ((val << LCK0_START_BIT) & LCK0_MASK )); \
   } 

#define ENABLE_LCK0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK0_MASK ); \
   }

#define DISABLE_LCK0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK0_MASK ); \
   } 

#define READ_LCK0() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK0_MASK)  >> LCK0_START_BIT)

#define WHEN_LCK0_HIGH() \
     if ( READ_LCK0() )


#define UNLESS_LCK0_HIGH() \
     if (! READ_LCK0() )


#define WAIT_LCK0_LOW() \
    while ( READ_LCK0() );


#define WAIT_LCK0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK0() && (--___t___ > 0)); }


#define WAIT_LCK0_HIGH() \
    while (! READ_LCK0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK1
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK1_MASK) | ((val << LCK1_START_BIT) & LCK1_MASK )); \
   } 

#define ENABLE_LCK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK1_MASK ); \
   }

#define DISABLE_LCK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK1_MASK ); \
   } 

#define READ_LCK1() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK1_MASK)  >> LCK1_START_BIT)

#define WHEN_LCK1_HIGH() \
     if ( READ_LCK1() )


#define UNLESS_LCK1_HIGH() \
     if (! READ_LCK1() )


#define WAIT_LCK1_LOW() \
    while ( READ_LCK1() );


#define WAIT_LCK1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK1() && (--___t___ > 0)); }


#define WAIT_LCK1_HIGH() \
    while (! READ_LCK1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK2
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK2_MASK) | ((val << LCK2_START_BIT) & LCK2_MASK )); \
   } 

#define ENABLE_LCK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK2_MASK ); \
   }

#define DISABLE_LCK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK2_MASK ); \
   } 

#define READ_LCK2() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK2_MASK)  >> LCK2_START_BIT)

#define WHEN_LCK2_HIGH() \
     if ( READ_LCK2() )


#define UNLESS_LCK2_HIGH() \
     if (! READ_LCK2() )


#define WAIT_LCK2_LOW() \
    while ( READ_LCK2() );


#define WAIT_LCK2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK2() && (--___t___ > 0)); }


#define WAIT_LCK2_HIGH() \
    while (! READ_LCK2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK3
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK3_MASK) | ((val << LCK3_START_BIT) & LCK3_MASK )); \
   } 

#define ENABLE_LCK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK3_MASK ); \
   }

#define DISABLE_LCK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK3_MASK ); \
   } 

#define READ_LCK3() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK3_MASK)  >> LCK3_START_BIT)

#define WHEN_LCK3_HIGH() \
     if ( READ_LCK3() )


#define UNLESS_LCK3_HIGH() \
     if (! READ_LCK3() )


#define WAIT_LCK3_LOW() \
    while ( READ_LCK3() );


#define WAIT_LCK3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK3() && (--___t___ > 0)); }


#define WAIT_LCK3_HIGH() \
    while (! READ_LCK3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK4
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK4_MASK) | ((val << LCK4_START_BIT) & LCK4_MASK )); \
   } 

#define ENABLE_LCK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK4_MASK ); \
   }

#define DISABLE_LCK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK4_MASK ); \
   } 

#define READ_LCK4() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK4_MASK)  >> LCK4_START_BIT)

#define WHEN_LCK4_HIGH() \
     if ( READ_LCK4() )


#define UNLESS_LCK4_HIGH() \
     if (! READ_LCK4() )


#define WAIT_LCK4_LOW() \
    while ( READ_LCK4() );


#define WAIT_LCK4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK4() && (--___t___ > 0)); }


#define WAIT_LCK4_HIGH() \
    while (! READ_LCK4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK5
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK5_MASK) | ((val << LCK5_START_BIT) & LCK5_MASK )); \
   } 

#define ENABLE_LCK5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK5_MASK ); \
   }

#define DISABLE_LCK5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK5_MASK ); \
   } 

#define READ_LCK5() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK5_MASK)  >> LCK5_START_BIT)

#define WHEN_LCK5_HIGH() \
     if ( READ_LCK5() )


#define UNLESS_LCK5_HIGH() \
     if (! READ_LCK5() )


#define WAIT_LCK5_LOW() \
    while ( READ_LCK5() );


#define WAIT_LCK5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK5() && (--___t___ > 0)); }


#define WAIT_LCK5_HIGH() \
    while (! READ_LCK5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK6
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK6_MASK) | ((val << LCK6_START_BIT) & LCK6_MASK )); \
   } 

#define ENABLE_LCK6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK6_MASK ); \
   }

#define DISABLE_LCK6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK6_MASK ); \
   } 

#define READ_LCK6() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK6_MASK)  >> LCK6_START_BIT)

#define WHEN_LCK6_HIGH() \
     if ( READ_LCK6() )


#define UNLESS_LCK6_HIGH() \
     if (! READ_LCK6() )


#define WAIT_LCK6_LOW() \
    while ( READ_LCK6() );


#define WAIT_LCK6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK6() && (--___t___ > 0)); }


#define WAIT_LCK6_HIGH() \
    while (! READ_LCK6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK7
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK7_MASK) | ((val << LCK7_START_BIT) & LCK7_MASK )); \
   } 

#define ENABLE_LCK7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK7_MASK ); \
   }

#define DISABLE_LCK7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK7_MASK ); \
   } 

#define READ_LCK7() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK7_MASK)  >> LCK7_START_BIT)

#define WHEN_LCK7_HIGH() \
     if ( READ_LCK7() )


#define UNLESS_LCK7_HIGH() \
     if (! READ_LCK7() )


#define WAIT_LCK7_LOW() \
    while ( READ_LCK7() );


#define WAIT_LCK7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK7() && (--___t___ > 0)); }


#define WAIT_LCK7_HIGH() \
    while (! READ_LCK7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK8
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK8_MASK) | ((val << LCK8_START_BIT) & LCK8_MASK )); \
   } 

#define ENABLE_LCK8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK8_MASK ); \
   }

#define DISABLE_LCK8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK8_MASK ); \
   } 

#define READ_LCK8() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK8_MASK)  >> LCK8_START_BIT)

#define WHEN_LCK8_HIGH() \
     if ( READ_LCK8() )


#define UNLESS_LCK8_HIGH() \
     if (! READ_LCK8() )


#define WAIT_LCK8_LOW() \
    while ( READ_LCK8() );


#define WAIT_LCK8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK8() && (--___t___ > 0)); }


#define WAIT_LCK8_HIGH() \
    while (! READ_LCK8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK9
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK9_MASK) | ((val << LCK9_START_BIT) & LCK9_MASK )); \
   } 

#define ENABLE_LCK9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK9_MASK ); \
   }

#define DISABLE_LCK9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK9_MASK ); \
   } 

#define READ_LCK9() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK9_MASK)  >> LCK9_START_BIT)

#define WHEN_LCK9_HIGH() \
     if ( READ_LCK9() )


#define UNLESS_LCK9_HIGH() \
     if (! READ_LCK9() )


#define WAIT_LCK9_LOW() \
    while ( READ_LCK9() );


#define WAIT_LCK9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK9() && (--___t___ > 0)); }


#define WAIT_LCK9_HIGH() \
    while (! READ_LCK9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK10
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK10_MASK) | ((val << LCK10_START_BIT) & LCK10_MASK )); \
   } 

#define ENABLE_LCK10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK10_MASK ); \
   }

#define DISABLE_LCK10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK10_MASK ); \
   } 

#define READ_LCK10() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK10_MASK)  >> LCK10_START_BIT)

#define WHEN_LCK10_HIGH() \
     if ( READ_LCK10() )


#define UNLESS_LCK10_HIGH() \
     if (! READ_LCK10() )


#define WAIT_LCK10_LOW() \
    while ( READ_LCK10() );


#define WAIT_LCK10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK10() && (--___t___ > 0)); }


#define WAIT_LCK10_HIGH() \
    while (! READ_LCK10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK11
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK11_MASK) | ((val << LCK11_START_BIT) & LCK11_MASK )); \
   } 

#define ENABLE_LCK11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK11_MASK ); \
   }

#define DISABLE_LCK11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK11_MASK ); \
   } 

#define READ_LCK11() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK11_MASK)  >> LCK11_START_BIT)

#define WHEN_LCK11_HIGH() \
     if ( READ_LCK11() )


#define UNLESS_LCK11_HIGH() \
     if (! READ_LCK11() )


#define WAIT_LCK11_LOW() \
    while ( READ_LCK11() );


#define WAIT_LCK11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK11() && (--___t___ > 0)); }


#define WAIT_LCK11_HIGH() \
    while (! READ_LCK11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK12
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK12_MASK) | ((val << LCK12_START_BIT) & LCK12_MASK )); \
   } 

#define ENABLE_LCK12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK12_MASK ); \
   }

#define DISABLE_LCK12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK12_MASK ); \
   } 

#define READ_LCK12() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK12_MASK)  >> LCK12_START_BIT)

#define WHEN_LCK12_HIGH() \
     if ( READ_LCK12() )


#define UNLESS_LCK12_HIGH() \
     if (! READ_LCK12() )


#define WAIT_LCK12_LOW() \
    while ( READ_LCK12() );


#define WAIT_LCK12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK12() && (--___t___ > 0)); }


#define WAIT_LCK12_HIGH() \
    while (! READ_LCK12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK13
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK13_MASK) | ((val << LCK13_START_BIT) & LCK13_MASK )); \
   } 

#define ENABLE_LCK13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK13_MASK ); \
   }

#define DISABLE_LCK13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK13_MASK ); \
   } 

#define READ_LCK13() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK13_MASK)  >> LCK13_START_BIT)

#define WHEN_LCK13_HIGH() \
     if ( READ_LCK13() )


#define UNLESS_LCK13_HIGH() \
     if (! READ_LCK13() )


#define WAIT_LCK13_LOW() \
    while ( READ_LCK13() );


#define WAIT_LCK13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK13() && (--___t___ > 0)); }


#define WAIT_LCK13_HIGH() \
    while (! READ_LCK13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK14
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK14_MASK) | ((val << LCK14_START_BIT) & LCK14_MASK )); \
   } 

#define ENABLE_LCK14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK14_MASK ); \
   }

#define DISABLE_LCK14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK14_MASK ); \
   } 

#define READ_LCK14() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK14_MASK)  >> LCK14_START_BIT)

#define WHEN_LCK14_HIGH() \
     if ( READ_LCK14() )


#define UNLESS_LCK14_HIGH() \
     if (! READ_LCK14() )


#define WAIT_LCK14_LOW() \
    while ( READ_LCK14() );


#define WAIT_LCK14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK14() && (--___t___ > 0)); }


#define WAIT_LCK14_HIGH() \
    while (! READ_LCK14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCK15
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCK15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCK15_MASK) | ((val << LCK15_START_BIT) & LCK15_MASK )); \
   } 

#define ENABLE_LCK15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCK15_MASK ); \
   }

#define DISABLE_LCK15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCK15_MASK ); \
   } 

#define READ_LCK15() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCK15_MASK)  >> LCK15_START_BIT)

#define WHEN_LCK15_HIGH() \
     if ( READ_LCK15() )


#define UNLESS_LCK15_HIGH() \
     if (! READ_LCK15() )


#define WAIT_LCK15_LOW() \
    while ( READ_LCK15() );


#define WAIT_LCK15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCK15() && (--___t___ > 0)); }


#define WAIT_LCK15_HIGH() \
    while (! READ_LCK15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : LCKK
//
// Return the value of register Lckr
//
// Notes : Port x lock bit y (y= 0..15) 
//        (LCKR) at the offset 0x40020C00, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LCKK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ LCKK_MASK) | ((val << LCKK_START_BIT) & LCKK_MASK )); \
   } 

#define ENABLE_LCKK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  LCKK_MASK ); \
   }

#define DISABLE_LCKK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, val & ~LCKK_MASK ); \
   } 

#define READ_LCKK() \
   ((READ_REGISTER_ULONG(0x40020C00) & LCKK_MASK)  >> LCKK_START_BIT)

#define WHEN_LCKK_HIGH() \
     if ( READ_LCKK() )


#define UNLESS_LCKK_HIGH() \
     if (! READ_LCKK() )


#define WAIT_LCKK_LOW() \
    while ( READ_LCKK() );


#define WAIT_LCKK_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_LCKK() && (--___t___ > 0)); }


#define WAIT_LCKK_HIGH() \
    while (! READ_LCKK() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Moder
//
// Return the value of register MODER
//
// Notes : Register Moder at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_MODER( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_MODER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_MODER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_MODER() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER0
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER0() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER0_MASK)  >> MODER0_START_BIT)

#define WRITE_MODER0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER0_MASK) | ((val << MODER0_START_BIT) & MODER0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER1
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER1() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER1_MASK)  >> MODER1_START_BIT)

#define WRITE_MODER1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER1_MASK) | ((val << MODER1_START_BIT) & MODER1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER2
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER2() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER2_MASK)  >> MODER2_START_BIT)

#define WRITE_MODER2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER2_MASK) | ((val << MODER2_START_BIT) & MODER2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER3
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 6:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER3() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER3_MASK)  >> MODER3_START_BIT)

#define WRITE_MODER3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER3_MASK) | ((val << MODER3_START_BIT) & MODER3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER4
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER4() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER4_MASK)  >> MODER4_START_BIT)

#define WRITE_MODER4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER4_MASK) | ((val << MODER4_START_BIT) & MODER4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER5
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 10:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER5() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER5_MASK)  >> MODER5_START_BIT)

#define WRITE_MODER5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER5_MASK) | ((val << MODER5_START_BIT) & MODER5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER6
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 12:13
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER6() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER6_MASK)  >> MODER6_START_BIT)

#define WRITE_MODER6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER6_MASK) | ((val << MODER6_START_BIT) & MODER6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER7
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 14:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER7() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER7_MASK)  >> MODER7_START_BIT)

#define WRITE_MODER7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER7_MASK) | ((val << MODER7_START_BIT) & MODER7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER8
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 16:17
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER8() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER8_MASK)  >> MODER8_START_BIT)

#define WRITE_MODER8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER8_MASK) | ((val << MODER8_START_BIT) & MODER8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER9
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 18:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER9() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER9_MASK)  >> MODER9_START_BIT)

#define WRITE_MODER9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER9_MASK) | ((val << MODER9_START_BIT) & MODER9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER10
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 20:21
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER10() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER10_MASK)  >> MODER10_START_BIT)

#define WRITE_MODER10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER10_MASK) | ((val << MODER10_START_BIT) & MODER10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER11
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 22:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER11() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER11_MASK)  >> MODER11_START_BIT)

#define WRITE_MODER11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER11_MASK) | ((val << MODER11_START_BIT) & MODER11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER12
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 24:25
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER12() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER12_MASK)  >> MODER12_START_BIT)

#define WRITE_MODER12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER12_MASK) | ((val << MODER12_START_BIT) & MODER12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER13
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 26:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER13() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER13_MASK)  >> MODER13_START_BIT)

#define WRITE_MODER13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER13_MASK) | ((val << MODER13_START_BIT) & MODER13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER14
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 28:29
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER14() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER14_MASK)  >> MODER14_START_BIT)

#define WRITE_MODER14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER14_MASK) | ((val << MODER14_START_BIT) & MODER14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : MODER15
//
// Return the value of register Moder
//
// Notes : Port x configuration bits (y = 0..15) 
//        (MODER) at the offset 0x40020C00, Bits 30:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODER15() \
   ((READ_REGISTER_ULONG(0x40020C00) & MODER15_MASK)  >> MODER15_START_BIT)

#define WRITE_MODER15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ MODER15_MASK) | ((val << MODER15_START_BIT) & MODER15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pupdr
//
// Return the value of register PUPDR
//
// Notes : Register Pupdr at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PUPDR( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_PUPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_PUPDR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_PUPDR() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR0
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 0:1
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR0() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR0_MASK)  >> PUPDR0_START_BIT)

#define WRITE_PUPDR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR0_MASK) | ((val << PUPDR0_START_BIT) & PUPDR0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR1
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 2:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR1() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR1_MASK)  >> PUPDR1_START_BIT)

#define WRITE_PUPDR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR1_MASK) | ((val << PUPDR1_START_BIT) & PUPDR1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR2
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 4:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR2() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR2_MASK)  >> PUPDR2_START_BIT)

#define WRITE_PUPDR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR2_MASK) | ((val << PUPDR2_START_BIT) & PUPDR2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR3
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 6:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR3() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR3_MASK)  >> PUPDR3_START_BIT)

#define WRITE_PUPDR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR3_MASK) | ((val << PUPDR3_START_BIT) & PUPDR3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR4
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 8:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR4() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR4_MASK)  >> PUPDR4_START_BIT)

#define WRITE_PUPDR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR4_MASK) | ((val << PUPDR4_START_BIT) & PUPDR4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR5
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 10:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR5() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR5_MASK)  >> PUPDR5_START_BIT)

#define WRITE_PUPDR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR5_MASK) | ((val << PUPDR5_START_BIT) & PUPDR5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR6
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 12:13
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR6() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR6_MASK)  >> PUPDR6_START_BIT)

#define WRITE_PUPDR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR6_MASK) | ((val << PUPDR6_START_BIT) & PUPDR6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR7
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 14:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR7() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR7_MASK)  >> PUPDR7_START_BIT)

#define WRITE_PUPDR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR7_MASK) | ((val << PUPDR7_START_BIT) & PUPDR7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR8
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 16:17
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR8() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR8_MASK)  >> PUPDR8_START_BIT)

#define WRITE_PUPDR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR8_MASK) | ((val << PUPDR8_START_BIT) & PUPDR8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR9
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 18:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR9() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR9_MASK)  >> PUPDR9_START_BIT)

#define WRITE_PUPDR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR9_MASK) | ((val << PUPDR9_START_BIT) & PUPDR9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR10
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 20:21
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR10() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR10_MASK)  >> PUPDR10_START_BIT)

#define WRITE_PUPDR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR10_MASK) | ((val << PUPDR10_START_BIT) & PUPDR10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR11
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 22:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR11() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR11_MASK)  >> PUPDR11_START_BIT)

#define WRITE_PUPDR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR11_MASK) | ((val << PUPDR11_START_BIT) & PUPDR11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR12
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 24:25
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR12() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR12_MASK)  >> PUPDR12_START_BIT)

#define WRITE_PUPDR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR12_MASK) | ((val << PUPDR12_START_BIT) & PUPDR12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR13
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 26:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR13() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR13_MASK)  >> PUPDR13_START_BIT)

#define WRITE_PUPDR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR13_MASK) | ((val << PUPDR13_START_BIT) & PUPDR13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR14
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 28:29
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR14() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR14_MASK)  >> PUPDR14_START_BIT)

#define WRITE_PUPDR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR14_MASK) | ((val << PUPDR14_START_BIT) & PUPDR14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : PUPDR15
//
// Return the value of register Pupdr
//
// Notes : Port x configuration bits (y = 0..15) 
//        (PUPDR) at the offset 0x40020C00, Bits 30:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_PUPDR15() \
   ((READ_REGISTER_ULONG(0x40020C00) & PUPDR15_MASK)  >> PUPDR15_START_BIT)

#define WRITE_PUPDR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ PUPDR15_MASK) | ((val << PUPDR15_START_BIT) & PUPDR15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Afrh
//
// Return the value of register AFRH
//
// Notes : Register Afrh at offset 0x40020C00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AFRH( y) \
     WRITE_REGISTER_ULONG( 0x40020C00 , y)

#define SET_BITS_AFRH(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val |  mask ); \
   }

#define CLEAR_BITS_AFRH(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40020C00); \
     WRITE_REGISTER_ULONG( 0x40020C00 , val & ~mask ); \
   }

#define READ_REGISTER_AFRH() \
     READ_REGISTER_ULONG(0x40020C00)

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH8
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 0:3
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH8() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH8_MASK)  >> AFRH8_START_BIT)

#define WRITE_AFRH8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH8_MASK) | ((val << AFRH8_START_BIT) & AFRH8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH9
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 4:7
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH9() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH9_MASK)  >> AFRH9_START_BIT)

#define WRITE_AFRH9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH9_MASK) | ((val << AFRH9_START_BIT) & AFRH9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH10
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH10() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH10_MASK)  >> AFRH10_START_BIT)

#define WRITE_AFRH10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH10_MASK) | ((val << AFRH10_START_BIT) & AFRH10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH11
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 12:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH11() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH11_MASK)  >> AFRH11_START_BIT)

#define WRITE_AFRH11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH11_MASK) | ((val << AFRH11_START_BIT) & AFRH11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH12
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 16:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH12() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH12_MASK)  >> AFRH12_START_BIT)

#define WRITE_AFRH12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH12_MASK) | ((val << AFRH12_START_BIT) & AFRH12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH13
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 20:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH13() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH13_MASK)  >> AFRH13_START_BIT)

#define WRITE_AFRH13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH13_MASK) | ((val << AFRH13_START_BIT) & AFRH13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH14
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 24:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH14() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH14_MASK)  >> AFRH14_START_BIT)

#define WRITE_AFRH14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH14_MASK) | ((val << AFRH14_START_BIT) & AFRH14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : AFRH15
//
// Return the value of register Afrh
//
// Notes : Alternate function selection for port x bit y (y = 8..15) 
//        (AFRH) at the offset 0x40020C00, Bits 28:31
//
/////////////////////////////////////////////////////////////////////////
#define READ_AFRH15() \
   ((READ_REGISTER_ULONG(0x40020C00) & AFRH15_MASK)  >> AFRH15_START_BIT)

#define WRITE_AFRH15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40020C00); \
     WRITE_REGISTER_ULONG(0x40020C00, (OldValue & ~ AFRH15_MASK) | ((val << AFRH15_START_BIT) & AFRH15_MASK )); \
   } 

