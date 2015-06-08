#pragma once

int GetMeasure();
int ConfigureAdsChannel (enum InputMultiplexer chanel ,  enum ProgrammableGain scale, enum DataRate datarate ,  enum Mode mode );

#define ConfigureForBattery() ConfigureAdsChannel(UNIPOLAR_AIN3_E, FULL_SCALE_4096_MV_E,DATA_RATE_250_SPS_E, CONTINUOUS_CONVERSION_MODE_E)
#define ConfigureForGauge() ConfigureAdsChannel(UNIPOLAR_AIN4_E, FULL_SCALE_4096_MV_E,DATA_RATE_250_SPS_E, CONTINUOUS_CONVERSION_MODE_E)
#define ConfigureForTemperature() ConfigureAdsChannel(UNIPOLAR_AIN2_E, FULL_SCALE_4096_MV_E,DATA_RATE_250_SPS_E, CONTINUOUS_CONVERSION_MODE_E)
