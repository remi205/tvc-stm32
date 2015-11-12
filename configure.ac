## Process this file with autoconf to produce a configure script.
AC_PREREQ(2.59)

AC_INIT([tvc-stm32], [1.0], [prudhomme.remi@gmail.com])
AC_CONFIG_HEADERS([config.h:config-h.in])

## Abort if trying to build inside of the source tree.
AS_IF([test -f macro_m4/tvc-want-feature.m4],[
  rm -f config.cache config.log confdefs.h
  AC_MSG_ERROR([***]
    [Attempt to build inside of the source tree]
    [Please use a separate build directory, instead] )
])

AM_INIT_AUTOMAKE([1.9 foreign])

AC_PROG_CC
AC_PROG_RANLIB
AC_PROG_CXX
AM_PROG_AS

## initialize the arguments to configure
TVC_WANT_STM32(stm32, [choose a stm32 as F407VEx],[F407VEx])
TVC_WANT_CONSOLE(console, [choose the stm32 uart port as console], [uart1])
TVC_WANT_RAMROM(romram, [choose the target type 'flash/'ram], [flash])
TVC_WANT_FREERTOS(freertos, [do you want freertos feature 'yes/no'], [yes])
TVC_STM32_SERIE(stm32_serie, [choose the stm32 as F4 or L0],[F4])
TVC_STM32_PRODUCT(stm32_product, [choose the stm32 as F407 or L053],[F407])
TVC_WANT_USB_DEVICE_CDC(usb_device_cdc, [do you want a usb device serial 'yes/no'],[yes])

TVC_WANT_FEATURE(ipv4,[ choose the vesion V4 of Ip protocol], [yes])
TVC_WANT_FEATURE(ipv6,[ choose the vesion V6 of Ip protocol], [no])
TVC_WANT_FEATURE(lwip,[ choose the IP stack], [yes])

## setup define for compilation 
AC_DEFINE([stm32],["$want_string"],[Specify the MCU])
AC_DEFINE([user_main],["$want_string"],[Specify user start function])
AC_DEFINE([console],["$want_string"],[Specifty uart])
AC_DEFINE([romram],["$want_string"],[Specify the target type])
AC_DEFINE([freertos],["$want_string"],[Specify the target type])
AC_DEFINE([stm32_serie],["$want_string"],[Specify the serie of stm32])
AC_DEFINE([stm32_product],["$want_string"],[Specify the product of stm32])

AM_CONDITIONAL([FREERTOS], [test "$WANT_FREERTOS" = "yes"])

AM_CONDITIONAL([F3XX], [test "$enable_stm32_serie" = F3])
AM_CONDITIONAL([F4XX], [test "$enable_stm32_serie" = F4])
AM_CONDITIONAL([F7XX], [test "$enable_stm32_serie" = F7])
AM_CONDITIONAL([L0XX], [test "$enable_stm32_serie" = L0])
AM_CONDITIONAL([L4XX], [test "$enable_stm32_serie" = L4])

AM_CONDITIONAL([LWIP],  [test "$lwip" = true])
AM_CONDITIONAL([IPV4],  [test "$WANT_IPV4" = true ])
AM_CONDITIONAL([IPV6],  [test "$WANT_IPV6" = true ])
AM_CONDITIONAL([USB_DEV_CDC], [test "$WANT_USB_DEV_CDC" = true])

## generate all the Makefile
AC_CONFIG_FILES([Makefile LwIP/system/OS/Makefile CMSIS/Device/Makefile CMSIS/Device/ST/Makefile CMSIS/Device/ST/STM32F4xx/Makefile CMSIS/Device/ST/STM32F4xx/Source/Makefile CMSIS/Device/ST/STM32F4xx/Source/Templates/Makefile CMSIS/Makefile STM32F4xx_HAL_Driver/Makefile STM32F4xx_HAL_Driver/Src/Makefile FreeRTOS/Makefile FreeRTOS/Source/Makefile FreeRTOS/Source/CMSIS_RTOS/Makefile LwIP/Makefile LwIP/src/api/Makefile LwIP/src/core/ipv4/Makefile over-hal/Makefile application/Makefile bsp/Makefile Common/Makefile Common/Utils/Makefile Common/TCP_IP/Makefile FreeRTOS/Source/portable/MemMang/Makefile FreeRTOS/Source/portable/Makefile FreeRTOS/Source/portable/GCC/Makefile LwIP/src/Makefile LwIP/src/core/Makefile LwIP/src/netif/Makefile LwIP/system/Makefile FreeRTOS/Source/portable/GCC/ARM_CM4F/Makefile STM32F3xx_HAL_Driver/Makefile STM32F3xx_HAL_Driver/Src/Makefile STM32F7xx_HAL_Driver/Makefile STM32F7xx_HAL_Driver/Src/Makefile STM32L0xx_HAL_Driver/Makefile STM32L0xx_HAL_Driver/Src/Makefile STM32L4xx_HAL_Driver/Makefile STM32L4xx_HAL_Driver/Src/Makefile UsbDevice/Makefile])
AC_OUTPUT
