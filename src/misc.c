/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2022 ircd-hybrid development team
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
#include <stdint.h>
#include <string.h>
#include <time.h>

#include "misc.h"


const char *
date_iso8601(uintmax_t lclock)
{
  static char buf[32];
  static uintmax_t lclock_last;

  if (lclock == 0)
    lclock = time(0);

  if (lclock_last != lclock)
  {
    lclock_last = lclock;
    strftime(buf, sizeof(buf), "%FT%T%z", localtime((time_t *)&lclock));
  }

  return buf;
}

/*
 * Split a uintmax_t into an English-language explanation of how
 * much time it represents, e.g. "2 hours 45 minutes 8 seconds"
 */
const char *
time_dissect(uintmax_t duration)
{
  static char buf[32];  /* 32 = sizeof("9999999999999999 days, 23:59:59") */
  unsigned int days = 0, hours = 0, minutes = 0, seconds = 0;

  while (duration >= 60 * 60 * 24)
  {
    duration -= 60 * 60 * 24;
    ++days;
  }

  while (duration >= 60 * 60)
  {
    duration -= 60 * 60;
    ++hours;
  }

  while (duration >= 60)
  {
    duration -= 60;
    ++minutes;
  }

  seconds = duration;

  snprintf(buf, sizeof(buf), "%u day%s, %02u:%02u:%02u",
           days, days == 1 ? "" : "s", hours, minutes, seconds);
  return buf;
}

const char *
stripws(char *txt)
{
  while (*txt == '\t' || *txt == ' ')
    ++txt;

  char *tmp = txt + strlen(txt) - 1;
  while (tmp >= txt && (*tmp == '\t' || *tmp == ' '))
    --tmp;

  *(tmp + 1) = '\0';

  return txt;
}
