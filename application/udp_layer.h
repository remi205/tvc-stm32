#pragma once

#include "lwip/pbuf.h"
#include "lwip/udp.h"
#include "lwip/tcp.h"
#include "lwip/memp.h"
#include "sys_arch.h"

#include "FifoBuffer.h"


// le principe est d'avoir un pbuf, pour la classe, donc par connection.
// quand on tu 
class udp 
{
public:  
  struct udp_pcb *m_upcb;
  sys_sem_t m_SignalReceive;
  osSemaphoreId SemaphoreNewPacket; 
  FifoBuffer m_FifoBuffer;

  // en mode server, il faut garder l'address du client, pour répondre
  struct ip_addr m_client_addr;
  unsigned short m_client_port;

  friend void recv_callback(void *arg, struct udp_pcb *upcb, struct pbuf *p, struct ip_addr *addr, u16_t port);

public :
  udp();

  //trois signature
  bool open_client();
  bool open_client(ip_addr * address, unsigned short port);
  bool open_client(char * address, unsigned short port);

  bool open_server(unsigned short port);
  bool send(unsigned char * Buffer, unsigned short len);

  bool sendto( unsigned char * Buffer, unsigned short len,  char* address, unsigned short port);
  bool recv(unsigned char * Buffer, unsigned short len);
 // void close();

  void install_callback();

  
  bool ReadString(char * String, int Len);
  bool WriteString(char * String);
};

