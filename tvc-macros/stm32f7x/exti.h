/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/exti.h
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
 
#define EXTI 0x40013C00
/////////////////////////////////////////////////////////////////////////
//
// Function : Imr
//
// Return the value of register IMR
//
// Notes : Register Imr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IMR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_IMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_IMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_IMR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : MR22
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 22 
//        (IMR) at the offset 0x0, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR22_MASK) | ((val << MR22_START_BIT) & MR22_MASK )); \
   } 

#define ENABLE_MR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR22_MASK ); \
   }

#define DISABLE_MR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR22_MASK ); \
   } 

#define READ_MR22() \
   ((READ_REGISTER_ULONG(0x0) & MR22_MASK)  >> MR22_START_BIT)

#define WHEN_MR22_HIGH() \
     if ( READ_MR22() )


#define UNLESS_MR22_HIGH() \
     if (! READ_MR22() )


#define WAIT_MR22_LOW() \
    while ( READ_MR22() );


#define WAIT_MR22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR22() && (--___t___ > 0)); }


#define WAIT_MR22_HIGH() \
    while (! READ_MR22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR21
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 21 
//        (IMR) at the offset 0x0, Bits 21:21
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR21_MASK) | ((val << MR21_START_BIT) & MR21_MASK )); \
   } 

#define ENABLE_MR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR21_MASK ); \
   }

#define DISABLE_MR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR21_MASK ); \
   } 

#define READ_MR21() \
   ((READ_REGISTER_ULONG(0x0) & MR21_MASK)  >> MR21_START_BIT)

#define WHEN_MR21_HIGH() \
     if ( READ_MR21() )


#define UNLESS_MR21_HIGH() \
     if (! READ_MR21() )


#define WAIT_MR21_LOW() \
    while ( READ_MR21() );


#define WAIT_MR21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR21() && (--___t___ > 0)); }


#define WAIT_MR21_HIGH() \
    while (! READ_MR21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR20
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 20 
//        (IMR) at the offset 0x0, Bits 20:20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR20_MASK) | ((val << MR20_START_BIT) & MR20_MASK )); \
   } 

#define ENABLE_MR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR20_MASK ); \
   }

#define DISABLE_MR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR20_MASK ); \
   } 

#define READ_MR20() \
   ((READ_REGISTER_ULONG(0x0) & MR20_MASK)  >> MR20_START_BIT)

#define WHEN_MR20_HIGH() \
     if ( READ_MR20() )


#define UNLESS_MR20_HIGH() \
     if (! READ_MR20() )


#define WAIT_MR20_LOW() \
    while ( READ_MR20() );


#define WAIT_MR20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR20() && (--___t___ > 0)); }


#define WAIT_MR20_HIGH() \
    while (! READ_MR20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR19
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 19 
//        (IMR) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR19_MASK) | ((val << MR19_START_BIT) & MR19_MASK )); \
   } 

#define ENABLE_MR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR19_MASK ); \
   }

#define DISABLE_MR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR19_MASK ); \
   } 

#define READ_MR19() \
   ((READ_REGISTER_ULONG(0x0) & MR19_MASK)  >> MR19_START_BIT)

#define WHEN_MR19_HIGH() \
     if ( READ_MR19() )


#define UNLESS_MR19_HIGH() \
     if (! READ_MR19() )


#define WAIT_MR19_LOW() \
    while ( READ_MR19() );


#define WAIT_MR19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR19() && (--___t___ > 0)); }


#define WAIT_MR19_HIGH() \
    while (! READ_MR19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR18
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 18 
//        (IMR) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR18_MASK) | ((val << MR18_START_BIT) & MR18_MASK )); \
   } 

#define ENABLE_MR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR18_MASK ); \
   }

#define DISABLE_MR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR18_MASK ); \
   } 

#define READ_MR18() \
   ((READ_REGISTER_ULONG(0x0) & MR18_MASK)  >> MR18_START_BIT)

#define WHEN_MR18_HIGH() \
     if ( READ_MR18() )


#define UNLESS_MR18_HIGH() \
     if (! READ_MR18() )


#define WAIT_MR18_LOW() \
    while ( READ_MR18() );


#define WAIT_MR18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR18() && (--___t___ > 0)); }


#define WAIT_MR18_HIGH() \
    while (! READ_MR18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR17
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 17 
//        (IMR) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR17_MASK) | ((val << MR17_START_BIT) & MR17_MASK )); \
   } 

#define ENABLE_MR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR17_MASK ); \
   }

#define DISABLE_MR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR17_MASK ); \
   } 

#define READ_MR17() \
   ((READ_REGISTER_ULONG(0x0) & MR17_MASK)  >> MR17_START_BIT)

#define WHEN_MR17_HIGH() \
     if ( READ_MR17() )


#define UNLESS_MR17_HIGH() \
     if (! READ_MR17() )


#define WAIT_MR17_LOW() \
    while ( READ_MR17() );


#define WAIT_MR17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR17() && (--___t___ > 0)); }


#define WAIT_MR17_HIGH() \
    while (! READ_MR17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR16
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 16 
//        (IMR) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR16_MASK) | ((val << MR16_START_BIT) & MR16_MASK )); \
   } 

#define ENABLE_MR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR16_MASK ); \
   }

#define DISABLE_MR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR16_MASK ); \
   } 

#define READ_MR16() \
   ((READ_REGISTER_ULONG(0x0) & MR16_MASK)  >> MR16_START_BIT)

#define WHEN_MR16_HIGH() \
     if ( READ_MR16() )


#define UNLESS_MR16_HIGH() \
     if (! READ_MR16() )


#define WAIT_MR16_LOW() \
    while ( READ_MR16() );


#define WAIT_MR16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR16() && (--___t___ > 0)); }


#define WAIT_MR16_HIGH() \
    while (! READ_MR16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR15
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 15 
//        (IMR) at the offset 0x0, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR15_MASK) | ((val << MR15_START_BIT) & MR15_MASK )); \
   } 

#define ENABLE_MR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR15_MASK ); \
   }

#define DISABLE_MR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR15_MASK ); \
   } 

#define READ_MR15() \
   ((READ_REGISTER_ULONG(0x0) & MR15_MASK)  >> MR15_START_BIT)

#define WHEN_MR15_HIGH() \
     if ( READ_MR15() )


#define UNLESS_MR15_HIGH() \
     if (! READ_MR15() )


#define WAIT_MR15_LOW() \
    while ( READ_MR15() );


#define WAIT_MR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR15() && (--___t___ > 0)); }


#define WAIT_MR15_HIGH() \
    while (! READ_MR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR14
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 14 
//        (IMR) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR14_MASK) | ((val << MR14_START_BIT) & MR14_MASK )); \
   } 

#define ENABLE_MR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR14_MASK ); \
   }

#define DISABLE_MR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR14_MASK ); \
   } 

#define READ_MR14() \
   ((READ_REGISTER_ULONG(0x0) & MR14_MASK)  >> MR14_START_BIT)

#define WHEN_MR14_HIGH() \
     if ( READ_MR14() )


#define UNLESS_MR14_HIGH() \
     if (! READ_MR14() )


#define WAIT_MR14_LOW() \
    while ( READ_MR14() );


#define WAIT_MR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR14() && (--___t___ > 0)); }


#define WAIT_MR14_HIGH() \
    while (! READ_MR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR13
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 13 
//        (IMR) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR13_MASK) | ((val << MR13_START_BIT) & MR13_MASK )); \
   } 

#define ENABLE_MR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR13_MASK ); \
   }

#define DISABLE_MR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR13_MASK ); \
   } 

#define READ_MR13() \
   ((READ_REGISTER_ULONG(0x0) & MR13_MASK)  >> MR13_START_BIT)

#define WHEN_MR13_HIGH() \
     if ( READ_MR13() )


#define UNLESS_MR13_HIGH() \
     if (! READ_MR13() )


#define WAIT_MR13_LOW() \
    while ( READ_MR13() );


#define WAIT_MR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR13() && (--___t___ > 0)); }


#define WAIT_MR13_HIGH() \
    while (! READ_MR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR12
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 12 
//        (IMR) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR12_MASK) | ((val << MR12_START_BIT) & MR12_MASK )); \
   } 

#define ENABLE_MR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR12_MASK ); \
   }

#define DISABLE_MR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR12_MASK ); \
   } 

#define READ_MR12() \
   ((READ_REGISTER_ULONG(0x0) & MR12_MASK)  >> MR12_START_BIT)

#define WHEN_MR12_HIGH() \
     if ( READ_MR12() )


#define UNLESS_MR12_HIGH() \
     if (! READ_MR12() )


#define WAIT_MR12_LOW() \
    while ( READ_MR12() );


#define WAIT_MR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR12() && (--___t___ > 0)); }


#define WAIT_MR12_HIGH() \
    while (! READ_MR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR11
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 11 
//        (IMR) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR11_MASK) | ((val << MR11_START_BIT) & MR11_MASK )); \
   } 

#define ENABLE_MR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR11_MASK ); \
   }

#define DISABLE_MR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR11_MASK ); \
   } 

#define READ_MR11() \
   ((READ_REGISTER_ULONG(0x0) & MR11_MASK)  >> MR11_START_BIT)

#define WHEN_MR11_HIGH() \
     if ( READ_MR11() )


#define UNLESS_MR11_HIGH() \
     if (! READ_MR11() )


#define WAIT_MR11_LOW() \
    while ( READ_MR11() );


#define WAIT_MR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR11() && (--___t___ > 0)); }


#define WAIT_MR11_HIGH() \
    while (! READ_MR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR10
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 10 
//        (IMR) at the offset 0x0, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR10_MASK) | ((val << MR10_START_BIT) & MR10_MASK )); \
   } 

#define ENABLE_MR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR10_MASK ); \
   }

#define DISABLE_MR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR10_MASK ); \
   } 

#define READ_MR10() \
   ((READ_REGISTER_ULONG(0x0) & MR10_MASK)  >> MR10_START_BIT)

#define WHEN_MR10_HIGH() \
     if ( READ_MR10() )


#define UNLESS_MR10_HIGH() \
     if (! READ_MR10() )


#define WAIT_MR10_LOW() \
    while ( READ_MR10() );


#define WAIT_MR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR10() && (--___t___ > 0)); }


#define WAIT_MR10_HIGH() \
    while (! READ_MR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR9
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 9 
//        (IMR) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR9_MASK) | ((val << MR9_START_BIT) & MR9_MASK )); \
   } 

#define ENABLE_MR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR9_MASK ); \
   }

#define DISABLE_MR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR9_MASK ); \
   } 

#define READ_MR9() \
   ((READ_REGISTER_ULONG(0x0) & MR9_MASK)  >> MR9_START_BIT)

#define WHEN_MR9_HIGH() \
     if ( READ_MR9() )


#define UNLESS_MR9_HIGH() \
     if (! READ_MR9() )


#define WAIT_MR9_LOW() \
    while ( READ_MR9() );


#define WAIT_MR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR9() && (--___t___ > 0)); }


#define WAIT_MR9_HIGH() \
    while (! READ_MR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR8
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 8 
//        (IMR) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR8_MASK) | ((val << MR8_START_BIT) & MR8_MASK )); \
   } 

#define ENABLE_MR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR8_MASK ); \
   }

#define DISABLE_MR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR8_MASK ); \
   } 

#define READ_MR8() \
   ((READ_REGISTER_ULONG(0x0) & MR8_MASK)  >> MR8_START_BIT)

#define WHEN_MR8_HIGH() \
     if ( READ_MR8() )


#define UNLESS_MR8_HIGH() \
     if (! READ_MR8() )


#define WAIT_MR8_LOW() \
    while ( READ_MR8() );


#define WAIT_MR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR8() && (--___t___ > 0)); }


#define WAIT_MR8_HIGH() \
    while (! READ_MR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR7
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 7 
//        (IMR) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR7_MASK) | ((val << MR7_START_BIT) & MR7_MASK )); \
   } 

#define ENABLE_MR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR7_MASK ); \
   }

#define DISABLE_MR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR7_MASK ); \
   } 

#define READ_MR7() \
   ((READ_REGISTER_ULONG(0x0) & MR7_MASK)  >> MR7_START_BIT)

#define WHEN_MR7_HIGH() \
     if ( READ_MR7() )


#define UNLESS_MR7_HIGH() \
     if (! READ_MR7() )


#define WAIT_MR7_LOW() \
    while ( READ_MR7() );


#define WAIT_MR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR7() && (--___t___ > 0)); }


#define WAIT_MR7_HIGH() \
    while (! READ_MR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR6
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 6 
//        (IMR) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR6_MASK) | ((val << MR6_START_BIT) & MR6_MASK )); \
   } 

#define ENABLE_MR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR6_MASK ); \
   }

#define DISABLE_MR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR6_MASK ); \
   } 

#define READ_MR6() \
   ((READ_REGISTER_ULONG(0x0) & MR6_MASK)  >> MR6_START_BIT)

#define WHEN_MR6_HIGH() \
     if ( READ_MR6() )


#define UNLESS_MR6_HIGH() \
     if (! READ_MR6() )


#define WAIT_MR6_LOW() \
    while ( READ_MR6() );


#define WAIT_MR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR6() && (--___t___ > 0)); }


#define WAIT_MR6_HIGH() \
    while (! READ_MR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR5
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 5 
//        (IMR) at the offset 0x0, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR5_MASK) | ((val << MR5_START_BIT) & MR5_MASK )); \
   } 

#define ENABLE_MR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR5_MASK ); \
   }

#define DISABLE_MR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR5_MASK ); \
   } 

#define READ_MR5() \
   ((READ_REGISTER_ULONG(0x0) & MR5_MASK)  >> MR5_START_BIT)

#define WHEN_MR5_HIGH() \
     if ( READ_MR5() )


#define UNLESS_MR5_HIGH() \
     if (! READ_MR5() )


#define WAIT_MR5_LOW() \
    while ( READ_MR5() );


#define WAIT_MR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR5() && (--___t___ > 0)); }


#define WAIT_MR5_HIGH() \
    while (! READ_MR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR4
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 4 
//        (IMR) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR4_MASK) | ((val << MR4_START_BIT) & MR4_MASK )); \
   } 

#define ENABLE_MR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR4_MASK ); \
   }

#define DISABLE_MR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR4_MASK ); \
   } 

#define READ_MR4() \
   ((READ_REGISTER_ULONG(0x0) & MR4_MASK)  >> MR4_START_BIT)

#define WHEN_MR4_HIGH() \
     if ( READ_MR4() )


#define UNLESS_MR4_HIGH() \
     if (! READ_MR4() )


#define WAIT_MR4_LOW() \
    while ( READ_MR4() );


#define WAIT_MR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR4() && (--___t___ > 0)); }


#define WAIT_MR4_HIGH() \
    while (! READ_MR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR3
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 3 
//        (IMR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR3_MASK) | ((val << MR3_START_BIT) & MR3_MASK )); \
   } 

#define ENABLE_MR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR3_MASK ); \
   }

#define DISABLE_MR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR3_MASK ); \
   } 

#define READ_MR3() \
   ((READ_REGISTER_ULONG(0x0) & MR3_MASK)  >> MR3_START_BIT)

#define WHEN_MR3_HIGH() \
     if ( READ_MR3() )


#define UNLESS_MR3_HIGH() \
     if (! READ_MR3() )


#define WAIT_MR3_LOW() \
    while ( READ_MR3() );


#define WAIT_MR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR3() && (--___t___ > 0)); }


#define WAIT_MR3_HIGH() \
    while (! READ_MR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR2
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 2 
//        (IMR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR2_MASK) | ((val << MR2_START_BIT) & MR2_MASK )); \
   } 

#define ENABLE_MR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR2_MASK ); \
   }

#define DISABLE_MR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR2_MASK ); \
   } 

#define READ_MR2() \
   ((READ_REGISTER_ULONG(0x0) & MR2_MASK)  >> MR2_START_BIT)

#define WHEN_MR2_HIGH() \
     if ( READ_MR2() )


#define UNLESS_MR2_HIGH() \
     if (! READ_MR2() )


#define WAIT_MR2_LOW() \
    while ( READ_MR2() );


#define WAIT_MR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR2() && (--___t___ > 0)); }


#define WAIT_MR2_HIGH() \
    while (! READ_MR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR1
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 1 
//        (IMR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR1_MASK) | ((val << MR1_START_BIT) & MR1_MASK )); \
   } 

#define ENABLE_MR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR1_MASK ); \
   }

#define DISABLE_MR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR1_MASK ); \
   } 

#define READ_MR1() \
   ((READ_REGISTER_ULONG(0x0) & MR1_MASK)  >> MR1_START_BIT)

#define WHEN_MR1_HIGH() \
     if ( READ_MR1() )


#define UNLESS_MR1_HIGH() \
     if (! READ_MR1() )


#define WAIT_MR1_LOW() \
    while ( READ_MR1() );


