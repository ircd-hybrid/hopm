dnl Process this file with autoconf to produce a configure script.
AC_INIT(libopm, [0.1])
AC_CONFIG_SRCDIR(src/libopm.h)
AC_CONFIG_HEADER(src/setup.h)
AM_INIT_AUTOMAKE()
AC_PREFIX_DEFAULT([/usr/local/libopm])
AM_MAINTAINER_MODE

dnl Checks for programs.
AC_PROG_CC_C99
AS_IF([test "$ac_cv_prog_cc_c99" = "no"],
    [AC_MSG_ERROR([no suitable C99 compiler found. Aborting.])])
AC_PROG_LIBTOOL
AC_SUBST(LIBTOOL_DEPS)

dnl Checks for header files.
AC_CHECK_HEADERS(sys/poll.h, have_poll_sys_h=yes, have_sys_poll_h=no)

AC_CHECK_HEADERS(fcntl.h sys/time.h unistd.h)

dnl Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_TIME

dnl if they want select() or they don't have poll() then we need to check
dnl that we actually have select()
if test "$have_sys_poll_h" = "no"; then
 AC_CHECK_FUNCS(select, have_select=yes, have_select=no)
 if test "$have_select" = "no"; then
   AC_MSG_ERROR([No select() implementation found])
 fi
fi

dnl AIX fun
AC_C_BIGENDIAN

AC_CHECK_FUNC(getaddrinfo, [], AC_SEARCH_LIBS(getaddrinfo, nsl))
AC_CHECK_FUNC(getnameinfo, [], AC_SEARCH_LIBS(getnameinfo, nsl))
AC_SEARCH_LIBS([socket],[socket],,[AC_MSG_ERROR([socket library not found])])

LTLIBOBJS=`echo "$LIB@&t@OBJS" |
           sed 's,\.[[^.]]* ,.lo ,g;s,\.[[^.]]*$,.lo,'`
AC_SUBST(LTLIBOBJS)

AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT
