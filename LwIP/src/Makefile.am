
## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = api core netif
AM_CFLAGS=$(WANT_ARCH) $(WANT_OPT) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -I$(top_srcdir)/Inc -DSTM32$(PRODUCT)
