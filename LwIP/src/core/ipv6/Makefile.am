
## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libipv6.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CPPFLAGS += -Iinc/ -I../inc -I$(top_srcdir)/inc -I$(top_srcdir) -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc
CFLAGS += -Iinc/ -I../inc -I$(top_srcdir)/inc -I$(top_srcdir) -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/lwip/src/include -I$(top_srcdir)/lwip/src/include/ipv6

libipv6_a_SOURCES = icmp6.c inet6.c ip6.c ip_addr6.c 


