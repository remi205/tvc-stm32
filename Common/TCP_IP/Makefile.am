## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libtcp_ip.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32F407xx

CPPFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/Common/Utils -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3 -DSTM32F407xx

CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/Common/Utils -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3 -DSTM32F407xx

libtcp_ip_a_SOURCES = Service.cpp ServiceClient.cpp ServiceUdp.cpp TCPClient.cpp TCPServer.cpp UDP.cpp UDPClient.cpp UDPServer.cpp

