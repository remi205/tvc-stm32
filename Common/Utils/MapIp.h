

#pragma once

void * map_ip(unsigned long physcal_address_ip, unsigned long map_size);
void unmap_ip( void * virtual_address, unsigned long map_size);
