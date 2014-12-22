dnl Process this file with autoconf to produce a configure script.
AC_INIT(libopm, [0.1])
AC_CONFIG_SRCDIR(src/libopm.h)
AM_CONFIG_HEADER(src/setup.h)
AM_INIT_AUTOMAKE()
AC_PREFIX_DEFAULT([/usr/local/libopm])
AM_MAINTAINER_MODE

# for documentation purposes
DOX_DIR_HTML=api
DOX_DIR_LATEX=latex
DOX_DIR_MAN=man

AC_SUBST(DOX_DIR_HTML)
AC_SUBST(DOX_DIR_LATEX)
AC_SUBST(DOX_DIR_MAN)

AC_ARG_WITH(extra-fascism,
    AC_HELP_STRING([--with-extra-fascism],
    [add extra gcc3-specific warning flags]),
    [CFLAGS="$CFLAGS -g -O0 -W -Wall -Wfloat-equal -Wbad-function-cast -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wredundant-decls -Wnested-externs"])

dnl AC_ARG_WITH(faldo,
dnl     AC_HELP_STRING([--with-faldo],
dnl     [make some use of Nick Faldo]))

dnl Checks for programs.
AC_PROG_CC_C99
AS_IF([test "$ac_cv_prog_cc_c99" = "no"],
    [AC_MSG_ERROR([no suitable C99 compiler found. Aborting.])])
AC_PROG_LIBTOOL
AC_SUBST(LIBTOOL_DEPS)

dnl Checks for header files.
AC_HEADER_STDC

AC_CHECK_HEADERS(sys/poll.h, have_poll_sys_h=yes, have_sys_poll_h=no)

AC_CHECK_HEADERS(fcntl.h sys/time.h unistd.h strings.h)

dnl Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_SIZE_T
AC_HEADER_TIME

dnl if they want select() or they don't have poll() then we need to check
dnl that we actually have select()
if test "$have_sys_poll_h" = "no"; then
 AC_CHECK_FUNCS(select, have_select=yes, have_select=no)
 if test "$have_select" = "no"; then
   AC_MSG_ERROR([No select() implementation found])
 fi
fi

AC_CHECK_FUNCS(inet_aton inet_pton)

dnl Check if we can use gethostbyname2 for ipv6
AC_CHECK_FUNCS(gethostbyname gethostbyname2)

dnl AIX fun
AC_C_BIGENDIAN

AC_CHECK_FUNC(getaddrinfo, [], AC_SEARCH_LIBS(getaddrinfo, nsl))
AC_CHECK_FUNC(getnameinfo, [], AC_SEARCH_LIBS(getnameinfo, nsl))
AC_SEARCH_LIBS([socket],[socket],,[AC_MSG_ERROR([socket library not found])])

LTLIBOBJS=`echo "$LIB@&t@OBJS" |
           sed 's,\.[[^.]]* ,.lo ,g;s,\.[[^.]]*$,.lo,'`
AC_SUBST(LTLIBOBJS)

dnl This comes last because configure won't actually work with -Werror in
dnl the CFLAGS
AC_ARG_WITH(werror,
    AC_HELP_STRING([--with-werror],
    [use -Werror to abort compilation on any warning]),
    [CFLAGS="$CFLAGS -Werror"])

AC_OUTPUT(Makefile src/Makefile doc/Makefile doc/Doxyfile)

echo "##############################################################################"
echo "Everything is now configured.  To compile libopm now, just type make.  It"
echo "requires GNU Make, which may be installed as gmake on your system."
echo 
echo "libopm will be installed in ${prefix}.  To change this, run:"
echo "   ./configure --prefix=DIRECTORY"
echo 
echo "##############################################################################"
echo
