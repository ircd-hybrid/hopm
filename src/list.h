#ifndef LIST_H
#define LIST_H


/*  Copyright (C) 2002 by the past and present ircd coders, and others.
 *   The following macros are adapted from Hybrid7 DLINK macros
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
 */

#define LIST_FOREACH(pos, head) for (pos = (head); pos != NULL; pos = pos->next)
#define LIST_FOREACH_SAFE(pos, n, head) for (pos = (head), n = pos ? pos->next : NULL; pos != NULL; pos = n, n = pos ? pos->next : NULL)
#define LIST_FOREACH_PREV(pos, head) for (pos = (head); pos != NULL; pos = pos->prev)
#define LIST_SIZE(list) list->elements
/* End Copyright/Hybrid Macros */


typedef struct _node node_t;
typedef struct _list list_t;

struct _list
{

   struct _node *head;
   struct _node *tail;

   int elements;
};

struct _node
{

   struct _node *next;
   struct _node *prev;

   void *data;
};



node_t *node_create(void *);
list_t *list_create(void);

node_t *list_add(list_t *, node_t *);
node_t *list_remove(list_t *, node_t *);

void list_free(list_t *);
void node_free(node_t *);

#endif /* LIST_H */