#define WAIT_MR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR1() && (--___t___ > 0)); }


#define WAIT_MR1_HIGH() \
    while (! READ_MR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MR0
//
// Return the value of register Imr
//
// Notes : Interrupt Mask on line 0 
//        (IMR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MR0_MASK) | ((val << MR0_START_BIT) & MR0_MASK )); \
   } 

#define ENABLE_MR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  MR0_MASK ); \
   }

#define DISABLE_MR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~MR0_MASK ); \
   } 

#define READ_MR0() \
   ((READ_REGISTER_ULONG(0x0) & MR0_MASK)  >> MR0_START_BIT)

#define WHEN_MR0_HIGH() \
     if ( READ_MR0() )


#define UNLESS_MR0_HIGH() \
     if (! READ_MR0() )


#define WAIT_MR0_LOW() \
    while ( READ_MR0() );


#define WAIT_MR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR0() && (--___t___ > 0)); }


#define WAIT_MR0_HIGH() \
    while (! READ_MR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Emr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_EMR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_EMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_EMR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_EMR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 22 
    // 
#define MR22_MASK 0x400000U
#define MR22_OFFSET 22
#define MR22_START_BIT 22
#define MR22_WIDTH 1


#define EMR_REG 0x4

typedef enum mr22 {
    MR_2_2_0,
    MR_2_2_1
} MR_22_T ;
#define WRITE_MR22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR22_MASK) | ((val << MR22_START_BIT) & MR22_MASK )); \
   } 

#define ENABLE_MR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR22_MASK ); \
   }

#define DISABLE_MR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR22_MASK ); \
   } 

#define READ_MR22() \
   ((READ_REGISTER_ULONG(0x4) & MR22_MASK)  >> MR22_START_BIT)

#define WHEN_MR22_HIGH() \
     if ( READ_MR22() )


#define UNLESS_MR22_HIGH() \
     if (! READ_MR22() )


#define WAIT_MR22_LOW() \
    while ( READ_MR22() );


#define WAIT_MR22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR22() && (--___t___ > 0)); }


#define WAIT_MR22_HIGH() \
    while (! READ_MR22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 21 
    // 
#define MR21_MASK 0x200000U
#define MR21_OFFSET 21
#define MR21_START_BIT 21
#define MR21_WIDTH 1



typedef enum mr21 {
    MR_2_1_0,
    MR_2_1_1
} MR_21_T ;
#define WRITE_MR21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR21_MASK) | ((val << MR21_START_BIT) & MR21_MASK )); \
   } 

#define ENABLE_MR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR21_MASK ); \
   }

#define DISABLE_MR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR21_MASK ); \
   } 

#define READ_MR21() \
   ((READ_REGISTER_ULONG(0x4) & MR21_MASK)  >> MR21_START_BIT)

#define WHEN_MR21_HIGH() \
     if ( READ_MR21() )


#define UNLESS_MR21_HIGH() \
     if (! READ_MR21() )


#define WAIT_MR21_LOW() \
    while ( READ_MR21() );


#define WAIT_MR21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR21() && (--___t___ > 0)); }


#define WAIT_MR21_HIGH() \
    while (! READ_MR21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 20 
    // 
#define MR20_MASK 0x100000U
#define MR20_OFFSET 20
#define MR20_START_BIT 20
#define MR20_WIDTH 1



typedef enum mr20 {
    MR_2_0_0,
    MR_2_0_1
} MR_20_T ;
#define WRITE_MR20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR20_MASK) | ((val << MR20_START_BIT) & MR20_MASK )); \
   } 

#define ENABLE_MR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR20_MASK ); \
   }

#define DISABLE_MR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR20_MASK ); \
   } 

#define READ_MR20() \
   ((READ_REGISTER_ULONG(0x4) & MR20_MASK)  >> MR20_START_BIT)

#define WHEN_MR20_HIGH() \
     if ( READ_MR20() )


#define UNLESS_MR20_HIGH() \
     if (! READ_MR20() )


#define WAIT_MR20_LOW() \
    while ( READ_MR20() );


#define WAIT_MR20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR20() && (--___t___ > 0)); }


#define WAIT_MR20_HIGH() \
    while (! READ_MR20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 19 
    // 
#define MR19_MASK 0x80000U
#define MR19_OFFSET 19
#define MR19_START_BIT 19
#define MR19_WIDTH 1



typedef enum mr19 {
    MR_1_9_0,
    MR_1_9_1
} MR_19_T ;
#define WRITE_MR19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR19_MASK) | ((val << MR19_START_BIT) & MR19_MASK )); \
   } 

#define ENABLE_MR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR19_MASK ); \
   }

#define DISABLE_MR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR19_MASK ); \
   } 

#define READ_MR19() \
   ((READ_REGISTER_ULONG(0x4) & MR19_MASK)  >> MR19_START_BIT)

#define WHEN_MR19_HIGH() \
     if ( READ_MR19() )


#define UNLESS_MR19_HIGH() \
     if (! READ_MR19() )


#define WAIT_MR19_LOW() \
    while ( READ_MR19() );


#define WAIT_MR19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR19() && (--___t___ > 0)); }


#define WAIT_MR19_HIGH() \
    while (! READ_MR19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 18 
    // 
#define MR18_MASK 0x40000U
#define MR18_OFFSET 18
#define MR18_START_BIT 18
#define MR18_WIDTH 1



typedef enum mr18 {
    MR_1_8_0,
    MR_1_8_1
} MR_18_T ;
#define WRITE_MR18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR18_MASK) | ((val << MR18_START_BIT) & MR18_MASK )); \
   } 

#define ENABLE_MR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR18_MASK ); \
   }

#define DISABLE_MR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR18_MASK ); \
   } 

#define READ_MR18() \
   ((READ_REGISTER_ULONG(0x4) & MR18_MASK)  >> MR18_START_BIT)

#define WHEN_MR18_HIGH() \
     if ( READ_MR18() )


#define UNLESS_MR18_HIGH() \
     if (! READ_MR18() )


#define WAIT_MR18_LOW() \
    while ( READ_MR18() );


#define WAIT_MR18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR18() && (--___t___ > 0)); }


#define WAIT_MR18_HIGH() \
    while (! READ_MR18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 17 
    // 
#define MR17_MASK 0x20000U
#define MR17_OFFSET 17
#define MR17_START_BIT 17
#define MR17_WIDTH 1



typedef enum mr17 {
    MR_1_7_0,
    MR_1_7_1
} MR_17_T ;
#define WRITE_MR17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR17_MASK) | ((val << MR17_START_BIT) & MR17_MASK )); \
   } 

#define ENABLE_MR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR17_MASK ); \
   }

#define DISABLE_MR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR17_MASK ); \
   } 

#define READ_MR17() \
   ((READ_REGISTER_ULONG(0x4) & MR17_MASK)  >> MR17_START_BIT)

#define WHEN_MR17_HIGH() \
     if ( READ_MR17() )


#define UNLESS_MR17_HIGH() \
     if (! READ_MR17() )


#define WAIT_MR17_LOW() \
    while ( READ_MR17() );


#define WAIT_MR17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR17() && (--___t___ > 0)); }


#define WAIT_MR17_HIGH() \
    while (! READ_MR17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 16 
    // 
#define MR16_MASK 0x10000U
#define MR16_OFFSET 16
#define MR16_START_BIT 16
#define MR16_WIDTH 1



typedef enum mr16 {
    MR_1_6_0,
    MR_1_6_1
} MR_16_T ;
#define WRITE_MR16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR16_MASK) | ((val << MR16_START_BIT) & MR16_MASK )); \
   } 

#define ENABLE_MR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR16_MASK ); \
   }

#define DISABLE_MR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR16_MASK ); \
   } 

#define READ_MR16() \
   ((READ_REGISTER_ULONG(0x4) & MR16_MASK)  >> MR16_START_BIT)

#define WHEN_MR16_HIGH() \
     if ( READ_MR16() )


#define UNLESS_MR16_HIGH() \
     if (! READ_MR16() )


#define WAIT_MR16_LOW() \
    while ( READ_MR16() );


#define WAIT_MR16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR16() && (--___t___ > 0)); }


#define WAIT_MR16_HIGH() \
    while (! READ_MR16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 15 
    // 
#define MR15_MASK 0x8000U
#define MR15_OFFSET 15
#define MR15_START_BIT 15
#define MR15_WIDTH 1



typedef enum mr15 {
    MR_1_5_0,
    MR_1_5_1
} MR_15_T ;
#define WRITE_MR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR15_MASK) | ((val << MR15_START_BIT) & MR15_MASK )); \
   } 

#define ENABLE_MR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR15_MASK ); \
   }

#define DISABLE_MR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR15_MASK ); \
   } 

#define READ_MR15() \
   ((READ_REGISTER_ULONG(0x4) & MR15_MASK)  >> MR15_START_BIT)

#define WHEN_MR15_HIGH() \
     if ( READ_MR15() )


#define UNLESS_MR15_HIGH() \
     if (! READ_MR15() )


#define WAIT_MR15_LOW() \
    while ( READ_MR15() );


#define WAIT_MR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR15() && (--___t___ > 0)); }


#define WAIT_MR15_HIGH() \
    while (! READ_MR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 14 
    // 
#define MR14_MASK 0x4000U
#define MR14_OFFSET 14
#define MR14_START_BIT 14
#define MR14_WIDTH 1



typedef enum mr14 {
    MR_1_4_0,
    MR_1_4_1
} MR_14_T ;
#define WRITE_MR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR14_MASK) | ((val << MR14_START_BIT) & MR14_MASK )); \
   } 

#define ENABLE_MR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR14_MASK ); \
   }

#define DISABLE_MR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR14_MASK ); \
   } 

#define READ_MR14() \
   ((READ_REGISTER_ULONG(0x4) & MR14_MASK)  >> MR14_START_BIT)

#define WHEN_MR14_HIGH() \
     if ( READ_MR14() )


#define UNLESS_MR14_HIGH() \
     if (! READ_MR14() )


#define WAIT_MR14_LOW() \
    while ( READ_MR14() );


#define WAIT_MR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR14() && (--___t___ > 0)); }


#define WAIT_MR14_HIGH() \
    while (! READ_MR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 13 
    // 
#define MR13_MASK 0x2000U
#define MR13_OFFSET 13
#define MR13_START_BIT 13
#define MR13_WIDTH 1



typedef enum mr13 {
    MR_1_3_0,
    MR_1_3_1
} MR_13_T ;
#define WRITE_MR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR13_MASK) | ((val << MR13_START_BIT) & MR13_MASK )); \
   } 

#define ENABLE_MR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR13_MASK ); \
   }

#define DISABLE_MR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR13_MASK ); \
   } 

#define READ_MR13() \
   ((READ_REGISTER_ULONG(0x4) & MR13_MASK)  >> MR13_START_BIT)

#define WHEN_MR13_HIGH() \
     if ( READ_MR13() )


#define UNLESS_MR13_HIGH() \
     if (! READ_MR13() )


#define WAIT_MR13_LOW() \
    while ( READ_MR13() );


#define WAIT_MR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR13() && (--___t___ > 0)); }


#define WAIT_MR13_HIGH() \
    while (! READ_MR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 12 
    // 
#define MR12_MASK 0x1000U
#define MR12_OFFSET 12
#define MR12_START_BIT 12
#define MR12_WIDTH 1



typedef enum mr12 {
    MR_1_2_0,
    MR_1_2_1
} MR_12_T ;
#define WRITE_MR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR12_MASK) | ((val << MR12_START_BIT) & MR12_MASK )); \
   } 

#define ENABLE_MR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR12_MASK ); \
   }

#define DISABLE_MR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR12_MASK ); \
   } 

#define READ_MR12() \
   ((READ_REGISTER_ULONG(0x4) & MR12_MASK)  >> MR12_START_BIT)

#define WHEN_MR12_HIGH() \
     if ( READ_MR12() )


#define UNLESS_MR12_HIGH() \
     if (! READ_MR12() )


#define WAIT_MR12_LOW() \
    while ( READ_MR12() );


#define WAIT_MR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR12() && (--___t___ > 0)); }


#define WAIT_MR12_HIGH() \
    while (! READ_MR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 11 
    // 
#define MR11_MASK 0x800U
#define MR11_OFFSET 11
#define MR11_START_BIT 11
#define MR11_WIDTH 1



typedef enum mr11 {
    MR_1_1_0,
    MR_1_1_1
} MR_11_T ;
#define WRITE_MR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR11_MASK) | ((val << MR11_START_BIT) & MR11_MASK )); \
   } 

#define ENABLE_MR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR11_MASK ); \
   }

#define DISABLE_MR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR11_MASK ); \
   } 

#define READ_MR11() \
   ((READ_REGISTER_ULONG(0x4) & MR11_MASK)  >> MR11_START_BIT)

#define WHEN_MR11_HIGH() \
     if ( READ_MR11() )


#define UNLESS_MR11_HIGH() \
     if (! READ_MR11() )


#define WAIT_MR11_LOW() \
    while ( READ_MR11() );


#define WAIT_MR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR11() && (--___t___ > 0)); }


#define WAIT_MR11_HIGH() \
    while (! READ_MR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 10 
    // 
#define MR10_MASK 0x400U
#define MR10_OFFSET 10
#define MR10_START_BIT 10
#define MR10_WIDTH 1



typedef enum mr10 {
    MR_1_0_0,
    MR_1_0_1
} MR_10_T ;
#define WRITE_MR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR10_MASK) | ((val << MR10_START_BIT) & MR10_MASK )); \
   } 

#define ENABLE_MR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR10_MASK ); \
   }

#define DISABLE_MR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR10_MASK ); \
   } 

#define READ_MR10() \
   ((READ_REGISTER_ULONG(0x4) & MR10_MASK)  >> MR10_START_BIT)

#define WHEN_MR10_HIGH() \
     if ( READ_MR10() )


#define UNLESS_MR10_HIGH() \
     if (! READ_MR10() )


#define WAIT_MR10_LOW() \
    while ( READ_MR10() );


#define WAIT_MR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR10() && (--___t___ > 0)); }


#define WAIT_MR10_HIGH() \
    while (! READ_MR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 9 
    // 
#define MR9_MASK 0x200U
#define MR9_OFFSET 9
#define MR9_START_BIT 9
#define MR9_WIDTH 1



typedef enum mr9 {
    MR_9_0,
    MR_9_1
} MR_9_T ;
#define WRITE_MR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR9_MASK) | ((val << MR9_START_BIT) & MR9_MASK )); \
   } 

#define ENABLE_MR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR9_MASK ); \
   }

#define DISABLE_MR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR9_MASK ); \
   } 

#define READ_MR9() \
   ((READ_REGISTER_ULONG(0x4) & MR9_MASK)  >> MR9_START_BIT)

#define WHEN_MR9_HIGH() \
     if ( READ_MR9() )


#define UNLESS_MR9_HIGH() \
     if (! READ_MR9() )


#define WAIT_MR9_LOW() \
    while ( READ_MR9() );


#define WAIT_MR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR9() && (--___t___ > 0)); }


#define WAIT_MR9_HIGH() \
    while (! READ_MR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 8 
    // 
#define MR8_MASK 0x100U
#define MR8_OFFSET 8
#define MR8_START_BIT 8
#define MR8_WIDTH 1



typedef enum mr8 {
    MR_8_0,
    MR_8_1
} MR_8_T ;
#define WRITE_MR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR8_MASK) | ((val << MR8_START_BIT) & MR8_MASK )); \
   } 

#define ENABLE_MR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR8_MASK ); \
   }

#define DISABLE_MR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR8_MASK ); \
   } 

#define READ_MR8() \
   ((READ_REGISTER_ULONG(0x4) & MR8_MASK)  >> MR8_START_BIT)

#define WHEN_MR8_HIGH() \
     if ( READ_MR8() )


#define UNLESS_MR8_HIGH() \
     if (! READ_MR8() )


#define WAIT_MR8_LOW() \
    while ( READ_MR8() );


#define WAIT_MR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR8() && (--___t___ > 0)); }


#define WAIT_MR8_HIGH() \
    while (! READ_MR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 7 
    // 
#define MR7_MASK 0x80U
#define MR7_OFFSET 7
#define MR7_START_BIT 7
#define MR7_WIDTH 1



typedef enum mr7 {
    MR_7_0,
    MR_7_1
} MR_7_T ;
#define WRITE_MR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR7_MASK) | ((val << MR7_START_BIT) & MR7_MASK )); \
   } 

#define ENABLE_MR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR7_MASK ); \
   }

#define DISABLE_MR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR7_MASK ); \
   } 

#define READ_MR7() \
   ((READ_REGISTER_ULONG(0x4) & MR7_MASK)  >> MR7_START_BIT)

#define WHEN_MR7_HIGH() \
     if ( READ_MR7() )


#define UNLESS_MR7_HIGH() \
     if (! READ_MR7() )


