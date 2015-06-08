
#include "stm32f4xx_hal.h"


extern ADC_HandleTypeDef hadc1;

double GetTemperature()
{
  unsigned long data = 0;
  //  double temperature = -100.0;


  if ( HAL_ADC_Start(&hadc1) == HAL_OK )
    {
      HAL_ADC_Start(&hadc1);
      
      HAL_ADC_PollForConversion(&hadc1, 10);

      if ( HAL_ADC_GetState(&hadc1) == HAL_ADC_STATE_EOC_REG)
        data = HAL_ADC_GetValue(&hadc1);

//      temperature = (data - V25)/ slope_avr;
    }

  return data;
}
