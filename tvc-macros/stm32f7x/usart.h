/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/usart.h
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
 
#define NB_DEVICE_USART 8
#define USART6 0x40011400
#define UART7 0x40007800
#define UART8 0x40007C00
#define UART4 0x40004C00
#define UART5 0x40005000
#define USART2 0x40004400
#define USART3 0x40004800
#define USART1 0x40011000
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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART enable 
    // 
#define UE_MASK 0x1U
#define UE_OFFSET 0
#define UE_START_BIT 0
#define UE_WIDTH 1


#define CR_1_REG 0x0

typedef enum ue {
    UE_0,
    UE_1
} UE_T ;
#define WRITE_UE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~UE_MASK) | ((val << UE_START_BIT) & UE_MASK )); \
   } 

#define ENABLE_UE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  UE_MASK ); \
   } 

#define DISABLE_UE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~UE_MASK ); \
   } 

#define READ_UE(base) \
    ((READ_REGISTER_ULONG(base ) & UE_MASK) >> UE_START_BIT )

#define WHEN_UE_HIGH(base) \
     if ( READ_UE(base) )


#define UNLESS_UE_HIGH(base) \
     if (! READ_UE(base) )


#define WAIT_UE_LOW(base) \
    while ( READ_UE(base) );


#define WAIT_UE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UE(base) && (--timeout > 0) );


#define WAIT_UE_HIGH(base) \
    while (! READ_UE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // USART enable in Stop mode 
    // 
#define UESM_MASK 0x2U
#define UESM_OFFSET 1
#define UESM_START_BIT 1
#define UESM_WIDTH 1



typedef enum uesm {
    UESM_0,
    UESM_1
} UESM_T ;
#define WRITE_UESM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~UESM_MASK) | ((val << UESM_START_BIT) & UESM_MASK )); \
   } 

#define ENABLE_UESM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  UESM_MASK ); \
   } 

#define DISABLE_UESM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~UESM_MASK ); \
   } 

#define READ_UESM(base) \
    ((READ_REGISTER_ULONG(base ) & UESM_MASK) >> UESM_START_BIT )

#define WHEN_UESM_HIGH(base) \
     if ( READ_UESM(base) )


#define UNLESS_UESM_HIGH(base) \
     if (! READ_UESM(base) )


#define WAIT_UESM_LOW(base) \
    while ( READ_UESM(base) );


#define WAIT_UESM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_UESM(base) && (--timeout > 0) );


#define WAIT_UESM_HIGH(base) \
    while (! READ_UESM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver enable 
    // 
#define RE_MASK 0x4U
#define RE_OFFSET 2
#define RE_START_BIT 2
#define RE_WIDTH 1



#define WRITE_RE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~RE_MASK) | ((val << RE_START_BIT) & RE_MASK )); \
   } 

#define ENABLE_RE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  RE_MASK ); \
   } 

#define DISABLE_RE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~RE_MASK ); \
   } 

#define READ_RE(base) \
    ((READ_REGISTER_ULONG(base ) & RE_MASK) >> RE_START_BIT )

#define WHEN_RE_HIGH(base) \
     if ( READ_RE(base) )


#define UNLESS_RE_HIGH(base) \
     if (! READ_RE(base) )


#define WAIT_RE_LOW(base) \
    while ( READ_RE(base) );


#define WAIT_RE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RE(base) && (--timeout > 0) );


#define WAIT_RE_HIGH(base) \
    while (! READ_RE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmitter enable 
    // 
#define TE_MASK 0x8U
#define TE_OFFSET 3
#define TE_START_BIT 3
#define TE_WIDTH 1



#define WRITE_TE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TE_MASK) | ((val << TE_START_BIT) & TE_MASK )); \
   } 

#define ENABLE_TE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TE_MASK ); \
   } 

#define DISABLE_TE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TE_MASK ); \
   } 

#define READ_TE(base) \
    ((READ_REGISTER_ULONG(base ) & TE_MASK) >> TE_START_BIT )

#define WHEN_TE_HIGH(base) \
     if ( READ_TE(base) )


#define UNLESS_TE_HIGH(base) \
     if (! READ_TE(base) )


#define WAIT_TE_LOW(base) \
    while ( READ_TE(base) );


#define WAIT_TE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TE(base) && (--timeout > 0) );


#define WAIT_TE_HIGH(base) \
    while (! READ_TE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IDLE interrupt enable 
    // 
#define IDLEIE_MASK 0x10U
#define IDLEIE_OFFSET 4
#define IDLEIE_START_BIT 4
#define IDLEIE_WIDTH 1



typedef enum idleie {
    IDLEIE_0,
    IDLEIE_1
} IDLEIE_T ;
#define WRITE_IDLEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~IDLEIE_MASK) | ((val << IDLEIE_START_BIT) & IDLEIE_MASK )); \
   } 

#define ENABLE_IDLEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  IDLEIE_MASK ); \
   } 

#define DISABLE_IDLEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~IDLEIE_MASK ); \
   } 

#define READ_IDLEIE(base) \
    ((READ_REGISTER_ULONG(base ) & IDLEIE_MASK) >> IDLEIE_START_BIT )

#define WHEN_IDLEIE_HIGH(base) \
     if ( READ_IDLEIE(base) )


#define UNLESS_IDLEIE_HIGH(base) \
     if (! READ_IDLEIE(base) )


#define WAIT_IDLEIE_LOW(base) \
    while ( READ_IDLEIE(base) );


#define WAIT_IDLEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_IDLEIE(base) && (--timeout > 0) );


#define WAIT_IDLEIE_HIGH(base) \
    while (! READ_IDLEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RXNE interrupt enable 
    // 
#define RXNEIE_MASK 0x20U
#define RXNEIE_OFFSET 5
#define RXNEIE_START_BIT 5
#define RXNEIE_WIDTH 1



#define WRITE_RXNEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~RXNEIE_MASK) | ((val << RXNEIE_START_BIT) & RXNEIE_MASK )); \
   } 

#define ENABLE_RXNEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  RXNEIE_MASK ); \
   } 

#define DISABLE_RXNEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~RXNEIE_MASK ); \
   } 

#define READ_RXNEIE(base) \
    ((READ_REGISTER_ULONG(base ) & RXNEIE_MASK) >> RXNEIE_START_BIT )

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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmission complete interrupt enable 
    // 
#define TCIE_MASK 0x40U
#define TCIE_OFFSET 6
#define TCIE_START_BIT 6
#define TCIE_WIDTH 1



typedef enum tcie {
    TCIE_0,
    TCIE_1
} TCIE_T ;
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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // interrupt enable 
    // 
#define TXEIE_MASK 0x80U
#define TXEIE_OFFSET 7
#define TXEIE_START_BIT 7
#define TXEIE_WIDTH 1



typedef enum txeie {
    TXEIE_0,
    TXEIE_1
} TXEIE_T ;
#define WRITE_TXEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~TXEIE_MASK) | ((val << TXEIE_START_BIT) & TXEIE_MASK )); \
   } 

#define ENABLE_TXEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  TXEIE_MASK ); \
   } 

#define DISABLE_TXEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~TXEIE_MASK ); \
   } 

#define READ_TXEIE(base) \
    ((READ_REGISTER_ULONG(base ) & TXEIE_MASK) >> TXEIE_START_BIT )

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
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PE interrupt enable 
    // 
#define PEIE_MASK 0x100U
#define PEIE_OFFSET 8
#define PEIE_START_BIT 8
#define PEIE_WIDTH 1



typedef enum peie {
    PEIE_0,
    PEIE_1
} PEIE_T ;
#define WRITE_PEIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~PEIE_MASK) | ((val << PEIE_START_BIT) & PEIE_MASK )); \
   } 

#define ENABLE_PEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  PEIE_MASK ); \
   } 

#define DISABLE_PEIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~PEIE_MASK ); \
   } 

#define READ_PEIE(base) \
    ((READ_REGISTER_ULONG(base ) & PEIE_MASK) >> PEIE_START_BIT )

#define WHEN_PEIE_HIGH(base) \
     if ( READ_PEIE(base) )


#define UNLESS_PEIE_HIGH(base) \
     if (! READ_PEIE(base) )


#define WAIT_PEIE_LOW(base) \
    while ( READ_PEIE(base) );


#define WAIT_PEIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PEIE(base) && (--timeout > 0) );


#define WAIT_PEIE_HIGH(base) \
    while (! READ_PEIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity selection 
    // 
#define PS_MASK 0x200U
#define PS_OFFSET 9
#define PS_START_BIT 9
#define PS_WIDTH 1



typedef enum ps {
    PS_0,
    PS_1
} PS_T ;
#define WRITE_PS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~PS_MASK) | ((val << PS_START_BIT) & PS_MASK )); \
   } 

#define ENABLE_PS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  PS_MASK ); \
   } 

#define DISABLE_PS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~PS_MASK ); \
   } 

#define READ_PS(base) \
    ((READ_REGISTER_ULONG(base ) & PS_MASK) >> PS_START_BIT )

#define WHEN_PS_HIGH(base) \
     if ( READ_PS(base) )


#define UNLESS_PS_HIGH(base) \
     if (! READ_PS(base) )


#define WAIT_PS_LOW(base) \
    while ( READ_PS(base) );


#define WAIT_PS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PS(base) && (--timeout > 0) );


#define WAIT_PS_HIGH(base) \
    while (! READ_PS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity control enable 
    // 
#define PCE_MASK 0x400U
#define PCE_OFFSET 10
#define PCE_START_BIT 10
#define PCE_WIDTH 1



typedef enum pce {
    PCE_0,
    PCE_1
} PCE_T ;
#define WRITE_PCE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~PCE_MASK) | ((val << PCE_START_BIT) & PCE_MASK )); \
   } 

#define ENABLE_PCE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  PCE_MASK ); \
   } 

#define DISABLE_PCE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~PCE_MASK ); \
   } 

#define READ_PCE(base) \
    ((READ_REGISTER_ULONG(base ) & PCE_MASK) >> PCE_START_BIT )

#define WHEN_PCE_HIGH(base) \
     if ( READ_PCE(base) )


#define UNLESS_PCE_HIGH(base) \
     if (! READ_PCE(base) )


#define WAIT_PCE_LOW(base) \
    while ( READ_PCE(base) );


#define WAIT_PCE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PCE(base) && (--timeout > 0) );


#define WAIT_PCE_HIGH(base) \
    while (! READ_PCE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver wakeup method 
    // 
#define WAKE_MASK 0x800U
#define WAKE_OFFSET 11
#define WAKE_START_BIT 11
#define WAKE_WIDTH 1



typedef enum wake {
    WAKE_0,
    WAKE_1
} WAKE_T ;
#define WRITE_WAKE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~WAKE_MASK) | ((val << WAKE_START_BIT) & WAKE_MASK )); \
   } 

#define ENABLE_WAKE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  WAKE_MASK ); \
   } 

#define DISABLE_WAKE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~WAKE_MASK ); \
   } 

#define READ_WAKE(base) \
    ((READ_REGISTER_ULONG(base ) & WAKE_MASK) >> WAKE_START_BIT )

#define WHEN_WAKE_HIGH(base) \
     if ( READ_WAKE(base) )


#define UNLESS_WAKE_HIGH(base) \
     if (! READ_WAKE(base) )


#define WAIT_WAKE_LOW(base) \
    while ( READ_WAKE(base) );


#define WAIT_WAKE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WAKE(base) && (--timeout > 0) );


#define WAIT_WAKE_HIGH(base) \
    while (! READ_WAKE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Word length 
    // 
#define M0_MASK 0x1000U
#define M0_OFFSET 12
#define M0_START_BIT 12
#define M0_WIDTH 1



typedef enum m0 {
    M_0_0,
    M_0_1
} M0_T ;
#define WRITE_M0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~M0_MASK) | ((val << M0_START_BIT) & M0_MASK )); \
   } 

#define ENABLE_M0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  M0_MASK ); \
   } 

#define DISABLE_M0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~M0_MASK ); \
   } 

#define READ_M0(base) \
    ((READ_REGISTER_ULONG(base ) & M0_MASK) >> M0_START_BIT )

#define WHEN_M0_HIGH(base) \
     if ( READ_M0(base) )


#define UNLESS_M0_HIGH(base) \
     if (! READ_M0(base) )


#define WAIT_M0_LOW(base) \
    while ( READ_M0(base) );


#define WAIT_M0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_M0(base) && (--timeout > 0) );


#define WAIT_M0_HIGH(base) \
    while (! READ_M0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute mode enable 
    // 
#define MME_MASK 0x2000U
#define MME_OFFSET 13
#define MME_START_BIT 13
#define MME_WIDTH 1



typedef enum mme {
    MME_0,
    MME_1
} MME_T ;
#define WRITE_MME(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~MME_MASK) | ((val << MME_START_BIT) & MME_MASK )); \
   } 

#define ENABLE_MME(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  MME_MASK ); \
   } 

#define DISABLE_MME(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~MME_MASK ); \
   } 

#define READ_MME(base) \
    ((READ_REGISTER_ULONG(base ) & MME_MASK) >> MME_START_BIT )

#define WHEN_MME_HIGH(base) \
     if ( READ_MME(base) )


#define UNLESS_MME_HIGH(base) \
     if (! READ_MME(base) )


#define WAIT_MME_LOW(base) \
    while ( READ_MME(base) );


#define WAIT_MME_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MME(base) && (--timeout > 0) );


#define WAIT_MME_HIGH(base) \
    while (! READ_MME(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Character match interrupt enable 
    // 
#define CMIE_MASK 0x4000U
#define CMIE_OFFSET 14
#define CMIE_START_BIT 14
#define CMIE_WIDTH 1



typedef enum cmie {
    CMIE_0,
    CMIE_1
} CMIE_T ;
#define WRITE_CMIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~CMIE_MASK) | ((val << CMIE_START_BIT) & CMIE_MASK )); \
   } 

#define ENABLE_CMIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  CMIE_MASK ); \
   } 

#define DISABLE_CMIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~CMIE_MASK ); \
   } 

#define READ_CMIE(base) \
    ((READ_REGISTER_ULONG(base ) & CMIE_MASK) >> CMIE_START_BIT )

#define WHEN_CMIE_HIGH(base) \
     if ( READ_CMIE(base) )


#define UNLESS_CMIE_HIGH(base) \
     if (! READ_CMIE(base) )


#define WAIT_CMIE_LOW(base) \
    while ( READ_CMIE(base) );


#define WAIT_CMIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CMIE(base) && (--timeout > 0) );


#define WAIT_CMIE_HIGH(base) \
    while (! READ_CMIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Oversampling mode 
    // 
#define OVER8_MASK 0x8000U
#define OVER8_OFFSET 15
#define OVER8_START_BIT 15
#define OVER8_WIDTH 1



typedef enum over8 {
    OVER_8_0,
    OVER_8_1
} OVER_8_T ;
#define WRITE_OVER8(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~OVER8_MASK) | ((val << OVER8_START_BIT) & OVER8_MASK )); \
   } 

