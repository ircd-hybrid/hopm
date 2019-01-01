/*
 *  Copyright (c) 2002-2003 Erik Fears
 *  Copyright (c) 2014-2019 ircd-hybrid development team
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

#include "setup.h"

#include <stdlib.h>
#include <assert.h>

#include "opm_common.h"
#include "list.h"
#include "memory.h"


OPM_NODE_T *
libopm_node_create(void *data)
{
  OPM_NODE_T *node = libopm_calloc(sizeof *node);

  node->data = data;

  return node;
}

OPM_NODE_T *
libopm_list_add(OPM_LIST_T *list, OPM_NODE_T *node)
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

OPM_NODE_T *
libopm_list_remove(OPM_LIST_T *list, OPM_NODE_T *node)
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
libopm_node_free(OPM_NODE_T *node)
{
  libopm_free(node);
}
