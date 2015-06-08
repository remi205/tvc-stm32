/**
  ******************************************************************************
  * @file    LwIP/LwIP_HTTP_Server_Socket_RTOS/Src/main.c 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-February-2014
  * @brief   This sample code implements a http server application based on 
  *          Netconn API of LwIP stack and FreeRTOS. This application uses 
  *          STM32F4xx the ETH HAL API to transmit and receive data. 
  *          The communication is done with a web browser of a remote PC.
 */

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "lwipopts.h"
#include "cmsis_os.h"
#include "ethernetif.h"
#include "lwip/netif.h"
#include "lwip/tcpip.h"
#include "app_ethernet.h"
#include "dns.h"
#include "Serial.h"
#include "net_config.h"

#include "netif/etharp.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart6;


int OpenConsole( char * name);

// network interface structure
struct netif gnetif;

// Semaphore to signal Ethernet Link state update 
osSemaphoreId netif_link_semaphore = NULL;

// Ethernet link thread Argument
struct link_str link_arg;

/* Variables Initialization */
struct netif gnetif;
struct ip_addr ipaddr;
struct ip_addr netmask;
struct ip_addr gw;
uint8_t IP_ADDRESS[4];
uint8_t NETMASK_ADDRESS[4];
uint8_t GATEWAY_ADDRESS[4];

extern void dhcp_thread(void const * argument);
extern void ethernetif_input(void const *argument);

err_t ethernetif_init(struct netif *netif);

/* Private function prototypes -----------------------------------------------*/
void netif_config(void);

extern int WriteConsole(char *);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main task
  * @param  pvParameters not used
  * @retval None
  */
void StartThread(void const * argument)
{  
  OpenConsole("/dev/uart6");
  
  WriteConsole("Salut , stm32 ici\n");
  
  // Initilaize the LwIP stack
  netif_config();
    
  // Notify user about the network interface config
   user_notification(&gnetif);

   // Create tcp_ip stack thread 
   tcpip_init( NULL, NULL );
   
#ifdef USE_DHCP
  /* Start DHCPClient */
   dhcp_process(&gnetif);
#endif

  // start the DS service ( C++ classes)
  // InitializeDS()
  // ServiceSoutchMotor();
  
  // Service Treuil

  while( 1)
    {
      osDelay(1000);
    }
}




/**
  * @brief  Initializes the lwIP stack
  * @param  None
  * @retval None
  */
void netif_config(void)
{
  struct ip_addr ipaddr;
  struct ip_addr netmask;
  struct ip_addr gw;	

  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_RESET);
  HAL_Delay(50);
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_SET);
  HAL_Delay(50);  

    // IP address default setting 
  IP4_ADDR(&ipaddr, IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
  IP4_ADDR(&netmask, NETMASK_ADDR0, NETMASK_ADDR1 , NETMASK_ADDR2, NETMASK_ADDR3);
  IP4_ADDR(&gw, GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);

  lwip_init();

  ipaddr.addr = 0;
  netmask.addr = 0;
  gw.addr = 0;
  

  /*
  Adds your network interface to the netif_list. Allocate a struct
  netif and pass a pointer to this structure as the first argument.
  Give pointers to cleared ip_addr structures when using DHCP,
  or fill them with sane numbers otherwise. The state pointer may be NULL.
  
  The init function pointer must point to a initialization function for
  your ethernet netif interface. The following code illustrates it's use.*/
  netif_add(&gnetif, &ipaddr, &netmask, &gw, NULL, &ethernetif_init, &ethernet_input);
  
  //  Registers the default network interface. 
  netif_set_default(&gnetif);
  
  if (netif_is_link_up(&gnetif))
    {
      // When the netif is fully configured this function must be called.
      netif_set_up(&gnetif);
    }
  else
    {
      // When the netif link is down this function must be called 
      netif_set_down(&gnetif);
    }
  
  // Set the link callback function, this function is called on change of link status
//  netif_set_link_callback(&gnetif, ethernetif_update_config);
  
  // create a binary semaphore used for informing ethernetif of frame reception 
  osSemaphoreDef(netif_sem);
  netif_link_semaphore = osSemaphoreCreate(osSemaphore(netif_sem) , 1 );
  
  link_arg.netif = &gnetif;
  link_arg.semaphore = netif_link_semaphore;

#if 0
  // Create the Ethernet link handler thread 
  osThreadDef(LinkThr, ethernetif_set_link, osPriorityNormal, 0, configMINIMAL_STACK_SIZE);
  osThreadCreate (osThread(LinkThr), &link_arg);
#endif
}



/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