#define WAIT_MR7_LOW() \
    while ( READ_MR7() );


#define WAIT_MR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR7() && (--___t___ > 0)); }


#define WAIT_MR7_HIGH() \
    while (! READ_MR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 6 
    // 
#define MR6_MASK 0x40U
#define MR6_OFFSET 6
#define MR6_START_BIT 6
#define MR6_WIDTH 1



typedef enum mr6 {
    MR_6_0,
    MR_6_1
} MR_6_T ;
#define WRITE_MR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR6_MASK) | ((val << MR6_START_BIT) & MR6_MASK )); \
   } 

#define ENABLE_MR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR6_MASK ); \
   }

#define DISABLE_MR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR6_MASK ); \
   } 

#define READ_MR6() \
   ((READ_REGISTER_ULONG(0x4) & MR6_MASK)  >> MR6_START_BIT)

#define WHEN_MR6_HIGH() \
     if ( READ_MR6() )


#define UNLESS_MR6_HIGH() \
     if (! READ_MR6() )


#define WAIT_MR6_LOW() \
    while ( READ_MR6() );


#define WAIT_MR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR6() && (--___t___ > 0)); }


#define WAIT_MR6_HIGH() \
    while (! READ_MR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 5 
    // 
#define MR5_MASK 0x20U
#define MR5_OFFSET 5
#define MR5_START_BIT 5
#define MR5_WIDTH 1



typedef enum mr5 {
    MR_5_0,
    MR_5_1
} MR_5_T ;
#define WRITE_MR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR5_MASK) | ((val << MR5_START_BIT) & MR5_MASK )); \
   } 

#define ENABLE_MR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR5_MASK ); \
   }

#define DISABLE_MR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR5_MASK ); \
   } 

#define READ_MR5() \
   ((READ_REGISTER_ULONG(0x4) & MR5_MASK)  >> MR5_START_BIT)

#define WHEN_MR5_HIGH() \
     if ( READ_MR5() )


#define UNLESS_MR5_HIGH() \
     if (! READ_MR5() )


#define WAIT_MR5_LOW() \
    while ( READ_MR5() );


#define WAIT_MR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR5() && (--___t___ > 0)); }


#define WAIT_MR5_HIGH() \
    while (! READ_MR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 4 
    // 
#define MR4_MASK 0x10U
#define MR4_OFFSET 4
#define MR4_START_BIT 4
#define MR4_WIDTH 1



typedef enum mr4 {
    MR_4_0,
    MR_4_1
} MR_4_T ;
#define WRITE_MR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR4_MASK) | ((val << MR4_START_BIT) & MR4_MASK )); \
   } 

#define ENABLE_MR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR4_MASK ); \
   }

#define DISABLE_MR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR4_MASK ); \
   } 

#define READ_MR4() \
   ((READ_REGISTER_ULONG(0x4) & MR4_MASK)  >> MR4_START_BIT)

#define WHEN_MR4_HIGH() \
     if ( READ_MR4() )


#define UNLESS_MR4_HIGH() \
     if (! READ_MR4() )


#define WAIT_MR4_LOW() \
    while ( READ_MR4() );


#define WAIT_MR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR4() && (--___t___ > 0)); }


#define WAIT_MR4_HIGH() \
    while (! READ_MR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 3 
    // 
#define MR3_MASK 0x8U
#define MR3_OFFSET 3
#define MR3_START_BIT 3
#define MR3_WIDTH 1



typedef enum mr3 {
    MR_3_0,
    MR_3_1
} MR_3_T ;
#define WRITE_MR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR3_MASK) | ((val << MR3_START_BIT) & MR3_MASK )); \
   } 

#define ENABLE_MR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR3_MASK ); \
   }

#define DISABLE_MR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR3_MASK ); \
   } 

#define READ_MR3() \
   ((READ_REGISTER_ULONG(0x4) & MR3_MASK)  >> MR3_START_BIT)

#define WHEN_MR3_HIGH() \
     if ( READ_MR3() )


#define UNLESS_MR3_HIGH() \
     if (! READ_MR3() )


#define WAIT_MR3_LOW() \
    while ( READ_MR3() );


#define WAIT_MR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR3() && (--___t___ > 0)); }


#define WAIT_MR3_HIGH() \
    while (! READ_MR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 2 
    // 
#define MR2_MASK 0x4U
#define MR2_OFFSET 2
#define MR2_START_BIT 2
#define MR2_WIDTH 1



typedef enum mr2 {
    MR_2_0,
    MR_2_1
} MR_2_T ;
#define WRITE_MR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR2_MASK) | ((val << MR2_START_BIT) & MR2_MASK )); \
   } 

#define ENABLE_MR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR2_MASK ); \
   }

#define DISABLE_MR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR2_MASK ); \
   } 

#define READ_MR2() \
   ((READ_REGISTER_ULONG(0x4) & MR2_MASK)  >> MR2_START_BIT)

#define WHEN_MR2_HIGH() \
     if ( READ_MR2() )


#define UNLESS_MR2_HIGH() \
     if (! READ_MR2() )


#define WAIT_MR2_LOW() \
    while ( READ_MR2() );


#define WAIT_MR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR2() && (--___t___ > 0)); }


#define WAIT_MR2_HIGH() \
    while (! READ_MR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 1 
    // 
#define MR1_MASK 0x2U
#define MR1_OFFSET 1
#define MR1_START_BIT 1
#define MR1_WIDTH 1



typedef enum mr1 {
    MR_1_0,
    MR_1_1
} MR_1_T ;
#define WRITE_MR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR1_MASK) | ((val << MR1_START_BIT) & MR1_MASK )); \
   } 

#define ENABLE_MR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR1_MASK ); \
   }

#define DISABLE_MR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR1_MASK ); \
   } 

#define READ_MR1() \
   ((READ_REGISTER_ULONG(0x4) & MR1_MASK)  >> MR1_START_BIT)

#define WHEN_MR1_HIGH() \
     if ( READ_MR1() )


#define UNLESS_MR1_HIGH() \
     if (! READ_MR1() )


#define WAIT_MR1_LOW() \
    while ( READ_MR1() );


#define WAIT_MR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR1() && (--___t___ > 0)); }


#define WAIT_MR1_HIGH() \
    while (! READ_MR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Emr
//
// Return the value of register EMR
//
// Notes : Register Event mask register (EXTI_EMR) (EMR) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Event Mask on line 0 
    // 
#define MR0_MASK 0x1U
#define MR0_OFFSET 0
#define MR0_START_BIT 0
#define MR0_WIDTH 1



typedef enum mr0 {
    MR_0_0,
    MR_0_1
} MR_0_T ;
#define WRITE_MR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MR0_MASK) | ((val << MR0_START_BIT) & MR0_MASK )); \
   } 

#define ENABLE_MR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MR0_MASK ); \
   }

#define DISABLE_MR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MR0_MASK ); \
   } 

#define READ_MR0() \
   ((READ_REGISTER_ULONG(0x4) & MR0_MASK)  >> MR0_START_BIT)

#define WHEN_MR0_HIGH() \
     if ( READ_MR0() )


#define UNLESS_MR0_HIGH() \
     if (! READ_MR0() )


#define WAIT_MR0_LOW() \
    while ( READ_MR0() );


#define WAIT_MR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MR0() && (--___t___ > 0)); }


#define WAIT_MR0_HIGH() \
    while (! READ_MR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rtsr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RTSR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_RTSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_RTSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_RTSR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 22 
    // 
#define TR22_MASK 0x400000U
#define TR22_OFFSET 22
#define TR22_START_BIT 22
#define TR22_WIDTH 1


#define RTSR_REG 0x8

typedef enum tr22 {
    TR_2_2_0,
    TR_2_2_1
} TR_22_T ;
#define WRITE_TR22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR22_MASK) | ((val << TR22_START_BIT) & TR22_MASK )); \
   } 

#define ENABLE_TR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR22_MASK ); \
   }

#define DISABLE_TR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR22_MASK ); \
   } 

#define READ_TR22() \
   ((READ_REGISTER_ULONG(0x8) & TR22_MASK)  >> TR22_START_BIT)

#define WHEN_TR22_HIGH() \
     if ( READ_TR22() )


#define UNLESS_TR22_HIGH() \
     if (! READ_TR22() )


#define WAIT_TR22_LOW() \
    while ( READ_TR22() );


#define WAIT_TR22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR22() && (--___t___ > 0)); }


#define WAIT_TR22_HIGH() \
    while (! READ_TR22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 21 
    // 
#define TR21_MASK 0x200000U
#define TR21_OFFSET 21
#define TR21_START_BIT 21
#define TR21_WIDTH 1



typedef enum tr21 {
    TR_2_1_0,
    TR_2_1_1
} TR_21_T ;
#define WRITE_TR21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR21_MASK) | ((val << TR21_START_BIT) & TR21_MASK )); \
   } 

#define ENABLE_TR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR21_MASK ); \
   }

#define DISABLE_TR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR21_MASK ); \
   } 

#define READ_TR21() \
   ((READ_REGISTER_ULONG(0x8) & TR21_MASK)  >> TR21_START_BIT)

#define WHEN_TR21_HIGH() \
     if ( READ_TR21() )


#define UNLESS_TR21_HIGH() \
     if (! READ_TR21() )


#define WAIT_TR21_LOW() \
    while ( READ_TR21() );


#define WAIT_TR21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR21() && (--___t___ > 0)); }


#define WAIT_TR21_HIGH() \
    while (! READ_TR21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 20 
    // 
#define TR20_MASK 0x100000U
#define TR20_OFFSET 20
#define TR20_START_BIT 20
#define TR20_WIDTH 1



typedef enum tr20 {
    TR_2_0_0,
    TR_2_0_1
} TR_20_T ;
#define WRITE_TR20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR20_MASK) | ((val << TR20_START_BIT) & TR20_MASK )); \
   } 

#define ENABLE_TR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR20_MASK ); \
   }

#define DISABLE_TR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR20_MASK ); \
   } 

#define READ_TR20() \
   ((READ_REGISTER_ULONG(0x8) & TR20_MASK)  >> TR20_START_BIT)

#define WHEN_TR20_HIGH() \
     if ( READ_TR20() )


#define UNLESS_TR20_HIGH() \
     if (! READ_TR20() )


#define WAIT_TR20_LOW() \
    while ( READ_TR20() );


#define WAIT_TR20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR20() && (--___t___ > 0)); }


#define WAIT_TR20_HIGH() \
    while (! READ_TR20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 19 
    // 
#define TR19_MASK 0x80000U
#define TR19_OFFSET 19
#define TR19_START_BIT 19
#define TR19_WIDTH 1



typedef enum tr19 {
    TR_1_9_0,
    TR_1_9_1
} TR_19_T ;
#define WRITE_TR19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR19_MASK) | ((val << TR19_START_BIT) & TR19_MASK )); \
   } 

#define ENABLE_TR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR19_MASK ); \
   }

#define DISABLE_TR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR19_MASK ); \
   } 

#define READ_TR19() \
   ((READ_REGISTER_ULONG(0x8) & TR19_MASK)  >> TR19_START_BIT)

#define WHEN_TR19_HIGH() \
     if ( READ_TR19() )


#define UNLESS_TR19_HIGH() \
     if (! READ_TR19() )


#define WAIT_TR19_LOW() \
    while ( READ_TR19() );


#define WAIT_TR19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR19() && (--___t___ > 0)); }


#define WAIT_TR19_HIGH() \
    while (! READ_TR19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 18 
    // 
#define TR18_MASK 0x40000U
#define TR18_OFFSET 18
#define TR18_START_BIT 18
#define TR18_WIDTH 1



typedef enum tr18 {
    TR_1_8_0,
    TR_1_8_1
} TR_18_T ;
#define WRITE_TR18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR18_MASK) | ((val << TR18_START_BIT) & TR18_MASK )); \
   } 

#define ENABLE_TR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR18_MASK ); \
   }

#define DISABLE_TR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR18_MASK ); \
   } 

#define READ_TR18() \
   ((READ_REGISTER_ULONG(0x8) & TR18_MASK)  >> TR18_START_BIT)

#define WHEN_TR18_HIGH() \
     if ( READ_TR18() )


#define UNLESS_TR18_HIGH() \
     if (! READ_TR18() )


#define WAIT_TR18_LOW() \
    while ( READ_TR18() );


#define WAIT_TR18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR18() && (--___t___ > 0)); }


#define WAIT_TR18_HIGH() \
    while (! READ_TR18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 17 
    // 
#define TR17_MASK 0x20000U
#define TR17_OFFSET 17
#define TR17_START_BIT 17
#define TR17_WIDTH 1



typedef enum tr17 {
    TR_1_7_0,
    TR_1_7_1
} TR_17_T ;
#define WRITE_TR17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR17_MASK) | ((val << TR17_START_BIT) & TR17_MASK )); \
   } 

#define ENABLE_TR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR17_MASK ); \
   }

#define DISABLE_TR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR17_MASK ); \
   } 

#define READ_TR17() \
   ((READ_REGISTER_ULONG(0x8) & TR17_MASK)  >> TR17_START_BIT)

#define WHEN_TR17_HIGH() \
     if ( READ_TR17() )


#define UNLESS_TR17_HIGH() \
     if (! READ_TR17() )


#define WAIT_TR17_LOW() \
    while ( READ_TR17() );


#define WAIT_TR17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR17() && (--___t___ > 0)); }


#define WAIT_TR17_HIGH() \
    while (! READ_TR17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 16 
    // 
#define TR16_MASK 0x10000U
#define TR16_OFFSET 16
#define TR16_START_BIT 16
#define TR16_WIDTH 1



typedef enum tr16 {
    TR_1_6_0,
    TR_1_6_1
} TR_16_T ;
#define WRITE_TR16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR16_MASK) | ((val << TR16_START_BIT) & TR16_MASK )); \
   } 

#define ENABLE_TR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR16_MASK ); \
   }

#define DISABLE_TR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR16_MASK ); \
   } 

#define READ_TR16() \
   ((READ_REGISTER_ULONG(0x8) & TR16_MASK)  >> TR16_START_BIT)

#define WHEN_TR16_HIGH() \
     if ( READ_TR16() )


#define UNLESS_TR16_HIGH() \
     if (! READ_TR16() )


#define WAIT_TR16_LOW() \
    while ( READ_TR16() );


#define WAIT_TR16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR16() && (--___t___ > 0)); }


#define WAIT_TR16_HIGH() \
    while (! READ_TR16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 15 
    // 
#define TR15_MASK 0x8000U
#define TR15_OFFSET 15
#define TR15_START_BIT 15
#define TR15_WIDTH 1



typedef enum tr15 {
    TR_1_5_0,
    TR_1_5_1
} TR_15_T ;
#define WRITE_TR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR15_MASK) | ((val << TR15_START_BIT) & TR15_MASK )); \
   } 

#define ENABLE_TR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR15_MASK ); \
   }

#define DISABLE_TR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR15_MASK ); \
   } 

#define READ_TR15() \
   ((READ_REGISTER_ULONG(0x8) & TR15_MASK)  >> TR15_START_BIT)

#define WHEN_TR15_HIGH() \
     if ( READ_TR15() )


#define UNLESS_TR15_HIGH() \
     if (! READ_TR15() )


#define WAIT_TR15_LOW() \
    while ( READ_TR15() );


#define WAIT_TR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR15() && (--___t___ > 0)); }


#define WAIT_TR15_HIGH() \
    while (! READ_TR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 14 
    // 
#define TR14_MASK 0x4000U
#define TR14_OFFSET 14
#define TR14_START_BIT 14
#define TR14_WIDTH 1



typedef enum tr14 {
    TR_1_4_0,
    TR_1_4_1
} TR_14_T ;
#define WRITE_TR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR14_MASK) | ((val << TR14_START_BIT) & TR14_MASK )); \
   } 

#define ENABLE_TR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR14_MASK ); \
   }

#define DISABLE_TR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR14_MASK ); \
   } 

#define READ_TR14() \
   ((READ_REGISTER_ULONG(0x8) & TR14_MASK)  >> TR14_START_BIT)

#define WHEN_TR14_HIGH() \
     if ( READ_TR14() )


#define UNLESS_TR14_HIGH() \
     if (! READ_TR14() )


#define WAIT_TR14_LOW() \
    while ( READ_TR14() );


#define WAIT_TR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR14() && (--___t___ > 0)); }


#define WAIT_TR14_HIGH() \
    while (! READ_TR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 13 
    // 
#define TR13_MASK 0x2000U
#define TR13_OFFSET 13
#define TR13_START_BIT 13
#define TR13_WIDTH 1



typedef enum tr13 {
    TR_1_3_0,
    TR_1_3_1
} TR_13_T ;
#define WRITE_TR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR13_MASK) | ((val << TR13_START_BIT) & TR13_MASK )); \
   } 

#define ENABLE_TR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR13_MASK ); \
   }

#define DISABLE_TR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR13_MASK ); \
   } 

