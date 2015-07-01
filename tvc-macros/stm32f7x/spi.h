/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/spi.h
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
 
#define NB_DEVICE_SPI 6
#define SPI1 0x40013000
#define SPI6 0x40015400
#define SPI5 0x40015000
#define SPI4 0x40013400
#define SPI3 0x40003C00
#define SPI2 0x40003800
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
// Function : CPHA
//
// Return the value of register Cr1
//
// Notes : Clock phase 
//        (CR1) at the offset 0x0, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CPHA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CPHA_MASK) | ((val << CPHA_START_BIT) & CPHA_MASK )); \
   } 

#define ENABLE_CPHA(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  CPHA_MASK ); \
   } 

#define DISABLE_CPHA(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~CPHA_MASK ); \
   } 

#define READ_CPHA(base) \
    ((READ_REGISTER_ULONG(base ) & CPHA_MASK) >> CPHA_START_BIT )

#define WHEN_CPHA_HIGH(base) \
     if ( READ_CPHA(base) )


#define UNLESS_CPHA_HIGH(base) \
     if (! READ_CPHA(base) )


#define WAIT_CPHA_LOW(base) \
    while ( READ_CPHA(base) );


#define WAIT_CPHA_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CPHA(base) && (--timeout > 0) );


#define WAIT_CPHA_HIGH(base) \
    while (! READ_CPHA(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CPOL
//
// Return the value of register Cr1
//
// Notes : Clock polarity 
//        (CR1) at the offset 0x0, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CPOL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CPOL_MASK) | ((val << CPOL_START_BIT) & CPOL_MASK )); \
   } 

#define ENABLE_CPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  CPOL_MASK ); \
   } 

#define DISABLE_CPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~CPOL_MASK ); \
   } 

#define READ_CPOL(base) \
    ((READ_REGISTER_ULONG(base ) & CPOL_MASK) >> CPOL_START_BIT )

#define WHEN_CPOL_HIGH(base) \
     if ( READ_CPOL(base) )


#define UNLESS_CPOL_HIGH(base) \
     if (! READ_CPOL(base) )


#define WAIT_CPOL_LOW(base) \
    while ( READ_CPOL(base) );


#define WAIT_CPOL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CPOL(base) && (--timeout > 0) );


#define WAIT_CPOL_HIGH(base) \
    while (! READ_CPOL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : MSTR
//
// Return the value of register Cr1
//
// Notes : Master selection 
//        (CR1) at the offset 0x0, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MSTR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~MSTR_MASK) | ((val << MSTR_START_BIT) & MSTR_MASK )); \
   } 

#define ENABLE_MSTR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  MSTR_MASK ); \
   } 

#define DISABLE_MSTR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~MSTR_MASK ); \
   } 

#define READ_MSTR(base) \
    ((READ_REGISTER_ULONG(base ) & MSTR_MASK) >> MSTR_START_BIT )

#define WHEN_MSTR_HIGH(base) \
     if ( READ_MSTR(base) )


#define UNLESS_MSTR_HIGH(base) \
     if (! READ_MSTR(base) )


#define WAIT_MSTR_LOW(base) \
    while ( READ_MSTR(base) );


#define WAIT_MSTR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MSTR(base) && (--timeout > 0) );


#define WAIT_MSTR_HIGH(base) \
    while (! READ_MSTR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : BR
//
// Return the value of register Cr1
//
// Notes : Baud rate control 
//        (CR1) at the offset 0x0, Bits 3:5
//
/////////////////////////////////////////////////////////////////////////
#define READ_BR(base) \
    ((READ_REGISTER_ULONG(base ) & BR_MASK) >> BR_START_BIT )

#define WRITE_BR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~BR_MASK) | ((val << BR_START_BIT) & BR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : SPE
//
// Return the value of register Cr1
//
// Notes : SPI enable 
//        (CR1) at the offset 0x0, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SPE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SPE_MASK) | ((val << SPE_START_BIT) & SPE_MASK )); \
   } 

#define ENABLE_SPE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  SPE_MASK ); \
   } 

#define DISABLE_SPE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~SPE_MASK ); \
   } 

#define READ_SPE(base) \
    ((READ_REGISTER_ULONG(base ) & SPE_MASK) >> SPE_START_BIT )

#define WHEN_SPE_HIGH(base) \
     if ( READ_SPE(base) )


#define UNLESS_SPE_HIGH(base) \
     if (! READ_SPE(base) )


#define WAIT_SPE_LOW(base) \
    while ( READ_SPE(base) );


#define WAIT_SPE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SPE(base) && (--timeout > 0) );


#define WAIT_SPE_HIGH(base) \
    while (! READ_SPE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : LSBFIRST
//
// Return the value of register Cr1
//
// Notes : Frame format 
//        (CR1) at the offset 0x0, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_LSBFIRST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~LSBFIRST_MASK) | ((val << LSBFIRST_START_BIT) & LSBFIRST_MASK )); \
   } 

#define ENABLE_LSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  LSBFIRST_MASK ); \
   } 

#define DISABLE_LSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~LSBFIRST_MASK ); \
   } 

#define READ_LSBFIRST(base) \
    ((READ_REGISTER_ULONG(base ) & LSBFIRST_MASK) >> LSBFIRST_START_BIT )

