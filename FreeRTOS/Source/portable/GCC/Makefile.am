
## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = ARM_CM4F ARM_CM7
AM_CFLAGS=$(WANT_OPT) $(ARCH_CORE) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -I$(top_srcdir)/inc
AM_CPPFLAGS =$(WANT_OPT) $(ARCH_CORE) -ffunction-sections -fdata-sections  -fno-exceptions -I$(top_srcdir)/tvc-macros -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc  