#define ENABLE_OVER8(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  OVER8_MASK ); \
   } 

#define DISABLE_OVER8(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~OVER8_MASK ); \
   } 

#define READ_OVER8(base) \
    ((READ_REGISTER_ULONG(base ) & OVER8_MASK) >> OVER8_START_BIT )

#define WHEN_OVER8_HIGH(base) \
     if ( READ_OVER8(base) )


#define UNLESS_OVER8_HIGH(base) \
     if (! READ_OVER8(base) )


#define WAIT_OVER8_LOW(base) \
    while ( READ_OVER8(base) );


#define WAIT_OVER8_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVER8(base) && (--timeout > 0) );


#define WAIT_OVER8_HIGH(base) \
    while (! READ_OVER8(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT0 
    // 
#define DEDT0_MASK 0x10000U
#define DEDT0_OFFSET 16
#define DEDT0_START_BIT 16
#define DEDT0_WIDTH 1



typedef enum dedt0 {
    DEDT_0_0,
    DEDT_0_1
} DEDT_0_T ;
#define WRITE_DEDT0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEDT0_MASK) | ((val << DEDT0_START_BIT) & DEDT0_MASK )); \
   } 

#define ENABLE_DEDT0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEDT0_MASK ); \
   } 

#define DISABLE_DEDT0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEDT0_MASK ); \
   } 

#define READ_DEDT0(base) \
    ((READ_REGISTER_ULONG(base ) & DEDT0_MASK) >> DEDT0_START_BIT )

#define WHEN_DEDT0_HIGH(base) \
     if ( READ_DEDT0(base) )


#define UNLESS_DEDT0_HIGH(base) \
     if (! READ_DEDT0(base) )


#define WAIT_DEDT0_LOW(base) \
    while ( READ_DEDT0(base) );


#define WAIT_DEDT0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEDT0(base) && (--timeout > 0) );


#define WAIT_DEDT0_HIGH(base) \
    while (! READ_DEDT0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT1 
    // 
#define DEDT1_MASK 0x20000U
#define DEDT1_OFFSET 17
#define DEDT1_START_BIT 17
#define DEDT1_WIDTH 1



typedef enum dedt1 {
    DEDT_1_0,
    DEDT_1_1
} DEDT_1_T ;
#define WRITE_DEDT1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEDT1_MASK) | ((val << DEDT1_START_BIT) & DEDT1_MASK )); \
   } 

#define ENABLE_DEDT1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEDT1_MASK ); \
   } 

#define DISABLE_DEDT1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEDT1_MASK ); \
   } 

#define READ_DEDT1(base) \
    ((READ_REGISTER_ULONG(base ) & DEDT1_MASK) >> DEDT1_START_BIT )

#define WHEN_DEDT1_HIGH(base) \
     if ( READ_DEDT1(base) )


#define UNLESS_DEDT1_HIGH(base) \
     if (! READ_DEDT1(base) )


#define WAIT_DEDT1_LOW(base) \
    while ( READ_DEDT1(base) );


#define WAIT_DEDT1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEDT1(base) && (--timeout > 0) );


#define WAIT_DEDT1_HIGH(base) \
    while (! READ_DEDT1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT2 
    // 
#define DEDT2_MASK 0x40000U
#define DEDT2_OFFSET 18
#define DEDT2_START_BIT 18
#define DEDT2_WIDTH 1



typedef enum dedt2 {
    DEDT_2_0,
    DEDT_2_1
} DEDT_2_T ;
#define WRITE_DEDT2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEDT2_MASK) | ((val << DEDT2_START_BIT) & DEDT2_MASK )); \
   } 

#define ENABLE_DEDT2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEDT2_MASK ); \
   } 

#define DISABLE_DEDT2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEDT2_MASK ); \
   } 

#define READ_DEDT2(base) \
    ((READ_REGISTER_ULONG(base ) & DEDT2_MASK) >> DEDT2_START_BIT )

#define WHEN_DEDT2_HIGH(base) \
     if ( READ_DEDT2(base) )


#define UNLESS_DEDT2_HIGH(base) \
     if (! READ_DEDT2(base) )


#define WAIT_DEDT2_LOW(base) \
    while ( READ_DEDT2(base) );


#define WAIT_DEDT2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEDT2(base) && (--timeout > 0) );


#define WAIT_DEDT2_HIGH(base) \
    while (! READ_DEDT2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEDT3 
    // 
#define DEDT3_MASK 0x80000U
#define DEDT3_OFFSET 19
#define DEDT3_START_BIT 19
#define DEDT3_WIDTH 1



typedef enum dedt3 {
    DEDT_3_0,
    DEDT_3_1
} DEDT_3_T ;
#define WRITE_DEDT3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEDT3_MASK) | ((val << DEDT3_START_BIT) & DEDT3_MASK )); \
   } 

#define ENABLE_DEDT3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEDT3_MASK ); \
   } 

#define DISABLE_DEDT3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEDT3_MASK ); \
   } 

#define READ_DEDT3(base) \
    ((READ_REGISTER_ULONG(base ) & DEDT3_MASK) >> DEDT3_START_BIT )

#define WHEN_DEDT3_HIGH(base) \
     if ( READ_DEDT3(base) )


#define UNLESS_DEDT3_HIGH(base) \
     if (! READ_DEDT3(base) )


#define WAIT_DEDT3_LOW(base) \
    while ( READ_DEDT3(base) );


#define WAIT_DEDT3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEDT3(base) && (--timeout > 0) );


#define WAIT_DEDT3_HIGH(base) \
    while (! READ_DEDT3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver Enable de-assertion time 
    // 
#define DEDT4_MASK 0x100000U
#define DEDT4_OFFSET 20
#define DEDT4_START_BIT 20
#define DEDT4_WIDTH 1



typedef enum dedt4 {
    DEDT_4_0,
    DEDT_4_1
} DEDT_4_T ;
#define WRITE_DEDT4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEDT4_MASK) | ((val << DEDT4_START_BIT) & DEDT4_MASK )); \
   } 

#define ENABLE_DEDT4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEDT4_MASK ); \
   } 

#define DISABLE_DEDT4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEDT4_MASK ); \
   } 

#define READ_DEDT4(base) \
    ((READ_REGISTER_ULONG(base ) & DEDT4_MASK) >> DEDT4_START_BIT )

#define WHEN_DEDT4_HIGH(base) \
     if ( READ_DEDT4(base) )


#define UNLESS_DEDT4_HIGH(base) \
     if (! READ_DEDT4(base) )


#define WAIT_DEDT4_LOW(base) \
    while ( READ_DEDT4(base) );


#define WAIT_DEDT4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEDT4(base) && (--timeout > 0) );


#define WAIT_DEDT4_HIGH(base) \
    while (! READ_DEDT4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT0 
    // 
#define DEAT0_MASK 0x200000U
#define DEAT0_OFFSET 21
#define DEAT0_START_BIT 21
#define DEAT0_WIDTH 1



typedef enum deat0 {
    DEAT_0_0,
    DEAT_0_1
} DEAT_0_T ;
#define WRITE_DEAT0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEAT0_MASK) | ((val << DEAT0_START_BIT) & DEAT0_MASK )); \
   } 

#define ENABLE_DEAT0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEAT0_MASK ); \
   } 

#define DISABLE_DEAT0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEAT0_MASK ); \
   } 

#define READ_DEAT0(base) \
    ((READ_REGISTER_ULONG(base ) & DEAT0_MASK) >> DEAT0_START_BIT )

#define WHEN_DEAT0_HIGH(base) \
     if ( READ_DEAT0(base) )


#define UNLESS_DEAT0_HIGH(base) \
     if (! READ_DEAT0(base) )


#define WAIT_DEAT0_LOW(base) \
    while ( READ_DEAT0(base) );


#define WAIT_DEAT0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEAT0(base) && (--timeout > 0) );


#define WAIT_DEAT0_HIGH(base) \
    while (! READ_DEAT0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT1 
    // 
#define DEAT1_MASK 0x400000U
#define DEAT1_OFFSET 22
#define DEAT1_START_BIT 22
#define DEAT1_WIDTH 1



typedef enum deat1 {
    DEAT_1_0,
    DEAT_1_1
} DEAT_1_T ;
#define WRITE_DEAT1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEAT1_MASK) | ((val << DEAT1_START_BIT) & DEAT1_MASK )); \
   } 

#define ENABLE_DEAT1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEAT1_MASK ); \
   } 

#define DISABLE_DEAT1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEAT1_MASK ); \
   } 

#define READ_DEAT1(base) \
    ((READ_REGISTER_ULONG(base ) & DEAT1_MASK) >> DEAT1_START_BIT )

#define WHEN_DEAT1_HIGH(base) \
     if ( READ_DEAT1(base) )


#define UNLESS_DEAT1_HIGH(base) \
     if (! READ_DEAT1(base) )


#define WAIT_DEAT1_LOW(base) \
    while ( READ_DEAT1(base) );


#define WAIT_DEAT1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEAT1(base) && (--timeout > 0) );


#define WAIT_DEAT1_HIGH(base) \
    while (! READ_DEAT1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT2 
    // 
#define DEAT2_MASK 0x800000U
#define DEAT2_OFFSET 23
#define DEAT2_START_BIT 23
#define DEAT2_WIDTH 1



typedef enum deat2 {
    DEAT_2_0,
    DEAT_2_1
} DEAT_2_T ;
#define WRITE_DEAT2(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEAT2_MASK) | ((val << DEAT2_START_BIT) & DEAT2_MASK )); \
   } 

#define ENABLE_DEAT2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEAT2_MASK ); \
   } 

#define DISABLE_DEAT2(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEAT2_MASK ); \
   } 

#define READ_DEAT2(base) \
    ((READ_REGISTER_ULONG(base ) & DEAT2_MASK) >> DEAT2_START_BIT )

#define WHEN_DEAT2_HIGH(base) \
     if ( READ_DEAT2(base) )


#define UNLESS_DEAT2_HIGH(base) \
     if (! READ_DEAT2(base) )


#define WAIT_DEAT2_LOW(base) \
    while ( READ_DEAT2(base) );


#define WAIT_DEAT2_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEAT2(base) && (--timeout > 0) );


#define WAIT_DEAT2_HIGH(base) \
    while (! READ_DEAT2(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DEAT3 
    // 
#define DEAT3_MASK 0x1000000U
#define DEAT3_OFFSET 24
#define DEAT3_START_BIT 24
#define DEAT3_WIDTH 1



typedef enum deat3 {
    DEAT_3_0,
    DEAT_3_1
} DEAT_3_T ;
#define WRITE_DEAT3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEAT3_MASK) | ((val << DEAT3_START_BIT) & DEAT3_MASK )); \
   } 

#define ENABLE_DEAT3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEAT3_MASK ); \
   } 

#define DISABLE_DEAT3(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEAT3_MASK ); \
   } 

#define READ_DEAT3(base) \
    ((READ_REGISTER_ULONG(base ) & DEAT3_MASK) >> DEAT3_START_BIT )

#define WHEN_DEAT3_HIGH(base) \
     if ( READ_DEAT3(base) )


#define UNLESS_DEAT3_HIGH(base) \
     if (! READ_DEAT3(base) )


#define WAIT_DEAT3_LOW(base) \
    while ( READ_DEAT3(base) );


#define WAIT_DEAT3_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEAT3(base) && (--timeout > 0) );


#define WAIT_DEAT3_HIGH(base) \
    while (! READ_DEAT3(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 25:25

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver Enable assertion time 
    // 
#define DEAT4_MASK 0x2000000U
#define DEAT4_OFFSET 25
#define DEAT4_START_BIT 25
#define DEAT4_WIDTH 1



typedef enum deat4 {
    DEAT_4_0,
    DEAT_4_1
} DEAT_4_T ;
#define WRITE_DEAT4(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~DEAT4_MASK) | ((val << DEAT4_START_BIT) & DEAT4_MASK )); \
   } 

#define ENABLE_DEAT4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  DEAT4_MASK ); \
   } 

#define DISABLE_DEAT4(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~DEAT4_MASK ); \
   } 

#define READ_DEAT4(base) \
    ((READ_REGISTER_ULONG(base ) & DEAT4_MASK) >> DEAT4_START_BIT )

#define WHEN_DEAT4_HIGH(base) \
     if ( READ_DEAT4(base) )


#define UNLESS_DEAT4_HIGH(base) \
     if (! READ_DEAT4(base) )


#define WAIT_DEAT4_LOW(base) \
    while ( READ_DEAT4(base) );


#define WAIT_DEAT4_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEAT4(base) && (--timeout > 0) );


#define WAIT_DEAT4_HIGH(base) \
    while (! READ_DEAT4(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 26:26

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout interrupt enable 
    // 
#define RTOIE_MASK 0x4000000U
#define RTOIE_OFFSET 26
#define RTOIE_START_BIT 26
#define RTOIE_WIDTH 1



typedef enum rtoie {
    RTOIE_0,
    RTOIE_1
} RTOIE_T ;
#define WRITE_RTOIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~RTOIE_MASK) | ((val << RTOIE_START_BIT) & RTOIE_MASK )); \
   } 

#define ENABLE_RTOIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  RTOIE_MASK ); \
   } 

#define DISABLE_RTOIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~RTOIE_MASK ); \
   } 

#define READ_RTOIE(base) \
    ((READ_REGISTER_ULONG(base ) & RTOIE_MASK) >> RTOIE_START_BIT )

#define WHEN_RTOIE_HIGH(base) \
     if ( READ_RTOIE(base) )


#define UNLESS_RTOIE_HIGH(base) \
     if (! READ_RTOIE(base) )


#define WAIT_RTOIE_LOW(base) \
    while ( READ_RTOIE(base) );


#define WAIT_RTOIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RTOIE(base) && (--timeout > 0) );


#define WAIT_RTOIE_HIGH(base) \
    while (! READ_RTOIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 27:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of Block interrupt enable 
    // 
#define EOBIE_MASK 0x8000000U
#define EOBIE_OFFSET 27
#define EOBIE_START_BIT 27
#define EOBIE_WIDTH 1



typedef enum eobie {
    EOBIE_0,
    EOBIE_1
} EOBIE_T ;
#define WRITE_EOBIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~EOBIE_MASK) | ((val << EOBIE_START_BIT) & EOBIE_MASK )); \
   } 

#define ENABLE_EOBIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  EOBIE_MASK ); \
   } 

#define DISABLE_EOBIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~EOBIE_MASK ); \
   } 

#define READ_EOBIE(base) \
    ((READ_REGISTER_ULONG(base ) & EOBIE_MASK) >> EOBIE_START_BIT )

#define WHEN_EOBIE_HIGH(base) \
     if ( READ_EOBIE(base) )


#define UNLESS_EOBIE_HIGH(base) \
     if (! READ_EOBIE(base) )


#define WAIT_EOBIE_LOW(base) \
    while ( READ_EOBIE(base) );


