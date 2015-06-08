/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Stm32/Stm32Spi/macro-c/Stm32Spi.h
// 
//
// Generated on the 06/09/2012 18:22 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by Remi PRUD'HOMME
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht ST Ericsson  2012
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
#define SPI_2 0x40003800
#define SPI_3 0x40003C00
#define SPI_1 0x40013000
#define NB_DEVICE_SPI 3
/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL1
//
// Notes : Register SPI Control Register 1 at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_CONTROL1( y) \
     WRITE_REGISTER_USHORT( 0x40021000 , y)

#define SET_BITS_SPI_CONTROL1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_CONTROL1(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_CONTROL1() \
     READ_REGISTER_USHORT(0x40021000)

/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define CLOCK_PHASE_MASK 0x1U
#define CLOCK_PHASE_OFFSET 0
#define CLOCK_PHASE_STOP_BIT 0
#define CLOCK_PHASE_START_BIT 0
#define CLOCK_PHASE_WIDTH 1


#define SPI_CONTROL_1_REG 0x0

typedef enum ClockPhase {
    FIRST_CLOCK_EGDE,
    SECOND_CLOCK_EGDE
} CLOCK_PHASE_T ;
#define WRITE_SPI_CLOCK_PHASE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ CLOCK_PHASE_MASK) | ((val << CLOCK_PHASE_START_BIT) & CLOCK_PHASE_MASK )); \
   } 

#define ENABLE_SPI_CLOCK_PHASE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  CLOCK_PHASE_MASK ); \
   }

#define DISABLE_SPI_CLOCK_PHASE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~CLOCK_PHASE_MASK ); \
   } 

#define READ_SPI_CLOCK_PHASE() \
   ((READ_REGISTER_USHORT(0x40021000) & CLOCK_PHASE_MASK)  >> CLOCK_PHASE_START_BIT)

#define WHEN_SPI_CLOCK_PHASE_HIGH(x) \
     if ( READ_SPI_CLOCK_PHASE() )


#define UNLESS_SPI_CLOCK_PHASE_HIGH() \
     if (! READ_SPI_CLOCK_PHASE() )


#define WAIT_SPI_CLOCK_PHASE_LOW() \
    while ( READ_SPI_CLOCK_PHASE() );


#define WAIT_SPI_CLOCK_PHASE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_CLOCK_PHASE() && (--___t___ > 0)); }


#define WAIT_SPI_CLOCK_PHASE_HIGH() \
    while (! READ_SPI_CLOCK_PHASE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define CLOCK_POLARITY_MASK 0x2U
#define CLOCK_POLARITY_OFFSET 1
#define CLOCK_POLARITY_STOP_BIT 1
#define CLOCK_POLARITY_START_BIT 1
#define CLOCK_POLARITY_WIDTH 1



typedef enum ClockPolarity {
    IDLE_WHEN_1,
    IDLE_WHEN_0
} CLOCK_POLARITY_T ;
#define WRITE_SPI_CLOCK_POLARITY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ CLOCK_POLARITY_MASK) | ((val << CLOCK_POLARITY_START_BIT) & CLOCK_POLARITY_MASK )); \
   } 

#define ENABLE_SPI_CLOCK_POLARITY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  CLOCK_POLARITY_MASK ); \
   }

#define DISABLE_SPI_CLOCK_POLARITY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~CLOCK_POLARITY_MASK ); \
   } 

#define READ_SPI_CLOCK_POLARITY() \
   ((READ_REGISTER_USHORT(0x40021000) & CLOCK_POLARITY_MASK)  >> CLOCK_POLARITY_START_BIT)

#define WHEN_SPI_CLOCK_POLARITY_HIGH(x) \
     if ( READ_SPI_CLOCK_POLARITY() )


#define UNLESS_SPI_CLOCK_POLARITY_HIGH() \
     if (! READ_SPI_CLOCK_POLARITY() )


#define WAIT_SPI_CLOCK_POLARITY_LOW() \
    while ( READ_SPI_CLOCK_POLARITY() );


#define WAIT_SPI_CLOCK_POLARITY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_CLOCK_POLARITY() && (--___t___ > 0)); }


#define WAIT_SPI_CLOCK_POLARITY_HIGH() \
    while (! READ_SPI_CLOCK_POLARITY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define MASTER_MASK 0x4U
#define MASTER_OFFSET 2
#define MASTER_STOP_BIT 2
#define MASTER_START_BIT 2
#define MASTER_WIDTH 1



typedef enum Master {
    MASTER_DISABLE,
    MASTER_ENABLE
} MASTER_T ;
#define WRITE_SPI_MASTER(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ MASTER_MASK) | ((val << MASTER_START_BIT) & MASTER_MASK )); \
   } 

#define  ENABLE_SPI_MASTER() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  MASTER_MASK ); \
   }

#define DISABLE_SPI_MASTER() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~MASTER_MASK ); \
   } 

#define READ_SPI_MASTER() \
   ((READ_REGISTER_USHORT(0x40021000) & MASTER_MASK)  >> MASTER_START_BIT)

#define WHEN_SPI_MASTER_HIGH(x) \
     if ( READ_SPI_MASTER() )


#define UNLESS_SPI_MASTER_HIGH() \
     if (! READ_SPI_MASTER() )


#define WAIT_SPI_MASTER_LOW() \
    while ( READ_SPI_MASTER() );


#define WAIT_SPI_MASTER_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_MASTER() && (--___t___ > 0)); }


#define WAIT_SPI_MASTER_HIGH() \
    while (! READ_SPI_MASTER() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 3:5

//
/////////////////////////////////////////////////////////////////////////
#define BAUD_RATE_CONTROL_MASK 0x38U
#define BAUD_RATE_CONTROL_OFFSET 5
#define BAUD_RATE_CONTROL_STOP_BIT 5
#define BAUD_RATE_CONTROL_START_BIT 3
#define BAUD_RATE_CONTROL_WIDTH 3


typedef enum SpiBaudRate {
    PCLK_PER_2,
    PCLK_PER_4,
    PCLK_PER_8,
    PCLK_PER_16,
    PCLK_PER_32,
    PCLK_PER_64,
    PCLK_PER_128,
    PCLK_PER_256
} SPI_BAUD_RATE_T ;


#define READ_SPI_BAUD_RATE_CONTROL() \
   ((READ_REGISTER_USHORT(0x40021000) & BAUD_RATE_CONTROL_MASK)  >> BAUD_RATE_CONTROL_START_BIT)

#define WRITE_SPI_BAUD_RATE_CONTROL(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ BAUD_RATE_CONTROL_MASK) | ((val << BAUD_RATE_CONTROL_START_BIT) & BAUD_RATE_CONTROL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define SPI_MASK 0x40U
#define SPI_OFFSET 6
#define SPI_STOP_BIT 6
#define SPI_START_BIT 6
#define SPI_WIDTH 1



typedef enum Spi {
    SPI_DISABLE,
    SPI_ENABLE
} SPI_T ;
#define WRITE_SPI_SPI(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ SPI_MASK) | ((val << SPI_START_BIT) & SPI_MASK )); \
   } 

#define  ENABLE_SPI_SPI() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  SPI_MASK ); \
   }

#define DISABLE_SPI_SPI() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~SPI_MASK ); \
   } 

#define READ_SPI_SPI() \
   ((READ_REGISTER_USHORT(0x40021000) & SPI_MASK)  >> SPI_START_BIT)

#define WHEN_SPI_SPI_HIGH(x) \
     if ( READ_SPI_SPI() )


#define UNLESS_SPI_SPI_HIGH() \
     if (! READ_SPI_SPI() )


#define WAIT_SPI_SPI_LOW() \
    while ( READ_SPI_SPI() );


#define WAIT_SPI_SPI_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_SPI() && (--___t___ > 0)); }


#define WAIT_SPI_SPI_HIGH() \
    while (! READ_SPI_SPI() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define LSB_TRANSMITTED_FIRST_MASK 0x80U
#define LSB_TRANSMITTED_FIRST_OFFSET 7
#define LSB_TRANSMITTED_FIRST_STOP_BIT 7
#define LSB_TRANSMITTED_FIRST_START_BIT 7
#define LSB_TRANSMITTED_FIRST_WIDTH 1



typedef enum LsbTransmittedFirst {
    LSB_FIRST_DISABLE,
    LSB_FIRST_ENABLE
} LSB_TRANSMITTED_FIRST_T ;
#define WRITE_SPI_LSB_TRANSMITTED_FIRST(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ LSB_TRANSMITTED_FIRST_MASK) | ((val << LSB_TRANSMITTED_FIRST_START_BIT) & LSB_TRANSMITTED_FIRST_MASK )); \
   } 

#define ENABLE_SPI_LSB_TRANSMITTED_FIRST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  LSB_TRANSMITTED_FIRST_MASK ); \
   }

