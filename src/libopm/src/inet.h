#ifndef INET_H 
#define INET_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#ifdef HAVE_FCNTL_H
# include <fcntl.h>
#endif
#include <sys/types.h>

#ifdef HAVE_SYS_POLL_H
# include <sys/poll.h>
#endif

#ifndef AF_INET6
# define AF_INET6 10
#endif

typedef struct _opm_sockaddr opm_sockaddr;
typedef struct _opm_inaddr opm_inaddr;

struct _opm_sockaddr {
        struct sockaddr_in sa4;
};

struct _opm_inaddr {
        struct in_addr in4;
};

#ifndef HAVE_INET_PTON
extern int inet_pton(int, const char *, void *);
#endif
#endif /* INET_H */
