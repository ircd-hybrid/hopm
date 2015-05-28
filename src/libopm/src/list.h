#ifndef LIST_H
#define LIST_H


/*  Copyright (C) 2002 by the past and present ircd coders, and others.
 *   Adapted from Hybrid7 DLINK macros
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
/* End Copyright */

extern OPM_NODE_T *libopm_node_create(void *);
extern OPM_LIST_T *libopm_list_create(void);

extern OPM_NODE_T *libopm_list_add(OPM_LIST_T *, OPM_NODE_T *);
extern OPM_NODE_T *libopm_list_remove(OPM_LIST_T *, OPM_NODE_T *);

extern void libopm_list_free(OPM_LIST_T *);
extern void libopm_node_free(OPM_NODE_T *);

#endif /* LIST_H */
