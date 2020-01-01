/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2020 ircd-hybrid development team
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
#include <assert.h>
#include <string.h>

#include "memory.h"


/* libopm_calloc
 *
 *   A wrapper function for malloc(), for catching memory issues
 *   and error handling.
 *
 * Parameters
 *    bytes: amount in bytes to allocate
 *
 * Return:
 *    Pointer to allocated memory
 */
void *
libopm_calloc(size_t bytes)
{
   void *ret = calloc(1, bytes);
   assert(ret);

   return ret;
}

/* libopm_free
 *
 *  Free memory allocated with xcalloc
 *
 *  Parameters:
 *     var: pointer to memory to free
 *
 *  Return:
 *     None
 */
void
libopm_free(void *ptr)
{
  free(ptr);
}

void *
libopm_strdup(const char *s)
{
  void *ret = malloc(strlen(s) + 1);

  assert(ret);
  strcpy(ret, s);

  return ret;
}
