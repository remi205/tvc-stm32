/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/nvic.h
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
 
#define NVIC 0xE000E000
/////////////////////////////////////////////////////////////////////////
//
// Function : Ictr
//
// Return the value of register ICTR
//
// Notes : Register Ictr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ICTR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ictr
//
// Return the value of register ICTR
//
// Notes : Register Interrupt Controller Type Register (ICTR) at the offset 0x4, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Total number of interrupt lines in groups 
    // 
#define INTLINESNUM_MASK 0xFU
#define INTLINESNUM_OFFSET 3
#define INTLINESNUM_START_BIT 0
#define INTLINESNUM_WIDTH 4


#define ICTR_REG 0x4

typedef enum intlinesnum {
    INTLINESNUM_0,
    INTLINESNUM_1
} INTLINESNUM_T ;
#define READ_INTLINESNUM() \
   ((READ_REGISTER_ULONG(0x4) & INTLINESNUM_MASK)  >> INTLINESNUM_START_BIT)

#define WRITE_INTLINESNUM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ INTLINESNUM_MASK) | ((val << INTLINESNUM_START_BIT) & INTLINESNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Iser0
//
// Return the value of register ISER0
//
// Notes : Register Iser0 at offset 0x100
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISER_0( y) \
     WRITE_REGISTER_ULONG( 0x100 , y)

#define SET_BITS_ISER_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val |  mask ); \
   }

#define CLEAR_BITS_ISER_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x100); \
     WRITE_REGISTER_ULONG( 0x100 , val & ~mask ); \
   }

#define READ_REGISTER_ISER_0() \
     READ_REGISTER_ULONG(0x100)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iser0
//
// Return the value of register ISER_0
//
// Notes : Register Interrupt Set-Enable Register (ISER0) at the offset 0x100, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETENA 
    // 
#define SETENA_MASK 0xFFFFFFFFU
#define SETENA_OFFSET 31
#define SETENA_START_BIT 0
#define SETENA_WIDTH 32


#define ISER_0_REG 0x100

typedef enum setena {
    SETENA_0,
    SETENA_1
} SETENA_T ;
#define READ_SETENA() \
   ((READ_REGISTER_ULONG(0x100) & SETENA_MASK)  >> SETENA_START_BIT)

#define WRITE_SETENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x100); \
     WRITE_REGISTER_ULONG(0x100, (OldValue & ~ SETENA_MASK) | ((val << SETENA_START_BIT) & SETENA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Iser1
//
// Return the value of register ISER1
//
// Notes : Register Iser1 at offset 0x104
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISER_1( y) \
     WRITE_REGISTER_ULONG( 0x104 , y)

#define SET_BITS_ISER_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val |  mask ); \
   }

#define CLEAR_BITS_ISER_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x104); \
     WRITE_REGISTER_ULONG( 0x104 , val & ~mask ); \
   }

#define READ_REGISTER_ISER_1() \
     READ_REGISTER_ULONG(0x104)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iser1
//
// Return the value of register ISER_1
//
// Notes : Register Interrupt Set-Enable Register (ISER1) at the offset 0x104, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETENA 
    // 
#define SETENA_MASK 0xFFFFFFFFU
#define SETENA_OFFSET 31
#define SETENA_START_BIT 0
#define SETENA_WIDTH 32


#define ISER_1_REG 0x104

#define READ_SETENA() \
   ((READ_REGISTER_ULONG(0x104) & SETENA_MASK)  >> SETENA_START_BIT)

#define WRITE_SETENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x104); \
     WRITE_REGISTER_ULONG(0x104, (OldValue & ~ SETENA_MASK) | ((val << SETENA_START_BIT) & SETENA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Iser2
//
// Return the value of register ISER2
//
// Notes : Register Iser2 at offset 0x108
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISER_2( y) \
     WRITE_REGISTER_ULONG( 0x108 , y)

#define SET_BITS_ISER_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val |  mask ); \
   }

#define CLEAR_BITS_ISER_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x108); \
     WRITE_REGISTER_ULONG( 0x108 , val & ~mask ); \
   }

#define READ_REGISTER_ISER_2() \
     READ_REGISTER_ULONG(0x108)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iser2
//
// Return the value of register ISER_2
//
// Notes : Register Interrupt Set-Enable Register (ISER2) at the offset 0x108, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETENA 
    // 
#define SETENA_MASK 0xFFFFFFFFU
#define SETENA_OFFSET 31
#define SETENA_START_BIT 0
#define SETENA_WIDTH 32


#define ISER_2_REG 0x108

#define READ_SETENA() \
   ((READ_REGISTER_ULONG(0x108) & SETENA_MASK)  >> SETENA_START_BIT)

#define WRITE_SETENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x108); \
     WRITE_REGISTER_ULONG(0x108, (OldValue & ~ SETENA_MASK) | ((val << SETENA_START_BIT) & SETENA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icer0
//
// Return the value of register ICER0
//
// Notes : Register Icer0 at offset 0x180
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICER_0( y) \
     WRITE_REGISTER_ULONG( 0x180 , y)

#define SET_BITS_ICER_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val |  mask ); \
   }

#define CLEAR_BITS_ICER_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x180); \
     WRITE_REGISTER_ULONG( 0x180 , val & ~mask ); \
   }

#define READ_REGISTER_ICER_0() \
     READ_REGISTER_ULONG(0x180)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icer0
//
// Return the value of register ICER_0
//
// Notes : Register Interrupt Clear-Enable Register (ICER0) at the offset 0x180, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLRENA 
    // 
#define CLRENA_MASK 0xFFFFFFFFU
#define CLRENA_OFFSET 31
#define CLRENA_START_BIT 0
#define CLRENA_WIDTH 32


#define ICER_0_REG 0x180

typedef enum clrena {
    CLRENA_0,
    CLRENA_1
} CLRENA_T ;
#define READ_CLRENA() \
   ((READ_REGISTER_ULONG(0x180) & CLRENA_MASK)  >> CLRENA_START_BIT)

#define WRITE_CLRENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x180); \
     WRITE_REGISTER_ULONG(0x180, (OldValue & ~ CLRENA_MASK) | ((val << CLRENA_START_BIT) & CLRENA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icer1
//
// Return the value of register ICER1
//
// Notes : Register Icer1 at offset 0x184
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICER_1( y) \
     WRITE_REGISTER_ULONG( 0x184 , y)

#define SET_BITS_ICER_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val |  mask ); \
   }

#define CLEAR_BITS_ICER_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x184); \
     WRITE_REGISTER_ULONG( 0x184 , val & ~mask ); \
   }