#define WHEN_LSBFIRST_HIGH(base) \
     if ( READ_LSBFIRST(base) )


#define UNLESS_LSBFIRST_HIGH(base) \
     if (! READ_LSBFIRST(base) )


#define WAIT_LSBFIRST_LOW(base) \
    while ( READ_LSBFIRST(base) );


#define WAIT_LSBFIRST_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LSBFIRST(base) && (--timeout > 0) );


#define WAIT_LSBFIRST_HIGH(base) \
    while (! READ_LSBFIRST(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : SSI
//
// Return the value of register Cr1
//
// Notes : Internal slave select 
//        (CR1) at the offset 0x0, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SSI(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SSI_MASK) | ((val << SSI_START_BIT) & SSI_MASK )); \
   } 

#define ENABLE_SSI(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  SSI_MASK ); \
   } 

#define DISABLE_SSI(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~SSI_MASK ); \
   } 

#define READ_SSI(base) \
    ((READ_REGISTER_ULONG(base ) & SSI_MASK) >> SSI_START_BIT )

#define WHEN_SSI_HIGH(base) \
     if ( READ_SSI(base) )


#define UNLESS_SSI_HIGH(base) \
     if (! READ_SSI(base) )


#define WAIT_SSI_LOW(base) \
    while ( READ_SSI(base) );


#define WAIT_SSI_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SSI(base) && (--timeout > 0) );


#define WAIT_SSI_HIGH(base) \
    while (! READ_SSI(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : SSM
//
// Return the value of register Cr1
//
// Notes : Software slave management 
//        (CR1) at the offset 0x0, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SSM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~SSM_MASK) | ((val << SSM_START_BIT) & SSM_MASK )); \
   } 

#define ENABLE_SSM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  SSM_MASK ); \
   } 

#define DISABLE_SSM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~SSM_MASK ); \
   } 

#define READ_SSM(base) \
    ((READ_REGISTER_ULONG(base ) & SSM_MASK) >> SSM_START_BIT )

#define WHEN_SSM_HIGH(base) \
     if ( READ_SSM(base) )


#define UNLESS_SSM_HIGH(base) \
     if (! READ_SSM(base) )


#define WAIT_SSM_LOW(base) \
    while ( READ_SSM(base) );


#define WAIT_SSM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SSM(base) && (--timeout > 0) );


#define WAIT_SSM_HIGH(base) \
    while (! READ_SSM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : RXONLY
//
// Return the value of register Cr1
//
// Notes : Receive only 
//        (CR1) at the offset 0x0, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXONLY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~RXONLY_MASK) | ((val << RXONLY_START_BIT) & RXONLY_MASK )); \
   } 

#define ENABLE_RXONLY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  RXONLY_MASK ); \
   } 

#define DISABLE_RXONLY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~RXONLY_MASK ); \
   } 

#define READ_RXONLY(base) \
    ((READ_REGISTER_ULONG(base ) & RXONLY_MASK) >> RXONLY_START_BIT )

#define WHEN_RXONLY_HIGH(base) \
     if ( READ_RXONLY(base) )


#define UNLESS_RXONLY_HIGH(base) \
     if (! READ_RXONLY(base) )


#define WAIT_RXONLY_LOW(base) \
    while ( READ_RXONLY(base) );


#define WAIT_RXONLY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXONLY(base) && (--timeout > 0) );


#define WAIT_RXONLY_HIGH(base) \
    while (! READ_RXONLY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : DFF
//
// Return the value of register Cr1
//
// Notes : Data frame format 
//        (CR1) at the offset 0x0, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_DFF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DFF_MASK) | ((val << DFF_START_BIT) & DFF_MASK )); \
   } 

#define ENABLE_DFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DFF_MASK ); \
   } 

#define DISABLE_DFF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DFF_MASK ); \
   } 

#define READ_DFF(base) \
    ((READ_REGISTER_ULONG(base ) & DFF_MASK) >> DFF_START_BIT )

#define WHEN_DFF_HIGH(base) \
     if ( READ_DFF(base) )


#define UNLESS_DFF_HIGH(base) \
     if (! READ_DFF(base) )


#define WAIT_DFF_LOW(base) \
    while ( READ_DFF(base) );


#define WAIT_DFF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DFF(base) && (--timeout > 0) );


#define WAIT_DFF_HIGH(base) \
    while (! READ_DFF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CRCNEXT
//
// Return the value of register Cr1
//
// Notes : CRC transfer next 
//        (CR1) at the offset 0x0, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CRCNEXT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CRCNEXT_MASK) | ((val << CRCNEXT_START_BIT) & CRCNEXT_MASK )); \
   } 

#define ENABLE_CRCNEXT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  CRCNEXT_MASK ); \
   } 

#define DISABLE_CRCNEXT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~CRCNEXT_MASK ); \
   } 

#define READ_CRCNEXT(base) \
    ((READ_REGISTER_ULONG(base ) & CRCNEXT_MASK) >> CRCNEXT_START_BIT )

#define WHEN_CRCNEXT_HIGH(base) \
     if ( READ_CRCNEXT(base) )


