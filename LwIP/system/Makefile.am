
## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = OS

AM_CFLAGS=-O3 -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-sp-d16 -mthumb -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -I$(top_srcdir)/inc -DSTM32$(PRODUCT)xx -DFAMILLY$(FAMILLY)

AM_CPPFLAGS =-O3 -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-sp-d16 -mthumb -ffunction-sections -fdata-sections  -fno-exceptions -I$(top_srcdir)/tvc-macros -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -DSTM32$(PRODUCT)xx -DFAMILLY$(FAMILLY)
