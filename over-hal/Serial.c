#if 0

#include "stm32.h"
#include "cmsis_os.h"
#include <string.h>

#include "Serial.h"
#include "BasicTypes.h"
#include "RegisterMacros.h"
#include "stm32_Uart_sci3.h"

UART_HandleTypeDef * Console;

osSemaphoreId SemaphoreIncommingString;
osSemaphoreDef(SemaphoreIncommingString);
 
osSemaphoreId SemaphoreOutcommingString;
osSemaphoreDef(SemaphoreOutcommingString);

void ThreadConsole(COMMAND_FUNC fn);
char CommandLine[80];

int InitConsole(UART_HandleTypeDef * SerialPort, COMMAND_FUNC fn )
{
  Console = SerialPort;
  
  // le semaphore rx 
  SemaphoreIncommingString = osSemaphoreCreate(osSemaphore(SemaphoreIncommingString), 1);    

  // le semaphore tx 
  SemaphoreOutcommingString = osSemaphoreCreate(osSemaphore(SemaphoreOutcommingString), 1);  
  
  // le thread(
  osThreadDef(ThreadSerialRx, (void (*) ())ThreadConsole, osPriorityHigh, 0, 512);
  osThreadCreate (osThread(ThreadSerialRx), 0);
  
  return 0;
}

void ThreadConsole(COMMAND_FUNC fn)
{
  int ret = 0;
  COMMAND_FUNC Service;

  osSemaphoreWait(SemaphoreIncommingString, osWaitForever);
     
  while ( 1 )
    {
      // on re init sinon on ne recoit jamais une 2° commande. 
      HAL_UART_Init(Console);
      ret = HAL_UART_Receive_DMA(Console, (unsigned char*)CommandLine, 80);
      
      // on attend une trame
      osSemaphoreWait(SemaphoreIncommingString, osWaitForever);
      
      // traite la demande
      CommandLine[strlen(CommandLine)-1] = '\n';
      CommandLine[strlen(CommandLine)] = 0;      
     (*Service)(CommandLine);
     }
}

// retour soit : 0 ok, 1 
int WriteConsole(char * buffer)
{
  int ret;
  if ( HAL_UART_Transmit_IT(Console, (unsigned char*)buffer, strlen(buffer)) == HAL_OK)
    {
      // time out de 100 ms. 
      ret = osSemaphoreWait(SemaphoreOutcommingString, 100);
      
      if ( ret == 1)
	return 0;
      else
	return 1;
    }
  else
    return -1; 
}

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
   osSemaphoreRelease(SemaphoreOutcommingString);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
   osSemaphoreRelease(SemaphoreIncommingString);
}

#endif

