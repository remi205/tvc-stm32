## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libapplication.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(STM32)xx -ISTM32$(FAMILLY)xx_HAL_Driver/Src/STM32$(FAMILLY)

AM_CPPFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(STM32)xx -ISTM32$(FAMILLY)xx_HAL_Driver/Src/STM32$(FAMILLY)

CPPFLAGS += -I$(top_srcdir)/inc -I$(top_srcdir)  -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/Drivers/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include

CFLAGS +=  -I$(top_srcdir)/Inc -I$(top_srcdir)/over-hal  -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Include  -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/LwIP/src/include/lwip 

libapplication_a_SOURCES = StartThread.c
