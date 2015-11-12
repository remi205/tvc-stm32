/**
  ******************************************************************************
  * @file    stm32f4xx_hal_irda.h
  * @author  MCD Application Team
  * @version V1.4.0RC3
  * @date    08-May-2015
  * @brief   Header file of IRDA HAL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F4xx_HAL_IRDA_H
#define __STM32F4xx_HAL_IRDA_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal_def.h"

/** @addtogroup STM32F4xx_HAL_Driver
  * @{
  */

/** @addtogroup IRDA
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/ 
/** @defgroup IRDA_Exported_Types IRDA Exported Types
  * @{
  */
/** 
  * @brief IRDA Init Structure definition  
  */ 
typedef struct
{
  uint32_t BaudRate;                  /*!< This member configures the IRDA communication baud rate.
                                           The baud rate is computed using the following formula:
                                           - IntegerDivider = ((PCLKx) / (8 * (hirda->Init.BaudRate)))
                                           - FractionalDivider = ((IntegerDivider - ((uint32_t) IntegerDivider)) * 8) + 0.5 */

  uint32_t WordLength;                /*!< Specifies the number of data bits transmitted or received in a frame.
                                           This parameter can be a value of @ref IRDA_Word_Length */


  uint32_t Parity;                   /*!< Specifies the parity mode.
                                           This parameter can be a value of @ref IRDA_Parity
                                           @note When parity is enabled, the computed parity is inserted
                                                 at the MSB position of the transmitted data (9th bit when
                                                 the word length is set to 9 data bits; 8th bit when the
                                                 word length is set to 8 data bits). */
 
  uint32_t Mode;                      /*!< Specifies wether the Receive or Transmit mode is enabled or disabled.
                                           This parameter can be a value of @ref IRDA_Mode */
                                            
  uint8_t  Prescaler;                 /*!< Specifies the Prescaler */
  
  uint32_t IrDAMode;                  /*!< Specifies the IrDA mode
                                           This parameter can be a value of @ref IRDA_Low_Power */
}IRDA_InitTypeDef;

/** 
  * @brief HAL State structures definition  
  */ 
typedef enum
{
  HAL_IRDA_STATE_RESET             = 0x00,    /*!< Peripheral is not yet Initialized */
  HAL_IRDA_STATE_READY             = 0x01,    /*!< Peripheral Initialized and ready for use */
  HAL_IRDA_STATE_BUSY              = 0x02,    /*!< An internal process is ongoing */
  HAL_IRDA_STATE_BUSY_TX           = 0x12,    /*!< Data Transmission process is ongoing */
  HAL_IRDA_STATE_BUSY_RX           = 0x22,    /*!< Data Reception process is ongoing */
  HAL_IRDA_STATE_BUSY_TX_RX        = 0x32,    /*!< Data Transmission and Reception process is ongoing */
  HAL_IRDA_STATE_TIMEOUT           = 0x03,    /*!< Timeout state */
  HAL_IRDA_STATE_ERROR             = 0x04     /*!< Error */
}HAL_IRDA_StateTypeDef;

/** 
  * @brief IRDA handle Structure definition  
  */  
