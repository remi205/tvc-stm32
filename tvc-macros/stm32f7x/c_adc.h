/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/c_adc.h
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
 
#define C_ADC 0x40012300
/////////////////////////////////////////////////////////////////////////
//
// Function : Csr
//
// Return the value of register CSR
//
// Notes : Register Csr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CSR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : AWD1
//
// Return the value of register Csr
//
// Notes : Analog watchdog flag of ADC 1 
//        (CSR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWD1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ AWD1_MASK) | ((val << AWD1_START_BIT) & AWD1_MASK )); \
   } 

#define ENABLE_AWD1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  AWD1_MASK ); \
   }

#define DISABLE_AWD1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~AWD1_MASK ); \
   } 

#define READ_AWD1() \
   ((READ_REGISTER_ULONG(0x0) & AWD1_MASK)  >> AWD1_START_BIT)

#define WHEN_AWD1_HIGH() \
     if ( READ_AWD1() )


#define UNLESS_AWD1_HIGH() \
     if (! READ_AWD1() )


#define WAIT_AWD1_LOW() \
    while ( READ_AWD1() );


#define WAIT_AWD1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AWD1() && (--___t___ > 0)); }


#define WAIT_AWD1_HIGH() \
    while (! READ_AWD1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOC1
//
// Return the value of register Csr
//
// Notes : End of conversion of ADC 1 
//        (CSR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOC1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EOC1_MASK) | ((val << EOC1_START_BIT) & EOC1_MASK )); \
   } 

#define ENABLE_EOC1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EOC1_MASK ); \
   }

#define DISABLE_EOC1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EOC1_MASK ); \
   } 

#define READ_EOC1() \
   ((READ_REGISTER_ULONG(0x0) & EOC1_MASK)  >> EOC1_START_BIT)

#define WHEN_EOC1_HIGH() \
     if ( READ_EOC1() )


#define UNLESS_EOC1_HIGH() \
     if (! READ_EOC1() )


#define WAIT_EOC1_LOW() \
    while ( READ_EOC1() );


#define WAIT_EOC1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOC1() && (--___t___ > 0)); }


#define WAIT_EOC1_HIGH() \
    while (! READ_EOC1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JEOC1
//
// Return the value of register Csr
//
// Notes : Injected channel end of conversion of ADC 1 
//        (CSR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JEOC1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JEOC1_MASK) | ((val << JEOC1_START_BIT) & JEOC1_MASK )); \
   } 

#define ENABLE_JEOC1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JEOC1_MASK ); \
   }

#define DISABLE_JEOC1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JEOC1_MASK ); \
   } 

#define READ_JEOC1() \
   ((READ_REGISTER_ULONG(0x0) & JEOC1_MASK)  >> JEOC1_START_BIT)

#define WHEN_JEOC1_HIGH() \
     if ( READ_JEOC1() )


#define UNLESS_JEOC1_HIGH() \
     if (! READ_JEOC1() )


#define WAIT_JEOC1_LOW() \
    while ( READ_JEOC1() );


#define WAIT_JEOC1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JEOC1() && (--___t___ > 0)); }


#define WAIT_JEOC1_HIGH() \
    while (! READ_JEOC1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JSTRT1
//
// Return the value of register Csr
//
// Notes : Injected channel Start flag of ADC 1 
//        (CSR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JSTRT1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JSTRT1_MASK) | ((val << JSTRT1_START_BIT) & JSTRT1_MASK )); \
   } 

#define ENABLE_JSTRT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JSTRT1_MASK ); \
   }

#define DISABLE_JSTRT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JSTRT1_MASK ); \
   } 

#define READ_JSTRT1() \
   ((READ_REGISTER_ULONG(0x0) & JSTRT1_MASK)  >> JSTRT1_START_BIT)

#define WHEN_JSTRT1_HIGH() \
     if ( READ_JSTRT1() )


#define UNLESS_JSTRT1_HIGH() \
     if (! READ_JSTRT1() )


#define WAIT_JSTRT1_LOW() \
    while ( READ_JSTRT1() );


