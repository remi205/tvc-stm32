/**
  ******************************************************************************
  * @file    stm32f4xx_hal_dsi.h
  * @author  MCD Application Team
  * @version V1.4.0RC3
  * @date    08-May-2015
  * @brief   Header file of DSI HAL module.
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
#ifndef __STM32F4xx_HAL_DSI_H
#define __STM32F4xx_HAL_DSI_H

#ifdef __cplusplus
 extern "C" {
#endif

#if defined(STM32F469xx) || defined(STM32F479xx)
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal_def.h"

/** @addtogroup STM32F4xx_HAL_Driver
  * @{
  */

/** @defgroup DSI DSI
  * @brief DSI HAL module driver
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/
/** 
  * @brief  DSI Init Structure definition
  */
typedef struct
{
  uint32_t AutomaticClockLaneControl; /*!< Automatic clock lane control
                                           This parameter can be any value of @ref DSI_Automatic_Clk_Lane_Control */
  
  uint32_t TXEscapeCkdiv;             /*!< TX Escape clock division                                               */
  
  uint32_t UnitIntervalx4;            /*!< Unit Interval multiplied by 4                                          */
  
  uint32_t NumberOfLanes;             /*!< Number of lanes
                                           This parameter can be any value of @ref DSI_Number_Of_Lanes            */
  
  uint32_t VirtualChannelID;          /*!< Virtual channel ID                                                     */
  
  uint32_t ColorCoding;               /*!< Color coding for LTDC interface
                                           This parameter can be any value of @ref DSI_Color_Coding               */
  
  uint32_t LooselyPacked;             /*!< Enable or disable loosely packed stream (only for 18-bit configuration)
                                           This parameter can be any value of @ref DSI_LooselyPacked              */
  
  uint32_t HSPolarity;                /*!< HSYNC pin polarity
                                           This parameter can be any value of @ref DSI_HSYNC_Polarity             */
  
  uint32_t VSPolarity;                /*!< VSYNC pin polarity
                                           This parameter can be any value of @ref DSI_VSYNC_Polarity             */
  
  uint32_t DEPolarity;                /*!< Data Enable pin polarity
                                           This parameter can be any value of @ref DSI_DATA_ENABLE_Polarity       */
  
}DSI_InitTypeDef;

/** 
  * @brief  DSI PLL Clock structure definition  
  */
typedef struct
{
  uint32_t PLLNDIV; /*!< PLL Loop Division Factor
                         This parameter must be a value between 10 and 125   */
  
  uint32_t PLLIDF;  /*!< PLL Input Division Factor
                         This parameter can be any value of @ref DSI_PLL_IDF */
  
  uint32_t PLLODF;  /*!< PLL Output Division Factor
                         This parameter can be any value of @ref DSI_PLL_ODF */
  
}DSI_PLLInitTypeDef;

/** 
  * @brief  DSI Video mode configuration
  */  
typedef struct 
{
  uint32_t Mode;                         /*!< Video mode type
                                              This parameter can be any value of @ref DSI_Video_Mode_Type  */
                                         
  uint32_t PacketSize;                   /*!< Video packet size                                            */
                                         
  uint32_t NumberOfChunks;               /*!< Number of chunks                                             */
                                         
  uint32_t NullPacketSize;               /*!< Null packet size                                             */
                                         
  uint32_t HorizontalSyncActive;         /*!< Horizontal synchronism active duration                       */
                                         
  uint32_t HorizontalBackPorch;          /*!< Horizontal back-porch duration                               */
                                         
  uint32_t HorizontalLine;               /*!< Horizontal line duration                                     */
                                         
  uint32_t VerticalSyncActive;           /*!< Vertical synchronism active duration                         */
                                         
  uint32_t VerticalBackPorch;            /*!< Vertical back-porch duration                                 */
                                         
  uint32_t VerticalFrontPorch;           /*!< Vertical front-porch duration                                */
                                         
  uint32_t VerticalActive;               /*!< Vertical active duration                                     */
                                         
  uint32_t ColorMode;                    /*!< Color mode
                                              This parameter can be any value of @ref DSI_Color_Mode       */
                                         
  uint32_t Shutdown;                     /*!< Shut-down
                                              This parameter can be any value of @ref DSI_ShutDown         */
                                         
  uint32_t LPCommandEnable;              /*!< Low-power command enable
                                              This parameter can be any value of @ref DSI_LP_Command       */
  
  uint32_t LPLargestPacketSize;          /*!< The size, in bytes, of the low power largest packet that
                                              can fit in a line during VSA, VBP and VFP regions            */
           
  uint32_t LPVACTLargestPacketSize;      /*!< The size, in bytes, of the low power largest packet that
                                              can fit in a line during VACT region                         */
           
  uint32_t LPHorizontalFrontPorchEnable; /*!< Low-power horizontal front-porch enable
                                              This parameter can be any value of @ref DSI_LP_HFP           */
           
  uint32_t LPHorizontalBackPorchEnable;  /*!< Low-power horizontal back-porch enable
                                              This parameter can be any value of @ref DSI_LP_HBP           */
           
  uint32_t LPVerticalActiveEnable;       /*!< Low-power vertical active enable
                                              This parameter can be any value of @ref DSI_LP_VACT          */
           
  uint32_t LPVerticalFrontPorchEnable;   /*!< Low-power vertical front-porch enable
                                              This parameter can be any value of @ref DSI_LP_VFP           */
           
  uint32_t LPVerticalBackPorchEnable;    /*!< Low-power vertical back-porch enable
                                              This parameter can be any value of @ref DSI_LP_VBP           */
           
  uint32_t LPVerticalSyncActiveEnable;   /*!< Low-power vertical sync active enable
                                              This parameter can be any value of @ref DSI_LP_VSYNC         */
           
  uint32_t FrameBTAAcknowledgeEnable;    /*!< Frame bus-turn-around acknowledge enable
                                              This parameter can be any value of @ref DSI_FBTA_acknowledge */
  
  uint32_t PixelClk;                     /*!< Pixel clock frequency, in Hertz                              */
                                         
  uint32_t LaneByteClk;                  /*!< Lane byte clock frequency, in Hertz                          */
  
}DSI_VidCfgTypeDef;

/** 
  * @brief  DSI Command mode configuration
  */  
