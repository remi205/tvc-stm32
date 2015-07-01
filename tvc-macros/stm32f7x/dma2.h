/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/dma2.h
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
// Function : S6ndtr
//
// Return the value of register S6NDTR
//
// Notes : Register S6ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_6NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_6NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_6NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S6ndtr
//
// Return the value of register S_6NDTR
//
// Notes : Register stream x number of data register (S6NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_6NDTR_REG 0x40026400

typedef enum ndt {
    NDT_0,
    NDT_1
} NDT_T ;
#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7ndtr
//
// Return the value of register S7NDTR
//
// Notes : Register S7ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_7NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_7NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_7NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S7ndtr
//
// Return the value of register S_7NDTR
//
// Notes : Register stream x number of data register (S7NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_7NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4ndtr
//
// Return the value of register S4NDTR
//
// Notes : Register S4ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_4NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_4NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_4NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S4ndtr
//
// Return the value of register S_4NDTR
//
// Notes : Register stream x number of data register (S4NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_4NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5ndtr
//
// Return the value of register S5NDTR
//
// Notes : Register S5ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_5NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_5NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_5NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S5ndtr
//
// Return the value of register S_5NDTR
//
// Notes : Register stream x number of data register (S5NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_5NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2ndtr
//
// Return the value of register S2NDTR
//
// Notes : Register S2ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_2NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_2NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_2NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S2ndtr
//
// Return the value of register S_2NDTR
//
// Notes : Register stream x number of data register (S2NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_2NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3ndtr
//
// Return the value of register S3NDTR
//
// Notes : Register S3ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_3NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_3NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_3NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S3ndtr
//
// Return the value of register S_3NDTR
//
// Notes : Register stream x number of data register (S3NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_3NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0ndtr
//
// Return the value of register S0NDTR
//
// Notes : Register S0ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_0NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_0NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_0NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S0ndtr
//
// Return the value of register S_0NDTR
//
// Notes : Register stream x number of data register (S0NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_0NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1ndtr
//
// Return the value of register S1NDTR
//
// Notes : Register S1ndtr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1NDTR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_1NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_1NDTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_1NDTR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S1ndtr
//
// Return the value of register S_1NDTR
//
// Notes : Register stream x number of data register (S1NDTR) at the offset 0x40026400, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of data items to transfer 
    // 
#define NDT_MASK 0xFFFFU
#define NDT_OFFSET 15
#define NDT_START_BIT 0
#define NDT_WIDTH 16


#define S_1NDTR_REG 0x40026400

#define READ_NDT() \
   ((READ_REGISTER_ULONG(0x40026400) & NDT_MASK)  >> NDT_START_BIT)

#define WRITE_NDT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ NDT_MASK) | ((val << NDT_START_BIT) & NDT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6par
//
// Return the value of register S6PAR
//
// Notes : Register S6par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_6PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_6PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_6PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S6par
//
// Return the value of register S_6PAR
//
// Notes : Register stream x peripheral address register (S6PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_6PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7par
//
// Return the value of register S7PAR
//
// Notes : Register S7par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_7PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_7PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_7PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S7par
//
// Return the value of register S_7PAR
//
// Notes : Register stream x peripheral address register (S7PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_7PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4par
//
// Return the value of register S4PAR
//
// Notes : Register S4par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_4PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_4PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_4PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S4par
//
// Return the value of register S_4PAR
//
// Notes : Register stream x peripheral address register (S4PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_4PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5par
//
// Return the value of register S5PAR
//
// Notes : Register S5par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_5PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_5PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_5PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S5par
//
// Return the value of register S_5PAR
//
// Notes : Register stream x peripheral address register (S5PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_5PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2par
//
// Return the value of register S2PAR
//
// Notes : Register S2par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_2PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_2PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_2PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S2par
//
// Return the value of register S_2PAR
//
// Notes : Register stream x peripheral address register (S2PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_2PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3par
//
// Return the value of register S3PAR
//
// Notes : Register S3par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_3PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_3PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_3PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S3par
//
// Return the value of register S_3PAR
//
// Notes : Register stream x peripheral address register (S3PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_3PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0par
//
// Return the value of register S0PAR
//
// Notes : Register S0par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_0PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_0PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_0PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S0par
//
// Return the value of register S_0PAR
//
// Notes : Register stream x peripheral address register (S0PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_0PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1par
//
// Return the value of register S1PAR
//
// Notes : Register S1par at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1PAR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_1PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_1PAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_1PAR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S1par
//
// Return the value of register S_1PAR
//
// Notes : Register stream x peripheral address register (S1PAR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral address 
    // 
#define PA_MASK 0xFFFFFFFFU
#define PA_OFFSET 31
#define PA_START_BIT 0
#define PA_WIDTH 32


#define S_1PAR_REG 0x40026400

#define READ_PA() \
   ((READ_REGISTER_ULONG(0x40026400) & PA_MASK)  >> PA_START_BIT)

#define WRITE_PA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PA_MASK) | ((val << PA_START_BIT) & PA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register Lifcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LIFCR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_LIFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_LIFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_LIFCR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF0_MASK 0x1U
#define CFEIF0_OFFSET 0
#define CFEIF0_START_BIT 0
#define CFEIF0_WIDTH 1


#define LIFCR_REG 0x40026400

typedef enum cfeif0 {
    CFEIF_0_0,
    CFEIF_0_1
} CFEIF_0_T ;
#define WRITE_CFEIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF0_MASK) | ((val << CFEIF0_START_BIT) & CFEIF0_MASK )); \
   } 

#define ENABLE_CFEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF0_MASK ); \
   }

#define DISABLE_CFEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF0_MASK ); \
   } 

#define READ_CFEIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF0_MASK)  >> CFEIF0_START_BIT)

#define WHEN_CFEIF0_HIGH() \
     if ( READ_CFEIF0() )


#define UNLESS_CFEIF0_HIGH() \
     if (! READ_CFEIF0() )


#define WAIT_CFEIF0_LOW() \
    while ( READ_CFEIF0() );


#define WAIT_CFEIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF0() && (--___t___ > 0)); }


#define WAIT_CFEIF0_HIGH() \
    while (! READ_CFEIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF0_MASK 0x4U
#define CDMEIF0_OFFSET 2
#define CDMEIF0_START_BIT 2
#define CDMEIF0_WIDTH 1



typedef enum cdmeif0 {
    CDMEIF_0_0,
    CDMEIF_0_1
} CDMEIF_0_T ;
#define WRITE_CDMEIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF0_MASK) | ((val << CDMEIF0_START_BIT) & CDMEIF0_MASK )); \
   } 

#define ENABLE_CDMEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF0_MASK ); \
   }

#define DISABLE_CDMEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF0_MASK ); \
   } 

#define READ_CDMEIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF0_MASK)  >> CDMEIF0_START_BIT)

#define WHEN_CDMEIF0_HIGH() \
     if ( READ_CDMEIF0() )


#define UNLESS_CDMEIF0_HIGH() \
     if (! READ_CDMEIF0() )


#define WAIT_CDMEIF0_LOW() \
    while ( READ_CDMEIF0() );


#define WAIT_CDMEIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF0() && (--___t___ > 0)); }


#define WAIT_CDMEIF0_HIGH() \
    while (! READ_CDMEIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF0_MASK 0x8U
#define CTEIF0_OFFSET 3
#define CTEIF0_START_BIT 3
#define CTEIF0_WIDTH 1



typedef enum cteif0 {
    CTEIF_0_0,
    CTEIF_0_1
} CTEIF_0_T ;
#define WRITE_CTEIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF0_MASK) | ((val << CTEIF0_START_BIT) & CTEIF0_MASK )); \
   } 

#define ENABLE_CTEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF0_MASK ); \
   }

#define DISABLE_CTEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF0_MASK ); \
   } 

#define READ_CTEIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF0_MASK)  >> CTEIF0_START_BIT)

#define WHEN_CTEIF0_HIGH() \
     if ( READ_CTEIF0() )


#define UNLESS_CTEIF0_HIGH() \
     if (! READ_CTEIF0() )


#define WAIT_CTEIF0_LOW() \
    while ( READ_CTEIF0() );


#define WAIT_CTEIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF0() && (--___t___ > 0)); }


#define WAIT_CTEIF0_HIGH() \
    while (! READ_CTEIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF0_MASK 0x10U
#define CHTIF0_OFFSET 4
#define CHTIF0_START_BIT 4
#define CHTIF0_WIDTH 1



typedef enum chtif0 {
    CHTIF_0_0,
    CHTIF_0_1
} CHTIF_0_T ;
#define WRITE_CHTIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF0_MASK) | ((val << CHTIF0_START_BIT) & CHTIF0_MASK )); \
   } 

#define ENABLE_CHTIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF0_MASK ); \
   }

#define DISABLE_CHTIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF0_MASK ); \
   } 

#define READ_CHTIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF0_MASK)  >> CHTIF0_START_BIT)

#define WHEN_CHTIF0_HIGH() \
     if ( READ_CHTIF0() )


#define UNLESS_CHTIF0_HIGH() \
     if (! READ_CHTIF0() )


#define WAIT_CHTIF0_LOW() \
    while ( READ_CHTIF0() );


#define WAIT_CHTIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF0() && (--___t___ > 0)); }


#define WAIT_CHTIF0_HIGH() \
    while (! READ_CHTIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF0_MASK 0x20U
#define CTCIF0_OFFSET 5
#define CTCIF0_START_BIT 5
#define CTCIF0_WIDTH 1



typedef enum ctcif0 {
    CTCIF_0_0,
    CTCIF_0_1
} CTCIF_0_T ;
#define WRITE_CTCIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF0_MASK) | ((val << CTCIF0_START_BIT) & CTCIF0_MASK )); \
   } 

#define ENABLE_CTCIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF0_MASK ); \
   }

#define DISABLE_CTCIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF0_MASK ); \
   } 

#define READ_CTCIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF0_MASK)  >> CTCIF0_START_BIT)

#define WHEN_CTCIF0_HIGH() \
     if ( READ_CTCIF0() )


#define UNLESS_CTCIF0_HIGH() \
     if (! READ_CTCIF0() )


#define WAIT_CTCIF0_LOW() \
    while ( READ_CTCIF0() );


#define WAIT_CTCIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF0() && (--___t___ > 0)); }


#define WAIT_CTCIF0_HIGH() \
    while (! READ_CTCIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF1_MASK 0x40U
#define CFEIF1_OFFSET 6
#define CFEIF1_START_BIT 6
#define CFEIF1_WIDTH 1



typedef enum cfeif1 {
    CFEIF_1_0,
    CFEIF_1_1
} CFEIF_1_T ;
#define WRITE_CFEIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF1_MASK) | ((val << CFEIF1_START_BIT) & CFEIF1_MASK )); \
   } 

#define ENABLE_CFEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF1_MASK ); \
   }

#define DISABLE_CFEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF1_MASK ); \
   } 

#define READ_CFEIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF1_MASK)  >> CFEIF1_START_BIT)

#define WHEN_CFEIF1_HIGH() \
     if ( READ_CFEIF1() )


#define UNLESS_CFEIF1_HIGH() \
     if (! READ_CFEIF1() )


#define WAIT_CFEIF1_LOW() \
    while ( READ_CFEIF1() );


#define WAIT_CFEIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF1() && (--___t___ > 0)); }


#define WAIT_CFEIF1_HIGH() \
    while (! READ_CFEIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF1_MASK 0x100U
#define CDMEIF1_OFFSET 8
#define CDMEIF1_START_BIT 8
#define CDMEIF1_WIDTH 1



typedef enum cdmeif1 {
    CDMEIF_1_0,
    CDMEIF_1_1
} CDMEIF_1_T ;
#define WRITE_CDMEIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF1_MASK) | ((val << CDMEIF1_START_BIT) & CDMEIF1_MASK )); \
   } 

#define ENABLE_CDMEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF1_MASK ); \
   }

#define DISABLE_CDMEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF1_MASK ); \
   } 

#define READ_CDMEIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF1_MASK)  >> CDMEIF1_START_BIT)

#define WHEN_CDMEIF1_HIGH() \
     if ( READ_CDMEIF1() )


#define UNLESS_CDMEIF1_HIGH() \
     if (! READ_CDMEIF1() )


#define WAIT_CDMEIF1_LOW() \
    while ( READ_CDMEIF1() );


#define WAIT_CDMEIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF1() && (--___t___ > 0)); }


#define WAIT_CDMEIF1_HIGH() \
    while (! READ_CDMEIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF1_MASK 0x200U
#define CTEIF1_OFFSET 9
#define CTEIF1_START_BIT 9
#define CTEIF1_WIDTH 1



typedef enum cteif1 {
    CTEIF_1_0,
    CTEIF_1_1
} CTEIF_1_T ;
#define WRITE_CTEIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF1_MASK) | ((val << CTEIF1_START_BIT) & CTEIF1_MASK )); \
   } 

#define ENABLE_CTEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF1_MASK ); \
   }

#define DISABLE_CTEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF1_MASK ); \
   } 

#define READ_CTEIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF1_MASK)  >> CTEIF1_START_BIT)

#define WHEN_CTEIF1_HIGH() \
     if ( READ_CTEIF1() )


#define UNLESS_CTEIF1_HIGH() \
     if (! READ_CTEIF1() )


#define WAIT_CTEIF1_LOW() \
    while ( READ_CTEIF1() );


#define WAIT_CTEIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF1() && (--___t___ > 0)); }


#define WAIT_CTEIF1_HIGH() \
    while (! READ_CTEIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF1_MASK 0x400U
#define CHTIF1_OFFSET 10
#define CHTIF1_START_BIT 10
#define CHTIF1_WIDTH 1



typedef enum chtif1 {
    CHTIF_1_0,
    CHTIF_1_1
} CHTIF_1_T ;
#define WRITE_CHTIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF1_MASK) | ((val << CHTIF1_START_BIT) & CHTIF1_MASK )); \
   } 

#define ENABLE_CHTIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF1_MASK ); \
   }

#define DISABLE_CHTIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF1_MASK ); \
   } 

#define READ_CHTIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF1_MASK)  >> CHTIF1_START_BIT)

#define WHEN_CHTIF1_HIGH() \
     if ( READ_CHTIF1() )


#define UNLESS_CHTIF1_HIGH() \
     if (! READ_CHTIF1() )


#define WAIT_CHTIF1_LOW() \
    while ( READ_CHTIF1() );


#define WAIT_CHTIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF1() && (--___t___ > 0)); }


