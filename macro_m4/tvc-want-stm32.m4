AC_DEFUN([TVC_WANT_STM32],[
  m4_define([allcapsname],translit($1,a-z-,A-Z_))

  AC_ARG_ENABLE([$1],
    AS_HELP_STRING([--enable-$1],[$2 ($3)]),,enableval="$3")

  AC_SUBST([STM32], m4_bregexp($2,[\([FL][0-9][0-9][0-9]\)],[\1]))
  AC_DEFINE_UNQUOTED([STM32],[STM32]$stm32,[$2])

  AC_SUBST([FAMILLY],m4_bregexp($2,[\([FL][0-9]\)[0-9][0-9]],[\1]))
  AC_DEFINE_UNQUOTED([FAMILLY],[STM32]$familly[xx],[$2])

  AC_SUBST([WANT_]allcapsname(),[STM32]$enableval[-mem.ld])
  want_string=[WANT_]allcapsname()
  AC_DEFINE_UNQUOTED($want_string,$enableval,[$2])
])


AC_DEFUN([TVC_WANT_CONSOLE],[
  m4_define([allcapsname],translit($1,a-z-,A-Z_))

  AC_ARG_ENABLE([$1],
    AS_HELP_STRING([--enable-$1],[$2 ($3)]),,enableval="$3")

  AC_SUBST([WANT_]allcapsname(),$enableval)
  want_string=allcapsname()

  AC_DEFINE_UNQUOTED($want_string,$enableval,[translit($2,a-z-,A-Z)])
])