#define UNLESS_CRCNEXT_HIGH(base) \
     if (! READ_CRCNEXT(base) )


#define WAIT_CRCNEXT_LOW(base) \
    while ( READ_CRCNEXT(base) );


#define WAIT_CRCNEXT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CRCNEXT(base) && (--timeout > 0) );


#define WAIT_CRCNEXT_HIGH(base) \
    while (! READ_CRCNEXT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CRCEN
//
// Return the value of register Cr1
//
// Notes : Hardware CRC calculation enable 
//        (CR1) at the offset 0x0, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CRCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CRCEN_MASK) | ((val << CRCEN_START_BIT) & CRCEN_MASK )); \
   } 

#define ENABLE_CRCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  CRCEN_MASK ); \
   } 

#define DISABLE_CRCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~CRCEN_MASK ); \
   } 

#define READ_CRCEN(base) \
    ((READ_REGISTER_ULONG(base ) & CRCEN_MASK) >> CRCEN_START_BIT )

#define WHEN_CRCEN_HIGH(base) \
     if ( READ_CRCEN(base) )


#define UNLESS_CRCEN_HIGH(base) \
     if (! READ_CRCEN(base) )


#define WAIT_CRCEN_LOW(base) \
    while ( READ_CRCEN(base) );


#define WAIT_CRCEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CRCEN(base) && (--timeout > 0) );


#define WAIT_CRCEN_HIGH(base) \
    while (! READ_CRCEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : BIDIOE
//
// Return the value of register Cr1
//
// Notes : Output enable in bidirectional mode 
//        (CR1) at the offset 0x0, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BIDIOE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~BIDIOE_MASK) | ((val << BIDIOE_START_BIT) & BIDIOE_MASK )); \
   } 

#define ENABLE_BIDIOE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  BIDIOE_MASK ); \
   } 

#define DISABLE_BIDIOE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~BIDIOE_MASK ); \
   } 

#define READ_BIDIOE(base) \
    ((READ_REGISTER_ULONG(base ) & BIDIOE_MASK) >> BIDIOE_START_BIT )

#define WHEN_BIDIOE_HIGH(base) \
     if ( READ_BIDIOE(base) )


#define UNLESS_BIDIOE_HIGH(base) \
     if (! READ_BIDIOE(base) )


#define WAIT_BIDIOE_LOW(base) \
    while ( READ_BIDIOE(base) );


#define WAIT_BIDIOE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_BIDIOE(base) && (--timeout > 0) );


#define WAIT_BIDIOE_HIGH(base) \
    while (! READ_BIDIOE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : BIDIMODE
//
// Return the value of register Cr1
//
// Notes : Bidirectional data mode enable 
//        (CR1) at the offset 0x0, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BIDIMODE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~BIDIMODE_MASK) | ((val << BIDIMODE_START_BIT) & BIDIMODE_MASK )); \
   } 

#define ENABLE_BIDIMODE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  BIDIMODE_MASK ); \
   } 

#define DISABLE_BIDIMODE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~BIDIMODE_MASK ); \
   } 

#define READ_BIDIMODE(base) \
    ((READ_REGISTER_ULONG(base ) & BIDIMODE_MASK) >> BIDIMODE_START_BIT )

#define WHEN_BIDIMODE_HIGH(base) \
     if ( READ_BIDIMODE(base) )


#define UNLESS_BIDIMODE_HIGH(base) \
     if (! READ_BIDIMODE(base) )


#define WAIT_BIDIMODE_LOW(base) \
    while ( READ_BIDIMODE(base) );


#define WAIT_BIDIMODE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_BIDIMODE(base) && (--timeout > 0) );


#define WAIT_BIDIMODE_HIGH(base) \
    while (! READ_BIDIMODE(base) );


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
// Function : RXDMAEN
//
// Return the value of register Cr2
//
// Notes : Rx buffer DMA enable 
//        (CR2) at the offset 0x4, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXDMAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RXDMAEN_MASK) | ((val << RXDMAEN_START_BIT) & RXDMAEN_MASK )); \
   } 

#define ENABLE_RXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  RXDMAEN_MASK ); \
   } 

#define DISABLE_RXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~RXDMAEN_MASK ); \
   } 

#define READ_RXDMAEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RXDMAEN_MASK) >> RXDMAEN_START_BIT )

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
// Return the value of register Cr2
//
// Notes : Tx buffer DMA enable 
//        (CR2) at the offset 0x4, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXDMAEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TXDMAEN_MASK) | ((val << TXDMAEN_START_BIT) & TXDMAEN_MASK )); \
   } 

#define ENABLE_TXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TXDMAEN_MASK ); \
   } 

#define DISABLE_TXDMAEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TXDMAEN_MASK ); \
   } 

#define READ_TXDMAEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TXDMAEN_MASK) >> TXDMAEN_START_BIT )

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
// Function : SSOE
//
// Return the value of register Cr2
//
// Notes : SS output enable 
//        (CR2) at the offset 0x4, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SSOE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~SSOE_MASK) | ((val << SSOE_START_BIT) & SSOE_MASK )); \
   } 

#define ENABLE_SSOE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  SSOE_MASK ); \
   } 