#define WAIT_JSTRT1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JSTRT1() && (--___t___ > 0)); }


#define WAIT_JSTRT1_HIGH() \
    while (! READ_JSTRT1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : STRT1
//
// Return the value of register Csr
//
// Notes : Regular channel Start flag of ADC 1 
//        (CSR) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STRT1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ STRT1_MASK) | ((val << STRT1_START_BIT) & STRT1_MASK )); \
   } 

#define ENABLE_STRT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  STRT1_MASK ); \
   }

#define DISABLE_STRT1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~STRT1_MASK ); \
   } 

#define READ_STRT1() \
   ((READ_REGISTER_ULONG(0x0) & STRT1_MASK)  >> STRT1_START_BIT)

#define WHEN_STRT1_HIGH() \
     if ( READ_STRT1() )


#define UNLESS_STRT1_HIGH() \
     if (! READ_STRT1() )


#define WAIT_STRT1_LOW() \
    while ( READ_STRT1() );


#define WAIT_STRT1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STRT1() && (--___t___ > 0)); }


#define WAIT_STRT1_HIGH() \
    while (! READ_STRT1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR1
//
// Return the value of register Csr
//
// Notes : Overrun flag of ADC 1 
//        (CSR) at the offset 0x0, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ OVR1_MASK) | ((val << OVR1_START_BIT) & OVR1_MASK )); \
   } 

#define ENABLE_OVR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  OVR1_MASK ); \
   }

#define DISABLE_OVR1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~OVR1_MASK ); \
   } 

#define READ_OVR1() \
   ((READ_REGISTER_ULONG(0x0) & OVR1_MASK)  >> OVR1_START_BIT)

#define WHEN_OVR1_HIGH() \
     if ( READ_OVR1() )


#define UNLESS_OVR1_HIGH() \
     if (! READ_OVR1() )


#define WAIT_OVR1_LOW() \
    while ( READ_OVR1() );


#define WAIT_OVR1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR1() && (--___t___ > 0)); }


#define WAIT_OVR1_HIGH() \
    while (! READ_OVR1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : AWD2
//
// Return the value of register Csr
//
// Notes : Analog watchdog flag of ADC 2 
//        (CSR) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWD2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ AWD2_MASK) | ((val << AWD2_START_BIT) & AWD2_MASK )); \
   } 

#define ENABLE_AWD2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  AWD2_MASK ); \
   }

#define DISABLE_AWD2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~AWD2_MASK ); \
   } 

#define READ_AWD2() \
   ((READ_REGISTER_ULONG(0x0) & AWD2_MASK)  >> AWD2_START_BIT)

#define WHEN_AWD2_HIGH() \
     if ( READ_AWD2() )


#define UNLESS_AWD2_HIGH() \
     if (! READ_AWD2() )


#define WAIT_AWD2_LOW() \
    while ( READ_AWD2() );


#define WAIT_AWD2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AWD2() && (--___t___ > 0)); }


#define WAIT_AWD2_HIGH() \
    while (! READ_AWD2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOC2
//
// Return the value of register Csr
//
// Notes : End of conversion of ADC 2 
//        (CSR) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOC2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EOC2_MASK) | ((val << EOC2_START_BIT) & EOC2_MASK )); \
   } 

#define ENABLE_EOC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EOC2_MASK ); \
   }

#define DISABLE_EOC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EOC2_MASK ); \
   } 

#define READ_EOC2() \
   ((READ_REGISTER_ULONG(0x0) & EOC2_MASK)  >> EOC2_START_BIT)

#define WHEN_EOC2_HIGH() \
     if ( READ_EOC2() )


#define UNLESS_EOC2_HIGH() \
     if (! READ_EOC2() )


#define WAIT_EOC2_LOW() \
    while ( READ_EOC2() );


#define WAIT_EOC2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOC2() && (--___t___ > 0)); }


