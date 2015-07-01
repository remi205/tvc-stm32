/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/adc.h
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
 
#define NB_DEVICE_ADC 3
#define ADC1 0x40012000
#define ADC3 0x40012200
#define ADC2 0x40012100
/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SR( base,  val) \
     WRITE_REGISTER_ULONG( base , val)

#define SET_BITS_SR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  mask ); \
   } 

#define CLEAR_BITS_SR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base ,  val & ~mask ); \
   } 

#define READ_REGISTER_SR( base ) \
     READ_REGISTER_ULONG( base ) 

/////////////////////////////////////////////////////////////////////////
//
// Function : AWD
//
// Return the value of register Sr
//
// Notes : Analog watchdog flag 
//        (SR) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~AWD_MASK) | ((val << AWD_START_BIT) & AWD_MASK )); \
   } 

#define ENABLE_AWD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  AWD_MASK ); \
   } 

#define DISABLE_AWD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~AWD_MASK ); \
   } 

#define READ_AWD(base) \
    ((READ_REGISTER_ULONG(base ) & AWD_MASK) >> AWD_START_BIT )

#define WHEN_AWD_HIGH(base) \
     if ( READ_AWD(base) )


#define UNLESS_AWD_HIGH(base) \
     if (! READ_AWD(base) )


#define WAIT_AWD_LOW(base) \
    while ( READ_AWD(base) );


#define WAIT_AWD_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AWD(base) && (--timeout > 0) );


#define WAIT_AWD_HIGH(base) \
    while (! READ_AWD(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOC
//
// Return the value of register Sr
//
// Notes : Regular channel end of conversion 
//        (SR) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~EOC_MASK) | ((val << EOC_START_BIT) & EOC_MASK )); \
   } 

#define ENABLE_EOC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  EOC_MASK ); \
   } 

#define DISABLE_EOC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~EOC_MASK ); \
   } 

#define READ_EOC(base) \
    ((READ_REGISTER_ULONG(base ) & EOC_MASK) >> EOC_START_BIT )

#define WHEN_EOC_HIGH(base) \
     if ( READ_EOC(base) )


#define UNLESS_EOC_HIGH(base) \
     if (! READ_EOC(base) )


#define WAIT_EOC_LOW(base) \
    while ( READ_EOC(base) );


#define WAIT_EOC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EOC(base) && (--timeout > 0) );


#define WAIT_EOC_HIGH(base) \
    while (! READ_EOC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : JEOC
//
// Return the value of register Sr
//
// Notes : Injected channel end of conversion 
//        (SR) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JEOC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~JEOC_MASK) | ((val << JEOC_START_BIT) & JEOC_MASK )); \
   } 

#define ENABLE_JEOC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  JEOC_MASK ); \
   } 

#define DISABLE_JEOC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~JEOC_MASK ); \
   } 

#define READ_JEOC(base) \
    ((READ_REGISTER_ULONG(base ) & JEOC_MASK) >> JEOC_START_BIT )

#define WHEN_JEOC_HIGH(base) \
     if ( READ_JEOC(base) )


#define UNLESS_JEOC_HIGH(base) \
     if (! READ_JEOC(base) )


#define WAIT_JEOC_LOW(base) \
    while ( READ_JEOC(base) );


#define WAIT_JEOC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JEOC(base) && (--timeout > 0) );


#define WAIT_JEOC_HIGH(base) \
    while (! READ_JEOC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : JSTRT
//
// Return the value of register Sr
//
// Notes : Injected channel start flag 
//        (SR) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JSTRT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~JSTRT_MASK) | ((val << JSTRT_START_BIT) & JSTRT_MASK )); \
   } 

#define ENABLE_JSTRT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  JSTRT_MASK ); \
   } 

#define DISABLE_JSTRT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~JSTRT_MASK ); \
   } 

#define READ_JSTRT(base) \
    ((READ_REGISTER_ULONG(base ) & JSTRT_MASK) >> JSTRT_START_BIT )

#define WHEN_JSTRT_HIGH(base) \
     if ( READ_JSTRT(base) )


#define UNLESS_JSTRT_HIGH(base) \
     if (! READ_JSTRT(base) )


#define WAIT_JSTRT_LOW(base) \
    while ( READ_JSTRT(base) );


#define WAIT_JSTRT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JSTRT(base) && (--timeout > 0) );


#define WAIT_JSTRT_HIGH(base) \
    while (! READ_JSTRT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : STRT
//
// Return the value of register Sr
//
// Notes : Regular channel start flag 
//        (SR) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STRT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~STRT_MASK) | ((val << STRT_START_BIT) & STRT_MASK )); \
   } 

#define ENABLE_STRT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  STRT_MASK ); \
   } 

#define DISABLE_STRT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~STRT_MASK ); \
   } 

#define READ_STRT(base) \
    ((READ_REGISTER_ULONG(base ) & STRT_MASK) >> STRT_START_BIT )

#define WHEN_STRT_HIGH(base) \
     if ( READ_STRT(base) )


#define UNLESS_STRT_HIGH(base) \
     if (! READ_STRT(base) )


#define WAIT_STRT_LOW(base) \
    while ( READ_STRT(base) );


#define WAIT_STRT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_STRT(base) && (--timeout > 0) );


#define WAIT_STRT_HIGH(base) \
    while (! READ_STRT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR
//
// Return the value of register Sr
//
// Notes : Overrun 
//        (SR) at the offset 0x0, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~OVR_MASK) | ((val << OVR_START_BIT) & OVR_MASK )); \
   } 

#define ENABLE_OVR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  OVR_MASK ); \
   } 

#define DISABLE_OVR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~OVR_MASK ); \
   } 

#define READ_OVR(base) \
    ((READ_REGISTER_ULONG(base ) & OVR_MASK) >> OVR_START_BIT )

#define WHEN_OVR_HIGH(base) \
     if ( READ_OVR(base) )


#define UNLESS_OVR_HIGH(base) \
     if (! READ_OVR(base) )


#define WAIT_OVR_LOW(base) \
    while ( READ_OVR(base) );


#define WAIT_OVR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVR(base) && (--timeout > 0) );


#define WAIT_OVR_HIGH(base) \
    while (! READ_OVR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR1
//
// Notes : Register Cr1 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x4, val)

#define SET_BITS_CR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  mask ); \
   } 

#define CLEAR_BITS_CR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_1( base ) \
     READ_REGISTER_ULONG( base + 0x4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : AWDCH
//
// Return the value of register Cr1
//
// Notes : Analog watchdog channel select bits 
//        (CR1) at the offset 0x4, Bits 0:4
//
/////////////////////////////////////////////////////////////////////////
#define READ_AWDCH(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & AWDCH_MASK) >> AWDCH_START_BIT )

#define WRITE_AWDCH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~AWDCH_MASK) | ((val << AWDCH_START_BIT) & AWDCH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : EOCIE
//
// Return the value of register Cr1
//
// Notes : Interrupt enable for EOC 
//        (CR1) at the offset 0x4, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~EOCIE_MASK) | ((val << EOCIE_START_BIT) & EOCIE_MASK )); \
   } 

