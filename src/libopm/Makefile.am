AUTOMAKE_OPTIONS = foreign

SUBDIRS = src doc

EXTRA_DIST = LICENSE

LIBTOOL_DEPS = @LIBTOOL_DEPS@
libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck

docs:
	-cd doc && $(MAKE) $(AM_MAKEFLAGS) $@
