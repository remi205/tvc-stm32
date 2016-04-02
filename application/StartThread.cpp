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

#include "MotorThread.h"

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
  //#include "EndOfCourseThread.h"

extern int ConfigureForBattery ();
};

#define LEN 80
#define NS_PORT 3435

#define CONSOLE_UDP

extern void MotorThread( void const * argument);
extern void EndOfCourseThread( void const * argument);
    
osSemaphoreDef(sem_cmd);

extern DescritionMotor ConfMotor[3];
extern char MotorName[3][8];
extern UART_HandleTypeDef *dev[3];

extern DescriptionService EndOfCourse;

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
  
   gpio_direction(LED_GREEN,OUTPUT);
   gpio_direction(LED_RED,OUTPUT);
   gpio_direction(LED_BLUE,OUTPUT);
   gpio_direction(LED_ORANGE,OUTPUT);
   
   gpio_set(LED_RED);  
   
  gpio_direction(ENABLE_I2C_5V,OUTPUT);
  gpio_set(ENABLE_I2C_5V);  

  gpio_direction(ENALBLE_GPIO_5V,OUTPUT);
  gpio_set(ENALBLE_GPIO_5V);  

  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_RESET);
  osDelay(50);
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_SET);
  osDelay(50);  

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
   char hostmane_name_server[LEN];
   char *hostmane;
   
   char Response[LEN];
   char Cmd[LEN];
      
   udp Console;
   udp Service;    
   udp ns;   
   
#ifdef TEMPO
  for ( int i = 0; i < 60; i++)
    {
      osDelay(500);
      gpio_reset(LED_RED);  
      osDelay(500);
      gpio_set(LED_RED);       
    }
#endif
    
   ParameterParser pp;
  
   // c'est la LED qui indique le debut
   gpio_reset(LED_RED);  
   
   ns.open_server(NS_PORT);
    // envoie de la trame en broadcast et en déconnecté
   ip_set_option(ns.m_upcb, SOF_BROADCAST);
   int Len = 13; //strlen("name-server?");
   ns.sendto( (unsigned char *)&Len, 2, "255.255.255.255", NS_PORT);
   ns.sendto( (unsigned char *)"name-server?", Len, "255.255.255.255", NS_PORT);

   // fin du broad cast 
   ip_reset_option(ns.m_upcb, SOF_BROADCAST);
   
   ns.ReadString(Response , LEN);
   if ( Response[0] == '1')
     strcpy(hostmane_name_server,  &Response[2]);

   //
   // A ce niveau on connait le name server
   //
   // on reouvre la connection avec le nameserver
   // avec le port et l'adresse
   ns.open_client(hostmane_name_server,  NS_PORT);

#ifdef CONSOLE_UDP
   strcpy(Cmd, "get-host|ConsoleService");
   ns.WriteString(Cmd);
   ns.ReadString(Response, LEN);
  
   pp.ParseString(Response);
   Console.open_client( pp.GetString(1),  pp.GetInteger(2));   
    
   // récuperation du nom de platform ( OPT EPROM)
   hostmane = platform_get_hostname();
#endif
  
   strcpy(Cmd, "get-host|MonitorService");
   ns.WriteString(Cmd);
   ns.ReadString(Response, LEN); 
   pp.ParseString(Response);
   
   int Port = pp.GetInteger(2);
 
  
#ifdef MOTORS
   // init 
   for ( int i = 0; i < 3; i++)
     {
       ConfMotor[i].SemaphoreCommand = osSemaphoreCreate(osSemaphore(sem_cmd), 1);

       //on prend un ticket comme cela, le prochain wait sera bloquant
       osSemaphoreWait(ConfMotor[i].SemaphoreCommand , 0);

       ConfMotor[i].port= pp.GetInteger(2);
       ConfMotor[i].add = pp.GetString(1);
       //ConfMotor[i].name  = &MotorName[i][0];
       ConfMotor[i].dev = dev[i];
       
       osThreadDef(Motor_Thread, MotorThread, osPriorityNormal, 0, 1024);     
       osThreadCreate(osThread(Motor_Thread), &ConfMotor[i]);
     }
   
   strcpy(Cmd, "get-host|MotorSouthService");
   ns.WriteString(Cmd);
   ns.ReadString(Response, LEN); 
   pp.ParseString(Response);
   
   Port = pp.GetInteger(2);
   
#else
   EndOfCourse.port= pp.GetInteger(2);
   EndOfCourse.add = pp.GetString(1);
   EndOfCourse.name = hostmane;

   osThreadDef(EndOfCourse_Thread, EndOfCourseThread, osPriorityNormal, 0, 768);     
   osThreadCreate(osThread(EndOfCourse_Thread), (void*)&EndOfCourse);
#endif
   
   // maintenant on ouvre le service. donc on demande 
   // son port

   gpio_set(LED_GREEN);
   
   // et voila le boulot l'init est faite ,  
   if (Service.open_server(Port))
     {
       while ( true ) 
        {
#ifdef CONSOLE_UDP
           strcpy(Response, hostmane);
           strcat(Response,": waiting for a command !");         
           Console.WriteString(Response);  
#endif  
           gpio_set(LED_GREEN);  
           Service.ReadString( Cmd, LEN);      
           gpio_reset(LED_GREEN);

#ifdef CONSOLE_UDP
           strcpy(Response, hostmane);
           strcat(Response,": ");
           strcat(Response, Cmd);
           Console.WriteString(Response);   
#endif           
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
