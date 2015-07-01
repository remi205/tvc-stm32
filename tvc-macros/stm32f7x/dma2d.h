/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/dma2d.h
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
 
#define DMA2D 0x4002B000
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_CR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : START
//
// Return the value of register Cr
//
// Notes : Start 
//        (CR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_START(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ START_MASK) | ((val << START_START_BIT) & START_MASK )); \
   } 

#define ENABLE_START() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  START_MASK ); \
   }

#define DISABLE_START() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~START_MASK ); \
   } 

#define READ_START() \
   ((READ_REGISTER_ULONG(0x0) & START_MASK)  >> START_START_BIT)

#define WHEN_START_HIGH() \
     if ( READ_START() )


#define UNLESS_START_HIGH() \
     if (! READ_START() )


#define WAIT_START_LOW() \
    while ( READ_START() );


#define WAIT_START_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_START() && (--___t___ > 0)); }


#define WAIT_START_HIGH() \
    while (! READ_START() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SUSP
//
// Return the value of register Cr
//
// Notes : Suspend 
//        (CR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SUSP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SUSP_MASK) | ((val << SUSP_START_BIT) & SUSP_MASK )); \
   } 

#define ENABLE_SUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  SUSP_MASK ); \
   }

#define DISABLE_SUSP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~SUSP_MASK ); \
   } 

#define READ_SUSP() \
   ((READ_REGISTER_ULONG(0x0) & SUSP_MASK)  >> SUSP_START_BIT)

#define WHEN_SUSP_HIGH() \
     if ( READ_SUSP() )


#define UNLESS_SUSP_HIGH() \
     if (! READ_SUSP() )


#define WAIT_SUSP_LOW() \
    while ( READ_SUSP() );


#define WAIT_SUSP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SUSP() && (--___t___ > 0)); }


#define WAIT_SUSP_HIGH() \
    while (! READ_SUSP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ABORT
//
// Return the value of register Cr
//
// Notes : Abort 
//        (CR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ABORT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ABORT_MASK) | ((val << ABORT_START_BIT) & ABORT_MASK )); \
   } 

#define ENABLE_ABORT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  ABORT_MASK ); \
   }

#define DISABLE_ABORT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~ABORT_MASK ); \
   } 

#define READ_ABORT() \
   ((READ_REGISTER_ULONG(0x0) & ABORT_MASK)  >> ABORT_START_BIT)

#define WHEN_ABORT_HIGH() \
     if ( READ_ABORT() )


#define UNLESS_ABORT_HIGH() \
     if (! READ_ABORT() )


#define WAIT_ABORT_LOW() \
    while ( READ_ABORT() );


#define WAIT_ABORT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ABORT() && (--___t___ > 0)); }


#define WAIT_ABORT_HIGH() \
    while (! READ_ABORT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TEIE
//
// Return the value of register Cr
//
// Notes : Transfer error interrupt enable 
//        (CR) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TEIE_MASK) | ((val << TEIE_START_BIT) & TEIE_MASK )); \
   } 

#define ENABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TEIE_MASK ); \
   }

#define DISABLE_TEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TEIE_MASK ); \
   } 

#define READ_TEIE() \
   ((READ_REGISTER_ULONG(0x0) & TEIE_MASK)  >> TEIE_START_BIT)

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
// Function : TCIE
//
// Return the value of register Cr
//
// Notes : Transfer complete interrupt enable 
//        (CR) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TCIE_MASK ); \
   }

#define DISABLE_TCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TCIE_MASK ); \
   } 

#define READ_TCIE() \
   ((READ_REGISTER_ULONG(0x0) & TCIE_MASK)  >> TCIE_START_BIT)

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
// Function : TWIE
//
// Return the value of register Cr
//
// Notes : Transfer watermark interrupt enable 
//        (CR) at the offset 0x0, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TWIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ TWIE_MASK) | ((val << TWIE_START_BIT) & TWIE_MASK )); \
   } 

#define ENABLE_TWIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  TWIE_MASK ); \
   }

#define DISABLE_TWIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~TWIE_MASK ); \
   } 

#define READ_TWIE() \
   ((READ_REGISTER_ULONG(0x0) & TWIE_MASK)  >> TWIE_START_BIT)

#define WHEN_TWIE_HIGH() \
     if ( READ_TWIE() )


#define UNLESS_TWIE_HIGH() \
     if (! READ_TWIE() )


#define WAIT_TWIE_LOW() \
    while ( READ_TWIE() );


#define WAIT_TWIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TWIE() && (--___t___ > 0)); }


#define WAIT_TWIE_HIGH() \
    while (! READ_TWIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CAEIE
//
// Return the value of register Cr
//
// Notes : CLUT access error interrupt enable 
//        (CR) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CAEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CAEIE_MASK) | ((val << CAEIE_START_BIT) & CAEIE_MASK )); \
   } 

#define ENABLE_CAEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CAEIE_MASK ); \
   }

#define DISABLE_CAEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CAEIE_MASK ); \
   } 

#define READ_CAEIE() \
   ((READ_REGISTER_ULONG(0x0) & CAEIE_MASK)  >> CAEIE_START_BIT)

#define WHEN_CAEIE_HIGH() \
     if ( READ_CAEIE() )


#define UNLESS_CAEIE_HIGH() \
     if (! READ_CAEIE() )


#define WAIT_CAEIE_LOW() \
    while ( READ_CAEIE() );


#define WAIT_CAEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAEIE() && (--___t___ > 0)); }


#define WAIT_CAEIE_HIGH() \
    while (! READ_CAEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CTCIE
//
// Return the value of register Cr
//
// Notes : CLUT transfer complete interrupt enable 
//        (CR) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTCIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CTCIE_MASK) | ((val << CTCIE_START_BIT) & CTCIE_MASK )); \
   } 

#define ENABLE_CTCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CTCIE_MASK ); \
   }

#define DISABLE_CTCIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CTCIE_MASK ); \
   } 

#define READ_CTCIE() \
   ((READ_REGISTER_ULONG(0x0) & CTCIE_MASK)  >> CTCIE_START_BIT)

#define WHEN_CTCIE_HIGH() \
     if ( READ_CTCIE() )