#define WAIT_EOBIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EOBIE(base) && (--timeout > 0) );


#define WAIT_EOBIE_HIGH(base) \
    while (! READ_EOBIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr1
//
// Return the value of register CR_1
//
// Notes : Register Control register 1 (CR1) at the offset 0x0, Bits 28:28

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Word length 
    // 
#define M1_MASK 0x10000000U
#define M1_OFFSET 28
#define M1_START_BIT 28
#define M1_WIDTH 1



typedef enum m1 {
    M_1_0,
    M_1_1
} M1_T ;
#define WRITE_M1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  ); \
     WRITE_REGISTER_ULONG( base , (OldValue & ~M1_MASK) | ((val << M1_START_BIT) & M1_MASK )); \
   } 

#define ENABLE_M1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base ); \
     WRITE_REGISTER_ULONG( base , val |  M1_MASK ); \
   } 

#define DISABLE_M1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base  ); \
     WRITE_REGISTER_ULONG( base , val & ~M1_MASK ); \
   } 

#define READ_M1(base) \
    ((READ_REGISTER_ULONG(base ) & M1_MASK) >> M1_START_BIT )

#define WHEN_M1_HIGH(base) \
     if ( READ_M1(base) )


#define UNLESS_M1_HIGH(base) \
     if (! READ_M1(base) )


#define WAIT_M1_LOW(base) \
    while ( READ_M1(base) );


#define WAIT_M1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_M1(base) && (--timeout > 0) );


#define WAIT_M1_HIGH(base) \
    while (! READ_M1(base) );


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
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // bit Address Detection/4-bit Address Detection 
    // 
#define ADDM7_MASK 0x10U
#define ADDM7_OFFSET 4
#define ADDM7_START_BIT 4
#define ADDM7_WIDTH 1


#define CR_2_REG 0x4

typedef enum addm7 {
    ADDM_7_0,
    ADDM_7_1
} ADDM_7_T ;
#define WRITE_ADDM7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ADDM7_MASK) | ((val << ADDM7_START_BIT) & ADDM7_MASK )); \
   } 

#define ENABLE_ADDM7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  ADDM7_MASK ); \
   } 

#define DISABLE_ADDM7(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~ADDM7_MASK ); \
   } 

#define READ_ADDM7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ADDM7_MASK) >> ADDM7_START_BIT )

#define WHEN_ADDM7_HIGH(base) \
     if ( READ_ADDM7(base) )


#define UNLESS_ADDM7_HIGH(base) \
     if (! READ_ADDM7(base) )


#define WAIT_ADDM7_LOW(base) \
    while ( READ_ADDM7(base) );


#define WAIT_ADDM7_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ADDM7(base) && (--timeout > 0) );


#define WAIT_ADDM7_HIGH(base) \
    while (! READ_ADDM7(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN break detection length 
    // 
#define LBDL_MASK 0x20U
#define LBDL_OFFSET 5
#define LBDL_START_BIT 5
#define LBDL_WIDTH 1



typedef enum lbdl {
    LBDL_0,
    LBDL_1
} LBDL_T ;
#define WRITE_LBDL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~LBDL_MASK) | ((val << LBDL_START_BIT) & LBDL_MASK )); \
   } 

#define ENABLE_LBDL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  LBDL_MASK ); \
   } 

#define DISABLE_LBDL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~LBDL_MASK ); \
   } 

#define READ_LBDL(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & LBDL_MASK) >> LBDL_START_BIT )

#define WHEN_LBDL_HIGH(base) \
     if ( READ_LBDL(base) )


#define UNLESS_LBDL_HIGH(base) \
     if (! READ_LBDL(base) )


#define WAIT_LBDL_LOW(base) \
    while ( READ_LBDL(base) );


#define WAIT_LBDL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LBDL(base) && (--timeout > 0) );


#define WAIT_LBDL_HIGH(base) \
    while (! READ_LBDL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN break detection interrupt enable 
    // 
#define LBDIE_MASK 0x40U
#define LBDIE_OFFSET 6
#define LBDIE_START_BIT 6
#define LBDIE_WIDTH 1



typedef enum lbdie {
    LBDIE_0,
    LBDIE_1
} LBDIE_T ;
#define WRITE_LBDIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~LBDIE_MASK) | ((val << LBDIE_START_BIT) & LBDIE_MASK )); \
   } 

#define ENABLE_LBDIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  LBDIE_MASK ); \
   } 

#define DISABLE_LBDIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~LBDIE_MASK ); \
   } 

#define READ_LBDIE(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & LBDIE_MASK) >> LBDIE_START_BIT )

#define WHEN_LBDIE_HIGH(base) \
     if ( READ_LBDIE(base) )


#define UNLESS_LBDIE_HIGH(base) \
     if (! READ_LBDIE(base) )


#define WAIT_LBDIE_LOW(base) \
    while ( READ_LBDIE(base) );


#define WAIT_LBDIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LBDIE(base) && (--timeout > 0) );


#define WAIT_LBDIE_HIGH(base) \
    while (! READ_LBDIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Last bit clock pulse 
    // 
#define LBCL_MASK 0x100U
#define LBCL_OFFSET 8
#define LBCL_START_BIT 8
#define LBCL_WIDTH 1



typedef enum lbcl {
    LBCL_0,
    LBCL_1
} LBCL_T ;
#define WRITE_LBCL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~LBCL_MASK) | ((val << LBCL_START_BIT) & LBCL_MASK )); \
   } 

#define ENABLE_LBCL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  LBCL_MASK ); \
   } 

#define DISABLE_LBCL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~LBCL_MASK ); \
   } 

#define READ_LBCL(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & LBCL_MASK) >> LBCL_START_BIT )

#define WHEN_LBCL_HIGH(base) \
     if ( READ_LBCL(base) )


#define UNLESS_LBCL_HIGH(base) \
     if (! READ_LBCL(base) )


#define WAIT_LBCL_LOW(base) \
    while ( READ_LBCL(base) );


#define WAIT_LBCL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LBCL(base) && (--timeout > 0) );


#define WAIT_LBCL_HIGH(base) \
    while (! READ_LBCL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock phase 
    // 
#define CPHA_MASK 0x200U
#define CPHA_OFFSET 9
#define CPHA_START_BIT 9
#define CPHA_WIDTH 1



typedef enum cpha {
    CPHA_0,
    CPHA_1
} CPHA_T ;
#define WRITE_CPHA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~CPHA_MASK) | ((val << CPHA_START_BIT) & CPHA_MASK )); \
   } 

#define ENABLE_CPHA(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  CPHA_MASK ); \
   } 

#define DISABLE_CPHA(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~CPHA_MASK ); \
   } 

#define READ_CPHA(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & CPHA_MASK) >> CPHA_START_BIT )

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
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock polarity 
    // 
#define CPOL_MASK 0x400U
#define CPOL_OFFSET 10
#define CPOL_START_BIT 10
#define CPOL_WIDTH 1



typedef enum cpol {
    CPOL_0,
    CPOL_1
} CPOL_T ;
#define WRITE_CPOL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~CPOL_MASK) | ((val << CPOL_START_BIT) & CPOL_MASK )); \
   } 

#define ENABLE_CPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  CPOL_MASK ); \
   } 

#define DISABLE_CPOL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~CPOL_MASK ); \
   } 

#define READ_CPOL(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & CPOL_MASK) >> CPOL_START_BIT )

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
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Clock enable 
    // 
#define CLKEN_MASK 0x800U
#define CLKEN_OFFSET 11
#define CLKEN_START_BIT 11
#define CLKEN_WIDTH 1



typedef enum clken {
    CLKEN_0,
    CLKEN_1
} CLKEN_T ;
#define WRITE_CLKEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~CLKEN_MASK) | ((val << CLKEN_START_BIT) & CLKEN_MASK )); \
   } 

#define ENABLE_CLKEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  CLKEN_MASK ); \
   } 

#define DISABLE_CLKEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~CLKEN_MASK ); \
   } 

#define READ_CLKEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & CLKEN_MASK) >> CLKEN_START_BIT )

#define WHEN_CLKEN_HIGH(base) \
     if ( READ_CLKEN(base) )


#define UNLESS_CLKEN_HIGH(base) \
     if (! READ_CLKEN(base) )


#define WAIT_CLKEN_LOW(base) \
    while ( READ_CLKEN(base) );


#define WAIT_CLKEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CLKEN(base) && (--timeout > 0) );


#define WAIT_CLKEN_HIGH(base) \
    while (! READ_CLKEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 12:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // STOP bits 
    // 
#define STOP_MASK 0x3000U
#define STOP_OFFSET 13
#define STOP_START_BIT 12
#define STOP_WIDTH 2



typedef enum stop {
    STOP_0,
    STOP_1
} STOP_T ;
#define READ_STOP(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & STOP_MASK) >> STOP_START_BIT )

#define WRITE_STOP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~STOP_MASK) | ((val << STOP_START_BIT) & STOP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN mode enable 
    // 
#define LINEN_MASK 0x4000U
#define LINEN_OFFSET 14
#define LINEN_START_BIT 14
#define LINEN_WIDTH 1



typedef enum linen {
    LINEN_0,
    LINEN_1
} LINEN_T ;
#define WRITE_LINEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~LINEN_MASK) | ((val << LINEN_START_BIT) & LINEN_MASK )); \
   } 

#define ENABLE_LINEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  LINEN_MASK ); \
   } 

#define DISABLE_LINEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~LINEN_MASK ); \
   } 

#define READ_LINEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & LINEN_MASK) >> LINEN_START_BIT )

#define WHEN_LINEN_HIGH(base) \
     if ( READ_LINEN(base) )


#define UNLESS_LINEN_HIGH(base) \
     if (! READ_LINEN(base) )


#define WAIT_LINEN_LOW(base) \
    while ( READ_LINEN(base) );


#define WAIT_LINEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LINEN(base) && (--timeout > 0) );


#define WAIT_LINEN_HIGH(base) \
    while (! READ_LINEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Swap TX/RX pins 
    // 
#define SWAP_MASK 0x8000U
#define SWAP_OFFSET 15
#define SWAP_START_BIT 15
#define SWAP_WIDTH 1



typedef enum swap {
    SWAP_0,
    SWAP_1
} SWAP_T ;
#define WRITE_SWAP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~SWAP_MASK) | ((val << SWAP_START_BIT) & SWAP_MASK )); \
   } 

#define ENABLE_SWAP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  SWAP_MASK ); \
   } 

#define DISABLE_SWAP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~SWAP_MASK ); \
   } 

#define READ_SWAP(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & SWAP_MASK) >> SWAP_START_BIT )

#define WHEN_SWAP_HIGH(base) \
     if ( READ_SWAP(base) )


#define UNLESS_SWAP_HIGH(base) \
     if (! READ_SWAP(base) )


#define WAIT_SWAP_LOW(base) \
    while ( READ_SWAP(base) );


#define WAIT_SWAP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SWAP(base) && (--timeout > 0) );


#define WAIT_SWAP_HIGH(base) \
    while (! READ_SWAP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RX pin active level inversion 
    // 
#define RXINV_MASK 0x10000U
#define RXINV_OFFSET 16
#define RXINV_START_BIT 16
#define RXINV_WIDTH 1



typedef enum rxinv {
    RXINV_0,
    RXINV_1
} RXINV_T ;
#define WRITE_RXINV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RXINV_MASK) | ((val << RXINV_START_BIT) & RXINV_MASK )); \
   } 

#define ENABLE_RXINV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  RXINV_MASK ); \
   } 

#define DISABLE_RXINV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~RXINV_MASK ); \
   } 

#define READ_RXINV(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RXINV_MASK) >> RXINV_START_BIT )

#define WHEN_RXINV_HIGH(base) \
     if ( READ_RXINV(base) )


#define UNLESS_RXINV_HIGH(base) \
     if (! READ_RXINV(base) )


#define WAIT_RXINV_LOW(base) \
    while ( READ_RXINV(base) );


#define WAIT_RXINV_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXINV(base) && (--timeout > 0) );


#define WAIT_RXINV_HIGH(base) \
    while (! READ_RXINV(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TX pin active level inversion 
    // 
#define TXINV_MASK 0x20000U
#define TXINV_OFFSET 17
#define TXINV_START_BIT 17
#define TXINV_WIDTH 1



typedef enum txinv {
    TXINV_0,
    TXINV_1
} TXINV_T ;
#define WRITE_TXINV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TXINV_MASK) | ((val << TXINV_START_BIT) & TXINV_MASK )); \
   } 

#define ENABLE_TXINV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TXINV_MASK ); \
   } 

#define DISABLE_TXINV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TXINV_MASK ); \
   } 

#define READ_TXINV(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TXINV_MASK) >> TXINV_START_BIT )

#define WHEN_TXINV_HIGH(base) \
     if ( READ_TXINV(base) )


#define UNLESS_TXINV_HIGH(base) \
     if (! READ_TXINV(base) )


#define WAIT_TXINV_LOW(base) \
    while ( READ_TXINV(base) );


#define WAIT_TXINV_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXINV(base) && (--timeout > 0) );


#define WAIT_TXINV_HIGH(base) \
    while (! READ_TXINV(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Binary data inversion 
    // 
#define TAINV_MASK 0x40000U
#define TAINV_OFFSET 18
#define TAINV_START_BIT 18
#define TAINV_WIDTH 1



typedef enum tainv {
    TAINV_0,
    TAINV_1
} TAINV_T ;
#define WRITE_TAINV(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~TAINV_MASK) | ((val << TAINV_START_BIT) & TAINV_MASK )); \
   } 

#define ENABLE_TAINV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  TAINV_MASK ); \
   } 

#define DISABLE_TAINV(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~TAINV_MASK ); \
   } 

#define READ_TAINV(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & TAINV_MASK) >> TAINV_START_BIT )

#define WHEN_TAINV_HIGH(base) \
     if ( READ_TAINV(base) )


#define UNLESS_TAINV_HIGH(base) \
     if (! READ_TAINV(base) )


#define WAIT_TAINV_LOW(base) \
    while ( READ_TAINV(base) );


#define WAIT_TAINV_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TAINV(base) && (--timeout > 0) );


#define WAIT_TAINV_HIGH(base) \
    while (! READ_TAINV(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Most significant bit first 
    // 
#define MSBFIRST_MASK 0x80000U
#define MSBFIRST_OFFSET 19
#define MSBFIRST_START_BIT 19
#define MSBFIRST_WIDTH 1



typedef enum msbfirst {
    MSBFIRST_0,
    MSBFIRST_1
} MSBFIRST_T ;
#define WRITE_MSBFIRST(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~MSBFIRST_MASK) | ((val << MSBFIRST_START_BIT) & MSBFIRST_MASK )); \
   } 

#define ENABLE_MSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  MSBFIRST_MASK ); \
   } 

#define DISABLE_MSBFIRST(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~MSBFIRST_MASK ); \
   } 

#define READ_MSBFIRST(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & MSBFIRST_MASK) >> MSBFIRST_START_BIT )

