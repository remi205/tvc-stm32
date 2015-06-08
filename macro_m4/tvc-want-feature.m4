dnl Make it easier to use the AC_ARG_ENABLE macro for certain boolean switches
dnl that turn features on and off.  The arguments are:
dnl   1 - feature name
dnl   2 - feature description
dnl   3 - default value
AC_DEFUN([TVC_WANT_FEATURE],[
  m4_define([allcapsname],translit($1,a-z-,A-Z_))
  AC_ARG_ENABLE([$1],
    AS_HELP_STRING([--enable-$1],[$2 ($3)]),,enableval="$3")
  case "$enableval" in
    yes)     enableval=true  ;;
    no)      enableval=false  ;;
    on)      enableval=true  ;;
    off)     enableval=false  ;;
    in)      enableval=true  ;;
    out)     enableval=false  ;;
    default) enableval="$3" ;;
    *) AC_MSG_ERROR([Invalid setting for --enable-$1. Use "yes" or "no"]) ;;
  esac
  AC_SUBST([WANT_]allcapsname(),$enableval)
  want_var=[WANT_]allcapsname()
  AC_DEFINE_UNQUOTED($want_var,$enableval,[$2])
])
					