#define UNLESS_CTCIE_HIGH() \
     if (! READ_CTCIE() )


#define WAIT_CTCIE_LOW() \
    while ( READ_CTCIE() );


#define WAIT_CTCIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIE() && (--___t___ > 0)); }


#define WAIT_CTCIE_HIGH() \
    while (! READ_CTCIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CEIE
//
// Return the value of register Cr
//
// Notes : Configuration Error Interrupt Enable 
//        (CR) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CEIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ CEIE_MASK) | ((val << CEIE_START_BIT) & CEIE_MASK )); \
   } 

#define ENABLE_CEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  CEIE_MASK ); \
   }

#define DISABLE_CEIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~CEIE_MASK ); \
   } 

#define READ_CEIE() \
   ((READ_REGISTER_ULONG(0x0) & CEIE_MASK)  >> CEIE_START_BIT)

#define WHEN_CEIE_HIGH() \
     if ( READ_CEIE() )


#define UNLESS_CEIE_HIGH() \
     if (! READ_CEIE() )


#define WAIT_CEIE_LOW() \
    while ( READ_CEIE() );


#define WAIT_CEIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEIE() && (--___t___ > 0)); }


#define WAIT_CEIE_HIGH() \
    while (! READ_CEIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : MODE
//
// Return the value of register Cr
//
// Notes : DMA2D mode 
//        (CR) at the offset 0x0, Bits 16:17
//
/////////////////////////////////////////////////////////////////////////
#define READ_MODE() \
   ((READ_REGISTER_ULONG(0x0) & MODE_MASK)  >> MODE_START_BIT)

#define WRITE_MODE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MODE_MASK) | ((val << MODE_START_BIT) & MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ISR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : TEIF
//
// Return the value of register Isr
//
// Notes : Transfer error interrupt flag 
//        (ISR) at the offset 0x4, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TEIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TEIF_MASK) | ((val << TEIF_START_BIT) & TEIF_MASK )); \
   } 

#define ENABLE_TEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  TEIF_MASK ); \
   }

#define DISABLE_TEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~TEIF_MASK ); \
   } 

#define READ_TEIF() \
   ((READ_REGISTER_ULONG(0x4) & TEIF_MASK)  >> TEIF_START_BIT)

#define WHEN_TEIF_HIGH() \
     if ( READ_TEIF() )


#define UNLESS_TEIF_HIGH() \
     if (! READ_TEIF() )


#define WAIT_TEIF_LOW() \
    while ( READ_TEIF() );


#define WAIT_TEIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TEIF() && (--___t___ > 0)); }


#define WAIT_TEIF_HIGH() \
    while (! READ_TEIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TCIF
//
// Return the value of register Isr
//
// Notes : Transfer complete interrupt flag 
//        (ISR) at the offset 0x4, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TCIF_MASK) | ((val << TCIF_START_BIT) & TCIF_MASK )); \
   } 

#define ENABLE_TCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  TCIF_MASK ); \
   }

#define DISABLE_TCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~TCIF_MASK ); \
   } 

#define READ_TCIF() \
   ((READ_REGISTER_ULONG(0x4) & TCIF_MASK)  >> TCIF_START_BIT)

#define WHEN_TCIF_HIGH() \
     if ( READ_TCIF() )


#define UNLESS_TCIF_HIGH() \
     if (! READ_TCIF() )


#define WAIT_TCIF_LOW() \
    while ( READ_TCIF() );


#define WAIT_TCIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TCIF() && (--___t___ > 0)); }


#define WAIT_TCIF_HIGH() \
    while (! READ_TCIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TWIF
//
// Return the value of register Isr
//
// Notes : Transfer watermark interrupt flag 
//        (ISR) at the offset 0x4, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TWIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TWIF_MASK) | ((val << TWIF_START_BIT) & TWIF_MASK )); \
   } 

#define ENABLE_TWIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  TWIF_MASK ); \
   }

#define DISABLE_TWIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~TWIF_MASK ); \
   } 

#define READ_TWIF() \
   ((READ_REGISTER_ULONG(0x4) & TWIF_MASK)  >> TWIF_START_BIT)

#define WHEN_TWIF_HIGH() \
     if ( READ_TWIF() )


#define UNLESS_TWIF_HIGH() \
     if (! READ_TWIF() )


#define WAIT_TWIF_LOW() \
    while ( READ_TWIF() );


#define WAIT_TWIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TWIF() && (--___t___ > 0)); }


#define WAIT_TWIF_HIGH() \
    while (! READ_TWIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CAEIF
//
// Return the value of register Isr
//
// Notes : CLUT access error interrupt flag 
//        (ISR) at the offset 0x4, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CAEIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CAEIF_MASK) | ((val << CAEIF_START_BIT) & CAEIF_MASK )); \
   } 

#define ENABLE_CAEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CAEIF_MASK ); \
   }

#define DISABLE_CAEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CAEIF_MASK ); \
   } 

#define READ_CAEIF() \
   ((READ_REGISTER_ULONG(0x4) & CAEIF_MASK)  >> CAEIF_START_BIT)

#define WHEN_CAEIF_HIGH() \
     if ( READ_CAEIF() )


#define UNLESS_CAEIF_HIGH() \
     if (! READ_CAEIF() )


#define WAIT_CAEIF_LOW() \
    while ( READ_CAEIF() );


#define WAIT_CAEIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAEIF() && (--___t___ > 0)); }


#define WAIT_CAEIF_HIGH() \
    while (! READ_CAEIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CTCIF
//
// Return the value of register Isr
//
// Notes : CLUT transfer complete interrupt flag 
//        (ISR) at the offset 0x4, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTCIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CTCIF_MASK) | ((val << CTCIF_START_BIT) & CTCIF_MASK )); \
   } 

#define ENABLE_CTCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CTCIF_MASK ); \
   }

#define DISABLE_CTCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CTCIF_MASK ); \
   } 

#define READ_CTCIF() \
   ((READ_REGISTER_ULONG(0x4) & CTCIF_MASK)  >> CTCIF_START_BIT)

#define WHEN_CTCIF_HIGH() \
     if ( READ_CTCIF() )


#define UNLESS_CTCIF_HIGH() \
     if (! READ_CTCIF() )


