## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libutils.a

AM_CFLAGS =-mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g -ffunction-sections -fdata-sections -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/Drivers/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include

CPPFLAGS += -I$(top_srcdir)/Common/TCP_IP -I$(top_srcdir)/Inc -I$(top_srcdir)/$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F -I$(top_srcdir)/LwIP/src/include/ipv4 -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -I$(top_srcdir)/Drivers/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include

libutils_a_SOURCES = InitServiceDS.cpp TraceFunction.cpp ParameterParser.cpp
