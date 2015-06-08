/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Ads111x/Ads1115/Windows/Ads1115.c
// 
//
// Generated on the 20/07/2012 22:02 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, created by  Remi PRUD'HOMME 
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyright  2012
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//  Reference document : 
/////////////////////////////////////////////////////////////////////////

// This file is generated. Don't modify it 
typedef unsigned short USHORT;

#include "ads111x_access.h"
#include "Ads1115.h"
#include "Ads1115_types.h"




/////////////////////////////////////////////////////////////////////////
//
// Function : GetPointerRegister
//
// RET  : Return the value of register PointerRegister
//
// Notes : From register 0x0, bits 15:0
//
/////////////////////////////////////////////////////////////////////////
USHORT GetPointerRegister()
  {
    // 
    // Get the value from a register 
    // 
    return ads111x_read() ;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetPointerRegister
//
// IN   : Param, a value to write to the regiter PointerRegister
// OUT  : 
//
// RET  : Return the value of register PointerRegister
//
// Notes : From register 0x0, bits 15:0
//
/////////////////////////////////////////////////////////////////////////
USHORT SetPointerRegister( USHORT Param )
  {
    USHORT Value;

    Value = ads111x_read();

    // 
    // Set the value to a register 
    // 
    ads111x_write(Param);
    return Value;

  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetComparatorQueue
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 1:0
//
/////////////////////////////////////////////////////////////////////////
USHORT SetComparatorQueue( enum ComparatorQueue Param)
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // Comparator queue and disable . These bits perform two 
    // functions. When set to '11', they disable the comparator 
    // function and put the ALERT/RDY pin into a high state. 
    // When set to any other value, they control the number of 
    // successive conversions exceeding the upper or lower 
    // thresholds required before asserting the ALERT/RDY pin. 
    // 
  

     Value =  OldValue & ~COMPARATOR_QUEUE_MASK ;

    switch(  Param )
      {
        case ASSERT_AFTER_ONE_CONVERSION_E:
            Value =  Value | ASSERT_AFTER_ONE_CONVERSION ;
           break;
        case ASSERT_AFTER_TWO_CONVERSIONS_E:
            Value =  Value | ASSERT_AFTER_TWO_CONVERSIONS ;
           break;
        case ASSERT_AFTER_FOUR_CONVERSIONS_E:
            Value =  Value | ASSERT_AFTER_FOUR_CONVERSIONS ;
           break;
        case DISABLE_COMPARATOR_E:
            Value =  Value | DISABLE_COMPARATOR ;
           break;
      }
  

    ads111x_write(Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetComparatorQueue
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 1:0
//
/////////////////////////////////////////////////////////////////////////
USHORT GetComparatorQueue()
  {
    USHORT Value;


    // 
    // Comparator queue and disable . These bits perform two 
    // functions. When set to '11', they disable the comparator 
    // function and put the ALERT/RDY pin into a high state. 
    // When set to any other value, they control the number of 
    // successive conversions exceeding the upper or lower 
    // thresholds required before asserting the ALERT/RDY pin. 
    // 
    Value = (ads111x_read() & COMPARATOR_QUEUE_MASK);
    return Value;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetLatchingComparator
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 2:2
//
/////////////////////////////////////////////////////////////////////////
USHORT SetLatchingComparator( enum LatchingComparator Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // This bit controls whether the ALERT/RDY pin latches once 
    // asserted or clears once conversions are within the margin 
    // of the upper and lower threshold values. When COMP_LAT = 
    // '0', the ALERT/RDY pin does not latch when asserted. When 
    // COMP_LAT = '1', the asserted ALERT/RDY pin remains 
    // latched until conversion data are read by the master or 
    // an appropriate SMBus alert response is sent by the 
    // master, the device responds with its address, and it is 
    // the lowest address currently asserting the ALERT/RDY bus 
    // line. 
    // 
    switch( Param )
      {
        case LATCHING_COMPARATOR_E: 
           Value = OldValue | LATCHING_COMPARATOR_MASK; 
           break;
        case NON_LATCHING_COMPARATOR_E: 
           Value = OldValue & ~ LATCHING_COMPARATOR_MASK;
           break;
      }
  

    ads111x_write(Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetLatchingComparator
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 2:2
//
/////////////////////////////////////////////////////////////////////////
USHORT GetLatchingComparator()
  {
    USHORT Value;


    // 
    // This bit controls whether the ALERT/RDY pin latches once 
    // asserted or clears once conversions are within the margin 
    // of the upper and lower threshold values. When COMP_LAT = 
    // '0', the ALERT/RDY pin does not latch when asserted. When 
    // COMP_LAT = '1', the asserted ALERT/RDY pin remains 
    // latched until conversion data are read by the master or 
    // an appropriate SMBus alert response is sent by the 
    // master, the device responds with its address, and it is 
    // the lowest address currently asserting the ALERT/RDY bus 
    // line. 
    // 
    Value = (ads111x_read() & LATCHING_COMPARATOR_MASK) >> 2;
    return Value;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetComparatorPolarity
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 3:3
//
/////////////////////////////////////////////////////////////////////////
USHORT SetComparatorPolarity( enum ComparatorPolarity Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // This bit controls the polarity of the ALERT/RDY pin. When 
    // COMP_POL = '0' the comparator output is active low. When 
    // COMP_POL='1' the ALERT/RDY pin is active high 
    // 
    switch( Param )
      {
        case ACTIVE_HIGH_E: 
           Value = OldValue | COMPARATOR_POLARITY_MASK; 
           break;
        case ACTIVE_LOW_E: 
           Value = OldValue & ~ COMPARATOR_POLARITY_MASK;
           break;
      }
  

    ads111x_write( Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetComparatorPolarity
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 3:3
//
/////////////////////////////////////////////////////////////////////////
USHORT GetComparatorPolarity()
  {
    // 
    // This bit controls the polarity of the ALERT/RDY pin. When 
    // COMP_POL = '0' the comparator output is active low. When 
    // COMP_POL='1' the ALERT/RDY pin is active high 
    // 
    
    return (ads111x_read() & COMPARATOR_POLARITY_MASK) >> 3;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetComparatorMode
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 4:4
//
/////////////////////////////////////////////////////////////////////////
USHORT SetComparatorMode( enum ComparatorMode Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // This bit controls the comparator mode of operation. It 
    // changes whether the comparator is implemented as a 
    // traditional comparator (COMP_MODE = '0') or as a window 
    // comparator (COMP_MODE = '1') 
    // 
    switch( Param )
      {
        case WINDOW_COMPARATOR_E: 
           Value = OldValue | COMPARATOR_MODE_MASK; 
           break;
        case TRADITIONAL_COMPARATOR_WITH_HYSTERESIS_E: 
           Value = OldValue & ~ COMPARATOR_MODE_MASK;
           break;
      }
  
    ads111x_write(Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetComparatorMode
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 4:4
//
/////////////////////////////////////////////////////////////////////////
USHORT GetComparatorMode()
  {
    // 
    // This bit controls the comparator mode of operation. It 
    // changes whether the comparator is implemented as a 
    // traditional comparator (COMP_MODE = '0') or as a window 
    // comparator (COMP_MODE = '1') 
    // 
  
    return (ads111x_read() & COMPARATOR_MODE_MASK) >> 4;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetDataRate
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 7:5
//
/////////////////////////////////////////////////////////////////////////
USHORT SetDataRate( enum DataRate Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // These bits control the data rate setting. 
    // 
  

     Value =  OldValue & ~DATA_RATE_MASK ;

    switch(  Param )
      {
        case DATA_RATE_8_SPS_E:
            Value  = Value  | (DATA_RATE_8_SPS << 0x5);
           break;
        case DATA_RATE_16_SPS_E:
            Value  = Value  | (DATA_RATE_16_SPS << 0x5);
           break;
        case DATA_RATE_32_SPS_E:
            Value  = Value  | (DATA_RATE_32_SPS << 0x5);
           break;
        case DATA_RATE_64_SPS_E:
            Value  = Value  | (DATA_RATE_64_SPS << 0x5);
           break;
        case DATA_RATE_128_SPS_E:
            Value  = Value  | (DATA_RATE_128_SPS << 0x5);
           break;
        case DATA_RATE_250_SPS_E:
            Value  = Value  | (DATA_RATE_250_SPS << 0x5);
           break;
        case DATA_RATE_475_SPS_E:
            Value  = Value  | (DATA_RATE_475_SPS << 0x5);
           break;
        case DATA_RATE_860_SPS_E:
            Value  = Value  | (DATA_RATE_860_SPS << 0x5);
           break;
      }
  

    ads111x_write( Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetDataRate
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 7:5
//
/////////////////////////////////////////////////////////////////////////
USHORT GetDataRate()
  {
    // 
    // These bits control the data rate setting. 
    // 
  
    return (ads111x_read() & DATA_RATE_MASK) >> 5;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetMode
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 8:8
//
/////////////////////////////////////////////////////////////////////////
USHORT SetMode( enum Mode Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // This bit controls the current operational mode of the 
    // ADS1113/4/5. 
    // 
    switch( Param )
      {
        case POWER_DOWN_SINGLE_SHOT_MODE_E: 
           Value = OldValue | MODE_MASK; 
           break;
        case CONTINUOUS_CONVERSION_MODE_E: 
           Value = OldValue & ~ MODE_MASK;
           break;
      }
  

    ads111x_write( Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetMode
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 8:8
//
/////////////////////////////////////////////////////////////////////////
USHORT GetMode()
  {
    // 
    // This bit controls the current operational mode of the 
    // ADS1113/4/5. 
    // 
    return (ads111x_read() & MODE_MASK) >> 8;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetProgrammableGain
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 11:9
//
/////////////////////////////////////////////////////////////////////////
USHORT SetProgrammableGain( enum ProgrammableGain Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // Programmable gain amplifier configuration. These bits 
    // configure the programmable gain amplifier. 
    // 
  

     Value =  OldValue & ~PROGRAMMABLE_GAIN_MASK ;

    switch(  Param )
      {
        case FULL_SCALE_6144_MV_E:
            Value  = Value  | (FULL_SCALE_6144_MV << 0x9);
           break;
        case FULL_SCALE_4096_MV_E:
            Value  = Value  | (FULL_SCALE_4096_MV << 0x9);
           break;
        case FULL_SCALE_2048_MV_E:
            Value  = Value  | (FULL_SCALE_2048_MV << 0x9);
           break;
        case FULL_SCALE_1024_MV_E:
            Value  = Value  | (FULL_SCALE_1024_MV << 0x9);
           break;
        case FULL_SCALE_512_MV_E:
            Value  = Value  | (FULL_SCALE_512_MV << 0x9);
           break;
        case FULL_SCALE_256_MV_E:
            Value  = Value  | (FULL_SCALE_256_MV << 0x9);
           break;
      }
    ads111x_write(Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetProgrammableGain
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 11:9
//
/////////////////////////////////////////////////////////////////////////
USHORT GetProgrammableGain()
  {
    USHORT Value;


    // 
    // Programmable gain amplifier configuration. These bits 
    // configure the programmable gain amplifier. 
    // 
    Value = (ads111x_read() & PROGRAMMABLE_GAIN_MASK) >> 9;
    return Value;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetInputMultiplexer
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 14:12
//
/////////////////////////////////////////////////////////////////////////
USHORT SetInputMultiplexer( enum InputMultiplexer Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // Input multiplexer configuration (ADS1115 only) 
    // 
  

     Value =  OldValue & ~INPUT_MULTIPLEXER_MASK ;

    switch(  Param )
      {
        case DIFFERIENTIAL_AIN0_AIN1_E:
            Value  = Value  | (DIFFERIENTIAL_AIN0_AIN1 << 0xC);
           break;
        case DIFFERIENTIAL_AIN0_AIN3_E:
            Value  = Value  | (DIFFERIENTIAL_AIN0_AIN3 << 0xC);
           break;
        case DIFFERIENTIAL_AIN1_AIN3_E:
            Value  = Value  | (DIFFERIENTIAL_AIN1_AIN3 << 0xC);
           break;
        case DIFFERIENTIAL_AIN2_AIN3_E:
            Value  = Value  | (DIFFERIENTIAL_AIN2_AIN3 << 0xC);
           break;
        case UNIPOLAR_AIN1_E:
            Value  = Value  | (UNIPOLAR_AIN1 << 0xC);
           break;
        case UNIPOLAR_AIN2_E:
            Value  = Value  | (UNIPOLAR_AIN2 << 0xC);
           break;
        case UNIPOLAR_AIN3_E:
            Value  = Value  | (UNIPOLAR_AIN3 << 0xC);
           break;
        case UNIPOLAR_AIN4_E:
            Value  = Value  | (UNIPOLAR_AIN4 << 0xC);
           break;
      }
  

    ads111x_write(Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetInputMultiplexer
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 14:12
//
/////////////////////////////////////////////////////////////////////////
USHORT GetInputMultiplexer()
  {
    USHORT Value;


    // 
    // Input multiplexer configuration (ADS1115 only) 
    // 
    Value = (ads111x_read() & INPUT_MULTIPLEXER_MASK) >> 12;
    return Value;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetConversionStatus
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 15:15
//
/////////////////////////////////////////////////////////////////////////
USHORT GetConversionStatus()
  {
    USHORT Value;


    // 
    // Operational status/single-shot conversion start 
    // This bit determines the operational status of the device. 
    // This bit can only be written when in power-down mode. 
    // 
    Value = (ads111x_read() & CONVERSION_STATUS_MASK) >> 15;
    return Value;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : SetConversionStart
//
// IN   : Param, a value to write to the regiter ConfigurationRegister
// OUT  : 
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 15:15
//
/////////////////////////////////////////////////////////////////////////
USHORT SetConversionStart( enum ConversionStart Param )
  {
    USHORT Value = 0;
    USHORT OldValue;

    OldValue = ads111x_read();

    // 
    // Operational status/single-shot conversion start 
    // This bit determines the operational status of the device. 
    // This bit can only be written when in power-down mode. 
    // 
    switch( Param )
      {
        case BEGIN_A_SINGLE_CONVERSION_E: 
           Value = OldValue | CONVERSION_START_MASK; 
           break;
        case NO_EFFECT_E: 
           Value = OldValue & ~ CONVERSION_START_MASK;
           break;
      }
  

    ads111x_write(Value);

    return OldValue;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetConversionStart
//
// RET  : Return the value of register ConfigurationRegister
//
// Notes : From register 0x0, bits 15:15
//
/////////////////////////////////////////////////////////////////////////
USHORT GetConversionStart()
  {
    USHORT Value;


    // 
    // Operational status/single-shot conversion start 
    // This bit determines the operational status of the device. 
    // This bit can only be written when in power-down mode. 
    // 
    Value = (ads111x_read() & CONVERSION_START_MASK) >> 15;
    return Value;
  }


/////////////////////////////////////////////////////////////////////////
//
// Function : GetDataRegister
//
// RET  : Return the value of register DataRegister
//
// Notes : From register 0x1, bits 15:0
//
/////////////////////////////////////////////////////////////////////////
USHORT GetDataRegister()
  {
    USHORT Value;


    // 
    // Get the value from a register 
    // 
   Value = ads111x_read() ;
    return Value;
  }



/////////////////////////////////////////////////////////////////////////
//
// Function : GetHighThresholdRegister
//
// RET  : Return the value of register HighThresholdRegister
//
// Notes : From register 0x2, bits 15:0
//
/////////////////////////////////////////////////////////////////////////
USHORT GetHighThresholdRegister()
  {
    USHORT Value;


    // 
    // Get the value from a register 
    // 
   Value = ads111x_read() ;
    return Value;
  }


#ifdef __cplusplus
}
#endif