#define WAIT_CHTIF1_HIGH() \
    while (! READ_CHTIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF1_MASK 0x800U
#define CTCIF1_OFFSET 11
#define CTCIF1_START_BIT 11
#define CTCIF1_WIDTH 1



typedef enum ctcif1 {
    CTCIF_1_0,
    CTCIF_1_1
} CTCIF_1_T ;
#define WRITE_CTCIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF1_MASK) | ((val << CTCIF1_START_BIT) & CTCIF1_MASK )); \
   } 

#define ENABLE_CTCIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF1_MASK ); \
   }

#define DISABLE_CTCIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF1_MASK ); \
   } 

#define READ_CTCIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF1_MASK)  >> CTCIF1_START_BIT)

#define WHEN_CTCIF1_HIGH() \
     if ( READ_CTCIF1() )


#define UNLESS_CTCIF1_HIGH() \
     if (! READ_CTCIF1() )


#define WAIT_CTCIF1_LOW() \
    while ( READ_CTCIF1() );


#define WAIT_CTCIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF1() && (--___t___ > 0)); }


#define WAIT_CTCIF1_HIGH() \
    while (! READ_CTCIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF2_MASK 0x10000U
#define CFEIF2_OFFSET 16
#define CFEIF2_START_BIT 16
#define CFEIF2_WIDTH 1



typedef enum cfeif2 {
    CFEIF_2_0,
    CFEIF_2_1
} CFEIF_2_T ;
#define WRITE_CFEIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF2_MASK) | ((val << CFEIF2_START_BIT) & CFEIF2_MASK )); \
   } 

#define ENABLE_CFEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF2_MASK ); \
   }

#define DISABLE_CFEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF2_MASK ); \
   } 

#define READ_CFEIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF2_MASK)  >> CFEIF2_START_BIT)

#define WHEN_CFEIF2_HIGH() \
     if ( READ_CFEIF2() )


#define UNLESS_CFEIF2_HIGH() \
     if (! READ_CFEIF2() )


#define WAIT_CFEIF2_LOW() \
    while ( READ_CFEIF2() );


#define WAIT_CFEIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF2() && (--___t___ > 0)); }


#define WAIT_CFEIF2_HIGH() \
    while (! READ_CFEIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF2_MASK 0x40000U
#define CDMEIF2_OFFSET 18
#define CDMEIF2_START_BIT 18
#define CDMEIF2_WIDTH 1



typedef enum cdmeif2 {
    CDMEIF_2_0,
    CDMEIF_2_1
} CDMEIF_2_T ;
#define WRITE_CDMEIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF2_MASK) | ((val << CDMEIF2_START_BIT) & CDMEIF2_MASK )); \
   } 

#define ENABLE_CDMEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF2_MASK ); \
   }

#define DISABLE_CDMEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF2_MASK ); \
   } 

#define READ_CDMEIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF2_MASK)  >> CDMEIF2_START_BIT)

#define WHEN_CDMEIF2_HIGH() \
     if ( READ_CDMEIF2() )


#define UNLESS_CDMEIF2_HIGH() \
     if (! READ_CDMEIF2() )


#define WAIT_CDMEIF2_LOW() \
    while ( READ_CDMEIF2() );


#define WAIT_CDMEIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF2() && (--___t___ > 0)); }


#define WAIT_CDMEIF2_HIGH() \
    while (! READ_CDMEIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF2_MASK 0x80000U
#define CTEIF2_OFFSET 19
#define CTEIF2_START_BIT 19
#define CTEIF2_WIDTH 1



typedef enum cteif2 {
    CTEIF_2_0,
    CTEIF_2_1
} CTEIF_2_T ;
#define WRITE_CTEIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF2_MASK) | ((val << CTEIF2_START_BIT) & CTEIF2_MASK )); \
   } 

#define ENABLE_CTEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF2_MASK ); \
   }

#define DISABLE_CTEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF2_MASK ); \
   } 

#define READ_CTEIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF2_MASK)  >> CTEIF2_START_BIT)

#define WHEN_CTEIF2_HIGH() \
     if ( READ_CTEIF2() )


#define UNLESS_CTEIF2_HIGH() \
     if (! READ_CTEIF2() )


#define WAIT_CTEIF2_LOW() \
    while ( READ_CTEIF2() );


#define WAIT_CTEIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF2() && (--___t___ > 0)); }


#define WAIT_CTEIF2_HIGH() \
    while (! READ_CTEIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF2_MASK 0x100000U
#define CHTIF2_OFFSET 20
#define CHTIF2_START_BIT 20
#define CHTIF2_WIDTH 1



typedef enum chtif2 {
    CHTIF_2_0,
    CHTIF_2_1
} CHTIF_2_T ;
#define WRITE_CHTIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF2_MASK) | ((val << CHTIF2_START_BIT) & CHTIF2_MASK )); \
   } 

#define ENABLE_CHTIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF2_MASK ); \
   }

#define DISABLE_CHTIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF2_MASK ); \
   } 

#define READ_CHTIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF2_MASK)  >> CHTIF2_START_BIT)

#define WHEN_CHTIF2_HIGH() \
     if ( READ_CHTIF2() )


#define UNLESS_CHTIF2_HIGH() \
     if (! READ_CHTIF2() )


#define WAIT_CHTIF2_LOW() \
    while ( READ_CHTIF2() );


#define WAIT_CHTIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF2() && (--___t___ > 0)); }


#define WAIT_CHTIF2_HIGH() \
    while (! READ_CHTIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF2_MASK 0x200000U
#define CTCIF2_OFFSET 21
#define CTCIF2_START_BIT 21
#define CTCIF2_WIDTH 1



typedef enum ctcif2 {
    CTCIF_2_0,
    CTCIF_2_1
} CTCIF_2_T ;
#define WRITE_CTCIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF2_MASK) | ((val << CTCIF2_START_BIT) & CTCIF2_MASK )); \
   } 

#define ENABLE_CTCIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF2_MASK ); \
   }

#define DISABLE_CTCIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF2_MASK ); \
   } 

#define READ_CTCIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF2_MASK)  >> CTCIF2_START_BIT)

#define WHEN_CTCIF2_HIGH() \
     if ( READ_CTCIF2() )


#define UNLESS_CTCIF2_HIGH() \
     if (! READ_CTCIF2() )


#define WAIT_CTCIF2_LOW() \
    while ( READ_CTCIF2() );


#define WAIT_CTCIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF2() && (--___t___ > 0)); }


#define WAIT_CTCIF2_HIGH() \
    while (! READ_CTCIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 3..0) 
    // 
#define CFEIF3_MASK 0x400000U
#define CFEIF3_OFFSET 22
#define CFEIF3_START_BIT 22
#define CFEIF3_WIDTH 1



typedef enum cfeif3 {
    CFEIF_3_0,
    CFEIF_3_1
} CFEIF_3_T ;
#define WRITE_CFEIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF3_MASK) | ((val << CFEIF3_START_BIT) & CFEIF3_MASK )); \
   } 

#define ENABLE_CFEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF3_MASK ); \
   }

#define DISABLE_CFEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF3_MASK ); \
   } 

#define READ_CFEIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF3_MASK)  >> CFEIF3_START_BIT)

#define WHEN_CFEIF3_HIGH() \
     if ( READ_CFEIF3() )


#define UNLESS_CFEIF3_HIGH() \
     if (! READ_CFEIF3() )


#define WAIT_CFEIF3_LOW() \
    while ( READ_CFEIF3() );


#define WAIT_CFEIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF3() && (--___t___ > 0)); }


#define WAIT_CFEIF3_HIGH() \
    while (! READ_CFEIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 3..0) 
    // 
#define CDMEIF3_MASK 0x1000000U
#define CDMEIF3_OFFSET 24
#define CDMEIF3_START_BIT 24
#define CDMEIF3_WIDTH 1



typedef enum cdmeif3 {
    CDMEIF_3_0,
    CDMEIF_3_1
} CDMEIF_3_T ;
#define WRITE_CDMEIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF3_MASK) | ((val << CDMEIF3_START_BIT) & CDMEIF3_MASK )); \
   } 

#define ENABLE_CDMEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF3_MASK ); \
   }

#define DISABLE_CDMEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF3_MASK ); \
   } 

#define READ_CDMEIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF3_MASK)  >> CDMEIF3_START_BIT)

#define WHEN_CDMEIF3_HIGH() \
     if ( READ_CDMEIF3() )


#define UNLESS_CDMEIF3_HIGH() \
     if (! READ_CDMEIF3() )


#define WAIT_CDMEIF3_LOW() \
    while ( READ_CDMEIF3() );


#define WAIT_CDMEIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF3() && (--___t___ > 0)); }


#define WAIT_CDMEIF3_HIGH() \
    while (! READ_CDMEIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 3..0) 
    // 
#define CTEIF3_MASK 0x2000000U
#define CTEIF3_OFFSET 25
#define CTEIF3_START_BIT 25
#define CTEIF3_WIDTH 1



typedef enum cteif3 {
    CTEIF_3_0,
    CTEIF_3_1
} CTEIF_3_T ;
#define WRITE_CTEIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF3_MASK) | ((val << CTEIF3_START_BIT) & CTEIF3_MASK )); \
   } 

#define ENABLE_CTEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF3_MASK ); \
   }

#define DISABLE_CTEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF3_MASK ); \
   } 

#define READ_CTEIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF3_MASK)  >> CTEIF3_START_BIT)

#define WHEN_CTEIF3_HIGH() \
     if ( READ_CTEIF3() )


#define UNLESS_CTEIF3_HIGH() \
     if (! READ_CTEIF3() )


#define WAIT_CTEIF3_LOW() \
    while ( READ_CTEIF3() );


#define WAIT_CTEIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF3() && (--___t___ > 0)); }


#define WAIT_CTEIF3_HIGH() \
    while (! READ_CTEIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 3..0) 
    // 
#define CHTIF3_MASK 0x4000000U
#define CHTIF3_OFFSET 26
#define CHTIF3_START_BIT 26
#define CHTIF3_WIDTH 1



typedef enum chtif3 {
    CHTIF_3_0,
    CHTIF_3_1
} CHTIF_3_T ;
#define WRITE_CHTIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF3_MASK) | ((val << CHTIF3_START_BIT) & CHTIF3_MASK )); \
   } 

#define ENABLE_CHTIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF3_MASK ); \
   }

#define DISABLE_CHTIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF3_MASK ); \
   } 

#define READ_CHTIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF3_MASK)  >> CHTIF3_START_BIT)

#define WHEN_CHTIF3_HIGH() \
     if ( READ_CHTIF3() )


#define UNLESS_CHTIF3_HIGH() \
     if (! READ_CHTIF3() )


#define WAIT_CHTIF3_LOW() \
    while ( READ_CHTIF3() );


#define WAIT_CHTIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF3() && (--___t___ > 0)); }


#define WAIT_CHTIF3_HIGH() \
    while (! READ_CHTIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lifcr
//
// Return the value of register LIFCR
//
// Notes : Register low interrupt flag clear register (LIFCR) at the offset 0x40026400, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 3..0) 
    // 
#define CTCIF3_MASK 0x8000000U
#define CTCIF3_OFFSET 27
#define CTCIF3_START_BIT 27
#define CTCIF3_WIDTH 1



typedef enum ctcif3 {
    CTCIF_3_0,
    CTCIF_3_1
} CTCIF_3_T ;
#define WRITE_CTCIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF3_MASK) | ((val << CTCIF3_START_BIT) & CTCIF3_MASK )); \
   } 

#define ENABLE_CTCIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF3_MASK ); \
   }

#define DISABLE_CTCIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF3_MASK ); \
   } 

#define READ_CTCIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF3_MASK)  >> CTCIF3_START_BIT)

#define WHEN_CTCIF3_HIGH() \
     if ( READ_CTCIF3() )


#define UNLESS_CTCIF3_HIGH() \
     if (! READ_CTCIF3() )


#define WAIT_CTCIF3_LOW() \
    while ( READ_CTCIF3() );


#define WAIT_CTCIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF3() && (--___t___ > 0)); }


#define WAIT_CTCIF3_HIGH() \
    while (! READ_CTCIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register Hifcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_HIFCR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_HIFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_HIFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_HIFCR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF4_MASK 0x1U
#define CFEIF4_OFFSET 0
#define CFEIF4_START_BIT 0
#define CFEIF4_WIDTH 1


#define HIFCR_REG 0x40026400

typedef enum cfeif4 {
    CFEIF_4_0,
    CFEIF_4_1
} CFEIF_4_T ;
#define WRITE_CFEIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF4_MASK) | ((val << CFEIF4_START_BIT) & CFEIF4_MASK )); \
   } 

#define ENABLE_CFEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF4_MASK ); \
   }

#define DISABLE_CFEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF4_MASK ); \
   } 

#define READ_CFEIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF4_MASK)  >> CFEIF4_START_BIT)

#define WHEN_CFEIF4_HIGH() \
     if ( READ_CFEIF4() )


#define UNLESS_CFEIF4_HIGH() \
     if (! READ_CFEIF4() )


#define WAIT_CFEIF4_LOW() \
    while ( READ_CFEIF4() );


#define WAIT_CFEIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF4() && (--___t___ > 0)); }


#define WAIT_CFEIF4_HIGH() \
    while (! READ_CFEIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF4_MASK 0x4U
#define CDMEIF4_OFFSET 2
#define CDMEIF4_START_BIT 2
#define CDMEIF4_WIDTH 1



typedef enum cdmeif4 {
    CDMEIF_4_0,
    CDMEIF_4_1
} CDMEIF_4_T ;
#define WRITE_CDMEIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF4_MASK) | ((val << CDMEIF4_START_BIT) & CDMEIF4_MASK )); \
   } 

#define ENABLE_CDMEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF4_MASK ); \
   }

#define DISABLE_CDMEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF4_MASK ); \
   } 

#define READ_CDMEIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF4_MASK)  >> CDMEIF4_START_BIT)

#define WHEN_CDMEIF4_HIGH() \
     if ( READ_CDMEIF4() )


#define UNLESS_CDMEIF4_HIGH() \
     if (! READ_CDMEIF4() )


#define WAIT_CDMEIF4_LOW() \
    while ( READ_CDMEIF4() );


#define WAIT_CDMEIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF4() && (--___t___ > 0)); }


#define WAIT_CDMEIF4_HIGH() \
    while (! READ_CDMEIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF4_MASK 0x8U
#define CTEIF4_OFFSET 3
#define CTEIF4_START_BIT 3
#define CTEIF4_WIDTH 1



typedef enum cteif4 {
    CTEIF_4_0,
    CTEIF_4_1
} CTEIF_4_T ;
#define WRITE_CTEIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF4_MASK) | ((val << CTEIF4_START_BIT) & CTEIF4_MASK )); \
   } 

#define ENABLE_CTEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF4_MASK ); \
   }

