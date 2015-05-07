/*
 * Copyright (C) 2002-2003  Erik Fears
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

#include "setup.h"

#include "opm_common.h"
#include "list.h"
#include "memory.h"
#include "opm.h"


OPM_NODE_T *libopm_node_create(void *data)
{
   OPM_NODE_T *node = xcalloc(sizeof *node);
   node->next = NULL;
   node->prev = NULL;  
   node->data = (void *) data;

   return node;
}

OPM_LIST_T *libopm_list_create()
{
   OPM_LIST_T *list = xcalloc(sizeof *list);

   list->head = NULL;
   list->tail = NULL;

   list->elements = 0;

   return list;
}

OPM_NODE_T *libopm_list_add(OPM_LIST_T *list, OPM_NODE_T *node)
{

   if(list == NULL || node == NULL)
      return NULL;   

   if(list->tail == NULL)
   {
      list->head = node;
      list->tail = node;

      node->next = NULL;
      node->prev = NULL;
   }
   else
   {
      node->prev = list->tail;
      list->tail->next = node;
      list->tail = node;
      node->next = NULL;
   }

   list->elements++;
   return node;
}

OPM_NODE_T *libopm_list_remove(OPM_LIST_T *list, OPM_NODE_T *node)
{

   if(list == NULL || node == NULL)
      return NULL;

   if(node == list->head)
   {
      list->head = node->next;

      if(node->next)
         node->next->prev = NULL;
      else
         list->tail = NULL;
   }
   else if(node == list->tail)
   {
      list->tail = list->tail->prev;
      list->tail->next = NULL;
   }
   else
   {
      node->prev->next = node->next;
      node->next->prev = node->prev;
   }

   list->elements--;
   return node;
}

void libopm_list_free(OPM_LIST_T *list)
{
   MyFree(list);
}

void libopm_node_free(OPM_NODE_T *node)
{
   MyFree(node);
}