#define DISABLE_SPI_LSB_TRANSMITTED_FIRST() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~LSB_TRANSMITTED_FIRST_MASK ); \
   } 

#define READ_SPI_LSB_TRANSMITTED_FIRST() \
   ((READ_REGISTER_USHORT(0x40021000) & LSB_TRANSMITTED_FIRST_MASK)  >> LSB_TRANSMITTED_FIRST_START_BIT)

#define WHEN_SPI_LSB_TRANSMITTED_FIRST_HIGH(x) \
     if ( READ_SPI_LSB_TRANSMITTED_FIRST() )


#define UNLESS_SPI_LSB_TRANSMITTED_FIRST_HIGH() \
     if (! READ_SPI_LSB_TRANSMITTED_FIRST() )


#define WAIT_SPI_LSB_TRANSMITTED_FIRST_LOW() \
    while ( READ_SPI_LSB_TRANSMITTED_FIRST() );


#define WAIT_SPI_LSB_TRANSMITTED_FIRST_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_LSB_TRANSMITTED_FIRST() && (--___t___ > 0)); }


#define WAIT_SPI_LSB_TRANSMITTED_FIRST_HIGH() \
    while (! READ_SPI_LSB_TRANSMITTED_FIRST() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////
#define INTERNAL_SLAVE_SELECT_MASK 0x100U
#define INTERNAL_SLAVE_SELECT_OFFSET 8
#define INTERNAL_SLAVE_SELECT_STOP_BIT 8
#define INTERNAL_SLAVE_SELECT_START_BIT 8
#define INTERNAL_SLAVE_SELECT_WIDTH 1



typedef enum InternalSlaveSelect {
    INTERNAL_SLAVE_UN_SELECT,
    INTERNAL_SLAVE_SELECT
} INTERNAL_SLAVE_SELECT_T ;
#define WRITE_SPI_INTERNAL_SLAVE_SELECT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ INTERNAL_SLAVE_SELECT_MASK) | ((val << INTERNAL_SLAVE_SELECT_START_BIT) & INTERNAL_SLAVE_SELECT_MASK )); \
   } 

#define ENABLE_SPI_INTERNAL_SLAVE_SELECT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  INTERNAL_SLAVE_SELECT_MASK ); \
   }

#define DISABLE_SPI_INTERNAL_SLAVE_SELECT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~INTERNAL_SLAVE_SELECT_MASK ); \
   } 

#define READ_SPI_INTERNAL_SLAVE_SELECT() \
   ((READ_REGISTER_USHORT(0x40021000) & INTERNAL_SLAVE_SELECT_MASK)  >> INTERNAL_SLAVE_SELECT_START_BIT)

#define WHEN_SPI_INTERNAL_SLAVE_SELECT_HIGH(x) \
     if ( READ_SPI_INTERNAL_SLAVE_SELECT() )


#define UNLESS_SPI_INTERNAL_SLAVE_SELECT_HIGH() \
     if (! READ_SPI_INTERNAL_SLAVE_SELECT() )


#define WAIT_SPI_INTERNAL_SLAVE_SELECT_LOW() \
    while ( READ_SPI_INTERNAL_SLAVE_SELECT() );


#define WAIT_SPI_INTERNAL_SLAVE_SELECT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_INTERNAL_SLAVE_SELECT() && (--___t___ > 0)); }


#define WAIT_SPI_INTERNAL_SLAVE_SELECT_HIGH() \
    while (! READ_SPI_INTERNAL_SLAVE_SELECT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////
#define SOFTWARE_SLAVE_MANAGEMENT_MASK 0x200U
#define SOFTWARE_SLAVE_MANAGEMENT_OFFSET 9
#define SOFTWARE_SLAVE_MANAGEMENT_STOP_BIT 9
#define SOFTWARE_SLAVE_MANAGEMENT_START_BIT 9
#define SOFTWARE_SLAVE_MANAGEMENT_WIDTH 1



typedef enum SoftwareSlaveManagement {
    SOFTWARE_MANAGEMENT_DISABLE,
    SOFTWARE_MANAGEMENT_ENABLE
} SOFTWARE_SLAVE_MANAGEMENT_T ;
#define WRITE_SPI_SOFTWARE_SLAVE_MANAGEMENT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ SOFTWARE_SLAVE_MANAGEMENT_MASK) | ((val << SOFTWARE_SLAVE_MANAGEMENT_START_BIT) & SOFTWARE_SLAVE_MANAGEMENT_MASK )); \
   } 

#define ENABLE_SPI_SOFTWARE_SLAVE_MANAGEMENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  SOFTWARE_SLAVE_MANAGEMENT_MASK ); \
   }

#define DISABLE_SPI_SOFTWARE_SLAVE_MANAGEMENT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~SOFTWARE_SLAVE_MANAGEMENT_MASK ); \
   } 

#define READ_SPI_SOFTWARE_SLAVE_MANAGEMENT() \
   ((READ_REGISTER_USHORT(0x40021000) & SOFTWARE_SLAVE_MANAGEMENT_MASK)  >> SOFTWARE_SLAVE_MANAGEMENT_START_BIT)

#define WHEN_SPI_SOFTWARE_SLAVE_MANAGEMENT_HIGH(x) \
     if ( READ_SPI_SOFTWARE_SLAVE_MANAGEMENT() )


#define UNLESS_SPI_SOFTWARE_SLAVE_MANAGEMENT_HIGH() \
     if (! READ_SPI_SOFTWARE_SLAVE_MANAGEMENT() )


#define WAIT_SPI_SOFTWARE_SLAVE_MANAGEMENT_LOW() \
    while ( READ_SPI_SOFTWARE_SLAVE_MANAGEMENT() );


#define WAIT_SPI_SOFTWARE_SLAVE_MANAGEMENT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_SOFTWARE_SLAVE_MANAGEMENT() && (--___t___ > 0)); }


#define WAIT_SPI_SOFTWARE_SLAVE_MANAGEMENT_HIGH() \
    while (! READ_SPI_SOFTWARE_SLAVE_MANAGEMENT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////
#define RECEIVE_ONLY_MASK 0x400U
#define RECEIVE_ONLY_OFFSET 10
#define RECEIVE_ONLY_STOP_BIT 10
#define RECEIVE_ONLY_START_BIT 10
#define RECEIVE_ONLY_WIDTH 1



typedef enum ReceiveOnly {
    FULL_DUPLEX,
    RECEIVE_ONLY
} RECEIVE_ONLY_T ;
#define WRITE_SPI_RECEIVE_ONLY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ RECEIVE_ONLY_MASK) | ((val << RECEIVE_ONLY_START_BIT) & RECEIVE_ONLY_MASK )); \
   } 

#define ENABLE_SPI_RECEIVE_ONLY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  RECEIVE_ONLY_MASK ); \
   }

#define DISABLE_SPI_RECEIVE_ONLY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~RECEIVE_ONLY_MASK ); \
   } 

#define READ_SPI_RECEIVE_ONLY() \
   ((READ_REGISTER_USHORT(0x40021000) & RECEIVE_ONLY_MASK)  >> RECEIVE_ONLY_START_BIT)

#define WHEN_SPI_RECEIVE_ONLY_HIGH(x) \
     if ( READ_SPI_RECEIVE_ONLY() )


#define UNLESS_SPI_RECEIVE_ONLY_HIGH() \
     if (! READ_SPI_RECEIVE_ONLY() )


#define WAIT_SPI_RECEIVE_ONLY_LOW() \
    while ( READ_SPI_RECEIVE_ONLY() );


#define WAIT_SPI_RECEIVE_ONLY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_RECEIVE_ONLY() && (--___t___ > 0)); }


#define WAIT_SPI_RECEIVE_ONLY_HIGH() \
    while (! READ_SPI_RECEIVE_ONLY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////
#define DATA_FRAME_FORMAT_MASK 0x800U
#define DATA_FRAME_FORMAT_OFFSET 11
#define DATA_FRAME_FORMAT_STOP_BIT 11
#define DATA_FRAME_FORMAT_START_BIT 11
#define DATA_FRAME_FORMAT_WIDTH 1



typedef enum DataFrameFormat {
    FRAME_16_DISABLE,
    FRAME_16_ENABLE
} DATA_FRAME_FORMAT_T ;
#define WRITE_SPI_DATA_FRAME_FORMAT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ DATA_FRAME_FORMAT_MASK) | ((val << DATA_FRAME_FORMAT_START_BIT) & DATA_FRAME_FORMAT_MASK )); \
   } 

#define ENABLE_SPI_DATA_FRAME_FORMAT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  DATA_FRAME_FORMAT_MASK ); \
   }

#define DISABLE_SPI_DATA_FRAME_FORMAT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~DATA_FRAME_FORMAT_MASK ); \
   } 