#define DISABLE_CTEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF4_MASK ); \
   } 

#define READ_CTEIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF4_MASK)  >> CTEIF4_START_BIT)

#define WHEN_CTEIF4_HIGH() \
     if ( READ_CTEIF4() )


#define UNLESS_CTEIF4_HIGH() \
     if (! READ_CTEIF4() )


#define WAIT_CTEIF4_LOW() \
    while ( READ_CTEIF4() );


#define WAIT_CTEIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF4() && (--___t___ > 0)); }


#define WAIT_CTEIF4_HIGH() \
    while (! READ_CTEIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF4_MASK 0x10U
#define CHTIF4_OFFSET 4
#define CHTIF4_START_BIT 4
#define CHTIF4_WIDTH 1



typedef enum chtif4 {
    CHTIF_4_0,
    CHTIF_4_1
} CHTIF_4_T ;
#define WRITE_CHTIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF4_MASK) | ((val << CHTIF4_START_BIT) & CHTIF4_MASK )); \
   } 

#define ENABLE_CHTIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF4_MASK ); \
   }

#define DISABLE_CHTIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF4_MASK ); \
   } 

#define READ_CHTIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF4_MASK)  >> CHTIF4_START_BIT)

#define WHEN_CHTIF4_HIGH() \
     if ( READ_CHTIF4() )


#define UNLESS_CHTIF4_HIGH() \
     if (! READ_CHTIF4() )


#define WAIT_CHTIF4_LOW() \
    while ( READ_CHTIF4() );


#define WAIT_CHTIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF4() && (--___t___ > 0)); }


#define WAIT_CHTIF4_HIGH() \
    while (! READ_CHTIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF4_MASK 0x20U
#define CTCIF4_OFFSET 5
#define CTCIF4_START_BIT 5
#define CTCIF4_WIDTH 1



typedef enum ctcif4 {
    CTCIF_4_0,
    CTCIF_4_1
} CTCIF_4_T ;
#define WRITE_CTCIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF4_MASK) | ((val << CTCIF4_START_BIT) & CTCIF4_MASK )); \
   } 

#define ENABLE_CTCIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF4_MASK ); \
   }

#define DISABLE_CTCIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF4_MASK ); \
   } 

#define READ_CTCIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF4_MASK)  >> CTCIF4_START_BIT)

#define WHEN_CTCIF4_HIGH() \
     if ( READ_CTCIF4() )


#define UNLESS_CTCIF4_HIGH() \
     if (! READ_CTCIF4() )


#define WAIT_CTCIF4_LOW() \
    while ( READ_CTCIF4() );


#define WAIT_CTCIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF4() && (--___t___ > 0)); }


#define WAIT_CTCIF4_HIGH() \
    while (! READ_CTCIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF5_MASK 0x40U
#define CFEIF5_OFFSET 6
#define CFEIF5_START_BIT 6
#define CFEIF5_WIDTH 1



typedef enum cfeif5 {
    CFEIF_5_0,
    CFEIF_5_1
} CFEIF_5_T ;
#define WRITE_CFEIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF5_MASK) | ((val << CFEIF5_START_BIT) & CFEIF5_MASK )); \
   } 

#define ENABLE_CFEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF5_MASK ); \
   }

#define DISABLE_CFEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF5_MASK ); \
   } 

#define READ_CFEIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF5_MASK)  >> CFEIF5_START_BIT)

#define WHEN_CFEIF5_HIGH() \
     if ( READ_CFEIF5() )


#define UNLESS_CFEIF5_HIGH() \
     if (! READ_CFEIF5() )


#define WAIT_CFEIF5_LOW() \
    while ( READ_CFEIF5() );


#define WAIT_CFEIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF5() && (--___t___ > 0)); }


#define WAIT_CFEIF5_HIGH() \
    while (! READ_CFEIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF5_MASK 0x100U
#define CDMEIF5_OFFSET 8
#define CDMEIF5_START_BIT 8
#define CDMEIF5_WIDTH 1



typedef enum cdmeif5 {
    CDMEIF_5_0,
    CDMEIF_5_1
} CDMEIF_5_T ;
#define WRITE_CDMEIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF5_MASK) | ((val << CDMEIF5_START_BIT) & CDMEIF5_MASK )); \
   } 

#define ENABLE_CDMEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF5_MASK ); \
   }

#define DISABLE_CDMEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF5_MASK ); \
   } 

#define READ_CDMEIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF5_MASK)  >> CDMEIF5_START_BIT)

#define WHEN_CDMEIF5_HIGH() \
     if ( READ_CDMEIF5() )


#define UNLESS_CDMEIF5_HIGH() \
     if (! READ_CDMEIF5() )


#define WAIT_CDMEIF5_LOW() \
    while ( READ_CDMEIF5() );


#define WAIT_CDMEIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF5() && (--___t___ > 0)); }


#define WAIT_CDMEIF5_HIGH() \
    while (! READ_CDMEIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF5_MASK 0x200U
#define CTEIF5_OFFSET 9
#define CTEIF5_START_BIT 9
#define CTEIF5_WIDTH 1



typedef enum cteif5 {
    CTEIF_5_0,
    CTEIF_5_1
} CTEIF_5_T ;
#define WRITE_CTEIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF5_MASK) | ((val << CTEIF5_START_BIT) & CTEIF5_MASK )); \
   } 

#define ENABLE_CTEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF5_MASK ); \
   }

#define DISABLE_CTEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF5_MASK ); \
   } 

#define READ_CTEIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF5_MASK)  >> CTEIF5_START_BIT)

#define WHEN_CTEIF5_HIGH() \
     if ( READ_CTEIF5() )


#define UNLESS_CTEIF5_HIGH() \
     if (! READ_CTEIF5() )


#define WAIT_CTEIF5_LOW() \
    while ( READ_CTEIF5() );


#define WAIT_CTEIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF5() && (--___t___ > 0)); }


#define WAIT_CTEIF5_HIGH() \
    while (! READ_CTEIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF5_MASK 0x400U
#define CHTIF5_OFFSET 10
#define CHTIF5_START_BIT 10
#define CHTIF5_WIDTH 1



typedef enum chtif5 {
    CHTIF_5_0,
    CHTIF_5_1
} CHTIF_5_T ;
#define WRITE_CHTIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF5_MASK) | ((val << CHTIF5_START_BIT) & CHTIF5_MASK )); \
   } 

#define ENABLE_CHTIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF5_MASK ); \
   }

#define DISABLE_CHTIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF5_MASK ); \
   } 

#define READ_CHTIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF5_MASK)  >> CHTIF5_START_BIT)

#define WHEN_CHTIF5_HIGH() \
     if ( READ_CHTIF5() )


#define UNLESS_CHTIF5_HIGH() \
     if (! READ_CHTIF5() )


#define WAIT_CHTIF5_LOW() \
    while ( READ_CHTIF5() );


#define WAIT_CHTIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF5() && (--___t___ > 0)); }


#define WAIT_CHTIF5_HIGH() \
    while (! READ_CHTIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF5_MASK 0x800U
#define CTCIF5_OFFSET 11
#define CTCIF5_START_BIT 11
#define CTCIF5_WIDTH 1



typedef enum ctcif5 {
    CTCIF_5_0,
    CTCIF_5_1
} CTCIF_5_T ;
#define WRITE_CTCIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF5_MASK) | ((val << CTCIF5_START_BIT) & CTCIF5_MASK )); \
   } 

#define ENABLE_CTCIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF5_MASK ); \
   }

#define DISABLE_CTCIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF5_MASK ); \
   } 

#define READ_CTCIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF5_MASK)  >> CTCIF5_START_BIT)

#define WHEN_CTCIF5_HIGH() \
     if ( READ_CTCIF5() )


#define UNLESS_CTCIF5_HIGH() \
     if (! READ_CTCIF5() )


#define WAIT_CTCIF5_LOW() \
    while ( READ_CTCIF5() );


#define WAIT_CTCIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF5() && (--___t___ > 0)); }


#define WAIT_CTCIF5_HIGH() \
    while (! READ_CTCIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF6_MASK 0x10000U
#define CFEIF6_OFFSET 16
#define CFEIF6_START_BIT 16
#define CFEIF6_WIDTH 1



typedef enum cfeif6 {
    CFEIF_6_0,
    CFEIF_6_1
} CFEIF_6_T ;
#define WRITE_CFEIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF6_MASK) | ((val << CFEIF6_START_BIT) & CFEIF6_MASK )); \
   } 

#define ENABLE_CFEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF6_MASK ); \
   }

#define DISABLE_CFEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF6_MASK ); \
   } 

#define READ_CFEIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF6_MASK)  >> CFEIF6_START_BIT)

#define WHEN_CFEIF6_HIGH() \
     if ( READ_CFEIF6() )


#define UNLESS_CFEIF6_HIGH() \
     if (! READ_CFEIF6() )


#define WAIT_CFEIF6_LOW() \
    while ( READ_CFEIF6() );


#define WAIT_CFEIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF6() && (--___t___ > 0)); }


#define WAIT_CFEIF6_HIGH() \
    while (! READ_CFEIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF6_MASK 0x40000U
#define CDMEIF6_OFFSET 18
#define CDMEIF6_START_BIT 18
#define CDMEIF6_WIDTH 1



typedef enum cdmeif6 {
    CDMEIF_6_0,
    CDMEIF_6_1
} CDMEIF_6_T ;
#define WRITE_CDMEIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF6_MASK) | ((val << CDMEIF6_START_BIT) & CDMEIF6_MASK )); \
   } 

#define ENABLE_CDMEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF6_MASK ); \
   }

#define DISABLE_CDMEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF6_MASK ); \
   } 

#define READ_CDMEIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF6_MASK)  >> CDMEIF6_START_BIT)

#define WHEN_CDMEIF6_HIGH() \
     if ( READ_CDMEIF6() )


#define UNLESS_CDMEIF6_HIGH() \
     if (! READ_CDMEIF6() )


#define WAIT_CDMEIF6_LOW() \
    while ( READ_CDMEIF6() );


#define WAIT_CDMEIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF6() && (--___t___ > 0)); }


#define WAIT_CDMEIF6_HIGH() \
    while (! READ_CDMEIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF6_MASK 0x80000U
#define CTEIF6_OFFSET 19
#define CTEIF6_START_BIT 19
#define CTEIF6_WIDTH 1



typedef enum cteif6 {
    CTEIF_6_0,
    CTEIF_6_1
} CTEIF_6_T ;
#define WRITE_CTEIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF6_MASK) | ((val << CTEIF6_START_BIT) & CTEIF6_MASK )); \
   } 

#define ENABLE_CTEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF6_MASK ); \
   }

#define DISABLE_CTEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF6_MASK ); \
   } 

#define READ_CTEIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF6_MASK)  >> CTEIF6_START_BIT)

#define WHEN_CTEIF6_HIGH() \
     if ( READ_CTEIF6() )


#define UNLESS_CTEIF6_HIGH() \
     if (! READ_CTEIF6() )


#define WAIT_CTEIF6_LOW() \
    while ( READ_CTEIF6() );


#define WAIT_CTEIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF6() && (--___t___ > 0)); }


#define WAIT_CTEIF6_HIGH() \
    while (! READ_CTEIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF6_MASK 0x100000U
#define CHTIF6_OFFSET 20
#define CHTIF6_START_BIT 20
#define CHTIF6_WIDTH 1



typedef enum chtif6 {
    CHTIF_6_0,
    CHTIF_6_1
} CHTIF_6_T ;
#define WRITE_CHTIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF6_MASK) | ((val << CHTIF6_START_BIT) & CHTIF6_MASK )); \
   } 

#define ENABLE_CHTIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF6_MASK ); \
   }

#define DISABLE_CHTIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF6_MASK ); \
   } 

#define READ_CHTIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF6_MASK)  >> CHTIF6_START_BIT)

#define WHEN_CHTIF6_HIGH() \
     if ( READ_CHTIF6() )


#define UNLESS_CHTIF6_HIGH() \
     if (! READ_CHTIF6() )


#define WAIT_CHTIF6_LOW() \
    while ( READ_CHTIF6() );


#define WAIT_CHTIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF6() && (--___t___ > 0)); }


#define WAIT_CHTIF6_HIGH() \
    while (! READ_CHTIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF6_MASK 0x200000U
#define CTCIF6_OFFSET 21
#define CTCIF6_START_BIT 21
#define CTCIF6_WIDTH 1



typedef enum ctcif6 {
    CTCIF_6_0,
    CTCIF_6_1
} CTCIF_6_T ;
#define WRITE_CTCIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF6_MASK) | ((val << CTCIF6_START_BIT) & CTCIF6_MASK )); \
   } 

#define ENABLE_CTCIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF6_MASK ); \
   }

#define DISABLE_CTCIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF6_MASK ); \
   } 

#define READ_CTCIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF6_MASK)  >> CTCIF6_START_BIT)

#define WHEN_CTCIF6_HIGH() \
     if ( READ_CTCIF6() )


#define UNLESS_CTCIF6_HIGH() \
     if (! READ_CTCIF6() )


#define WAIT_CTCIF6_LOW() \
    while ( READ_CTCIF6() );


#define WAIT_CTCIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF6() && (--___t___ > 0)); }


#define WAIT_CTCIF6_HIGH() \
    while (! READ_CTCIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear FIFO error interrupt flag (x = 7..4) 
    // 
#define CFEIF7_MASK 0x400000U
#define CFEIF7_OFFSET 22
#define CFEIF7_START_BIT 22
#define CFEIF7_WIDTH 1



typedef enum cfeif7 {
    CFEIF_7_0,
    CFEIF_7_1
} CFEIF_7_T ;
#define WRITE_CFEIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CFEIF7_MASK) | ((val << CFEIF7_START_BIT) & CFEIF7_MASK )); \
   } 

#define ENABLE_CFEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CFEIF7_MASK ); \
   }

#define DISABLE_CFEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CFEIF7_MASK ); \
   } 

#define READ_CFEIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & CFEIF7_MASK)  >> CFEIF7_START_BIT)

#define WHEN_CFEIF7_HIGH() \
     if ( READ_CFEIF7() )


#define UNLESS_CFEIF7_HIGH() \
     if (! READ_CFEIF7() )


#define WAIT_CFEIF7_LOW() \
    while ( READ_CFEIF7() );


#define WAIT_CFEIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CFEIF7() && (--___t___ > 0)); }