#define ENABLE_EOCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  EOCIE_MASK ); \
   } 

#define DISABLE_EOCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~EOCIE_MASK ); \
   } 

#define READ_EOCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & EOCIE_MASK) >> EOCIE_START_BIT )

#define WHEN_EOCIE_HIGH(base) \
     if ( READ_EOCIE(base) )


#define UNLESS_EOCIE_HIGH(base) \
     if (! READ_EOCIE(base) )


#define WAIT_EOCIE_LOW(base) \
    while ( READ_EOCIE(base) );


#define WAIT_EOCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EOCIE(base) && (--timeout > 0) );


#define WAIT_EOCIE_HIGH(base) \
    while (! READ_EOCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : AWDIE
//
// Return the value of register Cr1
//
// Notes : Analog watchdog interrupt enable 
//        (CR1) at the offset 0x4, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWDIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~AWDIE_MASK) | ((val << AWDIE_START_BIT) & AWDIE_MASK )); \
   } 

#define ENABLE_AWDIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  AWDIE_MASK ); \
   } 

#define DISABLE_AWDIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~AWDIE_MASK ); \
   } 

#define READ_AWDIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & AWDIE_MASK) >> AWDIE_START_BIT )

#define WHEN_AWDIE_HIGH(base) \
     if ( READ_AWDIE(base) )


#define UNLESS_AWDIE_HIGH(base) \
     if (! READ_AWDIE(base) )


#define WAIT_AWDIE_LOW(base) \
    while ( READ_AWDIE(base) );


#define WAIT_AWDIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AWDIE(base) && (--timeout > 0) );


#define WAIT_AWDIE_HIGH(base) \
    while (! READ_AWDIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : JEOCIE
//
// Return the value of register Cr1
//
// Notes : Interrupt enable for injected channels 
//        (CR1) at the offset 0x4, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JEOCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~JEOCIE_MASK) | ((val << JEOCIE_START_BIT) & JEOCIE_MASK )); \
   } 

#define ENABLE_JEOCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  JEOCIE_MASK ); \
   } 

#define DISABLE_JEOCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~JEOCIE_MASK ); \
   } 

#define READ_JEOCIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & JEOCIE_MASK) >> JEOCIE_START_BIT )

#define WHEN_JEOCIE_HIGH(base) \
     if ( READ_JEOCIE(base) )


#define UNLESS_JEOCIE_HIGH(base) \
     if (! READ_JEOCIE(base) )


#define WAIT_JEOCIE_LOW(base) \
    while ( READ_JEOCIE(base) );


#define WAIT_JEOCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JEOCIE(base) && (--timeout > 0) );


#define WAIT_JEOCIE_HIGH(base) \
    while (! READ_JEOCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : SCAN
//
// Return the value of register Cr1
//
// Notes : Scan mode 
//        (CR1) at the offset 0x4, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SCAN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~SCAN_MASK) | ((val << SCAN_START_BIT) & SCAN_MASK )); \
   } 

#define ENABLE_SCAN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  SCAN_MASK ); \
   } 

#define DISABLE_SCAN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~SCAN_MASK ); \
   } 

#define READ_SCAN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & SCAN_MASK) >> SCAN_START_BIT )

#define WHEN_SCAN_HIGH(base) \
     if ( READ_SCAN(base) )


#define UNLESS_SCAN_HIGH(base) \
     if (! READ_SCAN(base) )


#define WAIT_SCAN_LOW(base) \
    while ( READ_SCAN(base) );


#define WAIT_SCAN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SCAN(base) && (--timeout > 0) );


#define WAIT_SCAN_HIGH(base) \
    while (! READ_SCAN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : AWDSGL
//
// Return the value of register Cr1
//
// Notes : Enable the watchdog on a single channel in scan mode 
//        (CR1) at the offset 0x4, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWDSGL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~AWDSGL_MASK) | ((val << AWDSGL_START_BIT) & AWDSGL_MASK )); \
   } 

#define ENABLE_AWDSGL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  AWDSGL_MASK ); \
   } 

#define DISABLE_AWDSGL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~AWDSGL_MASK ); \
   } 

#define READ_AWDSGL(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & AWDSGL_MASK) >> AWDSGL_START_BIT )

#define WHEN_AWDSGL_HIGH(base) \
     if ( READ_AWDSGL(base) )


#define UNLESS_AWDSGL_HIGH(base) \
     if (! READ_AWDSGL(base) )


#define WAIT_AWDSGL_LOW(base) \
    while ( READ_AWDSGL(base) );


#define WAIT_AWDSGL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AWDSGL(base) && (--timeout > 0) );


#define WAIT_AWDSGL_HIGH(base) \
    while (! READ_AWDSGL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : JAUTO
//
// Return the value of register Cr1
//
// Notes : Automatic injected group conversion 
//        (CR1) at the offset 0x4, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JAUTO(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~JAUTO_MASK) | ((val << JAUTO_START_BIT) & JAUTO_MASK )); \
   } 

#define ENABLE_JAUTO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  JAUTO_MASK ); \
   } 

#define DISABLE_JAUTO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~JAUTO_MASK ); \
   } 

#define READ_JAUTO(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & JAUTO_MASK) >> JAUTO_START_BIT )

#define WHEN_JAUTO_HIGH(base) \
     if ( READ_JAUTO(base) )


#define UNLESS_JAUTO_HIGH(base) \
     if (! READ_JAUTO(base) )


#define WAIT_JAUTO_LOW(base) \
    while ( READ_JAUTO(base) );


#define WAIT_JAUTO_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JAUTO(base) && (--timeout > 0) );


#define WAIT_JAUTO_HIGH(base) \
    while (! READ_JAUTO(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DISCEN
//
// Return the value of register Cr1
//
// Notes : Discontinuous mode on regular channels 
//        (CR1) at the offset 0x4, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DISCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DISCEN_MASK) | ((val << DISCEN_START_BIT) & DISCEN_MASK )); \
   } 

#define ENABLE_DISCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  DISCEN_MASK ); \
   } 

#define DISABLE_DISCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~DISCEN_MASK ); \
   } 

#define READ_DISCEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DISCEN_MASK) >> DISCEN_START_BIT )

#define WHEN_DISCEN_HIGH(base) \
     if ( READ_DISCEN(base) )


#define UNLESS_DISCEN_HIGH(base) \
     if (! READ_DISCEN(base) )


#define WAIT_DISCEN_LOW(base) \
    while ( READ_DISCEN(base) );


#define WAIT_DISCEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DISCEN(base) && (--timeout > 0) );