#define READ_REGISTER_ICER_1() \
     READ_REGISTER_ULONG(0x184)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icer1
//
// Return the value of register ICER_1
//
// Notes : Register Interrupt Clear-Enable Register (ICER1) at the offset 0x184, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLRENA 
    // 
#define CLRENA_MASK 0xFFFFFFFFU
#define CLRENA_OFFSET 31
#define CLRENA_START_BIT 0
#define CLRENA_WIDTH 32


#define ICER_1_REG 0x184

#define READ_CLRENA() \
   ((READ_REGISTER_ULONG(0x184) & CLRENA_MASK)  >> CLRENA_START_BIT)

#define WRITE_CLRENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x184); \
     WRITE_REGISTER_ULONG(0x184, (OldValue & ~ CLRENA_MASK) | ((val << CLRENA_START_BIT) & CLRENA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icer2
//
// Return the value of register ICER2
//
// Notes : Register Icer2 at offset 0x188
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICER_2( y) \
     WRITE_REGISTER_ULONG( 0x188 , y)

#define SET_BITS_ICER_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val |  mask ); \
   }

#define CLEAR_BITS_ICER_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x188); \
     WRITE_REGISTER_ULONG( 0x188 , val & ~mask ); \
   }

#define READ_REGISTER_ICER_2() \
     READ_REGISTER_ULONG(0x188)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icer2
//
// Return the value of register ICER_2
//
// Notes : Register Interrupt Clear-Enable Register (ICER2) at the offset 0x188, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLRENA 
    // 
#define CLRENA_MASK 0xFFFFFFFFU
#define CLRENA_OFFSET 31
#define CLRENA_START_BIT 0
#define CLRENA_WIDTH 32


#define ICER_2_REG 0x188

#define READ_CLRENA() \
   ((READ_REGISTER_ULONG(0x188) & CLRENA_MASK)  >> CLRENA_START_BIT)

#define WRITE_CLRENA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x188); \
     WRITE_REGISTER_ULONG(0x188, (OldValue & ~ CLRENA_MASK) | ((val << CLRENA_START_BIT) & CLRENA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ispr0
//
// Return the value of register ISPR0
//
// Notes : Register Ispr0 at offset 0x200
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISPR_0( y) \
     WRITE_REGISTER_ULONG( 0x200 , y)

#define SET_BITS_ISPR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val |  mask ); \
   }

#define CLEAR_BITS_ISPR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x200); \
     WRITE_REGISTER_ULONG( 0x200 , val & ~mask ); \
   }

#define READ_REGISTER_ISPR_0() \
     READ_REGISTER_ULONG(0x200)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ispr0
//
// Return the value of register ISPR_0
//
// Notes : Register Interrupt Set-Pending Register (ISPR0) at the offset 0x200, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETPEND 
    // 
#define SETPEND_MASK 0xFFFFFFFFU
#define SETPEND_OFFSET 31
#define SETPEND_START_BIT 0
#define SETPEND_WIDTH 32


#define ISPR_0_REG 0x200

typedef enum setpend {
    SETPEND_0,
    SETPEND_1
} SETPEND_T ;
#define READ_SETPEND() \
   ((READ_REGISTER_ULONG(0x200) & SETPEND_MASK)  >> SETPEND_START_BIT)

#define WRITE_SETPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x200); \
     WRITE_REGISTER_ULONG(0x200, (OldValue & ~ SETPEND_MASK) | ((val << SETPEND_START_BIT) & SETPEND_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ispr1
//
// Return the value of register ISPR1
//
// Notes : Register Ispr1 at offset 0x204
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISPR_1( y) \
     WRITE_REGISTER_ULONG( 0x204 , y)

#define SET_BITS_ISPR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val |  mask ); \
   }

#define CLEAR_BITS_ISPR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x204); \
     WRITE_REGISTER_ULONG( 0x204 , val & ~mask ); \
   }

#define READ_REGISTER_ISPR_1() \
     READ_REGISTER_ULONG(0x204)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ispr1
//
// Return the value of register ISPR_1
//
// Notes : Register Interrupt Set-Pending Register (ISPR1) at the offset 0x204, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETPEND 
    // 
#define SETPEND_MASK 0xFFFFFFFFU
#define SETPEND_OFFSET 31
#define SETPEND_START_BIT 0
#define SETPEND_WIDTH 32


#define ISPR_1_REG 0x204

#define READ_SETPEND() \
   ((READ_REGISTER_ULONG(0x204) & SETPEND_MASK)  >> SETPEND_START_BIT)

#define WRITE_SETPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x204); \
     WRITE_REGISTER_ULONG(0x204, (OldValue & ~ SETPEND_MASK) | ((val << SETPEND_START_BIT) & SETPEND_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ispr2
//
// Return the value of register ISPR2
//
// Notes : Register Ispr2 at offset 0x208
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ISPR_2( y) \
     WRITE_REGISTER_ULONG( 0x208 , y)

#define SET_BITS_ISPR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val |  mask ); \
   }

#define CLEAR_BITS_ISPR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x208); \
     WRITE_REGISTER_ULONG( 0x208 , val & ~mask ); \
   }

#define READ_REGISTER_ISPR_2() \
     READ_REGISTER_ULONG(0x208)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ispr2
//
// Return the value of register ISPR_2
//
// Notes : Register Interrupt Set-Pending Register (ISPR2) at the offset 0x208, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SETPEND 
    // 
#define SETPEND_MASK 0xFFFFFFFFU
#define SETPEND_OFFSET 31
#define SETPEND_START_BIT 0
#define SETPEND_WIDTH 32


#define ISPR_2_REG 0x208

#define READ_SETPEND() \
   ((READ_REGISTER_ULONG(0x208) & SETPEND_MASK)  >> SETPEND_START_BIT)

#define WRITE_SETPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x208); \
     WRITE_REGISTER_ULONG(0x208, (OldValue & ~ SETPEND_MASK) | ((val << SETPEND_START_BIT) & SETPEND_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icpr0
//
// Return the value of register ICPR0
//
// Notes : Register Icpr0 at offset 0x280
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICPR_0( y) \
     WRITE_REGISTER_ULONG( 0x280 , y)

#define SET_BITS_ICPR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val |  mask ); \
   }

#define CLEAR_BITS_ICPR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x280); \
     WRITE_REGISTER_ULONG( 0x280 , val & ~mask ); \
   }

