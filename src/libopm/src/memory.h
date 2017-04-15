#ifndef MALLOC_H
#define MALLOC_H

#define xcalloc(SIZE) libopm_xcalloc(SIZE)
#define MyFree(X) libopm_MyFree((void **) &X)

extern void *libopm_xcalloc(size_t bytes);
extern void libopm_MyFree(void **var);
extern void *libopm_xstrdup(const char *);

#endif /* MALLOC_H */