#define WAIT_EOC2_HIGH() \
    while (! READ_EOC2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JEOC2
//
// Return the value of register Csr
//
// Notes : Injected channel end of conversion of ADC 2 
//        (CSR) at the offset 0x0, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JEOC2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JEOC2_MASK) | ((val << JEOC2_START_BIT) & JEOC2_MASK )); \
   } 

#define ENABLE_JEOC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JEOC2_MASK ); \
   }

#define DISABLE_JEOC2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JEOC2_MASK ); \
   } 

#define READ_JEOC2() \
   ((READ_REGISTER_ULONG(0x0) & JEOC2_MASK)  >> JEOC2_START_BIT)

#define WHEN_JEOC2_HIGH() \
     if ( READ_JEOC2() )


#define UNLESS_JEOC2_HIGH() \
     if (! READ_JEOC2() )


#define WAIT_JEOC2_LOW() \
    while ( READ_JEOC2() );


#define WAIT_JEOC2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JEOC2() && (--___t___ > 0)); }


#define WAIT_JEOC2_HIGH() \
    while (! READ_JEOC2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JSTRT2
//
// Return the value of register Csr
//
// Notes : Injected channel Start flag of ADC 2 
//        (CSR) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JSTRT2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JSTRT2_MASK) | ((val << JSTRT2_START_BIT) & JSTRT2_MASK )); \
   } 

#define ENABLE_JSTRT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JSTRT2_MASK ); \
   }

#define DISABLE_JSTRT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JSTRT2_MASK ); \
   } 

#define READ_JSTRT2() \
   ((READ_REGISTER_ULONG(0x0) & JSTRT2_MASK)  >> JSTRT2_START_BIT)

#define WHEN_JSTRT2_HIGH() \
     if ( READ_JSTRT2() )


#define UNLESS_JSTRT2_HIGH() \
     if (! READ_JSTRT2() )


#define WAIT_JSTRT2_LOW() \
    while ( READ_JSTRT2() );


#define WAIT_JSTRT2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JSTRT2() && (--___t___ > 0)); }


#define WAIT_JSTRT2_HIGH() \
    while (! READ_JSTRT2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : STRT2
//
// Return the value of register Csr
//
// Notes : Regular channel Start flag of ADC 2 
//        (CSR) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STRT2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ STRT2_MASK) | ((val << STRT2_START_BIT) & STRT2_MASK )); \
   } 

#define ENABLE_STRT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  STRT2_MASK ); \
   }

#define DISABLE_STRT2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~STRT2_MASK ); \
   } 

#define READ_STRT2() \
   ((READ_REGISTER_ULONG(0x0) & STRT2_MASK)  >> STRT2_START_BIT)

#define WHEN_STRT2_HIGH() \
     if ( READ_STRT2() )


#define UNLESS_STRT2_HIGH() \
     if (! READ_STRT2() )


#define WAIT_STRT2_LOW() \
    while ( READ_STRT2() );


#define WAIT_STRT2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STRT2() && (--___t___ > 0)); }


#define WAIT_STRT2_HIGH() \
    while (! READ_STRT2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR2
//
// Return the value of register Csr
//
// Notes : Overrun flag of ADC 2 
//        (CSR) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ OVR2_MASK) | ((val << OVR2_START_BIT) & OVR2_MASK )); \
   } 

#define ENABLE_OVR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  OVR2_MASK ); \
   }

#define DISABLE_OVR2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~OVR2_MASK ); \
   } 

#define READ_OVR2() \
   ((READ_REGISTER_ULONG(0x0) & OVR2_MASK)  >> OVR2_START_BIT)

#define WHEN_OVR2_HIGH() \
     if ( READ_OVR2() )


#define UNLESS_OVR2_HIGH() \
     if (! READ_OVR2() )


#define WAIT_OVR2_LOW() \
    while ( READ_OVR2() );


#define WAIT_OVR2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR2() && (--___t___ > 0)); }


#define WAIT_OVR2_HIGH() \
    while (! READ_OVR2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : AWD3
//
// Return the value of register Csr
//
// Notes : Analog watchdog flag of ADC 3 
//        (CSR) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWD3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ AWD3_MASK) | ((val << AWD3_START_BIT) & AWD3_MASK )); \
   } 