typedef struct 
{
  uint32_t HorizontalLine;        /*!< Horizontal line duration                                           */
  
  uint32_t CommandSize;           /*!< Maximum allowed size for an LTDC write memory command              */
  
  uint32_t TearingEffectSource;   /*!< Tearing effect source
                                       This parameter can be any value of @ref DSI_TearingEffectSource    */
  
  uint32_t TearingEffectPolarity; /*!< Tearing effect pin polarity
                                       This parameter can be any value of @ref DSI_TearingEffectPolarity  */
  
  uint32_t VSPolarity;            /*!< VSync edge on which the LTDC is halted
                                       This parameter can be any value of @ref DSI_Vsync_Polarity         */
  
  uint32_t AutomaticRefresh;      /*!< Automatic refresh mode
                                       This parameter can be any value of @ref DSI_AutomaticRefresh       */
  
  uint32_t TEAcknowledgeRequest;  /*!< Tearing Effect Acknowledge Request Enable
                                       This parameter can be any value of @ref DSI_TE_AcknowledgeRequest  */
  
  uint32_t AcknowledgeRequest;    /*!< Acknowledge Request Enable
                                       This parameter can be any value of @ref DSI_AcknowledgeRequest  */
  
  uint32_t LPGenShortWriteNoP;    /*!< Generic Short Write Zero parameters Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenShortWriteNoP  */
  
  uint32_t LPGenShortWriteOneP;   /*!< Generic Short Write One parameter Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenShortWriteOneP */
  
  uint32_t LPGenShortWriteTwoP;   /*!< Generic Short Write Two parameters Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenShortWriteTwoP */
  
  uint32_t LPGenShortReadNoP;     /*!< Generic Short Read Zero parameters Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenShortReadNoP   */
           
  uint32_t LPGenShortReadOneP;    /*!< Generic Short Read One parameter Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenShortReadOneP  */
           
  uint32_t LPGenShortReadTwoP;    /*!< Generic Short Read Two parameters Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenShortReadTwoP  */
  
  uint32_t LPGenLongWrite;        /*!< Generic Long Write Transmission
                                       This parameter can be any value of @ref DSI_LP_LPGenLongWrite      */
  
  uint32_t LPDcsShortWriteNoP;    /*!< DCS Short Write Zero parameters Transmission
                                       This parameter can be any value of @ref DSI_LP_LPDcsShortWriteNoP  */
  
  uint32_t LPDcsShortWriteOneP;   /*!< DCS Short Write One parameter Transmission
                                       This parameter can be any value of @ref DSI_LP_LPDcsShortWriteOneP */
  
  uint32_t LPDcsShortReadNoP;     /*!< DCS Short Read Zero parameters Transmission
                                       This parameter can be any value of @ref DSI_LP_LPDcsShortReadNoP   */
  
  uint32_t LPDcsLongWrite;        /*!< DCS Long Write Transmission
                                       This parameter can be any value of @ref DSI_LP_LPDcsLongWrite      */
  
  uint32_t LPMaxReadPacket;       /*!< Maximum Read Packet Size Transmission
                                       This parameter can be any value of @ref DSI_LP_LPMaxReadPacket     */
  
  uint32_t PixelClk;              /*!< Pixel clock frequency, in Hertz                                    */
  
  uint32_t LaneByteClk;           /*!< Lane byte clock frequency, in Hertz                                */
  
}DSI_CmdCfgTypeDef;

/** 
  * @brief  DSI PHY Timings definition
  */  
typedef struct 
{
  uint32_t ClockLaneHS2LPTime;        /*!< The maximum time that the D-PHY clock lane takes to go from high-speed
                                           to low-power transmission                                              */
  
  uint32_t ClockLaneLP2HSTime;        /*!< The maximum time that the D-PHY clock lane takes to go from low-power
                                           to high-speed transmission                                             */
  
  uint32_t DataLaneHS2LPTime;         /*!< The maximum time that the D-PHY data lanes takes to go from high-speed
                                           to low-power transmission                                              */
  
  uint32_t DataLaneLP2HSTime;         /*!< The maximum time that the D-PHY data lanes takes to go from low-power
                                           to high-speed transmission                                             */
  
  uint32_t DataLaneMaxReadTime;       /*!< The maximum time required to perform a read command */
  
  uint32_t StopWaitTime;              /*!< The minimum wait period to request a High-Speed transmission after the
                                           Stop state                                                             */
  
}DSI_PHY_TimerTypeDef;

/** 
  * @brief  DSI HOST Timeouts definition
  */  
typedef struct 
{
  uint32_t TimeoutCkdiv;                 /*!< Time-out clock division          */
  
  uint32_t HighSpeedTransmissionTimeout; /*!< High-speed transmission time-out */
  
  uint32_t LowPowerReceptionTimeout;     /*!< Low-power reception time-out     */
  
  uint32_t HighSpeedReadTimeout;         /*!< High-speed read time-out         */
  
  uint32_t LowPowerReadTimeout;          /*!< Low-power read time-out          */
  
  uint32_t HighSpeedWriteTimeout;        /*!< High-speed write time-out        */
  
  uint32_t HighSpeedWritePrespMode;      /*!< High-speed write presp mode      */
  
  uint32_t LowPowerWriteTimeout;         /*!< Low-speed write time-out         */
  
  uint32_t BTATimeout;                   /*!< BTA time-out                     */
  
}DSI_HOST_TimeoutTypeDef;

/**
  * @brief  DSI States Structure definition
  */
typedef enum 
{
  HAL_DSI_STATE_RESET   = 0x00,
  HAL_DSI_STATE_READY   = 0x01,
  HAL_DSI_STATE_ERROR   = 0x02,
  HAL_DSI_STATE_BUSY    = 0x03,
  HAL_DSI_STATE_TIMEOUT = 0x04
}HAL_DSI_StateTypeDef;

/**
  * @brief  DSI Handle Structure definition
  */
typedef struct
{
  DSI_TypeDef               *Instance;   /*!< Register base address     */
  DSI_InitTypeDef           Init;        /*!< DSI required parameters   */
  HAL_LockTypeDef           Lock;        /*!< DSI peripheral status     */
  __IO HAL_DSI_StateTypeDef State;       /*!< DSI communication state   */
  __IO uint32_t             ErrorCode;   /*!< DSI Error code            */
  uint32_t                  ErrorMsk;    /*!< DSI Error monitoring mask */
}DSI_HandleTypeDef;

/* Exported constants --------------------------------------------------------*/
/** @defgroup DSI_DCS_Command
  * @{
  */