#define WAIT_CTCIF_LOW() \
    while ( READ_CTCIF() );


#define WAIT_CTCIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF() && (--___t___ > 0)); }


#define WAIT_CTCIF_HIGH() \
    while (! READ_CTCIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CEIF
//
// Return the value of register Isr
//
// Notes : Configuration error interrupt flag 
//        (ISR) at the offset 0x4, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CEIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ CEIF_MASK) | ((val << CEIF_START_BIT) & CEIF_MASK )); \
   } 

#define ENABLE_CEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  CEIF_MASK ); \
   }

#define DISABLE_CEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~CEIF_MASK ); \
   } 

#define READ_CEIF() \
   ((READ_REGISTER_ULONG(0x4) & CEIF_MASK)  >> CEIF_START_BIT)

#define WHEN_CEIF_HIGH() \
     if ( READ_CEIF() )


#define UNLESS_CEIF_HIGH() \
     if (! READ_CEIF() )


#define WAIT_CEIF_LOW() \
    while ( READ_CEIF() );


#define WAIT_CEIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CEIF() && (--___t___ > 0)); }


#define WAIT_CEIF_HIGH() \
    while (! READ_CEIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ifcr
//
// Return the value of register IFCR
//
// Notes : Register Ifcr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_IFCR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_IFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_IFCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_IFCR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : CTEIF
//
// Return the value of register Ifcr
//
// Notes : Clear Transfer error interrupt flag 
//        (IFCR) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTEIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CTEIF_MASK) | ((val << CTEIF_START_BIT) & CTEIF_MASK )); \
   } 

#define ENABLE_CTEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CTEIF_MASK ); \
   }

#define DISABLE_CTEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CTEIF_MASK ); \
   } 

#define READ_CTEIF() \
   ((READ_REGISTER_ULONG(0x8) & CTEIF_MASK)  >> CTEIF_START_BIT)

#define WHEN_CTEIF_HIGH() \
     if ( READ_CTEIF() )


#define UNLESS_CTEIF_HIGH() \
     if (! READ_CTEIF() )


#define WAIT_CTEIF_LOW() \
    while ( READ_CTEIF() );


#define WAIT_CTEIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTEIF() && (--___t___ > 0)); }


#define WAIT_CTEIF_HIGH() \
    while (! READ_CTEIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CTCIF
//
// Return the value of register Ifcr
//
// Notes : Clear transfer complete interrupt flag 
//        (IFCR) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTCIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CTCIF_MASK) | ((val << CTCIF_START_BIT) & CTCIF_MASK )); \
   } 

#define ENABLE_CTCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CTCIF_MASK ); \
   }

#define DISABLE_CTCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CTCIF_MASK ); \
   } 

#define READ_CTCIF() \
   ((READ_REGISTER_ULONG(0x8) & CTCIF_MASK)  >> CTCIF_START_BIT)

#define WHEN_CTCIF_HIGH() \
     if ( READ_CTCIF() )


#define UNLESS_CTCIF_HIGH() \
     if (! READ_CTCIF() )


#define WAIT_CTCIF_LOW() \
    while ( READ_CTCIF() );


#define WAIT_CTCIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTCIF() && (--___t___ > 0)); }


#define WAIT_CTCIF_HIGH() \
    while (! READ_CTCIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CTWIF
//
// Return the value of register Ifcr
//
// Notes : Clear transfer watermark interrupt flag 
//        (IFCR) at the offset 0x8, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CTWIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CTWIF_MASK) | ((val << CTWIF_START_BIT) & CTWIF_MASK )); \
   } 

#define ENABLE_CTWIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CTWIF_MASK ); \
   }

#define DISABLE_CTWIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CTWIF_MASK ); \
   } 

#define READ_CTWIF() \
   ((READ_REGISTER_ULONG(0x8) & CTWIF_MASK)  >> CTWIF_START_BIT)

#define WHEN_CTWIF_HIGH() \
     if ( READ_CTWIF() )


#define UNLESS_CTWIF_HIGH() \
     if (! READ_CTWIF() )


#define WAIT_CTWIF_LOW() \
    while ( READ_CTWIF() );


#define WAIT_CTWIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CTWIF() && (--___t___ > 0)); }


#define WAIT_CTWIF_HIGH() \
    while (! READ_CTWIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CAECIF
//
// Return the value of register Ifcr
//
// Notes : Clear CLUT access error interrupt flag 
//        (IFCR) at the offset 0x8, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CAECIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CAECIF_MASK) | ((val << CAECIF_START_BIT) & CAECIF_MASK )); \
   } 

#define ENABLE_CAECIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CAECIF_MASK ); \
   }

#define DISABLE_CAECIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CAECIF_MASK ); \
   } 

#define READ_CAECIF() \
   ((READ_REGISTER_ULONG(0x8) & CAECIF_MASK)  >> CAECIF_START_BIT)

#define WHEN_CAECIF_HIGH() \
     if ( READ_CAECIF() )


#define UNLESS_CAECIF_HIGH() \
     if (! READ_CAECIF() )


#define WAIT_CAECIF_LOW() \
    while ( READ_CAECIF() );


#define WAIT_CAECIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CAECIF() && (--___t___ > 0)); }


#define WAIT_CAECIF_HIGH() \
    while (! READ_CAECIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CCTCIF
//
// Return the value of register Ifcr
//
// Notes : Clear CLUT transfer complete interrupt flag 
//        (IFCR) at the offset 0x8, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CCTCIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CCTCIF_MASK) | ((val << CCTCIF_START_BIT) & CCTCIF_MASK )); \
   } 

#define ENABLE_CCTCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CCTCIF_MASK ); \
   }

#define DISABLE_CCTCIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CCTCIF_MASK ); \
   } 

#define READ_CCTCIF() \
   ((READ_REGISTER_ULONG(0x8) & CCTCIF_MASK)  >> CCTCIF_START_BIT)

#define WHEN_CCTCIF_HIGH() \
     if ( READ_CCTCIF() )


#define UNLESS_CCTCIF_HIGH() \
     if (! READ_CCTCIF() )


#define WAIT_CCTCIF_LOW() \
    while ( READ_CCTCIF() );


#define WAIT_CCTCIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCTCIF() && (--___t___ > 0)); }