#define WHEN_MSBFIRST_HIGH(base) \
     if ( READ_MSBFIRST(base) )


#define UNLESS_MSBFIRST_HIGH(base) \
     if (! READ_MSBFIRST(base) )


#define WAIT_MSBFIRST_LOW(base) \
    while ( READ_MSBFIRST(base) );


#define WAIT_MSBFIRST_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MSBFIRST(base) && (--timeout > 0) );


#define WAIT_MSBFIRST_HIGH(base) \
    while (! READ_MSBFIRST(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto baud rate enable 
    // 
#define ABREN_MASK 0x100000U
#define ABREN_OFFSET 20
#define ABREN_START_BIT 20
#define ABREN_WIDTH 1



typedef enum abren {
    ABREN_0,
    ABREN_1
} ABREN_T ;
#define WRITE_ABREN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ABREN_MASK) | ((val << ABREN_START_BIT) & ABREN_MASK )); \
   } 

#define ENABLE_ABREN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  ABREN_MASK ); \
   } 

#define DISABLE_ABREN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~ABREN_MASK ); \
   } 

#define READ_ABREN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ABREN_MASK) >> ABREN_START_BIT )

#define WHEN_ABREN_HIGH(base) \
     if ( READ_ABREN(base) )


#define UNLESS_ABREN_HIGH(base) \
     if (! READ_ABREN(base) )


#define WAIT_ABREN_LOW(base) \
    while ( READ_ABREN(base) );


#define WAIT_ABREN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ABREN(base) && (--timeout > 0) );


#define WAIT_ABREN_HIGH(base) \
    while (! READ_ABREN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ABRMOD0 
    // 
#define ABRMOD0_MASK 0x200000U
#define ABRMOD0_OFFSET 21
#define ABRMOD0_START_BIT 21
#define ABRMOD0_WIDTH 1



typedef enum abrmod0 {
    ABRMOD_0_0,
    ABRMOD_0_1
} ABRMOD_0_T ;
#define WRITE_ABRMOD0(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ABRMOD0_MASK) | ((val << ABRMOD0_START_BIT) & ABRMOD0_MASK )); \
   } 

#define ENABLE_ABRMOD0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  ABRMOD0_MASK ); \
   } 

#define DISABLE_ABRMOD0(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~ABRMOD0_MASK ); \
   } 

#define READ_ABRMOD0(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ABRMOD0_MASK) >> ABRMOD0_START_BIT )

#define WHEN_ABRMOD0_HIGH(base) \
     if ( READ_ABRMOD0(base) )


#define UNLESS_ABRMOD0_HIGH(base) \
     if (! READ_ABRMOD0(base) )


#define WAIT_ABRMOD0_LOW(base) \
    while ( READ_ABRMOD0(base) );


#define WAIT_ABRMOD0_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ABRMOD0(base) && (--timeout > 0) );


#define WAIT_ABRMOD0_HIGH(base) \
    while (! READ_ABRMOD0(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto baud rate mode 
    // 
#define ABRMOD1_MASK 0x400000U
#define ABRMOD1_OFFSET 22
#define ABRMOD1_START_BIT 22
#define ABRMOD1_WIDTH 1



typedef enum abrmod1 {
    ABRMOD_1_0,
    ABRMOD_1_1
} ABRMOD_1_T ;
#define WRITE_ABRMOD1(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ABRMOD1_MASK) | ((val << ABRMOD1_START_BIT) & ABRMOD1_MASK )); \
   } 

#define ENABLE_ABRMOD1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  ABRMOD1_MASK ); \
   } 

#define DISABLE_ABRMOD1(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~ABRMOD1_MASK ); \
   } 

#define READ_ABRMOD1(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ABRMOD1_MASK) >> ABRMOD1_START_BIT )

#define WHEN_ABRMOD1_HIGH(base) \
     if ( READ_ABRMOD1(base) )


#define UNLESS_ABRMOD1_HIGH(base) \
     if (! READ_ABRMOD1(base) )


#define WAIT_ABRMOD1_LOW(base) \
    while ( READ_ABRMOD1(base) );


#define WAIT_ABRMOD1_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ABRMOD1(base) && (--timeout > 0) );


#define WAIT_ABRMOD1_HIGH(base) \
    while (! READ_ABRMOD1(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout enable 
    // 
#define RTOEN_MASK 0x800000U
#define RTOEN_OFFSET 23
#define RTOEN_START_BIT 23
#define RTOEN_WIDTH 1



typedef enum rtoen {
    RTOEN_0,
    RTOEN_1
} RTOEN_T ;
#define WRITE_RTOEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~RTOEN_MASK) | ((val << RTOEN_START_BIT) & RTOEN_MASK )); \
   } 

#define ENABLE_RTOEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, val |  RTOEN_MASK ); \
   } 

#define DISABLE_RTOEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x4 ); \
     WRITE_REGISTER_ULONG( base + 0x4, val & ~RTOEN_MASK ); \
   } 

#define READ_RTOEN(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & RTOEN_MASK) >> RTOEN_START_BIT )

#define WHEN_RTOEN_HIGH(base) \
     if ( READ_RTOEN(base) )


#define UNLESS_RTOEN_HIGH(base) \
     if (! READ_RTOEN(base) )


#define WAIT_RTOEN_LOW(base) \
    while ( READ_RTOEN(base) );


#define WAIT_RTOEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RTOEN(base) && (--timeout > 0) );


#define WAIT_RTOEN_HIGH(base) \
    while (! READ_RTOEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address of the USART node 
    // 
#define ADD0_3_MASK 0xF000000U
#define ADD0_3_OFFSET 27
#define ADD0_3_START_BIT 24
#define ADD0_3_WIDTH 4



typedef enum add0_3 {
    ADD_0__3_0,
    ADD_0__3_1
} ADD_03_T ;
#define READ_ADD0_3(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ADD0_3_MASK) >> ADD0_3_START_BIT )

#define WRITE_ADD0_3(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ADD0_3_MASK) | ((val << ADD0_3_START_BIT) & ADD0_3_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr2
//
// Return the value of register CR_2
//
// Notes : Register Control register 2 (CR2) at the offset 0x4, Bits 28:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Address of the USART node 
    // 
#define ADD4_7_MASK 0xF0000000U
#define ADD4_7_OFFSET 31
#define ADD4_7_START_BIT 28
#define ADD4_7_WIDTH 4



typedef enum add4_7 {
    ADD_4__7_0,
    ADD_4__7_1
} ADD_47_T ;
#define READ_ADD4_7(base) \
    ((READ_REGISTER_ULONG(base + 0x4) & ADD4_7_MASK) >> ADD4_7_START_BIT )

#define WRITE_ADD4_7(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x4); \
     WRITE_REGISTER_ULONG( base + 0x4, (OldValue & ~ADD4_7_MASK) | ((val << ADD4_7_START_BIT) & ADD4_7_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR3
//
// Notes : Register Cr3 at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR_3( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x8, val)

#define SET_BITS_CR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  mask ); \
   } 

#define CLEAR_BITS_CR_3(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8,  val & ~mask ); \
   } 

#define READ_REGISTER_CR_3( base ) \
     READ_REGISTER_ULONG( base + 0x8) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Error interrupt enable 
    // 
#define EIE_MASK 0x1U
#define EIE_OFFSET 0
#define EIE_START_BIT 0
#define EIE_WIDTH 1


#define CR_3_REG 0x8

typedef enum eie {
    EIE_0,
    EIE_1
} EIE_T ;
#define WRITE_EIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~EIE_MASK) | ((val << EIE_START_BIT) & EIE_MASK )); \
   } 

#define ENABLE_EIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  EIE_MASK ); \
   } 

#define DISABLE_EIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~EIE_MASK ); \
   } 

#define READ_EIE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & EIE_MASK) >> EIE_START_BIT )

#define WHEN_EIE_HIGH(base) \
     if ( READ_EIE(base) )


#define UNLESS_EIE_HIGH(base) \
     if (! READ_EIE(base) )


#define WAIT_EIE_LOW(base) \
    while ( READ_EIE(base) );


#define WAIT_EIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EIE(base) && (--timeout > 0) );


#define WAIT_EIE_HIGH(base) \
    while (! READ_EIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ir mode enable 
    // 
#define IREN_MASK 0x2U
#define IREN_OFFSET 1
#define IREN_START_BIT 1
#define IREN_WIDTH 1



typedef enum iren {
    IREN_0,
    IREN_1
} IREN_T ;
#define WRITE_IREN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~IREN_MASK) | ((val << IREN_START_BIT) & IREN_MASK )); \
   } 

#define ENABLE_IREN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  IREN_MASK ); \
   } 

#define DISABLE_IREN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~IREN_MASK ); \
   } 

#define READ_IREN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & IREN_MASK) >> IREN_START_BIT )

#define WHEN_IREN_HIGH(base) \
     if ( READ_IREN(base) )


#define UNLESS_IREN_HIGH(base) \
     if (! READ_IREN(base) )


#define WAIT_IREN_LOW(base) \
    while ( READ_IREN(base) );


#define WAIT_IREN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_IREN(base) && (--timeout > 0) );


#define WAIT_IREN_HIGH(base) \
    while (! READ_IREN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Ir low-power 
    // 
#define IRLP_MASK 0x4U
#define IRLP_OFFSET 2
#define IRLP_START_BIT 2
#define IRLP_WIDTH 1



typedef enum irlp {
    IRLP_0,
    IRLP_1
} IRLP_T ;
#define WRITE_IRLP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~IRLP_MASK) | ((val << IRLP_START_BIT) & IRLP_MASK )); \
   } 

#define ENABLE_IRLP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  IRLP_MASK ); \
   } 

#define DISABLE_IRLP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~IRLP_MASK ); \
   } 

#define READ_IRLP(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & IRLP_MASK) >> IRLP_START_BIT )

#define WHEN_IRLP_HIGH(base) \
     if ( READ_IRLP(base) )


#define UNLESS_IRLP_HIGH(base) \
     if (! READ_IRLP(base) )


#define WAIT_IRLP_LOW(base) \
    while ( READ_IRLP(base) );


#define WAIT_IRLP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_IRLP(base) && (--timeout > 0) );


#define WAIT_IRLP_HIGH(base) \
    while (! READ_IRLP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Half-duplex selection 
    // 
#define HDSEL_MASK 0x8U
#define HDSEL_OFFSET 3
#define HDSEL_START_BIT 3
#define HDSEL_WIDTH 1



typedef enum hdsel {
    HDSEL_0,
    HDSEL_1
} HDSEL_T ;
#define WRITE_HDSEL(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~HDSEL_MASK) | ((val << HDSEL_START_BIT) & HDSEL_MASK )); \
   } 

#define ENABLE_HDSEL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  HDSEL_MASK ); \
   } 

#define DISABLE_HDSEL(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~HDSEL_MASK ); \
   } 

#define READ_HDSEL(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & HDSEL_MASK) >> HDSEL_START_BIT )

#define WHEN_HDSEL_HIGH(base) \
     if ( READ_HDSEL(base) )


#define UNLESS_HDSEL_HIGH(base) \
     if (! READ_HDSEL(base) )


#define WAIT_HDSEL_LOW(base) \
    while ( READ_HDSEL(base) );


#define WAIT_HDSEL_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_HDSEL(base) && (--timeout > 0) );


#define WAIT_HDSEL_HIGH(base) \
    while (! READ_HDSEL(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Smartcard NACK enable 
    // 
#define NACK_MASK 0x10U
#define NACK_OFFSET 4
#define NACK_START_BIT 4
#define NACK_WIDTH 1



typedef enum nack {
    NACK_0,
    NACK_1
} NACK_T ;
#define WRITE_NACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~NACK_MASK) | ((val << NACK_START_BIT) & NACK_MASK )); \
   } 

#define ENABLE_NACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  NACK_MASK ); \
   } 

#define DISABLE_NACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~NACK_MASK ); \
   } 

#define READ_NACK(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & NACK_MASK) >> NACK_START_BIT )

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
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Smartcard mode enable 
    // 
#define SCEN_MASK 0x20U
#define SCEN_OFFSET 5
#define SCEN_START_BIT 5
#define SCEN_WIDTH 1



typedef enum scen {
    SCEN_0,
    SCEN_1
} SCEN_T ;
#define WRITE_SCEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~SCEN_MASK) | ((val << SCEN_START_BIT) & SCEN_MASK )); \
   } 

#define ENABLE_SCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  SCEN_MASK ); \
   } 

#define DISABLE_SCEN(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~SCEN_MASK ); \
   } 

#define READ_SCEN(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & SCEN_MASK) >> SCEN_START_BIT )

#define WHEN_SCEN_HIGH(base) \
     if ( READ_SCEN(base) )


#define UNLESS_SCEN_HIGH(base) \
     if (! READ_SCEN(base) )


#define WAIT_SCEN_LOW(base) \
    while ( READ_SCEN(base) );


#define WAIT_SCEN_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SCEN(base) && (--timeout > 0) );


#define WAIT_SCEN_HIGH(base) \
    while (! READ_SCEN(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable receiver 
    // 
#define DMAR_MASK 0x40U
#define DMAR_OFFSET 6
#define DMAR_START_BIT 6
#define DMAR_WIDTH 1



typedef enum dmar {
    DMAR_0,
    DMAR_1
} DMAR_T ;
#define WRITE_DMAR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DMAR_MASK) | ((val << DMAR_START_BIT) & DMAR_MASK )); \
   } 

#define ENABLE_DMAR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DMAR_MASK ); \
   } 

#define DISABLE_DMAR(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DMAR_MASK ); \
   } 

#define READ_DMAR(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DMAR_MASK) >> DMAR_START_BIT )

#define WHEN_DMAR_HIGH(base) \
     if ( READ_DMAR(base) )


#define UNLESS_DMAR_HIGH(base) \
     if (! READ_DMAR(base) )


#define WAIT_DMAR_LOW(base) \
    while ( READ_DMAR(base) );


#define WAIT_DMAR_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMAR(base) && (--timeout > 0) );


#define WAIT_DMAR_HIGH(base) \
    while (! READ_DMAR(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA enable transmitter 
    // 
#define DMAT_MASK 0x80U
#define DMAT_OFFSET 7
#define DMAT_START_BIT 7
#define DMAT_WIDTH 1



typedef enum dmat {
    DMAT_0,
    DMAT_1
} DMAT_T ;
#define WRITE_DMAT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DMAT_MASK) | ((val << DMAT_START_BIT) & DMAT_MASK )); \
   } 

#define ENABLE_DMAT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DMAT_MASK ); \
   } 

#define DISABLE_DMAT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DMAT_MASK ); \
   } 

#define READ_DMAT(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DMAT_MASK) >> DMAT_START_BIT )

#define WHEN_DMAT_HIGH(base) \
     if ( READ_DMAT(base) )


#define UNLESS_DMAT_HIGH(base) \
     if (! READ_DMAT(base) )


