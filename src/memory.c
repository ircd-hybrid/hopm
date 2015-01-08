/*
 * Copyright (C) 2002  Erik Fears
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to
 *
 *       The Free Software Foundation, Inc.
 *       59 Temple Place - Suite 330
 *       Boston, MA  02111-1307, USA.
 *
 *
 */

#include <malloc.h>
#include <assert.h>
#include <string.h>
#include "malloc.h"


/* xcalloc
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

void *xcalloc(size_t bytes)
{
   void *ret = calloc(1, bytes);
   assert(ret);

   return ret;
}



/*  MyFree
 *
 *  Free memory allocated with xcalloc
 *
 *  Parameters:
 *     var: pointer to memory to free
 *     
 *  Return:
 *     None
 */

void _MyFree(void **var)
{
   assert(var != NULL);

   if(*var != NULL)
      free(*var);
   *var = NULL;
}

void *
xstrdup(const char *s)
{
  void *ret = malloc(strlen(s) + 1);

  assert(ret);
  strcpy(ret, s);

  return ret;
}