#define READ_SPI_DATA_FRAME_FORMAT() \
   ((READ_REGISTER_USHORT(0x40021000) & DATA_FRAME_FORMAT_MASK)  >> DATA_FRAME_FORMAT_START_BIT)

#define WHEN_SPI_DATA_FRAME_FORMAT_HIGH(x) \
     if ( READ_SPI_DATA_FRAME_FORMAT() )


#define UNLESS_SPI_DATA_FRAME_FORMAT_HIGH() \
     if (! READ_SPI_DATA_FRAME_FORMAT() )


#define WAIT_SPI_DATA_FRAME_FORMAT_LOW() \
    while ( READ_SPI_DATA_FRAME_FORMAT() );


#define WAIT_SPI_DATA_FRAME_FORMAT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_DATA_FRAME_FORMAT() && (--___t___ > 0)); }


#define WAIT_SPI_DATA_FRAME_FORMAT_HIGH() \
    while (! READ_SPI_DATA_FRAME_FORMAT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////
#define TRANSMIT_CRC_NEXT_MASK 0x1000U
#define TRANSMIT_CRC_NEXT_OFFSET 12
#define TRANSMIT_CRC_NEXT_STOP_BIT 12
#define TRANSMIT_CRC_NEXT_START_BIT 12
#define TRANSMIT_CRC_NEXT_WIDTH 1



typedef enum TransmitCrcNext {
    TRANSMIT_CRC_NEXT_DISABLE,
    TRANSMIT_CRC_NEXT_ENABLE
} TRANSMIT_CRC_NEXT_T ;
#define WRITE_SPI_TRANSMIT_CRC_NEXT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ TRANSMIT_CRC_NEXT_MASK) | ((val << TRANSMIT_CRC_NEXT_START_BIT) & TRANSMIT_CRC_NEXT_MASK )); \
   } 

#define ENABLE_SPI_TRANSMIT_CRC_NEXT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  TRANSMIT_CRC_NEXT_MASK ); \
   }

#define DISABLE_SPI_TRANSMIT_CRC_NEXT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~TRANSMIT_CRC_NEXT_MASK ); \
   } 

#define READ_SPI_TRANSMIT_CRC_NEXT() \
   ((READ_REGISTER_USHORT(0x40021000) & TRANSMIT_CRC_NEXT_MASK)  >> TRANSMIT_CRC_NEXT_START_BIT)

#define WHEN_SPI_TRANSMIT_CRC_NEXT_HIGH(x) \
     if ( READ_SPI_TRANSMIT_CRC_NEXT() )


#define UNLESS_SPI_TRANSMIT_CRC_NEXT_HIGH() \
     if (! READ_SPI_TRANSMIT_CRC_NEXT() )


#define WAIT_SPI_TRANSMIT_CRC_NEXT_LOW() \
    while ( READ_SPI_TRANSMIT_CRC_NEXT() );


#define WAIT_SPI_TRANSMIT_CRC_NEXT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_TRANSMIT_CRC_NEXT() && (--___t___ > 0)); }


#define WAIT_SPI_TRANSMIT_CRC_NEXT_HIGH() \
    while (! READ_SPI_TRANSMIT_CRC_NEXT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////
#define CRC_CALCULATION_MASK 0x2000U
#define CRC_CALCULATION_OFFSET 13
#define CRC_CALCULATION_STOP_BIT 13
#define CRC_CALCULATION_START_BIT 13
#define CRC_CALCULATION_WIDTH 1



typedef enum CrcCalculation {
    CRC_CALCULATION_DISABLE,
    CRC_CALCULATION_ENABLE
} CRC_CALCULATION_T ;
#define WRITE_SPI_CRC_CALCULATION(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ CRC_CALCULATION_MASK) | ((val << CRC_CALCULATION_START_BIT) & CRC_CALCULATION_MASK )); \
   } 

#define  ENABLE_SPI_CRC_CALCULATION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  CRC_CALCULATION_MASK ); \
   }

#define DISABLE_SPI_CRC_CALCULATION() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~CRC_CALCULATION_MASK ); \
   } 

#define READ_SPI_CRC_CALCULATION() \
   ((READ_REGISTER_USHORT(0x40021000) & CRC_CALCULATION_MASK)  >> CRC_CALCULATION_START_BIT)

#define WHEN_SPI_CRC_CALCULATION_HIGH(x) \
     if ( READ_SPI_CRC_CALCULATION() )


#define UNLESS_SPI_CRC_CALCULATION_HIGH() \
     if (! READ_SPI_CRC_CALCULATION() )


#define WAIT_SPI_CRC_CALCULATION_LOW() \
    while ( READ_SPI_CRC_CALCULATION() );


#define WAIT_SPI_CRC_CALCULATION_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_CRC_CALCULATION() && (--___t___ > 0)); }


#define WAIT_SPI_CRC_CALCULATION_HIGH() \
    while (! READ_SPI_CRC_CALCULATION() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////
#define OUTPUT_MASK 0x4000U
#define OUTPUT_OFFSET 14
#define OUTPUT_STOP_BIT 14
#define OUTPUT_START_BIT 14
#define OUTPUT_WIDTH 1



typedef enum Output {
    OUTPUT_DISABLE,
    OUTPUT_ENABLE
} OUTPUT_T ;
#define WRITE_SPI_OUTPUT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ OUTPUT_MASK) | ((val << OUTPUT_START_BIT) & OUTPUT_MASK )); \
   } 

#define  ENABLE_SPI_OUTPUT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  OUTPUT_MASK ); \
   }

#define DISABLE_SPI_OUTPUT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~OUTPUT_MASK ); \
   } 

#define READ_SPI_OUTPUT() \
   ((READ_REGISTER_USHORT(0x40021000) & OUTPUT_MASK)  >> OUTPUT_START_BIT)

#define WHEN_SPI_OUTPUT_HIGH(x) \
     if ( READ_SPI_OUTPUT() )


#define UNLESS_SPI_OUTPUT_HIGH() \
     if (! READ_SPI_OUTPUT() )


#define WAIT_SPI_OUTPUT_LOW() \
    while ( READ_SPI_OUTPUT() );


#define WAIT_SPI_OUTPUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_OUTPUT() && (--___t___ > 0)); }


#define WAIT_SPI_OUTPUT_HIGH() \
    while (! READ_SPI_OUTPUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Control1
//
// Return the value of register CONTROL_1
//
// Notes : Register SPI Control Register 1 (SPI_CR1) at the offset 0x0, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////
#define BIDIRECTIONNAL_MASK 0x8000U
#define BIDIRECTIONNAL_OFFSET 15
#define BIDIRECTIONNAL_STOP_BIT 15
#define BIDIRECTIONNAL_START_BIT 15
#define BIDIRECTIONNAL_WIDTH 1



typedef enum Bidirectionnal {
    BIDIRECTIONNAL_DISABLE,
    BIDIRECTIONNAL_ENABLE
} BIDIRECTIONNAL_T ;
#define WRITE_SPI_BIDIRECTIONNAL(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, (OldValue & ~ BIDIRECTIONNAL_MASK) | ((val << BIDIRECTIONNAL_START_BIT) & BIDIRECTIONNAL_MASK )); \
   } 

#define ENABLE_SPI_BIDIRECTIONNAL() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT( 0x40021000 , val |  BIDIRECTIONNAL_MASK ); \
   }

#define DISABLE_SPI_BIDIRECTIONNAL() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021000); \
     WRITE_REGISTER_USHORT(0x40021000, val & ~BIDIRECTIONNAL_MASK ); \
   } 

#define READ_SPI_BIDIRECTIONNAL() \
   ((READ_REGISTER_USHORT(0x40021000) & BIDIRECTIONNAL_MASK)  >> BIDIRECTIONNAL_START_BIT)

#define WHEN_SPI_BIDIRECTIONNAL_HIGH(x) \
     if ( READ_SPI_BIDIRECTIONNAL() )


#define UNLESS_SPI_BIDIRECTIONNAL_HIGH() \
     if (! READ_SPI_BIDIRECTIONNAL() )


#define WAIT_SPI_BIDIRECTIONNAL_LOW() \
    while ( READ_SPI_BIDIRECTIONNAL() );


#define WAIT_SPI_BIDIRECTIONNAL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_BIDIRECTIONNAL() && (--___t___ > 0)); }


