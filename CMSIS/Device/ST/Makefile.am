## Makefile.am -- Process this file with automake to produce Makefile.in

if L4XX
SUBDIRS = STM32L4xx
else
if F3XX
SUBDIRS = STM32F3xx
else
if F7XX 
SUBDIRS = STM32F7xx
else
if L0XX 
SUBDIRS = STM32L0xx
else
### par defaut c'est le F4
SUBDIRS = STM32F4xx
endif
endif
endif
endif

AM_CFLAGS=-O3 -mcpu=cortex-m4 -mthumb -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32($(PRODUCT)xx_HAL_Driver/inc -I$(top_srcdir)/inc -DSTM32$(STM32)xx
 
