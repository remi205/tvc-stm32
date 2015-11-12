
#pragma once
#include "cmsis_os.h"
#include "stm32f4xx_hal.h"
#include "usart.h"


struct DescritionMotor {
  char name[16];
  unsigned short port;
  char * add;
  UART_HandleTypeDef *dev;
  osSemaphoreId SemaphoreCommand; 
  osSemaphoreId SemaphoreRx; 
};