#define WAIT_SPI_BIDIRECTIONNAL_HIGH() \
    while (! READ_SPI_BIDIRECTIONNAL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_INTERRUPT_ENABLE( y) \
     WRITE_REGISTER_USHORT( 0x40021004 , y)

#define SET_BITS_SPI_INTERRUPT_ENABLE(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_INTERRUPT_ENABLE(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_INTERRUPT_ENABLE() \
     READ_REGISTER_USHORT(0x40021004)

/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 (SPI_CR2) at the offset 0x4, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define RX_BUFFER_DMA_MASK 0x1U
#define RX_BUFFER_DMA_OFFSET 0
#define RX_BUFFER_DMA_STOP_BIT 0
#define RX_BUFFER_DMA_START_BIT 0
#define RX_BUFFER_DMA_WIDTH 1


#define SPI_INTERRUPT_ENABLE_REG 0x4

typedef enum RxBufferDma {
    RX_BUFFER_DMA_DISABLE,
    RX_BUFFER_DMA_ENABLE
} RX_BUFFER_DMA_T ;
#define WRITE_SPI_RX_BUFFER_DMA(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ RX_BUFFER_DMA_MASK) | ((val << RX_BUFFER_DMA_START_BIT) & RX_BUFFER_DMA_MASK )); \
   } 

#define ENABLE_SPI_RX_BUFFER_DMA() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  RX_BUFFER_DMA_MASK ); \
   }

#define DISABLE_SPI_RX_BUFFER_DMA() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~RX_BUFFER_DMA_MASK ); \
   } 

#define READ_SPI_RX_BUFFER_DMA() \
   ((READ_REGISTER_USHORT(0x40021004) & RX_BUFFER_DMA_MASK)  >> RX_BUFFER_DMA_START_BIT)

#define WHEN_SPI_RX_BUFFER_DMA_HIGH(x) \
     if ( READ_SPI_RX_BUFFER_DMA() )


#define UNLESS_SPI_RX_BUFFER_DMA_HIGH() \
     if (! READ_SPI_RX_BUFFER_DMA() )


#define WAIT_SPI_RX_BUFFER_DMA_LOW() \
    while ( READ_SPI_RX_BUFFER_DMA() );


#define WAIT_SPI_RX_BUFFER_DMA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_RX_BUFFER_DMA() && (--___t___ > 0)); }


#define WAIT_SPI_RX_BUFFER_DMA_HIGH() \
    while (! READ_SPI_RX_BUFFER_DMA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 (SPI_CR2) at the offset 0x4, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define TX_BUFFER_DMA_MASK 0x2U
#define TX_BUFFER_DMA_OFFSET 1
#define TX_BUFFER_DMA_STOP_BIT 1
#define TX_BUFFER_DMA_START_BIT 1
#define TX_BUFFER_DMA_WIDTH 1



typedef enum TxBufferDma {
    TX_BUFFER_DMA_DISABLE,
    TX_BUFFER_DMA_ENABLE
} TX_BUFFER_DMA_T ;
#define WRITE_SPI_TX_BUFFER_DMA(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ TX_BUFFER_DMA_MASK) | ((val << TX_BUFFER_DMA_START_BIT) & TX_BUFFER_DMA_MASK )); \
   } 

#define ENABLE_SPI_TX_BUFFER_DMA() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  TX_BUFFER_DMA_MASK ); \
   }

#define DISABLE_SPI_TX_BUFFER_DMA() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~TX_BUFFER_DMA_MASK ); \
   } 

#define READ_SPI_TX_BUFFER_DMA() \
   ((READ_REGISTER_USHORT(0x40021004) & TX_BUFFER_DMA_MASK)  >> TX_BUFFER_DMA_START_BIT)

#define WHEN_SPI_TX_BUFFER_DMA_HIGH(x) \
     if ( READ_SPI_TX_BUFFER_DMA() )


#define UNLESS_SPI_TX_BUFFER_DMA_HIGH() \
     if (! READ_SPI_TX_BUFFER_DMA() )


#define WAIT_SPI_TX_BUFFER_DMA_LOW() \
    while ( READ_SPI_TX_BUFFER_DMA() );


#define WAIT_SPI_TX_BUFFER_DMA_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_TX_BUFFER_DMA() && (--___t___ > 0)); }


#define WAIT_SPI_TX_BUFFER_DMA_HIGH() \
    while (! READ_SPI_TX_BUFFER_DMA() );


/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 (SPI_CR2) at the offset 0x4, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////
#define SS_OUTPUT_MASK 0x4U
#define SS_OUTPUT_OFFSET 2
#define SS_OUTPUT_STOP_BIT 2
#define SS_OUTPUT_START_BIT 2
#define SS_OUTPUT_WIDTH 1



typedef enum SsOutput {
    SS_OUTPUT_DISABLE,
    SS_OUTPUT_ENABLE
} SS_OUTPUT_T ;
#define WRITE_SPI_SS_OUTPUT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ SS_OUTPUT_MASK) | ((val << SS_OUTPUT_START_BIT) & SS_OUTPUT_MASK )); \
   } 

#define ENABLE_SPI_SS_OUTPUT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  SS_OUTPUT_MASK ); \
   }

#define DISABLE_SPI_SS_OUTPUT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~SS_OUTPUT_MASK ); \
   } 

#define READ_SPI_SS_OUTPUT() \
   ((READ_REGISTER_USHORT(0x40021004) & SS_OUTPUT_MASK)  >> SS_OUTPUT_START_BIT)

#define WHEN_SPI_SS_OUTPUT_HIGH(x) \
     if ( READ_SPI_SS_OUTPUT() )


#define UNLESS_SPI_SS_OUTPUT_HIGH() \
     if (! READ_SPI_SS_OUTPUT() )


#define WAIT_SPI_SS_OUTPUT_LOW() \
    while ( READ_SPI_SS_OUTPUT() );


#define WAIT_SPI_SS_OUTPUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_SS_OUTPUT() && (--___t___ > 0)); }


#define WAIT_SPI_SS_OUTPUT_HIGH() \
    while (! READ_SPI_SS_OUTPUT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 (SPI_CR2) at the offset 0x4, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////
#define ERROR_INTERRUPT_MASK 0x20U
#define ERROR_INTERRUPT_OFFSET 5
#define ERROR_INTERRUPT_STOP_BIT 5
#define ERROR_INTERRUPT_START_BIT 5
#define ERROR_INTERRUPT_WIDTH 1



typedef enum ErrorInterrupt {
    INTERRUPT_MASKED,
    INTERRUPT_UNMASKED
} ERROR_INTERRUPT_T ;
#define WRITE_SPI_ERROR_INTERRUPT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ ERROR_INTERRUPT_MASK) | ((val << ERROR_INTERRUPT_START_BIT) & ERROR_INTERRUPT_MASK )); \
   } 

#define ENABLE_SPI_ERROR_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  ERROR_INTERRUPT_MASK ); \
   }

#define DISABLE_SPI_ERROR_INTERRUPT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~ERROR_INTERRUPT_MASK ); \
   } 

#define READ_SPI_ERROR_INTERRUPT() \
   ((READ_REGISTER_USHORT(0x40021004) & ERROR_INTERRUPT_MASK)  >> ERROR_INTERRUPT_START_BIT)

#define WHEN_SPI_ERROR_INTERRUPT_HIGH(x) \
     if ( READ_SPI_ERROR_INTERRUPT() )


#define UNLESS_SPI_ERROR_INTERRUPT_HIGH() \
     if (! READ_SPI_ERROR_INTERRUPT() )


#define WAIT_SPI_ERROR_INTERRUPT_LOW() \
    while ( READ_SPI_ERROR_INTERRUPT() );


#define WAIT_SPI_ERROR_INTERRUPT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_ERROR_INTERRUPT() && (--___t___ > 0)); }


#define WAIT_SPI_ERROR_INTERRUPT_HIGH() \
    while (! READ_SPI_ERROR_INTERRUPT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 (SPI_CR2) at the offset 0x4, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define RX_BUFFER_NOT_EMPTY_MASK 0x40U
#define RX_BUFFER_NOT_EMPTY_OFFSET 6
#define RX_BUFFER_NOT_EMPTY_STOP_BIT 6
#define RX_BUFFER_NOT_EMPTY_START_BIT 6
#define RX_BUFFER_NOT_EMPTY_WIDTH 1



typedef enum RxBufferNotEmpty {
    INTERRUPT_MASKED,
    INTERRUPT_UNMASKED
} RX_BUFFER_NOT_EMPTY_T ;
#define WRITE_SPI_RX_BUFFER_NOT_EMPTY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ RX_BUFFER_NOT_EMPTY_MASK) | ((val << RX_BUFFER_NOT_EMPTY_START_BIT) & RX_BUFFER_NOT_EMPTY_MASK )); \
   } 

#define ENABLE_SPI_RX_BUFFER_NOT_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  RX_BUFFER_NOT_EMPTY_MASK ); \
   }

#define DISABLE_SPI_RX_BUFFER_NOT_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~RX_BUFFER_NOT_EMPTY_MASK ); \
   } 

#define READ_SPI_RX_BUFFER_NOT_EMPTY() \
   ((READ_REGISTER_USHORT(0x40021004) & RX_BUFFER_NOT_EMPTY_MASK)  >> RX_BUFFER_NOT_EMPTY_START_BIT)

#define WHEN_SPI_RX_BUFFER_NOT_EMPTY_HIGH(x) \
     if ( READ_SPI_RX_BUFFER_NOT_EMPTY() )


