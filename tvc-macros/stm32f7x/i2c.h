/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/i2c.h
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
 
#define NB_DEVICE_I2C 4
#define I2C1 0x40005400
#define I2C4 0x40006000
#define I2C3 0x40005C00
#define I2C2 0x40005800
/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR1
//
// Notes : Register Cr1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_1( base,  val) \
     WRITE_REGISTER_ULONG( base , val)

#define SET_BITS_CR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  mask ); \
   } 

#define CLEAR_BITS_CR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base ,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_1( base ) \
     READ_REGISTER_ULONG( base ) 

/////////////////////////////////////////////////////////////////////////
//
// Function : PECEN
//
// Return the value of register Cr1
//
// Notes : PEC enable 
//        (CR1) at the offset 0x0, Bits 23:23
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PECEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~PECEN_MASK) | ((val << PECEN_START_BIT) & PECEN_MASK )); \
   } 

#define ENABLE_PECEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  PECEN_MASK ); \
   } 

#define DISABLE_PECEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~PECEN_MASK ); \
   } 

#define READ_PECEN(base) \
    ((READ_REGISTER_ULONG(base ) & PECEN_MASK) >> PECEN_START_BIT )

#define WHEN_PECEN_HIGH(base) \
     if ( READ_PECEN(base) )


#define UNLESS_PECEN_HIGH(base) \
     if (! READ_PECEN(base) )


#define WAIT_PECEN_LOW(base) \
    while ( READ_PECEN(base) );


#define WAIT_PECEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PECEN(base) && (--timeout > 0) );


#define WAIT_PECEN_HIGH(base) \
    while (! READ_PECEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALERTEN
//
// Return the value of register Cr1
//
// Notes : SMBUS alert enable 
//        (CR1) at the offset 0x0, Bits 22:22
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALERTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~ALERTEN_MASK) | ((val << ALERTEN_START_BIT) & ALERTEN_MASK )); \
   } 

#define ENABLE_ALERTEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  ALERTEN_MASK ); \
   } 

#define DISABLE_ALERTEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~ALERTEN_MASK ); \
   } 

#define READ_ALERTEN(base) \
    ((READ_REGISTER_ULONG(base ) & ALERTEN_MASK) >> ALERTEN_START_BIT )

#define WHEN_ALERTEN_HIGH(base) \
     if ( READ_ALERTEN(base) )


#define UNLESS_ALERTEN_HIGH(base) \
     if (! READ_ALERTEN(base) )


#define WAIT_ALERTEN_LOW(base) \
    while ( READ_ALERTEN(base) );


#define WAIT_ALERTEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ALERTEN(base) && (--timeout > 0) );


#define WAIT_ALERTEN_HIGH(base) \
    while (! READ_ALERTEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : SMBDEN
//
// Return the value of register Cr1
//
// Notes : SMBus Device Default address enable 
//        (CR1) at the offset 0x0, Bits 21:21
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SMBDEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SMBDEN_MASK) | ((val << SMBDEN_START_BIT) & SMBDEN_MASK )); \
   } 

#define ENABLE_SMBDEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  SMBDEN_MASK ); \
   } 

#define DISABLE_SMBDEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~SMBDEN_MASK ); \
   } 

#define READ_SMBDEN(base) \
    ((READ_REGISTER_ULONG(base ) & SMBDEN_MASK) >> SMBDEN_START_BIT )

#define WHEN_SMBDEN_HIGH(base) \
     if ( READ_SMBDEN(base) )


#define UNLESS_SMBDEN_HIGH(base) \
     if (! READ_SMBDEN(base) )


#define WAIT_SMBDEN_LOW(base) \
    while ( READ_SMBDEN(base) );


#define WAIT_SMBDEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SMBDEN(base) && (--timeout > 0) );


#define WAIT_SMBDEN_HIGH(base) \
    while (! READ_SMBDEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : SMBHEN
//
// Return the value of register Cr1
//
// Notes : SMBus Host address enable 
//        (CR1) at the offset 0x0, Bits 20:20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SMBHEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SMBHEN_MASK) | ((val << SMBHEN_START_BIT) & SMBHEN_MASK )); \
   } 

#define ENABLE_SMBHEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  SMBHEN_MASK ); \
   } 

#define DISABLE_SMBHEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~SMBHEN_MASK ); \
   } 

#define READ_SMBHEN(base) \
    ((READ_REGISTER_ULONG(base ) & SMBHEN_MASK) >> SMBHEN_START_BIT )

#define WHEN_SMBHEN_HIGH(base) \
     if ( READ_SMBHEN(base) )


#define UNLESS_SMBHEN_HIGH(base) \
     if (! READ_SMBHEN(base) )


#define WAIT_SMBHEN_LOW(base) \
    while ( READ_SMBHEN(base) );


#define WAIT_SMBHEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SMBHEN(base) && (--timeout > 0) );


#define WAIT_SMBHEN_HIGH(base) \
    while (! READ_SMBHEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : GCEN
//
// Return the value of register Cr1
//
// Notes : General call enable 
//        (CR1) at the offset 0x0, Bits 19:19
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_GCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~GCEN_MASK) | ((val << GCEN_START_BIT) & GCEN_MASK )); \
   } 

#define ENABLE_GCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  GCEN_MASK ); \
   } 

#define DISABLE_GCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~GCEN_MASK ); \
   } 

#define READ_GCEN(base) \
    ((READ_REGISTER_ULONG(base ) & GCEN_MASK) >> GCEN_START_BIT )

#define WHEN_GCEN_HIGH(base) \
     if ( READ_GCEN(base) )


#define UNLESS_GCEN_HIGH(base) \
     if (! READ_GCEN(base) )


#define WAIT_GCEN_LOW(base) \
    while ( READ_GCEN(base) );


#define WAIT_GCEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_GCEN(base) && (--timeout > 0) );


#define WAIT_GCEN_HIGH(base) \
    while (! READ_GCEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUPEN
//
// Return the value of register Cr1
//
// Notes : Wakeup from STOP enable 
//        (CR1) at the offset 0x0, Bits 18:18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUPEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~WUPEN_MASK) | ((val << WUPEN_START_BIT) & WUPEN_MASK )); \
   } 

#define ENABLE_WUPEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  WUPEN_MASK ); \
   } 

#define DISABLE_WUPEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~WUPEN_MASK ); \
   } 

#define READ_WUPEN(base) \
    ((READ_REGISTER_ULONG(base ) & WUPEN_MASK) >> WUPEN_START_BIT )

#define WHEN_WUPEN_HIGH(base) \
     if ( READ_WUPEN(base) )


#define UNLESS_WUPEN_HIGH(base) \
     if (! READ_WUPEN(base) )


#define WAIT_WUPEN_LOW(base) \
    while ( READ_WUPEN(base) );


#define WAIT_WUPEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WUPEN(base) && (--timeout > 0) );


#define WAIT_WUPEN_HIGH(base) \
    while (! READ_WUPEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : NOSTRETCH
//
// Return the value of register Cr1
//
// Notes : Clock stretching disable 
//        (CR1) at the offset 0x0, Bits 17:17
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_NOSTRETCH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~NOSTRETCH_MASK) | ((val << NOSTRETCH_START_BIT) & NOSTRETCH_MASK )); \
   } 

#define ENABLE_NOSTRETCH(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  NOSTRETCH_MASK ); \
   } 

#define DISABLE_NOSTRETCH(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~NOSTRETCH_MASK ); \
   } 

#define READ_NOSTRETCH(base) \
    ((READ_REGISTER_ULONG(base ) & NOSTRETCH_MASK) >> NOSTRETCH_START_BIT )

#define WHEN_NOSTRETCH_HIGH(base) \
     if ( READ_NOSTRETCH(base) )


#define UNLESS_NOSTRETCH_HIGH(base) \
     if (! READ_NOSTRETCH(base) )


#define WAIT_NOSTRETCH_LOW(base) \
    while ( READ_NOSTRETCH(base) );


#define WAIT_NOSTRETCH_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NOSTRETCH(base) && (--timeout > 0) );


#define WAIT_NOSTRETCH_HIGH(base) \
    while (! READ_NOSTRETCH(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : SBC
//
// Return the value of register Cr1
//
// Notes : Slave byte control 
//        (CR1) at the offset 0x0, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SBC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SBC_MASK) | ((val << SBC_START_BIT) & SBC_MASK )); \
   } 

#define ENABLE_SBC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  SBC_MASK ); \
   } 

#define DISABLE_SBC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~SBC_MASK ); \
   } 

#define READ_SBC(base) \
    ((READ_REGISTER_ULONG(base ) & SBC_MASK) >> SBC_START_BIT )

#define WHEN_SBC_HIGH(base) \
     if ( READ_SBC(base) )


#define UNLESS_SBC_HIGH(base) \
     if (! READ_SBC(base) )


#define WAIT_SBC_LOW(base) \
    while ( READ_SBC(base) );


#define WAIT_SBC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SBC(base) && (--timeout > 0) );


