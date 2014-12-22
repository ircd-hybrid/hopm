/* vim: set shiftwidth=3 softtabstop=3 expandtab: */ 

#ifndef OPM_H
#define OPM_H

/* Stuff to shut up warnings about rcsid being unused. */
#define USE_VAR(var)    static char sizeof##var = sizeof(sizeof##var) + sizeof(var)
/* RCS tag. */
#define RCSID(x)        static char rcsid[] = x; USE_VAR(rcsid);

#endif /* OPM_H */