#define READ_TR13() \
   ((READ_REGISTER_ULONG(0x8) & TR13_MASK)  >> TR13_START_BIT)

#define WHEN_TR13_HIGH() \
     if ( READ_TR13() )


#define UNLESS_TR13_HIGH() \
     if (! READ_TR13() )


#define WAIT_TR13_LOW() \
    while ( READ_TR13() );


#define WAIT_TR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR13() && (--___t___ > 0)); }


#define WAIT_TR13_HIGH() \
    while (! READ_TR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 12 
    // 
#define TR12_MASK 0x1000U
#define TR12_OFFSET 12
#define TR12_START_BIT 12
#define TR12_WIDTH 1



typedef enum tr12 {
    TR_1_2_0,
    TR_1_2_1
} TR_12_T ;
#define WRITE_TR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR12_MASK) | ((val << TR12_START_BIT) & TR12_MASK )); \
   } 

#define ENABLE_TR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR12_MASK ); \
   }

#define DISABLE_TR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR12_MASK ); \
   } 

#define READ_TR12() \
   ((READ_REGISTER_ULONG(0x8) & TR12_MASK)  >> TR12_START_BIT)

#define WHEN_TR12_HIGH() \
     if ( READ_TR12() )


#define UNLESS_TR12_HIGH() \
     if (! READ_TR12() )


#define WAIT_TR12_LOW() \
    while ( READ_TR12() );


#define WAIT_TR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR12() && (--___t___ > 0)); }


#define WAIT_TR12_HIGH() \
    while (! READ_TR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 11 
    // 
#define TR11_MASK 0x800U
#define TR11_OFFSET 11
#define TR11_START_BIT 11
#define TR11_WIDTH 1



typedef enum tr11 {
    TR_1_1_0,
    TR_1_1_1
} TR_11_T ;
#define WRITE_TR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR11_MASK) | ((val << TR11_START_BIT) & TR11_MASK )); \
   } 

#define ENABLE_TR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR11_MASK ); \
   }

#define DISABLE_TR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR11_MASK ); \
   } 

#define READ_TR11() \
   ((READ_REGISTER_ULONG(0x8) & TR11_MASK)  >> TR11_START_BIT)

#define WHEN_TR11_HIGH() \
     if ( READ_TR11() )


#define UNLESS_TR11_HIGH() \
     if (! READ_TR11() )


#define WAIT_TR11_LOW() \
    while ( READ_TR11() );


#define WAIT_TR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR11() && (--___t___ > 0)); }


#define WAIT_TR11_HIGH() \
    while (! READ_TR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 10 
    // 
#define TR10_MASK 0x400U
#define TR10_OFFSET 10
#define TR10_START_BIT 10
#define TR10_WIDTH 1



typedef enum tr10 {
    TR_1_0_0,
    TR_1_0_1
} TR_10_T ;
#define WRITE_TR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR10_MASK) | ((val << TR10_START_BIT) & TR10_MASK )); \
   } 

#define ENABLE_TR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR10_MASK ); \
   }

#define DISABLE_TR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR10_MASK ); \
   } 

#define READ_TR10() \
   ((READ_REGISTER_ULONG(0x8) & TR10_MASK)  >> TR10_START_BIT)

#define WHEN_TR10_HIGH() \
     if ( READ_TR10() )


#define UNLESS_TR10_HIGH() \
     if (! READ_TR10() )


#define WAIT_TR10_LOW() \
    while ( READ_TR10() );


#define WAIT_TR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR10() && (--___t___ > 0)); }


#define WAIT_TR10_HIGH() \
    while (! READ_TR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 9 
    // 
#define TR9_MASK 0x200U
#define TR9_OFFSET 9
#define TR9_START_BIT 9
#define TR9_WIDTH 1



typedef enum tr9 {
    TR_9_0,
    TR_9_1
} TR_9_T ;
#define WRITE_TR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR9_MASK) | ((val << TR9_START_BIT) & TR9_MASK )); \
   } 

#define ENABLE_TR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR9_MASK ); \
   }

#define DISABLE_TR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR9_MASK ); \
   } 

#define READ_TR9() \
   ((READ_REGISTER_ULONG(0x8) & TR9_MASK)  >> TR9_START_BIT)

#define WHEN_TR9_HIGH() \
     if ( READ_TR9() )


#define UNLESS_TR9_HIGH() \
     if (! READ_TR9() )


#define WAIT_TR9_LOW() \
    while ( READ_TR9() );


#define WAIT_TR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR9() && (--___t___ > 0)); }


#define WAIT_TR9_HIGH() \
    while (! READ_TR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 8 
    // 
#define TR8_MASK 0x100U
#define TR8_OFFSET 8
#define TR8_START_BIT 8
#define TR8_WIDTH 1



typedef enum tr8 {
    TR_8_0,
    TR_8_1
} TR_8_T ;
#define WRITE_TR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR8_MASK) | ((val << TR8_START_BIT) & TR8_MASK )); \
   } 

#define ENABLE_TR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR8_MASK ); \
   }

#define DISABLE_TR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR8_MASK ); \
   } 

#define READ_TR8() \
   ((READ_REGISTER_ULONG(0x8) & TR8_MASK)  >> TR8_START_BIT)

#define WHEN_TR8_HIGH() \
     if ( READ_TR8() )


#define UNLESS_TR8_HIGH() \
     if (! READ_TR8() )


#define WAIT_TR8_LOW() \
    while ( READ_TR8() );


#define WAIT_TR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR8() && (--___t___ > 0)); }


#define WAIT_TR8_HIGH() \
    while (! READ_TR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 7 
    // 
#define TR7_MASK 0x80U
#define TR7_OFFSET 7
#define TR7_START_BIT 7
#define TR7_WIDTH 1



typedef enum tr7 {
    TR_7_0,
    TR_7_1
} TR_7_T ;
#define WRITE_TR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR7_MASK) | ((val << TR7_START_BIT) & TR7_MASK )); \
   } 

#define ENABLE_TR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR7_MASK ); \
   }

#define DISABLE_TR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR7_MASK ); \
   } 

#define READ_TR7() \
   ((READ_REGISTER_ULONG(0x8) & TR7_MASK)  >> TR7_START_BIT)

#define WHEN_TR7_HIGH() \
     if ( READ_TR7() )


#define UNLESS_TR7_HIGH() \
     if (! READ_TR7() )


#define WAIT_TR7_LOW() \
    while ( READ_TR7() );


#define WAIT_TR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR7() && (--___t___ > 0)); }


#define WAIT_TR7_HIGH() \
    while (! READ_TR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 6 
    // 
#define TR6_MASK 0x40U
#define TR6_OFFSET 6
#define TR6_START_BIT 6
#define TR6_WIDTH 1



typedef enum tr6 {
    TR_6_0,
    TR_6_1
} TR_6_T ;
#define WRITE_TR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR6_MASK) | ((val << TR6_START_BIT) & TR6_MASK )); \
   } 

#define ENABLE_TR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR6_MASK ); \
   }

#define DISABLE_TR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR6_MASK ); \
   } 

#define READ_TR6() \
   ((READ_REGISTER_ULONG(0x8) & TR6_MASK)  >> TR6_START_BIT)

#define WHEN_TR6_HIGH() \
     if ( READ_TR6() )


#define UNLESS_TR6_HIGH() \
     if (! READ_TR6() )


#define WAIT_TR6_LOW() \
    while ( READ_TR6() );


#define WAIT_TR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR6() && (--___t___ > 0)); }


#define WAIT_TR6_HIGH() \
    while (! READ_TR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 5 
    // 
#define TR5_MASK 0x20U
#define TR5_OFFSET 5
#define TR5_START_BIT 5
#define TR5_WIDTH 1



typedef enum tr5 {
    TR_5_0,
    TR_5_1
} TR_5_T ;
#define WRITE_TR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR5_MASK) | ((val << TR5_START_BIT) & TR5_MASK )); \
   } 

#define ENABLE_TR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR5_MASK ); \
   }

#define DISABLE_TR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR5_MASK ); \
   } 

#define READ_TR5() \
   ((READ_REGISTER_ULONG(0x8) & TR5_MASK)  >> TR5_START_BIT)

#define WHEN_TR5_HIGH() \
     if ( READ_TR5() )


#define UNLESS_TR5_HIGH() \
     if (! READ_TR5() )


#define WAIT_TR5_LOW() \
    while ( READ_TR5() );


#define WAIT_TR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR5() && (--___t___ > 0)); }


#define WAIT_TR5_HIGH() \
    while (! READ_TR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 4 
    // 
#define TR4_MASK 0x10U
#define TR4_OFFSET 4
#define TR4_START_BIT 4
#define TR4_WIDTH 1



typedef enum tr4 {
    TR_4_0,
    TR_4_1
} TR_4_T ;
#define WRITE_TR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR4_MASK) | ((val << TR4_START_BIT) & TR4_MASK )); \
   } 

#define ENABLE_TR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR4_MASK ); \
   }

#define DISABLE_TR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR4_MASK ); \
   } 

#define READ_TR4() \
   ((READ_REGISTER_ULONG(0x8) & TR4_MASK)  >> TR4_START_BIT)

#define WHEN_TR4_HIGH() \
     if ( READ_TR4() )


#define UNLESS_TR4_HIGH() \
     if (! READ_TR4() )


#define WAIT_TR4_LOW() \
    while ( READ_TR4() );


#define WAIT_TR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR4() && (--___t___ > 0)); }


#define WAIT_TR4_HIGH() \
    while (! READ_TR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 3 
    // 
#define TR3_MASK 0x8U
#define TR3_OFFSET 3
#define TR3_START_BIT 3
#define TR3_WIDTH 1



typedef enum tr3 {
    TR_3_0,
    TR_3_1
} TR_3_T ;
#define WRITE_TR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR3_MASK) | ((val << TR3_START_BIT) & TR3_MASK )); \
   } 

#define ENABLE_TR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR3_MASK ); \
   }

#define DISABLE_TR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR3_MASK ); \
   } 

#define READ_TR3() \
   ((READ_REGISTER_ULONG(0x8) & TR3_MASK)  >> TR3_START_BIT)

#define WHEN_TR3_HIGH() \
     if ( READ_TR3() )


#define UNLESS_TR3_HIGH() \
     if (! READ_TR3() )


#define WAIT_TR3_LOW() \
    while ( READ_TR3() );


#define WAIT_TR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR3() && (--___t___ > 0)); }


#define WAIT_TR3_HIGH() \
    while (! READ_TR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 2 
    // 
#define TR2_MASK 0x4U
#define TR2_OFFSET 2
#define TR2_START_BIT 2
#define TR2_WIDTH 1



typedef enum tr2 {
    TR_2_0,
    TR_2_1
} TR_2_T ;
#define WRITE_TR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR2_MASK) | ((val << TR2_START_BIT) & TR2_MASK )); \
   } 

#define ENABLE_TR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR2_MASK ); \
   }

#define DISABLE_TR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR2_MASK ); \
   } 

#define READ_TR2() \
   ((READ_REGISTER_ULONG(0x8) & TR2_MASK)  >> TR2_START_BIT)

#define WHEN_TR2_HIGH() \
     if ( READ_TR2() )


#define UNLESS_TR2_HIGH() \
     if (! READ_TR2() )


#define WAIT_TR2_LOW() \
    while ( READ_TR2() );


#define WAIT_TR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR2() && (--___t___ > 0)); }


#define WAIT_TR2_HIGH() \
    while (! READ_TR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 1 
    // 
#define TR1_MASK 0x2U
#define TR1_OFFSET 1
#define TR1_START_BIT 1
#define TR1_WIDTH 1



typedef enum tr1 {
    TR_1_0,
    TR_1_1
} TR_1_T ;
#define WRITE_TR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR1_MASK) | ((val << TR1_START_BIT) & TR1_MASK )); \
   } 

#define ENABLE_TR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR1_MASK ); \
   }

#define DISABLE_TR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR1_MASK ); \
   } 

#define READ_TR1() \
   ((READ_REGISTER_ULONG(0x8) & TR1_MASK)  >> TR1_START_BIT)

#define WHEN_TR1_HIGH() \
     if ( READ_TR1() )


#define UNLESS_TR1_HIGH() \
     if (! READ_TR1() )


#define WAIT_TR1_LOW() \
    while ( READ_TR1() );


#define WAIT_TR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR1() && (--___t___ > 0)); }


#define WAIT_TR1_HIGH() \
    while (! READ_TR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rtsr
//
// Return the value of register RTSR
//
// Notes : Register Rising Trigger selection register (EXTI_RTSR) (RTSR) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rising trigger event configuration of line 0 
    // 
#define TR0_MASK 0x1U
#define TR0_OFFSET 0
#define TR0_START_BIT 0
#define TR0_WIDTH 1



typedef enum tr0 {
    TR_0_0,
    TR_0_1
} TR_0_T ;
#define WRITE_TR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TR0_MASK) | ((val << TR0_START_BIT) & TR0_MASK )); \
   } 

#define ENABLE_TR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TR0_MASK ); \
   }

#define DISABLE_TR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TR0_MASK ); \
   } 

#define READ_TR0() \
   ((READ_REGISTER_ULONG(0x8) & TR0_MASK)  >> TR0_START_BIT)

#define WHEN_TR0_HIGH() \
     if ( READ_TR0() )


#define UNLESS_TR0_HIGH() \
     if (! READ_TR0() )


#define WAIT_TR0_LOW() \
    while ( READ_TR0() );


#define WAIT_TR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR0() && (--___t___ > 0)); }


#define WAIT_TR0_HIGH() \
    while (! READ_TR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Ftsr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FTSR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_FTSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_FTSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_FTSR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 22 
    // 
#define TR22_MASK 0x400000U
#define TR22_OFFSET 22
#define TR22_START_BIT 22
#define TR22_WIDTH 1


#define FTSR_REG 0xC

#define WRITE_TR22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR22_MASK) | ((val << TR22_START_BIT) & TR22_MASK )); \
   } 

#define ENABLE_TR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR22_MASK ); \
   }

#define DISABLE_TR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR22_MASK ); \
   } 

#define READ_TR22() \
   ((READ_REGISTER_ULONG(0xC) & TR22_MASK)  >> TR22_START_BIT)

#define WHEN_TR22_HIGH() \
     if ( READ_TR22() )


#define UNLESS_TR22_HIGH() \
     if (! READ_TR22() )


#define WAIT_TR22_LOW() \
    while ( READ_TR22() );


#define WAIT_TR22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR22() && (--___t___ > 0)); }


#define WAIT_TR22_HIGH() \
    while (! READ_TR22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 21 
    // 
#define TR21_MASK 0x200000U
#define TR21_OFFSET 21
#define TR21_START_BIT 21
#define TR21_WIDTH 1



#define WRITE_TR21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR21_MASK) | ((val << TR21_START_BIT) & TR21_MASK )); \
   } 

#define ENABLE_TR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR21_MASK ); \
   }

#define DISABLE_TR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR21_MASK ); \
   } 

#define READ_TR21() \
   ((READ_REGISTER_ULONG(0xC) & TR21_MASK)  >> TR21_START_BIT)

#define WHEN_TR21_HIGH() \
     if ( READ_TR21() )


#define UNLESS_TR21_HIGH() \
     if (! READ_TR21() )


#define WAIT_TR21_LOW() \
    while ( READ_TR21() );


#define WAIT_TR21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR21() && (--___t___ > 0)); }


#define WAIT_TR21_HIGH() \
    while (! READ_TR21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 20 
    // 
#define TR20_MASK 0x100000U
#define TR20_OFFSET 20
#define TR20_START_BIT 20
#define TR20_WIDTH 1



#define WRITE_TR20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR20_MASK) | ((val << TR20_START_BIT) & TR20_MASK )); \
   } 

#define ENABLE_TR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR20_MASK ); \
   }

#define DISABLE_TR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR20_MASK ); \
   } 

#define READ_TR20() \
   ((READ_REGISTER_ULONG(0xC) & TR20_MASK)  >> TR20_START_BIT)

#define WHEN_TR20_HIGH() \
     if ( READ_TR20() )


#define UNLESS_TR20_HIGH() \
     if (! READ_TR20() )


#define WAIT_TR20_LOW() \
    while ( READ_TR20() );


#define WAIT_TR20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR20() && (--___t___ > 0)); }


#define WAIT_TR20_HIGH() \
    while (! READ_TR20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 19 
    // 
#define TR19_MASK 0x80000U
#define TR19_OFFSET 19
#define TR19_START_BIT 19
#define TR19_WIDTH 1



#define WRITE_TR19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR19_MASK) | ((val << TR19_START_BIT) & TR19_MASK )); \
   } 

#define ENABLE_TR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR19_MASK ); \
   }

#define DISABLE_TR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR19_MASK ); \
   } 

#define READ_TR19() \
   ((READ_REGISTER_ULONG(0xC) & TR19_MASK)  >> TR19_START_BIT)

