#ifndef OPM_COMMON_H
#define OPM_COMMON_H

typedef struct _libopm_node OPM_NODE_T;
typedef struct _libopm_list OPM_LIST_T;


struct _libopm_list
{
  struct _libopm_node *head;
  struct _libopm_node *tail;
  int elements;
};

struct _libopm_node
{
  struct _libopm_node *next;
  struct _libopm_node *prev;
  void *data;
};
#endif /* OPM_COMMON_H */
