#include "stm32.h"

#include "cmsis_os.h"

#include "adc.h"
#include "comp.h"
#include "dma.h"
#include "sdadc.h"
#include "spi.h"
#include "gpio.h"


void SystemClock_Config(void);


int main(void)
{
    /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();

  while(1)
    ;
  /* We should never get here as control is now taken by the scheduler */
  return 0;

}

void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_PeriphCLKInitTypeDef PeriphClkInit;

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL16;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_SYSCLK|RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2);

  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC1|RCC_PERIPHCLK_SDADC;
  PeriphClkInit.SdadcClockSelection = RCC_SDADCSYSCLK_DIV16;
  PeriphClkInit.Adc1ClockSelection = RCC_ADC1PCLK2_DIV2;
  HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit);

  HAL_PWREx_EnableSDADCAnalog(PWR_SDADC_ANALOG1);

  HAL_PWREx_EnableSDADCAnalog(PWR_SDADC_ANALOG2);

  HAL_PWREx_EnableSDADCAnalog(PWR_SDADC_ANALOG3);

  __SYSCFG_CLK_ENABLE();

}