#define WAIT_SBC_HIGH(base) \
    while (! READ_SBC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXDMAEN
//
// Return the value of register Cr1
//
// Notes : DMA reception requests enable 
//        (CR1) at the offset 0x0, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXDMAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~RXDMAEN_MASK) | ((val << RXDMAEN_START_BIT) & RXDMAEN_MASK )); \
   } 

#define ENABLE_RXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  RXDMAEN_MASK ); \
   } 

#define DISABLE_RXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~RXDMAEN_MASK ); \
   } 

#define READ_RXDMAEN(base) \
    ((READ_REGISTER_ULONG(base ) & RXDMAEN_MASK) >> RXDMAEN_START_BIT )

#define WHEN_RXDMAEN_HIGH(base) \
     if ( READ_RXDMAEN(base) )


#define UNLESS_RXDMAEN_HIGH(base) \
     if (! READ_RXDMAEN(base) )


#define WAIT_RXDMAEN_LOW(base) \
    while ( READ_RXDMAEN(base) );


#define WAIT_RXDMAEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXDMAEN(base) && (--timeout > 0) );


#define WAIT_RXDMAEN_HIGH(base) \
    while (! READ_RXDMAEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXDMAEN
//
// Return the value of register Cr1
//
// Notes : DMA transmission requests enable 
//        (CR1) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXDMAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TXDMAEN_MASK) | ((val << TXDMAEN_START_BIT) & TXDMAEN_MASK )); \
   } 

#define ENABLE_TXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TXDMAEN_MASK ); \
   } 

#define DISABLE_TXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TXDMAEN_MASK ); \
   } 

#define READ_TXDMAEN(base) \
    ((READ_REGISTER_ULONG(base ) & TXDMAEN_MASK) >> TXDMAEN_START_BIT )

#define WHEN_TXDMAEN_HIGH(base) \
     if ( READ_TXDMAEN(base) )


#define UNLESS_TXDMAEN_HIGH(base) \
     if (! READ_TXDMAEN(base) )


#define WAIT_TXDMAEN_LOW(base) \
    while ( READ_TXDMAEN(base) );


#define WAIT_TXDMAEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXDMAEN(base) && (--timeout > 0) );


#define WAIT_TXDMAEN_HIGH(base) \
    while (! READ_TXDMAEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ANFOFF
//
// Return the value of register Cr1
//
// Notes : Analog noise filter OFF 
//        (CR1) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ANFOFF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~ANFOFF_MASK) | ((val << ANFOFF_START_BIT) & ANFOFF_MASK )); \
   } 

#define ENABLE_ANFOFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  ANFOFF_MASK ); \
   } 

#define DISABLE_ANFOFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~ANFOFF_MASK ); \
   } 

#define READ_ANFOFF(base) \
    ((READ_REGISTER_ULONG(base ) & ANFOFF_MASK) >> ANFOFF_START_BIT )

#define WHEN_ANFOFF_HIGH(base) \
     if ( READ_ANFOFF(base) )


#define UNLESS_ANFOFF_HIGH(base) \
     if (! READ_ANFOFF(base) )


#define WAIT_ANFOFF_LOW(base) \
    while ( READ_ANFOFF(base) );


#define WAIT_ANFOFF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ANFOFF(base) && (--timeout > 0) );


#define WAIT_ANFOFF_HIGH(base) \
    while (! READ_ANFOFF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DNF
//
// Return the value of register Cr1
//
// Notes : Digital noise filter 
//        (CR1) at the offset 0x0, Bits 8:11
//
/////////////////////////////////////////////////////////////////////////
#define READ_DNF(base) \
    ((READ_REGISTER_ULONG(base ) & DNF_MASK) >> DNF_START_BIT )

#define WRITE_DNF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DNF_MASK) | ((val << DNF_START_BIT) & DNF_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : ERRIE
//
// Return the value of register Cr1
//
// Notes : Error interrupts enable 
//        (CR1) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ERRIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~ERRIE_MASK) | ((val << ERRIE_START_BIT) & ERRIE_MASK )); \
   } 

#define ENABLE_ERRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  ERRIE_MASK ); \
   } 

#define DISABLE_ERRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~ERRIE_MASK ); \
   } 

#define READ_ERRIE(base) \
    ((READ_REGISTER_ULONG(base ) & ERRIE_MASK) >> ERRIE_START_BIT )

#define WHEN_ERRIE_HIGH(base) \
     if ( READ_ERRIE(base) )


#define UNLESS_ERRIE_HIGH(base) \
     if (! READ_ERRIE(base) )


#define WAIT_ERRIE_LOW(base) \
    while ( READ_ERRIE(base) );


#define WAIT_ERRIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ERRIE(base) && (--timeout > 0) );


#define WAIT_ERRIE_HIGH(base) \
    while (! READ_ERRIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TCIE
//
// Return the value of register Cr1
//
// Notes : Transfer Complete interrupt enable 
//        (CR1) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TCIE_MASK) | ((val << TCIE_START_BIT) & TCIE_MASK )); \
   } 

#define ENABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TCIE_MASK ); \
   } 

#define DISABLE_TCIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TCIE_MASK ); \
   } 

#define READ_TCIE(base) \
    ((READ_REGISTER_ULONG(base ) & TCIE_MASK) >> TCIE_START_BIT )

#define WHEN_TCIE_HIGH(base) \
     if ( READ_TCIE(base) )


#define UNLESS_TCIE_HIGH(base) \
     if (! READ_TCIE(base) )


#define WAIT_TCIE_LOW(base) \
    while ( READ_TCIE(base) );


#define WAIT_TCIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCIE(base) && (--timeout > 0) );


#define WAIT_TCIE_HIGH(base) \
    while (! READ_TCIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : STOPIE
//
// Return the value of register Cr1
//
// Notes : STOP detection Interrupt enable 
//        (CR1) at the offset 0x0, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STOPIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~STOPIE_MASK) | ((val << STOPIE_START_BIT) & STOPIE_MASK )); \
   } 

#define ENABLE_STOPIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  STOPIE_MASK ); \
   } 

#define DISABLE_STOPIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~STOPIE_MASK ); \
   } 

#define READ_STOPIE(base) \
    ((READ_REGISTER_ULONG(base ) & STOPIE_MASK) >> STOPIE_START_BIT )

#define WHEN_STOPIE_HIGH(base) \
     if ( READ_STOPIE(base) )


#define UNLESS_STOPIE_HIGH(base) \
     if (! READ_STOPIE(base) )


#define WAIT_STOPIE_LOW(base) \
    while ( READ_STOPIE(base) );


#define WAIT_STOPIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_STOPIE(base) && (--timeout > 0) );


#define WAIT_STOPIE_HIGH(base) \
    while (! READ_STOPIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : NACKIE
//
// Return the value of register Cr1
//
// Notes : Not acknowledge received interrupt enable 
//        (CR1) at the offset 0x0, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_NACKIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~NACKIE_MASK) | ((val << NACKIE_START_BIT) & NACKIE_MASK )); \
   } 

#define ENABLE_NACKIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  NACKIE_MASK ); \
   } 

#define DISABLE_NACKIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~NACKIE_MASK ); \
   } 

#define READ_NACKIE(base) \
    ((READ_REGISTER_ULONG(base ) & NACKIE_MASK) >> NACKIE_START_BIT )

#define WHEN_NACKIE_HIGH(base) \
     if ( READ_NACKIE(base) )


#define UNLESS_NACKIE_HIGH(base) \
     if (! READ_NACKIE(base) )


#define WAIT_NACKIE_LOW(base) \
    while ( READ_NACKIE(base) );


#define WAIT_NACKIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NACKIE(base) && (--timeout > 0) );


#define WAIT_NACKIE_HIGH(base) \
    while (! READ_NACKIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ADDRIE
//
// Return the value of register Cr1
//
// Notes : Address match interrupt enable (slave only) 
//        (CR1) at the offset 0x0, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ADDRIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~ADDRIE_MASK) | ((val << ADDRIE_START_BIT) & ADDRIE_MASK )); \
   } 

#define ENABLE_ADDRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  ADDRIE_MASK ); \
   } 

#define DISABLE_ADDRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~ADDRIE_MASK ); \
   } 

#define READ_ADDRIE(base) \
    ((READ_REGISTER_ULONG(base ) & ADDRIE_MASK) >> ADDRIE_START_BIT )

#define WHEN_ADDRIE_HIGH(base) \
     if ( READ_ADDRIE(base) )


#define UNLESS_ADDRIE_HIGH(base) \
     if (! READ_ADDRIE(base) )


#define WAIT_ADDRIE_LOW(base) \
    while ( READ_ADDRIE(base) );


#define WAIT_ADDRIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ADDRIE(base) && (--timeout > 0) );


#define WAIT_ADDRIE_HIGH(base) \
    while (! READ_ADDRIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXIE
//
// Return the value of register Cr1
//
// Notes : RX Interrupt enable 
//        (CR1) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~RXIE_MASK) | ((val << RXIE_START_BIT) & RXIE_MASK )); \
   } 

