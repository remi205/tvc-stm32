#include <stm32f4xx_hal.h>
#include <stm32f4xx_hal_usart.h>
#include <string.h>


#ifdef uart1
extern struct UART_HandleTypeDef huart1;
#endif

#ifdef uart2
extern struct UART_HandleTypeDef huart2;
#endif

#ifdef uart3
extern struct UART_HandleTypeDef huart3;
#endif

#ifdef uart4
extern struct UART_HandleTypeDef huart4;
#endif

#ifdef uart5
extern struct UART_HandleTypeDef huart5;
#endif

#ifdef uart6
extern struct UART_HandleTypeDef huart6;
#endif

struct UART_HandleTypeDef * Handle;

struct UART_HandleTypeDef * OpenConsole( char * name)
{
#ifdef uart6
  Handle =(struct UART_HandleTypeDef *)&huart6;
#endif

#ifdef uart5
  Handle = (struct UART_HandleTypeDef *)&huart5;
#endif

#ifdef uart4
  Handle = (struct UART_HandleTypeDef * )&huart4;
#endif

#ifdef uart3
  Handle = (struct UART_HandleTypeDef * )&huart3;
#endif

#ifdef uart2
  Handle = (struct UART_HandleTypeDef * )&huart2;
#endif

#ifdef uart1
  Handle = (struct UART_HandleTypeDef *)&huart1;
#endif
  return Handle; 
}

int WriteConsole(  UART_HandleTypeDef * Handle, char * s)
{
  return HAL_UART_Transmit_DMA(Handle, (uint8_t*)s, strlen(s));
}

int ReadConsole(  UART_HandleTypeDef * Handle, char * s, int len)
{
  return HAL_UART_Receive_DMA(Handle, (uint8_t*)s, strlen(s));
}


