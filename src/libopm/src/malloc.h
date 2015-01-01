#ifndef MALLOC_H
#define MALLOC_H

#include "setup.h"

#include <stdlib.h>

#define xcalloc(SIZE) libopm_xcalloc(SIZE)
#define MyFree(X) libopm_MyFree((void **) &X)

void *libopm_xcalloc(size_t bytes);
void libopm_MyFree(void **var);
extern void *libopm_xstrdup(const char *);

#endif /* MALLOC_H */
