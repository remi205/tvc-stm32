#include "motor_sud.h"

volatile unsigned char Tx2Complete;
volatile unsigned char Tx5Complete;
volatile unsigned char Tx6Complete;

volatile unsigned char Rx2Complete;
volatile unsigned char Rx5Complete;
volatile unsigned char Rx6Complete;


// en configuration réelle, NO_MOTOR_CONNECTED doit être a 1
// ces define permet de reconfigurer qui est MOTOR1, MOTOR2, MOTOR3
void MotorsSendCommand(unsigned char *Cmd, unsigned char Len)
{
  HAL_UART_Transmit_DMA(&huart2 , (uint8_t *)Cmd,  Len);
  HAL_UART_Transmit_DMA(&huart6 , (uint8_t *)Cmd,  Len);
  HAL_UART_Transmit_DMA(&huart5 , (uint8_t *)Cmd,  Len);
}

void MotorSendCommand(  unsigned char *Cmd, unsigned char Len, UART_HandleTypeDef *i)
{
  Tx6Complete = 0;
  HAL_UART_Transmit_DMA(i , (uint8_t *)Cmd,Len);
  while( !(Tx6Complete));
}

void MotorReadResponse( unsigned char *Cmd, unsigned char Len, UART_HandleTypeDef *i)
{
  Rx6Complete = 0;
  HAL_UART_Receive_DMA(i , (uint8_t *)Cmd, Len);
  while( !(Tx6Complete));
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if ( huart == &huart2)
    Rx2Complete = 1;
  if ( huart == &huart5)
    Rx5Complete = 1;
  if ( huart == &huart6)
    Rx6Complete = 1;  
}

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
  if ( huart == &huart2)
    Tx2Complete = 1;
  if ( huart == &huart5)
    Tx5Complete = 1;
  if ( huart == &huart6)
    Tx6Complete = 1;  
}
