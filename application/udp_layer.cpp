#include "udp_layer.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lwip/ip_addr.h"


extern "C" {
#include "../over-hal/scan_address.h"
}

void recv_callback(void *arg, struct udp_pcb *upcb, struct pbuf *p, struct ip_addr *addr, u16_t port);

osSemaphoreDef(sem_udp);


udp::udp()
  : m_FifoBuffer(256)
{
  // on pend un semaphore la synchro  
  SemaphoreNewPacket = osSemaphoreCreate(osSemaphore(sem_udp), 1);
  
  //on prend un ticket comme cela, le prochain wait sera bloquant
  osSemaphoreWait(SemaphoreNewPacket , 0);

  m_upcb = udp_new();
}

bool udp::open_client()
{
  // on ferme, et on rouvre avec les données du client. 
  udp_disconnect(m_upcb);
  return open_client(&m_client_addr, m_client_port);
}

// ouverture de haut niveau IVP4
bool udp::open_client( char * address, unsigned short port) 
{
  // assign destination IP address 
  unsigned char p[4];
  struct ip_addr ip;
  
  scan_address_ip(address, p);

  IP4_ADDR( &ip, p[0], p[1], p[2], p[3]);
  return open_client(&ip,port);
}

// ouverture IVP4 
bool udp::open_client( struct ip_addr * address, unsigned short port) 
{
  int err = udp_connect(m_upcb, address, port);
  if (err == ERR_OK)
    return true;   
  else
    return false;
}

bool udp::open_server( unsigned short port) 
{
  int err = udp_bind(m_upcb, IP_ADDR_ANY, port);
  if (err == ERR_OK)
    {
      udp_recv(m_upcb, recv_callback, this);
      return true;   
    }
  else
    return false;
}

void udp::install_callback() 
{
  udp_recv(m_upcb, recv_callback, this);
}


bool udp::send( unsigned char * Buffer, unsigned short len)
{
  struct pbuf *p= pbuf_alloc(PBUF_TRANSPORT, len, PBUF_POOL);     
  if ( p ) 
    {
      pbuf_take(p, (char*)Buffer, len); 
      
      int ret = udp_send(m_upcb, p); 
            
      pbuf_free(p);
      return true;
    }
  else
    return false;
}

bool udp::sendto( unsigned char * Buffer, unsigned short len,  char* address, unsigned short port)
{
  struct pbuf *p= pbuf_alloc(PBUF_TRANSPORT, len, PBUF_POOL);     
  if ( p ) 
    {
      unsigned char pp[4];
      struct ip_addr ip;
      
      scan_address_ip(address, pp);
      
      IP4_ADDR( &ip, pp[0], pp[1], pp[2], pp[3]);

      pbuf_take(p, (char*)Buffer, len); 
      udp_sendto(m_upcb, p, &ip, port); 
      pbuf_free(p);
      return true;
    }
  else
    return false;
}

bool udp::recv( unsigned char * Buffer, unsigned short len)
{
  // wait for enough byte available. 
  while ( m_FifoBuffer.GetCount() < len)
  {

    osSemaphoreWait(SemaphoreNewPacket , osWaitForever);
  }
  m_FifoBuffer.ReadBuffer(Buffer, len);
  Buffer[len+1] = 0;

  return true;
}

void recv_callback(void *arg, struct udp_pcb *upcb, struct pbuf *p, struct ip_addr *addr, u16_t port)
{
  udp * m_udp = (udp *) arg;

   m_udp->m_client_addr.addr = addr->addr;
   m_udp->m_client_port = port;
 
   m_udp->m_FifoBuffer.WriteBuffer( (unsigned char *)p->payload,  p->len);
      
   // Free the p buffer , ben si len est plus grand, je ne sais pas. 
   // Free the p buffer, a chaque call back
   pbuf_free(p);

   // signal du Thread qui attend
   osSemaphoreRelease(m_udp->SemaphoreNewPacket);  
}


bool udp::ReadString( char * String, int Len)
{
  unsigned short  Len2;
  if ( recv( (unsigned char *)&Len2, 2) )
    {
      if ( Len2 < Len)
        {
          if ( recv( (unsigned char *)String, Len2))
            {
              // youpi
              String[Len2] =0;
              return true;
            }
          // buffer trop petit
          return false;
        }
      // la lecture de la taille s'est mal passé. 
      return false;
    }
  return false;
}

bool udp::WriteString(char * String)
{
  unsigned short Len = strlen(String);
  send( (unsigned char *)&Len, 2);
  osDelay(10);
  return send((unsigned char *)String, Len);
}

#if 0
void udp::close()
{
  udp_disconnect(m_upcb);
}
#endif


