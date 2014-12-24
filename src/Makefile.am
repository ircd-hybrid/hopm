SUBDIRS = libopm .

bin_PROGRAMS = hopm

AM_CPPFLAGS = -DHOPM_ETCDIR="\"$(sysconfdir)\"" -DHOPM_LOGDIR="\"$(localstatedir)\""
AM_YFLAGS = -d

hopm_SOURCES = compat.c compat.h config-parser.y config-lexer.l config.c config.h \
    dnsbl.c dnsbl.h extern.h inet.c inet.h irc.c irc.h log.c log.h main.c match.c \
    match.h misc.c misc.h malloc.c malloc.h list.c list.h negcache.c negcache.h \
    opercmd.c opercmd.h options.h scan.c scan.h setup.h stats.c stats.h firedns.c \
	 firedns.h main.h

hopm_LDADD = libopm/src/.libs/libopm.a @LIBOBJS@