#define WAIT_DMAT_LOW(base) \
    while ( READ_DMAT(base) );


#define WAIT_DMAT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DMAT(base) && (--timeout > 0) );


#define WAIT_DMAT_HIGH(base) \
    while (! READ_DMAT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTS enable 
    // 
#define RTSE_MASK 0x100U
#define RTSE_OFFSET 8
#define RTSE_START_BIT 8
#define RTSE_WIDTH 1



typedef enum rtse {
    RTSE_0,
    RTSE_1
} RTSE_T ;
#define WRITE_RTSE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~RTSE_MASK) | ((val << RTSE_START_BIT) & RTSE_MASK )); \
   } 

#define ENABLE_RTSE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  RTSE_MASK ); \
   } 

#define DISABLE_RTSE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~RTSE_MASK ); \
   } 

#define READ_RTSE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & RTSE_MASK) >> RTSE_START_BIT )

#define WHEN_RTSE_HIGH(base) \
     if ( READ_RTSE(base) )


#define UNLESS_RTSE_HIGH(base) \
     if (! READ_RTSE(base) )


#define WAIT_RTSE_LOW(base) \
    while ( READ_RTSE(base) );


#define WAIT_RTSE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RTSE(base) && (--timeout > 0) );


#define WAIT_RTSE_HIGH(base) \
    while (! READ_RTSE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS enable 
    // 
#define CTSE_MASK 0x200U
#define CTSE_OFFSET 9
#define CTSE_START_BIT 9
#define CTSE_WIDTH 1



typedef enum ctse {
    CTSE_0,
    CTSE_1
} CTSE_T ;
#define WRITE_CTSE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTSE_MASK) | ((val << CTSE_START_BIT) & CTSE_MASK )); \
   } 

#define ENABLE_CTSE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTSE_MASK ); \
   } 

#define DISABLE_CTSE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTSE_MASK ); \
   } 

#define READ_CTSE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTSE_MASK) >> CTSE_START_BIT )

#define WHEN_CTSE_HIGH(base) \
     if ( READ_CTSE(base) )


#define UNLESS_CTSE_HIGH(base) \
     if (! READ_CTSE(base) )


#define WAIT_CTSE_LOW(base) \
    while ( READ_CTSE(base) );


#define WAIT_CTSE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTSE(base) && (--timeout > 0) );


#define WAIT_CTSE_HIGH(base) \
    while (! READ_CTSE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS interrupt enable 
    // 
#define CTSIE_MASK 0x400U
#define CTSIE_OFFSET 10
#define CTSIE_START_BIT 10
#define CTSIE_WIDTH 1



typedef enum ctsie {
    CTSIE_0,
    CTSIE_1
} CTSIE_T ;
#define WRITE_CTSIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~CTSIE_MASK) | ((val << CTSIE_START_BIT) & CTSIE_MASK )); \
   } 

#define ENABLE_CTSIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  CTSIE_MASK ); \
   } 

#define DISABLE_CTSIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~CTSIE_MASK ); \
   } 

#define READ_CTSIE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & CTSIE_MASK) >> CTSIE_START_BIT )

#define WHEN_CTSIE_HIGH(base) \
     if ( READ_CTSIE(base) )


#define UNLESS_CTSIE_HIGH(base) \
     if (! READ_CTSIE(base) )


#define WAIT_CTSIE_LOW(base) \
    while ( READ_CTSIE(base) );


#define WAIT_CTSIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTSIE(base) && (--timeout > 0) );


#define WAIT_CTSIE_HIGH(base) \
    while (! READ_CTSIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // One sample bit method enable 
    // 
#define ONEBIT_MASK 0x800U
#define ONEBIT_OFFSET 11
#define ONEBIT_START_BIT 11
#define ONEBIT_WIDTH 1



typedef enum onebit {
    ONEBIT_0,
    ONEBIT_1
} ONEBIT_T ;
#define WRITE_ONEBIT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~ONEBIT_MASK) | ((val << ONEBIT_START_BIT) & ONEBIT_MASK )); \
   } 

#define ENABLE_ONEBIT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  ONEBIT_MASK ); \
   } 

#define DISABLE_ONEBIT(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~ONEBIT_MASK ); \
   } 

#define READ_ONEBIT(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & ONEBIT_MASK) >> ONEBIT_START_BIT )

#define WHEN_ONEBIT_HIGH(base) \
     if ( READ_ONEBIT(base) )


#define UNLESS_ONEBIT_HIGH(base) \
     if (! READ_ONEBIT(base) )


#define WAIT_ONEBIT_LOW(base) \
    while ( READ_ONEBIT(base) );


#define WAIT_ONEBIT_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ONEBIT(base) && (--timeout > 0) );


#define WAIT_ONEBIT_HIGH(base) \
    while (! READ_ONEBIT(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun Disable 
    // 
#define OVRDIS_MASK 0x1000U
#define OVRDIS_OFFSET 12
#define OVRDIS_START_BIT 12
#define OVRDIS_WIDTH 1



typedef enum ovrdis {
    OVRDIS_0,
    OVRDIS_1
} OVRDIS_T ;
#define WRITE_OVRDIS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~OVRDIS_MASK) | ((val << OVRDIS_START_BIT) & OVRDIS_MASK )); \
   } 

#define ENABLE_OVRDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  OVRDIS_MASK ); \
   } 

#define DISABLE_OVRDIS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~OVRDIS_MASK ); \
   } 

#define READ_OVRDIS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & OVRDIS_MASK) >> OVRDIS_START_BIT )

#define WHEN_OVRDIS_HIGH(base) \
     if ( READ_OVRDIS(base) )


#define UNLESS_OVRDIS_HIGH(base) \
     if (! READ_OVRDIS(base) )


#define WAIT_OVRDIS_LOW(base) \
    while ( READ_OVRDIS(base) );


#define WAIT_OVRDIS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_OVRDIS(base) && (--timeout > 0) );


#define WAIT_OVRDIS_HIGH(base) \
    while (! READ_OVRDIS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DMA Disable on Reception Error 
    // 
#define DDRE_MASK 0x2000U
#define DDRE_OFFSET 13
#define DDRE_START_BIT 13
#define DDRE_WIDTH 1



typedef enum ddre {
    DDRE_0,
    DDRE_1
} DDRE_T ;
#define WRITE_DDRE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DDRE_MASK) | ((val << DDRE_START_BIT) & DDRE_MASK )); \
   } 

#define ENABLE_DDRE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DDRE_MASK ); \
   } 

#define DISABLE_DDRE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DDRE_MASK ); \
   } 

#define READ_DDRE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DDRE_MASK) >> DDRE_START_BIT )

#define WHEN_DDRE_HIGH(base) \
     if ( READ_DDRE(base) )


#define UNLESS_DDRE_HIGH(base) \
     if (! READ_DDRE(base) )


#define WAIT_DDRE_LOW(base) \
    while ( READ_DDRE(base) );


#define WAIT_DDRE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DDRE(base) && (--timeout > 0) );


#define WAIT_DDRE_HIGH(base) \
    while (! READ_DDRE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver enable mode 
    // 
#define DEM_MASK 0x4000U
#define DEM_OFFSET 14
#define DEM_START_BIT 14
#define DEM_WIDTH 1



typedef enum dem {
    DEM_0,
    DEM_1
} DEM_T ;
#define WRITE_DEM(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DEM_MASK) | ((val << DEM_START_BIT) & DEM_MASK )); \
   } 

#define ENABLE_DEM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DEM_MASK ); \
   } 

#define DISABLE_DEM(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DEM_MASK ); \
   } 

#define READ_DEM(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DEM_MASK) >> DEM_START_BIT )

#define WHEN_DEM_HIGH(base) \
     if ( READ_DEM(base) )


#define UNLESS_DEM_HIGH(base) \
     if (! READ_DEM(base) )


#define WAIT_DEM_LOW(base) \
    while ( READ_DEM(base) );


#define WAIT_DEM_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEM(base) && (--timeout > 0) );


#define WAIT_DEM_HIGH(base) \
    while (! READ_DEM(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Driver enable polarity selection 
    // 
#define DEP_MASK 0x8000U
#define DEP_OFFSET 15
#define DEP_START_BIT 15
#define DEP_WIDTH 1



typedef enum dep {
    DEP_0,
    DEP_1
} DEP_T ;
#define WRITE_DEP(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~DEP_MASK) | ((val << DEP_START_BIT) & DEP_MASK )); \
   } 

#define ENABLE_DEP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  DEP_MASK ); \
   } 

#define DISABLE_DEP(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~DEP_MASK ); \
   } 

#define READ_DEP(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & DEP_MASK) >> DEP_START_BIT )

#define WHEN_DEP_HIGH(base) \
     if ( READ_DEP(base) )


#define UNLESS_DEP_HIGH(base) \
     if (! READ_DEP(base) )


#define WAIT_DEP_LOW(base) \
    while ( READ_DEP(base) );


#define WAIT_DEP_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_DEP(base) && (--timeout > 0) );


#define WAIT_DEP_HIGH(base) \
    while (! READ_DEP(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 17:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Smartcard auto-retry count 
    // 
#define SCARCNT_MASK 0xE0000U
#define SCARCNT_OFFSET 19
#define SCARCNT_START_BIT 17
#define SCARCNT_WIDTH 3



typedef enum scarcnt {
    SCARCNT_0,
    SCARCNT_1
} SCARCNT_T ;
#define READ_SCARCNT(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & SCARCNT_MASK) >> SCARCNT_START_BIT )

#define WRITE_SCARCNT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~SCARCNT_MASK) | ((val << SCARCNT_START_BIT) & SCARCNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup from Stop mode interrupt flag selection 
    // 
#define WUS_MASK 0x300000U
#define WUS_OFFSET 21
#define WUS_START_BIT 20
#define WUS_WIDTH 2



typedef enum wus {
    WUS_0,
    WUS_1
} WUS_T ;
#define READ_WUS(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & WUS_MASK) >> WUS_START_BIT )

#define WRITE_WUS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~WUS_MASK) | ((val << WUS_START_BIT) & WUS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr3
//
// Return the value of register CR_3
//
// Notes : Register Control register 3 (CR3) at the offset 0x8, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup from Stop mode interrupt enable 
    // 
#define WUFIE_MASK 0x400000U
#define WUFIE_OFFSET 22
#define WUFIE_START_BIT 22
#define WUFIE_WIDTH 1



typedef enum wufie {
    WUFIE_0,
    WUFIE_1
} WUFIE_T ;
#define WRITE_WUFIE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, (OldValue & ~WUFIE_MASK) | ((val << WUFIE_START_BIT) & WUFIE_MASK )); \
   } 

#define ENABLE_WUFIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x8); \
     WRITE_REGISTER_ULONG( base + 0x8, val |  WUFIE_MASK ); \
   } 

#define DISABLE_WUFIE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x8 ); \
     WRITE_REGISTER_ULONG( base + 0x8, val & ~WUFIE_MASK ); \
   } 

#define READ_WUFIE(base) \
    ((READ_REGISTER_ULONG(base + 0x8) & WUFIE_MASK) >> WUFIE_START_BIT )

#define WHEN_WUFIE_HIGH(base) \
     if ( READ_WUFIE(base) )


#define UNLESS_WUFIE_HIGH(base) \
     if (! READ_WUFIE(base) )


#define WAIT_WUFIE_LOW(base) \
    while ( READ_WUFIE(base) );


#define WAIT_WUFIE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WUFIE(base) && (--timeout > 0) );


#define WAIT_WUFIE_HIGH(base) \
    while (! READ_WUFIE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Brr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BRR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0xC, val)

#define SET_BITS_BRR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, val |  mask ); \
   } 

#define CLEAR_BITS_BRR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC,  val & ~mask ); \
   } 

#define READ_REGISTER_BRR( base ) \
     READ_REGISTER_ULONG( base + 0xC) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Baud rate register (BRR) at the offset 0xC, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DIV_Fraction 
    // 
#define DIV_FRACTION_MASK 0xFU
#define DIV_FRACTION_OFFSET 3
#define DIV_FRACTION_START_BIT 0
#define DIV_FRACTION_WIDTH 4


#define BRR_REG 0xC

typedef enum div_fraction {
    DIV_FRACTION_0,
    DIV_FRACTION_1
} DIV_FRACTION_T ;
#define READ_DIV_FRACTION(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & DIV_FRACTION_MASK) >> DIV_FRACTION_START_BIT )

#define WRITE_DIV_FRACTION(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~DIV_FRACTION_MASK) | ((val << DIV_FRACTION_START_BIT) & DIV_FRACTION_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Brr
//
// Return the value of register BRR
//
// Notes : Register Baud rate register (BRR) at the offset 0xC, Bits 4:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // DIV_Mantissa 
    // 
#define DIV_MANTISSA_MASK 0xFFF0U
#define DIV_MANTISSA_OFFSET 15
#define DIV_MANTISSA_START_BIT 4
#define DIV_MANTISSA_WIDTH 12



typedef enum div_mantissa {
    DIV_MANTISSA_0,
    DIV_MANTISSA_1
} DIV_MANTISSA_T ;
#define READ_DIV_MANTISSA(base) \
    ((READ_REGISTER_ULONG(base + 0xC) & DIV_MANTISSA_MASK) >> DIV_MANTISSA_START_BIT )

#define WRITE_DIV_MANTISSA(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0xC); \
     WRITE_REGISTER_ULONG( base + 0xC, (OldValue & ~DIV_MANTISSA_MASK) | ((val << DIV_MANTISSA_START_BIT) & DIV_MANTISSA_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gtpr
//
// Return the value of register GTPR
//
// Notes : Register Gtpr at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_GTPR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x10, val)

#define SET_BITS_GTPR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, val |  mask ); \
   } 

#define CLEAR_BITS_GTPR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10,  val & ~mask ); \
   } 

#define READ_REGISTER_GTPR( base ) \
     READ_REGISTER_ULONG( base + 0x10) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gtpr
//
// Return the value of register GTPR
//
// Notes : Register Guard time and prescaler register (GTPR) at the offset 0x10, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Prescaler value 
    // 
#define PSC_MASK 0xFFU
#define PSC_OFFSET 7
#define PSC_START_BIT 0
#define PSC_WIDTH 8


#define GTPR_REG 0x10

typedef enum psc {
    PSC_0,
    PSC_1
} PSC_T ;
#define READ_PSC(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & PSC_MASK) >> PSC_START_BIT )

#define WRITE_PSC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~PSC_MASK) | ((val << PSC_START_BIT) & PSC_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Gtpr
//
// Return the value of register GTPR
//
// Notes : Register Guard time and prescaler register (GTPR) at the offset 0x10, Bits 8:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Guard time value 
    // 
#define GT_MASK 0xFF00U
#define GT_OFFSET 15
#define GT_START_BIT 8
#define GT_WIDTH 8



typedef enum gt {
    GT_0,
    GT_1
} GT_T ;
#define READ_GT(base) \
    ((READ_REGISTER_ULONG(base + 0x10) & GT_MASK) >> GT_START_BIT )

