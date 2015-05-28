#ifndef CONFIG_H
#define CONFIG_H

#include "libopm.h"

typedef struct _opm_config_hash OPM_CONFIG_HASH_T;

struct _opm_config_hash
{
  int key;
  int type;
};

extern void libopm_config_free(OPM_CONFIG_T *);
extern void *libopm_config(OPM_CONFIG_T *, unsigned int);
extern int libopm_config_gettype(int);
extern OPM_CONFIG_T *libopm_config_create(void);
extern OPM_ERR_T libopm_config_set(OPM_CONFIG_T *, unsigned int , const void *);
#endif /* CONFIG_H */