#define DISABLE_SSOE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~SSOE_MASK ); \
   } 

#define READ_SSOE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & SSOE_MASK) >> SSOE_START_BIT )

#define WHEN_SSOE_HIGH(base) \
     if ( READ_SSOE(base) )


#define UNLESS_SSOE_HIGH(base) \
     if (! READ_SSOE(base) )


#define WAIT_SSOE_LOW(base) \
    while ( READ_SSOE(base) );


#define WAIT_SSOE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SSOE(base) && (--timeout > 0) );


#define WAIT_SSOE_HIGH(base) \
    while (! READ_SSOE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : FRF
//
// Return the value of register Cr2
//
// Notes : Frame format 
//        (CR2) at the offset 0x4, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_FRF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~FRF_MASK) | ((val << FRF_START_BIT) & FRF_MASK )); \
   } 

#define ENABLE_FRF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  FRF_MASK ); \
   } 

#define DISABLE_FRF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~FRF_MASK ); \
   } 

#define READ_FRF(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & FRF_MASK) >> FRF_START_BIT )

#define WHEN_FRF_HIGH(base) \
     if ( READ_FRF(base) )


#define UNLESS_FRF_HIGH(base) \
     if (! READ_FRF(base) )


#define WAIT_FRF_LOW(base) \
    while ( READ_FRF(base) );


#define WAIT_FRF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FRF(base) && (--timeout > 0) );


#define WAIT_FRF_HIGH(base) \
    while (! READ_FRF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : ERRIE
//
// Return the value of register Cr2
//
// Notes : Error interrupt enable 
//        (CR2) at the offset 0x4, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ERRIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ERRIE_MASK) | ((val << ERRIE_START_BIT) & ERRIE_MASK )); \
   } 

#define ENABLE_ERRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  ERRIE_MASK ); \
   } 

#define DISABLE_ERRIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~ERRIE_MASK ); \
   } 

#define READ_ERRIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ERRIE_MASK) >> ERRIE_START_BIT )

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
// Function : RXNEIE
//
// Return the value of register Cr2
//
// Notes : RX buffer not empty interrupt enable 
//        (CR2) at the offset 0x4, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXNEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RXNEIE_MASK) | ((val << RXNEIE_START_BIT) & RXNEIE_MASK )); \
   } 

#define ENABLE_RXNEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  RXNEIE_MASK ); \
   } 

#define DISABLE_RXNEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~RXNEIE_MASK ); \
   } 

#define READ_RXNEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RXNEIE_MASK) >> RXNEIE_START_BIT )

#define WHEN_RXNEIE_HIGH(base) \
     if ( READ_RXNEIE(base) )


#define UNLESS_RXNEIE_HIGH(base) \
     if (! READ_RXNEIE(base) )


#define WAIT_RXNEIE_LOW(base) \
    while ( READ_RXNEIE(base) );


#define WAIT_RXNEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXNEIE(base) && (--timeout > 0) );


#define WAIT_RXNEIE_HIGH(base) \
    while (! READ_RXNEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TXEIE
//
// Return the value of register Cr2
//
// Notes : Tx buffer empty interrupt enable 
//        (CR2) at the offset 0x4, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TXEIE_MASK) | ((val << TXEIE_START_BIT) & TXEIE_MASK )); \
   } 

#define ENABLE_TXEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TXEIE_MASK ); \
   } 

#define DISABLE_TXEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TXEIE_MASK ); \
   } 

#define READ_TXEIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TXEIE_MASK) >> TXEIE_START_BIT )

#define WHEN_TXEIE_HIGH(base) \
     if ( READ_TXEIE(base) )


#define UNLESS_TXEIE_HIGH(base) \
     if (! READ_TXEIE(base) )


#define WAIT_TXEIE_LOW(base) \
    while ( READ_TXEIE(base) );


#define WAIT_TXEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXEIE(base) && (--timeout > 0) );


#define WAIT_TXEIE_HIGH(base) \
    while (! READ_TXEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Sr
//
// Return the value of register SR
//
// Notes : Register Sr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : RXNE
//
// Return the value of register Sr
//
// Notes : Receive buffer not empty 
//        (SR) at the offset 0x8, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RXNE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~RXNE_MASK) | ((val << RXNE_START_BIT) & RXNE_MASK )); \
   } 

#define ENABLE_RXNE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  RXNE_MASK ); \
   } 

#define DISABLE_RXNE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~RXNE_MASK ); \
   } 

#define READ_RXNE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & RXNE_MASK) >> RXNE_START_BIT )

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
// Function : TXE
//
// Return the value of register Sr
//
// Notes : Transmit buffer empty 
//        (SR) at the offset 0x8, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TXE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~TXE_MASK) | ((val << TXE_START_BIT) & TXE_MASK )); \
   } 

#define ENABLE_TXE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  TXE_MASK ); \
   } 

#define DISABLE_TXE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~TXE_MASK ); \
   } 

#define READ_TXE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & TXE_MASK) >> TXE_START_BIT )

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
// Function : CHSIDE
//
// Return the value of register Sr
//
// Notes : Channel side 
//        (SR) at the offset 0x8, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CHSIDE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CHSIDE_MASK) | ((val << CHSIDE_START_BIT) & CHSIDE_MASK )); \
   } 

