## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libover_hal.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(STM32)xx -D$(WANT_CONSOLE) -I$(top_srcdir)/$(HAL_PATH)/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(STM32)xx/Include -DFAMILLY$(FAMILLY)

CFLAGS +=  -I$(top_srcdir)/Inc  -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include
libover_hal_a_SOURCES = ads111x_access.c Ads1115.c battery-measure.c gpio_access.c Serial.c spi_access.c Console.c
