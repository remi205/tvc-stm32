## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libutils.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32F407xx

CPPFLAGS += -I$(top_srcdir)/Common/TCP_IP -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3 -I$(top_srcdir)/LwIP/src/include/ipv4 -DSTM32F407xx

CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc  -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3 -I$(top_srcdir)/LwIP/src/include/ipv4 -DSTM32F407xx

libutils_a_SOURCES = InitServiceDS.cpp TraceFunction.cpp ParameterParser.cpp