#define UNLESS_SPI_RX_BUFFER_NOT_EMPTY_HIGH() \
     if (! READ_SPI_RX_BUFFER_NOT_EMPTY() )


#define WAIT_SPI_RX_BUFFER_NOT_EMPTY_LOW() \
    while ( READ_SPI_RX_BUFFER_NOT_EMPTY() );


#define WAIT_SPI_RX_BUFFER_NOT_EMPTY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_RX_BUFFER_NOT_EMPTY() && (--___t___ > 0)); }


#define WAIT_SPI_RX_BUFFER_NOT_EMPTY_HIGH() \
    while (! READ_SPI_RX_BUFFER_NOT_EMPTY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : InterruptEnable
//
// Return the value of register INTERRUPT_ENABLE
//
// Notes : Register Spi Interrupt Enable 2 (SPI_CR2) at the offset 0x4, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define TX_BUFFER_EMPTY_MASK 0x80U
#define TX_BUFFER_EMPTY_OFFSET 7
#define TX_BUFFER_EMPTY_STOP_BIT 7
#define TX_BUFFER_EMPTY_START_BIT 7
#define TX_BUFFER_EMPTY_WIDTH 1



typedef enum TxBufferEmpty {
    INTERRUPT_MASKED,
    INTERRUPT_UNMASKED
} TX_BUFFER_EMPTY_T ;
#define WRITE_SPI_TX_BUFFER_EMPTY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, (OldValue & ~ TX_BUFFER_EMPTY_MASK) | ((val << TX_BUFFER_EMPTY_START_BIT) & TX_BUFFER_EMPTY_MASK )); \
   } 

#define ENABLE_SPI_TX_BUFFER_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT( 0x40021004 , val |  TX_BUFFER_EMPTY_MASK ); \
   }

#define DISABLE_SPI_TX_BUFFER_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021004); \
     WRITE_REGISTER_USHORT(0x40021004, val & ~TX_BUFFER_EMPTY_MASK ); \
   } 

#define READ_SPI_TX_BUFFER_EMPTY() \
   ((READ_REGISTER_USHORT(0x40021004) & TX_BUFFER_EMPTY_MASK)  >> TX_BUFFER_EMPTY_START_BIT)

#define WHEN_SPI_TX_BUFFER_EMPTY_HIGH(x) \
     if ( READ_SPI_TX_BUFFER_EMPTY() )


#define UNLESS_SPI_TX_BUFFER_EMPTY_HIGH() \
     if (! READ_SPI_TX_BUFFER_EMPTY() )


#define WAIT_SPI_TX_BUFFER_EMPTY_LOW() \
    while ( READ_SPI_TX_BUFFER_EMPTY() );


#define WAIT_SPI_TX_BUFFER_EMPTY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_TX_BUFFER_EMPTY() && (--___t___ > 0)); }


#define WAIT_SPI_TX_BUFFER_EMPTY_HIGH() \
    while (! READ_SPI_TX_BUFFER_EMPTY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_STATUS( y) \
     WRITE_REGISTER_USHORT( 0x40021008 , y)

#define SET_BITS_SPI_STATUS(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_STATUS(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_STATUS() \
     READ_REGISTER_USHORT(0x40021008)

/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register (SPI_SR) at the offset 0x8, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define RECEIVE_BUFFER_NOT_EMPTY_MASK 0x1U
#define RECEIVE_BUFFER_NOT_EMPTY_OFFSET 0
#define RECEIVE_BUFFER_NOT_EMPTY_STOP_BIT 0
#define RECEIVE_BUFFER_NOT_EMPTY_START_BIT 0
#define RECEIVE_BUFFER_NOT_EMPTY_WIDTH 1

#define SPI_STATUS_REG 0x8


#define WRITE_SPI_RECEIVE_BUFFER_NOT_EMPTY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ RECEIVE_BUFFER_NOT_EMPTY_MASK) | ((val << RECEIVE_BUFFER_NOT_EMPTY_START_BIT) & RECEIVE_BUFFER_NOT_EMPTY_MASK )); \
   } 

#define ENABLE_SPI_RECEIVE_BUFFER_NOT_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  RECEIVE_BUFFER_NOT_EMPTY_MASK ); \
   }

#define DISABLE_SPI_RECEIVE_BUFFER_NOT_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~RECEIVE_BUFFER_NOT_EMPTY_MASK ); \
   } 

#define READ_SPI_RECEIVE_BUFFER_NOT_EMPTY() \
   ((READ_REGISTER_USHORT(0x40021008) & RECEIVE_BUFFER_NOT_EMPTY_MASK)  >> RECEIVE_BUFFER_NOT_EMPTY_START_BIT)

#define WHEN_SPI_RECEIVE_BUFFER_NOT_EMPTY_HIGH(x) \
     if ( READ_SPI_RECEIVE_BUFFER_NOT_EMPTY() )


#define UNLESS_SPI_RECEIVE_BUFFER_NOT_EMPTY_HIGH() \
     if (! READ_SPI_RECEIVE_BUFFER_NOT_EMPTY() )


#define WAIT_SPI_RECEIVE_BUFFER_NOT_EMPTY_LOW() \
    while ( READ_SPI_RECEIVE_BUFFER_NOT_EMPTY() );


#define WAIT_SPI_RECEIVE_BUFFER_NOT_EMPTY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_RECEIVE_BUFFER_NOT_EMPTY() && (--___t___ > 0)); }


#define WAIT_SPI_RECEIVE_BUFFER_NOT_EMPTY_HIGH() \
    while (! READ_SPI_RECEIVE_BUFFER_NOT_EMPTY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register (SPI_SR) at the offset 0x8, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////
#define TRANSMIT_BUFFER_EMPTY_MASK 0x2U
#define TRANSMIT_BUFFER_EMPTY_OFFSET 1
#define TRANSMIT_BUFFER_EMPTY_STOP_BIT 1
#define TRANSMIT_BUFFER_EMPTY_START_BIT 1
#define TRANSMIT_BUFFER_EMPTY_WIDTH 1



#define WRITE_SPI_TRANSMIT_BUFFER_EMPTY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ TRANSMIT_BUFFER_EMPTY_MASK) | ((val << TRANSMIT_BUFFER_EMPTY_START_BIT) & TRANSMIT_BUFFER_EMPTY_MASK )); \
   } 

#define ENABLE_SPI_TRANSMIT_BUFFER_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  TRANSMIT_BUFFER_EMPTY_MASK ); \
   }

#define DISABLE_SPI_TRANSMIT_BUFFER_EMPTY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~TRANSMIT_BUFFER_EMPTY_MASK ); \
   } 

#define READ_SPI_TRANSMIT_BUFFER_EMPTY() \
   ((READ_REGISTER_USHORT(0x40021008) & TRANSMIT_BUFFER_EMPTY_MASK)  >> TRANSMIT_BUFFER_EMPTY_START_BIT)

#define WHEN_SPI_TRANSMIT_BUFFER_EMPTY_HIGH(x) \
     if ( READ_SPI_TRANSMIT_BUFFER_EMPTY() )


#define UNLESS_SPI_TRANSMIT_BUFFER_EMPTY_HIGH() \
     if (! READ_SPI_TRANSMIT_BUFFER_EMPTY() )


#define WAIT_SPI_TRANSMIT_BUFFER_EMPTY_LOW() \
    while ( READ_SPI_TRANSMIT_BUFFER_EMPTY() );


#define WAIT_SPI_TRANSMIT_BUFFER_EMPTY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_TRANSMIT_BUFFER_EMPTY() && (--___t___ > 0)); }


#define WAIT_SPI_TRANSMIT_BUFFER_EMPTY_HIGH() \
    while (! READ_SPI_TRANSMIT_BUFFER_EMPTY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register (SPI_SR) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////
#define CRC_ERROR_FLAG_MASK 0x10U
#define CRC_ERROR_FLAG_OFFSET 4
#define CRC_ERROR_FLAG_STOP_BIT 4
#define CRC_ERROR_FLAG_START_BIT 4
#define CRC_ERROR_FLAG_WIDTH 1



#define WRITE_SPI_CRC_ERROR_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ CRC_ERROR_FLAG_MASK) | ((val << CRC_ERROR_FLAG_START_BIT) & CRC_ERROR_FLAG_MASK )); \
   } 

#define ENABLE_SPI_CRC_ERROR_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  CRC_ERROR_FLAG_MASK ); \
   }

#define DISABLE_SPI_CRC_ERROR_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~CRC_ERROR_FLAG_MASK ); \
   } 

#define READ_SPI_CRC_ERROR_FLAG() \
   ((READ_REGISTER_USHORT(0x40021008) & CRC_ERROR_FLAG_MASK)  >> CRC_ERROR_FLAG_START_BIT)