#define WAIT_DISCEN_HIGH(base) \
    while (! READ_DISCEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : JDISCEN
//
// Return the value of register Cr1
//
// Notes : Discontinuous mode on injected channels 
//        (CR1) at the offset 0x4, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JDISCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~JDISCEN_MASK) | ((val << JDISCEN_START_BIT) & JDISCEN_MASK )); \
   } 

#define ENABLE_JDISCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  JDISCEN_MASK ); \
   } 

#define DISABLE_JDISCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~JDISCEN_MASK ); \
   } 

#define READ_JDISCEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & JDISCEN_MASK) >> JDISCEN_START_BIT )

#define WHEN_JDISCEN_HIGH(base) \
     if ( READ_JDISCEN(base) )


#define UNLESS_JDISCEN_HIGH(base) \
     if (! READ_JDISCEN(base) )


#define WAIT_JDISCEN_LOW(base) \
    while ( READ_JDISCEN(base) );


#define WAIT_JDISCEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JDISCEN(base) && (--timeout > 0) );


#define WAIT_JDISCEN_HIGH(base) \
    while (! READ_JDISCEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DISCNUM
//
// Return the value of register Cr1
//
// Notes : Discontinuous mode channel count 
//        (CR1) at the offset 0x4, Bits 13:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_DISCNUM(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & DISCNUM_MASK) >> DISCNUM_START_BIT )

#define WRITE_DISCNUM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~DISCNUM_MASK) | ((val << DISCNUM_START_BIT) & DISCNUM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : JAWDEN
//
// Return the value of register Cr1
//
// Notes : Analog watchdog enable on injected channels 
//        (CR1) at the offset 0x4, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JAWDEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~JAWDEN_MASK) | ((val << JAWDEN_START_BIT) & JAWDEN_MASK )); \
   } 

#define ENABLE_JAWDEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  JAWDEN_MASK ); \
   } 

#define DISABLE_JAWDEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~JAWDEN_MASK ); \
   } 

#define READ_JAWDEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & JAWDEN_MASK) >> JAWDEN_START_BIT )

#define WHEN_JAWDEN_HIGH(base) \
     if ( READ_JAWDEN(base) )


#define UNLESS_JAWDEN_HIGH(base) \
     if (! READ_JAWDEN(base) )


#define WAIT_JAWDEN_LOW(base) \
    while ( READ_JAWDEN(base) );


#define WAIT_JAWDEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JAWDEN(base) && (--timeout > 0) );


#define WAIT_JAWDEN_HIGH(base) \
    while (! READ_JAWDEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : AWDEN
//
// Return the value of register Cr1
//
// Notes : Analog watchdog enable on regular channels 
//        (CR1) at the offset 0x4, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AWDEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~AWDEN_MASK) | ((val << AWDEN_START_BIT) & AWDEN_MASK )); \
   } 

#define ENABLE_AWDEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  AWDEN_MASK ); \
   } 

#define DISABLE_AWDEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~AWDEN_MASK ); \
   } 

#define READ_AWDEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & AWDEN_MASK) >> AWDEN_START_BIT )

#define WHEN_AWDEN_HIGH(base) \
     if ( READ_AWDEN(base) )


#define UNLESS_AWDEN_HIGH(base) \
     if (! READ_AWDEN(base) )


#define WAIT_AWDEN_LOW(base) \
    while ( READ_AWDEN(base) );


#define WAIT_AWDEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AWDEN(base) && (--timeout > 0) );


#define WAIT_AWDEN_HIGH(base) \
    while (! READ_AWDEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : RES
//
// Return the value of register Cr1
//
// Notes : Resolution 
//        (CR1) at the offset 0x4, Bits 24:25
//
/////////////////////////////////////////////////////////////////////////
#define READ_RES(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RES_MASK) >> RES_START_BIT )

#define WRITE_RES(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RES_MASK) | ((val << RES_START_BIT) & RES_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : OVRIE
//
// Return the value of register Cr1
//
// Notes : Overrun interrupt enable 
//        (CR1) at the offset 0x4, Bits 26:26
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVRIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~OVRIE_MASK) | ((val << OVRIE_START_BIT) & OVRIE_MASK )); \
   } 

#define ENABLE_OVRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  OVRIE_MASK ); \
   } 

#define DISABLE_OVRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~OVRIE_MASK ); \
   } 

#define READ_OVRIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & OVRIE_MASK) >> OVRIE_START_BIT )

#define WHEN_OVRIE_HIGH(base) \
     if ( READ_OVRIE(base) )


#define UNLESS_OVRIE_HIGH(base) \
     if (! READ_OVRIE(base) )


#define WAIT_OVRIE_LOW(base) \
    while ( READ_OVRIE(base) );


#define WAIT_OVRIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRIE(base) && (--timeout > 0) );


#define WAIT_OVRIE_HIGH(base) \
    while (! READ_OVRIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR2
//
// Notes : Register Cr2 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8, val)

#define SET_BITS_CR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_CR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_2( base ) \
     READ_REGISTER_ULONG( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : ADON
//
// Return the value of register Cr2
//
// Notes : A/D Converter ON / OFF 
//        (CR2) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ADON(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ADON_MASK) | ((val << ADON_START_BIT) & ADON_MASK )); \
   } 

#define ENABLE_ADON(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  ADON_MASK ); \
   } 

#define DISABLE_ADON(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~ADON_MASK ); \
   } 

#define READ_ADON(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ADON_MASK) >> ADON_START_BIT )

#define WHEN_ADON_HIGH(base) \
     if ( READ_ADON(base) )


#define UNLESS_ADON_HIGH(base) \
     if (! READ_ADON(base) )


#define WAIT_ADON_LOW(base) \
    while ( READ_ADON(base) );


#define WAIT_ADON_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ADON(base) && (--timeout > 0) );


#define WAIT_ADON_HIGH(base) \
    while (! READ_ADON(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CONT
//
// Return the value of register Cr2
//
// Notes : Continuous conversion 
//        (CR2) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CONT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CONT_MASK) | ((val << CONT_START_BIT) & CONT_MASK )); \
   } 

#define ENABLE_CONT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CONT_MASK ); \
   } 

#define DISABLE_CONT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CONT_MASK ); \
   } 

#define READ_CONT(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CONT_MASK) >> CONT_START_BIT )

#define WHEN_CONT_HIGH(base) \
     if ( READ_CONT(base) )


#define UNLESS_CONT_HIGH(base) \
     if (! READ_CONT(base) )


#define WAIT_CONT_LOW(base) \
    while ( READ_CONT(base) );


#define WAIT_CONT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CONT(base) && (--timeout > 0) );


#define WAIT_CONT_HIGH(base) \
    while (! READ_CONT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DMA
//
// Return the value of register Cr2
//
// Notes : Direct memory access mode (for single ADC mode) 
//        (CR2) at the offset 0x8, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DMA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DMA_MASK) | ((val << DMA_START_BIT) & DMA_MASK )); \
   } 