#define ENABLE_CHSIDE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CHSIDE_MASK ); \
   } 

#define DISABLE_CHSIDE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CHSIDE_MASK ); \
   } 

#define READ_CHSIDE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CHSIDE_MASK) >> CHSIDE_START_BIT )

#define WHEN_CHSIDE_HIGH(base) \
     if ( READ_CHSIDE(base) )


#define UNLESS_CHSIDE_HIGH(base) \
     if (! READ_CHSIDE(base) )


#define WAIT_CHSIDE_LOW(base) \
    while ( READ_CHSIDE(base) );


#define WAIT_CHSIDE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHSIDE(base) && (--timeout > 0) );


#define WAIT_CHSIDE_HIGH(base) \
    while (! READ_CHSIDE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : UDR
//
// Return the value of register Sr
//
// Notes : Underrun flag 
//        (SR) at the offset 0x8, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_UDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~UDR_MASK) | ((val << UDR_START_BIT) & UDR_MASK )); \
   } 

#define ENABLE_UDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  UDR_MASK ); \
   } 

#define DISABLE_UDR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~UDR_MASK ); \
   } 

#define READ_UDR(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & UDR_MASK) >> UDR_START_BIT )

#define WHEN_UDR_HIGH(base) \
     if ( READ_UDR(base) )


#define UNLESS_UDR_HIGH(base) \
     if (! READ_UDR(base) )


#define WAIT_UDR_LOW(base) \
    while ( READ_UDR(base) );


#define WAIT_UDR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UDR(base) && (--timeout > 0) );


#define WAIT_UDR_HIGH(base) \
    while (! READ_UDR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : CRCERR
//
// Return the value of register Sr
//
// Notes : CRC error flag 
//        (SR) at the offset 0x8, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_CRCERR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CRCERR_MASK) | ((val << CRCERR_START_BIT) & CRCERR_MASK )); \
   } 

#define ENABLE_CRCERR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CRCERR_MASK ); \
   } 

#define DISABLE_CRCERR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CRCERR_MASK ); \
   } 

#define READ_CRCERR(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CRCERR_MASK) >> CRCERR_START_BIT )

#define WHEN_CRCERR_HIGH(base) \
     if ( READ_CRCERR(base) )


#define UNLESS_CRCERR_HIGH(base) \
     if (! READ_CRCERR(base) )


#define WAIT_CRCERR_LOW(base) \
    while ( READ_CRCERR(base) );


#define WAIT_CRCERR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CRCERR(base) && (--timeout > 0) );


#define WAIT_CRCERR_HIGH(base) \
    while (! READ_CRCERR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : MODF
//
// Return the value of register Sr
//
// Notes : Mode fault 
//        (SR) at the offset 0x8, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_MODF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~MODF_MASK) | ((val << MODF_START_BIT) & MODF_MASK )); \
   } 

#define ENABLE_MODF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  MODF_MASK ); \
   } 

#define DISABLE_MODF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~MODF_MASK ); \
   } 

#define READ_MODF(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & MODF_MASK) >> MODF_START_BIT )

#define WHEN_MODF_HIGH(base) \
     if ( READ_MODF(base) )


#define UNLESS_MODF_HIGH(base) \
     if (! READ_MODF(base) )


#define WAIT_MODF_LOW(base) \
    while ( READ_MODF(base) );


#define WAIT_MODF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MODF(base) && (--timeout > 0) );


#define WAIT_MODF_HIGH(base) \
    while (! READ_MODF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : OVR
//
// Return the value of register Sr
//
// Notes : Overrun flag 
//        (SR) at the offset 0x8, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_OVR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~OVR_MASK) | ((val << OVR_START_BIT) & OVR_MASK )); \
   } 

#define ENABLE_OVR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  OVR_MASK ); \
   } 

#define DISABLE_OVR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~OVR_MASK ); \
   } 

#define READ_OVR(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & OVR_MASK) >> OVR_START_BIT )

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
// Function : BSY
//
// Return the value of register Sr
//
// Notes : Busy flag 
//        (SR) at the offset 0x8, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_BSY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~BSY_MASK) | ((val << BSY_START_BIT) & BSY_MASK )); \
   } 

#define ENABLE_BSY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  BSY_MASK ); \
   } 

#define DISABLE_BSY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~BSY_MASK ); \
   } 

#define READ_BSY(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & BSY_MASK) >> BSY_START_BIT )

#define WHEN_BSY_HIGH(base) \
     if ( READ_BSY(base) )


#define UNLESS_BSY_HIGH(base) \
     if (! READ_BSY(base) )


#define WAIT_BSY_LOW(base) \
    while ( READ_BSY(base) );


#define WAIT_BSY_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_BSY(base) && (--timeout > 0) );


#define WAIT_BSY_HIGH(base) \
    while (! READ_BSY(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : TIFRFE
//
// Return the value of register Sr
//
// Notes : TI frame format error 
//        (SR) at the offset 0x8, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TIFRFE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~TIFRFE_MASK) | ((val << TIFRFE_START_BIT) & TIFRFE_MASK )); \
   } 

#define ENABLE_TIFRFE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  TIFRFE_MASK ); \
   } 

