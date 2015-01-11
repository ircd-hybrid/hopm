#ifndef MALLOC_H
#define MALLOC_H

#define MyFree(X) _MyFree((void **) &X)

extern void *xcalloc(size_t bytes);
extern void _MyFree(void **var);
extern void *xstrdup(const char *);

#endif /* MALLOC_H */
