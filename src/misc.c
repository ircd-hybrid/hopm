/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2017 ircd-hybrid development team
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
#include <string.h>
#include <time.h>
#include <assert.h>

#include "misc.h"


const char *
date_iso8601(time_t lclock)
{
  static char buf[32];
  static time_t lclock_last;

  if (!lclock)
    lclock = time(0);

  if (lclock_last != lclock)
  {
    lclock_last = lclock;
    strftime(buf, sizeof(buf), "%FT%T%z", localtime(&lclock));
  }

  return buf;
}

/*
 * Split a time_t into an English-language explanation of how
 * much time it represents, e.g. "2 hours 45 minutes 8 seconds"
 */
const char *
time_dissect(time_t duration)
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

const int 
format_reverse_inet(const struct in_addr* addr, char *buf, size_t buf_size, const char * suffix) {
  unsigned char a, b, c, d;
  d = (unsigned char)(addr->s_addr >> 24) & 0xFF;
  c = (unsigned char)(addr->s_addr >> 16) & 0xFF;
  b = (unsigned char)(addr->s_addr >>  8) & 0xFF;
  a = (unsigned char) addr->s_addr & 0xFF;
#ifdef WORDS_BIGENDIAN
  snprintf(buf, sizeof(buf), "%d.%d.%d.%d.%s", a, b, c, d, suffix);
#else
  snprintf(buf, buf_size, "%d.%d.%d.%d.%s", d, c, b, a, suffix);
#endif
  return 0;
}

const int 
format_reverse_inet6(const struct in6_addr* addr, char *buf, size_t buf_size, const char * suffix) {
  char a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
       a11, a12, a13, a14, a15, a16, a17, a18, a19,
       a20, a21, a22, a23, a24, a25, a26, a27, a28,
       a29, a30, a31;
  a0 = (addr->s6_addr[15]) & 0x0F;
  a1 = (addr->s6_addr[15] >> 4) & 0x0F;
  a2 = (addr->s6_addr[14]) & 0x0F;
  a3 = (addr->s6_addr[14] >> 4) & 0x0F;
  a4 = (addr->s6_addr[13]) & 0x0F;
  a5 = (addr->s6_addr[13] >> 4) & 0x0F;
  a6 = (addr->s6_addr[12]) & 0x0F;
  a7 = (addr->s6_addr[12] >> 4) & 0x0F;
  a8 = (addr->s6_addr[11]) & 0x0F;
  a9 = (addr->s6_addr[11] >> 4) & 0x0F;
  a10 = (addr->s6_addr[10]) & 0x0F;
  a11 = (addr->s6_addr[10] >> 4) & 0x0F;
  a12 = (addr->s6_addr[9]) & 0x0F;
  a13 = (addr->s6_addr[9] >> 4) & 0x0F;
  a14 = (addr->s6_addr[8]) & 0x0F;
  a15 = (addr->s6_addr[8] >> 4) & 0x0F;
  a16 = (addr->s6_addr[7]) & 0x0F;
  a17 = (addr->s6_addr[7] >> 4) & 0x0F;
  a18 = (addr->s6_addr[6]) & 0x0F;
  a19 = (addr->s6_addr[6] >> 4) & 0x0F;
  a20 = (addr->s6_addr[5]) & 0x0F;
  a21 = (addr->s6_addr[5] >> 4) & 0x0F;
  a22 = (addr->s6_addr[4]) & 0x0F;
  a23 = (addr->s6_addr[4] >> 4) & 0x0F;
  a24 = (addr->s6_addr[3]) & 0x0F;
  a25 = (addr->s6_addr[3] >> 4) & 0x0F;
  a26 = (addr->s6_addr[2]) & 0x0F;
  a27 = (addr->s6_addr[2] >> 4) & 0x0F;
  a28 = (addr->s6_addr[1]) & 0x0F;
  a29 = (addr->s6_addr[1] >> 4) & 0x0F;
  a30 = (addr->s6_addr[0]) & 0x0F;
  a31 = (addr->s6_addr[0] >> 4) & 0x0F;
#ifdef WORDS_BIGENDIAN
  snprintf(buf, sizeof(buf), "%c.%c.%c.%c.%s", a, b, c, d, suffix);
           "%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%s'",
           a31, a30, a29, a28, a27, a26, a25, a24, a23, a22, a21, a20, a19, a18, a17, a16, a15, a14, a13, a12, a11, a10,
           a9, a8, a7, a6, a5, a4, a3, a2, a1, a0, suffix);
#else
  snprintf(buf, buf_size,
           "%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%s'",
           a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23,
           a24, a25, a26, a27, a28, a29, a30, a31, suffix);
#endif
  return 0;
}
