#ifndef LIBOPM_H
#define LIBOPM_H

#include "config.h"
#include "inet.h"
#include "opm_common.h"
#include "opm.h"

#define CBLEN 5         /* Number of callback functions  */
#define READBUFLEN 128  /* Size of conn->readbuf         */
#define SENDBUFLEN 512  /* Size of sendbuffer in proxy.c */
#define LIBOPM_TLS_RECORD_SIZE 16384

typedef struct  _OPM_SCAN             OPM_SCAN_T;
typedef struct  _OPM_CONNECTION       OPM_CONNECTION_T;
typedef struct  _OPM_PROTOCOL_CONFIG  OPM_PROTOCOL_CONFIG_T;
typedef struct  _OPM_PROTOCOL         OPM_PROTOCOL_T;

/*
 * Types of hard coded proxy READ/WRITE functions which are
 * setup in a table in libopm.c
 */
typedef int OPM_PROXYWRITE_T (OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
typedef int OPM_PROXYREAD_T  (OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);

struct _OPM_SCAN
{
  opm_sockaddr         addr;           /* Address in byte order of remote client */
  OPM_REMOTE_T        *remote;         /* Pointed to the OPM_REMOTE_T for this scan, passed by client */
  OPM_LIST_T          *connections;    /* List of individual connections of this scan (1 for each protocol) */
};

struct _OPM_CONNECTION
{
  OPM_PROTOCOL_T     *protocol;        /* Pointer to specific protocol this connection handles */
  unsigned short int  port;            /* Some protocols have multiple ports, eg. HTTP */
  int                fd;               /* Allocated file descriptor, 0 if not yet allocated */
  unsigned short int bytes_read;       /* Bytes read so far in this connection */
  char               readbuf[READBUFLEN + 1]; /* 128 byte read buffer, anything over 128 is probably not of use */
  unsigned short int readlen;          /* Length of readbuf */
  unsigned short int state;            /* State of connection */
  time_t             creation;         /* When this connection was established */
  void *tls_handle;                    /* SSL structure created by SSL_new() */
};

struct _OPM_PROTOCOL_CONFIG
{
  OPM_PROTOCOL_T *type;                /* Protocol type */
  unsigned short int port;             /* Port to connect on */
};

struct _OPM_PROTOCOL
{
  int type;                            /* Protocol type */
  OPM_PROXYWRITE_T *write_function;    /* Write function handler for this protocol */
  OPM_PROXYREAD_T  *read_function;     /* Read function handler for this protocol */
  int use_tls;                         /* TLS/SSL-enabled protocol such as HTTPS */
};
#endif /* LIBOPM_H */
