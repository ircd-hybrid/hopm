-- Noteworthy changes in version 1.1.11 (2021-??-??)
* The `irc::tls_disable_certificate_verification` configuration option
  has been implemented. Setting this to `yes` turns off verification of
  the remote peer's certificate.
  Turning off certificate verification is generally discouraged and should
  be done only for experimental purposes.


-- Noteworthy changes in version 1.1.10 (2021-01-30)
* Timers have been changed to use monotonic time instead of wall-clock time
* Fixed broken build with LibreSSL


-- Noteworthy changes in version 1.1.9 (2020-11-16)
* Implemented support for loading a user-provided private key and tls client
  certificate. The `irc::rsa_private_key_file`and `irc::tls_certificate_file`
  configuration directives have been added for this.
  As a side effect this now allows HOPM to use certificate fingerprints for
  NickServ authentication
* The `vhost` configuration directive found in the irc {} and scanner {} blocks
  has been renamed to `bind`


-- Noteworthy changes in version 1.1.8 (2020-07-05)
* Minimum supported OpenSSL version is 1.1.1 now
* Experimental TLS support for the irc client part has been implemented. We
  only do TLSv1.2 and higher
* The `irc::tls` and `irc::tls_hostname_verification` configuration directives
  have been added
* A possible out-of-bounds write in the irc parser logic has been fixed


-- Noteworthy changes in version 1.1.7 (2020-04-19)
* Fixed github issue #31: hopm attempts to open `stderr` for logging in
  non-debug/fork mode which can cause hopm to exit silently


-- Noteworthy changes in version 1.1.6 (2019-04-21)
* Fixed issue with ssh banner scans where hopm would test connections only
  against the `target_string` that's defined last in the scanner{} block
* Minimum supported OpenSSL version is 1.0.1f now


-- Noteworthy changes in version 1.1.5 (2018-10-14)
* The `:`, and `,` nickname delimiters work again
* Fixed a bug where the hopm process couldn't be restarted under certain
  conditions
* The hopm process can now be restarted from the command line via `kill -HUP`
* Added `--enable-efence` switch to allow easy linking with the
  electric fence memory debugger library
* Implemented proper support to kill users with vulnerable SSH versions by
  version announcement. Patch provided by falsovsky (Pedro de Oliveira). See
  `doc/reference.conf` for more information.
* Minimum supported OpenSSL version is 1.0.1d now


-- Noteworthy changes in version 1.1.4 (2017-04-05)
* IPv6 blacklist support has been implemented
* The `CHECK` command now accepts IPv6 addresses
* The negative cache has been rewritten to use latest Net::Patricia C sources
  and does support IPv6 now


-- Noteworthy changes in version 1.1.3 (2016-09-26)
* Allow inclusion of other configuration files in the main `hopm.conf` file.
  See `doc/reference.conf` for further information on how to use the new
  `.include` configuration directive.


-- Noteworthy changes in version 1.1.2 (2016-05-15)
* Fixed archaic bug which can cause the scanner to either detect nothing or to
  detect everything and therefore even kill legit clients


-- Noteworthy changes in version 1.1.1 (2016-01-03)
* Added `command_queue_size`, `command_interval`, and `command_timeout`,
  configuration directives to the options {} block. See `doc/reference.conf`
  for more information.
* Various updates to the `reference.conf`; added updated `connregex` directives
  for ircd-hybrid in conjunction with user mode `F` (far connect notices), and
  UnrealIRCd 4.0.0, which now uses a different format for connect notices


-- Noteworthy changes in version 1.1.0 (2015-08-07)
* `options::pidfile` and `options::scanlog` can now be relative pathnames
* Due to security reasons the `PROTOCOLS` command has been removed again


-- Noteworthy changes in version 1.1.0beta1 (2015-07-02)
* Added HTTPS support for SSL/TLS-enabled HTTP proxies which seem to be used
  quite a lot on IRC nowadays. LibreSSL or OpenSSL 0.9.8o and above is required
  for this to work.
* Added new `HTTPS` and `HTTPSPOST` protocol configuration directives to the
  scanner {} block


-- Noteworthy changes in version 1.0.8 (2015-06-25)
* Added `options::reconnectinterval` configuration option. See `doc/reference.conf`
  for more information.
* Added `options::dns_timeout` configuration option. See `doc/reference.conf`
  for more information.
* Further modernizations and cleanups to the build system
* HOPM now compiles with `-fstack-protector-strong` and `-fstack-protector`,
  respectively, depending on what the compiler supports
* Added `--enable-assert` switch to `./configure`. assert() statements are now
  disabled by default and can be enabled with `./configure --enable-assert`
* Added `--enable-warnings` switch to `./configure`, which enables various
  compiler warnings if supported by the compiler


-- Noteworthy changes in version 1.0.7 (2015-06-06)
* HOPM can now detect Dreamboxes with default root passwords
* Fixed bug where the configuration parser would report syntax errors with
  invalid line numbers when there are multi-line C-style comments in the
  config file


-- Noteworthy changes in version 1.0.6 (2015-05-27)
* HOPM now catches MikroTik HttpProxies


-- Noteworthy changes in version 1.0.5 (2015-05-04)
* Fixed bug where HOPM couldn't connect to the server specified in the irc {}
  block on some OS


-- Noteworthy changes in version 1.0.4 (2015-03-17)
* Log timestamp format is ISO8601 now
* Added `protocols` command which dumps a list of configured scanners and their
  associated protocols/ports to a channel


-- Noteworthy changes in version 1.0.3 (2015-01-28)
* Fixed bug where HOPM wouldn't try re-connecting to the server in case the
  connection got lost
* Added `irc::notice` configuration option


-- Noteworthy changes in version 1.0.2 (2015-01-12)
* Added `options::negcache_rebuild` configuration option
* Added basic IPv6 support allowing HOPM to bind and connect to IPv6 addresses


-- Noteworthy changes in version 1.0.1 (2015-01-06)
* Fixed build on OS X


-- Noteworthy changes in version 1.0.0 (2015-01-03)
* Minor stabilization and performance improvements


-- Noteworthy changes in version 1.0.0beta2 (2014-12-31)
* Added `irc::readtimeout` configuration option
* Worked towards IPv6 support
* Fixed `reference.conf` from causing syntax errors
* HOPM now uses poll() for I/O event notification instead of select()


-- Noteworthy changes in version 1.0.0beta1 (2014-12-25)
* **NOTE:**  this is the first release of the hybrid open proxy monitor (HOPM)
  fully based off the discontinued blitzed open proxy monitor (BOPM) 3.1.3
* Modernized and cleaned up build system
* Modernized the example configuration file. Removed/updated blacklist entries.
* The configuration parser now does support time and size units
* The configuration parser now does support c++ style comments
* Fixed a memory leak in conjunction with manual scans
* Fixed weird behaviour in the command parser
* Code hardening. Replaced occurences of strcpy/strcat with strlcpy/strlcat, etc.
* Various code cleanups and optimizations
* The `irc::away` configuration option is now optional
