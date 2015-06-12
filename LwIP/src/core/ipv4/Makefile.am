
## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libipv4.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CFLAGS += -I$(top_srcdir)/Inc -I../inc -I$(top_srcdir) -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/LwIP/system/  -DSTM32F407xx

libipv4_a_SOURCES = autoip.c icmp.c igmp.c inet.c inet_chksum.c ip.c ip_addr.c ip_frag.c 


