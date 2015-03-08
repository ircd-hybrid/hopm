/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2015 ircd-hybrid development team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 *  USA
 */

#include "setup.h"

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>

#include "compat.h"
#include "config.h"
#include "log.h"
#include "main.h"


FILE *logfile;
FILE *scanlogfile;

void
log_open(const char *filename)
{
  logfile = fopen(filename, "a");

  if (logfile == NULL)
  {
    perror("Cannot open log file. Aborting.");
    exit(EXIT_FAILURE);
  }
}

void
log_close(void)
{
  fclose(logfile);
}

void
scanlog_open(const char *filename)
{
  scanlogfile = fopen(filename, "a");

  if (scanlogfile == NULL)
    log_printf("Failed to open scan log file: %s", strerror(errno));
}

void
scanlog_close(void)
{
  if (scanlogfile)
    fclose(scanlogfile);
}

void
log_printf(const char *data, ...)
{
  char data2[513];
  char buf_present[25];
  va_list arglist;
  time_t present = 0;

  if (OPT_DEBUG == 0 && logfile == NULL)
    return;

  time(&present);
  strftime(buf_present, sizeof(buf_present), "%FT%H:%M:%S%z", localtime(&present));

  va_start(arglist, data);
  vsnprintf(data2, 512, data, arglist);
  va_end(arglist);

  if (OPT_DEBUG)
    fprintf(stderr, "[%s] %s\n", buf_present, data2);
  else
  {
    fprintf(logfile, "[%s] %s\n", buf_present, data2);
    fflush(logfile);
  }
}
