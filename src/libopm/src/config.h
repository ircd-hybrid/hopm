#ifndef CONFIG_H
#define CONFIG_H

#include "libopm.h"

typedef struct _opm_config_hash OPM_CONFIG_HASH_T;

struct _opm_config_hash
{
  int key;
  int type;
};

void libopm_config_free(OPM_CONFIG_T *);
void *libopm_config(OPM_CONFIG_T *, int);
int libopm_config_gettype(int);
OPM_CONFIG_T *libopm_config_create(void);
OPM_ERR_T libopm_config_set(OPM_CONFIG_T *, int , const void *);
#endif /* CONFIG_H */
