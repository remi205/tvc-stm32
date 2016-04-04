## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libbsp_mx.a

AM_CFLAGS =$(WANT_ARCH) -Wall -Wpointer-arith -Winline -Wundef -g  -ffunction-sections -fdata-sections -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT) -I$(top_srcdir)

CFLAGS +=-I$(top_srcdir)/CMSIS/Include  -DSTM32$(PRODUCT) -I$(top_srcdir) 

libbsp_mx_a_SOURCES =  adc.c dma.c i2c.c sai.c spdifrx.c tim.c dcmi.c gpio.c rtc.c spi.c usart.c
