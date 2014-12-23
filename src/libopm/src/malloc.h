#ifndef MALLOC_H
#define MALLOC_H

#include "setup.h"

#ifdef STDC_HEADERS
# include <stdlib.h>
#endif

#define MyMalloc(SIZE) libopm_MyMalloc(SIZE)
#define MyFree(X) libopm_MyFree((void **) &X)

void *libopm_MyMalloc(size_t bytes);
void libopm_MyFree(void **var);
extern void *libopm_xstrdup(const char *);

#endif /* MALLOC_H */
