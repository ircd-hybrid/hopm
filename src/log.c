/* vim: set shiftwidth=3 softtabstop=3 expandtab: */ 

/*
Copyright (C) 2002  Erik Fears
 
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
 
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
 
You should have received a copy of the GNU General Public License
along with this program; if not, write to

      The Free Software Foundation, Inc.
      59 Temple Place - Suite 330
      Boston, MA  02111-1307, USA.
 
*/

#include "setup.h"

#include <stdio.h>
#include <errno.h>

#ifdef STDC_HEADERS
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#endif

#include <time.h>

#include "compat.h"
#include "config.h"
#include "extern.h"
#include "log.h"


FILE *logfile;
FILE *scanlogfile;

void log_open(char *filename)
{
   logfile = fopen(filename, "a");

   if(!logfile)
   {
      perror("Cannot open log file. Aborting.");
      exit(EXIT_FAILURE);
   }

}

void log_close(void)
{
   fclose(logfile);
}

void scanlog_open(char *filename)
{
   scanlogfile = fopen(filename, "a");

   if(!scanlogfile)
   {
      log_printf("Failed to open scan log file: %s", strerror(errno));
   }
}

void scanlog_close(void)
{
   if(scanlogfile)
      fclose(scanlogfile);
}

void log_printf(const char *data, ...)
{
   char data2[513];
   char buf_present[25];
   va_list arglist;
   time_t present;
   struct tm *tm_present;

   if(!OPT_DEBUG && !logfile)
      return;

   time(&present);
   tm_present = gmtime(&present);
   strftime(buf_present, sizeof(buf_present), "%b %d %H:%M:%S %Y", tm_present);

   va_start(arglist, data);
   vsnprintf(data2, 512, data, arglist);
   va_end(arglist);

   if(OPT_DEBUG)
   {
      fprintf(stderr, "[%s] %s\n", buf_present, data2);
   }
   else
   {
      fprintf(logfile, "[%s] %s\n", buf_present, data2);
      fflush(logfile);
   }
}