#define WAIT_CCTCIF_HIGH() \
    while (! READ_CCTCIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : CCEIF
//
// Return the value of register Ifcr
//
// Notes : Clear configuration error interrupt flag 
//        (IFCR) at the offset 0x8, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CCEIF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ CCEIF_MASK) | ((val << CCEIF_START_BIT) & CCEIF_MASK )); \
   } 

#define ENABLE_CCEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  CCEIF_MASK ); \
   }

#define DISABLE_CCEIF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~CCEIF_MASK ); \
   } 

#define READ_CCEIF() \
   ((READ_REGISTER_ULONG(0x8) & CCEIF_MASK)  >> CCEIF_START_BIT)

#define WHEN_CCEIF_HIGH() \
     if ( READ_CCEIF() )


#define UNLESS_CCEIF_HIGH() \
     if (! READ_CCEIF() )


#define WAIT_CCEIF_LOW() \
    while ( READ_CCEIF() );


#define WAIT_CCEIF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCEIF() && (--___t___ > 0)); }


#define WAIT_CCEIF_HIGH() \
    while (! READ_CCEIF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fgmar
//
// Return the value of register FGMAR
//
// Notes : Register Fgmar at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FGMAR( y) \
     WRITE_REGISTER_ULONG( 0xC , y)

#define SET_BITS_FGMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  mask ); \
   }

#define CLEAR_BITS_FGMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val & ~mask ); \
   }

#define READ_REGISTER_FGMAR() \
     READ_REGISTER_ULONG(0xC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgmar
//
// Return the value of register FGMAR
//
// Notes : Register foreground memory address register (FGMAR) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory address 
    // 
#define MA_MASK 0xFFFFFFFFU
#define MA_OFFSET 31
#define MA_START_BIT 0
#define MA_WIDTH 32


#define FGMAR_REG 0xC

typedef enum ma {
    MA_0,
    MA_1
} MA_T ;
#define READ_MA() \
   ((READ_REGISTER_ULONG(0xC) & MA_MASK)  >> MA_START_BIT)

#define WRITE_MA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ MA_MASK) | ((val << MA_START_BIT) & MA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgor
//
// Return the value of register FGOR
//
// Notes : Register Fgor at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FGOR( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_FGOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_FGOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_FGOR() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgor
//
// Return the value of register FGOR
//
// Notes : Register foreground offset register (FGOR) at the offset 0x10, Bits 0:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line offset 
    // 
#define LO_MASK 0x3FFFU
#define LO_OFFSET 13
#define LO_START_BIT 0
#define LO_WIDTH 14


#define FGOR_REG 0x10

typedef enum lo {
    LO_0,
    LO_1
} LO_T ;
#define READ_LO() \
   ((READ_REGISTER_ULONG(0x10) & LO_MASK)  >> LO_START_BIT)

#define WRITE_LO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ LO_MASK) | ((val << LO_START_BIT) & LO_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgmar
//
// Return the value of register BGMAR
//
// Notes : Register Bgmar at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BGMAR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_BGMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_BGMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_BGMAR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgmar
//
// Return the value of register BGMAR
//
// Notes : Register background memory address register (BGMAR) at the offset 0x14, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory address 
    // 
#define MA_MASK 0xFFFFFFFFU
#define MA_OFFSET 31
#define MA_START_BIT 0
#define MA_WIDTH 32


#define BGMAR_REG 0x14

#define READ_MA() \
   ((READ_REGISTER_ULONG(0x14) & MA_MASK)  >> MA_START_BIT)

#define WRITE_MA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ MA_MASK) | ((val << MA_START_BIT) & MA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgor
//
// Return the value of register BGOR
//
// Notes : Register Bgor at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BGOR( y) \
     WRITE_REGISTER_ULONG( 0x18 , y)

#define SET_BITS_BGOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val |  mask ); \
   }

#define CLEAR_BITS_BGOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x18); \
     WRITE_REGISTER_ULONG( 0x18 , val & ~mask ); \
   }

#define READ_REGISTER_BGOR() \
     READ_REGISTER_ULONG(0x18)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgor
//
// Return the value of register BGOR
//
// Notes : Register background offset register (BGOR) at the offset 0x18, Bits 0:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line offset 
    // 
#define LO_MASK 0x3FFFU
#define LO_OFFSET 13
#define LO_START_BIT 0
#define LO_WIDTH 14


#define BGOR_REG 0x18

#define READ_LO() \
   ((READ_REGISTER_ULONG(0x18) & LO_MASK)  >> LO_START_BIT)

#define WRITE_LO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x18); \
     WRITE_REGISTER_ULONG(0x18, (OldValue & ~ LO_MASK) | ((val << LO_START_BIT) & LO_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register Fgpfccr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FGPFCCR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_FGPFCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_FGPFCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_FGPFCCR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register foreground PFC control register (FGPFCCR) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color mode 
    // 
#define CM_MASK 0xFU
#define CM_OFFSET 3
#define CM_START_BIT 0
#define CM_WIDTH 4


#define FGPFCCR_REG 0x1C

typedef enum cm {
    CM_0,
    CM_1
} CM_T ;
#define READ_CM() \
   ((READ_REGISTER_ULONG(0x1C) & CM_MASK)  >> CM_START_BIT)

#define WRITE_CM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CM_MASK) | ((val << CM_START_BIT) & CM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register foreground PFC control register (FGPFCCR) at the offset 0x1C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLUT color mode 
    // 
#define CCM_MASK 0x10U
#define CCM_OFFSET 4
#define CCM_START_BIT 4
#define CCM_WIDTH 1



typedef enum ccm {
    CCM_0,
    CCM_1
} CCM_T ;
#define WRITE_CCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CCM_MASK) | ((val << CCM_START_BIT) & CCM_MASK )); \
   } 

#define ENABLE_CCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  CCM_MASK ); \
   }

#define DISABLE_CCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~CCM_MASK ); \
   } 

#define READ_CCM() \
   ((READ_REGISTER_ULONG(0x1C) & CCM_MASK)  >> CCM_START_BIT)

#define WHEN_CCM_HIGH() \
     if ( READ_CCM() )


#define UNLESS_CCM_HIGH() \
     if (! READ_CCM() )


