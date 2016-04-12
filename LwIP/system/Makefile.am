
## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = OS

AM_CFLAGS=$(WANT_ARCH) $(WANT_OPT) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -I$(top_srcdir)/inc -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY)

AM_CPPFLAGS =$(WANT_ARCH) $(WANT_OPT) -ffunction-sections -fdata-sections  -fno-exceptions -I$(top_srcdir)/tvc-macros -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -DSTM32$(PRODUCT) -DFAMILLY$(FAMILLY)