#define WHEN_SPI_CRC_ERROR_FLAG_HIGH(x) \
     if ( READ_SPI_CRC_ERROR_FLAG() )


#define UNLESS_SPI_CRC_ERROR_FLAG_HIGH() \
     if (! READ_SPI_CRC_ERROR_FLAG() )


#define WAIT_SPI_CRC_ERROR_FLAG_LOW() \
    while ( READ_SPI_CRC_ERROR_FLAG() );


#define WAIT_SPI_CRC_ERROR_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_CRC_ERROR_FLAG() && (--___t___ > 0)); }


#define WAIT_SPI_CRC_ERROR_FLAG_HIGH() \
    while (! READ_SPI_CRC_ERROR_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register (SPI_SR) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////
#define MODE_FAULT_FLAG_MASK 0x20U
#define MODE_FAULT_FLAG_OFFSET 5
#define MODE_FAULT_FLAG_STOP_BIT 5
#define MODE_FAULT_FLAG_START_BIT 5
#define MODE_FAULT_FLAG_WIDTH 1



#define WRITE_SPI_MODE_FAULT_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ MODE_FAULT_FLAG_MASK) | ((val << MODE_FAULT_FLAG_START_BIT) & MODE_FAULT_FLAG_MASK )); \
   } 

#define ENABLE_SPI_MODE_FAULT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  MODE_FAULT_FLAG_MASK ); \
   }

#define DISABLE_SPI_MODE_FAULT_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~MODE_FAULT_FLAG_MASK ); \
   } 

#define READ_SPI_MODE_FAULT_FLAG() \
   ((READ_REGISTER_USHORT(0x40021008) & MODE_FAULT_FLAG_MASK)  >> MODE_FAULT_FLAG_START_BIT)

#define WHEN_SPI_MODE_FAULT_FLAG_HIGH(x) \
     if ( READ_SPI_MODE_FAULT_FLAG() )


#define UNLESS_SPI_MODE_FAULT_FLAG_HIGH() \
     if (! READ_SPI_MODE_FAULT_FLAG() )


#define WAIT_SPI_MODE_FAULT_FLAG_LOW() \
    while ( READ_SPI_MODE_FAULT_FLAG() );


#define WAIT_SPI_MODE_FAULT_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_MODE_FAULT_FLAG() && (--___t___ > 0)); }


#define WAIT_SPI_MODE_FAULT_FLAG_HIGH() \
    while (! READ_SPI_MODE_FAULT_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register (SPI_SR) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////
#define OVERRUN_FLAG_MASK 0x40U
#define OVERRUN_FLAG_OFFSET 6
#define OVERRUN_FLAG_STOP_BIT 6
#define OVERRUN_FLAG_START_BIT 6
#define OVERRUN_FLAG_WIDTH 1



#define WRITE_SPI_OVERRUN_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ OVERRUN_FLAG_MASK) | ((val << OVERRUN_FLAG_START_BIT) & OVERRUN_FLAG_MASK )); \
   } 

#define ENABLE_SPI_OVERRUN_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  OVERRUN_FLAG_MASK ); \
   }

#define DISABLE_SPI_OVERRUN_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~OVERRUN_FLAG_MASK ); \
   } 

#define READ_SPI_OVERRUN_FLAG() \
   ((READ_REGISTER_USHORT(0x40021008) & OVERRUN_FLAG_MASK)  >> OVERRUN_FLAG_START_BIT)

#define WHEN_SPI_OVERRUN_FLAG_HIGH(x) \
     if ( READ_SPI_OVERRUN_FLAG() )


#define UNLESS_SPI_OVERRUN_FLAG_HIGH() \
     if (! READ_SPI_OVERRUN_FLAG() )


#define WAIT_SPI_OVERRUN_FLAG_LOW() \
    while ( READ_SPI_OVERRUN_FLAG() );


#define WAIT_SPI_OVERRUN_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_OVERRUN_FLAG() && (--___t___ > 0)); }


#define WAIT_SPI_OVERRUN_FLAG_HIGH() \
    while (! READ_SPI_OVERRUN_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Status
//
// Return the value of register STATUS
//
// Notes : Register Spi Status Register (SPI_SR) at the offset 0x8, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define BUSY_FLAG_MASK 0x80U
#define BUSY_FLAG_OFFSET 7
#define BUSY_FLAG_STOP_BIT 7
#define BUSY_FLAG_START_BIT 7
#define BUSY_FLAG_WIDTH 1



#define WRITE_SPI_BUSY_FLAG(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, (OldValue & ~ BUSY_FLAG_MASK) | ((val << BUSY_FLAG_START_BIT) & BUSY_FLAG_MASK )); \
   } 

#define ENABLE_SPI_BUSY_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT( 0x40021008 , val |  BUSY_FLAG_MASK ); \
   }

#define DISABLE_SPI_BUSY_FLAG() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021008); \
     WRITE_REGISTER_USHORT(0x40021008, val & ~BUSY_FLAG_MASK ); \
   } 

#define READ_SPI_BUSY_FLAG() \
   ((READ_REGISTER_USHORT(0x40021008) & BUSY_FLAG_MASK)  >> BUSY_FLAG_START_BIT)

#define WHEN_SPI_BUSY_FLAG_HIGH(x) \
     if ( READ_SPI_BUSY_FLAG() )


#define UNLESS_SPI_BUSY_FLAG_HIGH() \
     if (! READ_SPI_BUSY_FLAG() )


#define WAIT_SPI_BUSY_FLAG_LOW() \
    while ( READ_SPI_BUSY_FLAG() );


#define WAIT_SPI_BUSY_FLAG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_BUSY_FLAG() && (--___t___ > 0)); }


#define WAIT_SPI_BUSY_FLAG_HIGH() \
    while (! READ_SPI_BUSY_FLAG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Data
//
// Return the value of register DATA
//
// Notes : Register Spi Data Register at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_DATA( y) \
     WRITE_REGISTER_USHORT( 0x4002100C , y)

#define SET_BITS_SPI_DATA(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val |  mask ); \
   }

#define CLEAR_BITS_SPI_DATA(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002100C); \
     WRITE_REGISTER_USHORT( 0x4002100C , val & ~mask ); \
   }

#define READ_REGISTER_SPI_DATA() \
     READ_REGISTER_USHORT(0x4002100C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Crc
//
// Return the value of register CRC
//
// Notes : Register Spi Crc Polynomial Register at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_CRC( y) \
     WRITE_REGISTER_USHORT( 0x40021010 , y)

#define SET_BITS_SPI_CRC(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_CRC(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021010); \
     WRITE_REGISTER_USHORT( 0x40021010 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_CRC() \
     READ_REGISTER_USHORT(0x40021010)

/////////////////////////////////////////////////////////////////////////
//
// Function : RxCrc
//
// Return the value of register RX_CRC
//
// Notes : Register Spi Rx Crc Register at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_RX_CRC( y) \
     WRITE_REGISTER_USHORT( 0x40021014 , y)

#define SET_BITS_SPI_RX_CRC(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_RX_CRC(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021014); \
     WRITE_REGISTER_USHORT( 0x40021014 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_RX_CRC() \
     READ_REGISTER_USHORT(0x40021014)

/////////////////////////////////////////////////////////////////////////
//
// Function : TxCrc
//
// Return the value of register TX_CRC
//
// Notes : Register Spi Tx Crc Register at offset 0x18
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_TX_CRC( y) \
     WRITE_REGISTER_USHORT( 0x40021018 , y)

#define SET_BITS_SPI_TX_CRC(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021018); \
     WRITE_REGISTER_USHORT( 0x40021018 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_TX_CRC(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021018); \
     WRITE_REGISTER_USHORT( 0x40021018 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_TX_CRC() \
     READ_REGISTER_USHORT(0x40021018)

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_I2S_CONFIGURATION( y) \
     WRITE_REGISTER_USHORT( 0x4002101C , y)

#define SET_BITS_SPI_I2S_CONFIGURATION(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  mask ); \
   }

#define CLEAR_BITS_SPI_I2S_CONFIGURATION(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val & ~mask ); \
   }

#define READ_REGISTER_SPI_I2S_CONFIGURATION() \
     READ_REGISTER_USHORT(0x4002101C)

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////
#define I2S_CHANNEL_LENGTH_MASK 0x1U
#define I2S_CHANNEL_LENGTH_OFFSET 0
#define I2S_CHANNEL_LENGTH_STOP_BIT 0
#define I2S_CHANNEL_LENGTH_START_BIT 0
#define I2S_CHANNEL_LENGTH_WIDTH 1


#define SPI_I_2S_CONFIGURATION_REG 0x1C

typedef enum I2sChannelLength {
    I2S_CHANNEL_16_WIDE,
    I2S_CHANNEL_32_WIDE
} I_2S_CHANNEL_LENGTH_T ;
#define WRITE_SPI_I2S_CHANNEL_LENGTH(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_CHANNEL_LENGTH_MASK) | ((val << I2S_CHANNEL_LENGTH_START_BIT) & I2S_CHANNEL_LENGTH_MASK )); \
   } 

#define ENABLE_SPI_I2S_CHANNEL_LENGTH() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  I2S_CHANNEL_LENGTH_MASK ); \
   }

#define DISABLE_SPI_I2S_CHANNEL_LENGTH() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, val & ~I2S_CHANNEL_LENGTH_MASK ); \
   } 

