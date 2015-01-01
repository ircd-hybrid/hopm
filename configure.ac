dnl Process this file with autoconf to produce a configure script.
AC_INIT([hopm], [1.0.0beta2], [bugs@ircd-hybrid.org])
AC_CONFIG_SRCDIR(src/opercmd.h)
AC_CONFIG_HEADER(src/setup.h)
AM_INIT_AUTOMAKE()
AC_PREFIX_DEFAULT([\${HOME}/hopm])
AM_MAINTAINER_MODE

dnl Checks for programs.
AC_PROG_CC_C99
AS_IF([test "$ac_cv_prog_cc_c99" = "no"],
    [AC_MSG_ERROR([no suitable C99 compiler found. Aborting.])])
AC_PROG_LIBTOOL

dnl check for yacc
AC_PROG_INSTALL
AC_PROG_YACC

dnl check for lexx
AM_PROG_LEX

dnl check if we need -lsocket or -lnsl
AC_SEARCH_LIBS([socket],[socket],,[AC_MSG_ERROR([socket library not found])])
AC_CHECK_FUNC(getaddrinfo, [], AC_SEARCH_LIBS(getaddrinfo, nsl))
AC_CHECK_FUNC(getnameinfo, [], AC_SEARCH_LIBS(getnameinfo, nsl))

AC_CHECK_FUNCS(strlcpy strlcat)

dnl AIX fun
AC_C_BIGENDIAN

AC_CONFIG_FILES(Makefile doc/Makefile src/Makefile src/libopm/Makefile src/libopm/src/Makefile)
AC_OUTPUT


echo "###############################################################################"
echo "Configuration complete.  Type make (or gmake on some *BSD machines) to compile."
echo 
echo "HOPM will be installed in ${prefix}.  To change this, run:"
echo "   ./configure --prefix=DIRECTORY"
echo "###############################################################################"
