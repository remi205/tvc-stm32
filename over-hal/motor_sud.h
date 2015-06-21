#pragma once

#include "stm32.h"
#include "usart.h"

void MotorsSendCommand(unsigned char* Cmd, unsigned char Len);

void MotorSendCommand(  unsigned char *Cmd, unsigned char Len, UART_HandleTypeDef *i);
void MotorReadResponse( unsigned char *Cmd, unsigned char Len, UART_HandleTypeDef *i);

//#define MotorSendCommand(Cmd,Len,dev) HAL_UART_Transmit_DMA(dev,(uint8_t *)Cmd,Len)
//#define MotorReadResponse(Cmd,Len,dev) HAL_UART_Receive_DMA(dev,(uint8_t *)Cmd, Len)