#define READ_REGISTER_ICPR_0() \
     READ_REGISTER_ULONG(0x280)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icpr0
//
// Return the value of register ICPR_0
//
// Notes : Register Interrupt Clear-Pending Register (ICPR0) at the offset 0x280, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLRPEND 
    // 
#define CLRPEND_MASK 0xFFFFFFFFU
#define CLRPEND_OFFSET 31
#define CLRPEND_START_BIT 0
#define CLRPEND_WIDTH 32


#define ICPR_0_REG 0x280

typedef enum clrpend {
    CLRPEND_0,
    CLRPEND_1
} CLRPEND_T ;
#define READ_CLRPEND() \
   ((READ_REGISTER_ULONG(0x280) & CLRPEND_MASK)  >> CLRPEND_START_BIT)

#define WRITE_CLRPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x280); \
     WRITE_REGISTER_ULONG(0x280, (OldValue & ~ CLRPEND_MASK) | ((val << CLRPEND_START_BIT) & CLRPEND_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icpr1
//
// Return the value of register ICPR1
//
// Notes : Register Icpr1 at offset 0x284
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICPR_1( y) \
     WRITE_REGISTER_ULONG( 0x284 , y)

#define SET_BITS_ICPR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val |  mask ); \
   }

#define CLEAR_BITS_ICPR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x284); \
     WRITE_REGISTER_ULONG( 0x284 , val & ~mask ); \
   }

#define READ_REGISTER_ICPR_1() \
     READ_REGISTER_ULONG(0x284)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icpr1
//
// Return the value of register ICPR_1
//
// Notes : Register Interrupt Clear-Pending Register (ICPR1) at the offset 0x284, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLRPEND 
    // 
#define CLRPEND_MASK 0xFFFFFFFFU
#define CLRPEND_OFFSET 31
#define CLRPEND_START_BIT 0
#define CLRPEND_WIDTH 32


#define ICPR_1_REG 0x284

#define READ_CLRPEND() \
   ((READ_REGISTER_ULONG(0x284) & CLRPEND_MASK)  >> CLRPEND_START_BIT)

#define WRITE_CLRPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x284); \
     WRITE_REGISTER_ULONG(0x284, (OldValue & ~ CLRPEND_MASK) | ((val << CLRPEND_START_BIT) & CLRPEND_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icpr2
//
// Return the value of register ICPR2
//
// Notes : Register Icpr2 at offset 0x288
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICPR_2( y) \
     WRITE_REGISTER_ULONG( 0x288 , y)

#define SET_BITS_ICPR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x288); \
     WRITE_REGISTER_ULONG( 0x288 , val |  mask ); \
   }

#define CLEAR_BITS_ICPR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x288); \
     WRITE_REGISTER_ULONG( 0x288 , val & ~mask ); \
   }

#define READ_REGISTER_ICPR_2() \
     READ_REGISTER_ULONG(0x288)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icpr2
//
// Return the value of register ICPR_2
//
// Notes : Register Interrupt Clear-Pending Register (ICPR2) at the offset 0x288, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLRPEND 
    // 
#define CLRPEND_MASK 0xFFFFFFFFU
#define CLRPEND_OFFSET 31
#define CLRPEND_START_BIT 0
#define CLRPEND_WIDTH 32


#define ICPR_2_REG 0x288

#define READ_CLRPEND() \
   ((READ_REGISTER_ULONG(0x288) & CLRPEND_MASK)  >> CLRPEND_START_BIT)

