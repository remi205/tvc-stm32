
## Makefile.am -- Process this file with automake to produce Makefile.in

lib_LIBRARIES = libapi.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CFLAGS += -I$(top_srcdir)/Carlina/Inc  -I../../include -I$(top_srcdir)/Inc -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc/ -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F  -DSTM32F407xx

libapi_a_SOURCES = api_lib.c api_msg.c err.c netbuf.c netdb.c netifapi.c sockets.c tcpip.c
