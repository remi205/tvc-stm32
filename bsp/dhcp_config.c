/* Includes ------------------------------------------------------------------*/
#include "lwip/opt.h"
#include "lwip/dhcp.h"
#include "app_ethernet.h"
#include "ethernetif.h"
#include <stdio.h>
#include "dns.h"
#include "net_config.h"

//#include "Serial.h"
#include "Console.h"

#define CONSOLE 0

#ifdef USE_DHCP
#define MAX_DHCP_TRIES  4
uint32_t DHCPfineTimer = 0;
__IO uint8_t DHCP_state;
#endif

#if 1
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Notify the User about the nework interface config status 
  * @param  netif: the network interface
  * @retval None
  */
void user_notification(struct netif *netif) 
{
  if (netif_is_up(netif))
    {
#ifdef USE_DHCP
      /* Update DHCP state machine */
      DHCP_state = DHCP_START;
#else
      uint8_t iptxt[80];
      sprintf((char*)iptxt, "Static IP address: %d.%d.%d.%d", IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
      WriteConsole( iptxt);
#endif /* USE_DHCP */
    }
  else
    {  
#ifdef USE_DHCP
      /* Update DHCP state machine */
      DHCP_state = DHCP_LINK_DOWN;
#endif  /* USE_DHCP */
      WriteConsole("The network cable is not connected \n");
    } 
}
#endif

#if 0
/**
  * @brief  This function notify user about link status changement.
  * @param  netif: the network interface
  * @retval None
  */
void ethernetif_notify_conn_changed(struct netif *netif)
{
  struct ip_addr ipaddr;
  struct ip_addr netmask;
  struct ip_addr gw;

  if(netif_is_link_up(netif))
  {
#ifdef USE_DHCP
    WriteConsole ("The network cable is now connected \n");
    /* Update DHCP state machine */
    DHCP_state = DHCP_START;
#else
    IP4_ADDR(&ipaddr, IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
    IP4_ADDR(&netmask, NETMASK_ADDR0, NETMASK_ADDR1 , NETMASK_ADDR2, NETMASK_ADDR3);
    IP4_ADDR(&gw, GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);    

    uint8_t iptxt[80];
    sprintf((char*)iptxt, "%d.%d.%d.%d", IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
    WriteConsole ("The network cable is now connected \n");

    sprintf((char*)iptxt, "Static IP address: %d.%d.%d.%d", IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
    WriteConsole (iptxt);
#endif /* USE_DHCP */   
    
    netif_set_addr(netif, &ipaddr , &netmask, &gw);
    
    /* When the netif is fully configured this function must be called.*/
    netif_set_up(netif);     
  }
  else
  {
#ifdef USE_DHCP
    /* Update DHCP state machine */
    DHCP_state = DHCP_LINK_DOWN;
#endif /* USE_DHCP */
    /*  When the netif link is down this function must be called.*/
    netif_set_down(netif);
    WriteConsole ("The network cable is not connected \n");
  }
}
#endif

#ifdef USE_DHCP
/**
  * @brief  DHCP Process
* @param  argument: network interface
  * @retval None
  */
void dhcp_process(void const * argument)
{
  struct netif *netif = (struct netif *) argument;
  struct ip_addr ipaddr;
  struct ip_addr netmask;
  struct ip_addr gw;
  uint32_t IPaddress = 0;
  int mscnt =0;
  netif->ip_addr.addr = 0;
  netif->netmask.addr = 0;
  netif->gw.addr = 0;
  dhcp_start(netif);
  
  DHCP_state = DHCP_WAIT_ADDRESS;

  
  // int DHCP_state = DHCP_START;
  while( 1 )
    {
      osDelay(DHCP_FINE_TIMER_MSECS);
      dhcp_fine_tmr();
      
      mscnt += DHCP_FINE_TIMER_MSECS;
      if (mscnt >= DHCP_COARSE_TIMER_SECS*1000) {
        dhcp_coarse_tmr();
        mscnt = 0;
      }
      
      switch (DHCP_state)
        {
        case DHCP_WAIT_ADDRESS:
          {        
            /* Read the new IP address */
            IPaddress = netif->ip_addr.addr;
            
            if (IPaddress!=0) 
              {
                dhcp_renew(netif);
                DHCP_state = DHCP_ADDRESS_ASSIGNED;
                
#if 1             
                uint8_t iptab[4];
                char iptxt[80];
                
                iptab[0] = (uint8_t)(IPaddress >> 24);
                iptab[1] = (uint8_t)(IPaddress >> 16);
                iptab[2] = (uint8_t)(IPaddress >> 8);
                iptab[3] = (uint8_t)(IPaddress);
                
                
                sprintf(iptxt, "IP address assigned by a DHCP server: %d.%d.%d.%d", iptab[3], iptab[2], iptab[1], iptab[0]);       
                WriteConsole ("address IP affecté\n");
#endif        
                return;
              }
            else
              {
                /* DHCP timeout */
                if (netif->dhcp->tries > MAX_DHCP_TRIES)
                  {
                    DHCP_state = DHCP_TIMEOUT;
                    
                    /* Stop DHCP */
                    dhcp_stop(netif);
                    
                    /* Static address used */
                    IP4_ADDR(&ipaddr, IP_ADDR0 ,IP_ADDR1 , IP_ADDR2 , IP_ADDR3 );
                    IP4_ADDR(&netmask, NETMASK_ADDR0, NETMASK_ADDR1, NETMASK_ADDR2, NETMASK_ADDR3);
                    IP4_ADDR(&gw, GW_ADDR0, GW_ADDR1, GW_ADDR2, GW_ADDR3);
                    netif_set_addr(netif, &ipaddr , &netmask, &gw);
                    
                return;                    
                    
#if CONSOLE          
                    char iptxt[80];
                    sprintf((char*)iptxt, "%Static IP address  : d.%d.%d.%d", IP_ADDR0, IP_ADDR1, IP_ADDR2, IP_ADDR3);
                    WriteConsole("DHCP timeout !!\n");
                    WriteConsole(iptxt);      
#endif            
                  }
                else
                  netif->dhcp->tries++;
              }
          }
          break;
          
        default: break;
        }
      
    }
}
#endif  /* USE_DHCP */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
