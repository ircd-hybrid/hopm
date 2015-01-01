#ifndef INET_H 
#define INET_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <fcntl.h>
#include <sys/types.h>

typedef struct _opm_sockaddr opm_sockaddr;
typedef struct _opm_inaddr opm_inaddr;

struct _opm_sockaddr {
        struct sockaddr_in sa4;
};

struct _opm_inaddr {
        struct in_addr in4;
};

#endif /* INET_H */
