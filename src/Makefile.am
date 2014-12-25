SUBDIRS = libopm .
bin_PROGRAMS = hopm

AM_CPPFLAGS = -DHOPM_ETCDIR="\"$(sysconfdir)\"" -DHOPM_LOGDIR="\"$(localstatedir)\""
AM_YFLAGS = -d

hopm_SOURCES = compat.c        \
               compat.h        \
               config.c        \
               config.h        \
               config-lexer.l  \
               config-parser.y \
               dnsbl.c         \
               dnsbl.h         \
               extern.h        \
               firedns.c       \
               firedns.h       \
               inet.c          \
               inet.h          \
               irc.c           \
               irc.h           \
               list.c          \
               list.h          \
               log.c           \
               log.h           \
               main.c          \
               main.h          \
               malloc.c        \
               malloc.h        \
               match.c         \
               match.h         \
               misc.c          \
               misc.h          \
               negcache.c      \
               negcache.h      \
               opercmd.c       \
               opercmd.h       \
               options.h       \
               patchlevel.h    \
               scan.c          \
               scan.h          \
               stats.c         \
               stats.h

hopm_LDADD = libopm/src/.libs/libopm.a @LIBOBJS@
