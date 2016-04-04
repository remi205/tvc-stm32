## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libbsp_mx.a

AM_CFLAGS =-Wall -Wpointer-arith -Winline -Wundef -g  -ffunction-sections -fdata-sections -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT)xx -mfloat-abi=hard -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -I$(top_srcdir)

CFLAGS +=-I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F $(INC_IPV) -I$(top_srcdir)/LwIP/system/OS -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/over-hal -I$(top_srcdir)/LwIP/src/include -DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT) -I$(top_srcdir) -mfloat-abi=hard -mcpu=cortex-m7 -mfpu=fpv5-sp-d16

libbsp_mx_a_SOURCES =  adc.c dma.c fmc.c i2c.c lwip.c quadspi.c sai.c spdifrx.c tim.c dcmi.c fatfs.c gpio.c ltdc.c  main.c rtc.c sdmmc.c spi.c usart.c