#define ENABLE_RXIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  RXIE_MASK ); \
   } 

#define DISABLE_RXIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~RXIE_MASK ); \
   } 

#define READ_RXIE(base) \
    ((READ_REGISTER_ULONG(base ) & RXIE_MASK) >> RXIE_START_BIT )

#define WHEN_RXIE_HIGH(base) \
     if ( READ_RXIE(base) )


#define UNLESS_RXIE_HIGH(base) \
     if (! READ_RXIE(base) )


#define WAIT_RXIE_LOW(base) \
    while ( READ_RXIE(base) );


#define WAIT_RXIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXIE(base) && (--timeout > 0) );


#define WAIT_RXIE_HIGH(base) \
    while (! READ_RXIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXIE
//
// Return the value of register Cr1
//
// Notes : TX Interrupt enable 
//        (CR1) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TXIE_MASK) | ((val << TXIE_START_BIT) & TXIE_MASK )); \
   } 

#define ENABLE_TXIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TXIE_MASK ); \
   } 

#define DISABLE_TXIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TXIE_MASK ); \
   } 

#define READ_TXIE(base) \
    ((READ_REGISTER_ULONG(base ) & TXIE_MASK) >> TXIE_START_BIT )

#define WHEN_TXIE_HIGH(base) \
     if ( READ_TXIE(base) )


#define UNLESS_TXIE_HIGH(base) \
     if (! READ_TXIE(base) )


#define WAIT_TXIE_LOW(base) \
    while ( READ_TXIE(base) );


#define WAIT_TXIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXIE(base) && (--timeout > 0) );


#define WAIT_TXIE_HIGH(base) \
    while (! READ_TXIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : PE
//
// Return the value of register Cr1
//
// Notes : Peripheral enable 
//        (CR1) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~PE_MASK) | ((val << PE_START_BIT) & PE_MASK )); \
   } 

#define ENABLE_PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  PE_MASK ); \
   } 

#define DISABLE_PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~PE_MASK ); \
   } 

#define READ_PE(base) \
    ((READ_REGISTER_ULONG(base ) & PE_MASK) >> PE_START_BIT )

#define WHEN_PE_HIGH(base) \
     if ( READ_PE(base) )


#define UNLESS_PE_HIGH(base) \
     if (! READ_PE(base) )


#define WAIT_PE_LOW(base) \
    while ( READ_PE(base) );


#define WAIT_PE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PE(base) && (--timeout > 0) );


#define WAIT_PE_HIGH(base) \
    while (! READ_PE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR2
//
// Notes : Register Cr2 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x4, val)

#define SET_BITS_CR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  mask ); \
   } 

#define CLEAR_BITS_CR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_2( base ) \
     READ_REGISTER_ULONG( base + 0x4) 

/////////////////////////////////////////////////////////////////////////
//
// Function : SADD
//
// Return the value of register Cr2
//
// Notes : Slave address bit (master mode) 
//        (CR2) at the offset 0x4, Bits 0:9
//
/////////////////////////////////////////////////////////////////////////
#define READ_SADD(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & SADD_MASK) >> SADD_START_BIT )

#define WRITE_SADD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~SADD_MASK) | ((val << SADD_START_BIT) & SADD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RD_WRN
//
// Return the value of register Cr2
//
// Notes : Transfer direction (master mode) 
//        (CR2) at the offset 0x4, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RD_WRN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RD_WRN_MASK) | ((val << RD_WRN_START_BIT) & RD_WRN_MASK )); \
   } 

#define ENABLE_RD_WRN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  RD_WRN_MASK ); \
   } 

#define DISABLE_RD_WRN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~RD_WRN_MASK ); \
   } 

#define READ_RD_WRN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RD_WRN_MASK) >> RD_WRN_START_BIT )

#define WHEN_RD_WRN_HIGH(base) \
     if ( READ_RD_WRN(base) )


#define UNLESS_RD_WRN_HIGH(base) \
     if (! READ_RD_WRN(base) )


#define WAIT_RD_WRN_LOW(base) \
    while ( READ_RD_WRN(base) );


#define WAIT_RD_WRN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RD_WRN(base) && (--timeout > 0) );


#define WAIT_RD_WRN_HIGH(base) \
    while (! READ_RD_WRN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ADD10
//
// Return the value of register Cr2
//
// Notes : bit addressing mode (master mode) 
//        (CR2) at the offset 0x4, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ADD10(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ADD10_MASK) | ((val << ADD10_START_BIT) & ADD10_MASK )); \
   } 

#define ENABLE_ADD10(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  ADD10_MASK ); \
   } 

#define DISABLE_ADD10(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~ADD10_MASK ); \
   } 

#define READ_ADD10(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ADD10_MASK) >> ADD10_START_BIT )

#define WHEN_ADD10_HIGH(base) \
     if ( READ_ADD10(base) )


#define UNLESS_ADD10_HIGH(base) \
     if (! READ_ADD10(base) )


#define WAIT_ADD10_LOW(base) \
    while ( READ_ADD10(base) );


#define WAIT_ADD10_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ADD10(base) && (--timeout > 0) );


#define WAIT_ADD10_HIGH(base) \
    while (! READ_ADD10(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : HEAD10R
//
// Return the value of register Cr2
//
// Notes : bit address header only read direction (master receiver mode) 
//        (CR2) at the offset 0x4, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_HEAD10R(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~HEAD10R_MASK) | ((val << HEAD10R_START_BIT) & HEAD10R_MASK )); \
   } 

#define ENABLE_HEAD10R(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  HEAD10R_MASK ); \
   } 

#define DISABLE_HEAD10R(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~HEAD10R_MASK ); \
   } 

#define READ_HEAD10R(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & HEAD10R_MASK) >> HEAD10R_START_BIT )

#define WHEN_HEAD10R_HIGH(base) \
     if ( READ_HEAD10R(base) )


#define UNLESS_HEAD10R_HIGH(base) \
     if (! READ_HEAD10R(base) )


#define WAIT_HEAD10R_LOW(base) \
    while ( READ_HEAD10R(base) );


#define WAIT_HEAD10R_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HEAD10R(base) && (--timeout > 0) );


#define WAIT_HEAD10R_HIGH(base) \
    while (! READ_HEAD10R(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : START
//
// Return the value of register Cr2
//
// Notes : Start generation 
//        (CR2) at the offset 0x4, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_START(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~START_MASK) | ((val << START_START_BIT) & START_MASK )); \
   } 

#define ENABLE_START(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  START_MASK ); \
   } 

#define DISABLE_START(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~START_MASK ); \
   } 

#define READ_START(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & START_MASK) >> START_START_BIT )

#define WHEN_START_HIGH(base) \
     if ( READ_START(base) )


#define UNLESS_START_HIGH(base) \
     if (! READ_START(base) )


#define WAIT_START_LOW(base) \
    while ( READ_START(base) );


#define WAIT_START_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_START(base) && (--timeout > 0) );


#define WAIT_START_HIGH(base) \
    while (! READ_START(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : STOP
//
// Return the value of register Cr2
//
// Notes : Stop generation (master mode) 
//        (CR2) at the offset 0x4, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STOP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~STOP_MASK) | ((val << STOP_START_BIT) & STOP_MASK )); \
   } 

#define ENABLE_STOP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  STOP_MASK ); \
   } 

#define DISABLE_STOP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~STOP_MASK ); \
   } 

#define READ_STOP(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & STOP_MASK) >> STOP_START_BIT )

#define WHEN_STOP_HIGH(base) \
     if ( READ_STOP(base) )


#define UNLESS_STOP_HIGH(base) \
     if (! READ_STOP(base) )


#define WAIT_STOP_LOW(base) \
    while ( READ_STOP(base) );


#define WAIT_STOP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_STOP(base) && (--timeout > 0) );


#define WAIT_STOP_HIGH(base) \
    while (! READ_STOP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : NACK
//
// Return the value of register Cr2
//
// Notes : NACK generation (slave mode) 
//        (CR2) at the offset 0x4, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_NACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~NACK_MASK) | ((val << NACK_START_BIT) & NACK_MASK )); \
   } 

#define ENABLE_NACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  NACK_MASK ); \
   } 

#define DISABLE_NACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~NACK_MASK ); \
   } 

#define READ_NACK(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & NACK_MASK) >> NACK_START_BIT )

#define WHEN_NACK_HIGH(base) \
     if ( READ_NACK(base) )


#define UNLESS_NACK_HIGH(base) \
     if (! READ_NACK(base) )


#define WAIT_NACK_LOW(base) \
    while ( READ_NACK(base) );


#define WAIT_NACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NACK(base) && (--timeout > 0) );