typedef struct
{
  USART_TypeDef               *Instance;        /* USART registers base address       */
  
  IRDA_InitTypeDef            Init;             /* IRDA communication parameters      */
  
  uint8_t                     *pTxBuffPtr;      /* Pointer to IRDA Tx transfer Buffer */
  
  uint16_t                    TxXferSize;       /* IRDA Tx Transfer size              */
  
  uint16_t                    TxXferCount;      /* IRDA Tx Transfer Counter           */
  
  uint8_t                     *pRxBuffPtr;      /* Pointer to IRDA Rx transfer Buffer */
  
  uint16_t                    RxXferSize;       /* IRDA Rx Transfer size              */
  
  uint16_t                    RxXferCount;      /* IRDA Rx Transfer Counter           */  
  
  DMA_HandleTypeDef           *hdmatx;          /* IRDA Tx DMA Handle parameters      */
    
  DMA_HandleTypeDef           *hdmarx;          /* IRDA Rx DMA Handle parameters      */
  
  HAL_LockTypeDef             Lock;             /* Locking object                     */
  
  __IO HAL_IRDA_StateTypeDef  State;            /* IRDA communication state           */
  
  __IO uint32_t               ErrorCode;        /* IRDA Error code                    */

}IRDA_HandleTypeDef;
/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup IRDA_Exported_Constants IRDA Exported constants
  * @{
  */
/** @defgroup IRDA_Error_Code IRDA Error Code
  * @brief    IRDA Error Code 
  * @{
  */ 
#define HAL_IRDA_ERROR_NONE         ((uint32_t)0x00000000)   /*!< No error            */
#define HAL_IRDA_ERROR_PE           ((uint32_t)0x00000001)   /*!< Parity error        */
#define HAL_IRDA_ERROR_NE           ((uint32_t)0x00000002)   /*!< Noise error         */
#define HAL_IRDA_ERROR_FE           ((uint32_t)0x00000004)   /*!< Frame error         */
#define HAL_IRDA_ERROR_ORE          ((uint32_t)0x00000008)   /*!< Overrun error       */
#define HAL_IRDA_ERROR_DMA          ((uint32_t)0x00000010)   /*!< DMA transfer error  */
/**
  * @}
  */

/** @defgroup IRDA_Word_Length IRDA Word Length
  * @{
  */
#define IRDA_WORDLENGTH_8B                  ((uint32_t)0x00000000)
#define IRDA_WORDLENGTH_9B                  ((uint32_t)USART_CR1_M)
/**
  * @}
  */

/** @defgroup IRDA_Parity  IRDA Parity
  * @{
  */ 
#define IRDA_PARITY_NONE                    ((uint32_t)0x00000000)
#define IRDA_PARITY_EVEN                    ((uint32_t)USART_CR1_PCE)
#define IRDA_PARITY_ODD                     ((uint32_t)(USART_CR1_PCE | USART_CR1_PS)) 
/**
  * @}
  */ 

/** @defgroup IRDA_Mode IRDA Transfer Mode 
  * @{
  */ 
#define IRDA_MODE_RX                        ((uint32_t)USART_CR1_RE)
#define IRDA_MODE_TX                        ((uint32_t)USART_CR1_TE)
#define IRDA_MODE_TX_RX                     ((uint32_t)(USART_CR1_TE |USART_CR1_RE))
/**
  * @}
  */

/** @defgroup IRDA_Low_Power IRDA Low Power
  * @{
  */
#define IRDA_POWERMODE_LOWPOWER                  ((uint32_t)USART_CR3_IRLP)
#define IRDA_POWERMODE_NORMAL                    ((uint32_t)0x00000000)
/**
  * @}
  */

/** @defgroup IRDA_Flags IRDA Flags
  *        Elements values convention: 0xXXXX
  *           - 0xXXXX  : Flag mask in the SR register
  * @{
  */
#define IRDA_FLAG_TXE                       ((uint32_t)0x00000080)
#define IRDA_FLAG_TC                        ((uint32_t)0x00000040)
#define IRDA_FLAG_RXNE                      ((uint32_t)0x00000020)
#define IRDA_FLAG_IDLE                      ((uint32_t)0x00000010)
#define IRDA_FLAG_ORE                       ((uint32_t)0x00000008)
#define IRDA_FLAG_NE                        ((uint32_t)0x00000004)
#define IRDA_FLAG_FE                        ((uint32_t)0x00000002)
#define IRDA_FLAG_PE                        ((uint32_t)0x00000001)
/**
  * @}
  */
  
/** @defgroup IRDA_Interrupt_definition IRDA Interrupt Definitions
  *        Elements values convention: 0xY000XXXX
  *           - XXXX  : Interrupt mask in the XX register
  *           - Y  : Interrupt source register (2bits)
  *                 - 01: CR1 register
  *                 - 10: CR2 register
  *                 - 11: CR3 register
  * @{
  */
#define IRDA_IT_PE                          ((uint32_t)(IRDA_CR1_REG_INDEX << 28 | USART_CR1_PEIE))
#define IRDA_IT_TXE                         ((uint32_t)(IRDA_CR1_REG_INDEX << 28 | USART_CR1_TXEIE))
#define IRDA_IT_TC                          ((uint32_t)(IRDA_CR1_REG_INDEX << 28 | USART_CR1_TCIE))
#define IRDA_IT_RXNE                        ((uint32_t)(IRDA_CR1_REG_INDEX << 28 | USART_CR1_RXNEIE))
#define IRDA_IT_IDLE                        ((uint32_t)(IRDA_CR1_REG_INDEX << 28 | USART_CR1_IDLEIE))

#define IRDA_IT_LBD                         ((uint32_t)(IRDA_CR2_REG_INDEX << 28 | USART_CR2_LBDIE))

#define IRDA_IT_CTS                         ((uint32_t)(IRDA_CR3_REG_INDEX << 28 | USART_CR3_CTSIE))
#define IRDA_IT_ERR                         ((uint32_t)(IRDA_CR3_REG_INDEX << 28 | USART_CR3_EIE))
/**
  * @}
  */

/**
  * @}
  */
  
/* Exported macro ------------------------------------------------------------*/
/** @defgroup IRDA_Exported_Macros IRDA Exported Macros
  * @{
  */

/** @brief Reset IRDA handle state
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @retval None
  */
#define __HAL_IRDA_RESET_HANDLE_STATE(__HANDLE__) ((__HANDLE__)->State = HAL_IRDA_STATE_RESET)

/** @brief  Flushs the IRDA DR register 
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  */
#define __HAL_IRDA_FLUSH_DRREGISTER(__HANDLE__) ((__HANDLE__)->Instance->DR)

/** @brief  Checks whether the specified IRDA flag is set or not.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @param  __FLAG__: specifies the flag to check.
  *        This parameter can be one of the following values:
  *            @arg IRDA_FLAG_TXE:  Transmit data register empty flag
  *            @arg IRDA_FLAG_TC:   Transmission Complete flag
  *            @arg IRDA_FLAG_RXNE: Receive data register not empty flag
  *            @arg IRDA_FLAG_IDLE: Idle Line detection flag
  *            @arg IRDA_FLAG_ORE:  OverRun Error flag
  *            @arg IRDA_FLAG_NE:   Noise Error flag
  *            @arg IRDA_FLAG_FE:   Framing Error flag
  *            @arg IRDA_FLAG_PE:   Parity Error flag
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_IRDA_GET_FLAG(__HANDLE__, __FLAG__) (((__HANDLE__)->Instance->SR & (__FLAG__)) == (__FLAG__))

/** @brief  Clears the specified IRDA pending flag.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @param  __FLAG__: specifies the flag to check.
  *          This parameter can be any combination of the following values:
  *            @arg IRDA_FLAG_TC:   Transmission Complete flag.
  *            @arg IRDA_FLAG_RXNE: Receive data register not empty flag.
  *   
  * @note   PE (Parity error), FE (Framing error), NE (Noise error), ORE (OverRun 
  *          error) and IDLE (Idle line detected) flags are cleared by software 
  *          sequence: a read operation to USART_SR register followed by a read
  *          operation to USART_DR register.
  * @note   RXNE flag can be also cleared by a read to the USART_DR register.
  * @note   TC flag can be also cleared by software sequence: a read operation to 
  *          USART_SR register followed by a write operation to USART_DR register.
  * @note   TXE flag is cleared only by a write to the USART_DR register.
  *   
  * @retval None
  */
#define __HAL_IRDA_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->SR = ~(__FLAG__))

/** @brief  Clear the IRDA PE pending flag.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @retval None
  */
#define __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)     \
  do{                                           \
    __IO uint32_t tmpreg;                       \
    tmpreg = (__HANDLE__)->Instance->SR;        \
    UNUSED(tmpreg);                             \
  } while(0)
                                              
/** @brief  Clear the IRDA FE pending flag.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @retval None
  */
#define __HAL_IRDA_CLEAR_FEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)

/** @brief  Clear the IRDA NE pending flag.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @retval None
  */
#define __HAL_IRDA_CLEAR_NEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)

/** @brief  Clear the IRDA ORE pending flag.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @retval None
  */
#define __HAL_IRDA_CLEAR_OREFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)

/** @brief  Clear the IRDA IDLE pending flag.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @retval None
  */
#define __HAL_IRDA_CLEAR_IDLEFLAG(__HANDLE__) __HAL_IRDA_CLEAR_PEFLAG(__HANDLE__)

/** @brief  Enables or disables the specified IRDA interrupt.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @param  __INTERRUPT__: specifies the IRDA interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg IRDA_IT_TXE:  Transmit Data Register empty interrupt
  *            @arg IRDA_IT_TC:   Transmission complete interrupt
  *            @arg IRDA_IT_RXNE: Receive Data register not empty interrupt
  *            @arg IRDA_IT_IDLE: Idle line detection interrupt
  *            @arg IRDA_IT_PE:   Parity Error interrupt
  *            @arg IRDA_IT_ERR:  Error interrupt(Frame error, noise error, overrun error)
  * @retval None
  */
#define __HAL_IRDA_ENABLE_IT(__HANDLE__, __INTERRUPT__)   ((((__INTERRUPT__) >> 28) == 1)? ((__HANDLE__)->Instance->CR1 |= ((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28) == 2)? ((__HANDLE__)->Instance->CR2 |=  ((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                        ((__HANDLE__)->Instance->CR3 |= ((__INTERRUPT__) & IRDA_IT_MASK)))
#define __HAL_IRDA_DISABLE_IT(__HANDLE__, __INTERRUPT__)  ((((__INTERRUPT__) >> 28) == 1)? ((__HANDLE__)->Instance->CR1 &= ~((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           (((__INTERRUPT__) >> 28) == 2)? ((__HANDLE__)->Instance->CR2 &= ~((__INTERRUPT__) & IRDA_IT_MASK)): \
                                                           ((__HANDLE__)->Instance->CR3 &= ~ ((__INTERRUPT__) & IRDA_IT_MASK)))
    