#define WAIT_CFEIF7_HIGH() \
    while (! READ_CFEIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear direct mode error interrupt flag (x = 
    // 7..4) 
    // 
#define CDMEIF7_MASK 0x1000000U
#define CDMEIF7_OFFSET 24
#define CDMEIF7_START_BIT 24
#define CDMEIF7_WIDTH 1



typedef enum cdmeif7 {
    CDMEIF_7_0,
    CDMEIF_7_1
} CDMEIF_7_T ;
#define WRITE_CDMEIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CDMEIF7_MASK) | ((val << CDMEIF7_START_BIT) & CDMEIF7_MASK )); \
   } 

#define ENABLE_CDMEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CDMEIF7_MASK ); \
   }

#define DISABLE_CDMEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CDMEIF7_MASK ); \
   } 

#define READ_CDMEIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & CDMEIF7_MASK)  >> CDMEIF7_START_BIT)

#define WHEN_CDMEIF7_HIGH() \
     if ( READ_CDMEIF7() )


#define UNLESS_CDMEIF7_HIGH() \
     if (! READ_CDMEIF7() )


#define WAIT_CDMEIF7_LOW() \
    while ( READ_CDMEIF7() );


#define WAIT_CDMEIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CDMEIF7() && (--___t___ > 0)); }


#define WAIT_CDMEIF7_HIGH() \
    while (! READ_CDMEIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer error interrupt flag (x = 7..4) 
    // 
#define CTEIF7_MASK 0x2000000U
#define CTEIF7_OFFSET 25
#define CTEIF7_START_BIT 25
#define CTEIF7_WIDTH 1



typedef enum cteif7 {
    CTEIF_7_0,
    CTEIF_7_1
} CTEIF_7_T ;
#define WRITE_CTEIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTEIF7_MASK) | ((val << CTEIF7_START_BIT) & CTEIF7_MASK )); \
   } 

#define ENABLE_CTEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTEIF7_MASK ); \
   }

#define DISABLE_CTEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTEIF7_MASK ); \
   } 

#define READ_CTEIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & CTEIF7_MASK)  >> CTEIF7_START_BIT)

#define WHEN_CTEIF7_HIGH() \
     if ( READ_CTEIF7() )


#define UNLESS_CTEIF7_HIGH() \
     if (! READ_CTEIF7() )


#define WAIT_CTEIF7_LOW() \
    while ( READ_CTEIF7() );


#define WAIT_CTEIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF7() && (--___t___ > 0)); }


#define WAIT_CTEIF7_HIGH() \
    while (! READ_CTEIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear half transfer interrupt flag (x = 7..4) 
    // 
#define CHTIF7_MASK 0x4000000U
#define CHTIF7_OFFSET 26
#define CHTIF7_START_BIT 26
#define CHTIF7_WIDTH 1



typedef enum chtif7 {
    CHTIF_7_0,
    CHTIF_7_1
} CHTIF_7_T ;
#define WRITE_CHTIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHTIF7_MASK) | ((val << CHTIF7_START_BIT) & CHTIF7_MASK )); \
   } 

#define ENABLE_CHTIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CHTIF7_MASK ); \
   }

#define DISABLE_CHTIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CHTIF7_MASK ); \
   } 

#define READ_CHTIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & CHTIF7_MASK)  >> CHTIF7_START_BIT)

#define WHEN_CHTIF7_HIGH() \
     if ( READ_CHTIF7() )


#define UNLESS_CHTIF7_HIGH() \
     if (! READ_CHTIF7() )


#define WAIT_CHTIF7_LOW() \
    while ( READ_CHTIF7() );


#define WAIT_CHTIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CHTIF7() && (--___t___ > 0)); }


#define WAIT_CHTIF7_HIGH() \
    while (! READ_CHTIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hifcr
//
// Return the value of register HIFCR
//
// Notes : Register high interrupt flag clear register (HIFCR) at the offset 0x40026400, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x clear transfer complete interrupt flag (x = 
    // 7..4) 
    // 
#define CTCIF7_MASK 0x8000000U
#define CTCIF7_OFFSET 27
#define CTCIF7_START_BIT 27
#define CTCIF7_WIDTH 1



typedef enum ctcif7 {
    CTCIF_7_0,
    CTCIF_7_1
} CTCIF_7_T ;
#define WRITE_CTCIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CTCIF7_MASK) | ((val << CTCIF7_START_BIT) & CTCIF7_MASK )); \
   } 

#define ENABLE_CTCIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CTCIF7_MASK ); \
   }

#define DISABLE_CTCIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CTCIF7_MASK ); \
   } 

#define READ_CTCIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & CTCIF7_MASK)  >> CTCIF7_START_BIT)

#define WHEN_CTCIF7_HIGH() \
     if ( READ_CTCIF7() )


#define UNLESS_CTCIF7_HIGH() \
     if (! READ_CTCIF7() )


#define WAIT_CTCIF7_LOW() \
    while ( READ_CTCIF7() );


#define WAIT_CTCIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF7() && (--___t___ > 0)); }


#define WAIT_CTCIF7_HIGH() \
    while (! READ_CTCIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4m1ar
//
// Return the value of register S4M1AR
//
// Notes : Register S4m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_4M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_4M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_4M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S4m1ar
//
// Return the value of register S_4M_1AR
//
// Notes : Register stream x memory 1 address register (S4M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_4M_1AR_REG 0x40026400

typedef enum m1a {
    M_1A_0,
    M_1A_1
} M_1A_T ;
#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m1ar
//
// Return the value of register S5M1AR
//
// Notes : Register S5m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_5M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_5M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_5M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m1ar
//
// Return the value of register S_5M_1AR
//
// Notes : Register stream x memory 1 address register (S5M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_5M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m1ar
//
// Return the value of register S6M1AR
//
// Notes : Register S6m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_6M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_6M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_6M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m1ar
//
// Return the value of register S_6M_1AR
//
// Notes : Register stream x memory 1 address register (S6M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_6M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m1ar
//
// Return the value of register S7M1AR
//
// Notes : Register S7m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_7M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_7M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_7M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m1ar
//
// Return the value of register S_7M_1AR
//
// Notes : Register stream x memory 1 address register (S7M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_7M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m1ar
//
// Return the value of register S0M1AR
//
// Notes : Register S0m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_0M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_0M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_0M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m1ar
//
// Return the value of register S_0M_1AR
//
// Notes : Register stream x memory 1 address register (S0M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_0M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m1ar
//
// Return the value of register S1M1AR
//
// Notes : Register S1m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_1M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_1M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_1M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m1ar
//
// Return the value of register S_1M_1AR
//
// Notes : Register stream x memory 1 address register (S1M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_1M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m1ar
//
// Return the value of register S2M1AR
//
// Notes : Register S2m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_2M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_2M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_2M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m1ar
//
// Return the value of register S_2M_1AR
//
// Notes : Register stream x memory 1 address register (S2M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_2M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m1ar
//
// Return the value of register S3M1AR
//
// Notes : Register S3m1ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3M_1AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_3M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_3M_1AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_3M_1AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m1ar
//
// Return the value of register S_3M_1AR
//
// Notes : Register stream x memory 1 address register (S3M1AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 1 address (used in case of Double buffer mode) 
    // 
#define M1A_MASK 0xFFFFFFFFU
#define M1A_OFFSET 31
#define M1A_START_BIT 0
#define M1A_WIDTH 32


#define S_3M_1AR_REG 0x40026400

#define READ_M1A() \
   ((READ_REGISTER_ULONG(0x40026400) & M1A_MASK)  >> M1A_START_BIT)

#define WRITE_M1A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M1A_MASK) | ((val << M1A_START_BIT) & M1A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S6FCR
//
// Notes : Register S6fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_6FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



typedef enum dmdis {
    DMDIS_0,
    DMDIS_1
} DMDIS_T ;
#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



typedef enum fs {
    FS_0,
    FS_1
} FS_T ;
#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6fcr
//
// Return the value of register S_6FCR
//
// Notes : Register stream x FIFO control register (S6FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



typedef enum feie {
    FEIE_0,
    FEIE_1
} FEIE_T ;
#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S7FCR
//
// Notes : Register S7fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_7FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7fcr
//
// Return the value of register S_7FCR
//
// Notes : Register stream x FIFO control register (S7FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S4FCR
//
// Notes : Register S4fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_4FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4fcr
//
// Return the value of register S_4FCR
//
// Notes : Register stream x FIFO control register (S4FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S5FCR
//
// Notes : Register S5fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_5FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5fcr
//
// Return the value of register S_5FCR
//
// Notes : Register stream x FIFO control register (S5FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S2FCR
//
// Notes : Register S2fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_2FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2fcr
//
// Return the value of register S_2FCR
//
// Notes : Register stream x FIFO control register (S2FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S3FCR
//
// Notes : Register S3fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_3FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3fcr
//
// Return the value of register S_3FCR
//
// Notes : Register stream x FIFO control register (S3FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S0FCR
//
// Notes : Register S0fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_0FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0fcr
//
// Return the value of register S_0FCR
//
// Notes : Register stream x FIFO control register (S0FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S1FCR
//
// Notes : Register S1fcr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x40026400, Bits 0:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO threshold selection 
    // 
#define FTH_MASK 0x3U
#define FTH_OFFSET 1
#define FTH_START_BIT 0
#define FTH_WIDTH 2


#define S_1FCR_REG 0x40026400

#define READ_FTH() \
   ((READ_REGISTER_ULONG(0x40026400) & FTH_MASK)  >> FTH_START_BIT)

#define WRITE_FTH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FTH_MASK) | ((val << FTH_START_BIT) & FTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode disable 
    // 
#define DMDIS_MASK 0x4U
#define DMDIS_OFFSET 2
#define DMDIS_START_BIT 2
#define DMDIS_WIDTH 1



#define WRITE_DMDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMDIS_MASK) | ((val << DMDIS_START_BIT) & DMDIS_MASK )); \
   } 

#define ENABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMDIS_MASK ); \
   }

#define DISABLE_DMDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMDIS_MASK ); \
   } 

#define READ_DMDIS() \
   ((READ_REGISTER_ULONG(0x40026400) & DMDIS_MASK)  >> DMDIS_START_BIT)

#define WHEN_DMDIS_HIGH() \
     if ( READ_DMDIS() )


#define UNLESS_DMDIS_HIGH() \
     if (! READ_DMDIS() )


#define WAIT_DMDIS_LOW() \
    while ( READ_DMDIS() );


#define WAIT_DMDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMDIS() && (--___t___ > 0)); }


#define WAIT_DMDIS_HIGH() \
    while (! READ_DMDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x40026400, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO status 
    // 
#define FS_MASK 0x38U
#define FS_OFFSET 5
#define FS_START_BIT 3
#define FS_WIDTH 3



#define READ_FS() \
   ((READ_REGISTER_ULONG(0x40026400) & FS_MASK)  >> FS_START_BIT)

#define WRITE_FS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FS_MASK) | ((val << FS_START_BIT) & FS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1fcr
//
// Return the value of register S_1FCR
//
// Notes : Register stream x FIFO control register (S1FCR) at the offset 0x40026400, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FIFO error interrupt enable 
    // 
#define FEIE_MASK 0x80U
#define FEIE_OFFSET 7
#define FEIE_START_BIT 7
#define FEIE_WIDTH 1



#define WRITE_FEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIE_MASK) | ((val << FEIE_START_BIT) & FEIE_MASK )); \
   } 

#define ENABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIE_MASK ); \
   }

#define DISABLE_FEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIE_MASK ); \
   } 

#define READ_FEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIE_MASK)  >> FEIE_START_BIT)

#define WHEN_FEIE_HIGH() \
     if ( READ_FEIE() )


#define UNLESS_FEIE_HIGH() \
     if (! READ_FEIE() )


#define WAIT_FEIE_LOW() \
    while ( READ_FEIE() );


#define WAIT_FEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIE() && (--___t___ > 0)); }


#define WAIT_FEIE_HIGH() \
    while (! READ_FEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4m0ar
//
// Return the value of register S4M0AR
//
// Notes : Register S4m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_4M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_4M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_4M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S4m0ar
//
// Return the value of register S_4M_0AR
//
// Notes : Register stream x memory 0 address register (S4M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_4M_0AR_REG 0x40026400

typedef enum m0a {
    M_0A_0,
    M_0A_1
} M_0A_T ;
#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m0ar
//
// Return the value of register S5M0AR
//
// Notes : Register S5m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_5M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_5M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_5M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S5m0ar
//
// Return the value of register S_5M_0AR
//
// Notes : Register stream x memory 0 address register (S5M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_5M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m0ar
//
// Return the value of register S6M0AR
//
// Notes : Register S6m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_6M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_6M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_6M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S6m0ar
//
// Return the value of register S_6M_0AR
//
// Notes : Register stream x memory 0 address register (S6M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_6M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m0ar
//
// Return the value of register S7M0AR
//
// Notes : Register S7m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_7M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_7M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_7M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S7m0ar
//
// Return the value of register S_7M_0AR
//
// Notes : Register stream x memory 0 address register (S7M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_7M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m0ar
//
// Return the value of register S0M0AR
//
// Notes : Register S0m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_0M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_0M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_0M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S0m0ar
//
// Return the value of register S_0M_0AR
//
// Notes : Register stream x memory 0 address register (S0M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_0M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m0ar
//
// Return the value of register S1M0AR
//
// Notes : Register S1m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_1M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_1M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_1M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S1m0ar
//
// Return the value of register S_1M_0AR
//
// Notes : Register stream x memory 0 address register (S1M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_1M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m0ar
//
// Return the value of register S2M0AR
//
// Notes : Register S2m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_2M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_2M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_2M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S2m0ar
//
// Return the value of register S_2M_0AR
//
// Notes : Register stream x memory 0 address register (S2M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_2M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m0ar
//
// Return the value of register S3M0AR
//
// Notes : Register S3m0ar at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3M_0AR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_3M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_3M_0AR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_3M_0AR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S3m0ar
//
// Return the value of register S_3M_0AR
//
// Notes : Register stream x memory 0 address register (S3M0AR) at the offset 0x40026400, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory 0 address 
    // 
#define M0A_MASK 0xFFFFFFFFU
#define M0A_OFFSET 31
#define M0A_START_BIT 0
#define M0A_WIDTH 32


#define S_3M_0AR_REG 0x40026400

#define READ_M0A() \
   ((READ_REGISTER_ULONG(0x40026400) & M0A_MASK)  >> M0A_START_BIT)

#define WRITE_M0A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ M0A_MASK) | ((val << M0A_START_BIT) & M0A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register Lisr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_LISR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF0_MASK 0x1U
#define FEIF0_OFFSET 0
#define FEIF0_START_BIT 0
#define FEIF0_WIDTH 1


#define LISR_REG 0x40026400

typedef enum feif0 {
    FEIF_0_0,
    FEIF_0_1
} FEIF_0_T ;
#define WRITE_FEIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF0_MASK) | ((val << FEIF0_START_BIT) & FEIF0_MASK )); \
   } 

