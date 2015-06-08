/****************************************************************************
 * File : d:/Lisp/Production/Ads111x/Ads1115/Linux/Ads1115_types.h
 * 
 *
 * Generated on the 20/07/2012 22:02 by the 'super-cool' code generator 
 *
 * Generator written in Common Lisp, created by  Remi PRUD'HOMME 
 * with the help of : 
 *
 ***************************************************************************
 *  Copyright   2012
 *
 *  Reference document : 
 *
 ***************************************************************************/

// This file is generated. Don't modify it 

#ifndef D__LISP_PRODUCTION_ADS111X_ADS1115_LINUX_ADS1115_TYPES_H
#define D__LISP_PRODUCTION_ADS111X_ADS1115_LINUX_ADS1115_TYPES_H


#ifdef __cplusplus
extern "C" {
#endif

#define POINTER_REGISTER_REG 0x0

//  
//  Comparator queue and disable . These bits perform two functions. When set to '11', 
//  they disable the comparator function and put the ALERT/RDY pin into a high state. 
//  When set to any other value, they control the number of successive conversions 
//  exceeding the upper or lower thresholds required before asserting the ALERT/RDY 
//  pin..
//  Register ConfigurationRegister 0x0000, Bits 0:1, typedef comparator_queue
//   
//  
#define COMPARATOR_QUEUE_MASK 0x3U
#define COMPARATOR_QUEUE_OFFSET 1
#define COMPARATOR_QUEUE_STOP_BIT 1
#define COMPARATOR_QUEUE_START_BIT 0
#define COMPARATOR_QUEUE_WIDTH 2

#define CONFIGURATION_REGISTER_REG 0x0
#define  ASSERT_AFTER_ONE_CONVERSION 0
#define  ASSERT_AFTER_TWO_CONVERSIONS 1
#define  ASSERT_AFTER_FOUR_CONVERSIONS 2
#define  DISABLE_COMPARATOR 3

typedef enum ComparatorQueue {
    ASSERT_AFTER_ONE_CONVERSION_E,
    ASSERT_AFTER_TWO_CONVERSIONS_E,
    ASSERT_AFTER_FOUR_CONVERSIONS_E,
    DISABLE_COMPARATOR_E
} COMPARATOR_QUEUE_T ;
#define COMPARATOR_QUEUE_PARAM_MASK  0x3



//  
//  This bit controls whether the ALERT/RDY pin latches once asserted or clears once 
//  conversions are within the margin of the upper and lower threshold values. When 
//  COMP_LAT = '0', the ALERT/RDY pin does not latch when asserted. When COMP_LAT = '1', 
//  the asserted ALERT/RDY pin remains latched until conversion data are read by the 
//  master or an appropriate SMBus alert response is sent by the master, the device 
//  responds with its address, and it is the lowest address currently asserting the 
//  ALERT/RDY bus line..
//  Register ConfigurationRegister 0x0000, Bits 2:2, typedef latching_comparator
//   
//  
#define LATCHING_COMPARATOR_MASK 0x4U
#define LATCHING_COMPARATOR_OFFSET 2
#define LATCHING_COMPARATOR_STOP_BIT 2
#define LATCHING_COMPARATOR_START_BIT 2
#define LATCHING_COMPARATOR_WIDTH 1


typedef enum LatchingComparator {
    NON_LATCHING_COMPARATOR_E,
    LATCHING_COMPARATOR_E
} LATCHING_COMPARATOR_T ;
#define LATCHING_COMPARATOR_PARAM_MASK  0x4



//  
//  This bit controls the polarity of the ALERT/RDY pin. When COMP_POL = '0' the 
//  comparator output is active low. When COMP_POL='1' the ALERT/RDY pin is active 
//  high.
//  Register ConfigurationRegister 0x0000, Bits 3:3, typedef comparator_polarity
//   
//  
#define COMPARATOR_POLARITY_MASK 0x8U
#define COMPARATOR_POLARITY_OFFSET 3
#define COMPARATOR_POLARITY_STOP_BIT 3
#define COMPARATOR_POLARITY_START_BIT 3
#define COMPARATOR_POLARITY_WIDTH 1


typedef enum ComparatorPolarity {
    ACTIVE_LOW_E,
    ACTIVE_HIGH_E
} COMPARATOR_POLARITY_T ;
#define COMPARATOR_POLARITY_PARAM_MASK  0x8



//  
//  This bit controls the comparator mode of operation. It changes whether the comparator 
//  is implemented as a traditional comparator (COMP_MODE = '0') or as a window 
//  comparator (COMP_MODE = '1').
//  Register ConfigurationRegister 0x0000, Bits 4:4, typedef comparator_mode
//   
//  
#define COMPARATOR_MODE_MASK 0x10U
#define COMPARATOR_MODE_OFFSET 4
#define COMPARATOR_MODE_STOP_BIT 4
#define COMPARATOR_MODE_START_BIT 4
#define COMPARATOR_MODE_WIDTH 1


typedef enum ComparatorMode {
    TRADITIONAL_COMPARATOR_WITH_HYSTERESIS_E,
    WINDOW_COMPARATOR_E
} COMPARATOR_MODE_T ;
#define COMPARATOR_MODE_PARAM_MASK  0x10



//  
//  These bits control the data rate setting..
//  Register ConfigurationRegister 0x0000, Bits 5:7, typedef data_rate
//   
//  
#define DATA_RATE_MASK 0xE0U
#define DATA_RATE_OFFSET 7
#define DATA_RATE_STOP_BIT 7
#define DATA_RATE_START_BIT 5
#define DATA_RATE_WIDTH 3

#define  DATA_RATE_8_SPS 0
#define  DATA_RATE_16_SPS 1
#define  DATA_RATE_32_SPS 2
#define  DATA_RATE_64_SPS 3
#define  DATA_RATE_128_SPS 4
#define  DATA_RATE_250_SPS 5
#define  DATA_RATE_475_SPS 6
#define  DATA_RATE_860_SPS 7

typedef enum DataRate {
    DATA_RATE_8_SPS_E,
    DATA_RATE_16_SPS_E,
    DATA_RATE_32_SPS_E,
    DATA_RATE_64_SPS_E,
    DATA_RATE_128_SPS_E,
    DATA_RATE_250_SPS_E,
    DATA_RATE_475_SPS_E,
    DATA_RATE_860_SPS_E
} DATA_RATE_T ;
#define DATA_RATE_PARAM_MASK  0xE0



//  
//  This bit controls the current operational mode of the ADS1113/4/5..
//  Register ConfigurationRegister 0x0000, Bits 8:8, typedef mode
//   
//  
#define MODE_MASK 0x100U
#define MODE_OFFSET 8
#define MODE_STOP_BIT 8
#define MODE_START_BIT 8
#define MODE_WIDTH 1


typedef enum Mode {
    CONTINUOUS_CONVERSION_MODE_E,
    POWER_DOWN_SINGLE_SHOT_MODE_E
} MODE_T ;
#define MODE_PARAM_MASK  0x100



//  
//  Programmable gain amplifier configuration. These bits configure the programmable gain 
//  amplifier..
//  Register ConfigurationRegister 0x0000, Bits 9:11, typedef gain
//   
//  
#define PROGRAMMABLE_GAIN_MASK 0xE00U
#define PROGRAMMABLE_GAIN_OFFSET 11
#define PROGRAMMABLE_GAIN_STOP_BIT 11
#define PROGRAMMABLE_GAIN_START_BIT 9
#define PROGRAMMABLE_GAIN_WIDTH 3

#define  FULL_SCALE_6144_MV 0
#define  FULL_SCALE_4096_MV 1
#define  FULL_SCALE_2048_MV 2
#define  FULL_SCALE_1024_MV 3
#define  FULL_SCALE_512_MV 4
#define  FULL_SCALE_256_MV 5

typedef enum ProgrammableGain {
    FULL_SCALE_6144_MV_E,
    FULL_SCALE_4096_MV_E,
    FULL_SCALE_2048_MV_E,
    FULL_SCALE_1024_MV_E,
    FULL_SCALE_512_MV_E,
    FULL_SCALE_256_MV_E
} GAIN_T ;
#define PROGRAMMABLE_GAIN_PARAM_MASK  0xE00



//  
//  Input multiplexer configuration (ADS1115 only).
//  Register ConfigurationRegister 0x0000, Bits 12:14, typedef input_multiplexer
//   
//  
#define INPUT_MULTIPLEXER_MASK 0x7000U
#define INPUT_MULTIPLEXER_OFFSET 14
#define INPUT_MULTIPLEXER_STOP_BIT 14
#define INPUT_MULTIPLEXER_START_BIT 12
#define INPUT_MULTIPLEXER_WIDTH 3

#define  DIFFERIENTIAL_AIN0_AIN1 0
#define  DIFFERIENTIAL_AIN0_AIN3 1
#define  DIFFERIENTIAL_AIN1_AIN3 2
#define  DIFFERIENTIAL_AIN2_AIN3 3
#define  UNIPOLAR_AIN1 4
#define  UNIPOLAR_AIN2 5
#define  UNIPOLAR_AIN3 6
#define  UNIPOLAR_AIN4 7

typedef enum InputMultiplexer {
    DIFFERIENTIAL_AIN0_AIN1_E,
    DIFFERIENTIAL_AIN0_AIN3_E,
    DIFFERIENTIAL_AIN1_AIN3_E,
    DIFFERIENTIAL_AIN2_AIN3_E,
    UNIPOLAR_AIN1_E,
    UNIPOLAR_AIN2_E,
    UNIPOLAR_AIN3_E,
    UNIPOLAR_AIN4_E
} INPUT_MULTIPLEXER_T ;
#define INPUT_MULTIPLEXER_PARAM_MASK  0x7000



//  
//  Operational status/single-shot conversion start 
//  This bit determines the operational status of the device. 
//  This bit can only be written when in power-down mode..
//  Register ConfigurationRegister 0x0000, Bits 15:15, typedef conversion_status
//   
//  
#define CONVERSION_STATUS_MASK 0x8000U
#define CONVERSION_STATUS_OFFSET 15
#define CONVERSION_STATUS_STOP_BIT 15
#define CONVERSION_STATUS_START_BIT 15
#define CONVERSION_STATUS_WIDTH 1


typedef enum ConversionStatus {
    CURRENTLY_PERFORMING_CONVERSION_E,
    NOT_CURRENTLY_PERFORMING_CONVERSION_E
} CONVERSION_STATUS_T ;
#define CONVERSION_STATUS_PARAM_MASK  0x8000



//  
//  Operational status/single-shot conversion start 
//  This bit determines the operational status of the device. 
//  This bit can only be written when in power-down mode..
//  Register ConfigurationRegister 0x0000, Bits 15:15, typedef conversion_start
//   
//  
#define CONVERSION_START_MASK 0x8000U
#define CONVERSION_START_OFFSET 15
#define CONVERSION_START_STOP_BIT 15
#define CONVERSION_START_START_BIT 15
#define CONVERSION_START_WIDTH 1


typedef enum ConversionStart {
    NO_EFFECT_E,
    BEGIN_A_SINGLE_CONVERSION_E
} CONVERSION_START_T ;
#define CONVERSION_START_PARAM_MASK  0x8000


#define DATA_REGISTER_REG 0x1
#define HIGH_THRESHOLD_REGISTER_REG 0x2
#define LOW_THRESHOLD_REGISTER_REG 0x3
#endif