#define WHEN_TR19_HIGH() \
     if ( READ_TR19() )


#define UNLESS_TR19_HIGH() \
     if (! READ_TR19() )


#define WAIT_TR19_LOW() \
    while ( READ_TR19() );


#define WAIT_TR19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR19() && (--___t___ > 0)); }


#define WAIT_TR19_HIGH() \
    while (! READ_TR19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 18 
    // 
#define TR18_MASK 0x40000U
#define TR18_OFFSET 18
#define TR18_START_BIT 18
#define TR18_WIDTH 1



#define WRITE_TR18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR18_MASK) | ((val << TR18_START_BIT) & TR18_MASK )); \
   } 

#define ENABLE_TR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR18_MASK ); \
   }

#define DISABLE_TR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR18_MASK ); \
   } 

#define READ_TR18() \
   ((READ_REGISTER_ULONG(0xC) & TR18_MASK)  >> TR18_START_BIT)

#define WHEN_TR18_HIGH() \
     if ( READ_TR18() )


#define UNLESS_TR18_HIGH() \
     if (! READ_TR18() )


#define WAIT_TR18_LOW() \
    while ( READ_TR18() );


#define WAIT_TR18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR18() && (--___t___ > 0)); }


#define WAIT_TR18_HIGH() \
    while (! READ_TR18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 17 
    // 
#define TR17_MASK 0x20000U
#define TR17_OFFSET 17
#define TR17_START_BIT 17
#define TR17_WIDTH 1



#define WRITE_TR17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR17_MASK) | ((val << TR17_START_BIT) & TR17_MASK )); \
   } 

#define ENABLE_TR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR17_MASK ); \
   }

#define DISABLE_TR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR17_MASK ); \
   } 

#define READ_TR17() \
   ((READ_REGISTER_ULONG(0xC) & TR17_MASK)  >> TR17_START_BIT)

#define WHEN_TR17_HIGH() \
     if ( READ_TR17() )


#define UNLESS_TR17_HIGH() \
     if (! READ_TR17() )


#define WAIT_TR17_LOW() \
    while ( READ_TR17() );


#define WAIT_TR17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR17() && (--___t___ > 0)); }


#define WAIT_TR17_HIGH() \
    while (! READ_TR17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 16 
    // 
#define TR16_MASK 0x10000U
#define TR16_OFFSET 16
#define TR16_START_BIT 16
#define TR16_WIDTH 1



#define WRITE_TR16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR16_MASK) | ((val << TR16_START_BIT) & TR16_MASK )); \
   } 

#define ENABLE_TR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR16_MASK ); \
   }

#define DISABLE_TR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR16_MASK ); \
   } 

#define READ_TR16() \
   ((READ_REGISTER_ULONG(0xC) & TR16_MASK)  >> TR16_START_BIT)

#define WHEN_TR16_HIGH() \
     if ( READ_TR16() )


#define UNLESS_TR16_HIGH() \
     if (! READ_TR16() )


#define WAIT_TR16_LOW() \
    while ( READ_TR16() );


#define WAIT_TR16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR16() && (--___t___ > 0)); }


#define WAIT_TR16_HIGH() \
    while (! READ_TR16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 15 
    // 
#define TR15_MASK 0x8000U
#define TR15_OFFSET 15
#define TR15_START_BIT 15
#define TR15_WIDTH 1



#define WRITE_TR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR15_MASK) | ((val << TR15_START_BIT) & TR15_MASK )); \
   } 

#define ENABLE_TR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR15_MASK ); \
   }

#define DISABLE_TR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR15_MASK ); \
   } 

#define READ_TR15() \
   ((READ_REGISTER_ULONG(0xC) & TR15_MASK)  >> TR15_START_BIT)

#define WHEN_TR15_HIGH() \
     if ( READ_TR15() )


#define UNLESS_TR15_HIGH() \
     if (! READ_TR15() )


#define WAIT_TR15_LOW() \
    while ( READ_TR15() );


#define WAIT_TR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR15() && (--___t___ > 0)); }


#define WAIT_TR15_HIGH() \
    while (! READ_TR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 14 
    // 
#define TR14_MASK 0x4000U
#define TR14_OFFSET 14
#define TR14_START_BIT 14
#define TR14_WIDTH 1



#define WRITE_TR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR14_MASK) | ((val << TR14_START_BIT) & TR14_MASK )); \
   } 

#define ENABLE_TR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR14_MASK ); \
   }

#define DISABLE_TR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR14_MASK ); \
   } 

#define READ_TR14() \
   ((READ_REGISTER_ULONG(0xC) & TR14_MASK)  >> TR14_START_BIT)

#define WHEN_TR14_HIGH() \
     if ( READ_TR14() )


#define UNLESS_TR14_HIGH() \
     if (! READ_TR14() )


#define WAIT_TR14_LOW() \
    while ( READ_TR14() );


#define WAIT_TR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR14() && (--___t___ > 0)); }


#define WAIT_TR14_HIGH() \
    while (! READ_TR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 13 
    // 
#define TR13_MASK 0x2000U
#define TR13_OFFSET 13
#define TR13_START_BIT 13
#define TR13_WIDTH 1



#define WRITE_TR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR13_MASK) | ((val << TR13_START_BIT) & TR13_MASK )); \
   } 

#define ENABLE_TR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR13_MASK ); \
   }

#define DISABLE_TR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR13_MASK ); \
   } 

#define READ_TR13() \
   ((READ_REGISTER_ULONG(0xC) & TR13_MASK)  >> TR13_START_BIT)

#define WHEN_TR13_HIGH() \
     if ( READ_TR13() )


#define UNLESS_TR13_HIGH() \
     if (! READ_TR13() )


#define WAIT_TR13_LOW() \
    while ( READ_TR13() );


#define WAIT_TR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR13() && (--___t___ > 0)); }


#define WAIT_TR13_HIGH() \
    while (! READ_TR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 12 
    // 
#define TR12_MASK 0x1000U
#define TR12_OFFSET 12
#define TR12_START_BIT 12
#define TR12_WIDTH 1



#define WRITE_TR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR12_MASK) | ((val << TR12_START_BIT) & TR12_MASK )); \
   } 

#define ENABLE_TR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR12_MASK ); \
   }

#define DISABLE_TR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR12_MASK ); \
   } 

#define READ_TR12() \
   ((READ_REGISTER_ULONG(0xC) & TR12_MASK)  >> TR12_START_BIT)

#define WHEN_TR12_HIGH() \
     if ( READ_TR12() )


#define UNLESS_TR12_HIGH() \
     if (! READ_TR12() )


#define WAIT_TR12_LOW() \
    while ( READ_TR12() );


#define WAIT_TR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR12() && (--___t___ > 0)); }


#define WAIT_TR12_HIGH() \
    while (! READ_TR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 11 
    // 
#define TR11_MASK 0x800U
#define TR11_OFFSET 11
#define TR11_START_BIT 11
#define TR11_WIDTH 1



#define WRITE_TR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR11_MASK) | ((val << TR11_START_BIT) & TR11_MASK )); \
   } 

#define ENABLE_TR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR11_MASK ); \
   }

#define DISABLE_TR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR11_MASK ); \
   } 

#define READ_TR11() \
   ((READ_REGISTER_ULONG(0xC) & TR11_MASK)  >> TR11_START_BIT)

#define WHEN_TR11_HIGH() \
     if ( READ_TR11() )


#define UNLESS_TR11_HIGH() \
     if (! READ_TR11() )


#define WAIT_TR11_LOW() \
    while ( READ_TR11() );


#define WAIT_TR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR11() && (--___t___ > 0)); }


#define WAIT_TR11_HIGH() \
    while (! READ_TR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 10 
    // 
#define TR10_MASK 0x400U
#define TR10_OFFSET 10
#define TR10_START_BIT 10
#define TR10_WIDTH 1



#define WRITE_TR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR10_MASK) | ((val << TR10_START_BIT) & TR10_MASK )); \
   } 

#define ENABLE_TR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR10_MASK ); \
   }

#define DISABLE_TR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR10_MASK ); \
   } 

#define READ_TR10() \
   ((READ_REGISTER_ULONG(0xC) & TR10_MASK)  >> TR10_START_BIT)

#define WHEN_TR10_HIGH() \
     if ( READ_TR10() )


#define UNLESS_TR10_HIGH() \
     if (! READ_TR10() )


#define WAIT_TR10_LOW() \
    while ( READ_TR10() );


#define WAIT_TR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR10() && (--___t___ > 0)); }


#define WAIT_TR10_HIGH() \
    while (! READ_TR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 9 
    // 
#define TR9_MASK 0x200U
#define TR9_OFFSET 9
#define TR9_START_BIT 9
#define TR9_WIDTH 1



#define WRITE_TR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR9_MASK) | ((val << TR9_START_BIT) & TR9_MASK )); \
   } 

#define ENABLE_TR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR9_MASK ); \
   }

#define DISABLE_TR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR9_MASK ); \
   } 

#define READ_TR9() \
   ((READ_REGISTER_ULONG(0xC) & TR9_MASK)  >> TR9_START_BIT)

#define WHEN_TR9_HIGH() \
     if ( READ_TR9() )


#define UNLESS_TR9_HIGH() \
     if (! READ_TR9() )


#define WAIT_TR9_LOW() \
    while ( READ_TR9() );


#define WAIT_TR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR9() && (--___t___ > 0)); }


#define WAIT_TR9_HIGH() \
    while (! READ_TR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 8 
    // 
#define TR8_MASK 0x100U
#define TR8_OFFSET 8
#define TR8_START_BIT 8
#define TR8_WIDTH 1



#define WRITE_TR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR8_MASK) | ((val << TR8_START_BIT) & TR8_MASK )); \
   } 

#define ENABLE_TR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR8_MASK ); \
   }

#define DISABLE_TR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR8_MASK ); \
   } 

#define READ_TR8() \
   ((READ_REGISTER_ULONG(0xC) & TR8_MASK)  >> TR8_START_BIT)

#define WHEN_TR8_HIGH() \
     if ( READ_TR8() )


#define UNLESS_TR8_HIGH() \
     if (! READ_TR8() )


#define WAIT_TR8_LOW() \
    while ( READ_TR8() );


#define WAIT_TR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR8() && (--___t___ > 0)); }


#define WAIT_TR8_HIGH() \
    while (! READ_TR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 7 
    // 
#define TR7_MASK 0x80U
#define TR7_OFFSET 7
#define TR7_START_BIT 7
#define TR7_WIDTH 1



#define WRITE_TR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR7_MASK) | ((val << TR7_START_BIT) & TR7_MASK )); \
   } 

#define ENABLE_TR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR7_MASK ); \
   }

#define DISABLE_TR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR7_MASK ); \
   } 

#define READ_TR7() \
   ((READ_REGISTER_ULONG(0xC) & TR7_MASK)  >> TR7_START_BIT)

#define WHEN_TR7_HIGH() \
     if ( READ_TR7() )


#define UNLESS_TR7_HIGH() \
     if (! READ_TR7() )


#define WAIT_TR7_LOW() \
    while ( READ_TR7() );


#define WAIT_TR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR7() && (--___t___ > 0)); }


#define WAIT_TR7_HIGH() \
    while (! READ_TR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 6 
    // 
#define TR6_MASK 0x40U
#define TR6_OFFSET 6
#define TR6_START_BIT 6
#define TR6_WIDTH 1



#define WRITE_TR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR6_MASK) | ((val << TR6_START_BIT) & TR6_MASK )); \
   } 

#define ENABLE_TR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR6_MASK ); \
   }

#define DISABLE_TR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR6_MASK ); \
   } 

#define READ_TR6() \
   ((READ_REGISTER_ULONG(0xC) & TR6_MASK)  >> TR6_START_BIT)

#define WHEN_TR6_HIGH() \
     if ( READ_TR6() )


#define UNLESS_TR6_HIGH() \
     if (! READ_TR6() )


#define WAIT_TR6_LOW() \
    while ( READ_TR6() );


#define WAIT_TR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR6() && (--___t___ > 0)); }


#define WAIT_TR6_HIGH() \
    while (! READ_TR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 5 
    // 
#define TR5_MASK 0x20U
#define TR5_OFFSET 5
#define TR5_START_BIT 5
#define TR5_WIDTH 1



#define WRITE_TR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR5_MASK) | ((val << TR5_START_BIT) & TR5_MASK )); \
   } 

#define ENABLE_TR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR5_MASK ); \
   }

#define DISABLE_TR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR5_MASK ); \
   } 

#define READ_TR5() \
   ((READ_REGISTER_ULONG(0xC) & TR5_MASK)  >> TR5_START_BIT)

#define WHEN_TR5_HIGH() \
     if ( READ_TR5() )


#define UNLESS_TR5_HIGH() \
     if (! READ_TR5() )


#define WAIT_TR5_LOW() \
    while ( READ_TR5() );


#define WAIT_TR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR5() && (--___t___ > 0)); }


#define WAIT_TR5_HIGH() \
    while (! READ_TR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 4 
    // 
#define TR4_MASK 0x10U
#define TR4_OFFSET 4
#define TR4_START_BIT 4
#define TR4_WIDTH 1



#define WRITE_TR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR4_MASK) | ((val << TR4_START_BIT) & TR4_MASK )); \
   } 

#define ENABLE_TR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR4_MASK ); \
   }

#define DISABLE_TR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR4_MASK ); \
   } 

#define READ_TR4() \
   ((READ_REGISTER_ULONG(0xC) & TR4_MASK)  >> TR4_START_BIT)

#define WHEN_TR4_HIGH() \
     if ( READ_TR4() )


#define UNLESS_TR4_HIGH() \
     if (! READ_TR4() )


#define WAIT_TR4_LOW() \
    while ( READ_TR4() );


#define WAIT_TR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR4() && (--___t___ > 0)); }


#define WAIT_TR4_HIGH() \
    while (! READ_TR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 3 
    // 
#define TR3_MASK 0x8U
#define TR3_OFFSET 3
#define TR3_START_BIT 3
#define TR3_WIDTH 1



#define WRITE_TR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR3_MASK) | ((val << TR3_START_BIT) & TR3_MASK )); \
   } 

#define ENABLE_TR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR3_MASK ); \
   }

#define DISABLE_TR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR3_MASK ); \
   } 

#define READ_TR3() \
   ((READ_REGISTER_ULONG(0xC) & TR3_MASK)  >> TR3_START_BIT)

#define WHEN_TR3_HIGH() \
     if ( READ_TR3() )


#define UNLESS_TR3_HIGH() \
     if (! READ_TR3() )


#define WAIT_TR3_LOW() \
    while ( READ_TR3() );


#define WAIT_TR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR3() && (--___t___ > 0)); }


#define WAIT_TR3_HIGH() \
    while (! READ_TR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 2 
    // 
#define TR2_MASK 0x4U
#define TR2_OFFSET 2
#define TR2_START_BIT 2
#define TR2_WIDTH 1



#define WRITE_TR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR2_MASK) | ((val << TR2_START_BIT) & TR2_MASK )); \
   } 

#define ENABLE_TR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR2_MASK ); \
   }

#define DISABLE_TR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR2_MASK ); \
   } 

#define READ_TR2() \
   ((READ_REGISTER_ULONG(0xC) & TR2_MASK)  >> TR2_START_BIT)

#define WHEN_TR2_HIGH() \
     if ( READ_TR2() )


#define UNLESS_TR2_HIGH() \
     if (! READ_TR2() )


#define WAIT_TR2_LOW() \
    while ( READ_TR2() );


#define WAIT_TR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR2() && (--___t___ > 0)); }


#define WAIT_TR2_HIGH() \
    while (! READ_TR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 1 
    // 
#define TR1_MASK 0x2U
#define TR1_OFFSET 1
#define TR1_START_BIT 1
#define TR1_WIDTH 1



#define WRITE_TR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR1_MASK) | ((val << TR1_START_BIT) & TR1_MASK )); \
   } 

#define ENABLE_TR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR1_MASK ); \
   }

#define DISABLE_TR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR1_MASK ); \
   } 

#define READ_TR1() \
   ((READ_REGISTER_ULONG(0xC) & TR1_MASK)  >> TR1_START_BIT)

#define WHEN_TR1_HIGH() \
     if ( READ_TR1() )


#define UNLESS_TR1_HIGH() \
     if (! READ_TR1() )


#define WAIT_TR1_LOW() \
    while ( READ_TR1() );


#define WAIT_TR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR1() && (--___t___ > 0)); }


#define WAIT_TR1_HIGH() \
    while (! READ_TR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ftsr
//
// Return the value of register FTSR
//
// Notes : Register Falling Trigger selection register (EXTI_FTSR) (FTSR) at the offset 0xC, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Falling trigger event configuration of line 0 
    // 
#define TR0_MASK 0x1U
#define TR0_OFFSET 0
#define TR0_START_BIT 0
#define TR0_WIDTH 1



#define WRITE_TR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TR0_MASK) | ((val << TR0_START_BIT) & TR0_MASK )); \
   } 