#define WAIT_NACK_HIGH(base) \
    while (! READ_NACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : NBYTES
//
// Return the value of register Cr2
//
// Notes : Number of bytes 
//        (CR2) at the offset 0x4, Bits 16:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_NBYTES(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & NBYTES_MASK) >> NBYTES_START_BIT )

#define WRITE_NBYTES(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~NBYTES_MASK) | ((val << NBYTES_START_BIT) & NBYTES_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : RELOAD
//
// Return the value of register Cr2
//
// Notes : NBYTES reload mode 
//        (CR2) at the offset 0x4, Bits 24:24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RELOAD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RELOAD_MASK) | ((val << RELOAD_START_BIT) & RELOAD_MASK )); \
   } 

#define ENABLE_RELOAD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  RELOAD_MASK ); \
   } 

#define DISABLE_RELOAD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~RELOAD_MASK ); \
   } 

#define READ_RELOAD(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RELOAD_MASK) >> RELOAD_START_BIT )

#define WHEN_RELOAD_HIGH(base) \
     if ( READ_RELOAD(base) )


#define UNLESS_RELOAD_HIGH(base) \
     if (! READ_RELOAD(base) )


#define WAIT_RELOAD_LOW(base) \
    while ( READ_RELOAD(base) );


#define WAIT_RELOAD_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RELOAD(base) && (--timeout > 0) );


#define WAIT_RELOAD_HIGH(base) \
    while (! READ_RELOAD(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : AUTOEND
//
// Return the value of register Cr2
//
// Notes : Automatic end mode (master mode) 
//        (CR2) at the offset 0x4, Bits 25:25
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_AUTOEND(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~AUTOEND_MASK) | ((val << AUTOEND_START_BIT) & AUTOEND_MASK )); \
   } 

#define ENABLE_AUTOEND(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  AUTOEND_MASK ); \
   } 

#define DISABLE_AUTOEND(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~AUTOEND_MASK ); \
   } 

#define READ_AUTOEND(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & AUTOEND_MASK) >> AUTOEND_START_BIT )

#define WHEN_AUTOEND_HIGH(base) \
     if ( READ_AUTOEND(base) )


#define UNLESS_AUTOEND_HIGH(base) \
     if (! READ_AUTOEND(base) )


#define WAIT_AUTOEND_LOW(base) \
    while ( READ_AUTOEND(base) );


#define WAIT_AUTOEND_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_AUTOEND(base) && (--timeout > 0) );


#define WAIT_AUTOEND_HIGH(base) \
    while (! READ_AUTOEND(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : PECBYTE
//
// Return the value of register Cr2
//
// Notes : Packet error checking byte 
//        (CR2) at the offset 0x4, Bits 26:26
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PECBYTE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~PECBYTE_MASK) | ((val << PECBYTE_START_BIT) & PECBYTE_MASK )); \
   } 

#define ENABLE_PECBYTE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  PECBYTE_MASK ); \
   } 

#define DISABLE_PECBYTE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~PECBYTE_MASK ); \
   } 

#define READ_PECBYTE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & PECBYTE_MASK) >> PECBYTE_START_BIT )

#define WHEN_PECBYTE_HIGH(base) \
     if ( READ_PECBYTE(base) )


#define UNLESS_PECBYTE_HIGH(base) \
     if (! READ_PECBYTE(base) )


#define WAIT_PECBYTE_LOW(base) \
    while ( READ_PECBYTE(base) );


#define WAIT_PECBYTE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PECBYTE(base) && (--timeout > 0) );


#define WAIT_PECBYTE_HIGH(base) \
    while (! READ_PECBYTE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Oar1
//
// Return the value of register OAR1
//
// Notes : Register Oar1 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OAR_1( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8, val)

#define SET_BITS_OAR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_OAR_1(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_OAR_1( base ) \
     READ_REGISTER_ULONG( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Oar1
//
// Return the value of register OAR_1
//
// Notes : Register Own address register 1 (OAR1) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Own Address 1 enable 
    // 
#define OA1EN_MASK 0x8000U
#define OA1EN_OFFSET 15
#define OA1EN_START_BIT 15
#define OA1EN_WIDTH 1


#define OAR_1_REG 0x8

typedef enum oa1en {
    OA_1EN_0,
    OA_1EN_1
} OA_1EN_T ;
#define WRITE_OA1EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~OA1EN_MASK) | ((val << OA1EN_START_BIT) & OA1EN_MASK )); \
   } 

#define ENABLE_OA1EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  OA1EN_MASK ); \
   } 

#define DISABLE_OA1EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~OA1EN_MASK ); \
   } 

#define READ_OA1EN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & OA1EN_MASK) >> OA1EN_START_BIT )

#define WHEN_OA1EN_HIGH(base) \
     if ( READ_OA1EN(base) )


#define UNLESS_OA1EN_HIGH(base) \
     if (! READ_OA1EN(base) )


#define WAIT_OA1EN_LOW(base) \
    while ( READ_OA1EN(base) );


#define WAIT_OA1EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OA1EN(base) && (--timeout > 0) );


#define WAIT_OA1EN_HIGH(base) \
    while (! READ_OA1EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Oar1
//
// Return the value of register OAR_1
//
// Notes : Register Own address register 1 (OAR1) at the offset 0x8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Own Address 1 10-bit mode 
    // 
#define OA1MODE_MASK 0x400U
#define OA1MODE_OFFSET 10
#define OA1MODE_START_BIT 10
#define OA1MODE_WIDTH 1



typedef enum oa1mode {
    OA_1MODE_0,
    OA_1MODE_1
} OA_1MODE_T ;
#define WRITE_OA1MODE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~OA1MODE_MASK) | ((val << OA1MODE_START_BIT) & OA1MODE_MASK )); \
   } 

#define ENABLE_OA1MODE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  OA1MODE_MASK ); \
   } 

#define DISABLE_OA1MODE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~OA1MODE_MASK ); \
   } 

#define READ_OA1MODE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & OA1MODE_MASK) >> OA1MODE_START_BIT )

#define WHEN_OA1MODE_HIGH(base) \
     if ( READ_OA1MODE(base) )


#define UNLESS_OA1MODE_HIGH(base) \
     if (! READ_OA1MODE(base) )


#define WAIT_OA1MODE_LOW(base) \
    while ( READ_OA1MODE(base) );


#define WAIT_OA1MODE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OA1MODE(base) && (--timeout > 0) );


#define WAIT_OA1MODE_HIGH(base) \
    while (! READ_OA1MODE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Oar1
//
// Return the value of register OAR_1
//
// Notes : Register Own address register 1 (OAR1) at the offset 0x8, Bits 0:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Interface address 
    // 
#define OA1_MASK 0x3FFU
#define OA1_OFFSET 9
#define OA1_START_BIT 0
#define OA1_WIDTH 10



typedef enum oa1 {
    OA_1_0,
    OA_1_1
} OA_1_T ;
#define READ_OA1(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & OA1_MASK) >> OA1_START_BIT )

#define WRITE_OA1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~OA1_MASK) | ((val << OA1_START_BIT) & OA1_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Oar2
//
// Return the value of register OAR2
//
// Notes : Register Oar2 at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OAR_2( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_OAR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_OAR_2(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_OAR_2( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Oar2
//
// Return the value of register OAR_2
//
// Notes : Register Own address register 2 (OAR2) at the offset 0xC, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Own Address 2 enable 
    // 
#define OA2EN_MASK 0x8000U
#define OA2EN_OFFSET 15
#define OA2EN_START_BIT 15
#define OA2EN_WIDTH 1


#define OAR_2_REG 0xC

typedef enum oa2en {
    OA_2EN_0,
    OA_2EN_1
} OA_2EN_T ;
#define WRITE_OA2EN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~OA2EN_MASK) | ((val << OA2EN_START_BIT) & OA2EN_MASK )); \
   } 

#define ENABLE_OA2EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  OA2EN_MASK ); \
   } 

#define DISABLE_OA2EN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0xC ); \
     WRITE_REGISTER_ULONG( base + 0xC, val & ~OA2EN_MASK ); \
   } 

#define READ_OA2EN(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & OA2EN_MASK) >> OA2EN_START_BIT )

#define WHEN_OA2EN_HIGH(base) \
     if ( READ_OA2EN(base) )


#define UNLESS_OA2EN_HIGH(base) \
     if (! READ_OA2EN(base) )


#define WAIT_OA2EN_LOW(base) \
    while ( READ_OA2EN(base) );


#define WAIT_OA2EN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OA2EN(base) && (--timeout > 0) );


