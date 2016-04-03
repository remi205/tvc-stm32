## Makefile.am -- Process this file with automake to produce Makefile.in

lib_LIBRARIES = libnetif.a

AM_CFLAGS = $(ARCH_CORE) -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/Drivers/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include

CFLAGS +=$(ARCH_CORE) -I$(top_srcdir)/Inc  -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I$(top_srcdir)/FreeRTOS/Source/include -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY)

libnetif_a_SOURCES = ethernetif.c slipif.c etharp.c
