## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libapplication.a

## LIB_USB plus tard on le fera mieux 
libapplication_a_SOURCES = usb_device.c usbd_cdc_if.c usbd_conf.c usbd_desc.c

if IPV4
libapplication_a_SOURCES  += StartThread.c FifoBuffer.cpp Lowpower.c MotorThread.cpp udp_layer.cpp
INC_IPV = -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system
endif
if IPV6
libapplication_a_SOURCES  += StartThread.c
INC_IPV = -I$(top_srcdir)/LwIP/src/include/ipv6 -I$(top_srcdir)/LwIP/src/include/lwip -I$(top_srcdir)/LwIP/src/include/netif -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system
endif

AM_CFLAGS =-Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(PRODUCT)xx -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -mfloat-abi=hard -mfpu=fpv4-sp-d16

CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/over-hal -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include  -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F $(INC_IPV)  