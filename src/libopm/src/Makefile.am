lib_LTLIBRARIES = libopm.la

libopm_la_SOURCES = compat.c compat.h config.c config.h inet.c inet.h \
    libopm.c libopm.h list.c list.h malloc.c malloc.h opm_common.h \
    opm_error.h opm.h opm_types.h proxy.c proxy.h setup.h

libopm_la_LIBADD = @LTLIBOBJS@

noinst_PROGRAMS = test test_debug
test_SOURCES = test.c
test_LDADD = libopm.la compat.o @LIBOBJS@

# An easier-to-debug version of test

test_debug_SOURCES = test.c
test_debug_LDADD = libopm.la compat.o @LIBOBJS@
test_debug_LDFLAGS = -static
