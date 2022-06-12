HOPM 1.0.x:
  Michael Wobst <michael@wobst.at>
         - Project manager and main developer


BOPM 3.0.x:

  Erik Fears <strtok@blitzed.org>
         - Main layout/functionality
         - libopm library, and bopm interface
         - IRC parsing
         - config file parsing

  Andy Smith <grifferz@blitzed.org>
         - Operator command interface
         - dnsbl_report
         - Handles all the DNSBL fun!
         - Automake/Autoconf madness

  David Leadbeater <dg@blitzed.org>
         - Asynchronous DNS (firedns)
         - HTTP POST!

  The Hybrid Team
         - IRC match code
         - Whitespace/String parsing in config-parser.y

  Joshua Kwan
         - Minor fixes and cleanups for Debian/gcc3

  Christopher Bongaarts <cab@tc.umn.edu>
         - Portability fixes for Sun Forte compiler


BOPM 1.x - 2.x:

   Erik Fears <strtok@blitzed.org>
         - Main Developer

   Andy Smith <grifferz@blitzed.org>
         - Oper commands interface
         - Interface to DNSbl
         - Makefile trickery
         - Debugging
         - Evil bopchecker hack
         - Autoconfiscation (kekeke) & Automake
         - Solaris port (with thanks to Nathan Nieblas for resources)
         - Poking people with sticks until they did things

   David Leadbeater <dg@blitzed.org>
         - Developed perl script (see proxy-tools in Blitzed CVS repository) to
           test BOPM's support for scanning many clients at once

   Sotiris Tsimbonis <stsimb@irc.gr>
         - Added -c command line argument
         - Idea to make bopm set umode -h on oper
         - Mutliple DNSBL_TO idea

   Rob Levin <levin@openprojects.net>
         - PASSWORD config option
         - TYPE_LIST initial implementation
         - EXCLUDE config option

   Ben AKA locksmith <mmcgarve@insight.rr.com> (irc.lockchat.net)
         - Debugging assistance

   John Payne <jpayne@blitzed.org>
         - Ideas for more robust HTTP handling

   Jakub Jankowski <shasta@blitzed.org>
         - Some code tidying patches

   The Hybrid Team
         - String matching (match.[ch])

   Emre ERTUGAY <collide@tr.net>
         - TR-IRCD testing help

   Alex Wu <wu@wunix.org>
         - IRCu testing

   Harald Skoglund <harald@hekta.stud.iet.hist.no>
         - Option to configure directory for logfile, config, etc.

   Yusuf Iskenderoglu <uhc0@stud.uni-karlsruhe.de>
         - IPv6 support
         - Many other great ideas