#define DISABLE_TIFRFE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~TIFRFE_MASK ); \
   } 

#define READ_TIFRFE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & TIFRFE_MASK) >> TIFRFE_START_BIT )

#define WHEN_TIFRFE_HIGH(base) \
     if ( READ_TIFRFE(base) )


#define UNLESS_TIFRFE_HIGH(base) \
     if (! READ_TIFRFE(base) )


#define WAIT_TIFRFE_LOW(base) \
    while ( READ_TIFRFE(base) );


#define WAIT_TIFRFE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TIFRFE(base) && (--timeout > 0) );


#define WAIT_TIFRFE_HIGH(base) \
    while (! READ_TIFRFE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_DR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_DR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_DR( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : DR
//
// Return the value of register Dr
//
// Notes : Data register 
//        (DR) at the offset 0xC, Bits 0:15
//
/////////////////////////////////////////////////////////////////////////
#define READ_DR(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & DR_MASK) >> DR_START_BIT )

#define WRITE_DR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~DR_MASK) | ((val << DR_START_BIT) & DR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Crcpr
//
// Return the value of register CRCPR
//
// Notes : Register Crcpr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CRCPR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_CRCPR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_CRCPR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_CRCPR( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Crcpr
//
// Return the value of register CRCPR
//
// Notes : Register CRC polynomial register (CRCPR) at the offset 0x10, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CRC polynomial register 
    // 
#define CRCPOLY_MASK 0xFFFFU
#define CRCPOLY_OFFSET 15
#define CRCPOLY_START_BIT 0
#define CRCPOLY_WIDTH 16


#define CRCPR_REG 0x10

typedef enum crcpoly {
    CRCPOLY_0,
    CRCPOLY_1
} CRCPOLY_T ;
#define READ_CRCPOLY(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & CRCPOLY_MASK) >> CRCPOLY_START_BIT )

#define WRITE_CRCPOLY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~CRCPOLY_MASK) | ((val << CRCPOLY_START_BIT) & CRCPOLY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rxcrcr
//
// Return the value of register RXCRCR
//
// Notes : Register Rxcrcr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RXCRCR( base ) \
     READ_REGISTER_ULONG( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rxcrcr
//
// Return the value of register RXCRCR
//
// Notes : Register RX CRC register (RXCRCR) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Rx CRC register 
    // 
#define RXCRC_MASK 0xFFFFU
#define RXCRC_OFFSET 15
#define RXCRC_START_BIT 0
#define RXCRC_WIDTH 16


#define RXCRCR_REG 0x14

typedef enum rxcrc {
    RXCRC_0,
    RXCRC_1
} RXCRC_T ;
#define READ_RXCRC(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & RXCRC_MASK) >> RXCRC_START_BIT )

#define WRITE_RXCRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~RXCRC_MASK) | ((val << RXCRC_START_BIT) & RXCRC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Txcrcr
//
// Return the value of register TXCRCR
//
// Notes : Register Txcrcr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_TXCRCR( base ) \
     READ_REGISTER_ULONG( base + 0x18) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Txcrcr
//
// Return the value of register TXCRCR
//
// Notes : Register TX CRC register (TXCRCR) at the offset 0x18, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tx CRC register 
    // 
#define TXCRC_MASK 0xFFFFU
#define TXCRC_OFFSET 15
#define TXCRC_START_BIT 0
#define TXCRC_WIDTH 16


#define TXCRCR_REG 0x18

typedef enum txcrc {
    TXCRC_0,
    TXCRC_1
} TXCRC_T ;
#define READ_TXCRC(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TXCRC_MASK) >> TXCRC_START_BIT )

#define WRITE_TXCRC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TXCRC_MASK) | ((val << TXCRC_START_BIT) & TXCRC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I2SCFGR
//
// Notes : Register I2scfgr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_I_2SCFGR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x1C, val)

#define SET_BITS_I_2SCFGR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  mask ); \
   } 

#define CLEAR_BITS_I_2SCFGR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C,  val & ~mask ); \
   } 

#define READ_REGISTER_I_2SCFGR( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Channel length (number of bits per audio channel) 
    // 
#define CHLEN_MASK 0x1U
#define CHLEN_OFFSET 0
#define CHLEN_START_BIT 0
#define CHLEN_WIDTH 1


#define I_2SCFGR_REG 0x1C

typedef enum chlen {
    CHLEN_0,
    CHLEN_1
} CHLEN_T ;
#define WRITE_CHLEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CHLEN_MASK) | ((val << CHLEN_START_BIT) & CHLEN_MASK )); \
   } 

#define ENABLE_CHLEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CHLEN_MASK ); \
   } 

#define DISABLE_CHLEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CHLEN_MASK ); \
   } 

#define READ_CHLEN(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CHLEN_MASK) >> CHLEN_START_BIT )

#define WHEN_CHLEN_HIGH(base) \
     if ( READ_CHLEN(base) )


#define UNLESS_CHLEN_HIGH(base) \
     if (! READ_CHLEN(base) )


#define WAIT_CHLEN_LOW(base) \
    while ( READ_CHLEN(base) );


#define WAIT_CHLEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CHLEN(base) && (--timeout > 0) );


