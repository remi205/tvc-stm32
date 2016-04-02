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
#include "stm32f7xx_hal.h"
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

#include "net_config.h"
#include <string.h>
   
#include "udp_layer.h"
#include "usart.h"
#include "i2c.h"
#include "spi.h"
#include "../Common/Utils/ParameterParser.h"
#include "../over-hal/motor_sud.h"

extern void FormatResponse( char * Cmd, char * p1, char * p2,  char *  p3);
   
// network interface structure
struct netif gnetif;

// Semaphore to signal Ethernet Link state update 
osSemaphoreId netif_link_semaphore = NULL;

// Ethernet link thread Argument
struct link_str link_arg;

extern "C" {
extern void dhcp_process(void const * argument);
extern void netif_config(void);
extern void lwip_init(void);
extern err_t ethernetif_init(struct netif *);
extern void MX_GPIO_Init(void);
extern void MX_DMA_Init();

#include "usart.h"
#include "../over-hal/platform-parameters.h"
#include "../over-hal/gpio_access.h"
#include "../config.h"
};

#define LEN 80

extern void MotorThread( void const * argument);
extern void EndOfCourseThread( void const * argument);
    
osSemaphoreDef(sem_cmd);

/**
  * @brief  Main task
  * @param  pvParameters not used
  * @retval None
  */
void StartThread(void const * argument)
{ 
#ifdef MOTORS  
   MX_DMA_Init();  
   MX_UART5_Init();
   MX_USART2_UART_Init();
   MX_USART6_UART_Init();
#else
   MX_I2C1_Init();  
#endif


   // pour exemple d'utilisation 
#if 0  
   gpio_direction(LED_GREEN,OUTPUT);
   gpio_direction(LED_RED,OUTPUT);
   gpio_direction(LED_BLUE,OUTPUT);
   gpio_direction(LED_ORANGE,OUTPUT);
   
   gpio_set(LED_RED);  
#endif   
  // Initilaize the LwIP stack
  netif_config();
    
  // Notify user about the network interface config
  user_notification(&gnetif);

   // Create tcp_ip stack thread 
  tcpip_init( (void (*)(void *)) NULL, NULL );
  
#ifdef USE_DHCP
  /* Start DHCPClient */
   dhcp_start(&gnetif);
#endif  
   char Response[LEN];
   char Cmd[LEN];
    
   ParameterParser pp;
  
   // c'est la LED qui indique le debut
   gpio_reset(LED_RED);  
    
   // exemple de broadcast udp
#if 0
    // envoie de la trame en broadcast et en déconnecté
   ip_set_option(ns.m_upcb, SOF_BROADCAST);
   int Len = 13; //strlen("name-server?");
   ns.sendto( (unsigned char *)&Len, 2, "255.255.255.255", NS_PORT);
   ns.sendto( (unsigned char *)"name-server?", Len, "255.255.255.255", NS_PORT);

   // fin du broad cast 
   ip_reset_option(ns.m_upcb, SOF_BROADCAST);
#endif


   //
   // A ce niveau on connait le name server
   //
   // on reouvre la connection avec le nameserver
   // avec le port et l'adresse
   ns.open_client(hostmane_name_server,  NS_PORT);

#if 0
   // récuperation du nom de platform ( OPT EPROM)
   hostmane = platform_get_hostname();
#endif
  
#if 0
   strcpy(Cmd, "get-host|MonitorService");
   ns.WriteString(Cmd);
   ns.ReadString(Response, LEN); 
   pp.ParseString(Response);
   
   int Port = pp.GetInteger(2);
#endif  
   int Port = 2255;
  
   gpio_set(LED_GREEN);
   
   // et voila le boulot l'init est faite ,  
   if (Service.open_server(Port))
     {
       while ( true ) 
        {
           gpio_set(LED_GREEN);  
           Service.ReadString( Cmd, LEN);      
           gpio_reset(LED_GREEN);

           //
           // Analyse du service demandé.
           //
           if ( Cmd[0] != 0) 
           ServiceStm32_Analyse(&Service, Cmd);
       
           Cmd[0] = 0;
       
           // disconnect client for another service
           udp_disconnect(Service.m_upcb);
         }
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
  
#if 0  
    // IP address default setting 
  IP4_ADDR(&ipaddr, IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
  IP4_ADDR(&netmask, NETMASK_ADDR0, NETMASK_ADDR1 , NETMASK_ADDR2, NETMASK_ADDR3);
  IP4_ADDR(&gw, GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);
#endif
  
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
  netif_add(&gnetif, &ipaddr, &netmask, &gw, NULL, ethernetif_init, ethernet_input);
  
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

#if 0  
  // create a binary semaphore used for informing ethernetif of frame reception 
  osSemaphoreDef(netif_sem);
  netif_link_semaphore = osSemaphoreCreate(osSemaphore(netif_sem) , 1 );
  
  link_arg.netif = &gnetif;
  link_arg.semaphore = netif_link_semaphore;


  // Create the Ethernet link handler thread 
  osThreadDef(LinkThr, ethernetif_set_link, osPriorityNormal, 0, configMINIMAL_STACK_SIZE);
  osThreadCreate (osThread(LinkThr), &link_arg);
#endif
}



/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