#define ENABLE_FEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF0_MASK ); \
   }

#define DISABLE_FEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF0_MASK ); \
   } 

#define READ_FEIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF0_MASK)  >> FEIF0_START_BIT)

#define WHEN_FEIF0_HIGH() \
     if ( READ_FEIF0() )


#define UNLESS_FEIF0_HIGH() \
     if (! READ_FEIF0() )


#define WAIT_FEIF0_LOW() \
    while ( READ_FEIF0() );


#define WAIT_FEIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF0() && (--___t___ > 0)); }


#define WAIT_FEIF0_HIGH() \
    while (! READ_FEIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF0_MASK 0x4U
#define DMEIF0_OFFSET 2
#define DMEIF0_START_BIT 2
#define DMEIF0_WIDTH 1



typedef enum dmeif0 {
    DMEIF_0_0,
    DMEIF_0_1
} DMEIF_0_T ;
#define WRITE_DMEIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF0_MASK) | ((val << DMEIF0_START_BIT) & DMEIF0_MASK )); \
   } 

#define ENABLE_DMEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF0_MASK ); \
   }

#define DISABLE_DMEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF0_MASK ); \
   } 

#define READ_DMEIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF0_MASK)  >> DMEIF0_START_BIT)

#define WHEN_DMEIF0_HIGH() \
     if ( READ_DMEIF0() )


#define UNLESS_DMEIF0_HIGH() \
     if (! READ_DMEIF0() )


#define WAIT_DMEIF0_LOW() \
    while ( READ_DMEIF0() );


#define WAIT_DMEIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF0() && (--___t___ > 0)); }


#define WAIT_DMEIF0_HIGH() \
    while (! READ_DMEIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF0_MASK 0x8U
#define TEIF0_OFFSET 3
#define TEIF0_START_BIT 3
#define TEIF0_WIDTH 1



typedef enum teif0 {
    TEIF_0_0,
    TEIF_0_1
} TEIF_0_T ;
#define WRITE_TEIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF0_MASK) | ((val << TEIF0_START_BIT) & TEIF0_MASK )); \
   } 

#define ENABLE_TEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF0_MASK ); \
   }

#define DISABLE_TEIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF0_MASK ); \
   } 

#define READ_TEIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF0_MASK)  >> TEIF0_START_BIT)

#define WHEN_TEIF0_HIGH() \
     if ( READ_TEIF0() )


#define UNLESS_TEIF0_HIGH() \
     if (! READ_TEIF0() )


#define WAIT_TEIF0_LOW() \
    while ( READ_TEIF0() );


#define WAIT_TEIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF0() && (--___t___ > 0)); }


#define WAIT_TEIF0_HIGH() \
    while (! READ_TEIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF0_MASK 0x10U
#define HTIF0_OFFSET 4
#define HTIF0_START_BIT 4
#define HTIF0_WIDTH 1



typedef enum htif0 {
    HTIF_0_0,
    HTIF_0_1
} HTIF_0_T ;
#define WRITE_HTIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF0_MASK) | ((val << HTIF0_START_BIT) & HTIF0_MASK )); \
   } 

#define ENABLE_HTIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF0_MASK ); \
   }

#define DISABLE_HTIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF0_MASK ); \
   } 

#define READ_HTIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF0_MASK)  >> HTIF0_START_BIT)

#define WHEN_HTIF0_HIGH() \
     if ( READ_HTIF0() )


#define UNLESS_HTIF0_HIGH() \
     if (! READ_HTIF0() )


#define WAIT_HTIF0_LOW() \
    while ( READ_HTIF0() );


#define WAIT_HTIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF0() && (--___t___ > 0)); }


#define WAIT_HTIF0_HIGH() \
    while (! READ_HTIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF0_MASK 0x20U
#define TCIF0_OFFSET 5
#define TCIF0_START_BIT 5
#define TCIF0_WIDTH 1



typedef enum tcif0 {
    TCIF_0_0,
    TCIF_0_1
} TCIF_0_T ;
#define WRITE_TCIF0(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF0_MASK) | ((val << TCIF0_START_BIT) & TCIF0_MASK )); \
   } 

#define ENABLE_TCIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF0_MASK ); \
   }

#define DISABLE_TCIF0() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF0_MASK ); \
   } 

#define READ_TCIF0() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF0_MASK)  >> TCIF0_START_BIT)

#define WHEN_TCIF0_HIGH() \
     if ( READ_TCIF0() )


#define UNLESS_TCIF0_HIGH() \
     if (! READ_TCIF0() )


#define WAIT_TCIF0_LOW() \
    while ( READ_TCIF0() );


#define WAIT_TCIF0_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF0() && (--___t___ > 0)); }


#define WAIT_TCIF0_HIGH() \
    while (! READ_TCIF0() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF1_MASK 0x40U
#define FEIF1_OFFSET 6
#define FEIF1_START_BIT 6
#define FEIF1_WIDTH 1



typedef enum feif1 {
    FEIF_1_0,
    FEIF_1_1
} FEIF_1_T ;
#define WRITE_FEIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF1_MASK) | ((val << FEIF1_START_BIT) & FEIF1_MASK )); \
   } 

#define ENABLE_FEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF1_MASK ); \
   }

#define DISABLE_FEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF1_MASK ); \
   } 

#define READ_FEIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF1_MASK)  >> FEIF1_START_BIT)

#define WHEN_FEIF1_HIGH() \
     if ( READ_FEIF1() )


#define UNLESS_FEIF1_HIGH() \
     if (! READ_FEIF1() )


#define WAIT_FEIF1_LOW() \
    while ( READ_FEIF1() );


#define WAIT_FEIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF1() && (--___t___ > 0)); }


#define WAIT_FEIF1_HIGH() \
    while (! READ_FEIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF1_MASK 0x100U
#define DMEIF1_OFFSET 8
#define DMEIF1_START_BIT 8
#define DMEIF1_WIDTH 1



typedef enum dmeif1 {
    DMEIF_1_0,
    DMEIF_1_1
} DMEIF_1_T ;
#define WRITE_DMEIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF1_MASK) | ((val << DMEIF1_START_BIT) & DMEIF1_MASK )); \
   } 

#define ENABLE_DMEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF1_MASK ); \
   }

#define DISABLE_DMEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF1_MASK ); \
   } 

#define READ_DMEIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF1_MASK)  >> DMEIF1_START_BIT)

#define WHEN_DMEIF1_HIGH() \
     if ( READ_DMEIF1() )


#define UNLESS_DMEIF1_HIGH() \
     if (! READ_DMEIF1() )


#define WAIT_DMEIF1_LOW() \
    while ( READ_DMEIF1() );


#define WAIT_DMEIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF1() && (--___t___ > 0)); }


#define WAIT_DMEIF1_HIGH() \
    while (! READ_DMEIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF1_MASK 0x200U
#define TEIF1_OFFSET 9
#define TEIF1_START_BIT 9
#define TEIF1_WIDTH 1



typedef enum teif1 {
    TEIF_1_0,
    TEIF_1_1
} TEIF_1_T ;
#define WRITE_TEIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF1_MASK) | ((val << TEIF1_START_BIT) & TEIF1_MASK )); \
   } 

#define ENABLE_TEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF1_MASK ); \
   }

#define DISABLE_TEIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF1_MASK ); \
   } 

#define READ_TEIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF1_MASK)  >> TEIF1_START_BIT)

#define WHEN_TEIF1_HIGH() \
     if ( READ_TEIF1() )


#define UNLESS_TEIF1_HIGH() \
     if (! READ_TEIF1() )


#define WAIT_TEIF1_LOW() \
    while ( READ_TEIF1() );


#define WAIT_TEIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF1() && (--___t___ > 0)); }


#define WAIT_TEIF1_HIGH() \
    while (! READ_TEIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF1_MASK 0x400U
#define HTIF1_OFFSET 10
#define HTIF1_START_BIT 10
#define HTIF1_WIDTH 1



typedef enum htif1 {
    HTIF_1_0,
    HTIF_1_1
} HTIF_1_T ;
#define WRITE_HTIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF1_MASK) | ((val << HTIF1_START_BIT) & HTIF1_MASK )); \
   } 

#define ENABLE_HTIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF1_MASK ); \
   }

#define DISABLE_HTIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF1_MASK ); \
   } 

#define READ_HTIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF1_MASK)  >> HTIF1_START_BIT)

#define WHEN_HTIF1_HIGH() \
     if ( READ_HTIF1() )


#define UNLESS_HTIF1_HIGH() \
     if (! READ_HTIF1() )


#define WAIT_HTIF1_LOW() \
    while ( READ_HTIF1() );


#define WAIT_HTIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF1() && (--___t___ > 0)); }


#define WAIT_HTIF1_HIGH() \
    while (! READ_HTIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF1_MASK 0x800U
#define TCIF1_OFFSET 11
#define TCIF1_START_BIT 11
#define TCIF1_WIDTH 1



typedef enum tcif1 {
    TCIF_1_0,
    TCIF_1_1
} TCIF_1_T ;
#define WRITE_TCIF1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF1_MASK) | ((val << TCIF1_START_BIT) & TCIF1_MASK )); \
   } 

#define ENABLE_TCIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF1_MASK ); \
   }

#define DISABLE_TCIF1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF1_MASK ); \
   } 

#define READ_TCIF1() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF1_MASK)  >> TCIF1_START_BIT)

#define WHEN_TCIF1_HIGH() \
     if ( READ_TCIF1() )


#define UNLESS_TCIF1_HIGH() \
     if (! READ_TCIF1() )


#define WAIT_TCIF1_LOW() \
    while ( READ_TCIF1() );


#define WAIT_TCIF1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF1() && (--___t___ > 0)); }


#define WAIT_TCIF1_HIGH() \
    while (! READ_TCIF1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF2_MASK 0x10000U
#define FEIF2_OFFSET 16
#define FEIF2_START_BIT 16
#define FEIF2_WIDTH 1



typedef enum feif2 {
    FEIF_2_0,
    FEIF_2_1
} FEIF_2_T ;
#define WRITE_FEIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF2_MASK) | ((val << FEIF2_START_BIT) & FEIF2_MASK )); \
   } 

#define ENABLE_FEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF2_MASK ); \
   }

#define DISABLE_FEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF2_MASK ); \
   } 

#define READ_FEIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF2_MASK)  >> FEIF2_START_BIT)

#define WHEN_FEIF2_HIGH() \
     if ( READ_FEIF2() )


#define UNLESS_FEIF2_HIGH() \
     if (! READ_FEIF2() )


#define WAIT_FEIF2_LOW() \
    while ( READ_FEIF2() );


#define WAIT_FEIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF2() && (--___t___ > 0)); }


#define WAIT_FEIF2_HIGH() \
    while (! READ_FEIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF2_MASK 0x40000U
#define DMEIF2_OFFSET 18
#define DMEIF2_START_BIT 18
#define DMEIF2_WIDTH 1



typedef enum dmeif2 {
    DMEIF_2_0,
    DMEIF_2_1
} DMEIF_2_T ;
#define WRITE_DMEIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF2_MASK) | ((val << DMEIF2_START_BIT) & DMEIF2_MASK )); \
   } 

#define ENABLE_DMEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF2_MASK ); \
   }

#define DISABLE_DMEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF2_MASK ); \
   } 

#define READ_DMEIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF2_MASK)  >> DMEIF2_START_BIT)

#define WHEN_DMEIF2_HIGH() \
     if ( READ_DMEIF2() )


#define UNLESS_DMEIF2_HIGH() \
     if (! READ_DMEIF2() )


#define WAIT_DMEIF2_LOW() \
    while ( READ_DMEIF2() );


#define WAIT_DMEIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF2() && (--___t___ > 0)); }


#define WAIT_DMEIF2_HIGH() \
    while (! READ_DMEIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF2_MASK 0x80000U
#define TEIF2_OFFSET 19
#define TEIF2_START_BIT 19
#define TEIF2_WIDTH 1



typedef enum teif2 {
    TEIF_2_0,
    TEIF_2_1
} TEIF_2_T ;
#define WRITE_TEIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF2_MASK) | ((val << TEIF2_START_BIT) & TEIF2_MASK )); \
   } 

#define ENABLE_TEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF2_MASK ); \
   }

#define DISABLE_TEIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF2_MASK ); \
   } 

#define READ_TEIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF2_MASK)  >> TEIF2_START_BIT)

#define WHEN_TEIF2_HIGH() \
     if ( READ_TEIF2() )


#define UNLESS_TEIF2_HIGH() \
     if (! READ_TEIF2() )


#define WAIT_TEIF2_LOW() \
    while ( READ_TEIF2() );


#define WAIT_TEIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF2() && (--___t___ > 0)); }


#define WAIT_TEIF2_HIGH() \
    while (! READ_TEIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF2_MASK 0x100000U
#define HTIF2_OFFSET 20
#define HTIF2_START_BIT 20
#define HTIF2_WIDTH 1



typedef enum htif2 {
    HTIF_2_0,
    HTIF_2_1
} HTIF_2_T ;
#define WRITE_HTIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF2_MASK) | ((val << HTIF2_START_BIT) & HTIF2_MASK )); \
   } 

#define ENABLE_HTIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF2_MASK ); \
   }

#define DISABLE_HTIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF2_MASK ); \
   } 

#define READ_HTIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF2_MASK)  >> HTIF2_START_BIT)

#define WHEN_HTIF2_HIGH() \
     if ( READ_HTIF2() )


#define UNLESS_HTIF2_HIGH() \
     if (! READ_HTIF2() )


#define WAIT_HTIF2_LOW() \
    while ( READ_HTIF2() );


#define WAIT_HTIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF2() && (--___t___ > 0)); }


#define WAIT_HTIF2_HIGH() \
    while (! READ_HTIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF2_MASK 0x200000U
#define TCIF2_OFFSET 21
#define TCIF2_START_BIT 21
#define TCIF2_WIDTH 1



typedef enum tcif2 {
    TCIF_2_0,
    TCIF_2_1
} TCIF_2_T ;
#define WRITE_TCIF2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF2_MASK) | ((val << TCIF2_START_BIT) & TCIF2_MASK )); \
   } 

#define ENABLE_TCIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF2_MASK ); \
   }

#define DISABLE_TCIF2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF2_MASK ); \
   } 

#define READ_TCIF2() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF2_MASK)  >> TCIF2_START_BIT)

#define WHEN_TCIF2_HIGH() \
     if ( READ_TCIF2() )


#define UNLESS_TCIF2_HIGH() \
     if (! READ_TCIF2() )


