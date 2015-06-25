## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libbsp.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(STM32)xx -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT)xx 

CFLAGS +=  -I$(top_srcdir)/Inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/IAR/ARM_CM4F -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/LwIP/system/OS -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/over-hal -I$(top_srcdir)/LwIP/src/include

libbsp_a_SOURCES = eth_init.c dhcp_config.c stm32f4xx_hal_msp.c stm32f4xx_it.c system_stm32f4xx.c usart.c gpio.c i2c.c spi.c dma.c stm32f4xx_crt0.s newlib_stub.c main.c


