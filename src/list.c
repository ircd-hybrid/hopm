/*
 *  Copyright (c) 2002-2003 Erik Fears
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

/*! \file list.c
 * \brief Maintains doubly-linked lists.
 * \version $Id$
 */

#include <stdlib.h>
#include <assert.h>

#include "memory.h"
#include "list.h"


node_t *
node_create(void *data)
{
  node_t *node = xcalloc(sizeof *node);

  node->data = data;

  return node;
}

list_t *
list_create(void)
{
  list_t *list = xcalloc(sizeof *list);
  return list;
}

node_t *
list_add(list_t *list, node_t *node)
{
  node->prev = NULL;
  node->next = list->head;

  /* Assumption: If list->tail != NULL, list->head != NULL */
  if (list->head)
    list->head->prev = node;
  else if (list->tail == NULL)
    list->tail = node;

  list->head = node;
  list->elements++;

  return node;
}

node_t *
list_remove(list_t *list, node_t *node)
{
  /* Assumption: If node->next == NULL, then list->tail == node
   *      and:   If node->prev == NULL, then list->head == node
   */
  if (node->next)
    node->next->prev = node->prev;
  else
  {
    assert(list->tail == node);
    list->tail = node->prev;
  }

  if (node->prev)
    node->prev->next = node->next;
  else
  {
    assert(list->head == node);
    list->head = node->next;
  }

  /* Set this to NULL does matter */
  node->next = node->prev = NULL;
  list->elements--;

  return node;
}

void
list_free(list_t *list)
{
  xfree(list);
}

void
node_free(node_t *node)
{
  xfree(node);
}
