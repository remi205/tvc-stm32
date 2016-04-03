## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libtcp_ip.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb mfloat-abi=hard -mfpu=fpv4-sp-d16 -O3 -Wall -Wpointer-arith  -Winline -Wundef -g -ffunction-sections -fdata-sections -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY) 

CPPFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include -I$(top_srcdir)/LwIP/src/include -I$(top_srcdir)/LwIP/system -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/LwIP/src/include/ipv4 -I$(top_srcdir)/Common/Utils -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM4F -DSTM32$(PRODUCT)xx -DFAMILLY$(FAMILLY) -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc 

libtcp_ip_a_SOURCES = 