#define WAIT_CHLEN_HIGH(base) \
    while (! READ_CHLEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 1:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Data length to be transferred 
    // 
#define DATLEN_MASK 0x6U
#define DATLEN_OFFSET 2
#define DATLEN_START_BIT 1
#define DATLEN_WIDTH 2



typedef enum datlen {
    DATLEN_0,
    DATLEN_1
} DATLEN_T ;
#define READ_DATLEN(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & DATLEN_MASK) >> DATLEN_START_BIT )

#define WRITE_DATLEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~DATLEN_MASK) | ((val << DATLEN_START_BIT) & DATLEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Steady state clock polarity 
    // 
#define CKPOL_MASK 0x8U
#define CKPOL_OFFSET 3
#define CKPOL_START_BIT 3
#define CKPOL_WIDTH 1



typedef enum ckpol {
    CKPOL_0,
    CKPOL_1
} CKPOL_T ;
#define WRITE_CKPOL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CKPOL_MASK) | ((val << CKPOL_START_BIT) & CKPOL_MASK )); \
   } 

#define ENABLE_CKPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CKPOL_MASK ); \
   } 

#define DISABLE_CKPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CKPOL_MASK ); \
   } 

#define READ_CKPOL(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CKPOL_MASK) >> CKPOL_START_BIT )

#define WHEN_CKPOL_HIGH(base) \
     if ( READ_CKPOL(base) )


#define UNLESS_CKPOL_HIGH(base) \
     if (! READ_CKPOL(base) )


#define WAIT_CKPOL_LOW(base) \
    while ( READ_CKPOL(base) );


#define WAIT_CKPOL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CKPOL(base) && (--timeout > 0) );


#define WAIT_CKPOL_HIGH(base) \
    while (! READ_CKPOL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2S standard selection 
    // 
#define I2SSTD_MASK 0x30U
#define I2SSTD_OFFSET 5
#define I2SSTD_START_BIT 4
#define I2SSTD_WIDTH 2



typedef enum i2sstd {
    I_2SSTD_0,
    I_2SSTD_1
} I_2SSTD_T ;
#define READ_I2SSTD(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & I2SSTD_MASK) >> I2SSTD_START_BIT )

#define WRITE_I2SSTD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~I2SSTD_MASK) | ((val << I2SSTD_START_BIT) & I2SSTD_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PCM frame synchronization 
    // 
#define PCMSYNC_MASK 0x80U
#define PCMSYNC_OFFSET 7
#define PCMSYNC_START_BIT 7
#define PCMSYNC_WIDTH 1



typedef enum pcmsync {
    PCMSYNC_0,
    PCMSYNC_1
} PCMSYNC_T ;
#define WRITE_PCMSYNC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~PCMSYNC_MASK) | ((val << PCMSYNC_START_BIT) & PCMSYNC_MASK )); \
   } 

#define ENABLE_PCMSYNC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  PCMSYNC_MASK ); \
   } 

#define DISABLE_PCMSYNC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~PCMSYNC_MASK ); \
   } 

#define READ_PCMSYNC(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & PCMSYNC_MASK) >> PCMSYNC_START_BIT )

#define WHEN_PCMSYNC_HIGH(base) \
     if ( READ_PCMSYNC(base) )


#define UNLESS_PCMSYNC_HIGH(base) \
     if (! READ_PCMSYNC(base) )


#define WAIT_PCMSYNC_LOW(base) \
    while ( READ_PCMSYNC(base) );


#define WAIT_PCMSYNC_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PCMSYNC(base) && (--timeout > 0) );


#define WAIT_PCMSYNC_HIGH(base) \
    while (! READ_PCMSYNC(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2S configuration mode 
    // 
#define I2SCFG_MASK 0x300U
#define I2SCFG_OFFSET 9
#define I2SCFG_START_BIT 8
#define I2SCFG_WIDTH 2



typedef enum i2scfg {
    I_2SCFG_0,
    I_2SCFG_1
} I_2SCFG_T ;
#define READ_I2SCFG(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & I2SCFG_MASK) >> I2SCFG_START_BIT )

#define WRITE_I2SCFG(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~I2SCFG_MASK) | ((val << I2SCFG_START_BIT) & I2SCFG_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2S Enable 
    // 
#define I2SE_MASK 0x400U
#define I2SE_OFFSET 10
#define I2SE_START_BIT 10
#define I2SE_WIDTH 1



typedef enum i2se {
    I_2SE_0,
    I_2SE_1
} I_2SE_T ;
#define WRITE_I2SE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~I2SE_MASK) | ((val << I2SE_START_BIT) & I2SE_MASK )); \
   } 

#define ENABLE_I2SE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  I2SE_MASK ); \
   } 

#define DISABLE_I2SE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~I2SE_MASK ); \
   } 

#define READ_I2SE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & I2SE_MASK) >> I2SE_START_BIT )

#define WHEN_I2SE_HIGH(base) \
     if ( READ_I2SE(base) )


#define UNLESS_I2SE_HIGH(base) \
     if (! READ_I2SE(base) )


#define WAIT_I2SE_LOW(base) \
    while ( READ_I2SE(base) );


