
typedef unsigned short USHORT;

#include "stm32.h"

#include "ads111x_access.h"
#include "Ads1115_types.h"
#include "Ads1115.h"

void ConfiugureReadyMode()
{
  ads111x_write_pointer(1);
  SetComparatorQueue(DISABLE_COMPARATOR_E);
  SetComparatorPolarity(ACTIVE_HIGH_E);

  // Lo_thresh register
  ads111x_write_pointer(2);
  ads111x_write_rr(0x0000,2);
  int data;
  data = ads111x_read();

  // Hi_thresh register
  ads111x_write_pointer(3);
  ads111x_write_rr(0x9999,3);
  data = ads111x_read();
}

#define ConfigureForBattery() ConfigureAdsChannel(UNIPOLAR_AIN3_E, FULL_SCALE_4096_MV_E,DATA_RATE_250_SPS_E, CONTINUOUS_CONVERSION_MODE_E)
#define ConfigureForGauge() ConfigureAdsChannel(UNIPOLAR_AIN4_E, FULL_SCALE_4096_MV_E,DATA_RATE_250_SPS_E, CONTINUOUS_CONVERSION_MODE_E)
#define ConfigureForTemperature() ConfigureAdsChannel(UNIPOLAR_AIN2_E, FULL_SCALE_4096_MV_E,DATA_RATE_250_SPS_E, CONTINUOUS_CONVERSION_MODE_E)

int ConfigureAdsChannel (enum InputMultiplexer chanel ,  enum ProgrammableGain scale, enum DataRate datarate ,  enum Mode mode )
{
  ads111x_write_pointer(1);

  SetInputMultiplexer(chanel);
  SetProgrammableGain(scale);
  SetDataRate(datarate);
  SetMode(mode);
  return 0;
}

int GetMeasure()
{
  ads111x_write_pointer(1);
  SetMode(POWER_DOWN_SINGLE_SHOT_MODE_E);

//  HAL_Delay(4);

  while ( GetConversionStatus() == CURRENTLY_PERFORMING_CONVERSION_E);   
  
  ads111x_write_pointer(0);
  return ads111x_read();
}

//double ConvertToVolt( unsigned short x)
//{
//  return x / 1631.0;
//}