#define ENABLE_AWD3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  AWD3_MASK ); \
   }

#define DISABLE_AWD3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~AWD3_MASK ); \
   } 

#define READ_AWD3() \
   ((READ_REGISTER_ULONG(0x0) & AWD3_MASK)  >> AWD3_START_BIT)

#define WHEN_AWD3_HIGH() \
     if ( READ_AWD3() )


#define UNLESS_AWD3_HIGH() \
     if (! READ_AWD3() )


#define WAIT_AWD3_LOW() \
    while ( READ_AWD3() );


#define WAIT_AWD3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_AWD3() && (--___t___ > 0)); }


#define WAIT_AWD3_HIGH() \
    while (! READ_AWD3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOC3
//
// Return the value of register Csr
//
// Notes : End of conversion of ADC 3 
//        (CSR) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOC3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ EOC3_MASK) | ((val << EOC3_START_BIT) & EOC3_MASK )); \
   } 

#define ENABLE_EOC3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  EOC3_MASK ); \
   }

#define DISABLE_EOC3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~EOC3_MASK ); \
   } 

#define READ_EOC3() \
   ((READ_REGISTER_ULONG(0x0) & EOC3_MASK)  >> EOC3_START_BIT)

#define WHEN_EOC3_HIGH() \
     if ( READ_EOC3() )


#define UNLESS_EOC3_HIGH() \
     if (! READ_EOC3() )


#define WAIT_EOC3_LOW() \
    while ( READ_EOC3() );


#define WAIT_EOC3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_EOC3() && (--___t___ > 0)); }


#define WAIT_EOC3_HIGH() \
    while (! READ_EOC3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JEOC3
//
// Return the value of register Csr
//
// Notes : Injected channel end of conversion of ADC 3 
//        (CSR) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JEOC3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JEOC3_MASK) | ((val << JEOC3_START_BIT) & JEOC3_MASK )); \
   } 

#define ENABLE_JEOC3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JEOC3_MASK ); \
   }

#define DISABLE_JEOC3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JEOC3_MASK ); \
   } 

#define READ_JEOC3() \
   ((READ_REGISTER_ULONG(0x0) & JEOC3_MASK)  >> JEOC3_START_BIT)

#define WHEN_JEOC3_HIGH() \
     if ( READ_JEOC3() )


#define UNLESS_JEOC3_HIGH() \
     if (! READ_JEOC3() )


#define WAIT_JEOC3_LOW() \
    while ( READ_JEOC3() );


#define WAIT_JEOC3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JEOC3() && (--___t___ > 0)); }


#define WAIT_JEOC3_HIGH() \
    while (! READ_JEOC3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : JSTRT3
//
// Return the value of register Csr
//
// Notes : Injected channel Start flag of ADC 3 
//        (CSR) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JSTRT3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ JSTRT3_MASK) | ((val << JSTRT3_START_BIT) & JSTRT3_MASK )); \
   } 

#define ENABLE_JSTRT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  JSTRT3_MASK ); \
   }

#define DISABLE_JSTRT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~JSTRT3_MASK ); \
   } 

#define READ_JSTRT3() \
   ((READ_REGISTER_ULONG(0x0) & JSTRT3_MASK)  >> JSTRT3_START_BIT)

#define WHEN_JSTRT3_HIGH() \
     if ( READ_JSTRT3() )


#define UNLESS_JSTRT3_HIGH() \
     if (! READ_JSTRT3() )


#define WAIT_JSTRT3_LOW() \
    while ( READ_JSTRT3() );


#define WAIT_JSTRT3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_JSTRT3() && (--___t___ > 0)); }


#define WAIT_JSTRT3_HIGH() \
    while (! READ_JSTRT3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : STRT3
//
// Return the value of register Csr
//
// Notes : Regular channel Start flag of ADC 3 
//        (CSR) at the offset 0x0, Bits 20:20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STRT3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ STRT3_MASK) | ((val << STRT3_START_BIT) & STRT3_MASK )); \
   } 

