## Makefile.am -- Process this file with automake to produce Makefile.in
ACLOCAL_AMFLAGS = -I macro_m4

LIB_HAL = STM32$(FAMILLY)xx_HAL_Driver/Src/libSTM32$(FAMILLY)xx.a
INC_HAL = STM32$(FAMILLY)xx_HAL_Driver/Inc
HAL_PATH = STM32$(FAMILLY)xx_HAL_Driver

AM_CFLAGS = -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include
AM_CXXFLAGS = -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILLY)xx/Include 

if L4XX
AM_CFLAGS += -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM4F
LIBPORT  = FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a
LD_SCRIPT = $(top_srcdir)/target/target-stm32-$(ROMRAM)-8.ld 
SUBDIRS = STM32L4xx_HAL_Driver
else
if F3XX
AM_CFLAGS += -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM4F
LIBPORT  =  FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a
LD_SCRIPT = $(top_srcdir)/target/target-stm32-$(ROMRAM)-4.ld 
SUBDIRS = STM32F3xx_HAL_Driver
else
if F7XX 
AM_CFLAGS += -D__CORTEX_M=7 -D__FPU_PRESENT -D__FPU_USED=1 
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1
LIBPORT =  FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1/libport.a 
LD_SCRIPT = $(top_srcdir)/target/target-stm32-$(ROMRAM)-4.ld 
SUBDIRS = STM32F7xx_HAL_Driver
else
if L0XX 
AM_CFLAGS += -D__CORTEX_M=0 -D__FPU_USED=0 
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM0
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM0/libport.a
LD_SCRIPT = $(top_srcdir)/target/target-stm32-$(ROMRAM)-4.ld 
SUBDIRS = STM32L0xx_HAL_Driver
else
### par defaut c'est le F4
AM_CFLAGS+=-D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM4F 
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a 
LD_SCRIPT = $(top_srcdir)/target/target-stm32-$(ROMRAM)-4.ld 
SUBDIRS = STM32F4xx_HAL_Driver
endif
endif
endif
endif

SUBDIRS += bsp-mx

if IPV4
SUBDIRS += LwIP Common
AM_CFLAGS += -I$(top_srcdir)/LwIP/src/include/ipv4 -DIPV4
INC_IP = -I$(top_srcdir)/LwIP/src/include
LIB_IP =  LwIP/src/core/ipv4/libipv4.a LwIP/src/api/libapi.a LwIP/src/core/libcore.a LwIP/src/netif/libnetif.a LwIP/system/OS/libsysarch.a LwIP/src/core/ipv4/libipv4.a LwIP/src/core/raw.o bsp/dhcp_config.o 
endif

if IPV6
SUBDIRS += LwIP 
AM_CFLAGS += -I$(top_srcdir)/LwIP/src/include/ipv6 -DIPV6
INC_IP = -I$(top_srcdir)/LwIP/src/include
LIB_IP =  LwIP/src/core/ipv6/libipv6.a LwIP/src/api/libapi.a LwIP/src/core/libcore.a LwIP/src/netif/libnetif.a LwIP/system/OS/libsysarch.a LwIP/src/core/ipv6/libipv6.a LwIP/src/core/raw.o $(HAL_PATH)/Src/STM32$(FAMILLY)xx_hal_eth.o bsp/dhcp_config.o
endif

if FREERTOS
SUBDIRS += FreeRTOS CMSIS
LIB_FREERTOS = FreeRTOS/Source/libfreertos.a FreeRTOS/Source/portable/MemMang/libmem.a FreeRTOS/Source/CMSIS_RTOS/libcmsis_os.a $(LIBPORT)
INC_FREERTOS = -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include
endif

if USB_DEV_CDC
endif


### TOTO : STM32F4xx_HAL_Driver une macro pour cela
### TOTO = $(HAL_PATH) = STM32$(FAMILLY)xx_HAL_Driver
SUBDIRS += application bsp over-hal 

AM_CFLAGS +=$(WANT_ARCH) $(WANT_OPT) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/Inc -I../Inc -I$(top_srcdir)/$(PORT_INC) -I$(top_srcdir)/tvc-macros $(INC_IP) $(INC_FREERTOS) -DSTM32$(PRODUCT)
AM_CXXFLAGS += $(WANT_ARCH) -ffunction-sections -fdata-sections -fno-exceptions  -I$(top_srcdir)/Inc -I../Inc  -I$(top_srcdir)/$(PORT_INC) -I$(top_srcdir)/tvc-macros $(INC_IP) $(INC_FREERTOS) -DSTM32$(PRODUCT)

## -fno-rtti
bin_PROGRAMS = essai_stm32

## pas encore full automatise
essai_stm32_SOURCES = 

##  -DSTM32$(STM32)xx donne STM32F407xx pour la HAL
essai_stm32_LDFLAGS =-o $(WANT_APP_NAME) -Wl,-Map,$(WANT_APP_NAME).map -T$(top_srcdir)/target/stm32-mem/$(WANT_STM32) -T$(LD_SCRIPT)

essai_stm32_LDADD = bsp/libbsp.a application/libapplication.a over-hal/libover_hal.a $(LIB_HAL) $(LIBPORT) $(LIB_FREERTOS) $(LIB_IP) FreeRTOS/Source/libfreertos.a FreeRTOS/Source/portable/MemMang/libmem.a FreeRTOS/Source/CMSIS_RTOS/libcmsis_os.a $(LIB_USB) Common/Utils/libutils.a STM32F7xx_HAL_Driver/Src/stm32f7xx_hal_eth.o
