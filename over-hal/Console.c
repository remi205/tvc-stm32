#include <stm32f4xx_hal.h>
#include <stm32f4xx_hal_usart.h>
#include <string.h>

extern struct UART_HandleTypeDef huart5;
extern struct UART_HandleTypeDef huart2;
extern struct UART_HandleTypeDef huart6;
extern struct UART_HandleTypeDef huart1;
extern struct UART_HandleTypeDef huart2;
extern struct UART_HandleTypeDef huart3;

struct UART_HandleTypeDef * Handle;

struct UART_HandleTypeDef * OpenConsole()
{
#ifdef uart6
  Handle =(struct UART_HandleTypeDef * )&huart6;
#endif
#ifdef uart5
  Handle = &huart5;
#endif
#ifdef uart4
  Handle = &huart4;
#endif
#ifdef uart3
  Handle = &huart3;
#endif
#ifdef uart2
  Handle = &huart2;
#endif
#ifdef uart1
  Handle = &huart1;
#endif
  return Handle; 
}


#define WriteConsole(s) WriteConsole2(Handle,s)
#define ReadConsole(s,len) ReadConsole3(Handle,s,len)

int WriteConsole2(UART_HandleTypeDef * Handle, char * s)
{
  return HAL_UART_Transmit_DMA(Handle, (uint8_t*)s, strlen(s));
}

int ReadConsole3(  UART_HandleTypeDef * Handle, char * s, int len)
{
  return HAL_UART_Receive_DMA(Handle, (uint8_t*)s, strlen(s));
}
