#include <stm32f4xx_hal.h>
#include <stm32f4xx_hal_usart.h>

extern UART_HandleTypeDef huart5;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart6;

struct HandleTypeDef *Handle;

int OpenConsole( char * name)
{
  HAL_StatusTypeDef ret;
  
#if 0
  ret = HAL_UART_Init(&huart5);
  if ( ! strcmp(name, "/dev/uart1"))
    Handle =&husart1;
  else if ( ! strcmp(name, "/dev/uart2"))
    Handle =&husart2;            
  else if ( ! strcmp(name, "/dev/uart3"))
    Handle =&huart3;   
  else if ( ! strcmp(name, "/dev/uart4"))
    Handle =&husart4;   
  else if ( ! strcmp(name, "/dev/uart5"))
    Handle =&huart5;   
  else if ( ! strcmp(name, "/dev/uart6"))
    Handle =&huart6;   
#endif
  return Handle; 
}
int WriteConsole( struct HandleTypeDef * Handle, char * s)
{
  HAL_StatusTypeDef ret;
  ret = HAL_UART_Transmit_DMA(Handle, (uint16_t*)s, strlen(s));
  return ret; 
}

int ReadConsole( struct HandleTypeDef * Handle, char * s, int len)
{
  HAL_StatusTypeDef ret;
  ret = HAL_UART_Receive_DMA(Handle, (uint16_t*)s, strlen(s));
  return ret; 
}