#define WAIT_TCIF2_LOW() \
    while ( READ_TCIF2() );


#define WAIT_TCIF2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF2() && (--___t___ > 0)); }


#define WAIT_TCIF2_HIGH() \
    while (! READ_TCIF2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=3..0) 
    // 
#define FEIF3_MASK 0x400000U
#define FEIF3_OFFSET 22
#define FEIF3_START_BIT 22
#define FEIF3_WIDTH 1



typedef enum feif3 {
    FEIF_3_0,
    FEIF_3_1
} FEIF_3_T ;
#define WRITE_FEIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF3_MASK) | ((val << FEIF3_START_BIT) & FEIF3_MASK )); \
   } 

#define ENABLE_FEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF3_MASK ); \
   }

#define DISABLE_FEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF3_MASK ); \
   } 

#define READ_FEIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF3_MASK)  >> FEIF3_START_BIT)

#define WHEN_FEIF3_HIGH() \
     if ( READ_FEIF3() )


#define UNLESS_FEIF3_HIGH() \
     if (! READ_FEIF3() )


#define WAIT_FEIF3_LOW() \
    while ( READ_FEIF3() );


#define WAIT_FEIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF3() && (--___t___ > 0)); }


#define WAIT_FEIF3_HIGH() \
    while (! READ_FEIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=3..0) 
    // 
#define DMEIF3_MASK 0x1000000U
#define DMEIF3_OFFSET 24
#define DMEIF3_START_BIT 24
#define DMEIF3_WIDTH 1



typedef enum dmeif3 {
    DMEIF_3_0,
    DMEIF_3_1
} DMEIF_3_T ;
#define WRITE_DMEIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF3_MASK) | ((val << DMEIF3_START_BIT) & DMEIF3_MASK )); \
   } 

#define ENABLE_DMEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF3_MASK ); \
   }

#define DISABLE_DMEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF3_MASK ); \
   } 

#define READ_DMEIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF3_MASK)  >> DMEIF3_START_BIT)

#define WHEN_DMEIF3_HIGH() \
     if ( READ_DMEIF3() )


#define UNLESS_DMEIF3_HIGH() \
     if (! READ_DMEIF3() )


#define WAIT_DMEIF3_LOW() \
    while ( READ_DMEIF3() );


#define WAIT_DMEIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF3() && (--___t___ > 0)); }


#define WAIT_DMEIF3_HIGH() \
    while (! READ_DMEIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=3..0) 
    // 
#define TEIF3_MASK 0x2000000U
#define TEIF3_OFFSET 25
#define TEIF3_START_BIT 25
#define TEIF3_WIDTH 1



typedef enum teif3 {
    TEIF_3_0,
    TEIF_3_1
} TEIF_3_T ;
#define WRITE_TEIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF3_MASK) | ((val << TEIF3_START_BIT) & TEIF3_MASK )); \
   } 

#define ENABLE_TEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF3_MASK ); \
   }

#define DISABLE_TEIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF3_MASK ); \
   } 

#define READ_TEIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF3_MASK)  >> TEIF3_START_BIT)

#define WHEN_TEIF3_HIGH() \
     if ( READ_TEIF3() )


#define UNLESS_TEIF3_HIGH() \
     if (! READ_TEIF3() )


#define WAIT_TEIF3_LOW() \
    while ( READ_TEIF3() );


#define WAIT_TEIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF3() && (--___t___ > 0)); }


#define WAIT_TEIF3_HIGH() \
    while (! READ_TEIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=3..0) 
    // 
#define HTIF3_MASK 0x4000000U
#define HTIF3_OFFSET 26
#define HTIF3_START_BIT 26
#define HTIF3_WIDTH 1



typedef enum htif3 {
    HTIF_3_0,
    HTIF_3_1
} HTIF_3_T ;
#define WRITE_HTIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF3_MASK) | ((val << HTIF3_START_BIT) & HTIF3_MASK )); \
   } 

#define ENABLE_HTIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF3_MASK ); \
   }

#define DISABLE_HTIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF3_MASK ); \
   } 

#define READ_HTIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF3_MASK)  >> HTIF3_START_BIT)

#define WHEN_HTIF3_HIGH() \
     if ( READ_HTIF3() )


#define UNLESS_HTIF3_HIGH() \
     if (! READ_HTIF3() )


#define WAIT_HTIF3_LOW() \
    while ( READ_HTIF3() );


#define WAIT_HTIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF3() && (--___t___ > 0)); }


#define WAIT_HTIF3_HIGH() \
    while (! READ_HTIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Lisr
//
// Return the value of register LISR
//
// Notes : Register low interrupt status register (LISR) at the offset 0x40026400, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x = 3..0) 
    // 
#define TCIF3_MASK 0x8000000U
#define TCIF3_OFFSET 27
#define TCIF3_START_BIT 27
#define TCIF3_WIDTH 1



typedef enum tcif3 {
    TCIF_3_0,
    TCIF_3_1
} TCIF_3_T ;
#define WRITE_TCIF3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF3_MASK) | ((val << TCIF3_START_BIT) & TCIF3_MASK )); \
   } 

#define ENABLE_TCIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF3_MASK ); \
   }

#define DISABLE_TCIF3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF3_MASK ); \
   } 

#define READ_TCIF3() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF3_MASK)  >> TCIF3_START_BIT)

#define WHEN_TCIF3_HIGH() \
     if ( READ_TCIF3() )


#define UNLESS_TCIF3_HIGH() \
     if (! READ_TCIF3() )


#define WAIT_TCIF3_LOW() \
    while ( READ_TCIF3() );


#define WAIT_TCIF3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF3() && (--___t___ > 0)); }


#define WAIT_TCIF3_HIGH() \
    while (! READ_TCIF3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register Hisr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_HISR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF4_MASK 0x1U
#define FEIF4_OFFSET 0
#define FEIF4_START_BIT 0
#define FEIF4_WIDTH 1


#define HISR_REG 0x40026400

typedef enum feif4 {
    FEIF_4_0,
    FEIF_4_1
} FEIF_4_T ;
#define WRITE_FEIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF4_MASK) | ((val << FEIF4_START_BIT) & FEIF4_MASK )); \
   } 

#define ENABLE_FEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF4_MASK ); \
   }

#define DISABLE_FEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF4_MASK ); \
   } 

#define READ_FEIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF4_MASK)  >> FEIF4_START_BIT)

#define WHEN_FEIF4_HIGH() \
     if ( READ_FEIF4() )


#define UNLESS_FEIF4_HIGH() \
     if (! READ_FEIF4() )


#define WAIT_FEIF4_LOW() \
    while ( READ_FEIF4() );


#define WAIT_FEIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF4() && (--___t___ > 0)); }


#define WAIT_FEIF4_HIGH() \
    while (! READ_FEIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF4_MASK 0x4U
#define DMEIF4_OFFSET 2
#define DMEIF4_START_BIT 2
#define DMEIF4_WIDTH 1



typedef enum dmeif4 {
    DMEIF_4_0,
    DMEIF_4_1
} DMEIF_4_T ;
#define WRITE_DMEIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF4_MASK) | ((val << DMEIF4_START_BIT) & DMEIF4_MASK )); \
   } 

#define ENABLE_DMEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF4_MASK ); \
   }

#define DISABLE_DMEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF4_MASK ); \
   } 

#define READ_DMEIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF4_MASK)  >> DMEIF4_START_BIT)

#define WHEN_DMEIF4_HIGH() \
     if ( READ_DMEIF4() )


#define UNLESS_DMEIF4_HIGH() \
     if (! READ_DMEIF4() )


#define WAIT_DMEIF4_LOW() \
    while ( READ_DMEIF4() );


#define WAIT_DMEIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF4() && (--___t___ > 0)); }


#define WAIT_DMEIF4_HIGH() \
    while (! READ_DMEIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF4_MASK 0x8U
#define TEIF4_OFFSET 3
#define TEIF4_START_BIT 3
#define TEIF4_WIDTH 1



typedef enum teif4 {
    TEIF_4_0,
    TEIF_4_1
} TEIF_4_T ;
#define WRITE_TEIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF4_MASK) | ((val << TEIF4_START_BIT) & TEIF4_MASK )); \
   } 

#define ENABLE_TEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF4_MASK ); \
   }

#define DISABLE_TEIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF4_MASK ); \
   } 

#define READ_TEIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF4_MASK)  >> TEIF4_START_BIT)

#define WHEN_TEIF4_HIGH() \
     if ( READ_TEIF4() )


#define UNLESS_TEIF4_HIGH() \
     if (! READ_TEIF4() )


#define WAIT_TEIF4_LOW() \
    while ( READ_TEIF4() );


#define WAIT_TEIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF4() && (--___t___ > 0)); }


#define WAIT_TEIF4_HIGH() \
    while (! READ_TEIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF4_MASK 0x10U
#define HTIF4_OFFSET 4
#define HTIF4_START_BIT 4
#define HTIF4_WIDTH 1



typedef enum htif4 {
    HTIF_4_0,
    HTIF_4_1
} HTIF_4_T ;
#define WRITE_HTIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF4_MASK) | ((val << HTIF4_START_BIT) & HTIF4_MASK )); \
   } 

#define ENABLE_HTIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF4_MASK ); \
   }

#define DISABLE_HTIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF4_MASK ); \
   } 

#define READ_HTIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF4_MASK)  >> HTIF4_START_BIT)

#define WHEN_HTIF4_HIGH() \
     if ( READ_HTIF4() )


#define UNLESS_HTIF4_HIGH() \
     if (! READ_HTIF4() )


#define WAIT_HTIF4_LOW() \
    while ( READ_HTIF4() );


#define WAIT_HTIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF4() && (--___t___ > 0)); }


#define WAIT_HTIF4_HIGH() \
    while (! READ_HTIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF4_MASK 0x20U
#define TCIF4_OFFSET 5
#define TCIF4_START_BIT 5
#define TCIF4_WIDTH 1



typedef enum tcif4 {
    TCIF_4_0,
    TCIF_4_1
} TCIF_4_T ;
#define WRITE_TCIF4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF4_MASK) | ((val << TCIF4_START_BIT) & TCIF4_MASK )); \
   } 

#define ENABLE_TCIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF4_MASK ); \
   }

#define DISABLE_TCIF4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF4_MASK ); \
   } 

#define READ_TCIF4() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF4_MASK)  >> TCIF4_START_BIT)

#define WHEN_TCIF4_HIGH() \
     if ( READ_TCIF4() )


#define UNLESS_TCIF4_HIGH() \
     if (! READ_TCIF4() )


#define WAIT_TCIF4_LOW() \
    while ( READ_TCIF4() );


#define WAIT_TCIF4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF4() && (--___t___ > 0)); }


#define WAIT_TCIF4_HIGH() \
    while (! READ_TCIF4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF5_MASK 0x40U
#define FEIF5_OFFSET 6
#define FEIF5_START_BIT 6
#define FEIF5_WIDTH 1



typedef enum feif5 {
    FEIF_5_0,
    FEIF_5_1
} FEIF_5_T ;
#define WRITE_FEIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF5_MASK) | ((val << FEIF5_START_BIT) & FEIF5_MASK )); \
   } 

#define ENABLE_FEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF5_MASK ); \
   }

#define DISABLE_FEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF5_MASK ); \
   } 

#define READ_FEIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF5_MASK)  >> FEIF5_START_BIT)

#define WHEN_FEIF5_HIGH() \
     if ( READ_FEIF5() )


#define UNLESS_FEIF5_HIGH() \
     if (! READ_FEIF5() )


#define WAIT_FEIF5_LOW() \
    while ( READ_FEIF5() );


#define WAIT_FEIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF5() && (--___t___ > 0)); }


#define WAIT_FEIF5_HIGH() \
    while (! READ_FEIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF5_MASK 0x100U
#define DMEIF5_OFFSET 8
#define DMEIF5_START_BIT 8
#define DMEIF5_WIDTH 1



typedef enum dmeif5 {
    DMEIF_5_0,
    DMEIF_5_1
} DMEIF_5_T ;
#define WRITE_DMEIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF5_MASK) | ((val << DMEIF5_START_BIT) & DMEIF5_MASK )); \
   } 

#define ENABLE_DMEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF5_MASK ); \
   }

#define DISABLE_DMEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF5_MASK ); \
   } 

#define READ_DMEIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF5_MASK)  >> DMEIF5_START_BIT)

#define WHEN_DMEIF5_HIGH() \
     if ( READ_DMEIF5() )


#define UNLESS_DMEIF5_HIGH() \
     if (! READ_DMEIF5() )


#define WAIT_DMEIF5_LOW() \
    while ( READ_DMEIF5() );


#define WAIT_DMEIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF5() && (--___t___ > 0)); }


#define WAIT_DMEIF5_HIGH() \
    while (! READ_DMEIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF5_MASK 0x200U
#define TEIF5_OFFSET 9
#define TEIF5_START_BIT 9
#define TEIF5_WIDTH 1



typedef enum teif5 {
    TEIF_5_0,
    TEIF_5_1
} TEIF_5_T ;
#define WRITE_TEIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF5_MASK) | ((val << TEIF5_START_BIT) & TEIF5_MASK )); \
   } 

#define ENABLE_TEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF5_MASK ); \
   }

#define DISABLE_TEIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF5_MASK ); \
   } 

#define READ_TEIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF5_MASK)  >> TEIF5_START_BIT)

#define WHEN_TEIF5_HIGH() \
     if ( READ_TEIF5() )


#define UNLESS_TEIF5_HIGH() \
     if (! READ_TEIF5() )


#define WAIT_TEIF5_LOW() \
    while ( READ_TEIF5() );


#define WAIT_TEIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF5() && (--___t___ > 0)); }


#define WAIT_TEIF5_HIGH() \
    while (! READ_TEIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF5_MASK 0x400U
#define HTIF5_OFFSET 10
#define HTIF5_START_BIT 10
#define HTIF5_WIDTH 1



typedef enum htif5 {
    HTIF_5_0,
    HTIF_5_1
} HTIF_5_T ;
#define WRITE_HTIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF5_MASK) | ((val << HTIF5_START_BIT) & HTIF5_MASK )); \
   } 

#define ENABLE_HTIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF5_MASK ); \
   }

#define DISABLE_HTIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF5_MASK ); \
   } 

#define READ_HTIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF5_MASK)  >> HTIF5_START_BIT)

#define WHEN_HTIF5_HIGH() \
     if ( READ_HTIF5() )


#define UNLESS_HTIF5_HIGH() \
     if (! READ_HTIF5() )


#define WAIT_HTIF5_LOW() \
    while ( READ_HTIF5() );