#define ENABLE_DMA(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DMA_MASK ); \
   } 

#define DISABLE_DMA(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DMA_MASK ); \
   } 

#define READ_DMA(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DMA_MASK) >> DMA_START_BIT )

#define WHEN_DMA_HIGH(base) \
     if ( READ_DMA(base) )


#define UNLESS_DMA_HIGH(base) \
     if (! READ_DMA(base) )


#define WAIT_DMA_LOW(base) \
    while ( READ_DMA(base) );


#define WAIT_DMA_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMA(base) && (--timeout > 0) );


#define WAIT_DMA_HIGH(base) \
    while (! READ_DMA(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DDS
//
// Return the value of register Cr2
//
// Notes : DMA disable selection (for single ADC mode) 
//        (CR2) at the offset 0x8, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DDS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DDS_MASK) | ((val << DDS_START_BIT) & DDS_MASK )); \
   } 

#define ENABLE_DDS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DDS_MASK ); \
   } 

#define DISABLE_DDS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DDS_MASK ); \
   } 

#define READ_DDS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DDS_MASK) >> DDS_START_BIT )

#define WHEN_DDS_HIGH(base) \
     if ( READ_DDS(base) )


#define UNLESS_DDS_HIGH(base) \
     if (! READ_DDS(base) )


#define WAIT_DDS_LOW(base) \
    while ( READ_DDS(base) );


#define WAIT_DDS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DDS(base) && (--timeout > 0) );


#define WAIT_DDS_HIGH(base) \
    while (! READ_DDS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : EOCS
//
// Return the value of register Cr2
//
// Notes : End of conversion selection 
//        (CR2) at the offset 0x8, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_EOCS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~EOCS_MASK) | ((val << EOCS_START_BIT) & EOCS_MASK )); \
   } 

#define ENABLE_EOCS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  EOCS_MASK ); \
   } 

#define DISABLE_EOCS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~EOCS_MASK ); \
   } 

#define READ_EOCS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & EOCS_MASK) >> EOCS_START_BIT )

#define WHEN_EOCS_HIGH(base) \
     if ( READ_EOCS(base) )


#define UNLESS_EOCS_HIGH(base) \
     if (! READ_EOCS(base) )


#define WAIT_EOCS_LOW(base) \
    while ( READ_EOCS(base) );


#define WAIT_EOCS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EOCS(base) && (--timeout > 0) );


#define WAIT_EOCS_HIGH(base) \
    while (! READ_EOCS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALIGN
//
// Return the value of register Cr2
//
// Notes : Data alignment 
//        (CR2) at the offset 0x8, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALIGN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ALIGN_MASK) | ((val << ALIGN_START_BIT) & ALIGN_MASK )); \
   } 

#define ENABLE_ALIGN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  ALIGN_MASK ); \
   } 

#define DISABLE_ALIGN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~ALIGN_MASK ); \
   } 

#define READ_ALIGN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ALIGN_MASK) >> ALIGN_START_BIT )

#define WHEN_ALIGN_HIGH(base) \
     if ( READ_ALIGN(base) )


#define UNLESS_ALIGN_HIGH(base) \
     if (! READ_ALIGN(base) )


#define WAIT_ALIGN_LOW(base) \
    while ( READ_ALIGN(base) );


#define WAIT_ALIGN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ALIGN(base) && (--timeout > 0) );


#define WAIT_ALIGN_HIGH(base) \
    while (! READ_ALIGN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : JEXTSEL
//
// Return the value of register Cr2
//
// Notes : External event select for injected group 
//        (CR2) at the offset 0x8, Bits 16:19
//
/////////////////////////////////////////////////////////////////////////
#define READ_JEXTSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & JEXTSEL_MASK) >> JEXTSEL_START_BIT )

#define WRITE_JEXTSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~JEXTSEL_MASK) | ((val << JEXTSEL_START_BIT) & JEXTSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : JEXTEN
//
// Return the value of register Cr2
//
// Notes : External trigger enable for injected channels 
//        (CR2) at the offset 0x8, Bits 20:21
//
/////////////////////////////////////////////////////////////////////////
#define READ_JEXTEN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & JEXTEN_MASK) >> JEXTEN_START_BIT )

#define WRITE_JEXTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~JEXTEN_MASK) | ((val << JEXTEN_START_BIT) & JEXTEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : JSWSTART
//
// Return the value of register Cr2
//
// Notes : Start conversion of injected channels 
//        (CR2) at the offset 0x8, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_JSWSTART(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~JSWSTART_MASK) | ((val << JSWSTART_START_BIT) & JSWSTART_MASK )); \
   } 

#define ENABLE_JSWSTART(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  JSWSTART_MASK ); \
   } 

#define DISABLE_JSWSTART(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~JSWSTART_MASK ); \
   } 

#define READ_JSWSTART(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & JSWSTART_MASK) >> JSWSTART_START_BIT )

#define WHEN_JSWSTART_HIGH(base) \
     if ( READ_JSWSTART(base) )


#define UNLESS_JSWSTART_HIGH(base) \
     if (! READ_JSWSTART(base) )


#define WAIT_JSWSTART_LOW(base) \
    while ( READ_JSWSTART(base) );


#define WAIT_JSWSTART_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_JSWSTART(base) && (--timeout > 0) );


#define WAIT_JSWSTART_HIGH(base) \
    while (! READ_JSWSTART(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : EXTSEL
//
// Return the value of register Cr2
//
// Notes : External event select for regular group 
//        (CR2) at the offset 0x8, Bits 24:27
//
/////////////////////////////////////////////////////////////////////////
#define READ_EXTSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & EXTSEL_MASK) >> EXTSEL_START_BIT )

#define WRITE_EXTSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~EXTSEL_MASK) | ((val << EXTSEL_START_BIT) & EXTSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : EXTEN
//
// Return the value of register Cr2
//
// Notes : External trigger enable for regular channels 
//        (CR2) at the offset 0x8, Bits 28:29
//
/////////////////////////////////////////////////////////////////////////
#define READ_EXTEN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & EXTEN_MASK) >> EXTEN_START_BIT )

#define WRITE_EXTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~EXTEN_MASK) | ((val << EXTEN_START_BIT) & EXTEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : SWSTART
//
// Return the value of register Cr2
//
// Notes : Start conversion of regular channels 
//        (CR2) at the offset 0x8, Bits 30:30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SWSTART(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~SWSTART_MASK) | ((val << SWSTART_START_BIT) & SWSTART_MASK )); \
   } 

#define ENABLE_SWSTART(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  SWSTART_MASK ); \
   } 

#define DISABLE_SWSTART(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~SWSTART_MASK ); \
   } 

#define READ_SWSTART(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & SWSTART_MASK) >> SWSTART_START_BIT )

#define WHEN_SWSTART_HIGH(base) \
     if ( READ_SWSTART(base) )


#define UNLESS_SWSTART_HIGH(base) \
     if (! READ_SWSTART(base) )