#define READ_SPI_I2S_CHANNEL_LENGTH() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_CHANNEL_LENGTH_MASK)  >> I2S_CHANNEL_LENGTH_START_BIT)

#define WHEN_SPI_I2S_CHANNEL_LENGTH_HIGH(x) \
     if ( READ_SPI_I2S_CHANNEL_LENGTH() )


#define UNLESS_SPI_I2S_CHANNEL_LENGTH_HIGH() \
     if (! READ_SPI_I2S_CHANNEL_LENGTH() )


#define WAIT_SPI_I2S_CHANNEL_LENGTH_LOW() \
    while ( READ_SPI_I2S_CHANNEL_LENGTH() );


#define WAIT_SPI_I2S_CHANNEL_LENGTH_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_I2S_CHANNEL_LENGTH() && (--___t___ > 0)); }


#define WAIT_SPI_I2S_CHANNEL_LENGTH_HIGH() \
    while (! READ_SPI_I2S_CHANNEL_LENGTH() );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 1:2

//
/////////////////////////////////////////////////////////////////////////
#define I2S_DATA_LENGTH_MASK 0x6U
#define I2S_DATA_LENGTH_OFFSET 2
#define I2S_DATA_LENGTH_STOP_BIT 2
#define I2S_DATA_LENGTH_START_BIT 1
#define I2S_DATA_LENGTH_WIDTH 2


typedef enum I2sDataLength {
    I2S_16_DATA_LENGTH,
    I2S_24_DATA_LENGTH,
    I2S_32_DATA_LENGTH
} I_2S_DATA_LENGTH_T ;


#define READ_SPI_I2S_DATA_LENGTH() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_DATA_LENGTH_MASK)  >> I2S_DATA_LENGTH_START_BIT)

#define WRITE_SPI_I2S_DATA_LENGTH(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_DATA_LENGTH_MASK) | ((val << I2S_DATA_LENGTH_START_BIT) & I2S_DATA_LENGTH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////
#define I2S_CLOCK_POLARITY_MASK 0x8U
#define I2S_CLOCK_POLARITY_OFFSET 3
#define I2S_CLOCK_POLARITY_STOP_BIT 3
#define I2S_CLOCK_POLARITY_START_BIT 3
#define I2S_CLOCK_POLARITY_WIDTH 1



typedef enum I2sClockPolarity {
    CLOCK_STEADY_STATE_LOW_LEVEL,
    CLOCK_STEADY_STATE_HIGH_LEVEL
} I_2S_CLOCK_POLARITY_T ;
#define WRITE_SPI_I2S_CLOCK_POLARITY(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_CLOCK_POLARITY_MASK) | ((val << I2S_CLOCK_POLARITY_START_BIT) & I2S_CLOCK_POLARITY_MASK )); \
   } 

#define ENABLE_SPI_I2S_CLOCK_POLARITY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  I2S_CLOCK_POLARITY_MASK ); \
   }

#define DISABLE_SPI_I2S_CLOCK_POLARITY() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, val & ~I2S_CLOCK_POLARITY_MASK ); \
   } 

#define READ_SPI_I2S_CLOCK_POLARITY() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_CLOCK_POLARITY_MASK)  >> I2S_CLOCK_POLARITY_START_BIT)

#define WHEN_SPI_I2S_CLOCK_POLARITY_HIGH(x) \
     if ( READ_SPI_I2S_CLOCK_POLARITY() )


#define UNLESS_SPI_I2S_CLOCK_POLARITY_HIGH() \
     if (! READ_SPI_I2S_CLOCK_POLARITY() )


#define WAIT_SPI_I2S_CLOCK_POLARITY_LOW() \
    while ( READ_SPI_I2S_CLOCK_POLARITY() );


#define WAIT_SPI_I2S_CLOCK_POLARITY_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_I2S_CLOCK_POLARITY() && (--___t___ > 0)); }


#define WAIT_SPI_I2S_CLOCK_POLARITY_HIGH() \
    while (! READ_SPI_I2S_CLOCK_POLARITY() );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////
#define I2S_STANDART_MASK 0x30U
#define I2S_STANDART_OFFSET 5
#define I2S_STANDART_STOP_BIT 5
#define I2S_STANDART_START_BIT 4
#define I2S_STANDART_WIDTH 2


typedef enum I2sStandart {
    I2S_PHILLIPS_STANDARD_MSB,
    JUSTIFIED_STANDARD,
    LSB_JUSTIFIED_STANDARD,
    PCM_STANDARD
} I_2S_STANDART_T ;


#define READ_SPI_I2S_STANDART() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_STANDART_MASK)  >> I2S_STANDART_START_BIT)

#define WRITE_SPI_I2S_STANDART(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_STANDART_MASK) | ((val << I2S_STANDART_START_BIT) & I2S_STANDART_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////
#define PCM_LONG_FRAME_MASK 0x80U
#define PCM_LONG_FRAME_OFFSET 7
#define PCM_LONG_FRAME_STOP_BIT 7
#define PCM_LONG_FRAME_START_BIT 7
#define PCM_LONG_FRAME_WIDTH 1



typedef enum PcmLongFrame {
    PCM_LONG_FRAME_DISABLE,
    PCM_LONG_FRAME_ENABLE
} PCM_LONG_FRAME_T ;
#define WRITE_SPI_PCM_LONG_FRAME(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ PCM_LONG_FRAME_MASK) | ((val << PCM_LONG_FRAME_START_BIT) & PCM_LONG_FRAME_MASK )); \
   } 

#define ENABLE_SPI_PCM_LONG_FRAME() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  PCM_LONG_FRAME_MASK ); \
   }

#define DISABLE_SPI_PCM_LONG_FRAME() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, val & ~PCM_LONG_FRAME_MASK ); \
   } 

#define READ_SPI_PCM_LONG_FRAME() \
   ((READ_REGISTER_USHORT(0x4002101C) & PCM_LONG_FRAME_MASK)  >> PCM_LONG_FRAME_START_BIT)

#define WHEN_SPI_PCM_LONG_FRAME_HIGH(x) \
     if ( READ_SPI_PCM_LONG_FRAME() )


#define UNLESS_SPI_PCM_LONG_FRAME_HIGH() \
     if (! READ_SPI_PCM_LONG_FRAME() )


#define WAIT_SPI_PCM_LONG_FRAME_LOW() \
    while ( READ_SPI_PCM_LONG_FRAME() );


#define WAIT_SPI_PCM_LONG_FRAME_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_PCM_LONG_FRAME() && (--___t___ > 0)); }


#define WAIT_SPI_PCM_LONG_FRAME_HIGH() \
    while (! READ_SPI_PCM_LONG_FRAME() );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 8:9

//
/////////////////////////////////////////////////////////////////////////
#define I2S_CONFIGURATION_MODE_MASK 0x300U
#define I2S_CONFIGURATION_MODE_OFFSET 9
#define I2S_CONFIGURATION_MODE_STOP_BIT 9
#define I2S_CONFIGURATION_MODE_START_BIT 8
#define I2S_CONFIGURATION_MODE_WIDTH 2


typedef enum I2sConfigurationMode {
    SLAVE_TRANSMIT,
    SLAVE_RECEIVE,
    MASTER_TRANSMIT,
    MASTER_RECIEVE
} I_2S_CONFIGURATION_MODE_T ;


#define READ_SPI_I2S_CONFIGURATION_MODE() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_CONFIGURATION_MODE_MASK)  >> I2S_CONFIGURATION_MODE_START_BIT)

#define WRITE_SPI_I2S_CONFIGURATION_MODE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_CONFIGURATION_MODE_MASK) | ((val << I2S_CONFIGURATION_MODE_START_BIT) & I2S_CONFIGURATION_MODE_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////
#define I2S_MASK 0x400U
#define I2S_OFFSET 10
#define I2S_STOP_BIT 10
#define I2S_START_BIT 10
#define I2S_WIDTH 1



typedef enum I2s {
    I_2S_DISABLE,
    I_2S_ENABLE
} I_2S_T ;
#define WRITE_SPI_I2S(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_MASK) | ((val << I2S_START_BIT) & I2S_MASK )); \
   } 

#define  ENABLE_SPI_I2S() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  I2S_MASK ); \
   }

#define DISABLE_SPI_I2S() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, val & ~I2S_MASK ); \
   } 