#define WAIT_I2SE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_I2SE(base) && (--timeout > 0) );


#define WAIT_I2SE_HIGH(base) \
    while (! READ_I2SE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2scfgr
//
// Return the value of register I_2SCFGR
//
// Notes : Register I2S configuration register (I2SCFGR) at the offset 0x1C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2S mode selection 
    // 
#define I2SMOD_MASK 0x800U
#define I2SMOD_OFFSET 11
#define I2SMOD_START_BIT 11
#define I2SMOD_WIDTH 1



typedef enum i2smod {
    I_2SMOD_0,
    I_2SMOD_1
} I_2SMOD_T ;
#define WRITE_I2SMOD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~I2SMOD_MASK) | ((val << I2SMOD_START_BIT) & I2SMOD_MASK )); \
   } 

#define ENABLE_I2SMOD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  I2SMOD_MASK ); \
   } 

#define DISABLE_I2SMOD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~I2SMOD_MASK ); \
   } 

#define READ_I2SMOD(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & I2SMOD_MASK) >> I2SMOD_START_BIT )

#define WHEN_I2SMOD_HIGH(base) \
     if ( READ_I2SMOD(base) )


#define UNLESS_I2SMOD_HIGH(base) \
     if (! READ_I2SMOD(base) )


#define WAIT_I2SMOD_LOW(base) \
    while ( READ_I2SMOD(base) );


#define WAIT_I2SMOD_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_I2SMOD(base) && (--timeout > 0) );


#define WAIT_I2SMOD_HIGH(base) \
    while (! READ_I2SMOD(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2spr
//
// Return the value of register I2SPR
//
// Notes : Register I2spr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_I_2SPR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x20, val)

#define SET_BITS_I_2SPR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  mask ); \
   } 

#define CLEAR_BITS_I_2SPR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20,  val & ~mask ); \
   } 

#define READ_REGISTER_I_2SPR( base ) \
     READ_REGISTER_ULONG( base + 0x20) 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2spr
//
// Return the value of register I_2SPR
//
// Notes : Register I2S prescaler register (I2SPR) at the offset 0x20, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // I2S Linear prescaler 
    // 
#define I2SDIV_MASK 0xFFU
#define I2SDIV_OFFSET 7
#define I2SDIV_START_BIT 0
#define I2SDIV_WIDTH 8


#define I_2SPR_REG 0x20

typedef enum i2sdiv {
    I_2SDIV_0,
    I_2SDIV_1
} I_2SDIV_T ;
#define READ_I2SDIV(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & I2SDIV_MASK) >> I2SDIV_START_BIT )

#define WRITE_I2SDIV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~I2SDIV_MASK) | ((val << I2SDIV_START_BIT) & I2SDIV_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2spr
//
// Return the value of register I_2SPR
//
// Notes : Register I2S prescaler register (I2SPR) at the offset 0x20, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Odd factor for the prescaler 
    // 
#define ODD_MASK 0x100U
#define ODD_OFFSET 8
#define ODD_START_BIT 8
#define ODD_WIDTH 1



typedef enum odd {
    ODD_0,
    ODD_1
} ODD_T ;
#define WRITE_ODD(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~ODD_MASK) | ((val << ODD_START_BIT) & ODD_MASK )); \
   } 

#define ENABLE_ODD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  ODD_MASK ); \
   } 

#define DISABLE_ODD(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~ODD_MASK ); \
   } 

#define READ_ODD(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & ODD_MASK) >> ODD_START_BIT )

#define WHEN_ODD_HIGH(base) \
     if ( READ_ODD(base) )


#define UNLESS_ODD_HIGH(base) \
     if (! READ_ODD(base) )


#define WAIT_ODD_LOW(base) \
    while ( READ_ODD(base) );


#define WAIT_ODD_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ODD(base) && (--timeout > 0) );


#define WAIT_ODD_HIGH(base) \
    while (! READ_ODD(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2spr
//
// Return the value of register I_2SPR
//
// Notes : Register I2S prescaler register (I2SPR) at the offset 0x20, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Master clock output enable 
    // 
#define MCKOE_MASK 0x200U
#define MCKOE_OFFSET 9
#define MCKOE_START_BIT 9
#define MCKOE_WIDTH 1



typedef enum mckoe {
    MCKOE_0,
    MCKOE_1
} MCKOE_T ;
#define WRITE_MCKOE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~MCKOE_MASK) | ((val << MCKOE_START_BIT) & MCKOE_MASK )); \
   } 

#define ENABLE_MCKOE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  MCKOE_MASK ); \
   } 

#define DISABLE_MCKOE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~MCKOE_MASK ); \
   } 

#define READ_MCKOE(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & MCKOE_MASK) >> MCKOE_START_BIT )

#define WHEN_MCKOE_HIGH(base) \
     if ( READ_MCKOE(base) )


#define UNLESS_MCKOE_HIGH(base) \
     if (! READ_MCKOE(base) )


#define WAIT_MCKOE_LOW(base) \
    while ( READ_MCKOE(base) );


#define WAIT_MCKOE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MCKOE(base) && (--timeout > 0) );


#define WAIT_MCKOE_HIGH(base) \
    while (! READ_MCKOE(base) );