#define ENABLE_TR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TR0_MASK ); \
   }

#define DISABLE_TR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TR0_MASK ); \
   } 

#define READ_TR0() \
   ((READ_REGISTER_ULONG(0xC) & TR0_MASK)  >> TR0_START_BIT)

#define WHEN_TR0_HIGH() \
     if ( READ_TR0() )


#define UNLESS_TR0_HIGH() \
     if (! READ_TR0() )


#define WAIT_TR0_LOW() \
    while ( READ_TR0() );


#define WAIT_TR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TR0() && (--___t___ > 0)); }


#define WAIT_TR0_HIGH() \
    while (! READ_TR0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Swier at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SWIER( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_SWIER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_SWIER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_SWIER() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 22 
    // 
#define SWIER22_MASK 0x400000U
#define SWIER22_OFFSET 22
#define SWIER22_START_BIT 22
#define SWIER22_WIDTH 1


#define SWIER_REG 0x10

typedef enum swier22 {
    SWIER_2_2_0,
    SWIER_2_2_1
} SWIER_22_T ;
#define WRITE_SWIER22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER22_MASK) | ((val << SWIER22_START_BIT) & SWIER22_MASK )); \
   } 

#define ENABLE_SWIER22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER22_MASK ); \
   }

#define DISABLE_SWIER22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER22_MASK ); \
   } 

#define READ_SWIER22() \
   ((READ_REGISTER_ULONG(0x10) & SWIER22_MASK)  >> SWIER22_START_BIT)

#define WHEN_SWIER22_HIGH() \
     if ( READ_SWIER22() )


#define UNLESS_SWIER22_HIGH() \
     if (! READ_SWIER22() )


#define WAIT_SWIER22_LOW() \
    while ( READ_SWIER22() );


#define WAIT_SWIER22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER22() && (--___t___ > 0)); }


#define WAIT_SWIER22_HIGH() \
    while (! READ_SWIER22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 21 
    // 
#define SWIER21_MASK 0x200000U
#define SWIER21_OFFSET 21
#define SWIER21_START_BIT 21
#define SWIER21_WIDTH 1



typedef enum swier21 {
    SWIER_2_1_0,
    SWIER_2_1_1
} SWIER_21_T ;
#define WRITE_SWIER21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER21_MASK) | ((val << SWIER21_START_BIT) & SWIER21_MASK )); \
   } 

#define ENABLE_SWIER21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER21_MASK ); \
   }

#define DISABLE_SWIER21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER21_MASK ); \
   } 

#define READ_SWIER21() \
   ((READ_REGISTER_ULONG(0x10) & SWIER21_MASK)  >> SWIER21_START_BIT)

#define WHEN_SWIER21_HIGH() \
     if ( READ_SWIER21() )


#define UNLESS_SWIER21_HIGH() \
     if (! READ_SWIER21() )


#define WAIT_SWIER21_LOW() \
    while ( READ_SWIER21() );


#define WAIT_SWIER21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER21() && (--___t___ > 0)); }


#define WAIT_SWIER21_HIGH() \
    while (! READ_SWIER21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 20 
    // 
#define SWIER20_MASK 0x100000U
#define SWIER20_OFFSET 20
#define SWIER20_START_BIT 20
#define SWIER20_WIDTH 1



typedef enum swier20 {
    SWIER_2_0_0,
    SWIER_2_0_1
} SWIER_20_T ;
#define WRITE_SWIER20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER20_MASK) | ((val << SWIER20_START_BIT) & SWIER20_MASK )); \
   } 

#define ENABLE_SWIER20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER20_MASK ); \
   }

#define DISABLE_SWIER20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER20_MASK ); \
   } 

#define READ_SWIER20() \
   ((READ_REGISTER_ULONG(0x10) & SWIER20_MASK)  >> SWIER20_START_BIT)

#define WHEN_SWIER20_HIGH() \
     if ( READ_SWIER20() )


#define UNLESS_SWIER20_HIGH() \
     if (! READ_SWIER20() )


#define WAIT_SWIER20_LOW() \
    while ( READ_SWIER20() );


#define WAIT_SWIER20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER20() && (--___t___ > 0)); }


#define WAIT_SWIER20_HIGH() \
    while (! READ_SWIER20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 19 
    // 
#define SWIER19_MASK 0x80000U
#define SWIER19_OFFSET 19
#define SWIER19_START_BIT 19
#define SWIER19_WIDTH 1



typedef enum swier19 {
    SWIER_1_9_0,
    SWIER_1_9_1
} SWIER_19_T ;
#define WRITE_SWIER19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER19_MASK) | ((val << SWIER19_START_BIT) & SWIER19_MASK )); \
   } 

#define ENABLE_SWIER19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER19_MASK ); \
   }

#define DISABLE_SWIER19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER19_MASK ); \
   } 

#define READ_SWIER19() \
   ((READ_REGISTER_ULONG(0x10) & SWIER19_MASK)  >> SWIER19_START_BIT)

#define WHEN_SWIER19_HIGH() \
     if ( READ_SWIER19() )


#define UNLESS_SWIER19_HIGH() \
     if (! READ_SWIER19() )


#define WAIT_SWIER19_LOW() \
    while ( READ_SWIER19() );


#define WAIT_SWIER19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER19() && (--___t___ > 0)); }


#define WAIT_SWIER19_HIGH() \
    while (! READ_SWIER19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 18 
    // 
#define SWIER18_MASK 0x40000U
#define SWIER18_OFFSET 18
#define SWIER18_START_BIT 18
#define SWIER18_WIDTH 1



typedef enum swier18 {
    SWIER_1_8_0,
    SWIER_1_8_1
} SWIER_18_T ;
#define WRITE_SWIER18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER18_MASK) | ((val << SWIER18_START_BIT) & SWIER18_MASK )); \
   } 

#define ENABLE_SWIER18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER18_MASK ); \
   }

#define DISABLE_SWIER18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER18_MASK ); \
   } 

#define READ_SWIER18() \
   ((READ_REGISTER_ULONG(0x10) & SWIER18_MASK)  >> SWIER18_START_BIT)

#define WHEN_SWIER18_HIGH() \
     if ( READ_SWIER18() )


#define UNLESS_SWIER18_HIGH() \
     if (! READ_SWIER18() )


#define WAIT_SWIER18_LOW() \
    while ( READ_SWIER18() );


#define WAIT_SWIER18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER18() && (--___t___ > 0)); }


#define WAIT_SWIER18_HIGH() \
    while (! READ_SWIER18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 17 
    // 
#define SWIER17_MASK 0x20000U
#define SWIER17_OFFSET 17
#define SWIER17_START_BIT 17
#define SWIER17_WIDTH 1



typedef enum swier17 {
    SWIER_1_7_0,
    SWIER_1_7_1
} SWIER_17_T ;
#define WRITE_SWIER17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER17_MASK) | ((val << SWIER17_START_BIT) & SWIER17_MASK )); \
   } 

#define ENABLE_SWIER17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER17_MASK ); \
   }

#define DISABLE_SWIER17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER17_MASK ); \
   } 

#define READ_SWIER17() \
   ((READ_REGISTER_ULONG(0x10) & SWIER17_MASK)  >> SWIER17_START_BIT)

#define WHEN_SWIER17_HIGH() \
     if ( READ_SWIER17() )


#define UNLESS_SWIER17_HIGH() \
     if (! READ_SWIER17() )


#define WAIT_SWIER17_LOW() \
    while ( READ_SWIER17() );


#define WAIT_SWIER17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER17() && (--___t___ > 0)); }


#define WAIT_SWIER17_HIGH() \
    while (! READ_SWIER17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 16 
    // 
#define SWIER16_MASK 0x10000U
#define SWIER16_OFFSET 16
#define SWIER16_START_BIT 16
#define SWIER16_WIDTH 1



typedef enum swier16 {
    SWIER_1_6_0,
    SWIER_1_6_1
} SWIER_16_T ;
#define WRITE_SWIER16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER16_MASK) | ((val << SWIER16_START_BIT) & SWIER16_MASK )); \
   } 

#define ENABLE_SWIER16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER16_MASK ); \
   }

#define DISABLE_SWIER16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER16_MASK ); \
   } 

#define READ_SWIER16() \
   ((READ_REGISTER_ULONG(0x10) & SWIER16_MASK)  >> SWIER16_START_BIT)

#define WHEN_SWIER16_HIGH() \
     if ( READ_SWIER16() )


#define UNLESS_SWIER16_HIGH() \
     if (! READ_SWIER16() )


#define WAIT_SWIER16_LOW() \
    while ( READ_SWIER16() );


#define WAIT_SWIER16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER16() && (--___t___ > 0)); }


#define WAIT_SWIER16_HIGH() \
    while (! READ_SWIER16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 15 
    // 
#define SWIER15_MASK 0x8000U
#define SWIER15_OFFSET 15
#define SWIER15_START_BIT 15
#define SWIER15_WIDTH 1



typedef enum swier15 {
    SWIER_1_5_0,
    SWIER_1_5_1
} SWIER_15_T ;
#define WRITE_SWIER15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER15_MASK) | ((val << SWIER15_START_BIT) & SWIER15_MASK )); \
   } 

#define ENABLE_SWIER15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER15_MASK ); \
   }

#define DISABLE_SWIER15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER15_MASK ); \
   } 

#define READ_SWIER15() \
   ((READ_REGISTER_ULONG(0x10) & SWIER15_MASK)  >> SWIER15_START_BIT)

#define WHEN_SWIER15_HIGH() \
     if ( READ_SWIER15() )


#define UNLESS_SWIER15_HIGH() \
     if (! READ_SWIER15() )


#define WAIT_SWIER15_LOW() \
    while ( READ_SWIER15() );


#define WAIT_SWIER15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER15() && (--___t___ > 0)); }


#define WAIT_SWIER15_HIGH() \
    while (! READ_SWIER15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 14 
    // 
#define SWIER14_MASK 0x4000U
#define SWIER14_OFFSET 14
#define SWIER14_START_BIT 14
#define SWIER14_WIDTH 1



typedef enum swier14 {
    SWIER_1_4_0,
    SWIER_1_4_1
} SWIER_14_T ;
#define WRITE_SWIER14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER14_MASK) | ((val << SWIER14_START_BIT) & SWIER14_MASK )); \
   } 

#define ENABLE_SWIER14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER14_MASK ); \
   }

#define DISABLE_SWIER14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER14_MASK ); \
   } 

#define READ_SWIER14() \
   ((READ_REGISTER_ULONG(0x10) & SWIER14_MASK)  >> SWIER14_START_BIT)

#define WHEN_SWIER14_HIGH() \
     if ( READ_SWIER14() )


#define UNLESS_SWIER14_HIGH() \
     if (! READ_SWIER14() )


#define WAIT_SWIER14_LOW() \
    while ( READ_SWIER14() );


#define WAIT_SWIER14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER14() && (--___t___ > 0)); }


#define WAIT_SWIER14_HIGH() \
    while (! READ_SWIER14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 13 
    // 
#define SWIER13_MASK 0x2000U
#define SWIER13_OFFSET 13
#define SWIER13_START_BIT 13
#define SWIER13_WIDTH 1



typedef enum swier13 {
    SWIER_1_3_0,
    SWIER_1_3_1
} SWIER_13_T ;
#define WRITE_SWIER13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER13_MASK) | ((val << SWIER13_START_BIT) & SWIER13_MASK )); \
   } 

#define ENABLE_SWIER13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER13_MASK ); \
   }

#define DISABLE_SWIER13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER13_MASK ); \
   } 

#define READ_SWIER13() \
   ((READ_REGISTER_ULONG(0x10) & SWIER13_MASK)  >> SWIER13_START_BIT)

#define WHEN_SWIER13_HIGH() \
     if ( READ_SWIER13() )


#define UNLESS_SWIER13_HIGH() \
     if (! READ_SWIER13() )


#define WAIT_SWIER13_LOW() \
    while ( READ_SWIER13() );


#define WAIT_SWIER13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER13() && (--___t___ > 0)); }


#define WAIT_SWIER13_HIGH() \
    while (! READ_SWIER13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 12 
    // 
#define SWIER12_MASK 0x1000U
#define SWIER12_OFFSET 12
#define SWIER12_START_BIT 12
#define SWIER12_WIDTH 1



typedef enum swier12 {
    SWIER_1_2_0,
    SWIER_1_2_1
} SWIER_12_T ;
#define WRITE_SWIER12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER12_MASK) | ((val << SWIER12_START_BIT) & SWIER12_MASK )); \
   } 

#define ENABLE_SWIER12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER12_MASK ); \
   }

#define DISABLE_SWIER12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER12_MASK ); \
   } 

#define READ_SWIER12() \
   ((READ_REGISTER_ULONG(0x10) & SWIER12_MASK)  >> SWIER12_START_BIT)

#define WHEN_SWIER12_HIGH() \
     if ( READ_SWIER12() )


#define UNLESS_SWIER12_HIGH() \
     if (! READ_SWIER12() )


#define WAIT_SWIER12_LOW() \
    while ( READ_SWIER12() );


#define WAIT_SWIER12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER12() && (--___t___ > 0)); }


#define WAIT_SWIER12_HIGH() \
    while (! READ_SWIER12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 11 
    // 
#define SWIER11_MASK 0x800U
#define SWIER11_OFFSET 11
#define SWIER11_START_BIT 11
#define SWIER11_WIDTH 1



typedef enum swier11 {
    SWIER_1_1_0,
    SWIER_1_1_1
} SWIER_11_T ;
#define WRITE_SWIER11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER11_MASK) | ((val << SWIER11_START_BIT) & SWIER11_MASK )); \
   } 

#define ENABLE_SWIER11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER11_MASK ); \
   }

#define DISABLE_SWIER11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER11_MASK ); \
   } 

#define READ_SWIER11() \
   ((READ_REGISTER_ULONG(0x10) & SWIER11_MASK)  >> SWIER11_START_BIT)

#define WHEN_SWIER11_HIGH() \
     if ( READ_SWIER11() )


#define UNLESS_SWIER11_HIGH() \
     if (! READ_SWIER11() )


#define WAIT_SWIER11_LOW() \
    while ( READ_SWIER11() );


#define WAIT_SWIER11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER11() && (--___t___ > 0)); }


#define WAIT_SWIER11_HIGH() \
    while (! READ_SWIER11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 10 
    // 
#define SWIER10_MASK 0x400U
#define SWIER10_OFFSET 10
#define SWIER10_START_BIT 10
#define SWIER10_WIDTH 1



typedef enum swier10 {
    SWIER_1_0_0,
    SWIER_1_0_1
} SWIER_10_T ;
#define WRITE_SWIER10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER10_MASK) | ((val << SWIER10_START_BIT) & SWIER10_MASK )); \
   } 

#define ENABLE_SWIER10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER10_MASK ); \
   }

#define DISABLE_SWIER10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER10_MASK ); \
   } 

#define READ_SWIER10() \
   ((READ_REGISTER_ULONG(0x10) & SWIER10_MASK)  >> SWIER10_START_BIT)

#define WHEN_SWIER10_HIGH() \
     if ( READ_SWIER10() )


#define UNLESS_SWIER10_HIGH() \
     if (! READ_SWIER10() )


#define WAIT_SWIER10_LOW() \
    while ( READ_SWIER10() );


#define WAIT_SWIER10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER10() && (--___t___ > 0)); }


#define WAIT_SWIER10_HIGH() \
    while (! READ_SWIER10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 9 
    // 
#define SWIER9_MASK 0x200U
#define SWIER9_OFFSET 9
#define SWIER9_START_BIT 9
#define SWIER9_WIDTH 1



typedef enum swier9 {
    SWIER_9_0,
    SWIER_9_1
} SWIER_9_T ;
#define WRITE_SWIER9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER9_MASK) | ((val << SWIER9_START_BIT) & SWIER9_MASK )); \
   } 

#define ENABLE_SWIER9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER9_MASK ); \
   }

#define DISABLE_SWIER9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER9_MASK ); \
   } 

#define READ_SWIER9() \
   ((READ_REGISTER_ULONG(0x10) & SWIER9_MASK)  >> SWIER9_START_BIT)

#define WHEN_SWIER9_HIGH() \
     if ( READ_SWIER9() )


#define UNLESS_SWIER9_HIGH() \
     if (! READ_SWIER9() )


#define WAIT_SWIER9_LOW() \
    while ( READ_SWIER9() );


#define WAIT_SWIER9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER9() && (--___t___ > 0)); }