#define ENABLE_STRT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  STRT3_MASK ); \
   }

#define DISABLE_STRT3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~STRT3_MASK ); \
   } 

#define READ_STRT3() \
   ((READ_REGISTER_ULONG(0x0) & STRT3_MASK)  >> STRT3_START_BIT)

#define WHEN_STRT3_HIGH() \
     if ( READ_STRT3() )


#define UNLESS_STRT3_HIGH() \
     if (! READ_STRT3() )


#define WAIT_STRT3_LOW() \
    while ( READ_STRT3() );


#define WAIT_STRT3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_STRT3() && (--___t___ > 0)); }


#define WAIT_STRT3_HIGH() \
    while (! READ_STRT3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR3
//
// Return the value of register Csr
//
// Notes : Overrun flag of ADC3 
//        (CSR) at the offset 0x0, Bits 21:21
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ OVR3_MASK) | ((val << OVR3_START_BIT) & OVR3_MASK )); \
   } 

#define ENABLE_OVR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  OVR3_MASK ); \
   }

#define DISABLE_OVR3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~OVR3_MASK ); \
   } 

#define READ_OVR3() \
   ((READ_REGISTER_ULONG(0x0) & OVR3_MASK)  >> OVR3_START_BIT)

#define WHEN_OVR3_HIGH() \
     if ( READ_OVR3() )


#define UNLESS_OVR3_HIGH() \
     if (! READ_OVR3() )


#define WAIT_OVR3_LOW() \
    while ( READ_OVR3() );


#define WAIT_OVR3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_OVR3() && (--___t___ > 0)); }


#define WAIT_OVR3_HIGH() \
    while (! READ_OVR3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Ccr
//
// Return the value of register CCR
//
// Notes : Register Ccr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CCR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_CCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_CCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_CCR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : MULT
//
// Return the value of register Ccr
//
// Notes : Multi ADC mode selection 
//        (CCR) at the offset 0x4, Bits 0:4
//
/////////////////////////////////////////////////////////////////////////
#define READ_MULT() \
   ((READ_REGISTER_ULONG(0x4) & MULT_MASK)  >> MULT_START_BIT)

#define WRITE_MULT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MULT_MASK) | ((val << MULT_START_BIT) & MULT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DELAY
//
// Return the value of register Ccr
//
// Notes : Delay between 2 sampling phases 
//        (CCR) at the offset 0x4, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_DELAY() \
   ((READ_REGISTER_ULONG(0x4) & DELAY_MASK)  >> DELAY_START_BIT)

#define WRITE_DELAY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DELAY_MASK) | ((val << DELAY_START_BIT) & DELAY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : DDS
//
// Return the value of register Ccr
//
// Notes : DMA disable selection for multi-ADC mode 
//        (CCR) at the offset 0x4, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DDS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DDS_MASK) | ((val << DDS_START_BIT) & DDS_MASK )); \
   } 

#define ENABLE_DDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  DDS_MASK ); \
   }

#define DISABLE_DDS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~DDS_MASK ); \
   } 

#define READ_DDS() \
   ((READ_REGISTER_ULONG(0x4) & DDS_MASK)  >> DDS_START_BIT)

#define WHEN_DDS_HIGH() \
     if ( READ_DDS() )


#define UNLESS_DDS_HIGH() \
     if (! READ_DDS() )


#define WAIT_DDS_LOW() \
    while ( READ_DDS() );


#define WAIT_DDS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_DDS() && (--___t___ > 0)); }


