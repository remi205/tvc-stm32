
#pragma once

#include "cmsis_os.h"
#include "net_config.h"


#include "lwip/err.h"
#include "lwip/netif.h"

#include "lwip/opt.h"
#include "lwip/mem.h"
#include "lwip/memp.h"
#include "netif/etharp.h"
#include "lwip/dhcp.h"
#include "lwip/netif.h"
#include "lwip/lwip_timers.h"

extern ETH_HandleTypeDef heth;

/* Exported types ------------------------------------------------------------*/
/* Structure that include link thread parameters */
struct link_str {
  struct netif *netif;
  osSemaphoreId semaphore;
};


/* Exported functions ------------------------------------------------------- */

void ethernetif_set_link(void const *argument);
void ethernetif_update_config(struct netif *netif);
void ethernetif_notify_conn_changed(struct netif *netif);