/** @brief  Checks whether the specified IRDA interrupt has occurred or not.
  * @param  __HANDLE__: specifies the USART Handle.
  *         This parameter can be USARTx where x: 1, 2, 3, 4, 5, 6, 7 or 8 to select the USART or 
  *         UART peripheral.
  * @param  __IT__: specifies the IRDA interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg IRDA_IT_TXE: Transmit Data Register empty interrupt
  *            @arg IRDA_IT_TC:  Transmission complete interrupt
  *            @arg IRDA_IT_RXNE: Receive Data register not empty interrupt
  *            @arg IRDA_IT_IDLE: Idle line detection interrupt
  *            @arg USART_IT_ERR: Error interrupt
  *            @arg IRDA_IT_PE: Parity Error interrupt
  * @retval The new state of __IT__ (TRUE or FALSE).
  */
#define __HAL_IRDA_GET_IT_SOURCE(__HANDLE__, __IT__) (((((__IT__) >> 28) == 1)? (__HANDLE__)->Instance->CR1:(((((uint32_t)(__IT__)) >> 28) == 2)? \
                                                      (__HANDLE__)->Instance->CR2 : (__HANDLE__)->Instance->CR3)) & (((uint32_t)(__IT__)) & IRDA_IT_MASK))

/** @brief  Macro to enable the IRDA's one bit sample method
  * @param  __HANDLE__: specifies the IRDA Handle.  
  * @retval None
  */     
