#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_flash.h"

#include <string.h>
#include <stdio.h>

#define BASE_OPT 0x1FFF7800 

typedef struct xConfigInFlash{
  unsigned char mac_addr[6];  
  char hostname[26];
 } ConfigInFlash;
 
#include "scan_address.h"


#define PREVIOUS_CONFIG ( ConfigInFlash *) ((unsigned long)get_first_empty_slot())

static unsigned char * get_internal_first_empty_slot(unsigned char * base)
{
   if ( base[0] == 0 && base[1] == 0 && base[2] == 0 && base[3] == 0 && base[4] == 0 && base[5] == 0)
      return get_internal_first_empty_slot(base + sizeof(ConfigInFlash));
   else
      return base;    
}

static unsigned char * get_first_empty_slot()
{
   return get_internal_first_empty_slot((unsigned char *)BASE_OPT);
}

char * platform_get_hostname()
{
  return ((ConfigInFlash*)PREVIOUS_CONFIG)->hostname;
}

unsigned char * platform_get_mac_address()
{
  return ((ConfigInFlash*)PREVIOUS_CONFIG)->mac_addr;  
}

// "00:8e:01:00:00:00" est l'adresse de base STMicro 
// pour une premiere utilisation, il faut fournir les 2 chaines. ensuite, on peut 
// changer la mac address seulement en réutilisant le hostname .
int set_platform_parameters( char * mac_address_str, char * hostname)
{
  int ret  = 0;

  ConfigInFlash *p;
  ConfigInFlash config;  

  // config precedente. 
  p = PREVIOUS_CONFIG;  

  if ( mac_address_str && hostname )
    {   
      scan_address_mac(mac_address_str , config.mac_addr);            
      strcpy( config.hostname, hostname);
    }    
  else if ( mac_address_str && ! hostname )
    {   
      scan_address_mac(mac_address_str ,config.mac_addr);         
      strcpy( config.hostname, p->hostname);
    }
  else if ( !mac_address_str && hostname)
    {
  strcpy( config.hostname, hostname);
  config.hostname[ strlen(config.hostname)] =  '\0';
  
      // on reprend la precedente config et son address mac
      config.mac_addr[0] = p->mac_addr[0];
      config.mac_addr[1] = p->mac_addr[1];
      config.mac_addr[2] = p->mac_addr[2];
      config.mac_addr[3] = p->mac_addr[3];
      config.mac_addr[4] = p->mac_addr[4];
      config.mac_addr[5] = p->mac_addr[5];
    }
  
  HAL_FLASH_Unlock();
  unsigned char * base = get_first_empty_slot();
  
  unsigned char * ptr = (unsigned char *)&config;
  for (int i = 0; i < sizeof(ConfigInFlash);i+=4) 
    if ( HAL_FLASH_Program(TYPEPROGRAM_WORD, (uint32_t)(base + i), *(unsigned long*)(ptr+i)) != HAL_OK)
      ret = 1;
  
  HAL_FLASH_Lock();
  return ret;
}