#define DSI_ENTER_IDLE_MODE       0x39
#define DSI_ENTER_INVERT_MODE     0x21
#define DSI_ENTER_NORMAL_MODE     0x13
#define DSI_ENTER_PARTIAL_MODE    0x12
#define DSI_ENTER_SLEEP_MODE      0x10
#define DSI_EXIT_IDLE_MODE        0x38
#define DSI_EXIT_INVERT_MODE      0x20
#define DSI_EXIT_SLEEP_MODE       0x11
#define DSI_GET_3D_CONTROL        0x3F
#define DSI_GET_ADDRESS_MODE      0x0B
#define DSI_GET_BLUE_CHANNEL      0x08
#define DSI_GET_DIAGNOSTIC_RESULT 0x0F
#define DSI_GET_DISPLAY_MODE      0x0D
#define DSI_GET_GREEN_CHANNEL     0x07
#define DSI_GET_PIXEL_FORMAT      0x0C
#define DSI_GET_POWER_MODE        0x0A
#define DSI_GET_RED_CHANNEL       0x06
#define DSI_GET_SCANLINE          0x45
#define DSI_GET_SIGNAL_MODE       0x0E
#define DSI_NOP                   0x00
#define DSI_READ_DDB_CONTINUE     0xA8
#define DSI_READ_DDB_START        0xA1
#define DSI_READ_MEMORY_CONTINUE  0x3E
#define DSI_READ_MEMORY_START     0x2E
#define DSI_SET_3D_CONTROL        0x3D
#define DSI_SET_ADDRESS_MODE      0x36
#define DSI_SET_COLUMN_ADDRESS    0x2A
#define DSI_SET_DISPLAY_OFF       0x28
#define DSI_SET_DISPLAY_ON        0x29
#define DSI_SET_GAMMA_CURVE       0x26
#define DSI_SET_PAGE_ADDRESS      0x2B
#define DSI_SET_PARTIAL_COLUMNS   0x31
#define DSI_SET_PARTIAL_ROWS      0x30
#define DSI_SET_PIXEL_FORMAT      0x3A
#define DSI_SET_SCROLL_AREA       0x33
#define DSI_SET_SCROLL_START      0x37
#define DSI_SET_TEAR_OFF          0x34
#define DSI_SET_TEAR_ON           0x35
#define DSI_SET_TEAR_SCANLINE     0x44
#define DSI_SET_VSYNC_TIMING      0x40
#define DSI_SOFT_RESET            0x01
#define DSI_WRITE_LUT             0x2D
#define DSI_WRITE_MEMORY_CONTINUE 0x3C
#define DSI_WRITE_MEMORY_START    0x2C
/**
  * @}
  */

/** @defgroup DSI_Video_Mode_Type
  * @{
  */
#define DSI_VID_MODE_NB_PULSES 0
#define DSI_VID_MODE_NB_EVENTS 1
#define DSI_VID_MODE_BURST     2
/**
  * @}
  */

/** @defgroup DSI_Color_Mode
  * @{
  */
#define DSI_COLOR_MODE_FULL  0
#define DSI_COLOR_MODE_EIGHT DSI_WCR_COLM
/**
  * @}
  */

/** @defgroup DSI_ShutDown
  * @{
  */
#define DSI_DISPLAY_ON  0
#define DSI_DISPLAY_OFF DSI_WCR_SHTDN
/**
  * @}
  */

/** @defgroup DSI_LP_Command
  * @{
  */
#define DSI_LP_COMMAND_DISABLE 0
#define DSI_LP_COMMAND_ENABLE  DSI_VMCR_LPCE
/**
  * @}
  */

/** @defgroup DSI_LP_HFP
  * @{
  */
#define DSI_LP_HFP_DISABLE 0
#define DSI_LP_HFP_ENABLE  DSI_VMCR_LPHFPE
/**
  * @}
  */

/** @defgroup DSI_LP_HBP
  * @{
  */
#define DSI_LP_HBP_DISABLE 0
#define DSI_LP_HBP_ENABLE  DSI_VMCR_LPHBPE
/**
  * @}
  */

/** @defgroup DSI_LP_VACT
  * @{
  */
#define DSI_LP_VACT_DISABLE 0
#define DSI_LP_VACT_ENABLE  DSI_VMCR_LPVAE
/**
  * @}
  */

/** @defgroup DSI_LP_VFP
  * @{
  */
#define DSI_LP_VFP_DISABLE 0
#define DSI_LP_VFP_ENABLE  DSI_VMCR_LPVFPE
/**
  * @}
  */

/** @defgroup DSI_LP_VBP
  * @{
  */
#define DSI_LP_VBP_DISABLE 0
#define DSI_LP_VBP_ENABLE  DSI_VMCR_LPVBPE
/**
  * @}
  */

/** @defgroup DSI_LP_VSYNC
  * @{
  */
#define DSI_LP_VSYNC_DISABLE 0
#define DSI_LP_VSYNC_ENABLE  DSI_VMCR_LPVSAE
/**
  * @}
  */

/** @defgroup DSI_FBTA_acknowledge
  * @{
  */
#define DSI_FBTAA_DISABLE 0
#define DSI_FBTAA_ENABLE  DSI_VMCR_FBTAAE
/**
  * @}
  */

/** @defgroup DSI_TearingEffectSource
  * @{
  */
#define DSI_TE_DSILINK  0
#define DSI_TE_EXTERNAL DSI_WCFGR_TESRC
/**
  * @}
  */

/** @defgroup DSI_TearingEffectPolarity
  * @{
  */
#define DSI_TE_RISING_EDGE  0
#define DSI_TE_FALLING_EDGE DSI_WCFGR_TEPOL
/**
  * @}
  */

/** @defgroup DSI_Vsync_Polarity
  * @{
  */
#define DSI_VSYNC_FALLING 0
#define DSI_VSYNC_RISING  DSI_WCFGR_VSPOL
/**
  * @}
  */

/** @defgroup DSI_AutomaticRefresh
  * @{
  */
#define DSI_AR_DISABLE 0
#define DSI_AR_ENABLE  DSI_WCFGR_AR
/**
  * @}
  */

/** @defgroup DSI_TE_AcknowledgeRequest
  * @{
  */
#define DSI_TE_ACKNOWLEDGE_DISABLE 0
#define DSI_TE_ACKNOWLEDGE_ENABLE DSI_CMCR_TEARE
/**
  * @}
  */

/** @defgroup DSI_AcknowledgeRequest
  * @{
  */