#define WAIT_OA2EN_HIGH(base) \
    while (! READ_OA2EN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Oar2
//
// Return the value of register OAR_2
//
// Notes : Register Own address register 2 (OAR2) at the offset 0xC, Bits 8:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Own Address 2 masks 
    // 
#define OA2MSK_MASK 0x700U
#define OA2MSK_OFFSET 10
#define OA2MSK_START_BIT 8
#define OA2MSK_WIDTH 3



typedef enum oa2msk {
    OA_2MSK_0,
    OA_2MSK_1
} OA_2MSK_T ;
#define READ_OA2MSK(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & OA2MSK_MASK) >> OA2MSK_START_BIT )

#define WRITE_OA2MSK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~OA2MSK_MASK) | ((val << OA2MSK_START_BIT) & OA2MSK_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Oar2
//
// Return the value of register OAR_2
//
// Notes : Register Own address register 2 (OAR2) at the offset 0xC, Bits 1:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Interface address 
    // 
#define OA2_MASK 0xFEU
#define OA2_OFFSET 7
#define OA2_START_BIT 1
#define OA2_WIDTH 7



typedef enum oa2 {
    OA_2_0,
    OA_2_1
} OA_2_T ;
#define READ_OA2(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & OA2_MASK) >> OA2_START_BIT )

#define WRITE_OA2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~OA2_MASK) | ((val << OA2_START_BIT) & OA2_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timingr
//
// Return the value of register TIMINGR
//
// Notes : Register Timingr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMINGR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_TIMINGR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_TIMINGR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_TIMINGR( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timingr
//
// Return the value of register TIMINGR
//
// Notes : Register Timing register (TIMINGR) at the offset 0x10, Bits 28:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Timing prescaler 
    // 
#define PRESC_MASK 0xF0000000U
#define PRESC_OFFSET 31
#define PRESC_START_BIT 28
#define PRESC_WIDTH 4


#define TIMINGR_REG 0x10

typedef enum presc {
    PRESC_0,
    PRESC_1
} PRESC_T ;
#define READ_PRESC(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PRESC_MASK) >> PRESC_START_BIT )

#define WRITE_PRESC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PRESC_MASK) | ((val << PRESC_START_BIT) & PRESC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timingr
//
// Return the value of register TIMINGR
//
// Notes : Register Timing register (TIMINGR) at the offset 0x10, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data setup time 
    // 
#define SCLDEL_MASK 0xF00000U
#define SCLDEL_OFFSET 23
#define SCLDEL_START_BIT 20
#define SCLDEL_WIDTH 4



typedef enum scldel {
    SCLDEL_0,
    SCLDEL_1
} SCLDEL_T ;
#define READ_SCLDEL(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SCLDEL_MASK) >> SCLDEL_START_BIT )

#define WRITE_SCLDEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SCLDEL_MASK) | ((val << SCLDEL_START_BIT) & SCLDEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timingr
//
// Return the value of register TIMINGR
//
// Notes : Register Timing register (TIMINGR) at the offset 0x10, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data hold time 
    // 
#define SDADEL_MASK 0xF0000U
#define SDADEL_OFFSET 19
#define SDADEL_START_BIT 16
#define SDADEL_WIDTH 4



typedef enum sdadel {
    SDADEL_0,
    SDADEL_1
} SDADEL_T ;
#define READ_SDADEL(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SDADEL_MASK) >> SDADEL_START_BIT )

#define WRITE_SDADEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SDADEL_MASK) | ((val << SDADEL_START_BIT) & SDADEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timingr
//
// Return the value of register TIMINGR
//
// Notes : Register Timing register (TIMINGR) at the offset 0x10, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SCL high period (master mode) 
    // 
#define SCLH_MASK 0xFF00U
#define SCLH_OFFSET 15
#define SCLH_START_BIT 8
#define SCLH_WIDTH 8



typedef enum sclh {
    SCLH_0,
    SCLH_1
} SCLH_T ;
#define READ_SCLH(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SCLH_MASK) >> SCLH_START_BIT )

#define WRITE_SCLH(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SCLH_MASK) | ((val << SCLH_START_BIT) & SCLH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timingr
//
// Return the value of register TIMINGR
//
// Notes : Register Timing register (TIMINGR) at the offset 0x10, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SCL low period (master mode) 
    // 
#define SCLL_MASK 0xFFU
#define SCLL_OFFSET 7
#define SCLL_START_BIT 0
#define SCLL_WIDTH 8



typedef enum scll {
    SCLL_0,
    SCLL_1
} SCLL_T ;
#define READ_SCLL(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & SCLL_MASK) >> SCLL_START_BIT )

#define WRITE_SCLL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~SCLL_MASK) | ((val << SCLL_START_BIT) & SCLL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timeoutr
//
// Return the value of register TIMEOUTR
//
// Notes : Register Timeoutr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TIMEOUTR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x14, val)

#define SET_BITS_TIMEOUTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  mask ); \
   } 

#define CLEAR_BITS_TIMEOUTR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14,  val & ~mask ); \
   } 

#define READ_REGISTER_TIMEOUTR( base ) \
     READ_REGISTER_ULONG( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timeoutr
//
// Return the value of register TIMEOUTR
//
// Notes : Register Status register 1 (TIMEOUTR) at the offset 0x14, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Extended clock timeout enable 
    // 
#define TEXTEN_MASK 0x80000000U
#define TEXTEN_OFFSET 31
#define TEXTEN_START_BIT 31
#define TEXTEN_WIDTH 1


#define TIMEOUTR_REG 0x14

typedef enum texten {
    TEXTEN_0,
    TEXTEN_1
} TEXTEN_T ;
#define WRITE_TEXTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~TEXTEN_MASK) | ((val << TEXTEN_START_BIT) & TEXTEN_MASK )); \
   } 

#define ENABLE_TEXTEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  TEXTEN_MASK ); \
   } 

#define DISABLE_TEXTEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~TEXTEN_MASK ); \
   } 

#define READ_TEXTEN(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & TEXTEN_MASK) >> TEXTEN_START_BIT )

#define WHEN_TEXTEN_HIGH(base) \
     if ( READ_TEXTEN(base) )


#define UNLESS_TEXTEN_HIGH(base) \
     if (! READ_TEXTEN(base) )


#define WAIT_TEXTEN_LOW(base) \
    while ( READ_TEXTEN(base) );


#define WAIT_TEXTEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEXTEN(base) && (--timeout > 0) );


#define WAIT_TEXTEN_HIGH(base) \
    while (! READ_TEXTEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Timeoutr
//
// Return the value of register TIMEOUTR
//
// Notes : Register Status register 1 (TIMEOUTR) at the offset 0x14, Bits 16:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Bus timeout B 
    // 
#define TIMEOUTB_MASK 0xFFF0000U
#define TIMEOUTB_OFFSET 27
#define TIMEOUTB_START_BIT 16
#define TIMEOUTB_WIDTH 12



typedef enum timeoutb {
    TIMEOUTB_0,
    TIMEOUTB_1
} TIMEOUTB_T ;
#define READ_TIMEOUTB(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & TIMEOUTB_MASK) >> TIMEOUTB_START_BIT )

#define WRITE_TIMEOUTB(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~TIMEOUTB_MASK) | ((val << TIMEOUTB_START_BIT) & TIMEOUTB_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Timeoutr
//
// Return the value of register TIMEOUTR
//
// Notes : Register Status register 1 (TIMEOUTR) at the offset 0x14, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock timeout enable 
    // 
#define TIMOUTEN_MASK 0x8000U
#define TIMOUTEN_OFFSET 15
#define TIMOUTEN_START_BIT 15
#define TIMOUTEN_WIDTH 1



typedef enum timouten {
    TIMOUTEN_0,
    TIMOUTEN_1
} TIMOUTEN_T ;
#define WRITE_TIMOUTEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~TIMOUTEN_MASK) | ((val << TIMOUTEN_START_BIT) & TIMOUTEN_MASK )); \
   } 

#define ENABLE_TIMOUTEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  TIMOUTEN_MASK ); \
   } 

#define DISABLE_TIMOUTEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~TIMOUTEN_MASK ); \
   } 

#define READ_TIMOUTEN(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & TIMOUTEN_MASK) >> TIMOUTEN_START_BIT )

#define WHEN_TIMOUTEN_HIGH(base) \
     if ( READ_TIMOUTEN(base) )


#define UNLESS_TIMOUTEN_HIGH(base) \
     if (! READ_TIMOUTEN(base) )


#define WAIT_TIMOUTEN_LOW(base) \
    while ( READ_TIMOUTEN(base) );


#define WAIT_TIMOUTEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIMOUTEN(base) && (--timeout > 0) );


#define WAIT_TIMOUTEN_HIGH(base) \
    while (! READ_TIMOUTEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Timeoutr
//
// Return the value of register TIMEOUTR
//
// Notes : Register Status register 1 (TIMEOUTR) at the offset 0x14, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Idle clock timeout detection 
    // 
#define TIDLE_MASK 0x1000U
#define TIDLE_OFFSET 12
#define TIDLE_START_BIT 12
#define TIDLE_WIDTH 1



typedef enum tidle {
    TIDLE_0,
    TIDLE_1
} TIDLE_T ;
#define WRITE_TIDLE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~TIDLE_MASK) | ((val << TIDLE_START_BIT) & TIDLE_MASK )); \
   } 

#define ENABLE_TIDLE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  TIDLE_MASK ); \
   } 

#define DISABLE_TIDLE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x14 ); \
     WRITE_REGISTER_ULONG( base + 0x14, val & ~TIDLE_MASK ); \
   } 

#define READ_TIDLE(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & TIDLE_MASK) >> TIDLE_START_BIT )