#define WAIT_SWSTART_LOW(base) \
    while ( READ_SWSTART(base) );


#define WAIT_SWSTART_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SWSTART(base) && (--timeout > 0) );


#define WAIT_SWSTART_HIGH(base) \
    while (! READ_SWSTART(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Smpr1
//
// Return the value of register SMPR1
//
// Notes : Register Smpr1 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SMPR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_SMPR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_SMPR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_SMPR_1( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smpr1
//
// Return the value of register SMPR_1
//
// Notes : Register sample time register 1 (SMPR1) at the offset 0xC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sample time bits 
    // 
#define SMPX_X_MASK 0xFFFFFFFFU
#define SMPX_X_OFFSET 31
#define SMPX_X_START_BIT 0
#define SMPX_X_WIDTH 32


#define SMPR_1_REG 0xC

typedef enum smpx_x {
    SMPX_X_0,
    SMPX_X_1
} SMPX_X_T ;
#define READ_SMPX_X(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & SMPX_X_MASK) >> SMPX_X_START_BIT )

#define WRITE_SMPX_X(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~SMPX_X_MASK) | ((val << SMPX_X_START_BIT) & SMPX_X_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smpr2
//
// Return the value of register SMPR2
//
// Notes : Register Smpr2 at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SMPR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_SMPR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_SMPR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_SMPR_2( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Smpr2
//
// Return the value of register SMPR_2
//
// Notes : Register sample time register 2 (SMPR2) at the offset 0x10, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sample time bits 
    // 
#define SMPX_X_MASK 0xFFFFFFFFU
#define SMPX_X_OFFSET 31
#define SMPX_X_START_BIT 0
#define SMPX_X_WIDTH 32


#define SMPR_2_REG 0x10

#define READ_SMPX_X(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SMPX_X_MASK) >> SMPX_X_START_BIT )

#define WRITE_SMPX_X(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SMPX_X_MASK) | ((val << SMPX_X_START_BIT) & SMPX_X_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr1
//
// Return the value of register JOFR1
//
// Notes : Register Jofr1 at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_JOFR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x14, val)

#define SET_BITS_JOFR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  mask ); \
   } 

#define CLEAR_BITS_JOFR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14,  val & ~mask ); \
   } 

#define READ_REGISTER_JOFR_1( base ) \
     READ_REGISTER_ULONG( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr1
//
// Return the value of register JOFR_1
//
// Notes : Register injected channel data offset register x (JOFR1) at the offset 0x14, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data offset for injected channel x 
    // 
#define JOFFSET1_MASK 0xFFFU
#define JOFFSET1_OFFSET 11
#define JOFFSET1_START_BIT 0
#define JOFFSET1_WIDTH 12


#define JOFR_1_REG 0x14

typedef enum joffset1 {
    JOFFSET_1_0,
    JOFFSET_1_1
} JOFFSET_1_T ;
#define READ_JOFFSET1(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & JOFFSET1_MASK) >> JOFFSET1_START_BIT )

#define WRITE_JOFFSET1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~JOFFSET1_MASK) | ((val << JOFFSET1_START_BIT) & JOFFSET1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr2
//
// Return the value of register JOFR2
//
// Notes : Register Jofr2 at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_JOFR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x18, val)

#define SET_BITS_JOFR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  mask ); \
   } 

#define CLEAR_BITS_JOFR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18,  val & ~mask ); \
   } 

#define READ_REGISTER_JOFR_2( base ) \
     READ_REGISTER_ULONG( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr2
//
// Return the value of register JOFR_2
//
// Notes : Register injected channel data offset register x (JOFR2) at the offset 0x18, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data offset for injected channel x 
    // 
#define JOFFSET2_MASK 0xFFFU
#define JOFFSET2_OFFSET 11
#define JOFFSET2_START_BIT 0
#define JOFFSET2_WIDTH 12


#define JOFR_2_REG 0x18

typedef enum joffset2 {
    JOFFSET_2_0,
    JOFFSET_2_1
} JOFFSET_2_T ;
#define READ_JOFFSET2(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & JOFFSET2_MASK) >> JOFFSET2_START_BIT )

#define WRITE_JOFFSET2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~JOFFSET2_MASK) | ((val << JOFFSET2_START_BIT) & JOFFSET2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr3
//
// Return the value of register JOFR3
//
// Notes : Register Jofr3 at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_JOFR_3( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

#define SET_BITS_JOFR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_JOFR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_JOFR_3( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr3
//
// Return the value of register JOFR_3
//
// Notes : Register injected channel data offset register x (JOFR3) at the offset 0x1C, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data offset for injected channel x 
    // 
#define JOFFSET3_MASK 0xFFFU
#define JOFFSET3_OFFSET 11
#define JOFFSET3_START_BIT 0
#define JOFFSET3_WIDTH 12


#define JOFR_3_REG 0x1C

typedef enum joffset3 {
    JOFFSET_3_0,
    JOFFSET_3_1
} JOFFSET_3_T ;
#define READ_JOFFSET3(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & JOFFSET3_MASK) >> JOFFSET3_START_BIT )

#define WRITE_JOFFSET3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~JOFFSET3_MASK) | ((val << JOFFSET3_START_BIT) & JOFFSET3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr4
//
// Return the value of register JOFR4
//
// Notes : Register Jofr4 at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_JOFR_4( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x20, val)

#define SET_BITS_JOFR_4(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  mask ); \
   } 

#define CLEAR_BITS_JOFR_4(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20,  val & ~mask ); \
   } 

#define READ_REGISTER_JOFR_4( base ) \
     READ_REGISTER_ULONG( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jofr4
//
// Return the value of register JOFR_4
//
// Notes : Register injected channel data offset register x (JOFR4) at the offset 0x20, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data offset for injected channel x 
    // 
#define JOFFSET4_MASK 0xFFFU
#define JOFFSET4_OFFSET 11
#define JOFFSET4_START_BIT 0
#define JOFFSET4_WIDTH 12


#define JOFR_4_REG 0x20

typedef enum joffset4 {
    JOFFSET_4_0,
    JOFFSET_4_1
} JOFFSET_4_T ;
#define READ_JOFFSET4(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & JOFFSET4_MASK) >> JOFFSET4_START_BIT )

#define WRITE_JOFFSET4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~JOFFSET4_MASK) | ((val << JOFFSET4_START_BIT) & JOFFSET4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Htr
//
// Return the value of register HTR
//
// Notes : Register Htr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_HTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x24, val)

#define SET_BITS_HTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, val |  mask ); \
   } 

#define CLEAR_BITS_HTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24,  val & ~mask ); \
   } 

#define READ_REGISTER_HTR( base ) \
     READ_REGISTER_ULONG( base + 0x24) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Htr
//
// Return the value of register HTR
//
// Notes : Register watchdog higher threshold register (HTR) at the offset 0x24, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Analog watchdog higher threshold 
    // 
