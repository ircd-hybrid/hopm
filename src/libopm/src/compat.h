#ifndef COMPAT_H
#define COMPAT_H

#ifndef INADDR_NONE
#define INADDR_NONE 0xffffffff
#endif

#ifndef HAVE_INET_ATON
#undef inet_aton
#define inet_aton libopm_inet_aton
extern int libopm_inet_aton(const char *cp, struct in_addr *inp);
#endif

#ifndef HAVE_SNPRINTF
#undef snprintf
#define snprintf libopm_snprintf
#endif

#ifndef HAVE_VSNPRINTF
#undef vsnprintf
#define vsnprintf libopm_vsnprintf
#endif

#ifndef HAVE_INET_PTON
#undef inet_pton
#define inet_pton libopm_inet_pton
#endif

#endif