#define __HAL_IRDA_ONE_BIT_SAMPLE_ENABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3|= USART_CR3_ONEBIT)

/** @brief  Macro to disable the IRDA's one bit sample method
  * @param  __HANDLE__: specifies the IRDA Handle.  
  * @retval None
  */      
#define __HAL_IRDA_ONE_BIT_SAMPLE_DISABLE(__HANDLE__) ((__HANDLE__)->Instance->CR3 &= (uint16_t)~((uint16_t)USART_CR3_ONEBIT))

/** @brief  Enable UART/USART associated to IRDA Handle
  * @param  __HANDLE__: specifies the IRDA Handle.
  *         IRDA Handle selects the USARTx or UARTy peripheral 
  *         (USART,UART availability and x,y values depending on device).
  * @retval None
  */
#define __HAL_IRDA_ENABLE(__HANDLE__)   ((__HANDLE__)->Instance->CR1 |=  USART_CR1_UE)

/** @brief  Disable UART/USART associated to IRDA Handle
  * @param  __HANDLE__: specifies the IRDA Handle.
  *         IRDA Handle selects the USARTx or UARTy peripheral 
  *         (USART,UART availability and x,y values depending on device).
  * @retval None
  */
#define __HAL_IRDA_DISABLE(__HANDLE__)   ((__HANDLE__)->Instance->CR1 &=  ~USART_CR1_UE)
    
/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/
/** @addtogroup IRDA_Exported_Functions
  * @{
  */
  
/** @addtogroup IRDA_Exported_Functions_Group1
  * @{
  */
