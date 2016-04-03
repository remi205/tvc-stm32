## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libsysarch.a

AM_CFLAGS=-O3 $(ARCH_CORE) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/Lwip/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/LwIP/src/include -DSTM32$(PRODUCT)

libsysarch_a_SOURCES = sys_arch.c
