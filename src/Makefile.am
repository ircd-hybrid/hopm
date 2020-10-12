SUBDIRS = libopm
bin_PROGRAMS = hopm

AM_CPPFLAGS = -DHOPM_PREFIX="\"$(prefix)\"" -DHOPM_ETCDIR="\"$(sysconfdir)\"" -DHOPM_LOGDIR="\"$(localstatedir)/log\"" -DHOPM_BINPATH="\"$(bindir)/hopm\""
AM_YFLAGS = -d

hopm_SOURCES = compat.c        \
               compat.h        \
               config-parser.y \
               config-lexer.l  \
               config.c        \
               config.h        \
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
               memory.c        \
               memory.h        \
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
               patricia.c      \
               patricia.h      \
               scan.c          \
               scan.h          \
               stats.c         \
               stats.h

hopm_LDADD = libopm/src/.libs/libopm.a @LIBOBJS@
