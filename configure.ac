dnl Process this file with autoconf to produce a configure script.
AC_INIT(hopm, [1.0.0beta1])
AC_CONFIG_SRCDIR(src/opercmd.h)
AM_CONFIG_HEADER(src/setup.h)
AM_INIT_AUTOMAKE()
AC_PREFIX_DEFAULT([\${HOME}/hopm])
AM_MAINTAINER_MODE

AC_ARG_WITH(extra-fascism,
    AC_HELP_STRING([--with-extra-fascism],
    [Add extra gcc3-specific warning flags]),
    [CFLAGS="$CFLAGS -g -O0 -W -Wall -Wfloat-equal -Wbad-function-cast -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wredundant-decls -Wnested-externs"])

dnl ipv6?
dnl AC_ARG_ENABLE(ipv6,
dnl     AC_HELP_STRING([--enable-ipv6], [Enable IPV6 support]),
dnl     [ac_cv_ipv6=$enableval], [ac_cv_ipv6="no"])

dnl AC_MSG_CHECKING([whether to enable IPv6 features])

dnl if test "$ac_cv_ipv6" = "yes" ; then
dnl         AC_DEFINE(IPV6, 1, [Use Ipv6 Support])
dnl         AC_MSG_RESULT([yes])
dnl else
dnl         AC_MSG_RESULT([no])
dnl fi

dnl Checks for programs.
AC_PROG_CC_C99
AS_IF([test "$ac_cv_prog_cc_c99" = "no"],
    [AC_MSG_ERROR([no suitable C99 compiler found. Aborting.])])
AC_PROG_LIBTOOL

dnl Checks for libraries.

dnl Checks for header files.
AC_HEADER_STDC

AC_CHECK_HEADERS(sys/poll.h, have_poll_sys_h=yes, have_sys_poll_h=no)

AC_CHECK_HEADERS(fcntl.h sys/time.h unistd.h strings.h)

dnl Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_SIZE_T
AC_HEADER_TIME
AC_STRUCT_TM

dnl Checks for library functions.
AC_TYPE_SIGNAL
AC_FUNC_STRFTIME

dnl check for yacc
AC_PROG_INSTALL
AC_PROG_YACC

dnl check for lexx
AM_PROG_LEX

dnl check if we need -lsocket or -lnsl
ETR_SOCKET_NSL

AC_CHECK_FUNCS(inet_aton inet_pton socket strdup strstr)

dnl Check if we can use gethostbyname2 for ipv6
AC_CHECK_FUNCS(gethostbyname gethostbyname2)

dnl AIX fun
AC_C_BIGENDIAN

AC_CHECK_SIZEOF(int)
AC_CHECK_SIZEOF(short)
AC_CHECK_SIZEOF(long)


AH_BOTTOM([
#if SIZEOF_INT==4
typedef signed int int32;
typedef unsigned int uint32;
#elif SIZEOF_LONG==4
typedef signed long int32;
typedef unsigned long uint32;
#else
#  error "No 32-bit integer type!"
#endif

#if SIZEOF_SHORT!=2
#  error "Your short int data type is not 2 bytes: hopm (firedns) is not going to work for you."
#endif
])

AC_CONFIG_SUBDIRS(src/libopm)

dnl This comes last because configure won't actually work with -Werror in
dnl the CFLAGS
AC_ARG_WITH(werror,
    AC_HELP_STRING([--with-werror],
    [use -Werror to abort compilation on any warning]),
    [CFLAGS="$CFLAGS -Werror"])

AC_OUTPUT(Makefile src/Makefile)


echo "##############################################################################"
echo "Everything is now configured, but you can find some more (infrequently"
echo "changed) options in options.h.  To compile HOPM now, just type make.  It"
echo "requires GNU Make, which may be installed as gmake on your system."
echo 
echo "hopm will be installed in ${prefix}.  To change this, run:"
echo "   ./configure --prefix=DIRECTORY"
echo "##############################################################################"