#define DSI_ACKNOWLEDGE_DISABLE 0
#define DSI_ACKNOWLEDGE_ENABLE DSI_CMCR_ARE
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenShortWriteNoP
  * @{
  */
#define DSI_LP_GSW0P_DISABLE 0
#define DSI_LP_GSW0P_ENABLE DSI_CMCR_GSW0TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenShortWriteOneP
  * @{
  */
#define DSI_LP_GSW1P_DISABLE 0
#define DSI_LP_GSW1P_ENABLE DSI_CMCR_GSW1TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenShortWriteTwoP
  * @{
  */
#define DSI_LP_GSW2P_DISABLE 0
#define DSI_LP_GSW2P_ENABLE DSI_CMCR_GSW2TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenShortReadNoP
  * @{
  */
#define DSI_LP_GSR0P_DISABLE 0
#define DSI_LP_GSR0P_ENABLE DSI_CMCR_GSR0TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenShortReadOneP
  * @{
  */
#define DSI_LP_GSR1P_DISABLE 0
#define DSI_LP_GSR1P_ENABLE DSI_CMCR_GSR1TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenShortReadTwoP
  * @{
  */
#define DSI_LP_GSR2P_DISABLE 0
#define DSI_LP_GSR2P_ENABLE DSI_CMCR_GSR2TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPGenLongWrite
  * @{
  */
#define DSI_LP_GLW_DISABLE 0
#define DSI_LP_GLW_ENABLE DSI_CMCR_GLWTX
/**
  * @}
  */

/** @defgroup DSI_LP_LPDcsShortWriteNoP
  * @{
  */
#define DSI_LP_DSW0P_DISABLE 0
#define DSI_LP_DSW0P_ENABLE DSI_CMCR_DSW0TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPDcsShortWriteOneP
  * @{
  */
#define DSI_LP_DSW1P_DISABLE 0
#define DSI_LP_DSW1P_ENABLE DSI_CMCR_DSW1TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPDcsShortReadNoP
  * @{
  */
#define DSI_LP_DSR0P_DISABLE 0
#define DSI_LP_DSR0P_ENABLE DSI_CMCR_DSR0TX
/**
  * @}
  */

/** @defgroup DSI_LP_LPDcsLongWrite
  * @{
  */
#define DSI_LP_DLW_DISABLE 0
#define DSI_LP_DLW_ENABLE DSI_CMCR_DLWTX
/**
  * @}
  */

/** @defgroup DSI_LP_LPMaxReadPacket
  * @{
  */
#define DSI_LP_MRDP_DISABLE 0
#define DSI_LP_MRDP_ENABLE DSI_CMCR_MRDPS
/**
  * @}
  */

/** @defgroup DSI_Automatic_Clk_Lane_Control
  * @{
  */
#define DSI_AUTO_CLK_LANE_CTRL_DISABLE 0
#define DSI_AUTO_CLK_LANE_CTRL_ENABLE  DSI_CLCR_ACR
/**
  * @}
  */

/** @defgroup DSI_Number_Of_Lanes
  * @{
  */
#define DSI_ONE_DATA_LANE  0
#define DSI_TWO_DATA_LANES 1
/**
  * @}
  */

/** @defgroup DSI_FlowControl
  * @{
  */
#define DSI_FLOW_CONTROL_CRC_RX  DSI_PCR_CRCRXE
#define DSI_FLOW_CONTROL_ECC_RX  DSI_PCR_ECCRXE
#define DSI_FLOW_CONTROL_BTA     DSI_PCR_BTAE
#define DSI_FLOW_CONTROL_EOTP_RX DSI_PCR_ETRXE
#define DSI_FLOW_CONTROL_EOTP_TX DSI_PCR_ETTXE
#define DSI_FLOW_CONTROL_ALL     (DSI_FLOW_CONTROL_CRC_RX | DSI_FLOW_CONTROL_ECC_RX | \
                                  DSI_FLOW_CONTROL_BTA | DSI_FLOW_CONTROL_EOTP_RX | \
                                  DSI_FLOW_CONTROL_EOTP_TX)
/**
  * @}
  */

/** @defgroup DSI_Color_Coding
  * @{
  */
#define DSI_RGB565_CONFIG1 ((uint32_t)0x00000000)
#define DSI_RGB565_CONFIG2 ((uint32_t)0x00000001)
#define DSI_RGB565_CONFIG3 ((uint32_t)0x00000002)
#define DSI_RGB666_CONFIG1 ((uint32_t)0x00000003)
#define DSI_RGB666_CONFIG2 ((uint32_t)0x00000004)
#define DSI_RGB888         ((uint32_t)0x00000005)
/**
  * @}
  */

/** @defgroup DSI_LooselyPacked
  * @{
  */
#define DSI_LOOSELY_PACKED_ENABLE  DSI_LCOLCR_LPE
#define DSI_LOOSELY_PACKED_DISABLE 0
/**
  * @}
  */

/** @defgroup DSI_HSYNC_Polarity
  * @{
  */
#define DSI_HSYNC_ACTIVE_HIGH       0
#define DSI_HSYNC_ACTIVE_LOW        DSI_LPCR_HSP
/**
  * @}
  */

/** @defgroup DSI_VSYNC_Polarity
  * @{
  */
#define DSI_VSYNC_ACTIVE_HIGH       0
#define DSI_VSYNC_ACTIVE_LOW        DSI_LPCR_VSP
/**
  * @}
  */

/** @defgroup DSI_DATA_ENABLE_Polarity
  * @{
  */
#define DSI_DATA_ENABLE_ACTIVE_HIGH 0
#define DSI_DATA_ENABLE_ACTIVE_LOW  DSI_LPCR_DEP
/**
  * @}
  */

/** @defgroup DSI_PLL_IDF
  * @{
  */
#define DSI_PLL_IN_DIV1 ((uint32_t)0x00000001)
#define DSI_PLL_IN_DIV2 ((uint32_t)0x00000002)
#define DSI_PLL_IN_DIV3 ((uint32_t)0x00000003)
#define DSI_PLL_IN_DIV4 ((uint32_t)0x00000004)
#define DSI_PLL_IN_DIV5 ((uint32_t)0x00000005)
#define DSI_PLL_IN_DIV6 ((uint32_t)0x00000006)
#define DSI_PLL_IN_DIV7 ((uint32_t)0x00000007)
/**
  * @}
  */

/** @defgroup DSI_PLL_ODF
  * @{
  */
#define DSI_PLL_OUT_DIV1 ((uint32_t)0x00000000)
#define DSI_PLL_OUT_DIV2 ((uint32_t)0x00000001)
#define DSI_PLL_OUT_DIV4 ((uint32_t)0x00000002)
#define DSI_PLL_OUT_DIV8 ((uint32_t)0x00000003)
/**
  * @}
  */

/** @defgroup DSI_Flags
  * @{
  */
#define DSI_FLAG_TE    DSI_WISR_TEIF
#define DSI_FLAG_ER    DSI_WISR_ERIF
#define DSI_FLAG_BUSY  DSI_WISR_BUSY
#define DSI_FLAG_PLLLS DSI_WISR_PLLLS
#define DSI_FLAG_PLLL  DSI_WISR_PLLLIF
#define DSI_FLAG_PLLU  DSI_WISR_PLLUIF
#define DSI_FLAG_RRS   DSI_WISR_RRS
#define DSI_FLAG_RR    DSI_WISR_RRIF
/**
  * @}
  */

/** @defgroup DSI_Interrupts
  * @{
  */
#define DSI_IT_TE   DSI_WIER_TEIE
#define DSI_IT_ER   DSI_WIER_ERIE
#define DSI_IT_PLLL DSI_WIER_PLLLIE
#define DSI_IT_PLLU DSI_WIER_PLLUIE
#define DSI_IT_RR   DSI_WIER_RRIE
/**
  * @}
  */

/** @defgroup DSI_SHORT_PKT_Data_Type
  * @{
  */
#define DSI_DCS_SHORT_PKT_WRITE_P0 ((uint32_t)0x00000005) /*!< DCS short write, no parameters      */
#define DSI_DCS_SHORT_PKT_WRITE_P1 ((uint32_t)0x00000015) /*!< DCS short write, one parameter      */
#define DSI_GEN_SHORT_PKT_WRITE_P0 ((uint32_t)0x00000003) /*!< Generic short write, no parameters  */
#define DSI_GEN_SHORT_PKT_WRITE_P1 ((uint32_t)0x00000013) /*!< Generic short write, one parameter  */
#define DSI_GEN_SHORT_PKT_WRITE_P2 ((uint32_t)0x00000023) /*!< Generic short write, two parameters */
/**
  * @}
  */

/** @defgroup DSI_LONG_PKT_Data_Type
  * @{
  */
#define DSI_DCS_LONG_PKT_WRITE ((uint32_t)0x00000039) /*!< DCS long write     */
#define DSI_GEN_LONG_PKT_WRITE ((uint32_t)0x00000029) /*!< Generic long write */
/**
  * @}
  */

/** @defgroup DSI_Error_Data_Type
  * @{
  */
#define HAL_DSI_ERROR_NONE 0
#define HAL_DSI_ERROR_ACK  ((uint32_t)0x00000001)
#define HAL_DSI_ERROR_PHY  ((uint32_t)0x00000002)
#define HAL_DSI_ERROR_TX   ((uint32_t)0x00000004)
#define HAL_DSI_ERROR_RX   ((uint32_t)0x00000008)
#define HAL_DSI_ERROR_ECC  ((uint32_t)0x00000010)
#define HAL_DSI_ERROR_CRC  ((uint32_t)0x00000020)
#define HAL_DSI_ERROR_PSE  ((uint32_t)0x00000040)
#define HAL_DSI_ERROR_EOT  ((uint32_t)0x00000080)
#define HAL_DSI_ERROR_OVF  ((uint32_t)0x00000100)
#define HAL_DSI_ERROR_GEN  ((uint32_t)0x00000200)
/**
  * @}
  */

/** @defgroup DSI_Lane_Group
  * @{
  */
#define DSI_CLOCK_LANE ((uint32_t)0x00000000)
#define DSI_DATA_LANES ((uint32_t)0x00000001)
/**
  * @}
  */

/** @defgroup DSI_Communication_Delay
  * @{
  */
#define DSI_SLEW_RATE_HSTX ((uint32_t)0x00000000)
#define DSI_SLEW_RATE_LPTX ((uint32_t)0x00000001)
#define DSI_HS_DELAY       ((uint32_t)0x00000002)
/**
  * @}
  */

/** @defgroup DSI_CustomLane
  * @{
  */
#define DSI_SWAP_LANE_PINS   ((uint32_t)0x00000000)
#define DSI_INVERT_HS_SIGNAL ((uint32_t)0x00000001)
/**
  * @}
  */

/** @defgroup DSI_Lane_Select
  * @{
  */
#define DSI_CLOCK_LANE ((uint32_t)0x00000000)
#define DSI_DATA_LANE0 ((uint32_t)0x00000001)
#define DSI_DATA_LANE1 ((uint32_t)0x00000002)
/**
  * @}
  */

/** @defgroup DSI_PHY_Timing
  * @{
  */
#define DSI_TCLK_POST    ((uint32_t)0x00000000)
#define DSI_TLPX_CLK     ((uint32_t)0x00000001)
#define DSI_THS_EXIT     ((uint32_t)0x00000002)
#define DSI_TLPX_DATA    ((uint32_t)0x00000003)
#define DSI_THS_ZERO     ((uint32_t)0x00000004)
#define DSI_THS_TRAIL    ((uint32_t)0x00000005)
#define DSI_THS_PREPARE  ((uint32_t)0x00000006)
#define DSI_TCLK_ZERO    ((uint32_t)0x00000007)
#define DSI_TCLK_PREPARE ((uint32_t)0x00000008)
/**
  * @}
  */

/* Exported macros -----------------------------------------------------------*/
/**
  * @brief  Get the DSI pending flags.
  * @param  __HANDLE__: DSI handle.
  * @param  __FLAG__: Get the specified flag.
  *          This parameter can be any combination of the following values:
  *            @arg DSI_FLAG_TE   : Tearing Effect Interrupt Flag 
  *            @arg DSI_FLAG_ER   : End of Refresh Interrupt Flag 
  *            @arg DSI_FLAG_BUSY : Busy Flag
  *            @arg DSI_FLAG_PLLLS: PLL Lock Status
  *            @arg DSI_FLAG_PLLL : PLL Lock Interrupt Flag
  *            @arg DSI_FLAG_PLLU : PLL Unlock Interrupt Flag
  *            @arg DSI_FLAG_RRS  : Regulator Ready Flag
  *            @arg DSI_FLAG_RR   : Regulator Ready Interrupt Flag
  * @retval The state of FLAG (SET or RESET).
  */
#define __HAL_DSI_GET_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->WISR & (__FLAG__))

/**
  * @brief  Clears the DSI pending flags.
  * @param  __HANDLE__: DSI handle.
  * @param  __FLAG__: specifies the flag to clear.
  *          This parameter can be any combination of the following values:
  *            @arg DSI_FLAG_TE   : Tearing Effect Interrupt Flag 
  *            @arg DSI_FLAG_ER   : End of Refresh Interrupt Flag 
  *            @arg DSI_FLAG_PLLL : PLL Lock Interrupt Flag
  *            @arg DSI_FLAG_PLLU : PLL Unlock Interrupt Flag
  *            @arg DSI_FLAG_RR   : Regulator Ready Interrupt Flag
  * @retval None
  */
#define __HAL_DSI_CLEAR_FLAG(__HANDLE__, __FLAG__) ((__HANDLE__)->Instance->WIFCR = (__FLAG__))

/**
  * @brief  Enables the specified DSI interrupts.
  * @param  __HANDLE__: DSI handle.
  * @param __INTERRUPT__: specifies the DSI interrupt sources to be enabled. 
  *          This parameter can be any combination of the following values:
  *            @arg DSI_IT_TE  : Tearing Effect Interrupt
  *            @arg DSI_IT_ER  : End of Refresh Interrupt
  *            @arg DSI_IT_PLLL: PLL Lock Interrupt
  *            @arg DSI_IT_PLLU: PLL Unlock Interrupt
  *            @arg DSI_IT_RR  : Regulator Ready Interrupt
  * @retval None
  */
#define __HAL_DSI_ENABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->WIER |= (__INTERRUPT__))

/**
  * @brief  Disables the specified DSI interrupts.
  * @param  __HANDLE__: DSI handle
  * @param __INTERRUPT__: specifies the DSI interrupt sources to be disabled. 
  *          This parameter can be any combination of the following values:
  *            @arg DSI_IT_TE  : Tearing Effect Interrupt
  *            @arg DSI_IT_ER  : End of Refresh Interrupt
  *            @arg DSI_IT_PLLL: PLL Lock Interrupt
  *            @arg DSI_IT_PLLU: PLL Unlock Interrupt
  *            @arg DSI_IT_RR  : Regulator Ready Interrupt
  * @retval None
  */
#define __HAL_DSI_DISABLE_IT(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->WIER &= ~(__INTERRUPT__))

/**
  * @brief  Checks whether the specified DSI interrupt has occurred or not.
  * @param  __HANDLE__: DSI handle
  * @param  __INTERRUPT__: specifies the DSI interrupt source to check.
  *          This parameter can be one of the following values:
  *            @arg DSI_IT_TE  : Tearing Effect Interrupt
  *            @arg DSI_IT_ER  : End of Refresh Interrupt
  *            @arg DSI_IT_PLLL: PLL Lock Interrupt
  *            @arg DSI_IT_PLLU: PLL Unlock Interrupt
  *            @arg DSI_IT_RR  : Regulator Ready Interrupt
  * @retval The state of INTERRUPT (SET or RESET).
  */
#define __HAL_DSI_GET_IT_SOURCE(__HANDLE__, __INTERRUPT__) ((__HANDLE__)->Instance->WISR & (__INTERRUPT__))

/* Exported functions --------------------------------------------------------*/
/** @defgroup DSI_Exported_Functions DSI Exported Functions
  * @{
  */
HAL_StatusTypeDef HAL_DSI_Init(DSI_HandleTypeDef *hdsi, DSI_PLLInitTypeDef *PLLInit);
HAL_StatusTypeDef HAL_DSI_DeInit(DSI_HandleTypeDef *hdsi);
void HAL_DSI_MspInit(DSI_HandleTypeDef *hdsi);
void HAL_DSI_MspDeInit(DSI_HandleTypeDef *hdsi);

void HAL_DSI_IRQHandler(DSI_HandleTypeDef *hdsi);
void HAL_DSI_TearingEffectCallback(DSI_HandleTypeDef *hdsi);
void HAL_DSI_EndOfRefreshCallback(DSI_HandleTypeDef *hdsi);
void HAL_DSI_ErrorCallback(DSI_HandleTypeDef *hdsi);

HAL_StatusTypeDef HAL_DSI_ConfigVideoMode(DSI_HandleTypeDef *hdsi, DSI_VidCfgTypeDef *VidCfg);
HAL_StatusTypeDef HAL_DSI_ConfigCommandMode(DSI_HandleTypeDef *hdsi, DSI_CmdCfgTypeDef *CmdCfg);
HAL_StatusTypeDef HAL_DSI_ConfigFlowControl(DSI_HandleTypeDef *hdsi, uint32_t FlowControl);
HAL_StatusTypeDef HAL_DSI_ConfigPhyTimer(DSI_HandleTypeDef *hdsi, DSI_PHY_TimerTypeDef *PhyTimings);
HAL_StatusTypeDef HAL_DSI_ConfigHostTimeouts(DSI_HandleTypeDef *hdsi, DSI_HOST_TimeoutTypeDef *HostTimeouts);
HAL_StatusTypeDef HAL_DSI_Start(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_Stop(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_Refresh(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ShortWrite(DSI_HandleTypeDef *hdsi,
                                     uint32_t ChannelID,
                                     uint32_t Mode,
                                     uint32_t Param1,
                                     uint32_t Param2);
HAL_StatusTypeDef HAL_DSI_LongWrite(DSI_HandleTypeDef *hdsi,
                                    uint32_t ChannelID,
                                    uint32_t Mode,
                                    uint32_t Nbparams,
                                    uint32_t Param1,
                                    uint8_t* ParametersTable);
uint32_t HAL_DSI_DCSShortRead(DSI_HandleTypeDef *hdsi, uint32_t ChannelNbr, uint32_t DCSCommand);
HAL_StatusTypeDef HAL_DSI_EnterULPMData(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ExitULPMData(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_EnterULPM(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ExitULPM(DSI_HandleTypeDef *hdsi);

HAL_StatusTypeDef HAL_DSI_PatternGeneratorStart(DSI_HandleTypeDef *hdsi, uint32_t Mode, uint32_t Orientation);
HAL_StatusTypeDef HAL_DSI_PatternGeneratorStop(DSI_HandleTypeDef *hdsi);

HAL_StatusTypeDef HAL_DSI_SetSlewRateAndDelayTuning(DSI_HandleTypeDef *hdsi, uint32_t CommDelay, uint32_t Lane, uint32_t Value);
HAL_StatusTypeDef HAL_DSI_SetLowPowerRXFilter(DSI_HandleTypeDef *hdsi, uint32_t Frequency);
HAL_StatusTypeDef HAL_DSI_SetSDD(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_SetLanePinsConfiguration(DSI_HandleTypeDef *hdsi, uint32_t CustomLane, uint32_t Lane);
HAL_StatusTypeDef HAL_DSI_SetPHYTimings(DSI_HandleTypeDef *hdsi, uint32_t Timing, uint32_t Value);
HAL_StatusTypeDef HAL_DSI_ForceTXStopMode(DSI_HandleTypeDef *hdsi, uint32_t Lane);
HAL_StatusTypeDef HAL_DSI_ForceRXLowPower(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ForceDataLanesInRX(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_SetPullDown(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_SetContentionDetectionOff(DSI_HandleTypeDef *hdsi);

uint32_t HAL_DSI_GetError(DSI_HandleTypeDef *hdsi);
HAL_StatusTypeDef HAL_DSI_ConfigErrorMonitor(DSI_HandleTypeDef *hdsi, uint32_t ActiveErrors);
HAL_DSI_StateTypeDef HAL_DSI_GetState(DSI_HandleTypeDef *hdsi);
/**
  * @}
  */

/* Private types -------------------------------------------------------------*/
/** @defgroup DSI_Private_Types DSI Private Types
  * @{
  */

/**
  * @}
  */ 

/* Private defines -----------------------------------------------------------*/
/** @defgroup DSI_Private_Defines DSI Private Defines
  * @{
  */

/**
  * @}
  */ 
          
/* Private variables ---------------------------------------------------------*/
/** @defgroup DSI_Private_Variables DSI Private Variables
  * @{
  */

/**
  * @}
  */ 

/* Private constants ---------------------------------------------------------*/
/** @defgroup DSI_Private_Constants DSI Private Constants
  * @{
  */
#define DSI_DCS_SHORT_PKT_READ ((uint32_t)0x00000006) /*!< Read DCS command */

/**
  * @}
  */ 

/* Private macros ------------------------------------------------------------*/
/** @defgroup DSI_Private_Macros DSI Private Macros
  * @{
  */
#define IS_DSI_PLL_NDIV(NDIV)                       ((10 <= (NDIV)) && ((NDIV) <= 125))
#define IS_DSI_PLL_IDF(IDF)                         (((IDF) == DSI_PLL_IN_DIV1) || \
                                                     ((IDF) == DSI_PLL_IN_DIV2) || \
                                                     ((IDF) == DSI_PLL_IN_DIV3) || \
                                                     ((IDF) == DSI_PLL_IN_DIV4) || \
                                                     ((IDF) == DSI_PLL_IN_DIV5) || \
                                                     ((IDF) == DSI_PLL_IN_DIV6) || \
                                                     ((IDF) == DSI_PLL_IN_DIV7))
#define IS_DSI_PLL_ODF(ODF)                         (((ODF) == DSI_PLL_OUT_DIV1) || \
                                                     ((ODF) == DSI_PLL_OUT_DIV2) || \
                                                     ((ODF) == DSI_PLL_OUT_DIV4) || \
                                                     ((ODF) == DSI_PLL_OUT_DIV8))
#define IS_DSI_CLOCK_CONTROL(DPHYClk)               (((DPHYClk) == DSI_DPHY_CLK_LP) || ((DPHYClk) == DSI_DPHY_CLK_HS))
#define IS_DSI_AUTO_CLKLANE_CONTROL(AutoClkLane)    (((AutoClkLane) == DSI_AUTO_CLK_LANE_CTRL_DISABLE) || ((AutoClkLane) == DSI_AUTO_CLK_LANE_CTRL_ENABLE))
#define IS_DSI_NUMBER_OF_LANES(NumberOfLanes)       (((NumberOfLanes) == DSI_ONE_DATA_LANE) || ((NumberOfLanes) == DSI_TWO_DATA_LANES))
#define IS_DSI_FLOW_CONTROL(FlowControl)            (((FlowControl) | DSI_FLOW_CONTROL_ALL) == DSI_FLOW_CONTROL_ALL)
#define IS_DSI_COLOR_CODING(ColorCoding)            (((ColorCoding) == DSI_RGB565_CONFIG1) || \
                                                     ((ColorCoding) == DSI_RGB565_CONFIG2) || \
                                                     ((ColorCoding) == DSI_RGB565_CONFIG3) || \
                                                     ((ColorCoding) == DSI_RGB666_CONFIG1) || \
                                                     ((ColorCoding) == DSI_RGB666_CONFIG2) || \
                                                     ((ColorCoding) == DSI_RGB888))
#define IS_DSI_LOOSELY_PACKED(LooselyPacked)        (((LooselyPacked) == DSI_LOOSELY_PACKED_ENABLE) || ((LooselyPacked) == DSI_LOOSELY_PACKED_DISABLE))
#define IS_DSI_DE_POLARITY(DataEnable)              (((DataEnable) == DSI_DATA_ENABLE_ACTIVE_HIGH) || ((DataEnable) == DSI_DATA_ENABLE_ACTIVE_LOW))
#define IS_DSI_VSYNC_POLARITY(VSYNC)                (((VSYNC) == DSI_VSYNC_ACTIVE_HIGH) || ((VSYNC) == DSI_VSYNC_ACTIVE_LOW))
#define IS_DSI_HSYNC_POLARITY(HSYNC)                (((HSYNC) == DSI_HSYNC_ACTIVE_HIGH) || ((HSYNC) == DSI_HSYNC_ACTIVE_LOW))
#define IS_DSI_VIDEO_MODE_TYPE(VideoModeType)       (((VideoModeType) == DSI_VID_MODE_NB_PULSES) || \
                                                     ((VideoModeType) == DSI_VID_MODE_NB_EVENTS) || \
                                                     ((VideoModeType) == DSI_VID_MODE_BURST))
#define IS_DSI_COLOR_MODE(ColorMode)                (((ColorMode) == DSI_COLOR_MODE_FULL) || ((ColorMode) == DSI_COLOR_MODE_EIGHT))
#define IS_DSI_SHUT_DOWN(ShutDown)                  (((ShutDown) == DSI_DISPLAY_ON) || ((ShutDown) == DSI_DISPLAY_OFF))
#define IS_DSI_LP_COMMAND(LPCommand)                (((LPCommand) == DSI_LP_COMMAND_DISABLE) || ((LPCommand) == DSI_LP_COMMAND_ENABLE))
#define IS_DSI_LP_HFP(LPHFP)                        (((LPHFP) == DSI_LP_HFP_DISABLE) || ((LPHFP) == DSI_LP_HFP_ENABLE))
#define IS_DSI_LP_HBP(LPHBP)                        (((LPHBP) == DSI_LP_HBP_DISABLE) || ((LPHBP) == DSI_LP_HBP_ENABLE))
#define IS_DSI_LP_VACTIVE(LPVActive)                (((LPVActive) == DSI_LP_VACT_DISABLE) || ((LPVActive) == DSI_LP_VACT_ENABLE))
#define IS_DSI_LP_VFP(LPVFP)                        (((LPVFP) == DSI_LP_VFP_DISABLE) || ((LPVFP) == DSI_LP_VFP_ENABLE))
#define IS_DSI_LP_VBP(LPVBP)                        (((LPVBP) == DSI_LP_VBP_DISABLE) || ((LPVBP) == DSI_LP_VBP_ENABLE))
#define IS_DSI_LP_VSYNC(LPVSYNC)                    (((LPVSYNC) == DSI_LP_VSYNC_DISABLE) || ((LPVSYNC) == DSI_LP_VSYNC_ENABLE))
#define IS_DSI_FBTAA(FrameBTAAcknowledge)           (((FrameBTAAcknowledge) == DSI_FBTAA_DISABLE) || ((FrameBTAAcknowledge) == DSI_FBTAA_ENABLE))
#define IS_DSI_TE_SOURCE(TESource)                  (((TESource) == DSI_TE_DSILINK) || ((TESource) == DSI_TE_EXTERNAL))
#define IS_DSI_TE_POLARITY(TEPolarity)              (((TEPolarity) == DSI_TE_RISING_EDGE) || ((TEPolarity) == DSI_TE_FALLING_EDGE))
#define IS_DSI_AUTOMATIC_REFRESH(AutomaticRefresh)  (((AutomaticRefresh) == DSI_AR_DISABLE) || ((AutomaticRefresh) == DSI_AR_ENABLE))
#define IS_DSI_VS_POLARITY(VSPolarity)              (((VSPolarity) == DSI_VSYNC_FALLING) || ((VSPolarity) == DSI_VSYNC_RISING))
#define IS_DSI_TE_ACK_REQUEST(TEAcknowledgeRequest) (((TEAcknowledgeRequest) == DSI_TE_ACKNOWLEDGE_DISABLE) || ((TEAcknowledgeRequest) == DSI_TE_ACKNOWLEDGE_ENABLE))
#define IS_DSI_ACK_REQUEST(AcknowledgeRequest)      (((AcknowledgeRequest) == DSI_ACKNOWLEDGE_DISABLE) || ((AcknowledgeRequest) == DSI_ACKNOWLEDGE_ENABLE))
#define IS_DSI_LP_GSW0P(LP_GSW0P)                   (((LP_GSW0P) == DSI_LP_GSW0P_DISABLE) || ((LP_GSW0P) == DSI_LP_GSW0P_ENABLE))
#define IS_DSI_LP_GSW1P(LP_GSW1P)                   (((LP_GSW1P) == DSI_LP_GSW1P_DISABLE) || ((LP_GSW1P) == DSI_LP_GSW1P_ENABLE))
#define IS_DSI_LP_GSW2P(LP_GSW2P)                   (((LP_GSW2P) == DSI_LP_GSW2P_DISABLE) || ((LP_GSW2P) == DSI_LP_GSW2P_ENABLE))
#define IS_DSI_LP_GSR0P(LP_GSR0P)                   (((LP_GSR0P) == DSI_LP_GSR0P_DISABLE) || ((LP_GSR0P) == DSI_LP_GSR0P_ENABLE))
#define IS_DSI_LP_GSR1P(LP_GSR1P)                   (((LP_GSR1P) == DSI_LP_GSR1P_DISABLE) || ((LP_GSR1P) == DSI_LP_GSR1P_ENABLE))
#define IS_DSI_LP_GSR2P(LP_GSR2P)                   (((LP_GSR2P) == DSI_LP_GSR2P_DISABLE) || ((LP_GSR2P) == DSI_LP_GSR2P_ENABLE))
#define IS_DSI_LP_GLW(LP_GLW)                       (((LP_GLW) == DSI_LP_GLW_DISABLE) || ((LP_GLW) == DSI_LP_GLW_ENABLE))
#define IS_DSI_LP_DSW0P(LP_DSW0P)                   (((LP_DSW0P) == DSI_LP_DSW0P_DISABLE) || ((LP_DSW0P) == DSI_LP_DSW0P_ENABLE))
#define IS_DSI_LP_DSW1P(LP_DSW1P)                   (((LP_DSW1P) == DSI_LP_DSW1P_DISABLE) || ((LP_DSW1P) == DSI_LP_DSW1P_ENABLE))
#define IS_DSI_LP_DSR0P(LP_DSR0P)                   (((LP_DSR0P) == DSI_LP_DSR0P_DISABLE) || ((LP_DSR0P) == DSI_LP_DSR0P_ENABLE))
#define IS_DSI_LP_DLW(LP_DLW)                       (((LP_DLW) == DSI_LP_DLW_DISABLE) || ((LP_DLW) == DSI_LP_DLW_ENABLE))
#define IS_DSI_LP_MRDP(LP_MRDP)                     (((LP_MRDP) == DSI_LP_MRDP_DISABLE) || ((LP_MRDP) == DSI_LP_MRDP_ENABLE))
#define IS_DSI_SHORT_PACKET_TYPE(MODE)              (((MODE) == DSI_DCS_SHORT_PKT_WRITE_P0) || \
                                                     ((MODE) == DSI_DCS_SHORT_PKT_WRITE_P1) || \
                                                     ((MODE) == DSI_GEN_SHORT_PKT_WRITE_P0) || \
                                                     ((MODE) == DSI_GEN_SHORT_PKT_WRITE_P1) || \
                                                     ((MODE) == DSI_GEN_SHORT_PKT_WRITE_P2))
#define IS_DSI_LONG_PACKET_TYPE(MODE)               (((MODE) == DSI_DCS_LONG_PKT_WRITE) || \
                                                     ((MODE) == DSI_GEN_LONG_PKT_WRITE))

/**
  * @}
  */ 

/* Private functions prototypes ----------------------------------------------*/
/** @defgroup DSI_Private_Functions_Prototypes DSI Private Functions Prototypes
  * @{
  */

/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup DSI_Private_Functions DSI Private Functions
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
#endif /* STM32F469xx || STM32F479xx */
  
#ifdef __cplusplus
}
#endif

#endif /* __STM32F4xx_HAL_DSI_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