#define HT_MASK 0xFFFU
#define HT_OFFSET 11
#define HT_START_BIT 0
#define HT_WIDTH 12


#define HTR_REG 0x24

#define READ_HT(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & HT_MASK) >> HT_START_BIT )

#define WRITE_HT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~HT_MASK) | ((val << HT_START_BIT) & HT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ltr
//
// Return the value of register LTR
//
// Notes : Register Ltr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_LTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x28, val)

#define SET_BITS_LTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_LTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_LTR( base ) \
     READ_REGISTER_ULONG( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ltr
//
// Return the value of register LTR
//
// Notes : Register watchdog lower threshold register (LTR) at the offset 0x28, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Analog watchdog lower threshold 
    // 
#define LT_MASK 0xFFFU
#define LT_OFFSET 11
#define LT_START_BIT 0
#define LT_WIDTH 12


#define LTR_REG 0x28

typedef enum lt {
    LT_0,
    LT_1
} LT_T ;
#define READ_LT(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & LT_MASK) >> LT_START_BIT )

#define WRITE_LT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~LT_MASK) | ((val << LT_START_BIT) & LT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr1
//
// Return the value of register SQR1
//
// Notes : Register Sqr1 at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SQR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x2C, val)

#define SET_BITS_SQR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, val |  mask ); \
   } 

#define CLEAR_BITS_SQR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C,  val & ~mask ); \
   } 