#define WAIT_CCM_LOW() \
    while ( READ_CCM() );


#define WAIT_CCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCM() && (--___t___ > 0)); }


#define WAIT_CCM_HIGH() \
    while (! READ_CCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register foreground PFC control register (FGPFCCR) at the offset 0x1C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start 
    // 
#define START_MASK 0x20U
#define START_OFFSET 5
#define START_START_BIT 5
#define START_WIDTH 1



typedef enum start {
    START_0,
    START_1
} START_T ;
#define WRITE_START(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ START_MASK) | ((val << START_START_BIT) & START_MASK )); \
   } 

#define ENABLE_START() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  START_MASK ); \
   }

#define DISABLE_START() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~START_MASK ); \
   } 

#define READ_START() \
   ((READ_REGISTER_ULONG(0x1C) & START_MASK)  >> START_START_BIT)

#define WHEN_START_HIGH() \
     if ( READ_START() )


#define UNLESS_START_HIGH() \
     if (! READ_START() )


#define WAIT_START_LOW() \
    while ( READ_START() );


#define WAIT_START_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_START() && (--___t___ > 0)); }


#define WAIT_START_HIGH() \
    while (! READ_START() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register foreground PFC control register (FGPFCCR) at the offset 0x1C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLUT size 
    // 
#define CS_MASK 0xFF00U
#define CS_OFFSET 15
#define CS_START_BIT 8
#define CS_WIDTH 8



typedef enum cs {
    CS_0,
    CS_1
} CS_T ;
#define READ_CS() \
   ((READ_REGISTER_ULONG(0x1C) & CS_MASK)  >> CS_START_BIT)

#define WRITE_CS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ CS_MASK) | ((val << CS_START_BIT) & CS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register foreground PFC control register (FGPFCCR) at the offset 0x1C, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alpha mode 
    // 
#define AM_MASK 0x30000U
#define AM_OFFSET 17
#define AM_START_BIT 16
#define AM_WIDTH 2



typedef enum am {
    AM_0,
    AM_1
} AM_T ;
#define READ_AM() \
   ((READ_REGISTER_ULONG(0x1C) & AM_MASK)  >> AM_START_BIT)

#define WRITE_AM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ AM_MASK) | ((val << AM_START_BIT) & AM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgpfccr
//
// Return the value of register FGPFCCR
//
// Notes : Register foreground PFC control register (FGPFCCR) at the offset 0x1C, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alpha value 
    // 
#define ALPHA_MASK 0xFF000000U
#define ALPHA_OFFSET 31
#define ALPHA_START_BIT 24
#define ALPHA_WIDTH 8



typedef enum alpha {
    ALPHA_0,
    ALPHA_1
} ALPHA_T ;
#define READ_ALPHA() \
   ((READ_REGISTER_ULONG(0x1C) & ALPHA_MASK)  >> ALPHA_START_BIT)

#define WRITE_ALPHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ALPHA_MASK) | ((val << ALPHA_START_BIT) & ALPHA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgcolr
//
// Return the value of register FGCOLR
//
// Notes : Register Fgcolr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FGCOLR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_FGCOLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_FGCOLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_FGCOLR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgcolr
//
// Return the value of register FGCOLR
//
// Notes : Register foreground color register (FGCOLR) at the offset 0x20, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blue Value 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define FGCOLR_REG 0x20

typedef enum blue {
    BLUE_0,
    BLUE_1
} BLUE_T ;
#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0x20) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgcolr
//
// Return the value of register FGCOLR
//
// Notes : Register foreground color register (FGCOLR) at the offset 0x20, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Green Value 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



typedef enum green {
    GREEN_0,
    GREEN_1
} GREEN_T ;
#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0x20) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgcolr
//
// Return the value of register FGCOLR
//
// Notes : Register foreground color register (FGCOLR) at the offset 0x20, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Red Value 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



typedef enum red {
    RED_0,
    RED_1
} RED_T ;
#define READ_RED() \
   ((READ_REGISTER_ULONG(0x20) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register Bgpfccr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BGPFCCR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

#define SET_BITS_BGPFCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  mask ); \
   }

#define CLEAR_BITS_BGPFCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val & ~mask ); \
   }

#define READ_REGISTER_BGPFCCR() \
     READ_REGISTER_ULONG(0x24)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register background PFC control register (BGPFCCR) at the offset 0x24, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color mode 
    // 
#define CM_MASK 0xFU
#define CM_OFFSET 3
#define CM_START_BIT 0
#define CM_WIDTH 4


#define BGPFCCR_REG 0x24

#define READ_CM() \
   ((READ_REGISTER_ULONG(0x24) & CM_MASK)  >> CM_START_BIT)

#define WRITE_CM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ CM_MASK) | ((val << CM_START_BIT) & CM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register background PFC control register (BGPFCCR) at the offset 0x24, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLUT Color mode 
    // 
#define CCM_MASK 0x10U
#define CCM_OFFSET 4
#define CCM_START_BIT 4
#define CCM_WIDTH 1



#define WRITE_CCM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ CCM_MASK) | ((val << CCM_START_BIT) & CCM_MASK )); \
   } 

#define ENABLE_CCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  CCM_MASK ); \
   }

#define DISABLE_CCM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~CCM_MASK ); \
   } 

#define READ_CCM() \
   ((READ_REGISTER_ULONG(0x24) & CCM_MASK)  >> CCM_START_BIT)

#define WHEN_CCM_HIGH() \
     if ( READ_CCM() )


#define UNLESS_CCM_HIGH() \
     if (! READ_CCM() )


#define WAIT_CCM_LOW() \
    while ( READ_CCM() );


#define WAIT_CCM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CCM() && (--___t___ > 0)); }


#define WAIT_CCM_HIGH() \
    while (! READ_CCM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register background PFC control register (BGPFCCR) at the offset 0x24, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Start 
    // 
#define START_MASK 0x20U
#define START_OFFSET 5
#define START_START_BIT 5
#define START_WIDTH 1



#define WRITE_START(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ START_MASK) | ((val << START_START_BIT) & START_MASK )); \
   } 

#define ENABLE_START() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG( 0x24 , val |  START_MASK ); \
   }

