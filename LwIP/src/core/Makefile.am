
## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = ipv4

if WANT_IPV4
SUBDIRS += ipv4 
endif

if WANT_IPV6
SUBDIRS += ipv6
endif

lib_LIBRARIES = libcore.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb  -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CFLAGS += -I$(top_srcdir)/Inc  -I../../include -I$(top_srcdir)/inc -I$(top_srcdir)/LwIP/src/include  -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/Drivers/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F -I$(top_srcdir)/LwIP/system -DSTM32F407xx

libcore_a_SOURCES =def.c dhcp.c dns.c init.c mem.c memp.c netif.c pbuf.c raw.c stats.c sys.c tcp.c tcp_in.c tcp_out.c udp.c lwip_timers.c