#define WAIT_DDS_HIGH() \
    while (! READ_DDS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMA
//
// Return the value of register Ccr
//
// Notes : Direct memory access mode for multi ADC mode 
//        (CCR) at the offset 0x4, Bits 14:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_DMA() \
   ((READ_REGISTER_ULONG(0x4) & DMA_MASK)  >> DMA_START_BIT)

#define WRITE_DMA(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DMA_MASK) | ((val << DMA_START_BIT) & DMA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ADCPRE
//
// Return the value of register Ccr
//
// Notes : ADC prescaler 
//        (CCR) at the offset 0x4, Bits 16:17
//
/////////////////////////////////////////////////////////////////////////
#define READ_ADCPRE() \
   ((READ_REGISTER_ULONG(0x4) & ADCPRE_MASK)  >> ADCPRE_START_BIT)

#define WRITE_ADCPRE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ ADCPRE_MASK) | ((val << ADCPRE_START_BIT) & ADCPRE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : VBATE
//
// Return the value of register Ccr
//
// Notes : VBAT enable 
//        (CCR) at the offset 0x4, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_VBATE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ VBATE_MASK) | ((val << VBATE_START_BIT) & VBATE_MASK )); \
   } 

#define ENABLE_VBATE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  VBATE_MASK ); \
   }

#define DISABLE_VBATE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~VBATE_MASK ); \
   } 

#define READ_VBATE() \
   ((READ_REGISTER_ULONG(0x4) & VBATE_MASK)  >> VBATE_START_BIT)

#define WHEN_VBATE_HIGH() \
     if ( READ_VBATE() )


#define UNLESS_VBATE_HIGH() \
     if (! READ_VBATE() )


#define WAIT_VBATE_LOW() \
    while ( READ_VBATE() );


#define WAIT_VBATE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_VBATE() && (--___t___ > 0)); }


#define WAIT_VBATE_HIGH() \
    while (! READ_VBATE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TSVREFE
//
// Return the value of register Ccr
//
// Notes : Temperature sensor and VREFINT enable 
//        (CCR) at the offset 0x4, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TSVREFE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ TSVREFE_MASK) | ((val << TSVREFE_START_BIT) & TSVREFE_MASK )); \
   } 

#define ENABLE_TSVREFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  TSVREFE_MASK ); \
   }

#define DISABLE_TSVREFE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~TSVREFE_MASK ); \
   } 

#define READ_TSVREFE() \
   ((READ_REGISTER_ULONG(0x4) & TSVREFE_MASK)  >> TSVREFE_START_BIT)

#define WHEN_TSVREFE_HIGH() \
     if ( READ_TSVREFE() )


#define UNLESS_TSVREFE_HIGH() \
     if (! READ_TSVREFE() )


#define WAIT_TSVREFE_LOW() \
    while ( READ_TSVREFE() );


#define WAIT_TSVREFE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSVREFE() && (--___t___ > 0)); }


#define WAIT_TSVREFE_HIGH() \
    while (! READ_TSVREFE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cdr
//
// Return the value of register CDR
//
// Notes : Register Cdr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_CDR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cdr
//
// Return the value of register CDR
//
// Notes : Register ADC common regular data register for dual and triple modes (CDR) at the offset 0x8, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // st data item of a pair of regular conversions 
    // 
#define DATA1_MASK 0xFFFFU
#define DATA1_OFFSET 15
#define DATA1_START_BIT 0
#define DATA1_WIDTH 16


#define CDR_REG 0x8

typedef enum data1 {
    DATA_1_0,
    DATA_1_1
} DATA_1_T ;
#define READ_DATA1() \
   ((READ_REGISTER_ULONG(0x8) & DATA1_MASK)  >> DATA1_START_BIT)

#define WRITE_DATA1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DATA1_MASK) | ((val << DATA1_START_BIT) & DATA1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cdr
//
// Return the value of register CDR
//
// Notes : Register ADC common regular data register for dual and triple modes (CDR) at the offset 0x8, Bits 16:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // nd data item of a pair of regular conversions 
    // 
#define DATA2_MASK 0xFFFF0000U
#define DATA2_OFFSET 31
#define DATA2_START_BIT 16
#define DATA2_WIDTH 16



typedef enum data2 {
    DATA_2_0,
    DATA_2_1
} DATA_2_T ;
#define READ_DATA2() \
   ((READ_REGISTER_ULONG(0x8) & DATA2_MASK)  >> DATA2_START_BIT)

#define WRITE_DATA2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ DATA2_MASK) | ((val << DATA2_START_BIT) & DATA2_MASK )); \
   } 

