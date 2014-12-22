#ifndef MALLOC_H
#define MALLOC_H

#include <stdlib.h>

#define MyFree(X) _MyFree((void **) &X)

extern void *MyMalloc(size_t bytes);
extern void _MyFree(void **var);
char *DupString(const char *y);

#endif /* MALLOC_H */
