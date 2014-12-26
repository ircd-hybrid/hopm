SUBDIRS = libopm .
bin_PROGRAMS = hopm

AM_CPPFLAGS = -DHOPM_ETCDIR="\"$(sysconfdir)\"" -DHOPM_LOGDIR="\"$(localstatedir)\""
AM_YFLAGS = -d

hopm_SOURCES = compat.c        \
               compat.h        \
               config.c        \
               config.h        \
               config-parser.y \
               config-lexer.l  \
               dnsbl.c         \
               dnsbl.h         \
               extern.h        \
               firedns.c       \
               firedns.h       \
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
