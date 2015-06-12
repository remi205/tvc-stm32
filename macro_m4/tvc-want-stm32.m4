
AC_DEFUN([TVC_WANT_STM32],[
  m4_define([allcapsname],translit($1,a-z-,A-Z_))

  AC_ARG_ENABLE([$1],
    AS_HELP_STRING([--enable-$1],[$2 ($3)]),,enableval="$3")

  AC_SUBST([WANT_]allcapsname(),[STM32]$enableval[-mem.ld])
  want_string=[WANT_]allcapsname()
  AC_DEFINE_UNQUOTED($want_string,$enableval,[$2])
])


AC_DEFUN([TVC_WANT_CONSOLE],[
  m4_define([allcapsname],translit($1,a-z-,A-Z_))

  AC_ARG_ENABLE([$1],
    AS_HELP_STRING([--enable-$1],[$2 ($3)]),,enableval="$3")

  AC_SUBST([WANT_]allcapsname(),$enableval)
  want_string=[WANT_]allcapsname()
  AC_DEFINE_UNQUOTED($want_string,$enableval,[translit($2,a-z-,A-Z)])
])