#define DISABLE_START() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x24); \
     WRITE_REGISTER_ULONG(0x24, val & ~START_MASK ); \
   } 

#define READ_START() \
   ((READ_REGISTER_ULONG(0x24) & START_MASK)  >> START_START_BIT)

#define WHEN_START_HIGH() \
     if ( READ_START() )


#define UNLESS_START_HIGH() \
     if (! READ_START() )


#define WAIT_START_LOW() \
    while ( READ_START() );


#define WAIT_START_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_START() && (--___t___ > 0)); }


#define WAIT_START_HIGH() \
    while (! READ_START() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register background PFC control register (BGPFCCR) at the offset 0x24, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CLUT size 
    // 
#define CS_MASK 0xFF00U
#define CS_OFFSET 15
#define CS_START_BIT 8
#define CS_WIDTH 8



#define READ_CS() \
   ((READ_REGISTER_ULONG(0x24) & CS_MASK)  >> CS_START_BIT)

#define WRITE_CS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ CS_MASK) | ((val << CS_START_BIT) & CS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register background PFC control register (BGPFCCR) at the offset 0x24, Bits 16:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alpha mode 
    // 
#define AM_MASK 0x30000U
#define AM_OFFSET 17
#define AM_START_BIT 16
#define AM_WIDTH 2



#define READ_AM() \
   ((READ_REGISTER_ULONG(0x24) & AM_MASK)  >> AM_START_BIT)

#define WRITE_AM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ AM_MASK) | ((val << AM_START_BIT) & AM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgpfccr
//
// Return the value of register BGPFCCR
//
// Notes : Register background PFC control register (BGPFCCR) at the offset 0x24, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alpha value 
    // 
#define ALPHA_MASK 0xFF000000U
#define ALPHA_OFFSET 31
#define ALPHA_START_BIT 24
#define ALPHA_WIDTH 8



#define READ_ALPHA() \
   ((READ_REGISTER_ULONG(0x24) & ALPHA_MASK)  >> ALPHA_START_BIT)

#define WRITE_ALPHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ ALPHA_MASK) | ((val << ALPHA_START_BIT) & ALPHA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgcolr
//
// Return the value of register BGCOLR
//
// Notes : Register Bgcolr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BGCOLR( y) \
     WRITE_REGISTER_ULONG( 0x28 , y)

#define SET_BITS_BGCOLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val |  mask ); \
   }

#define CLEAR_BITS_BGCOLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x28); \
     WRITE_REGISTER_ULONG( 0x28 , val & ~mask ); \
   }

#define READ_REGISTER_BGCOLR() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgcolr
//
// Return the value of register BGCOLR
//
// Notes : Register background color register (BGCOLR) at the offset 0x28, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blue Value 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define BGCOLR_REG 0x28

#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0x28) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgcolr
//
// Return the value of register BGCOLR
//
// Notes : Register background color register (BGCOLR) at the offset 0x28, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Green Value 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0x28) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgcolr
//
// Return the value of register BGCOLR
//
// Notes : Register background color register (BGCOLR) at the offset 0x28, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Red Value 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



#define READ_RED() \
   ((READ_REGISTER_ULONG(0x28) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgcmar
//
// Return the value of register FGCMAR
//
// Notes : Register Fgcmar at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FGCMAR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

#define SET_BITS_FGCMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  mask ); \
   }

#define CLEAR_BITS_FGCMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val & ~mask ); \
   }

#define READ_REGISTER_FGCMAR() \
     READ_REGISTER_ULONG(0x2C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgcmar
//
// Return the value of register FGCMAR
//
// Notes : Register foreground CLUT memory address register (FGCMAR) at the offset 0x2C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory Address 
    // 
#define MA_MASK 0xFFFFFFFFU
#define MA_OFFSET 31
#define MA_START_BIT 0
#define MA_WIDTH 32


#define FGCMAR_REG 0x2C

#define READ_MA() \
   ((READ_REGISTER_ULONG(0x2C) & MA_MASK)  >> MA_START_BIT)

#define WRITE_MA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ MA_MASK) | ((val << MA_START_BIT) & MA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgcmar
//
// Return the value of register BGCMAR
//
// Notes : Register Bgcmar at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BGCMAR( y) \
     WRITE_REGISTER_ULONG( 0x30 , y)

#define SET_BITS_BGCMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  mask ); \
   }

#define CLEAR_BITS_BGCMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val & ~mask ); \
   }

#define READ_REGISTER_BGCMAR() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgcmar
//
// Return the value of register BGCMAR
//
// Notes : Register background CLUT memory address register (BGCMAR) at the offset 0x30, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory address 
    // 
#define MA_MASK 0xFFFFFFFFU
#define MA_OFFSET 31
#define MA_START_BIT 0
#define MA_WIDTH 32


#define BGCMAR_REG 0x30

#define READ_MA() \
   ((READ_REGISTER_ULONG(0x30) & MA_MASK)  >> MA_START_BIT)

#define WRITE_MA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ MA_MASK) | ((val << MA_START_BIT) & MA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Opfccr
//
// Return the value of register OPFCCR
//
// Notes : Register Opfccr at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OPFCCR( y) \
     WRITE_REGISTER_ULONG( 0x34 , y)

#define SET_BITS_OPFCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  mask ); \
   }

#define CLEAR_BITS_OPFCCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val & ~mask ); \
   }

#define READ_REGISTER_OPFCCR() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : Opfccr
//
// Return the value of register OPFCCR
//
// Notes : Register output PFC control register (OPFCCR) at the offset 0x34, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Color mode 
    // 
#define CM_MASK 0x7U
#define CM_OFFSET 2
#define CM_START_BIT 0
#define CM_WIDTH 3


#define OPFCCR_REG 0x34

#define READ_CM() \
   ((READ_REGISTER_ULONG(0x34) & CM_MASK)  >> CM_START_BIT)

#define WRITE_CM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ CM_MASK) | ((val << CM_START_BIT) & CM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ocolr
//
// Return the value of register OCOLR
//
// Notes : Register Ocolr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OCOLR( y) \
     WRITE_REGISTER_ULONG( 0x38 , y)

#define SET_BITS_OCOLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val |  mask ); \
   }

#define CLEAR_BITS_OCOLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x38); \
     WRITE_REGISTER_ULONG( 0x38 , val & ~mask ); \
   }

