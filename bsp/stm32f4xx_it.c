/**
  ******************************************************************************
  * @file    stm32f4xx_it.c
  * @date    04/04/2014 09:07:20
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  *
  * COPYRIGHT(c) 2014 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32f4xx.h"

#include "../config.h"


/* External variables --------------------------------------------------------*/
 
extern void xPortSysTickHandler(void);

extern ETH_HandleTypeDef heth;
extern I2C_HandleTypeDef hi2c1;
//extern SPI_HandleTypeDef hspi2;
extern DMA_HandleTypeDef hdma_uart5_rx;
extern DMA_HandleTypeDef hdma_uart5_tx;
extern DMA_HandleTypeDef hdma_usart2_rx;
extern DMA_HandleTypeDef hdma_usart2_tx;
extern DMA_HandleTypeDef hdma_usart6_tx;
extern DMA_HandleTypeDef hdma_usart6_rx;
extern UART_HandleTypeDef huart5;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart6;

/******************************************************************************/
/*            Cortex-M4 Processor Interruption and Exception Handlers         */
/******************************************************************************/

void EXTI0_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(EXTI0_IRQn);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
}


#ifdef SENSORS
void EXTI1_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(EXTI1_IRQn);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_1);
}

/**
* @brief This function handles EXTI Line3 interrupt.
*/
void EXTI3_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(EXTI3_IRQn);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
}

/**
* @brief This function handles I2C1 error interrupt.
*/
void I2C1_ER_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(I2C1_ER_IRQn);
  HAL_I2C_ER_IRQHandler(&hi2c1);
}

/**
* @brief This function handles I2C1 event interrupt.
*/
void I2C1_EV_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(I2C1_EV_IRQn);
  HAL_I2C_EV_IRQHandler(&hi2c1);
}

#endif


#if 0
/**
* @brief This function handles SPI2 global interrupt.
*/
void SPI2_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(SPI2_IRQn);
  HAL_SPI_IRQHandler(&hspi2);
}
#endif

// Common part

/**
* @brief This function handles System tick timer.
*/
void SysTick_Handler(void)
{
  xPortSysTickHandler();
  HAL_IncTick();
}


/**
* @brief This function handles Ethernet global interrupt.
*/
void ETH_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(ETH_IRQn);
  HAL_ETH_IRQHandler(&heth);
}

/**
* @brief This function handles Ethernet Wakeup through EXTI Line19 interrupt.
*/
void ETH_WKUP_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(ETH_WKUP_IRQn);
  HAL_ETH_IRQHandler(&heth);
}

#ifdef MOTORS

/**
* @brief This function handles DMA1 Stream0 global interrupt.
*/
void DMA1_Stream0_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(DMA1_Stream0_IRQn);
  HAL_DMA_IRQHandler(&hdma_uart5_rx);
}

/**
* @brief This function handles DMA1 Stream6 global interrupt.
*/
void DMA1_Stream6_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(DMA1_Stream6_IRQn);
  HAL_DMA_IRQHandler(&hdma_usart2_tx);
}

/**
* @brief This function handles UART5 global interrupt.
*/
void UART5_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(UART5_IRQn);
  HAL_UART_IRQHandler(&huart5);
}

/**
* @brief This function handles DMA2 Stream6 global interrupt.
*/
void DMA2_Stream6_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(DMA2_Stream6_IRQn);
  HAL_DMA_IRQHandler(&hdma_usart6_tx);
}

/**
* @brief This function handles DMA2 Stream1 global interrupt.
*/
void DMA2_Stream1_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(DMA2_Stream1_IRQn);
  HAL_DMA_IRQHandler(&hdma_usart6_rx);
}

/**
* @brief This function handles DMA1 Stream5 global interrupt.
*/
void DMA1_Stream5_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(DMA1_Stream5_IRQn);
  HAL_DMA_IRQHandler(&hdma_usart2_rx);
}

/**
* @brief This function handles USART2 global interrupt.
*/
void USART2_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(USART2_IRQn);
  HAL_UART_IRQHandler(&huart2);
}

/**
* @brief This function handles DMA1 Stream7 global interrupt.
*/
void DMA1_Stream7_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(DMA1_Stream7_IRQn);
  HAL_DMA_IRQHandler(&hdma_uart5_tx);
}

/**
* @brief This function handles USART6 global interrupt.
*/
void USART6_IRQHandler(void)
{
  HAL_NVIC_ClearPendingIRQ(USART6_IRQn);
  HAL_UART_IRQHandler(&huart6);
}

#endif