#define WRITE_GT(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x10); \
     WRITE_REGISTER_ULONG( base + 0x10, (OldValue & ~GT_MASK) | ((val << GT_START_BIT) & GT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rtor
//
// Return the value of register RTOR
//
// Notes : Register Rtor at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RTOR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x14, val)

#define SET_BITS_RTOR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, val |  mask ); \
   } 

#define CLEAR_BITS_RTOR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14,  val & ~mask ); \
   } 

#define READ_REGISTER_RTOR( base ) \
     READ_REGISTER_ULONG( base + 0x14) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rtor
//
// Return the value of register RTOR
//
// Notes : Register Receiver timeout register (RTOR) at the offset 0x14, Bits 0:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout value 
    // 
#define RTO_MASK 0xFFFFFFU
#define RTO_OFFSET 23
#define RTO_START_BIT 0
#define RTO_WIDTH 24


#define RTOR_REG 0x14

typedef enum rto {
    RTO_0,
    RTO_1
} RTO_T ;
#define READ_RTO(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & RTO_MASK) >> RTO_START_BIT )

#define WRITE_RTO(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~RTO_MASK) | ((val << RTO_START_BIT) & RTO_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rtor
//
// Return the value of register RTOR
//
// Notes : Register Receiver timeout register (RTOR) at the offset 0x14, Bits 24:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Block Length 
    // 
#define BLEN_MASK 0xFF000000U
#define BLEN_OFFSET 31
#define BLEN_START_BIT 24
#define BLEN_WIDTH 8



typedef enum blen {
    BLEN_0,
    BLEN_1
} BLEN_T ;
#define READ_BLEN(base) \
    ((READ_REGISTER_ULONG(base + 0x14) & BLEN_MASK) >> BLEN_START_BIT )

#define WRITE_BLEN(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x14); \
     WRITE_REGISTER_ULONG( base + 0x14, (OldValue & ~BLEN_MASK) | ((val << BLEN_START_BIT) & BLEN_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Rqr at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_RQR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x18, val)

/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x18, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Auto baud rate request 
    // 
#define ABRRQ_MASK 0x1U
#define ABRRQ_OFFSET 0
#define ABRRQ_START_BIT 0
#define ABRRQ_WIDTH 1


#define RQR_REG 0x18

typedef enum abrrq {
    ABRRQ_0,
    ABRRQ_1
} ABRRQ_T ;
#define WRITE_ABRRQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~ABRRQ_MASK) | ((val << ABRRQ_START_BIT) & ABRRQ_MASK )); \
   } 

#define ENABLE_ABRRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  ABRRQ_MASK ); \
   } 

#define DISABLE_ABRRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~ABRRQ_MASK ); \
   } 

#define READ_ABRRQ(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & ABRRQ_MASK) >> ABRRQ_START_BIT )

#define WHEN_ABRRQ_HIGH(base) \
     if ( READ_ABRRQ(base) )


#define UNLESS_ABRRQ_HIGH(base) \
     if (! READ_ABRRQ(base) )


#define WAIT_ABRRQ_LOW(base) \
    while ( READ_ABRRQ(base) );


#define WAIT_ABRRQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ABRRQ(base) && (--timeout > 0) );


#define WAIT_ABRRQ_HIGH(base) \
    while (! READ_ABRRQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x18, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Send break request 
    // 
#define SBKRQ_MASK 0x2U
#define SBKRQ_OFFSET 1
#define SBKRQ_START_BIT 1
#define SBKRQ_WIDTH 1



typedef enum sbkrq {
    SBKRQ_0,
    SBKRQ_1
} SBKRQ_T ;
#define WRITE_SBKRQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~SBKRQ_MASK) | ((val << SBKRQ_START_BIT) & SBKRQ_MASK )); \
   } 

#define ENABLE_SBKRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  SBKRQ_MASK ); \
   } 

#define DISABLE_SBKRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~SBKRQ_MASK ); \
   } 

#define READ_SBKRQ(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & SBKRQ_MASK) >> SBKRQ_START_BIT )

#define WHEN_SBKRQ_HIGH(base) \
     if ( READ_SBKRQ(base) )


#define UNLESS_SBKRQ_HIGH(base) \
     if (! READ_SBKRQ(base) )


#define WAIT_SBKRQ_LOW(base) \
    while ( READ_SBKRQ(base) );


#define WAIT_SBKRQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SBKRQ(base) && (--timeout > 0) );


#define WAIT_SBKRQ_HIGH(base) \
    while (! READ_SBKRQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x18, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mute mode request 
    // 
#define MMRQ_MASK 0x4U
#define MMRQ_OFFSET 2
#define MMRQ_START_BIT 2
#define MMRQ_WIDTH 1



typedef enum mmrq {
    MMRQ_0,
    MMRQ_1
} MMRQ_T ;
#define WRITE_MMRQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~MMRQ_MASK) | ((val << MMRQ_START_BIT) & MMRQ_MASK )); \
   } 

#define ENABLE_MMRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  MMRQ_MASK ); \
   } 

#define DISABLE_MMRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~MMRQ_MASK ); \
   } 

#define READ_MMRQ(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & MMRQ_MASK) >> MMRQ_START_BIT )

#define WHEN_MMRQ_HIGH(base) \
     if ( READ_MMRQ(base) )


#define UNLESS_MMRQ_HIGH(base) \
     if (! READ_MMRQ(base) )


#define WAIT_MMRQ_LOW(base) \
    while ( READ_MMRQ(base) );


#define WAIT_MMRQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_MMRQ(base) && (--timeout > 0) );


#define WAIT_MMRQ_HIGH(base) \
    while (! READ_MMRQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x18, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive data flush request 
    // 
#define RXFRQ_MASK 0x8U
#define RXFRQ_OFFSET 3
#define RXFRQ_START_BIT 3
#define RXFRQ_WIDTH 1



typedef enum rxfrq {
    RXFRQ_0,
    RXFRQ_1
} RXFRQ_T ;
#define WRITE_RXFRQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~RXFRQ_MASK) | ((val << RXFRQ_START_BIT) & RXFRQ_MASK )); \
   } 

#define ENABLE_RXFRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  RXFRQ_MASK ); \
   } 

#define DISABLE_RXFRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~RXFRQ_MASK ); \
   } 

#define READ_RXFRQ(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & RXFRQ_MASK) >> RXFRQ_START_BIT )

#define WHEN_RXFRQ_HIGH(base) \
     if ( READ_RXFRQ(base) )


#define UNLESS_RXFRQ_HIGH(base) \
     if (! READ_RXFRQ(base) )


#define WAIT_RXFRQ_LOW(base) \
    while ( READ_RXFRQ(base) );


#define WAIT_RXFRQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RXFRQ(base) && (--timeout > 0) );


#define WAIT_RXFRQ_HIGH(base) \
    while (! READ_RXFRQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rqr
//
// Return the value of register RQR
//
// Notes : Register Request register (RQR) at the offset 0x18, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit data flush request 
    // 
#define TXFRQ_MASK 0x10U
#define TXFRQ_OFFSET 4
#define TXFRQ_START_BIT 4
#define TXFRQ_WIDTH 1



typedef enum txfrq {
    TXFRQ_0,
    TXFRQ_1
} TXFRQ_T ;
#define WRITE_TXFRQ(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, (OldValue & ~TXFRQ_MASK) | ((val << TXFRQ_START_BIT) & TXFRQ_MASK )); \
   } 

#define ENABLE_TXFRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x18); \
     WRITE_REGISTER_ULONG( base + 0x18, val |  TXFRQ_MASK ); \
   } 

#define DISABLE_TXFRQ(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x18 ); \
     WRITE_REGISTER_ULONG( base + 0x18, val & ~TXFRQ_MASK ); \
   } 

#define READ_TXFRQ(base) \
    ((READ_REGISTER_ULONG(base + 0x18) & TXFRQ_MASK) >> TXFRQ_START_BIT )

#define WHEN_TXFRQ_HIGH(base) \
     if ( READ_TXFRQ(base) )


#define UNLESS_TXFRQ_HIGH(base) \
     if (! READ_TXFRQ(base) )


#define WAIT_TXFRQ_LOW(base) \
    while ( READ_TXFRQ(base) );


#define WAIT_TXFRQ_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TXFRQ(base) && (--timeout > 0) );


#define WAIT_TXFRQ_HIGH(base) \
    while (! READ_TXFRQ(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_ISR( base ) \
     READ_REGISTER_ULONG( base + 0x1C) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // PE 
    // 
#define PE_MASK 0x1U
#define PE_OFFSET 0
#define PE_START_BIT 0
#define PE_WIDTH 1


#define ISR_REG 0x1C

typedef enum pe {
    PE_0,
    PE_1
} PE_T ;
#define WRITE_PE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~PE_MASK) | ((val << PE_START_BIT) & PE_MASK )); \
   } 

#define ENABLE_PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  PE_MASK ); \
   } 

#define DISABLE_PE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~PE_MASK ); \
   } 

#define READ_PE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & PE_MASK) >> PE_START_BIT )

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // FE 
    // 
#define FE_MASK 0x2U
#define FE_OFFSET 1
#define FE_START_BIT 1
#define FE_WIDTH 1



typedef enum fe {
    FE_0,
    FE_1
} FE_T ;
#define WRITE_FE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~FE_MASK) | ((val << FE_START_BIT) & FE_MASK )); \
   } 

#define ENABLE_FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  FE_MASK ); \
   } 

#define DISABLE_FE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~FE_MASK ); \
   } 

#define READ_FE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & FE_MASK) >> FE_START_BIT )

#define WHEN_FE_HIGH(base) \
     if ( READ_FE(base) )


#define UNLESS_FE_HIGH(base) \
     if (! READ_FE(base) )


#define WAIT_FE_LOW(base) \
    while ( READ_FE(base) );


#define WAIT_FE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FE(base) && (--timeout > 0) );


#define WAIT_FE_HIGH(base) \
    while (! READ_FE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // NF 
    // 
#define NF_MASK 0x4U
#define NF_OFFSET 2
#define NF_START_BIT 2
#define NF_WIDTH 1



typedef enum nf {
    NF_0,
    NF_1
} NF_T ;
#define WRITE_NF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~NF_MASK) | ((val << NF_START_BIT) & NF_MASK )); \
   } 

#define ENABLE_NF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  NF_MASK ); \
   } 

#define DISABLE_NF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~NF_MASK ); \
   } 

#define READ_NF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & NF_MASK) >> NF_START_BIT )

#define WHEN_NF_HIGH(base) \
     if ( READ_NF(base) )


#define UNLESS_NF_HIGH(base) \
     if (! READ_NF(base) )


#define WAIT_NF_LOW(base) \
    while ( READ_NF(base) );


#define WAIT_NF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NF(base) && (--timeout > 0) );


#define WAIT_NF_HIGH(base) \
    while (! READ_NF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ORE 
    // 
#define ORE_MASK 0x8U
#define ORE_OFFSET 3
#define ORE_START_BIT 3
#define ORE_WIDTH 1



typedef enum ore {
    ORE_0,
    ORE_1
} ORE_T ;
#define WRITE_ORE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~ORE_MASK) | ((val << ORE_START_BIT) & ORE_MASK )); \
   } 

#define ENABLE_ORE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  ORE_MASK ); \
   } 

#define DISABLE_ORE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~ORE_MASK ); \
   } 

#define READ_ORE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & ORE_MASK) >> ORE_START_BIT )

#define WHEN_ORE_HIGH(base) \
     if ( READ_ORE(base) )


#define UNLESS_ORE_HIGH(base) \
     if (! READ_ORE(base) )


#define WAIT_ORE_LOW(base) \
    while ( READ_ORE(base) );


#define WAIT_ORE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ORE(base) && (--timeout > 0) );


#define WAIT_ORE_HIGH(base) \
    while (! READ_ORE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // IDLE 
    // 
#define IDLE_MASK 0x10U
#define IDLE_OFFSET 4
#define IDLE_START_BIT 4
#define IDLE_WIDTH 1



typedef enum idle {
    IDLE_0,
    IDLE_1
} IDLE_T ;
#define WRITE_IDLE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~IDLE_MASK) | ((val << IDLE_START_BIT) & IDLE_MASK )); \
   } 

#define ENABLE_IDLE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  IDLE_MASK ); \
   } 

#define DISABLE_IDLE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~IDLE_MASK ); \
   } 

#define READ_IDLE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & IDLE_MASK) >> IDLE_START_BIT )

#define WHEN_IDLE_HIGH(base) \
     if ( READ_IDLE(base) )


#define UNLESS_IDLE_HIGH(base) \
     if (! READ_IDLE(base) )


#define WAIT_IDLE_LOW(base) \
    while ( READ_IDLE(base) );


#define WAIT_IDLE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_IDLE(base) && (--timeout > 0) );


#define WAIT_IDLE_HIGH(base) \
    while (! READ_IDLE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RXNE 
    // 
#define RXNE_MASK 0x20U
#define RXNE_OFFSET 5
#define RXNE_START_BIT 5
#define RXNE_WIDTH 1



#define WRITE_RXNE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~RXNE_MASK) | ((val << RXNE_START_BIT) & RXNE_MASK )); \
   } 

#define ENABLE_RXNE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  RXNE_MASK ); \
   } 

#define DISABLE_RXNE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~RXNE_MASK ); \
   } 

#define READ_RXNE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & RXNE_MASK) >> RXNE_START_BIT )

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TC 
    // 
#define TC_MASK 0x40U
#define TC_OFFSET 6
#define TC_START_BIT 6
#define TC_WIDTH 1



typedef enum tc {
    TC_0,
    TC_1
} TC_T ;
#define WRITE_TC(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~TC_MASK) | ((val << TC_START_BIT) & TC_MASK )); \
   } 

#define ENABLE_TC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  TC_MASK ); \
   } 

#define DISABLE_TC(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~TC_MASK ); \
   } 

#define READ_TC(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & TC_MASK) >> TC_START_BIT )

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TXE 
    // 
#define TXE_MASK 0x80U
#define TXE_OFFSET 7
#define TXE_START_BIT 7
#define TXE_WIDTH 1



typedef enum txe {
    TXE_0,
    TXE_1
} TXE_T ;
#define WRITE_TXE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~TXE_MASK) | ((val << TXE_START_BIT) & TXE_MASK )); \
   } 

#define ENABLE_TXE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  TXE_MASK ); \
   } 

#define DISABLE_TXE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~TXE_MASK ); \
   } 

#define READ_TXE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & TXE_MASK) >> TXE_START_BIT )

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LBDF 
    // 
#define LBDF_MASK 0x100U
#define LBDF_OFFSET 8
#define LBDF_START_BIT 8
#define LBDF_WIDTH 1



typedef enum lbdf {
    LBDF_0,
    LBDF_1
} LBDF_T ;
#define WRITE_LBDF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~LBDF_MASK) | ((val << LBDF_START_BIT) & LBDF_MASK )); \
   } 