#define WRITE_CLRPEND(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x288); \
     WRITE_REGISTER_ULONG(0x288, (OldValue & ~ CLRPEND_MASK) | ((val << CLRPEND_START_BIT) & CLRPEND_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Iabr0
//
// Return the value of register IABR0
//
// Notes : Register Iabr0 at offset 0x300
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_IABR_0() \
     READ_REGISTER_ULONG(0x300)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iabr0
//
// Return the value of register IABR_0
//
// Notes : Register Interrupt Active Bit Register (IABR0) at the offset 0x300, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACTIVE 
    // 
#define ACTIVE_MASK 0xFFFFFFFFU
#define ACTIVE_OFFSET 31
#define ACTIVE_START_BIT 0
#define ACTIVE_WIDTH 32


#define IABR_0_REG 0x300

typedef enum active {
    ACTIVE_0,
    ACTIVE_1
} ACTIVE_T ;
#define READ_ACTIVE() \
   ((READ_REGISTER_ULONG(0x300) & ACTIVE_MASK)  >> ACTIVE_START_BIT)

#define WRITE_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x300); \
     WRITE_REGISTER_ULONG(0x300, (OldValue & ~ ACTIVE_MASK) | ((val << ACTIVE_START_BIT) & ACTIVE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Iabr1
//
// Return the value of register IABR1
//
// Notes : Register Iabr1 at offset 0x304
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_IABR_1() \
     READ_REGISTER_ULONG(0x304)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iabr1
//
// Return the value of register IABR_1
//
// Notes : Register Interrupt Active Bit Register (IABR1) at the offset 0x304, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACTIVE 
    // 
#define ACTIVE_MASK 0xFFFFFFFFU
#define ACTIVE_OFFSET 31
#define ACTIVE_START_BIT 0
#define ACTIVE_WIDTH 32


#define IABR_1_REG 0x304

#define READ_ACTIVE() \
   ((READ_REGISTER_ULONG(0x304) & ACTIVE_MASK)  >> ACTIVE_START_BIT)

#define WRITE_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x304); \
     WRITE_REGISTER_ULONG(0x304, (OldValue & ~ ACTIVE_MASK) | ((val << ACTIVE_START_BIT) & ACTIVE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Iabr2
//
// Return the value of register IABR2
//
// Notes : Register Iabr2 at offset 0x308
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_IABR_2() \
     READ_REGISTER_ULONG(0x308)

/////////////////////////////////////////////////////////////////////////
//
// Function : Iabr2
//
// Return the value of register IABR_2
//
// Notes : Register Interrupt Active Bit Register (IABR2) at the offset 0x308, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACTIVE 
    // 
#define ACTIVE_MASK 0xFFFFFFFFU
#define ACTIVE_OFFSET 31
#define ACTIVE_START_BIT 0
#define ACTIVE_WIDTH 32


#define IABR_2_REG 0x308

#define READ_ACTIVE() \
   ((READ_REGISTER_ULONG(0x308) & ACTIVE_MASK)  >> ACTIVE_START_BIT)

#define WRITE_ACTIVE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x308); \
     WRITE_REGISTER_ULONG(0x308, (OldValue & ~ ACTIVE_MASK) | ((val << ACTIVE_START_BIT) & ACTIVE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr0
//
// Return the value of register IPR0
//
// Notes : Register Ipr0 at offset 0x400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_0( y) \
     WRITE_REGISTER_ULONG( 0x400 , y)

#define SET_BITS_IPR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x400); \
     WRITE_REGISTER_ULONG( 0x400 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x400); \
     WRITE_REGISTER_ULONG( 0x400 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_0() \
     READ_REGISTER_ULONG(0x400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr0
//
// Return the value of register IPR_0
//
// Notes : Register Interrupt Priority Register (IPR0) at the offset 0x400, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_0_REG 0x400

typedef enum ipr_n3 {
    IPR_N_3_0,
    IPR_N_3_1
} IPR_N3_T ;
#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x400) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr0
//
// Return the value of register IPR_0
//
// Notes : Register Interrupt Priority Register (IPR0) at the offset 0x400, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



typedef enum ipr_n2 {
    IPR_N_2_0,
    IPR_N_2_1
} IPR_N2_T ;
#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x400) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr0
//
// Return the value of register IPR_0
//
// Notes : Register Interrupt Priority Register (IPR0) at the offset 0x400, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



typedef enum ipr_n1 {
    IPR_N_1_0,
    IPR_N_1_1
} IPR_N1_T ;
#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x400) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr0
//
// Return the value of register IPR_0
//
// Notes : Register Interrupt Priority Register (IPR0) at the offset 0x400, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



typedef enum ipr_n0 {
    IPR_N_0_0,
    IPR_N_0_1
} IPR_N0_T ;
#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x400) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr1
//
// Return the value of register IPR1
//
// Notes : Register Ipr1 at offset 0x404
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1( y) \
     WRITE_REGISTER_ULONG( 0x404 , y)

#define SET_BITS_IPR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x404); \
     WRITE_REGISTER_ULONG( 0x404 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x404); \
     WRITE_REGISTER_ULONG( 0x404 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1() \
     READ_REGISTER_ULONG(0x404)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr1
//
// Return the value of register IPR_1
//
// Notes : Register Interrupt Priority Register (IPR1) at the offset 0x404, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_1_REG 0x404

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x404) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x404); \
     WRITE_REGISTER_ULONG(0x404, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr1
//
// Return the value of register IPR_1
//
// Notes : Register Interrupt Priority Register (IPR1) at the offset 0x404, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x404) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x404); \
     WRITE_REGISTER_ULONG(0x404, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr1
//
// Return the value of register IPR_1
//
// Notes : Register Interrupt Priority Register (IPR1) at the offset 0x404, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x404) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x404); \
     WRITE_REGISTER_ULONG(0x404, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr1
//
// Return the value of register IPR_1
//
// Notes : Register Interrupt Priority Register (IPR1) at the offset 0x404, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x404) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x404); \
     WRITE_REGISTER_ULONG(0x404, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr2
//
// Return the value of register IPR2
//
// Notes : Register Ipr2 at offset 0x408
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_2( y) \
     WRITE_REGISTER_ULONG( 0x408 , y)

#define SET_BITS_IPR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x408); \
     WRITE_REGISTER_ULONG( 0x408 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x408); \
     WRITE_REGISTER_ULONG( 0x408 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_2() \
     READ_REGISTER_ULONG(0x408)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr2
//
// Return the value of register IPR_2
//
// Notes : Register Interrupt Priority Register (IPR2) at the offset 0x408, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_2_REG 0x408

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x408) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x408); \
     WRITE_REGISTER_ULONG(0x408, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr2
//
// Return the value of register IPR_2
//
// Notes : Register Interrupt Priority Register (IPR2) at the offset 0x408, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x408) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x408); \
     WRITE_REGISTER_ULONG(0x408, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr2
//
// Return the value of register IPR_2
//
// Notes : Register Interrupt Priority Register (IPR2) at the offset 0x408, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x408) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x408); \
     WRITE_REGISTER_ULONG(0x408, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr2
//
// Return the value of register IPR_2
//
// Notes : Register Interrupt Priority Register (IPR2) at the offset 0x408, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x408) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x408); \
     WRITE_REGISTER_ULONG(0x408, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr3
//
// Return the value of register IPR3
//
// Notes : Register Ipr3 at offset 0x40C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_3( y) \
     WRITE_REGISTER_ULONG( 0x40C , y)

#define SET_BITS_IPR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40C); \
     WRITE_REGISTER_ULONG( 0x40C , val |  mask ); \
   }

#define CLEAR_BITS_IPR_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40C); \
     WRITE_REGISTER_ULONG( 0x40C , val & ~mask ); \
   }

#define READ_REGISTER_IPR_3() \
     READ_REGISTER_ULONG(0x40C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr3
//
// Return the value of register IPR_3
//
// Notes : Register Interrupt Priority Register (IPR3) at the offset 0x40C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_3_REG 0x40C

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x40C) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40C); \
     WRITE_REGISTER_ULONG(0x40C, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr3
//
// Return the value of register IPR_3
//
// Notes : Register Interrupt Priority Register (IPR3) at the offset 0x40C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x40C) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40C); \
     WRITE_REGISTER_ULONG(0x40C, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr3
//
// Return the value of register IPR_3
//
// Notes : Register Interrupt Priority Register (IPR3) at the offset 0x40C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x40C) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40C); \
     WRITE_REGISTER_ULONG(0x40C, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr3
//
// Return the value of register IPR_3
//
// Notes : Register Interrupt Priority Register (IPR3) at the offset 0x40C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x40C) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40C); \
     WRITE_REGISTER_ULONG(0x40C, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr4
//
// Return the value of register IPR4
//
// Notes : Register Ipr4 at offset 0x410
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_4( y) \
     WRITE_REGISTER_ULONG( 0x410 , y)

#define SET_BITS_IPR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x410); \
     WRITE_REGISTER_ULONG( 0x410 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x410); \
     WRITE_REGISTER_ULONG( 0x410 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_4() \
     READ_REGISTER_ULONG(0x410)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr4
//
// Return the value of register IPR_4
//
// Notes : Register Interrupt Priority Register (IPR4) at the offset 0x410, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_4_REG 0x410

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x410) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x410); \
     WRITE_REGISTER_ULONG(0x410, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr4
//
// Return the value of register IPR_4
//
// Notes : Register Interrupt Priority Register (IPR4) at the offset 0x410, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x410) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x410); \
     WRITE_REGISTER_ULONG(0x410, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr4
//
// Return the value of register IPR_4
//
// Notes : Register Interrupt Priority Register (IPR4) at the offset 0x410, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x410) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x410); \
     WRITE_REGISTER_ULONG(0x410, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr4
//
// Return the value of register IPR_4
//
// Notes : Register Interrupt Priority Register (IPR4) at the offset 0x410, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x410) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x410); \
     WRITE_REGISTER_ULONG(0x410, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr5
//
// Return the value of register IPR5
//
// Notes : Register Ipr5 at offset 0x414
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_5( y) \
     WRITE_REGISTER_ULONG( 0x414 , y)

#define SET_BITS_IPR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x414); \
     WRITE_REGISTER_ULONG( 0x414 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x414); \
     WRITE_REGISTER_ULONG( 0x414 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_5() \
     READ_REGISTER_ULONG(0x414)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr5
//
// Return the value of register IPR_5
//
// Notes : Register Interrupt Priority Register (IPR5) at the offset 0x414, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_5_REG 0x414

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x414) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x414); \
     WRITE_REGISTER_ULONG(0x414, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr5
//
// Return the value of register IPR_5
//
// Notes : Register Interrupt Priority Register (IPR5) at the offset 0x414, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x414) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x414); \
     WRITE_REGISTER_ULONG(0x414, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr5
//
// Return the value of register IPR_5
//
// Notes : Register Interrupt Priority Register (IPR5) at the offset 0x414, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x414) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x414); \
     WRITE_REGISTER_ULONG(0x414, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr5
//
// Return the value of register IPR_5
//
// Notes : Register Interrupt Priority Register (IPR5) at the offset 0x414, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x414) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x414); \
     WRITE_REGISTER_ULONG(0x414, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr6
//
// Return the value of register IPR6
//
// Notes : Register Ipr6 at offset 0x418
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_6( y) \
     WRITE_REGISTER_ULONG( 0x418 , y)

#define SET_BITS_IPR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x418); \
     WRITE_REGISTER_ULONG( 0x418 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x418); \
     WRITE_REGISTER_ULONG( 0x418 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_6() \
     READ_REGISTER_ULONG(0x418)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr6
//
// Return the value of register IPR_6
//
// Notes : Register Interrupt Priority Register (IPR6) at the offset 0x418, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_6_REG 0x418

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x418) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x418); \
     WRITE_REGISTER_ULONG(0x418, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr6
//
// Return the value of register IPR_6
//
// Notes : Register Interrupt Priority Register (IPR6) at the offset 0x418, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x418) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x418); \
     WRITE_REGISTER_ULONG(0x418, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr6
//
// Return the value of register IPR_6
//
// Notes : Register Interrupt Priority Register (IPR6) at the offset 0x418, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x418) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x418); \
     WRITE_REGISTER_ULONG(0x418, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr6
//
// Return the value of register IPR_6
//
// Notes : Register Interrupt Priority Register (IPR6) at the offset 0x418, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x418) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x418); \
     WRITE_REGISTER_ULONG(0x418, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr7
//
// Return the value of register IPR7
//
// Notes : Register Ipr7 at offset 0x41C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_7( y) \
     WRITE_REGISTER_ULONG( 0x41C , y)

#define SET_BITS_IPR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x41C); \
     WRITE_REGISTER_ULONG( 0x41C , val |  mask ); \
   }

#define CLEAR_BITS_IPR_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x41C); \
     WRITE_REGISTER_ULONG( 0x41C , val & ~mask ); \
   }

#define READ_REGISTER_IPR_7() \
     READ_REGISTER_ULONG(0x41C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr7
//
// Return the value of register IPR_7
//
// Notes : Register Interrupt Priority Register (IPR7) at the offset 0x41C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_7_REG 0x41C

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x41C) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x41C); \
     WRITE_REGISTER_ULONG(0x41C, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr7
//
// Return the value of register IPR_7
//
// Notes : Register Interrupt Priority Register (IPR7) at the offset 0x41C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x41C) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x41C); \
     WRITE_REGISTER_ULONG(0x41C, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr7
//
// Return the value of register IPR_7
//
// Notes : Register Interrupt Priority Register (IPR7) at the offset 0x41C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x41C) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x41C); \
     WRITE_REGISTER_ULONG(0x41C, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr7
//
// Return the value of register IPR_7
//
// Notes : Register Interrupt Priority Register (IPR7) at the offset 0x41C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x41C) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x41C); \
     WRITE_REGISTER_ULONG(0x41C, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr8
//
// Return the value of register IPR8
//
// Notes : Register Ipr8 at offset 0x420
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_8( y) \
     WRITE_REGISTER_ULONG( 0x420 , y)

#define SET_BITS_IPR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x420); \
     WRITE_REGISTER_ULONG( 0x420 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x420); \
     WRITE_REGISTER_ULONG( 0x420 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_8() \
     READ_REGISTER_ULONG(0x420)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr8
//
// Return the value of register IPR_8
//
// Notes : Register Interrupt Priority Register (IPR8) at the offset 0x420, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_8_REG 0x420

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x420) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x420); \
     WRITE_REGISTER_ULONG(0x420, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr8
//
// Return the value of register IPR_8
//
// Notes : Register Interrupt Priority Register (IPR8) at the offset 0x420, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x420) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x420); \
     WRITE_REGISTER_ULONG(0x420, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr8
//
// Return the value of register IPR_8
//
// Notes : Register Interrupt Priority Register (IPR8) at the offset 0x420, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x420) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x420); \
     WRITE_REGISTER_ULONG(0x420, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr8
//
// Return the value of register IPR_8
//
// Notes : Register Interrupt Priority Register (IPR8) at the offset 0x420, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x420) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x420); \
     WRITE_REGISTER_ULONG(0x420, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr9
//
// Return the value of register IPR9
//
// Notes : Register Ipr9 at offset 0x424
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_9( y) \
     WRITE_REGISTER_ULONG( 0x424 , y)

#define SET_BITS_IPR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x424); \
     WRITE_REGISTER_ULONG( 0x424 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x424); \
     WRITE_REGISTER_ULONG( 0x424 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_9() \
     READ_REGISTER_ULONG(0x424)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr9
//
// Return the value of register IPR_9
//
// Notes : Register Interrupt Priority Register (IPR9) at the offset 0x424, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_9_REG 0x424

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x424) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x424); \
     WRITE_REGISTER_ULONG(0x424, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr9
//
// Return the value of register IPR_9
//
// Notes : Register Interrupt Priority Register (IPR9) at the offset 0x424, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x424) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x424); \
     WRITE_REGISTER_ULONG(0x424, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr9
//
// Return the value of register IPR_9
//
// Notes : Register Interrupt Priority Register (IPR9) at the offset 0x424, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x424) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x424); \
     WRITE_REGISTER_ULONG(0x424, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr9
//
// Return the value of register IPR_9
//
// Notes : Register Interrupt Priority Register (IPR9) at the offset 0x424, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x424) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x424); \
     WRITE_REGISTER_ULONG(0x424, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr10
//
// Return the value of register IPR10
//
// Notes : Register Ipr10 at offset 0x428
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_0( y) \
     WRITE_REGISTER_ULONG( 0x428 , y)

#define SET_BITS_IPR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x428); \
     WRITE_REGISTER_ULONG( 0x428 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x428); \
     WRITE_REGISTER_ULONG( 0x428 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_0() \
     READ_REGISTER_ULONG(0x428)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr10
//
// Return the value of register IPR_1_0
//
// Notes : Register Interrupt Priority Register (IPR10) at the offset 0x428, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_10_REG 0x428

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x428) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x428); \
     WRITE_REGISTER_ULONG(0x428, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr10
//
// Return the value of register IPR_1_0
//
// Notes : Register Interrupt Priority Register (IPR10) at the offset 0x428, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x428) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x428); \
     WRITE_REGISTER_ULONG(0x428, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr10
//
// Return the value of register IPR_1_0
//
// Notes : Register Interrupt Priority Register (IPR10) at the offset 0x428, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x428) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x428); \
     WRITE_REGISTER_ULONG(0x428, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr10
//
// Return the value of register IPR_1_0
//
// Notes : Register Interrupt Priority Register (IPR10) at the offset 0x428, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x428) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x428); \
     WRITE_REGISTER_ULONG(0x428, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr11
//
// Return the value of register IPR11
//
// Notes : Register Ipr11 at offset 0x42C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_1( y) \
     WRITE_REGISTER_ULONG( 0x42C , y)

#define SET_BITS_IPR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x42C); \
     WRITE_REGISTER_ULONG( 0x42C , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_1(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x42C); \
     WRITE_REGISTER_ULONG( 0x42C , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_1() \
     READ_REGISTER_ULONG(0x42C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr11
//
// Return the value of register IPR_1_1
//
// Notes : Register Interrupt Priority Register (IPR11) at the offset 0x42C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_11_REG 0x42C

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x42C) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x42C); \
     WRITE_REGISTER_ULONG(0x42C, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr11
//
// Return the value of register IPR_1_1
//
// Notes : Register Interrupt Priority Register (IPR11) at the offset 0x42C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x42C) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x42C); \
     WRITE_REGISTER_ULONG(0x42C, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr11
//
// Return the value of register IPR_1_1
//
// Notes : Register Interrupt Priority Register (IPR11) at the offset 0x42C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x42C) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x42C); \
     WRITE_REGISTER_ULONG(0x42C, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr11
//
// Return the value of register IPR_1_1
//
// Notes : Register Interrupt Priority Register (IPR11) at the offset 0x42C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x42C) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x42C); \
     WRITE_REGISTER_ULONG(0x42C, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr12
//
// Return the value of register IPR12
//
// Notes : Register Ipr12 at offset 0x430
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_2( y) \
     WRITE_REGISTER_ULONG( 0x430 , y)

#define SET_BITS_IPR_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x430); \
     WRITE_REGISTER_ULONG( 0x430 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_2(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x430); \
     WRITE_REGISTER_ULONG( 0x430 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_2() \
     READ_REGISTER_ULONG(0x430)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr12
//
// Return the value of register IPR_1_2
//
// Notes : Register Interrupt Priority Register (IPR12) at the offset 0x430, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_12_REG 0x430

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x430) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x430); \
     WRITE_REGISTER_ULONG(0x430, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr12
//
// Return the value of register IPR_1_2
//
// Notes : Register Interrupt Priority Register (IPR12) at the offset 0x430, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x430) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x430); \
     WRITE_REGISTER_ULONG(0x430, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr12
//
// Return the value of register IPR_1_2
//
// Notes : Register Interrupt Priority Register (IPR12) at the offset 0x430, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x430) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x430); \
     WRITE_REGISTER_ULONG(0x430, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr12
//
// Return the value of register IPR_1_2
//
// Notes : Register Interrupt Priority Register (IPR12) at the offset 0x430, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x430) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x430); \
     WRITE_REGISTER_ULONG(0x430, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr13
//
// Return the value of register IPR13
//
// Notes : Register Ipr13 at offset 0x434
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_3( y) \
     WRITE_REGISTER_ULONG( 0x434 , y)

#define SET_BITS_IPR_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x434); \
     WRITE_REGISTER_ULONG( 0x434 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_3(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x434); \
     WRITE_REGISTER_ULONG( 0x434 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_3() \
     READ_REGISTER_ULONG(0x434)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr13
//
// Return the value of register IPR_1_3
//
// Notes : Register Interrupt Priority Register (IPR13) at the offset 0x434, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_13_REG 0x434

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x434) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x434); \
     WRITE_REGISTER_ULONG(0x434, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr13
//
// Return the value of register IPR_1_3
//
// Notes : Register Interrupt Priority Register (IPR13) at the offset 0x434, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x434) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x434); \
     WRITE_REGISTER_ULONG(0x434, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr13
//
// Return the value of register IPR_1_3
//
// Notes : Register Interrupt Priority Register (IPR13) at the offset 0x434, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x434) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x434); \
     WRITE_REGISTER_ULONG(0x434, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr13
//
// Return the value of register IPR_1_3
//
// Notes : Register Interrupt Priority Register (IPR13) at the offset 0x434, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x434) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x434); \
     WRITE_REGISTER_ULONG(0x434, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr14
//
// Return the value of register IPR14
//
// Notes : Register Ipr14 at offset 0x438
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_4( y) \
     WRITE_REGISTER_ULONG( 0x438 , y)

#define SET_BITS_IPR_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x438); \
     WRITE_REGISTER_ULONG( 0x438 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_4(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x438); \
     WRITE_REGISTER_ULONG( 0x438 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_4() \
     READ_REGISTER_ULONG(0x438)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr14
//
// Return the value of register IPR_1_4
//
// Notes : Register Interrupt Priority Register (IPR14) at the offset 0x438, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_14_REG 0x438

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x438) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x438); \
     WRITE_REGISTER_ULONG(0x438, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr14
//
// Return the value of register IPR_1_4
//
// Notes : Register Interrupt Priority Register (IPR14) at the offset 0x438, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x438) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x438); \
     WRITE_REGISTER_ULONG(0x438, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr14
//
// Return the value of register IPR_1_4
//
// Notes : Register Interrupt Priority Register (IPR14) at the offset 0x438, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x438) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x438); \
     WRITE_REGISTER_ULONG(0x438, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr14
//
// Return the value of register IPR_1_4
//
// Notes : Register Interrupt Priority Register (IPR14) at the offset 0x438, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x438) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x438); \
     WRITE_REGISTER_ULONG(0x438, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr15
//
// Return the value of register IPR15
//
// Notes : Register Ipr15 at offset 0x43C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_5( y) \
     WRITE_REGISTER_ULONG( 0x43C , y)

#define SET_BITS_IPR_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x43C); \
     WRITE_REGISTER_ULONG( 0x43C , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_5(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x43C); \
     WRITE_REGISTER_ULONG( 0x43C , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_5() \
     READ_REGISTER_ULONG(0x43C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr15
//
// Return the value of register IPR_1_5
//
// Notes : Register Interrupt Priority Register (IPR15) at the offset 0x43C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_15_REG 0x43C

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x43C) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x43C); \
     WRITE_REGISTER_ULONG(0x43C, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr15
//
// Return the value of register IPR_1_5
//
// Notes : Register Interrupt Priority Register (IPR15) at the offset 0x43C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x43C) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x43C); \
     WRITE_REGISTER_ULONG(0x43C, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr15
//
// Return the value of register IPR_1_5
//
// Notes : Register Interrupt Priority Register (IPR15) at the offset 0x43C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x43C) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x43C); \
     WRITE_REGISTER_ULONG(0x43C, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr15
//
// Return the value of register IPR_1_5
//
// Notes : Register Interrupt Priority Register (IPR15) at the offset 0x43C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x43C) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x43C); \
     WRITE_REGISTER_ULONG(0x43C, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr16
//
// Return the value of register IPR16
//
// Notes : Register Ipr16 at offset 0x440
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_6( y) \
     WRITE_REGISTER_ULONG( 0x440 , y)

#define SET_BITS_IPR_1_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x440); \
     WRITE_REGISTER_ULONG( 0x440 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_6(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x440); \
     WRITE_REGISTER_ULONG( 0x440 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_6() \
     READ_REGISTER_ULONG(0x440)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr16
//
// Return the value of register IPR_1_6
//
// Notes : Register Interrupt Priority Register (IPR16) at the offset 0x440, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_16_REG 0x440

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x440) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x440); \
     WRITE_REGISTER_ULONG(0x440, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr16
//
// Return the value of register IPR_1_6
//
// Notes : Register Interrupt Priority Register (IPR16) at the offset 0x440, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x440) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x440); \
     WRITE_REGISTER_ULONG(0x440, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr16
//
// Return the value of register IPR_1_6
//
// Notes : Register Interrupt Priority Register (IPR16) at the offset 0x440, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x440) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x440); \
     WRITE_REGISTER_ULONG(0x440, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr16
//
// Return the value of register IPR_1_6
//
// Notes : Register Interrupt Priority Register (IPR16) at the offset 0x440, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x440) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x440); \
     WRITE_REGISTER_ULONG(0x440, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr17
//
// Return the value of register IPR17
//
// Notes : Register Ipr17 at offset 0x444
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_7( y) \
     WRITE_REGISTER_ULONG( 0x444 , y)

#define SET_BITS_IPR_1_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x444); \
     WRITE_REGISTER_ULONG( 0x444 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_7(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x444); \
     WRITE_REGISTER_ULONG( 0x444 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_7() \
     READ_REGISTER_ULONG(0x444)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr17
//
// Return the value of register IPR_1_7
//
// Notes : Register Interrupt Priority Register (IPR17) at the offset 0x444, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_17_REG 0x444

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x444) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x444); \
     WRITE_REGISTER_ULONG(0x444, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr17
//
// Return the value of register IPR_1_7
//
// Notes : Register Interrupt Priority Register (IPR17) at the offset 0x444, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x444) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x444); \
     WRITE_REGISTER_ULONG(0x444, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr17
//
// Return the value of register IPR_1_7
//
// Notes : Register Interrupt Priority Register (IPR17) at the offset 0x444, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x444) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x444); \
     WRITE_REGISTER_ULONG(0x444, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr17
//
// Return the value of register IPR_1_7
//
// Notes : Register Interrupt Priority Register (IPR17) at the offset 0x444, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x444) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x444); \
     WRITE_REGISTER_ULONG(0x444, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr18
//
// Return the value of register IPR18
//
// Notes : Register Ipr18 at offset 0x448
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_8( y) \
     WRITE_REGISTER_ULONG( 0x448 , y)

#define SET_BITS_IPR_1_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x448); \
     WRITE_REGISTER_ULONG( 0x448 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_8(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x448); \
     WRITE_REGISTER_ULONG( 0x448 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_8() \
     READ_REGISTER_ULONG(0x448)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr18
//
// Return the value of register IPR_1_8
//
// Notes : Register Interrupt Priority Register (IPR18) at the offset 0x448, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_18_REG 0x448

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x448) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x448); \
     WRITE_REGISTER_ULONG(0x448, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr18
//
// Return the value of register IPR_1_8
//
// Notes : Register Interrupt Priority Register (IPR18) at the offset 0x448, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x448) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x448); \
     WRITE_REGISTER_ULONG(0x448, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr18
//
// Return the value of register IPR_1_8
//
// Notes : Register Interrupt Priority Register (IPR18) at the offset 0x448, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x448) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x448); \
     WRITE_REGISTER_ULONG(0x448, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr18
//
// Return the value of register IPR_1_8
//
// Notes : Register Interrupt Priority Register (IPR18) at the offset 0x448, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x448) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x448); \
     WRITE_REGISTER_ULONG(0x448, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr19
//
// Return the value of register IPR19
//
// Notes : Register Ipr19 at offset 0x44C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_1_9( y) \
     WRITE_REGISTER_ULONG( 0x44C , y)

#define SET_BITS_IPR_1_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44C); \
     WRITE_REGISTER_ULONG( 0x44C , val |  mask ); \
   }

#define CLEAR_BITS_IPR_1_9(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44C); \
     WRITE_REGISTER_ULONG( 0x44C , val & ~mask ); \
   }

#define READ_REGISTER_IPR_1_9() \
     READ_REGISTER_ULONG(0x44C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr19
//
// Return the value of register IPR_1_9
//
// Notes : Register Interrupt Priority Register (IPR19) at the offset 0x44C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_19_REG 0x44C

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x44C) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44C); \
     WRITE_REGISTER_ULONG(0x44C, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr19
//
// Return the value of register IPR_1_9
//
// Notes : Register Interrupt Priority Register (IPR19) at the offset 0x44C, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x44C) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44C); \
     WRITE_REGISTER_ULONG(0x44C, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr19
//
// Return the value of register IPR_1_9
//
// Notes : Register Interrupt Priority Register (IPR19) at the offset 0x44C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x44C) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44C); \
     WRITE_REGISTER_ULONG(0x44C, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr19
//
// Return the value of register IPR_1_9
//
// Notes : Register Interrupt Priority Register (IPR19) at the offset 0x44C, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x44C) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44C); \
     WRITE_REGISTER_ULONG(0x44C, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr20
//
// Return the value of register IPR20
//
// Notes : Register Ipr20 at offset 0x450
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IPR_2_0( y) \
     WRITE_REGISTER_ULONG( 0x450 , y)

#define SET_BITS_IPR_2_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x450); \
     WRITE_REGISTER_ULONG( 0x450 , val |  mask ); \
   }

#define CLEAR_BITS_IPR_2_0(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x450); \
     WRITE_REGISTER_ULONG( 0x450 , val & ~mask ); \
   }

#define READ_REGISTER_IPR_2_0() \
     READ_REGISTER_ULONG(0x450)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr20
//
// Return the value of register IPR_2_0
//
// Notes : Register Interrupt Priority Register (IPR20) at the offset 0x450, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N3 
    // 
#define IPR_N3_MASK 0xFF000000U
#define IPR_N3_OFFSET 31
#define IPR_N3_START_BIT 24
#define IPR_N3_WIDTH 8


#define IPR_20_REG 0x450

#define READ_IPR_N3() \
   ((READ_REGISTER_ULONG(0x450) & IPR_N3_MASK)  >> IPR_N3_START_BIT)

#define WRITE_IPR_N3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x450); \
     WRITE_REGISTER_ULONG(0x450, (OldValue & ~ IPR_N3_MASK) | ((val << IPR_N3_START_BIT) & IPR_N3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr20
//
// Return the value of register IPR_2_0
//
// Notes : Register Interrupt Priority Register (IPR20) at the offset 0x450, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N2 
    // 
#define IPR_N2_MASK 0xFF0000U
#define IPR_N2_OFFSET 23
#define IPR_N2_START_BIT 16
#define IPR_N2_WIDTH 8



#define READ_IPR_N2() \
   ((READ_REGISTER_ULONG(0x450) & IPR_N2_MASK)  >> IPR_N2_START_BIT)

#define WRITE_IPR_N2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x450); \
     WRITE_REGISTER_ULONG(0x450, (OldValue & ~ IPR_N2_MASK) | ((val << IPR_N2_START_BIT) & IPR_N2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr20
//
// Return the value of register IPR_2_0
//
// Notes : Register Interrupt Priority Register (IPR20) at the offset 0x450, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N1 
    // 
#define IPR_N1_MASK 0xFF00U
#define IPR_N1_OFFSET 15
#define IPR_N1_START_BIT 8
#define IPR_N1_WIDTH 8



#define READ_IPR_N1() \
   ((READ_REGISTER_ULONG(0x450) & IPR_N1_MASK)  >> IPR_N1_START_BIT)

#define WRITE_IPR_N1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x450); \
     WRITE_REGISTER_ULONG(0x450, (OldValue & ~ IPR_N1_MASK) | ((val << IPR_N1_START_BIT) & IPR_N1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ipr20
//
// Return the value of register IPR_2_0
//
// Notes : Register Interrupt Priority Register (IPR20) at the offset 0x450, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IPR_N0 
    // 
#define IPR_N0_MASK 0xFFU
#define IPR_N0_OFFSET 7
#define IPR_N0_START_BIT 0
#define IPR_N0_WIDTH 8



#define READ_IPR_N0() \
   ((READ_REGISTER_ULONG(0x450) & IPR_N0_MASK)  >> IPR_N0_START_BIT)

#define WRITE_IPR_N0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x450); \
     WRITE_REGISTER_ULONG(0x450, (OldValue & ~ IPR_N0_MASK) | ((val << IPR_N0_START_BIT) & IPR_N0_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Stir
//
// Return the value of register STIR
//
// Notes : Register Stir at offset 0xF00
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_STIR( y) \
     WRITE_REGISTER_ULONG( 0xF00 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Stir
//
// Return the value of register STIR
//
// Notes : Register Software Triggered Interrupt Register (STIR) at the offset 0xF00, Bits 0:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // interrupt to be triggered 
    // 
#define INTID_MASK 0x1FFU
#define INTID_OFFSET 8
#define INTID_START_BIT 0
#define INTID_WIDTH 9


#define STIR_REG 0xF00

typedef enum intid {
    INTID_0,
    INTID_1
} INTID_T ;
#define READ_INTID() \
   ((READ_REGISTER_ULONG(0xF00) & INTID_MASK)  >> INTID_START_BIT)

#define WRITE_INTID(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xF00); \
     WRITE_REGISTER_ULONG(0xF00, (OldValue & ~ INTID_MASK) | ((val << INTID_START_BIT) & INTID_MASK )); \
   } 