#define WHEN_TIDLE_HIGH(base) \
     if ( READ_TIDLE(base) )


#define UNLESS_TIDLE_HIGH(base) \
     if (! READ_TIDLE(base) )


#define WAIT_TIDLE_LOW(base) \
    while ( READ_TIDLE(base) );


#define WAIT_TIDLE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIDLE(base) && (--timeout > 0) );


#define WAIT_TIDLE_HIGH(base) \
    while (! READ_TIDLE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Timeoutr
//
// Return the value of register TIMEOUTR
//
// Notes : Register Status register 1 (TIMEOUTR) at the offset 0x14, Bits 0:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Bus timeout A 
    // 
#define TIMEOUTA_MASK 0xFFFU
#define TIMEOUTA_OFFSET 11
#define TIMEOUTA_START_BIT 0
#define TIMEOUTA_WIDTH 12



typedef enum timeouta {
    TIMEOUTA_0,
    TIMEOUTA_1
} TIMEOUTA_T ;
#define READ_TIMEOUTA(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & TIMEOUTA_MASK) >> TIMEOUTA_START_BIT )

#define WRITE_TIMEOUTA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~TIMEOUTA_MASK) | ((val << TIMEOUTA_START_BIT) & TIMEOUTA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : TXE
//
// Return the value of register Isr
//
// Notes : Transmit data register empty (transmitters) 
//        (ISR) at the offset 0x18, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TXE_MASK) | ((val << TXE_START_BIT) & TXE_MASK )); \
   } 

#define ENABLE_TXE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  TXE_MASK ); \
   } 

#define DISABLE_TXE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~TXE_MASK ); \
   } 

#define READ_TXE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TXE_MASK) >> TXE_START_BIT )

#define WHEN_TXE_HIGH(base) \
     if ( READ_TXE(base) )


#define UNLESS_TXE_HIGH(base) \
     if (! READ_TXE(base) )


#define WAIT_TXE_LOW(base) \
    while ( READ_TXE(base) );


#define WAIT_TXE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXE(base) && (--timeout > 0) );


#define WAIT_TXE_HIGH(base) \
    while (! READ_TXE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXIS
//
// Return the value of register Isr
//
// Notes : Transmit interrupt status (transmitters) 
//        (ISR) at the offset 0x18, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TXIS_MASK) | ((val << TXIS_START_BIT) & TXIS_MASK )); \
   } 

#define ENABLE_TXIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  TXIS_MASK ); \
   } 

#define DISABLE_TXIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~TXIS_MASK ); \
   } 

#define READ_TXIS(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TXIS_MASK) >> TXIS_START_BIT )

#define WHEN_TXIS_HIGH(base) \
     if ( READ_TXIS(base) )


#define UNLESS_TXIS_HIGH(base) \
     if (! READ_TXIS(base) )


#define WAIT_TXIS_LOW(base) \
    while ( READ_TXIS(base) );


#define WAIT_TXIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXIS(base) && (--timeout > 0) );


#define WAIT_TXIS_HIGH(base) \
    while (! READ_TXIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXNE
//
// Return the value of register Isr
//
// Notes : Receive data register not empty (receivers) 
//        (ISR) at the offset 0x18, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXNE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~RXNE_MASK) | ((val << RXNE_START_BIT) & RXNE_MASK )); \
   } 

#define ENABLE_RXNE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  RXNE_MASK ); \
   } 

#define DISABLE_RXNE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~RXNE_MASK ); \
   } 

#define READ_RXNE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & RXNE_MASK) >> RXNE_START_BIT )

#define WHEN_RXNE_HIGH(base) \
     if ( READ_RXNE(base) )


#define UNLESS_RXNE_HIGH(base) \
     if (! READ_RXNE(base) )


#define WAIT_RXNE_LOW(base) \
    while ( READ_RXNE(base) );


#define WAIT_RXNE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXNE(base) && (--timeout > 0) );


#define WAIT_RXNE_HIGH(base) \
    while (! READ_RXNE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ADDR
//
// Return the value of register Isr
//
// Notes : Address matched (slave mode) 
//        (ISR) at the offset 0x18, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ADDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ADDR_MASK) | ((val << ADDR_START_BIT) & ADDR_MASK )); \
   } 

#define ENABLE_ADDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  ADDR_MASK ); \
   } 

#define DISABLE_ADDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~ADDR_MASK ); \
   } 

#define READ_ADDR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ADDR_MASK) >> ADDR_START_BIT )

#define WHEN_ADDR_HIGH(base) \
     if ( READ_ADDR(base) )


#define UNLESS_ADDR_HIGH(base) \
     if (! READ_ADDR(base) )


#define WAIT_ADDR_LOW(base) \
    while ( READ_ADDR(base) );


#define WAIT_ADDR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ADDR(base) && (--timeout > 0) );


#define WAIT_ADDR_HIGH(base) \
    while (! READ_ADDR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : NACKF
//
// Return the value of register Isr
//
// Notes : Not acknowledge received flag 
//        (ISR) at the offset 0x18, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_NACKF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~NACKF_MASK) | ((val << NACKF_START_BIT) & NACKF_MASK )); \
   } 

#define ENABLE_NACKF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  NACKF_MASK ); \
   } 

#define DISABLE_NACKF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~NACKF_MASK ); \
   } 

#define READ_NACKF(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & NACKF_MASK) >> NACKF_START_BIT )

#define WHEN_NACKF_HIGH(base) \
     if ( READ_NACKF(base) )


#define UNLESS_NACKF_HIGH(base) \
     if (! READ_NACKF(base) )


#define WAIT_NACKF_LOW(base) \
    while ( READ_NACKF(base) );


#define WAIT_NACKF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NACKF(base) && (--timeout > 0) );


#define WAIT_NACKF_HIGH(base) \
    while (! READ_NACKF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : STOPF
//
// Return the value of register Isr
//
// Notes : Stop detection flag 
//        (ISR) at the offset 0x18, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STOPF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~STOPF_MASK) | ((val << STOPF_START_BIT) & STOPF_MASK )); \
   } 

#define ENABLE_STOPF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  STOPF_MASK ); \
   } 

#define DISABLE_STOPF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~STOPF_MASK ); \
   } 

#define READ_STOPF(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & STOPF_MASK) >> STOPF_START_BIT )

#define WHEN_STOPF_HIGH(base) \
     if ( READ_STOPF(base) )


#define UNLESS_STOPF_HIGH(base) \
     if (! READ_STOPF(base) )


#define WAIT_STOPF_LOW(base) \
    while ( READ_STOPF(base) );


#define WAIT_STOPF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_STOPF(base) && (--timeout > 0) );


#define WAIT_STOPF_HIGH(base) \
    while (! READ_STOPF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TC
//
// Return the value of register Isr
//
// Notes : Transfer Complete (master mode) 
//        (ISR) at the offset 0x18, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TC_MASK) | ((val << TC_START_BIT) & TC_MASK )); \
   } 

#define ENABLE_TC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  TC_MASK ); \
   } 

#define DISABLE_TC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~TC_MASK ); \
   } 

#define READ_TC(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TC_MASK) >> TC_START_BIT )

#define WHEN_TC_HIGH(base) \
     if ( READ_TC(base) )


#define UNLESS_TC_HIGH(base) \
     if (! READ_TC(base) )


#define WAIT_TC_LOW(base) \
    while ( READ_TC(base) );


#define WAIT_TC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TC(base) && (--timeout > 0) );


#define WAIT_TC_HIGH(base) \
    while (! READ_TC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TCR
//
// Return the value of register Isr
//
// Notes : Transfer Complete Reload 
//        (ISR) at the offset 0x18, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TCR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TCR_MASK) | ((val << TCR_START_BIT) & TCR_MASK )); \
   } 

#define ENABLE_TCR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  TCR_MASK ); \
   } 

#define DISABLE_TCR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~TCR_MASK ); \
   } 

#define READ_TCR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TCR_MASK) >> TCR_START_BIT )

#define WHEN_TCR_HIGH(base) \
     if ( READ_TCR(base) )


#define UNLESS_TCR_HIGH(base) \
     if (! READ_TCR(base) )


#define WAIT_TCR_LOW(base) \
    while ( READ_TCR(base) );


#define WAIT_TCR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCR(base) && (--timeout > 0) );


#define WAIT_TCR_HIGH(base) \
    while (! READ_TCR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : BERR
//
// Return the value of register Isr
//
// Notes : Bus error 
//        (ISR) at the offset 0x18, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BERR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~BERR_MASK) | ((val << BERR_START_BIT) & BERR_MASK )); \
   } 

#define ENABLE_BERR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  BERR_MASK ); \
   } 

#define DISABLE_BERR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~BERR_MASK ); \
   } 

#define READ_BERR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & BERR_MASK) >> BERR_START_BIT )

#define WHEN_BERR_HIGH(base) \
     if ( READ_BERR(base) )


#define UNLESS_BERR_HIGH(base) \
     if (! READ_BERR(base) )


#define WAIT_BERR_LOW(base) \
    while ( READ_BERR(base) );