#define READ_REGISTER_OCOLR() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ocolr
//
// Return the value of register OCOLR
//
// Notes : Register output color register (OCOLR) at the offset 0x38, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Blue Value 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define OCOLR_REG 0x38

#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0x38) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ocolr
//
// Return the value of register OCOLR
//
// Notes : Register output color register (OCOLR) at the offset 0x38, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Green Value 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0x38) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ocolr
//
// Return the value of register OCOLR
//
// Notes : Register output color register (OCOLR) at the offset 0x38, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Red Value 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



#define READ_RED() \
   ((READ_REGISTER_ULONG(0x38) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ocolr
//
// Return the value of register OCOLR
//
// Notes : Register output color register (OCOLR) at the offset 0x38, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alpha Channel Value 
    // 
#define APLHA_MASK 0xFF000000U
#define APLHA_OFFSET 31
#define APLHA_START_BIT 24
#define APLHA_WIDTH 8



typedef enum aplha {
    APLHA_0,
    APLHA_1
} APLHA_T ;
#define READ_APLHA() \
   ((READ_REGISTER_ULONG(0x38) & APLHA_MASK)  >> APLHA_START_BIT)

#define WRITE_APLHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ APLHA_MASK) | ((val << APLHA_START_BIT) & APLHA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Omar
//
// Return the value of register OMAR
//
// Notes : Register Omar at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OMAR( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_OMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_OMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_OMAR() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Omar
//
// Return the value of register OMAR
//
// Notes : Register output memory address register (OMAR) at the offset 0x3C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Memory Address 
    // 
#define MA_MASK 0xFFFFFFFFU
#define MA_OFFSET 31
#define MA_START_BIT 0
#define MA_WIDTH 32


#define OMAR_REG 0x3C

#define READ_MA() \
   ((READ_REGISTER_ULONG(0x3C) & MA_MASK)  >> MA_START_BIT)

#define WRITE_MA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ MA_MASK) | ((val << MA_START_BIT) & MA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Oor
//
// Return the value of register OOR
//
// Notes : Register Oor at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OOR( y) \
     WRITE_REGISTER_ULONG( 0x40 , y)

#define SET_BITS_OOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  mask ); \
   }

#define CLEAR_BITS_OOR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val & ~mask ); \
   }

#define READ_REGISTER_OOR() \
     READ_REGISTER_ULONG(0x40)

/////////////////////////////////////////////////////////////////////////
//
// Function : Oor
//
// Return the value of register OOR
//
// Notes : Register output offset register (OOR) at the offset 0x40, Bits 0:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line Offset 
    // 
#define LO_MASK 0x3FFFU
#define LO_OFFSET 13
#define LO_START_BIT 0
#define LO_WIDTH 14


#define OOR_REG 0x40

#define READ_LO() \
   ((READ_REGISTER_ULONG(0x40) & LO_MASK)  >> LO_START_BIT)

#define WRITE_LO(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ LO_MASK) | ((val << LO_START_BIT) & LO_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Nlr
//
// Return the value of register NLR
//
// Notes : Register Nlr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_NLR( y) \
     WRITE_REGISTER_ULONG( 0x44 , y)

#define SET_BITS_NLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  mask ); \
   }

#define CLEAR_BITS_NLR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val & ~mask ); \
   }

#define READ_REGISTER_NLR() \
     READ_REGISTER_ULONG(0x44)

/////////////////////////////////////////////////////////////////////////
//
// Function : Nlr
//
// Return the value of register NLR
//
// Notes : Register number of line register (NLR) at the offset 0x44, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Number of lines 
    // 
#define NL_MASK 0xFFFFU
#define NL_OFFSET 15
#define NL_START_BIT 0
#define NL_WIDTH 16


#define NLR_REG 0x44

typedef enum nl {
    NL_0,
    NL_1
} NL_T ;
#define READ_NL() \
   ((READ_REGISTER_ULONG(0x44) & NL_MASK)  >> NL_START_BIT)

#define WRITE_NL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ NL_MASK) | ((val << NL_START_BIT) & NL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Nlr
//
// Return the value of register NLR
//
// Notes : Register number of line register (NLR) at the offset 0x44, Bits 16:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Pixel per lines 
    // 
#define PL_MASK 0x3FFF0000U
#define PL_OFFSET 29
#define PL_START_BIT 16
#define PL_WIDTH 14



typedef enum pl {
    PL_0,
    PL_1
} PL_T ;
#define READ_PL() \
   ((READ_REGISTER_ULONG(0x44) & PL_MASK)  >> PL_START_BIT)

#define WRITE_PL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ PL_MASK) | ((val << PL_START_BIT) & PL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Lwr
//
// Return the value of register LWR
//
// Notes : Register Lwr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LWR( y) \
     WRITE_REGISTER_ULONG( 0x48 , y)

#define SET_BITS_LWR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  mask ); \
   }

#define CLEAR_BITS_LWR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val & ~mask ); \
   }

#define READ_REGISTER_LWR() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Lwr
//
// Return the value of register LWR
//
// Notes : Register line watermark register (LWR) at the offset 0x48, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Line watermark 
    // 
#define LW_MASK 0xFFFFU
#define LW_OFFSET 15
#define LW_START_BIT 0
#define LW_WIDTH 16


#define LWR_REG 0x48

typedef enum lw {
    LW_0,
    LW_1
} LW_T ;
#define READ_LW() \
   ((READ_REGISTER_ULONG(0x48) & LW_MASK)  >> LW_START_BIT)

#define WRITE_LW(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ LW_MASK) | ((val << LW_START_BIT) & LW_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Amtcr
//
// Return the value of register AMTCR
//
// Notes : Register Amtcr at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_AMTCR( y) \
     WRITE_REGISTER_ULONG( 0x4C , y)

#define SET_BITS_AMTCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  mask ); \
   }

#define CLEAR_BITS_AMTCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val & ~mask ); \
   }

#define READ_REGISTER_AMTCR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Amtcr
//
// Return the value of register AMTCR
//
// Notes : Register AHB master timer configuration register (AMTCR) at the offset 0x4C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Enable 
    // 