#define READ_REGISTER_SQR_1( base ) \
     READ_REGISTER_ULONG( base + 0x2C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr1
//
// Return the value of register SQR_1
//
// Notes : Register regular sequence register 1 (SQR1) at the offset 0x2C, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ13_MASK 0x1FU
#define SQ13_OFFSET 4
#define SQ13_START_BIT 0
#define SQ13_WIDTH 5


#define SQR_1_REG 0x2C

typedef enum sq13 {
    SQ_1_3_0,
    SQ_1_3_1
} SQ_13_T ;
#define READ_SQ13(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & SQ13_MASK) >> SQ13_START_BIT )

#define WRITE_SQ13(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~SQ13_MASK) | ((val << SQ13_START_BIT) & SQ13_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr1
//
// Return the value of register SQR_1
//
// Notes : Register regular sequence register 1 (SQR1) at the offset 0x2C, Bits 5:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ14_MASK 0x3E0U
#define SQ14_OFFSET 9
#define SQ14_START_BIT 5
#define SQ14_WIDTH 5



typedef enum sq14 {
    SQ_1_4_0,
    SQ_1_4_1
} SQ_14_T ;
#define READ_SQ14(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & SQ14_MASK) >> SQ14_START_BIT )

#define WRITE_SQ14(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~SQ14_MASK) | ((val << SQ14_START_BIT) & SQ14_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr1
//
// Return the value of register SQR_1
//
// Notes : Register regular sequence register 1 (SQR1) at the offset 0x2C, Bits 10:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ15_MASK 0x7C00U
#define SQ15_OFFSET 14
#define SQ15_START_BIT 10
#define SQ15_WIDTH 5



typedef enum sq15 {
    SQ_1_5_0,
    SQ_1_5_1
} SQ_15_T ;
#define READ_SQ15(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & SQ15_MASK) >> SQ15_START_BIT )

#define WRITE_SQ15(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~SQ15_MASK) | ((val << SQ15_START_BIT) & SQ15_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr1
//
// Return the value of register SQR_1
//
// Notes : Register regular sequence register 1 (SQR1) at the offset 0x2C, Bits 15:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ16_MASK 0xF8000U
#define SQ16_OFFSET 19
#define SQ16_START_BIT 15
#define SQ16_WIDTH 5



typedef enum sq16 {
    SQ_1_6_0,
    SQ_1_6_1
} SQ_16_T ;
#define READ_SQ16(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & SQ16_MASK) >> SQ16_START_BIT )

#define WRITE_SQ16(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~SQ16_MASK) | ((val << SQ16_START_BIT) & SQ16_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr1
//
// Return the value of register SQR_1
//
// Notes : Register regular sequence register 1 (SQR1) at the offset 0x2C, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Regular channel sequence length 
    // 
#define L_MASK 0xF00000U
#define L_OFFSET 23
#define L_START_BIT 20
#define L_WIDTH 4



typedef enum l {
    L_0,
    L_1
} L_T ;
#define READ_L(base) \
    ((READ_REGISTER_ULONG(base + 0x2C) & L_MASK) >> L_START_BIT )

#define WRITE_L(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x2C); \
     WRITE_REGISTER_ULONG( base + 0x2C, (OldValue & ~L_MASK) | ((val << L_START_BIT) & L_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR2
//
// Notes : Register Sqr2 at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SQR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x30, val)

#define SET_BITS_SQR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, val |  mask ); \
   } 

#define CLEAR_BITS_SQR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30,  val & ~mask ); \
   } 

#define READ_REGISTER_SQR_2( base ) \
     READ_REGISTER_ULONG( base + 0x30) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR_2
//
// Notes : Register regular sequence register 2 (SQR2) at the offset 0x30, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ7_MASK 0x1FU
#define SQ7_OFFSET 4
#define SQ7_START_BIT 0
#define SQ7_WIDTH 5


#define SQR_2_REG 0x30

typedef enum sq7 {
    SQ_7_0,
    SQ_7_1
} SQ_7_T ;
#define READ_SQ7(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SQ7_MASK) >> SQ7_START_BIT )

#define WRITE_SQ7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SQ7_MASK) | ((val << SQ7_START_BIT) & SQ7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR_2
//
// Notes : Register regular sequence register 2 (SQR2) at the offset 0x30, Bits 5:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ8_MASK 0x3E0U
#define SQ8_OFFSET 9
#define SQ8_START_BIT 5
#define SQ8_WIDTH 5



typedef enum sq8 {
    SQ_8_0,
    SQ_8_1
} SQ_8_T ;
#define READ_SQ8(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SQ8_MASK) >> SQ8_START_BIT )

#define WRITE_SQ8(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SQ8_MASK) | ((val << SQ8_START_BIT) & SQ8_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR_2
//
// Notes : Register regular sequence register 2 (SQR2) at the offset 0x30, Bits 10:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ9_MASK 0x7C00U
#define SQ9_OFFSET 14
#define SQ9_START_BIT 10
#define SQ9_WIDTH 5



typedef enum sq9 {
    SQ_9_0,
    SQ_9_1
} SQ_9_T ;
#define READ_SQ9(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SQ9_MASK) >> SQ9_START_BIT )

#define WRITE_SQ9(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SQ9_MASK) | ((val << SQ9_START_BIT) & SQ9_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR_2
//
// Notes : Register regular sequence register 2 (SQR2) at the offset 0x30, Bits 15:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ10_MASK 0xF8000U
#define SQ10_OFFSET 19
#define SQ10_START_BIT 15
#define SQ10_WIDTH 5



typedef enum sq10 {
    SQ_1_0_0,
    SQ_1_0_1
} SQ_10_T ;
#define READ_SQ10(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SQ10_MASK) >> SQ10_START_BIT )

#define WRITE_SQ10(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SQ10_MASK) | ((val << SQ10_START_BIT) & SQ10_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR_2
//
// Notes : Register regular sequence register 2 (SQR2) at the offset 0x30, Bits 20:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ11_MASK 0x1F00000U
#define SQ11_OFFSET 24
#define SQ11_START_BIT 20
#define SQ11_WIDTH 5



typedef enum sq11 {
    SQ_1_1_0,
    SQ_1_1_1
} SQ_11_T ;
#define READ_SQ11(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SQ11_MASK) >> SQ11_START_BIT )

#define WRITE_SQ11(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SQ11_MASK) | ((val << SQ11_START_BIT) & SQ11_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr2
//
// Return the value of register SQR_2
//
// Notes : Register regular sequence register 2 (SQR2) at the offset 0x30, Bits 25:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ12_MASK 0x3E000000U
#define SQ12_OFFSET 29
#define SQ12_START_BIT 25
#define SQ12_WIDTH 5



typedef enum sq12 {
    SQ_1_2_0,
    SQ_1_2_1
} SQ_12_T ;
#define READ_SQ12(base) \
    ((READ_REGISTER_ULONG(base + 0x30) & SQ12_MASK) >> SQ12_START_BIT )

#define WRITE_SQ12(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x30); \
     WRITE_REGISTER_ULONG( base + 0x30, (OldValue & ~SQ12_MASK) | ((val << SQ12_START_BIT) & SQ12_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR3
//
// Notes : Register Sqr3 at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SQR_3( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x34, val)

#define SET_BITS_SQR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, val |  mask ); \
   } 

#define CLEAR_BITS_SQR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34,  val & ~mask ); \
   } 

#define READ_REGISTER_SQR_3( base ) \
     READ_REGISTER_ULONG( base + 0x34) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR_3
//
// Notes : Register regular sequence register 3 (SQR3) at the offset 0x34, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // st conversion in regular sequence 
    // 
#define SQ1_MASK 0x1FU
#define SQ1_OFFSET 4
#define SQ1_START_BIT 0
#define SQ1_WIDTH 5


#define SQR_3_REG 0x34

typedef enum sq1 {
    SQ_1_0,
    SQ_1_1
} SQ_1_T ;
#define READ_SQ1(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & SQ1_MASK) >> SQ1_START_BIT )

#define WRITE_SQ1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~SQ1_MASK) | ((val << SQ1_START_BIT) & SQ1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR_3
//
// Notes : Register regular sequence register 3 (SQR3) at the offset 0x34, Bits 5:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // nd conversion in regular sequence 
    // 
#define SQ2_MASK 0x3E0U
#define SQ2_OFFSET 9
#define SQ2_START_BIT 5
#define SQ2_WIDTH 5



typedef enum sq2 {
    SQ_2_0,
    SQ_2_1
} SQ_2_T ;
#define READ_SQ2(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & SQ2_MASK) >> SQ2_START_BIT )

#define WRITE_SQ2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~SQ2_MASK) | ((val << SQ2_START_BIT) & SQ2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR_3
//
// Notes : Register regular sequence register 3 (SQR3) at the offset 0x34, Bits 10:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // rd conversion in regular sequence 
    // 
#define SQ3_MASK 0x7C00U
#define SQ3_OFFSET 14
#define SQ3_START_BIT 10
#define SQ3_WIDTH 5



typedef enum sq3 {
    SQ_3_0,
    SQ_3_1
} SQ_3_T ;
#define READ_SQ3(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & SQ3_MASK) >> SQ3_START_BIT )

#define WRITE_SQ3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~SQ3_MASK) | ((val << SQ3_START_BIT) & SQ3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR_3
//
// Notes : Register regular sequence register 3 (SQR3) at the offset 0x34, Bits 15:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ4_MASK 0xF8000U
#define SQ4_OFFSET 19
#define SQ4_START_BIT 15
#define SQ4_WIDTH 5



typedef enum sq4 {
    SQ_4_0,
    SQ_4_1
} SQ_4_T ;
#define READ_SQ4(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & SQ4_MASK) >> SQ4_START_BIT )

#define WRITE_SQ4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~SQ4_MASK) | ((val << SQ4_START_BIT) & SQ4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR_3
//
// Notes : Register regular sequence register 3 (SQR3) at the offset 0x34, Bits 20:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ5_MASK 0x1F00000U
#define SQ5_OFFSET 24
#define SQ5_START_BIT 20
#define SQ5_WIDTH 5



typedef enum sq5 {
    SQ_5_0,
    SQ_5_1
} SQ_5_T ;
#define READ_SQ5(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & SQ5_MASK) >> SQ5_START_BIT )

#define WRITE_SQ5(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~SQ5_MASK) | ((val << SQ5_START_BIT) & SQ5_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Sqr3
//
// Return the value of register SQR_3
//
// Notes : Register regular sequence register 3 (SQR3) at the offset 0x34, Bits 25:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in regular sequence 
    // 
#define SQ6_MASK 0x3E000000U
#define SQ6_OFFSET 29
#define SQ6_START_BIT 25
#define SQ6_WIDTH 5



typedef enum sq6 {
    SQ_6_0,
    SQ_6_1
} SQ_6_T ;
#define READ_SQ6(base) \
    ((READ_REGISTER_ULONG(base + 0x34) & SQ6_MASK) >> SQ6_START_BIT )

#define WRITE_SQ6(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x34); \
     WRITE_REGISTER_ULONG( base + 0x34, (OldValue & ~SQ6_MASK) | ((val << SQ6_START_BIT) & SQ6_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jsqr
//
// Return the value of register JSQR
//
// Notes : Register Jsqr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_JSQR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x38, val)

#define SET_BITS_JSQR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, val |  mask ); \
   } 

#define CLEAR_BITS_JSQR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38,  val & ~mask ); \
   } 

#define READ_REGISTER_JSQR( base ) \
     READ_REGISTER_ULONG( base + 0x38) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jsqr
//
// Return the value of register JSQR
//
// Notes : Register injected sequence register (JSQR) at the offset 0x38, Bits 0:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // st conversion in injected sequence 
    // 
#define JSQ1_MASK 0x1FU
#define JSQ1_OFFSET 4
#define JSQ1_START_BIT 0
#define JSQ1_WIDTH 5


#define JSQR_REG 0x38

typedef enum jsq1 {
    JSQ_1_0,
    JSQ_1_1
} JSQ_1_T ;
#define READ_JSQ1(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & JSQ1_MASK) >> JSQ1_START_BIT )

#define WRITE_JSQ1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~JSQ1_MASK) | ((val << JSQ1_START_BIT) & JSQ1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jsqr
//
// Return the value of register JSQR
//
// Notes : Register injected sequence register (JSQR) at the offset 0x38, Bits 5:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // nd conversion in injected sequence 
    // 
#define JSQ2_MASK 0x3E0U
#define JSQ2_OFFSET 9
#define JSQ2_START_BIT 5
#define JSQ2_WIDTH 5



typedef enum jsq2 {
    JSQ_2_0,
    JSQ_2_1
} JSQ_2_T ;
#define READ_JSQ2(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & JSQ2_MASK) >> JSQ2_START_BIT )

#define WRITE_JSQ2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~JSQ2_MASK) | ((val << JSQ2_START_BIT) & JSQ2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jsqr
//
// Return the value of register JSQR
//
// Notes : Register injected sequence register (JSQR) at the offset 0x38, Bits 10:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // rd conversion in injected sequence 
    // 
#define JSQ3_MASK 0x7C00U
#define JSQ3_OFFSET 14
#define JSQ3_START_BIT 10
#define JSQ3_WIDTH 5



typedef enum jsq3 {
    JSQ_3_0,
    JSQ_3_1
} JSQ_3_T ;
#define READ_JSQ3(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & JSQ3_MASK) >> JSQ3_START_BIT )

#define WRITE_JSQ3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~JSQ3_MASK) | ((val << JSQ3_START_BIT) & JSQ3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jsqr
//
// Return the value of register JSQR
//
// Notes : Register injected sequence register (JSQR) at the offset 0x38, Bits 15:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // th conversion in injected sequence 
    // 
#define JSQ4_MASK 0xF8000U
#define JSQ4_OFFSET 19
#define JSQ4_START_BIT 15
#define JSQ4_WIDTH 5



typedef enum jsq4 {
    JSQ_4_0,
    JSQ_4_1
} JSQ_4_T ;
#define READ_JSQ4(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & JSQ4_MASK) >> JSQ4_START_BIT )

#define WRITE_JSQ4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~JSQ4_MASK) | ((val << JSQ4_START_BIT) & JSQ4_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jsqr
//
// Return the value of register JSQR
//
// Notes : Register injected sequence register (JSQR) at the offset 0x38, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Injected sequence length 
    // 
#define JL_MASK 0x300000U
#define JL_OFFSET 21
#define JL_START_BIT 20
#define JL_WIDTH 2



typedef enum jl {
    JL_0,
    JL_1
} JL_T ;
#define READ_JL(base) \
    ((READ_REGISTER_ULONG(base + 0x38) & JL_MASK) >> JL_START_BIT )

#define WRITE_JL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x38); \
     WRITE_REGISTER_ULONG( base + 0x38, (OldValue & ~JL_MASK) | ((val << JL_START_BIT) & JL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr1
//
// Return the value of register JDR1
//
// Notes : Register Jdr1 at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_JDR_1( base ) \
     READ_REGISTER_ULONG( base + 0x3C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr1
//
// Return the value of register JDR_1
//
// Notes : Register injected data register x (JDR1) at the offset 0x3C, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Injected data 
    // 
#define JDATA_MASK 0xFFFFU
#define JDATA_OFFSET 15
#define JDATA_START_BIT 0
#define JDATA_WIDTH 16


#define JDR_1_REG 0x3C

typedef enum jdata {
    JDATA_0,
    JDATA_1
} JDATA_T ;
#define READ_JDATA(base) \
    ((READ_REGISTER_ULONG(base + 0x3C) & JDATA_MASK) >> JDATA_START_BIT )

#define WRITE_JDATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x3C); \
     WRITE_REGISTER_ULONG( base + 0x3C, (OldValue & ~JDATA_MASK) | ((val << JDATA_START_BIT) & JDATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr2
//
// Return the value of register JDR2
//
// Notes : Register Jdr2 at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_JDR_2( base ) \
     READ_REGISTER_ULONG( base + 0x40) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr2
//
// Return the value of register JDR_2
//
// Notes : Register injected data register x (JDR2) at the offset 0x40, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Injected data 
    // 
#define JDATA_MASK 0xFFFFU
#define JDATA_OFFSET 15
#define JDATA_START_BIT 0
#define JDATA_WIDTH 16


#define JDR_2_REG 0x40

#define READ_JDATA(base) \
    ((READ_REGISTER_ULONG(base + 0x40) & JDATA_MASK) >> JDATA_START_BIT )

#define WRITE_JDATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x40); \
     WRITE_REGISTER_ULONG( base + 0x40, (OldValue & ~JDATA_MASK) | ((val << JDATA_START_BIT) & JDATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr3
//
// Return the value of register JDR3
//
// Notes : Register Jdr3 at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_JDR_3( base ) \
     READ_REGISTER_ULONG( base + 0x44) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr3
//
// Return the value of register JDR_3
//
// Notes : Register injected data register x (JDR3) at the offset 0x44, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Injected data 
    // 
#define JDATA_MASK 0xFFFFU
#define JDATA_OFFSET 15
#define JDATA_START_BIT 0
#define JDATA_WIDTH 16


#define JDR_3_REG 0x44

#define READ_JDATA(base) \
    ((READ_REGISTER_ULONG(base + 0x44) & JDATA_MASK) >> JDATA_START_BIT )

#define WRITE_JDATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x44); \
     WRITE_REGISTER_ULONG( base + 0x44, (OldValue & ~JDATA_MASK) | ((val << JDATA_START_BIT) & JDATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr4
//
// Return the value of register JDR4
//
// Notes : Register Jdr4 at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_JDR_4( base ) \
     READ_REGISTER_ULONG( base + 0x48) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Jdr4
//
// Return the value of register JDR_4
//
// Notes : Register injected data register x (JDR4) at the offset 0x48, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Injected data 
    // 
#define JDATA_MASK 0xFFFFU
#define JDATA_OFFSET 15
#define JDATA_START_BIT 0
#define JDATA_WIDTH 16


#define JDR_4_REG 0x48

#define READ_JDATA(base) \
    ((READ_REGISTER_ULONG(base + 0x48) & JDATA_MASK) >> JDATA_START_BIT )

#define WRITE_JDATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x48); \
     WRITE_REGISTER_ULONG( base + 0x48, (OldValue & ~JDATA_MASK) | ((val << JDATA_START_BIT) & JDATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_DR( base ) \
     READ_REGISTER_ULONG( base + 0x4C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : DATA
//
// Return the value of register Dr
//
// Notes : Regular data 
//        (DR) at the offset 0x4C, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_DATA(base) \
    ((READ_REGISTER_ULONG(base + 0x4C) & DATA_MASK) >> DATA_START_BIT )

#define WRITE_DATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4C); \
     WRITE_REGISTER_ULONG( base + 0x4C, (OldValue & ~DATA_MASK) | ((val << DATA_START_BIT) & DATA_MASK )); \
   } 

