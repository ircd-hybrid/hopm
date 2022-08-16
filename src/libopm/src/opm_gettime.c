/*
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

#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#include "opm_gettime.h"

uintmax_t
opm_gettime(void)
{
  struct timespec ts;

#ifdef CLOCK_MONOTONIC_RAW
  if (clock_gettime(CLOCK_MONOTONIC_RAW, &ts) == 0)
#elif CLOCK_MONOTONIC
  if (clock_gettime(CLOCK_MONOTONIC, &ts) == 0)
#else
  if (clock_gettime(CLOCK_REALTIME, &ts) == 0)
#endif
    return ts.tv_sec;

  exit(EXIT_FAILURE);
  return -1;
}