#define WAIT_SWIER9_HIGH() \
    while (! READ_SWIER9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 8 
    // 
#define SWIER8_MASK 0x100U
#define SWIER8_OFFSET 8
#define SWIER8_START_BIT 8
#define SWIER8_WIDTH 1



typedef enum swier8 {
    SWIER_8_0,
    SWIER_8_1
} SWIER_8_T ;
#define WRITE_SWIER8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER8_MASK) | ((val << SWIER8_START_BIT) & SWIER8_MASK )); \
   } 

#define ENABLE_SWIER8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER8_MASK ); \
   }

#define DISABLE_SWIER8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER8_MASK ); \
   } 

#define READ_SWIER8() \
   ((READ_REGISTER_ULONG(0x10) & SWIER8_MASK)  >> SWIER8_START_BIT)

#define WHEN_SWIER8_HIGH() \
     if ( READ_SWIER8() )


#define UNLESS_SWIER8_HIGH() \
     if (! READ_SWIER8() )


#define WAIT_SWIER8_LOW() \
    while ( READ_SWIER8() );


#define WAIT_SWIER8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER8() && (--___t___ > 0)); }


#define WAIT_SWIER8_HIGH() \
    while (! READ_SWIER8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 7 
    // 
#define SWIER7_MASK 0x80U
#define SWIER7_OFFSET 7
#define SWIER7_START_BIT 7
#define SWIER7_WIDTH 1



typedef enum swier7 {
    SWIER_7_0,
    SWIER_7_1
} SWIER_7_T ;
#define WRITE_SWIER7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER7_MASK) | ((val << SWIER7_START_BIT) & SWIER7_MASK )); \
   } 

#define ENABLE_SWIER7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER7_MASK ); \
   }

#define DISABLE_SWIER7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER7_MASK ); \
   } 

#define READ_SWIER7() \
   ((READ_REGISTER_ULONG(0x10) & SWIER7_MASK)  >> SWIER7_START_BIT)

#define WHEN_SWIER7_HIGH() \
     if ( READ_SWIER7() )


#define UNLESS_SWIER7_HIGH() \
     if (! READ_SWIER7() )


#define WAIT_SWIER7_LOW() \
    while ( READ_SWIER7() );


#define WAIT_SWIER7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER7() && (--___t___ > 0)); }


#define WAIT_SWIER7_HIGH() \
    while (! READ_SWIER7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 6 
    // 
#define SWIER6_MASK 0x40U
#define SWIER6_OFFSET 6
#define SWIER6_START_BIT 6
#define SWIER6_WIDTH 1



typedef enum swier6 {
    SWIER_6_0,
    SWIER_6_1
} SWIER_6_T ;
#define WRITE_SWIER6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER6_MASK) | ((val << SWIER6_START_BIT) & SWIER6_MASK )); \
   } 

#define ENABLE_SWIER6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER6_MASK ); \
   }

#define DISABLE_SWIER6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER6_MASK ); \
   } 

#define READ_SWIER6() \
   ((READ_REGISTER_ULONG(0x10) & SWIER6_MASK)  >> SWIER6_START_BIT)

#define WHEN_SWIER6_HIGH() \
     if ( READ_SWIER6() )


#define UNLESS_SWIER6_HIGH() \
     if (! READ_SWIER6() )


#define WAIT_SWIER6_LOW() \
    while ( READ_SWIER6() );


#define WAIT_SWIER6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER6() && (--___t___ > 0)); }


#define WAIT_SWIER6_HIGH() \
    while (! READ_SWIER6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 5 
    // 
#define SWIER5_MASK 0x20U
#define SWIER5_OFFSET 5
#define SWIER5_START_BIT 5
#define SWIER5_WIDTH 1



typedef enum swier5 {
    SWIER_5_0,
    SWIER_5_1
} SWIER_5_T ;
#define WRITE_SWIER5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER5_MASK) | ((val << SWIER5_START_BIT) & SWIER5_MASK )); \
   } 

#define ENABLE_SWIER5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER5_MASK ); \
   }

#define DISABLE_SWIER5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER5_MASK ); \
   } 

#define READ_SWIER5() \
   ((READ_REGISTER_ULONG(0x10) & SWIER5_MASK)  >> SWIER5_START_BIT)

#define WHEN_SWIER5_HIGH() \
     if ( READ_SWIER5() )


#define UNLESS_SWIER5_HIGH() \
     if (! READ_SWIER5() )


#define WAIT_SWIER5_LOW() \
    while ( READ_SWIER5() );


#define WAIT_SWIER5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER5() && (--___t___ > 0)); }


#define WAIT_SWIER5_HIGH() \
    while (! READ_SWIER5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 4 
    // 
#define SWIER4_MASK 0x10U
#define SWIER4_OFFSET 4
#define SWIER4_START_BIT 4
#define SWIER4_WIDTH 1



typedef enum swier4 {
    SWIER_4_0,
    SWIER_4_1
} SWIER_4_T ;
#define WRITE_SWIER4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER4_MASK) | ((val << SWIER4_START_BIT) & SWIER4_MASK )); \
   } 

#define ENABLE_SWIER4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER4_MASK ); \
   }

#define DISABLE_SWIER4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER4_MASK ); \
   } 

#define READ_SWIER4() \
   ((READ_REGISTER_ULONG(0x10) & SWIER4_MASK)  >> SWIER4_START_BIT)

#define WHEN_SWIER4_HIGH() \
     if ( READ_SWIER4() )


#define UNLESS_SWIER4_HIGH() \
     if (! READ_SWIER4() )


#define WAIT_SWIER4_LOW() \
    while ( READ_SWIER4() );


#define WAIT_SWIER4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER4() && (--___t___ > 0)); }


#define WAIT_SWIER4_HIGH() \
    while (! READ_SWIER4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 3 
    // 
#define SWIER3_MASK 0x8U
#define SWIER3_OFFSET 3
#define SWIER3_START_BIT 3
#define SWIER3_WIDTH 1



typedef enum swier3 {
    SWIER_3_0,
    SWIER_3_1
} SWIER_3_T ;
#define WRITE_SWIER3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER3_MASK) | ((val << SWIER3_START_BIT) & SWIER3_MASK )); \
   } 

#define ENABLE_SWIER3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER3_MASK ); \
   }

#define DISABLE_SWIER3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER3_MASK ); \
   } 

#define READ_SWIER3() \
   ((READ_REGISTER_ULONG(0x10) & SWIER3_MASK)  >> SWIER3_START_BIT)

#define WHEN_SWIER3_HIGH() \
     if ( READ_SWIER3() )


#define UNLESS_SWIER3_HIGH() \
     if (! READ_SWIER3() )


#define WAIT_SWIER3_LOW() \
    while ( READ_SWIER3() );


#define WAIT_SWIER3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER3() && (--___t___ > 0)); }


#define WAIT_SWIER3_HIGH() \
    while (! READ_SWIER3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 2 
    // 
#define SWIER2_MASK 0x4U
#define SWIER2_OFFSET 2
#define SWIER2_START_BIT 2
#define SWIER2_WIDTH 1



typedef enum swier2 {
    SWIER_2_0,
    SWIER_2_1
} SWIER_2_T ;
#define WRITE_SWIER2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER2_MASK) | ((val << SWIER2_START_BIT) & SWIER2_MASK )); \
   } 

#define ENABLE_SWIER2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER2_MASK ); \
   }

#define DISABLE_SWIER2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER2_MASK ); \
   } 

#define READ_SWIER2() \
   ((READ_REGISTER_ULONG(0x10) & SWIER2_MASK)  >> SWIER2_START_BIT)

#define WHEN_SWIER2_HIGH() \
     if ( READ_SWIER2() )


#define UNLESS_SWIER2_HIGH() \
     if (! READ_SWIER2() )


#define WAIT_SWIER2_LOW() \
    while ( READ_SWIER2() );


#define WAIT_SWIER2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER2() && (--___t___ > 0)); }


#define WAIT_SWIER2_HIGH() \
    while (! READ_SWIER2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 1 
    // 
#define SWIER1_MASK 0x2U
#define SWIER1_OFFSET 1
#define SWIER1_START_BIT 1
#define SWIER1_WIDTH 1



typedef enum swier1 {
    SWIER_1_0,
    SWIER_1_1
} SWIER_1_T ;
#define WRITE_SWIER1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER1_MASK) | ((val << SWIER1_START_BIT) & SWIER1_MASK )); \
   } 

#define ENABLE_SWIER1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER1_MASK ); \
   }

#define DISABLE_SWIER1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER1_MASK ); \
   } 

#define READ_SWIER1() \
   ((READ_REGISTER_ULONG(0x10) & SWIER1_MASK)  >> SWIER1_START_BIT)

#define WHEN_SWIER1_HIGH() \
     if ( READ_SWIER1() )


#define UNLESS_SWIER1_HIGH() \
     if (! READ_SWIER1() )


#define WAIT_SWIER1_LOW() \
    while ( READ_SWIER1() );


#define WAIT_SWIER1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER1() && (--___t___ > 0)); }


#define WAIT_SWIER1_HIGH() \
    while (! READ_SWIER1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Swier
//
// Return the value of register SWIER
//
// Notes : Register Software interrupt event register (EXTI_SWIER) (SWIER) at the offset 0x10, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Software Interrupt on line 0 
    // 
#define SWIER0_MASK 0x1U
#define SWIER0_OFFSET 0
#define SWIER0_START_BIT 0
#define SWIER0_WIDTH 1



typedef enum swier0 {
    SWIER_0_0,
    SWIER_0_1
} SWIER_0_T ;
#define WRITE_SWIER0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ SWIER0_MASK) | ((val << SWIER0_START_BIT) & SWIER0_MASK )); \
   } 

#define ENABLE_SWIER0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  SWIER0_MASK ); \
   }

#define DISABLE_SWIER0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG(0x10, val & ~SWIER0_MASK ); \
   } 

#define READ_SWIER0() \
   ((READ_REGISTER_ULONG(0x10) & SWIER0_MASK)  >> SWIER0_START_BIT)

#define WHEN_SWIER0_HIGH() \
     if ( READ_SWIER0() )


#define UNLESS_SWIER0_HIGH() \
     if (! READ_SWIER0() )


#define WAIT_SWIER0_LOW() \
    while ( READ_SWIER0() );


#define WAIT_SWIER0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SWIER0() && (--___t___ > 0)); }


#define WAIT_SWIER0_HIGH() \
    while (! READ_SWIER0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_PR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_PR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_PR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 22 
    // 
#define PR22_MASK 0x400000U
#define PR22_OFFSET 22
#define PR22_START_BIT 22
#define PR22_WIDTH 1


#define PR_REG 0x14

typedef enum pr22 {
    PR_2_2_0,
    PR_2_2_1
} PR_22_T ;
#define WRITE_PR22(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR22_MASK) | ((val << PR22_START_BIT) & PR22_MASK )); \
   } 

#define ENABLE_PR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR22_MASK ); \
   }

#define DISABLE_PR22() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR22_MASK ); \
   } 

#define READ_PR22() \
   ((READ_REGISTER_ULONG(0x14) & PR22_MASK)  >> PR22_START_BIT)

#define WHEN_PR22_HIGH() \
     if ( READ_PR22() )


#define UNLESS_PR22_HIGH() \
     if (! READ_PR22() )


#define WAIT_PR22_LOW() \
    while ( READ_PR22() );


#define WAIT_PR22_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR22() && (--___t___ > 0)); }


#define WAIT_PR22_HIGH() \
    while (! READ_PR22() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 21 
    // 
#define PR21_MASK 0x200000U
#define PR21_OFFSET 21
#define PR21_START_BIT 21
#define PR21_WIDTH 1



typedef enum pr21 {
    PR_2_1_0,
    PR_2_1_1
} PR_21_T ;
#define WRITE_PR21(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR21_MASK) | ((val << PR21_START_BIT) & PR21_MASK )); \
   } 

#define ENABLE_PR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR21_MASK ); \
   }

#define DISABLE_PR21() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR21_MASK ); \
   } 

#define READ_PR21() \
   ((READ_REGISTER_ULONG(0x14) & PR21_MASK)  >> PR21_START_BIT)

#define WHEN_PR21_HIGH() \
     if ( READ_PR21() )


#define UNLESS_PR21_HIGH() \
     if (! READ_PR21() )


#define WAIT_PR21_LOW() \
    while ( READ_PR21() );


#define WAIT_PR21_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR21() && (--___t___ > 0)); }


#define WAIT_PR21_HIGH() \
    while (! READ_PR21() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 20 
    // 
#define PR20_MASK 0x100000U
#define PR20_OFFSET 20
#define PR20_START_BIT 20
#define PR20_WIDTH 1



typedef enum pr20 {
    PR_2_0_0,
    PR_2_0_1
} PR_20_T ;
#define WRITE_PR20(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR20_MASK) | ((val << PR20_START_BIT) & PR20_MASK )); \
   } 

#define ENABLE_PR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR20_MASK ); \
   }

#define DISABLE_PR20() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR20_MASK ); \
   } 

#define READ_PR20() \
   ((READ_REGISTER_ULONG(0x14) & PR20_MASK)  >> PR20_START_BIT)

#define WHEN_PR20_HIGH() \
     if ( READ_PR20() )


#define UNLESS_PR20_HIGH() \
     if (! READ_PR20() )


#define WAIT_PR20_LOW() \
    while ( READ_PR20() );


#define WAIT_PR20_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR20() && (--___t___ > 0)); }


#define WAIT_PR20_HIGH() \
    while (! READ_PR20() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 19 
    // 
#define PR19_MASK 0x80000U
#define PR19_OFFSET 19
#define PR19_START_BIT 19
#define PR19_WIDTH 1



typedef enum pr19 {
    PR_1_9_0,
    PR_1_9_1
} PR_19_T ;
#define WRITE_PR19(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR19_MASK) | ((val << PR19_START_BIT) & PR19_MASK )); \
   } 

#define ENABLE_PR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR19_MASK ); \
   }

#define DISABLE_PR19() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR19_MASK ); \
   } 

#define READ_PR19() \
   ((READ_REGISTER_ULONG(0x14) & PR19_MASK)  >> PR19_START_BIT)

#define WHEN_PR19_HIGH() \
     if ( READ_PR19() )


#define UNLESS_PR19_HIGH() \
     if (! READ_PR19() )


#define WAIT_PR19_LOW() \
    while ( READ_PR19() );


#define WAIT_PR19_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR19() && (--___t___ > 0)); }


#define WAIT_PR19_HIGH() \
    while (! READ_PR19() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 18 
    // 
#define PR18_MASK 0x40000U
#define PR18_OFFSET 18
#define PR18_START_BIT 18
#define PR18_WIDTH 1



typedef enum pr18 {
    PR_1_8_0,
    PR_1_8_1
} PR_18_T ;
#define WRITE_PR18(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR18_MASK) | ((val << PR18_START_BIT) & PR18_MASK )); \
   } 

#define ENABLE_PR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR18_MASK ); \
   }

#define DISABLE_PR18() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR18_MASK ); \
   } 

#define READ_PR18() \
   ((READ_REGISTER_ULONG(0x14) & PR18_MASK)  >> PR18_START_BIT)

#define WHEN_PR18_HIGH() \
     if ( READ_PR18() )


#define UNLESS_PR18_HIGH() \
     if (! READ_PR18() )


#define WAIT_PR18_LOW() \
    while ( READ_PR18() );


#define WAIT_PR18_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR18() && (--___t___ > 0)); }


#define WAIT_PR18_HIGH() \
    while (! READ_PR18() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 17 
    // 
#define PR17_MASK 0x20000U
#define PR17_OFFSET 17
#define PR17_START_BIT 17
#define PR17_WIDTH 1



typedef enum pr17 {
    PR_1_7_0,
    PR_1_7_1
} PR_17_T ;
#define WRITE_PR17(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR17_MASK) | ((val << PR17_START_BIT) & PR17_MASK )); \
   } 

#define ENABLE_PR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR17_MASK ); \
   }

#define DISABLE_PR17() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR17_MASK ); \
   } 

#define READ_PR17() \
   ((READ_REGISTER_ULONG(0x14) & PR17_MASK)  >> PR17_START_BIT)

#define WHEN_PR17_HIGH() \
     if ( READ_PR17() )


#define UNLESS_PR17_HIGH() \
     if (! READ_PR17() )


#define WAIT_PR17_LOW() \
    while ( READ_PR17() );


#define WAIT_PR17_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR17() && (--___t___ > 0)); }


#define WAIT_PR17_HIGH() \
    while (! READ_PR17() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 16 
    // 
#define PR16_MASK 0x10000U
#define PR16_OFFSET 16
#define PR16_START_BIT 16
#define PR16_WIDTH 1



typedef enum pr16 {
    PR_1_6_0,
    PR_1_6_1
} PR_16_T ;
#define WRITE_PR16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR16_MASK) | ((val << PR16_START_BIT) & PR16_MASK )); \
   } 

