## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libover_hal.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32F407xx

CPPFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/Carlina/Drivers/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/Carlina/Drivers/CMSIS/Include -I$(top_srcdir)/Carlina/Drivers/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include  -DSTM32F407xx

CFLAGS +=  -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Include  -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/IAR/ARM_CM3 -I$(top_srcdir)/LwIP/src/include/ipv4 -DSTM32F407xx

libover_hal_a_SOURCES = ads111x_access.c Ads1115.c battery-measure.c gpio_access.c Serial.c spi_access.c Console.c