#define EN_MASK 0x1U
#define EN_OFFSET 0
#define EN_START_BIT 0
#define EN_WIDTH 1


#define AMTCR_REG 0x4C

typedef enum en {
    EN_0,
    EN_1
} EN_T ;
#define WRITE_EN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ EN_MASK) | ((val << EN_START_BIT) & EN_MASK )); \
   } 

#define ENABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  EN_MASK ); \
   }

#define DISABLE_EN() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~EN_MASK ); \
   } 

#define READ_EN() \
   ((READ_REGISTER_ULONG(0x4C) & EN_MASK)  >> EN_START_BIT)

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
// Function : Amtcr
//
// Return the value of register AMTCR
//
// Notes : Register AHB master timer configuration register (AMTCR) at the offset 0x4C, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Dead Time 
    // 
#define DT_MASK 0xFF00U
#define DT_OFFSET 15
#define DT_START_BIT 8
#define DT_WIDTH 8



#define READ_DT() \
   ((READ_REGISTER_ULONG(0x4C) & DT_MASK)  >> DT_START_BIT)

#define WRITE_DT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ DT_MASK) | ((val << DT_START_BIT) & DT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgclut
//
// Return the value of register FGCLUT
//
// Notes : Register Fgclut at offset 0x400
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_FGCLUT( y) \
     WRITE_REGISTER_ULONG( 0x400 , y)

#define SET_BITS_FGCLUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x400); \
     WRITE_REGISTER_ULONG( 0x400 , val |  mask ); \
   }

#define CLEAR_BITS_FGCLUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x400); \
     WRITE_REGISTER_ULONG( 0x400 , val & ~mask ); \
   }

#define READ_REGISTER_FGCLUT() \
     READ_REGISTER_ULONG(0x400)

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgclut
//
// Return the value of register FGCLUT
//
// Notes : Register FGCLUT (FGCLUT) at the offset 0x400, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BLUE 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define FGCLUT_REG 0x400

#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0x400) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgclut
//
// Return the value of register FGCLUT
//
// Notes : Register FGCLUT (FGCLUT) at the offset 0x400, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // GREEN 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0x400) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgclut
//
// Return the value of register FGCLUT
//
// Notes : Register FGCLUT (FGCLUT) at the offset 0x400, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RED 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



#define READ_RED() \
   ((READ_REGISTER_ULONG(0x400) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Fgclut
//
// Return the value of register FGCLUT
//
// Notes : Register FGCLUT (FGCLUT) at the offset 0x400, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // APLHA 
    // 
#define APLHA_MASK 0xFF000000U
#define APLHA_OFFSET 31
#define APLHA_START_BIT 24
#define APLHA_WIDTH 8



#define READ_APLHA() \
   ((READ_REGISTER_ULONG(0x400) & APLHA_MASK)  >> APLHA_START_BIT)

#define WRITE_APLHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x400); \
     WRITE_REGISTER_ULONG(0x400, (OldValue & ~ APLHA_MASK) | ((val << APLHA_START_BIT) & APLHA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgclut
//
// Return the value of register BGCLUT
//
// Notes : Register Bgclut at offset 0x800
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BGCLUT( y) \
     WRITE_REGISTER_ULONG( 0x800 , y)

#define SET_BITS_BGCLUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x800); \
     WRITE_REGISTER_ULONG( 0x800 , val |  mask ); \
   }

#define CLEAR_BITS_BGCLUT(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x800); \
     WRITE_REGISTER_ULONG( 0x800 , val & ~mask ); \
   }

#define READ_REGISTER_BGCLUT() \
     READ_REGISTER_ULONG(0x800)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgclut
//
// Return the value of register BGCLUT
//
// Notes : Register BGCLUT (BGCLUT) at the offset 0x800, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BLUE 
    // 
#define BLUE_MASK 0xFFU
#define BLUE_OFFSET 7
#define BLUE_START_BIT 0
#define BLUE_WIDTH 8


#define BGCLUT_REG 0x800

#define READ_BLUE() \
   ((READ_REGISTER_ULONG(0x800) & BLUE_MASK)  >> BLUE_START_BIT)

#define WRITE_BLUE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x800); \
     WRITE_REGISTER_ULONG(0x800, (OldValue & ~ BLUE_MASK) | ((val << BLUE_START_BIT) & BLUE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgclut
//
// Return the value of register BGCLUT
//
// Notes : Register BGCLUT (BGCLUT) at the offset 0x800, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // GREEN 
    // 
#define GREEN_MASK 0xFF00U
#define GREEN_OFFSET 15
#define GREEN_START_BIT 8
#define GREEN_WIDTH 8



#define READ_GREEN() \
   ((READ_REGISTER_ULONG(0x800) & GREEN_MASK)  >> GREEN_START_BIT)

#define WRITE_GREEN(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x800); \
     WRITE_REGISTER_ULONG(0x800, (OldValue & ~ GREEN_MASK) | ((val << GREEN_START_BIT) & GREEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgclut
//
// Return the value of register BGCLUT
//
// Notes : Register BGCLUT (BGCLUT) at the offset 0x800, Bits 16:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RED 
    // 
#define RED_MASK 0xFF0000U
#define RED_OFFSET 23
#define RED_START_BIT 16
#define RED_WIDTH 8



#define READ_RED() \
   ((READ_REGISTER_ULONG(0x800) & RED_MASK)  >> RED_START_BIT)

#define WRITE_RED(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x800); \
     WRITE_REGISTER_ULONG(0x800, (OldValue & ~ RED_MASK) | ((val << RED_START_BIT) & RED_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bgclut
//
// Return the value of register BGCLUT
//
// Notes : Register BGCLUT (BGCLUT) at the offset 0x800, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // APLHA 
    // 
#define APLHA_MASK 0xFF000000U
#define APLHA_OFFSET 31
#define APLHA_START_BIT 24
#define APLHA_WIDTH 8



#define READ_APLHA() \
   ((READ_REGISTER_ULONG(0x800) & APLHA_MASK)  >> APLHA_START_BIT)

#define WRITE_APLHA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x800); \
     WRITE_REGISTER_ULONG(0x800, (OldValue & ~ APLHA_MASK) | ((val << APLHA_START_BIT) & APLHA_MASK )); \
   } 

