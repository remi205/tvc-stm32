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
TVC_WANT_FEATURE(f4xx,[ build for STM32F4xx], [yes])
TVC_WANT_FEATURE(f3xx,[ build for STM32F3xx], [no])
TVC_WANT_FEATURE(l4xx,[ build for STM32L4xx], [no])
TVC_WANT_FEATURE(f7xx,[ build for STM32F7xx], [no])
TVC_WANT_FEATURE(l0xx,[ build for STM32L0xx], [no])

TVC_WANT_STM32(stm32, [choose the stm32 as F407VEx], [F407VEx])


TVC_WANT_FEATURE(ipv4,[ choose the vesion V4 of Ip proctol], [yes])
TVC_WANT_FEATURE(ipv6,[ choose the vesion V6 of Ip proctol], [no])
TVC_WANT_FEATURE(lwip,[ choose the IP stack], [yes])
TVC_WANT_FEATURE(freertos,[ use FreeRTOS as scheduler], [yes])

TVC_WANT_FEATURE(south, [build the south application], [no])
TVC_WANT_FEATURE(east_west, [build the east_west application], [yes])

TVC_WANT_FEATURE(target_ram,[ build for ram target], [yes])
TVC_WANT_FEATURE(target_flash,[ build for flash target], [no])
#TVC_WANT_FEATURE(canopen,[ use CanOpen over HAL], [no])

## setup define for compilation 
AC_DEFINE([stm32],["$want_string"],[Specify MCU])
AC_DEFINE([user_main],["$want_string"],[Specify user start function])


AM_CONDITIONAL([WANT_F4XX],     [test "$f4xx" = true])
AM_CONDITIONAL([WANT_F3XX],     [test "$f3xx" = true])
AM_CONDITIONAL([WANT_L4XX],     [test "$l4xx" = true])
AM_CONDITIONAL([WANT_F7XX],     [test "$f7xx" = true])
AM_CONDITIONAL([WANT_L0XX],     [test "$l0xx" = true])

AM_CONDITIONAL([TARGET_RAM],     [test "target-ram" = true])
AM_CONDITIONAL([TARGET_FLASH],   [test "target-flash" = true])

AM_CONDITIONAL([TARGET_EAST_WEST],   [test "east_west" = true])
AM_CONDITIONAL([TARGET_SOUTH],   [test "south" = true])

AM_CONDITIONAL([WANT_FREERTOS], [test "$freertos" = true])
AM_CONDITIONAL([WANT_CANOPEN],  [test "$canopen" = true])
AM_CONDITIONAL([WANT_LWIP],     [test "$lwip" = true])
AM_CONDITIONAL([WANT_IPV4],  [test "$ipv4" = true ])
AM_CONDITIONAL([WANT_IPV6],  [test "$ipv6" = true ])

## generate all the Makefile
AC_CONFIG_FILES([Makefile LwIP/system/OS/Makefile CMSIS/Device/Makefile CMSIS/Device/ST/Makefile CMSIS/Device/ST/STM32F4xx/Makefile CMSIS/Device/ST/STM32F4xx/Source/Makefile CMSIS/Device/ST/STM32F4xx/Source/Templates/Makefile CMSIS/Makefile STM32F4xx_HAL_Driver/Makefile STM32F4xx_HAL_Driver/Src/Makefile FreeRTOS/Makefile FreeRTOS/Source/Makefile FreeRTOS/Source/CMSIS_RTOS/Makefile LwIP/Makefile LwIP/src/api/Makefile LwIP/src/core/ipv4/Makefile LwIP/src/core/ipv6/Makefile LwIP/src/core/Makefile LwIP/src/Makefile LwIP/src/netif/Makefile LwIP/src/netif/ppp/Makefile LwIP/system/Makefile LwIp/system/Makefile LwIp/system/OS/Makefile over-hal/Makefile application/Makefile bsp/Makefile Common/Makefile Common/Utils/Makefile Common/TCP_IP/Makefile])
AC_OUTPUT
