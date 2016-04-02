
## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = 

if IPV4
SUBDIRS += ipv4 
IP = -I$(top_srcdir)/LwIP/src/include/ipv4
endif

if IPV6
SUBDIRS += ipv6
IP = -I$(top_srcdir)/LwIP/src/include/ipv6
endif

lib_LIBRARIES = libcore.a

AM_CFLAGS =-O3 -Wall -Wpointer-arith -Winline -Wundef -g -ffunction-sections -fdata-sections -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc  -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -I$(top_srcdir)/Drivers/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include

CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F -I$(top_srcdir)/LwIP/src/include/ipv4

libcore_a_SOURCES =def.c dhcp.c dns.c init.c mem.c memp.c netif.c pbuf.c raw.c stats.c sys.c tcp.c tcp_in.c tcp_out.c udp.c lwip_timers.c