#define WAIT_HTIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF5() && (--___t___ > 0)); }


#define WAIT_HTIF5_HIGH() \
    while (! READ_HTIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF5_MASK 0x800U
#define TCIF5_OFFSET 11
#define TCIF5_START_BIT 11
#define TCIF5_WIDTH 1



typedef enum tcif5 {
    TCIF_5_0,
    TCIF_5_1
} TCIF_5_T ;
#define WRITE_TCIF5(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF5_MASK) | ((val << TCIF5_START_BIT) & TCIF5_MASK )); \
   } 

#define ENABLE_TCIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF5_MASK ); \
   }

#define DISABLE_TCIF5() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF5_MASK ); \
   } 

#define READ_TCIF5() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF5_MASK)  >> TCIF5_START_BIT)

#define WHEN_TCIF5_HIGH() \
     if ( READ_TCIF5() )


#define UNLESS_TCIF5_HIGH() \
     if (! READ_TCIF5() )


#define WAIT_TCIF5_LOW() \
    while ( READ_TCIF5() );


#define WAIT_TCIF5_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF5() && (--___t___ > 0)); }


#define WAIT_TCIF5_HIGH() \
    while (! READ_TCIF5() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF6_MASK 0x10000U
#define FEIF6_OFFSET 16
#define FEIF6_START_BIT 16
#define FEIF6_WIDTH 1



typedef enum feif6 {
    FEIF_6_0,
    FEIF_6_1
} FEIF_6_T ;
#define WRITE_FEIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF6_MASK) | ((val << FEIF6_START_BIT) & FEIF6_MASK )); \
   } 

#define ENABLE_FEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF6_MASK ); \
   }

#define DISABLE_FEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF6_MASK ); \
   } 

#define READ_FEIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF6_MASK)  >> FEIF6_START_BIT)

#define WHEN_FEIF6_HIGH() \
     if ( READ_FEIF6() )


#define UNLESS_FEIF6_HIGH() \
     if (! READ_FEIF6() )


#define WAIT_FEIF6_LOW() \
    while ( READ_FEIF6() );


#define WAIT_FEIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF6() && (--___t___ > 0)); }


#define WAIT_FEIF6_HIGH() \
    while (! READ_FEIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF6_MASK 0x40000U
#define DMEIF6_OFFSET 18
#define DMEIF6_START_BIT 18
#define DMEIF6_WIDTH 1



typedef enum dmeif6 {
    DMEIF_6_0,
    DMEIF_6_1
} DMEIF_6_T ;
#define WRITE_DMEIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF6_MASK) | ((val << DMEIF6_START_BIT) & DMEIF6_MASK )); \
   } 

#define ENABLE_DMEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF6_MASK ); \
   }

#define DISABLE_DMEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF6_MASK ); \
   } 

#define READ_DMEIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF6_MASK)  >> DMEIF6_START_BIT)

#define WHEN_DMEIF6_HIGH() \
     if ( READ_DMEIF6() )


#define UNLESS_DMEIF6_HIGH() \
     if (! READ_DMEIF6() )


#define WAIT_DMEIF6_LOW() \
    while ( READ_DMEIF6() );


#define WAIT_DMEIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF6() && (--___t___ > 0)); }


#define WAIT_DMEIF6_HIGH() \
    while (! READ_DMEIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF6_MASK 0x80000U
#define TEIF6_OFFSET 19
#define TEIF6_START_BIT 19
#define TEIF6_WIDTH 1



typedef enum teif6 {
    TEIF_6_0,
    TEIF_6_1
} TEIF_6_T ;
#define WRITE_TEIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF6_MASK) | ((val << TEIF6_START_BIT) & TEIF6_MASK )); \
   } 

#define ENABLE_TEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF6_MASK ); \
   }

#define DISABLE_TEIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF6_MASK ); \
   } 

#define READ_TEIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF6_MASK)  >> TEIF6_START_BIT)

#define WHEN_TEIF6_HIGH() \
     if ( READ_TEIF6() )


#define UNLESS_TEIF6_HIGH() \
     if (! READ_TEIF6() )


#define WAIT_TEIF6_LOW() \
    while ( READ_TEIF6() );


#define WAIT_TEIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF6() && (--___t___ > 0)); }


#define WAIT_TEIF6_HIGH() \
    while (! READ_TEIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF6_MASK 0x100000U
#define HTIF6_OFFSET 20
#define HTIF6_START_BIT 20
#define HTIF6_WIDTH 1



typedef enum htif6 {
    HTIF_6_0,
    HTIF_6_1
} HTIF_6_T ;
#define WRITE_HTIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF6_MASK) | ((val << HTIF6_START_BIT) & HTIF6_MASK )); \
   } 

#define ENABLE_HTIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF6_MASK ); \
   }

#define DISABLE_HTIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF6_MASK ); \
   } 

#define READ_HTIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF6_MASK)  >> HTIF6_START_BIT)

#define WHEN_HTIF6_HIGH() \
     if ( READ_HTIF6() )


#define UNLESS_HTIF6_HIGH() \
     if (! READ_HTIF6() )


#define WAIT_HTIF6_LOW() \
    while ( READ_HTIF6() );


#define WAIT_HTIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF6() && (--___t___ > 0)); }


#define WAIT_HTIF6_HIGH() \
    while (! READ_HTIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF6_MASK 0x200000U
#define TCIF6_OFFSET 21
#define TCIF6_START_BIT 21
#define TCIF6_WIDTH 1



typedef enum tcif6 {
    TCIF_6_0,
    TCIF_6_1
} TCIF_6_T ;
#define WRITE_TCIF6(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF6_MASK) | ((val << TCIF6_START_BIT) & TCIF6_MASK )); \
   } 

#define ENABLE_TCIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF6_MASK ); \
   }

#define DISABLE_TCIF6() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF6_MASK ); \
   } 

#define READ_TCIF6() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF6_MASK)  >> TCIF6_START_BIT)

#define WHEN_TCIF6_HIGH() \
     if ( READ_TCIF6() )


#define UNLESS_TCIF6_HIGH() \
     if (! READ_TCIF6() )


#define WAIT_TCIF6_LOW() \
    while ( READ_TCIF6() );


#define WAIT_TCIF6_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF6() && (--___t___ > 0)); }


#define WAIT_TCIF6_HIGH() \
    while (! READ_TCIF6() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x FIFO error interrupt flag (x=7..4) 
    // 
#define FEIF7_MASK 0x400000U
#define FEIF7_OFFSET 22
#define FEIF7_START_BIT 22
#define FEIF7_WIDTH 1



typedef enum feif7 {
    FEIF_7_0,
    FEIF_7_1
} FEIF_7_T ;
#define WRITE_FEIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ FEIF7_MASK) | ((val << FEIF7_START_BIT) & FEIF7_MASK )); \
   } 

#define ENABLE_FEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  FEIF7_MASK ); \
   }

#define DISABLE_FEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~FEIF7_MASK ); \
   } 

#define READ_FEIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & FEIF7_MASK)  >> FEIF7_START_BIT)

#define WHEN_FEIF7_HIGH() \
     if ( READ_FEIF7() )


#define UNLESS_FEIF7_HIGH() \
     if (! READ_FEIF7() )


#define WAIT_FEIF7_LOW() \
    while ( READ_FEIF7() );


#define WAIT_FEIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FEIF7() && (--___t___ > 0)); }


#define WAIT_FEIF7_HIGH() \
    while (! READ_FEIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x direct mode error interrupt flag (x=7..4) 
    // 
#define DMEIF7_MASK 0x1000000U
#define DMEIF7_OFFSET 24
#define DMEIF7_START_BIT 24
#define DMEIF7_WIDTH 1



typedef enum dmeif7 {
    DMEIF_7_0,
    DMEIF_7_1
} DMEIF_7_T ;
#define WRITE_DMEIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIF7_MASK) | ((val << DMEIF7_START_BIT) & DMEIF7_MASK )); \
   } 

#define ENABLE_DMEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIF7_MASK ); \
   }

#define DISABLE_DMEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIF7_MASK ); \
   } 

#define READ_DMEIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIF7_MASK)  >> DMEIF7_START_BIT)

#define WHEN_DMEIF7_HIGH() \
     if ( READ_DMEIF7() )


#define UNLESS_DMEIF7_HIGH() \
     if (! READ_DMEIF7() )


#define WAIT_DMEIF7_LOW() \
    while ( READ_DMEIF7() );


#define WAIT_DMEIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIF7() && (--___t___ > 0)); }


#define WAIT_DMEIF7_HIGH() \
    while (! READ_DMEIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer error interrupt flag (x=7..4) 
    // 
#define TEIF7_MASK 0x2000000U
#define TEIF7_OFFSET 25
#define TEIF7_START_BIT 25
#define TEIF7_WIDTH 1



typedef enum teif7 {
    TEIF_7_0,
    TEIF_7_1
} TEIF_7_T ;
#define WRITE_TEIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIF7_MASK) | ((val << TEIF7_START_BIT) & TEIF7_MASK )); \
   } 

#define ENABLE_TEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIF7_MASK ); \
   }

#define DISABLE_TEIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIF7_MASK ); \
   } 

#define READ_TEIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIF7_MASK)  >> TEIF7_START_BIT)

#define WHEN_TEIF7_HIGH() \
     if ( READ_TEIF7() )


#define UNLESS_TEIF7_HIGH() \
     if (! READ_TEIF7() )


#define WAIT_TEIF7_LOW() \
    while ( READ_TEIF7() );


#define WAIT_TEIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF7() && (--___t___ > 0)); }


#define WAIT_TEIF7_HIGH() \
    while (! READ_TEIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x half transfer interrupt flag (x=7..4) 
    // 
#define HTIF7_MASK 0x4000000U
#define HTIF7_OFFSET 26
#define HTIF7_START_BIT 26
#define HTIF7_WIDTH 1



typedef enum htif7 {
    HTIF_7_0,
    HTIF_7_1
} HTIF_7_T ;
#define WRITE_HTIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIF7_MASK) | ((val << HTIF7_START_BIT) & HTIF7_MASK )); \
   } 

#define ENABLE_HTIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIF7_MASK ); \
   }

#define DISABLE_HTIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIF7_MASK ); \
   } 

#define READ_HTIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIF7_MASK)  >> HTIF7_START_BIT)

#define WHEN_HTIF7_HIGH() \
     if ( READ_HTIF7() )


#define UNLESS_HTIF7_HIGH() \
     if (! READ_HTIF7() )


#define WAIT_HTIF7_LOW() \
    while ( READ_HTIF7() );


#define WAIT_HTIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIF7() && (--___t___ > 0)); }


#define WAIT_HTIF7_HIGH() \
    while (! READ_HTIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Hisr
//
// Return the value of register HISR
//
// Notes : Register high interrupt status register (HISR) at the offset 0x40026400, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream x transfer complete interrupt flag (x=7..4) 
    // 
#define TCIF7_MASK 0x8000000U
#define TCIF7_OFFSET 27
#define TCIF7_START_BIT 27
#define TCIF7_WIDTH 1



typedef enum tcif7 {
    TCIF_7_0,
    TCIF_7_1
} TCIF_7_T ;
#define WRITE_TCIF7(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIF7_MASK) | ((val << TCIF7_START_BIT) & TCIF7_MASK )); \
   } 

#define ENABLE_TCIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIF7_MASK ); \
   }

#define DISABLE_TCIF7() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIF7_MASK ); \
   } 

#define READ_TCIF7() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIF7_MASK)  >> TCIF7_START_BIT)

#define WHEN_TCIF7_HIGH() \
     if ( READ_TCIF7() )


#define UNLESS_TCIF7_HIGH() \
     if (! READ_TCIF7() )


#define WAIT_TCIF7_LOW() \
    while ( READ_TCIF7() );


#define WAIT_TCIF7_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF7() && (--___t___ > 0)); }


#define WAIT_TCIF7_HIGH() \
    while (! READ_TCIF7() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S0CR
//
// Notes : Register S0cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_0CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_0CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_0CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_0CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_0CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



typedef enum dmeie {
    DMEIE_0,
    DMEIE_1
} DMEIE_T ;
#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



typedef enum teie {
    TEIE_0,
    TEIE_1
} TEIE_T ;
#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



typedef enum htie {
    HTIE_0,
    HTIE_1
} HTIE_T ;
#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



typedef enum pfctrl {
    PFCTRL_0,
    PFCTRL_1
} PFCTRL_T ;
#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



typedef enum dir {
    DIR_0,
    DIR_1
} DIR_T ;
#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



typedef enum circ {
    CIRC_0,
    CIRC_1
} CIRC_T ;
#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



typedef enum pinc {
    PINC_0,
    PINC_1
} PINC_T ;
#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



typedef enum minc {
    MINC_0,
    MINC_1
} MINC_T ;
#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



typedef enum psize {
    PSIZE_0,
    PSIZE_1
} PSIZE_T ;
#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



typedef enum msize {
    MSIZE_0,
    MSIZE_1
} MSIZE_T ;
#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



typedef enum pincos {
    PINCOS_0,
    PINCOS_1
} PINCOS_T ;
#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



typedef enum dbm {
    DBM_0,
    DBM_1
} DBM_T ;
#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



typedef enum ct {
    CT_0,
    CT_1
} CT_T ;
#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



typedef enum pburst {
    PBURST_0,
    PBURST_1
} PBURST_T ;
#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



typedef enum mburst {
    MBURST_0,
    MBURST_1
} MBURST_T ;
#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S0cr
//
// Return the value of register S_0CR
//
// Notes : Register stream x configuration register (S0CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



typedef enum chsel {
    CHSEL_0,
    CHSEL_1
} CHSEL_T ;
#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S1CR
//
// Notes : Register S1cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_1CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_1CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_1CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_1CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_1CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S1cr
//
// Return the value of register S_1CR
//
// Notes : Register stream x configuration register (S1CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S2CR
//
// Notes : Register S2cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_2CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_2CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_2CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_2CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_2CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S2cr
//
// Return the value of register S_2CR
//
// Notes : Register stream x configuration register (S2CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S3CR
//
// Notes : Register S3cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_3CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_3CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_3CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_3CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_3CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S3cr
//
// Return the value of register S_3CR
//
// Notes : Register stream x configuration register (S3CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S4CR
//
// Notes : Register S4cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_4CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_4CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_4CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_4CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_4CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S4cr
//
// Return the value of register S_4CR
//
// Notes : Register stream x configuration register (S4CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S5CR
//
// Notes : Register S5cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_5CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_5CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_5CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_5CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_5CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S5cr
//
// Return the value of register S_5CR
//
// Notes : Register stream x configuration register (S5CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S6CR
//
// Notes : Register S6cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_6CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_6CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_6CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_6CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_6CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S6cr
//
// Return the value of register S_6CR
//
// Notes : Register stream x configuration register (S6CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S7CR
//
// Notes : Register S7cr at offset 0x40026400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_S_7CR( y) \
     WRITE_REGISTER_ULONG( 0x40026400 , y)

#define SET_BITS_S_7CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  mask ); \
   }

