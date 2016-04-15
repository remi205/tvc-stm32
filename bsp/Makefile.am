## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libbsp.a


if L4XX
libbsp_a_SOURCES = stm32l4xx_hal_msp.c stm32l4xx_it.c system_stm32l4xx.c stm32l4xx_crt0.s
else
if F3XX
libbsp_a_SOURCES = stm32f3xx_hal_msp.c stm32f3xx_it.c system_stm32f3xx.c stm32f3xx_crt0.s stm32f3xx_vectors.s main_f3.c
else
if F7XX 
libbsp_a_SOURCES = stm32f7xx_hal_msp.c stm32f7xx_it.c system_stm32f7xx.c stm32f7xx_crt0.s stm32f7xx_vectors.s main_f7.cpp gpio.c
else
if L0XX 
libbsp_a_SOURCES = stm32l0xx_hal_msp.c stm32l0xx_it.c system_stm32l0xx.c stm32l0xx_crt0.s
else
### par defaut c'est le F7
libbsp_a_SOURCES = stm32f4xx_hal_msp.c stm32f4xx_it.c system_stm32f4xx.c stm32f4xx_crt0.s usart.c gpio.c i2c.c spi.c dma.c main.c
endif
endif
endif
endif

if IPV4
libbsp_a_SOURCES  += eth_init.c dhcp_config.c
INC_IPV = -I$(top_srcdir)/LwIP/src/include/ipv4
endif
if IPV6
libbsp_a_SOURCES  += eth_init.c dhcp_config.c
INC_IPV = -I$(top_srcdir)/LwIP/src/include/ipv6
endif

##
AM_CFLAGS = $(WANT_ARCH) -Wall -Wpointer-arith -Winline -Wundef -g -ffunction-sections -fdata-sections -I$(top_srcdir)/Inc -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT)xx -I$(top_srcdir)

CFLAGS +=-I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/$(GCC_CORE) $(INC_IPV) -I$(top_srcdir)/LwIP/system/OS -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/over-hal -I$(top_srcdir)/LwIP/src/include-DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT) -I$(top_srcdir)

CPPFLAGS +=$(WANT_ARCH) -I$(top_srcdir)/Inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/$(GCC_CORE) $(INC_IPV) -I$(top_srcdir)/LwIP/system/OS -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/over-hal -I$(top_srcdir)/LwIP/src/include  -DFAMILLY$(FAMILLY) -DSTM32$(PRODUCT) -I$(top_srcdir) -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include 

libbsp_a_SOURCES += newlib_stub.c


