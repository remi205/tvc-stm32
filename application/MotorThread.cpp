#include "stm32f4xx_hal.h"
#include "lwipopts.h"
#include "cmsis_os.h"
#include "ethernetif.h"
#include "lwip/netif.h"
#include "lwip/tcpip.h"
#include "app_ethernet.h"
#include "dns.h"
#include "udp.h"
#include "netif/etharp.h"
#include "FreeRTOS.h"

#include <string.h>
    
#include "udp_layer.h"
#include "usart.h"
#include "../bsp/i2c.h"
#include "../bsp/spi.h"
#include "../Common/Utils/ParameterParser.h"
#include "ServiceStm32.h"

#include "MotorThread.h"

extern "C" {
#include "../over-hal/motor_sud.h"
#include "../over-hal/gpio_access.h"
#include "../config.h"  
 
};

 
osSemaphoreDef(sem_rx);


/* First define the portSUPPRESS_TICKS_AND_SLEEP() macro.  The parameter is the
time, in ticks, until the kernel next needs to execute. */

DescritionMotor ConfMotor[3];
char MotorName[3][8]={"Motor1", "Motor2", "Motor3"};
UART_HandleTypeDef *dev[3]= {&huart6, &huart2, &huart5};


void FormatResponse( char * Cmd, char * p1, char * p2,  char *  p3)
{
  strcpy(Cmd, p1);
  strcat(Cmd, p2);
  if ( p3 ) 
   {
   strcat(Cmd, "|");
   strcat(Cmd, p3);     
  }
}

void MotorThread( const void * argument)
{
  udp s;
  char Resp[10];
  char Cmd[80];
  DescritionMotor * m = (DescritionMotor*)argument;
  s.open_client( m->add, m->port);

  m->SemaphoreRx = osSemaphoreCreate(osSemaphore(sem_rx), 1);

  //on prend un ticket comme cela, le prochain wait sera bloquant
  osSemaphoreWait(m->SemaphoreRx , 0);
            
  while ( true)
    {
      // wait semaphore, a new command was sent
      osSemaphoreWait( m->SemaphoreCommand, osWaitForever);

 
      HAL_UART_Receive_DMA(m->dev , (uint8_t *)Resp,9);
      osSemaphoreWait( m->SemaphoreRx, osWaitForever);
      
    
      // analyse 
      if ( ! strncmp( Resp, "IIIIIIIII", 9) || ! strncmp( Resp, "OOOOOOOOO", 9))
        {
          bool end = false;
          while ( ! end)
            {
              osSemaphoreWait( m->SemaphoreRx, osWaitForever);
              HAL_UART_Receive_DMA(m->dev , (uint8_t *)Resp,1);    
            
              
              if ( Resp[0] == 'F' )
                end = true;
            }
          // read another 8 car
          osSemaphoreWait( m->SemaphoreRx, osWaitForever);   
          HAL_UART_Receive_DMA(m->dev , (uint8_t *)Resp,8);
          
        }
      
      Resp[9] = 0;
      
      FormatResponse( Cmd, "status-motor|", m->name, Resp);

      gpio_set(LED_BLUE);

      s.WriteString(Cmd);
     gpio_reset(LED_BLUE);
    }
}

#if 0

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if ( huart == &huart2)
    osSemaphoreRelease(ConfMotor[1].SemaphoreRx);
  if ( huart == &huart5)
    osSemaphoreRelease(ConfMotor[2].SemaphoreRx);
  if ( huart == &huart6)
    osSemaphoreRelease(ConfMotor[0].SemaphoreRx);
}

#endif