#define WAIT_BERR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_BERR(base) && (--timeout > 0) );


#define WAIT_BERR_HIGH(base) \
    while (! READ_BERR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARLO
//
// Return the value of register Isr
//
// Notes : Arbitration lost 
//        (ISR) at the offset 0x18, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARLO(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ARLO_MASK) | ((val << ARLO_START_BIT) & ARLO_MASK )); \
   } 

#define ENABLE_ARLO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  ARLO_MASK ); \
   } 

#define DISABLE_ARLO(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~ARLO_MASK ); \
   } 

#define READ_ARLO(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ARLO_MASK) >> ARLO_START_BIT )

#define WHEN_ARLO_HIGH(base) \
     if ( READ_ARLO(base) )


#define UNLESS_ARLO_HIGH(base) \
     if (! READ_ARLO(base) )


#define WAIT_ARLO_LOW(base) \
    while ( READ_ARLO(base) );


#define WAIT_ARLO_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ARLO(base) && (--timeout > 0) );


#define WAIT_ARLO_HIGH(base) \
    while (! READ_ARLO(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR
//
// Return the value of register Isr
//
// Notes : Overrun/Underrun (slave mode) 
//        (ISR) at the offset 0x18, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~OVR_MASK) | ((val << OVR_START_BIT) & OVR_MASK )); \
   } 

#define ENABLE_OVR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  OVR_MASK ); \
   } 

#define DISABLE_OVR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~OVR_MASK ); \
   } 

#define READ_OVR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & OVR_MASK) >> OVR_START_BIT )

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
// Function : PECERR
//
// Return the value of register Isr
//
// Notes : PEC Error in reception 
//        (ISR) at the offset 0x18, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PECERR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~PECERR_MASK) | ((val << PECERR_START_BIT) & PECERR_MASK )); \
   } 

#define ENABLE_PECERR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  PECERR_MASK ); \
   } 

#define DISABLE_PECERR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~PECERR_MASK ); \
   } 

#define READ_PECERR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & PECERR_MASK) >> PECERR_START_BIT )

#define WHEN_PECERR_HIGH(base) \
     if ( READ_PECERR(base) )


#define UNLESS_PECERR_HIGH(base) \
     if (! READ_PECERR(base) )


#define WAIT_PECERR_LOW(base) \
    while ( READ_PECERR(base) );


#define WAIT_PECERR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PECERR(base) && (--timeout > 0) );


#define WAIT_PECERR_HIGH(base) \
    while (! READ_PECERR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TIMEOUT
//
// Return the value of register Isr
//
// Notes : Timeout or t_low detection flag 
//        (ISR) at the offset 0x18, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TIMEOUT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TIMEOUT_MASK) | ((val << TIMEOUT_START_BIT) & TIMEOUT_MASK )); \
   } 

#define ENABLE_TIMEOUT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  TIMEOUT_MASK ); \
   } 

#define DISABLE_TIMEOUT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~TIMEOUT_MASK ); \
   } 

#define READ_TIMEOUT(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TIMEOUT_MASK) >> TIMEOUT_START_BIT )

#define WHEN_TIMEOUT_HIGH(base) \
     if ( READ_TIMEOUT(base) )


#define UNLESS_TIMEOUT_HIGH(base) \
     if (! READ_TIMEOUT(base) )


#define WAIT_TIMEOUT_LOW(base) \
    while ( READ_TIMEOUT(base) );


#define WAIT_TIMEOUT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIMEOUT(base) && (--timeout > 0) );


#define WAIT_TIMEOUT_HIGH(base) \
    while (! READ_TIMEOUT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALERT
//
// Return the value of register Isr
//
// Notes : SMBus alert 
//        (ISR) at the offset 0x18, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALERT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ALERT_MASK) | ((val << ALERT_START_BIT) & ALERT_MASK )); \
   } 

#define ENABLE_ALERT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  ALERT_MASK ); \
   } 

#define DISABLE_ALERT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~ALERT_MASK ); \
   } 

#define READ_ALERT(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ALERT_MASK) >> ALERT_START_BIT )

#define WHEN_ALERT_HIGH(base) \
     if ( READ_ALERT(base) )


#define UNLESS_ALERT_HIGH(base) \
     if (! READ_ALERT(base) )


#define WAIT_ALERT_LOW(base) \
    while ( READ_ALERT(base) );


#define WAIT_ALERT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ALERT(base) && (--timeout > 0) );


#define WAIT_ALERT_HIGH(base) \
    while (! READ_ALERT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : BUSY
//
// Return the value of register Isr
//
// Notes : Bus busy 
//        (ISR) at the offset 0x18, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BUSY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  BUSY_MASK ); \
   } 

#define DISABLE_BUSY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & BUSY_MASK) >> BUSY_START_BIT )

#define WHEN_BUSY_HIGH(base) \
     if ( READ_BUSY(base) )


#define UNLESS_BUSY_HIGH(base) \
     if (! READ_BUSY(base) )


#define WAIT_BUSY_LOW(base) \
    while ( READ_BUSY(base) );


#define WAIT_BUSY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_BUSY(base) && (--timeout > 0) );


#define WAIT_BUSY_HIGH(base) \
    while (! READ_BUSY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DIR
//
// Return the value of register Isr
//
// Notes : Transfer direction (Slave mode) 
//        (ISR) at the offset 0x18, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DIR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~DIR_MASK) | ((val << DIR_START_BIT) & DIR_MASK )); \
   } 

#define ENABLE_DIR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  DIR_MASK ); \
   } 

#define DISABLE_DIR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~DIR_MASK ); \
   } 

#define READ_DIR(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & DIR_MASK) >> DIR_START_BIT )

#define WHEN_DIR_HIGH(base) \
     if ( READ_DIR(base) )


#define UNLESS_DIR_HIGH(base) \
     if (! READ_DIR(base) )


#define WAIT_DIR_LOW(base) \
    while ( READ_DIR(base) );


#define WAIT_DIR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DIR(base) && (--timeout > 0) );


#define WAIT_DIR_HIGH(base) \
    while (! READ_DIR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ADDCODE
//
// Return the value of register Isr
//
// Notes : Address match code (Slave mode) 
//        (ISR) at the offset 0x18, Bits 17:23
//
/////////////////////////////////////////////////////////////////////////
#define READ_ADDCODE(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ADDCODE_MASK) >> ADDCODE_START_BIT )

#define WRITE_ADDCODE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ADDCODE_MASK) | ((val << ADDCODE_START_BIT) & ADDCODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

/////////////////////////////////////////////////////////////////////////
//
// Function : ADDRCF
//
// Return the value of register Icr
//
// Notes : Address Matched flag clear 
//        (ICR) at the offset 0x1C, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ADDRCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~ADDRCF_MASK) | ((val << ADDRCF_START_BIT) & ADDRCF_MASK )); \
   } 

#define ENABLE_ADDRCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  ADDRCF_MASK ); \
   } 

#define DISABLE_ADDRCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~ADDRCF_MASK ); \
   } 

#define READ_ADDRCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & ADDRCF_MASK) >> ADDRCF_START_BIT )

#define WHEN_ADDRCF_HIGH(base) \
     if ( READ_ADDRCF(base) )


#define UNLESS_ADDRCF_HIGH(base) \
     if (! READ_ADDRCF(base) )


#define WAIT_ADDRCF_LOW(base) \
    while ( READ_ADDRCF(base) );


#define WAIT_ADDRCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ADDRCF(base) && (--timeout > 0) );


#define WAIT_ADDRCF_HIGH(base) \
    while (! READ_ADDRCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : NACKCF
//
// Return the value of register Icr
//
// Notes : Not Acknowledge flag clear 
//        (ICR) at the offset 0x1C, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_NACKCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~NACKCF_MASK) | ((val << NACKCF_START_BIT) & NACKCF_MASK )); \
   } 

#define ENABLE_NACKCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  NACKCF_MASK ); \
   } 

#define DISABLE_NACKCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~NACKCF_MASK ); \
   } 

#define READ_NACKCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & NACKCF_MASK) >> NACKCF_START_BIT )

#define WHEN_NACKCF_HIGH(base) \
     if ( READ_NACKCF(base) )


#define UNLESS_NACKCF_HIGH(base) \
     if (! READ_NACKCF(base) )


#define WAIT_NACKCF_LOW(base) \
    while ( READ_NACKCF(base) );


#define WAIT_NACKCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NACKCF(base) && (--timeout > 0) );


#define WAIT_NACKCF_HIGH(base) \
    while (! READ_NACKCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : STOPCF
//
// Return the value of register Icr
//
// Notes : Stop detection flag clear 
//        (ICR) at the offset 0x1C, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_STOPCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~STOPCF_MASK) | ((val << STOPCF_START_BIT) & STOPCF_MASK )); \
   } 

#define ENABLE_STOPCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  STOPCF_MASK ); \
   } 

#define DISABLE_STOPCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~STOPCF_MASK ); \
   } 