#define READ_SPI_I2S() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_MASK)  >> I2S_START_BIT)

#define WHEN_SPI_I2S_HIGH(x) \
     if ( READ_SPI_I2S() )


#define UNLESS_SPI_I2S_HIGH() \
     if (! READ_SPI_I2S() )


#define WAIT_SPI_I2S_LOW() \
    while ( READ_SPI_I2S() );


#define WAIT_SPI_I2S_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_I2S() && (--___t___ > 0)); }


#define WAIT_SPI_I2S_HIGH() \
    while (! READ_SPI_I2S() );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2sConfiguration
//
// Return the value of register I_2S_CONFIGURATION
//
// Notes : Register Spi_I2s Configuration Register () at the offset 0x1C, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////
#define I2S_MODE_MASK 0x800U
#define I2S_MODE_OFFSET 11
#define I2S_MODE_STOP_BIT 11
#define I2S_MODE_START_BIT 11
#define I2S_MODE_WIDTH 1



typedef enum I2sMode {
    I_2S_MODE_DISABLE,
    I_2S_MODE_ENABLE
} I_2S_MODE_T ;
#define WRITE_SPI_I2S_MODE(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, (OldValue & ~ I2S_MODE_MASK) | ((val << I2S_MODE_START_BIT) & I2S_MODE_MASK )); \
   } 

#define ENABLE_SPI_I2S_MODE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT( 0x4002101C , val |  I2S_MODE_MASK ); \
   }

#define DISABLE_SPI_I2S_MODE() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x4002101C); \
     WRITE_REGISTER_USHORT(0x4002101C, val & ~I2S_MODE_MASK ); \
   } 

#define READ_SPI_I2S_MODE() \
   ((READ_REGISTER_USHORT(0x4002101C) & I2S_MODE_MASK)  >> I2S_MODE_START_BIT)

#define WHEN_SPI_I2S_MODE_HIGH(x) \
     if ( READ_SPI_I2S_MODE() )


#define UNLESS_SPI_I2S_MODE_HIGH() \
     if (! READ_SPI_I2S_MODE() )


#define WAIT_SPI_I2S_MODE_LOW() \
    while ( READ_SPI_I2S_MODE() );


#define WAIT_SPI_I2S_MODE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_I2S_MODE() && (--___t___ > 0)); }


#define WAIT_SPI_I2S_MODE_HIGH() \
    while (! READ_SPI_I2S_MODE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2sPrescaler
//
// Return the value of register I2S_PRESCALER
//
// Notes : Register SPI_I2S prescaler register at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SPI_I2S_PRESCALER( y) \
     WRITE_REGISTER_USHORT( 0x40021020 , y)

#define SET_BITS_SPI_I2S_PRESCALER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT( 0x40021020 , val |  mask ); \
   }

#define CLEAR_BITS_SPI_I2S_PRESCALER(mask) \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT( 0x40021020 , val & ~mask ); \
   }

#define READ_REGISTER_SPI_I2S_PRESCALER() \
     READ_REGISTER_USHORT(0x40021020)

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sPrescaler
//
// Return the value of register I_2S_PRESCALER
//
// Notes : Register SPI_I2S prescaler register (NIL) at the offset 0x20, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////
#define I2S_DIVISOR_MASK 0xFFU
#define I2S_DIVISOR_OFFSET 7
#define I2S_DIVISOR_STOP_BIT 7
#define I2S_DIVISOR_START_BIT 0
#define I2S_DIVISOR_WIDTH 8


#define SPI_I_2S_PRESCALER_REG 0x20
#define READ_SPI_I2S_DIVISOR() \
   ((READ_REGISTER_USHORT(0x40021020) & I2S_DIVISOR_MASK)  >> I2S_DIVISOR_START_BIT)

#define WRITE_SPI_I2S_DIVISOR(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021020); \
     WRITE_REGISTER_USHORT(0x40021020, (OldValue & ~ I2S_DIVISOR_MASK) | ((val << I2S_DIVISOR_START_BIT) & I2S_DIVISOR_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : I2sPrescaler
//
// Return the value of register I_2S_PRESCALER
//
// Notes : Register SPI_I2S prescaler register (NIL) at the offset 0x20, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////
#define ODD_FACTOR_MASK 0x100U
#define ODD_FACTOR_OFFSET 8
#define ODD_FACTOR_STOP_BIT 8
#define ODD_FACTOR_START_BIT 8
#define ODD_FACTOR_WIDTH 1



typedef enum OddFactor {
    REAL_DIVIDER_VALUE_I2SDIV_PER_2,
    REAL_DIVIDER_VALUE_I2SDIV_PER_2_MORE_1
} ODD_FACTOR_T ;
#define WRITE_SPI_ODD_FACTOR(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021020); \
     WRITE_REGISTER_USHORT(0x40021020, (OldValue & ~ ODD_FACTOR_MASK) | ((val << ODD_FACTOR_START_BIT) & ODD_FACTOR_MASK )); \
   } 

#define ENABLE_SPI_ODD_FACTOR() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT( 0x40021020 , val |  ODD_FACTOR_MASK ); \
   }

#define DISABLE_SPI_ODD_FACTOR() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT(0x40021020, val & ~ODD_FACTOR_MASK ); \
   } 

#define READ_SPI_ODD_FACTOR() \
   ((READ_REGISTER_USHORT(0x40021020) & ODD_FACTOR_MASK)  >> ODD_FACTOR_START_BIT)

#define WHEN_SPI_ODD_FACTOR_HIGH(x) \
     if ( READ_SPI_ODD_FACTOR() )


#define UNLESS_SPI_ODD_FACTOR_HIGH() \
     if (! READ_SPI_ODD_FACTOR() )


#define WAIT_SPI_ODD_FACTOR_LOW() \
    while ( READ_SPI_ODD_FACTOR() );


#define WAIT_SPI_ODD_FACTOR_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_ODD_FACTOR() && (--___t___ > 0)); }


#define WAIT_SPI_ODD_FACTOR_HIGH() \
    while (! READ_SPI_ODD_FACTOR() );


/////////////////////////////////////////////////////////////////////////
//
// Function : I2sPrescaler
//
// Return the value of register I_2S_PRESCALER
//
// Notes : Register SPI_I2S prescaler register (NIL) at the offset 0x20, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////
#define MASTER_CLOCK_OUTPUT_MASK 0x200U
#define MASTER_CLOCK_OUTPUT_OFFSET 9
#define MASTER_CLOCK_OUTPUT_STOP_BIT 9
#define MASTER_CLOCK_OUTPUT_START_BIT 9
#define MASTER_CLOCK_OUTPUT_WIDTH 1



typedef enum MasterClockOutput {
    MASTER_CLOCK_OUTPUT_DISABLE,
    MASTER_CLOCK_OUTPUT_ENABLE
} MASTER_CLOCK_OUTPUT_T ;
#define WRITE_SPI_MASTER_CLOCK_OUTPUT(val) \
   {\
     USHORT OldValue = READ_REGISTER_USHORT( 0x40021020); \
     WRITE_REGISTER_USHORT(0x40021020, (OldValue & ~ MASTER_CLOCK_OUTPUT_MASK) | ((val << MASTER_CLOCK_OUTPUT_START_BIT) & MASTER_CLOCK_OUTPUT_MASK )); \
   } 

#define ENABLE_SPI_MASTER_CLOCK_OUTPUT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT( 0x40021020 , val |  MASTER_CLOCK_OUTPUT_MASK ); \
   }

#define DISABLE_SPI_MASTER_CLOCK_OUTPUT() \
   {\
     USHORT val = READ_REGISTER_USHORT(0x40021020); \
     WRITE_REGISTER_USHORT(0x40021020, val & ~MASTER_CLOCK_OUTPUT_MASK ); \
   } 

#define READ_SPI_MASTER_CLOCK_OUTPUT() \
   ((READ_REGISTER_USHORT(0x40021020) & MASTER_CLOCK_OUTPUT_MASK)  >> MASTER_CLOCK_OUTPUT_START_BIT)

#define WHEN_SPI_MASTER_CLOCK_OUTPUT_HIGH(x) \
     if ( READ_SPI_MASTER_CLOCK_OUTPUT() )


#define UNLESS_SPI_MASTER_CLOCK_OUTPUT_HIGH() \
     if (! READ_SPI_MASTER_CLOCK_OUTPUT() )


#define WAIT_SPI_MASTER_CLOCK_OUTPUT_LOW() \
    while ( READ_SPI_MASTER_CLOCK_OUTPUT() );


#define WAIT_SPI_MASTER_CLOCK_OUTPUT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SPI_MASTER_CLOCK_OUTPUT() && (--___t___ > 0)); }


#define WAIT_SPI_MASTER_CLOCK_OUTPUT_HIGH() \
    while (! READ_SPI_MASTER_CLOCK_OUTPUT() );


