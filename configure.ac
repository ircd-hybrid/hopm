dnl Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])

AC_INIT([hopm], [1.1.11], [bugs@ircd-hybrid.org])
AM_INIT_AUTOMAKE([1.16.5])
AM_MAINTAINER_MODE
AC_CONFIG_SRCDIR([src/opercmd.h])
AC_CONFIG_HEADERS([src/setup.h])
AC_CONFIG_MACRO_DIR([m4])
AC_PREFIX_DEFAULT([\${HOME}/hopm])

dnl Checks for programs.
AC_PROG_CC
LT_INIT

dnl check for yacc
AC_PROG_INSTALL
AC_PROG_YACC

dnl check for lexx
AC_PROG_LEX([noyywrap])

AX_GCC_STACK_PROTECT_CC
AX_GCC_STACK_PROTECT_LIB

AX_LIBRARY_NET
AX_ARG_OPENSSL
AX_ARG_ENABLE_ASSERT
AX_ARG_ENABLE_WARNINGS
AX_ARG_ENABLE_EFENCE

AC_CHECK_FUNCS([strlcpy strlcat])

AC_CONFIG_FILES([Makefile doc/Makefile src/Makefile src/libopm/Makefile src/libopm/src/Makefile])
AC_OUTPUT


echo "###############################################################################"
echo "Configuration complete.  Type make (or gmake on some *BSD machines) to compile."
echo 
echo "HOPM will be installed in ${prefix}.  To change this, run:"
echo "   ./configure --prefix=DIRECTORY"
echo "###############################################################################"