#define READ_STOPCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & STOPCF_MASK) >> STOPCF_START_BIT )

#define WHEN_STOPCF_HIGH(base) \
     if ( READ_STOPCF(base) )


#define UNLESS_STOPCF_HIGH(base) \
     if (! READ_STOPCF(base) )


#define WAIT_STOPCF_LOW(base) \
    while ( READ_STOPCF(base) );


#define WAIT_STOPCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_STOPCF(base) && (--timeout > 0) );


#define WAIT_STOPCF_HIGH(base) \
    while (! READ_STOPCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : BERRCF
//
// Return the value of register Icr
//
// Notes : Bus error flag clear 
//        (ICR) at the offset 0x1C, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BERRCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~BERRCF_MASK) | ((val << BERRCF_START_BIT) & BERRCF_MASK )); \
   } 

#define ENABLE_BERRCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  BERRCF_MASK ); \
   } 

#define DISABLE_BERRCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~BERRCF_MASK ); \
   } 

#define READ_BERRCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & BERRCF_MASK) >> BERRCF_START_BIT )

#define WHEN_BERRCF_HIGH(base) \
     if ( READ_BERRCF(base) )


#define UNLESS_BERRCF_HIGH(base) \
     if (! READ_BERRCF(base) )


#define WAIT_BERRCF_LOW(base) \
    while ( READ_BERRCF(base) );


#define WAIT_BERRCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_BERRCF(base) && (--timeout > 0) );


#define WAIT_BERRCF_HIGH(base) \
    while (! READ_BERRCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ARLOCF
//
// Return the value of register Icr
//
// Notes : Arbitration lost flag clear 
//        (ICR) at the offset 0x1C, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ARLOCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~ARLOCF_MASK) | ((val << ARLOCF_START_BIT) & ARLOCF_MASK )); \
   } 

#define ENABLE_ARLOCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  ARLOCF_MASK ); \
   } 

#define DISABLE_ARLOCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~ARLOCF_MASK ); \
   } 

#define READ_ARLOCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & ARLOCF_MASK) >> ARLOCF_START_BIT )

#define WHEN_ARLOCF_HIGH(base) \
     if ( READ_ARLOCF(base) )


#define UNLESS_ARLOCF_HIGH(base) \
     if (! READ_ARLOCF(base) )


#define WAIT_ARLOCF_LOW(base) \
    while ( READ_ARLOCF(base) );


#define WAIT_ARLOCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ARLOCF(base) && (--timeout > 0) );


#define WAIT_ARLOCF_HIGH(base) \
    while (! READ_ARLOCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVRCF
//
// Return the value of register Icr
//
// Notes : Overrun/Underrun flag clear 
//        (ICR) at the offset 0x1C, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVRCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~OVRCF_MASK) | ((val << OVRCF_START_BIT) & OVRCF_MASK )); \
   } 

#define ENABLE_OVRCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  OVRCF_MASK ); \
   } 

#define DISABLE_OVRCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~OVRCF_MASK ); \
   } 

#define READ_OVRCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & OVRCF_MASK) >> OVRCF_START_BIT )

#define WHEN_OVRCF_HIGH(base) \
     if ( READ_OVRCF(base) )


#define UNLESS_OVRCF_HIGH(base) \
     if (! READ_OVRCF(base) )


#define WAIT_OVRCF_LOW(base) \
    while ( READ_OVRCF(base) );


#define WAIT_OVRCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRCF(base) && (--timeout > 0) );


#define WAIT_OVRCF_HIGH(base) \
    while (! READ_OVRCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : PECCF
//
// Return the value of register Icr
//
// Notes : PEC Error flag clear 
//        (ICR) at the offset 0x1C, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_PECCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~PECCF_MASK) | ((val << PECCF_START_BIT) & PECCF_MASK )); \
   } 

#define ENABLE_PECCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  PECCF_MASK ); \
   } 

#define DISABLE_PECCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~PECCF_MASK ); \
   } 

#define READ_PECCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & PECCF_MASK) >> PECCF_START_BIT )

#define WHEN_PECCF_HIGH(base) \
     if ( READ_PECCF(base) )


#define UNLESS_PECCF_HIGH(base) \
     if (! READ_PECCF(base) )


#define WAIT_PECCF_LOW(base) \
    while ( READ_PECCF(base) );


#define WAIT_PECCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PECCF(base) && (--timeout > 0) );


#define WAIT_PECCF_HIGH(base) \
    while (! READ_PECCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TIMOUTCF
//
// Return the value of register Icr
//
// Notes : Timeout detection flag clear 
//        (ICR) at the offset 0x1C, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TIMOUTCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~TIMOUTCF_MASK) | ((val << TIMOUTCF_START_BIT) & TIMOUTCF_MASK )); \
   } 

#define ENABLE_TIMOUTCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  TIMOUTCF_MASK ); \
   } 

#define DISABLE_TIMOUTCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~TIMOUTCF_MASK ); \
   } 

#define READ_TIMOUTCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & TIMOUTCF_MASK) >> TIMOUTCF_START_BIT )

#define WHEN_TIMOUTCF_HIGH(base) \
     if ( READ_TIMOUTCF(base) )


#define UNLESS_TIMOUTCF_HIGH(base) \
     if (! READ_TIMOUTCF(base) )


#define WAIT_TIMOUTCF_LOW(base) \
    while ( READ_TIMOUTCF(base) );


#define WAIT_TIMOUTCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIMOUTCF(base) && (--timeout > 0) );


#define WAIT_TIMOUTCF_HIGH(base) \
    while (! READ_TIMOUTCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALERTCF
//
// Return the value of register Icr
//
// Notes : Alert flag clear 
//        (ICR) at the offset 0x1C, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALERTCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~ALERTCF_MASK) | ((val << ALERTCF_START_BIT) & ALERTCF_MASK )); \
   } 

#define ENABLE_ALERTCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  ALERTCF_MASK ); \
   } 

#define DISABLE_ALERTCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~ALERTCF_MASK ); \
   } 

#define READ_ALERTCF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & ALERTCF_MASK) >> ALERTCF_START_BIT )

#define WHEN_ALERTCF_HIGH(base) \
     if ( READ_ALERTCF(base) )


#define UNLESS_ALERTCF_HIGH(base) \
     if (! READ_ALERTCF(base) )


#define WAIT_ALERTCF_LOW(base) \
    while ( READ_ALERTCF(base) );


#define WAIT_ALERTCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ALERTCF(base) && (--timeout > 0) );


#define WAIT_ALERTCF_HIGH(base) \
    while (! READ_ALERTCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Pecr
//
// Return the value of register PECR
//
// Notes : Register Pecr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_PECR( base ) \
     READ_REGISTER_ULONG( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Pecr
//
// Return the value of register PECR
//
// Notes : Register PEC register (PECR) at the offset 0x20, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Packet error checking register 
    // 
#define PEC_MASK 0xFFU
#define PEC_OFFSET 7
#define PEC_START_BIT 0
#define PEC_WIDTH 8


#define PECR_REG 0x20

typedef enum pec {
    PEC_0,
    PEC_1
} PEC_T ;
#define READ_PEC(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & PEC_MASK) >> PEC_START_BIT )

#define WRITE_PEC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~PEC_MASK) | ((val << PEC_START_BIT) & PEC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rxdr
//
// Return the value of register RXDR
//
// Notes : Register Rxdr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RXDR( base ) \
     READ_REGISTER_ULONG( base + 0x24) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rxdr
//
// Return the value of register RXDR
//
// Notes : Register Receive data register (RXDR) at the offset 0x24, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bit receive data 
    // 
#define RXDATA_MASK 0xFFU
#define RXDATA_OFFSET 7
#define RXDATA_START_BIT 0
#define RXDATA_WIDTH 8


#define RXDR_REG 0x24

typedef enum rxdata {
    RXDATA_0,
    RXDATA_1
} RXDATA_T ;
#define READ_RXDATA(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & RXDATA_MASK) >> RXDATA_START_BIT )

#define WRITE_RXDATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~RXDATA_MASK) | ((val << RXDATA_START_BIT) & RXDATA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Txdr
//
// Return the value of register TXDR
//
// Notes : Register Txdr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TXDR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x28, val)

#define SET_BITS_TXDR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_TXDR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_TXDR( base ) \
     READ_REGISTER_ULONG( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Txdr
//
// Return the value of register TXDR
//
// Notes : Register Transmit data register (TXDR) at the offset 0x28, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bit transmit data 
    // 
#define TXDATA_MASK 0xFFU
#define TXDATA_OFFSET 7
#define TXDATA_START_BIT 0
#define TXDATA_WIDTH 8


#define TXDR_REG 0x28

typedef enum txdata {
    TXDATA_0,
    TXDATA_1
} TXDATA_T ;
#define READ_TXDATA(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & TXDATA_MASK) >> TXDATA_START_BIT )

#define WRITE_TXDATA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~TXDATA_MASK) | ((val << TXDATA_START_BIT) & TXDATA_MASK )); \
   } 