#define CLEAR_BITS_S_7CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val & ~mask ); \
   }

#define READ_REGISTER_S_7CR() \
     READ_REGISTER_ULONG(0x40026400)

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Stream enable / flag stream ready when read low 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define S_7CR_REG 0x40026400

#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x40026400) & EN_MASK)  >> EN_START_BIT)

#define WHEN_EN_HIGH() \
     if ( READ_EN() )


#define UNLESS_EN_HIGH() \
     if (! READ_EN() )


#define WAIT_EN_LOW() \
    while ( READ_EN() );


#define WAIT_EN_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EN() && (--___t___ > 0)); }


#define WAIT_EN_HIGH() \
    while (! READ_EN() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Direct mode error interrupt enable 
    // 
#define DMEIE_MASK 0x2U
#define DMEIE_OFFSET 1
#define DMEIE_START_BIT 1
#define DMEIE_WIDTH 1



#define WRITE_DMEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DMEIE_MASK) | ((val << DMEIE_START_BIT) & DMEIE_MASK )); \
   } 

#define ENABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DMEIE_MASK ); \
   }

#define DISABLE_DMEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DMEIE_MASK ); \
   } 

#define READ_DMEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & DMEIE_MASK)  >> DMEIE_START_BIT)

#define WHEN_DMEIE_HIGH() \
     if ( READ_DMEIE() )


#define UNLESS_DMEIE_HIGH() \
     if (! READ_DMEIE() )


#define WAIT_DMEIE_LOW() \
    while ( READ_DMEIE() );


#define WAIT_DMEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DMEIE() && (--___t___ > 0)); }


#define WAIT_DMEIE_HIGH() \
    while (! READ_DMEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer error interrupt enable 
    // 
#define TEIE_MASK 0x4U
#define TEIE_OFFSET 2
#define TEIE_START_BIT 2
#define TEIE_WIDTH 1



#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TEIE_MASK)  >> TEIE_START_BIT)

#define WHEN_TEIE_HIGH() \
     if ( READ_TEIE() )


#define UNLESS_TEIE_HIGH() \
     if (! READ_TEIE() )


#define WAIT_TEIE_LOW() \
    while ( READ_TEIE() );


#define WAIT_TEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIE() && (--___t___ > 0)); }


#define WAIT_TEIE_HIGH() \
    while (! READ_TEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half transfer interrupt enable 
    // 
#define HTIE_MASK 0x8U
#define HTIE_OFFSET 3
#define HTIE_START_BIT 3
#define HTIE_WIDTH 1



#define WRITE_HTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ HTIE_MASK) | ((val << HTIE_START_BIT) & HTIE_MASK )); \
   } 

#define ENABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  HTIE_MASK ); \
   }

#define DISABLE_HTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~HTIE_MASK ); \
   } 

#define READ_HTIE() \
   ((READ_REGISTER_ULONG(0x40026400) & HTIE_MASK)  >> HTIE_START_BIT)

#define WHEN_HTIE_HIGH() \
     if ( READ_HTIE() )


#define UNLESS_HTIE_HIGH() \
     if (! READ_HTIE() )


#define WAIT_HTIE_LOW() \
    while ( READ_HTIE() );


#define WAIT_HTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_HTIE() && (--___t___ > 0)); }


#define WAIT_HTIE_HIGH() \
    while (! READ_HTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transfer complete interrupt enable 
    // 
#define TCIE_MASK 0x10U
#define TCIE_OFFSET 4
#define TCIE_START_BIT 4
#define TCIE_WIDTH 1



#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x40026400) & TCIE_MASK)  >> TCIE_START_BIT)

#define WHEN_TCIE_HIGH() \
     if ( READ_TCIE() )


#define UNLESS_TCIE_HIGH() \
     if (! READ_TCIE() )


#define WAIT_TCIE_LOW() \
    while ( READ_TCIE() );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIE() && (--___t___ > 0)); }


#define WAIT_TCIE_HIGH() \
    while (! READ_TCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral flow controller 
    // 
#define PFCTRL_MASK 0x20U
#define PFCTRL_OFFSET 5
#define PFCTRL_START_BIT 5
#define PFCTRL_WIDTH 1



#define WRITE_PFCTRL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PFCTRL_MASK) | ((val << PFCTRL_START_BIT) & PFCTRL_MASK )); \
   } 

#define ENABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PFCTRL_MASK ); \
   }

#define DISABLE_PFCTRL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PFCTRL_MASK ); \
   } 

#define READ_PFCTRL() \
   ((READ_REGISTER_ULONG(0x40026400) & PFCTRL_MASK)  >> PFCTRL_START_BIT)

#define WHEN_PFCTRL_HIGH() \
     if ( READ_PFCTRL() )


#define UNLESS_PFCTRL_HIGH() \
     if (! READ_PFCTRL() )


#define WAIT_PFCTRL_LOW() \
    while ( READ_PFCTRL() );


#define WAIT_PFCTRL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PFCTRL() && (--___t___ > 0)); }


#define WAIT_PFCTRL_HIGH() \
    while (! READ_PFCTRL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 6:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data transfer direction 
    // 
#define DIR_MASK 0xC0U
#define DIR_OFFSET 7
#define DIR_START_BIT 6
#define DIR_WIDTH 2



#define READ_DIR() \
   ((READ_REGISTER_ULONG(0x40026400) & DIR_MASK)  >> DIR_START_BIT)

#define WRITE_DIR(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Circular mode 
    // 
#define CIRC_MASK 0x100U
#define CIRC_OFFSET 8
#define CIRC_START_BIT 8
#define CIRC_WIDTH 1



#define WRITE_CIRC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CIRC_MASK) | ((val << CIRC_START_BIT) & CIRC_MASK )); \
   } 

#define ENABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CIRC_MASK ); \
   }

#define DISABLE_CIRC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CIRC_MASK ); \
   } 

#define READ_CIRC() \
   ((READ_REGISTER_ULONG(0x40026400) & CIRC_MASK)  >> CIRC_START_BIT)

#define WHEN_CIRC_HIGH() \
     if ( READ_CIRC() )


#define UNLESS_CIRC_HIGH() \
     if (! READ_CIRC() )


#define WAIT_CIRC_LOW() \
    while ( READ_CIRC() );


#define WAIT_CIRC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CIRC() && (--___t___ > 0)); }


#define WAIT_CIRC_HIGH() \
    while (! READ_CIRC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment mode 
    // 
#define PINC_MASK 0x200U
#define PINC_OFFSET 9
#define PINC_START_BIT 9
#define PINC_WIDTH 1



#define WRITE_PINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINC_MASK) | ((val << PINC_START_BIT) & PINC_MASK )); \
   } 

#define ENABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINC_MASK ); \
   }

#define DISABLE_PINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINC_MASK ); \
   } 

#define READ_PINC() \
   ((READ_REGISTER_ULONG(0x40026400) & PINC_MASK)  >> PINC_START_BIT)

#define WHEN_PINC_HIGH() \
     if ( READ_PINC() )


#define UNLESS_PINC_HIGH() \
     if (! READ_PINC() )


#define WAIT_PINC_LOW() \
    while ( READ_PINC() );


#define WAIT_PINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINC() && (--___t___ > 0)); }


#define WAIT_PINC_HIGH() \
    while (! READ_PINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory increment mode 
    // 
#define MINC_MASK 0x400U
#define MINC_OFFSET 10
#define MINC_START_BIT 10
#define MINC_WIDTH 1



#define WRITE_MINC(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MINC_MASK) | ((val << MINC_START_BIT) & MINC_MASK )); \
   } 

#define ENABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  MINC_MASK ); \
   }

#define DISABLE_MINC() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~MINC_MASK ); \
   } 

#define READ_MINC() \
   ((READ_REGISTER_ULONG(0x40026400) & MINC_MASK)  >> MINC_START_BIT)

#define WHEN_MINC_HIGH() \
     if ( READ_MINC() )


#define UNLESS_MINC_HIGH() \
     if (! READ_MINC() )


#define WAIT_MINC_LOW() \
    while ( READ_MINC() );


#define WAIT_MINC_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MINC() && (--___t___ > 0)); }


#define WAIT_MINC_HIGH() \
    while (! READ_MINC() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral data size 
    // 
#define PSIZE_MASK 0x1800U
#define PSIZE_OFFSET 12
#define PSIZE_START_BIT 11
#define PSIZE_WIDTH 2



#define READ_PSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & PSIZE_MASK)  >> PSIZE_START_BIT)

#define WRITE_PSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PSIZE_MASK) | ((val << PSIZE_START_BIT) & PSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory data size 
    // 
#define MSIZE_MASK 0x6000U
#define MSIZE_OFFSET 14
#define MSIZE_START_BIT 13
#define MSIZE_WIDTH 2



#define READ_MSIZE() \
   ((READ_REGISTER_ULONG(0x40026400) & MSIZE_MASK)  >> MSIZE_START_BIT)

#define WRITE_MSIZE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MSIZE_MASK) | ((val << MSIZE_START_BIT) & MSIZE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral increment offset size 
    // 
#define PINCOS_MASK 0x8000U
#define PINCOS_OFFSET 15
#define PINCOS_START_BIT 15
#define PINCOS_WIDTH 1



#define WRITE_PINCOS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PINCOS_MASK) | ((val << PINCOS_START_BIT) & PINCOS_MASK )); \
   } 

#define ENABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  PINCOS_MASK ); \
   }

#define DISABLE_PINCOS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~PINCOS_MASK ); \
   } 

#define READ_PINCOS() \
   ((READ_REGISTER_ULONG(0x40026400) & PINCOS_MASK)  >> PINCOS_START_BIT)

#define WHEN_PINCOS_HIGH() \
     if ( READ_PINCOS() )


#define UNLESS_PINCOS_HIGH() \
     if (! READ_PINCOS() )


#define WAIT_PINCOS_LOW() \
    while ( READ_PINCOS() );


#define WAIT_PINCOS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PINCOS() && (--___t___ > 0)); }


#define WAIT_PINCOS_HIGH() \
    while (! READ_PINCOS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Priority level 
    // 
#define PL_MASK 0x30000U
#define PL_OFFSET 17
#define PL_START_BIT 16
#define PL_WIDTH 2



#define READ_PL() \
   ((READ_REGISTER_ULONG(0x40026400) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Double buffer mode 
    // 
#define DBM_MASK 0x40000U
#define DBM_OFFSET 18
#define DBM_START_BIT 18
#define DBM_WIDTH 1



#define WRITE_DBM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ DBM_MASK) | ((val << DBM_START_BIT) & DBM_MASK )); \
   } 

#define ENABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  DBM_MASK ); \
   }

#define DISABLE_DBM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~DBM_MASK ); \
   } 

#define READ_DBM() \
   ((READ_REGISTER_ULONG(0x40026400) & DBM_MASK)  >> DBM_START_BIT)

#define WHEN_DBM_HIGH() \
     if ( READ_DBM() )


#define UNLESS_DBM_HIGH() \
     if (! READ_DBM() )


#define WAIT_DBM_LOW() \
    while ( READ_DBM() );


#define WAIT_DBM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DBM() && (--___t___ > 0)); }


#define WAIT_DBM_HIGH() \
    while (! READ_DBM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Current target (only in double buffer mode) 
    // 
#define CT_MASK 0x80000U
#define CT_OFFSET 19
#define CT_START_BIT 19
#define CT_WIDTH 1



#define WRITE_CT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CT_MASK) | ((val << CT_START_BIT) & CT_MASK )); \
   } 

#define ENABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  CT_MASK ); \
   }

#define DISABLE_CT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~CT_MASK ); \
   } 

#define READ_CT() \
   ((READ_REGISTER_ULONG(0x40026400) & CT_MASK)  >> CT_START_BIT)

#define WHEN_CT_HIGH() \
     if ( READ_CT() )


#define UNLESS_CT_HIGH() \
     if (! READ_CT() )


#define WAIT_CT_LOW() \
    while ( READ_CT() );


#define WAIT_CT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CT() && (--___t___ > 0)); }


#define WAIT_CT_HIGH() \
    while (! READ_CT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ACK 
    // 
#define ACK_MASK 0x100000U
#define ACK_OFFSET 20
#define ACK_START_BIT 20
#define ACK_WIDTH 1



#define WRITE_ACK(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ ACK_MASK) | ((val << ACK_START_BIT) & ACK_MASK )); \
   } 

#define ENABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG( 0x40026400 , val |  ACK_MASK ); \
   }

#define DISABLE_ACK() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, val & ~ACK_MASK ); \
   } 

#define READ_ACK() \
   ((READ_REGISTER_ULONG(0x40026400) & ACK_MASK)  >> ACK_START_BIT)

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
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Peripheral burst transfer configuration 
    // 
#define PBURST_MASK 0x600000U
#define PBURST_OFFSET 22
#define PBURST_START_BIT 21
#define PBURST_WIDTH 2



#define READ_PBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & PBURST_MASK)  >> PBURST_START_BIT)

#define WRITE_PBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ PBURST_MASK) | ((val << PBURST_START_BIT) & PBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 23:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory burst transfer configuration 
    // 
#define MBURST_MASK 0x1800000U
#define MBURST_OFFSET 24
#define MBURST_START_BIT 23
#define MBURST_WIDTH 2



#define READ_MBURST() \
   ((READ_REGISTER_ULONG(0x40026400) & MBURST_MASK)  >> MBURST_START_BIT)

#define WRITE_MBURST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ MBURST_MASK) | ((val << MBURST_START_BIT) & MBURST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : S7cr
//
// Return the value of register S_7CR
//
// Notes : Register stream x configuration register (S7CR) at the offset 0x40026400, Bits 25:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel selection 
    // 
#define CHSEL_MASK 0xE000000U
#define CHSEL_OFFSET 27
#define CHSEL_START_BIT 25
#define CHSEL_WIDTH 3



#define READ_CHSEL() \
   ((READ_REGISTER_ULONG(0x40026400) & CHSEL_MASK)  >> CHSEL_START_BIT)

#define WRITE_CHSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40026400); \
     WRITE_REGISTER_ULONG(0x40026400, (OldValue & ~ CHSEL_MASK) | ((val << CHSEL_START_BIT) & CHSEL_MASK )); \
   } 