#define ENABLE_LBDF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  LBDF_MASK ); \
   } 

#define DISABLE_LBDF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~LBDF_MASK ); \
   } 

#define READ_LBDF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & LBDF_MASK) >> LBDF_START_BIT )

#define WHEN_LBDF_HIGH(base) \
     if ( READ_LBDF(base) )


#define UNLESS_LBDF_HIGH(base) \
     if (! READ_LBDF(base) )


#define WAIT_LBDF_LOW(base) \
    while ( READ_LBDF(base) );


#define WAIT_LBDF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LBDF(base) && (--timeout > 0) );


#define WAIT_LBDF_HIGH(base) \
    while (! READ_LBDF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTSIF 
    // 
#define CTSIF_MASK 0x200U
#define CTSIF_OFFSET 9
#define CTSIF_START_BIT 9
#define CTSIF_WIDTH 1



typedef enum ctsif {
    CTSIF_0,
    CTSIF_1
} CTSIF_T ;
#define WRITE_CTSIF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CTSIF_MASK) | ((val << CTSIF_START_BIT) & CTSIF_MASK )); \
   } 

#define ENABLE_CTSIF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CTSIF_MASK ); \
   } 

#define DISABLE_CTSIF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CTSIF_MASK ); \
   } 

#define READ_CTSIF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CTSIF_MASK) >> CTSIF_START_BIT )

#define WHEN_CTSIF_HIGH(base) \
     if ( READ_CTSIF(base) )


#define UNLESS_CTSIF_HIGH(base) \
     if (! READ_CTSIF(base) )


#define WAIT_CTSIF_LOW(base) \
    while ( READ_CTSIF(base) );


#define WAIT_CTSIF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTSIF(base) && (--timeout > 0) );


#define WAIT_CTSIF_HIGH(base) \
    while (! READ_CTSIF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS 
    // 
#define CTS_MASK 0x400U
#define CTS_OFFSET 10
#define CTS_START_BIT 10
#define CTS_WIDTH 1



typedef enum cts {
    CTS_0,
    CTS_1
} CTS_T ;
#define WRITE_CTS(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CTS_MASK) | ((val << CTS_START_BIT) & CTS_MASK )); \
   } 

#define ENABLE_CTS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CTS_MASK ); \
   } 

#define DISABLE_CTS(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CTS_MASK ); \
   } 

#define READ_CTS(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CTS_MASK) >> CTS_START_BIT )

#define WHEN_CTS_HIGH(base) \
     if ( READ_CTS(base) )


#define UNLESS_CTS_HIGH(base) \
     if (! READ_CTS(base) )


#define WAIT_CTS_LOW(base) \
    while ( READ_CTS(base) );


#define WAIT_CTS_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTS(base) && (--timeout > 0) );


#define WAIT_CTS_HIGH(base) \
    while (! READ_CTS(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTOF 
    // 
#define RTOF_MASK 0x800U
#define RTOF_OFFSET 11
#define RTOF_START_BIT 11
#define RTOF_WIDTH 1



typedef enum rtof {
    RTOF_0,
    RTOF_1
} RTOF_T ;
#define WRITE_RTOF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~RTOF_MASK) | ((val << RTOF_START_BIT) & RTOF_MASK )); \
   } 

#define ENABLE_RTOF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  RTOF_MASK ); \
   } 

#define DISABLE_RTOF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~RTOF_MASK ); \
   } 

#define READ_RTOF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & RTOF_MASK) >> RTOF_START_BIT )

#define WHEN_RTOF_HIGH(base) \
     if ( READ_RTOF(base) )


#define UNLESS_RTOF_HIGH(base) \
     if (! READ_RTOF(base) )


#define WAIT_RTOF_LOW(base) \
    while ( READ_RTOF(base) );


#define WAIT_RTOF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RTOF(base) && (--timeout > 0) );


#define WAIT_RTOF_HIGH(base) \
    while (! READ_RTOF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // EOBF 
    // 
#define EOBF_MASK 0x1000U
#define EOBF_OFFSET 12
#define EOBF_START_BIT 12
#define EOBF_WIDTH 1



typedef enum eobf {
    EOBF_0,
    EOBF_1
} EOBF_T ;
#define WRITE_EOBF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~EOBF_MASK) | ((val << EOBF_START_BIT) & EOBF_MASK )); \
   } 

#define ENABLE_EOBF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  EOBF_MASK ); \
   } 

#define DISABLE_EOBF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~EOBF_MASK ); \
   } 

#define READ_EOBF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & EOBF_MASK) >> EOBF_START_BIT )

#define WHEN_EOBF_HIGH(base) \
     if ( READ_EOBF(base) )


#define UNLESS_EOBF_HIGH(base) \
     if (! READ_EOBF(base) )


#define WAIT_EOBF_LOW(base) \
    while ( READ_EOBF(base) );


#define WAIT_EOBF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EOBF(base) && (--timeout > 0) );


#define WAIT_EOBF_HIGH(base) \
    while (! READ_EOBF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ABRE 
    // 
#define ABRE_MASK 0x4000U
#define ABRE_OFFSET 14
#define ABRE_START_BIT 14
#define ABRE_WIDTH 1



typedef enum abre {
    ABRE_0,
    ABRE_1
} ABRE_T ;
#define WRITE_ABRE(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~ABRE_MASK) | ((val << ABRE_START_BIT) & ABRE_MASK )); \
   } 

#define ENABLE_ABRE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  ABRE_MASK ); \
   } 

#define DISABLE_ABRE(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~ABRE_MASK ); \
   } 

#define READ_ABRE(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & ABRE_MASK) >> ABRE_START_BIT )

#define WHEN_ABRE_HIGH(base) \
     if ( READ_ABRE(base) )


#define UNLESS_ABRE_HIGH(base) \
     if (! READ_ABRE(base) )


#define WAIT_ABRE_LOW(base) \
    while ( READ_ABRE(base) );


#define WAIT_ABRE_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ABRE(base) && (--timeout > 0) );


#define WAIT_ABRE_HIGH(base) \
    while (! READ_ABRE(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // ABRF 
    // 
#define ABRF_MASK 0x8000U
#define ABRF_OFFSET 15
#define ABRF_START_BIT 15
#define ABRF_WIDTH 1



typedef enum abrf {
    ABRF_0,
    ABRF_1
} ABRF_T ;
#define WRITE_ABRF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~ABRF_MASK) | ((val << ABRF_START_BIT) & ABRF_MASK )); \
   } 

#define ENABLE_ABRF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  ABRF_MASK ); \
   } 

#define DISABLE_ABRF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~ABRF_MASK ); \
   } 

#define READ_ABRF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & ABRF_MASK) >> ABRF_START_BIT )

#define WHEN_ABRF_HIGH(base) \
     if ( READ_ABRF(base) )


#define UNLESS_ABRF_HIGH(base) \
     if (! READ_ABRF(base) )


#define WAIT_ABRF_LOW(base) \
    while ( READ_ABRF(base) );


#define WAIT_ABRF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ABRF(base) && (--timeout > 0) );


#define WAIT_ABRF_HIGH(base) \
    while (! READ_ABRF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BUSY 
    // 
#define BUSY_MASK 0x10000U
#define BUSY_OFFSET 16
#define BUSY_START_BIT 16
#define BUSY_WIDTH 1



#define WRITE_BUSY(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~BUSY_MASK) | ((val << BUSY_START_BIT) & BUSY_MASK )); \
   } 

#define ENABLE_BUSY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  BUSY_MASK ); \
   } 

#define DISABLE_BUSY(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~BUSY_MASK ); \
   } 

#define READ_BUSY(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & BUSY_MASK) >> BUSY_START_BIT )

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
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CMF 
    // 
#define CMF_MASK 0x20000U
#define CMF_OFFSET 17
#define CMF_START_BIT 17
#define CMF_WIDTH 1



typedef enum cmf {
    CMF_0,
    CMF_1
} CMF_T ;
#define WRITE_CMF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~CMF_MASK) | ((val << CMF_START_BIT) & CMF_MASK )); \
   } 

#define ENABLE_CMF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  CMF_MASK ); \
   } 

#define DISABLE_CMF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~CMF_MASK ); \
   } 

#define READ_CMF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & CMF_MASK) >> CMF_START_BIT )

#define WHEN_CMF_HIGH(base) \
     if ( READ_CMF(base) )


#define UNLESS_CMF_HIGH(base) \
     if (! READ_CMF(base) )


#define WAIT_CMF_LOW(base) \
    while ( READ_CMF(base) );


#define WAIT_CMF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CMF(base) && (--timeout > 0) );


#define WAIT_CMF_HIGH(base) \
    while (! READ_CMF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // SBKF 
    // 
#define SBKF_MASK 0x40000U
#define SBKF_OFFSET 18
#define SBKF_START_BIT 18
#define SBKF_WIDTH 1



typedef enum sbkf {
    SBKF_0,
    SBKF_1
} SBKF_T ;
#define WRITE_SBKF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~SBKF_MASK) | ((val << SBKF_START_BIT) & SBKF_MASK )); \
   } 

#define ENABLE_SBKF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  SBKF_MASK ); \
   } 

#define DISABLE_SBKF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~SBKF_MASK ); \
   } 

#define READ_SBKF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & SBKF_MASK) >> SBKF_START_BIT )

#define WHEN_SBKF_HIGH(base) \
     if ( READ_SBKF(base) )


#define UNLESS_SBKF_HIGH(base) \
     if (! READ_SBKF(base) )


#define WAIT_SBKF_LOW(base) \
    while ( READ_SBKF(base) );


#define WAIT_SBKF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_SBKF(base) && (--timeout > 0) );


#define WAIT_SBKF_HIGH(base) \
    while (! READ_SBKF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RWU 
    // 
#define RWU_MASK 0x80000U
#define RWU_OFFSET 19
#define RWU_START_BIT 19
#define RWU_WIDTH 1



typedef enum rwu {
    RWU_0,
    RWU_1
} RWU_T ;
#define WRITE_RWU(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~RWU_MASK) | ((val << RWU_START_BIT) & RWU_MASK )); \
   } 

#define ENABLE_RWU(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  RWU_MASK ); \
   } 

#define DISABLE_RWU(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~RWU_MASK ); \
   } 

#define READ_RWU(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & RWU_MASK) >> RWU_START_BIT )

#define WHEN_RWU_HIGH(base) \
     if ( READ_RWU(base) )


#define UNLESS_RWU_HIGH(base) \
     if (! READ_RWU(base) )


#define WAIT_RWU_LOW(base) \
    while ( READ_RWU(base) );


#define WAIT_RWU_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RWU(base) && (--timeout > 0) );


#define WAIT_RWU_HIGH(base) \
    while (! READ_RWU(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // WUF 
    // 
#define WUF_MASK 0x100000U
#define WUF_OFFSET 20
#define WUF_START_BIT 20
#define WUF_WIDTH 1



typedef enum wuf {
    WUF_0,
    WUF_1
} WUF_T ;
#define WRITE_WUF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~WUF_MASK) | ((val << WUF_START_BIT) & WUF_MASK )); \
   } 

#define ENABLE_WUF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  WUF_MASK ); \
   } 

#define DISABLE_WUF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~WUF_MASK ); \
   } 

#define READ_WUF(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & WUF_MASK) >> WUF_START_BIT )

#define WHEN_WUF_HIGH(base) \
     if ( READ_WUF(base) )


#define UNLESS_WUF_HIGH(base) \
     if (! READ_WUF(base) )


#define WAIT_WUF_LOW(base) \
    while ( READ_WUF(base) );


#define WAIT_WUF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WUF(base) && (--timeout > 0) );


#define WAIT_WUF_HIGH(base) \
    while (! READ_WUF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TEACK 
    // 
#define TEACK_MASK 0x200000U
#define TEACK_OFFSET 21
#define TEACK_START_BIT 21
#define TEACK_WIDTH 1



typedef enum teack {
    TEACK_0,
    TEACK_1
} TEACK_T ;
#define WRITE_TEACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~TEACK_MASK) | ((val << TEACK_START_BIT) & TEACK_MASK )); \
   } 

#define ENABLE_TEACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  TEACK_MASK ); \
   } 

#define DISABLE_TEACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~TEACK_MASK ); \
   } 

#define READ_TEACK(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & TEACK_MASK) >> TEACK_START_BIT )

#define WHEN_TEACK_HIGH(base) \
     if ( READ_TEACK(base) )


#define UNLESS_TEACK_HIGH(base) \
     if (! READ_TEACK(base) )


#define WAIT_TEACK_LOW(base) \
    while ( READ_TEACK(base) );


#define WAIT_TEACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TEACK(base) && (--timeout > 0) );


#define WAIT_TEACK_HIGH(base) \
    while (! READ_TEACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Interrupt &amp; status register (ISR) at the offset 0x1C, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // REACK 
    // 
#define REACK_MASK 0x400000U
#define REACK_OFFSET 22
#define REACK_START_BIT 22
#define REACK_WIDTH 1



typedef enum reack {
    REACK_0,
    REACK_1
} REACK_T ;
#define WRITE_REACK(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, (OldValue & ~REACK_MASK) | ((val << REACK_START_BIT) & REACK_MASK )); \
   } 

#define ENABLE_REACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x1C); \
     WRITE_REGISTER_ULONG( base + 0x1C, val |  REACK_MASK ); \
   } 

#define DISABLE_REACK(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x1C ); \
     WRITE_REGISTER_ULONG( base + 0x1C, val & ~REACK_MASK ); \
   } 

#define READ_REACK(base) \
    ((READ_REGISTER_ULONG(base + 0x1C) & REACK_MASK) >> REACK_START_BIT )

#define WHEN_REACK_HIGH(base) \
     if ( READ_REACK(base) )


#define UNLESS_REACK_HIGH(base) \
     if (! READ_REACK(base) )


#define WAIT_REACK_LOW(base) \
    while ( READ_REACK(base) );


#define WAIT_REACK_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_REACK(base) && (--timeout > 0) );


#define WAIT_REACK_HIGH(base) \
    while (! READ_REACK(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Icr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ICR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x20, val)

/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Parity error clear flag 
    // 
#define PECF_MASK 0x1U
#define PECF_OFFSET 0
#define PECF_START_BIT 0
#define PECF_WIDTH 1


#define ICR_REG 0x20

typedef enum pecf {
    PECF_0,
    PECF_1
} PECF_T ;
#define WRITE_PECF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~PECF_MASK) | ((val << PECF_START_BIT) & PECF_MASK )); \
   } 

#define ENABLE_PECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  PECF_MASK ); \
   } 

#define DISABLE_PECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~PECF_MASK ); \
   } 

#define READ_PECF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & PECF_MASK) >> PECF_START_BIT )

#define WHEN_PECF_HIGH(base) \
     if ( READ_PECF(base) )


#define UNLESS_PECF_HIGH(base) \
     if (! READ_PECF(base) )


#define WAIT_PECF_LOW(base) \
    while ( READ_PECF(base) );