/* Initialization/de-initialization functions  **********************************/
HAL_StatusTypeDef HAL_IRDA_Init(IRDA_HandleTypeDef *hirda);
HAL_StatusTypeDef HAL_IRDA_DeInit(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_MspInit(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_MspDeInit(IRDA_HandleTypeDef *hirda);
/**
  * @}
  */

/** @addtogroup IRDA_Exported_Functions_Group2
  * @{
  */
/* IO operation functions *******************************************************/
HAL_StatusTypeDef HAL_IRDA_Transmit(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_IRDA_Receive(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_IRDA_Transmit_IT(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_IRDA_Receive_IT(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_IRDA_Transmit_DMA(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_IRDA_Receive_DMA(IRDA_HandleTypeDef *hirda, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_IRDA_DMAPause(IRDA_HandleTypeDef *hirda);
HAL_StatusTypeDef HAL_IRDA_DMAResume(IRDA_HandleTypeDef *hirda);
HAL_StatusTypeDef HAL_IRDA_DMAStop(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_IRQHandler(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_TxCpltCallback(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_RxCpltCallback(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_TxHalfCpltCallback(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_RxHalfCpltCallback(IRDA_HandleTypeDef *hirda);
void HAL_IRDA_ErrorCallback(IRDA_HandleTypeDef *hirda);
/**
  * @}
  */

/** @addtogroup IRDA_Exported_Functions_Group3
  * @{
  */
/* Peripheral State functions  **************************************************/
HAL_IRDA_StateTypeDef HAL_IRDA_GetState(IRDA_HandleTypeDef *hirda);
uint32_t HAL_IRDA_GetError(IRDA_HandleTypeDef *hirda);
/**
  * @}
  */ 

/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup IRDA_Private_Constants IRDA Private Constants
  * @{
  */

/** @brief IRDA interruptions flag mask
  * 
  */ 
#define IRDA_IT_MASK  ((uint32_t) USART_CR1_PEIE | USART_CR1_TXEIE | USART_CR1_TCIE | USART_CR1_RXNEIE | \
                                  USART_CR1_IDLEIE | USART_CR2_LBDIE | USART_CR3_CTSIE | USART_CR3_EIE )


#define IRDA_CR1_REG_INDEX                  1    
#define IRDA_CR2_REG_INDEX                  2    
#define IRDA_CR3_REG_INDEX                  3 
/**
  * @}
  */

/* Private macros --------------------------------------------------------*/
/** @defgroup IRDA_Private_Macros   IRDA Private Macros
  * @{
  */
#define IS_IRDA_WORD_LENGTH(LENGTH) (((LENGTH) == IRDA_WORDLENGTH_8B) || \
                                     ((LENGTH) == IRDA_WORDLENGTH_9B))
#define IS_IRDA_PARITY(PARITY) (((PARITY) == IRDA_PARITY_NONE) || \
                                ((PARITY) == IRDA_PARITY_EVEN) || \
                                ((PARITY) == IRDA_PARITY_ODD))
#define IS_IRDA_MODE(MODE) ((((MODE) & (uint32_t)0x0000FFF3) == 0x00) && ((MODE) != (uint32_t)0x000000))
#define IS_IRDA_POWERMODE(MODE) (((MODE) == IRDA_POWERMODE_LOWPOWER) || \
                                 ((MODE) == IRDA_POWERMODE_NORMAL))
#define IS_IRDA_BAUDRATE(BAUDRATE) ((BAUDRATE) < 115201)

#define IRDA_DIV(_PCLK_, _BAUD_)                  (((_PCLK_)*25)/(4*(_BAUD_)))
#define IRDA_DIVMANT(_PCLK_, _BAUD_)              (IRDA_DIV((_PCLK_), (_BAUD_))/100)
#define IRDA_DIVFRAQ(_PCLK_, _BAUD_)              (((IRDA_DIV((_PCLK_), (_BAUD_)) - (IRDA_DIVMANT((_PCLK_), (_BAUD_)) * 100)) * 16 + 50) / 100)
#define IRDA_BRR(_PCLK_, _BAUD_)                  ((IRDA_DIVMANT((_PCLK_), (_BAUD_)) << 4)|(IRDA_DIVFRAQ((_PCLK_), (_BAUD_)) & 0x0F))

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup IRDA_Private_Functions IRDA Private Functions
  * @{
  */

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */ 
  
#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_HAL_IRDA_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
