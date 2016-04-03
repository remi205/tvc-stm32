## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libover_hal.a

AM_CFLAGS =-mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g -ffunction-sections -fdata-sections -DSTM32$(PRODUCT)xx -D$(WANT_CONSOLE) -I$(top_srcdir)/$(HAL_PATH)/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(STM32)xx/Include -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include

CFLAGS +=  -I$(top_srcdir)/Inc  -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -DSTM32$(PRODUCT) -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 
CPPFLAGS +=  -I$(top_srcdir)/Inc  -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -DSTM32$(PRODUCT) -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 

libover_hal_a_SOURCES = scan_address.cpp gpio_access.c spi_access.c