#define WAIT_PECF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_PECF(base) && (--timeout > 0) );


#define WAIT_PECF_HIGH(base) \
    while (! READ_PECF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Framing error clear flag 
    // 
#define FECF_MASK 0x2U
#define FECF_OFFSET 1
#define FECF_START_BIT 1
#define FECF_WIDTH 1



typedef enum fecf {
    FECF_0,
    FECF_1
} FECF_T ;
#define WRITE_FECF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~FECF_MASK) | ((val << FECF_START_BIT) & FECF_MASK )); \
   } 

#define ENABLE_FECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  FECF_MASK ); \
   } 

#define DISABLE_FECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~FECF_MASK ); \
   } 

#define READ_FECF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & FECF_MASK) >> FECF_START_BIT )

#define WHEN_FECF_HIGH(base) \
     if ( READ_FECF(base) )


#define UNLESS_FECF_HIGH(base) \
     if (! READ_FECF(base) )


#define WAIT_FECF_LOW(base) \
    while ( READ_FECF(base) );


#define WAIT_FECF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_FECF(base) && (--timeout > 0) );


#define WAIT_FECF_HIGH(base) \
    while (! READ_FECF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Noise detected clear flag 
    // 
#define NCF_MASK 0x4U
#define NCF_OFFSET 2
#define NCF_START_BIT 2
#define NCF_WIDTH 1



typedef enum ncf {
    NCF_0,
    NCF_1
} NCF_T ;
#define WRITE_NCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~NCF_MASK) | ((val << NCF_START_BIT) & NCF_MASK )); \
   } 

#define ENABLE_NCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  NCF_MASK ); \
   } 

#define DISABLE_NCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~NCF_MASK ); \
   } 

#define READ_NCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & NCF_MASK) >> NCF_START_BIT )

#define WHEN_NCF_HIGH(base) \
     if ( READ_NCF(base) )


#define UNLESS_NCF_HIGH(base) \
     if (! READ_NCF(base) )


#define WAIT_NCF_LOW(base) \
    while ( READ_NCF(base) );


#define WAIT_NCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_NCF(base) && (--timeout > 0) );


#define WAIT_NCF_HIGH(base) \
    while (! READ_NCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Overrun error clear flag 
    // 
#define ORECF_MASK 0x8U
#define ORECF_OFFSET 3
#define ORECF_START_BIT 3
#define ORECF_WIDTH 1



typedef enum orecf {
    ORECF_0,
    ORECF_1
} ORECF_T ;
#define WRITE_ORECF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~ORECF_MASK) | ((val << ORECF_START_BIT) & ORECF_MASK )); \
   } 

#define ENABLE_ORECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  ORECF_MASK ); \
   } 

#define DISABLE_ORECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~ORECF_MASK ); \
   } 

#define READ_ORECF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & ORECF_MASK) >> ORECF_START_BIT )

#define WHEN_ORECF_HIGH(base) \
     if ( READ_ORECF(base) )


#define UNLESS_ORECF_HIGH(base) \
     if (! READ_ORECF(base) )


#define WAIT_ORECF_LOW(base) \
    while ( READ_ORECF(base) );


#define WAIT_ORECF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_ORECF(base) && (--timeout > 0) );


#define WAIT_ORECF_HIGH(base) \
    while (! READ_ORECF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Idle line detected clear flag 
    // 
#define IDLECF_MASK 0x10U
#define IDLECF_OFFSET 4
#define IDLECF_START_BIT 4
#define IDLECF_WIDTH 1



typedef enum idlecf {
    IDLECF_0,
    IDLECF_1
} IDLECF_T ;
#define WRITE_IDLECF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~IDLECF_MASK) | ((val << IDLECF_START_BIT) & IDLECF_MASK )); \
   } 

#define ENABLE_IDLECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  IDLECF_MASK ); \
   } 

#define DISABLE_IDLECF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~IDLECF_MASK ); \
   } 

#define READ_IDLECF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & IDLECF_MASK) >> IDLECF_START_BIT )

#define WHEN_IDLECF_HIGH(base) \
     if ( READ_IDLECF(base) )


#define UNLESS_IDLECF_HIGH(base) \
     if (! READ_IDLECF(base) )


#define WAIT_IDLECF_LOW(base) \
    while ( READ_IDLECF(base) );


#define WAIT_IDLECF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_IDLECF(base) && (--timeout > 0) );


#define WAIT_IDLECF_HIGH(base) \
    while (! READ_IDLECF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmission complete clear flag 
    // 
#define TCCF_MASK 0x40U
#define TCCF_OFFSET 6
#define TCCF_START_BIT 6
#define TCCF_WIDTH 1



typedef enum tccf {
    TCCF_0,
    TCCF_1
} TCCF_T ;
#define WRITE_TCCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~TCCF_MASK) | ((val << TCCF_START_BIT) & TCCF_MASK )); \
   } 

#define ENABLE_TCCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  TCCF_MASK ); \
   } 

#define DISABLE_TCCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~TCCF_MASK ); \
   } 

#define READ_TCCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & TCCF_MASK) >> TCCF_START_BIT )

#define WHEN_TCCF_HIGH(base) \
     if ( READ_TCCF(base) )


#define UNLESS_TCCF_HIGH(base) \
     if (! READ_TCCF(base) )


#define WAIT_TCCF_LOW(base) \
    while ( READ_TCCF(base) );


#define WAIT_TCCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_TCCF(base) && (--timeout > 0) );


#define WAIT_TCCF_HIGH(base) \
    while (! READ_TCCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // LIN break detection clear flag 
    // 
#define LBDCF_MASK 0x100U
#define LBDCF_OFFSET 8
#define LBDCF_START_BIT 8
#define LBDCF_WIDTH 1



typedef enum lbdcf {
    LBDCF_0,
    LBDCF_1
} LBDCF_T ;
#define WRITE_LBDCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~LBDCF_MASK) | ((val << LBDCF_START_BIT) & LBDCF_MASK )); \
   } 

#define ENABLE_LBDCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  LBDCF_MASK ); \
   } 

#define DISABLE_LBDCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~LBDCF_MASK ); \
   } 

#define READ_LBDCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & LBDCF_MASK) >> LBDCF_START_BIT )

#define WHEN_LBDCF_HIGH(base) \
     if ( READ_LBDCF(base) )


#define UNLESS_LBDCF_HIGH(base) \
     if (! READ_LBDCF(base) )


#define WAIT_LBDCF_LOW(base) \
    while ( READ_LBDCF(base) );


#define WAIT_LBDCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_LBDCF(base) && (--timeout > 0) );


#define WAIT_LBDCF_HIGH(base) \
    while (! READ_LBDCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // CTS clear flag 
    // 
#define CTSCF_MASK 0x200U
#define CTSCF_OFFSET 9
#define CTSCF_START_BIT 9
#define CTSCF_WIDTH 1



typedef enum ctscf {
    CTSCF_0,
    CTSCF_1
} CTSCF_T ;
#define WRITE_CTSCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CTSCF_MASK) | ((val << CTSCF_START_BIT) & CTSCF_MASK )); \
   } 

#define ENABLE_CTSCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CTSCF_MASK ); \
   } 

#define DISABLE_CTSCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CTSCF_MASK ); \
   } 

#define READ_CTSCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CTSCF_MASK) >> CTSCF_START_BIT )

#define WHEN_CTSCF_HIGH(base) \
     if ( READ_CTSCF(base) )


#define UNLESS_CTSCF_HIGH(base) \
     if (! READ_CTSCF(base) )


#define WAIT_CTSCF_LOW(base) \
    while ( READ_CTSCF(base) );


#define WAIT_CTSCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CTSCF(base) && (--timeout > 0) );


#define WAIT_CTSCF_HIGH(base) \
    while (! READ_CTSCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receiver timeout clear flag 
    // 
#define RTOCF_MASK 0x800U
#define RTOCF_OFFSET 11
#define RTOCF_START_BIT 11
#define RTOCF_WIDTH 1



typedef enum rtocf {
    RTOCF_0,
    RTOCF_1
} RTOCF_T ;
#define WRITE_RTOCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~RTOCF_MASK) | ((val << RTOCF_START_BIT) & RTOCF_MASK )); \
   } 

#define ENABLE_RTOCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  RTOCF_MASK ); \
   } 

#define DISABLE_RTOCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~RTOCF_MASK ); \
   } 

#define READ_RTOCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & RTOCF_MASK) >> RTOCF_START_BIT )

#define WHEN_RTOCF_HIGH(base) \
     if ( READ_RTOCF(base) )


#define UNLESS_RTOCF_HIGH(base) \
     if (! READ_RTOCF(base) )


#define WAIT_RTOCF_LOW(base) \
    while ( READ_RTOCF(base) );


#define WAIT_RTOCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_RTOCF(base) && (--timeout > 0) );


#define WAIT_RTOCF_HIGH(base) \
    while (! READ_RTOCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // End of block clear flag 
    // 
#define EOBCF_MASK 0x1000U
#define EOBCF_OFFSET 12
#define EOBCF_START_BIT 12
#define EOBCF_WIDTH 1



typedef enum eobcf {
    EOBCF_0,
    EOBCF_1
} EOBCF_T ;
#define WRITE_EOBCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~EOBCF_MASK) | ((val << EOBCF_START_BIT) & EOBCF_MASK )); \
   } 

#define ENABLE_EOBCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  EOBCF_MASK ); \
   } 

#define DISABLE_EOBCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~EOBCF_MASK ); \
   } 

#define READ_EOBCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & EOBCF_MASK) >> EOBCF_START_BIT )

#define WHEN_EOBCF_HIGH(base) \
     if ( READ_EOBCF(base) )


#define UNLESS_EOBCF_HIGH(base) \
     if (! READ_EOBCF(base) )


#define WAIT_EOBCF_LOW(base) \
    while ( READ_EOBCF(base) );


#define WAIT_EOBCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_EOBCF(base) && (--timeout > 0) );


#define WAIT_EOBCF_HIGH(base) \
    while (! READ_EOBCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Character match clear flag 
    // 
#define CMCF_MASK 0x20000U
#define CMCF_OFFSET 17
#define CMCF_START_BIT 17
#define CMCF_WIDTH 1



typedef enum cmcf {
    CMCF_0,
    CMCF_1
} CMCF_T ;
#define WRITE_CMCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~CMCF_MASK) | ((val << CMCF_START_BIT) & CMCF_MASK )); \
   } 

#define ENABLE_CMCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  CMCF_MASK ); \
   } 

#define DISABLE_CMCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~CMCF_MASK ); \
   } 

#define READ_CMCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & CMCF_MASK) >> CMCF_START_BIT )

#define WHEN_CMCF_HIGH(base) \
     if ( READ_CMCF(base) )


#define UNLESS_CMCF_HIGH(base) \
     if (! READ_CMCF(base) )


#define WAIT_CMCF_LOW(base) \
    while ( READ_CMCF(base) );


#define WAIT_CMCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_CMCF(base) && (--timeout > 0) );


#define WAIT_CMCF_HIGH(base) \
    while (! READ_CMCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Icr
//
// Return the value of register ICR
//
// Notes : Register Interrupt flag clear register (ICR) at the offset 0x20, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup from Stop mode clear flag 
    // 
#define WUCF_MASK 0x100000U
#define WUCF_OFFSET 20
#define WUCF_START_BIT 20
#define WUCF_WIDTH 1



typedef enum wucf {
    WUCF_0,
    WUCF_1
} WUCF_T ;
#define WRITE_WUCF(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, (OldValue & ~WUCF_MASK) | ((val << WUCF_START_BIT) & WUCF_MASK )); \
   } 

#define ENABLE_WUCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x20); \
     WRITE_REGISTER_ULONG( base + 0x20, val |  WUCF_MASK ); \
   } 

#define DISABLE_WUCF(base) \
   {\
     ULONG val = READ_REGISTER_ULONG(base + 0x20 ); \
     WRITE_REGISTER_ULONG( base + 0x20, val & ~WUCF_MASK ); \
   } 

#define READ_WUCF(base) \
    ((READ_REGISTER_ULONG(base + 0x20) & WUCF_MASK) >> WUCF_START_BIT )

#define WHEN_WUCF_HIGH(base) \
     if ( READ_WUCF(base) )


#define UNLESS_WUCF_HIGH(base) \
     if (! READ_WUCF(base) )


#define WAIT_WUCF_LOW(base) \
    while ( READ_WUCF(base) );


#define WAIT_WUCF_LOW_WITH_TIMEOUT(base, timeout) \
    while ( READ_WUCF(base) && (--timeout > 0) );


#define WAIT_WUCF_HIGH(base) \
    while (! READ_WUCF(base) );


/////////////////////////////////////////////////////////////////////////
//
// Function : Rdr
//
// Return the value of register RDR
//
// Notes : Register Rdr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_RDR( base ) \
     READ_REGISTER_ULONG( base + 0x24) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Rdr
//
// Return the value of register RDR
//
// Notes : Register Receive data register (RDR) at the offset 0x24, Bits 0:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Receive data value 
    // 
#define RDR_MASK 0x1FFU
#define RDR_OFFSET 8
#define RDR_START_BIT 0
#define RDR_WIDTH 9


#define RDR_REG 0x24

typedef enum rdr {
    RDR_0,
    RDR_1
} RDR_T ;
#define READ_RDR(base) \
    ((READ_REGISTER_ULONG(base + 0x24) & RDR_MASK) >> RDR_START_BIT )

#define WRITE_RDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x24); \
     WRITE_REGISTER_ULONG( base + 0x24, (OldValue & ~RDR_MASK) | ((val << RDR_START_BIT) & RDR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tdr
//
// Return the value of register TDR
//
// Notes : Register Tdr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TDR( base,  val) \
     WRITE_REGISTER_ULONG( base + 0x28, val)

#define SET_BITS_TDR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, val |  mask ); \
   } 

#define CLEAR_BITS_TDR(base, mask) \
   {\
     ULONG val = READ_REGISTER_ULONG( base + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28,  val & ~mask ); \
   } 

#define READ_REGISTER_TDR( base ) \
     READ_REGISTER_ULONG( base + 0x28) 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tdr
//
// Return the value of register TDR
//
// Notes : Register Transmit data register (TDR) at the offset 0x28, Bits 0:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Transmit data value 
    // 
#define TDR_MASK 0x1FFU
#define TDR_OFFSET 8
#define TDR_START_BIT 0
#define TDR_WIDTH 9


#define TDR_REG 0x28

typedef enum tdr {
    TDR_0,
    TDR_1
} TDR_T ;
#define READ_TDR(base) \
    ((READ_REGISTER_ULONG(base + 0x28) & TDR_MASK) >> TDR_START_BIT )

#define WRITE_TDR(base, val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( base  + 0x28); \
     WRITE_REGISTER_ULONG( base + 0x28, (OldValue & ~TDR_MASK) | ((val << TDR_START_BIT) & TDR_MASK )); \
   } 

