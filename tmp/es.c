//#include "stm32f4xx_hal.h"

#if FAMILLYF4      
#define STM32_INCLUDE "stm32f4xx_hal.h"
#elif FAMILLYF3                            
#define STM32_INCLUDE "stm32f3xx_hal.h"
#endif

#include STM32_INCLUDE

int main()
{
  ;
  return 0;
}
