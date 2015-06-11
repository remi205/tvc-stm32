
## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libppp.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CPPFLAGS += -Iinc/ -I../inc -I../include  -I$(top_srcdir)/inc -I$(top_srcdir) -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc
CFLAGS += -Iinc/ -I../inc -I../include -I$(top_srcdir)/inc -I$(top_srcdir) -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc

libppp_a_SOURCES = auth.c chap.c chpms.c fsm.c ipcp.c lcp.c magic.c ppp_oe.c randm.c  vj.c md5.c  pap.c ppp.c 



