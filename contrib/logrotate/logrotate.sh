#!/bin/sh

# This little snippet should periodically rotate your BOPM logs if you have
# nothing else better to do it for you.
#
# Once you have tested that it works, you can crontab it once a day like this:
#
# crontab -e
# 30 02 * * * /path/to/logrotate.sh >/dev/null 2>&1
#
# which will call it once per day at 02:30AM
#
# From: Andy Smith <grifferz@blitzed.org>

# Location of your logs (full path)
LOGDIR=~/bopm/var

# Location of PID file (full path)
PIDFILE=~/bopm/var/bopm.pid

# Names of the files to rotate
FILES="bopm.log scan.log"

# Program to use to create a new filename for the rotated logfile.  The new
# filename will be the original filename followed by a dash and then whatever
# this program outputs.  Normally you would use it to append a datestamp.
# This default corresponds to YYYYMMDD-HHMMSS.
APPENDPROG="date +%Y%m%d-%H%M%S"

# Program to use to compress the logfile after rotating it.  Set to the empty
# string ("") to disable compression.  Expects something like gzip or bzip2.
ZIPPROG="/bin/bzip2"

# Nothing configurable below here

APPEND="-$($APPENDPROG)"

if [ -f $PIDFILE ]; then
   PID=$(cat $PIDFILE)
   
   cd $LOGDIR
   if [ $? -ne 0 ]; then
      exit
   fi

   for F in $FILES; do
      if [ -f $F ]; then
         mv $F "$F$APPEND"
      fi
   done

   kill -USR1 $PID

   if [ ! -z $ZIPPROG ]; then
      for F in $FILES; do
         F="$F$APPEND"
         if [ -f $F ]; then
            $ZIPPROG $F
         fi
      done
   fi
else
   echo "BOPM doesn't appear to be running!"
fi
