HOPM
&middot;
[![Latest Github release](https://img.shields.io/github/v/tag/ircd-hybrid/hopm?color=425158&style=flat-square)](https://github.com/ircd-hybrid/hopm/tags)
[![Build status](https://img.shields.io/github/actions/workflow/status/ircd-hybrid/hopm/ci.yml?branch=1.1.x&color=425158&style=flat-square)](https://github.com/ircd-hybrid/ircd-hybrid/actions/workflows/ci.yml)
[![Coverity scan](https://img.shields.io/coverity/scan/ircd-hybrid-hopm?color=425158&style=flat-square)](https://scan.coverity.com/projects/ircd-hybrid-hopm)
=====
HOPM (Hybrid Open Proxy Monitor) is an open-proxy monitoring bot designed to
monitor an individual server (all servers on the network have to run their own
bot if the IRCd does not support the "far connect" user mode) with a local
operator {} block and monitor connections. When a client connects to a server,
HOPM will scan the connection for insecure proxies. Insecure proxies are
determined by attempting to connect the proxy back to another host (usually the
IRC server in question).

HOPM is written ground-up in C language and it is an improved fork of BOPM
(blitzed open proxy monitor), which is a concept derived from wgmon. It
improves on wgmon with HTTP support, faster scanning (it can scan clients
simultaneously), better layout (scalability) and DNSBL support.


## Requirements

* An IRCd, which presents connection notices in a format, which HOPM recognizes;

* A host with full connectivity for all the ports you wish to scan. i.e. is NOT
transparently proxied -- many domestic internet connections have port 80
transparently proxied and this produces completely unpredictable results,
sometimes as severe as 100% of clients being K:lined;

* A UNIX OS with GNU make, a C99 compiler, etc.;

* Permission from your users to portscan them for open proxies;

* For HTTPS proxy detection, a working LibreSSL/OpenSSL library is required.


## Compatibility

* Bahamut 2.0.x
* InspIRCd 3.5.x
* ircd-hybrid 8.2.x
* ircd-ratbox 3.0.x
* ircu 2.10.x
* ngIRCd 25
* UnrealIRCd 5.0.x

HOPM is easily suitable for any other IRCd with little modification (`connregex`
in `hopm.conf`). However, if an IRCd does not send IP addresses in a connection
notice, HOPM will not work.


## Command-line options

`-c <name>`     Configuration filename. By default, HOPM reads `hopm.conf`,
                `-c foo` will cause HOPM to read `foo.conf`. The primary use for
                this is to run multiple HOPM from one directory.

`-d`            Debug mode. HOPM will not fork and will write logs to `stderr`.
                Multiple `-d` increase debug level.


## Operator channel commands

`<bot> check <host> [scanner]`  Manually scans host for insecure proxies and
                                outputs all errors. If scanner is not given,
                                HOPM will scan on all scanners. NOTE: this will
                                not add a kline if it finds a proxy.

`<bot> stats`                   Outputs scan stats, uptime and connection count.

`<bot> fdstat`                  Outputs info about file descriptors in use.

Also, if several HOPM are present in one channel, they will all respond to `!all`,
for example `!all stats`.


## Rehashing HOPM

A `/quote KILL` on HOPM will cause the process to restart, rehashing the
configuration file and ending all queued scans. The same can be achieved
with `kill -HUP` from the command line.


## Logging

Once started, HOPM logs all significant events to a file called `hopm.log`,
which by default can be found at `$HOME/hopm/var/log/hopm.log`. There is also a
configuration option, `scanlog`, to log all proxy scans initiated, which can be
quite useful if you receive an abuse report related to portscanning.

These log files, especially the `scan.log`, can grow quite large. It is suggested
that you arrange for these files to be rotated periodically. You should send a
`USR1` signal to HOPM after moving its logfiles -- this will cause HOPM to
reopen those files.
