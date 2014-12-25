/* vim: set shiftwidth=3 softtabstop=3 expandtab: */ 

/** \file opm.h
 *  \brief Main header for libopm.
 *  \author Erik Fears
 *  \version $Id$
 */

#ifndef OPM_H
#define OPM_H

#include "opm_common.h"

typedef struct  _OPM_CONFIG           OPM_CONFIG_T;
typedef struct  _OPM                  OPM_T;
typedef struct  _OPM_REMOTE           OPM_REMOTE_T;
typedef struct  _OPM_CALLBACK         OPM_CALLBACK_T;

typedef         int                   OPM_ERR_T;

typedef void OPM_CALLBACK_FUNC (OPM_T *, OPM_REMOTE_T *, int, void *);

struct _OPM_CALLBACK {
   OPM_CALLBACK_FUNC *func;
   void *data;
};

struct _OPM_CONFIG {
   void **vars;
};

struct _OPM {
   OPM_CONFIG_T *config;               /* Individual scanner configuration                           */
   OPM_LIST_T   *queue;                /* List of scans in the queue (not yet established)           */
   OPM_LIST_T   *scans;                /* List of scans (each scan containing a list of connections) */
   OPM_LIST_T   *protocols;            /* List of protocols this scanner handles                     */
   unsigned int  fd_use;               /* Number of file descriptors in use                          */

   OPM_CALLBACK_T *callbacks;          /* Scanner wide callbacks                                     */
};

struct _OPM_REMOTE {

   char                *ip;              /* Readable IP address                         */

   unsigned short int   port;            /* Port passed back on certain callbacks       */
   unsigned short int   protocol;        /* Protocol passed back on certain callbacks   */
   unsigned short int   bytes_read;      /* Bytes read passed back on certain callbacks */

   OPM_LIST_T           *protocols;      /* Remote specific protocols */

   void                 *data;           /* Arbitrary data that the client can point to for any purpose*/
};

OPM_T *opm_create(void);
void opm_free(OPM_T *);

OPM_REMOTE_T *opm_remote_create(const char *);
void opm_remote_free(OPM_REMOTE_T *);

OPM_ERR_T opm_config(OPM_T *, int, const void *);
OPM_ERR_T opm_scan(OPM_T *, OPM_REMOTE_T *);
void opm_end(OPM_T *, OPM_REMOTE_T *);
void opm_endscan(OPM_T *, OPM_REMOTE_T *);

OPM_ERR_T opm_addtype(OPM_T *, int, unsigned short int);
OPM_ERR_T opm_remote_addtype(OPM_REMOTE_T *, int, unsigned short int);
OPM_ERR_T opm_callback(OPM_T *, int, OPM_CALLBACK_FUNC *, void *);

void opm_cycle(OPM_T *);

size_t opm_active(OPM_T *);

#endif /* OPM_H */