#define ENABLE_PR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR16_MASK ); \
   }

#define DISABLE_PR16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR16_MASK ); \
   } 

#define READ_PR16() \
   ((READ_REGISTER_ULONG(0x14) & PR16_MASK)  >> PR16_START_BIT)

#define WHEN_PR16_HIGH() \
     if ( READ_PR16() )


#define UNLESS_PR16_HIGH() \
     if (! READ_PR16() )


#define WAIT_PR16_LOW() \
    while ( READ_PR16() );


#define WAIT_PR16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR16() && (--___t___ > 0)); }


#define WAIT_PR16_HIGH() \
    while (! READ_PR16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 15 
    // 
#define PR15_MASK 0x8000U
#define PR15_OFFSET 15
#define PR15_START_BIT 15
#define PR15_WIDTH 1



typedef enum pr15 {
    PR_1_5_0,
    PR_1_5_1
} PR_15_T ;
#define WRITE_PR15(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR15_MASK) | ((val << PR15_START_BIT) & PR15_MASK )); \
   } 

#define ENABLE_PR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR15_MASK ); \
   }

#define DISABLE_PR15() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR15_MASK ); \
   } 

#define READ_PR15() \
   ((READ_REGISTER_ULONG(0x14) & PR15_MASK)  >> PR15_START_BIT)

#define WHEN_PR15_HIGH() \
     if ( READ_PR15() )


#define UNLESS_PR15_HIGH() \
     if (! READ_PR15() )


#define WAIT_PR15_LOW() \
    while ( READ_PR15() );


#define WAIT_PR15_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR15() && (--___t___ > 0)); }


#define WAIT_PR15_HIGH() \
    while (! READ_PR15() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 14 
    // 
#define PR14_MASK 0x4000U
#define PR14_OFFSET 14
#define PR14_START_BIT 14
#define PR14_WIDTH 1



typedef enum pr14 {
    PR_1_4_0,
    PR_1_4_1
} PR_14_T ;
#define WRITE_PR14(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR14_MASK) | ((val << PR14_START_BIT) & PR14_MASK )); \
   } 

#define ENABLE_PR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR14_MASK ); \
   }

#define DISABLE_PR14() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR14_MASK ); \
   } 

#define READ_PR14() \
   ((READ_REGISTER_ULONG(0x14) & PR14_MASK)  >> PR14_START_BIT)

#define WHEN_PR14_HIGH() \
     if ( READ_PR14() )


#define UNLESS_PR14_HIGH() \
     if (! READ_PR14() )


#define WAIT_PR14_LOW() \
    while ( READ_PR14() );


#define WAIT_PR14_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR14() && (--___t___ > 0)); }


#define WAIT_PR14_HIGH() \
    while (! READ_PR14() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 13 
    // 
#define PR13_MASK 0x2000U
#define PR13_OFFSET 13
#define PR13_START_BIT 13
#define PR13_WIDTH 1



typedef enum pr13 {
    PR_1_3_0,
    PR_1_3_1
} PR_13_T ;
#define WRITE_PR13(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR13_MASK) | ((val << PR13_START_BIT) & PR13_MASK )); \
   } 

#define ENABLE_PR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR13_MASK ); \
   }

#define DISABLE_PR13() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR13_MASK ); \
   } 

#define READ_PR13() \
   ((READ_REGISTER_ULONG(0x14) & PR13_MASK)  >> PR13_START_BIT)

#define WHEN_PR13_HIGH() \
     if ( READ_PR13() )


#define UNLESS_PR13_HIGH() \
     if (! READ_PR13() )


#define WAIT_PR13_LOW() \
    while ( READ_PR13() );


#define WAIT_PR13_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR13() && (--___t___ > 0)); }


#define WAIT_PR13_HIGH() \
    while (! READ_PR13() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 12 
    // 
#define PR12_MASK 0x1000U
#define PR12_OFFSET 12
#define PR12_START_BIT 12
#define PR12_WIDTH 1



typedef enum pr12 {
    PR_1_2_0,
    PR_1_2_1
} PR_12_T ;
#define WRITE_PR12(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR12_MASK) | ((val << PR12_START_BIT) & PR12_MASK )); \
   } 

#define ENABLE_PR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR12_MASK ); \
   }

#define DISABLE_PR12() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR12_MASK ); \
   } 

#define READ_PR12() \
   ((READ_REGISTER_ULONG(0x14) & PR12_MASK)  >> PR12_START_BIT)

#define WHEN_PR12_HIGH() \
     if ( READ_PR12() )


#define UNLESS_PR12_HIGH() \
     if (! READ_PR12() )


#define WAIT_PR12_LOW() \
    while ( READ_PR12() );


#define WAIT_PR12_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR12() && (--___t___ > 0)); }


#define WAIT_PR12_HIGH() \
    while (! READ_PR12() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 11 
    // 
#define PR11_MASK 0x800U
#define PR11_OFFSET 11
#define PR11_START_BIT 11
#define PR11_WIDTH 1



typedef enum pr11 {
    PR_1_1_0,
    PR_1_1_1
} PR_11_T ;
#define WRITE_PR11(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR11_MASK) | ((val << PR11_START_BIT) & PR11_MASK )); \
   } 

#define ENABLE_PR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR11_MASK ); \
   }

#define DISABLE_PR11() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR11_MASK ); \
   } 

#define READ_PR11() \
   ((READ_REGISTER_ULONG(0x14) & PR11_MASK)  >> PR11_START_BIT)

#define WHEN_PR11_HIGH() \
     if ( READ_PR11() )


#define UNLESS_PR11_HIGH() \
     if (! READ_PR11() )


#define WAIT_PR11_LOW() \
    while ( READ_PR11() );


#define WAIT_PR11_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR11() && (--___t___ > 0)); }


#define WAIT_PR11_HIGH() \
    while (! READ_PR11() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 10 
    // 
#define PR10_MASK 0x400U
#define PR10_OFFSET 10
#define PR10_START_BIT 10
#define PR10_WIDTH 1



typedef enum pr10 {
    PR_1_0_0,
    PR_1_0_1
} PR_10_T ;
#define WRITE_PR10(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR10_MASK) | ((val << PR10_START_BIT) & PR10_MASK )); \
   } 

#define ENABLE_PR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR10_MASK ); \
   }

#define DISABLE_PR10() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR10_MASK ); \
   } 

#define READ_PR10() \
   ((READ_REGISTER_ULONG(0x14) & PR10_MASK)  >> PR10_START_BIT)

#define WHEN_PR10_HIGH() \
     if ( READ_PR10() )


#define UNLESS_PR10_HIGH() \
     if (! READ_PR10() )


#define WAIT_PR10_LOW() \
    while ( READ_PR10() );


#define WAIT_PR10_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR10() && (--___t___ > 0)); }


#define WAIT_PR10_HIGH() \
    while (! READ_PR10() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 9 
    // 
#define PR9_MASK 0x200U
#define PR9_OFFSET 9
#define PR9_START_BIT 9
#define PR9_WIDTH 1



typedef enum pr9 {
    PR_9_0,
    PR_9_1
} PR_9_T ;
#define WRITE_PR9(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR9_MASK) | ((val << PR9_START_BIT) & PR9_MASK )); \
   } 

#define ENABLE_PR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR9_MASK ); \
   }

#define DISABLE_PR9() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR9_MASK ); \
   } 

#define READ_PR9() \
   ((READ_REGISTER_ULONG(0x14) & PR9_MASK)  >> PR9_START_BIT)

#define WHEN_PR9_HIGH() \
     if ( READ_PR9() )


#define UNLESS_PR9_HIGH() \
     if (! READ_PR9() )


#define WAIT_PR9_LOW() \
    while ( READ_PR9() );


#define WAIT_PR9_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR9() && (--___t___ > 0)); }


#define WAIT_PR9_HIGH() \
    while (! READ_PR9() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 8 
    // 
#define PR8_MASK 0x100U
#define PR8_OFFSET 8
#define PR8_START_BIT 8
#define PR8_WIDTH 1



typedef enum pr8 {
    PR_8_0,
    PR_8_1
} PR_8_T ;
#define WRITE_PR8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR8_MASK) | ((val << PR8_START_BIT) & PR8_MASK )); \
   } 

#define ENABLE_PR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR8_MASK ); \
   }

#define DISABLE_PR8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR8_MASK ); \
   } 

#define READ_PR8() \
   ((READ_REGISTER_ULONG(0x14) & PR8_MASK)  >> PR8_START_BIT)

#define WHEN_PR8_HIGH() \
     if ( READ_PR8() )


#define UNLESS_PR8_HIGH() \
     if (! READ_PR8() )


#define WAIT_PR8_LOW() \
    while ( READ_PR8() );


#define WAIT_PR8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR8() && (--___t___ > 0)); }


#define WAIT_PR8_HIGH() \
    while (! READ_PR8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 7 
    // 
#define PR7_MASK 0x80U
#define PR7_OFFSET 7
#define PR7_START_BIT 7
#define PR7_WIDTH 1



typedef enum pr7 {
    PR_7_0,
    PR_7_1
} PR_7_T ;
#define WRITE_PR7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR7_MASK) | ((val << PR7_START_BIT) & PR7_MASK )); \
   } 

#define ENABLE_PR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR7_MASK ); \
   }

#define DISABLE_PR7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR7_MASK ); \
   } 

#define READ_PR7() \
   ((READ_REGISTER_ULONG(0x14) & PR7_MASK)  >> PR7_START_BIT)

#define WHEN_PR7_HIGH() \
     if ( READ_PR7() )


#define UNLESS_PR7_HIGH() \
     if (! READ_PR7() )


#define WAIT_PR7_LOW() \
    while ( READ_PR7() );


#define WAIT_PR7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR7() && (--___t___ > 0)); }


#define WAIT_PR7_HIGH() \
    while (! READ_PR7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 6 
    // 
#define PR6_MASK 0x40U
#define PR6_OFFSET 6
#define PR6_START_BIT 6
#define PR6_WIDTH 1



typedef enum pr6 {
    PR_6_0,
    PR_6_1
} PR_6_T ;
#define WRITE_PR6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR6_MASK) | ((val << PR6_START_BIT) & PR6_MASK )); \
   } 

#define ENABLE_PR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR6_MASK ); \
   }

#define DISABLE_PR6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR6_MASK ); \
   } 

#define READ_PR6() \
   ((READ_REGISTER_ULONG(0x14) & PR6_MASK)  >> PR6_START_BIT)

#define WHEN_PR6_HIGH() \
     if ( READ_PR6() )


#define UNLESS_PR6_HIGH() \
     if (! READ_PR6() )


#define WAIT_PR6_LOW() \
    while ( READ_PR6() );


#define WAIT_PR6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR6() && (--___t___ > 0)); }


#define WAIT_PR6_HIGH() \
    while (! READ_PR6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 5 
    // 
#define PR5_MASK 0x20U
#define PR5_OFFSET 5
#define PR5_START_BIT 5
#define PR5_WIDTH 1



typedef enum pr5 {
    PR_5_0,
    PR_5_1
} PR_5_T ;
#define WRITE_PR5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR5_MASK) | ((val << PR5_START_BIT) & PR5_MASK )); \
   } 

#define ENABLE_PR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR5_MASK ); \
   }

#define DISABLE_PR5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR5_MASK ); \
   } 

#define READ_PR5() \
   ((READ_REGISTER_ULONG(0x14) & PR5_MASK)  >> PR5_START_BIT)

#define WHEN_PR5_HIGH() \
     if ( READ_PR5() )


#define UNLESS_PR5_HIGH() \
     if (! READ_PR5() )


#define WAIT_PR5_LOW() \
    while ( READ_PR5() );


#define WAIT_PR5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR5() && (--___t___ > 0)); }


#define WAIT_PR5_HIGH() \
    while (! READ_PR5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 4 
    // 
#define PR4_MASK 0x10U
#define PR4_OFFSET 4
#define PR4_START_BIT 4
#define PR4_WIDTH 1



typedef enum pr4 {
    PR_4_0,
    PR_4_1
} PR_4_T ;
#define WRITE_PR4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR4_MASK) | ((val << PR4_START_BIT) & PR4_MASK )); \
   } 

#define ENABLE_PR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR4_MASK ); \
   }

#define DISABLE_PR4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR4_MASK ); \
   } 

#define READ_PR4() \
   ((READ_REGISTER_ULONG(0x14) & PR4_MASK)  >> PR4_START_BIT)

#define WHEN_PR4_HIGH() \
     if ( READ_PR4() )


#define UNLESS_PR4_HIGH() \
     if (! READ_PR4() )


#define WAIT_PR4_LOW() \
    while ( READ_PR4() );


#define WAIT_PR4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR4() && (--___t___ > 0)); }


#define WAIT_PR4_HIGH() \
    while (! READ_PR4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 3 
    // 
#define PR3_MASK 0x8U
#define PR3_OFFSET 3
#define PR3_START_BIT 3
#define PR3_WIDTH 1



typedef enum pr3 {
    PR_3_0,
    PR_3_1
} PR_3_T ;
#define WRITE_PR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR3_MASK) | ((val << PR3_START_BIT) & PR3_MASK )); \
   } 

#define ENABLE_PR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR3_MASK ); \
   }

#define DISABLE_PR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR3_MASK ); \
   } 

#define READ_PR3() \
   ((READ_REGISTER_ULONG(0x14) & PR3_MASK)  >> PR3_START_BIT)

#define WHEN_PR3_HIGH() \
     if ( READ_PR3() )


#define UNLESS_PR3_HIGH() \
     if (! READ_PR3() )


#define WAIT_PR3_LOW() \
    while ( READ_PR3() );


#define WAIT_PR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR3() && (--___t___ > 0)); }


#define WAIT_PR3_HIGH() \
    while (! READ_PR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 2 
    // 
#define PR2_MASK 0x4U
#define PR2_OFFSET 2
#define PR2_START_BIT 2
#define PR2_WIDTH 1



typedef enum pr2 {
    PR_2_0,
    PR_2_1
} PR_2_T ;
#define WRITE_PR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR2_MASK) | ((val << PR2_START_BIT) & PR2_MASK )); \
   } 

#define ENABLE_PR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR2_MASK ); \
   }

#define DISABLE_PR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR2_MASK ); \
   } 

#define READ_PR2() \
   ((READ_REGISTER_ULONG(0x14) & PR2_MASK)  >> PR2_START_BIT)

#define WHEN_PR2_HIGH() \
     if ( READ_PR2() )


#define UNLESS_PR2_HIGH() \
     if (! READ_PR2() )


#define WAIT_PR2_LOW() \
    while ( READ_PR2() );


#define WAIT_PR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR2() && (--___t___ > 0)); }


#define WAIT_PR2_HIGH() \
    while (! READ_PR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 1 
    // 
#define PR1_MASK 0x2U
#define PR1_OFFSET 1
#define PR1_START_BIT 1
#define PR1_WIDTH 1



typedef enum pr1 {
    PR_1_0,
    PR_1_1
} PR_1_T ;
#define WRITE_PR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR1_MASK) | ((val << PR1_START_BIT) & PR1_MASK )); \
   } 

#define ENABLE_PR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR1_MASK ); \
   }

#define DISABLE_PR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR1_MASK ); \
   } 

#define READ_PR1() \
   ((READ_REGISTER_ULONG(0x14) & PR1_MASK)  >> PR1_START_BIT)

#define WHEN_PR1_HIGH() \
     if ( READ_PR1() )


#define UNLESS_PR1_HIGH() \
     if (! READ_PR1() )


#define WAIT_PR1_LOW() \
    while ( READ_PR1() );


#define WAIT_PR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR1() && (--___t___ > 0)); }


#define WAIT_PR1_HIGH() \
    while (! READ_PR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pr
//
// Return the value of register PR
//
// Notes : Register Pending register (EXTI_PR) (PR) at the offset 0x14, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pending bit 0 
    // 
#define PR0_MASK 0x1U
#define PR0_OFFSET 0
#define PR0_START_BIT 0
#define PR0_WIDTH 1



typedef enum pr0 {
    PR_0_0,
    PR_0_1
} PR_0_T ;
#define WRITE_PR0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ PR0_MASK) | ((val << PR0_START_BIT) & PR0_MASK )); \
   } 

#define ENABLE_PR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  PR0_MASK ); \
   }

#define DISABLE_PR0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG(0x14, val & ~PR0_MASK ); \
   } 

#define READ_PR0() \
   ((READ_REGISTER_ULONG(0x14) & PR0_MASK)  >> PR0_START_BIT)

#define WHEN_PR0_HIGH() \
     if ( READ_PR0() )


#define UNLESS_PR0_HIGH() \
     if (! READ_PR0() )


#define WAIT_PR0_LOW() \
    while ( READ_PR0() );


#define WAIT_PR0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PR0() && (--___t___ > 0)); }


#define WAIT_PR0_HIGH() \
    while (! READ_PR0() );


